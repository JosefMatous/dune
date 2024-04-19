//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: a32a360803d2031b1914d47c361e742b                            *
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
    msg.setTimeStamp(0.46522442288548915);
    msg.setSource(40403U);
    msg.setSourceEntity(88U);
    msg.setDestination(32832U);
    msg.setDestinationEntity(47U);
    msg.state = 65U;
    msg.flags = 86U;
    msg.description.assign("QDUYXAJUTZUGRFXMGTAILSWFNPDDFSJIACILWMUOMKDKIBAGAJAKXVESOFDE");

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
    msg.setTimeStamp(0.93047045619584);
    msg.setSource(3817U);
    msg.setSourceEntity(197U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(208U);
    msg.state = 59U;
    msg.flags = 245U;
    msg.description.assign("JFPAAKTFGFSYXKXIJPKVQFRCKTJCVQMYJDQMOVKOGMTGEPCLXZVQBWGZVEDXHJFKTQKLXWNMGMDUQTSLENUUDWOZYHBDNSHFHXUYSWLPAQDHISUUPTVIDATZHNNZZRBM");

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
    msg.setTimeStamp(0.7554415766388719);
    msg.setSource(57822U);
    msg.setSourceEntity(141U);
    msg.setDestination(58277U);
    msg.setDestinationEntity(51U);
    msg.state = 94U;
    msg.flags = 26U;
    msg.description.assign("GKRLFRRMSNPJASYHYKEMMLOXVLSRGNKOSMHCKZEYBNAGBRTLEHQUYJGTAURPSQAXXOCAGLSQUIBHUQNRDJEQVFYJQYPTSAWZPMLOIXTAIFZCXLSBVDWSWPRBTCXEUVCYIMOGMCTGBHUJDDUSZFCBDICJEKBINVIFETLKORHWFHHNLHBODNPKMZPUZZFQWGUYJKHYWFXZQGQDVCRJOOWWNM");

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
    msg.setTimeStamp(0.1535351945550889);
    msg.setSource(62574U);
    msg.setSourceEntity(52U);
    msg.setDestination(32147U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.31284321819449257);
    msg.setSource(38068U);
    msg.setSourceEntity(69U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.0762202961148627);
    msg.setSource(19591U);
    msg.setSourceEntity(161U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.0618256243999018);
    msg.setSource(45568U);
    msg.setSourceEntity(176U);
    msg.setDestination(34024U);
    msg.setDestinationEntity(57U);
    msg.id = 116U;
    msg.label.assign("RLFZAVWFRPRRBOUHSZHBMHCOMTTIEAWUFDPCOGSKGZXTCADVSBBYAWGMJXAPRUYCEBKNHUGUSNSILWGPFLBJZK");
    msg.component.assign("KQLSWETKRXJIMAZBNARPEYDMQGQTLDYNAIBVWEKRJBHJNKAGQNGLVVWMMBADWWMSFYVUQZJYGEOFQVTIFTMGHCEWZQPOQXCFOSHEMRXJTXBIKFVYHXIOPYTHXWEBDYCOMQLXZKVTLIOVLZHJDSPGARKDHNRCKFIPAPAWNMJRELXYJOFESIWSNLPTQNUDLVSJCGIDZUCGBOZ");
    msg.act_time = 52418U;
    msg.deact_time = 30023U;

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
    msg.setTimeStamp(0.05799141560267995);
    msg.setSource(24835U);
    msg.setSourceEntity(30U);
    msg.setDestination(60007U);
    msg.setDestinationEntity(237U);
    msg.id = 41U;
    msg.label.assign("UDUXBFIWGLTPXBXLNCBMQFGBTPVBECKPLRYNHCNQQKPDAFCWVPTFKNJHKUCGDIGRRCGYHZJYAXNFYZTBHMOXFBCKMTEQWMALXHJXFRSHOGVMAKSRQSOO");
    msg.component.assign("CTZHSAGZXBRVHSDOYZADOFNBZBMCNEUACURULHFDSLOMVSWLZITSWECOJHCJGOAMYQXFYWRWLCXKJTXEPEPCTKENMQYDZRPUIMMTQLYNQJWPYZCFNUBGFPFRXBKKZFDGQPDQGSKVNSATKXVPZIJWEJSIALGHWOIYTRQNUBQCLCETREYJHPOVHLBHJWYLVKDDJWUKVIGVKXVYFMMXJAMBPWNVRISOGUAROZGSTHXIIETKNQBDXAUEI");
    msg.act_time = 46367U;
    msg.deact_time = 50274U;

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
    msg.setTimeStamp(0.13684700340806766);
    msg.setSource(60744U);
    msg.setSourceEntity(134U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(198U);
    msg.id = 250U;
    msg.label.assign("OPBXWABSYCBBSIZKNRKNMWRDCTNKKCMUIGPIFVVQUXJWLUYQSXSMLITSOAODZAIREMPTONFMIJANMIPGLVDWAOGRUDGQYPNFYCGFUWMZBRRRDUDLDPWVFEBELPJIOZBI");
    msg.component.assign("VQWMRHWIKNMEOAZJDXAMGOASAATFTWNPOSUXCZHNEEVTYFXCLKCDRGYYUEUBKSWRKLMPAXTOQXBISDRFQQTDAFVMQHHTHUPIPGHEHMEVPFZAJOSTSQSYBIRBJPMWUJCELLIXPSTRFYCGELOGGOVBDXYJZWTSVZBGPXLHGNVKOPRDGKMZBQBAJCEFDEIZWQQLROGXMKYJZAMPULJNZJHNUUYLNNOBHYWTNRCFUCZDJKRIVIISCLVQ");
    msg.act_time = 34534U;
    msg.deact_time = 27636U;

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
    msg.setTimeStamp(0.8809255199039552);
    msg.setSource(48761U);
    msg.setSourceEntity(112U);
    msg.setDestination(1349U);
    msg.setDestinationEntity(94U);
    msg.id = 110U;

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
    msg.setTimeStamp(0.5706771419524448);
    msg.setSource(58335U);
    msg.setSourceEntity(243U);
    msg.setDestination(15607U);
    msg.setDestinationEntity(82U);
    msg.id = 14U;

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
    msg.setTimeStamp(0.10728598261003919);
    msg.setSource(4952U);
    msg.setSourceEntity(132U);
    msg.setDestination(65047U);
    msg.setDestinationEntity(110U);
    msg.id = 165U;

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
    msg.setTimeStamp(0.03618756488326291);
    msg.setSource(33942U);
    msg.setSourceEntity(212U);
    msg.setDestination(38939U);
    msg.setDestinationEntity(176U);
    msg.op = 229U;
    msg.list.assign("OXRNWEQTKTLZGJMOIEROUWM");

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
    msg.setTimeStamp(0.552171214730767);
    msg.setSource(14888U);
    msg.setSourceEntity(169U);
    msg.setDestination(21460U);
    msg.setDestinationEntity(181U);
    msg.op = 144U;
    msg.list.assign("ALDHPGWSJRFQNUUIAYLEOBGLEPJIWRBFKKNPOZIPYVEMZTJUSHVSTTICOGKKFBVNZWLXOAFWJWUVNNDOTBQALRZAYEDRIXUUQ");

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
    msg.setTimeStamp(0.4787932707675885);
    msg.setSource(38539U);
    msg.setSourceEntity(53U);
    msg.setDestination(5914U);
    msg.setDestinationEntity(73U);
    msg.op = 178U;
    msg.list.assign("RMRQRMKIGGFODNCDZJAONFUWHAAABDZRFBSXWAEYCGJCATDMEYCUUYTPZXNPIWKUVGQKREREKSHVXFMYAEUGWCLXQMLZOYLCKSBQOHXNQFPRSIWMTZ");

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
    msg.setTimeStamp(0.003057699870198216);
    msg.setSource(57456U);
    msg.setSourceEntity(47U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(221U);
    msg.value = 102U;

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
    msg.setTimeStamp(0.9238682664018886);
    msg.setSource(43067U);
    msg.setSourceEntity(121U);
    msg.setDestination(60068U);
    msg.setDestinationEntity(133U);
    msg.value = 171U;

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
    msg.setTimeStamp(0.0034373423290361416);
    msg.setSource(5130U);
    msg.setSourceEntity(252U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(28U);
    msg.value = 161U;

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
    msg.setTimeStamp(0.6950267951053839);
    msg.setSource(42300U);
    msg.setSourceEntity(48U);
    msg.setDestination(62497U);
    msg.setDestinationEntity(0U);
    msg.consumer.assign("CMWIZYRDDSVDSURRGBNTUEXTGAZGWZKAINNEOMFTXABGVZMCHUQYQRLCGRGYZCEXGLSFQURLJCUWEPZMIHHKOTJPHJBSMDKG");
    msg.message_id = 23478U;

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
    msg.setTimeStamp(0.5057152694659458);
    msg.setSource(51958U);
    msg.setSourceEntity(15U);
    msg.setDestination(11458U);
    msg.setDestinationEntity(126U);
    msg.consumer.assign("HUQNTMFWUJIOYXKPDJZLVNJNDXYZXIHAWCGCOQRWHYHXPWXASFLRUMALPGWOHKCHLCYECFRQSMSYTSZKTICGPKBLDEBIFUPJVNGXTTQJMJONUWDULDKVEPKIAZHIQVTIZOOBNNNUMBJTASMDDFLVTQNLAZMRBYYSGGGEOIPUXWXPRZABQSOYGEZODJDJFRZVUIJRKKVMCSNSMOAGCRYLCFPETQLAWZRAVEVSBRVGKWHUQEXETHKQWBFPIMHE");
    msg.message_id = 38028U;

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
    msg.setTimeStamp(0.4621583655950485);
    msg.setSource(24398U);
    msg.setSourceEntity(173U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(138U);
    msg.consumer.assign("PDZMXRNJKLIAVWQRWFSTKCZHTTRGLBARJMWIALEKJICMUBEBCIXYYQNSJTADUOVONGXDSVPZFNUZKMEWWYRAKXEFQPBWPEGSAWNMSQFICGJZDITOGOYOMQHJFHLURPPPMKESBVAXGYPQNDZCTHTWWCNQILUNFFMTAKDCPYCUEGAVTESKXRCGJOIJOJQJYZBIRUZKNHXDKDSFZLULHIOZUHVHFEHUXQVVTBLQBYHXLYBSEGGMOOFVAYDXBR");
    msg.message_id = 11054U;

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
    msg.setTimeStamp(0.46141569053496145);
    msg.setSource(30817U);
    msg.setSourceEntity(21U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(81U);
    msg.type = 168U;

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
    msg.setTimeStamp(0.8398231789372029);
    msg.setSource(25061U);
    msg.setSourceEntity(216U);
    msg.setDestination(37489U);
    msg.setDestinationEntity(249U);
    msg.type = 168U;

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
    msg.setTimeStamp(0.939363512112533);
    msg.setSource(53490U);
    msg.setSourceEntity(45U);
    msg.setDestination(25157U);
    msg.setDestinationEntity(144U);
    msg.type = 91U;

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
    msg.setTimeStamp(0.6334990654787046);
    msg.setSource(63890U);
    msg.setSourceEntity(72U);
    msg.setDestination(4320U);
    msg.setDestinationEntity(121U);
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
    msg.setTimeStamp(0.7966350288660492);
    msg.setSource(51016U);
    msg.setSourceEntity(179U);
    msg.setDestination(56093U);
    msg.setDestinationEntity(38U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.32126572430130296);
    msg.setSource(4050U);
    msg.setSourceEntity(109U);
    msg.setDestination(6621U);
    msg.setDestinationEntity(112U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.6167428181686373);
    msg.setSource(9764U);
    msg.setSourceEntity(58U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(32U);
    msg.total_steps = 90U;
    msg.step_number = 125U;
    msg.step.assign("FLWXZIHNFYUZIFRYZOAJTRPKOXGBDREZLFTTO");
    msg.flags = 187U;

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
    msg.setTimeStamp(0.24476697135573888);
    msg.setSource(35014U);
    msg.setSourceEntity(112U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(189U);
    msg.total_steps = 114U;
    msg.step_number = 141U;
    msg.step.assign("CDAULNWEBXSBEZLFJKVHQNOMLDWNNNOIZVFHQALYPFZGGXFHEKKNTDSVDDARUNIVJBMGEKETXRHAGNPQPXQMCYTRFEPZJFWKQGEIPCMDBXSYKCSUZEJYTQAGPZOGGORFWRGALEBUTDHZQQMIOTYHKSZUSHLYXCUYHZOJXIC");
    msg.flags = 177U;

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
    msg.setTimeStamp(0.12142633880422493);
    msg.setSource(5232U);
    msg.setSourceEntity(190U);
    msg.setDestination(44959U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 165U;
    msg.step_number = 133U;
    msg.step.assign("YCPSEPVSVCXYYITMTRDDFQCUNUGXTSVIJAKSYQLHUZTZSZWMZYRYVOEBZMUPBVWGNMNQHWEYECQTNCUAPGKZAKURNADLPSQEJZBKHNAFLIBZDDPWJWKEIQQDGIEAZBJOTABPIXOFLGYXPLDIVKMMDHFMKHIOEFLSHZJBUFLAONXHPHRJNALWSVFAWYJRBRSFXIGUVRGRTIMJXKVJCXYJEKEBMOMCWHOCLBCUSTVRQKCOGFTFHXNGDWQ");
    msg.flags = 147U;

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
    msg.setTimeStamp(0.07340961272643509);
    msg.setSource(56457U);
    msg.setSourceEntity(126U);
    msg.setDestination(35004U);
    msg.setDestinationEntity(90U);
    msg.state = 188U;
    msg.error.assign("GMZJTJTYYKTCKVXZGRGB");

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
    msg.setTimeStamp(0.7109866525112785);
    msg.setSource(17130U);
    msg.setSourceEntity(58U);
    msg.setDestination(50917U);
    msg.setDestinationEntity(100U);
    msg.state = 207U;
    msg.error.assign("IJXYEDESRYHCBMINDRMRUINGUXNCVPBDLDDKOGLGVMZLQGERPSVONZZIUFZSPKDVSWKXGSMDFZHZIQHTVZOKJCACEUWOIQTNUTTAIKVFUABUYMOWAHPTYRHGCYXDRUHPKBBZBFQHQKYVNLRFMWLFJBOWAFKJYVBNCOMJHSWKXCXEBMBEJQHCTEMGQQHEFLUNWQTPA");

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
    msg.setTimeStamp(0.690560048572692);
    msg.setSource(24123U);
    msg.setSourceEntity(173U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(37U);
    msg.state = 65U;
    msg.error.assign("YQNCWOUIMB");

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
    msg.setTimeStamp(0.1945428081847268);
    msg.setSource(2321U);
    msg.setSourceEntity(98U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.47793319443845417);
    msg.setSource(3055U);
    msg.setSourceEntity(220U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.3349023687378687);
    msg.setSource(33546U);
    msg.setSourceEntity(235U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.29569612897510533);
    msg.setSource(15727U);
    msg.setSourceEntity(36U);
    msg.setDestination(30460U);
    msg.setDestinationEntity(246U);
    msg.op = 10U;
    msg.speed_min = 0.255708321720981;
    msg.speed_max = 0.6611115083123704;
    msg.long_accel = 0.683536617226948;
    msg.alt_max_msl = 0.2789155349923452;
    msg.dive_fraction_max = 0.8571885826098793;
    msg.climb_fraction_max = 0.5922559396858073;
    msg.bank_max = 0.33970697973087305;
    msg.p_max = 0.17356673663113753;
    msg.pitch_min = 0.28334586439448495;
    msg.pitch_max = 0.8148065675097536;
    msg.q_max = 0.6572696160325673;
    msg.g_min = 0.49863731232562747;
    msg.g_max = 0.05075314071818615;
    msg.g_lat_max = 0.8410424264936095;
    msg.rpm_min = 0.8869269051733872;
    msg.rpm_max = 0.7998721023880279;
    msg.rpm_rate_max = 0.24143637380243554;

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
    msg.setTimeStamp(0.09978335625888746);
    msg.setSource(63899U);
    msg.setSourceEntity(138U);
    msg.setDestination(38024U);
    msg.setDestinationEntity(237U);
    msg.op = 114U;
    msg.speed_min = 0.5555464500017586;
    msg.speed_max = 0.668441038179336;
    msg.long_accel = 0.02734966339253142;
    msg.alt_max_msl = 0.11855176908042875;
    msg.dive_fraction_max = 0.1647633197427235;
    msg.climb_fraction_max = 0.18791191157753984;
    msg.bank_max = 0.726685704351093;
    msg.p_max = 0.6803863177070126;
    msg.pitch_min = 0.4280726498323866;
    msg.pitch_max = 0.8376027308746041;
    msg.q_max = 0.5625632784206918;
    msg.g_min = 0.63508604658837;
    msg.g_max = 0.7546687719099185;
    msg.g_lat_max = 0.673070584551568;
    msg.rpm_min = 0.6374694081722321;
    msg.rpm_max = 0.14898246506127133;
    msg.rpm_rate_max = 0.8250665045242945;

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
    msg.setTimeStamp(0.9534033147260436);
    msg.setSource(49469U);
    msg.setSourceEntity(179U);
    msg.setDestination(31120U);
    msg.setDestinationEntity(164U);
    msg.op = 3U;
    msg.speed_min = 0.901272125420253;
    msg.speed_max = 0.02747913277932401;
    msg.long_accel = 0.6988144560600539;
    msg.alt_max_msl = 0.3610455004217604;
    msg.dive_fraction_max = 0.028520595838451457;
    msg.climb_fraction_max = 0.28654273446804623;
    msg.bank_max = 0.983914967504232;
    msg.p_max = 0.5573746686842139;
    msg.pitch_min = 0.8943016603803589;
    msg.pitch_max = 0.9805475534483631;
    msg.q_max = 0.687647379934271;
    msg.g_min = 0.2816031891971347;
    msg.g_max = 0.06614536780286862;
    msg.g_lat_max = 0.5258737360031421;
    msg.rpm_min = 0.6314197136185815;
    msg.rpm_max = 0.7613981067022838;
    msg.rpm_rate_max = 0.955413180709434;

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
    msg.setTimeStamp(0.5230474450411858);
    msg.setSource(62463U);
    msg.setSourceEntity(241U);
    msg.setDestination(60337U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.5219963391137165);
    msg.setSource(23567U);
    msg.setSourceEntity(188U);
    msg.setDestination(62232U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.1673747167650228);
    msg.setSource(55506U);
    msg.setSourceEntity(53U);
    msg.setDestination(44512U);
    msg.setDestinationEntity(166U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 195U;
    tmp_msg_0.x = 0.5410392567254774;
    tmp_msg_0.y = 0.9141501477256483;
    tmp_msg_0.z = 0.573664434234434;
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
    msg.setTimeStamp(0.6414424451003808);
    msg.setSource(28918U);
    msg.setSourceEntity(44U);
    msg.setDestination(42220U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.17653201688639175;
    msg.lon = 0.11594771319547681;
    msg.height = 0.4215238976056883;
    msg.x = 0.9376130024752485;
    msg.y = 0.9191468929390276;
    msg.z = 0.26007663300359485;
    msg.phi = 0.052674337068752464;
    msg.theta = 0.6339320012187204;
    msg.psi = 0.7565813516147583;
    msg.u = 0.3782882057609199;
    msg.v = 0.878434418332485;
    msg.w = 0.9185389143791273;
    msg.p = 0.7982761987659959;
    msg.q = 0.22833851596473742;
    msg.r = 0.8910402347967703;
    msg.svx = 0.13026859739779628;
    msg.svy = 0.3668656715659958;
    msg.svz = 0.7602605803236105;

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
    msg.setTimeStamp(0.1407336948838045);
    msg.setSource(9346U);
    msg.setSourceEntity(44U);
    msg.setDestination(10902U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.8832562350692605;
    msg.lon = 0.637412954716376;
    msg.height = 0.8688863237371657;
    msg.x = 0.3001313203458923;
    msg.y = 0.8817093148109318;
    msg.z = 0.8946199039346642;
    msg.phi = 0.4913647395590577;
    msg.theta = 0.5306789998364168;
    msg.psi = 0.925450186055916;
    msg.u = 0.6907899704352762;
    msg.v = 0.20469648882279368;
    msg.w = 0.26053586738914636;
    msg.p = 0.5325264117168882;
    msg.q = 0.7912598556992428;
    msg.r = 0.6094685861126404;
    msg.svx = 0.25535814063519646;
    msg.svy = 0.9267820224273151;
    msg.svz = 0.8688002417594055;

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
    msg.setTimeStamp(0.09839287765016602);
    msg.setSource(31709U);
    msg.setSourceEntity(215U);
    msg.setDestination(10791U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.4230598483941347;
    msg.lon = 0.42486490783471975;
    msg.height = 0.5598811698669747;
    msg.x = 0.14041998707439962;
    msg.y = 0.6795426703256702;
    msg.z = 0.45780932842593347;
    msg.phi = 0.10206363097003579;
    msg.theta = 0.014344521291135282;
    msg.psi = 0.5334879259828271;
    msg.u = 0.3460037900310925;
    msg.v = 0.152475369803035;
    msg.w = 0.08113364823197655;
    msg.p = 0.6895063041392534;
    msg.q = 0.23805471992121285;
    msg.r = 0.8112879270626134;
    msg.svx = 0.21780611872693245;
    msg.svy = 0.5324089808071488;
    msg.svz = 0.8884347427714336;

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
    msg.setTimeStamp(0.059118296751736965);
    msg.setSource(25940U);
    msg.setSourceEntity(188U);
    msg.setDestination(868U);
    msg.setDestinationEntity(127U);
    msg.op = 77U;
    msg.entities.assign("QWWASODSXVCFXKZCHNJ");

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
    msg.setTimeStamp(0.860435415131043);
    msg.setSource(2645U);
    msg.setSourceEntity(156U);
    msg.setDestination(29046U);
    msg.setDestinationEntity(108U);
    msg.op = 90U;
    msg.entities.assign("RBOTAERUYQGBNRPOYLUG");

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
    msg.setTimeStamp(0.12281342209945834);
    msg.setSource(24172U);
    msg.setSourceEntity(181U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(21U);
    msg.op = 28U;
    msg.entities.assign("VUGXZSWWXFDMUIHZJGWKRSYKCYASQNBTFIOPMENZETYDMMQHNIRYVBBDFFHCRTHTLALRWVUBAEGJAKUGBJYAKWCLYIBCZLOEVKWLIUXAQOSYCBNUBDITUIEAQJGWKDEHMGRILXZZTPOEKUYUPTGQKJSCHYHOJLODWWJNXZLPSGRRXQFDFVHFGQJZNFKSXPSP");

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
    msg.setTimeStamp(0.9812261265065592);
    msg.setSource(49177U);
    msg.setSourceEntity(235U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(185U);
    msg.type = 39U;
    msg.speed = 4720U;
    const signed char tmp_msg_0[] = {1, 70, -124, 84, 112, -19, -101, 119, 103, 67, 62, 91, 60, 119, -121, 124, 105, -75, -67, 101, -108, -84, 63, 0, 22, 94, 46, -84, -106, -6, 108, 98, -52, 116, 97, -89, 114, 59, -100, 11, 59, -88, 104, 89, -109, 53, -64, 124, 19, -74, -52, 2, -69, -48, -123, 15, 104, -52, -69, -73, 65, -50, -120, 6, 125, -14, -109, 66, -8, 27, -96, -83, 87, 106, -6, -79, -107, -50, 109, 110, 44, 16, 121, -24, 61, -6, 3, 99, -108, -2, -128, 38, -112, 60, -126, 39, 8, 91, 118, 2, 29, -68, 111, 50, 29, -117, -19, 66, -7, -107, 28, -89, -67, -58, -112, 79, -66, -25, -29, -20, 67, -124, -66, -84, -39, -97, 3, 76, 88, 124, 82, 3, -94, -87, -95, 72, 12, -2, 79, -66, 63, -69, -98, -64, -119, -33, 26, 83, -60, -30, 107, -77, -63, 107, 34, -116, 23, 82, -87, 14, 58, -98, 99, -14, 42, -38, -4, -121, 116, 96};
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
    msg.setTimeStamp(0.22760158507528672);
    msg.setSource(62637U);
    msg.setSourceEntity(21U);
    msg.setDestination(52976U);
    msg.setDestinationEntity(194U);
    msg.type = 43U;
    msg.speed = 58763U;
    const signed char tmp_msg_0[] = {-112, -35, -1, 31, -105, 28, -95, 1, -24, -118, 16, 67, 36, -121, -75, 31, -128, 28, -91, 33, 76, 64, 19, 54, -30, 21, 57, -65, -8, 102, 56, -46, 22, -29, -112, -123, 42, -53, 28, -67, -110, -54, 8, -1, 29, -88, 86, 96, 37, -13, -53, -28, 100, -79, 121, 76, 34, -100, -90, 16, 74, -44, 54, -76, 118, -126, 125, -61, -122, 9, 97, 94, -101, -71, 122, -13, -66, 111, -21, -109, 62, -86, 39, 67, -33, -91, -70, -7, 40, 2, 66, 84, 74, 116, -51, -8, 79, 96, -98, 95, -11, 52, 96, -70, 45, -71, 115, -24, 106, 35, 42};
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
    msg.setTimeStamp(0.4657173986744457);
    msg.setSource(53696U);
    msg.setSourceEntity(62U);
    msg.setDestination(62963U);
    msg.setDestinationEntity(133U);
    msg.type = 177U;
    msg.speed = 44043U;
    const signed char tmp_msg_0[] = {-40, 65, -11, -122, -65, -42, 90, 64, 77, 40, -57, -53, -81, -27, 73, 32, -57, 13, 9, -14, -42, -67, -41, -12, 18, -112, -32, 13, 17, 105, -28, -113, -105, 109, -72, -96, -29, 56, -32, 78, 11, 15, 100, -72, 50, -28, 123, 49, -33, 33, -25, 112, -126, -93, -115, -109, 21, -79, -127, 101, -118, -51, -106, -127, -119, 3, -89, 44, 16, 101, -84, -127, 82, -83, -102, -59, -31, -33, 36, -109, 45, 105, 34, -84, 112, 28, 2, 76, -60, -115, -49, -74, -88, -32, 10, -9, -110, 54, -7, 64, 75, -45, -60, 68, -64, -89, 120, 99, -24, 31, -120, -31, -104, -1, 0, -108, 7, 41, -115, 14, -118, -66, -4, -30, -44, -99, 72, -19, 80, 113, 105, 26, -58, 2, 52, 36, -33, -88, 67, 57, 90, -66, -93, -67, -47, 14, -42, -27, -71, -23, -92, -101, 54, -113};
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
    msg.setTimeStamp(0.024151600220965963);
    msg.setSource(58453U);
    msg.setSourceEntity(121U);
    msg.setDestination(20011U);
    msg.setDestinationEntity(157U);
    msg.op = 147U;
    msg.tas2acc_pgain = 0.4383934459851081;
    msg.bank2p_pgain = 0.8605658275002565;

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
    msg.setTimeStamp(0.524562858259261);
    msg.setSource(56898U);
    msg.setSourceEntity(86U);
    msg.setDestination(6966U);
    msg.setDestinationEntity(162U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.7695601046828184;
    msg.bank2p_pgain = 0.3547651679920224;

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
    msg.setTimeStamp(0.9288652238974938);
    msg.setSource(42399U);
    msg.setSourceEntity(182U);
    msg.setDestination(43162U);
    msg.setDestinationEntity(178U);
    msg.op = 121U;
    msg.tas2acc_pgain = 0.6351706815861123;
    msg.bank2p_pgain = 0.06443525457829125;

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
    msg.setTimeStamp(0.31140602562883235);
    msg.setSource(64584U);
    msg.setSourceEntity(244U);
    msg.setDestination(53796U);
    msg.setDestinationEntity(109U);
    msg.available = 1514807325U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.2570820256000056);
    msg.setSource(26101U);
    msg.setSourceEntity(68U);
    msg.setDestination(43260U);
    msg.setDestinationEntity(5U);
    msg.available = 4215163468U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.49409734208689704);
    msg.setSource(24956U);
    msg.setSourceEntity(189U);
    msg.setDestination(58543U);
    msg.setDestinationEntity(193U);
    msg.available = 1330928625U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.05670325720101266);
    msg.setSource(21007U);
    msg.setSourceEntity(212U);
    msg.setDestination(62447U);
    msg.setDestinationEntity(13U);
    msg.op = 219U;
    msg.snapshot.assign("XWJMTIJPBQZOWJOXMBKYCHFIDKZKWEGCTGORWAWMRQOHRDBGPLVNAYUGSFFKGTYDZLCWGQERVNUSQHVDIZKPDRNRRSZDAESN");
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.0420446425215788);
    msg.setSource(40050U);
    msg.setSourceEntity(188U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(41U);
    msg.op = 184U;
    msg.snapshot.assign("ZUVHXFBNXMBFEUEGOYQEPACCJTQNCXSAZOVRVQXZWIBYMMAZPIUNYMQUOIIJNUNCCSGBBLARDWWQMAUNGCTAWEHVHGKDICMMBPDLWSDOYZJZPTZHOPSDCLUPKIPFXBPXITMTRXMEEZHYKGYQOSTIREXYTVTBHDJHSIGELKHKKSAWTYUNARUOFRFKGQDRUQFVNJHRYXBPLSGLBWQJCLAWQAZGEPJJOZYMOKDJLVFSKEDLRJFWWCNH");
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.9615726051582959);
    msg.setSource(6065U);
    msg.setSourceEntity(110U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(240U);
    msg.op = 137U;
    msg.snapshot.assign("YHYZLNPUPUXAULSRAQVNVJGFQXSYLXHTSSBNIOUCIPAIKPHANQUFIMRFQYDFRCGJCOVMUEDIAQBZDCVIYXRWPJFGVTJHWVVPREEXMSBWYTCBXASHXMQLSSWAGIOEMMROPJLPXGSNLWOJYZDMWKHNMDGAKYGMLFHBPJJJUBZZNOKWTBKTZDGZHBWLTZEERWVRIWZYXTBGOCLNCDKCRBUXCODODQVFMAIHYQRNFKTTCKKHQDTF");
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 48475U;
    tmp_msg_0.type = 165U;
    tmp_msg_0.status = 232U;
    tmp_msg_0.info.assign("UVVJYPEGCDRDDAHBQWMLXOTVQNLWDJHLWMEBNFUOHWIGRILPMYDKUNMSJUJQQTBLTNZHKXZXEEECATXKSZYCCSXAUFJHNQHMIXTMNPWYXEIAQIVBODLNGUYQARPLNOMXWTFHKTPOHBPGZYZEWKZBIDEQWKGGXYPRRLATVEMNKOVAKKRIKAUACGWCFBUFMFHCYPXZPRDHSUZOFTUIQZPBNJVIRJSGJYJTO");
    tmp_msg_0.range = 0.557415283387826;
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
    msg.setTimeStamp(0.5192404948695358);
    msg.setSource(29254U);
    msg.setSourceEntity(31U);
    msg.setDestination(10529U);
    msg.setDestinationEntity(242U);
    msg.op = 225U;
    msg.name.assign("SQXPJWTUPCCLCGJDHBYYNVJCKGTYLKIFEJPUEUSUVLNSAHUVYQVDYTBCLGHWMYKRIZKOMTMSKHMNPBWXJQLPXOIQBZESDQYCFHEFNCXNFZDORRCSEVFOGRYKLAOSBZIYWMUYHGSVWWORIUTAEVWEDDKHOIJFNXVJQHMKGPMOBJERNTXZLJFXGKXTUBICTINGUGITZZOISQATLMZBRFDMXBAREWVRAVQHP");

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
    msg.setTimeStamp(0.7197837547725038);
    msg.setSource(58133U);
    msg.setSourceEntity(201U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(194U);
    msg.op = 5U;
    msg.name.assign("KCHEDDAZCHFJLAJTJLDMZDNGSOXBSDNAFKAWFUMEIGOUHXZXESZUIYKLULWSWPJTCCNJYOXYWXFBOWZMXFVKWUALNCZZQNHUCWAKEGESNTEQEDLNBGIARFNMKTYHIAMOTDWKTQWIXOUACPYRGBYATBPJORXCLSURVMQWHNVIKVFDBDUVYHPPJIFGQRPJCGQVXICEPHOJHVBVQFSLIMITVQELZHEGBROMYMMFVZPRYTQYTOSZRBGSKPXG");

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
    msg.setTimeStamp(0.763121105238555);
    msg.setSource(40070U);
    msg.setSourceEntity(132U);
    msg.setDestination(28535U);
    msg.setDestinationEntity(104U);
    msg.op = 41U;
    msg.name.assign("ZTAMAAJVYNKBKSRSOAEBMLERKT");

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
    msg.setTimeStamp(0.07652107304062195);
    msg.setSource(50330U);
    msg.setSourceEntity(145U);
    msg.setDestination(26324U);
    msg.setDestinationEntity(42U);
    msg.type = 116U;
    msg.htime = 0.19441065165384241;
    msg.context.assign("GKLRZCGTUIHGTIHLBECCUXGLFRZVGAMDYJVGYYQMWMDOFFOF");
    msg.text.assign("RVDBWDCNZGJQDGADUNPUJENSRQNBPHYMXVAVOZPFADIUQJXSJEPISEQVKAAFAUCLLCTRJOXMXK");

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
    msg.setTimeStamp(0.0496862968562406);
    msg.setSource(62073U);
    msg.setSourceEntity(70U);
    msg.setDestination(16216U);
    msg.setDestinationEntity(12U);
    msg.type = 101U;
    msg.htime = 0.7553587912968468;
    msg.context.assign("KBAZMRLWYUDTPKSNVKYWWZITFYVCAWNEFYQVXCQHUDNJZBHGACOVMOGUVGMNEBHRAVLYVOOWXXKF");
    msg.text.assign("FPPZVKPBOLWEIKDSBJCAFJVSVOXEPIZERFFUYLBYKQHDARMZVFOSEAIZWLCHZUVYLBHWJKABADJHACMIZGBUJMFQRHIZNFIPPSTKQRWPLGYW");

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
    msg.setTimeStamp(0.6915467362472958);
    msg.setSource(47479U);
    msg.setSourceEntity(55U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(49U);
    msg.type = 12U;
    msg.htime = 0.6724315105913746;
    msg.context.assign("TSJITRJVTUDGKIVCSESDWPWMTYZORFKUBVCCSMMOTHPHYRHFPTSCWDBPWSLYTAEZBNSHEGLAHAFAHAVSBQGOGIQWHRKZOPEGODUQZAPLKVCBNXTERXVFILRZOIGKNKMNWZQEXPXFJUVIIWMPQXM");
    msg.text.assign("NENWIMEJGSTUDXUBMQPPGBHUYZXIQGCCTKXIYJMLKWGFRYTPITUQGVHTCNRDEZZQHDPOAJVAPEVBSPQADFFMFBOFBLAKVYNNXZMMRCQMINYICSLGKOKAHXENSYVPTUFLPKWQWJKBLNUWSQBOBEUPVRZAHJKIRXVPGLAIBRRSAJVIFYRQXFXDZRWOISGHJDOGCJMUXZ");

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
    msg.setTimeStamp(0.3816073060835895);
    msg.setSource(556U);
    msg.setSourceEntity(1U);
    msg.setDestination(19093U);
    msg.setDestinationEntity(138U);
    msg.command = 94U;
    msg.htime = 0.33620821438579485;

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
    msg.setTimeStamp(0.12494141500648936);
    msg.setSource(58776U);
    msg.setSourceEntity(93U);
    msg.setDestination(25552U);
    msg.setDestinationEntity(217U);
    msg.command = 223U;
    msg.htime = 0.5630223292847586;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 32U;
    tmp_msg_0.htime = 0.7403720136070825;
    tmp_msg_0.context.assign("STOELKYMVEUIXNVNBIXVRYKHFKJTJZXYCRSIJRLWTNYRMVSDGTOYSPCUDCLBRFOFYSQFWTDTIIWDAJQNHFJORZLQWJQJGHHZKEMOCFYCPMRZTDUNEMTMAEDVHHUBZOUXXBHZVCBKEJHAFREQDMCVXVGQGWJJLOXAPXD");
    tmp_msg_0.text.assign("VXJJZWRVOSFSWWVFUYCDLHIHZKQPMPERMZIJYIVNLFHTZGAIUNKKWMQCYLADEJABZBCNUQIHNFGIBGIGVCTOWRFJJAXLWDYKEAJETVMVMLWPEINFYSVZSSQJCUFRUXGYKEKARUKAMKFWGSDXCZBQFGBALQCHTAJGWBDWXYYNHSLBXQDRODUOMMNHZLLSKOCZCOEDQEDJNHUVXPMELBGXRZRUTOETGOQHXYOYHP");
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
    msg.setTimeStamp(0.035902578553280606);
    msg.setSource(36414U);
    msg.setSourceEntity(21U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(165U);
    msg.command = 202U;
    msg.htime = 0.24765514022738633;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 84U;
    tmp_msg_0.htime = 0.36755093715780884;
    tmp_msg_0.context.assign("DLGMHPJHEONORVHOQOCMBXBIOGZKSNTWWGVJZAWLGJXMSVUXDYNJCOAFASORXBAZLHEEQSZMEIHHFRFTJYYJBAIKQAXZYLXXSWCELFACHLVUGUATKEIWUKFZYFLSIPIHLMMVPVVGSWRCUQBDPTPAYNIPHJQVDZTAWBPOFMXNNZQSPNKRNKFKMJEXDUIMPWPVRIRUBCLSKQWECGK");
    tmp_msg_0.text.assign("KVWTXJYWPXQNBRUSFACJSXWMBKZOJNCFBZMAHUCZXBRBTSLIPWIVPFDHXDFYAUKQLWFFCRKYBCASGXRCDKQDGIOOEIICFOIVQHOHQHLTIAMXYDCPNRLWNXVJTNMEMUEQLZNNSEIWYSMSPFDQUQTKMGDNUPRSG");
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
    msg.setTimeStamp(0.0653074464534632);
    msg.setSource(33780U);
    msg.setSourceEntity(82U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(18U);
    msg.op = 10U;
    msg.file.assign("SAWGKBCXYNCAZBKZKXHFQJMQOSNNDXWJSJMUQAXJRKLBKMVRUI");

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
    msg.setTimeStamp(0.46783148218312887);
    msg.setSource(38783U);
    msg.setSourceEntity(204U);
    msg.setDestination(28169U);
    msg.setDestinationEntity(101U);
    msg.op = 132U;
    msg.file.assign("XDJVPXULCQACHNVIFNPTJVENPSOGHYLDJMVBOIVOSKLZHEMLGRCNEOHVMMUEMVPJTKLC");

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
    msg.setTimeStamp(0.5143266349455182);
    msg.setSource(54821U);
    msg.setSourceEntity(97U);
    msg.setDestination(57654U);
    msg.setDestinationEntity(179U);
    msg.op = 217U;
    msg.file.assign("QOSGCCOKPXQMAEFMJGKAJHLCQUEOXBJLYIDSKXLYKSXPVYEBKSZJLWIEXBTTGRKDPTWDT");

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
    msg.setTimeStamp(0.6334190248236307);
    msg.setSource(1093U);
    msg.setSourceEntity(60U);
    msg.setDestination(19027U);
    msg.setDestinationEntity(129U);
    msg.op = 105U;
    msg.clock = 0.8561267725977535;
    msg.tz = 82;

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
    msg.setTimeStamp(0.5290365329537817);
    msg.setSource(21094U);
    msg.setSourceEntity(33U);
    msg.setDestination(919U);
    msg.setDestinationEntity(195U);
    msg.op = 235U;
    msg.clock = 0.3746070874184051;
    msg.tz = -102;

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
    msg.setTimeStamp(0.3620200090045427);
    msg.setSource(16686U);
    msg.setSourceEntity(213U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(16U);
    msg.op = 235U;
    msg.clock = 0.8456971001510847;
    msg.tz = 114;

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
    msg.setTimeStamp(0.9021774312458254);
    msg.setSource(40729U);
    msg.setSourceEntity(105U);
    msg.setDestination(32334U);
    msg.setDestinationEntity(130U);
    msg.conductivity = 0.5616435177729808;
    msg.temperature = 0.7045404404706883;
    msg.depth = 0.5158703972282622;

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
    msg.setTimeStamp(0.5316453205058072);
    msg.setSource(5111U);
    msg.setSourceEntity(40U);
    msg.setDestination(45185U);
    msg.setDestinationEntity(99U);
    msg.conductivity = 0.3674024999856266;
    msg.temperature = 0.13208554459926947;
    msg.depth = 0.9703953888301643;

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
    msg.setTimeStamp(0.5842442495210481);
    msg.setSource(30352U);
    msg.setSourceEntity(187U);
    msg.setDestination(9979U);
    msg.setDestinationEntity(59U);
    msg.conductivity = 0.3944942098564219;
    msg.temperature = 0.28759261786603374;
    msg.depth = 0.7637887390588957;

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
    msg.setTimeStamp(0.10240577579517207);
    msg.setSource(7122U);
    msg.setSourceEntity(37U);
    msg.setDestination(28189U);
    msg.setDestinationEntity(129U);
    msg.altitude = 0.04815917035895023;
    msg.roll = 26041U;
    msg.pitch = 48074U;
    msg.yaw = 33048U;
    msg.speed = 21089;

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
    msg.setTimeStamp(0.3261530182480208);
    msg.setSource(26434U);
    msg.setSourceEntity(235U);
    msg.setDestination(54564U);
    msg.setDestinationEntity(166U);
    msg.altitude = 0.23364113936126218;
    msg.roll = 60969U;
    msg.pitch = 12490U;
    msg.yaw = 10043U;
    msg.speed = -21040;

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
    msg.setTimeStamp(0.8863194211973233);
    msg.setSource(20473U);
    msg.setSourceEntity(60U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(14U);
    msg.altitude = 0.28030698958048517;
    msg.roll = 9967U;
    msg.pitch = 33155U;
    msg.yaw = 46259U;
    msg.speed = -1373;

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
    msg.setTimeStamp(0.578730289587705);
    msg.setSource(24788U);
    msg.setSourceEntity(5U);
    msg.setDestination(32679U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.8551740300375996;
    msg.width = 0.3887723192347371;
    msg.length = 0.5028750617449033;
    msg.bearing = 0.8823360658801919;
    msg.pxl = 11563;
    msg.encoding = 5U;
    const signed char tmp_msg_0[] = {-116, -38, 46, -26, 58, -111, 18, -123, 71, 98, -26, -83, -24};
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
    msg.setTimeStamp(0.9644815520912631);
    msg.setSource(13240U);
    msg.setSourceEntity(142U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.6711345933945074;
    msg.width = 0.31373655286939706;
    msg.length = 0.18693888985903173;
    msg.bearing = 0.4835165846832109;
    msg.pxl = -25580;
    msg.encoding = 9U;
    const signed char tmp_msg_0[] = {-94, 57, -15, 84, 123, -3, 40, -102, -17, 74, -72, -12, 117, 124, 94, 76, -73, 41, -71, 3, -47, 2, 46, 103, -48, 56, 49, -15, 9, -50, 84, 98, 116, 116, -1, 80, 65, -110, 12, 50, 44, 3, 84, 73, 4, -24, -84, 44, 122, 82, 110, -115, 7, 15, 116, 109, -18, 91, -128, 74, 99, -127, -126, 50, -15, 111, 23, 109, 25, -79, -3, 93, -53, 117, -110, -81, -21, 28, -97, 77, 69, -62, 122, -21, -7, -71, -73, -72, -95, -92, 107, 82, -79, -102, 16, 104, 13, -53, -60, -2, 48, 73, -52, -93, 4, -120, -76, 64, 19, -98, 116, -34, -39, 41, -39, 47, -10, -11, 14, 35, 124, -123, -75, -91, 97, 35, -64, -33, 98, -90, 65, -51, 45, -31, -44, -102, 107, 18, 34, 84, 83, -40, 89, -123, 28, 84, -20, 100, -26, 109, -86, 110, -41, -31, 9, 77, -19, 84, -124, 93, -93, -119, 15, -64, 121, -30, -65, 29, 83, 3, 92, 81, 109, -43, -123, -39, -36};
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
    msg.setTimeStamp(0.0790396758283296);
    msg.setSource(17633U);
    msg.setSourceEntity(108U);
    msg.setDestination(6520U);
    msg.setDestinationEntity(64U);
    msg.altitude = 0.3935267965784509;
    msg.width = 0.5549967547342987;
    msg.length = 0.3666513174174041;
    msg.bearing = 0.8703266220220903;
    msg.pxl = -8211;
    msg.encoding = 128U;
    const signed char tmp_msg_0[] = {-49, 89, 47, 61, 6, 118, 107, 18, -94, 63, -109, -41, -6, 67, -68, 35, 56, -14, 64, 125, -51, 11, 23, 30, -31, 76, -118, 31, 71, 53, 42, -44, -50, -24, 59, 75, -83, 9, 126, -46, 44, 7, 107, -104, -1, -93, -78, 94, -99, -18, 123, 68, -59, -108, 27, 15, 8, -38, 99, 40, 88, -2, 101, -51, 97, 109, -69, -20, 72, 7, 107, -29, 100, -111, -62, -75, -106, -73, 58, 48, -55, 31, -18, 48, -70, 45, 113, -40, -23, -49, 105, -77};
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
    msg.setTimeStamp(0.24146896704299303);
    msg.setSource(17618U);
    msg.setSourceEntity(55U);
    msg.setDestination(55853U);
    msg.setDestinationEntity(81U);
    msg.text.assign("NRAXKWRVEHDWILLEWFFRLBODNDPLVYIZSZUFVMJCUGEDPGDTHL");
    msg.type = 80U;

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
    msg.setTimeStamp(0.7682304776648151);
    msg.setSource(7939U);
    msg.setSourceEntity(2U);
    msg.setDestination(63553U);
    msg.setDestinationEntity(138U);
    msg.text.assign("BBBDQJQHULTMZRNQMVMXWBYIHFQTXZOYCXGNMRGPIPTAEENUFDWLXTRUJZWNDTIZBEROXCOXHXCUZMGKPFKGKITALDQFWUVNVWFHVEJRCRFQVOGMSDTDAISLRVKRDEPFBAWUAGCYZJRJVSHWUNJZIMYTEQBHBSOQOMANXHOYEIWOQNNVPGYBLASCBZGILAPVEHXOUVUX");
    msg.type = 246U;

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
    msg.setTimeStamp(0.4058489756134598);
    msg.setSource(53800U);
    msg.setSourceEntity(159U);
    msg.setDestination(24828U);
    msg.setDestinationEntity(198U);
    msg.text.assign("GFLZXGNSISKGVGSWULTYOMFFIQLOTCJATLULYJOTSOLPFVNZRFTKCCQUQRQVVVFNVYJGOWHSPXWFCIANQMXRK");
    msg.type = 213U;

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
    msg.setTimeStamp(0.809376423596068);
    msg.setSource(15084U);
    msg.setSourceEntity(218U);
    msg.setDestination(50845U);
    msg.setDestinationEntity(98U);
    msg.parameter = 114U;
    msg.numsamples = 203U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62225U;
    tmp_msg_0.avg = 0.7241751723303076;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9567522432553126;
    msg.lon = 0.7480884390134853;

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
    msg.setTimeStamp(0.9585863767770781);
    msg.setSource(64419U);
    msg.setSourceEntity(216U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(38U);
    msg.parameter = 150U;
    msg.numsamples = 61U;
    msg.lat = 0.8665954185731751;
    msg.lon = 0.2939611586368601;

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
    msg.setTimeStamp(0.04145613479056587);
    msg.setSource(43401U);
    msg.setSourceEntity(106U);
    msg.setDestination(14436U);
    msg.setDestinationEntity(117U);
    msg.parameter = 89U;
    msg.numsamples = 246U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38179U;
    tmp_msg_0.avg = 0.45647504950948803;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9851808685728765;
    msg.lon = 0.37481425009051506;

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
    msg.setTimeStamp(0.006722923693309846);
    msg.setSource(47391U);
    msg.setSourceEntity(58U);
    msg.setDestination(59413U);
    msg.setDestinationEntity(34U);
    msg.depth = 20620U;
    msg.avg = 0.9065874531899644;

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
    msg.setTimeStamp(0.030284930445677705);
    msg.setSource(46133U);
    msg.setSourceEntity(113U);
    msg.setDestination(20460U);
    msg.setDestinationEntity(181U);
    msg.depth = 2447U;
    msg.avg = 0.7469978847362383;

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
    msg.setTimeStamp(0.2876963648543732);
    msg.setSource(35546U);
    msg.setSourceEntity(165U);
    msg.setDestination(51453U);
    msg.setDestinationEntity(240U);
    msg.depth = 63017U;
    msg.avg = 0.02876872563210242;

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
    msg.setTimeStamp(0.4853307204493763);
    msg.setSource(21937U);
    msg.setSourceEntity(231U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.1653760476668249);
    msg.setSource(26580U);
    msg.setSourceEntity(247U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.8605533269519622);
    msg.setSource(29439U);
    msg.setSourceEntity(193U);
    msg.setDestination(31337U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6754697407875107);
    msg.setSource(24389U);
    msg.setSourceEntity(15U);
    msg.setDestination(65500U);
    msg.setDestinationEntity(247U);
    msg.sys_name.assign("PYAPEIYWJFITDPJYFYURQADCBCMAPIQZEQENOXTIBCNBRZPOTACILYWDJXTPRHNOMLETKTVHVZIECRDSLDBDGWLQXON");
    msg.sys_type = 179U;
    msg.owner = 15684U;
    msg.lat = 0.4269458749441468;
    msg.lon = 0.46838865061264023;
    msg.height = 0.39818886482562144;
    msg.services.assign("YSDKCZCOWUEEFUJNWSPCQVQRIYQIDIHMCFEHHAHRYGHMTKXDSLQXNRPUWUWIRKWVSTGBDGJYOEXDTQXWWDLTITXGZDZUIQPWEVIYGJGOAXZUELEMNURCVVOKHNLDACNMJLJVVPFOMLABKTSSVXBGRYLSWMQBCZJIFHFFPTNOAYATHBRVGLKFXNAOSGTCQZDB");

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
    msg.setTimeStamp(0.40093116716899246);
    msg.setSource(48690U);
    msg.setSourceEntity(191U);
    msg.setDestination(28657U);
    msg.setDestinationEntity(33U);
    msg.sys_name.assign("AWFBDNYVLYZFZPTNQBLCBFIGFVKUVUTJCPVZATCRBXZELLXPKNSGDIQWEMULCHXOWYRXRYWXOSHSTPKLXNYHYFMHTMQMONDVGAUSSNRHHUZTUJYBBCVJVJUDVIJAOACFDIDEOTGQEMPPCXRIDRQPRSKQAGTTOYCVNJGFEMMAJEDVDDNSIAHQRBMEIXGPAWSIBLOSLFWIWOEPNBJOGENXYHTOCXSMLUMKHGUAKWRUZZFLKZKGWBWJJQQ");
    msg.sys_type = 232U;
    msg.owner = 12271U;
    msg.lat = 0.3930163107653498;
    msg.lon = 0.4214596751385712;
    msg.height = 0.672003194398174;
    msg.services.assign("SOUZMWPCJWQSGPHXKLCBBWCJNQGMLCB");

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
    msg.setTimeStamp(0.8820342390384049);
    msg.setSource(40134U);
    msg.setSourceEntity(87U);
    msg.setDestination(17964U);
    msg.setDestinationEntity(243U);
    msg.sys_name.assign("XLTZIQYWMSEOMFIEAUPUNLVWUVQIYZQBEWHGBCAENROBTTNERGRRXWFKJNHMYMKVYDGTCUKKPOMERDNFFYZKMJVJGJACVMLCQKVSCFCZMLXIOWPZBGKEFSXTUOLNHYHGLRDDKYCWXFBNNOFAXTWUVQWYHHOAXPIPTIFZS");
    msg.sys_type = 105U;
    msg.owner = 39662U;
    msg.lat = 0.7635277301264335;
    msg.lon = 0.2422701155417889;
    msg.height = 0.7417180417180357;
    msg.services.assign("LOCZZUPPKTRLECXWHKDAZXYKIHCXCKFCFSNVZUSNJYNVLVPGZMPWEDFEFSJZLPIVFBEGFOACJPHQA");

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
    msg.setTimeStamp(0.17100805801309948);
    msg.setSource(5187U);
    msg.setSourceEntity(128U);
    msg.setDestination(43908U);
    msg.setDestinationEntity(198U);
    msg.service.assign("PKMVZNBMSRHTIQAKSBMVZBSJOWJLHPTXQWVNVAFBWCZUNSHGYRWBFRBOACEZAPPHG");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.8010124118463617);
    msg.setSource(21609U);
    msg.setSourceEntity(242U);
    msg.setDestination(51U);
    msg.setDestinationEntity(45U);
    msg.service.assign("ZQVBDJHCZMOEHWZGQQXHSGYLEDMLGHMPYDBADIIELUNTOXZOVPEVMQCUWUOWITFLBWOFNRNZXDKGUKKJHGXGPMAVHTLCGIYSBZXBWIJXIFTIONYTNBBOLVEUF");
    msg.service_type = 170U;

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
    msg.setTimeStamp(0.08526218705488564);
    msg.setSource(56588U);
    msg.setSourceEntity(11U);
    msg.setDestination(48843U);
    msg.setDestinationEntity(46U);
    msg.service.assign("EWOZFAEWXGIBGPFCZERFLTWKVEURIWXYRDYUMIVSUQOMWYPCHDXVAWMECHAAKVMVLKPXDNZVKLIAVWGTOMXCLAFQOVDJXHUGONFJHCYIDLJIQMWZLSUHDKKBYZRUOBKFPDYGCIHJYXARZUNOVNSJQLMGTFEMTOAGOQAGQUNIQBSJRRYSPSGKLXQISPDKCHOSTTBMPFNYDBECKWJRBEZPIAFT");
    msg.service_type = 8U;

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
    msg.setTimeStamp(0.29105444185075247);
    msg.setSource(53651U);
    msg.setSourceEntity(213U);
    msg.setDestination(64780U);
    msg.setDestinationEntity(64U);
    msg.value = 0.7239339299488514;

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
    msg.setTimeStamp(0.44420204441503297);
    msg.setSource(16243U);
    msg.setSourceEntity(135U);
    msg.setDestination(16930U);
    msg.setDestinationEntity(239U);
    msg.value = 0.5693183884243922;

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
    msg.setTimeStamp(0.006259420316663489);
    msg.setSource(6470U);
    msg.setSourceEntity(232U);
    msg.setDestination(32042U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8898441516098764;

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
    msg.setTimeStamp(0.3720607019748625);
    msg.setSource(51101U);
    msg.setSourceEntity(35U);
    msg.setDestination(59849U);
    msg.setDestinationEntity(182U);
    msg.value = 0.9420956557403953;

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
    msg.setTimeStamp(0.9661274054255665);
    msg.setSource(27864U);
    msg.setSourceEntity(253U);
    msg.setDestination(23016U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5057599721523052;

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
    msg.setTimeStamp(0.4805291229816452);
    msg.setSource(5514U);
    msg.setSourceEntity(2U);
    msg.setDestination(56595U);
    msg.setDestinationEntity(8U);
    msg.value = 0.3464005949846709;

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
    msg.setTimeStamp(0.15675585548010185);
    msg.setSource(44496U);
    msg.setSourceEntity(227U);
    msg.setDestination(15321U);
    msg.setDestinationEntity(222U);
    msg.value = 0.46245984455194467;

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
    msg.setTimeStamp(0.7097872905410756);
    msg.setSource(131U);
    msg.setSourceEntity(67U);
    msg.setDestination(15229U);
    msg.setDestinationEntity(129U);
    msg.value = 0.8430539139458367;

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
    msg.setTimeStamp(0.29158454769790687);
    msg.setSource(52256U);
    msg.setSourceEntity(117U);
    msg.setDestination(4769U);
    msg.setDestinationEntity(112U);
    msg.value = 0.01975383052870583;

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
    msg.setTimeStamp(0.3744140176792503);
    msg.setSource(19570U);
    msg.setSourceEntity(143U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(82U);
    msg.number.assign("NSPLSLOWTSBEQZROIGEPVBJDVXCHAAQCYVJTZJWDISOAWWUUPBBESERMUHLZIFQLSYGMKKFAXVQZZRIXOOUVZBDZEIHORJYHBYHWGUDRFPHFQBJKRVEZIRMSULAYOMHUPQFFWMASPHQEVCXBAPFOSKCVDHKAYMRUTIUBLETIJOXMADWSXHNLPFZPCITNNNMGNRKGIWQPFCUJTLYEWXGATJBYTQDWJNJKOZKCNCNLTDVGCRXDVXKFLYTMDG");
    msg.timeout = 45907U;
    msg.contents.assign("HRUHCEDAHYULKBPQVYMOKGDZUJRAFPKOQLLVPNMEWKBKBNTXMKTQHKEZRGZJXRLPRILQWZSVMLLZFGQJCHQONIVSKPZUNABPUOCYDCCXSRGXTUQQARCAIWHWTZTYJMTINWWTUDNNVMGADJGEBCNRUXFHDDY");

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
    msg.setTimeStamp(0.10896740085382195);
    msg.setSource(35111U);
    msg.setSourceEntity(89U);
    msg.setDestination(62972U);
    msg.setDestinationEntity(86U);
    msg.number.assign("PIDHKPJIOOXGGXHRFTERTABIKREMLVXRLEWXZBMJLZSRWNHQJJVCHWDUQBFJNWYJOCZQWNRAVYEEEQDEJQMTSVHLTXUULLBYOCBINYGYLCQZITTFFCSQVPRUVIGVCDHQUQGMLODTEATGMUARIKPHZZXAZYGXKMUNNJMLNMPGHWCDKHUOKVKBSKSVWWIKDAHEFZOJYBSMOSFGABYEPOFPVSIZTFDBLNCPDAJPSNZKDYUARFXCYATURSOBPW");
    msg.timeout = 12428U;
    msg.contents.assign("YTSTLXHSYFUUZUCJUOGWTUXWDSJUAIECQFKMAOOMOGZWTJLFBXFEDHLABDQLSRUMTVZFNBKELJOCVGSARGBBXARKXIFLXMRCJCCKRNEQRWIVHSHEVBPAMAJTEYFJEPNFLXZUZLFAOGUYEZWGPGDDIZYTQYWDVPWIPINMPJYISLOCJSPSKI");

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
    msg.setTimeStamp(0.9392093024605861);
    msg.setSource(54815U);
    msg.setSourceEntity(100U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(184U);
    msg.number.assign("MOJXILLKJGUTRBXXMUFLNZVZAGUJSTKWVWRIKSPMRXAMASUBSQGNWMFOWQFRWJPYHIESYZTHIZYAMGMHZTJYXFDDENNRXTUUETCSPVNZHVYOJCRRBSJVGCECLUQAOPIERYAJFKDVLQBGRDNMYAQJBKRNTWOWLDKOXEKITBBZYXPVBLCLOWFDHOTPPYFCCUXHVDIEHSHEFWFBQSIJKSHAAOQPDNUCZOLKZVQGPGLPT");
    msg.timeout = 11870U;
    msg.contents.assign("JLXAMEAIFJCCORNZIXUOCFJQVVMRZJPTEYLGAGTPNQPNXMZHVJPMLUBSKYOMTYMVPMRIMBUUTVXKZEHMPSUDTJBBXVWKWVYTKZ");

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
    msg.setTimeStamp(0.5578808946136058);
    msg.setSource(53605U);
    msg.setSourceEntity(156U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(205U);
    msg.seq = 2520308296U;
    msg.destination.assign("ADYGTMGPHCLJPLWDIXKGBXFLZVUNXHZDCVCVXRULVGECOS");
    msg.timeout = 29572U;
    const signed char tmp_msg_0[] = {44, 126, 77, 90, 115, -22, 108, 66, 6, -105, -50, -97, -119, 104, 89, 101, 56, -64, 41, 31, -103, -111, 96, -95, -86, 19, 74, -23, 82, 17, 8, 91, 63, -7, -34, -102, 30, 15, -96, -13, 24, 27, 62, 45, 63, -43, -127, 21, -62, 84, 115, -113, 119, 1, -35, -15, 101, 46, -128, -74, 33, -43, 7, -51, 92, -86, -12, -64, -88, 59, 59, -78, -8, -105, 101, -22, -35, 61, 123, 65, 36, -24, -84, -52, 39, 50, 19, -87, -127, 81, -69, 116, -15, 45, 67, -45, -38, 16, -113, -12, -68, 21, 107, -122, -113};
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
    msg.setTimeStamp(0.2631627389394706);
    msg.setSource(45112U);
    msg.setSourceEntity(123U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(225U);
    msg.seq = 3759464767U;
    msg.destination.assign("AZWJJSZYERPNIXWLIXFRCJYCYRHMPRJTTYJCOGXRUSLOLDFMQOVXTMBTTUJPCVDEEYFSPVCKDGLUDINOWHLIQRZTVMSXMQGKTWDKBDWQABMNNFOQQABGADYNFIUZYNGSKQFEONEDJYANFEEUOBJBMGVHVQPTFWXRUJC");
    msg.timeout = 38474U;
    const signed char tmp_msg_0[] = {-12, -128, 105, -87, 38, 77, -42, 28, -114, -76, 99, -7, -109, -90, 17, 118, -26, 0, -40, 56, 74, 29, -70, 79, 105, -6, 35, 96, 102, -115, 88, -31, 39, -50, 89};
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
    msg.setTimeStamp(0.18942803141442643);
    msg.setSource(14337U);
    msg.setSourceEntity(12U);
    msg.setDestination(60310U);
    msg.setDestinationEntity(175U);
    msg.seq = 3987399076U;
    msg.destination.assign("GMGNNSQMBGGTTJTLOUFLDZEPJHCYFCMOOKCKZPULDNJPCNJDSAZSGPRXKXCVWVBEHUESASSMAVYGJODYDJXQTFIBBVGKWQCBTJQRXYGALZYBSLFMFRGHXUVSEYDTXVKHZXK");
    msg.timeout = 12979U;
    const signed char tmp_msg_0[] = {78, 91, 105, 74, -32, 22, 22, 41, -96, -3, 17, 28, -124, -89, 104, 26, 41, 110, -92, -17, 91, -38, -54, 118, -126, 63, -66, -13, 58, -41, -21, -81, 95, -43, -50, -32, -43, 102, -7, 80, -13, 33, -125, -24, 97, 86, 71, -10, -73, -118, 122, 5, 34, -103, 65, 14, -101, -35, -27, -48, 11, -57, 27, 94, -99, 61, 85, -103, 108, 48, -98, 25, -97, 9, 124, 38, 100, -73, -57, 32, 32, 11, -117, 3, 112, -92, 126, -75, -75, -87, 83, 48, 86, -79, 110, -14, 114, 97, -103, 88, 21, -101, 41, 32, -10, -28, -88, 56, -70, -54, -20, -29, 126, -46, -32, -127, -107, 22, 20, 47, -12, 32, -90, -20, 43, 81, 30, 45, 89, 13, -29, 116, -118, 120, -84, 73, -44, -62, -81, -125, -20, 1, -60, 111, -86, 38, 23, 96, -34, 43, -75, 103, -49, -10, 108, 100, -2, 40, -98, 28, 54, 95, -27, -37, -77, -35, -115, 1, 74, -44, 18, 97, -115, 90, -77, 9, 32, -83, -53, -116, -56, -91, -83, -44, 116, -11, -124, -7, -38, 46, 81, -34, -67, 121, -24, 32, 119, -103, -66, 68, -46, 90, 28, -105, 123, -3, 39, -87, 124, -82, 94, -30, 103, 45, -38, -98, -28, -74, 113, 52, -104, -124, -24, -98, -38, -113, -58, 20, 72, -86, 73, -97, 109, 104, 38, -74, 74, 120, 118, 75, 31, 47, -22};
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
    msg.setTimeStamp(0.34245693226102925);
    msg.setSource(8185U);
    msg.setSourceEntity(194U);
    msg.setDestination(40109U);
    msg.setDestinationEntity(19U);
    msg.source.assign("CJSJHAQVCNDGBVRVBJBDWIOBQHICFHRIEHSCXSUDLWKXBFBDCOATAAFNMQJYISUHQGXUZEUJKUAZGVUEOZCVLDRZFKPXELONEQDYQIROLAQNREHXMCKPGVWHZLNTTNLLNFWPTPAPXOYSGMMCFVQOKRTHUXAHMVPYJFIRCLTRYWGKGRMWILPMNNSBNJHGDPYZZKJKRMSVDEIATOCXUJMTZJGEXBUSOQWLEWTFAMV");
    const signed char tmp_msg_0[] = {-109, 103, 84, 16, -43, 48, -93, -83, 96, -25, 19};
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
    msg.setTimeStamp(0.12122595413910076);
    msg.setSource(54448U);
    msg.setSourceEntity(221U);
    msg.setDestination(32317U);
    msg.setDestinationEntity(180U);
    msg.source.assign("JPAPYVBZOIFNAADFCXCMSPZCTVGPMKSZKBYYOZRTJXWTZAXJQHVODWIIETCBUSBHCQYGYJNEQFPJTQFVUXJQEWQJBPYNMUMPKSBYPDUN");
    const signed char tmp_msg_0[] = {-77, -70, 20, -81, 11, -17, -22, 121, -4, -36, 104, 73, -73, 44, 97, 102, -99, -87, -128, 19, -64, 1, 14, -85, 77, 71, -111, 97, 96, 81, -79, 79, 2, -48, 98, 3, -128, -98, 66, -58, -20, -109, 96, -43, 43, -88, -31, -60, -64};
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
    msg.setTimeStamp(0.6902405047684315);
    msg.setSource(22865U);
    msg.setSourceEntity(140U);
    msg.setDestination(63113U);
    msg.setDestinationEntity(94U);
    msg.source.assign("PVLHBDGSNQKIMSXBXSTTEHFSTYELNOHXRRVRVZWDGIRIQFNKOARLLAKORVKQWHMGYUSEHKOOLWIIEJXZUSUBOOZCQVHBDGUIFXYCPUNQAPYTXJXYCFBAYVPTRWRQWVZCJJN");
    const signed char tmp_msg_0[] = {-23, -127, 99, -71, -64, -61, -35, 114, 97, -104, -54, -111, -95, -17, -109, 48, -80, -55, -69, -13, 62, -34, -118, -12, -97, 29, -109, 82, -72, -98, 66, 108, 12, -39, 72, 55, -104, 84, -4, -6, -65, 105, -22, -97, 12, -23, 96, -35, -80, -46, -32, 55, -49, 48, 54, 68, -7, 108, 61, -13, -8, 47, -67, -28, -65, 79, -82, -2, -38, 48, -111, 89, 47, -92, 35, -101, -32, 101, -113, 32, -49, -48, 24, 21, -60, 32, -86, -39, -90, -78, -90, -50, -108, -65, 51, -23, 125, 79, 45, 28, 74, -104, 95, 72, -84, 5, 30, 90, 30, -89, -101, -7, -33, 68, -6, -53, -57, 96, -88, 100, -110, -104, 124, -93, -95, 87, -53, -93, 84, 11, 59, 79, 84, 51, -21, 75, 23, 19, -90, 43, -107, 107, 93, 16, -62, 23};
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
    msg.setTimeStamp(0.6185789265533327);
    msg.setSource(20684U);
    msg.setSourceEntity(114U);
    msg.setDestination(34482U);
    msg.setDestinationEntity(15U);
    msg.seq = 95874769U;
    msg.state = 98U;
    msg.error.assign("CHHYYIXJIYGOUKXAHPTLFCJENCDMGZILFBUPUVVUVC");

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
    msg.setTimeStamp(0.5395433985101469);
    msg.setSource(5335U);
    msg.setSourceEntity(107U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(78U);
    msg.seq = 2337425662U;
    msg.state = 176U;
    msg.error.assign("JNBUOINLVDNFUCGVWLCEWBWJWIAUUFMULFQEAZKYYBDUQLKSWKHCMTASQBQVZBLCHHVUSOBMPEFBJRHOTEUNHFQVSZSYDQKGPLWIXAKMNUGZTKOXMKIIOMSKHSGYPVWGZDMDRPXACI");

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
    msg.setTimeStamp(0.44632069935203844);
    msg.setSource(48104U);
    msg.setSourceEntity(116U);
    msg.setDestination(24531U);
    msg.setDestinationEntity(248U);
    msg.seq = 394616988U;
    msg.state = 123U;
    msg.error.assign("OEURHAGVUCKULAYDKQWIEAYHGTAYNYIGUBMXJZCDPHWLBKXBKIGGFRQBIXCNPNUWVUPVDZVHNKYTHVCTDOAOSXEDTLLYWGBUXXVLADXWQGOAPSZ");

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
    msg.setTimeStamp(0.4505895464341104);
    msg.setSource(14605U);
    msg.setSourceEntity(233U);
    msg.setDestination(61694U);
    msg.setDestinationEntity(161U);
    msg.origin.assign("JSDFVSKTMYLBVTNRRJKAXGHOGVITYTSWYWMOODOOUNZNIQJRNQPGOWSPXJIADUALEYPLLJPMDVOMK");
    msg.text.assign("CBQHTRWDKOOUFEBYQCIEVIOEUWFPHRNDTZZXPQDACFNPNBVALARPSJIBSCYJEEYOLCBRJEKTBUHVZCOLGHJTCGKXMJAKEMBZFGZCHQQQTSJSMKQSSWIUQPGRNTRFHFNKDZUMEPFAMLABGSRGITZYHLPBRVZXFGVYJUYIJIIVPAVFLEHNNVFAROYYMLINYXKUVNWWSWXTX");

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
    msg.setTimeStamp(0.2689126566283293);
    msg.setSource(63607U);
    msg.setSourceEntity(84U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("ZOIELCDRJGGUKETYYMZOHJZGUBFXJCLWKTNK");
    msg.text.assign("CMULZZZTRFEMEHXHWSSOHXJHOYCRVDQHHNUWUSBTNAJJGGUNATYVQPWOOMARYOEAGAAFBVPVRHBGULTPQFUJVNFTNKQHISFLBXYCFDTZVENDIYLGWROKBQZBXCKZYJECMFREDZINBLDRRYQBIPCMYPVQTCUGPNACCFBKPJGSPQKWJZXJAOHRKVDYNNDLLXHQXJMZVBJDWGSTIWXELWXSWDVSOMLGKDPZPLKFEIAUIEGQSKMXKOU");

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
    msg.setTimeStamp(0.8361671969290658);
    msg.setSource(40828U);
    msg.setSourceEntity(192U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("TBUPKVLRQGVFFSVXCITIQFXUMMEZZCYFLIHYARNWOWEQUUXNBOJVVCYWWVAENKGITMGRLLYCSKVWYHBWTDSDEXAHOQIAIZDHEZSJASLUPSQOFIARJIWOMYRQOCPRQEJQKGIYGEFGEEFEPZABKZZNLKCMDTHKDPYJBCVBGRFCNLAVJXTGOTIPNJGATLTFWNRDJZGDKKPWDSBXUHXTSBVCMFAOBNNOQRLSZPWDXMUNXPMKJBHUMD");
    msg.text.assign("XRTQRDWKYAOOQSQNTVMAAZVJNTPZKQVUWAMWGKCYJCPLXEZZDSOEMBPHAFMFBNBZCHCXJOJVYEIHQKUYBFNXTLCXSZWHAMZBSPACVGXBBWZPFIJRKYGRIXPUWUBSGREIVADYQIKJDUJLFNXNHAURWFIMFLESFSTVDXXSPKWZPTZWDMURRUPVPTNDIOVRBTGYK");

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
    msg.setTimeStamp(0.27703486393261134);
    msg.setSource(48416U);
    msg.setSourceEntity(195U);
    msg.setDestination(55714U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("DWXLFCZJEJGUVZEEHKJIPAFWPSEEBCZQGTTDDOKLFYIASVFK");
    msg.htime = 0.5038998239273865;
    msg.lat = 0.08837838674832887;
    msg.lon = 0.10542261456320523;
    const signed char tmp_msg_0[] = {16, -71, 15, -70, 113, -33, 93, 117, -9, -65, 123, 6, -107, 46, -19, -114, -19, -61, -41, 110, -124, 13, -55, 113, 24, -94, -37, -105, 72, -68, -8, -69, -39, -105, 12, -101, 110, -128, 24, -72, -114};
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
    msg.setTimeStamp(0.5960868209337471);
    msg.setSource(64482U);
    msg.setSourceEntity(161U);
    msg.setDestination(64707U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("UEBHVSUBBREYXHTTVRWNGVJZNPLXVSAMAYJCXJWNDFIZFUVLICFWQCZTJNNTSRECINLSYXNIGZBHGOVRIDLLSFUG");
    msg.htime = 0.3095798490339583;
    msg.lat = 0.7905577298524704;
    msg.lon = 0.1461663024643859;
    const signed char tmp_msg_0[] = {23, 83, 84, -2, 116, -114, -80, 69, -43, 54, -33, -8, -97, -82, 4, -22, -52, 113, 103, -24, -63, -45, 124, -71, 58, 2, 114, -20, 76, -9, 58, 8, 3, -83, -102, 54, -90, 101, -8, -46, 78, 8, -125, -104, 116, 38, 18, -105, -27, -62, -10, -125, 108, -112, -24, 41, 59, -45, -22, -120, 119, -102, -6, -3, 97, 9, -14, -20, -72, -34, -110, 120, 21, -119, 69, -6, -16, 22, -58, -63, -40, -109, -29, -85, -17, -124, 46, -98, -34, 95, -92, 91, 101, -27, -51, -79, 122, 101, -91, -116, 45, -78, 0, -10, -70, 108, 89, 7, 122, -44, 48, -8, 43, 11, -108, 69, 78, 35, -12, 13, -53, 77, -19, 37, -23, 69, -52, 113, -35, 56, 74, -70, -86, -99, 39, -127, 39, -74, -62, -40, -39, 104, 56, -42, -61, -61, -93, -113, 78, -68, -74, 80, -101, -41, 37, 24, -34, 101, 104, -84, -66, 14, 120, -22, 44, 124, 12, 97, -18, -44, 39, -7, 72, 31, -83, 72, -74, 78, -79, -48, -57, 3, -74, 47, -100, -26, 124, 64, 30, 76, -9, -22, 122, -3, -102, 45, -107, -119, 7, 115, -96, 68, -104, 12, -77, -34, 32, 112, -77, -46, -63, 44, 86, -7, -33, -101, 25, 111, 75, -121, 77, -22, 60, -85, -5, 63, 22, 51, 72, -91, -57, -120, -19, -54, 101, 6, -72, 52, -74, -29, -26};
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
    msg.setTimeStamp(0.3169287884315459);
    msg.setSource(20681U);
    msg.setSourceEntity(171U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("NNXCHKNKQARMXOABAOOKYLMDCRTVXRHNVTRMUYPXIUWSLLSIIOIGXRMVYLKJLISGNVWEDVIWRWKTWCBWCUHMBUIFJGWZMYTQCTLZCGEDDYFRAAIUCJVYWAQEQTGLDOSAQCRZZGTOBPVDRQFK");
    msg.htime = 0.7731657483439598;
    msg.lat = 0.18275255358253928;
    msg.lon = 0.7770740064461676;
    const signed char tmp_msg_0[] = {29, -65, 113, 48, 84, -32, 24, -103, -123, -11, -114, -40, 1, -57, -4, -114, -119, 7, 108, 32, 35, 91, 45, -32, -21, -73, 27, 14, 109};
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
    msg.setTimeStamp(0.8647638354316776);
    msg.setSource(8679U);
    msg.setSourceEntity(188U);
    msg.setDestination(9708U);
    msg.setDestinationEntity(69U);
    msg.req_id = 57144U;
    msg.ttl = 48256U;
    msg.destination.assign("YJRWGUTVDXLWXIEUJJFQJRPQIPTXMCVSZJKLMVVM");
    const signed char tmp_msg_0[] = {-125, 83, 6, -113, 62, -127, -70, 123, -64, -43, -1, -56, 88, 58, -50, -106, 22, 33, 22, 66, 26, -119, -101, -53, -13, -64, -111, -64, 120, -13, -20, 54, 91, 11, 7, -96, 66, 111, 102, -22, 74, 0, 53, 115, 7, -9, -91, 17, 44, -90, 102, -88, -118, -24, -26, 115, -35, -118, 96, 114, 26, 67, -33, -13, 91, -21, -16, -111, 126, 38, 29, -103, -95, -60, 59, -83, 79, 86, -98, -51, -99, -38, -43, 99, 74, -17, -35, 52, -28, 115, -1, 23, -32, 57, 39, -100, 37, 73, -87, -91, -27, 34, 1, -127, 56, 100, -64, -35, 100};
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
    msg.setTimeStamp(0.13836610347984568);
    msg.setSource(8261U);
    msg.setSourceEntity(140U);
    msg.setDestination(8072U);
    msg.setDestinationEntity(176U);
    msg.req_id = 50576U;
    msg.ttl = 53381U;
    msg.destination.assign("JTSRDCWEZSZCKAMNZCQZPVUTAPNCTMMGASHTGZDXJVHOBFHAWW");
    const signed char tmp_msg_0[] = {-43, -110, -51, 24, -29, 77, -51, -11, -23, 87, -102, 87, 76, 12, -14, 59, 64, 112, 78, -16, 96, -18, -109, 62, -77, 109, 118, 19, 123, 53, -6, 85, -62, 58, 65, 46, 91, -67, 119, -117, -54, -17, 21, -69, 117, -43, -122, 117, -120, -94, 84, -111, 41, 20, -118, -124, 49, 59, -24, 117, 32, -111, 25, -41, -85, 80, -88, -69, -68, 31, -37, 7, 67, 81, 18, -100, -82, 51, 51, 61, -21, 62, 103, 102, -102, -65, -52, 0, 118, 85, 8, 69, 119, -10, 78, -105, -39, -56, -26, 16, 42, -118, -120, 124, -41, 0, 124, 16, 73, 16, 41, 121, -106, 109, -34, 49, -107, -5, 103, -22, -50, 126, 21, 38, 48, -19, -2, 112, -121, -86, 1, 106, -19, -7, 93, 51, 38, -123, -114, -40, -15, -14, -112, 52, 60, -39, -11, 74, -13, -108, -29, -22, -63, 117, 54, -101, 51, 2, 76, 83, 36, -4, -50, 107, 24, 120, 77, -74, -119, 44, 43, -122, 108, 46, 123, -112, -63, 109, -48, 66, 105, 51, 58, 115, 108, -107, -4, 83, -104, 39, 37, -61, 21, 112, 3, 5, 97, -104, 23, 61, -3, 102, -89, -77, 99, -39, -89, -51, 39, 93, -52, -77, -52, -10, -103, -26, 103, 100, 106, -62, 42, -68, 8, 81, -91, -87, 104, 15, 61, 2, -26, 116, -125, -47, -2, 93, 110, 58, -113, 85, 60, -85, 58, 17, 124, 14, 10, 114, 16, 91, 100, -33, 17, -27};
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
    msg.setTimeStamp(0.3037721340784677);
    msg.setSource(22210U);
    msg.setSourceEntity(108U);
    msg.setDestination(11380U);
    msg.setDestinationEntity(33U);
    msg.req_id = 62577U;
    msg.ttl = 17492U;
    msg.destination.assign("SPBWMCYWVEHMHNCGMXTFBNTIBBOITTBPXASDDFVRCKJBPMVKMZJOXTLVRQDRDQSTGEYIVUIZXQKLEKPAURZNARWHDFGUWVMGWTPGXIACQAFQWSAIUFQJUGEBFQPHZPTQ");
    const signed char tmp_msg_0[] = {-107, -66, -72, 88, 57, -58, -114, 65, -95, -112, 72, -100, 113, 16, 16, 118, 58, 103, 73, 25, 29, -105, -25, 96, 7, 91, -87, 96, 55, -27, -10, 99, 21, 57, 115, 21, -10, -89, -88, 11, -113, -71, -60, -120, -46, 21, -48, -103, 107, -43, -78, 85, 98, -45, -98, -87, 24, -112, -3, 85, -94, 20, -11, 28, 29, -120, -105, -82, 117, 48, -103, -29, -16, -28, -45, 1, -52, 80, 64, -99, 0, -56, -61, -94, -107, -58, -56, 103, -39, 60, 85, 48, -111, 23, -51, 27, 113, 32, 123, -72, 96, 63, 15, 106, -97, -111, -64, 29, 27, 93, -76, 39, 64, -54, 62, 35, -64, 17, -121, -9, 42, 56, 37, 106, -74, 15, -58, 75, 0};
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
    msg.setTimeStamp(0.3696211666715048);
    msg.setSource(60475U);
    msg.setSourceEntity(154U);
    msg.setDestination(64753U);
    msg.setDestinationEntity(124U);
    msg.req_id = 15813U;
    msg.status = 39U;
    msg.text.assign("LQMFTBPYTRLRMLLVIKYZVECQOGMFLDIVSXGQAYMCOBLCPZAHXBKVNRWNACTJSDBVXJGWGHAKHHQFSZSDLKCEODEJOZIDZQVTSJMCOAJARNWFSKYPHMGVQAZUUQWFSYHNUGODWBAIPHIRHBJKDKZUWYTIFVSGRYKIBCMMTPNAPPUUBRWNEHQENYOERPTQWCJDYIMPGXRXUFXOGESEKUZCNYLX");

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
    msg.setTimeStamp(0.07615622381369425);
    msg.setSource(28148U);
    msg.setSourceEntity(26U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(7U);
    msg.req_id = 43130U;
    msg.status = 73U;
    msg.text.assign("TPVOCNBGISHUXWISWHCMAMKGGFDVCJBBTEEYLKRBDSMGVAOFYSJQAGTHJLAJZIQHUDGQJSCTJDGYCTNPOVOWXTWSXFTMXIGZMRUUUJNLPEAOZMIZQKFEZNUXUFHJMABYSWHDZKFRRVXFVTQOPHOSYRAPZCQENFPLDMEFADIITTYPOVMBNSNAYNRILGLOLZZQREFWIRNKAQERLVDDZHUWJKPKHBBCLVDQEYBXXQOSXCXWYCIWPUYJNL");

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
    msg.setTimeStamp(0.9233022893323929);
    msg.setSource(64701U);
    msg.setSourceEntity(249U);
    msg.setDestination(11296U);
    msg.setDestinationEntity(24U);
    msg.req_id = 5442U;
    msg.status = 85U;
    msg.text.assign("VMCUFTVZBURUDRHPLRFWNKWIMYMZLWXXMWDOWGDWVFAJILOAGWQAEANLGQYINHBTVTLSYRONDQCZJVASZJBUBBNXAAEJXZJEPKIFDIHDBCDNGABMYXSJISVCTVEGZTRGNQUCPELYDIQSCKCLPOEZWHVFHKRDMPLDZPGMBTEVCXYAYXGJXUMCTQVFJTHMOLSOMIIFNUYANHNRPQUKJPUQWRFSWKTSBOKQEFZOKHPEX");

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
    msg.setTimeStamp(0.6901746013246448);
    msg.setSource(31041U);
    msg.setSourceEntity(214U);
    msg.setDestination(20574U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("JUDMLBTGLDOXRBSPNXVEJXKFXJILJGXLHDXTGGJUGNSFEBKLRHDTNAYNCAMKLADLYSQFOCGKMVGABNPQCRBSPTBDLHMOXPTPDZKARQFFDXHWQXNIIICWEZAWYYIOPBHMBMOBZWQFYKYWZMKPGGYDULVFZSTUUIVNTJUENWOFREQZOXZYSIZIMHTORQUUKNQ");
    msg.links = 2187507854U;

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
    msg.setTimeStamp(0.513897743483994);
    msg.setSource(34961U);
    msg.setSourceEntity(138U);
    msg.setDestination(41620U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("QTLEEOBUCACKTAGTFOOIXFMYLCPWTWVHHPEXAHXRAFYNQGNGHZWLRQTXZSOEOQZHYGGWRVZXPMTDMUQYWQBZRLUBPAPMENGVRKPEEVPWFBMNDEPFHMOLJIVRDCNTPVYCDMBJCTDSUINSGJFDUANVSIJQIXKQTIBPYOJ");
    msg.links = 1960325918U;

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
    msg.setTimeStamp(0.5739969439678848);
    msg.setSource(59946U);
    msg.setSourceEntity(175U);
    msg.setDestination(60675U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("QPGQINOWNPJCJWVMNJHIPXFDRBYOLBPJRXUZHCVMZOWJTSFKYYAYROOVFGVEWLPOMKUUUFNLZLDVFRGUZIDVSPSNGBGEXDHBZMTKZTIKAGICKPGDILSBXXXQFCHWYBVKNTCQXRURSYZDJDFRLMNMODNBKGKXIJATTOWRBCHLHEBEWJZYNHWAUYNRICEMEYDQGVMQUFEIAQSAXPPTVTZESLJBEAJLAOKKTIADUSHEMFXR");
    msg.links = 87852370U;

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
    msg.setTimeStamp(0.9993581472148395);
    msg.setSource(5786U);
    msg.setSourceEntity(112U);
    msg.setDestination(54437U);
    msg.setDestinationEntity(229U);
    msg.groupname.assign("ZYZJVZXWZFUCMIPRDQZANWVSREBVZMOKRQYLDAUTMRQDCAINERYMSPFIOIUKLJVVIQHRLXWHVTHOFNGSDFRCYOOPGBHLRYOLSFXVEBFDPMZCTKXCKZPDMQBQRQHTHWPFEGKGVWHDDBFZSTWDQQACULXSEXEMBIUIKDTFZOYUUTGXHIQESJCNHYBGKAGBORCYWKPGXFJAWEESKGTPKLAAXATOU");
    msg.action = 107U;
    msg.grouplist.assign("VVURJDHWUBIEMPTLMKQGIMRJIXTEFSAJKIXMCSSVQNUTKUFOZAWWYNJLHRBTYYXGZGNZLBFOJPZSQRHTCEIFBEQWAMOGBZPFWBMGYUXJMZWYBOOWKLTHWTCOVAXOKDKCXLDIYSNNPYHGLCKHVEHDQFRFQEGAEIZKJUIUAVRZQUHRNCKABPCCXTDLKPZGJCAZMRJSQES");

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
    msg.setTimeStamp(0.676112543199927);
    msg.setSource(27932U);
    msg.setSourceEntity(8U);
    msg.setDestination(14150U);
    msg.setDestinationEntity(217U);
    msg.groupname.assign("IXWDRXOLLYBPGQSMIZXDBI");
    msg.action = 172U;
    msg.grouplist.assign("ZUEDSTBGRANWAPFKXEWQIUWBMLBPUVDIBGBVVZBTGAJDDRJSNPFXTPMEHWPPMOSWJFRRXWXMTPAEVEIUWBHXNMJCAUOSCTCQWKXAJJHQKSAYKIBPLEHDNGHILCUOMTONDZSKQFTZLSVZYQXIOWLRGKCEZVTJHUVQJFXJEPRBQIUORCHQMXDKEWDFTGACQLFNFGVGDOMYNRJRZLKYVM");

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
    msg.setTimeStamp(0.28279695023122275);
    msg.setSource(1790U);
    msg.setSourceEntity(43U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(71U);
    msg.groupname.assign("XOEWCXGYKVOSOJWQIVRERDONQRZGCQSRMFPDUOUKKYGNMTICBYVXJPOXXTTQRZDUNAFUUDFSFWGOLTLJMIWDVAHSBMLNKVXAFQGDNLUFQCTJDGPFLIRNEEZIHAHKMRYCUMGVEGQOANAHBKBPCTQKICLPZMNOIPANZYZJZTRBCYEPYUSVTZKIHEEPAVCYYXDEBWRXFVHAMVWTLPHJXWSSLZBXZFHQKOJHUW");
    msg.action = 79U;
    msg.grouplist.assign("RFQPNSUNNNFXZKWSLRPJILYXOJBOWMFHPXJNGYXMQBACHRJOFEVHVFAOUAQEEXANJFZXBWZOXVMINJCESKFKQZBYWPUEXMYCRGTTEHGCGNJONPZGBGPIEDMGLJANUBIFRZDAOELRWELECHAMVQLWRUBUCDGZMTDKSYRKDHFAODIM");

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
    msg.setTimeStamp(0.8816954097525834);
    msg.setSource(9848U);
    msg.setSourceEntity(180U);
    msg.setDestination(63144U);
    msg.setDestinationEntity(250U);
    msg.value = 0.3947618880373067;
    msg.sys_src = 2392U;

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
    msg.setTimeStamp(0.8873655522959597);
    msg.setSource(65014U);
    msg.setSourceEntity(64U);
    msg.setDestination(32752U);
    msg.setDestinationEntity(31U);
    msg.value = 0.2933446572942813;
    msg.sys_src = 63021U;

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
    msg.setTimeStamp(0.6382547770281216);
    msg.setSource(52264U);
    msg.setSourceEntity(233U);
    msg.setDestination(51932U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5194006654561822;
    msg.sys_src = 9333U;

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
    msg.setTimeStamp(0.2488699650163445);
    msg.setSource(2095U);
    msg.setSourceEntity(234U);
    msg.setDestination(40286U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7914012546173438;
    msg.units = 69U;

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
    msg.setTimeStamp(0.7518115478460997);
    msg.setSource(55478U);
    msg.setSourceEntity(77U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(3U);
    msg.value = 0.6618820276194395;
    msg.units = 6U;

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
    msg.setTimeStamp(0.19946928612958725);
    msg.setSource(23754U);
    msg.setSourceEntity(134U);
    msg.setDestination(65336U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3261520972642108;
    msg.units = 76U;

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
    msg.setTimeStamp(0.7708358519350329);
    msg.setSource(36830U);
    msg.setSourceEntity(190U);
    msg.setDestination(35670U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.9573001914519956;
    msg.base_lon = 0.717430457467473;
    msg.base_time = 0.20150081084944427;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 14158U;
    tmp_msg_0.priority = 5;
    tmp_msg_0.x = -18680;
    tmp_msg_0.y = 30775;
    tmp_msg_0.z = -7790;
    tmp_msg_0.t = 21172;
    IMC::GroundVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 185U;
    tmp_tmp_msg_0_0.x = 0.9898548646173415;
    tmp_tmp_msg_0_0.y = 0.6138342325459017;
    tmp_tmp_msg_0_0.z = 0.7103621767676801;
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
    msg.setTimeStamp(0.9350531980045999);
    msg.setSource(17673U);
    msg.setSourceEntity(238U);
    msg.setDestination(40569U);
    msg.setDestinationEntity(238U);
    msg.base_lat = 0.29460031038007917;
    msg.base_lon = 0.350013398476101;
    msg.base_time = 0.4599565079524299;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 47973U;
    tmp_msg_0.destination = 37816U;
    tmp_msg_0.timeout = 0.5358501993573169;
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 206U;
    tmp_tmp_msg_0_0.speed_min = 0.7737979642432932;
    tmp_tmp_msg_0_0.speed_max = 0.6146079853522173;
    tmp_tmp_msg_0_0.long_accel = 0.15019790602071326;
    tmp_tmp_msg_0_0.alt_max_msl = 0.6385595412005551;
    tmp_tmp_msg_0_0.dive_fraction_max = 0.24718498316808712;
    tmp_tmp_msg_0_0.climb_fraction_max = 0.7646360104036722;
    tmp_tmp_msg_0_0.bank_max = 0.45957233745540205;
    tmp_tmp_msg_0_0.p_max = 0.5184381800649615;
    tmp_tmp_msg_0_0.pitch_min = 0.23149402536212815;
    tmp_tmp_msg_0_0.pitch_max = 0.04085855392982396;
    tmp_tmp_msg_0_0.q_max = 0.7668040868608322;
    tmp_tmp_msg_0_0.g_min = 0.15852978970507792;
    tmp_tmp_msg_0_0.g_max = 0.9613954004471846;
    tmp_tmp_msg_0_0.g_lat_max = 0.7895956452092572;
    tmp_tmp_msg_0_0.rpm_min = 0.18327233588846503;
    tmp_tmp_msg_0_0.rpm_max = 0.870790881567118;
    tmp_tmp_msg_0_0.rpm_rate_max = 0.5559299493271667;
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
    msg.setTimeStamp(0.3476761633594465);
    msg.setSource(11930U);
    msg.setSourceEntity(239U);
    msg.setDestination(47151U);
    msg.setDestinationEntity(72U);
    msg.base_lat = 0.47648305998807516;
    msg.base_lon = 0.31903321898924486;
    msg.base_time = 0.7266815241988863;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 42552U;
    tmp_msg_0.priority = -29;
    tmp_msg_0.x = 29269;
    tmp_msg_0.y = 10723;
    tmp_msg_0.z = 26710;
    tmp_msg_0.t = 29209;
    IMC::SoiCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 205U;
    tmp_tmp_msg_0_0.command = 83U;
    tmp_tmp_msg_0_0.settings.assign("BOFTDTIJGGCVHHNYAAMJXDXOMPNPEVVNVLTQZDJASKHMNXWWCANRVFBUQYTBSQCKRLEHIOHSZRZWRRNROFZZUXWPTEFMLACZOWFPTPXUFIMWUQLDSUJRSLQLQMFEISKAEOWCOLGKPEISKACKXETJHYGXRASQXTUYMCDPYYBZWPEOK");
    IMC::SoiPlan tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id = 51962U;
    IMC::SoiWaypoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.036615963605431845;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.03252399208909007;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.eta = 2006956917U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.duration = 33406U;
    tmp_tmp_tmp_msg_0_0_0.waypoints.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.plan.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.info.assign("ITQGLLFVRQQZSUJZZXSCUADUZBQDEBJMNDJGNRHXYVSAPNOUBFEPYAGKDBJWIRIHKIIVXPRVFUEDIOEYRDPLSJGCXZMTUOPVRPCNULHHBPJFKEEICMAQNOJCJYWEQQNSWWCRTYQJKNCVVWOCYIMPWAARB");
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
    msg.setTimeStamp(0.012732906746095396);
    msg.setSource(332U);
    msg.setSourceEntity(39U);
    msg.setDestination(19382U);
    msg.setDestinationEntity(121U);
    msg.base_lat = 0.5745397091875675;
    msg.base_lon = 0.12995174966235157;
    msg.base_time = 0.20070648295342652;
    const signed char tmp_msg_0[] = {10, -47, -113, -22, 55, -120, -88, -95, 94, 46, 17, 14, 45, -84, 79, 8, -102, -20, -101, -16, -112, -59, 54, -65, -119, 42, 73, 106, 41, 15, 7, 15, -59, -75, 106, 51, -128, 55, -8, -14, -26, -101, 100, 63, 124, 126, 70, 124, 12, -84, 101, -5, 45, -86, -112, 75, -26, -96, -45, 100, 80, 15, 68, -7, 97, 103, -36, 19, -85, -22, -126, -1, -92, 17, -117, 45, 12, -117, -95, -22, -94, 67, -80, 29, 20, 48, 16, 31, 123, -128, 69, 99, 97, -125, -5, -53};
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
    msg.setTimeStamp(0.5493882084328006);
    msg.setSource(17864U);
    msg.setSourceEntity(72U);
    msg.setDestination(60726U);
    msg.setDestinationEntity(229U);
    msg.base_lat = 0.18589286767834;
    msg.base_lon = 0.29897772650350696;
    msg.base_time = 0.42956386821104175;
    const signed char tmp_msg_0[] = {24, 84, 31, 70, 68, 67, 96, 8, 36, 40, 54, 51, -32, -18, -83, -63, -51, -49, -39, -11, -123, 81, 18, 43, -8, 31, 95, -34, 60, -51, -62, 6, 36, -92, -52, 2, 50, 45, 99, -82, 44, -70, -35, -84, -37, -62, -8, 50, -109, 68, -38, -59, 104, -100, -95, 99, -51, 120, -27, -17, -47, -123, 114, 17, 32, 46, -75, -55, 73, -113, -3, 65, 10, -128, 117, 53, 122, -98, 4, 82, 93, -81, 86, 32, -73, 103, 116, 124, 105, -8, 34, 31, -83, -90, 50, -70, -115, 69, -113, -33, -49, 116, 84, 12, -24, 67, -37, 36, 76, 54, 39, 91, 112, 70, 52, 72, 105, 14, -106, 31, -106, 98, 126, 12, 63, 70, 126, -47, -69, 16, 3, 55, -59, 91, 54, -14, -120, 119, 11, -75, 14};
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
    msg.setTimeStamp(0.4938805305076541);
    msg.setSource(5361U);
    msg.setSourceEntity(78U);
    msg.setDestination(60179U);
    msg.setDestinationEntity(185U);
    msg.base_lat = 0.709078772431682;
    msg.base_lon = 0.4713534775688647;
    msg.base_time = 0.0407153639813459;
    const signed char tmp_msg_0[] = {54, 65, 4, 108, -35, 91, 9, 102, -62, 118, 62, 40, 104, -59, -77, 91, -86, -39, -83, -50, 109, -13, -58, -100, 56, -124, -26, -42, 123};
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
    msg.setTimeStamp(0.9674803745001918);
    msg.setSource(27760U);
    msg.setSourceEntity(243U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(234U);
    msg.sys_id = 29149U;
    msg.priority = -52;
    msg.x = -31366;
    msg.y = 412;
    msg.z = -16900;
    msg.t = 23199;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 239U;
    tmp_msg_0.tas2acc_pgain = 0.21941103184763944;
    tmp_msg_0.bank2p_pgain = 0.3729407279150061;
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
    msg.setTimeStamp(0.20928699063803302);
    msg.setSource(50583U);
    msg.setSourceEntity(231U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(153U);
    msg.sys_id = 54134U;
    msg.priority = -50;
    msg.x = 19995;
    msg.y = -20052;
    msg.z = 24457;
    msg.t = -11334;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("KLOZUXAZEBVGSVPZRTZHDQBHEFBIYXXZXMCBVVRJFXHCAMIMWPEDDOLHONZ");
    tmp_tmp_msg_0_0.lat = 0.3445085197738158;
    tmp_tmp_msg_0_0.lon = 0.47949744283089635;
    tmp_tmp_msg_0_0.depth = 0.5691210260700729;
    tmp_tmp_msg_0_0.query_channel = 137U;
    tmp_tmp_msg_0_0.reply_channel = 232U;
    tmp_tmp_msg_0_0.transponder_delay = 16U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.287545769147751;
    tmp_msg_0.y = 0.19382665818658817;
    tmp_msg_0.var_x = 0.14083883629569516;
    tmp_msg_0.var_y = 0.19481399071261252;
    tmp_msg_0.distance = 0.12502190135555025;
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
    msg.setTimeStamp(0.9403908633316709);
    msg.setSource(55891U);
    msg.setSourceEntity(84U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(47U);
    msg.sys_id = 1558U;
    msg.priority = 95;
    msg.x = -4860;
    msg.y = 12126;
    msg.z = -16218;
    msg.t = -16549;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.2938444793777336;
    tmp_msg_0.x = 0.8194915395919411;
    tmp_msg_0.y = 0.7389543713777263;
    tmp_msg_0.z = 0.0005915513994800836;
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
    msg.setTimeStamp(0.34985509955229654);
    msg.setSource(36471U);
    msg.setSourceEntity(43U);
    msg.setDestination(16265U);
    msg.setDestinationEntity(141U);
    msg.req_id = 31407U;
    msg.type = 148U;
    msg.max_size = 56303U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6986455558998975;
    tmp_msg_0.base_lon = 0.7617557962209629;
    tmp_msg_0.base_time = 0.9940487712471506;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44964U;
    tmp_tmp_msg_0_0.destination = 26288U;
    tmp_tmp_msg_0_0.timeout = 0.9903601195942774;
    IMC::Map tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id.assign("YJVAXQVEAOERFOCKVQASDYNLPABQUERWBXZIHTOYIZXERQYKAUXDC");
    IMC::MapFeature tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.id.assign("SOQLPVBXTTDRYKXNNFECBYZXMZMQVOQANUSRNQKNTGDPKRKFYAUACZEJVYGLJEAUMQGIXHCEHOVFGMYKCOJZCMYLSRIUDYSDKOJYLFAPHCXXIATNJCVULWWQRZOIFSODVWSNTDXOIGOWJHFDWIVFIUIXWWQK");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.feature_type = 172U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.rgb_red = 37U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.rgb_green = 45U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.rgb_blue = 52U;
    IMC::MapPoint tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.lat = 0.8970913339397476;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.lon = 0.7927231122389236;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.alt = 0.05663206194170456;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.feature.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.features.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.8702818079158399);
    msg.setSource(64712U);
    msg.setSourceEntity(113U);
    msg.setDestination(32939U);
    msg.setDestinationEntity(214U);
    msg.req_id = 60882U;
    msg.type = 132U;
    msg.max_size = 64040U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6858508325441637;
    tmp_msg_0.base_lon = 0.8629296455719491;
    tmp_msg_0.base_time = 0.12042346990896258;
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
    msg.setTimeStamp(0.32757758724247377);
    msg.setSource(24636U);
    msg.setSourceEntity(145U);
    msg.setDestination(57775U);
    msg.setDestinationEntity(171U);
    msg.req_id = 63286U;
    msg.type = 105U;
    msg.max_size = 38287U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8688028878222818;
    tmp_msg_0.base_lon = 0.5186612466569229;
    tmp_msg_0.base_time = 0.10772826952110548;
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
    msg.setTimeStamp(0.8376221747425472);
    msg.setSource(50323U);
    msg.setSourceEntity(143U);
    msg.setDestination(12941U);
    msg.setDestinationEntity(207U);
    msg.original_source = 48611U;
    msg.destination = 52700U;
    msg.timeout = 0.6077081209191754;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GOQXTKQHTWEQPSREIXKCRFTPGIUIIKRMWNJGUZSIZYIENGEYADGHXACQURZTGWNCM");
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
    msg.setTimeStamp(0.5648221578766814);
    msg.setSource(47761U);
    msg.setSourceEntity(247U);
    msg.setDestination(41672U);
    msg.setDestinationEntity(207U);
    msg.original_source = 16737U;
    msg.destination = 49876U;
    msg.timeout = 0.4261710828103388;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("KVOAGFPXFAGZMIIVLFDWRYSGQEWBPDMIEOAKUCQUCBYFJZYUKWTYUGSTPEXQAZBVZERVTGNZQLNWQCH");
    tmp_msg_0.x = 0.7533539229459988;
    tmp_msg_0.y = 0.3215792400344142;
    tmp_msg_0.z = 0.945831452254624;
    tmp_msg_0.n = 0.9053616010785901;
    tmp_msg_0.e = 0.22447596543118997;
    tmp_msg_0.d = 0.3828783202387753;
    tmp_msg_0.phi = 0.024587285934897674;
    tmp_msg_0.theta = 0.7082800870984411;
    tmp_msg_0.psi = 0.5735247462119676;
    tmp_msg_0.accuracy = 0.12323223126548177;
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
    msg.setTimeStamp(0.9065900258911918);
    msg.setSource(34489U);
    msg.setSourceEntity(86U);
    msg.setDestination(8401U);
    msg.setDestinationEntity(118U);
    msg.original_source = 32027U;
    msg.destination = 56709U;
    msg.timeout = 0.525798679012279;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.2769906457736927;
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
    msg.setTimeStamp(0.6029312138268608);
    msg.setSource(26614U);
    msg.setSourceEntity(68U);
    msg.setDestination(47972U);
    msg.setDestinationEntity(143U);
    msg.type = 245U;
    msg.comm_interface = 9143U;
    msg.model = 50304U;
    msg.list.assign("CXWWUUBHSZVVHLGBERQLIRSNQEMERYSNNTMU");

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
    msg.setTimeStamp(0.6611330540081986);
    msg.setSource(22626U);
    msg.setSourceEntity(206U);
    msg.setDestination(37206U);
    msg.setDestinationEntity(167U);
    msg.type = 252U;
    msg.comm_interface = 60427U;
    msg.model = 31070U;
    msg.list.assign("JSLPBLKZPAAOUFPCTITEORCWVIQFLUBODZIVRGSHHYSLPSBLQWTSEVJJXZZZNURVNMWSSDAWEHDOLQWMRPMPZVYDISAVFRKACGFWKCXQOTGMIGEOVQMHPVRHSOJDLFIUHRECNKOXQKKZMDKNYOPAWBUELGTNIRUFCYFY");

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
    msg.setTimeStamp(0.3158922214007963);
    msg.setSource(26967U);
    msg.setSourceEntity(88U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(56U);
    msg.type = 165U;
    msg.comm_interface = 18056U;
    msg.model = 33778U;
    msg.list.assign("LSOFVHWXQKKVDNTEUJNBJSHDCBLCPFRXNNQCAF");

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
    msg.setTimeStamp(0.17012012782179287);
    msg.setSource(52185U);
    msg.setSourceEntity(212U);
    msg.setDestination(2108U);
    msg.setDestinationEntity(238U);
    msg.type = 70U;
    msg.req_id = 1096626144U;
    msg.ttl = 21065U;
    msg.code = 141U;
    msg.destination.assign("YHDDFYIEKZAVFDGFCTGNKLSZ");
    msg.source.assign("WSABUKBENCEGPVTD");
    msg.acknowledge = 207U;
    msg.status = 66U;
    const signed char tmp_msg_0[] = {-9, 93, -4, 96, 63, 106, -76, -30, -89, 1, 114, -104, 126, -5, -58, 41, -17, -4, 53, 110, 73, 97, 125, 100, -125, 82, -92, 45, -21, -65, 123, 9, -57, 84, 84, -3, -74, -99, -56, 22, -18, -75, -115, 41, 44, 18, 75, 65, 125, -80, 76, -73, -20, -38, 18, 96, 103, 15, 30, -86, -88, 103, 116, -103, 45, 118, 121, -88, -45, -18, -78, 67, -52, 43, -61, 89, -125, -35, -20, 114, -31, 106, -97, 93, 89, 57, -20, -103, 111, -55, -17, 74, -49, -7, -75, -25, 89, 119, 84, -82, -108, 55, 8, -86, 110, -32, 38, -123, 90, -124, -55, 123, 102, -105, 45, -20, -93, 36, -90, -69, 110, -16, 93, -85, 8, -45, -47, -71, -59, -30, 51, -113};
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
    msg.setTimeStamp(0.019167399528757345);
    msg.setSource(11902U);
    msg.setSourceEntity(95U);
    msg.setDestination(13374U);
    msg.setDestinationEntity(126U);
    msg.type = 206U;
    msg.req_id = 3679406706U;
    msg.ttl = 20406U;
    msg.code = 96U;
    msg.destination.assign("WGSCPFIDAWCVHESHWGQETYQAMBZYLDZQUWROMIUPZLFEUXCOY");
    msg.source.assign("AIUGPHHHTBJVHHEOETQBMIPVVQCRQRFZVILEEXOKM");
    msg.acknowledge = 121U;
    msg.status = 99U;
    const signed char tmp_msg_0[] = {-71, -73, 118, -94, -37, 115, 71, 61, -65, 116, -111, 94, -28, -115, -76, -57, 100, -95, 41, 60, -89, -41, -11, 54, -54, 31, 90, 24, -79, 44, -5, 100, -58, 87, 100, 117, 28, 34, 31, -120, 16, 120, -43, 43, -28, 0, 87, 33, -62, -64, -24, 16, 58, 13, -46, 90, 84, -10, 26, 56, 93, -19, 109, -64, -50, 65, 6, 126, 35, -97, 59, 112, 29};
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
    msg.setTimeStamp(0.9460614661556074);
    msg.setSource(37207U);
    msg.setSourceEntity(97U);
    msg.setDestination(57054U);
    msg.setDestinationEntity(57U);
    msg.type = 147U;
    msg.req_id = 3780117636U;
    msg.ttl = 50362U;
    msg.code = 115U;
    msg.destination.assign("IAXTSDSKJNPPRANZSTVTOWSFYUDEGUFDKVPXWYZFOCBQBKDTDWLLFWPNIQKQWOVEATOFJFHKARLPLWOPMNYBGYNJQNUNXGDLXMMSMOSOFRRIEIGXEEBWJHQALIJAOGALVHMQPQZUZVSZGCMRKICICRGVZCLDNUOVDHPATTUES");
    msg.source.assign("XULZGXWTHZEQVLSYYMMKVZYJK");
    msg.acknowledge = 202U;
    msg.status = 19U;
    const signed char tmp_msg_0[] = {-9, -85, 61, -60, -22, 35, 104, 101, 40, 21, -56, -101, -123, 30, 54, 63, -2, 48, -108, 102, -54, -84, -14, 97, 46, -45, 59, -118, 74, 120, -1, 40, 93, -35, 12, -81, -62, 36, 19, 72, -33, -25, 67, -115, 101, -32, -40, -43, 26, 117, -27, 89, -104, -79, -15, -22, 76, -121, 58, 62, 93, -9, 104, -56, 8, 54, 71, -53, 46, 23, -120, 51, -47, -10, 89, -20, -3, -56, -95, -120, -64, -63, -25, 124, 68, 116, 45, 32, -8, 51, -22, 74, -44, 68, 62, -47, -27, 16, 44, -118, 108, 110, 56, 103, -47, 30, -75, -125, 117, 0, -26, 3, 112, -39, -16, 68, -44, -77, 97, 101, 102, -9, -17, -120, -46, 29, 4, -56, -75, -34, 60, -109, -103, 66, 98, 10, 110, 99, -57, 76, -18, -109, -52, -54, 75, -62, 23, -45, 31, 37, 34, -12, 25, 73, -35, -37, -46, -123, 28, 117, 113, -122, -109, 8, 107, 2, 93, 30, -97, -23, 119, 87, 107, 86, 22, 28, -51, 8, 114, 34, 92, 55, 44, -12, 77, 32, -119, 96};
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
    msg.setTimeStamp(0.7366720115824373);
    msg.setSource(1975U);
    msg.setSourceEntity(35U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(8U);
    msg.id = 186U;
    msg.range = 0.7748474672219953;

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
    msg.setTimeStamp(0.9449190823966759);
    msg.setSource(62430U);
    msg.setSourceEntity(88U);
    msg.setDestination(57928U);
    msg.setDestinationEntity(189U);
    msg.id = 124U;
    msg.range = 0.3219742408809356;

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
    msg.setTimeStamp(0.643225282777657);
    msg.setSource(40770U);
    msg.setSourceEntity(45U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(18U);
    msg.id = 78U;
    msg.range = 0.7118092156120774;

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
    msg.setTimeStamp(0.9369759922675572);
    msg.setSource(64218U);
    msg.setSourceEntity(91U);
    msg.setDestination(33041U);
    msg.setDestinationEntity(152U);
    msg.beacon.assign("SGSDUDDYJFEICHUSXHDXEYEDXTACIBDHQZENRPLZMVOXVLYBORSHQACNGLWFIALUSIWKVZVGIKLNYFQTPLOETBJGBLXHVJZFJDKLXJVOKQYRKGWCOFQBCRHLZCXEHQMKNQUWFIHANXDRETEGBEHEOZIBRPKSRPYKCMTGJWGKSWOSSIPTAVCDJKFAHJUIVRMZGMTMMABZNFUTURFOQIVWAGPLTJSNZCUOMWZADWMP");
    msg.lat = 0.17167539961105482;
    msg.lon = 0.3303172265844071;
    msg.depth = 0.5890805125030452;
    msg.query_channel = 198U;
    msg.reply_channel = 250U;
    msg.transponder_delay = 17U;

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
    msg.setTimeStamp(0.12569231137380332);
    msg.setSource(12845U);
    msg.setSourceEntity(77U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("RNRHVCHCXQYAMAAPEQFVMJJTZAUJITOQBISLPCBPKXVUFLIGAGLAKUGYVDNKOWPYWUTDESUKLNBWEGLPWFSPBZIJRBEOMZTWXIZAFZTLXQQTVNGNPPHMBQHDCGZZGOSXCCSKNJSBHXFAFFJEHCYGRUNQLKLMTBYYLGDZFDRXYWRBRWJQENVPKDIFUIUSKIFCC");
    msg.lat = 0.20869488627376231;
    msg.lon = 0.08254842209671753;
    msg.depth = 0.16061540561422794;
    msg.query_channel = 33U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 94U;

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
    msg.setTimeStamp(0.7401236733417478);
    msg.setSource(62046U);
    msg.setSourceEntity(56U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(46U);
    msg.beacon.assign("XQXHELVYIKLCCUGURKBHEKVF");
    msg.lat = 0.2459561256453182;
    msg.lon = 0.0702864352325987;
    msg.depth = 0.01627328803635275;
    msg.query_channel = 2U;
    msg.reply_channel = 201U;
    msg.transponder_delay = 100U;

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
    msg.setTimeStamp(0.30048143719750287);
    msg.setSource(8512U);
    msg.setSourceEntity(64U);
    msg.setDestination(5126U);
    msg.setDestinationEntity(214U);
    msg.op = 23U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MGPFJPMRUHEQVMLOZRKIGWMBKTSEYFYBGCIUYRUEWHBIBTIACIJKKUHPPEBPOJNYWNLUCZCJMONFNXHPDZZLAHLKWFPLXDLJAHXGTMSQXHLUKIUIEHGTXTZSJINXVFAAVQFFJQXEYXFFIWCMHRLLDYSKVZTXTAYPOVVWDRQACPODGYPCVDRSWTUQQRZIYMWGJGYTQANOVSQWBOOCNDSEANRBKRETRBGNUOZJLXNQJDCVKFCBKMEOWMZHGBDU");
    tmp_msg_0.lat = 0.5816224343418391;
    tmp_msg_0.lon = 0.7106671584415987;
    tmp_msg_0.depth = 0.39780640045845916;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 166U;
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
    msg.setTimeStamp(0.445921006639055);
    msg.setSource(30058U);
    msg.setSourceEntity(13U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(238U);
    msg.op = 252U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GLFIECRWOUOFWXMHLUIFMGHPFOSKLDPODHTPEZCICZMNVWHAWATXGFXERZTNLTWYJKDVWPFQZEMZKAXVOSYDJBCNMSZIBMFFIMJEGBWQDMXXU");
    tmp_msg_0.lat = 0.7907577325692672;
    tmp_msg_0.lon = 0.3004327759181229;
    tmp_msg_0.depth = 0.35279178676565137;
    tmp_msg_0.query_channel = 199U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 204U;
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
    msg.setTimeStamp(0.1663999026726699);
    msg.setSource(34393U);
    msg.setSourceEntity(140U);
    msg.setDestination(62395U);
    msg.setDestinationEntity(140U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.5424388352392316);
    msg.setSource(59282U);
    msg.setSourceEntity(189U);
    msg.setDestination(8207U);
    msg.setDestinationEntity(107U);
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 120U;
    tmp_msg_0.text.assign("DUAFUWTOZKNDCGEABUADABJYFIHKPGDWVZBQMYNQTOJQKSXENMLZJICITSHDDGILAVFMIWPKDEEKCGZZPHDZBFQCELKXUKCHKGCNMPFYLGGYTJCGLGHUCRZESHMQTAIHXIRZYJLPUXWWOFJVQBMSZBROMBBGRBCEXMWUWRYLTVRPVPYSQIUAEAAFJPT");
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
    msg.setTimeStamp(0.674388075583901);
    msg.setSource(1708U);
    msg.setSourceEntity(146U);
    msg.setDestination(54033U);
    msg.setDestinationEntity(245U);
    IMC::HandPosIn tmp_msg_0;
    tmp_msg_0.type = 134U;
    tmp_msg_0.u_x = 0.17574699049731934;
    tmp_msg_0.u_y = 0.20355900904001212;
    tmp_msg_0.u_z = 0.8689709339620595;
    IMC::TrajectoryReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.r_x = 0.4031523674145002;
    tmp_tmp_msg_0_0.r_y = 0.8660232470937421;
    tmp_tmp_msg_0_0.r_z = 0.17171544730644195;
    tmp_tmp_msg_0_0.v_x = 0.9125618838965376;
    tmp_tmp_msg_0_0.v_y = 0.9127130287281278;
    tmp_tmp_msg_0_0.v_z = 0.42993221761242084;
    tmp_tmp_msg_0_0.a_x = 0.025694307460278454;
    tmp_tmp_msg_0_0.a_y = 0.5049034468246798;
    tmp_tmp_msg_0_0.a_z = 0.27956976541907674;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3857017008022078);
    msg.setSource(3720U);
    msg.setSourceEntity(194U);
    msg.setDestination(8715U);
    msg.setDestinationEntity(98U);
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 241U;
    tmp_msg_0.mode.assign("ABUFARROCLUTXZKBCIQRFYMTSANLSEXAYVWHNNGOSJM");
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
    msg.setTimeStamp(0.4810080781929581);
    msg.setSource(2065U);
    msg.setSourceEntity(42U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.6557765134713691;
    msg.lon = 0.18890577591928293;
    msg.depth = 0.19393959623609636;
    msg.sentence.assign("FOIAEJXUYLCJKFZLNTSVGUMIPQCGEODGZBMJAEOSUMFVZNVUXBDPTDWYDEIAWBZRRTZFBIWFVOYUYTWICAPKYYVVKCJMVSXBHGCXBZGLFDKBQHIHONTEEXSZYQJQWUGPCGCXESATCQZHWLUMAQHFCOELSRKMMZPNHMAWMDRRMVWOFKLBFDRLSHHZBIXEDJCLIRKUTPQJHRJPQIQXYNGKD");
    msg.txtime = 0.13168195622854395;
    msg.modem_type.assign("WDAADABJGBMGQSQNDUGCHORBYIONKSVI");
    msg.sys_src.assign("ZBCOVHZOAWFAQHQJPGFQYAQOHSJNZIXKYCBWXJCCUQMKUOLQGCGXTZWQUTYJOPWBXMSFGMIEIZPLGJDNLORBSDHZHRUNNMKLGDHFNFUFVAWUIS");
    msg.seq = 60955U;
    msg.sys_dst.assign("ZXBOOWIENQABDZSCMKEEWZSOVOBIEVCTKJVXJTTVYDJCJEZSSLMCCYXPGWOOEWBITAPTEEWMDXFJTXPBUHJDDFVWFIDDVNCQVFNGUHSSEYRVVGRYGQSDPJUMTHABGWCXLNHRQRLAYPPUXTRFGAWMJRRLDDQIABQMKYQSHLMWJTOZMLU");
    msg.flags = 242U;
    const signed char tmp_msg_0[] = {14, 33, 106, 115, 82, -38, 72, 34, -73, -17, -29, -86, -1, 12, -3, 70, -115, -82, -123, -74, 87, -122, 82, 47, -106, -78, -29, -37, 1, -27, -45, 111, -105, -34, -38, -125, -88, 20, -40, 103, -25, -72, 11, -77, -50, 16, 47, 122, 63, -89, 50, 126, -65, -15, -122, -43, -5, 124, -79, 65, 72, 80, 0, -87, 93, 55, -87, 38, -86, 112, -74, 33, 95, -44, 94, -16, -76, 32, 74, -33, 104, 124, 114, 11, 84, 104, 126, 32, -117, 0, 20, -100, 78, 9, -20, -112, -41, -102, 118, 99, -82, -93, -59, 94, 55, -46, -43, 47, -118, -117, -23, 35, 4, 49, -19, 87, 62, -98, 36, 27, 85, -106, 59, -57, 74, -46, -5, 27, 44, -49, 5, 0, 81, -21, -25, 85, 4, 84, -76, 11, -11, 73, 82, 22, -99, 118, 53, 9, 109, -74, 77, 54, 78, -89, 48, 8, -66, 94, -9, 66, 108, 124, 24, -116, 21, 5, -8, 76, 32, -110, -26, 5, 22, -8, 0, -43, -36, -77, 97, -91, -102, 65, 84, -124, 57, 100, 49, -56, 117, -109, 6, 37, 39, -47, 89, 62, 95, 110, 88, -63, -76, -67, 45, -1, 15, -11, -92, -102, -6, -102, 14, -75, -126, -124, -81, 27, -41, -18, -97, 83, 72, 27, -60, 47, 57, 122, 84, -83, -88, 39, -63, -109, 119, -88, 7, -121, -28, 101};
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
    msg.setTimeStamp(0.2052120513406841);
    msg.setSource(10919U);
    msg.setSourceEntity(97U);
    msg.setDestination(25544U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.17025139643554787;
    msg.lon = 0.5843401596445675;
    msg.depth = 0.03615379826872245;
    msg.sentence.assign("NPMDHNGQLCZSIBBZJZPMUTEVHPEUYSANFBMKQOWDVUAWLLXYZQVVBIXRCDEYMISPGNOAJAJNNKQMAEGCATHZYMZI");
    msg.txtime = 0.7686488571253834;
    msg.modem_type.assign("YABSCHCGXNMKGULMQNJJWGZYFFBDCCKWHLZEDFIBZKKASOTSTMYWSNTIKJKQUHOPXZOXHSLJZQOQJBXCTZEEKRHWXCYLOEZUTLVTLDFPVIBURXOURTAMAIQFUIWGQZJMESTENRPLJOWQRYPPJAAXHYWR");
    msg.sys_src.assign("CDGCPGRZWNYADFRNJPVNQATBTTVNIONAEWILUVUKPNRJUWLBPGRBIGCJVRKHXZQB");
    msg.seq = 26292U;
    msg.sys_dst.assign("LSQKCIGMSXXNTKSOBNPEVEYOSRHEKRBDUYSXNLWCGRCTJWOLJMXKBUKIUCQWZJXBZIZYDVFUPJHJVHUITPFMUJSHYRKYNKZCBKJOTSOVTJMMWDZUYUJWICFOTIFPWDRDDZVZYZEAQXSVYQROWCXCEYGXBWBJF");
    msg.flags = 102U;
    const signed char tmp_msg_0[] = {-124, -113, -105, 57, 19, -87, -18, -63, 34, -14, -17, -121, 86, 94, -109, -80, 88, 30, -103, 101, -34, -54, -77, 78, 36, 58, 47, 122, -83, 126, -110, -12, -31, 47, -102, -101, 102, 126, 78, 36, 51, 108, 88, -3, 84, -53, -86, -53, -98, -120, -105, 62, 4, 49, -100, -92, 111, -89, -59, 49, -116, -23, 67, 79, 100, 78, 70, 59, -102, -41, -27, -39, -125, -122, -66, -115, 61, -55, -68, -9, 119, -15, 61, 32, -41, 101, 10, 8, 39, 99, 52, -123, -50, 10, 41, -127, -64, 95, 42, -74, 59, -90, -62, 105, -124, -48, 49, -71, -107, 116, -49, 96, -85, 13, 34, -25, -2, -60, -94};
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
    msg.setTimeStamp(0.40682951730281525);
    msg.setSource(32850U);
    msg.setSourceEntity(191U);
    msg.setDestination(9680U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.3140454752611004;
    msg.lon = 0.5581545972714382;
    msg.depth = 0.7023319480320239;
    msg.sentence.assign("VVZBUUEHBHQXGOJNGFPSFFHCLHKQMXHRLRYJOAQEGDQJMBTJFWLBXFXEBUZYOLDRYWNUMAJJNDRTKPOSWCPSYZZXUWSCCMDVCUVTWBTSTYGSPMRGUIGNKAI");
    msg.txtime = 0.3068435910814943;
    msg.modem_type.assign("LYDUIGIOQTOYDNNBMLOJSWQBKPUWBPB");
    msg.sys_src.assign("ECODLFVEELYBANLWAOXYQXQIGNAUXDIKRJGVAHUGZJUAKRLBOOBYFUPPSVJNXYQDRMBLDPJORTUYOTMJBWEVREGTUQJKKMZQWGHLSIAGGNAQMCMXOKHZGQEPXXVHZIUPXFFBLJAYRCDWSBVSDHPSCBYIRATKMSCKKEPCOKFVOMEEILKPSNCSMTIHDUQFBFYRXQTYNCRZVDCZSWGIFNWNBHZNTITPEQIUFHNLUZFPTZJROVLAGWMWCSWHTV");
    msg.seq = 64152U;
    msg.sys_dst.assign("SKUOUPSNILNYMPMFNJFYUGBAMYSIYZWFZTVRTCZFVZPSHNJKUVVGOPHGWTJOGRKREETMXJZGQEFTVRAKLXTBMKZGAAERQDLTQPLEQDDFNAD");
    msg.flags = 149U;
    const signed char tmp_msg_0[] = {19, -104, -17, 26, -56, 108, 75, -23, 67, -56, -47, -81, -81, 74, 50, -48, 9, -70, -117, 101, 34, 111, -22, 48, -23, 107, -37, 36, 13, -12, -1, 102, 62, 92, 83, 92, -60, 45, -50, -98, -63, -126, 52, -79, 96, 22, -98, 47, -48, -93, 7, 59, -97, -45, 92, 9, -2, -125, -94, -55, 65, 21, -122, -69, 61, -103, 107, -67, 116, -54, 42, -51, 39, 95, -48, 125, -9, 85, 83, 94, -68, -93, -124, 29, -45, 1, 57, -51, -49, -23, 3, 120, -44, 67, 113, 26, -117, 110, 76, -98, -98, 90, -78, -17, -6, 116, 77, -90, -104, -124, -104, -81, -30, 49, 16, 47, 98, 62, 25, 26, -95, 18, 58, -112, -92, 64, 86, -93, -2, 44, -81, 42, 58, -18, 114, -10, 85, 2, 31, -23, -81, -82, 53, -114, 46, -57, -100, 60, 8, -16, -40, 26, -50, 62, -119, 48, 93, 14, 3, 53, -73, 12, 104, 41, 120, -4, -15, 71, 58, 87, -113, 99, 58, -5, -120, 55, -93, -89, -91, -6, -40, -65, 117, -12, -38, -18, -109, -11};
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
    msg.setTimeStamp(0.22776643690474274);
    msg.setSource(26100U);
    msg.setSourceEntity(94U);
    msg.setDestination(43031U);
    msg.setDestinationEntity(221U);
    msg.op = 35U;
    msg.system.assign("TOTVGLHBJNNARULNNTPGHYLUYSJUBEUPJYFUCDUALICEGEDSTJGKZIZRRWIWVZTWCCWCHOXSQREMXMTIPFHUOMINDEZXKLPJFAKDGDBKWKSHPXCUTAFMIJVMEYLNOOBCVHIQJIKKLVYZMMMBJYDFUOTGWWDLIBV");
    msg.range = 0.3702943928305582;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 14U;
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
    msg.setTimeStamp(0.1970473374765479);
    msg.setSource(19330U);
    msg.setSourceEntity(51U);
    msg.setDestination(7200U);
    msg.setDestinationEntity(134U);
    msg.op = 43U;
    msg.system.assign("GJWQXXQUGBTZUYNQCEKLHBOLQROFQPWLVLSWZVDPTGUVYLDYBKJHJXWNDFCGKYMSKTUGHUBIRKTBIXDJHXLBFDWMRKAUXMYACZJQSRRAIMVJSNNTXTNEVPULCPLXMJDUEIRXSDNI");
    msg.range = 0.24769986833543933;
    IMC::ExperimentControl tmp_msg_0;
    tmp_msg_0.start = 189U;
    tmp_msg_0.delay = 0.6473636873922786;
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
    msg.setTimeStamp(0.3612865636205268);
    msg.setSource(46579U);
    msg.setSourceEntity(49U);
    msg.setDestination(16511U);
    msg.setDestinationEntity(19U);
    msg.op = 57U;
    msg.system.assign("NALGWRFDILNVJDQJNBPOLMYBUGGL");
    msg.range = 0.4536573502368332;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("XNNWWWOJQJTULIQKSNPCJQZGIGHZSTCROWYDRDCGHAEREFCUWOHKTOLEARLCSQNLOSMVPYSKFHEYRAZFYZMFFOUBWQPXJDATQCUNGNBTYIVOIYESGFNYVRMEBMJNHLKMZSODBUCTLRAPSQDAKIZHBXEQEVVWNHLJXKVMDPRTEIUMLBPGHJWOPVAPXXQPKSGXBWDUHIYTZUUCGDBVYJMFTBFVAFHKML");
    tmp_msg_0.predicate.assign("KTBMLIWDKPFQCAVGAGOUEYFEYXRUFODHQQWVEWBXWJSVHJSDNFDXSMOVLVQHYLTIHVTOUGREKGLZLPPNUYDF");
    tmp_msg_0.attributes.assign("NPCDMARRTXZGPUFEPRJFZLEMLVQWTKEYVIANVSN");
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
    msg.setTimeStamp(0.029813667751570905);
    msg.setSource(12894U);
    msg.setSourceEntity(169U);
    msg.setDestination(16557U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.06292390376655965);
    msg.setSource(1766U);
    msg.setSourceEntity(142U);
    msg.setDestination(13392U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.6315778559990696);
    msg.setSource(7613U);
    msg.setSourceEntity(203U);
    msg.setDestination(38579U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.019494361615633338);
    msg.setSource(57802U);
    msg.setSourceEntity(80U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(68U);
    msg.list.assign("FDQAWCSYPCSFNDTNLHVYWJCWZOLOMFVXRQVBJOPKMBRVUOIPKVZIDZCUEIWLQDESIFFVYFCLBZHDBWDDHHSLKUEWIZVAUJQTHZCAHXGTULZWYAOGKXBUTNEXLZSUTPGMMKEKWKLRUFHNUJKNEWOQQLEX");

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
    msg.setTimeStamp(0.9021845902741011);
    msg.setSource(65484U);
    msg.setSourceEntity(16U);
    msg.setDestination(42800U);
    msg.setDestinationEntity(183U);
    msg.list.assign("AAVDIOVOFDLEMHDGIAXKEJCKGXAUQLPOORWJYNSMWEQSQMVMSFMZXARMGIKUOPDNZFZJCXMGOHLYWZOBETPOLLSPCDHFJVNUULICHTUENLQ");

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
    msg.setTimeStamp(0.1922619668868769);
    msg.setSource(15346U);
    msg.setSourceEntity(223U);
    msg.setDestination(44311U);
    msg.setDestinationEntity(95U);
    msg.list.assign("MEFSJOIPNPDCMJWCANMAYCFUFAXGKKZLMNUHBEYPADYKSQARWGJHQOEVLHXLDMDHODOBGLWRHBGERFMCUPJADTVZTSLJWGQFNWHUEZIKVTONMUBSXBXILCIN");

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
    msg.setTimeStamp(0.173087979382318);
    msg.setSource(62061U);
    msg.setSourceEntity(233U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(185U);
    msg.peer.assign("DWXNQPCTVSAFEQAWHBKPLUUXHCHBTVRYZMUZEMGAIKEMREQXFNFAQTJKCCCRDMTBTWUABOYRWSNDQVIZPISHLKOAYFKBTVAWKZYJSFGYCHIBGIRSUNYDNXGOBJRLSCFOLMESPDOVWLGTWOOOJXEGHLCBVYQJMHLVFSGIIEJPJZPAWAVRUUPPFPULQETBNQSOXXWKQCNKLMJXXDJVDZTZDYXLRUZWIJGUOTNDIZMF");
    msg.rssi = 0.5306797448634145;
    msg.integrity = 23621U;

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
    msg.setTimeStamp(0.8944014953818351);
    msg.setSource(43009U);
    msg.setSourceEntity(69U);
    msg.setDestination(23392U);
    msg.setDestinationEntity(66U);
    msg.peer.assign("OJWVVNLAYEFUWBJEJFIAJLQKMLNJDVMBOTXQSMBADNSPOMWXZKCMXUIKMFACSSKBAFGZXFVHQRTKXAVZWUPJZBGNEYMXSTLTYLQGLYLQQJWAHNYFRGEVRSMCIHINDDTXOFDTMBHPPUJ");
    msg.rssi = 0.6091421353450386;
    msg.integrity = 61259U;

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
    msg.setTimeStamp(0.8255388133251433);
    msg.setSource(43873U);
    msg.setSourceEntity(115U);
    msg.setDestination(11490U);
    msg.setDestinationEntity(191U);
    msg.peer.assign("ZCIZOTQPSKZZLTZRFGTHSBKXHPVRMY");
    msg.rssi = 0.7293695647064767;
    msg.integrity = 42173U;

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
    msg.setTimeStamp(0.6503203394870543);
    msg.setSource(17385U);
    msg.setSourceEntity(42U);
    msg.setDestination(19875U);
    msg.setDestinationEntity(237U);
    msg.req_id = 258U;
    msg.destination.assign("AAQSNWTPKEGJIOKAJCZAVYFAGRUTMHYDZVYSRICZRNZZNIGGADVVHSM");
    msg.timeout = 0.6226558795582444;
    msg.range = 0.03783192332111962;
    msg.type = 23U;
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 34230U;
    tmp_msg_0.sys_dst.assign("DLTOAAZLMNNCOXZTIUOJTANWGHXPMXRMXEYWLQORWUBSRWSPSDGTZBPRGQJVKENFKKOVOSRVCWZCCQUJQCRTEUBDCJDUQXMYZFIFBSEORHTGPZYIJGQRIILULUDSEAHMQHQF");
    tmp_msg_0.timeout = 0.8474070262440092;
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
    msg.setTimeStamp(0.7730707694080059);
    msg.setSource(38395U);
    msg.setSourceEntity(70U);
    msg.setDestination(23360U);
    msg.setDestinationEntity(109U);
    msg.req_id = 56081U;
    msg.destination.assign("MDSAEPFDTSWHDDBIEVRLOYZMNLUISAYQFSYIRWAQJMCOVUZCJNQWWNLJKPQZMMVXSYNLTHKFKJBUFCLCCXYOUHAPATAZATEFLQEWURJSELOFDDITZTBPUSDVCJXZPIOOLXGNEJQCJAXIPVEQNYFRKBYTINPXQZABWDKCGHSODLKKLVJBPUNOSWHFHZE");
    msg.timeout = 0.4519442568017815;
    msg.range = 0.3984932655253156;
    msg.type = 234U;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 184U;
    tmp_msg_0.lat = 0.8487884306181949;
    tmp_msg_0.lon = 0.40772351328990997;
    tmp_msg_0.x = 0.9489456402344641;
    tmp_msg_0.y = 0.2874369676361921;
    tmp_msg_0.z = 0.669385098679338;
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
    msg.setTimeStamp(0.747398083242603);
    msg.setSource(16040U);
    msg.setSourceEntity(3U);
    msg.setDestination(2861U);
    msg.setDestinationEntity(113U);
    msg.req_id = 30898U;
    msg.destination.assign("VIMDRGXKDGHQGZOEAOBUYPWNDEWTDLTTKXWDFPITPUVNRCHGBDCQUJYXEGATKMAYKUNQPBAIVHSHNAJPDLZIOUWJDVRUNYBTWFIHOYOVJBYXLGCNCZKIKNFEQZMWFSKPLXUEEJOILNLLWOWPZTKELHEFMSRQISSKPQFEVCMKJJRQDBHAYZVQCYONAFSRCXUZVCGSSTAA");
    msg.timeout = 0.17382784788058459;
    msg.range = 0.19145874735166313;
    msg.type = 85U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7326427289909085;
    tmp_msg_0.base_lon = 0.4707477928148678;
    tmp_msg_0.base_time = 0.9299562914429964;
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
    msg.setTimeStamp(0.4379591231552381);
    msg.setSource(27830U);
    msg.setSourceEntity(198U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(193U);
    msg.req_id = 36758U;
    msg.type = 224U;
    msg.status = 97U;
    msg.info.assign("HHUVMJRMIOQSCOSFFFQDGOVDEDLIUOWYJEFRCKEERFBLUURVQWBASPWYBTSCUNDZGCQXOZIFCEESCVVSABNRNFPPLXMGFRX");
    msg.range = 0.5437117100624282;

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
    msg.setTimeStamp(0.6395158965591795);
    msg.setSource(14332U);
    msg.setSourceEntity(186U);
    msg.setDestination(43750U);
    msg.setDestinationEntity(181U);
    msg.req_id = 32012U;
    msg.type = 227U;
    msg.status = 133U;
    msg.info.assign("IGQUITRTIFWUZDVBXRXKSVHOJCODDWNJIGYPUMXZTJFA");
    msg.range = 0.6989789485793949;

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
    msg.setTimeStamp(0.05769280177397085);
    msg.setSource(45453U);
    msg.setSourceEntity(197U);
    msg.setDestination(33848U);
    msg.setDestinationEntity(151U);
    msg.req_id = 4813U;
    msg.type = 108U;
    msg.status = 78U;
    msg.info.assign("ATLYIZHAJSOFAFWARMQMVNPQRITSXEZCHVYPUPEWJTNFPMNEGHWIPQHBUBFTIBRKDQTR");
    msg.range = 0.9066526631299479;

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
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.275966040516224);
    msg.setSource(55624U);
    msg.setSourceEntity(101U);
    msg.setDestination(806U);
    msg.setDestinationEntity(114U);
    msg.system.assign("MDUPCMDAMAFSMNGTCXHCGXRHVDUGIWHVNCGYSMAMULRIYVYLMFQROZBGNQEORTLUFSQKJSNEOOQKPOZUUSQHLNMAJEVTACTWNIZRZWGXP");
    msg.op = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.3215125712157103);
    msg.setSource(25985U);
    msg.setSourceEntity(52U);
    msg.setDestination(7043U);
    msg.setDestinationEntity(160U);
    msg.system.assign("JYXFJXJSNLZRWRNBVSUVGSGUKEJTHKNOMSMVTTFPITDBORGXETELNQYZJWKNSBYHQMFOFNQZFZEXNXUPCKGUWYPMIZVGCWCEUEGIBQMHPPXSZJCQAYOZVWDQBOSAEVWVDVYQZDTKIADMRGOAAQGBIZFPWBFSVOACURMOGUYLMHTRIOJRKKLFIUPNDYXOWRRNWJ");
    msg.op = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.8972123054072555);
    msg.setSource(5159U);
    msg.setSourceEntity(7U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(235U);
    msg.system.assign("FNUAJIKWWEBRVXAZLRSOLCQVRNSLTPABSLQVZTFSWEETMYMJKPMGCURKQYYAODAFYHZEJQYIOGIZAGJBUMHCTHXTUDEEIPGXCLGFJPNLWOFJADFOAOLCJRUIUEXKBSUHWPRKXTKPGFQIDDKJAHUCCSMBNWGHDW");
    msg.op = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.841619517831334);
    msg.setSource(34967U);
    msg.setSourceEntity(125U);
    msg.setDestination(56997U);
    msg.setDestinationEntity(235U);
    msg.value = 27027;

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
    msg.setTimeStamp(0.6202644370092412);
    msg.setSource(45848U);
    msg.setSourceEntity(126U);
    msg.setDestination(51103U);
    msg.setDestinationEntity(163U);
    msg.value = 2024;

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
    msg.setTimeStamp(0.7589443551939797);
    msg.setSource(17209U);
    msg.setSourceEntity(244U);
    msg.setDestination(20913U);
    msg.setDestinationEntity(210U);
    msg.value = 26988;

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
    msg.setTimeStamp(0.9481343265840535);
    msg.setSource(34238U);
    msg.setSourceEntity(204U);
    msg.setDestination(33194U);
    msg.setDestinationEntity(129U);
    msg.value = 0.6349517811951035;

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
    msg.setTimeStamp(0.7453200182071196);
    msg.setSource(23838U);
    msg.setSourceEntity(142U);
    msg.setDestination(1006U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9076729503994075;

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
    msg.setTimeStamp(0.43234134266463875);
    msg.setSource(18575U);
    msg.setSourceEntity(241U);
    msg.setDestination(17604U);
    msg.setDestinationEntity(170U);
    msg.value = 0.2059571885679503;

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
    msg.setTimeStamp(0.6230582552005922);
    msg.setSource(42395U);
    msg.setSourceEntity(34U);
    msg.setDestination(13503U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8851358702516161;

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
    msg.setTimeStamp(0.11988127064026088);
    msg.setSource(47072U);
    msg.setSourceEntity(157U);
    msg.setDestination(58113U);
    msg.setDestinationEntity(55U);
    msg.value = 0.24390005864761122;

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
    msg.setTimeStamp(0.9233303981882632);
    msg.setSource(36656U);
    msg.setSourceEntity(193U);
    msg.setDestination(61573U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8524934091618589;

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
    msg.setTimeStamp(0.5572244264806847);
    msg.setSource(48316U);
    msg.setSourceEntity(235U);
    msg.setDestination(2465U);
    msg.setDestinationEntity(177U);
    msg.validity = 34519U;
    msg.type = 35U;
    msg.utc_year = 16277U;
    msg.utc_month = 6U;
    msg.utc_day = 141U;
    msg.utc_time = 0.197008202062796;
    msg.lat = 0.3250848104087005;
    msg.lon = 0.09386443642701836;
    msg.height = 0.19341687577533306;
    msg.satellites = 251U;
    msg.cog = 0.7504627020312296;
    msg.sog = 0.6972016328422096;
    msg.hdop = 0.4093413694815905;
    msg.vdop = 0.65222741824701;
    msg.hacc = 0.5973245339049694;
    msg.vacc = 0.39934939145678916;

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
    msg.setTimeStamp(0.10093115015480181);
    msg.setSource(10315U);
    msg.setSourceEntity(26U);
    msg.setDestination(46407U);
    msg.setDestinationEntity(199U);
    msg.validity = 13643U;
    msg.type = 81U;
    msg.utc_year = 50942U;
    msg.utc_month = 56U;
    msg.utc_day = 176U;
    msg.utc_time = 0.8354797827131795;
    msg.lat = 0.9080810864012002;
    msg.lon = 0.34410582257073885;
    msg.height = 0.0038649732363347233;
    msg.satellites = 29U;
    msg.cog = 0.5666977077374741;
    msg.sog = 0.6446562052679999;
    msg.hdop = 0.6389167789181875;
    msg.vdop = 0.4213979614757465;
    msg.hacc = 0.07574872869961691;
    msg.vacc = 0.8594319906787875;

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
    msg.setTimeStamp(0.7858971535788049);
    msg.setSource(52329U);
    msg.setSourceEntity(231U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(121U);
    msg.validity = 42172U;
    msg.type = 231U;
    msg.utc_year = 40404U;
    msg.utc_month = 240U;
    msg.utc_day = 10U;
    msg.utc_time = 0.1617955793286514;
    msg.lat = 0.3770070140186268;
    msg.lon = 0.5260018408745328;
    msg.height = 0.07497823996557795;
    msg.satellites = 2U;
    msg.cog = 0.22659849642292962;
    msg.sog = 0.5983516536622123;
    msg.hdop = 0.8900857964851756;
    msg.vdop = 0.5571477789409628;
    msg.hacc = 0.3655151748171619;
    msg.vacc = 0.8632736376160527;

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
    msg.setTimeStamp(0.022772988496271185);
    msg.setSource(27448U);
    msg.setSourceEntity(164U);
    msg.setDestination(59633U);
    msg.setDestinationEntity(107U);
    msg.time = 0.9362405255428864;
    msg.phi = 0.8182373611839334;
    msg.theta = 0.2561995629969367;
    msg.psi = 0.3190249315808886;
    msg.psi_magnetic = 0.4803209853208832;

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
    msg.setTimeStamp(0.8823838129284806);
    msg.setSource(15374U);
    msg.setSourceEntity(165U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(23U);
    msg.time = 0.6150869374453096;
    msg.phi = 0.15931517667738115;
    msg.theta = 0.8930092150803538;
    msg.psi = 0.97608535176541;
    msg.psi_magnetic = 0.06605329249951675;

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
    msg.setTimeStamp(0.5195356467051151);
    msg.setSource(30110U);
    msg.setSourceEntity(214U);
    msg.setDestination(48940U);
    msg.setDestinationEntity(222U);
    msg.time = 0.5490224629510203;
    msg.phi = 0.7312825834304969;
    msg.theta = 0.13765880761866423;
    msg.psi = 0.9129106083249166;
    msg.psi_magnetic = 0.983556875530253;

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
    msg.setTimeStamp(0.9321830377818082);
    msg.setSource(52186U);
    msg.setSourceEntity(10U);
    msg.setDestination(44509U);
    msg.setDestinationEntity(176U);
    msg.time = 0.16332599938139158;
    msg.x = 0.22185564189550833;
    msg.y = 0.15186692955571812;
    msg.z = 0.36435371112402193;
    msg.timestep = 0.14104361129957377;

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
    msg.setTimeStamp(0.23246975319430618);
    msg.setSource(17699U);
    msg.setSourceEntity(145U);
    msg.setDestination(27790U);
    msg.setDestinationEntity(96U);
    msg.time = 0.4662180050302923;
    msg.x = 0.2895881470748872;
    msg.y = 0.13451420859408936;
    msg.z = 0.7172013608392118;
    msg.timestep = 0.4984214628164618;

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
    msg.setTimeStamp(0.4365994669264903);
    msg.setSource(62743U);
    msg.setSourceEntity(115U);
    msg.setDestination(25456U);
    msg.setDestinationEntity(14U);
    msg.time = 0.9065854777017036;
    msg.x = 0.6596843130840785;
    msg.y = 0.9700601456997545;
    msg.z = 0.05589725585741223;
    msg.timestep = 0.9364014027096249;

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
    msg.setTimeStamp(0.8537515991611875);
    msg.setSource(18654U);
    msg.setSourceEntity(245U);
    msg.setDestination(54146U);
    msg.setDestinationEntity(81U);
    msg.time = 0.36068134973750954;
    msg.x = 0.23505452267545524;
    msg.y = 0.1124049604204006;
    msg.z = 0.3033989796890717;

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
    msg.setTimeStamp(0.28384397881260337);
    msg.setSource(5563U);
    msg.setSourceEntity(32U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(49U);
    msg.time = 0.5449598345891147;
    msg.x = 0.8802692392493113;
    msg.y = 0.03378529483599313;
    msg.z = 0.14310558011002572;

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
    msg.setTimeStamp(0.330145041240955);
    msg.setSource(65049U);
    msg.setSourceEntity(74U);
    msg.setDestination(56776U);
    msg.setDestinationEntity(146U);
    msg.time = 0.7579443869515458;
    msg.x = 0.3983052871882743;
    msg.y = 0.2555626341695124;
    msg.z = 0.47458847338694843;

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
    msg.setTimeStamp(0.5629311633453628);
    msg.setSource(9219U);
    msg.setSourceEntity(147U);
    msg.setDestination(43441U);
    msg.setDestinationEntity(203U);
    msg.time = 0.8224706804057195;
    msg.x = 0.8703877173159182;
    msg.y = 0.9686390234535399;
    msg.z = 0.014826995528316345;

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
    msg.setTimeStamp(0.5376379593185082);
    msg.setSource(10027U);
    msg.setSourceEntity(24U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(194U);
    msg.time = 0.24376568518834096;
    msg.x = 0.9173569644188566;
    msg.y = 0.5173573661442514;
    msg.z = 0.5541623623706697;

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
    msg.setTimeStamp(0.4814625014884327);
    msg.setSource(37350U);
    msg.setSourceEntity(59U);
    msg.setDestination(16898U);
    msg.setDestinationEntity(170U);
    msg.time = 0.9826282252349755;
    msg.x = 0.8691360070605071;
    msg.y = 0.5100683663020129;
    msg.z = 0.29092253880399455;

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
    msg.setTimeStamp(0.14944531429680163);
    msg.setSource(47165U);
    msg.setSourceEntity(234U);
    msg.setDestination(20900U);
    msg.setDestinationEntity(16U);
    msg.time = 0.33460510434768653;
    msg.x = 0.7768088724668037;
    msg.y = 0.8859101778657906;
    msg.z = 0.31599852168747067;

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
    msg.setTimeStamp(0.49589193320140557);
    msg.setSource(12355U);
    msg.setSourceEntity(106U);
    msg.setDestination(20408U);
    msg.setDestinationEntity(164U);
    msg.time = 0.36636823928090745;
    msg.x = 0.747151022842903;
    msg.y = 0.02702842694912222;
    msg.z = 0.84647471673284;

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
    msg.setTimeStamp(0.09226754018010164);
    msg.setSource(37868U);
    msg.setSourceEntity(91U);
    msg.setDestination(11688U);
    msg.setDestinationEntity(118U);
    msg.time = 0.21207025004667712;
    msg.x = 0.9230216913706886;
    msg.y = 0.21546358551531142;
    msg.z = 0.5969707336630566;

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
    msg.setTimeStamp(0.7376990905233025);
    msg.setSource(8920U);
    msg.setSourceEntity(108U);
    msg.setDestination(47688U);
    msg.setDestinationEntity(155U);
    msg.validity = 67U;
    msg.x = 0.6222835294546485;
    msg.y = 0.3617260663290339;
    msg.z = 0.8896827490171324;

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
    msg.setTimeStamp(0.4051884792711111);
    msg.setSource(42941U);
    msg.setSourceEntity(135U);
    msg.setDestination(47309U);
    msg.setDestinationEntity(170U);
    msg.validity = 31U;
    msg.x = 0.25530881437317965;
    msg.y = 0.2692665000990242;
    msg.z = 0.42195169001044697;

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
    msg.setTimeStamp(0.0034140993166316136);
    msg.setSource(30002U);
    msg.setSourceEntity(221U);
    msg.setDestination(63260U);
    msg.setDestinationEntity(118U);
    msg.validity = 4U;
    msg.x = 0.7255445685515066;
    msg.y = 0.5444454857443822;
    msg.z = 0.4390960653689525;

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
    msg.setTimeStamp(0.8969461820446101);
    msg.setSource(46504U);
    msg.setSourceEntity(44U);
    msg.setDestination(47515U);
    msg.setDestinationEntity(80U);
    msg.validity = 25U;
    msg.x = 0.9456875694688253;
    msg.y = 0.06786551010190234;
    msg.z = 0.46611556408904653;

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
    msg.setTimeStamp(0.8233944581704371);
    msg.setSource(58773U);
    msg.setSourceEntity(85U);
    msg.setDestination(48395U);
    msg.setDestinationEntity(228U);
    msg.validity = 221U;
    msg.x = 0.9764866639464824;
    msg.y = 0.15224473511164882;
    msg.z = 0.3012151580443072;

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
    msg.setTimeStamp(0.36716486855115293);
    msg.setSource(15829U);
    msg.setSourceEntity(99U);
    msg.setDestination(52098U);
    msg.setDestinationEntity(230U);
    msg.validity = 33U;
    msg.x = 0.7289090527884448;
    msg.y = 0.45876015265758774;
    msg.z = 0.9914083062833471;

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
    msg.setTimeStamp(0.5818883117861842);
    msg.setSource(37847U);
    msg.setSourceEntity(247U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(63U);
    msg.time = 0.40707523663489953;
    msg.x = 0.8690739933550179;
    msg.y = 0.37027956388677874;
    msg.z = 0.349273122110904;

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
    msg.setTimeStamp(0.8885217135681214);
    msg.setSource(20727U);
    msg.setSourceEntity(83U);
    msg.setDestination(14012U);
    msg.setDestinationEntity(200U);
    msg.time = 0.8830918089306158;
    msg.x = 0.09200152597861588;
    msg.y = 0.31514190339240034;
    msg.z = 0.48637446504167214;

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
    msg.setTimeStamp(0.9415296629432378);
    msg.setSource(45173U);
    msg.setSourceEntity(31U);
    msg.setDestination(60150U);
    msg.setDestinationEntity(123U);
    msg.time = 0.6235648767533355;
    msg.x = 0.5967789202612888;
    msg.y = 0.6269995783863873;
    msg.z = 0.7127064841042768;

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
    msg.setTimeStamp(0.23791350611504414);
    msg.setSource(49629U);
    msg.setSourceEntity(123U);
    msg.setDestination(33882U);
    msg.setDestinationEntity(103U);
    msg.validity = 167U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5920593311710207;
    tmp_msg_0.beam_height = 0.6937562535109942;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9344044632442625;

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
    msg.setTimeStamp(0.5385799411973293);
    msg.setSource(3422U);
    msg.setSourceEntity(21U);
    msg.setDestination(63934U);
    msg.setDestinationEntity(220U);
    msg.validity = 224U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.19083217869770652;
    tmp_msg_0.beam_height = 0.2317842028337005;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.614329561146821;

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
    msg.setTimeStamp(0.9474769614977913);
    msg.setSource(31284U);
    msg.setSourceEntity(164U);
    msg.setDestination(17119U);
    msg.setDestinationEntity(108U);
    msg.validity = 144U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6800834066920529;
    tmp_msg_0.y = 0.19525239540429262;
    tmp_msg_0.z = 0.25535355856636266;
    tmp_msg_0.phi = 0.7621887491599111;
    tmp_msg_0.theta = 0.4300995287469902;
    tmp_msg_0.psi = 0.4000757944601131;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9041289761116706;

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
    msg.setTimeStamp(0.12983821372266724);
    msg.setSource(9923U);
    msg.setSourceEntity(132U);
    msg.setDestination(26905U);
    msg.setDestinationEntity(109U);
    msg.value = 0.06469301538595162;

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
    msg.setTimeStamp(0.8641008956658154);
    msg.setSource(23966U);
    msg.setSourceEntity(119U);
    msg.setDestination(55744U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8615962729198087;

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
    msg.setTimeStamp(0.5335204018456363);
    msg.setSource(22218U);
    msg.setSourceEntity(129U);
    msg.setDestination(45553U);
    msg.setDestinationEntity(206U);
    msg.value = 0.3481210895743374;

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
    msg.setTimeStamp(0.8478665191463286);
    msg.setSource(33286U);
    msg.setSourceEntity(171U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7770454550990278;

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
    msg.setTimeStamp(0.8566409093978495);
    msg.setSource(18656U);
    msg.setSourceEntity(118U);
    msg.setDestination(12353U);
    msg.setDestinationEntity(128U);
    msg.value = 0.3546125032666104;

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
    msg.setTimeStamp(0.8781806061478478);
    msg.setSource(50183U);
    msg.setSourceEntity(41U);
    msg.setDestination(30467U);
    msg.setDestinationEntity(235U);
    msg.value = 0.17737577668636095;

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
    msg.setTimeStamp(0.09593556053920416);
    msg.setSource(28436U);
    msg.setSourceEntity(238U);
    msg.setDestination(50597U);
    msg.setDestinationEntity(144U);
    msg.value = 0.10217918414648397;

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
    msg.setTimeStamp(0.7248085631865108);
    msg.setSource(32138U);
    msg.setSourceEntity(113U);
    msg.setDestination(60644U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8353606129077291;

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
    msg.setTimeStamp(0.42483536577987946);
    msg.setSource(9794U);
    msg.setSourceEntity(33U);
    msg.setDestination(34069U);
    msg.setDestinationEntity(13U);
    msg.value = 0.4603111413967801;

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
    msg.setTimeStamp(0.4227338672758464);
    msg.setSource(32481U);
    msg.setSourceEntity(71U);
    msg.setDestination(48733U);
    msg.setDestinationEntity(251U);
    msg.value = 0.3923777154909952;

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
    msg.setTimeStamp(0.7583458584125315);
    msg.setSource(18858U);
    msg.setSourceEntity(38U);
    msg.setDestination(26643U);
    msg.setDestinationEntity(227U);
    msg.value = 0.2348741817729143;

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
    msg.setTimeStamp(0.9023113016128247);
    msg.setSource(60145U);
    msg.setSourceEntity(8U);
    msg.setDestination(61932U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8410446591177525;

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
    msg.setTimeStamp(0.8384078438659219);
    msg.setSource(18371U);
    msg.setSourceEntity(86U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8112671144173543;

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
    msg.setTimeStamp(0.5480319450211673);
    msg.setSource(22520U);
    msg.setSourceEntity(103U);
    msg.setDestination(17591U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6302024637320673;

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
    msg.setTimeStamp(0.6333239705043323);
    msg.setSource(18875U);
    msg.setSourceEntity(238U);
    msg.setDestination(59445U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5346074524038714;

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
    msg.setTimeStamp(0.8726708303528727);
    msg.setSource(41708U);
    msg.setSourceEntity(34U);
    msg.setDestination(13677U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9192050695044597;

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
    msg.setTimeStamp(0.673748111533423);
    msg.setSource(56838U);
    msg.setSourceEntity(135U);
    msg.setDestination(42701U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7753958293640558;

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
    msg.setTimeStamp(0.5231394351397384);
    msg.setSource(56881U);
    msg.setSourceEntity(27U);
    msg.setDestination(56730U);
    msg.setDestinationEntity(140U);
    msg.value = 0.42203548328206275;

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
    msg.setTimeStamp(0.8519286272316972);
    msg.setSource(16457U);
    msg.setSourceEntity(97U);
    msg.setDestination(45340U);
    msg.setDestinationEntity(11U);
    msg.value = 0.014368722627802644;

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
    msg.setTimeStamp(0.7922212055088361);
    msg.setSource(47969U);
    msg.setSourceEntity(173U);
    msg.setDestination(21034U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6190791149659729;

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
    msg.setTimeStamp(0.4449662306595178);
    msg.setSource(59890U);
    msg.setSourceEntity(109U);
    msg.setDestination(44282U);
    msg.setDestinationEntity(0U);
    msg.value = 0.14616378457579304;

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
    msg.setTimeStamp(0.6076698068784686);
    msg.setSource(13398U);
    msg.setSourceEntity(198U);
    msg.setDestination(12183U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5110347216090939;

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
    msg.setTimeStamp(0.09544494562784678);
    msg.setSource(49830U);
    msg.setSourceEntity(235U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(9U);
    msg.value = 0.588494883450517;

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
    msg.setTimeStamp(0.41818701487138454);
    msg.setSource(45906U);
    msg.setSourceEntity(167U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(246U);
    msg.value = 0.6701478189853255;

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
    msg.setTimeStamp(0.27202322503052456);
    msg.setSource(32734U);
    msg.setSourceEntity(190U);
    msg.setDestination(64636U);
    msg.setDestinationEntity(204U);
    msg.direction = 0.9089511791835435;
    msg.speed = 0.39603542070819375;
    msg.turbulence = 0.6711362624551047;

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
    msg.setTimeStamp(0.8538492988592417);
    msg.setSource(4530U);
    msg.setSourceEntity(56U);
    msg.setDestination(35965U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.4436552334783933;
    msg.speed = 0.4690251773499451;
    msg.turbulence = 0.29762280870501123;

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
    msg.setTimeStamp(0.2864543961322692);
    msg.setSource(17347U);
    msg.setSourceEntity(12U);
    msg.setDestination(1002U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.5879802811006029;
    msg.speed = 0.13994999302994693;
    msg.turbulence = 0.4587411845896663;

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
    msg.setTimeStamp(0.30380727349017367);
    msg.setSource(25615U);
    msg.setSourceEntity(53U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(84U);
    msg.value = 0.6711985617960253;

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
    msg.setTimeStamp(0.010540793729166498);
    msg.setSource(51511U);
    msg.setSourceEntity(194U);
    msg.setDestination(15043U);
    msg.setDestinationEntity(102U);
    msg.value = 0.03745789742654715;

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
    msg.setTimeStamp(0.3849185472435823);
    msg.setSource(11259U);
    msg.setSourceEntity(57U);
    msg.setDestination(8137U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8979432992084628;

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
    msg.setTimeStamp(0.2676506551074871);
    msg.setSource(22143U);
    msg.setSourceEntity(37U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(111U);
    msg.value.assign("XZMCKUDKYNPTPSAWCIGFUSDGYBFGBERIT");

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
    msg.setTimeStamp(0.3261731303489419);
    msg.setSource(40491U);
    msg.setSourceEntity(186U);
    msg.setDestination(46530U);
    msg.setDestinationEntity(230U);
    msg.value.assign("GOJGQOYEKPIORGTCLUUIBEWQCRFYOWHQZLSFDPESQQSBQUTNBOMUEWSOZCJVCXPEKLBEGTPKMJXHRMTHCZXHUHDUAXEMAXFRLWXLVDAZZBAYHNYIRJPGADWAHUCTYNJFNNSTXOQUEMLRIZDZIAHMQBISVMNXSNDGVJVLKICPIXVWKWDKRFSFLAPNYN");

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
    msg.setTimeStamp(0.402094229787636);
    msg.setSource(19305U);
    msg.setSourceEntity(229U);
    msg.setDestination(4444U);
    msg.setDestinationEntity(123U);
    msg.value.assign("EHDJFFCRAIJXHOEVPJMVVEFBGXARZDTHQTXRLDKIQEGCDKWDCQUQBANTCSYZWJBGCVUPXPTSADMXYFERZKVMAIQPOYWWWNXNLZYJQXOFVMJTSGGIEUCOHGKNBVDHR");

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
    msg.setTimeStamp(0.48879068257891856);
    msg.setSource(39251U);
    msg.setSourceEntity(184U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(185U);
    const signed char tmp_msg_0[] = {-49, 109, 48, 108, 88, 3, 47, -102, 38, 16, 0, 23, 95, -83, -95, 69, 34};
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
    msg.setTimeStamp(0.09872392981457889);
    msg.setSource(35976U);
    msg.setSourceEntity(95U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(103U);
    const signed char tmp_msg_0[] = {19, -17, -119, 47, 122, 60, 106, -128, 20, 119, 50, 39, 117, 42, 99, -21, -79, 55, 32, 59, -5, -115, 0, 50, -120, -97, -123, -86, -59, 77, 118, 20, 92, -101, -56, 57, -88, 39, -3, -20, -39, 38, -121, -55, 28, 25, -47, 106, -64, -59, -5, 30, -98, -88, 37};
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
    msg.setTimeStamp(0.6406968662581275);
    msg.setSource(50615U);
    msg.setSourceEntity(174U);
    msg.setDestination(34574U);
    msg.setDestinationEntity(115U);
    const signed char tmp_msg_0[] = {101, 79, -98, -56, 41, -24, -17, 1, -25, 11, -68, -67, -17, 111, 36, -52, 110, -106, 54, -96, 78, -102, 25, 4, 102, -117, -19, 88, -71, 65, 107, 77, -115, -34, -53, 5, 6, -8, 40, -92, 21, -29, 93, -11, 121, 59, -125, 2, 119, 45, -75, -37, -5, -127, -12, -12, 21, 103, -23, 111, 112, -94, -14, -81, -35, -23, -26, -84, 35, 1, 65, 78, -18, 23, -121, -7, -2, 90, -50, 63, 120, -36, 53, -45, 79, -44, 30, 22, -121, 21, -32, -121, -46, 76, -71, -83, 92, 116, -80, 112, -64, -12, -17, -5, 52, 113, 26, 42, -31, -114, 27};
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
    msg.setTimeStamp(0.9219658394413257);
    msg.setSource(55656U);
    msg.setSourceEntity(170U);
    msg.setDestination(14558U);
    msg.setDestinationEntity(173U);
    msg.value = 0.23663463746220836;

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
    msg.setTimeStamp(0.9459914973031085);
    msg.setSource(55331U);
    msg.setSourceEntity(49U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(121U);
    msg.value = 0.2357711990257615;

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
    msg.setTimeStamp(0.4360356641595675);
    msg.setSource(21842U);
    msg.setSourceEntity(99U);
    msg.setDestination(9505U);
    msg.setDestinationEntity(86U);
    msg.value = 0.21386725143017282;

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
    msg.setTimeStamp(0.3715315332611996);
    msg.setSource(13102U);
    msg.setSourceEntity(178U);
    msg.setDestination(12774U);
    msg.setDestinationEntity(164U);
    msg.type = 90U;
    msg.frequency = 1830036871U;
    msg.min_range = 12818U;
    msg.max_range = 21301U;
    msg.bits_per_point = 250U;
    msg.scale_factor = 0.918629674719013;
    const signed char tmp_msg_0[] = {-38, 105, -46, 7, -47, -46, -60, -58, -27, 41, 48, -32, 7, -79, 78, 121, -16, -27, -90, -81, 100, -67, -47, 26, 115, 43, -51, -41, -86, 90, -42, -13, -88, -40, -18, -40, 60, 54, 50, 99, -17, -79, -70, -115, -106, -43, 99, 19, 67, -46, 46, 113, 70, -88, -86, -33, 20, -23, -22, 121, -28, 34, 36, -123, -24, 10, -19, 97, -39, -66, -62, -112, -68, 65, 53, -6, 66, 51, -104, -88, -33, -113, -84, 101, -122, -122, 71, 58, -62, -99, 56, 0, -38, -89, 35, -26, 103, -73, 51, -73, -76, 65, -11, 59, 10, 16, -40, -100, 64, -73, -56, -61, 121, 45, -3, -96, 56, 39, 52, -55};
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
    msg.setTimeStamp(0.6145878432018024);
    msg.setSource(53558U);
    msg.setSourceEntity(42U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(210U);
    msg.type = 49U;
    msg.frequency = 2416858308U;
    msg.min_range = 32739U;
    msg.max_range = 59926U;
    msg.bits_per_point = 1U;
    msg.scale_factor = 0.31801252625005205;
    const signed char tmp_msg_0[] = {-117, 50, 95, -36, -83, 50, 94, 21, 47, -79, -50, -110, -109, 88, -12, -109, -70, 70, -115, -124, 1, -93, -14, 126, -38, -67, -56, -7, -6, -117, -81, 126, 114, 45, 79, -70, 37, -118, -53, -48, -6, 93, 91, -114, -60, -117, -59, -72, -116, 5, 66, 74, -119, 114, 66, 117, 58, 25, 100, 121, 84, 108, -72, 31, -108, -113, -57, 73, 77, 2, 42, 29, -49, 66, -61, -53, -79, -123, -72, 30, 89, -15, -67, 20, -67, -86, -19, 37, 2, -34, 123, -66};
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
    msg.setTimeStamp(0.5314180100707978);
    msg.setSource(10304U);
    msg.setSourceEntity(68U);
    msg.setDestination(32887U);
    msg.setDestinationEntity(216U);
    msg.type = 47U;
    msg.frequency = 4025534052U;
    msg.min_range = 28636U;
    msg.max_range = 23636U;
    msg.bits_per_point = 21U;
    msg.scale_factor = 0.9415241580820178;
    const signed char tmp_msg_0[] = {83, 5, -40, 111, 11, -22, 31, 35, 15, 125, -78, 17, -39, -123, -33, 33, 118, 113, -115, -42, 97, 62, -108, 63, -113, -59, -89, 14, -65, -126, -63};
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
    msg.setTimeStamp(0.2051499561212634);
    msg.setSource(40287U);
    msg.setSourceEntity(1U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.1567436498642586);
    msg.setSource(15190U);
    msg.setSourceEntity(32U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.43807896935172874);
    msg.setSource(43025U);
    msg.setSourceEntity(164U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.804536212864489);
    msg.setSource(46569U);
    msg.setSourceEntity(234U);
    msg.setDestination(9150U);
    msg.setDestinationEntity(206U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.24594439085904218);
    msg.setSource(32330U);
    msg.setSourceEntity(148U);
    msg.setDestination(40653U);
    msg.setDestinationEntity(145U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.6618572640195339);
    msg.setSource(8275U);
    msg.setSourceEntity(219U);
    msg.setDestination(25662U);
    msg.setDestinationEntity(220U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.0012589070732188512);
    msg.setSource(30729U);
    msg.setSourceEntity(167U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(96U);
    msg.value = 0.4725082509963402;
    msg.confidence = 0.6204072023115543;
    msg.opmodes.assign("UIPPVAAEKL");

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
    msg.setTimeStamp(0.09891087918314556);
    msg.setSource(61807U);
    msg.setSourceEntity(156U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3857323628160412;
    msg.confidence = 0.35428446752566944;
    msg.opmodes.assign("CIFBANLJAVMYVHODLSNISYKECYUGMTCGXQDIWQPJGEEVISXAZBHTMUHEZSMZEQNVHAUPLBQRMSDFWBUXNICRXMLDYCVZKHOKJMGDAQQIOFOKIUZOCZJJXVPFPYHJRSBXSQZARSFEAYEFRILDLWPGDITWKFSOTVTDAEJKHVRPEYKZOJDTWFVNGZTLWTHBUFPR");

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
    msg.setTimeStamp(0.8185389794440072);
    msg.setSource(24422U);
    msg.setSourceEntity(210U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9919148475010592;
    msg.confidence = 0.9093742591999168;
    msg.opmodes.assign("NHSPRUHEUXLKFNRAYGOJBQGNENHVNSNQDENQXPTCMCXVPJUDXCMRJEIFVFHZTOUGICJZEKCMFRTQAYRDSFALABGMWQWJWTKWQYZGMPPLQOXLFMZGYDEJZWCVRAAVGEIBFCFHKOLXAYZDGIXTWZKHOHNDMILIOQKVZHKOPBESAMSRZQJVYGRUCBDTRTNX");

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
    msg.setTimeStamp(0.005055703452382598);
    msg.setSource(23551U);
    msg.setSourceEntity(135U);
    msg.setDestination(2764U);
    msg.setDestinationEntity(219U);
    msg.itow = 2884968596U;
    msg.lat = 0.5706936864755684;
    msg.lon = 0.32402155390001575;
    msg.height_ell = 0.1367569557673909;
    msg.height_sea = 0.77704138633133;
    msg.hacc = 0.9347648849114829;
    msg.vacc = 0.7711490576781161;
    msg.vel_n = 0.05651382369236624;
    msg.vel_e = 0.15779913183677552;
    msg.vel_d = 0.9817751659777495;
    msg.speed = 0.19523179214101738;
    msg.gspeed = 0.054185707809642714;
    msg.heading = 0.01952294279983946;
    msg.sacc = 0.8866110133732586;
    msg.cacc = 0.8497692673904291;

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
    msg.setTimeStamp(0.849688168197083);
    msg.setSource(25104U);
    msg.setSourceEntity(151U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(69U);
    msg.itow = 1531380998U;
    msg.lat = 0.3617642752161061;
    msg.lon = 0.035918465077788286;
    msg.height_ell = 0.6497674626366893;
    msg.height_sea = 0.7418255693192626;
    msg.hacc = 0.8122598475740914;
    msg.vacc = 0.9754942625819281;
    msg.vel_n = 0.07304994679561427;
    msg.vel_e = 0.9535664550934311;
    msg.vel_d = 0.3911472642188365;
    msg.speed = 0.6629477458122407;
    msg.gspeed = 0.952189292482655;
    msg.heading = 0.44952930587803186;
    msg.sacc = 0.8015163076662483;
    msg.cacc = 0.35507340523389697;

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
    msg.setTimeStamp(0.6282448610735784);
    msg.setSource(56512U);
    msg.setSourceEntity(110U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(206U);
    msg.itow = 4264612089U;
    msg.lat = 0.07950005614770839;
    msg.lon = 0.40251624632174854;
    msg.height_ell = 0.466140868720861;
    msg.height_sea = 0.09434744154554553;
    msg.hacc = 0.6506806867106371;
    msg.vacc = 0.3462387661317825;
    msg.vel_n = 0.5950768770444644;
    msg.vel_e = 0.3510987839545463;
    msg.vel_d = 0.7872199752445244;
    msg.speed = 0.5587488519438545;
    msg.gspeed = 0.6263771457774401;
    msg.heading = 0.6045770060302235;
    msg.sacc = 0.08340101020765422;
    msg.cacc = 0.6688161775610063;

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
    msg.setTimeStamp(0.1152219412374903);
    msg.setSource(8916U);
    msg.setSourceEntity(218U);
    msg.setDestination(3845U);
    msg.setDestinationEntity(183U);
    msg.id = 228U;
    msg.value = 0.4187834896739504;

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
    msg.setTimeStamp(0.7423580873592174);
    msg.setSource(14747U);
    msg.setSourceEntity(175U);
    msg.setDestination(30901U);
    msg.setDestinationEntity(107U);
    msg.id = 34U;
    msg.value = 0.7641194693157116;

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
    msg.setTimeStamp(0.4879371211640644);
    msg.setSource(57066U);
    msg.setSourceEntity(49U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(142U);
    msg.id = 247U;
    msg.value = 0.030249418968719244;

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
    msg.setTimeStamp(0.20736727311858172);
    msg.setSource(27045U);
    msg.setSourceEntity(197U);
    msg.setDestination(31518U);
    msg.setDestinationEntity(201U);
    msg.x = 0.25698326323626763;
    msg.y = 0.9781275276918361;
    msg.z = 0.3755410970785189;
    msg.phi = 0.5355971600024506;
    msg.theta = 0.03453618001558778;
    msg.psi = 0.105341892095981;

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
    msg.setTimeStamp(0.9148187740014225);
    msg.setSource(63177U);
    msg.setSourceEntity(245U);
    msg.setDestination(40135U);
    msg.setDestinationEntity(231U);
    msg.x = 0.4383500805065087;
    msg.y = 0.32937042664326355;
    msg.z = 0.7635316444416638;
    msg.phi = 0.36165611460732505;
    msg.theta = 0.3280847265969947;
    msg.psi = 0.15144385199358645;

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
    msg.setTimeStamp(0.2556669449844293);
    msg.setSource(65337U);
    msg.setSourceEntity(203U);
    msg.setDestination(51299U);
    msg.setDestinationEntity(36U);
    msg.x = 0.9790782321523664;
    msg.y = 0.014949724175481127;
    msg.z = 0.2160615063373682;
    msg.phi = 0.1617813647272064;
    msg.theta = 0.7117825361536629;
    msg.psi = 0.588365339683049;

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
    msg.setTimeStamp(0.9955792252198898);
    msg.setSource(58104U);
    msg.setSourceEntity(129U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(143U);
    msg.beam_width = 0.595011384584125;
    msg.beam_height = 0.48654011012937226;

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
    msg.setTimeStamp(0.29359667086865027);
    msg.setSource(65387U);
    msg.setSourceEntity(89U);
    msg.setDestination(51778U);
    msg.setDestinationEntity(70U);
    msg.beam_width = 0.31605773295428763;
    msg.beam_height = 0.810443406108372;

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
    msg.setTimeStamp(0.33684242101033657);
    msg.setSource(2630U);
    msg.setSourceEntity(239U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(213U);
    msg.beam_width = 0.9151348306647391;
    msg.beam_height = 0.47744655139334335;

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
    msg.setTimeStamp(0.5170175868348069);
    msg.setSource(32933U);
    msg.setSourceEntity(51U);
    msg.setDestination(54127U);
    msg.setDestinationEntity(138U);
    msg.sane = 40U;

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
    msg.setTimeStamp(0.8888803876400402);
    msg.setSource(39257U);
    msg.setSourceEntity(210U);
    msg.setDestination(47906U);
    msg.setDestinationEntity(109U);
    msg.sane = 95U;

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
    msg.setTimeStamp(0.48019060521070056);
    msg.setSource(49750U);
    msg.setSourceEntity(202U);
    msg.setDestination(64811U);
    msg.setDestinationEntity(75U);
    msg.sane = 163U;

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
    msg.setTimeStamp(0.5805566379872058);
    msg.setSource(32424U);
    msg.setSourceEntity(138U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5944698433707949;

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
    msg.setTimeStamp(0.39077041254329914);
    msg.setSource(55106U);
    msg.setSourceEntity(167U);
    msg.setDestination(45560U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6274190903759269;

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
    msg.setTimeStamp(0.27611712313381975);
    msg.setSource(40250U);
    msg.setSourceEntity(123U);
    msg.setDestination(38739U);
    msg.setDestinationEntity(254U);
    msg.value = 0.135142171265221;

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
    msg.setTimeStamp(0.6323087619305909);
    msg.setSource(53507U);
    msg.setSourceEntity(180U);
    msg.setDestination(11997U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7225033888773676;

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
    msg.setTimeStamp(0.31611759389746885);
    msg.setSource(5594U);
    msg.setSourceEntity(55U);
    msg.setDestination(3484U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6414008501658017;

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
    msg.setTimeStamp(0.9795298514368525);
    msg.setSource(65285U);
    msg.setSourceEntity(70U);
    msg.setDestination(37322U);
    msg.setDestinationEntity(39U);
    msg.value = 0.678056075597614;

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
    msg.setTimeStamp(0.8044908652013372);
    msg.setSource(45978U);
    msg.setSourceEntity(220U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(45U);
    msg.value = 0.09116072464979952;

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
    msg.setTimeStamp(0.7935710834614942);
    msg.setSource(22608U);
    msg.setSourceEntity(83U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(135U);
    msg.value = 0.11828504200224499;

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
    msg.setTimeStamp(0.8054898520858691);
    msg.setSource(28318U);
    msg.setSourceEntity(159U);
    msg.setDestination(31310U);
    msg.setDestinationEntity(216U);
    msg.value = 0.11223415385053548;

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
    msg.setTimeStamp(0.4832568465925249);
    msg.setSource(63657U);
    msg.setSourceEntity(237U);
    msg.setDestination(29445U);
    msg.setDestinationEntity(120U);
    msg.value = 0.177390984634608;

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
    msg.setTimeStamp(0.7820256787660916);
    msg.setSource(50174U);
    msg.setSourceEntity(227U);
    msg.setDestination(61244U);
    msg.setDestinationEntity(132U);
    msg.value = 0.7388881170655928;

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
    msg.setTimeStamp(0.9034859749619296);
    msg.setSource(2233U);
    msg.setSourceEntity(1U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7070907160820464;

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
    msg.setTimeStamp(0.5079256792441137);
    msg.setSource(16883U);
    msg.setSourceEntity(66U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(204U);
    msg.value = 0.049513039962120864;

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
    msg.setTimeStamp(0.9203294275251765);
    msg.setSource(56964U);
    msg.setSourceEntity(82U);
    msg.setDestination(46656U);
    msg.setDestinationEntity(29U);
    msg.value = 0.15920383350756873;

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
    msg.setTimeStamp(0.8857569471849664);
    msg.setSource(55038U);
    msg.setSourceEntity(75U);
    msg.setDestination(10089U);
    msg.setDestinationEntity(99U);
    msg.value = 0.602196762889598;

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
    msg.setTimeStamp(0.753525483032727);
    msg.setSource(57415U);
    msg.setSourceEntity(201U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(14U);
    msg.value = 0.09448197670988501;

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
    msg.setTimeStamp(0.06047393797713063);
    msg.setSource(15159U);
    msg.setSourceEntity(169U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(113U);
    msg.value = 0.3973882439109302;

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
    msg.setTimeStamp(0.8168497910287743);
    msg.setSource(13310U);
    msg.setSourceEntity(154U);
    msg.setDestination(28816U);
    msg.setDestinationEntity(68U);
    msg.value = 0.8849720597571765;

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
    msg.setTimeStamp(0.06506260025465804);
    msg.setSource(36287U);
    msg.setSourceEntity(100U);
    msg.setDestination(52523U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7925772998463417;

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
    msg.setTimeStamp(0.728832345639857);
    msg.setSource(2222U);
    msg.setSourceEntity(8U);
    msg.setDestination(40431U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8400252815966177;

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
    msg.setTimeStamp(0.6612249588285971);
    msg.setSource(6334U);
    msg.setSourceEntity(148U);
    msg.setDestination(1273U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6013821545791868;

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
    msg.setTimeStamp(0.5131629767067671);
    msg.setSource(64430U);
    msg.setSourceEntity(49U);
    msg.setDestination(59191U);
    msg.setDestinationEntity(16U);
    msg.value = 0.3368721694879807;

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
    msg.setTimeStamp(0.13151145802521436);
    msg.setSource(44819U);
    msg.setSourceEntity(197U);
    msg.setDestination(1761U);
    msg.setDestinationEntity(6U);
    msg.value = 0.30576969443631363;

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
    msg.setTimeStamp(0.6354951195886503);
    msg.setSource(835U);
    msg.setSourceEntity(108U);
    msg.setDestination(38145U);
    msg.setDestinationEntity(211U);
    msg.value = 0.23938479822925662;

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
    msg.setTimeStamp(0.5013521929495902);
    msg.setSource(22593U);
    msg.setSourceEntity(179U);
    msg.setDestination(59365U);
    msg.setDestinationEntity(30U);
    msg.validity = 54085U;
    msg.type = 124U;
    msg.tow = 816374304U;
    msg.base_lat = 0.835176174248203;
    msg.base_lon = 0.8151770837796998;
    msg.base_height = 0.0819798651784901;
    msg.n = 0.2904251239998079;
    msg.e = 0.6507224961290959;
    msg.d = 0.46919660524109374;
    msg.v_n = 0.921238015313575;
    msg.v_e = 0.8375202005144747;
    msg.v_d = 0.6690021751611652;
    msg.satellites = 88U;
    msg.iar_hyp = 34902U;
    msg.iar_ratio = 0.15850629884565703;

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
    msg.setTimeStamp(0.7820821860840088);
    msg.setSource(27057U);
    msg.setSourceEntity(105U);
    msg.setDestination(65337U);
    msg.setDestinationEntity(99U);
    msg.validity = 49545U;
    msg.type = 16U;
    msg.tow = 992885267U;
    msg.base_lat = 0.036488328342563325;
    msg.base_lon = 0.14240262713152052;
    msg.base_height = 0.3121029856643448;
    msg.n = 0.4535937396434463;
    msg.e = 0.9055596074104179;
    msg.d = 0.0777537341760759;
    msg.v_n = 0.4882359410752256;
    msg.v_e = 0.6755067526529371;
    msg.v_d = 0.09562862267904715;
    msg.satellites = 233U;
    msg.iar_hyp = 12739U;
    msg.iar_ratio = 0.10852806222717959;

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
    msg.setTimeStamp(0.44090371508262793);
    msg.setSource(13992U);
    msg.setSourceEntity(53U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(52U);
    msg.validity = 64390U;
    msg.type = 64U;
    msg.tow = 817591784U;
    msg.base_lat = 0.8374563119549262;
    msg.base_lon = 0.21771392185817673;
    msg.base_height = 0.0447034903384661;
    msg.n = 0.8603421759907475;
    msg.e = 0.37637057225057025;
    msg.d = 0.22131599234170662;
    msg.v_n = 0.19478453121688444;
    msg.v_e = 0.5983653168353799;
    msg.v_d = 0.1005923931090753;
    msg.satellites = 83U;
    msg.iar_hyp = 27969U;
    msg.iar_ratio = 0.09448724950325738;

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
    msg.setTimeStamp(0.09852709689374073);
    msg.setSource(46977U);
    msg.setSourceEntity(170U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(157U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5409136103788325;
    tmp_msg_0.lon = 0.4814034050102264;
    tmp_msg_0.height = 0.16407399822178703;
    tmp_msg_0.x = 0.00918434012012892;
    tmp_msg_0.y = 0.015524570235977309;
    tmp_msg_0.z = 0.9060328504025363;
    tmp_msg_0.phi = 0.8528619009757766;
    tmp_msg_0.theta = 0.8899350792714169;
    tmp_msg_0.psi = 0.699287786761583;
    tmp_msg_0.u = 0.7560133614119161;
    tmp_msg_0.v = 0.4452248505916204;
    tmp_msg_0.w = 0.8055225503586274;
    tmp_msg_0.vx = 0.5731081570010103;
    tmp_msg_0.vy = 0.7642486778146609;
    tmp_msg_0.vz = 0.5536312518727493;
    tmp_msg_0.p = 0.2700913658829013;
    tmp_msg_0.q = 0.8095991443917078;
    tmp_msg_0.r = 0.39804678114860814;
    tmp_msg_0.depth = 0.193232890957027;
    tmp_msg_0.alt = 0.09098368568621318;
    msg.state.set(tmp_msg_0);
    msg.type = 254U;

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
    msg.setTimeStamp(0.06484443704626497);
    msg.setSource(27995U);
    msg.setSourceEntity(222U);
    msg.setDestination(8453U);
    msg.setDestinationEntity(52U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6265048814393048;
    tmp_msg_0.lon = 0.8784633163148717;
    tmp_msg_0.height = 0.537336605331688;
    tmp_msg_0.x = 0.3296399957493513;
    tmp_msg_0.y = 0.6608453378032427;
    tmp_msg_0.z = 0.11168826550174005;
    tmp_msg_0.phi = 0.515720009809307;
    tmp_msg_0.theta = 0.5085578218864745;
    tmp_msg_0.psi = 0.1424270674871635;
    tmp_msg_0.u = 0.1490436576986226;
    tmp_msg_0.v = 0.17295049336118262;
    tmp_msg_0.w = 0.544297036600353;
    tmp_msg_0.vx = 0.5282267719707999;
    tmp_msg_0.vy = 0.18387514393044302;
    tmp_msg_0.vz = 0.9349473179284418;
    tmp_msg_0.p = 0.0287096549682343;
    tmp_msg_0.q = 0.8677240833109324;
    tmp_msg_0.r = 0.25141408711825497;
    tmp_msg_0.depth = 0.5070043646341811;
    tmp_msg_0.alt = 0.04048382762444325;
    msg.state.set(tmp_msg_0);
    msg.type = 202U;

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
    msg.setTimeStamp(0.31923139524894084);
    msg.setSource(52322U);
    msg.setSourceEntity(226U);
    msg.setDestination(62049U);
    msg.setDestinationEntity(138U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5047727428898442;
    tmp_msg_0.lon = 0.54424605602883;
    tmp_msg_0.height = 0.6842449276035886;
    tmp_msg_0.x = 0.13631256688385163;
    tmp_msg_0.y = 0.648248840989852;
    tmp_msg_0.z = 0.14382276488446388;
    tmp_msg_0.phi = 0.10107848351111781;
    tmp_msg_0.theta = 0.4724713395544212;
    tmp_msg_0.psi = 0.9295774080665311;
    tmp_msg_0.u = 0.8539885623783735;
    tmp_msg_0.v = 0.8277994295833304;
    tmp_msg_0.w = 0.3926260074038572;
    tmp_msg_0.vx = 0.9585293191464374;
    tmp_msg_0.vy = 0.24453655544443909;
    tmp_msg_0.vz = 0.2334747110931895;
    tmp_msg_0.p = 0.6759627219261382;
    tmp_msg_0.q = 0.88479266976824;
    tmp_msg_0.r = 0.33998245042879416;
    tmp_msg_0.depth = 0.2174906570586661;
    tmp_msg_0.alt = 0.22715670831826407;
    msg.state.set(tmp_msg_0);
    msg.type = 199U;

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
    msg.setTimeStamp(0.4657519231583003);
    msg.setSource(13304U);
    msg.setSourceEntity(41U);
    msg.setDestination(4225U);
    msg.setDestinationEntity(229U);
    msg.value = 0.38062095664875284;

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
    msg.setTimeStamp(0.8054656727569648);
    msg.setSource(34377U);
    msg.setSourceEntity(52U);
    msg.setDestination(59317U);
    msg.setDestinationEntity(33U);
    msg.value = 0.567215390777624;

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
    msg.setTimeStamp(0.9393177588287376);
    msg.setSource(36765U);
    msg.setSourceEntity(229U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9265608561377855;

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
    msg.setTimeStamp(0.7565806134434973);
    msg.setSource(51200U);
    msg.setSourceEntity(74U);
    msg.setDestination(17122U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9907252309879399;

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
    msg.setTimeStamp(0.5690545434119932);
    msg.setSource(45398U);
    msg.setSourceEntity(160U);
    msg.setDestination(33458U);
    msg.setDestinationEntity(159U);
    msg.value = 0.8780699178638933;

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
    msg.setTimeStamp(0.9172257177665386);
    msg.setSource(31165U);
    msg.setSourceEntity(101U);
    msg.setDestination(57562U);
    msg.setDestinationEntity(12U);
    msg.value = 0.4980381716894172;

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
    msg.setTimeStamp(0.5571490628485651);
    msg.setSource(176U);
    msg.setSourceEntity(101U);
    msg.setDestination(41262U);
    msg.setDestinationEntity(206U);
    msg.value = 0.490925055531361;

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
    msg.setTimeStamp(0.3735499211097384);
    msg.setSource(5008U);
    msg.setSourceEntity(191U);
    msg.setDestination(567U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9398874230465954;

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
    msg.setTimeStamp(0.6559756960244657);
    msg.setSource(59273U);
    msg.setSourceEntity(104U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(139U);
    msg.value = 0.18750718015958023;

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
    msg.setTimeStamp(0.13309916359081952);
    msg.setSource(1653U);
    msg.setSourceEntity(215U);
    msg.setDestination(52717U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5244116842802803;

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
    msg.setTimeStamp(0.3259379055231858);
    msg.setSource(48366U);
    msg.setSourceEntity(10U);
    msg.setDestination(5251U);
    msg.setDestinationEntity(47U);
    msg.value = 0.7422617998328033;

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
    msg.setTimeStamp(0.24754521773799265);
    msg.setSource(6198U);
    msg.setSourceEntity(198U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(232U);
    msg.value = 0.3954697449888641;

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
    msg.setTimeStamp(0.6584786963549897);
    msg.setSource(10419U);
    msg.setSourceEntity(10U);
    msg.setDestination(48773U);
    msg.setDestinationEntity(150U);
    msg.value = 0.781777921905405;

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
    msg.setTimeStamp(0.7960322180443663);
    msg.setSource(42539U);
    msg.setSourceEntity(21U);
    msg.setDestination(58794U);
    msg.setDestinationEntity(212U);
    msg.value = 0.7577452197931731;

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
    msg.setTimeStamp(0.2582086071404127);
    msg.setSource(63147U);
    msg.setSourceEntity(88U);
    msg.setDestination(39740U);
    msg.setDestinationEntity(131U);
    msg.value = 0.8102254909023012;

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
    msg.setTimeStamp(0.14498479229523475);
    msg.setSource(33152U);
    msg.setSourceEntity(6U);
    msg.setDestination(44781U);
    msg.setDestinationEntity(203U);
    msg.id = 7U;
    msg.zoom = 57U;
    msg.action = 217U;

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
    msg.setTimeStamp(0.7112531111239795);
    msg.setSource(9114U);
    msg.setSourceEntity(156U);
    msg.setDestination(35772U);
    msg.setDestinationEntity(155U);
    msg.id = 79U;
    msg.zoom = 174U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.4128999617108636);
    msg.setSource(63777U);
    msg.setSourceEntity(113U);
    msg.setDestination(47181U);
    msg.setDestinationEntity(180U);
    msg.id = 250U;
    msg.zoom = 2U;
    msg.action = 117U;

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
    msg.setTimeStamp(0.16184702777510884);
    msg.setSource(60321U);
    msg.setSourceEntity(13U);
    msg.setDestination(9920U);
    msg.setDestinationEntity(45U);
    msg.id = 223U;
    msg.value = 0.39984928858009994;

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
    msg.setTimeStamp(0.5733614957528529);
    msg.setSource(3644U);
    msg.setSourceEntity(208U);
    msg.setDestination(47406U);
    msg.setDestinationEntity(65U);
    msg.id = 242U;
    msg.value = 0.13554480614437014;

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
    msg.setTimeStamp(0.29238252569559187);
    msg.setSource(39411U);
    msg.setSourceEntity(240U);
    msg.setDestination(7210U);
    msg.setDestinationEntity(116U);
    msg.id = 229U;
    msg.value = 0.336373274194954;

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
    msg.setTimeStamp(0.06881667392340618);
    msg.setSource(22310U);
    msg.setSourceEntity(251U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(128U);
    msg.id = 104U;
    msg.value = 0.21348116325997313;

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
    msg.setTimeStamp(0.7313491141874451);
    msg.setSource(5502U);
    msg.setSourceEntity(22U);
    msg.setDestination(1154U);
    msg.setDestinationEntity(170U);
    msg.id = 69U;
    msg.value = 0.10124692385985334;

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
    msg.setTimeStamp(0.3412292698562652);
    msg.setSource(34134U);
    msg.setSourceEntity(131U);
    msg.setDestination(45624U);
    msg.setDestinationEntity(155U);
    msg.id = 130U;
    msg.value = 0.229916220412396;

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
    msg.setTimeStamp(0.4856844672798165);
    msg.setSource(14076U);
    msg.setSourceEntity(137U);
    msg.setDestination(63248U);
    msg.setDestinationEntity(82U);
    msg.id = 17U;
    msg.angle = 0.6275698092770241;

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
    msg.setTimeStamp(0.5172223749842915);
    msg.setSource(26131U);
    msg.setSourceEntity(103U);
    msg.setDestination(19565U);
    msg.setDestinationEntity(244U);
    msg.id = 57U;
    msg.angle = 0.25373493459024987;

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
    msg.setTimeStamp(0.36177866086287014);
    msg.setSource(38956U);
    msg.setSourceEntity(149U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(145U);
    msg.id = 73U;
    msg.angle = 0.7299207581025531;

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
    msg.setTimeStamp(0.46233004623370977);
    msg.setSource(65495U);
    msg.setSourceEntity(119U);
    msg.setDestination(26320U);
    msg.setDestinationEntity(80U);
    msg.op = 149U;
    msg.actions.assign("MIWOUFXGMNHDNMFWBKCFJAXDRIUHKXIEIQQDTZPZCRRVS");

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
    msg.setTimeStamp(0.5659487585299873);
    msg.setSource(35480U);
    msg.setSourceEntity(110U);
    msg.setDestination(25343U);
    msg.setDestinationEntity(239U);
    msg.op = 130U;
    msg.actions.assign("YAJOJTKLNZUTMPNXICKSUFEVRUAIVGCTHIPJPFXKMRIXBRTEDFCFFBFAYWQOSJ");

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
    msg.setTimeStamp(0.03445148186942415);
    msg.setSource(22747U);
    msg.setSourceEntity(107U);
    msg.setDestination(63616U);
    msg.setDestinationEntity(144U);
    msg.op = 171U;
    msg.actions.assign("IXZDKJTXGEHGTKWAWMQQKMCFUILPOOVSGUPLAUNFBWVPWLZXVZQBTIPMJCLFCKQDOLOOTQTRDNFJRWFUVRDXZGBSHYHSZVARFOLQVBZKASCESJYVYYBPIOHUKCJBTHSIIEWOKELFRZRDGJXWUIUVPUMFYVXHAZQVJPCIONLRATSEGJJNWRXHXHSMEDKFCBNEIDYCTNPDKHROGWPSGCEMATZNQRSBFKLYTAIEDCGMDNEBNAXYAGWXLYM");

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
    msg.setTimeStamp(0.3522093585359245);
    msg.setSource(858U);
    msg.setSourceEntity(191U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(179U);
    msg.actions.assign("KJJOHXTVZCHHRWAWIQAIYBLQKXDYOCWCGUINXQKLNHIVXDBPDCFIUAOGLAXZCKCTNURKQMETSMOCTYXPPZFSUJEOADALQQMYVHRNEOFWEDCUMBVEKSLROZPCNQQFBTXGKFBAGNBSRVVBMDWUUPETGZDJYGHSXGEQIPFWJGUZRUSQHJBVSBDVZYJKLYHZTPMYWMRWRXMFIYRIPNNPBO");

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
    msg.setTimeStamp(0.25454250092144304);
    msg.setSource(40813U);
    msg.setSourceEntity(213U);
    msg.setDestination(18481U);
    msg.setDestinationEntity(216U);
    msg.actions.assign("SBMBAXMGXQEBZICRIAXNJVSIMXROLOSFLGYEKUOCRTQEESVAEBVZGUAFHTWYHDJCCAZPYXKFHLGEPGWHPEAKDJKVUXUWMEYWQIRDFNWCQQPABOZTZMGRAHKKEUAODJKBY");

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
    msg.setTimeStamp(0.9066722094620536);
    msg.setSource(671U);
    msg.setSourceEntity(109U);
    msg.setDestination(14213U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("ZQHCDTRFEVOZBKJIHXXOKUYGFGXMGHTLNFVNKQSREMWLAUZJZIHFAPRXPOUSCXOSONEEUFRXOGNVTALCPJOYHAYRKEMFSSMIDQEZGWDBTNCVBPDXPEELCDCTGSSGUYBIIMLYGZNZJUUFOJCQRRZKAJWBDKQZVYVAMQUTBEVLNRFKGZWINOIJHYQAPHCJQXDTHRBQWGMKYFIYSWPWABVXTIXBLCKSPWDLUWLNAMVTRMQVMJYFOJSDHKWILDA");

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
    msg.setTimeStamp(0.4119252814940825);
    msg.setSource(47668U);
    msg.setSourceEntity(178U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(23U);
    msg.button = 193U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.88405741619085);
    msg.setSource(5649U);
    msg.setSourceEntity(19U);
    msg.setDestination(41927U);
    msg.setDestinationEntity(214U);
    msg.button = 77U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.6946245324169851);
    msg.setSource(45956U);
    msg.setSourceEntity(12U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(238U);
    msg.button = 144U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.703875458879384);
    msg.setSource(9496U);
    msg.setSourceEntity(34U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(249U);
    msg.op = 22U;
    msg.text.assign("UKMENDDWGVGCLZGECSOXDVLJXUPBY");

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
    msg.setTimeStamp(0.5340950094916607);
    msg.setSource(13657U);
    msg.setSourceEntity(109U);
    msg.setDestination(41377U);
    msg.setDestinationEntity(126U);
    msg.op = 205U;
    msg.text.assign("ZDGSMKVFZMYAVZPSWRSINEEPEWTGJYYPGVJLJHZQUDXHOSCUNIIZNMGEZRTFWFQQWMUTMAFHRBEPQDLHYXQTLXLGAYHCLZFKRBUXTKERTGLFDUWDJVTSBWCNHXJCBLCVHAOVALXCMEREZOICVOYBAMRLBUASDKQQDNUWBWRPOCZNVJGIPSJVRFDIYYODNBQAKSCAGNJKJFUWNXWMXIBRKGLMOPMHYKEYCUKHSXUPPBHSADK");

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
    msg.setTimeStamp(0.9757218383496515);
    msg.setSource(61674U);
    msg.setSourceEntity(191U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(24U);
    msg.op = 97U;
    msg.text.assign("METGIKGBIPSHCWDMBGMHRFCUFYHJLGUHMXCBUYOKDRKQQOSFVFQWAJGOOXGXBQNHGVJZBEXHXPKSISDPQAFRZFAFDNLXLPPTKXUWSPXUKIRBQVMZYVLAWWYIJIB");

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
    msg.setTimeStamp(0.7036061896269763);
    msg.setSource(4213U);
    msg.setSourceEntity(139U);
    msg.setDestination(21392U);
    msg.setDestinationEntity(194U);
    msg.op = 175U;
    msg.time_remain = 0.5995231873166561;
    msg.sched_time = 0.09414837528213194;

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
    msg.setTimeStamp(0.8670323413206109);
    msg.setSource(63079U);
    msg.setSourceEntity(22U);
    msg.setDestination(50206U);
    msg.setDestinationEntity(16U);
    msg.op = 83U;
    msg.time_remain = 0.44364108375577926;
    msg.sched_time = 0.20623483730941405;

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
    msg.setTimeStamp(0.23197507917366367);
    msg.setSource(9669U);
    msg.setSourceEntity(68U);
    msg.setDestination(18154U);
    msg.setDestinationEntity(56U);
    msg.op = 200U;
    msg.time_remain = 0.343306497758879;
    msg.sched_time = 0.5185196235827987;

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
    msg.setTimeStamp(0.5098885629406674);
    msg.setSource(1037U);
    msg.setSourceEntity(239U);
    msg.setDestination(50870U);
    msg.setDestinationEntity(189U);
    msg.name.assign("BNIQOZTMJWBCZSOFIFQPTCVWGBONITMXCDKDWIPEPWEUEUAJLMFLFASFONHNLCSDRKMK");
    msg.op = 189U;
    msg.sched_time = 0.3517441765860998;

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
    msg.setTimeStamp(0.31586599475969335);
    msg.setSource(1694U);
    msg.setSourceEntity(141U);
    msg.setDestination(34227U);
    msg.setDestinationEntity(200U);
    msg.name.assign("KAQUIHNFKTZCAGDXIRGCWAEZRUKJSHXUFPAVLVBMRXZHZSQIYMPZLNCWGQNRLCYNABQAQJKCRQJEVHFKGYAMRNTRLLZSBSBEXBONSVWOOUMHDHNYELMMNXSIWYSORDEWWXAJNCOFGEUTJITCVYVJUELZZFXDDHDNDCPJIFEMCVTOSQHOAFWPIORUMFDGXEGIES");
    msg.op = 56U;
    msg.sched_time = 0.4610115291038205;

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
    msg.setTimeStamp(0.4534720200663308);
    msg.setSource(15752U);
    msg.setSourceEntity(149U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(144U);
    msg.name.assign("PIDVUVMJKDHUYYXJLNRBKJATCBROSHFOIHQCQPHOJSANEFCZUSMLCQTXJUDEBMFAWWNMLJRGQVNJISYZRRKJYGXMZDGHYXEJPPXRNFBQTLVPBGDTERWKFAPXIEGFWSQEQ");
    msg.op = 231U;
    msg.sched_time = 0.4811311548492657;

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
    msg.setTimeStamp(0.6524018804196342);
    msg.setSource(16569U);
    msg.setSourceEntity(192U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.14535015654269934);
    msg.setSource(7279U);
    msg.setSourceEntity(154U);
    msg.setDestination(47010U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.11898549972836969);
    msg.setSource(26827U);
    msg.setSourceEntity(11U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.5303201070169844);
    msg.setSource(55909U);
    msg.setSourceEntity(250U);
    msg.setDestination(10957U);
    msg.setDestinationEntity(53U);
    msg.name.assign("DZOSKPCHUKDHKQIBFXVALRXYLZJTIUGSWEFMUFVIJWLKVBQDBOFGRMWPVQSGUYTQAQQCLWXHEXOIZULYNMICDRZRVABTLADORRULHLPCJBJCPWAVEGAZYMHCYONPIPGWVGQNMSDFMGMUNHFEHVYZVNKXMONE");
    msg.state = 89U;

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
    msg.setTimeStamp(0.5372500342101366);
    msg.setSource(58962U);
    msg.setSourceEntity(20U);
    msg.setDestination(45380U);
    msg.setDestinationEntity(137U);
    msg.name.assign("PCAXCRMESBLNYZTS");
    msg.state = 34U;

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
    msg.setTimeStamp(0.5351975316730077);
    msg.setSource(18049U);
    msg.setSourceEntity(127U);
    msg.setDestination(52298U);
    msg.setDestinationEntity(83U);
    msg.name.assign("XGMNMYTSWARVUPKHJLROMEHNEPQRUIOWLZUELIEBKLAZYUVEKGEPGNSEEILVSYQWXIEBIWQGFDAURRVQOFYGMAHRVYXGVFPPYYDFFTBTBJVNJIZCOAJSLJZLXOTZOZNKHRCNUDTCUCJUPBDOHDUJKCJBMYSWQOERCLCBSQYSKDXTWXHNANSK");
    msg.state = 157U;

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
    msg.setTimeStamp(0.4061147077123599);
    msg.setSource(44906U);
    msg.setSourceEntity(84U);
    msg.setDestination(51697U);
    msg.setDestinationEntity(65U);
    msg.name.assign("RKEHCSZVIJGFLMSUKUTKEUXEAULGHKPVQSBACHJIRETRKHKPDQROBRTNYVZDXDZOWIWMYFJRWCXSMCFBPUAUZWGZNMNCEFFCGDGMIOESKTTPVWAEIBJBVYZYJHUNZXIIVJPCDQOLDPKCTNFBMQGNDRVLGMGSHZMFGCWSFOYOATLWDVLMBPWXYLKFAHOANEPJPSTBUFLYAUAIRALVBERWXQSQBUHP");
    msg.value = 173U;

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
    msg.setTimeStamp(0.5809154374421316);
    msg.setSource(51554U);
    msg.setSourceEntity(146U);
    msg.setDestination(59451U);
    msg.setDestinationEntity(225U);
    msg.name.assign("HCTEMOIXJXGYGSDNYVJZBTLAFUNPFQVXBNFQHPZKRIPHIHTLTAWSJFJD");
    msg.value = 38U;

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
    msg.setTimeStamp(0.7036572258985656);
    msg.setSource(47480U);
    msg.setSourceEntity(11U);
    msg.setDestination(28684U);
    msg.setDestinationEntity(180U);
    msg.name.assign("OBJTMYMCEBKNNNKJSUKMPCAICYOWOCSHEXVTHSLCRCWJPFGQXLFRPHORUQHDDXDTFAOOPSFLUBEMHQYSTVJBHXADKVNWKTZRNGOQYIERJBZKVAEJLISCIYUMASXOLDGMWOGPZEBWILJFCPTDNZKFFLGQXWPWUVNQVXRUQWLYDQDZZHUFTVPZPRAUUEINAXSVGM");
    msg.value = 213U;

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
    msg.setTimeStamp(0.6053479409423147);
    msg.setSource(64634U);
    msg.setSourceEntity(19U);
    msg.setDestination(33325U);
    msg.setDestinationEntity(214U);
    msg.name.assign("LMIRURKEZJUNIZIPYWZCWYEPWBQOHHJOQWROMNCGULVLJUTMITMYGTGVJAWYJXJAXOXXZFDVSWNDSZ");

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
    msg.setTimeStamp(0.7395969678657489);
    msg.setSource(53730U);
    msg.setSourceEntity(182U);
    msg.setDestination(45773U);
    msg.setDestinationEntity(174U);
    msg.name.assign("PEPKYTHWQGDBSXOTUVWDVWFDOWHRUHESJMIFPPNCWHEFLYSQWAAGKZJXUNLGETXFYLQNOADHAZSMGIPCARHBIKBRIOWUYSYGIXMVIBFTUAEMT");

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
    msg.setTimeStamp(0.26119696330217657);
    msg.setSource(47351U);
    msg.setSourceEntity(40U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(179U);
    msg.name.assign("QVEHKWOLUEHWUWVQVYSNWIPIOAVJXPCLJWCEWZKYWBHHCQRMLDBMGLDENHZONPTJBT");

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
    msg.setTimeStamp(0.053621477876892976);
    msg.setSource(36401U);
    msg.setSourceEntity(187U);
    msg.setDestination(10727U);
    msg.setDestinationEntity(163U);
    msg.name.assign("KZNNRJKXSMJRTZYBUGXMZFXBVMEMYMIDJIPFYULILWARAEQCLFQEBCPEETTJCURONPDUFVUHKFCLNGESMKJINRGPXMCWVHTIHWSYZNKSAHJHYLTJVWVLFCUKOIORQBCDZGDNEBQTMGHEGFEXYZNOTWZIAGRYSQIDVOBBY");
    msg.value = 197U;

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
    msg.setTimeStamp(0.40524031025102913);
    msg.setSource(29873U);
    msg.setSourceEntity(32U);
    msg.setDestination(40916U);
    msg.setDestinationEntity(138U);
    msg.name.assign("OUCPKBGHZYDQDTNUZJEIMLYFTYQICTFLVUZEZ");
    msg.value = 11U;

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
    msg.setTimeStamp(0.24352489461313997);
    msg.setSource(28328U);
    msg.setSourceEntity(71U);
    msg.setDestination(21367U);
    msg.setDestinationEntity(80U);
    msg.name.assign("CKIWMDKBOFOKAAVABIWCVWTRJWTPYLNZEXFARTGHGWBJXCPKDBCSJFTRVALZZRVUJKUTJTTQFFSNLPOQCQMNJLXGDSYXOFSRFUNVUVEAESGEWSLCZEZGUQJBPFZYMCIMKOMPYYWXMSJHRUWQBZMWDHNPBAYGHHGPUMGHPBXDFQEPOHIDIMLQRXEZKHNXQSHUCRZNZNDYDKDBBYCGOOSRUVAQTHTINOJLIOXVPFAIRXITCNAWKVLMYYIJDSK");
    msg.value = 35U;

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
    msg.setTimeStamp(0.09701588251921933);
    msg.setSource(60195U);
    msg.setSourceEntity(212U);
    msg.setDestination(50527U);
    msg.setDestinationEntity(83U);
    msg.id = 18U;
    msg.period = 280801073U;
    msg.duty_cycle = 1666131502U;

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
    msg.setTimeStamp(0.2293814711740526);
    msg.setSource(55879U);
    msg.setSourceEntity(42U);
    msg.setDestination(22150U);
    msg.setDestinationEntity(233U);
    msg.id = 60U;
    msg.period = 3532244558U;
    msg.duty_cycle = 2667573897U;

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
    msg.setTimeStamp(0.8515750999917361);
    msg.setSource(55397U);
    msg.setSourceEntity(133U);
    msg.setDestination(28577U);
    msg.setDestinationEntity(208U);
    msg.id = 225U;
    msg.period = 3926014703U;
    msg.duty_cycle = 1252048710U;

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
    msg.setTimeStamp(0.27973262302273383);
    msg.setSource(15626U);
    msg.setSourceEntity(138U);
    msg.setDestination(50082U);
    msg.setDestinationEntity(185U);
    msg.id = 81U;
    msg.period = 3869486567U;
    msg.duty_cycle = 2837406254U;

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
    msg.setTimeStamp(0.2760634651252233);
    msg.setSource(58322U);
    msg.setSourceEntity(252U);
    msg.setDestination(38460U);
    msg.setDestinationEntity(225U);
    msg.id = 207U;
    msg.period = 238207620U;
    msg.duty_cycle = 4007159044U;

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
    msg.setTimeStamp(0.9051396653229843);
    msg.setSource(7331U);
    msg.setSourceEntity(235U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(138U);
    msg.id = 33U;
    msg.period = 513159298U;
    msg.duty_cycle = 764260743U;

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
    msg.setTimeStamp(0.07665109112381407);
    msg.setSource(32144U);
    msg.setSourceEntity(68U);
    msg.setDestination(64040U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.5969428524231273;
    msg.lon = 0.004525019196044977;
    msg.height = 0.17485681301108347;
    msg.x = 0.8460100328516146;
    msg.y = 0.4402455247250481;
    msg.z = 0.22256588835611524;
    msg.phi = 0.5397709582818282;
    msg.theta = 0.21830726885742724;
    msg.psi = 0.4321394029107497;
    msg.u = 0.4906321535971627;
    msg.v = 0.695302695267755;
    msg.w = 0.6858205234817345;
    msg.vx = 0.34742698758388146;
    msg.vy = 0.17431349706440147;
    msg.vz = 0.5320367901044699;
    msg.p = 0.9682255211220913;
    msg.q = 0.2783164380223888;
    msg.r = 0.06495267103271574;
    msg.depth = 0.36153720999139927;
    msg.alt = 0.2930984361215009;

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
    msg.setTimeStamp(0.8326187151901876);
    msg.setSource(55621U);
    msg.setSourceEntity(94U);
    msg.setDestination(49333U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.7517902036425896;
    msg.lon = 0.04657608921570888;
    msg.height = 0.546392715383389;
    msg.x = 0.20559302549635972;
    msg.y = 0.7584198952597629;
    msg.z = 0.685344851863786;
    msg.phi = 0.15631217714264123;
    msg.theta = 0.9208878220648581;
    msg.psi = 0.4297402642326055;
    msg.u = 0.46992076765669144;
    msg.v = 0.7596198810372726;
    msg.w = 0.1355291465849604;
    msg.vx = 0.2459052633046528;
    msg.vy = 0.45321373584699776;
    msg.vz = 0.420853634573893;
    msg.p = 0.0329321939972943;
    msg.q = 0.6901130756117995;
    msg.r = 0.32665269095706706;
    msg.depth = 0.242683419744256;
    msg.alt = 0.4030773455156502;

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
    msg.setTimeStamp(0.26296225086768554);
    msg.setSource(47557U);
    msg.setSourceEntity(168U);
    msg.setDestination(39928U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.4810337794281383;
    msg.lon = 0.4419256166874169;
    msg.height = 0.18623664169840526;
    msg.x = 0.12918258028575558;
    msg.y = 0.8903304342367244;
    msg.z = 0.35510362959868136;
    msg.phi = 0.8545146514837059;
    msg.theta = 0.9894630786057578;
    msg.psi = 0.46576534119679625;
    msg.u = 0.7676699161079664;
    msg.v = 0.43042172166765713;
    msg.w = 0.5895267982670845;
    msg.vx = 0.9710276874628304;
    msg.vy = 0.4457655291751942;
    msg.vz = 0.4102227217683111;
    msg.p = 0.18126551327606677;
    msg.q = 0.659475571906591;
    msg.r = 0.6237700519902257;
    msg.depth = 0.8733739693435335;
    msg.alt = 0.20170732995314133;

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
    msg.setTimeStamp(0.7109585242621023);
    msg.setSource(63313U);
    msg.setSourceEntity(233U);
    msg.setDestination(50525U);
    msg.setDestinationEntity(129U);
    msg.x = 0.26141421147042265;
    msg.y = 0.47588331282935314;
    msg.z = 0.31451432288167835;

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
    msg.setTimeStamp(0.49271637811547375);
    msg.setSource(58110U);
    msg.setSourceEntity(210U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(185U);
    msg.x = 0.4153294218159551;
    msg.y = 0.5273941116001575;
    msg.z = 0.9921762556540904;

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
    msg.setTimeStamp(0.8661009227545597);
    msg.setSource(27537U);
    msg.setSourceEntity(44U);
    msg.setDestination(23130U);
    msg.setDestinationEntity(7U);
    msg.x = 0.9180649290313457;
    msg.y = 0.16375130724720877;
    msg.z = 0.8597438634013816;

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
    msg.setTimeStamp(0.3887023255135169);
    msg.setSource(18015U);
    msg.setSourceEntity(236U);
    msg.setDestination(61724U);
    msg.setDestinationEntity(80U);
    msg.value = 0.9228957830859608;

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
    msg.setTimeStamp(0.912557084542152);
    msg.setSource(57338U);
    msg.setSourceEntity(87U);
    msg.setDestination(37811U);
    msg.setDestinationEntity(160U);
    msg.value = 0.31006721234612666;

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
    msg.setTimeStamp(0.675488859328976);
    msg.setSource(23972U);
    msg.setSourceEntity(13U);
    msg.setDestination(61344U);
    msg.setDestinationEntity(51U);
    msg.value = 0.8470491547869562;

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
    msg.setTimeStamp(0.005900175110970629);
    msg.setSource(32534U);
    msg.setSourceEntity(52U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(207U);
    msg.value = 0.6841563881710345;

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
    msg.setTimeStamp(0.20462082028464923);
    msg.setSource(47869U);
    msg.setSourceEntity(189U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(140U);
    msg.value = 0.44747134601296024;

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
    msg.setTimeStamp(0.024460043991479385);
    msg.setSource(47160U);
    msg.setSourceEntity(164U);
    msg.setDestination(15834U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5067255677525936;

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
    msg.setTimeStamp(0.9704079552809707);
    msg.setSource(55520U);
    msg.setSourceEntity(170U);
    msg.setDestination(63343U);
    msg.setDestinationEntity(111U);
    msg.x = 0.4347431090920294;
    msg.y = 0.8464954079602676;
    msg.z = 0.5688638058439269;
    msg.phi = 0.132537079726484;
    msg.theta = 0.5744976206809437;
    msg.psi = 0.5035537259159748;
    msg.p = 0.8028614310541287;
    msg.q = 0.7761468608754766;
    msg.r = 0.5569808888294566;
    msg.u = 0.29076762591882754;
    msg.v = 0.8489365704057952;
    msg.w = 0.19902803806679337;
    msg.bias_psi = 0.4964934233117383;
    msg.bias_r = 0.761262340826846;

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
    msg.setTimeStamp(0.1959830821794054);
    msg.setSource(22803U);
    msg.setSourceEntity(14U);
    msg.setDestination(50641U);
    msg.setDestinationEntity(238U);
    msg.x = 0.17431388093140776;
    msg.y = 0.6109860449896887;
    msg.z = 0.5975508816205095;
    msg.phi = 0.2983231022443308;
    msg.theta = 0.25350787618846216;
    msg.psi = 0.5974433494051091;
    msg.p = 0.007872988232921707;
    msg.q = 0.41274739692950346;
    msg.r = 0.4237327907964201;
    msg.u = 0.483361155576729;
    msg.v = 0.9351631045794576;
    msg.w = 0.32862762106600885;
    msg.bias_psi = 0.43149224580928136;
    msg.bias_r = 0.6252251809374404;

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
    msg.setTimeStamp(0.07519821646526148);
    msg.setSource(25894U);
    msg.setSourceEntity(125U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(254U);
    msg.x = 0.7541880120607792;
    msg.y = 0.8508609515702015;
    msg.z = 0.45793632400967643;
    msg.phi = 0.9015393411969926;
    msg.theta = 0.8020648934394938;
    msg.psi = 0.5442817707095006;
    msg.p = 0.17159324093270067;
    msg.q = 0.24070871736943955;
    msg.r = 0.8579972212455361;
    msg.u = 0.2254946762850415;
    msg.v = 0.04835242221680891;
    msg.w = 0.28743219142630794;
    msg.bias_psi = 0.5005717213271664;
    msg.bias_r = 0.7280827917750694;

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
    msg.setTimeStamp(0.6697669851575407);
    msg.setSource(40558U);
    msg.setSourceEntity(78U);
    msg.setDestination(26154U);
    msg.setDestinationEntity(201U);
    msg.bias_psi = 0.9616528214714617;
    msg.bias_r = 0.08470779468706824;
    msg.cog = 0.1480878146956891;
    msg.cyaw = 0.8989704268074824;
    msg.lbl_rej_level = 0.8556799391910052;
    msg.gps_rej_level = 0.38821042626266766;
    msg.custom_x = 0.24244769387866627;
    msg.custom_y = 0.34142490286647875;
    msg.custom_z = 0.40902865984079306;

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
    msg.setTimeStamp(0.5607489444028051);
    msg.setSource(16854U);
    msg.setSourceEntity(186U);
    msg.setDestination(61410U);
    msg.setDestinationEntity(26U);
    msg.bias_psi = 0.6019073634608972;
    msg.bias_r = 0.4670213379332445;
    msg.cog = 0.4148191682092416;
    msg.cyaw = 0.9809326072261032;
    msg.lbl_rej_level = 0.18170367001602772;
    msg.gps_rej_level = 0.06636926918415309;
    msg.custom_x = 0.4269576427084767;
    msg.custom_y = 0.6535862041217441;
    msg.custom_z = 0.05736464295764232;

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
    msg.setTimeStamp(0.1919445662212449);
    msg.setSource(63983U);
    msg.setSourceEntity(146U);
    msg.setDestination(56120U);
    msg.setDestinationEntity(61U);
    msg.bias_psi = 0.53680548929497;
    msg.bias_r = 0.8327836928552039;
    msg.cog = 0.789797469885314;
    msg.cyaw = 0.5408702770375231;
    msg.lbl_rej_level = 0.1681615411212758;
    msg.gps_rej_level = 0.2095309924421025;
    msg.custom_x = 0.6492430452940734;
    msg.custom_y = 0.11507557126419932;
    msg.custom_z = 0.9828454889610427;

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
    msg.setTimeStamp(0.35606045546368525);
    msg.setSource(46373U);
    msg.setSourceEntity(147U);
    msg.setDestination(55328U);
    msg.setDestinationEntity(51U);
    msg.utc_time = 0.3350292003815064;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.9510181632821592);
    msg.setSource(949U);
    msg.setSourceEntity(42U);
    msg.setDestination(23419U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.734421341741063;
    msg.reason = 100U;

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
    msg.setTimeStamp(0.40936671124853385);
    msg.setSource(52933U);
    msg.setSourceEntity(37U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(45U);
    msg.utc_time = 0.03682242380748857;
    msg.reason = 217U;

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
    msg.setTimeStamp(0.2515284404192676);
    msg.setSource(10988U);
    msg.setSourceEntity(166U);
    msg.setDestination(24952U);
    msg.setDestinationEntity(131U);
    msg.id = 175U;
    msg.range = 0.9182683207402917;
    msg.acceptance = 142U;

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
    msg.setTimeStamp(0.8444929214648856);
    msg.setSource(15386U);
    msg.setSourceEntity(112U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(163U);
    msg.id = 148U;
    msg.range = 0.3514708013437271;
    msg.acceptance = 200U;

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
    msg.setTimeStamp(0.11970494854786118);
    msg.setSource(26309U);
    msg.setSourceEntity(178U);
    msg.setDestination(18222U);
    msg.setDestinationEntity(165U);
    msg.id = 200U;
    msg.range = 0.6172833898061028;
    msg.acceptance = 80U;

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
    msg.setTimeStamp(0.22332878392081756);
    msg.setSource(31234U);
    msg.setSourceEntity(248U);
    msg.setDestination(43821U);
    msg.setDestinationEntity(203U);
    msg.type = 200U;
    msg.reason = 88U;
    msg.value = 0.05649543765933496;
    msg.timestep = 0.5084480649848573;

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
    msg.setTimeStamp(0.5077107709452536);
    msg.setSource(45906U);
    msg.setSourceEntity(68U);
    msg.setDestination(30793U);
    msg.setDestinationEntity(205U);
    msg.type = 23U;
    msg.reason = 219U;
    msg.value = 0.24861721976359585;
    msg.timestep = 0.9082690887758522;

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
    msg.setTimeStamp(0.001954354343162046);
    msg.setSource(176U);
    msg.setSourceEntity(86U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(185U);
    msg.type = 110U;
    msg.reason = 31U;
    msg.value = 0.4233077802281048;
    msg.timestep = 0.649865160182067;

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
    msg.setTimeStamp(0.6595387762448598);
    msg.setSource(1157U);
    msg.setSourceEntity(203U);
    msg.setDestination(35963U);
    msg.setDestinationEntity(132U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WXXMCMVKUHHTPJDFYUJXAHWJTBCLRLSOELUPBDGXXDPGDVJZYEMSGROBMKHAPXQBFSUNNPYMRGRABXLWZVNMQUKZFNWLPYASDDAZEH");
    tmp_msg_0.lat = 0.016004699830519997;
    tmp_msg_0.lon = 0.31396867184694865;
    tmp_msg_0.depth = 0.6261795067963202;
    tmp_msg_0.query_channel = 71U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 144U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9447030553177653;
    msg.y = 0.5785203011189134;
    msg.var_x = 0.22358857219194095;
    msg.var_y = 0.9684750280858248;
    msg.distance = 0.8456417654493965;

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
    msg.setTimeStamp(0.6935471097409537);
    msg.setSource(58999U);
    msg.setSourceEntity(9U);
    msg.setDestination(22608U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RYNRUJWIWVLYRRUOVJIXVCZAO");
    tmp_msg_0.lat = 0.3842654665475854;
    tmp_msg_0.lon = 0.14848791861817257;
    tmp_msg_0.depth = 0.34619993861264586;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 15U;
    tmp_msg_0.transponder_delay = 44U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8370030765289731;
    msg.y = 0.8832608876097353;
    msg.var_x = 0.4185765947064729;
    msg.var_y = 0.3849070028841979;
    msg.distance = 0.6262148771082214;

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
    msg.setTimeStamp(0.8805416792328826);
    msg.setSource(34735U);
    msg.setSourceEntity(192U);
    msg.setDestination(65254U);
    msg.setDestinationEntity(31U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FSNPCLSECUOFYAUEJEDXSI");
    tmp_msg_0.lat = 0.24476662385015324;
    tmp_msg_0.lon = 0.3578590721344517;
    tmp_msg_0.depth = 0.05353682667538162;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 198U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8146207241252275;
    msg.y = 0.6748248169900218;
    msg.var_x = 0.722042519999803;
    msg.var_y = 0.08834729385084461;
    msg.distance = 0.028243037046495556;

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
    msg.setTimeStamp(0.5429251187348347);
    msg.setSource(51787U);
    msg.setSourceEntity(112U);
    msg.setDestination(61841U);
    msg.setDestinationEntity(162U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.5535478062478739);
    msg.setSource(46654U);
    msg.setSourceEntity(129U);
    msg.setDestination(5327U);
    msg.setDestinationEntity(139U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.5824700449762005);
    msg.setSource(43716U);
    msg.setSourceEntity(76U);
    msg.setDestination(57109U);
    msg.setDestinationEntity(231U);
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
    msg.setTimeStamp(0.12894879439434903);
    msg.setSource(59599U);
    msg.setSourceEntity(166U);
    msg.setDestination(54605U);
    msg.setDestinationEntity(29U);
    msg.x = 0.2925328833977473;
    msg.y = 0.25089375485760634;
    msg.z = 0.9958014852418068;

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
    msg.setTimeStamp(0.9233696405304348);
    msg.setSource(26807U);
    msg.setSourceEntity(75U);
    msg.setDestination(11543U);
    msg.setDestinationEntity(60U);
    msg.x = 0.583905396158757;
    msg.y = 0.3513842083804861;
    msg.z = 0.7516644123870084;

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
    msg.setTimeStamp(0.493659381362095);
    msg.setSource(50442U);
    msg.setSourceEntity(61U);
    msg.setDestination(33262U);
    msg.setDestinationEntity(228U);
    msg.x = 0.26462496896111665;
    msg.y = 0.09407228918222788;
    msg.z = 0.20332304882838015;

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
    msg.setTimeStamp(0.43619120766578856);
    msg.setSource(3748U);
    msg.setSourceEntity(103U);
    msg.setDestination(25785U);
    msg.setDestinationEntity(197U);
    msg.va = 0.08176082227491133;
    msg.aoa = 0.5897674014055114;
    msg.ssa = 0.7031796854073565;

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
    msg.setTimeStamp(0.5710428655206539);
    msg.setSource(29481U);
    msg.setSourceEntity(209U);
    msg.setDestination(33147U);
    msg.setDestinationEntity(57U);
    msg.va = 0.03896434026923823;
    msg.aoa = 0.1806951076988108;
    msg.ssa = 0.1225744145362988;

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
    msg.setTimeStamp(0.8255138620581448);
    msg.setSource(4354U);
    msg.setSourceEntity(37U);
    msg.setDestination(29110U);
    msg.setDestinationEntity(7U);
    msg.va = 0.3626576195436966;
    msg.aoa = 0.41714277197936145;
    msg.ssa = 0.3110122214301396;

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
    msg.setTimeStamp(0.27073620018840927);
    msg.setSource(12266U);
    msg.setSourceEntity(207U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(158U);
    msg.value = 0.1347563589012335;

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
    msg.setTimeStamp(0.48012341585153884);
    msg.setSource(9140U);
    msg.setSourceEntity(10U);
    msg.setDestination(36098U);
    msg.setDestinationEntity(176U);
    msg.value = 0.170470030814746;

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
    msg.setTimeStamp(0.006665210088965479);
    msg.setSource(48950U);
    msg.setSourceEntity(187U);
    msg.setDestination(13140U);
    msg.setDestinationEntity(90U);
    msg.value = 0.7729946828173525;

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
    msg.setTimeStamp(0.6258334187479937);
    msg.setSource(48783U);
    msg.setSourceEntity(37U);
    msg.setDestination(55347U);
    msg.setDestinationEntity(37U);
    msg.value = 0.9111618095824097;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.24817497462626703);
    msg.setSource(28512U);
    msg.setSourceEntity(240U);
    msg.setDestination(15358U);
    msg.setDestinationEntity(79U);
    msg.value = 0.28536858693243317;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.31294978116387073);
    msg.setSource(19840U);
    msg.setSourceEntity(73U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8015917728811512;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.20877311110016084);
    msg.setSource(45006U);
    msg.setSourceEntity(0U);
    msg.setDestination(57426U);
    msg.setDestinationEntity(137U);
    msg.value = 0.5991618084269041;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.7486082689054182);
    msg.setSource(47344U);
    msg.setSourceEntity(171U);
    msg.setDestination(60400U);
    msg.setDestinationEntity(211U);
    msg.value = 0.4948888586518607;
    msg.speed_units = 3U;

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
    msg.setTimeStamp(0.29826423385218803);
    msg.setSource(34368U);
    msg.setSourceEntity(25U);
    msg.setDestination(64406U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5439937813771165;
    msg.speed_units = 217U;

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
    msg.setTimeStamp(0.4116765844439779);
    msg.setSource(9419U);
    msg.setSourceEntity(103U);
    msg.setDestination(46027U);
    msg.setDestinationEntity(227U);
    msg.value = 0.1041985862161009;

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
    msg.setTimeStamp(0.3279065665120299);
    msg.setSource(46572U);
    msg.setSourceEntity(59U);
    msg.setDestination(55584U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5776937996207638;

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
    msg.setTimeStamp(0.028137415585572922);
    msg.setSource(28891U);
    msg.setSourceEntity(246U);
    msg.setDestination(36337U);
    msg.setDestinationEntity(177U);
    msg.value = 0.32423155248354407;

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
    msg.setTimeStamp(0.6046649810452803);
    msg.setSource(61115U);
    msg.setSourceEntity(21U);
    msg.setDestination(20946U);
    msg.setDestinationEntity(220U);
    msg.value = 0.4991063303076705;

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
    msg.setTimeStamp(0.053449541999288086);
    msg.setSource(8691U);
    msg.setSourceEntity(114U);
    msg.setDestination(56584U);
    msg.setDestinationEntity(38U);
    msg.value = 0.6428381974435505;

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
    msg.setTimeStamp(0.9495003933238857);
    msg.setSource(51713U);
    msg.setSourceEntity(25U);
    msg.setDestination(53547U);
    msg.setDestinationEntity(145U);
    msg.value = 0.8013611120080737;

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
    msg.setTimeStamp(0.8042472775553405);
    msg.setSource(22310U);
    msg.setSourceEntity(207U);
    msg.setDestination(42925U);
    msg.setDestinationEntity(15U);
    msg.value = 0.2534025046942938;

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
    msg.setTimeStamp(0.26318269731084243);
    msg.setSource(10385U);
    msg.setSourceEntity(190U);
    msg.setDestination(7935U);
    msg.setDestinationEntity(179U);
    msg.value = 0.008645036447938015;

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
    msg.setTimeStamp(0.6590777106545584);
    msg.setSource(13663U);
    msg.setSourceEntity(0U);
    msg.setDestination(57587U);
    msg.setDestinationEntity(72U);
    msg.value = 0.45135190721812546;

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
    msg.setTimeStamp(0.6321054220399238);
    msg.setSource(17941U);
    msg.setSourceEntity(27U);
    msg.setDestination(32255U);
    msg.setDestinationEntity(26U);
    msg.path_ref = 3951732503U;
    msg.start_lat = 0.17303961613196428;
    msg.start_lon = 0.9313157287994944;
    msg.start_z = 0.8287317284630509;
    msg.start_z_units = 159U;
    msg.end_lat = 0.13559702753289127;
    msg.end_lon = 0.6403993144702159;
    msg.end_z = 0.39581378136337464;
    msg.end_z_units = 139U;
    msg.speed = 0.7780310387507264;
    msg.speed_units = 240U;
    msg.lradius = 0.9458943870491623;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.2873986011637495);
    msg.setSource(15323U);
    msg.setSourceEntity(68U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 3860778628U;
    msg.start_lat = 0.8216789037754564;
    msg.start_lon = 0.4443035979925378;
    msg.start_z = 0.6783841697158227;
    msg.start_z_units = 85U;
    msg.end_lat = 0.21880422601539296;
    msg.end_lon = 0.25606892605652465;
    msg.end_z = 0.25115262641620173;
    msg.end_z_units = 142U;
    msg.speed = 0.27119086350091226;
    msg.speed_units = 120U;
    msg.lradius = 0.7538835836758699;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.3369802390802128);
    msg.setSource(9517U);
    msg.setSourceEntity(21U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(165U);
    msg.path_ref = 4150759965U;
    msg.start_lat = 0.2966432625449196;
    msg.start_lon = 0.660554278371515;
    msg.start_z = 0.37140216437958506;
    msg.start_z_units = 246U;
    msg.end_lat = 0.40264474234590497;
    msg.end_lon = 0.8104436883485344;
    msg.end_z = 0.5960348421718816;
    msg.end_z_units = 37U;
    msg.speed = 0.12470769826626982;
    msg.speed_units = 242U;
    msg.lradius = 0.1698415058676489;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.790974711969793);
    msg.setSource(7202U);
    msg.setSourceEntity(185U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(51U);
    msg.x = 0.661798272444815;
    msg.y = 0.6064121345604204;
    msg.z = 0.23009819252607333;
    msg.k = 0.4221455037530173;
    msg.m = 0.14257911684768376;
    msg.n = 0.40628744213157664;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.34108794320007585);
    msg.setSource(19479U);
    msg.setSourceEntity(46U);
    msg.setDestination(879U);
    msg.setDestinationEntity(55U);
    msg.x = 0.9885671541928811;
    msg.y = 0.005885067875207817;
    msg.z = 0.03953366542559866;
    msg.k = 0.3695969569327878;
    msg.m = 0.7568840880526678;
    msg.n = 0.33951337222141587;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.03718568226832186);
    msg.setSource(10718U);
    msg.setSourceEntity(202U);
    msg.setDestination(57548U);
    msg.setDestinationEntity(11U);
    msg.x = 0.3070078896560018;
    msg.y = 0.5215615496000211;
    msg.z = 0.14181225208849935;
    msg.k = 0.7973303926936496;
    msg.m = 0.8010009917099651;
    msg.n = 0.6106795407213295;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.5329960997072051);
    msg.setSource(28807U);
    msg.setSourceEntity(13U);
    msg.setDestination(19174U);
    msg.setDestinationEntity(140U);
    msg.value = 0.7859284847267579;

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
    msg.setTimeStamp(0.09483862056323189);
    msg.setSource(42765U);
    msg.setSourceEntity(11U);
    msg.setDestination(44122U);
    msg.setDestinationEntity(30U);
    msg.value = 0.08209970010359746;

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
    msg.setTimeStamp(0.8190318656522486);
    msg.setSource(59617U);
    msg.setSourceEntity(26U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9939006737069501;

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
    msg.setTimeStamp(0.27529758418492745);
    msg.setSource(40856U);
    msg.setSourceEntity(179U);
    msg.setDestination(49592U);
    msg.setDestinationEntity(175U);
    msg.u = 0.01684540813202884;
    msg.v = 0.7829233247577506;
    msg.w = 0.1955963123226251;
    msg.p = 0.27121982059472716;
    msg.q = 0.3020688503236194;
    msg.r = 0.8890496740583724;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.1987175776131862);
    msg.setSource(37912U);
    msg.setSourceEntity(222U);
    msg.setDestination(57883U);
    msg.setDestinationEntity(164U);
    msg.u = 0.6143988684833689;
    msg.v = 0.038230267426098585;
    msg.w = 0.5086550285938714;
    msg.p = 0.8901001442014871;
    msg.q = 0.05509211002671688;
    msg.r = 0.7154217938082722;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.565115557340452);
    msg.setSource(55517U);
    msg.setSourceEntity(27U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(95U);
    msg.u = 0.5160859383414783;
    msg.v = 0.3889408092521365;
    msg.w = 0.3552255394679441;
    msg.p = 0.4838642749225911;
    msg.q = 0.5866403320041704;
    msg.r = 0.9834817087500365;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.9317865806142807);
    msg.setSource(60228U);
    msg.setSourceEntity(135U);
    msg.setDestination(63977U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 1525694240U;
    msg.start_lat = 0.6931471140752513;
    msg.start_lon = 0.6188645081303142;
    msg.start_z = 0.8013940702865292;
    msg.start_z_units = 126U;
    msg.end_lat = 0.829656748677666;
    msg.end_lon = 0.8352534477234229;
    msg.end_z = 0.16417462577748332;
    msg.end_z_units = 223U;
    msg.lradius = 0.44380202063578555;
    msg.flags = 5U;
    msg.x = 0.6807778833325442;
    msg.y = 0.6326117819769858;
    msg.z = 0.9128559275714231;
    msg.vx = 0.0402641375969669;
    msg.vy = 0.023853293088615835;
    msg.vz = 0.678074427050258;
    msg.course_error = 0.47213271742972807;
    msg.eta = 55470U;

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
    msg.setTimeStamp(0.12264263575761492);
    msg.setSource(28395U);
    msg.setSourceEntity(224U);
    msg.setDestination(25940U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 1636641248U;
    msg.start_lat = 0.34546717505065694;
    msg.start_lon = 0.444836994797847;
    msg.start_z = 0.9922812098216266;
    msg.start_z_units = 221U;
    msg.end_lat = 0.9512486929468966;
    msg.end_lon = 0.9168928530867749;
    msg.end_z = 0.34505374326488436;
    msg.end_z_units = 60U;
    msg.lradius = 0.28239451381427205;
    msg.flags = 110U;
    msg.x = 0.2786319130924052;
    msg.y = 0.11756674708954862;
    msg.z = 0.17937415423643244;
    msg.vx = 0.16627002662950785;
    msg.vy = 0.7109998946002563;
    msg.vz = 0.0002036257940469799;
    msg.course_error = 0.1833032783374181;
    msg.eta = 15051U;

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
    msg.setTimeStamp(0.16050835277817033);
    msg.setSource(45007U);
    msg.setSourceEntity(130U);
    msg.setDestination(42624U);
    msg.setDestinationEntity(124U);
    msg.path_ref = 4191863725U;
    msg.start_lat = 0.012709478742739422;
    msg.start_lon = 0.5996955362207306;
    msg.start_z = 0.32928023007966334;
    msg.start_z_units = 234U;
    msg.end_lat = 0.09354485361971165;
    msg.end_lon = 0.18144079826480708;
    msg.end_z = 0.009835600002101708;
    msg.end_z_units = 118U;
    msg.lradius = 0.060098053923400285;
    msg.flags = 104U;
    msg.x = 0.8144094165548015;
    msg.y = 0.25183880780223;
    msg.z = 0.0448518674023215;
    msg.vx = 0.7953358457382568;
    msg.vy = 0.06792282339390199;
    msg.vz = 0.9735801882235422;
    msg.course_error = 0.8009756990457642;
    msg.eta = 28716U;

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
    msg.setTimeStamp(0.22855183470421636);
    msg.setSource(4339U);
    msg.setSourceEntity(252U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(206U);
    msg.k = 0.5615413966768378;
    msg.m = 0.3985273000654018;
    msg.n = 0.8208290794397529;

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
    msg.setTimeStamp(0.4435900834942037);
    msg.setSource(12316U);
    msg.setSourceEntity(110U);
    msg.setDestination(10636U);
    msg.setDestinationEntity(243U);
    msg.k = 0.935510523076756;
    msg.m = 0.0742238117359949;
    msg.n = 0.9168005025270415;

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
    msg.setTimeStamp(0.04970896266994651);
    msg.setSource(59502U);
    msg.setSourceEntity(226U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(67U);
    msg.k = 0.8785319446262729;
    msg.m = 0.025696116835679073;
    msg.n = 0.2149840301838981;

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
    msg.setTimeStamp(0.39830008128222727);
    msg.setSource(44015U);
    msg.setSourceEntity(15U);
    msg.setDestination(8686U);
    msg.setDestinationEntity(15U);
    msg.p = 0.5342711663860018;
    msg.i = 0.7882128319554657;
    msg.d = 0.48899849940156725;
    msg.a = 0.39959113936136526;

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
    msg.setTimeStamp(0.3907546320672054);
    msg.setSource(28479U);
    msg.setSourceEntity(160U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(205U);
    msg.p = 0.3666294806853625;
    msg.i = 0.41279266076455334;
    msg.d = 0.803522356768064;
    msg.a = 0.3880353593550041;

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
    msg.setTimeStamp(0.7757267445702586);
    msg.setSource(39341U);
    msg.setSourceEntity(252U);
    msg.setDestination(56849U);
    msg.setDestinationEntity(223U);
    msg.p = 0.17415369242495315;
    msg.i = 0.6304470482336967;
    msg.d = 0.7111986945522972;
    msg.a = 0.017597707294871534;

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
    msg.setTimeStamp(0.15029212732270503);
    msg.setSource(54310U);
    msg.setSourceEntity(187U);
    msg.setDestination(16119U);
    msg.setDestinationEntity(79U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.7140987442562345);
    msg.setSource(54337U);
    msg.setSourceEntity(31U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(165U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.7552225172365123);
    msg.setSource(21468U);
    msg.setSourceEntity(241U);
    msg.setDestination(4813U);
    msg.setDestinationEntity(187U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.9647149621759719);
    msg.setSource(20317U);
    msg.setSourceEntity(121U);
    msg.setDestination(16486U);
    msg.setDestinationEntity(170U);
    msg.x = 0.567806377653351;
    msg.y = 0.5600716122467103;
    msg.z = 0.16930257179849917;
    msg.vx = 0.2963496412569836;
    msg.vy = 0.3043524263277225;
    msg.vz = 0.3126652971443995;
    msg.ax = 0.166161638797498;
    msg.ay = 0.39326701954628984;
    msg.az = 0.36806716554393615;
    msg.flags = 35577U;

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
    msg.setTimeStamp(0.6735411135199793);
    msg.setSource(878U);
    msg.setSourceEntity(187U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(200U);
    msg.x = 0.237859383530298;
    msg.y = 0.16718652762271835;
    msg.z = 0.8473525301543969;
    msg.vx = 0.8578317498883538;
    msg.vy = 0.6400580250793824;
    msg.vz = 0.12554314029837288;
    msg.ax = 0.3205703001952731;
    msg.ay = 0.611942168828515;
    msg.az = 0.9885539813106162;
    msg.flags = 54069U;

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
    msg.setTimeStamp(0.5113310304163291);
    msg.setSource(51011U);
    msg.setSourceEntity(240U);
    msg.setDestination(4789U);
    msg.setDestinationEntity(19U);
    msg.x = 0.001622950359842168;
    msg.y = 0.12501832220058307;
    msg.z = 0.5476229037014599;
    msg.vx = 0.5993148072928062;
    msg.vy = 0.7603972155667451;
    msg.vz = 0.41305784753845565;
    msg.ax = 0.8272573112777833;
    msg.ay = 0.31903099098553256;
    msg.az = 0.22380198881422908;
    msg.flags = 30017U;

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
    msg.setTimeStamp(0.07529344835061269);
    msg.setSource(63502U);
    msg.setSourceEntity(2U);
    msg.setDestination(6613U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6892083526157685;

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
    msg.setTimeStamp(0.23764673811211112);
    msg.setSource(55782U);
    msg.setSourceEntity(94U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7242120427427097;

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
    msg.setTimeStamp(0.8064069214595677);
    msg.setSource(36867U);
    msg.setSourceEntity(112U);
    msg.setDestination(54537U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7126396161779263;

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
    msg.setTimeStamp(0.055381967510160224);
    msg.setSource(21654U);
    msg.setSourceEntity(12U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(21U);
    msg.timeout = 20847U;
    msg.lat = 0.01826413075916522;
    msg.lon = 0.08957564488876013;
    msg.z = 0.060102019973994;
    msg.z_units = 134U;
    msg.speed = 0.13758620407658928;
    msg.speed_units = 152U;
    msg.roll = 0.8635434585192902;
    msg.pitch = 0.09331004000948029;
    msg.yaw = 0.7508768270725449;
    msg.custom.assign("RXESJGWSBWTDJVENBCYUFMMZPYOQXKHDPBWZIXLKYFJYMKC");

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
    msg.setTimeStamp(0.48314741667501937);
    msg.setSource(16093U);
    msg.setSourceEntity(193U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(75U);
    msg.timeout = 5553U;
    msg.lat = 0.9343853082443923;
    msg.lon = 0.10767593360351757;
    msg.z = 0.665347865632459;
    msg.z_units = 103U;
    msg.speed = 0.16968696880605239;
    msg.speed_units = 37U;
    msg.roll = 0.18484040623028053;
    msg.pitch = 0.6187291975018991;
    msg.yaw = 0.4023873413265371;
    msg.custom.assign("LJDWJPZMDCAKFULYEWIVGXEJPVVPCIOJQSYEXMUSXWCWWHZRFOFNFFWSIUXOBETZZABRVOIEDVUBBMDKGQQRZERGASPNTOYPGHUAUFTJISH");

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
    msg.setTimeStamp(0.8228261928392335);
    msg.setSource(47972U);
    msg.setSourceEntity(225U);
    msg.setDestination(64837U);
    msg.setDestinationEntity(150U);
    msg.timeout = 29655U;
    msg.lat = 0.48024169068253175;
    msg.lon = 0.311080048880491;
    msg.z = 0.00681440670815614;
    msg.z_units = 254U;
    msg.speed = 0.29476785443441267;
    msg.speed_units = 217U;
    msg.roll = 0.060998647247749616;
    msg.pitch = 0.8848238150620622;
    msg.yaw = 0.3218817545337741;
    msg.custom.assign("WZVLDGTEQGTTOLYSTMEMRYADIFMFRCRZUPKPWBQGHNJBSGFDAFBFJGTWMPULRDVNKFVWVTCZPSZSXJIZRIQCHYXOJMMQQWMEVHXDAVQDNOSYVEKBBLBSHBMWZKSKLHEW");

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
    msg.setTimeStamp(0.6611764308370143);
    msg.setSource(38293U);
    msg.setSourceEntity(103U);
    msg.setDestination(62128U);
    msg.setDestinationEntity(121U);
    msg.timeout = 54014U;
    msg.lat = 0.1680810702277733;
    msg.lon = 0.7290975698142015;
    msg.z = 0.7357040406745904;
    msg.z_units = 145U;
    msg.speed = 0.33720204151153177;
    msg.speed_units = 219U;
    msg.duration = 3885U;
    msg.radius = 0.061921806584893435;
    msg.flags = 248U;
    msg.custom.assign("OGJGUCCMCIBXERYNGCLZKWNLJUECOIBMZAIZASMNRJJPIBPKAXURPFOVLGXVNWSPVMQFMAUVITDWSYVXAMPCUOAYJTRJDOEGTDWJADURHSQXIZTGBZASQQHNFLPQC");

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
    msg.setTimeStamp(0.7691189527008669);
    msg.setSource(17815U);
    msg.setSourceEntity(228U);
    msg.setDestination(31215U);
    msg.setDestinationEntity(193U);
    msg.timeout = 20515U;
    msg.lat = 0.1977267950309417;
    msg.lon = 0.8779179169010303;
    msg.z = 0.4382950183081824;
    msg.z_units = 153U;
    msg.speed = 0.7819900891172344;
    msg.speed_units = 200U;
    msg.duration = 34265U;
    msg.radius = 0.7881585198791279;
    msg.flags = 229U;
    msg.custom.assign("DLTYCTWSOEFXFTFPDHOPRMXKJLAWOTRFJZYGLRMAOBAWFCECUDWDISKERPQUZSBMSOKVPXYHBIYS");

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
    msg.setTimeStamp(0.5840454118746222);
    msg.setSource(15204U);
    msg.setSourceEntity(252U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(179U);
    msg.timeout = 30263U;
    msg.lat = 0.5308427622606957;
    msg.lon = 0.1573773949341376;
    msg.z = 0.0327023217605793;
    msg.z_units = 245U;
    msg.speed = 0.1623718271157233;
    msg.speed_units = 238U;
    msg.duration = 1211U;
    msg.radius = 0.7490017245596174;
    msg.flags = 209U;
    msg.custom.assign("PAXQKPHOGUMVSIPWVDDUZAFFDBKJMKPHYOKARONQHD");

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
    msg.setTimeStamp(0.3694950949740079);
    msg.setSource(55555U);
    msg.setSourceEntity(130U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(20U);
    msg.custom.assign("LZFNOREMDPF");

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
    msg.setTimeStamp(0.16114829434010092);
    msg.setSource(44222U);
    msg.setSourceEntity(229U);
    msg.setDestination(40476U);
    msg.setDestinationEntity(139U);
    msg.custom.assign("CEDYFKOASEDTDIWXZYEHJNYKYWQKRDSEVIHETIQROSEUFAXGRLBOHMQTTUMZAFLLBFJCQPGFAOQOAJGISBMNEYOKT");

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
    msg.setTimeStamp(0.7137757978088185);
    msg.setSource(23682U);
    msg.setSourceEntity(42U);
    msg.setDestination(31369U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("GPUVLIHPQMDDNXFZDSTWGTHCDXOBYCHBQHLKYTRNLRWEUPMKYZHWXZNIYZLVBQTUKZOBSUWCVXPETQKTOANQAAGWCVSMBKSFLIJEHIWOPYSYSXMNOZHMBNRPHGFDOOJRQMOFADBYGHUESJPCTCUUKUFMJVAKCQB");

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
    msg.setTimeStamp(0.45507410216175603);
    msg.setSource(2098U);
    msg.setSourceEntity(196U);
    msg.setDestination(9226U);
    msg.setDestinationEntity(127U);
    msg.timeout = 12309U;
    msg.lat = 0.38607650407872374;
    msg.lon = 0.8461062005381301;
    msg.z = 0.14256607863728654;
    msg.z_units = 175U;
    msg.duration = 7751U;
    msg.speed = 0.38988393701861634;
    msg.speed_units = 169U;
    msg.type = 175U;
    msg.radius = 0.9237540666456576;
    msg.length = 0.8160182050983809;
    msg.bearing = 0.6903134592451975;
    msg.direction = 38U;
    msg.custom.assign("OCSUUSEXBEWHDSFUODXJMLTUZQLZANKIKFWSRAAVVYHVBRGYRVUHPFNFLXMLBCNKGLDD");

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
    msg.setTimeStamp(0.39940236238673843);
    msg.setSource(63174U);
    msg.setSourceEntity(74U);
    msg.setDestination(49692U);
    msg.setDestinationEntity(230U);
    msg.timeout = 17398U;
    msg.lat = 0.7184168846721101;
    msg.lon = 0.8973780054202014;
    msg.z = 0.6319612167595293;
    msg.z_units = 53U;
    msg.duration = 1111U;
    msg.speed = 0.5282593284621234;
    msg.speed_units = 9U;
    msg.type = 117U;
    msg.radius = 0.4016960829741322;
    msg.length = 0.36159445892484643;
    msg.bearing = 0.4861529180867129;
    msg.direction = 135U;
    msg.custom.assign("QQJZDWPEQTLVLTAJLDBMPOSJNFSXLZCLHSIJEWJVPNCZQNGFGIOOCAAFHUOCBXAIFZZDYDIXMBQCELEEMJRYKHHYXIRHSGCTAJNSUVFGYSQBMTRDLUQNECUWXNRKWBGRWOAKVAFGXAUOYIURTVMTNPRFDBHKUMIIFUKKKNZMHECOGERFIWMZYJMZOUBRPAYRLJHVDEKSWSWBPHKEXVKTBCOTWAJYWPBPXMYDQXQVGHIQVDOLXPFTGPCYVLZ");

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
    msg.setTimeStamp(0.1651379700762723);
    msg.setSource(2082U);
    msg.setSourceEntity(35U);
    msg.setDestination(43925U);
    msg.setDestinationEntity(254U);
    msg.timeout = 49235U;
    msg.lat = 0.6371155184472926;
    msg.lon = 0.2160521625430708;
    msg.z = 0.6267028671166897;
    msg.z_units = 134U;
    msg.duration = 48916U;
    msg.speed = 0.4823973947412997;
    msg.speed_units = 251U;
    msg.type = 228U;
    msg.radius = 0.08645456034194698;
    msg.length = 0.37134316845897186;
    msg.bearing = 0.35015858576264025;
    msg.direction = 50U;
    msg.custom.assign("CDOPESXADQWMJIABSJBGEVYGWEWJYQYMQGJSTRPINKISJERZVHUTRVIPRAPTRGEOFQVGKATIAQKBVQLQLDIMTOVMERNUTYKDZYPPNEPMLTWQOEYFKKZRVUOGWXDVZAOHWHXFCAOFKNNOKBXHUHLNXCTLDBMBMLSSKGZEDDZSCUPMGHPRNMABLYOXPRUTIHUZWJCLNZIJJXQAJXRVBCNCYIVSEZHUMFHLO");

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
    msg.setTimeStamp(0.7128857401397475);
    msg.setSource(55318U);
    msg.setSourceEntity(49U);
    msg.setDestination(46187U);
    msg.setDestinationEntity(165U);
    msg.duration = 438U;
    msg.custom.assign("NSYHDRJZBRNEQMSPCRAUDGLESHAEIJAFUZJLYGXVMSMQACNWOUCRVEPLTGMWMNHBLXBTRVQGPGMDOCGDXYIZFBOTLBLPCHEZKNPJJTARVYKCNAVVQUBGECPKHXNBDUZFSVWXRYOAFRFMIHELHMQFJIXXUQLZ");

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
    msg.setTimeStamp(0.9994021941284879);
    msg.setSource(53793U);
    msg.setSourceEntity(244U);
    msg.setDestination(9934U);
    msg.setDestinationEntity(171U);
    msg.duration = 59240U;
    msg.custom.assign("TSHQTNTQRBCMFBYMWNUZXLXJOLGIHVJOQVBIIYQWVMKSOWPGZAJGMZBRDYAXNGPIGFSULFMUQJSZSIPCEBUOHPINVKLICOLCQPDZYKAOVXOMQGP");

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
    msg.setTimeStamp(0.37185716129686774);
    msg.setSource(30231U);
    msg.setSourceEntity(97U);
    msg.setDestination(41170U);
    msg.setDestinationEntity(193U);
    msg.duration = 58470U;
    msg.custom.assign("VVXZBIIBHHXOGLHHSLXVTHFCOUEPRYNJYKMIFKZUCDJYSNGJMGPLCWKLFSMDRTMDRVCPGUJSC");

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
    msg.setTimeStamp(0.8919079196691397);
    msg.setSource(34515U);
    msg.setSourceEntity(111U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(79U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1837549200U;
    tmp_msg_0.start_lat = 0.31132321854938017;
    tmp_msg_0.start_lon = 0.19941793342536984;
    tmp_msg_0.start_z = 0.18089883580918487;
    tmp_msg_0.start_z_units = 191U;
    tmp_msg_0.end_lat = 0.79023851562791;
    tmp_msg_0.end_lon = 0.6207557106492196;
    tmp_msg_0.end_z = 0.5535868979329266;
    tmp_msg_0.end_z_units = 229U;
    tmp_msg_0.speed = 0.6409269581159452;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.lradius = 0.378974780439822;
    tmp_msg_0.flags = 14U;
    msg.control.set(tmp_msg_0);
    msg.duration = 13880U;
    msg.custom.assign("PBSJZWCLPFHWXDAMANQDOVYGQCPECJCEEXKBYIRZNFKQLVMMPIZCXUZAZMVMUQIEOOTEDQVYVXOKJWCSX");

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
    msg.setTimeStamp(0.689722018347757);
    msg.setSource(44335U);
    msg.setSourceEntity(29U);
    msg.setDestination(28152U);
    msg.setDestinationEntity(28U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.25511198921061484;
    msg.control.set(tmp_msg_0);
    msg.duration = 55513U;
    msg.custom.assign("ZLHSLVWWQDCUNKMQXFIFXBHEMYWOQPKENPVEPOYQSYRGLFMRTESETCGSZIFMJIOHRDOZVCBNCAJGMIOJWJXADMYXOVTAWPXBGGHMGJQKLJDQPBPDKZOWCLTCAFOXRZFRQBNXXEAPITDXPCHGYDZMTAANKHMWHNWJCEZSEZDAYTJLT");

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
    msg.setTimeStamp(0.9329824160186373);
    msg.setSource(15587U);
    msg.setSourceEntity(91U);
    msg.setDestination(34174U);
    msg.setDestinationEntity(69U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7172696429716582;
    tmp_msg_0.z_units = 130U;
    msg.control.set(tmp_msg_0);
    msg.duration = 535U;
    msg.custom.assign("CCLPUSAIOIYGXOZQUCSRFVXXEZYWVEITVJDKPBORBOOYCYSSANWLWCLABJTNDFMQHMAUXYLJSQFIAUCPTLK");

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
    msg.setTimeStamp(0.9918359008564335);
    msg.setSource(52139U);
    msg.setSourceEntity(243U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(166U);
    msg.timeout = 59406U;
    msg.lat = 0.6832643567461538;
    msg.lon = 0.24432298008386866;
    msg.z = 0.4538172644295727;
    msg.z_units = 65U;
    msg.speed = 0.49938078490137394;
    msg.speed_units = 173U;
    msg.bearing = 0.20287507860038;
    msg.cross_angle = 0.20653389048520576;
    msg.width = 0.31800785895538874;
    msg.length = 0.6031044007272409;
    msg.hstep = 0.9171565783824214;
    msg.coff = 103U;
    msg.alternation = 173U;
    msg.flags = 177U;
    msg.custom.assign("ZKTIHADZFSZVFUSGOVPXUCWWIFUKNSDSRTNXBFIOCQHYAXHQLAYAHJCYBGLEGOHJAYVLEMVOWREKELXZDCAVTWHFOGWVMDIQBNWUJFLDYJUUTWVVCBZRNSYQCEXJEHBIRMUDHBRMTZQWHMXUNXNQOIMCONUCWPRGERXDLAOJP");

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
    msg.setTimeStamp(0.24381809162834556);
    msg.setSource(26528U);
    msg.setSourceEntity(40U);
    msg.setDestination(28313U);
    msg.setDestinationEntity(132U);
    msg.timeout = 62454U;
    msg.lat = 0.9543886871241791;
    msg.lon = 0.09939519544945075;
    msg.z = 0.6733203212789461;
    msg.z_units = 156U;
    msg.speed = 0.4165320895071666;
    msg.speed_units = 127U;
    msg.bearing = 0.7942640546780715;
    msg.cross_angle = 0.7931182506434209;
    msg.width = 0.48486107596236794;
    msg.length = 0.7233941126829327;
    msg.hstep = 0.7216782322354389;
    msg.coff = 143U;
    msg.alternation = 155U;
    msg.flags = 240U;
    msg.custom.assign("UKWRMOFIVLYWTFBPGIZTEDWHFMKRKJJUQINYXDEMSDDKCGVPSSYSSPEOVVOPACDQVBUVWHANBKZHSBJMPCEOQOTXRBJHDCYJHFBUMMJDTZZTPFZPOOOQNWMFKWJKNDXCLINAUXISWAEGETAEEHQPPFXGW");

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
    msg.setTimeStamp(0.4013159741413851);
    msg.setSource(10944U);
    msg.setSourceEntity(183U);
    msg.setDestination(2782U);
    msg.setDestinationEntity(59U);
    msg.timeout = 3542U;
    msg.lat = 0.13362697312232497;
    msg.lon = 0.14425614592398617;
    msg.z = 0.8296799102932633;
    msg.z_units = 242U;
    msg.speed = 0.2151896091040847;
    msg.speed_units = 27U;
    msg.bearing = 0.22897494508106175;
    msg.cross_angle = 0.03459366945085929;
    msg.width = 0.2060841778073702;
    msg.length = 0.7302820339973716;
    msg.hstep = 0.44363688060091555;
    msg.coff = 145U;
    msg.alternation = 147U;
    msg.flags = 133U;
    msg.custom.assign("DPQYGOCABBLELKRNCRIWQPXJVWHOLGMJJNNJAEKCBRTUJITYMUDENPITOTBVXLYIKDPMXCECOXGFZHNQEXEWBRMGPOKGHEBLSDKLYGVNBDFYQDBLVRZRTZCIJJZULCXFYJWQRAMGHADZFIRMZ");

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
    msg.setTimeStamp(0.9371427202046362);
    msg.setSource(48277U);
    msg.setSourceEntity(174U);
    msg.setDestination(3069U);
    msg.setDestinationEntity(90U);
    msg.timeout = 64784U;
    msg.lat = 0.4486327178962495;
    msg.lon = 0.5763031714114694;
    msg.z = 0.35312642237359815;
    msg.z_units = 141U;
    msg.speed = 0.23956408149242825;
    msg.speed_units = 219U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7897423901407794;
    tmp_msg_0.y = 0.403994293674245;
    tmp_msg_0.z = 0.3488667474798972;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VXLBMALCIUCWKRJYMTONYBKOCMDJIRLFWZBCJENSLTYHIYSMQPZVPXWRCWCQJRAQHTYIVIWQEYFOGLXGTNNBNKYTEBSBUVIXQRWJPOUDZJSYGYCQSGATFWXKTPQUFCUSPWGDIGVUSNLJOAFZKAZSMHTERZZCHHOLNWQSFGBEXZOAHDZABJLVARFUEOGDPTIPBMKKKUDMQMGORVZDRVDFHJH");

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
    msg.setTimeStamp(0.025753613521958596);
    msg.setSource(49967U);
    msg.setSourceEntity(114U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(0U);
    msg.timeout = 34923U;
    msg.lat = 0.5617050209020406;
    msg.lon = 0.009938892228967267;
    msg.z = 0.21793578032112615;
    msg.z_units = 247U;
    msg.speed = 0.448837034086887;
    msg.speed_units = 226U;
    msg.custom.assign("EQGBEVIPUOTSHOYYMQQYPHWNVBFASTRGYZNUZVKMJSKCDSRACFVWZUKOYTHHMSPEIIANLDCARHDUQZGDWHHGUJABBFPVDQLWUJJUWCOCCBQLROOJFFZOLWRXCIERTIULABUGINYRCTXEWTXTQFV");

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
    msg.setTimeStamp(0.4984235166644885);
    msg.setSource(13778U);
    msg.setSourceEntity(226U);
    msg.setDestination(35034U);
    msg.setDestinationEntity(89U);
    msg.timeout = 57155U;
    msg.lat = 0.14224142463485956;
    msg.lon = 0.5660069565071774;
    msg.z = 0.8171367921648491;
    msg.z_units = 159U;
    msg.speed = 0.7740912221415834;
    msg.speed_units = 39U;
    msg.custom.assign("IZEKANYZKUJBNRQUDEHCOUCLHWZQVMJLGGSOIMVHFGVWPCXJVSJWEBXNPFYRCFAHAGSPMQWXBHEZOFREDALVWL");

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
    msg.setTimeStamp(0.3488697698461499);
    msg.setSource(51433U);
    msg.setSourceEntity(69U);
    msg.setDestination(13837U);
    msg.setDestinationEntity(52U);
    msg.x = 0.929063615783022;
    msg.y = 0.07044633884656504;
    msg.z = 0.5849052762490761;

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
    msg.setTimeStamp(0.10374930889313416);
    msg.setSource(12818U);
    msg.setSourceEntity(83U);
    msg.setDestination(5063U);
    msg.setDestinationEntity(157U);
    msg.x = 0.9469319320548077;
    msg.y = 0.4380895800569289;
    msg.z = 0.8286439350077599;

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
    msg.setTimeStamp(0.4115414236951458);
    msg.setSource(43764U);
    msg.setSourceEntity(153U);
    msg.setDestination(17563U);
    msg.setDestinationEntity(54U);
    msg.x = 0.4145964189025242;
    msg.y = 0.19577967754198344;
    msg.z = 0.8081728523777583;

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
    msg.setTimeStamp(0.9473227041492379);
    msg.setSource(32101U);
    msg.setSourceEntity(232U);
    msg.setDestination(25032U);
    msg.setDestinationEntity(47U);
    msg.timeout = 19374U;
    msg.lat = 0.4695098233132514;
    msg.lon = 0.8400450179247667;
    msg.z = 0.14039414774127512;
    msg.z_units = 79U;
    msg.amplitude = 0.3298293754439613;
    msg.pitch = 0.09872811130368397;
    msg.speed = 0.8480203130713909;
    msg.speed_units = 62U;
    msg.custom.assign("CCTUGKOMUIHWGFPIAVJHRPUVZVSXBWJGDISRCVAGYCJPAVYVDBZDZQCTNGDPLPIFEBEBLRKIYBUEXEQTQSOKDPDRHEIDLBXYJWOJVQEOTMWMXSNAXCGNIPJNUJKWDHHSMUARQZHKXSTCEBWHYWLNKE");

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
    msg.setTimeStamp(0.8469864844130942);
    msg.setSource(7303U);
    msg.setSourceEntity(49U);
    msg.setDestination(64378U);
    msg.setDestinationEntity(132U);
    msg.timeout = 35351U;
    msg.lat = 0.3658057380877592;
    msg.lon = 0.232490791952627;
    msg.z = 0.8378085853951526;
    msg.z_units = 41U;
    msg.amplitude = 0.8384766833639873;
    msg.pitch = 0.9202258919157245;
    msg.speed = 0.5612744904725061;
    msg.speed_units = 154U;
    msg.custom.assign("HTUMNDSRWUSASYJTBWYJHAKHWOQKEIXDWCMQGXSKVQP");

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
    msg.setTimeStamp(0.9647181619225187);
    msg.setSource(7598U);
    msg.setSourceEntity(174U);
    msg.setDestination(30404U);
    msg.setDestinationEntity(222U);
    msg.timeout = 10312U;
    msg.lat = 0.9345850958845988;
    msg.lon = 0.08415499380714608;
    msg.z = 0.2791815465831258;
    msg.z_units = 26U;
    msg.amplitude = 0.9904913947720504;
    msg.pitch = 0.708735654331273;
    msg.speed = 0.6375162835539196;
    msg.speed_units = 179U;
    msg.custom.assign("TUYNFLAYUWJQSK");

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
    msg.setTimeStamp(0.7241812756197066);
    msg.setSource(41865U);
    msg.setSourceEntity(202U);
    msg.setDestination(48391U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.3737858502818304);
    msg.setSource(4646U);
    msg.setSourceEntity(173U);
    msg.setDestination(31867U);
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
    msg.setTimeStamp(0.7995123498682685);
    msg.setSource(10839U);
    msg.setSourceEntity(240U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.24351863221985137);
    msg.setSource(26003U);
    msg.setSourceEntity(248U);
    msg.setDestination(57209U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.5985246230545864;
    msg.lon = 0.3023665123151724;
    msg.z = 0.8481039383973228;
    msg.z_units = 135U;
    msg.radius = 0.6152947450523292;
    msg.duration = 52475U;
    msg.speed = 0.1774567177733003;
    msg.speed_units = 164U;
    msg.custom.assign("DOJLTVMMYRXVQCEGZCWHGBPSXWIFBZLOQGFSHKXZGNFKBUJGIXDKPDVOUPGAJFUJCMAXSRGGDIUWZNPAZEBRTZOAFHTESXOCQYYUAKXJJTLYDGEMQSQNLRJKXMCELUWJMNQI");

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
    msg.setTimeStamp(0.7952706111590464);
    msg.setSource(32097U);
    msg.setSourceEntity(234U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.1654218581178708;
    msg.lon = 0.6137023525356106;
    msg.z = 0.5481602618796512;
    msg.z_units = 9U;
    msg.radius = 0.7791562792117975;
    msg.duration = 38244U;
    msg.speed = 0.18872030485439262;
    msg.speed_units = 151U;
    msg.custom.assign("IOXWFOPJNRQUCAFSMKCNZVKHSHYFXDATMRZIZPVCLFHYZPWTZGLGCFMMQOWUHCIBSXUJQKKTNUEPRWOLUGBTSWRPNTGZYBUBGDRPKVQFASJFRBHTNGYFMNYPJZQHJEECSWSQVWVD");

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
    msg.setTimeStamp(0.7829885554426782);
    msg.setSource(47160U);
    msg.setSourceEntity(219U);
    msg.setDestination(63391U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.9024074693071287;
    msg.lon = 0.4291328652232008;
    msg.z = 0.3060237942792867;
    msg.z_units = 252U;
    msg.radius = 0.08494951659929073;
    msg.duration = 3812U;
    msg.speed = 0.5783761232322564;
    msg.speed_units = 121U;
    msg.custom.assign("VPRKNFEDJCBAVNISIGHBUWTRVCLTZPDFQHAYGYLIFAXXBEACLEKNOPJEFHFEISQZSMGWXKMODMRZCAJQIFDNLSWGKNLOCKWNDDCVDFSPAADOZJUYMGHKJJTZWPARBTEIUNAMPSIXPBCOMEPYJQWAVXDGPUVHYKMLQNROQCVXSIOOSGHYFQXVUYRIFSIBMFSQ");

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
    msg.setTimeStamp(0.6776752218268984);
    msg.setSource(38609U);
    msg.setSourceEntity(195U);
    msg.setDestination(5215U);
    msg.setDestinationEntity(195U);
    msg.timeout = 24026U;
    msg.flags = 67U;
    msg.lat = 0.1484898220283558;
    msg.lon = 0.7801893890686744;
    msg.start_z = 0.35225864024304254;
    msg.start_z_units = 170U;
    msg.end_z = 0.3834884502159106;
    msg.end_z_units = 72U;
    msg.radius = 0.27572990238906436;
    msg.speed = 0.9566013903163771;
    msg.speed_units = 46U;
    msg.custom.assign("XAUOLBYGDZOSINDWFXVRJRGPUHRGDWXWBMLFJVLBXFZUAOAXSNCNAKSXSPKORVHVBOGXFEDOFTCAFLNTDITSJBQIBGRNAYZLQICREVEIHAKQBWAYTLAUZTHBPXUSIGEYCGZDWGAWPNDMCZCFJOIYLKWPUKLEVUQMRZJJOWEJPTYQVYCFDHXPZRSINCYBQWMTEHPKEQNMJKRESKMMRLFMVGPHCGZJJKIVIZHYOQSNMHEQFTUCTLYBOMQT");

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
    msg.setTimeStamp(0.2002882278202237);
    msg.setSource(30571U);
    msg.setSourceEntity(191U);
    msg.setDestination(18759U);
    msg.setDestinationEntity(189U);
    msg.timeout = 9598U;
    msg.flags = 102U;
    msg.lat = 0.8763448357992109;
    msg.lon = 0.6696920089915634;
    msg.start_z = 0.8042452069740538;
    msg.start_z_units = 144U;
    msg.end_z = 0.4760908498133559;
    msg.end_z_units = 27U;
    msg.radius = 0.6353494825854976;
    msg.speed = 0.9559502476299441;
    msg.speed_units = 135U;
    msg.custom.assign("CSGURGCVHDMRVQPDAOMFMHJRNEVMXOWLJDGIDJQNLNTJQUKPXRFSDUBXPDAPUPGWPFMVADGBWUSOKN");

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
    msg.setTimeStamp(0.1605939592804675);
    msg.setSource(4390U);
    msg.setSourceEntity(172U);
    msg.setDestination(53331U);
    msg.setDestinationEntity(245U);
    msg.timeout = 12136U;
    msg.flags = 41U;
    msg.lat = 0.35467825737158587;
    msg.lon = 0.9661216327492056;
    msg.start_z = 0.7160038865377253;
    msg.start_z_units = 146U;
    msg.end_z = 0.18232415009682967;
    msg.end_z_units = 114U;
    msg.radius = 0.8238539402672563;
    msg.speed = 0.09295206526818989;
    msg.speed_units = 253U;
    msg.custom.assign("EWOESQBGLLFMMZRUDDIOKJMFSAUWMLOGRKTVOKAUTHRDNPAKXGQDANSIBMWGYNRXTZMFJPNZBIWDHEGISKBSYZEGXUOWMMEMHKBTBPPPEFDJAYFV");

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
    msg.setTimeStamp(0.7983184766814652);
    msg.setSource(52830U);
    msg.setSourceEntity(36U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(99U);
    msg.timeout = 40736U;
    msg.lat = 0.07050798424708038;
    msg.lon = 0.3587995818937342;
    msg.z = 0.9577490851041591;
    msg.z_units = 117U;
    msg.speed = 0.11645420940129969;
    msg.speed_units = 166U;
    msg.custom.assign("UGUZLBVZBLKUNRNPGVUCKMJXRFLDEJYFMHPGKHWILIKXAPRGGRASEKBBKVYQRMZKWWWAODQLUEOOHGCUPGDSNLJYJFCJWHOZYABZDDETOLWQNZWCTPKSEVWHJZ");

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
    msg.setTimeStamp(0.6415132980006166);
    msg.setSource(6429U);
    msg.setSourceEntity(51U);
    msg.setDestination(27809U);
    msg.setDestinationEntity(200U);
    msg.timeout = 48327U;
    msg.lat = 0.7107544996508577;
    msg.lon = 0.34014697571433916;
    msg.z = 0.6434604153452435;
    msg.z_units = 240U;
    msg.speed = 0.048027563405443674;
    msg.speed_units = 41U;
    msg.custom.assign("AIBBOLCDTMXRPPNZVQYKXFHRSWCEIUTRNIEYKZHPTNYDVMRTMESKRIJKJPVJHTFQSWKNCASOYFJFCMZEBFPIVLRDLJBBGJUWSLPPLXMIZNUDBAVOFCXNDHRCKGOLIHOJUOECQEVTGQNOGRABSWAHISEGVLHXMYYDDFQPGXHOZRZVLPCQDYOTZJHVIBGPMTWS");

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
    msg.setTimeStamp(0.5157772407512843);
    msg.setSource(37542U);
    msg.setSourceEntity(172U);
    msg.setDestination(11549U);
    msg.setDestinationEntity(193U);
    msg.timeout = 15706U;
    msg.lat = 0.09043188254280143;
    msg.lon = 0.0812531891147581;
    msg.z = 0.7913673484193233;
    msg.z_units = 234U;
    msg.speed = 0.41939785715529;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4499704520248603;
    tmp_msg_0.y = 0.9907441609563785;
    tmp_msg_0.z = 0.1634645917091091;
    tmp_msg_0.t = 0.35865827505039505;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HPLZRGPFDFKOUFMLNRKKWFQSHUIWYMGCJNZDIOQNHHCYNABCTJZDGBTKWLNELGCRSWOMAQUVJNTTVYMGSJIFDFHYWAHRWVHVLEBIFWKVABOOCHXZEMSKPNCEZIKDXWKWSREJTZURJUBUJIQQGBTXXDYGTCPPCPOBXLMAAYNMTMFCBDYIUSURAEKZOJUEZYHHEXAXFTPXVSVLSY");

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
    msg.setTimeStamp(0.07185659004004363);
    msg.setSource(20386U);
    msg.setSourceEntity(114U);
    msg.setDestination(48616U);
    msg.setDestinationEntity(137U);
    msg.x = 0.4287557750259383;
    msg.y = 0.17043420318154257;
    msg.z = 0.588201756535232;
    msg.t = 0.7115535804013349;

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
    msg.setTimeStamp(0.9906809650716991);
    msg.setSource(8610U);
    msg.setSourceEntity(189U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(203U);
    msg.x = 0.5564688584946075;
    msg.y = 0.7905050616599868;
    msg.z = 0.725037968714429;
    msg.t = 0.008311707298085613;

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
    msg.setTimeStamp(0.09983621939586207);
    msg.setSource(208U);
    msg.setSourceEntity(134U);
    msg.setDestination(45502U);
    msg.setDestinationEntity(248U);
    msg.x = 0.221591283177484;
    msg.y = 0.5141071350380221;
    msg.z = 0.792446623500347;
    msg.t = 0.030860427029390736;

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
    msg.setTimeStamp(0.10470293186318769);
    msg.setSource(34892U);
    msg.setSourceEntity(165U);
    msg.setDestination(13310U);
    msg.setDestinationEntity(3U);
    msg.timeout = 59804U;
    msg.name.assign("WULHTZNJMDXCPPOBKUODVKRKPSGCLXPEHQSYCQFJFNESVKLOETLNYKXDYKJCTLIUSHZGGFNZBJIAZX");
    msg.custom.assign("FDLAKQWCZBSENMLRAZLKXZLHYYFHITRFRIFRTEDDBUYABHEXIYSWBVZCIVXWXVZMSRLWMJWXZCQUONNUNCUZBGCUKXCPKNINOYPEEOIMMAACSDJVJESMUTZNDLFHWETYRTDDHUDPFMSDJEWISQULBWVYVTRJOXOBXFHEJIOAHXQGCMQKKHPNEQPMOCRAABGXQLVZSARYJWGLOKGHTGHPUZOVIPBGWDJPFQMALSSGGPFQUQKNJCVNRKO");

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
    msg.setTimeStamp(0.27882015278472005);
    msg.setSource(64212U);
    msg.setSourceEntity(227U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(240U);
    msg.timeout = 59797U;
    msg.name.assign("HFDLJFEAHZMCQUARLFLFRAVEPPLUVAPELDMKTBIKBOBQTHGWQZMODPPSBTVEIVNPWUGWLZIKRUGVLTPHYSZUCNJKENYCFKVEQAFHSTCDXOFYUQYSGOMASVFXLRHYNYOHYGZGCSMYHCIWKXXTHBJBRXPLUAEVNEKKJBIEBDXOZCHQJMYDWJAFOCORRSNFJCQTJZNGLSRXKXNZNGTUWRPIXQDCDWMIVMKAPRJ");
    msg.custom.assign("VKJBRPFNKUZSGXKWADJDIGVMILWUHDEQKQSUBOIXRYYZCGZBNDTPYMWEGMURKNPDTDXAPOSTHIVCQABVRGEMJFGKOFUZZPTNKZWQPMCYEJTBKVQXWUEWJQXNLSHJGPIFTLLZJAHFBYODUTVVCWXGLJIRSYYEXDLPHTHMHYOFXQCUFSEHRRAMWSAVOVBMAZBRCFXQFILRCTPINZACBHOKSNQWMNCSUINSIYGBUXJPDERYLADOWLEQ");

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
    msg.setTimeStamp(0.48873179099098973);
    msg.setSource(13453U);
    msg.setSourceEntity(201U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(139U);
    msg.timeout = 8534U;
    msg.name.assign("WYHPDSLLJQKIDMCKMSGLTQTRANPGSTJOYJYBVYFPQHLHPXRRUXPGMFBYIEYNJJLODYLWSVUMABZXQGCGKITADHXHKGOPHWQHMBRLRX");
    msg.custom.assign("UEJDEPHJBDPMSFJMGMVXNJRFXUJKIAPAFSRFLIRSGELMEJGIWTGHHPOXBHGQWMTLEIHAUXWSYPFWNPGABCBQCLQPKBXFIAIKAYXNMYTEJERISBWINNZERNRZDTLVCSGRDYPDUXNUNDCZVMYKQREAGAFDQTWVCKBFSMFYMEOYIKZWXTQZZYSOKFHCLKOYUJXKWLQHHRKCCIWQAOOOPZUTZJQBVUVZGVWRMLTOLS");

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
    msg.setTimeStamp(0.4950913752192474);
    msg.setSource(37396U);
    msg.setSourceEntity(17U);
    msg.setDestination(37744U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.358317057578036;
    msg.lon = 0.7120983932704538;
    msg.z = 0.2880431977494752;
    msg.z_units = 4U;
    msg.speed = 0.4406782105971129;
    msg.speed_units = 146U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7116429016083923;
    tmp_msg_0.y = 0.7082880772773493;
    tmp_msg_0.z = 0.6479833649037666;
    tmp_msg_0.t = 0.18181683426408923;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 17454U;
    tmp_msg_1.off_x = 0.33031580149977535;
    tmp_msg_1.off_y = 0.9027630656314001;
    tmp_msg_1.off_z = 0.3226518894593694;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6949730701375827;
    msg.custom.assign("DETOOTMWUPFYLPZPSNLIFVHABRBVGNQPIICNWUCLGVMUHVJWRDSZEMBNVCROCAJLHQORSTEQJKADMWLNKVUBWEHOGUOAKYEBDEMZXHSSMIIHFVGQOAYKPFFIREA");

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
    msg.setTimeStamp(0.7424687712816513);
    msg.setSource(30118U);
    msg.setSourceEntity(11U);
    msg.setDestination(29656U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.10324623662309929;
    msg.lon = 0.694554126040207;
    msg.z = 0.20441793181968426;
    msg.z_units = 156U;
    msg.speed = 0.2067637178477214;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.10972045495653993;
    tmp_msg_0.y = 0.8416683879224139;
    tmp_msg_0.z = 0.34452091187121814;
    tmp_msg_0.t = 0.20554712365866779;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2675160031094035;
    msg.custom.assign("ZYOPEJBBCGBUKFUWGSYZMPWDIVRXOVZENFRTBHDXXZBECNRYIZWVZRDXBBMWLIAHMPTOODTNZALVPQFYYVRCMHGDYVSXUEKQOGUHAXKAXLNQKEEKQKZTSFEUNSKTTNQGFGALJKJVKDGDHOCHYSSJLCACAOQRPXBDUDKUJPRILTDPMCMIHYNRGFPITGTSTHCFQBOBOJNGMEUWMUCLASSPHQAIFNQLCMXRMIWYVPJYEJVUZFRWJEVNIWO");

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
    msg.setTimeStamp(0.7748667980351956);
    msg.setSource(49575U);
    msg.setSourceEntity(214U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.8977860034551549;
    msg.lon = 0.3104096475458671;
    msg.z = 0.26631088763366006;
    msg.z_units = 229U;
    msg.speed = 0.5564419271360472;
    msg.speed_units = 180U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2212954510779659;
    tmp_msg_0.y = 0.5685675600711005;
    tmp_msg_0.z = 0.34242752122428166;
    tmp_msg_0.t = 0.5978866586701509;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30604U;
    tmp_msg_1.off_x = 0.1907324317638437;
    tmp_msg_1.off_y = 0.4603868475417202;
    tmp_msg_1.off_z = 0.3794668884177679;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4599800053838279;
    msg.custom.assign("LIJKEKMOYTLHXRVKTNHROFXM");

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
    msg.setTimeStamp(0.25839018700659533);
    msg.setSource(1290U);
    msg.setSourceEntity(212U);
    msg.setDestination(21383U);
    msg.setDestinationEntity(164U);
    msg.vid = 26570U;
    msg.off_x = 0.8083430822711777;
    msg.off_y = 0.07232548948273831;
    msg.off_z = 0.2451992956096951;

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
    msg.setTimeStamp(0.6874469255100335);
    msg.setSource(32174U);
    msg.setSourceEntity(247U);
    msg.setDestination(12817U);
    msg.setDestinationEntity(180U);
    msg.vid = 37060U;
    msg.off_x = 0.45977214816322165;
    msg.off_y = 0.06606275133275907;
    msg.off_z = 0.0627683684283421;

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
    msg.setTimeStamp(0.7189953802243212);
    msg.setSource(34449U);
    msg.setSourceEntity(110U);
    msg.setDestination(10518U);
    msg.setDestinationEntity(155U);
    msg.vid = 30918U;
    msg.off_x = 0.5791274988465529;
    msg.off_y = 0.00859069185054373;
    msg.off_z = 0.796636919479205;

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
    msg.setTimeStamp(0.696548670409774);
    msg.setSource(61645U);
    msg.setSourceEntity(200U);
    msg.setDestination(63093U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.8919139781084993);
    msg.setSource(5087U);
    msg.setSourceEntity(90U);
    msg.setDestination(17763U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.9821638782890112);
    msg.setSource(40313U);
    msg.setSourceEntity(126U);
    msg.setDestination(33702U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.8039616928854754);
    msg.setSource(3876U);
    msg.setSourceEntity(66U);
    msg.setDestination(60815U);
    msg.setDestinationEntity(139U);
    msg.mid = 15909U;

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
    msg.setTimeStamp(0.44250490467900305);
    msg.setSource(26973U);
    msg.setSourceEntity(13U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(70U);
    msg.mid = 18010U;

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
    msg.setTimeStamp(0.6239571530686748);
    msg.setSource(22909U);
    msg.setSourceEntity(142U);
    msg.setDestination(45608U);
    msg.setDestinationEntity(229U);
    msg.mid = 1082U;

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
    msg.setTimeStamp(0.36687920404487595);
    msg.setSource(59931U);
    msg.setSourceEntity(216U);
    msg.setDestination(13717U);
    msg.setDestinationEntity(76U);
    msg.state = 197U;
    msg.eta = 12481U;
    msg.info.assign("FDLUFMXZIQXEWGWGFMISDKTVIEWVWZJANCRHLRDKAQJIJDZSYBESKBZSQGYVKBRCJGORTGTUXXBVXCLWUOQUKKLFRZGPHHKDPBTUEEOCBLWFYMIASHHFMVEHEHJYIQZDPOZQAQAXFPCXMPSWNHBDEASYUUCOUPMZTVPADFILRBYZFONNVEYGEJBAPGMFLYKOHTTKYONIKIQVNSPXYXJCBTNGCLAOV");

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
    msg.setTimeStamp(0.9327681860947552);
    msg.setSource(16401U);
    msg.setSourceEntity(105U);
    msg.setDestination(3761U);
    msg.setDestinationEntity(18U);
    msg.state = 182U;
    msg.eta = 31935U;
    msg.info.assign("RADDLYBGUXAHJPURCOXMSAYJAFJWTQHNZFFVOSCVZMDQRHZGKXQJACZOLFPEWZKZLMOPUEVISMFKXINJTDIHLBTDZIQNBUPCHLHVCFTLCCULQWKBIAYEUTNJWUBECWRUYSGYKYTRWASEMNSLZDXKFJOGQWONTNVMYPBNDLDUEBVQKKXVYXTZXBSSPPGLDFUWOOZVGGOMJHEPPANMIGFIMREHRHGPWBTFEJRYGOKDQINIRSATRMAQCIVYBJQWV");

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
    msg.setTimeStamp(0.14342728183470277);
    msg.setSource(57419U);
    msg.setSourceEntity(221U);
    msg.setDestination(53461U);
    msg.setDestinationEntity(0U);
    msg.state = 187U;
    msg.eta = 1392U;
    msg.info.assign("PSBBNAURHGZHAWXGBGPIPMHSEHVAGXKMLICLKMSAUDZZIYNDTNAQAUJJXEZCQNQFBWTLEQWWMXOTCKHFNMOZWGBIJKDXUKOKTYRCDEJLXLRZRVVYUIQLDFTOJHMBXUIUPIZJBARLWXNFQGZTJBGVVGNCWKHKBODORSFDSFIZVRCNYYSXIVEHRQVSHKCEODWYPFFAIMGPXAMFHJSTUWADCNSPKMPLTETEPF");

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
    msg.setTimeStamp(0.8602019995531519);
    msg.setSource(17358U);
    msg.setSourceEntity(31U);
    msg.setDestination(41614U);
    msg.setDestinationEntity(222U);
    msg.system = 54878U;
    msg.duration = 58790U;
    msg.speed = 0.5571431557185333;
    msg.speed_units = 118U;
    msg.x = 0.22922376301430958;
    msg.y = 0.014581877190279813;
    msg.z = 0.34662146396787485;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.0011722828618753178);
    msg.setSource(18022U);
    msg.setSourceEntity(137U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(66U);
    msg.system = 56224U;
    msg.duration = 10933U;
    msg.speed = 0.1388411658890618;
    msg.speed_units = 122U;
    msg.x = 0.7164828801293164;
    msg.y = 0.7335422037124918;
    msg.z = 0.21591923860386475;
    msg.z_units = 137U;

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
    msg.setTimeStamp(0.8842420322331213);
    msg.setSource(26019U);
    msg.setSourceEntity(16U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(74U);
    msg.system = 52211U;
    msg.duration = 48655U;
    msg.speed = 0.5149860106091825;
    msg.speed_units = 103U;
    msg.x = 0.34104270057807584;
    msg.y = 0.852704322333186;
    msg.z = 0.41908582335478717;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.11772663608586453);
    msg.setSource(20797U);
    msg.setSourceEntity(229U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.06282341644366274;
    msg.lon = 0.056914639689375046;
    msg.speed = 0.6110943428417789;
    msg.speed_units = 105U;
    msg.duration = 9835U;
    msg.sys_a = 5571U;
    msg.sys_b = 56171U;
    msg.move_threshold = 0.7586662407873792;

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
    msg.setTimeStamp(0.6701719870867533);
    msg.setSource(45832U);
    msg.setSourceEntity(135U);
    msg.setDestination(14561U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.5292829949665857;
    msg.lon = 0.9892394239114775;
    msg.speed = 0.39156674420934623;
    msg.speed_units = 28U;
    msg.duration = 48874U;
    msg.sys_a = 21381U;
    msg.sys_b = 32016U;
    msg.move_threshold = 0.2035785292519927;

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
    msg.setTimeStamp(0.38501270073991656);
    msg.setSource(23683U);
    msg.setSourceEntity(23U);
    msg.setDestination(57057U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.008745080720200193;
    msg.lon = 0.3129434548840553;
    msg.speed = 0.40609833738515533;
    msg.speed_units = 60U;
    msg.duration = 17314U;
    msg.sys_a = 21450U;
    msg.sys_b = 29171U;
    msg.move_threshold = 0.7906601760718774;

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
    msg.setTimeStamp(0.8061106437494406);
    msg.setSource(54735U);
    msg.setSourceEntity(78U);
    msg.setDestination(26405U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.2802031133592434;
    msg.lon = 0.8766015096978926;
    msg.z = 0.24109195407748973;
    msg.z_units = 71U;
    msg.speed = 0.2202528536068774;
    msg.speed_units = 239U;
    msg.custom.assign("OHAFMGAXBDAYAQVBBDURXVISAASZKITQWTLZETOVCRNJTVULMRCSBFPZZDYNFTZNOYWHBMFRDLKQPIWQUJGKINUEPCZOKSLUNGSATPBWJQKEFTZCKMRDHUCFYSILFWOILXAMGHMUQDVPQOSNMPBYQAJCGOWVC");

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
    msg.setTimeStamp(0.874434074747243);
    msg.setSource(24695U);
    msg.setSourceEntity(34U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.8183907906943557;
    msg.lon = 0.6199486314573447;
    msg.z = 0.7591314997948101;
    msg.z_units = 200U;
    msg.speed = 0.17393620098257867;
    msg.speed_units = 19U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9890550505359864;
    tmp_msg_0.lon = 0.281786550198734;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OUPNZUCPTJFJYACIQKZRGHDHYSZIQILIRBNRYWDWAMVAIFRUHAFACMFANOIDOPLNVNKZCVKSNTWMQOWRTQKJVUHWHNSBMSYRDFFXPK");

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
    msg.setTimeStamp(0.6813555075798626);
    msg.setSource(47846U);
    msg.setSourceEntity(91U);
    msg.setDestination(6954U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.533083666378934;
    msg.lon = 0.7644493265760175;
    msg.z = 0.6275398600344595;
    msg.z_units = 251U;
    msg.speed = 0.787424732663423;
    msg.speed_units = 253U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1710112166638773;
    tmp_msg_0.lon = 0.947956404165018;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CAJBOFRNQXBLOGKPTGSRGQTDUARCNINQCXFGBQYGRBOPVZWWRHZCWBFLDHECNVYUKLZVU");

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
    msg.setTimeStamp(0.6283075702433615);
    msg.setSource(29231U);
    msg.setSourceEntity(122U);
    msg.setDestination(40722U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.13099386177100236;
    msg.lon = 0.3987329905550746;

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
    msg.setTimeStamp(0.46417765550343615);
    msg.setSource(28437U);
    msg.setSourceEntity(11U);
    msg.setDestination(55255U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.01773561098640619;
    msg.lon = 0.10521378358165778;

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
    msg.setTimeStamp(0.8555709838972468);
    msg.setSource(8899U);
    msg.setSourceEntity(12U);
    msg.setDestination(55991U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.6911682923104896;
    msg.lon = 0.6963181547907097;

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
    msg.setTimeStamp(0.3435225678551658);
    msg.setSource(49529U);
    msg.setSourceEntity(234U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(114U);
    msg.timeout = 19068U;
    msg.lat = 0.4400178262882085;
    msg.lon = 0.5049239349494513;
    msg.z = 0.14495099883602092;
    msg.z_units = 67U;
    msg.pitch = 0.03773980535723398;
    msg.amplitude = 0.9974278318003277;
    msg.duration = 64322U;
    msg.speed = 0.8660791138930544;
    msg.speed_units = 171U;
    msg.radius = 0.9936252057360229;
    msg.direction = 37U;
    msg.custom.assign("MXMFKYDPCWIXMZMSQOBOJHPAVQUPVPGDOSQBTTUABALCXAHLYCWKKNFKFUBOZHYVJEJDKZSUNYCWRNCTNJTZQVNQROBAHLGGRIIEWYHSITBDVRXDHWTTLGJKPUSYNXWQMBKQUFXWAZWOBEISNAEVPFUEFDKGPHKMEPZ");

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
    msg.setTimeStamp(0.09600495839276768);
    msg.setSource(61940U);
    msg.setSourceEntity(110U);
    msg.setDestination(6584U);
    msg.setDestinationEntity(46U);
    msg.timeout = 37390U;
    msg.lat = 0.8491889564640264;
    msg.lon = 0.6168165823779781;
    msg.z = 0.5577780548814785;
    msg.z_units = 158U;
    msg.pitch = 0.2638287524374521;
    msg.amplitude = 0.890673371361406;
    msg.duration = 12293U;
    msg.speed = 0.6902680611815719;
    msg.speed_units = 243U;
    msg.radius = 0.6079299370046547;
    msg.direction = 149U;
    msg.custom.assign("PFXAASCWOUORRNTOPWVVKWTZMEHSXJLFSNJIWRDIXHYFDQOZOGTKFQSNXCZLWCLVANIECBBYRBIXDUCHLYXZFCXMAPVIPRBOYQHWUNFTKLGBADIMPMUOZMGJPPLOJKZFULHBYTMUWBKJSEWEGKIFBRAGGPNGYTAKH");

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
    msg.setTimeStamp(0.9920546576525153);
    msg.setSource(14560U);
    msg.setSourceEntity(110U);
    msg.setDestination(38368U);
    msg.setDestinationEntity(170U);
    msg.timeout = 30064U;
    msg.lat = 0.9509264699036427;
    msg.lon = 0.19169889043486799;
    msg.z = 0.7165127684506977;
    msg.z_units = 70U;
    msg.pitch = 0.8837851334137067;
    msg.amplitude = 0.5552915037172772;
    msg.duration = 52975U;
    msg.speed = 0.15096800615929673;
    msg.speed_units = 170U;
    msg.radius = 0.16719967373241051;
    msg.direction = 175U;
    msg.custom.assign("ZSTXELAQMWZSAPMMVGQNHUDPUKHNBFKFIIINWSP");

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
    msg.setTimeStamp(0.45269604951216846);
    msg.setSource(40904U);
    msg.setSourceEntity(75U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("NTVYCWWLEMCJPISEISUYUBSXJWQBYGJVJHTLFKBXWEVVTOBGKR");
    msg.reference_frame = 95U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58537U;
    tmp_msg_0.off_x = 0.6311209703291176;
    tmp_msg_0.off_y = 0.3211677109140766;
    tmp_msg_0.off_z = 0.11044469461349682;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BPTFUPWAHJAURTUMMPOKRHRNKMJFPPWUQFGRPXKIJXJLJYBWJMQLLMDQQFPGWPKBTIXFYSXJOBAEUYVRVXYZANMGYMEOFUWDZAWQQWZTYFNHHFNDEWASCQSCXCZANELIFGOSFGZHYYTWBDGNOSSTHNPDNCIOOJGZXBEPEUVYZXSDRCRLTTSZVIVGDMQMLJKKVTZEHISBZHCHLK");

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
    msg.setTimeStamp(0.8794458312065567);
    msg.setSource(20754U);
    msg.setSourceEntity(249U);
    msg.setDestination(64968U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("DWNRLHGWRYSVYBEWCXGCXLXHPGYVOOQRTUHBGMBROSTVAXOIQAKPVPEWTWPVFQSPADYJEJYKUTFMPBOBHCGWNRMIOSWQYBMNJLXHOLDRADAVNHUCNIARTKCSWWFUKMGBKFRTWGCRPZGJQKLOFUFSUTZNKGZLIBQNIXE");
    msg.reference_frame = 32U;
    msg.custom.assign("QZXFTJRFKDTSKTXETGTIFKEGJPEYYDRZQLEKLIUCTUWGUANNVSFDKNGBDDOGIPNHPPOMOJYTQHULHBDACVXIMGOXYGMWMAJHZVRZGLAXCFXRIUAOSJGZPBNUEFOQXABWOJIVJSVEMCVKIOVSBHLRSLTPCZBKRICAKAPUWRWTPFFZLYJERQBSFPWQZCYDQGYNNZAHXMURAQQNWENDBMLCLMB");

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
    msg.setTimeStamp(0.5352254746927576);
    msg.setSource(2409U);
    msg.setSourceEntity(208U);
    msg.setDestination(42862U);
    msg.setDestinationEntity(15U);
    msg.formation_name.assign("WWGGKABPVBOLQXZHBGGFYZLMUFWBHHHFCDTFBZLNPUBOBJKQQCEELZQXCBGTAYVWNNTLIEUZJDYEXVJPRSKJNYUAVUNTXCJSWVKAFNLYKUODMUFHUSMOCERLKCWEHGKSOTRKQOZFYEMDZLIBXMUMQQJMGDN");
    msg.reference_frame = 158U;
    msg.custom.assign("RLUAAJOERUXOYHLCNAEMCILNGODEAMGUIOCFDMBWJUQCTKEVSLZNZBVPGHFBZOWDREUCKARFDYTFJIKLSMVVJSWIFQBDQHJFKWREGNGSKWQTPTQTTJZNBXPDHFRVYTIXMSRWNUNXPKHYQCVAJMOALPZXIBSXEO");

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
    msg.setTimeStamp(0.7575173966252847);
    msg.setSource(47412U);
    msg.setSourceEntity(246U);
    msg.setDestination(23792U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("HMMSXHVIGXDGYTJQZBMQUANJZPWTPWOKCQYAJAQHHIGSVWYOEMDJPFILCSZZLPILNAIXKEDCETJFKULEIXECTVJROQDWYABSLBUTGRKUSEQXYFUZCTKJNSHVWZFYRRLWUEKBMSKGXYNUPGJONBHAUZCTLPOEGFAZTRFJXNLNEDQLVRAFIVCVFHCOHDSFXXINOKRDBMBGPMQCFLDBPZOOMRBPZBGDQMHSKKQAAOYUVPCDIVWVER");
    msg.formation_name.assign("ZWJMFLUHNNNYWTWDCUJDRAHBCDTHSTMRPCRTBXWYQQMGJEIPENTVHWHBDQZZSBLYLDAJRZOQMHXKELFNGUKIKIQXSWITKEFKZBDOCMFPPQFXYLMBCUGBMIDEINOSGOEFFGSXCELAWEHJYJZPSKRLRZEQJTUNPYBGQAAABKXNMVNZUTHCJIQPLOVOYZTCUVRWVEFOQLMAKSVMAGRWAXGFIUUFUAZGSRVVILHBCJRDXPVCWPNYGSVTHYP");
    msg.plan_id.assign("YGYAEOPJMEXZHEADTGVOQOYJSKQOWLCQBNGVTYMRCVIZTEUWXXPTSZLIMUZUKFZODNEBJHNCNDHEQZAEBARGQBKUBADVPJTOETSJVRCBWUXCPBINTUTY");
    msg.description.assign("PACXVWBXSBGTUAUQCLEFDHRMIZUEFJKTBNVEEVFZXUAHHNKXGLARXDMHMZZBBAJFWGDVSDRNJPSPIWPIMUZRIUPWISMSIQYKONKDUZRJQLBAVKPJLK");
    msg.leader_speed = 0.4984292920389187;
    msg.leader_bank_lim = 0.009742133626732818;
    msg.pos_sim_err_lim = 0.2819797893744803;
    msg.pos_sim_err_wrn = 0.9651322222592902;
    msg.pos_sim_err_timeout = 55087U;
    msg.converg_max = 0.18567628046155016;
    msg.converg_timeout = 16689U;
    msg.comms_timeout = 30436U;
    msg.turb_lim = 0.016206098027362503;
    msg.custom.assign("DSBDIFDVVRCFGURPHPOUXLDLAUHLOAVLNAACFDKJRYHMJYBMBBXTVPPETXP");

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
    msg.setTimeStamp(0.2990619053041713);
    msg.setSource(15106U);
    msg.setSourceEntity(182U);
    msg.setDestination(13709U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("THXZMFPVLASSYDICEVSWGMKOYBUWNVAWMAAUBXZZ");
    msg.formation_name.assign("NSTRKEYJLDRLJBCHYMIITMACJXABWVDUCGZOMYLFIUGMKGRVHJMSNEUBPOLDUQOFFASZNWEKISGVRIU");
    msg.plan_id.assign("IEQPCIJHRQEKSAUTSXDVPWSNZKSTTEDTLJOKZVZUGPNDIACHHOJYJNBCUXT");
    msg.description.assign("WDIYJMTDYMWMWKGONYPJHZTMNMWXRJISCFLRRAWDCKGHBOUVLALBICAQTOVEXCQHDGPPTMGYDEKLENVTYIQKGJRNQJPGUZEQGKPZSFJNNKVIVFHPQZIDYCXLEDAPXWSKBQTMVRQGGAUHEJMWXNBLMOZUIFDBPZSXSOAJQWOBNVXCCABWSYFSOBGTUTWFEHKPUOF");
    msg.leader_speed = 0.13250342050068553;
    msg.leader_bank_lim = 0.6253683644720113;
    msg.pos_sim_err_lim = 0.736498670734203;
    msg.pos_sim_err_wrn = 0.6211856399393518;
    msg.pos_sim_err_timeout = 39279U;
    msg.converg_max = 0.7205082043956259;
    msg.converg_timeout = 54597U;
    msg.comms_timeout = 55007U;
    msg.turb_lim = 0.9060728775413441;
    msg.custom.assign("DJUBXFNVLTDWVKBJL");

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
    msg.setTimeStamp(0.050074379371801925);
    msg.setSource(19553U);
    msg.setSourceEntity(3U);
    msg.setDestination(30683U);
    msg.setDestinationEntity(161U);
    msg.group_name.assign("PHSELCLSRUTSDGAOAHOFMYZENBYOFGAENWVFMFODQZHZATMPSVMHOJRJQSNIOIBXLMJGWYXVXNPUYJSPSVINATKIDAFTMUTWIGHURDKIFLGPUDBLWVZKROXTAAJQOEZRXINECYZ");
    msg.formation_name.assign("TPWLQRCHEMEQNJLHMXHVOEBITBWDBVSGFMGKYNJUWIDPSSZWSXUJDRPUWBIXJKTVFYISKOJPMDCMCUDIKQESKHAPCPQZWAWB");
    msg.plan_id.assign("EEZDJTCUXJOCAVJVRBFXTHBNBYGBPEAVWHKCPWNPFZANGUZVEYECXOMIYTRQLCLBNFYITUO");
    msg.description.assign("DEYGGGGRNPMOZLUVDPAUCQJZRRWXGNPCYFJWTXFWGVPHCVMNFJVETXIEFLXOOEQEVDBORSHBPXWRMDJOLFVOAUTUSAEIQXKILJPRMWLDTGUXMYMOWSRCSGQEMIZJAFOSYKEQGTINQSMZJKUDNKSQUXMNHPKKZCBCHBRTQN");
    msg.leader_speed = 0.11890532064349246;
    msg.leader_bank_lim = 0.9275686134354827;
    msg.pos_sim_err_lim = 0.3347427866106256;
    msg.pos_sim_err_wrn = 0.4290479779519152;
    msg.pos_sim_err_timeout = 32666U;
    msg.converg_max = 0.365425743529346;
    msg.converg_timeout = 27318U;
    msg.comms_timeout = 44058U;
    msg.turb_lim = 0.7947324884234372;
    msg.custom.assign("JNDTFNOZBEYHEMGOCCPEIIKXVLHFIQFY");

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
    msg.setTimeStamp(0.6353184418259633);
    msg.setSource(9121U);
    msg.setSourceEntity(14U);
    msg.setDestination(64451U);
    msg.setDestinationEntity(210U);
    msg.control_src = 2921U;
    msg.control_ent = 29U;
    msg.timeout = 0.36860506388393754;
    msg.loiter_radius = 0.013412388603321723;
    msg.altitude_interval = 0.16759435974043246;

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
    msg.setTimeStamp(0.8650738039644593);
    msg.setSource(49604U);
    msg.setSourceEntity(247U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(137U);
    msg.control_src = 56771U;
    msg.control_ent = 237U;
    msg.timeout = 0.9155921235269578;
    msg.loiter_radius = 0.599126726910276;
    msg.altitude_interval = 0.33517595143828105;

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
    msg.setTimeStamp(0.7846125522432589);
    msg.setSource(40847U);
    msg.setSourceEntity(1U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(231U);
    msg.control_src = 52932U;
    msg.control_ent = 44U;
    msg.timeout = 0.8562304784626755;
    msg.loiter_radius = 0.3114622706907709;
    msg.altitude_interval = 0.6386063315170992;

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
    msg.setTimeStamp(0.45334394012996826);
    msg.setSource(50258U);
    msg.setSourceEntity(57U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(96U);
    msg.flags = 65U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17581348113734274;
    tmp_msg_0.speed_units = 118U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6316044321960276;
    tmp_msg_1.z_units = 30U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2614189667113167;
    msg.lon = 0.8860530968707899;
    msg.radius = 0.2613991094306085;

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
    msg.setTimeStamp(0.46103315641061193);
    msg.setSource(15079U);
    msg.setSourceEntity(203U);
    msg.setDestination(40906U);
    msg.setDestinationEntity(212U);
    msg.flags = 82U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9991673221822799;
    tmp_msg_0.speed_units = 180U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3923138795711747;
    tmp_msg_1.z_units = 170U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7070835010972326;
    msg.lon = 0.13288642455882038;
    msg.radius = 0.5362826974414167;

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
    msg.setTimeStamp(0.19105089113349583);
    msg.setSource(61576U);
    msg.setSourceEntity(168U);
    msg.setDestination(29626U);
    msg.setDestinationEntity(76U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1018919174025581;
    tmp_msg_0.speed_units = 29U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7673869594209544;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6357158871997167;
    msg.lon = 0.9080911202330249;
    msg.radius = 0.020553104401820232;

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
    msg.setTimeStamp(0.8450548207519651);
    msg.setSource(38105U);
    msg.setSourceEntity(89U);
    msg.setDestination(61066U);
    msg.setDestinationEntity(221U);
    msg.control_src = 43466U;
    msg.control_ent = 99U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 227U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9172068034568004;
    tmp_tmp_msg_0_0.speed_units = 215U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9164957668800348;
    tmp_tmp_msg_0_1.z_units = 15U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.48405540192319885;
    tmp_msg_0.lon = 0.7930792540026175;
    tmp_msg_0.radius = 0.7629916244020456;
    msg.reference.set(tmp_msg_0);
    msg.state = 55U;
    msg.proximity = 147U;

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
    msg.setTimeStamp(0.6192724831706151);
    msg.setSource(44077U);
    msg.setSourceEntity(149U);
    msg.setDestination(40717U);
    msg.setDestinationEntity(99U);
    msg.control_src = 15752U;
    msg.control_ent = 113U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3696706048722954;
    tmp_tmp_msg_0_0.speed_units = 118U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8268912604249835;
    tmp_tmp_msg_0_1.z_units = 234U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9720532331195895;
    tmp_msg_0.lon = 0.6123872585210671;
    tmp_msg_0.radius = 0.31246593832975356;
    msg.reference.set(tmp_msg_0);
    msg.state = 226U;
    msg.proximity = 34U;

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
    msg.setTimeStamp(0.573138111728738);
    msg.setSource(56179U);
    msg.setSourceEntity(49U);
    msg.setDestination(11704U);
    msg.setDestinationEntity(155U);
    msg.control_src = 6531U;
    msg.control_ent = 80U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5456024335381976;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.28012729732178565;
    tmp_tmp_msg_0_1.z_units = 142U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8458238242620428;
    tmp_msg_0.lon = 0.3261866578729208;
    tmp_msg_0.radius = 0.8069853491923628;
    msg.reference.set(tmp_msg_0);
    msg.state = 166U;
    msg.proximity = 122U;

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
    msg.setTimeStamp(0.08221348714690035);
    msg.setSource(14389U);
    msg.setSourceEntity(211U);
    msg.setDestination(7917U);
    msg.setDestinationEntity(11U);
    msg.ax_cmd = 0.514296541917387;
    msg.ay_cmd = 0.468829589586781;
    msg.az_cmd = 0.9141444125347725;
    msg.ax_des = 0.2466281032497436;
    msg.ay_des = 0.0140450231489051;
    msg.az_des = 0.46037012521057263;
    msg.virt_err_x = 0.35024523656088413;
    msg.virt_err_y = 0.9281081173433026;
    msg.virt_err_z = 0.4212932679582171;
    msg.surf_fdbk_x = 0.7469455864239142;
    msg.surf_fdbk_y = 0.8459902877240869;
    msg.surf_fdbk_z = 0.3803693480187489;
    msg.surf_unkn_x = 0.1230591186523734;
    msg.surf_unkn_y = 0.38315567794647687;
    msg.surf_unkn_z = 0.14188081771526806;
    msg.ss_x = 0.2930934719999606;
    msg.ss_y = 0.6523008931045619;
    msg.ss_z = 0.16204132217594225;

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
    msg.setTimeStamp(0.6983424065805702);
    msg.setSource(51133U);
    msg.setSourceEntity(90U);
    msg.setDestination(39991U);
    msg.setDestinationEntity(59U);
    msg.ax_cmd = 0.7442958055688265;
    msg.ay_cmd = 0.9370754315186329;
    msg.az_cmd = 0.4949767645189508;
    msg.ax_des = 0.9646657638042749;
    msg.ay_des = 0.5456840471751492;
    msg.az_des = 0.7347613207171779;
    msg.virt_err_x = 0.7707615129110983;
    msg.virt_err_y = 0.24921930006073323;
    msg.virt_err_z = 0.27015167805899354;
    msg.surf_fdbk_x = 0.5168659301444709;
    msg.surf_fdbk_y = 0.012179061911183342;
    msg.surf_fdbk_z = 0.7099380664242388;
    msg.surf_unkn_x = 0.311903686157858;
    msg.surf_unkn_y = 0.8205110109411964;
    msg.surf_unkn_z = 0.028057188168744474;
    msg.ss_x = 0.8188278343084494;
    msg.ss_y = 0.809413578680198;
    msg.ss_z = 0.4160889640542309;

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
    msg.setTimeStamp(0.06188843713606562);
    msg.setSource(20160U);
    msg.setSourceEntity(52U);
    msg.setDestination(63635U);
    msg.setDestinationEntity(161U);
    msg.ax_cmd = 0.6866789141218227;
    msg.ay_cmd = 0.5217114121313511;
    msg.az_cmd = 0.5645352492674808;
    msg.ax_des = 0.17517266073579274;
    msg.ay_des = 0.1273455948945793;
    msg.az_des = 0.3738339759596089;
    msg.virt_err_x = 0.9563182264602914;
    msg.virt_err_y = 0.3843092656216449;
    msg.virt_err_z = 0.029984932078465643;
    msg.surf_fdbk_x = 0.4066863880030538;
    msg.surf_fdbk_y = 0.4856664327062131;
    msg.surf_fdbk_z = 0.6473832593365183;
    msg.surf_unkn_x = 0.37935101641989344;
    msg.surf_unkn_y = 0.5708318841734213;
    msg.surf_unkn_z = 0.39421751533613114;
    msg.ss_x = 0.6854331592825064;
    msg.ss_y = 0.13199854514667253;
    msg.ss_z = 0.770215990432625;

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
    msg.setTimeStamp(0.5757272365820947);
    msg.setSource(51893U);
    msg.setSourceEntity(140U);
    msg.setDestination(33827U);
    msg.setDestinationEntity(66U);
    msg.s_id.assign("XXZHMFXDTUWLLBOTZIKLBJQZKVLPFNAVRTYJHCLDATCRDELYETWSAYWHOBVGHCJWEPBXIZBBGMMXBEUQARMOOKWPORDTZRNTKZEQIFSRIQUQVYKJSEJRAMQGLXNAMPSNXNOEPQLZGDUFOKYDMQSHVGCGPYITAGPXUVJQUWEGNJWYCZFCFIIKYSDVDVDLFUIPFRJNIRMHVMGPHHXSCHLWWSJSBKZCXSNOUUHONBTAAVEMYNJZEBCDKYQWFURK");
    msg.dist = 0.550557700370613;
    msg.err = 0.09599108504432874;
    msg.ctrl_imp = 0.04120326021033982;
    msg.rel_dir_x = 0.4135357116397501;
    msg.rel_dir_y = 0.1721007396935359;
    msg.rel_dir_z = 0.8326145082532325;
    msg.err_x = 0.35033380630457844;
    msg.err_y = 0.43917553521855324;
    msg.err_z = 0.48061240776441894;
    msg.rf_err_x = 0.8379604149068487;
    msg.rf_err_y = 0.6714712266302678;
    msg.rf_err_z = 0.37699979177420884;
    msg.rf_err_vx = 0.7174879337968951;
    msg.rf_err_vy = 0.5457998644517664;
    msg.rf_err_vz = 0.21781047971413692;
    msg.ss_x = 0.7918470957320353;
    msg.ss_y = 0.8308146806994416;
    msg.ss_z = 0.7634723219970677;
    msg.virt_err_x = 0.15519738049398313;
    msg.virt_err_y = 0.8817856503350763;
    msg.virt_err_z = 0.9299429577474713;

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
    msg.setTimeStamp(0.3690887595431648);
    msg.setSource(24839U);
    msg.setSourceEntity(95U);
    msg.setDestination(9131U);
    msg.setDestinationEntity(165U);
    msg.s_id.assign("INXTSHVLGQXYBODFVUKWWYUDRYPPORQJEZVCPNFALBYSFXGZUCGJLEPRLFGTZKBNXCMIBQVVCTKRNEGHMYWYBUBXEWRINWFFJFZIAWMOPVXQAHJKQHHHJOBCPZCQTGUENVJLZARIQIKOCRSZLPSSJLKMATIIULEDAYCNQAEMYTRFASUNEUKVXGEK");
    msg.dist = 0.7942307176458445;
    msg.err = 0.7623337056238199;
    msg.ctrl_imp = 0.0980484715316815;
    msg.rel_dir_x = 0.3929989362758416;
    msg.rel_dir_y = 0.6603215058838764;
    msg.rel_dir_z = 0.9625645359408794;
    msg.err_x = 0.6180412994468519;
    msg.err_y = 0.2745082440428689;
    msg.err_z = 0.49111539841559104;
    msg.rf_err_x = 0.6394059240255118;
    msg.rf_err_y = 0.7138121509821737;
    msg.rf_err_z = 0.6655056175253394;
    msg.rf_err_vx = 0.779857483144048;
    msg.rf_err_vy = 0.6926317068391147;
    msg.rf_err_vz = 0.8948230292535806;
    msg.ss_x = 0.2728715845796176;
    msg.ss_y = 0.9003999587758467;
    msg.ss_z = 0.36597253857486134;
    msg.virt_err_x = 0.6854328922860474;
    msg.virt_err_y = 0.2859876802832917;
    msg.virt_err_z = 0.44081530338316677;

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
    msg.setTimeStamp(0.3643713764045555);
    msg.setSource(57678U);
    msg.setSourceEntity(31U);
    msg.setDestination(25910U);
    msg.setDestinationEntity(131U);
    msg.s_id.assign("IUZFBGGLFGCTNPMJKIRYHOOEZOTQSBFEKGRQTFVIMBYJUVWIVQHSJGJALIKJCDNMVMPKLD");
    msg.dist = 0.08916594966565439;
    msg.err = 0.4989125793085729;
    msg.ctrl_imp = 0.14447766914472404;
    msg.rel_dir_x = 0.9480547732325297;
    msg.rel_dir_y = 0.2238851766151403;
    msg.rel_dir_z = 0.7297514327715248;
    msg.err_x = 0.16712434439609902;
    msg.err_y = 0.4873320097189129;
    msg.err_z = 0.005474717582189315;
    msg.rf_err_x = 0.3174703149117758;
    msg.rf_err_y = 0.5289019321731138;
    msg.rf_err_z = 0.39976399054652834;
    msg.rf_err_vx = 0.04769109834469021;
    msg.rf_err_vy = 0.8733141156240709;
    msg.rf_err_vz = 0.8788381108093842;
    msg.ss_x = 0.9695966957256463;
    msg.ss_y = 0.21169595829636734;
    msg.ss_z = 0.18145714664474577;
    msg.virt_err_x = 0.32469144360282665;
    msg.virt_err_y = 0.8599444822458501;
    msg.virt_err_z = 0.979857928347819;

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
    msg.setTimeStamp(0.8397192489892511);
    msg.setSource(45175U);
    msg.setSourceEntity(10U);
    msg.setDestination(24880U);
    msg.setDestinationEntity(238U);
    msg.timeout = 17390U;
    msg.rpm = 0.30321197227620167;
    msg.direction = 158U;
    msg.custom.assign("NVFYXLQNPBGYQBQRFGAUWLOIWMRGKLIERODZGGFFMBNMILRCHEJELWOTSVTSDUYTUSHCWEXLBQQWKTAJYHRDZCVTBWUFJRESUCYHGSJFANAZRNPAIRCHPSDEEXMIYOYOQTCCZJENXAKWBXZCSDBESPMZONVCLMRCJVOMIKMVOKPPHXAHBKBGFJFJTQXDTRUOUDHSQVJKVD");

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
    msg.setTimeStamp(0.8992132731322717);
    msg.setSource(4474U);
    msg.setSourceEntity(217U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(191U);
    msg.timeout = 28882U;
    msg.rpm = 0.4305366151803601;
    msg.direction = 225U;
    msg.custom.assign("EEZVLPMOSLTOKLLZKEBUVRSAZKHYHCVBPOQIEQHKISWKPNQGWDNFSTFXTVREGLYFCAUSRBLLYXBJNMUOHUOHXIIPFEMOKDMNYLODWWFXCGRRAWQEEJTKIFTTGDBQOYGIZMNCIGCVCGSDAPJORADYRDSJHVBNBNHAVLWQYPQJRZDHXFVKTIAECJFVJMHXNFUPTZZMAKXCQHGUPYZSUXUOLRZ");

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
    msg.setTimeStamp(0.5322761927721427);
    msg.setSource(14180U);
    msg.setSourceEntity(77U);
    msg.setDestination(12556U);
    msg.setDestinationEntity(233U);
    msg.timeout = 64080U;
    msg.rpm = 0.3650456313954188;
    msg.direction = 146U;
    msg.custom.assign("XCMVMTSZWYSSPKTMQSGZFR");

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
    msg.setTimeStamp(0.5747822448713484);
    msg.setSource(30039U);
    msg.setSourceEntity(147U);
    msg.setDestination(5622U);
    msg.setDestinationEntity(168U);
    msg.formation_name.assign("VNZLRDLYVRTXSHXDZJOSYIJWQCXMDWBNPGZCPSJRLWBRAOUYTNJRTKQYCTHHVQIEEXQGUDNGNGACUNIYPQRXKWTMSIAADVYIKOUWMGPJHASNBIONVUTGIAYHZBORPCBFQFCCNQEXLYMCWFHEDPKIEHDFETVZVZGGMPOOEKAOZMEBKJMXDIKWBUITZCFBOQRTMKZJTFBYKLWWSBKGVXMXL");
    msg.type = 238U;
    msg.op = 17U;
    msg.group_name.assign("QCHQMOQQJMOZPJCTAXZHCFGIIBJTYJBVDHQNKYRORKGXFMJLHZMHPDIXMTJUMGZTPNMUDHAAWSSLWHBYVOSKXGFS");
    msg.plan_id.assign("QNZOGMMYPHCGYNYPUTGCPYSUEJWWLUKFOFDEJZMVOYUKBQOHEBWJOTZONIWUGFODDNPMPKBBJDUDKFAZENICEPFVRZBPJWKKTXXWCNAWCKQQGGDLFYXLLUBXQUBSTORYDTFVULSIZRCASFZVHSMZGAEQHNIUMVGSASWCRKRKWHJLDQHIPMNZAHAIHXF");
    msg.description.assign("ZROCGXFRRJKBFJSBRCLEALVBOPUCMQLMWSFRPMEHNPEXLJGIFPCGWXUUQOBYNTRAOKOMYLGPXBIUYHQLRGFVLOAEKNHNZZVDWWTTLOIIAWXGESKVHJHQGZBXVJPYHESTCVDLTAFIFDUSGJTENVCJKTAIWYVQFQZADTDZWUOHKRNJCURXIQSGABFYWNDIBQYKCTDRQXPBNJWONMOMXMSYVIVWCUHYUETXAZKSSJEHDPFQSZUZCMNPMEPKDG");
    msg.reference_frame = 198U;
    msg.leader_bank_lim = 0.49017791928206567;
    msg.leader_speed_min = 0.339682199403479;
    msg.leader_speed_max = 0.7535161315186596;
    msg.leader_alt_min = 0.2907598524549946;
    msg.leader_alt_max = 0.4603126333387194;
    msg.pos_sim_err_lim = 0.8713876403527778;
    msg.pos_sim_err_wrn = 0.08922117738377555;
    msg.pos_sim_err_timeout = 47232U;
    msg.converg_max = 0.7164017162780675;
    msg.converg_timeout = 18804U;
    msg.comms_timeout = 24425U;
    msg.turb_lim = 0.7487571381447913;
    msg.custom.assign("RFJLUCYWAUXEQVEHLTMCQNZIOZIZLRDSBYYGSMVCNKRRCGPCHTZUHFPAMVZKYCJNLGOKTAAOPFYSEOMBOGZAGWRUUVVLKYCQIXXSPHKKINMHLVHTNQIGZRIFTYKOINJAEXXZTSUDWDPMRSQXPEDBBIPJLNBSDCOUHQKFUEHXRVBPDT");

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
    msg.setTimeStamp(0.719812535134468);
    msg.setSource(11927U);
    msg.setSourceEntity(25U);
    msg.setDestination(50701U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("VIUUQDPDAOXWVUNGBXWTTRYNKDVYJQSPDARCXLITGCXZBEMZDTJXKIKTBWPGCSNYUJCEJKUVECORGMVFSWCFDRBSHZZKDHQYOBDASAYWSLTQSAKHQHTHORXCGHOTM");
    msg.type = 230U;
    msg.op = 189U;
    msg.group_name.assign("FAQNWBFFUGJTVPKBADIZFVRXDGFWDKHQOYXDPHWSQBVCYGOIIEFWSMVUOSZCOTMURTQGTTLETDKIKFEZ");
    msg.plan_id.assign("MIXMVGYLABTYPPAGRGACHPDILRFIZQEHVHMGVJWXSCCXOKQSSXPJBQCJCSRRWSPVDLBZFRAOAVJKAOLNFWXSZLNGHJWDFRHODQUTMNJWLFIHLAZWKFBDIKRYPQWCVTZDB");
    msg.description.assign("YDGCTADAZHBDGXUGQKBZDNHUCGFTHBPNJRSOXQKCLUBJOBTKNZKXFPXPWOWHLLEJXDPQCUIYCPJSXELKVKSAJMRRUNACOLFNPARFISOWGFFZV");
    msg.reference_frame = 202U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13807U;
    tmp_msg_0.off_x = 0.5687845665745958;
    tmp_msg_0.off_y = 0.6125506643743998;
    tmp_msg_0.off_z = 0.17044951880691384;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.06561507737071604;
    msg.leader_speed_min = 0.8616831593140437;
    msg.leader_speed_max = 0.24047093445927026;
    msg.leader_alt_min = 0.8741387159000794;
    msg.leader_alt_max = 0.024514360520422662;
    msg.pos_sim_err_lim = 0.7858143925796245;
    msg.pos_sim_err_wrn = 0.9803861048347321;
    msg.pos_sim_err_timeout = 43422U;
    msg.converg_max = 0.3951313633719721;
    msg.converg_timeout = 34474U;
    msg.comms_timeout = 50733U;
    msg.turb_lim = 0.10124316857036486;
    msg.custom.assign("RLBFXXBYKDHZCDXULBJITDRWUXOFOKWZMDQWJOKFNOPBSEJTLEGMCTEFIRPYADURVYWKIKTDQATAYSGQOBHRSGDPNHYSCSBJYTTGCFHFPLOZOSRGEKJPMVKVVRJUANIGCEWZLXHNEAWWMEHAGIMZNMAOSVIXIUAXVKKEHZCUEYPMU");

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
    msg.setTimeStamp(0.005168021029128167);
    msg.setSource(33100U);
    msg.setSourceEntity(212U);
    msg.setDestination(16705U);
    msg.setDestinationEntity(232U);
    msg.formation_name.assign("WTLHKNIWFEMMYCRZKIRHGQPBXRBDSSIOZFKTPMXRLPJSGVUUZCDCHXGGWBRZSSFIQRBTVPMOIYDZVNTAEMAODXGUTWZAANOVDWQJCLROBSNKFDVQGCTKLEQOKQERUEZSCBJUBGDYAVWJAYNHYYVNCUFNMOJLMQUDPEBVXINATIEHMRWHNSUXUEJKLYQBKYCPTSHIVZFKPXFQXFOGHMWJFQXJNGHVMGILYZDRYJDAL");
    msg.type = 0U;
    msg.op = 49U;
    msg.group_name.assign("SEQANDPOXOLVXZGJHRUZLSBFJWCISLRTNZQYEFNRTMPAWYFTHARBXLKGQTOGKKVXUAIGKOOQBAECJVTJSAUJHWPXFJSDOCYLIGVVYJPRBAMHEYIUNJYULBHIBBLUZYYQKFDCXFBFBEPMZXEGMKHZNIDWGWOTCHDDMESRMFXMTZOLNBDYFSNTPFJDCUWQRQLZCMEIVARPSSXGVKIIXOTRQCEKISDVAZNJMNWPGQKDUWKWPGTOPQHMRYCWU");
    msg.plan_id.assign("XSDUHMRUYFEUPPVBNZXGCBIIERMIYHVFDXLKLDINQPUAALHJUGPNMKDSKMZYCKCTOSOUMPEVWRZZRREPFGCBUCRFWVBXQJJJEESKOWTBGYMQHILDXESXZYAAQMFEHTVYSAOKMXQIUQFPWDIVFSOQNVWHLUKHKDFDHNZNGLGBNFNKJSBPLIWASYTGCXCIROGCBYJOMVVRWEJXDLUOYGZELTAZVWPAHIFDCQTNLRJTKG");
    msg.description.assign("XRJAFTSMONXBZCEBZKSQPSEPLPFUSATLUKGBGWOFASVAZCRUFMZIVBECBLGXCADP");
    msg.reference_frame = 200U;
    msg.leader_bank_lim = 0.8673238864859786;
    msg.leader_speed_min = 0.322561491510292;
    msg.leader_speed_max = 0.17333121511582295;
    msg.leader_alt_min = 0.9290732533676747;
    msg.leader_alt_max = 0.07131161917524476;
    msg.pos_sim_err_lim = 0.6563472975863651;
    msg.pos_sim_err_wrn = 0.6495263184597215;
    msg.pos_sim_err_timeout = 60005U;
    msg.converg_max = 0.43994741737100274;
    msg.converg_timeout = 3316U;
    msg.comms_timeout = 9881U;
    msg.turb_lim = 0.7275324918422519;
    msg.custom.assign("UHWVMMXXTSJZDVUYZJKQOLBYX");

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
    msg.setTimeStamp(0.6551728337463956);
    msg.setSource(24349U);
    msg.setSourceEntity(3U);
    msg.setDestination(29374U);
    msg.setDestinationEntity(240U);
    msg.timeout = 27867U;
    msg.lat = 0.5531039270097188;
    msg.lon = 0.7837713890792577;
    msg.z = 0.3599232566897983;
    msg.z_units = 151U;
    msg.speed = 0.3022952434512761;
    msg.speed_units = 19U;
    msg.custom.assign("ZFJPFRYGGJNMGHVOJIPBVDWCZGKSEJQRMJLXTXAKVKEIKPESQCWRZJMKYPILCBUSXQMDUAVPTRCXPAFNLIQERBHLYYUORUIESSMVUEZWBD");

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
    msg.setTimeStamp(0.36515056050931083);
    msg.setSource(27791U);
    msg.setSourceEntity(249U);
    msg.setDestination(19812U);
    msg.setDestinationEntity(42U);
    msg.timeout = 44575U;
    msg.lat = 0.16372337158853167;
    msg.lon = 0.6654375399289129;
    msg.z = 0.6906601271962826;
    msg.z_units = 167U;
    msg.speed = 0.5048871346518633;
    msg.speed_units = 186U;
    msg.custom.assign("HRSSGXCDLGIW");

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
    msg.setTimeStamp(0.864668953326603);
    msg.setSource(17118U);
    msg.setSourceEntity(119U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(22U);
    msg.timeout = 18647U;
    msg.lat = 0.06448186648233101;
    msg.lon = 0.7183535533175094;
    msg.z = 0.18774988827240713;
    msg.z_units = 75U;
    msg.speed = 0.25198112905277825;
    msg.speed_units = 103U;
    msg.custom.assign("YJCNUOUMORMVSIPVGQF");

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
    msg.setTimeStamp(0.26671090037437417);
    msg.setSource(11290U);
    msg.setSourceEntity(230U);
    msg.setDestination(38001U);
    msg.setDestinationEntity(192U);
    msg.timeout = 46421U;
    msg.lat = 0.6631676723738719;
    msg.lon = 0.07858749710235002;
    msg.z = 0.6267246852624276;
    msg.z_units = 215U;
    msg.speed = 0.6640380980867607;
    msg.speed_units = 36U;
    msg.custom.assign("TSXHYSGYGWLCYFKSBUQNEJIDDROYEQVUQIXJKUFEGEYPCIPAEZSEDUWFEEGSGSZAFVNKLTXPCAFBFLOPEUFOWZKMQBNTCBNPLBJMV");

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
    msg.setTimeStamp(0.8155657811914795);
    msg.setSource(14013U);
    msg.setSourceEntity(29U);
    msg.setDestination(52632U);
    msg.setDestinationEntity(56U);
    msg.timeout = 17191U;
    msg.lat = 0.13180597348699286;
    msg.lon = 0.8856177254279848;
    msg.z = 0.3266301007234501;
    msg.z_units = 198U;
    msg.speed = 0.329778036728528;
    msg.speed_units = 4U;
    msg.custom.assign("UARSKSUICRUGILBHYFLGCNYECNVNYBTGEAOOSGLPAPMUNFPHYIKAPDFNDVRDALUSUYIBJTSOBYQLGPDJBUIWWFJTODD");

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
    msg.setTimeStamp(0.3768700198619114);
    msg.setSource(1303U);
    msg.setSourceEntity(156U);
    msg.setDestination(56601U);
    msg.setDestinationEntity(236U);
    msg.timeout = 39985U;
    msg.lat = 0.934880301558402;
    msg.lon = 0.5179591865416491;
    msg.z = 0.2771355669012322;
    msg.z_units = 206U;
    msg.speed = 0.01268583394811762;
    msg.speed_units = 87U;
    msg.custom.assign("RSGFMAMIIHUOQOEPSJEFYXSIDKITHONJZYYEIUYVMFVPKZLVCELLDPGPCYPGGUHXDIBHUXLRBTJRUHLETQGUVOSKWKWRHFVIVANIJWATEQZOABFKBMUMSMENBKNDOONLATPWFCZQEKBMGPBPZQLHQZPQOGWWLANJTVUVKCAFTEWXCRZFDOLXXCKTEYBKTNBXDRWQMHDLBNJDCUVSYYUJOSPZHIAGRVIJRXGNJWD");

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
    msg.setTimeStamp(0.7078063898707997);
    msg.setSource(20548U);
    msg.setSourceEntity(160U);
    msg.setDestination(53184U);
    msg.setDestinationEntity(195U);
    msg.arrival_time = 0.5543386259440881;
    msg.lat = 0.7447949645044848;
    msg.lon = 0.19001962767832103;
    msg.z = 0.1499532855775524;
    msg.z_units = 125U;
    msg.travel_z = 0.6957009249181446;
    msg.travel_z_units = 210U;
    msg.delayed = 140U;

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
    msg.setTimeStamp(0.44891029607377686);
    msg.setSource(32364U);
    msg.setSourceEntity(226U);
    msg.setDestination(49170U);
    msg.setDestinationEntity(148U);
    msg.arrival_time = 0.40841367385372995;
    msg.lat = 0.7061898333104341;
    msg.lon = 0.7109504135056394;
    msg.z = 0.5931821839392842;
    msg.z_units = 238U;
    msg.travel_z = 0.04137788060276071;
    msg.travel_z_units = 36U;
    msg.delayed = 115U;

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
    msg.setTimeStamp(0.7256560247164789);
    msg.setSource(44320U);
    msg.setSourceEntity(183U);
    msg.setDestination(33433U);
    msg.setDestinationEntity(31U);
    msg.arrival_time = 0.053005958158074074;
    msg.lat = 0.11313686068187145;
    msg.lon = 0.6972921708828289;
    msg.z = 0.9205839166153248;
    msg.z_units = 14U;
    msg.travel_z = 0.40138421636340194;
    msg.travel_z_units = 25U;
    msg.delayed = 184U;

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
    msg.setTimeStamp(0.964184606928007);
    msg.setSource(34685U);
    msg.setSourceEntity(184U);
    msg.setDestination(43313U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.007836069527124012;
    msg.lon = 0.6869609154650282;
    msg.z = 0.03202587137549795;
    msg.z_units = 150U;
    msg.speed = 0.9294849328498264;
    msg.speed_units = 174U;
    msg.bearing = 0.7749241794902212;
    msg.cross_angle = 0.12376970450712643;
    msg.width = 0.759402958686757;
    msg.length = 0.8080608563785292;
    msg.coff = 151U;
    msg.angaperture = 0.5978752110917657;
    msg.range = 11674U;
    msg.overlap = 135U;
    msg.flags = 95U;
    msg.custom.assign("NACBXSSDQBWOKWXUPZSYNEMMMTCFBYHDQCNHCTSWQJMEJLDVXEROIIVNQWQROYXAHXPAQAYRDKGRPFLNJTNEQAFYOOUVUPATKJZHAELFFIQVGOHWCGZTBGIGFSTUKHZUJWDGLBFLQFKKDIH");

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
    msg.setTimeStamp(0.5844765491418563);
    msg.setSource(16760U);
    msg.setSourceEntity(243U);
    msg.setDestination(62010U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.23750237112926953;
    msg.lon = 0.5931937705291654;
    msg.z = 0.6365115479565159;
    msg.z_units = 199U;
    msg.speed = 0.4235118932294497;
    msg.speed_units = 215U;
    msg.bearing = 0.604596103578608;
    msg.cross_angle = 0.004777816270203128;
    msg.width = 0.3935287671016955;
    msg.length = 0.6673518941030273;
    msg.coff = 8U;
    msg.angaperture = 0.18668233668244893;
    msg.range = 23418U;
    msg.overlap = 15U;
    msg.flags = 174U;
    msg.custom.assign("XFXFXYPQRPVBHPNZYQCUCTJNDRQSPPATPSKEZTBLZWLBNPNSDCZDLVMSGTTNWARISSOZRIVZMXCIOUGYNAWPWPSKNBMGQVXIRWFTOLFHIKIGLJUVQVOIQEDBYIQAOYTBHOJKQEWTAMJKKEEZYGAMUFRVMKNFHSFZTTOOLYXGEUIOYBEYDCUXVJEWLKJRNDDQGAGGHJMMFRHBSGAVUAWLXOHWCCKJFNQVXBSWU");

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
    msg.setTimeStamp(0.31787457534133756);
    msg.setSource(29612U);
    msg.setSourceEntity(131U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.16009435772490876;
    msg.lon = 0.4661763633470316;
    msg.z = 0.6036905674217781;
    msg.z_units = 134U;
    msg.speed = 0.7478580914319435;
    msg.speed_units = 66U;
    msg.bearing = 0.32503596598214335;
    msg.cross_angle = 0.9433261029433643;
    msg.width = 0.17539070387435007;
    msg.length = 0.9367845590667371;
    msg.coff = 87U;
    msg.angaperture = 0.8894729498571506;
    msg.range = 45723U;
    msg.overlap = 64U;
    msg.flags = 167U;
    msg.custom.assign("BQDFSRBBKPEWREAZOXTAURLFWPZVHCULRSAVJIKBLOWHSQBFNRKXFOKRKEJSXUTLUFIGJMQPLGJRUHGFPTAIHHDGYWVTWNNKAFJOOSRCALQSNIORCEQGMQXMEIBUFIPVMEJZKYNUFEQMDE");

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
    msg.setTimeStamp(0.04265991720023232);
    msg.setSource(4527U);
    msg.setSourceEntity(123U);
    msg.setDestination(6214U);
    msg.setDestinationEntity(192U);
    msg.timeout = 1625U;
    msg.lat = 0.23792023483512037;
    msg.lon = 0.7001231650306737;
    msg.z = 0.21101504753386435;
    msg.z_units = 157U;
    msg.speed = 0.6769147562451734;
    msg.speed_units = 71U;
    msg.syringe0 = 234U;
    msg.syringe1 = 246U;
    msg.syringe2 = 175U;
    msg.custom.assign("JCXJXLMCUSHLMAQAUMCVIVPJPUQDBVCWXTBRXCWBBPREQPIISGPERTOBJSCHDOAUFZTNMPJSWYQQNZNTDYTOMESZHZGXYFGNVOZHJGTKBPWYZMKOMGIRFZFODZGQONIKTSTYPLJPQXAYIENUFVADDRODVIDWLXNKYSCEWVRYRLUSSSAVJUCXHNFJFUYEIDQKVKEDOIIFKMRLHUQBUECJXHWNVWBONMGABLFLWXKHGQREYB");

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
    msg.setTimeStamp(0.9354911176441827);
    msg.setSource(12076U);
    msg.setSourceEntity(195U);
    msg.setDestination(11350U);
    msg.setDestinationEntity(59U);
    msg.timeout = 21692U;
    msg.lat = 0.6013419067613015;
    msg.lon = 0.5539909948064727;
    msg.z = 0.11701325753667102;
    msg.z_units = 113U;
    msg.speed = 0.3586017749309427;
    msg.speed_units = 9U;
    msg.syringe0 = 211U;
    msg.syringe1 = 207U;
    msg.syringe2 = 234U;
    msg.custom.assign("QTTYVBNFJIMMJYURKZWYDUIFLTMEGZCNAAPKRHVDOZVBMCVADLYQOUAYQAATPGGXZINEEPULRRTBJPBWDEFZPSMIWZXCOUFKAIYEYQXIIWMPPKSWCGSSCREJQRVVWSKVRHXJLZNZMNOYFSCXGETDJCIHHWEBLXGXIUCNOLMTGHBKUJRKELFUFQJTSHNWXFQRRHAZJOSPUDDKGJMNVYLFABQWXVODKSDMOYLANOFGCHX");

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
    msg.setTimeStamp(0.789571681669413);
    msg.setSource(52570U);
    msg.setSourceEntity(95U);
    msg.setDestination(54529U);
    msg.setDestinationEntity(16U);
    msg.timeout = 45767U;
    msg.lat = 0.5529550904858245;
    msg.lon = 0.4075708020016019;
    msg.z = 0.9677590393055695;
    msg.z_units = 141U;
    msg.speed = 0.886118965943258;
    msg.speed_units = 103U;
    msg.syringe0 = 8U;
    msg.syringe1 = 21U;
    msg.syringe2 = 186U;
    msg.custom.assign("NBJQMONZJRGZFTQEFCHYFYNRHKUOBLXBUOSXAGMOCISEZGNUXQZOMRIXAWCBQXRPKYUDUPX");

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
    msg.setTimeStamp(0.3880419113688567);
    msg.setSource(42193U);
    msg.setSourceEntity(163U);
    msg.setDestination(15974U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.003098842578613481);
    msg.setSource(32295U);
    msg.setSourceEntity(203U);
    msg.setDestination(32946U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.25035402341213275);
    msg.setSource(37074U);
    msg.setSourceEntity(75U);
    msg.setDestination(38641U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.039986773077305915);
    msg.setSource(42058U);
    msg.setSourceEntity(224U);
    msg.setDestination(2112U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.6155204863860251;
    msg.lon = 0.5704386967524844;
    msg.z = 0.020704088376086505;
    msg.z_units = 24U;
    msg.speed = 0.20063984236508303;
    msg.speed_units = 20U;
    msg.takeoff_pitch = 0.04449543069940587;
    msg.custom.assign("DFEHAKYDROPOWFANBBYYWOTZEWQJRDIPJFNPJAJTVEMHVHFHYKNBGWBZWRLZZNELBTGCYZIJVAKENOTUILKOVSBXAUUNTKHTNLVQSX");

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
    msg.setTimeStamp(0.5045590604386102);
    msg.setSource(38569U);
    msg.setSourceEntity(171U);
    msg.setDestination(328U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.5613478440750616;
    msg.lon = 0.35615313120772085;
    msg.z = 0.654987705567713;
    msg.z_units = 78U;
    msg.speed = 0.2491280658106032;
    msg.speed_units = 114U;
    msg.takeoff_pitch = 0.6775444107626788;
    msg.custom.assign("VJJTXGGNGEQANUITGQQBSACHBBUKPEFJJJCYHZKIYAZCPMUMLPQKEBVGLCNVCIBYIJANARAFOPELPWOACRWDDSODQZJPLHUSOYIMTAVNKVRPHYMDHWQDXXRUQZBBWSOIJJLYHLPZVJTGSCNZFWXUOOCMSLMDMTVSUFMABSKCSGRQKWZRXHEVIQEYBORKNZESTMKFIFNXCZPNBGMRAKKFTYXDLDPYHTFQURTORXFIDWZGHFWXYWLEIVLDNU");

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
    msg.setTimeStamp(0.6585065642720149);
    msg.setSource(19382U);
    msg.setSourceEntity(177U);
    msg.setDestination(42151U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.14912688099721683;
    msg.lon = 0.7112107546606085;
    msg.z = 0.9293440824697786;
    msg.z_units = 223U;
    msg.speed = 0.01995189344941961;
    msg.speed_units = 107U;
    msg.takeoff_pitch = 0.878414018095218;
    msg.custom.assign("JCGBKSIOFKGRMFXHPLBXUBJFDTTCWVXKJPVICRIVMNHJHEQFALCDOSHRJERZPGVGFYQPLAOZHGTTNBACQXYAYKEWRJBEXDNVVDTLWDZUJKTKCBUEKFYKLAOJURUPFMTZLUSJEYHPIBWFZIUGGVOKILWPVMRWTQHUOQODYZACVYRPZWQGZXUPZTCRASKSIXWCOILMMDGYZNVDEHDTQSJSUHMXQGPNBYEMBNOILAXNXM");

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
    msg.setTimeStamp(0.7490750760982662);
    msg.setSource(25232U);
    msg.setSourceEntity(248U);
    msg.setDestination(9696U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.5550041278306823;
    msg.lon = 0.1701918698933993;
    msg.z = 0.23896277239278907;
    msg.z_units = 105U;
    msg.speed = 0.63673239572346;
    msg.speed_units = 141U;
    msg.abort_z = 0.7100271357948057;
    msg.bearing = 0.23104741165982168;
    msg.glide_slope = 46U;
    msg.glide_slope_alt = 0.281283415588507;
    msg.custom.assign("GKJROKMHRDAQDNYBDYCGKCVLEXTVHPHLZVDUASMFLPGQFIAKKOMMEAENDDMXRMKUHBPJWGOFFZEFFGNBEVP");

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
    msg.setTimeStamp(0.8395160769907366);
    msg.setSource(23334U);
    msg.setSourceEntity(212U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.37812067109741987;
    msg.lon = 0.605016491435967;
    msg.z = 0.9600117170552895;
    msg.z_units = 184U;
    msg.speed = 0.09437649072632859;
    msg.speed_units = 69U;
    msg.abort_z = 0.8944968400370171;
    msg.bearing = 0.8199735107892971;
    msg.glide_slope = 216U;
    msg.glide_slope_alt = 0.30751723116102614;
    msg.custom.assign("CKYBPLIIODOQJSRHATJNGOQRPBISVDUJMGEPXEWYUHJRADCFOWBLNHPDKFIHEDDSVDKTKVNILXCLRMBTWMXZMLFTSLOUKFHOBVTPZEARIMFQZQRKCANCIBJELROVGKLFPZFVSXYCAGGJZYYIGINUKNGKEJWHMPYADETBPXWGJTMSBOIRUEVENTMZQGQYRVGTZXXTFAYJLWHNSUUPUMWZUBACQWDMYVPWXUWVNZCK");

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
    msg.setTimeStamp(0.6794313187984788);
    msg.setSource(36064U);
    msg.setSourceEntity(29U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.4955337141069932;
    msg.lon = 0.5623946707135723;
    msg.z = 0.031921902143921654;
    msg.z_units = 196U;
    msg.speed = 0.38363413036370997;
    msg.speed_units = 239U;
    msg.abort_z = 0.005420515898982958;
    msg.bearing = 0.3498269204303972;
    msg.glide_slope = 95U;
    msg.glide_slope_alt = 0.23167951183060698;
    msg.custom.assign("ORGLGXQRFITYMDEMHEFPJUSWDPBMOUACBAGBLLQXEPIKWAMRZGHVRKFLQMHCZFSGFGMTVEYBYYUDZHIDTOXZWDVHPVVOPESPLTIJZTQJAOZRWMOMXUQECKNEQAGDZRTJSCVWSRQXWWINRWSVLISLVLXKJIMTBNXJULFSAJZPUCFOAUYFKBTSKNKNYGSANWXKJACACJNHYGUYQ");

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
    msg.setTimeStamp(0.1334179302167272);
    msg.setSource(40516U);
    msg.setSourceEntity(42U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.3788536150717846;
    msg.lon = 0.6035580805896106;
    msg.speed = 0.5758282203440801;
    msg.speed_units = 216U;
    msg.limits = 10U;
    msg.max_depth = 0.7148283885712806;
    msg.min_alt = 0.29110785456049504;
    msg.time_limit = 0.06468341141092526;
    msg.controller.assign("XSARMFFSUDFNKDXPVK");
    msg.custom.assign("CSYYMVCMPNVULGXRCIAWSKHDOPHMJLWNBRIJGDBBXUYLYQIQMTJGGYZYGVHLATPKRTTRMOZO");

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
    msg.setTimeStamp(0.9725299217463682);
    msg.setSource(5728U);
    msg.setSourceEntity(97U);
    msg.setDestination(39472U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.6184779075113426;
    msg.lon = 0.8646194426462422;
    msg.speed = 0.5777028609667599;
    msg.speed_units = 35U;
    msg.limits = 244U;
    msg.max_depth = 0.2699781618608543;
    msg.min_alt = 0.2438670797664223;
    msg.time_limit = 0.372557132657396;
    msg.controller.assign("ECBLPTEUOTMFPUGHWKSSXKIYHARH");
    msg.custom.assign("KADGIIELXGWBKFVYQQJDJPSYKUOCHWTHOXKY");

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
    msg.setTimeStamp(0.7305206861879383);
    msg.setSource(8211U);
    msg.setSourceEntity(137U);
    msg.setDestination(49058U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.508042043372595;
    msg.lon = 0.73027100747741;
    msg.speed = 0.13740579718710966;
    msg.speed_units = 127U;
    msg.limits = 63U;
    msg.max_depth = 0.522156569965405;
    msg.min_alt = 0.3927918886972215;
    msg.time_limit = 0.6628878560317136;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.528253898030241;
    tmp_msg_0.lon = 0.6840111776171329;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JDUQUBOBWLEGKPAEFVBTCWLRYYFFDALPMBVUTAPKPVCVZWRYVCTUAKJLHNBOEFXULLRSDRHQWBPSLZKEEHSYDIZGRZCQQRNDFEWRYBXLBMYJYO");
    msg.custom.assign("ARIDFLPCAVUXKBCLGTNHSDBGVSIJIMCFDXLS");

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
    msg.setTimeStamp(0.6598087992185276);
    msg.setSource(2472U);
    msg.setSourceEntity(114U);
    msg.setDestination(2128U);
    msg.setDestinationEntity(50U);
    msg.target.assign("VZKCVIUYOMVKNORNHSYVTWICRZUNRYVVIKXAHBOQPGDFOWIXJQTJTHEYGQRCVDRSZCEFPGHDOEHPKHNKUIVWPEDFXAMQOCKHOIFLCPWRTSMBAGJOFPXXDQZPFFAPUQEJTCABNGBPBMLMULCMQTLVCZULUTJEJRMOJQBDTDWXS");
    msg.max_speed = 0.29942919727126993;
    msg.speed_units = 145U;
    msg.lat = 0.47862701652669515;
    msg.lon = 0.8444186097027714;
    msg.z = 0.011725011477375924;
    msg.z_units = 116U;
    msg.custom.assign("HMQHNRQMRENBDHDYPPYIXGIURRDWFMOLOVHIDCCUZGPZCHDEOSSXPVDXPULCSRBDCWLWKXNVTBPWJGFMVZZTYKQFFJUDPGCPLAMTAOLSSVB");

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
    msg.setTimeStamp(0.1458820357239795);
    msg.setSource(7199U);
    msg.setSourceEntity(114U);
    msg.setDestination(17910U);
    msg.setDestinationEntity(138U);
    msg.target.assign("TZYTVDLPHZCDHXHBNGAXQPDETGFBUVFBRURFMVNWJBPYLJENILKIYMDLQJAXQBYCKQNBACOKDSRUGFGWANQXWMVROIUSUSIZNXOCNVFCTRCPOIDUKJ");
    msg.max_speed = 0.04203060970938133;
    msg.speed_units = 95U;
    msg.lat = 0.5810672910387744;
    msg.lon = 0.015189872207835853;
    msg.z = 0.8809009533286236;
    msg.z_units = 83U;
    msg.custom.assign("LUBVSFMODLBKGPQIYUZHCBRBIJWNGRLUUILCSTHWHC");

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
    msg.setTimeStamp(0.04115265397081236);
    msg.setSource(51789U);
    msg.setSourceEntity(171U);
    msg.setDestination(53713U);
    msg.setDestinationEntity(154U);
    msg.target.assign("JHXTCKHJPWNSQXFKAINPSFOVKFHJGPUMUYZACRRIREYSLVOYVNLSRMWETWGBFCOTYVVOHURDIDOAQKAPGTFQZSQWBLIRXRBDECGGUSBYUBZZETSYLVIHHQFIAHMYYGWMZEZYEJKQDMDQZ");
    msg.max_speed = 0.38363410265196374;
    msg.speed_units = 39U;
    msg.lat = 0.13082722280846482;
    msg.lon = 0.3261906441536079;
    msg.z = 0.7383061738010422;
    msg.z_units = 5U;
    msg.custom.assign("KKPDRTOGUDNFWTVVDNPSZGGNUKGHQHJRSIFHWMMYUQQFDWLMVSTPJYLSCXDCJUABAPLEIZLMUEZPOJRVWXKTRIVBNYCNUGJKCWEAOEH");

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
    msg.setTimeStamp(0.5107749329837736);
    msg.setSource(20857U);
    msg.setSourceEntity(59U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(28U);
    msg.timeout = 32853U;
    msg.lat = 0.7658656350923779;
    msg.lon = 0.3699378676652314;
    msg.speed = 0.1455730695747579;
    msg.speed_units = 82U;
    msg.custom.assign("MYKSSDLCAJPSVISTKATPZRIOMMHSOQLWZIBEWAEANDZNHXMNJNTEMXRKSQGROUPMUWHOBOKRMTOMCEEYIUAIVXGFBRVBNCYIPXVBAONWMEXYTUYKQFLEOQGQGGDXSFJFVHZLNDROGHGJJDUQKZWAQXU");

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
    msg.setTimeStamp(0.7179180203462102);
    msg.setSource(362U);
    msg.setSourceEntity(127U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(177U);
    msg.timeout = 61171U;
    msg.lat = 0.4887898618579568;
    msg.lon = 0.35403922424582346;
    msg.speed = 0.4168660283962463;
    msg.speed_units = 232U;
    msg.custom.assign("EQBAZTSLLSVBUXUBUYBKYMYLTOFIADAWKHMQTJRHJMRHOXQGNMYHZAJXHBWBXLVEEDUMODFUJEPWSPVYIYDOLGNUHSTEWGLSXQPERSU");

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
    msg.setTimeStamp(0.5319816430370846);
    msg.setSource(27603U);
    msg.setSourceEntity(71U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(180U);
    msg.timeout = 59724U;
    msg.lat = 0.8741670729734924;
    msg.lon = 0.23468917521107102;
    msg.speed = 0.9013934117045959;
    msg.speed_units = 132U;
    msg.custom.assign("JMNXFMMDRVYFESAUJJFCLTFURYHWJWSAFUHRBAAHKQWIGDNRTHOMTV");

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
    msg.setTimeStamp(0.49800904103985577);
    msg.setSource(48516U);
    msg.setSourceEntity(78U);
    msg.setDestination(10683U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.07635484586872687;
    msg.lon = 0.9094997033550417;
    msg.z = 0.5168690565478283;
    msg.z_units = 205U;
    msg.radius = 0.03293862818088433;
    msg.duration = 38449U;
    msg.speed = 0.15508879193654979;
    msg.speed_units = 6U;
    msg.popup_period = 45972U;
    msg.popup_duration = 27794U;
    msg.flags = 197U;
    msg.custom.assign("PCYSYLFOURNOAONOANSZCMGBBXTTTTMYEFHYGOVNIHYISVW");

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
    msg.setTimeStamp(0.16098870618011352);
    msg.setSource(56036U);
    msg.setSourceEntity(107U);
    msg.setDestination(58870U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.4799422270650676;
    msg.lon = 0.18471972639627754;
    msg.z = 0.948052672149552;
    msg.z_units = 87U;
    msg.radius = 0.8717784793709474;
    msg.duration = 45566U;
    msg.speed = 0.3956839664834312;
    msg.speed_units = 209U;
    msg.popup_period = 34406U;
    msg.popup_duration = 1276U;
    msg.flags = 12U;
    msg.custom.assign("SSTUTCYLNBKJOZJAVROYSAUAIWXTLIJOYOV");

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
    msg.setTimeStamp(0.0935543659320669);
    msg.setSource(62481U);
    msg.setSourceEntity(23U);
    msg.setDestination(15274U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.43421072584226406;
    msg.lon = 0.11787746449863312;
    msg.z = 0.8166905331621479;
    msg.z_units = 66U;
    msg.radius = 0.4818033830540891;
    msg.duration = 47996U;
    msg.speed = 0.3448125201721899;
    msg.speed_units = 191U;
    msg.popup_period = 35211U;
    msg.popup_duration = 56213U;
    msg.flags = 32U;
    msg.custom.assign("PDVKLPOPFAXQZNZLUTWSBMHTPAYBJZIXCMONOOTAYSFYDCVRFVQUVCTDVOMGLDJFVRSDTJGZRRMKWEBEWJ");

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
    msg.setTimeStamp(0.506946702578314);
    msg.setSource(16655U);
    msg.setSourceEntity(154U);
    msg.setDestination(45487U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.8427807181114618);
    msg.setSource(22267U);
    msg.setSourceEntity(215U);
    msg.setDestination(33184U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.9108803752386653);
    msg.setSource(15984U);
    msg.setSourceEntity(7U);
    msg.setDestination(50617U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.5999228199933739);
    msg.setSource(41422U);
    msg.setSourceEntity(215U);
    msg.setDestination(28353U);
    msg.setDestinationEntity(21U);
    msg.timeout = 46880U;
    msg.lat = 0.13595652529915814;
    msg.lon = 0.2574347984756855;
    msg.z = 0.3781707208905607;
    msg.z_units = 100U;
    msg.speed = 0.6596451847114138;
    msg.speed_units = 175U;
    msg.bearing = 0.18379007216247933;
    msg.width = 0.379291333429292;
    msg.direction = 208U;
    msg.custom.assign("IQJMGAJZKRHGBLRQSVTXGCYYKKXBRUTOFHEPSOFDECSEHQIXKMRHPCHMYWNZHCJPDKVPPMQNYEJVBBFPSJBZXIHNRKULLXKNYEKPHQAAFRJNDCUOLUTDGWOBIAWARVOWSDFIE");

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
    msg.setTimeStamp(0.5389192026196482);
    msg.setSource(3888U);
    msg.setSourceEntity(221U);
    msg.setDestination(46471U);
    msg.setDestinationEntity(136U);
    msg.timeout = 60686U;
    msg.lat = 0.30591749619623065;
    msg.lon = 0.20151349876899805;
    msg.z = 0.6224520116739066;
    msg.z_units = 86U;
    msg.speed = 0.08926377655595341;
    msg.speed_units = 225U;
    msg.bearing = 0.1546114585735806;
    msg.width = 0.03291468891429117;
    msg.direction = 61U;
    msg.custom.assign("DQEYKICSTQGLUVLIEVLNJXMJDDENREGDFPECCAKFYIFAAWFKPTWMHQVZBNJTOPTJZUDTPONSKHXZKPKKXSOJJENHSNHIBPYAHPTLKNU");

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
    msg.setTimeStamp(0.05387649841621367);
    msg.setSource(38049U);
    msg.setSourceEntity(151U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(177U);
    msg.timeout = 33740U;
    msg.lat = 0.34892541710863567;
    msg.lon = 0.9868002188078555;
    msg.z = 0.6461523904289249;
    msg.z_units = 50U;
    msg.speed = 0.6564532022163734;
    msg.speed_units = 225U;
    msg.bearing = 0.39349470353085514;
    msg.width = 0.5527989270519751;
    msg.direction = 35U;
    msg.custom.assign("WJGHFAEGGJPTYKKBBDHSJDKRMQORJAPKFIYAUCJKYEHL");

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
    msg.setTimeStamp(0.06991812134612152);
    msg.setSource(17400U);
    msg.setSourceEntity(28U);
    msg.setDestination(46247U);
    msg.setDestinationEntity(208U);
    msg.op_mode = 125U;
    msg.error_count = 147U;
    msg.error_ents.assign("FOXZTLJZULHGBPEQOXWSWKHKIDAATSTXTGKYNBZMHWRUJNPSYXMMBNLNNQRUPZJFCVHYNTTYZCFBYUXFIBRGBOSTPIONFKRGUGQMJUQUFSVAICHYUYLEVPOBSGBCQXHGIOFQXNVPMGTWMAWANGCEOFZYEPJDWOJRRBNXRQPSDLCOSRCDJHSLIKQAALUKDZREIEVIPELWOMKXTSWKLJDDBYHQWQEFMXPIVHCFKCD");
    msg.maneuver_type = 24387U;
    msg.maneuver_stime = 0.7085356588299745;
    msg.maneuver_eta = 5624U;
    msg.control_loops = 3316447090U;
    msg.flags = 13U;
    msg.last_error.assign("CDJCYMTFZHQGGNABAQDIBUUBYUGOXDVSGDLTAEHTRIRVQZEKQZDUJOKNPRKKPFKPSCAFMBLYXSKRJSXHEPXPJLUONZRVAPJVYJIXACIVTKBZRNTOYPG");
    msg.last_error_time = 0.40268271287285307;

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
    msg.setTimeStamp(0.5343891838185963);
    msg.setSource(13364U);
    msg.setSourceEntity(198U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(89U);
    msg.op_mode = 4U;
    msg.error_count = 39U;
    msg.error_ents.assign("LWOBTYYQYJTQTUEMSAUVABITNNMWBOVYZUNZRPXCRCPMGKFSFSITAQFHINDJPXSEZCVQUOLFDXQHCRRDXGMRSVZHEHMFOQJPOGAJWKGNPEPTMRENCXPZBIYUUZCFCJBRETYNCHUJQOKHJOTCXSKKUGKEUOSFHWJVXHDPWIVYLSLRHDADY");
    msg.maneuver_type = 44672U;
    msg.maneuver_stime = 0.12506651920336576;
    msg.maneuver_eta = 54013U;
    msg.control_loops = 3795870317U;
    msg.flags = 73U;
    msg.last_error.assign("NEEAYSZWRWFNQOFXXTZBQTJGHCBKFY");
    msg.last_error_time = 0.2504896872873018;

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
    msg.setTimeStamp(0.41235007833492676);
    msg.setSource(14258U);
    msg.setSourceEntity(13U);
    msg.setDestination(39790U);
    msg.setDestinationEntity(231U);
    msg.op_mode = 29U;
    msg.error_count = 47U;
    msg.error_ents.assign("RHQLWWXKKTHNRUOLPUSPQKTEEKZBHMOIZIKXMWFAIPAAYBQVEALAHMZXEFYJZLEHLUBISVRHPVOIGBGXESVHXUZPQYWPBAJTWUNNSNXGIMYMGRBROVHRWCAGCACJIDRITUDYDSTFSFTTZLLVOODNCNQOKABQEMCWM");
    msg.maneuver_type = 33686U;
    msg.maneuver_stime = 0.13739238924345754;
    msg.maneuver_eta = 56661U;
    msg.control_loops = 3642958180U;
    msg.flags = 242U;
    msg.last_error.assign("YHVAEAJTPAEKJDDWUDXLEPIAEYMDXARCQLLKGKUIXZCSKF");
    msg.last_error_time = 0.5819530064672828;

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
    msg.setTimeStamp(0.8986678002315273);
    msg.setSource(33865U);
    msg.setSourceEntity(52U);
    msg.setDestination(64141U);
    msg.setDestinationEntity(154U);
    msg.type = 17U;
    msg.request_id = 45511U;
    msg.command = 246U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 37379U;
    tmp_msg_0.lat = 0.7825521855215577;
    tmp_msg_0.lon = 0.4274795642426167;
    tmp_msg_0.speed = 0.27078995369166137;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.custom.assign("ZNYTHDRUFQKKHPISGXCVQDYCFOAHMGEXWMUFNIDGLRLXJSRBZE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16464U;
    msg.info.assign("YSXJSXFEKTUGFKOILOLLLELPEBKIGBNWBRVABYAIJYMENAPRDMRILTOPXSBJMIIAHZCNXXFUZGQKYEQQXZNOVQPQULUVHHHZUFSHUWJENDLBUWAPVYPJYRDMVKTVACXKMIDZPAZMHNGKNAVZCTSAKLSYAHBXBFOGOBFPIJKXLSBIW");

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
    msg.setTimeStamp(0.8009585822766654);
    msg.setSource(630U);
    msg.setSourceEntity(184U);
    msg.setDestination(36716U);
    msg.setDestinationEntity(201U);
    msg.type = 127U;
    msg.request_id = 38235U;
    msg.command = 103U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 51660U;
    tmp_msg_0.lat = 0.8610471286746579;
    tmp_msg_0.lon = 0.06733432669624706;
    tmp_msg_0.z = 0.7847605336804843;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.speed = 0.4305197079792702;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.bearing = 0.46190703859681825;
    tmp_msg_0.width = 0.2465553492824164;
    tmp_msg_0.direction = 70U;
    tmp_msg_0.custom.assign("GQMBNWZNYEFLPIYTJJNQEOTQGTTORQXCJZOELEUZNHEFVDGOVZNSLMQVBETAPRHMGFKSXNLFCFJZYWPVVMKFCCIQNWJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52811U;
    msg.info.assign("TWEXSIAIGLPOXMTZIYERABAJGYJSCHLRKLUSKVOMHWKDFVYCZFIQSISTODDXXZVJKGTPHFZMWFMUXZCEUXNYFCGJCAIDRQNADRCWWOWWASBGFTPJQINVTCDQVESXGVIUZGTQOZYLMNJOPDXLLHSBJRPHLRVYXKNENBGABCNLYFFIYYPVHHWBCEMHNQUEREKTAWHXSOEMTDOBQGJJOGYBUJOLZZVHCAPBQVBUUQIRUMKM");

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
    msg.setTimeStamp(0.22455337871697556);
    msg.setSource(63900U);
    msg.setSourceEntity(179U);
    msg.setDestination(13185U);
    msg.setDestinationEntity(126U);
    msg.type = 166U;
    msg.request_id = 28351U;
    msg.command = 26U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.3385512835613307;
    tmp_msg_0.lon = 0.29025320128742993;
    tmp_msg_0.z = 0.4179567704314099;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.radius = 0.3361253351613279;
    tmp_msg_0.duration = 48106U;
    tmp_msg_0.speed = 0.1330996702240287;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.popup_period = 55557U;
    tmp_msg_0.popup_duration = 35442U;
    tmp_msg_0.flags = 136U;
    tmp_msg_0.custom.assign("JCWOWTUAMABMFAUAVQBFVKHIPTXCBRXMWIHSZWBPFSQWJEBXSKSLAGFZCEN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22938U;
    msg.info.assign("RVSUQGUMCYHKSFHBJCPINZHIYVEAUMKWXRXIUWZHTRGWVYIQWZBDGFFDOUKPLPFIYZBFDLEUMDJMYXKSDNKBTIYLJEDQQALFVFKMAXLNQSPXGENOBVKWONNTOILBGPLVCCULWCQTCRXNWAZPMGTQOARVJJEARXKZEBNSXCNOTJPEIGSUVEGRAVBN");

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
    msg.setTimeStamp(0.8185466009856048);
    msg.setSource(61120U);
    msg.setSourceEntity(43U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(94U);
    msg.command = 225U;
    msg.entities.assign("QZTWEFDUJIWIUBEYZAIYUZGMSWTXWFLMLFXOZRGZDZNKOGBIOHUFSQWQHXNBQVMNAAPLOPTJDSKWPTCYGDTFQGSXRVPRKYNKVCFVYFKHLVOYUSTJKLSLEDCJULAWQZJYCEMYUPNWXGPOOAEIVPXSCCCCQGIHLLTHKNCDRBBXIRNRMJMKLHJKSAFP");

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
    msg.setTimeStamp(0.1405090141742812);
    msg.setSource(42827U);
    msg.setSourceEntity(83U);
    msg.setDestination(719U);
    msg.setDestinationEntity(214U);
    msg.command = 142U;
    msg.entities.assign("FKSCRKBDJNMMZRHSYLQVUBUMXRROTVKLEUNUAGOJQYBYBCPGYMLCEWOXQVDIVOGWTWDJIDTGDRHMADZDACPSFYTMJMKSPCGZPNKOLWILCPWQVCJLQLKEKRBJIFSXGNICUARFISTWWTHAOHHEUVXHXZSNHNQEIOSJQYIMKGTNAXCBGTIHCJMEFRPZSWUQQ");

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
    msg.setTimeStamp(0.01987584408450327);
    msg.setSource(37310U);
    msg.setSourceEntity(184U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(96U);
    msg.command = 97U;
    msg.entities.assign("FAVDZYIRNOZGFUXLXLVQOIFOZESIQQIAXSNRTFRUISZPXAIHKEFPESRRUFQBCJEVLXMCAVTYWDQCJNLJOGX");

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
    msg.setTimeStamp(0.6036060487532944);
    msg.setSource(24442U);
    msg.setSourceEntity(81U);
    msg.setDestination(46768U);
    msg.setDestinationEntity(77U);
    msg.mcount = 217U;
    msg.mnames.assign("VRGXWWDRMZSIUZXXCCQWOTQFRBWZFCPBXPFOGUJJTMLTKLMEWMWVJKWOBQETMXYQMIPKDSMOJGCXAZZZXHRRASHBRJINYQFFPQVDDHSDLVZRSEWKVQDBCAETNGIBIYVTHCBVCZKULADPUUZQCENPWZYVELCIORAXPWHMGPSAHDYKBNNGJNRKUDQUSUQGYEMGPSXIKBBHDHORKOJFTKINNTVGLAFYYGLEACATELV");
    msg.ecount = 169U;
    msg.enames.assign("HQHPMETVQZQPUZDYIMCSVTWYJACSAYEPWVPBNTQCDNNSMFVRRZLKUCZYJGKBOZNHMSYQBDDOSXMTUOBIBDVBJPXGWUGMTBNQAVPLSQHLYYIJUGFREHZCERGLIWKMEWAIXFXCACXIDGGAUTPXJLWKBFVBKXKLWAYEHNVPKRIFFWEQLHOGTMRVTRXNSUXIOERCLOJLGVXWKOJESSODCJYBFFKNZHCDDSZJIRFEUUUY");
    msg.ccount = 37U;
    msg.cnames.assign("ZKTHDVMFHTYCAITNPDPOIUWPHEBOBUBNRGYNSHVFJFLQIXSUGFJTBNTMAKYJGZOMMKDRXZSMREJNOOYVGNVENBJTXECMAGITCSVKOWEFXVPCLLRORKQCQJUCSYDIWELSBAPCLJLAWIUXHHYQUVFWAQALNHFQGZDEFGUZAWYWUATAPJVUCZPDZCSYBHQWFRYNLJGLRXDXZIWPKRTQQK");
    msg.last_error.assign("SNFCZYEFTTLXMIHQJTXDALJURXKVFGUWYHSYTBOSGYIEKDROHPDBAKXLKJOCFVKLMVYITVJOERSPBDXGLAFXWH");
    msg.last_error_time = 0.6156112394079776;

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
    msg.setTimeStamp(0.7914952827739948);
    msg.setSource(5943U);
    msg.setSourceEntity(115U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(210U);
    msg.mcount = 15U;
    msg.mnames.assign("WEKXRFXTEEUQVAVCDOVGRQIRMPPIEOTQGJXJMYTJQOHSSXKACBKZPUFDNEUTIGSNXIMMQATDGYIZGOZORADNMPYQGBYRBVYAICKCUXYFFMHIJOCNYSGBJKYWZSWDJFENIOUVZLCZFBTXRLNELXHHLLDSCOCMACPAXVHGLIRSTPHVSPWFJFWHKWSOFEHHRIWJQRULZAVMOUB");
    msg.ecount = 224U;
    msg.enames.assign("VIEAXSDJFLLPYQUYZHACFIEOCBOMWBQKDRLHDTCRBPYUJUYGBWOXVEAQFSLZMLPNLXBGKRYJNLFHRYRWOHIBTVTPJDZCLQMWKRYSFOKERNTKVFYSGZKPWBDOSSGZAGCYOWAIRXTNZCKIPXKQWEIOGEFREAIVSGOCRCPNGMWDJHNBHZMPQAVDXJTVQTHEFKAVUZINKQCHNDPHDMEXTHIJTUDWUMULBAIQXXQUFVEJSLAGMJGPS");
    msg.ccount = 239U;
    msg.cnames.assign("VLFAQCGEFPKUBNTKFXTXBRSYBVMLXFTYEGRQQOBHOBJVHFALWSKNFIJPQWEVQRNIRYHJIRMQHDPLVSLNNWTMOTPQAIYMXCJXPVRIAFFDJTESWPFGBMUCDEZTLAONZMPHHSKBJWLAKWLSHWKGAYAZUNUNZOEZIPJTCTGKEGJUCUSGQVYHDIUBCZPM");
    msg.last_error.assign("QDSGPDHHCTIQNNVQPKJCOPXVBHLKGWYEJLSORGFHMXLAYOBXDNSWTCOXRYEPHOCOUFIAXJCWWFVVKQIYTJEBTMCGUZI");
    msg.last_error_time = 0.5881255506282294;

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
    msg.setTimeStamp(0.18449890308465866);
    msg.setSource(64196U);
    msg.setSourceEntity(148U);
    msg.setDestination(51414U);
    msg.setDestinationEntity(238U);
    msg.mcount = 135U;
    msg.mnames.assign("HRSJLVIZLPWYQMIGOCAQMTRUXNVDFAHJDZYKOGPYXTRAXPEHKROATNBLYAKUZZWRTISBLDFMWXMRFHJOTVVKOBXKSFPKGGQFLRFXEDLUBONNKSDZRKVACBSRYDHPO");
    msg.ecount = 152U;
    msg.enames.assign("LUOENYHRQZZZHLSXYBPOAWNKTNIIXIWMARNZSOFAD");
    msg.ccount = 191U;
    msg.cnames.assign("HFOCRNKKYNZUSAFCPBWNGQYKORWPASBFPFYHUAOTPZVHEBGGWCFYORHIWQNL");
    msg.last_error.assign("JUEDINCCDKPAEJASHRLSGDPWZYQSBHONZDNUKSMNXHBCYMP");
    msg.last_error_time = 0.871519333259598;

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
    msg.setTimeStamp(0.5776575225495488);
    msg.setSource(6758U);
    msg.setSourceEntity(145U);
    msg.setDestination(34737U);
    msg.setDestinationEntity(33U);
    msg.mask = 238U;
    msg.max_depth = 0.5607824849745819;
    msg.min_altitude = 0.054195130066968966;
    msg.max_altitude = 0.3021725805542309;
    msg.min_speed = 0.3352860801267713;
    msg.max_speed = 0.11114341993705579;
    msg.max_vrate = 0.875404202240137;
    msg.lat = 0.33346855697669997;
    msg.lon = 0.9876768865035036;
    msg.orientation = 0.06751218138448256;
    msg.width = 0.15665563249197678;
    msg.length = 0.4624455030135448;

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
    msg.setTimeStamp(0.6573213642827218);
    msg.setSource(14468U);
    msg.setSourceEntity(197U);
    msg.setDestination(34095U);
    msg.setDestinationEntity(192U);
    msg.mask = 106U;
    msg.max_depth = 0.45428135789573265;
    msg.min_altitude = 0.06542361002107244;
    msg.max_altitude = 0.9728824435217664;
    msg.min_speed = 0.22972504440930563;
    msg.max_speed = 0.8090416288350134;
    msg.max_vrate = 0.5935331883652023;
    msg.lat = 0.5013225613474688;
    msg.lon = 0.6691238431284815;
    msg.orientation = 0.7958322525583602;
    msg.width = 0.33936524154149406;
    msg.length = 0.19474644743243086;

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
    msg.setTimeStamp(0.11095834769759705);
    msg.setSource(12859U);
    msg.setSourceEntity(89U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(95U);
    msg.mask = 224U;
    msg.max_depth = 0.7750660046560757;
    msg.min_altitude = 0.5912077081416929;
    msg.max_altitude = 0.997504558603948;
    msg.min_speed = 0.5244452019888751;
    msg.max_speed = 0.8630391035791809;
    msg.max_vrate = 0.7854829741002248;
    msg.lat = 0.024279478331272197;
    msg.lon = 0.40661651066634097;
    msg.orientation = 0.16135596387438422;
    msg.width = 0.18438673291727625;
    msg.length = 0.7406317464595816;

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
    msg.setTimeStamp(0.4510975030751452);
    msg.setSource(36760U);
    msg.setSourceEntity(187U);
    msg.setDestination(16669U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.9773753248510917);
    msg.setSource(32553U);
    msg.setSourceEntity(219U);
    msg.setDestination(7885U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.3933909402039797);
    msg.setSource(15041U);
    msg.setSourceEntity(231U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.6346610794656363);
    msg.setSource(2289U);
    msg.setSourceEntity(51U);
    msg.setDestination(17366U);
    msg.setDestinationEntity(49U);
    msg.duration = 10908U;

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
    msg.setTimeStamp(0.539131131106716);
    msg.setSource(38118U);
    msg.setSourceEntity(25U);
    msg.setDestination(43068U);
    msg.setDestinationEntity(230U);
    msg.duration = 25402U;

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
    msg.setTimeStamp(0.5671783100556289);
    msg.setSource(18808U);
    msg.setSourceEntity(242U);
    msg.setDestination(45870U);
    msg.setDestinationEntity(154U);
    msg.duration = 49425U;

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
    msg.setTimeStamp(0.1441691468095352);
    msg.setSource(40440U);
    msg.setSourceEntity(43U);
    msg.setDestination(7398U);
    msg.setDestinationEntity(22U);
    msg.enable = 217U;
    msg.mask = 3422100390U;
    msg.scope_ref = 1635449121U;

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
    msg.setTimeStamp(0.06192800130948284);
    msg.setSource(37045U);
    msg.setSourceEntity(134U);
    msg.setDestination(56005U);
    msg.setDestinationEntity(119U);
    msg.enable = 22U;
    msg.mask = 2239522570U;
    msg.scope_ref = 2890413058U;

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
    msg.setTimeStamp(0.27802366488374153);
    msg.setSource(51318U);
    msg.setSourceEntity(178U);
    msg.setDestination(19707U);
    msg.setDestinationEntity(163U);
    msg.enable = 54U;
    msg.mask = 3701400266U;
    msg.scope_ref = 3121276029U;

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
    msg.setTimeStamp(0.7041484379995419);
    msg.setSource(2599U);
    msg.setSourceEntity(131U);
    msg.setDestination(39901U);
    msg.setDestinationEntity(59U);
    msg.medium = 136U;

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
    msg.setTimeStamp(0.6023867584344355);
    msg.setSource(42678U);
    msg.setSourceEntity(177U);
    msg.setDestination(24322U);
    msg.setDestinationEntity(250U);
    msg.medium = 144U;

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
    msg.setTimeStamp(0.30337302166623303);
    msg.setSource(64590U);
    msg.setSourceEntity(223U);
    msg.setDestination(50354U);
    msg.setDestinationEntity(97U);
    msg.medium = 24U;

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
    msg.setTimeStamp(0.8062303987173772);
    msg.setSource(3566U);
    msg.setSourceEntity(96U);
    msg.setDestination(5733U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8866427299959524;
    msg.type = 73U;

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
    msg.setTimeStamp(0.42976572466451146);
    msg.setSource(34813U);
    msg.setSourceEntity(230U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(247U);
    msg.value = 0.33514823316027176;
    msg.type = 12U;

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
    msg.setTimeStamp(0.008348137269305278);
    msg.setSource(34793U);
    msg.setSourceEntity(57U);
    msg.setDestination(17977U);
    msg.setDestinationEntity(244U);
    msg.value = 0.007679980004141274;
    msg.type = 249U;

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
    msg.setTimeStamp(0.29919255908144105);
    msg.setSource(10022U);
    msg.setSourceEntity(248U);
    msg.setDestination(33162U);
    msg.setDestinationEntity(215U);
    msg.possimerr = 0.7003764858154573;
    msg.converg = 0.6909332409294541;
    msg.turbulence = 0.5131671659224282;
    msg.possimmon = 202U;
    msg.commmon = 125U;
    msg.convergmon = 250U;

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
    msg.setTimeStamp(0.9251495645177968);
    msg.setSource(9943U);
    msg.setSourceEntity(66U);
    msg.setDestination(54909U);
    msg.setDestinationEntity(119U);
    msg.possimerr = 0.18515794656173368;
    msg.converg = 0.8723639000219032;
    msg.turbulence = 0.18901164181289343;
    msg.possimmon = 41U;
    msg.commmon = 180U;
    msg.convergmon = 173U;

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
    msg.setTimeStamp(0.6078070251908242);
    msg.setSource(38665U);
    msg.setSourceEntity(74U);
    msg.setDestination(36880U);
    msg.setDestinationEntity(43U);
    msg.possimerr = 0.38545551167008596;
    msg.converg = 0.9701401506702418;
    msg.turbulence = 0.8993045714662973;
    msg.possimmon = 149U;
    msg.commmon = 207U;
    msg.convergmon = 166U;

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
    msg.setTimeStamp(0.9724536990501303);
    msg.setSource(50124U);
    msg.setSourceEntity(203U);
    msg.setDestination(27285U);
    msg.setDestinationEntity(180U);
    msg.autonomy = 37U;
    msg.mode.assign("YOSNJEXBISSNGVWUSKZIYXLELDWTSZVGDORCPPEBAPIFVGUDGKIVAJIKGQNPQGBZCKPBNOXELITOWWAOPLCWNGYLJHANOSTWUJFXZHWFBRJSMYMDVZKDFEEHATGKHIDKUDGFKTCAFKNIHVJRTIBYRXMYXALMULFRHXSOYZPABHUMHMCVBERQHUEMUSROTWCQANNUTMKDQCHBORTFJGPQWZYJACXUYYQQLJCPBXEODMQLPRFZLVJIWC");

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
    msg.setTimeStamp(0.13363294652954116);
    msg.setSource(41907U);
    msg.setSourceEntity(150U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(213U);
    msg.autonomy = 110U;
    msg.mode.assign("FNBJTGEMWPBPSNTUKOPXYNYWKNBXUSXHTPDXRLOGIAEFCFJHVMELTTHQZNUGRWRKOKVHMJWBQZCUYVAVTHIEZLAMQEBOEGTALVRZSWQDBJWJTYPGMFEQGLHMCYKCVNCVRINGXHGFDQXOCDESDSRDKNJPMHVSWLIQJZKFOUPAQRCEQWZCSOHNIPTMDKLZ");

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
    msg.setTimeStamp(0.11531516179788426);
    msg.setSource(18330U);
    msg.setSourceEntity(91U);
    msg.setDestination(53299U);
    msg.setDestinationEntity(187U);
    msg.autonomy = 104U;
    msg.mode.assign("WEMHFOPNUGEISTVGTDMXKXMLPAZKOUFOKVLANBKJCHGJVZYLIYOWFBHBTJUDQJ");

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
    msg.setTimeStamp(0.15907585316989803);
    msg.setSource(9974U);
    msg.setSourceEntity(139U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(92U);
    msg.type = 231U;
    msg.op = 208U;
    msg.possimerr = 0.1618311957703933;
    msg.converg = 0.43965046627720106;
    msg.turbulence = 0.30076274138863657;
    msg.possimmon = 144U;
    msg.commmon = 180U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.5485942337756748);
    msg.setSource(3094U);
    msg.setSourceEntity(226U);
    msg.setDestination(14514U);
    msg.setDestinationEntity(36U);
    msg.type = 62U;
    msg.op = 44U;
    msg.possimerr = 0.6763884983179337;
    msg.converg = 0.8413503709464469;
    msg.turbulence = 0.3137337914375561;
    msg.possimmon = 221U;
    msg.commmon = 106U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.20892571253919834);
    msg.setSource(62341U);
    msg.setSourceEntity(202U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(223U);
    msg.type = 102U;
    msg.op = 154U;
    msg.possimerr = 0.3658526866416085;
    msg.converg = 0.520295985342905;
    msg.turbulence = 0.21465276316618243;
    msg.possimmon = 185U;
    msg.commmon = 236U;
    msg.convergmon = 36U;

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
    msg.setTimeStamp(0.8094398668388915);
    msg.setSource(43510U);
    msg.setSourceEntity(198U);
    msg.setDestination(23674U);
    msg.setDestinationEntity(37U);
    msg.op = 198U;
    msg.comm_interface = 186U;
    msg.period = 34014U;
    msg.sys_dst.assign("MPQTPDTUDYCNUQVLMFSIOEYEANELOCOJBWISUQFAIHIPFSNPWGBAVPWRPHHXMSTIDFQKENERZMIWADPWKJSURGBNTGZGWHHWUWKVAHCZAGCNSQMGIRQBUTTZIEXPYEOYSVBQKRUHGHNYCPZBXOMYIJZFTMCBUPAFXNEFOFEHYZATROXVMZQVZYFLRLOUUVOHASXJWBXCDLWKYKGKDCISQKCLRBJBAQLGVVDEYMRX");

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
    msg.setTimeStamp(0.06305086811195826);
    msg.setSource(29660U);
    msg.setSourceEntity(67U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(160U);
    msg.op = 197U;
    msg.comm_interface = 30U;
    msg.period = 3438U;
    msg.sys_dst.assign("CATURSSBJZNKYJFHGPLBWWNOBJQLSLGPWHVXGYYTNHJBHACEWZPTPXKWAHGWUNMCSFYBHFJVACEILRUAZJEIVAHVIKKFPJUFUYQEXNKEZUZQDGVEGCZLGKPOCYOCAQRIOKRMAMEFX");

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
    msg.setTimeStamp(0.5071996643742862);
    msg.setSource(8423U);
    msg.setSourceEntity(80U);
    msg.setDestination(6349U);
    msg.setDestinationEntity(11U);
    msg.op = 127U;
    msg.comm_interface = 109U;
    msg.period = 54294U;
    msg.sys_dst.assign("ILAJSQFALKOLMKJRWVEAGQSUUGRMBWGVFCBWGZHMPBIDHJOYYRHEUONBGPVSXWJPSKXYXXNEAEPDXQWEZMSXPYJVNMSRBJKHGRULOVAAMVTTXNPQYHALWZZJUPVLVBTFNAQQFFGRKNKSDG");

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
    msg.setTimeStamp(0.927948501510766);
    msg.setSource(3451U);
    msg.setSourceEntity(175U);
    msg.setDestination(57622U);
    msg.setDestinationEntity(91U);
    msg.stime = 1485516790U;
    msg.latitude = 0.451804004102884;
    msg.longitude = 0.5545053025495295;
    msg.altitude = 9414U;
    msg.depth = 54907U;
    msg.heading = 26574U;
    msg.speed = 1898;
    msg.fuel = -56;
    msg.exec_state = 25;
    msg.plan_checksum = 51443U;

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
    msg.setTimeStamp(0.5275087081954435);
    msg.setSource(58896U);
    msg.setSourceEntity(190U);
    msg.setDestination(56299U);
    msg.setDestinationEntity(35U);
    msg.stime = 2381528963U;
    msg.latitude = 0.581080364877046;
    msg.longitude = 0.9711920107605501;
    msg.altitude = 56516U;
    msg.depth = 15991U;
    msg.heading = 37441U;
    msg.speed = -25742;
    msg.fuel = -41;
    msg.exec_state = -59;
    msg.plan_checksum = 63204U;

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
    msg.setTimeStamp(0.6263188778505078);
    msg.setSource(25897U);
    msg.setSourceEntity(118U);
    msg.setDestination(24546U);
    msg.setDestinationEntity(152U);
    msg.stime = 4244193343U;
    msg.latitude = 0.10317957331816519;
    msg.longitude = 0.17954051288025208;
    msg.altitude = 53393U;
    msg.depth = 34925U;
    msg.heading = 1115U;
    msg.speed = 21878;
    msg.fuel = -46;
    msg.exec_state = 82;
    msg.plan_checksum = 40295U;

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
    msg.setTimeStamp(0.3752344405509329);
    msg.setSource(3184U);
    msg.setSourceEntity(17U);
    msg.setDestination(21721U);
    msg.setDestinationEntity(28U);
    msg.req_id = 11032U;
    msg.comm_mean = 238U;
    msg.destination.assign("JMRGWNTFAAIWGJWRHMJXUNEDOHLPLTPOXCICVVKSVBRZWSPRFOEGLSDOUNHIQUIZLKYDIWFXCEHWYBGLKWPKQETXACHEBAXZBBVYICKNTVNXTXFZFYVMIYUSRQSPLKRYPQBVMUFEDKBHUJAHDZQVJT");
    msg.deadline = 0.5936191561761698;
    msg.range = 0.45901346291190714;
    msg.data_mode = 166U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 39U;
    tmp_msg_0.quality = 129U;
    tmp_msg_0.reps = 154U;
    tmp_msg_0.tsize = 153U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ACHECKNVMJHDCMRRFONVQHFZYFLXCQSDWXUFKFJARNHMZSNBHYDOOWAEAPXKNYMXBZWHHXJDSKYIUGTBSRXGOBYREMKOUKLIQE");
    const signed char tmp_msg_1[] = {35, 61, -56, -42, 118, 62, 94, 42, 66, 12, -49, -21, 123, 42, 29, 114, 52, 48, 84, -77, 99, -83, -38, 50, 13, 18, -43, -34, 126, -5, 104, -99, 52, 86, 98, -25, 21, 61, -45, -17, 69, -12, -7, 100, -66, -32, -64, -49, 35, 10, 88, -22, 26, -61, -68, -90, 99, 38, 98, 70, 10, -59, 64, 126, -25, -70, -64, -128, 63, -14, -110, -108, 75, -3, -13, -90, 8, -55, -68, -92, 1, 30, 78, -29, -118, -1, 70, -38, 12, 69, 14, 123, 99, -99, -14, 42, 115, 17, -40, -8, -5, -52, 82};
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
    msg.setTimeStamp(0.7199283241906126);
    msg.setSource(19482U);
    msg.setSourceEntity(118U);
    msg.setDestination(55529U);
    msg.setDestinationEntity(200U);
    msg.req_id = 48345U;
    msg.comm_mean = 93U;
    msg.destination.assign("SNFGTLNXWRURCHBZYNRIHTCEQCCDKVBRHRPYIOTZJHDMDOIMAJVDGKGNLNKYDDRKEXSZCLDYBEHSEWUXUXFFKJCGUQIWJKRAMIITGQYZIDMKCBNENXXTFSFVVNHUPBDEAMOQVKABIPJMAMEZZFFGHAIQETESQQMRVZJEQJPO");
    msg.deadline = 0.3806938951431005;
    msg.range = 0.4805300535516872;
    msg.data_mode = 148U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.4723774852063002;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UWYCEZWLDGKGKMJHBTOBYVQVCDSWLZYXPQKIGWCYGXJZSJHCKJUBAJRANOSNTHHQBNEOBLUITIERELFQXDNEHDCLACSAGWDGLNFXFEBABAFPRHAICSSWRUOKMJITLROIUHQIDYNMQUZTCKVZRZDXGSWFFVCUVMOHTUVOQRJWPKELOQPOKAYJMPRQUOUZNSGPANQAELELDNIXTDBBTVBMHP");
    const signed char tmp_msg_1[] = {39, 30, 41, -35, -107, 84, 19, 42, 125, 101, 69, -75, -57, 119, -106, -79, 50, 31, 45, 7, 122, -107, 97, -38, 74, 17, 101, -12, 52, 63, 53, 59, -77, 27, -34, 82, -33, 95, -125, 35, 83, -17, -114, 121, 28, 21, -122, 90, 85, 0, 119, -110, -41, 107, 14, -48, -30, -98, -104, -29, 114, 64, 112, 111, 7, 34, -14, 18, -68, 114, 23, -104, -116, -115, -22, 33, -48, -64, -7, 68, -87, 68, 126, -128, -111, -77, 31, 121, 24, -116, 31, 6, -123, 61, 115, 97, 2, 105, 63, 40, -29, -55, 75, 22, 48, 5, -123, 73, -105, 43, 12, -64, -4, -18, -70, -44, 17, 11, 21, 116, 30, 17, -25, 52, -83, 56, 105, -93, 32, -126, 54, 45, -111, 62, 96, 37, 0, 8, 5, -86, 45, 121, -2, 115, -117, 84, 22, 124, 41, -52};
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
    msg.setTimeStamp(0.06771860720431999);
    msg.setSource(47210U);
    msg.setSourceEntity(140U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(171U);
    msg.req_id = 35895U;
    msg.comm_mean = 207U;
    msg.destination.assign("BGYYZEBEIEWEXZVKBLNXCJHFRBSCTCDZLPFJA");
    msg.deadline = 0.967572454935031;
    msg.range = 0.9084200430704698;
    msg.data_mode = 92U;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2472483510U;
    tmp_msg_0.value = 205U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LOLJPDUSEURKNIHIAYVUGFMYKWPESWWUNHRQBDCBIBNTVCBQTKXBTMRPOZXSYHVGQMXIMWDJNWPIEBMGOZUQYLTGCGAEFZQHMYVXJLOIJKDCTIEWTJNPYUPVLWGCWHOLMHNJESCRGRZUAMJSPACYZJFXDHPQHXLCDTRKXBTEQFFDOBFRZKGSUVKNQIKQVDNFOXROVAFQMAWOISWBRCVSELYAYTXHTNZS");
    const signed char tmp_msg_1[] = {-80, -53, 15, -1, 20, -94, -95, 2, -21, 41, 116, 111, 28, -3, 80, -9, -98, 59, -67, 20, -106, 1, -78, -58, 18, -92, -111, -47, 107, -118, 105, 77, -102, 55, 126, 111, 74, -69, 62, -29, 72, -41, 28, -116, 6, 55, -22, -9, -84, 31, -66, -92, -97, 26, -34, -118, -58, 100, -59, -35, 24, -6, 82, 94, -44, 48, 95, -95, -39, -74, 52, 74, -52, 72, 118, 102, -109, -128, 3, 89, 79, 47, 119, -112, -64, -58, -80, 53, 54, 67, 34, -51, 63, 96, -57, -81, 9, -79, -113, -46, -110, -51, -115, -86, -70, 79, 108, -33, 35, 110, 112, 95, 117, 62, -42, 3, -11, 70, -12, 110, -110, -8, -38, 107, 91, -92, 72, -19, 76, -81, 8, 36};
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
    msg.setTimeStamp(0.6352020286831567);
    msg.setSource(35226U);
    msg.setSourceEntity(76U);
    msg.setDestination(51548U);
    msg.setDestinationEntity(51U);
    msg.req_id = 31189U;
    msg.status = 220U;
    msg.range = 0.523111491669432;
    msg.info.assign("JOMKAEBYTJJXCELRGMMYKRCHTMMXWZAWOVJTZECFJPOFSAZVEPBSMDEWRIUFAIJHBKTFGERJQDWBQVEICPGRFNLUAQGNHKOYNLKCIAQVOCKOYDASEBXLVYFGBHOTUQQRYWDURLZPXKWJUNVNWFULQRGPDMKGUNIBGAUPLSHYNZLCOTXBVSIXPIBDZVFIHJYIYSSLCPHXHSGMAQQEKMPOLVTUDJHWPFOIAEWNUCFXZBXDNMDGTCHYDVSTZN");

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
    msg.setTimeStamp(0.03964377013212994);
    msg.setSource(53023U);
    msg.setSourceEntity(241U);
    msg.setDestination(24730U);
    msg.setDestinationEntity(156U);
    msg.req_id = 44019U;
    msg.status = 112U;
    msg.range = 0.13012219687122306;
    msg.info.assign("XBSLCBDESIEUVAFQZRAKHVBSNGCYNGXIUIVSIIOTAQCWNNWNIXLGYNAIBBSKHUJLAZGJVSFOLHLMEFKBTFUERYXLXCOTJRLDJXXJEOMDO");

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
    msg.setTimeStamp(0.6792530057203969);
    msg.setSource(45485U);
    msg.setSourceEntity(23U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(201U);
    msg.req_id = 28143U;
    msg.status = 149U;
    msg.range = 0.2574569980972765;
    msg.info.assign("CBMMFDXQEVLMOGQRPZCWHHMHNBJHBYGIIWUASTAILCVAMFYNVZJAPLUTVAEJFGKJODYDJNGNLUCSSSQAIBTXEVUPQMODQWSSLIDAFROGYVRFRCCETXVOBZPBXUCAOKW");

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
    msg.setTimeStamp(0.35928008185925564);
    msg.setSource(35765U);
    msg.setSourceEntity(79U);
    msg.setDestination(33017U);
    msg.setDestinationEntity(112U);
    msg.req_id = 60964U;
    msg.destination.assign("WBIENZEYJCCZJOZFIRHBUFMEZXLIGBPOVLLPYBWTKWZOKCZOGKJEOCFYRUNSAABRNTEROIGXRICHBJYUZPIKYJB");
    msg.timeout = 0.02317277120693162;
    msg.sms_text.assign("ODUIBGLOFKUAZQVXHIDXRMFMMJSPTWVCXFFPLLLXBKLSIEPMPBCWSDULMYJNRPQAIZALTGZIWGNAUSJJEBATOLWZKDJPRZEDBEHNOSYMFVFFVGBCYHNVQKRSFWMHJMECARHHXZVXGUCVTJPCPNDUYIJYHERFYAZDQ");

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
    msg.setTimeStamp(0.9152883647598079);
    msg.setSource(33650U);
    msg.setSourceEntity(9U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(158U);
    msg.req_id = 48354U;
    msg.destination.assign("QUISYLVBSPMKYPPLWADPVGMPNVRXTHAEHYRIPCHWLIFQMNPJKCYWTZYFUSEZXYLAZXBMIALWCWTMOAMVLDRKEKFRQQBRYCVONMXECXAETZOOWUBKJLRRIFLJAJKGCDMHJFNDDTODUTZOTYFGLQXFVDEQKWVBNFRZJUSPOEMEHJPUBCUICXTIMNGWAYNKBQTHNZKEHLBWXO");
    msg.timeout = 0.9427400321434422;
    msg.sms_text.assign("JZOTOTZLAAJKWSR");

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
    msg.setTimeStamp(0.4841690792088207);
    msg.setSource(38127U);
    msg.setSourceEntity(115U);
    msg.setDestination(5357U);
    msg.setDestinationEntity(89U);
    msg.req_id = 35825U;
    msg.destination.assign("IHSSVLCBWXFDBDGPJRSRJLUPMXUQZXITMBOYFOXWASXOMZVJKYUQEVWHMSVMNXYBPULLHXPNKIEPAGRYWAXHRRFYKJSHENKGKSPTYZGNALQRHGQQCZABTBDOUMDYFGNFVDQLELATCKZTIFISPJYIJGDDWZCQGEPKTXBOUOOCEPZE");
    msg.timeout = 0.29297567989315587;
    msg.sms_text.assign("ZSGXRNOFYMWJGMFAXNTHUCDETDXHKTBCHAJCIWYPLBVEVNNCAXCMVGSAGIXPETTMASZCQTPRPDLJAHFOKREYAUHEVUCOJICRWRTMYYNNHQFJCJHYZGKQLMVZUWLZOIMQRQROJSIEJPULSVFFTQTDZVDFDSFUJXMTZXSSDPAWIWQVEUIRBVWGXQHLMNKRPFUGBEBMZQDSGKOLGUWZCHBAHIXOBRSYNKLDKWYPDENNZOJKLXP");

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
    msg.setTimeStamp(0.21168573861795104);
    msg.setSource(37442U);
    msg.setSourceEntity(13U);
    msg.setDestination(62788U);
    msg.setDestinationEntity(9U);
    msg.req_id = 48735U;
    msg.status = 248U;
    msg.info.assign("MBULDTHXWKUKHMOIXEIOLOVOPMLWTKDSSPAYOHWDZCNFYVAZGBUQMPCBTTCCPEKYRKLZKTNEDQEINGAUSQVPVFVVBAKZIDIGLZRDEIZJNRXADWVPMSYDQRBWIHAUPQYFXVXCMGEXOSXTNRALSQXEJJQWLJZSTHFTORUOBORNMNB");

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
    msg.setTimeStamp(0.6566463680153669);
    msg.setSource(45930U);
    msg.setSourceEntity(122U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(150U);
    msg.req_id = 3174U;
    msg.status = 212U;
    msg.info.assign("FGPEEWBZLLFVGYEJBZQDFMCXCJBGHVVIQYZRTXHYKKOONMUCOZARUEBVSOCPVWHVZBVD");

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
    msg.setTimeStamp(0.0033605450757980826);
    msg.setSource(5691U);
    msg.setSourceEntity(204U);
    msg.setDestination(45444U);
    msg.setDestinationEntity(157U);
    msg.req_id = 1232U;
    msg.status = 220U;
    msg.info.assign("GNWFMFLLLMFYX");

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
    msg.setTimeStamp(0.6575248544659356);
    msg.setSource(31696U);
    msg.setSourceEntity(28U);
    msg.setDestination(37928U);
    msg.setDestinationEntity(63U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.8555091433027573);
    msg.setSource(61455U);
    msg.setSourceEntity(119U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(216U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.6170697728115336);
    msg.setSource(27415U);
    msg.setSourceEntity(99U);
    msg.setDestination(13041U);
    msg.setDestinationEntity(61U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.33754963553984696);
    msg.setSource(55540U);
    msg.setSourceEntity(22U);
    msg.setDestination(64973U);
    msg.setDestinationEntity(105U);
    msg.state = 47U;

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
    msg.setTimeStamp(0.12421695087630114);
    msg.setSource(33327U);
    msg.setSourceEntity(150U);
    msg.setDestination(32976U);
    msg.setDestinationEntity(153U);
    msg.state = 183U;

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
    msg.setTimeStamp(0.7046965799506464);
    msg.setSource(40985U);
    msg.setSourceEntity(40U);
    msg.setDestination(28795U);
    msg.setDestinationEntity(86U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.14509665826618934);
    msg.setSource(3937U);
    msg.setSourceEntity(47U);
    msg.setDestination(48748U);
    msg.setDestinationEntity(83U);
    msg.req_id = 22144U;
    msg.destination.assign("SITVOJTXGNBVRTBHVRNDVRWOWZFHZDELFBJFVBARSZGPLCQDZJZELTUVWKELZOESHMVHKAQJGUUKNCIQKXBEUEABHRVEPFOSOAKJCHYOPNJTKCUTXMMSTFUWQYXODPWIZZPWNGHDMOXTXYKACAYJSVXEQIRQKDYYN");
    msg.timeout = 0.7145001088387956;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 21891U;
    tmp_msg_0.status = 230U;
    tmp_msg_0.text.assign("GMLZCJCONFAJLWQWDGPETSPEVSSENBIYYHIMOLMSVRTXWQPIJXBNPDZBJJOLQAYZHKUVYUKTQIWFTIYMUEWCESGRFDDOMBRHICAKMNRXBVURMZY");
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
    msg.setTimeStamp(0.9768125834652711);
    msg.setSource(49429U);
    msg.setSourceEntity(245U);
    msg.setDestination(65280U);
    msg.setDestinationEntity(209U);
    msg.req_id = 61882U;
    msg.destination.assign("BOCSAFAOWUFLXGJBMCUTBKJXVLGFVANQNZMFYPRZKQXEWATYXYCFUNFJPMQZURQBCADIWHXJVBYYKCDHXJRVHPNYJEVQDPEHVGTMTNDGLDUEUUOR");
    msg.timeout = 0.5308510647525291;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 32346U;
    tmp_msg_0.lat = 0.6690333428237052;
    tmp_msg_0.lon = 0.49548604527739104;
    tmp_msg_0.z = 0.5729479492102377;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.speed = 0.7045344210509789;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.roll = 0.3975826076693838;
    tmp_msg_0.pitch = 0.36551828936082653;
    tmp_msg_0.yaw = 0.8733858390446335;
    tmp_msg_0.custom.assign("HKBKHGWGYNTSYMRZOOPTYWLIZBWXHRDILFHQRZMZMXADOXXLCXQUBBECGMTLFXABQFPOT");
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
    msg.setTimeStamp(0.17261789690409346);
    msg.setSource(63582U);
    msg.setSourceEntity(55U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(209U);
    msg.req_id = 26811U;
    msg.destination.assign("EHZCGNIEBWEKKKUWHXFOPITBNQZDXVYOUAYUEXIMETQSLKBDDDUSREKUGFDMMVRGGDHLZMXSAKIEPKQTORVMALRCNQSMTLUXZWNWJOOVHKNBLCBSRQCNAFSWXFWGPTIBSAONVXMHJYXHZZBHTYWFCYQMVOTODWPCCNBPOVI");
    msg.timeout = 0.1830394531515125;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 58275U;
    tmp_msg_0.plan_size = 1437524511U;
    tmp_msg_0.change_time = 0.472847196826783;
    tmp_msg_0.change_sid = 25377U;
    tmp_msg_0.change_sname.assign("LZSWAAHBGJFCFGULOFPRWPYGLIHGIIKTENYKDCBEBNKDVNRA");
    const signed char tmp_tmp_msg_0_0[] = {-19, -15, -16, 54, 37, 83, -112, 108, 5, -7, -120, 64, -94, -29, 99, 38, 9, -76, -33, 89, -32, 35, -63, 108, 20, -64, 21, -119, -98, 84, 48, 117, -100, 49, 107, 90, 19, 41, -33, -120, 9, 69, 83, -101, -126, 69, -72, -82, 111, 23, 73, 7, -113, 54, 116, -52, 117, 124, 48, -34, 124, 55, -117, -77, -63, -46, -61, -59, -108, 38, 9, -14, 104, 95, -115, 60, 23, 67, 122, -91, -57, 105, -11, 4, 100, -18, 84, -90, -78, 116, -104};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("LKPKHFBBQQBKWGLVJNOOCQCNJTZSUNWQJMUTJIOPKMRLHH");
    tmp_tmp_msg_0_1.plan_size = 34330U;
    tmp_tmp_msg_0_1.change_time = 0.2710330098922211;
    tmp_tmp_msg_0_1.change_sid = 34639U;
    tmp_tmp_msg_0_1.change_sname.assign("VVARSDLYERAMETNQBVQBUPHNVXIPBOGKZTXOQGQJCKBNDNKKNGFIJFEKECTISYMKQCQAUAYPOENKSQAZRDISS");
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {-31, -111, -18, 77, 60, -107, -117, 19, -101, -82, 87, -82, -67, 95, -39, -35, -9, -7, -26, 0, -26, -11, 60, 41, -66, 1, -89, 101, -110, 58, -29, -61, -63, 44, -65, 91, 100, -53, -1, -117, 30, -127, -128, -108, 20, -93, 83, -107, 100, -116, 116, 60, -3, 57, -53, 117, 19, -44, -114, -120, 76, 105, 115, -46, -120, -52, 83, -107, 110, 35, 59, -22, -118, -118};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.20641418732657568);
    msg.setSource(24824U);
    msg.setSourceEntity(10U);
    msg.setDestination(60598U);
    msg.setDestinationEntity(34U);
    msg.req_id = 31063U;
    msg.status = 158U;
    msg.info.assign("JWRHUUHTBNXSQJWCDVZQZKHQSFAZJYBWLJOKHGCGLNOPITETMTHXARNCVUNBDRJSMIRBFKZVXLVYOIPPCMOVOWRQTPLFXTIHWRZIZTUUXFADIUFDZJYYHQDYWVNEEYEMFQNCWOGKSBPQCLBZWKROZFKAMXMRRZJGSTPFQJIAGHSMIERIEVPONUENANAALMGHGWEPBALJTBLVJCLOPWGVDXDO");

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
    msg.setTimeStamp(0.4711518110455867);
    msg.setSource(19740U);
    msg.setSourceEntity(157U);
    msg.setDestination(24836U);
    msg.setDestinationEntity(156U);
    msg.req_id = 52030U;
    msg.status = 217U;
    msg.info.assign("YINGFEFWBSOWWPVHKFXVMWNZXKGIFDBNHCZWSYEZLXGNUCSUNZQJHQGYGMGKJDCTJEDTQDMKXJDMSUIXFDKPJUVRTTSQTOMIYLJBDAOPRFWOHCUJYIXPBMCUYJUPLTIALWZROOYSSLENQCLODAFUZRWNVEMTMNXHRRIFHBQBQNTVVBVPNGGP");

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
    msg.setTimeStamp(0.39208251265950445);
    msg.setSource(9839U);
    msg.setSourceEntity(69U);
    msg.setDestination(64397U);
    msg.setDestinationEntity(122U);
    msg.req_id = 61893U;
    msg.status = 20U;
    msg.info.assign("RLJGSZMAPEGNRLCWAIRJBDWDTBOMOFVCMZJHQOEXTCMLXDEHJNFSQYWTKGICULVEPOLLIAGKHQLNRWQFUMSQNFVMGGBVEUXPOSZYADSVDEOZT");

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
    msg.setTimeStamp(0.11099454159520283);
    msg.setSource(1518U);
    msg.setSourceEntity(145U);
    msg.setDestination(28765U);
    msg.setDestinationEntity(183U);
    msg.name.assign("JIDZAEPPAQQJQJZILBYKLOTTAWTOEOVEGOMVCUPPHMFXRHDIMYJZFPCUDJEYSSPWSM");
    msg.report_time = 0.866237587919614;
    msg.medium = 196U;
    msg.lat = 0.36248528523791235;
    msg.lon = 0.4230360343036842;
    msg.depth = 0.2942126808506327;
    msg.alt = 0.07760696303944814;
    msg.sog = 0.4902440576909447;
    msg.cog = 0.5588220041721451;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("EAKOFGBCNYYZLTPESYGE");
    tmp_msg_0.report_time = 0.6013667572372469;
    tmp_msg_0.medium = 3U;
    tmp_msg_0.lat = 0.8276479995852708;
    tmp_msg_0.lon = 0.6658727258944078;
    tmp_msg_0.depth = 0.8298284885067063;
    tmp_msg_0.alt = 0.11851029049069284;
    tmp_msg_0.sog = 0.6628806317986058;
    tmp_msg_0.cog = 0.2064457837286623;
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 3015163479U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.13317288491642965;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.8237258755629774;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.9730280939847892;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 133U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.45231689505816275;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.6621968561783194;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.2634534036940931;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 232U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3363679649393062;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 189U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.39405914279021914;
    tmp_tmp_tmp_msg_0_0_0.flags = 173U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 8914U;
    tmp_tmp_msg_0_0.custom.assign("NFQFIOPIORZIGKXUNUNWAGABSNGELKHLROBEUTPPHXUZXYJFGVUHQSHJTEHRWZEWZQJFHHAGGMFYTAZDJAIDCFRTRRMBWZLBEDCAJBWRVYJMQDGCOWPOBYLIMSUERPMMKNIWUNNLLIIKPZJIECUKDTSGXOVDSBREKAXT");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.976370159947919);
    msg.setSource(54314U);
    msg.setSourceEntity(51U);
    msg.setDestination(22037U);
    msg.setDestinationEntity(218U);
    msg.name.assign("BQUOFABVTQXGMULPAOSZNKPLSEUBSTTSSUYLFPCCCQYNIRGFFJVDMZGZVGSPXXXAQVHHNKAWODZNJLIHYGPSDOYWOHBCEYAQFZWSZEQBWRRTE");
    msg.report_time = 0.07973061251842539;
    msg.medium = 81U;
    msg.lat = 0.1808568719047695;
    msg.lon = 0.9449681767477845;
    msg.depth = 0.7044301362641742;
    msg.alt = 0.7535546916870235;
    msg.sog = 0.18768427752777772;
    msg.cog = 0.13998603591790482;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 11U;
    tmp_msg_0.period = 2263881651U;
    tmp_msg_0.duty_cycle = 148699653U;
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
    msg.setTimeStamp(0.05855810770587744);
    msg.setSource(59253U);
    msg.setSourceEntity(103U);
    msg.setDestination(57618U);
    msg.setDestinationEntity(112U);
    msg.name.assign("WTAKUJNRBYNFVGURVEVJSAFGMWHTQDPDWZBWDUYCADJIDJSYNLROMORDSIBIUSSDMXQZWAVEQPHHWFIKFQTCPHCCRPTOECNERUOGPXUQWYGKAG");
    msg.report_time = 0.009580483454178834;
    msg.medium = 61U;
    msg.lat = 0.668708005673923;
    msg.lon = 0.7498543191115149;
    msg.depth = 0.5173658780655467;
    msg.alt = 0.22721867921542116;
    msg.sog = 0.11909360114236311;
    msg.cog = 0.08706255564902876;

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
    msg.setTimeStamp(0.9512180549152031);
    msg.setSource(60183U);
    msg.setSourceEntity(2U);
    msg.setDestination(51174U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.42537788606408367);
    msg.setSource(37294U);
    msg.setSourceEntity(67U);
    msg.setDestination(5009U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.7393757996495904);
    msg.setSource(3699U);
    msg.setSourceEntity(18U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.3057415643786332);
    msg.setSource(8326U);
    msg.setSourceEntity(106U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("MFZDKTXDERLZRCDDMMSQWTZXWOJQNABBYYBXQJYFJERCUUMVPCLHUQOXOEEQKGFSFHISTFUQLEAZBSYKXCRNIJCXPUFIAGCOFDPOYAZDKAYTMKAHALDUKHRLLPYLIJWVCVGPIRTFNTILWIYBTXIJECSMOSWGNPRCWEHSGIUTOVUNROZVNIOVPXKPGUNVQZBBDQNAHHXFKNLJVBPDUVYB");
    msg.description.assign("OGRZXCERHEYHFBHDJPDLSNPIWSVNGYWHWIRWJGSSUROUBUQMAZCIYPDNZWFADLYTOYRLOVJXAPGHKSLOKZUBSUQQCVTQPYABLJEPTTDGCMFWWJXADSLHWAGMAOQXDGOEKXNHJLCRVHGMMEOTZNVKBKGYBPVUJWEZUTUEWFZLIIMZNFEBJDCFAIOCNEY");
    msg.vnamespace.assign("ALFWGXBQVPIESZCBUHNZECGIH");
    msg.start_man_id.assign("VCESTVJMORGDBQLYLMSKOIPBJCKFSXWWJUPDDVYYZBPJTRERTBET");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 244U;
    tmp_msg_0.op = 215U;
    tmp_msg_0.err_mean = 0.708738455593484;
    tmp_msg_0.dist_min_abs = 0.5643738837278345;
    tmp_msg_0.dist_min_mean = 0.7734525806111272;
    tmp_msg_0.roll_rate_mean = 0.8186641658158863;
    tmp_msg_0.time = 0.39031114039904047;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 209U;
    tmp_tmp_msg_0_0.lon_gain = 0.9118360169206149;
    tmp_tmp_msg_0_0.lat_gain = 0.7846865187627563;
    tmp_tmp_msg_0_0.bond_thick = 0.39472064386613903;
    tmp_tmp_msg_0_0.lead_gain = 0.2647496433489902;
    tmp_tmp_msg_0_0.deconfl_gain = 0.394900652521615;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.01566059241701656;
    tmp_tmp_msg_0_0.safe_dist = 0.8170174546080854;
    tmp_tmp_msg_0_0.deconflict_offset = 0.05875129045078442;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.09665061675617259;
    tmp_tmp_msg_0_0.accel_lim_x = 0.2861586053252305;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.start_actions.push_back(tmp_msg_0);
    IMC::CommsRelay tmp_msg_1;
    tmp_msg_1.lat = 0.31321951340324994;
    tmp_msg_1.lon = 0.5811548532162067;
    tmp_msg_1.speed = 0.8139335796907539;
    tmp_msg_1.speed_units = 25U;
    tmp_msg_1.duration = 40896U;
    tmp_msg_1.sys_a = 55973U;
    tmp_msg_1.sys_b = 6787U;
    tmp_msg_1.move_threshold = 0.571547968382108;
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
    msg.setTimeStamp(0.3547564650747489);
    msg.setSource(52771U);
    msg.setSourceEntity(23U);
    msg.setDestination(29519U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("BAIZYLPCMKEIYSGKVKZRCGFGNUVNSLMNLUGQZNWCGNYHSCOTWWYOOQPHTFPUEBRESNVIAFNZYDLJMPCVKDUZXOOPQDXTHHELQJWQBPBMLDROKDJMVGSAIIZTDQKFWTLKZFMVVVWOUTPCXXRLRBRNXTJBHTWUYAZXIPYTHROQGDSJWFRDLYDLMYXXKHAAEQJECZHGVZOCMIUSSAEEVJOWRNXBPBQJDHCSPF");
    msg.description.assign("UFCAJJVXLPPWMEJEHLVMCCSKZZPVCV");
    msg.vnamespace.assign("IUDLWJIZKOQQZLVSAEVNMEXYKNMYETTGTLDZOJRNHIXVXHRBPCQKLLPTBOFEUHNENERTSDZAQGMUCFULLQIJEOIPNSO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FETEVQALCAACTEOVUUEFZHTESJNDTLMDIJXAJENSSORNMG");
    tmp_msg_0.value.assign("YXAQCSOTSNSPDRMOCZFFZWQVTDTEDUHKFMSUDKZUGENYXBGSKCWUMVDLVBCGETOZKEHKFOKOLYGZSAKDFOVKWGAGJWBAIJKAJTYDDQFGJOYZUJRPIEVLSWNWQAOYHALIFHGRQAHYMBAJTPZPGMXVCEBINSTQCWVRJXTXTUXXEYZNJUELHRMMTCMDQBBKMIEFPPHMSAPWIEQRZWVSCBQRLXBIPVHNYJNWRQRIXLUV");
    tmp_msg_0.type = 210U;
    tmp_msg_0.access = 63U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OEZAXATAZOJFLVDEWXVWYMK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IKMOPBCVDQUELODVQTDXEBNMJFRENIPJBKMWZZKHJQKWBLTYQAUALSUGVVWKSNIRKOLXRXPEDKIIMYJSRHCSYVZJXVHBHXKAGTFEFWDZNULUFCWTGCRAYJKCZAPORFYYXJZBUEGVHFQLBVSOLDRTSWBLNNJHGLOPBMAIFPWBVDUFCNPMZESKZIRRJHMQAYYAPVIQFSNMYTGDPUMCRWTDSTWUOHG");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 45305U;
    tmp_tmp_msg_1_0.flags = 53U;
    tmp_tmp_msg_1_0.lat = 0.1430881413055347;
    tmp_tmp_msg_1_0.lon = 0.8911013533918491;
    tmp_tmp_msg_1_0.start_z = 0.6413850376742732;
    tmp_tmp_msg_1_0.start_z_units = 13U;
    tmp_tmp_msg_1_0.end_z = 0.9772814244346216;
    tmp_tmp_msg_1_0.end_z_units = 175U;
    tmp_tmp_msg_1_0.radius = 0.5982956841837075;
    tmp_tmp_msg_1_0.speed = 0.09405972368459015;
    tmp_tmp_msg_1_0.speed_units = 192U;
    tmp_tmp_msg_1_0.custom.assign("AECRFPUONIDXNALEHPKWXUSCUTGFNFZIQTILNGSPSJYQIGLGDNBIEWMV");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LogBookEntry tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 208U;
    tmp_tmp_msg_1_1.htime = 0.8839772549044222;
    tmp_tmp_msg_1_1.context.assign("AKNRPGGXPSELRZNPKPMTYQZGOSAHVYPDWJIZBFSVTCRBZFUKGZNEFOWOIXHTQKQTSCLYELZVKOEGBTURFAIELULXHKHODXIOHIFMNESFEWFCRICYSJQDGDBETKPMPWMUTEVCJADGQWNIUJFGRCCJXXRIYKQRBJKGSIUYSCGMWXBSDWSZYEJBHYQPNOJZJUMAWOZHQMXAJHNPHVQDO");
    tmp_tmp_msg_1_1.text.assign("QSMMMSQYUOHNDHXEGHGSQFRIMPLBHUEIACJOYISWANNMCQDJVWSBLGBCQXPIZCAJFAPZRSEXEZJBNJIKJCKHTNDPDOGSKTQHNHWZGUYLEFYFDOWAGTLTIEMCYVKAVRTRBBEVXKFVGWZTWPVHLIRNFNWZQJVQ");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LTAAZWTRFTPKKJWPUGYODRREYPJZMYUIQABATIIHSRZUTBCIFGBXWVXBQFXNRIYDMNHPBZZMEQOWQXQVZFPNVILJNOHULQEYKYIXITLJDJLFSZDA");
    tmp_msg_2.dest_man.assign("VGLHXLHECQVOATJFGHPRUQQKUGPQYCDRRXYMMLYWWWIYCDOYXYXHBIEJRZKZGKCNJZAARXQRIQJFOVNXNLGKA");
    tmp_msg_2.conditions.assign("MWUQOGYRIPEEHWWOYY");
    msg.transitions.push_back(tmp_msg_2);
    IMC::OperationalLimits tmp_msg_3;
    tmp_msg_3.mask = 238U;
    tmp_msg_3.max_depth = 0.05530069461078879;
    tmp_msg_3.min_altitude = 0.10265252506793932;
    tmp_msg_3.max_altitude = 0.9399647404759759;
    tmp_msg_3.min_speed = 0.965512924761621;
    tmp_msg_3.max_speed = 0.7518479924271098;
    tmp_msg_3.max_vrate = 0.7800651048673043;
    tmp_msg_3.lat = 0.6069975301597768;
    tmp_msg_3.lon = 0.008991973924051266;
    tmp_msg_3.orientation = 0.902621035415963;
    tmp_msg_3.width = 0.007957374766279113;
    tmp_msg_3.length = 0.5567546606980807;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::TransmissionStatus tmp_msg_4;
    tmp_msg_4.req_id = 48410U;
    tmp_msg_4.status = 15U;
    tmp_msg_4.range = 0.2157258509152319;
    tmp_msg_4.info.assign("SGVJXMDXRISBFSZHRTYWTBQFGKTLLWGBGDYDRRLYEJMBUEDUIYFIXUJQWTLPIQBOCSYONBOXUVZCKKGTHNINDOQIHKCWMKDOLHGUFUPZWUSHHWTGLEUAAOINUHKZQEVBKIPVMXEDXPKZWRZFTNDGMRBGEEVNMBZCVOLXCNXMNBOWLQYAAPAZEWZJLCIAYSNCJFWHIDSKJRQAFYOUJPMJCLFSVYQTVRFHOVPNPCAGDTYEXRKQPXFV");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.3973679988860932);
    msg.setSource(37864U);
    msg.setSourceEntity(122U);
    msg.setDestination(50449U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("ROKHZSABPOQKQWNPAZHMYGZVMKUTFSPUQYGWOVLKZBJTPSDJXCOU");
    msg.description.assign("REJNVKVUOXTZMTWDAXJOEIWEHXPSIRBBSWQFZLKLTAMWETRXUQPKRWMNHZFAZHINCNDCZALDRERSQZZOMQWGCDSSMGLGCPDSWQNHJMJGJGTHXBKDHPIGLFVPHYOCOPYWKFVRYKISOPBXODQBBIQFA");
    msg.vnamespace.assign("ZJSONQOVPXRPJDKAWQTREHRAPJQYCNWDBTXGVXAKYJANIFGSIWLLWGVTYZULSTWARSDSTEVVSPPWNVXZGCDLAMLHMMKKYVULQUFRTHKSRKSBKRZDYEWMOQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FPUHNLEEVINSTCSPZSYJLHGDJVGMIHOPRZFTJZVGHMBWAOFRHHEPNDNEGWSTZZHUXCYTPDRBFSVLKGNNEGZZAYJVFWDUNXRCUTHQMOOAQXWWBIWJMYDEKKGVJOXGYVFXKIMJMYQVIJXTDIFQAIABOCIEQBWZUKLSPALWBCLYRRBKKDTMLPQVMQCSODHHRNAOACUIBQGUUMZTBSXUCKOAJNYRWFXKDIRCEZNSXLTQEUYPRDKCXTLFOEQ");
    tmp_msg_0.value.assign("CDQBGASHGMTPOHYFKQJGZYLUWTHQXCACWRDNCHHKNMYVQOPQXSLPUVXRPOEXGVKKZIYVCDJUYLALVTBMNEAESYDGXAFHPLZIXJFKVVFGZRAMSYTBEIHFQNPVMZRCAUSCIJEWNPITKSUSDMBEBPPDJRNXPMWWFBEBBHBOJYFFCZUEQGC");
    tmp_msg_0.type = 180U;
    tmp_msg_0.access = 205U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GLWSETBHUQPDVMQDXGWQMZNVIXUBJAQXISNQZBLDQRCEZLOYSUKMQJHUJIMKXCLXRKPZEOMHFUXNBUORGRIOSIRVZLAAGCIRPNMSLDYVFSINWQEKJUWLEIZOJHVCSKWSWXSYRUHTRPTGRNWYXUVJWFEPZAIDCRTTNODFCQGLQFHFPOVEPNJFGYHNCWTEKGZVNGDZPPBBPSEDKHVOTFJYYVGOIM");
    IMC::UsblAnglesExtended tmp_msg_1;
    tmp_msg_1.target.assign("OJSRLTPWZNJDUUXSDPJVBZGPKOLUFDPNXFZAIFLUKFKTEZYMTUVVDAWSEROHNVGDSIGXBOVKRQBYOGKRPJEFGAIIMZQVNMASZCIQYJXQQVMHCQZJAAGDGSXWUTOLRBWLTCZIKERDCQWIEHWAJMLBXHXNSNFEGQGJHSKAKHHLBJSYCMUIYPPOUFONLLUNWTOBMNHMHIEUTRPQBACTEADFYEQXWZCYOZYJCD");
    tmp_msg_1.lbearing = 0.39702126624982714;
    tmp_msg_1.lelevation = 0.2646934308179154;
    tmp_msg_1.bearing = 0.43210468006005665;
    tmp_msg_1.elevation = 0.36348017792065757;
    tmp_msg_1.phi = 0.5278955097386582;
    tmp_msg_1.theta = 0.16350086772618033;
    tmp_msg_1.psi = 0.9278361750996029;
    tmp_msg_1.accuracy = 0.49602643034206084;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9572103719936486);
    msg.setSource(9849U);
    msg.setSourceEntity(114U);
    msg.setDestination(16645U);
    msg.setDestinationEntity(213U);
    msg.maneuver_id.assign("NRNEZCTBZTGJPGQSBIUSQWCYARHNNXKKOTNFVAFPBUHZJKVQEPFLGKYUDJHKPODAYARNXMCTGVIWKMOHKFWKCLBWFWYJPWXBOOCLNCGFIAULEMQPMUYQHVUTWB");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6528250290003221;
    tmp_msg_0.lon = 0.7117524790515667;
    tmp_msg_0.speed = 0.0735553851953562;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.duration = 8133U;
    tmp_msg_0.sys_a = 26107U;
    tmp_msg_0.sys_b = 3946U;
    tmp_msg_0.move_threshold = 0.9361722155964436;
    msg.data.set(tmp_msg_0);
    IMC::Announce tmp_msg_1;
    tmp_msg_1.sys_name.assign("JXJEQBQWDPYDZPQVUVKJCKSFMWBTKITPBFTSXDBCZYZAGURINVGLSEWXTRRAAYKFBIJAEZWGXQNANYIOPAARGRKSUOJOSPBANHERRLKVGSLLUHDP");
    tmp_msg_1.sys_type = 35U;
    tmp_msg_1.owner = 14352U;
    tmp_msg_1.lat = 0.4868294970720365;
    tmp_msg_1.lon = 0.256943214395829;
    tmp_msg_1.height = 0.24966344791941453;
    tmp_msg_1.services.assign("HPQNPTMDJMVATJBKRUUOVJQQKKZSGQHCOMXFVNAEMOFQHCNLADYPGDJVXXEBENLPGDXNGZIFWRYSKPYIGHKRREBFLIYKEWYCLYTSKDTFNPIWEDAMSUAIQEWYKIQCTNLZRHYTGEDDUSABXSISBNGJTYOVUJYCVHJUWEOQVAAFOSNPIRVOUJNXWRJGZLSZZBCWCXLQXZTCLILMQEMWZUBTKIVOFXTDWMGJHRHSBFBDPVZAMFO");
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
    msg.setTimeStamp(0.1126594854938191);
    msg.setSource(28723U);
    msg.setSourceEntity(223U);
    msg.setDestination(57747U);
    msg.setDestinationEntity(41U);
    msg.maneuver_id.assign("SMRFGRGRNNSHWTRSYMVZHJRAVFRTPYETXUFDDCIMIHHIBWJVYCWYPNWJABCUKLQDKXWQXCLVJCYLQDZSTOCGZSPCVEMQFXQOUMAPVKEMDNKDTJMKTIALQOPBYWXTRGYVSLQXCVACNIBAJEMFULFMXEZAIOR");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.44778800428460785;
    tmp_msg_0.lon = 0.9149912171126147;
    tmp_msg_0.z = 0.5465793094436268;
    tmp_msg_0.z_units = 156U;
    tmp_msg_0.radius = 0.15423372417807757;
    tmp_msg_0.duration = 51381U;
    tmp_msg_0.speed = 0.09176222491083708;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.popup_period = 53548U;
    tmp_msg_0.popup_duration = 61968U;
    tmp_msg_0.flags = 143U;
    tmp_msg_0.custom.assign("PBITCXJDDLZLXDJRXQSFNQREOYHQSDRUWTVGYNZDBJUNUDALQOSWMFXPZSGUBTJENZVHAFVXKSNEKYFEZIMADXDZOHMXXWHJPCWKMKLXISAGELBOO");
    msg.data.set(tmp_msg_0);
    IMC::ReportedState tmp_msg_1;
    tmp_msg_1.lat = 0.10368074494000745;
    tmp_msg_1.lon = 0.07619700380033745;
    tmp_msg_1.depth = 0.5059232574300823;
    tmp_msg_1.roll = 0.31340864673581403;
    tmp_msg_1.pitch = 0.02599632647772021;
    tmp_msg_1.yaw = 0.11791243540974794;
    tmp_msg_1.rcp_time = 0.13298479250712147;
    tmp_msg_1.sid.assign("KFRJZWNPVCRMIMUOZTOWLQBSYOTQKKQVGSFHGVPXVDMGAGTHUVLYDRCHBRDCNOFZUDUSRGJBFKMIBDQDUTFNTEEKAHPDPLAAWCJWIIXYCHOXOSEBAQIROMLDIIKPYCRPOXSNCBHEZUGESZOAVZLXNVFILUWRDKNWAFTMNYIEWTJRJQYYEYVGKZBAXWQSQMMDVP");
    tmp_msg_1.s_type = 35U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.41826092558925887);
    msg.setSource(44111U);
    msg.setSourceEntity(45U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(194U);
    msg.maneuver_id.assign("SBHZKLIVOANXKVZRNAPQKEBVVERQXOMOWQBMVBXDBTOUUSIOBFHKEZQWABYHMXFWFUAHDVLJNYWIPPUJKHAQHPDRCZCVMLFSNVPKJMCLAIIXJUNSCTFARGYXWJUXGMLWZLHYQODYOWRMFCRSJERDWTKQEQNGPULKBCHUASTYTYPPEIFZRJTQCEUPCDYLXTGGAIGKGSEMDPYJWFZLGEUXSVMDOCWMHGNFFIRJDNSXHEZDYVBZTTILIBQ");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.7792290780064723;
    tmp_msg_0.lat = 0.19427544107099992;
    tmp_msg_0.lon = 0.9526852057786487;
    tmp_msg_0.z = 0.7576916531924698;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.travel_z = 0.43038523806827433;
    tmp_msg_0.travel_z_units = 36U;
    tmp_msg_0.delayed = 172U;
    msg.data.set(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.8700052053941186;
    tmp_msg_1.confidence = 0.5203560969586215;
    tmp_msg_1.opmodes.assign("FWBREIVNFKKBQMZLILRFLMBWHXDZCAJXRKSMOUTCZDQPYJMHZV");
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
    msg.setTimeStamp(0.16885437057770059);
    msg.setSource(58240U);
    msg.setSourceEntity(197U);
    msg.setDestination(18671U);
    msg.setDestinationEntity(221U);
    msg.source_man.assign("OFSXBSKYCXEPJOXYIONULUHBMACMMXIGWHLTRDTA");
    msg.dest_man.assign("YQKIHJGDVPNLZULIEVRLILXCVXNECDCBXFFGDKIX");
    msg.conditions.assign("KJDWVGUYTNMEYBQYMZBKMFXHMWFSPLDDF");

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
    msg.setTimeStamp(0.3755617739681302);
    msg.setSource(12462U);
    msg.setSourceEntity(71U);
    msg.setDestination(41096U);
    msg.setDestinationEntity(86U);
    msg.source_man.assign("QCCATZFFTDXIFWJJDNQMMSJIX");
    msg.dest_man.assign("NBZNUDKIPFYSCCVULQDDQSAOUXRESTCCWPBNHKGCXDWNAVMQYZWOTWWWLQOHEDETBXHESIHGDKLJCIYTNLYECUCNTFZVOCZSRZHQGUFAVHWJFPGTUROFHBMVMPJNGTNKYTRBGLJJADPRWENREIPXKBMJHZEREFXUQRBIIUBXYGFCJPDZPXDWA");
    msg.conditions.assign("BSJBVSBLCJZPEDYOOFVGCHNWCIJWTDIPQKMSETWIA");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("RKYMMBCSVARUGYROOQGESEHTOIHUDKWVTJDPXMGZLEFZCDEZZFWDBPIRYOZWAGTXREIZYYEXHLJFPKULVJLKGDUKWWUTSJUZTWIPOSBFJGRIPHCILYYESQRBALKJFBXNTDAQSMKQCS");
    tmp_msg_0.value = 127U;
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
    msg.setTimeStamp(0.3344962178545794);
    msg.setSource(634U);
    msg.setSourceEntity(243U);
    msg.setDestination(13803U);
    msg.setDestinationEntity(241U);
    msg.source_man.assign("JDRXVXPMFKVHTEMJFIOUNQGWRLZYBTWYZTYBQWKLEASQVSSEYGDGMEDITPKJXMOLWSW");
    msg.dest_man.assign("YCHTRITLWEBNMENMEPIOBZJXVXGMGI");
    msg.conditions.assign("DSHGZCLOLIQJWUIXLGTDZNNEJLPINMJCBXKCPUTSJCVEBSJRCXNMFSWYHYNVOWCVMTDNFBOHVBZHUKGRUXWDARCHWAAQEUFZVZPYVQGSQDFEWHACIGLYMVTNEASSGZQKFNIOWSOBRZLFKEHPQPKBAKTUTMHWJDALGQYZMDUODYZBXECWCRMEI");

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
    msg.setTimeStamp(0.8533366209357306);
    msg.setSource(58605U);
    msg.setSourceEntity(128U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(8U);
    msg.command = 203U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ISOWMXCYRLDCKIEZNWHTYKOSVUENSZAJXKYGMWQSKAGMNDFOTSZOLSUMTGGDBNNCZVZAPJKJISGDMNCFCLRVCELPHBIHQYMDEFJMFWPXZWOXNILPRQXDRBYQNTQRHCOGYQUXJGNKRDWBFHUIMLVCRFAHWUSHDAPQYJPBCZXKFQCALELOPDUTTBQZJTYKUBHPPJFUPXESVHVBGAFBRIQITAOJGKIZEOVETSRDTVUOGRVZHYJBYLWMXNAAFWVEWM");
    tmp_msg_0.description.assign("BJFSKLIUPDPBUCVQQJOWONNQROVAAJTFWHRICDDREIWNGFPQEJNABEKEVBNTKYIMMMMJEDYI");
    tmp_msg_0.vnamespace.assign("VCRGNLSVCXZGIHSCUTGKYLGRREBVPNWHSFKUCOWXEREBXYTOOWTMJSZVQEQHOLARMIWDCODGKLQFMLDTNIKCTDLFGTIPRNADDZSONAIKAWQEOEEZSIVFNQIRYYPPNYXJERLBVPQNTXXMYGLCJUBAMWHCCPAFAPPELZCIMMUVRQNVZHAQGWNYBSDHPBYJKUQVYSASODBIUSHAHHBJXUFGRIJZTXJXOWWMKMLOUDFTUGK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HQUOTWQBADZVJKHNBSADJICHDMVPZIOUHTYJKTRREYJRHKXCWUREBNNZVDCFYDOAOJCKJMGZQNSMQGEW");
    tmp_tmp_msg_0_0.value.assign("LSZCKPQGHZHXHAWEMQQEBKJUQCVUVVNTDHKERMJUWMWXGWXHSNPYJRTDRSQAGBVSOVZNTTIPVYNEKIWUEDOEUJODCLXJGMSLLQWKHQA");
    tmp_tmp_msg_0_0.type = 221U;
    tmp_tmp_msg_0_0.access = 134U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PAOLKPMLRUVQFRRJEAFCPEKIFGBPKMJIBIXKNJNSNLDTDAFQYRBERSAZMYMFNQWMGX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UGRLRKRZMNXMRZPFDFHKVNMZJOSSAUZLJJOJAKEPZEACQKLLOEHQZWFQNDBPNIWXYIMVHFBXRTVNNBCIOXTJGHZVUQPTRKBIAMDRKWSNQAWYMGBGPCKHAARJUXXJROTVYTSTAYBWTFIMCPQFEOISUVOLRIEYIFSJVQGCYSXXJEGEEIDOKVCBBMNVT");
    IMC::Launch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 5454U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.2846418296875336;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8755899099554342;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6786694152542443;
    tmp_tmp_tmp_msg_0_1_0.z_units = 161U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7781566489203595;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 46U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CEMDYLOOYQOCFSEFTCXIIDZIXXEATQALEFDNQDHNVJQZRPVBNHKQCMONYTSCKGQQAOIMMFPJFUGEYRU");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::QueryEntityInfo tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 139U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XDYLPIEUDYGFMLWZARNGLKABMHHQYHYRFUDQUEXIYIH");
    tmp_tmp_msg_0_2.dest_man.assign("KUWYMARLGKWFSHBUPGVLPZQIWLZGQHLDPRRUEWRONPAFGDSXLLKKGYNTYCEOKIHFIFVLCMOXPBNUQJZPJQYHFREABYFIZBHKJHENHEVZMGKULCTLGEDOWBACUXBAQWZCRVIVDVDGQRJSXPOFQUTBKGMZAQUNVOIQXZJWURXFPZWDWESMXCAFTCOAJYAORCMCPIUDMZADBKXJKYXMNCFXSYTOWOYDESE");
    tmp_tmp_msg_0_2.conditions.assign("KBVGPHBZFWOFYJLMHDIOXQGHFBHBBMQSIKKRHCXBLFMCUAJKIDEVXOESTDHNCYDWLDSAJDTOFDQUCMYPGPZXTKZLRYDEGVLFROLECGQNVVQCVVKZAAZAURQQIJWLSKEGNKEXTPMKBPWJMRIFPCZWNSPJJTFDOIMIFNRXEUMJIHSRAWTKSNLSVQVEHXXRYVSZYPADGTZGYPNE");
    IMC::UsblFix tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.target = 6098U;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.18345496834807828;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.04277197253880749;
    tmp_tmp_tmp_msg_0_2_0.z_units = 175U;
    tmp_tmp_tmp_msg_0_2_0.z = 0.16732492230920792;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TrajectoryReference tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.r_x = 0.7903104754674892;
    tmp_tmp_msg_0_3.r_y = 0.8467618256982625;
    tmp_tmp_msg_0_3.r_z = 0.2243624318323485;
    tmp_tmp_msg_0_3.v_x = 0.49565888278588;
    tmp_tmp_msg_0_3.v_y = 0.7240395040371719;
    tmp_tmp_msg_0_3.v_z = 0.18740378140968117;
    tmp_tmp_msg_0_3.a_x = 0.8939274700307853;
    tmp_tmp_msg_0_3.a_y = 0.14289232290727383;
    tmp_tmp_msg_0_3.a_z = 0.36692191648786243;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.1864289828111253);
    msg.setSource(5905U);
    msg.setSourceEntity(16U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(152U);
    msg.command = 49U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CPXRFDWBOKIYDEBNXMHPOTYCBPNCMJTQVKZMPXFDKAPKVPEGUISWBDWCNAYBQRHAPHARVGCJHCFVSHQIHVRFJDBTMQGMSANSYEOFLEKNPKL");
    tmp_msg_0.description.assign("UVMYPXFKXGJQTVTDFYYAGLTRVBOSXSAHURQXCROWIHHENLQYVMHXQYHSSIZPAKICEBBGVWZFPVZLDADHOSNJPXU");
    tmp_msg_0.vnamespace.assign("KHMKSFBJYDLJQPIMKFWOVSLNAPVDGTRTTXZCIZFLVTHDPQKTBSJCMXYHXLNZGARVXQAVYFEPHESNHGRQUYGKJVFNQOJEROZUEFGUSWYVGJFIDLRUXJIIHSKFYWLIQBIBXDJCSRIWCBUMYZWRNBZYKPPBTALEVMMSQEAOTOCSCKBWZMEXBXDZPMLRVZJRLUQSGYNJTUDPGWOFUQDTANWNYKXCU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AFNIBROGVSWCRSPAFQLATUPOLEXZBFGCZMUOYLMCLRNKATEEWEPQIJPBKWUCSFHADKMPDSOWQOPKFWYHHEIFZITNPCSXAIOMDSKHGNRUFGVCNOXDEDVWJASYBRFNITDMTDGHFJOQZSBCVPKREHJYLNSTVEHYDQGIIJLVYCEMBKNKTQRULQLZTBVXXXYZXCUULYIZBRW");
    tmp_tmp_msg_0_0.value.assign("WRCTQLILOZESIQRYVUSFGBPHCXGAYKOQDMTUHPJPPZVQNWIEOGBIRIUCFHWVZAQUNOAEMNBMALMKTYMIWODFWWFDJNFRJCBKVXVCOGXUABIUFACIHVVEMXNHSYPM");
    tmp_tmp_msg_0_0.type = 138U;
    tmp_tmp_msg_0_0.access = 136U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IDTBTAFAUCYPNHMLJRQFXQAMQUWJGHZKIPNAAJZFLWWRJIWTGGWXYCZIKTAGJBBXXCTIQFDXMVVIOYSDUMSMHXXCXSNQKUGLRHCULYTPCBZAJHCOUYSZFQVTDVBUBIWEXKHXNDPEUBLTJRAVEAKNZMMPTOFNGIDRSFGDSSYRWFVEPEUOWQLSROMJCBPECRYLEFEPAQMO");
    IMC::CustomManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 1018U;
    tmp_tmp_msg_0_1.name.assign("XRJMEGSSWNVRIYHMPLXTCUUAYXGLHZQPISTAVDRCRCMGHZINMKANLSLRMKRJSYFXSBDBCOBIJZTOPNSQEANVY");
    tmp_tmp_msg_0_1.custom.assign("VPBUMMHCSQRZNSUSONYPYZDFXQEQTXIKORSDAOAQMJUQQNBLADLHDKEYYRVOYGCLAKITUJVUWSOTEFLENFDPHKWHJAPGVARMUKMYIXKPTKMDLXJEVPNCOHGGWTGRYJVCSMNQBBHBTGRFITNSKTQIGGXXJAGZGTCIMULRELIIJVHZECKWMXPEBVFEMXIINBUSO");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 221U;
    tmp_tmp_msg_0_2.op = 68U;
    tmp_tmp_msg_0_2.request_id = 30994U;
    tmp_tmp_msg_0_2.plan_id.assign("PDBHXULMSSDFYVRSQEWIDXBBXGQRQKEPDKGFBFAVRQBTFOTZOLKIJRYMLRHAWOESSHUOCLDFGKMIACTJIGPKDYVQAXSWAXSQZWZMCOGYRNEZTZCUELPDNCUIOKYBRFMUCKKBTPNETVFVYXILMHOCIOENDNUGQCBDJRNJVUGAYCSHHXZFAV");
    tmp_tmp_msg_0_2.flags = 59328U;
    IMC::DepthOffset tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.15501842523122134;
    tmp_tmp_msg_0_2.arg.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.info.assign("ZQCOZJIFOXLVQFTUFLRCOQVJJEKHHSGHSXBTBPHYKSGAYXZMNWBNIAHQER");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.8359280868439765);
    msg.setSource(43183U);
    msg.setSourceEntity(129U);
    msg.setDestination(54934U);
    msg.setDestinationEntity(182U);
    msg.command = 177U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AMTMNHRZDKVYVTFESOJUNUOFWAOWXLCYKOGOJNFBSPBBRCZPJHKYPEXHLDFYKYARMEUKHQUVMPWFRSXINTOQLDMTAAJQDYEDXVEMITSOGZNBWCGEGZB");
    tmp_msg_0.description.assign("DMOBFHANNEMQFVETHQEZMXVHCVBMLAODIWZGDDQUWICBNXPWTPXKZLNRHOOGMKYUXVCENP");
    tmp_msg_0.vnamespace.assign("LSZYNDNIMECYENHHVAYSXAKQHPXWHXSOKVIILXSTMTYWRGWTKFGIGTTUUOGKGQRVVLDSHALBGCD");
    tmp_msg_0.start_man_id.assign("WVOHLSNRJAFVGPTXQOXCZUKIMKWXAVMZKTAOSEXUPNITVAULLAHGJINHBJXIEYTVCEKATITDAHXWGDSPDQXQHAVNYYZYGSELLEWZKAESWOKYPTQMCHQFZMNIOCQRYHVDJGZOOEMAPSQSYUBBXM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KMPETYHRRNUDQPUFRESFFNWPVLEDZHFOSZJULVKNTZYMUGBQAHLCWGVDGSILGPBWQQHAWNSDSLTQXNIMEJJVAHKZTKNTRFCBIXDYANNQNAWKRKHMPTXOYSMUYBEHXDBUYCVOCGVFIZOELVABEBMAPRJADFJXOYEWULGDTVHLQIZZIOACKVKHWSHXJJWRLQUOMNYCSJXTPJSGCBFYGRIWXFZPXDQKCZIUMTWOUBTMIOPGBLFM");
    IMC::Drop tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 52287U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3228610963408338;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.977426111607971;
    tmp_tmp_tmp_msg_0_0_0.z = 0.31987529333772047;
    tmp_tmp_tmp_msg_0_0_0.z_units = 117U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3024118661973946;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 68U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KRATDYEZQTVCONWSWSOTQEPTSZMCXUVLMPXENMBOHYHBUOABQLFAXCTAAHQGPVGYJIRLSP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::OperationalLimits tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.mask = 48U;
    tmp_tmp_tmp_msg_0_0_1.max_depth = 0.04126351914098947;
    tmp_tmp_tmp_msg_0_0_1.min_altitude = 0.29351832635095165;
    tmp_tmp_tmp_msg_0_0_1.max_altitude = 0.15900563705661674;
    tmp_tmp_tmp_msg_0_0_1.min_speed = 0.9930089551953422;
    tmp_tmp_tmp_msg_0_0_1.max_speed = 0.8897816960257371;
    tmp_tmp_tmp_msg_0_0_1.max_vrate = 0.4168496052020799;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.6177965378905168;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.6795012567690978;
    tmp_tmp_tmp_msg_0_0_1.orientation = 0.26200345323792695;
    tmp_tmp_tmp_msg_0_0_1.width = 0.02045413790843731;
    tmp_tmp_tmp_msg_0_0_1.length = 0.7645066615202781;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 96U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("LRJGBCAZUBBHSJUDMKXLAYCEWQSGWBSLVSOWHIPOURJVFPJFZQXICYYNXUAVHSIHOFPNWCMMKRLREZIJCBAMCXLSKOZZOAFEAJTLDTPKKHMYQY");
    tmp_tmp_tmp_msg_0_1_0.description.assign("IHSMRFTRNGVGNUZECEGFKXNAICIBEDGZRVJWOJXZWDBVWWAMYMMHFDCQDLPHJNWFBLAXXYJMKDH");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("WUCQGMPTLPTJOVGWOMFBIXNHMKJTAOSUCDIZRBETNASAQLUNBFRSWKSSZRCUGJOABJMZXRDERWGZWHVCATAZXTXGOKSBEIYOGUJOPMQZYKAMYAIDFWAIVQQPWQO");
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("ZWQQBOXEOYLUTUERHPUEHTOKLWJZQPGMFNMODHSIMZRWHVIRFJHQIJIYMQPMYVXUPZMISTVIKPNTOSBCVJKRTFOCX");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.maneuver_id.assign("EMTFMUZISCVKYLHUOPPBWOGIXFADWPHREVQUARSYPFJMJBGCOQEFXAZORMYRIORMWBJLBLYINJIUWXGIXYLJHAYODTPSRDWZWQXQQGDMKACWMNXWXWCBVVRKNEVAQZGGEDNCUATVJSENLSONFZGKIJSDDZTOUEZSKBBHKFNIFEPVHBPLUKIREKNG");
    IMC::FollowTrajectory tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.timeout = 19086U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lat = 0.20178328462694017;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lon = 0.7575935371084251;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.z = 0.9256550399452359;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.z_units = 137U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.speed = 0.26408262195890075;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.speed_units = 222U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0_0.x = 0.8755525503814408;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0_0.y = 0.8107186320981924;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0_0.z = 0.3673191215047936;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0_0.t = 0.40158523664811674;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.points.push_back(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0_0);
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.custom.assign("XCSKFMNZKANJIQFEHPBEBUYTJIRUSJZWKYMCYAUTICVLPZGFKHYRIQHEIDMTDTKSCIGXTISKHNLMVXCQVHVIXKOOFRSWXLHFDHXFBJZDADBTNACHGSONHCGWUVRLNEOPJDOGJAYEQSETVLVFFKYAMQGNYPPZLTODGGPWRJWCFBSRWZBVZUIVZDQJBHXOSBYBQWPFNORRXUVGUPLEMWML");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0);
    IMC::EulerAnglesDelta tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.time = 0.8509292510461595;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.x = 0.40703119531302145;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.y = 0.7085668818331377;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.z = 0.5126400360536592;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.timestep = 0.46171450697645255;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1);
    tmp_tmp_tmp_msg_0_1_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.source_man.assign("PXAWEIFTUFCKTEOJMCASKGKBGZDIKOJHWESDEIOGAHWNYGAUCPKNCXGKDASWSMVINXIVTQBOZWRTYRVQQLVNXJLHBLRPRCLTUEXUES");
    tmp_tmp_tmp_tmp_msg_0_1_0_1.dest_man.assign("ARBEQELHECOAFCTLSHGLPQRTQQKNYIWSEBVMMCODFQTKRXCDUQBOMCWIYNWGJQVNNRAMTMLWEYZJHSYOKSZLXARAPIRPABZ");
    tmp_tmp_tmp_tmp_msg_0_1_0_1.conditions.assign("YZQJDWEZIWWLVAGEFOCMNKYCOBSEZKOMAXMLYOYQCPHTJCQURJGUJLIOIATGYZLHAFOBVUTISHXLBHCDDZKXNNBDLFFPRGFEHUXVTWJXTAYAYPGIPERZ");
    IMC::WaterDensity tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.value = 0.4963322383145907;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0);
    tmp_tmp_tmp_msg_0_1_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    IMC::CommSystemsQuery tmp_tmp_tmp_tmp_msg_0_1_0_2;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.type = 80U;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.comm_interface = 48692U;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.model = 43476U;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.list.assign("SHHYOYUJHOHMMSBKUIAJPCVEWLHAPZOQLNVTKWWNCJEAYXQTKZSRFXQYIOJBDRVRFBNCCNMFEEQJFPPMGBWBDMYUGUKPENFVKZEKAXTMBCTUOWFYSGWYMKSWUHBNORSSONTYKBRDTRGIIMPZIQUHVOIZQTMZASZDLCDPVIHTFVRQZGXFSGDCXQBGEJLPCXQXBD");
    tmp_tmp_tmp_msg_0_1_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_2);
    IMC::IoEvent tmp_tmp_tmp_tmp_msg_0_1_0_3;
    tmp_tmp_tmp_tmp_msg_0_1_0_3.type = 78U;
    tmp_tmp_tmp_tmp_msg_0_1_0_3.error.assign("DBIJQPUJMRWBGJMNMPEXSVQGGZIZOUDXZCUKZMGAOOYGWRSWNTKZVRFOMQFRROHSXWSFQXVRTGDSYPNCVBNVDCXKYLCAWZEQHHACSOBLDFHPXSDKKXPQQZGGAHFJBWFDLLHAT");
    tmp_tmp_tmp_msg_0_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_3);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.9439945233779407);
    msg.setSource(46358U);
    msg.setSourceEntity(175U);
    msg.setDestination(4049U);
    msg.setDestinationEntity(219U);
    msg.state = 23U;
    msg.plan_id.assign("WGJEVOBCWLSJDUMURRKTQZUDZTUVMEDSSFRKVAEHCGCNMJMOURTMUGSEQSEKCHQRVKXLRLISBWGGBRKMBTSIANLFKBDAPHVJODVIRMNHJYALUHHNBYTNHBSUOHMCBKCPMLENXSWXFXBCUYAUQFXWEQAXASJNGDZXWWXDIIVKFQLCCZPZZAXOVWDNEOOQDPWAGYOXBFOAHDQEHOYPZPJIIQKQKLVYTFJZYJGYLNMFYIGNFTTPPLTRJCIP");
    msg.comm_level = 126U;

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
    msg.setTimeStamp(0.6010600169173391);
    msg.setSource(29390U);
    msg.setSourceEntity(235U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(246U);
    msg.state = 120U;
    msg.plan_id.assign("CBDFZYYNMMGDHBQTJTFVUPOZXTSDPZEQDTTUHLSPYMLLQHXVYXLRBJCXJJNKOBKVQUAOXPYICKUNFCJJSMGVTAHKLCSATBWBZBJEAHERMUBMODEERQDMSIWITZQFZBLCAGPURGOLNGGYFWSAIRVMWCUVOMAEBHDNOHJPLRSVUEIGQXAWSHWPSZOKQCNWIGYHRFQNHXTWIFEZUWIAKVYK");
    msg.comm_level = 18U;

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
    msg.setTimeStamp(0.05845129727199605);
    msg.setSource(26639U);
    msg.setSourceEntity(99U);
    msg.setDestination(48967U);
    msg.setDestinationEntity(111U);
    msg.state = 184U;
    msg.plan_id.assign("QXQIPJEBWRVPUAHPZDKGWNQTDUSJGTXOIWMKRNQOXDTELNUFDCVFADALHOJTBNAUPTGQLKXOVRT");
    msg.comm_level = 209U;

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
    msg.setTimeStamp(0.7647715282836951);
    msg.setSource(8491U);
    msg.setSourceEntity(81U);
    msg.setDestination(17496U);
    msg.setDestinationEntity(212U);
    msg.type = 141U;
    msg.op = 45U;
    msg.request_id = 38333U;
    msg.plan_id.assign("XWZXXSPKSHWSHFMOGDUHSABDHMPQJRRYOIXNLIEXZZUQVLZEWGHSCYQTMEDYUJHEADXLOAFCNFOOFJNASDVUVPLQPQRCUP");
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("FXGHJCWSTAPFSM");
    tmp_msg_0.type = 35U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AUOWAZQOYJBYBUCVSNLKHUQLXLZKZKFQIRFEZWXTFMNTXCSJRRCAUXVGZNTDURAOEGHGEIJYRIVLOCFSSWONPTCUJBPGEJDZIGMJQOWXADHTBTGTWMYAISWACSNYHWEHKAIEFRQBXNBJCLJMGSZKRSUHPBVNNZMDLMBKSPLQIWFFTTLBVFIPYPAKMHOWODHEPEXMQCGIFVDEDVXIQMADUJPUZLXVTYDXMHYVBRGRPWNKPYKYFEU");

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
    msg.setTimeStamp(0.559663105662618);
    msg.setSource(16123U);
    msg.setSourceEntity(57U);
    msg.setDestination(28104U);
    msg.setDestinationEntity(79U);
    msg.type = 26U;
    msg.op = 179U;
    msg.request_id = 52423U;
    msg.plan_id.assign("NUFCKPHHOGSUXKHARYAVBKESMYMSUERNTPFNOMIPTCUBHIKYSWQIKRPTHPCYVRGUQAICWXSLQGTOZNXMVECWEHJHLMXDKMOLQXXVGVGBXQJYKTEYIDSTLZFCJMJGOYIEWSKZTHJYBPWRNLMCNSQQQLQJSBEZTTAGHZRVGXNORVUDWBPAGZQJVDUREFYBMFLOJYBAZZVLUADKPNPDFLJPJVFCEWAOAZFNXIDFRGAKUDHNWZMUBC");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 11U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HVWOWRUOXNSPMWEGESPLDIYJDTNSQMJBE");

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
    msg.setTimeStamp(0.40793497282467817);
    msg.setSource(24578U);
    msg.setSourceEntity(4U);
    msg.setDestination(38922U);
    msg.setDestinationEntity(147U);
    msg.type = 113U;
    msg.op = 43U;
    msg.request_id = 65469U;
    msg.plan_id.assign("EWTTLGHIISNQOZJNOQKSLRAJRKRGFRCOKIPYJGIDMEJQSRFISUVEZCCAHLGFYKHTAKHNMJETIGHXBCPYRLXLRZIJXFZOTAQKTLPQAWBLHPADERQDSVCBKOUNIJVMZFGZWFBZMGURMKSVMLWKBGUVLXYCHUQPFNUIHUYXQGUOPFDSJDBOSDOPXKIBFCXEMCRTVVYWDEMTEABJNTAWNCHNDUDGSQPEPEFQXB");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8240320709176095;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PBPCJZDBYBUAITICWEQNEGFKVGGAEFKWPRUVZWUNFYBVHWHXNAZNDCHMHMCDVBJXSOEEZFFHBOQLRKUITJWARYKBMRSIGSAKNNHJPQVPKVGPZDSNMQEELOYXYAQXVLZUYGUORTOCHMPQHROBZWFTNUWVCCROLFGLLTBAGXJQFSYZAWIKJYUINLGQAPRKBTXDMQJDPHTIXKORWETMSIRDCOSQFXKEVMXCDDPLDOEJYSYHIJWUUSXMMJNGAZFLT");

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
    msg.setTimeStamp(0.28452515132468126);
    msg.setSource(30887U);
    msg.setSourceEntity(250U);
    msg.setDestination(60050U);
    msg.setDestinationEntity(127U);
    msg.plan_count = 56027U;
    msg.plan_size = 176600768U;
    msg.change_time = 0.3096138537745484;
    msg.change_sid = 2065U;
    msg.change_sname.assign("EQGBQTFGMVTDFSWZXUDHGXWKISNZVYSROYQABLIYHFMPPTHZUXXMWXVNDIBHBIMTJPOEPIUMPALMEROCUX");
    const signed char tmp_msg_0[] = {-80, 24, 81, 120, -72, 126, 37, -64, 91, -1, 15, 112, -72, 105, 113, -111, 71, -34, 14, -21, 117, -63, 78, -87, -93, 114, -114, -62, -122, 111, 22, 123, 29, 67, -37, 30, 75, -127, -118, -99, 66, -18, -55, 89, -56, -119, 4, -12, 72, 75, 122, 10, 95, 9, 5, 84, -20, -128, -94, 12, 100, -17, -53, 45, -123, 3, 58, -54, -98, -120, 33, -11, -28, -25, -93, 82, 99, 65, -58, 30, -107, 5, -48, -101, 55, -46, -99, -116, 19, -105, 103, -50, -48, -100, 5, 61, -104, -16, -69, -8, -78, 8, 78, 25, 70, -34, -9, -118, 53, 103, -39, -116, 10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WZMZZBJKUYYVWHQLYAFJVOLLQNEQFWTSSWLHHJARIACDSQXQKWSYQZWHFIXKFTIJZRXQCOQOVBEAX");
    tmp_msg_1.plan_size = 39909U;
    tmp_msg_1.change_time = 0.24175208030683748;
    tmp_msg_1.change_sid = 14848U;
    tmp_msg_1.change_sname.assign("ZICMCGLXABIQTTJHJRFPZUJQEFDKBXBGUEDLLHWUKALAHTDNGDARUAZOZCCGSWLVQSEZUUJCNKFJROXSXHNOOIMCJJEVYPNUIEPLQTFCQNTYAIWAEHVHBOMOBLTQVVFHWPITGFVEGIGRSEQTHBAZDZYQWBVRMPACZRJJRCONKXY");
    const signed char tmp_tmp_msg_1_0[] = {-48, -66, -111, -128, -48, 7, -98, -114, 114, 69, -2, 83, -11, -55, 32, -71, -110, -33, 35, 78, 20, 59, 54, -2, -11, 67, 59, 88, -23, 108, -88, -2, -95, 63, 100, 52, 25, 89, 114, 75, -113, -8, -87, 74, 102, -4, 10, -64, 119, 84, 95, 70, 54, -73, 99, -99, 123, 63, 48, 61, 24, 69, -78, -119, 17, 110, 36, 125, -92, -76, -117, -42, 122, -116, -14, 61, -59, -72, -45, 29, 59, 82, 95, -26, 38, -42, -52, -65, -24, 64, -78, -47, -58, -126, 10, -96, 37, -55, -113, 86, -110, 21, -79, -120, -93, 43, 98, -33, 48, -24, 123, -110, 60, -61, -13, 14, 89, -128, -103, 67, -89, -14, 33, 119, 13, -128, -17, -37, 113, -117, 123, -35, 6, -33, -112, 75, -15, 54, 113, 49, 51, 55, 34, 66, 23, -69, 22, 46, -125, -21, 86, 46, -34, 20, -32, 0, 13, 110, -47, 116, 125, 55, -32, -33, -100, -121, 23, -74, -107, 38, -17, -40, 109, -106, -97, -88, 103, 26, -73, 15, 109, 99, 86, 117, -23, 112, -78, -109, 60, -109, -123, 82, 34, -32, 61, 18};
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
    msg.setTimeStamp(0.16492215799394205);
    msg.setSource(17121U);
    msg.setSourceEntity(23U);
    msg.setDestination(57204U);
    msg.setDestinationEntity(119U);
    msg.plan_count = 27190U;
    msg.plan_size = 3055891731U;
    msg.change_time = 0.95489371796009;
    msg.change_sid = 43514U;
    msg.change_sname.assign("AYKOSQTHAEYZGQBSYHSONBKQRQPQPTKLAFGX");
    const signed char tmp_msg_0[] = {82, -8, 91, -96, 85, -93, 119, -23, 17, 43, -27, 17, -59, -126, 101, -19, 125, 23, -122, 19, 47, 58, -124, -103, -73, 66, -92, 108, 18, -119, 116, -90, -61, 118, 64, -14};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SCCQSETNWSOFMHB");
    tmp_msg_1.plan_size = 12752U;
    tmp_msg_1.change_time = 0.0229588522102514;
    tmp_msg_1.change_sid = 54547U;
    tmp_msg_1.change_sname.assign("TACRAFSJGGKEAMNAUNNEMBWPXZQIKQKARDHJWVWILJXJHGTB");
    const signed char tmp_tmp_msg_1_0[] = {-62, -121, 0, 126, 107, -38, 94, 94, -79, 105, 62, 122, 52, 58, 119, 5, 87, 88, -79, 23, 18, 20, 55, 97, 79, 70, -38, 72, 45, 29, -107, -79, -76, -32, 1, -46, -60, -48, 123, 120, -76, 31, -5, 62, 49, 53, 40, 68, -77, 84, 121, -42, 116, -100, -128, 79, 70, -125, 16, 95, 64, 96, 56, 120, 31, -63, 23, -35, -22, 41, -116, 87, -87, -77, -92, -36, -51, -42, 77, 67, 124, -121, 23, -114, -3, -70, 90, 95, -41, -35, 55, -80, 108, -127, -109, -121, -45, 61, -94, 45, 104, -8, 9, 46, -125, -120, -2, 35, -115, 10, 9, 52, -67, -38, -95, -115, 96, -84, 98, 117, -100, -76, -21, -53, -48, 110, 70, -127, -126, 17, -70, 84, -111, -31, -6, 0, 9, 71, 13, 113, -34, -128, -4, 50, -40, 40, 39, 69, -105, -37, -14, -114, -28, 25, 69, 107, -66, 52, -8, -90, 39, 4, 90, 20, 123, 31, 83, -51, -4, 52, 77, 26, 68, -10, 30, -7, -26, 123, -51, 111, -91, 55, -101, -51, 3, 55, -44, 18, -41, 48, 101, 22, 33, -111, 121, -4, 14, 102, 23, 96, -102, -120, 120, -80, 42, -108, 46, -62, -20, -9, -67, -87, 52, 118, 51, -42, 4, 89, -75, -1, -29, -48, 44, -103, -33, -113, 51, -42, -33, 97, 18, -45, 78, 34, -75, -91, -76, -94, 51, 35, -24, 97, -40, -106, 54, -122, -53, 76, -120};
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
    msg.setTimeStamp(0.8264123481611514);
    msg.setSource(22992U);
    msg.setSourceEntity(240U);
    msg.setDestination(11159U);
    msg.setDestinationEntity(60U);
    msg.plan_count = 57319U;
    msg.plan_size = 3712088745U;
    msg.change_time = 0.815561234985826;
    msg.change_sid = 52187U;
    msg.change_sname.assign("YIZAKJXQEKLJSXKFKHGLOPOROJEUWUFJOKISQXUXFLFIAPOWBPMHSRMHSYVBANAAGBEYHLVCVTPWVAGZPNOEHIBBEZGZVTSLQDTRZFMGOECGLYIWXCRFZEAKRHDDNCQZMVYVFRMWUDDWXR");
    const signed char tmp_msg_0[] = {71, -66, -43, -80, 31, -125, 117, 64, 80, 15, 46, 124, 48, 63, -83, 34, -97, 18, 96, 17, 97, -34, 88, -46, 121, 31, 68, 114, 124, 98, -98, -19, 36, 73, 6, 115, -115, -122, 98, -7, 115, 120, 9, -107, 80, -2, -23, 16, -122, 120, 8, 26, -28, -125, 44, -106, 19, 12, 89, 126, 38, -35, 84, 80, -110, -65, 53, 46, -87, -32, -8, 43, -32, 14, 13, 79, 29, -39, -67, -90, -4, -97, -45, -35, 93, -28, 5, 7, -30, -105, -22, 20, -11, -37, -33, 116, 80, 123, 32, -92, -32, 86, -4, -63, 11, -63, 30, -32, 109, 84, 18, -97, -128, 87, -58, -114, -30, -16, -66, -95, 120, -122, 97, 86, 106, 82, -28, -39, -3, 47, 112, 59, -83, -49, 25, -59, -16, 97, -34, 84, 31, 77, -41, 15, -125, 99, -91, 79, 46, -54, 39, -1, -75, 34, -30, -80, 91, 60, 68, 111, 89, -30, 53, -25, -62, 64, 54, 85, 89, -110, -41, 87, -108, 23, -13, 66, -65, -64, 72, -52, -75, 50, -2, 96, 89, -103};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QQTYNPDZYMFSIVDQYNWNLLLAJKPQRKQXBKUIQUNNIGQZSRYOUVMFOCFXCVEBTUZFRGVZWCVZESIVOBBMAAOYREMZSLNZHLPAQTKJHXPFXJHWMIAREORBVSUEDQWZEHKAZCYUSCKHNEPIWLHYCIOREGVSBBXBTMHUDIKJHQUJTEJGGPFWWXASGXPMMPSLIRCTOGGFCJMUZJHDOAXWFNKRNCXWVAL");
    tmp_msg_1.plan_size = 43108U;
    tmp_msg_1.change_time = 0.6157795235181449;
    tmp_msg_1.change_sid = 54992U;
    tmp_msg_1.change_sname.assign("FJNCYLZYTPYDSSWIDXGHOWCRXBJATJYDUOLSKCVFMIPEKFHOSBCRETZDMRZAMRWYQZWZAXTXNTMGGAISYEDFUWCDPKMLXLCPSZACLFQNVTNKUTPYUUVHWFQBRTEISEPPZLXLZJDE");
    const signed char tmp_tmp_msg_1_0[] = {116, -22, -92, 23, 113, -82, 49, -64, 117, -83, 76, 105, -23, -109, -83, 12, -40, -71, 101, -5, 80, 84, 121, -115, 63, 29, 12, 22, 9, -107, -15, -120, 108, -126, 45, -86, 46, 37, -57, -83, -35, -105, 97, 71, 73, -89, 47, 35, 8, 20, 122, -110, 126, -127, 32, 113, -41, 70, -59, 30, 60, 1, -16, 68, 63, 76, -82, 84, -104, -84};
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
    msg.setTimeStamp(0.09238986343017064);
    msg.setSource(63468U);
    msg.setSourceEntity(131U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("QVJCXZJLLDDMDNVGMPDYYXMUFQLHXUTLVSJHBONYKZUJIZUTKOTYSCTKYG");
    msg.plan_size = 44542U;
    msg.change_time = 0.7373617838191158;
    msg.change_sid = 65278U;
    msg.change_sname.assign("HDNEKHBISOYGWTBNDCZEWUCHDUALONKZACMCPQWLYNINTYFZXUGQBPMZNMQZOLKEKDWISQPUUJZUCNKVXHHFRBTDSZVVQVFYELXOIRBDPVGFFNIMMWOQAKYEGGNAYPSTFURZSHSDLQLTMOFOVWVWZNJTHXJHVTHQAQFILPS");
    const signed char tmp_msg_0[] = {-112, 36, 66, -27, -84, -69, 55, -103, 68, -53, 60, -85, 7, 29, -64, -88, 6, -81, 53, -108, -75, -29, 114, 46, 8, -71, 23, -28, -56, -12, -32, -78, -41, 58, -60, 73, 96, -15, -64, -128, -30, -44, 10, 30, 87, 89, 49, 101, -23, 114, -12, 84, -47, -116, -40, -68, 47, 121, -25, 66, 3, 10, 39, 86, -65, -68, -78, -48, 97, -124, 112, 6, -57, -85, 65, 23, 0, 69, -105, 81, -3, 109, 53, 93, -21, 27, 25, -1, -98, -51, -30, -47, 19, -117, 17, 116, 118, -115, 56, -23, -53, -105, -20, -96, -88, -124, 31, 63, 76, 118, -32, -100, -53, -26, 46, 66, -94, 84, -107, 108, -77, -15, 29, -15, -64, 80, 41, 62, 17, -36, 81, 23, 35, 93, -117, -43, -31, -60, 10, 114, 108, -58, -116, -75, -71, -29, 117, 53, -93, 76, 71, -31, 80, -12, -31, 69, -109, -7, 114, 126, -57, -94, -4, 106, 98, -108, 13, -69, 97, 105, -32, 113, -52, -3, 50, -24, 62, -36, -63, -48, 3, 116, -62, -95, 81, 108, -99, 122, -83, 101, -66, 112, 72, 63, -94, -126, 58, 122, -88, -75, 49, -12, -13, -85, 89, 72, 58, 83, -127, 32, 21, -114, -52, 14, 52, -74, 71, 36, -111, 116, 80, -115, -114, 22, 81, 33, -82, -13, -48, -33, 102, 66, -78, -34, -125, -32, 5, -30, 52, -43, 50, -39, 13, 63, 118, -124};
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
    msg.setTimeStamp(0.8969612991469121);
    msg.setSource(42074U);
    msg.setSourceEntity(172U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("WPLWQJFJLKYKFLSTXKEBQGAPDCPWYKIADSCKR");
    msg.plan_size = 7218U;
    msg.change_time = 0.8775274093588263;
    msg.change_sid = 26351U;
    msg.change_sname.assign("IYDMOCPCRGKWSIRZCBEYOWFSIVSXXDRHLG");
    const signed char tmp_msg_0[] = {53, 40, 92, -58, -99, -83, 98, 81, -71, 37, -37, 48, -2, 57, 121, 122, -4, -97, 81, -100, -32, -78, 103, -84, -75, 82, 36, 6, 20, 111, 82, 78, -77, -82, 65, -122, -115, 10, -28, -71, 115, -47, 118, 50, -64, -101, -35, 126, -102, -120, 89, -75, -78, -5, -99, 87, -71, -11, 31, -45, -109, -5, 14, -103, -43, -62, 13, -44, -63, 62, 105, 45, -106, -64, 16, 119, 1, 75, -21, 51, 1, -45, -48, -63, -100, -54, 117, -63, -73, 43, 37, -9, -37, -121, -3, 1, 61, 73, 41, -27, -71, 43, -9, 78, 78, 17, 117, 18, 67, 12, 80, -58, -50, 17, -75, -38, -125, 112, 23, -5, 66, -25, -71, 48, 17, -61, -43, -5, -10, 115, -5, -78, -17, 118, 30, -1, -72, 51, -84, 103, -100, -118, -41, 5};
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
    msg.setTimeStamp(0.12024939252640021);
    msg.setSource(61588U);
    msg.setSourceEntity(43U);
    msg.setDestination(5150U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("ZPNIKTMXMDONUFOVWAFDWFYYSSUNJATPMDHQIJBQNNKSIOSZCKLJOYWPKZJQLXRYTNHJMIVEPDQVOENDLLROPUEEYOWPZEGAWGFRVLBVTHGCUGBQYKGNUTEUMOSAAIYRGTAZPJKLFGYJPWQEBTFWFVCCSWRBVBGHBIXZHLGBAMHTKMVFATKRQCZKDXVGYLSUXXREQIKEWX");
    msg.plan_size = 12587U;
    msg.change_time = 0.6072279214524263;
    msg.change_sid = 10028U;
    msg.change_sname.assign("RTCLNBGPJUGPRQXUFPLTWMOLYDNVHMTZYCYPFDQIYDCATBBSGVAZJIZEHDMNSLKLOPXZFAQHNFJRBHDRMJFTDRGKAEGIBWJDVOFUAXEJKPLHCSDOKVTJCTCCIYSOBNZVRPAFFIXXQMUVMUVHWYBLDKWSDSGYSKZMNMWSCKILREZRUQKHBUMFNWWVYWHX");
    const signed char tmp_msg_0[] = {105, -123, 123, -50, 87, -60, 126, 63, 80, 61, 70, -112, 68, -65, 19, -47, -62, 66, 109, 117, -109, 112, 103, -123, 59, -83, -112, -20, -61, -84, 43, -124, 92, -20, -92, 9, 65, -103, 75, -34, 79, -8, -54, 108, 59, 35, 81, -111, 8, 108, -6, 1, 74, 75, 13, 49, 68, -33, -119, 81, 15, 75, 98, -115, 71, -36, 65, 61, 75, 104, -112, -109, 83, 63, 114, -2, -91, 28, -43, -53, -94, 22, -5, 74, 89, 2, -70, -50, 70, -15, 17, 97, -39, 15, 53, 123, 61, 18, 77, 36, -87, -40, 52, 90, -125, -2, -8, 115, 109, -126, 106, -111, -50, 110, -20, -22, -70, 114, -20, 61, -110, 26, -123, -63, 3, -75, -6, -4, 78, 40, 110, -7, 73, 83, -97, -122, 91, -57, 7, 78, -91, 77, -26, 4, 59, 79, 112, -76, 26, -86, -111, 39, 115, -98, 23};
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
    msg.setTimeStamp(0.7544967802224875);
    msg.setSource(54961U);
    msg.setSourceEntity(137U);
    msg.setDestination(37284U);
    msg.setDestinationEntity(125U);
    msg.type = 236U;
    msg.op = 223U;
    msg.request_id = 36930U;
    msg.plan_id.assign("PERPTXBOQJOFRUDYFGLLWDKWUYCIXZWBXLVQNXIZKOCFUWUQDRVNZIHZLEMFHAKJDYGGXZCSBAZJJXUDPJVASNHVTKITDRKPYMKMELOOKZVJSFO");
    msg.flags = 29904U;
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 126U;
    tmp_msg_0.lat = 0.5204352445107051;
    tmp_msg_0.lon = 0.40740519369665107;
    tmp_msg_0.height = 0.4020313805025527;
    tmp_msg_0.depth = 0.36156770526744797;
    tmp_msg_0.alt = 0.47994172725496465;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CEKQNUYJFOXKJYLUEPSJYKWXEFAPSNTFVBARYIHUHIRRXAVSWGQFWJRIEXTKUVSZNTUNSLRJLHQQACPBVPLTBMDOTDGOLULJHCYPCNAWXFIOHXHSIVLBKHAGZCBMCHUWZALVZJIFDL");

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
    msg.setTimeStamp(0.7569773421388938);
    msg.setSource(58600U);
    msg.setSourceEntity(249U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(250U);
    msg.type = 187U;
    msg.op = 113U;
    msg.request_id = 2384U;
    msg.plan_id.assign("TEYZDQOTAUCNQRRFHENFSJUMAPSAIQFNBTJXYMEVMXMVCZSGIOWPDITMHHHHOQDLOFCANMWWBIIGHPPICUYDSRNEKNEGBYNLITASPFOCBRP");
    msg.flags = 50464U;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.823608860601071;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RBIYAMDDROYIICAQIJWFXQCVWQDKUJC");

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
    msg.setTimeStamp(0.8183991529455296);
    msg.setSource(64601U);
    msg.setSourceEntity(11U);
    msg.setDestination(40795U);
    msg.setDestinationEntity(14U);
    msg.type = 165U;
    msg.op = 223U;
    msg.request_id = 39262U;
    msg.plan_id.assign("NCUQNFFQYZPNSPEIBGADCIVMNGPZRUZMXRGVZJOBYABTJQUOYPDZOQHHMDVDUWL");
    msg.flags = 48450U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 29233U;
    tmp_msg_0.lat = 0.6824557718927621;
    tmp_msg_0.lon = 0.16636717319666672;
    tmp_msg_0.z = 0.24029775688282506;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.duration = 36465U;
    tmp_msg_0.speed = 0.8764545633130221;
    tmp_msg_0.speed_units = 184U;
    tmp_msg_0.type = 49U;
    tmp_msg_0.radius = 0.4765818905632542;
    tmp_msg_0.length = 0.14692283941334916;
    tmp_msg_0.bearing = 0.6075085755719605;
    tmp_msg_0.direction = 162U;
    tmp_msg_0.custom.assign("MADGSVVBWBDGKCYCKJZOSVMVJONSETBWBHQYNZIBCXMKGICBEKYXJKRXYAOULGISTPONOLWRJWFRTMXCKGYDWRJTVIXOLSLZRXBNABANFEPEQOFJAJLLPRUZVQLUTCAAOHZOKMIMYGQUUDDQEKZVHFFYLSWNICZIVEIHWYGENNFPZRJWUPHXUHRAQIVHZVTRPXPMMBFEEBPTY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QMVOQDHFJOUR");

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
    msg.setTimeStamp(0.7474503351395441);
    msg.setSource(57150U);
    msg.setSourceEntity(185U);
    msg.setDestination(9669U);
    msg.setDestinationEntity(247U);
    msg.state = 251U;
    msg.plan_id.assign("VHZYJJVTAIAQKUAFIFDXKQVXZKGOTMWUTZPLJCFMLNRRTZACUEYDYIMMQBKOAFLOWAGHWNQNUUSJJPQYVDOBUITJDBETP");
    msg.plan_eta = 482154063;
    msg.plan_progress = 0.4858117358948395;
    msg.man_id.assign("ZTMMEDHBRKPSJAEAUIKLVE");
    msg.man_type = 22685U;
    msg.man_eta = 605520446;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.3717634370349949);
    msg.setSource(36769U);
    msg.setSourceEntity(51U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(228U);
    msg.state = 202U;
    msg.plan_id.assign("XRGSJDAANHZLHWCPFABVMPMZMXVNJCPXOBDBCOEFRCFJZQCTZSPIAXBLOQUQXDTQSTDNIVGZNRYBZQGRWETMENWWJSMUXZKUEDURKTDITICMUISVZSZUFHOGYUBXNAYQMOULOHS");
    msg.plan_eta = -1691328524;
    msg.plan_progress = 0.9850696275707996;
    msg.man_id.assign("QUOYJUBBYOFGAVFRFACIZKKRSXHGXVUKYJLTFBQPYUEDIEDFSOCZYHXXBYVGKPMJYVMWMPGXEOMLAJNRNTQHRENFILHTGZDYAPAYEAVPQHOBNENMWCXIIUMRLEAISQCHRMLYCZKJRDVWOSFBUBHPUCGBPWJOSJDLKASXTCLWQVNGFPPDVNFDKWCLQDXMNZTDZTLQWZTCOHBJBZISGQKOXRUSGXVNEVTCRLJTMHJWRS");
    msg.man_type = 14634U;
    msg.man_eta = 85672802;
    msg.last_outcome = 128U;

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
    msg.setTimeStamp(0.5061507774622959);
    msg.setSource(27812U);
    msg.setSourceEntity(80U);
    msg.setDestination(41487U);
    msg.setDestinationEntity(65U);
    msg.state = 209U;
    msg.plan_id.assign("ONMQAWQMIVFYSHNJXVYMFCTWKOYXMGSISSWJLZZEFXEXELORVMCNHDLSDENDWMFOEWFYLSJZJDRTVKPQCFJELRGPUIZGQIBKATQXLTJIJOPUXOAMAUTOPFKTGRANZGHWNVNNRHUKSHJBXCBZDDBXRDUEEAPFC");
    msg.plan_eta = -1099145216;
    msg.plan_progress = 0.7239488483517486;
    msg.man_id.assign("QOHNIOKQEAJGIIYRIBTDFRNKNDAATFNFBDUYFMTDXQOXSAFWSGCSWYLTUWCPSKRPQGXGHYTCBKHXQIJGGQIHXVBXQNRLZJGNERKKBVJFWZCUIJVEYUIZVNVQZEDMJUJPLECCESYTCVWCYLAPHLWLWHWHAEYYLRZRBDKZSKLPMPBVMXWNMHLOTOJUBSDFATKAVZKZEOJRNXNMDDPGFJHBLAOXMFMSEDMGSXUGIMP");
    msg.man_type = 34527U;
    msg.man_eta = -1927757778;
    msg.last_outcome = 60U;

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
    msg.setTimeStamp(0.15138521182790288);
    msg.setSource(26098U);
    msg.setSourceEntity(196U);
    msg.setDestination(2160U);
    msg.setDestinationEntity(197U);
    msg.name.assign("HIIIXUGRFUVAUTTFVGSUVLVXKOZLKCNDGWGBBSETKRBPRURQQAHJFLHIZCLHQVKZMNBMWXZWENLPFCCVWMJXAVGUAXDNNJYDBJIIZUBZMKFDDQATATWIJXMCINWSEACZMNYWXODPRJQJBOJLKHWHXHJERCLGGOBBDGTTXYAWQFOLTQSUAPNFYHCUDZGSGTQRYKZVRYOFVVELDSSRFMMYDQHOHPXPEMEZEWIY");
    msg.value.assign("AOLTPUDQJFASPWUQAOMKDLCGGZGKPSBHQSWWOVNKZHYFVBTZQSRATRDGMHLUCNDZOAFGDZBUJUJPYGXXVKQTA");
    msg.type = 114U;
    msg.access = 174U;

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
    msg.setTimeStamp(0.8865060651592569);
    msg.setSource(43773U);
    msg.setSourceEntity(252U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(16U);
    msg.name.assign("DYOTFIUIQYBSDIDGFFUAQVVPSHHKIVJDCSMOLCPNWMHLFYYPAKRBXOLEONYXVEZEQZCWBXGDNNQHBTUOOYCJGMFWYLXADFARFWZXADGRDHETWJZXTHIGPWLQKOZBRYWLMHCJRMFKMZAIKZNNISEEGOJGFWUIZLAWKDBVQPTYJJGCJTRVQFIBGLRNPXJZUNCTTSMMEQRJUXSNPAKAVDMHZULLRUSSYPETGNVKBX");
    msg.value.assign("KWPLHMPUNJHZAOHBGWDYVUCPPAANPOMIWDRTUHMMZOSSEWUFPFXH");
    msg.type = 225U;
    msg.access = 226U;

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
    msg.setTimeStamp(0.21772112801672627);
    msg.setSource(58638U);
    msg.setSourceEntity(81U);
    msg.setDestination(18380U);
    msg.setDestinationEntity(192U);
    msg.name.assign("HBHGPKVZDOVBLIPQOHXQIYSUSAJEXSTLMGDPRXMJISDYDVHGOQYBKXUFXGVRZQOPMMLMCLDQPKLNXAOYTUZRWXLAVCGOKHZUVWICJQTNOKAVBCWKNHARSREDFHJWDEUJNZIVNCYHGFWAWEFM");
    msg.value.assign("FFZJOHZTPJFFXWSQEECOALVJIESYXUDNZXPXVTDEUWWLNFKPYXIQQSJOOYQELPLTPBYVHJBHWJSPLBVVDMRWPAJLZMDFGXRWUKFBKIRCHCGUUSYYARRBAKSHEKSMGVCWZYRMLT");
    msg.type = 103U;
    msg.access = 162U;

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
    msg.setTimeStamp(0.6398594325108965);
    msg.setSource(18492U);
    msg.setSourceEntity(254U);
    msg.setDestination(5941U);
    msg.setDestinationEntity(94U);
    msg.cmd = 16U;
    msg.op = 205U;
    msg.plan_id.assign("YDJBTXOCRIZNIPUMSEWLPXUCETQMMFQAMQSPOTDHGFIGJKUABOVMGVPYVNYUMFODQINEWYWGHHABKSJQNPDODTIBLRWMLJONXVJSHCTHJBTDPDXUEZDIIEVGFYCRKVJLGXQWHFEYFKMZAXSLYLTKSHCPQBEOUIUDBVARVZASGMIGJPRLACFQWSWARKKWBXPTNUNZRFUSKTFSTZONQZLRDZRAMY");
    msg.params.assign("ZKQISOHOQGZVNSTIOEQBERGJKNLXSHRGDIVYXPVCTWJZNBKCOGLYKVYRFYONEMMKEPRTUVEZPIUIBAHNKBNHPCGYASADAPLDEGTCTHOFVJWQQZCQWMWHZKBUJDPGBWRCFUXNMHZQQLAFS");

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
    msg.setTimeStamp(0.48727782987101576);
    msg.setSource(41909U);
    msg.setSourceEntity(83U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(133U);
    msg.cmd = 32U;
    msg.op = 182U;
    msg.plan_id.assign("UXWKIGRHTQDRGRORELMXWQHBTMYICAEJXLIJYZFFGDYYVMPUHNFWBNAAOZCH");
    msg.params.assign("YBFNZXUKDZWQLWGUOHVDIYDTTTLCYPBPFZYQNFWBYNIYKMSRSOJEXMUHBDIERLECPIMOE");

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
    msg.setTimeStamp(0.1996841946119704);
    msg.setSource(40693U);
    msg.setSourceEntity(183U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(188U);
    msg.cmd = 89U;
    msg.op = 53U;
    msg.plan_id.assign("KVYBCFYMNPGSHLZSZZFHXPVYFIJTNQSOZMMPOQSZVUONYOWAWAWBGBWYZYGTXUJLTVRFKPRDELHXAOPGMNGCLGOGLIXUIQLUTEXTMPUDJLTEOAHIMVAULEDJSYBUCDADXZITHJSQWCNCWWSXYFJGJRXDCFRKAFTCJSAEDJRNKKUTHPXOIXBDJQBKEICVKQYQMQSUALHEERHVNZBCVLQPGURVYWPBMBHOOHKNKZSPFRGDDIN");
    msg.params.assign("BLXAFTRFYX");

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
    msg.setTimeStamp(0.6170071834158884);
    msg.setSource(22868U);
    msg.setSourceEntity(230U);
    msg.setDestination(4277U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("FEVBWENVCXICHGMQJGPELXZAOZCXCORNOPLRDGR");
    msg.op = 10U;
    msg.lat = 0.983119211441566;
    msg.lon = 0.7928859321367354;
    msg.height = 0.13084442030705246;
    msg.x = 0.8871728761747516;
    msg.y = 0.2357765692992535;
    msg.z = 0.5825934368245825;
    msg.phi = 0.8422773378771072;
    msg.theta = 0.7722413329166529;
    msg.psi = 0.9909864621670214;
    msg.vx = 0.7700050265666164;
    msg.vy = 0.5778529169834278;
    msg.vz = 0.4611063726011413;
    msg.p = 0.4276034693496559;
    msg.q = 0.09889823042416179;
    msg.r = 0.7823092568613018;
    msg.svx = 0.07529798578895464;
    msg.svy = 0.4736665741037267;
    msg.svz = 0.025254069834981463;

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
    msg.setTimeStamp(0.9641335437907671);
    msg.setSource(38438U);
    msg.setSourceEntity(217U);
    msg.setDestination(33901U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("ORIKLPIOZLKMULZRHWSDIUVKMYAGJOLXAKFOSRZCIYHTKYADWBJJQPBZMZIKYLMNUXNQTBUVHSUSUJTOVANJHTWBXRXFCQHBQQJQKLFHRMVIOPUBPSGXFDSQGSRRYEHLWMEIOHKGVEXONPGHFZVOTZNPTRJBLPWPAJBEPVYBMAXXZQYDDSWSGFQAMTYWDOXPHGTIDRFDMECTCVCILVYCMJNE");
    msg.op = 47U;
    msg.lat = 0.6794841002147958;
    msg.lon = 0.9120691989322448;
    msg.height = 0.43552936829384736;
    msg.x = 0.11860646642840489;
    msg.y = 0.6504241463177338;
    msg.z = 0.5880509446119895;
    msg.phi = 0.5196403030901097;
    msg.theta = 0.3878169453654374;
    msg.psi = 0.7790529394892132;
    msg.vx = 0.6724628771348358;
    msg.vy = 0.8234328070891237;
    msg.vz = 0.4074257786885155;
    msg.p = 0.38735654801216146;
    msg.q = 0.32589744925881947;
    msg.r = 0.19270941812542453;
    msg.svx = 0.4709708869229966;
    msg.svy = 0.03746390203727623;
    msg.svz = 0.5643427523145799;

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
    msg.setTimeStamp(0.4764261694555665);
    msg.setSource(14030U);
    msg.setSourceEntity(100U);
    msg.setDestination(49683U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("EPORDASTHCBLSREYGEV");
    msg.op = 138U;
    msg.lat = 0.6328067669839369;
    msg.lon = 0.6572820385922619;
    msg.height = 0.07642904340572731;
    msg.x = 0.46369050349609875;
    msg.y = 0.9360558697971215;
    msg.z = 0.5613254665848885;
    msg.phi = 0.9394961669617866;
    msg.theta = 0.08996767000447492;
    msg.psi = 0.4715547232423343;
    msg.vx = 0.3650284801495445;
    msg.vy = 0.05544635663950703;
    msg.vz = 0.7411093722595686;
    msg.p = 0.07416688500659696;
    msg.q = 0.26645223979755417;
    msg.r = 0.9783497820563299;
    msg.svx = 0.3778114294833904;
    msg.svy = 0.28964672038037675;
    msg.svz = 0.06790490775492286;

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
    msg.setTimeStamp(0.11489768872611583);
    msg.setSource(6039U);
    msg.setSourceEntity(27U);
    msg.setDestination(7468U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("IKVSEUHGFZPRFBCIYVDUMZQJOGRPGGFKESMTBEOFGPVJVGBNAVQBQPMXTGKPIVRDBHVUAIVWXOCWQIFWNMKZJQPEIDMUDFFETLADBFCDCYABDST");
    msg.type = 3U;
    msg.properties = 17U;
    msg.durations.assign("SNFMUHRLDOKRODYZFPTANDPZJXHUQSENELTESPKBMLVJPGVLOVORRIXKGXTZIWRBSCIFCMOPKIEEUYUZSXUSVIAXVWGYRAMYOHQEJTOVTAADCVIQUXFNHFJKNHSBZGN");
    msg.distances.assign("ZKBTYGROGTEPMIQRUZEIWRXTGSIOIIBFGNMUIBODFGBMJAAZEHOTNPSRGYQCLXCRZBHOZMCVUFMPLWKMYVVSWPAQLTNIJWV");
    msg.actions.assign("PFWUKUAFDZIFTRQIWRJCBXQKLHACUHOOSAEEJNREPUCZHHVGJSZXSOJCWQLNJDHNZILPGYWVVQXA");
    msg.fuel.assign("GPQMNFCYCHKLJQXILRNGUZABQIUIZPHNT");

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
    msg.setTimeStamp(0.11593552345201952);
    msg.setSource(18774U);
    msg.setSourceEntity(235U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("EWWJMAGZOYUIANECHZZNYZMUTPBPFEBBGPBQLROMUFABISKYSQLEEQXNCNFDLUDZCRMVVQFMYDPKLLZANZSKWGAWPNJLWLTRIVOBBULKNRJXDGHOTQPEHTJSVFHCHCXAIYJQXBZYJXKTUTFQGCKDTNBOLUPWXGIESVNWCPZOCETGSVOJLTRJHFIAWVOYHTKUHCAPYBAEGRRWFAMXKUXGQJJRI");
    msg.type = 124U;
    msg.properties = 3U;
    msg.durations.assign("HNUVPMUYKUDTLJULRUQYGJIZEQFJIKKBUGAEKDMTAGBXCSDMBEPKZXNLJCZDVHQZLCWJHOUHVPBKXDMQNKFCEYQUMHODHPCNDLEFXTOQZPSRRAHGYEVYTFIQLPVHTGBZTQSFLGJVNGDEFRXTAGYGVQMRLAWHUXZ");
    msg.distances.assign("VMELQKFAXHXIEDXRJZSLLILYSZGWIPVSLARZEMBRCQNLYYKTIOWOEJULG");
    msg.actions.assign("YBWLJFXMNPXKOFACVPENVUQEZVHZDYSILKUSBZYLOENMXFCLEOSRCYWTVXKXHUJPWCBTOHSNZJEOAQESILWQGAYJBEXCHISGKYFTTSZRDKJMNGXUPZFJURHDIQWITVRVODMAZXOGMGECTLFRGQVMQNDWNENMIPWWBAKPABRUPJVTTQAHIPZGRUGKJ");
    msg.fuel.assign("IUQROTANKSFDZZYYECLVIADIHGBSNKIDQOVTSQRRKSAVHBBVGYRTDTDBUULVEGCUBKTRUTVEO");

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
    msg.setTimeStamp(0.72096975358835);
    msg.setSource(41728U);
    msg.setSourceEntity(112U);
    msg.setDestination(3889U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("IWJQDOPBSJFUYVFTBIQECKNCWHJBVXQZFTUDPGGCYJDEHSAMTYSLGAHWESKFAKHDNMIGXLAIXUKERGLWHLQYCUTZDHXWFOAZPGIENOQTQECSYRYIVVSRHJVRPLNKFUMRSTSLGWJCBOJVLRPADNJHZZGGOQIMNONEFVFUJUBWSMLUNXHIPYMMBMWJRIKYWRDREYEVQLZBBXWAAONOQAISZVMDLXOKFCCKXNKBUCTPZMTBQPV");
    msg.type = 187U;
    msg.properties = 242U;
    msg.durations.assign("TEONNVALCAXMPPLXGMLTUIAGXFYUQNSKJEGPNIHXSOMVKBXIUJXKIGVBUPLDARTCOHACTZFWLFCPFYKIHHBYIRXDEKUEPGLWXJTUZOELRUTTGAJWWUGNPMKELNVPFHWANYFHAIBZAOUMEEDQJJQCEQDCBZZRSURPVEKWIHTOMSSARKXSXYGBWYVJIVQYSJBYZHFRCBJBDGBSQPQMDQGQWRHDRNMCVIZCDNNFQHTZFZOCWFDSVLLJO");
    msg.distances.assign("XSURWEKTJXRKTVLUZYMIUPQUSMUAMFJCPECYLFXDWMNCUQNDNNCOUWSNEKDPVXCMGGBQHHBRAQMEVSEH");
    msg.actions.assign("LGFPXMSETBUYILUTVZNJWOWRGTBABTPCPQQWVDEHPBCDDDARHRYYUIQECWYVTXNQ");
    msg.fuel.assign("ZYGMBUHUGYQKWCQGNXCCZRGSBPEFGKKSDOWXAVYROUAWKXKGTRVELOJPGMTBPABUJCKMBMOTZEEDNWDBVVZNTDWIBXJEMZZPAKNHCCRXIBFOQJITSUTOGFWMWATAQSUBSRADKWKFQSQHNDHYZJFTJWIWHSPXRPJSDVICOLFGPMJCRRYIQLXTVLYDNUXCPGILIQA");

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
    msg.setTimeStamp(0.7727195455707985);
    msg.setSource(54735U);
    msg.setSourceEntity(196U);
    msg.setDestination(25148U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.8694691583366774;
    msg.lon = 0.19150850114319995;
    msg.depth = 0.6253487174520151;
    msg.roll = 0.19640384238413244;
    msg.pitch = 0.8089238728791845;
    msg.yaw = 0.94612015961515;
    msg.rcp_time = 0.36841593749982127;
    msg.sid.assign("YOILIHLPCYDXVGNCEQIENDJJUHKMPZMHPAEADNLTFAKRCSURFWUKXKRQRBWSEADGGAKEDHTWJAIIUXYIMPUKIZZZHJGSJBTP");
    msg.s_type = 102U;

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
    msg.setTimeStamp(0.00023141679506821777);
    msg.setSource(40848U);
    msg.setSourceEntity(180U);
    msg.setDestination(25662U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.2432936153267291;
    msg.lon = 0.4802339201593254;
    msg.depth = 0.2879565581125214;
    msg.roll = 0.9872708950365177;
    msg.pitch = 0.5260104030175032;
    msg.yaw = 0.06558696903148098;
    msg.rcp_time = 0.05993226181464473;
    msg.sid.assign("ZFHOIGZTRDYXUCZJRCWXZHRDZPPJYGOTCCCFEZKUNTSQDQESRYRIQFJOFZDESQXRTLVLNMLKOHLHAVBVCMJLJJOBKSUSHVFYF");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.6723093786329438);
    msg.setSource(41203U);
    msg.setSourceEntity(73U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.4809187410547855;
    msg.lon = 0.9441107987496266;
    msg.depth = 0.2981434658315558;
    msg.roll = 0.9318749359622703;
    msg.pitch = 0.22028150373729405;
    msg.yaw = 0.3749864212403923;
    msg.rcp_time = 0.6068733484155652;
    msg.sid.assign("QNOYYHWFRZBWHCBADCJPFBMPVGMPNGQXTGPWTOQJWEGCSIIWRBNPGONSZXUJIQCUYRHLLHKEXSVOHARZYOTA");
    msg.s_type = 192U;

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
    msg.setTimeStamp(0.9630406991600332);
    msg.setSource(60243U);
    msg.setSourceEntity(227U);
    msg.setDestination(48028U);
    msg.setDestinationEntity(219U);
    msg.id.assign("XGFCBOEUWIRTKBQGJMNTNQCMPCZWWDNLNBJJVOPLGYZHOGVHWURATBWAAMVOGJCSFKTUYZDBFLHHQULFKGICMFHEJKYERHXPOZCFZAVYBUATALWECVWAKAMQZZORXARDYDPLOENENLTSKXDDSPFIYMBZIMVYTFFQHPNWXHYJXRURDVXYIMTEQNSEXTPPNMKDSCIK");
    msg.sensor_class.assign("PTQWODXPVHSPZPIGMVXTSYXUNRIYLOJBDJGLEUNPJYRBMNNGCKTYFWOBQBCUAJHNVLQNRAUADBJHKQHSTIIWOXKI");
    msg.lat = 0.3237462806667972;
    msg.lon = 0.14592088368753164;
    msg.alt = 0.7589808633660698;
    msg.heading = 0.08165954934325315;
    msg.data.assign("HQPJOIBFVHKNYDHOLVLTUAWKTPLCSAUNCNQGOVMJWSEHPMYYIIROKGUFJEYWTMEFFYEAFSIQQAEIHMAVBRSPXJRETLUTVBAXBHMLNDULIKNCQZPYF");

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
    msg.setTimeStamp(0.3116256371664915);
    msg.setSource(15510U);
    msg.setSourceEntity(201U);
    msg.setDestination(35757U);
    msg.setDestinationEntity(225U);
    msg.id.assign("ANKEUXDIDOBSPUVBABASBBFGVFVREFILWEVEPCAKHALWTUEZNGCNOQMCUTLLZQEWPTOXUFWJHYXLKGOTOTXTRGCNGIQSYLKTZDYXNHCWXHRFHEJVJMQKOXJCKBAJEYKXTBFSDTQSSLRTNBYNNICKFXOGNZCROMDXGZUGIRJIVISBORQKLJPJMMVABMDZYQRG");
    msg.sensor_class.assign("GJVHSVTFBYTJIVBJCEJYYDKFCHKSMDOIRWMJLWDOGNTSOKPQOEEJNAUMIFEPHGNXMDHDLZPGPLHBYHBWGLKDPVPYFYWZXATAZOWFLQXCB");
    msg.lat = 0.45178138021275294;
    msg.lon = 0.8279878880373659;
    msg.alt = 0.5917542989925871;
    msg.heading = 0.8984762123729529;
    msg.data.assign("PZBRZWGUMZOTTVZWSCDCOGXQMDHQUIMINKUWYIDALXCUIANGGGASTMQMQNYSBHWWSJSPXGBGZSLZBTYDFHGDCNFYLNRHSYPKRMQSBPLKQWVLPNUDYJEFKPJESORKFBOABJTDULPUMGVUIJRVZYEOURQJFVHELVOXEIBQFVUOCAAEQHWIKHTCXTWVMBOMBCND");

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
    msg.setTimeStamp(0.7280676464228946);
    msg.setSource(47562U);
    msg.setSourceEntity(208U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(121U);
    msg.id.assign("PPEQVGQWIWWQBMZMQOWXPAOQPFZORSJCHAIUSLXYTTSGISPNWJAKJPILNCKRKDSASFVLYQEKEHHTANYHUXCMHVUTHMSXLVMAMBDEGJBYOEWLYIWHDWBTKJKFYVVQEFCKNDDZWOMMAPFBQLVZBIYRRKRNUUEOZGEBXMGXJAAXKIPQTUDXCGCUGORBVFIAJFFLDORCBZCUTJENCVDGLZYROPQNNLRXZMSFCRJTDDSHSOZTNYUYIIGJXNUFGZBTK");
    msg.sensor_class.assign("BFDLYTOFJEISWZBWTUDNIAEBXNBSIPYOQXMJDOBQVNQWGNOHXVERBZICPUAGNMXXHRJIDHICMJQGLUUUZZQEPFPVFYWTCCARFNJLEZKGHSLKVKZTGNKRCRFRYLWANCATOMEVDAHEXRBYYWXVJVYZRAPXQPIGOEVTLDYHFMLMHJSTCWDCIFBAMFSCNLGQSCWMAWPMGXSZVRDPG");
    msg.lat = 0.9518142009574228;
    msg.lon = 0.6915610397774341;
    msg.alt = 0.32695839847023955;
    msg.heading = 0.4149557604296069;
    msg.data.assign("WUZGWJXGAVNEPIQDUVHFUJXBEHCNAETHFUBFCPALLRMJRCCPHCQJVRPTRASMMVDRLTYMAODVDHHDZKNFTOKMYYEOVWVDZIYUXQVDQTWYYVPSAOKGIMAKFRLAWPZPOWHBFQOFYTGJSOXLSSPSRZNNZOQMBDGSBNMBYTNWCWFCJOELMHAJLUQEIFKIETAWXQWGYXQBJU");

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
    msg.setTimeStamp(0.3549611077881454);
    msg.setSource(51819U);
    msg.setSourceEntity(70U);
    msg.setDestination(65342U);
    msg.setDestinationEntity(61U);
    msg.id.assign("HSXPIEWBLNOQOGITZRRDAOJWKCLMWORTXKVIIWNRUHGWHZIZXFXYWZPTPOICIOAATYKIGZZGKNVSXHCVGSCABKHHJDFFUQFDMMXMGBRDBTAKMDWCCCLOEQEZIQBQBERXPMNSVFQLNKUVJTCXPQKASQPHVEP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GIJETEEXLOMDYKBDHVFZNEGPAJMUCWPOSPUHUJNKMEVJYDN");
    tmp_msg_0.feature_type = 26U;
    tmp_msg_0.rgb_red = 193U;
    tmp_msg_0.rgb_green = 1U;
    tmp_msg_0.rgb_blue = 53U;
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
    msg.setTimeStamp(0.32456990524163476);
    msg.setSource(42301U);
    msg.setSourceEntity(98U);
    msg.setDestination(61199U);
    msg.setDestinationEntity(195U);
    msg.id.assign("KFAGQZVPDCWZISOGDYSJHXCVOHMXOGJUFILPGFJFJMOHKNPL");

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
    msg.setTimeStamp(0.9945086902974725);
    msg.setSource(19654U);
    msg.setSourceEntity(210U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(221U);
    msg.id.assign("MTKVYRMFDAEPORTZWOVTIAUOKXLAKVNWKQOXKIXUTVWCTDOPMABULZTLNBYJDPQCDBBEVGHWRRCKGXFMVWGSLFZZWMQCYINRJNKGWPGHPLUUQDOMZRPXCQXSMVOTPDZYCF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SQXZZLZFTILKVMZNXEDLIUXAJZHDWHRYOCHVFUBQHICCHCBDOEZFUNMYFKRBKPIZCJNMOSEKNHWEQKUBLNPKVTUQZCIKGRAHAMJSESMFHPJMCWDWGGJVGBCYWKXBOPUSAZQOXOPHYBPVJENJISUKVLIGLFORLUEEEWPCANVBPXIQXPWRTGGFC");
    tmp_msg_0.feature_type = 206U;
    tmp_msg_0.rgb_red = 187U;
    tmp_msg_0.rgb_green = 79U;
    tmp_msg_0.rgb_blue = 77U;
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
    msg.setTimeStamp(0.9511038824834483);
    msg.setSource(58566U);
    msg.setSourceEntity(159U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(254U);
    msg.id.assign("WDIVZWBRCILIMUVTVRFGOGMRZLULHHKMIPPOKYDADNUAUGTXGGGHSEDHDZALJZEQCMOHQMDEUKKAIZXUDYBSWWUPJPRFPFWBCATLCEEBHZNDTFNLORMHSRAJKFTFMGGBJAMPINHXOCSMSJSXBYTWEVOXOYBYWZNYOWXQCHFI");
    msg.feature_type = 34U;
    msg.rgb_red = 247U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 198U;

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
    msg.setTimeStamp(0.2649052832936446);
    msg.setSource(52863U);
    msg.setSourceEntity(92U);
    msg.setDestination(34479U);
    msg.setDestinationEntity(37U);
    msg.id.assign("QROJCNTNHLPQTNEDFYBQDXBCIAOFDOUUIEGNAP");
    msg.feature_type = 234U;
    msg.rgb_red = 113U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 26U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6608968739003873;
    tmp_msg_0.lon = 0.750084094316075;
    tmp_msg_0.alt = 0.45783744670104143;
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
    msg.setTimeStamp(0.2634298511833876);
    msg.setSource(16202U);
    msg.setSourceEntity(67U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(159U);
    msg.id.assign("HENVZOQZCBLKSFQALRFOCDVBGUWRBZCDLGFMEYTMSLMCSIMXAQZXAQKNEPHRDVSVCXOCNIZUWXIBWURVQKKRZEMNLIOGKVQHUPOCEWWCWUYJUHIQ");
    msg.feature_type = 123U;
    msg.rgb_red = 218U;
    msg.rgb_green = 67U;
    msg.rgb_blue = 0U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.21036068374923766;
    tmp_msg_0.lon = 0.873981966528302;
    tmp_msg_0.alt = 0.1832071850804552;
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
    msg.setTimeStamp(0.19334823600951934);
    msg.setSource(45250U);
    msg.setSourceEntity(69U);
    msg.setDestination(20313U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.10151329509835993;
    msg.lon = 0.1650036506553031;
    msg.alt = 0.9449374542038418;

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
    msg.setTimeStamp(0.8285521005618385);
    msg.setSource(63549U);
    msg.setSourceEntity(208U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.24849931709351192;
    msg.lon = 0.13818753604338385;
    msg.alt = 0.9982637041512001;

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
    msg.setTimeStamp(0.4568569200074517);
    msg.setSource(7423U);
    msg.setSourceEntity(191U);
    msg.setDestination(43126U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.9463524889508628;
    msg.lon = 0.18661052069791695;
    msg.alt = 0.28863559648322257;

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
    msg.setTimeStamp(0.3890493140749761);
    msg.setSource(50886U);
    msg.setSourceEntity(252U);
    msg.setDestination(65423U);
    msg.setDestinationEntity(63U);
    msg.type = 247U;
    msg.id.assign("AEJFMPIEUHWXVLQCASLDZWNWEFBZSWCVETXZWZZJNJLCIQTRBCFKGPZIXBJYEHSJIQVMIPWKGZLMQCQXQWZDKSFESDX");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.2757068593895424;
    tmp_msg_0.lon = 0.35509336258069557;
    tmp_msg_0.z = 0.8470667833643826;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.36289083633509045;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.start_time = 0.02192481061167373;
    tmp_msg_0.custom.assign("BCZOHQZYTSRJOJETSWTEVNRTMJITCRKZCLEERLZAVISFWSACBPRFHAMOKQRYRZNDGUOAACCNTPHVZPYTIOXNNXMSHXXKTWMJQYBBIZSPLANWPUHCWUABKLBDKQPNTEQYKEJWUYPNKXPXSQGEVJWLMUOZYBVGFNUUMRCYYLSGUKDDHPBQAMHKQMDDFBLHYFFFJLOGDLRXEVIOFIVUGPBMGLFIOOFCNWEVDZSXSVJGCDVXQTJWZKHG");
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
    msg.setTimeStamp(0.6755045186811717);
    msg.setSource(17279U);
    msg.setSourceEntity(22U);
    msg.setDestination(26239U);
    msg.setDestinationEntity(15U);
    msg.type = 69U;
    msg.id.assign("QTQFRZIPHEKUEGRIQUWDCPJHWTXBKLHFAPZEGJRCGLEJULAGEYMKQTOVNCEBOEQOCXYDFYOJIIVGJLXKBZHOBWNQIKLWDVYSPWRVKTZKUGMDVVSATZHXZTQFUXYYOMTQRSMNPRSHAUNPERMTKVPXLMUTNEVAIGKJFTADYGIBUPBDPFBWYIOFFNWQRLCWSYDACY");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.879447290450621;
    tmp_msg_0.y = 0.055363796019467726;
    tmp_msg_0.z = 0.21105865858003414;
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
    msg.setTimeStamp(0.410387790370494);
    msg.setSource(19642U);
    msg.setSourceEntity(146U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(235U);
    msg.type = 146U;
    msg.id.assign("XNOPJOJFINUOSTZCABLJEUFMQYQOKHWCZCMDQDWEPAASTYKVREAVEZYTHEWDZIYMXAWIWLCJWPFQNTTLVYLICZVOBSFGYVBNJDNKNFRBBPAJUKOSNVRS");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.33177799204750413;
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
    msg.setTimeStamp(0.42692851539089427);
    msg.setSource(16504U);
    msg.setSourceEntity(194U);
    msg.setDestination(63763U);
    msg.setDestinationEntity(44U);
    msg.localname.assign("DZLTELQBUPWPSWZUDDNOBPKCDQIKQYFBEMZXUSZYXKEQJFMURNINXMRIRKZYOUNEYBELADQZXEAHSKQCWSGVIOQUVXVS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FLJHKJIBRIJCYVDAIQUWBZAVOAZZFRPOHZARCPULUSDASBPOFZVCFNDHNRWGIUICRZNCYOLRIHSMPZLCMBFYXGEOBUUNNXSLDWXJXQMQEGUOKYNWMITFRMBAHTNBWFTAYEDDKXVSAVQCQMJNZYHUTEMSOIRLGVKMCUFJWXCYXTSMEHSRPEHLEXRSKTJKAGLFVJTVGEEDPPQZWPOOBWAVTFVXWIHK");
    tmp_msg_0.sys_type = 183U;
    tmp_msg_0.owner = 38819U;
    tmp_msg_0.lat = 0.8645865584672136;
    tmp_msg_0.lon = 0.823871254804766;
    tmp_msg_0.height = 0.5484129862488861;
    tmp_msg_0.services.assign("YZAKCEGHSVVZFUZLUICDVEDYOTJHNLGVIXTHXUAHZIFQEQFPSQELOIQHJBYQFVWGNADIPYZGNXXZWNEWPJVNL");
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
    msg.setTimeStamp(0.4783283460794462);
    msg.setSource(23459U);
    msg.setSourceEntity(30U);
    msg.setDestination(2088U);
    msg.setDestinationEntity(131U);
    msg.localname.assign("PUJHCGUKEB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AJFLKHGCOOSQWHTFYRUXKGH");
    tmp_msg_0.sys_type = 254U;
    tmp_msg_0.owner = 44769U;
    tmp_msg_0.lat = 0.6041816517490214;
    tmp_msg_0.lon = 0.8536899267911212;
    tmp_msg_0.height = 0.4681080130332723;
    tmp_msg_0.services.assign("QQDYAVHFUPRCYZVTGWJMMSPZEWJLPIKLGBIBPCPKDOOGHCESHTRBSJRTCGQYEOHCMLEPHRKZQLNJCHNKLXRPVTIVFXQMOZAUFMELOLXKZJZHBSQIGGYUSTZSDKWVWNJANQIKFBIPFFQNPEGDYALIKEJWXMSNOLPSHSXVKB");
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
    msg.setTimeStamp(0.9245885347246878);
    msg.setSource(52773U);
    msg.setSourceEntity(102U);
    msg.setDestination(48110U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("ZKYEBNTWUSRPIRPMLDAQHFCVNTAKDXDUOPQJJTMPANXTJBQBAEDGRYWTPQGISBTTGZAUGXVRTYBHYMGCLPZWCQPOVZMCEQDZXUWZCHDBUJIVQVB");

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
    msg.setTimeStamp(0.27846238652349775);
    msg.setSource(55633U);
    msg.setSourceEntity(53U);
    msg.setDestination(40364U);
    msg.setDestinationEntity(12U);
    msg.timeline.assign("ZINUUXWJVEZJPXHTPBOUUFLOILAEBIHFLOMZHQFCDBDCKUOCVOIXZYMKEHMXIWDSETZBUPNRGMFMTDPWSATYVJUHDYLJEVCRXKVPAQEIRWGOWYNITFFYBVKAUYMK");
    msg.predicate.assign("KWEFOLDABAVYOLKHSVPIDSRSXWNABDQKWDCIRDMMAECGKQKYOLUAFKVQLCBMDIJYEEZMUNHXQJGHAGYKLUDPFHWTWHFUTYSWPMBZWMVXXWEFYXODRTVFLYRQCUZUPMPCZGNSUOKRSXOUEHHLJBEEPHNRCDCELIITJYVQY");
    msg.attributes.assign("CCLJDSFYCYBINZLEXGEWQBDAZYVMJPRQUHJBGUDHGNSYKZSHCURPKGNKIXDCYODXBTKDKMSCSVBQWUAAZTNGVERQTWDUUXAFQYNPOTEXZHPAZZMKRDVFJDCFSOWWOWLWGOHMPBMS");

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
    msg.setTimeStamp(0.09106006343142825);
    msg.setSource(7445U);
    msg.setSourceEntity(174U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(147U);
    msg.timeline.assign("MUZQVMQHCOWDADYUVDCPOFLEIIR");
    msg.predicate.assign("QWZASBNDYUDGOBXYOBBOTWMMELCVHEXRFJQEMAHAFKOC");
    msg.attributes.assign("NAORGOIHDUAVZFA");

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
    msg.setTimeStamp(0.5343036573383871);
    msg.setSource(62893U);
    msg.setSourceEntity(7U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("ZEFBXLBUEAIPIGUURFJGBHDODKKJXRNZSDELHYSKKACUVQAHSKMTIFSSFENYMQOZWGNRDBWDGOYMQMJLZFZVRUDSBGXWRUCOFDMTQZLIVGWPYVIDUMAVGBLZKEYSMVJIGRQFWNUOBZZKWMSCAHQHJFTSQQLCPEMYZXJXRNKQWJYILUHRJWESWBKPJNHCVATPU");
    msg.predicate.assign("NQDVIMKLVVAICCPLGWPETBAVMJVXRIYWWLMARGGSQNUKSTNPUGOFEHVPZPRJZSNWXFNXLJBKIOBCLDXKLWRMIAKSRJMNLUOPFBOYQZCITCHBPQQSDEUTPOGWTNRMSYUUUACWVCCYIRXHSFOJFADUFREXNCBOVPHMLOEYFTPDTECFYODOGRVJYTVADHZKFUMQAGYYNHBXDZFHZYIWQSLQRIWESEELDZUKEHQTKAXQSDWAJBH");
    msg.attributes.assign("CSAWDFEVHXOYJNGPHWHODPPLPSTCANMMIXXNETSIRMKDDBVJDOYZRCZZBJABMZGFOXKNLEAPZYDWBLLRZUQBGQAFMJGUOXSSJVTBXOKRRTUEQNQEYUCFTOLMUTTNNRIHRCPUEVIGMQNHWVOKOQGMFYW");

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
    msg.setTimeStamp(0.4416929911184072);
    msg.setSource(5572U);
    msg.setSourceEntity(41U);
    msg.setDestination(35491U);
    msg.setDestinationEntity(65U);
    msg.command = 145U;
    msg.goal_id.assign("EKNTFHZRMZBGKGTUIIVK");
    msg.goal_xml.assign("YIQNZTAOCEFQPSLQCFTBKTLXECLITEYXOFDYECNSKUPEBNQOZLWYKPAYSHESQUGAJDIEZATZUGDXP");

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
    msg.setTimeStamp(0.5413493401481781);
    msg.setSource(52595U);
    msg.setSourceEntity(195U);
    msg.setDestination(41729U);
    msg.setDestinationEntity(111U);
    msg.command = 82U;
    msg.goal_id.assign("NPIYKATBIRKFMMBKTQVHPURLLURFHXJUNXPKHBDSWHQWZCAUTNRZDMPXCQRDOMNKJYIDBIQSLYEFXOLJNZHDPMLLVOWYKCNRHSIIUPMEZAUZMJRNWQGKUDZPPAVOFUDLCVCBHOYFIGGWOWEKSGJXAXAAEFXHISTTJIMTYJYEGSCFTYRZWWEGOVCPBQJLNGLEZJSCSQDUXKVNHSMBKVXTFQDZBNRFTVAAHMQFDOOZOVWESGPQGA");
    msg.goal_xml.assign("YGJTZXTOGABILOLPTBMKVPEDECGAFQGXMXYZLWQFRUKVZOIEUGRDIULJKEHWWBFOFJQCNMQLARGPOUBWNBVAYDRMXQINBKRWMTJISPLCEWJOSPKYKUHOFSKSPTCZSZBCQZLVAPQIYZQNGHZBCWEYRJGNLXXNDTXUWGDHLV");

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
    msg.setTimeStamp(0.305442804586578);
    msg.setSource(63120U);
    msg.setSourceEntity(80U);
    msg.setDestination(59043U);
    msg.setDestinationEntity(46U);
    msg.command = 135U;
    msg.goal_id.assign("TDFGIKPZTAVNDWRTWKXSPJECQONGHIHRARTKDIUOORMBQPYXBXUAZMFQXNSBNIHWHZGNGVYUWONHNZCEZEOQZUDGJKLUAFDVCJJN");
    msg.goal_xml.assign("LHFBZNBLLJIPYIVTGNISSRTLPCXEGPOBTJJOEQXUJMDSXEAYKVQWNDZJUUASYOPSGKWGPFBUWSGVLFG");

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
    msg.setTimeStamp(0.24544250874248041);
    msg.setSource(15899U);
    msg.setSourceEntity(135U);
    msg.setDestination(63611U);
    msg.setDestinationEntity(182U);
    msg.op = 91U;
    msg.goal_id.assign("CGUHFVPDTILWWUHRMUMVFICKJTWOYFTCPDLWCLPBBPXLZQXAQVXEYGZYNCSWUDOTJYZA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LFITJNTGZGNUXQUNAVMFZRZNCEHDRWCSSRXXPVVWZUIKGLHOXGXWEFLJDVUKACIBFEQHTRSUCHMBBMPNUCMMDPYHWPLPJZOVDSTXTCWYBKIRAHJKTNJTSGVOGPSSVIEOVYIDCJPRAEPBQOBCCMMYPJAQLMNYXEHZFIDDFUDLQHHLFOCTNSBWUT");
    tmp_msg_0.predicate.assign("VCHXKAZIDFVXYHMQEBTOCOJLIZHANLIOBWBRHWKTFDXKJGFSOQCZVRQVPYMFNLIQGIVZIIKPIMSYUVAKHVRSQFPJRSZFMCPXITRJFUCDTDWWHZYGRLJL");
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
    msg.setTimeStamp(0.9320369866694987);
    msg.setSource(8327U);
    msg.setSourceEntity(59U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(64U);
    msg.op = 215U;
    msg.goal_id.assign("ZNDSSDFMRWANIQB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QSVWMUEJCFWRLKVGATALXVKUGKUYWCKEOLCNZGUMVOLGNTXFOSFOTTBSEAMZKNJEAJOPJNWFZCYYOBAZFIGPFSQNHLMGEZMEWHIYTPUJDQIOZRREJAQSPHAGWSNAJMXBTSKVOQGCSDUCBHBXPIHZIETRMXPOBFDYUYGDHCFJBDKTDRULLHFDJXLXWRXKMKQQTDJBIXZHDVYYQRRMFWINPAVIBSVMHCPQYGKN");
    tmp_msg_0.predicate.assign("AWYUDBICTDKTUSSPWMRSROOUZXAFFFJTXNTSHNOJFLFPUUQHRXKIVHSWLGSDAGNSBYHCYUADIHZJBIPMKZGUKMGLCEREMQLVJGVBUEIWDQQTIAZTLMCZSKCRPOJCBGXXDRQCCVGNHHVPPNXAWAGMZOWVCYXPDNKRVYFJOAOYMIHZIHXQLJLPVEMQEB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YOOTWFDZONRHAFSKOVCFNEZPVYLKSYPQWIZSQMUDMHPAGNWHRUVJENMXZJNQGNAYXBUAZGLTRJNPGPO");
    tmp_tmp_msg_0_0.attr_type = 69U;
    tmp_tmp_msg_0_0.min.assign("ELTNWNWXFPCJHNOITDCMHZOFXLQVQBEKRGJWVVTHKTBCAALYRKQUPWDLWQDQSYESZROXAILCYDUKLBEAJRPNCVSMERAQ");
    tmp_tmp_msg_0_0.max.assign("MZYAXGMWNXDZQFTZVQERTUHQRNSCPIVDH");
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
    msg.setTimeStamp(0.6364366290601241);
    msg.setSource(44540U);
    msg.setSourceEntity(61U);
    msg.setDestination(40443U);
    msg.setDestinationEntity(156U);
    msg.op = 27U;
    msg.goal_id.assign("ZSCNYRLURADQPHAYFPIBSNGLQTGRVLGOEURDOIYKBSVGYSEXGMSBFDZLW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RFIJZNTTBDEPEYEIKQEMKCAQDYCIGOFXRQHGQMISSEXLCGGFHWTODSZJLWHKXQBOLCYSVQUDCSAOXDIEWJOMSPSGCLAZVNGLCKXZAZWFJCABPMDVASSYXJBFATVFNPTWRHNOMEOBPWIBIXAYONVMQVLXHBLMWMVYTUFMCEULUAFRVCUZYJXRYPGNRXGNHJZNKRDSIGZJFPUKDQNPHTHU");
    tmp_msg_0.predicate.assign("WVTPDHKYKCJTOCDBABEFLXOQOCJXXRWVKSXZMXDNTGQVYPMGMZGFFBUEYTLTXJQFQFODCVWSMJW");
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
    msg.setTimeStamp(0.7821469426697176);
    msg.setSource(16706U);
    msg.setSourceEntity(121U);
    msg.setDestination(50565U);
    msg.setDestinationEntity(207U);
    msg.name.assign("SCCEAGMJBZIAIFVPPEEXWUUQGNSPVNMREIRLXHIUHGMGZFAKUHHVZAJWVRKLYNOUDTPLCLSWEOWZUZXIKIFRNLTKYDSQFIRBEKBPUECQGOOAJRTGGBWLOFDNXSBWJFLYTAKCIMYNTEYVNSKQQCXMWDHETANDPITJQKDKDXMFEWPRDYSPZQGYLHXQSXRMMYPXLOCTVOTBA");
    msg.attr_type = 208U;
    msg.min.assign("GQXBCFLMEGZPATQEIXEAAVCUJMPOCMDEYBHBYJEKXBCFOARKDPJMTYGPEFQJCTOTDAUNGIPJFILJOMZHZTGWPLGGYVSNHNTDLKVSVWXHKTRWQQEYLRLFTKXPXDNLRESZWVDSVDSDUCWZIRMRZKNQTABBWBLHVYZOIFJFLZENKRSHU");
    msg.max.assign("SGQTHKGWELZHAAMJPFLFUCRBLIMOXBONSDHMBIFJRQAHDGOCWWIGJYZFAKNYYGUSKMRNFWARPVIJXYJPPEZEFBPUXPWMCPLRNUDKDNMOYFCHYJCYVQGNSUJNZRUXEGJKDZHWZDDQKUHLCAINRNVORITVKBCNBCYMZOZOCYQHJQDIRUTTVRALPTXTMAPGWPBTFSIGKAQWGFXAWMO");

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
    msg.setTimeStamp(0.2939112342049194);
    msg.setSource(58098U);
    msg.setSourceEntity(107U);
    msg.setDestination(1694U);
    msg.setDestinationEntity(132U);
    msg.name.assign("XSIMEHKHFKNZBMLLJFENUIMXQPMCIVPFGYTGQRCWDVYWSSG");
    msg.attr_type = 221U;
    msg.min.assign("QFDRTNTMJAQMVYPFWCRNOFTHJEGUAPDMXLYVAGYUXKBYIFGXSBCADZCJBMGUVHCUISVQEGSIFBBWLYYTHBWUPKGSZMCACMCOZAPH");
    msg.max.assign("MQGTAFVOADXYLVNQOYDKTFLEGHAPIZ");

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
    msg.setTimeStamp(0.3585064773921882);
    msg.setSource(53645U);
    msg.setSourceEntity(0U);
    msg.setDestination(59300U);
    msg.setDestinationEntity(197U);
    msg.name.assign("AHDMZQKGXAUAPHTLBBXQHEWDEBXSWOSY");
    msg.attr_type = 133U;
    msg.min.assign("FWSGDYTQFLDNARKTZXTCKERPUEAKONTJFFMYF");
    msg.max.assign("KRGHCYXOUWBUYLCIAJVPATCFCBKCPRSSRSMFEKGTSSVGGFUQNZTBATPENQNBLZQTIVQPRFYDEJWMIFSKHDOHTBGHLRLTXUBGCKUYIMRWOPCGSACOQGEBJOFHUTYUNELEWNZADLURHFKIIMMNISMEXWDQNABOEWIPPYDZNVKULDHJKZTZWFDAWVWSJALXVKOVJWAVRRECBGPUPZZMLRMBKMDXNJQAO");

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
    msg.setTimeStamp(0.5761418729545327);
    msg.setSource(15337U);
    msg.setSourceEntity(142U);
    msg.setDestination(62885U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("KPNWJOPHXQUZBZCZKVHGJQDYBDIEARQHWVAPLITOFQXFZLPCUUNRXGMTRNGZQUKSNRLJWYMVFIRVSLQSTMCCNSJZGBBBFXAFCPHUAPZEWWOLFATOXVKJXIADRCNDZGQCBOCYQGVKWRUTTOFVDMLBFYMDBOYPWXMLCEZKVDSEHRFPJZFSALYUXONDVOTHSBDUKEGKHREYJRLYCI");
    msg.predicate.assign("JZLFPPJMNMIAIFRZEXHATQROIZFZUSALQJNDWWDJEWLTTXFSEUQEUKHRVWMUGKPXYEJJTYMXVC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RPUDJCTZUVYULUMCHOLESSBEHRSOQWOETVJNSTXTRG");
    tmp_msg_0.attr_type = 188U;
    tmp_msg_0.min.assign("ORMPZFKNPPHVPZQYAIZSRUCHCKZOMBKIRTWPAYWRXFQIEJTJYQMFXYEHGGVTAVJWEHRSOTCGRXLMYBQUYE");
    tmp_msg_0.max.assign("YGHVZFKDLYTUITCNJPBPMOHPNSOEVGKALHSCBHASJKMLEDKGHBMSOPXUKMZFJWBGWWOTFDEOQWNTJZHTBRBJAQIHGTEPUOEAVDKBZNMMLJONKBUNRX");
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
    msg.setTimeStamp(0.5155077172257868);
    msg.setSource(486U);
    msg.setSourceEntity(101U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("HFAYGKTDZZHFWYOMLNXDCKQXXQHAZYGXVJQFHHRB");
    msg.predicate.assign("VBRQEQUWQVKTNOGJJBZRPOXNRSIARXSKHNMVSORIDPBISLIEWECNLZHICNGUSMWAQMIHBVWTHUYFCRAAJULAHJFRYXNZPZFPLMXEOJEYMPFPSGGTMJQFAKOGIDHZOCVMZKRW");

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
    msg.setTimeStamp(0.9268512183303947);
    msg.setSource(57795U);
    msg.setSourceEntity(123U);
    msg.setDestination(31622U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("EHADLDDLGIFGLGHJXEXKNYBZEQHKSPCUZXFVSMXOVIHOUTABCFIZWOMSZRRVXKBMAXZVJTKONPJWQPFRUDUCQKVTCGYGKRSMRHTXOVFKSZCUYNWVMGNOFBNCJEDZGPFVVMUVOJFSEWRHWUAHYCILQANPGIPEJQYBREWJHDSXKJPCUEOAAZYBMLRUYA");
    msg.predicate.assign("QJFJHCRVDCIKLLADMPLJWZTUAQQESXGJZTEZPPUXKYVENGUHOAKOWCYFVUGWYBIQDTMQTMZBCRCXKSDGJCVUIMAKDQWRFTGPGFVWITKQDREXPNQMSUWYL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PGVLUQZLCAJFCEUGZTIWCZTPRDJEIGQTLJHILFAIAYXXXAOBNUTMKURNCEVCKGFBBFJMNKSSWEKYNSIVHZGNGALHRDRWVOKPKANMQWIXXBLILEGERHBDEFJSAQHNPYZTBDIHMDTCORTUOQEZJWUSCOSZYYXKMCDFIUAFVJJKQGQOVLLUBVYWVNOWXRHVQ");
    tmp_msg_0.attr_type = 230U;
    tmp_msg_0.min.assign("ACVMQILKTADOLMZYWCXTPOXIEMEVBQTQJUIRKTHSHMXKIOMWRQDGJJXZCUWRZVBULUUIMGAHYECKWJGMSRQZUIWTWLNNTGCNOUHRCOKTGWTAVSRJYNPNIXGMFASLCFUPYABFEXOFMZOVDGBNJQKVXCRHYKDSEJXIH");
    tmp_msg_0.max.assign("IBOMTPGYVYWWUQJNLWDQWANTAAAHYMJZDLLZBCDJSKSNUCIPVWBYSHHHXFPOLQKSEAIRTDYZDIZEHRCQURHHNYIEEKHZXGTLXFYZPUVAXFBQNQRGDDJTNJPVSCCMGWYPBG");
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
    msg.setTimeStamp(0.1377613529779227);
    msg.setSource(18472U);
    msg.setSourceEntity(33U);
    msg.setDestination(32683U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("VKYOSCACPBEQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MXMSAYJNGHJRLAAUNIBZOWIECGCRXIXBSWRMYNPJXNYHWLUNUCUISETEFSKBTIBQZWHEQMUFLHOGQCZDPBADAWDKEBCXMMYPONAYPNYXYRCFLKSLWDBLVJTQORSIZSGVGIPOKOKHV");
    tmp_msg_0.predicate.assign("ZJHKNSCYGHNBSKRZSBRLFUHCWTVUNJLPQJK");
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
    msg.setTimeStamp(0.4837933134536695);
    msg.setSource(4699U);
    msg.setSourceEntity(45U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(128U);
    msg.reactor.assign("MICLHEPDMNIKCIEYEOTJOIBCBFJJGGKHQQNLHZAJRLOHBCYAIYNQZSPIGSXUGBIT");

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
    msg.setTimeStamp(0.4869592668753384);
    msg.setSource(45740U);
    msg.setSourceEntity(229U);
    msg.setDestination(23636U);
    msg.setDestinationEntity(198U);
    msg.reactor.assign("BRVBMHJPGCEAIYXANYPTBOLNLEFFUKLPGJODIELKWOCZXNCGBHTVYKTQMHDFLGUBFLQSDVIIMMDMFAQZQHWCPVYNJGOVWQJNUIZDYUDBGTTKXGNJTMCSUJKEHWYOHSWKYLOHRNPAXBXATGLOZRATUEQOPIREEBJSIYXGDVDMKTFXLRVQHXZAFSUGRZMSM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SPAXOHVCHAPKZLRAPFOQIKQJLGACRKQIXUVVPCSPHETQFTCXCWLCILKNAKPMBOYGUILHBNODQARLOHMQXGXFSFRHBTVXRURXDNGUNBIEZESEHHMSXOJKYQJUSYLEOJBCMRWDYGEVGJTFMWLBJSDWEQZYGWIIMJTTHZBWYUCYNJERAISEFKCADYWPAOZWDZYDNTIJXQRRTPUZFCXIVNDHMUBSTNZUQEUKYGFV");
    tmp_msg_0.predicate.assign("KVENRKYIJBCLCYUSQVCAEFMFLTFRAXSAPKPWXR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JSHQKUFETNCFWCKCNDIVYNUQFWKKBTQSHNBVJDLMVOQYPDUXGUZOGXHPNZIAAHFXXMZATONRKFWYGDOHHVZTCJVUQFYBRLIWSGHETKPOMYHZSMAIYUJTMCMNMQQLILSUSBPMOVZRCJSRCXKNYBXRTQWIILIZEVWXARHPOYBCPBSX");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("PHRBQKVONQEGTYDXWVKTJWSBYRGWRSNBCIMVGAKHWOUJLWVRCACFUPIGPCZTPTIGOZR");
    tmp_tmp_msg_0_0.max.assign("RMFSJQHGYJXHLLAYBQMLKLOWBVODMJTMKHRDUMYIKHXUVGYKCVOATTSNDSUIOIUEEVHWGJPLUXVZCLZQTXWJCABFOOWACTRXWKZXGNAIRZTIFEXNVJPWQLQKGFBWKUQXSSNEPQVSTWLBBYBDRIDJEPZNPNYPLIKTYEOJFEMUCCUZPFWTGPMCQBHFJYSB");
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
    msg.setTimeStamp(0.04994259343152918);
    msg.setSource(39912U);
    msg.setSourceEntity(131U);
    msg.setDestination(28068U);
    msg.setDestinationEntity(62U);
    msg.topic.assign("EFSCKVUMZAOQMYZUCDSNDVXRNHRATYXIXPDTTAMMNJMBXWGRTDIQFNOLKZWSXWXESYICIGJVBHNOOBJTBVIWBUEMLDZHCVLWHBSJKWBAELRYOJNTGROAECGKHSJDVBXGAPPFAFHJSOOK");
    msg.data.assign("OBRKPAVUYLMXYGHOJSVPMSLPPNZAIUGXEHFRRAJBIJFUMXKCIUZJYYHVZORUMMNLYYLEWGKBWAORPLHAVVUZVYAWEBGSKETBGNVNRIWRJEXHCOFMRJXDSZBTKWCTWKGCSTHSFEOCVDTQFCWTWRAXSLUUHGXNJYJDKTOHFQFWDBPEGZSZCCZDRMPMJGJFSEGADEYHENQIHXQLIAQBMXVOYLITZTKAPFBVDIUINKLDO");

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
    msg.setTimeStamp(0.8329942369289483);
    msg.setSource(18889U);
    msg.setSourceEntity(214U);
    msg.setDestination(28146U);
    msg.setDestinationEntity(28U);
    msg.topic.assign("WAZZHKORGBMOYWNTSJWRDAPZNOYFKGQWMLGFAJGIAXKSTENLLYGQFERADF");
    msg.data.assign("UUMRUJRQDIKGENJCMSJCPUBPIFWHOYLZQLDGVMZNMFFAIMHDXLSZGAVNBYVFEBKSBTVCRWKTSVQJTHZLBZDLDGPOMTJAWXWXQEQNIVQJXETHEYBASBTWTBCQXYIQIFQOBRPLKAPMFLSAMNUAIYIGXAWLRHVFKOYMPLFUKNNXOAXGCIWEULXYUEQWCISWGFZEHDPKDPRJOEMV");

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
    msg.setTimeStamp(0.06207258604427457);
    msg.setSource(48610U);
    msg.setSourceEntity(37U);
    msg.setDestination(45210U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("NDPCGIDNWBGGIUNMSVCTOTKOCJWYONMBRMCZQDWLLWEDGUYYJMRLRKCFOUJTLHUIOAPPJXJXIFKOEHGUXZMRZTAFMDZILNYLV");
    msg.data.assign("AKVOZOXEIBVEWQDACVZNMUUGPDOYAJNLAFCRSIPXPTAXOLJQNUKHZQDRJRICSHVRGBIUUZWRFWEGFLURHBETSLLGBGEVCCWJDFMIFWJJSGMKTLCDUHTXUXPQNBBMKFPWTQHSRMLVEXPDRSKATMDKOSIQZMNGMPLJXXSWPKITTYZYNBXQHHPUYYNIGYHFKOSAAIMUEHSACRWWFQBYTJJFCYV");

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
    msg.setTimeStamp(0.07040405184312482);
    msg.setSource(4343U);
    msg.setSourceEntity(15U);
    msg.setDestination(12404U);
    msg.setDestinationEntity(65U);
    msg.frameid = 190U;
    const signed char tmp_msg_0[] = {90, 19, 76, -96, 61, -42, -118, -116, 103, -32, -26, 18, -96, -34, 41, 116, 38, -73, -56, -50, 7, -12, 45, -38, 93, 66, -78, 98, -38, -28, 51, 93, 31, -77, 45, 101, -72, 54, -13, 1, -74, -75, 26, -65, 36, 90, 121, 10, 33, 24, 30, -79, 8, -43, 91, -87, 10, -10, 66, -100, 24, 66, 84, -105, -83, 15, 49, -41, -113, -38, -62, -4, 84, 70, -128};
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
    msg.setTimeStamp(0.8890215323198577);
    msg.setSource(22413U);
    msg.setSourceEntity(206U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(140U);
    msg.frameid = 244U;
    const signed char tmp_msg_0[] = {36, -49, -35, 39, -70, 35, -97, 25, -35, -25, -69, -69, 123, 57, 10, -107, -82, 82, -124, 3, 110, -112, -37, -104, 83, 105, 79, -34, -25, 27, 93, -108, -128, -23, -90, -107, 123, -81, 33, 109, -41, -112, -124, 20, -76, 37, 58, -104, -121, 125, 34, 104, 11, 64, 125, -32, 41};
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
    msg.setTimeStamp(0.19359706034474122);
    msg.setSource(38921U);
    msg.setSourceEntity(146U);
    msg.setDestination(34475U);
    msg.setDestinationEntity(147U);
    msg.frameid = 245U;
    const signed char tmp_msg_0[] = {91, -81, -76, 72, 9, 104, 113, 52, -68, -106, 17, -32, -41, -103, -59, -42, -54, 79, -30, 86, 51, 45, -86, 117, 22, -108, 18, 36, 110, -44, -112, -4, 73, -116, 98, 82, -51, 12, -49, 12, 87, 66, -66, 99, -92, 95, -50, 67, 99, 50, -54, 115, -99, -2, -2, -58, 2, -85, 10, 101, -88, -127, 37, 112, 89, -89, -104, 92, -54, -62, -44, 53, 20, -72, -63, -77, 45, -97, -33, -54, 94, -68, -47, -21, 110, -104, 66, 5, -84, 49, -18, 40, 125, -82, 111, -62, 73, 64, -39, 123, 27, 51, 114, -101, 106, 41, 4, -24, -81, -115, 86, -44, -51, -101, -121, -65, -89, -1, 117, -92, -11, -75, 48, -53, -103, -34, -56, 36, 120, -1, 77, -107, 107, 39, 65, 113, 121, 31, -106, -28, 87, 46, 41, -72, -59, 87, 103, 44, 117, 33, -11, 81, 77, -82, 82, -66, -128, -88, -76, -23, 102, 112, 26, -94, 111, -4, -33, 120, -56, 26, 72, 98, 75, -28, -98, -24, -97, 22, -12, 95, 91, 47, 66, -127, 48, 121, 6, 7, -111, 51, 32, -107, 104, 23, -12, -54, 28, 50, 48, -127, 62, -4, -5, -34, -14, 77, -6, 16, 83, 118, 68, -127, -31, 84, 64, 100, -32, 117, -46, -4, -47, -107, -81, -17, 43, 23, 100, -55, 10, 107, -117, -73, -112, -5, 118, -19, 1, 60, 5, 87, 75, -84, -10, -44, -43, -11, -93, 118, -102, -122, 104, 64};
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
    msg.setTimeStamp(0.26172811287638986);
    msg.setSource(42291U);
    msg.setSourceEntity(0U);
    msg.setDestination(39116U);
    msg.setDestinationEntity(119U);
    msg.fps = 114U;
    msg.quality = 57U;
    msg.reps = 8U;
    msg.tsize = 148U;

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
    msg.setTimeStamp(0.5046391499207038);
    msg.setSource(271U);
    msg.setSourceEntity(98U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(171U);
    msg.fps = 253U;
    msg.quality = 124U;
    msg.reps = 245U;
    msg.tsize = 32U;

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
    msg.setTimeStamp(0.05534183465784237);
    msg.setSource(6106U);
    msg.setSourceEntity(188U);
    msg.setDestination(18935U);
    msg.setDestinationEntity(180U);
    msg.fps = 118U;
    msg.quality = 181U;
    msg.reps = 20U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.08169241767564872);
    msg.setSource(51112U);
    msg.setSourceEntity(207U);
    msg.setDestination(24753U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.9727252660210655;
    msg.lon = 0.39783627847353653;
    msg.depth = 36U;
    msg.speed = 0.64413591119341;
    msg.psi = 0.37731864194553333;

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
    msg.setTimeStamp(0.6285410087328324);
    msg.setSource(14293U);
    msg.setSourceEntity(11U);
    msg.setDestination(2829U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.7877995040757683;
    msg.lon = 0.9014208454768544;
    msg.depth = 248U;
    msg.speed = 0.9862140533022582;
    msg.psi = 0.05139113794848138;

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
    msg.setTimeStamp(0.9274291527364759);
    msg.setSource(16202U);
    msg.setSourceEntity(162U);
    msg.setDestination(51455U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.48060770484174453;
    msg.lon = 0.7207735561145897;
    msg.depth = 163U;
    msg.speed = 0.3129908426142246;
    msg.psi = 0.22028720657733836;

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
    msg.setTimeStamp(0.9434114394336375);
    msg.setSource(55298U);
    msg.setSourceEntity(128U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(129U);
    msg.label.assign("GOQSOTCRZTTKBE");
    msg.lat = 0.9410853880631436;
    msg.lon = 0.2217922889541013;
    msg.z = 0.9197844912918837;
    msg.z_units = 165U;
    msg.cog = 0.11991076308374682;
    msg.sog = 0.40292374253411767;

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
    msg.setTimeStamp(0.11401215271795617);
    msg.setSource(21618U);
    msg.setSourceEntity(37U);
    msg.setDestination(11555U);
    msg.setDestinationEntity(173U);
    msg.label.assign("CFWMZQTXNLAWFUQHVIOZBJBIKHPURXNPOZVIHZHBYMOECYAKZCUPWQGCWLQOPZYNBYXSBVESZJWCKGXNCZAIFMNGWKFMGSPTSERKFFQNTTOUVRLEHATVEDS");
    msg.lat = 0.3901712613644319;
    msg.lon = 0.37051599274500757;
    msg.z = 0.8805363088757773;
    msg.z_units = 51U;
    msg.cog = 0.3671664163237882;
    msg.sog = 0.3637211575964818;

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
    msg.setTimeStamp(0.9881372691499282);
    msg.setSource(59103U);
    msg.setSourceEntity(102U);
    msg.setDestination(30847U);
    msg.setDestinationEntity(59U);
    msg.label.assign("QZNQGAAOMQVNBGAWOWEYQTITJHMVLRZXHVMEVEYKFXAXVPKIWRBBMSPAFWBSDLWOMHJBRV");
    msg.lat = 0.14629592788512602;
    msg.lon = 0.22760011301694938;
    msg.z = 0.7895467097835331;
    msg.z_units = 139U;
    msg.cog = 0.3528240391271674;
    msg.sog = 0.8688375015646905;

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
    msg.setTimeStamp(0.453674640072087);
    msg.setSource(51081U);
    msg.setSourceEntity(79U);
    msg.setDestination(39770U);
    msg.setDestinationEntity(88U);
    msg.name.assign("SIANLVUZSTSQQNOYEVWXPEDFRHKQMYYDD");
    msg.value.assign("WRUYTVLGXUAJEBTHCMQSHCCKPTOUZTPXBMWRVJYHWOQZOHTEEOACUZGEHVDDNUIZCKSLTRADDNDVYUGSLMVPHFEIOLFETKQDGPAVZ");

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
    msg.setTimeStamp(0.9702935415735879);
    msg.setSource(8742U);
    msg.setSourceEntity(192U);
    msg.setDestination(2280U);
    msg.setDestinationEntity(188U);
    msg.name.assign("BXJJXMVHOVGXTTHLAHMTBPUDUPAQTNDZRDRLTOFQEWGG");
    msg.value.assign("EWXPGOEVCFYJRYICYZWXOALFEWGMSJZGMJUWUHGELQRIFCRXBMFORUPRBROMJPDQ");

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
    msg.setTimeStamp(0.6140747086594844);
    msg.setSource(16776U);
    msg.setSourceEntity(195U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(183U);
    msg.name.assign("AIIUKGSEHADKVZQNVXXPIBEVLXYBYBDGBMXUYOSXVEAMHVKZPGMLWFSQRDRRLHCHWUMNFJIKLAPGERGQOFJYUOTUMQZTVAEFWNGETONZDZOCPROJKLCPH");
    msg.value.assign("LXRJTGCBVFGVTELLCSQCHYQMTPZEVPDVRWCABNWGZF");

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
    msg.setTimeStamp(0.057893454935602495);
    msg.setSource(5690U);
    msg.setSourceEntity(31U);
    msg.setDestination(65486U);
    msg.setDestinationEntity(117U);
    msg.name.assign("HSVGVRVGJJLDFHQKRTXLBZKMPZNHUCSRDFYDUJRUNOQFSZXNPN");

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
    msg.setTimeStamp(0.3152124022159677);
    msg.setSource(50855U);
    msg.setSourceEntity(148U);
    msg.setDestination(30863U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ZLBPOHQACHRHAOHWKNNMERJNEPPCCSEXUKWHWROBUYYRWEIBYGCRIDOXNIKWGIVQFJLLQNDYSZSKYMTSPFTHQATGWSJOACZHIMFNIPLZGUKLPYSFKRAOCLVMHBPVFMXBOZKSDJBYJEWJIEIMXQCFTPKDUBZGVHXJYMPVVFVJALDLMQQDMTU");

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
    msg.setTimeStamp(0.991722187907974);
    msg.setSource(53824U);
    msg.setSourceEntity(150U);
    msg.setDestination(22637U);
    msg.setDestinationEntity(52U);
    msg.name.assign("INZSPQCKWQYEXGJJBLEZLGZTWCZXKRMWWEFPBVQLNMTL");

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
    msg.setTimeStamp(0.2053929704703742);
    msg.setSource(32861U);
    msg.setSourceEntity(192U);
    msg.setDestination(12633U);
    msg.setDestinationEntity(214U);
    msg.name.assign("MCUOGGSLGTNYXSGLJITPUYPMPJEWKACLHLYRKYTYAVQDMVIOWUQVVBSQSCMWYWRHKDRDXZZUAPWJAGNUDIKNZBDJVSACAOBKLOMCHQSSOIJL");
    msg.visibility.assign("YBPBADNOKMLMHWBFJEUGEUCWXDJHILIKEYYWNNLMLWONARRUHQBSBCHLGXTLVATFCAIFIAQOCGWCDWONORLQORYLRYDQBJHITHZKPKKJVVCCTNMYEQYASIBVQGFENYPRSDSLAMDGRFELCMQYZ");
    msg.scope.assign("EJGCINTOUXAWYGDGFKZLZNQNWOUWBWPSYPFDQAZCOHDVIFORKZVRBJAYNBQEHMTCDSHXIUZXVXPQVCSYLOQLYWBYKLCNMXEDEJK");

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
    msg.setTimeStamp(0.6158050776685238);
    msg.setSource(39588U);
    msg.setSourceEntity(33U);
    msg.setDestination(5559U);
    msg.setDestinationEntity(6U);
    msg.name.assign("EABGQBLENXMWLIEDITPGNLKRUUAVRNZQBGCBKFJPFWPXFEATSWXIHWLFDSHYFSUVRMZNGDORGZNCMMKXOVOWHWKATIGJKVUTEXNSONJJKSLDLACPPMZACDRFQKYZLDYEVPD");
    msg.visibility.assign("RRTCGJFTRBVFQRSQJNSWUAWDCQOYYLNMYIXMUGHZJIQNIAQLPTXTABAXCXAHXMCWQPDIHNFNCVWAKIMBALXMBEKKIMLJAZQWIJGIRZFBMOEBDHUFUWAVTTNYNDZJZTGQZXYLXOGUEKPERFBSPQKBODIVPGKPDBRJUZUGREZYEGSCWYEVZJSDOOHAUWFEUMFKTYKMHLKSXGHMONEXDKFBPFWCVVHJJDUIRLS");
    msg.scope.assign("GZHBFJWJODWKREAFMTRQTWOONUVRCSIGJVYJQCBNJYLABCEKTSGUKBQGNJJEVNEDDAAKVSOMNPHBGYHDEQWEPSOTEMXCXEWROLQQIUCPFAIQGOLKVUWMIFBNVISBZNBLNURUFPTYRAISZXXAGADORDVYJJZFTKDZCHXQIETHQXKPDLANFIHMVGCHLDQSYXWTUXCZTBLPAWZLWEZKLUZMMUFPMGORPM");

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
    msg.setTimeStamp(0.38705750770292446);
    msg.setSource(54399U);
    msg.setSourceEntity(65U);
    msg.setDestination(61047U);
    msg.setDestinationEntity(24U);
    msg.name.assign("RZNITJIYBGFPHBQEBSYFDMSZJXTUKRJGNRSYCJDIJVUZHL");
    msg.visibility.assign("WHEYQLDVSWJUVMFCRNOFQRNEWZIBHRRMVAVYZMSCKNSIVBMVJOQQWPAKFZDOCFDGZOYGRTHFJEUETURTUIDIZYNLNUDGYMSPFHCJXNXXIBEUQLSGYITXOSNGWYGDAJPVKCQDRXKNCAOIYTKLPCNUZFPUBDMMTXJVEPHQASQMTVEDLKHAKPTIXBDXRTBAFOPHMMKLPBWXSLHFIWRWZJGHHZSCULWJFCKQIQGANPZXZEETLOOAJVAWJBRBYKBC");
    msg.scope.assign("EWBWINDXQXVYIHXMNSTWOVTLFHFVUHLZBDSPZAYQGJQMAFLPJDTRUDUABXKFKBTGEXUYWCPSUPQKVWLDQODRHGGAEKGSJBHLTGFXQTDJRVIVJQNAYKKOLMIWJISBZACTYNGWFPVIEKOMCSOFNMEVNHINVURCMXAKMDHJLEQKTRRAMWPUCZRSEZULRGXCNCAAHDMFVJNHSOHB");

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
    msg.setTimeStamp(0.1859015081947486);
    msg.setSource(27366U);
    msg.setSourceEntity(152U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(25U);
    msg.name.assign("ZAITMKISRKSVKBAVRQBGRDDALWZLRTQRXJUXCPDQHMHQTMKPVCZZAKNHSOMMRDZQERSKVFFNVYVSGCBGYJSIZXVYCSGBEWEOOHFFLOPMYXADTEZRINEONBAGUFOITEERLUAWWEVJHLYYQAZLHXOQFDDUMUPSNSWPUSCUXFPMBIJWJJZJYQNIHHGTINXVGPIKOEXUBABYNFOCJWLQCDWRPMPYHFLCGVOKUZL");

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
    msg.setTimeStamp(0.001536325094677271);
    msg.setSource(15769U);
    msg.setSourceEntity(145U);
    msg.setDestination(34825U);
    msg.setDestinationEntity(241U);
    msg.name.assign("RVCUNKLQXNWWLRBQSBRVEKPKYPXFMCEWWTPZQQDHQEZEHROPUVIFSHCAGEMDLBVSXVXEUCOWJNJBUOCAEJHVZQYITQSZZVNDGUPLSUFBYMXUMJASGRVIQJNPTDKITLNCMIERAFFIWHVLOCOODFBGXSCATWPALSKGHUIMLBGRZFXAFODRRTYADKNHLXPKTMHJXJKBGGZAUEYZAOJIH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IFFCTAVPVCCGIDFWCXQNYKSJHPERNJYPTKWXTQWQBSWTRMKBXJAQQUWAYNJEVTANHIFLDRCTZCJAKEMTFGWWDLESWFEUSVRYOLSFODSGBPQZPSSIPTOBGGIPNBSYIQMQKSKODXKMVVLOURBVUDOHCJNBPTDALVYUHMNIXOOIVEIGMGMBXJUZFZCJLDFKRZUTNFDUEVLMXAMHBPHYOWRYGUNIDUJZEJPAXQZKRNEGZARHA");
    tmp_msg_0.value.assign("XPAULEVMHZFLIKFDVTPJRUBSCRUXCDSHSJLJIQVQYXBPXZJGSIXOYHTPNQLWJKSNJ");
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
    msg.setTimeStamp(0.5167020600700588);
    msg.setSource(47850U);
    msg.setSourceEntity(241U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(231U);
    msg.name.assign("BOXAPWFXQICULDTWMEWAJMLALGBUCNYJFTMZMSCOYMHPGREADVVNCEKHBWWUSCRULAOYSRWEPFBXTJVSVMEQGZXUGRXDGNIFNZKFKTREHAHHMYJZBOYQIKQFAKZLXJNBBQJJSEYRNYQPKITQSLATFWVPIHPRVFORPZGOXDNSNYKZWIBJHPNGFOVLXJPUTTDIQLOUMLADCSUDDGZWHUQIZYOHVC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KDIHLZDBXJUIZPPVJNQGHMDFZHSVETFWZHADWMNIATATFXOGTBXGNNKWT");
    tmp_msg_0.value.assign("FCTBFARSANUBQMCTRHLDHZMDPPEGECJILVFPBXISUTBKVSAXAYLKQULXOEPHUNTFSTPOHQJPKPFNNGJVKKXLZEJZUROVXBWTQKXKDLHFDNWZFMCDHOXIVIPQXQPABMDTJXVASLNSWAOZYRBDEGJNDCHNYRGZXRLIROGWGDYRRMOS");
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
    msg.setTimeStamp(0.09473602872075304);
    msg.setSource(31688U);
    msg.setSourceEntity(240U);
    msg.setDestination(3992U);
    msg.setDestinationEntity(57U);
    msg.name.assign("JWSIBKGQYQZETVQBEYYUVJUDKARKECXFELMQONVEHLLZKIODIDTAXGFJXRIAPTPSCXKZTGLYDBRICCEXAZPZQEWXNPNFGMMGZYCBSUWJKTLWCAONGHAVMFZGJHBXMT");

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
    msg.setTimeStamp(0.2902046018819908);
    msg.setSource(44585U);
    msg.setSourceEntity(76U);
    msg.setDestination(34293U);
    msg.setDestinationEntity(83U);
    msg.name.assign("RTYSCTRDXRUAZOJIDULTYXROSNBSBCFVMXPTMBFVKQSUCSNFLVHHSFYOPWCGAUQNZBHCWETXFWREFNAYQPRODGZWTHPNLYNNOBH");

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
    msg.setTimeStamp(0.7057493404321625);
    msg.setSource(61323U);
    msg.setSourceEntity(95U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(251U);
    msg.name.assign("TNQGEBSJXBWUJCVXLSQFIMRFKSTKPZGAETWOADXWMWHTASMMYXKGVQUPNAOMDGILDMYWAEYPSKLHPYHFYXJAXZVSKLCOKBLOGZJBISBEHLBUYVHZKOCPUPIZOCVVQBXNDNJHJEMATYIJNYSFWRPFGRGQQRECCXWFMY");

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
    msg.setTimeStamp(0.2986845796191919);
    msg.setSource(24332U);
    msg.setSourceEntity(35U);
    msg.setDestination(31469U);
    msg.setDestinationEntity(7U);
    msg.timeout = 492289803U;

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
    msg.setTimeStamp(0.3210927821133258);
    msg.setSource(54667U);
    msg.setSourceEntity(119U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(73U);
    msg.timeout = 2900412899U;

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
    msg.setTimeStamp(0.2560903322467958);
    msg.setSource(43982U);
    msg.setSourceEntity(221U);
    msg.setDestination(50220U);
    msg.setDestinationEntity(44U);
    msg.timeout = 2551418597U;

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
    msg.setTimeStamp(0.46680462981478543);
    msg.setSource(4571U);
    msg.setSourceEntity(2U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(111U);
    msg.sessid = 4193818469U;

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
    msg.setTimeStamp(0.16162414448947438);
    msg.setSource(28873U);
    msg.setSourceEntity(27U);
    msg.setDestination(25928U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1280408854U;

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
    msg.setTimeStamp(0.3834538426812677);
    msg.setSource(2210U);
    msg.setSourceEntity(93U);
    msg.setDestination(115U);
    msg.setDestinationEntity(242U);
    msg.sessid = 2910783264U;

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
    msg.setTimeStamp(0.35587336486886334);
    msg.setSource(6983U);
    msg.setSourceEntity(79U);
    msg.setDestination(63024U);
    msg.setDestinationEntity(80U);
    msg.sessid = 3771640316U;
    msg.messages.assign("CCHIDPAGUJEXVFTTSDVKNAZCOQKFIWIDGHUEYPIJOCEUMLXNWAIGPCDAJDDFRHSWTSAVLSKQZHDMYQLYUMYLAYYEIJBBIRWNOBKQSB");

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
    msg.setTimeStamp(0.4120126320068215);
    msg.setSource(60447U);
    msg.setSourceEntity(22U);
    msg.setDestination(63195U);
    msg.setDestinationEntity(194U);
    msg.sessid = 490756399U;
    msg.messages.assign("PYLZCYYFIDRUGZJPZEXMVANBPPDCASDVIHTEIFOJAOPCXLN");

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
    msg.setTimeStamp(0.38519372832573895);
    msg.setSource(58553U);
    msg.setSourceEntity(80U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3467175133U;
    msg.messages.assign("GLLZMUNJJIVDYENUFUTOVQTTRSMPOABOXWPKVPFBGYAZAZMDWYXHJRWEOPQKKYFQHIEGASHHGYECCCXBIHMVSQVBKRBMSASBXAHDEWDDSDSJKZIWBKZYTNCBNOUTXDWIFFZBMJXQQWCKTAVQCOIWXPYZTVOFICALDEKFLRPRZSBRRAUIPPGSVJFENKGDIXOUFJMNVUDHOHNQTRRCWQYCXTYSTAHMOJWGZPENGLFJKMEUGXQYNLUP");

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
    msg.setTimeStamp(0.4536496543206968);
    msg.setSource(38468U);
    msg.setSourceEntity(165U);
    msg.setDestination(14826U);
    msg.setDestinationEntity(235U);
    msg.sessid = 1249298701U;

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
    msg.setTimeStamp(0.6184244600710729);
    msg.setSource(59480U);
    msg.setSourceEntity(183U);
    msg.setDestination(61585U);
    msg.setDestinationEntity(60U);
    msg.sessid = 240256683U;

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
    msg.setTimeStamp(0.9063981536318864);
    msg.setSource(22033U);
    msg.setSourceEntity(11U);
    msg.setDestination(40857U);
    msg.setDestinationEntity(202U);
    msg.sessid = 3236732257U;

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
    msg.setTimeStamp(0.11746525075118541);
    msg.setSource(21237U);
    msg.setSourceEntity(244U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(130U);
    msg.sessid = 2967766898U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.6737210236093782);
    msg.setSource(52931U);
    msg.setSourceEntity(50U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1545068154U;
    msg.status = 224U;

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
    msg.setTimeStamp(0.057374075231713895);
    msg.setSource(64351U);
    msg.setSourceEntity(193U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3698937194U;
    msg.status = 129U;

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
    msg.setTimeStamp(0.1760830787936012);
    msg.setSource(1845U);
    msg.setSourceEntity(107U);
    msg.setDestination(45189U);
    msg.setDestinationEntity(220U);
    msg.name.assign("EZQSUJYSBRADHHZLOSBRQUAPWIOHFXFQFGFHFIJRSJJZMOJRGYENIYVKPJOCGWBRQNELBVFMMTJLALSAITIZZAWUDDEVGDSFDKYJLZXPRECLVAGSEWXNTXOUWBYPNGLPKSKFIPBOQCTDBAYGCQLYVMNTMIOZDTOKKUMCVCZHZAENUTUCVNKNXIQ");

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
    msg.setTimeStamp(0.05502868385021209);
    msg.setSource(25032U);
    msg.setSourceEntity(187U);
    msg.setDestination(24116U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZLHPGIATTVWGKIRAYIHAHQDGCMLOSIAOQIF");

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
    msg.setTimeStamp(0.12704824108663793);
    msg.setSource(2147U);
    msg.setSourceEntity(87U);
    msg.setDestination(35743U);
    msg.setDestinationEntity(85U);
    msg.name.assign("NBBYEETQTTZZVDOMYSDRSXZYRUXZFIGWIKAGIIOFQLXXXSLULGGUMHWRPPUTDEMCUIKLJTRARPDVKBSFGJCLPHSMTNVWSWOVUYPJEKMCJLAQAMIRGUVLAVGFONUEHEZZZYCKKGZPCIPBWNJWQFBSHNTESJRYICNDBHDOVWBUIOWBBGW");

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
    msg.setTimeStamp(0.7648767092600217);
    msg.setSource(30017U);
    msg.setSourceEntity(26U);
    msg.setDestination(18107U);
    msg.setDestinationEntity(164U);
    msg.name.assign("UZLTYIKVRGYGHBQVISQPHEZGVMBBTVCHQCCLFMHPAMJTFIFWQXBYYQSMSDTLGSGANOXENOMUFAWGHXFZMNTAUOKPTIJZYKJGCJDEDQWULBVLRXWWJTZYUJLQSUDCSWAEHJWDICKCPZAUPBYZQDABXDRSVXSGBIRKNLTKSGCRIIONTEFRUEPAZXVN");

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
    msg.setTimeStamp(0.19493186359890546);
    msg.setSource(24608U);
    msg.setSourceEntity(67U);
    msg.setDestination(4790U);
    msg.setDestinationEntity(78U);
    msg.name.assign("VTCGOMBKBHJTLGFBIYHMFLHPUMMYJCBASRQDPQHMXAEDANUOIDRVZPVTAEHYMHVKRTWGNPSCWNVKOBFQAFWRXWJDXLFFOILBGCDKYCCFGMEJTIHQFQH");

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
    msg.setTimeStamp(0.31548441159100005);
    msg.setSource(13313U);
    msg.setSourceEntity(45U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(214U);
    msg.name.assign("RGUXQRERYOAMZIXWMKSYFLPATBCQJIXPRSPVDFIJIFIZYTPSGSWWNUTYIVUVXKZNTHQWASQEFQEJUSZGIUKRESTKFOERIOXGXEBJCFBUINCHQMFDXZVJWH");

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
    msg.setTimeStamp(0.9168966643870262);
    msg.setSource(1134U);
    msg.setSourceEntity(210U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(147U);
    msg.type = 177U;
    msg.error.assign("SGQYPLQWATLSQVNEYAFRARYQLBYVLWQHEMHWJIGISLJSMLYNPOUETROIINVQXGFFKTDPGMKOXPDWDIKLRXMGDYHDXRLQGIAAUKAPQTZCWUBUUNAXCBRRFOKJHWRIZSMCZHEEXCQYHEWHZXPFVJFOUDYNEVVJVCAJKJJFTGDXFTTKECVSRZSNTGHUOHDCOLSIFNO");

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
    msg.setTimeStamp(0.997341390719988);
    msg.setSource(5573U);
    msg.setSourceEntity(24U);
    msg.setDestination(55361U);
    msg.setDestinationEntity(60U);
    msg.type = 51U;
    msg.error.assign("CNMQAUJLTMDFCLFYUTUVFETIOIRCJABOJLUCQCYSNOZIQIDRILCOZMKBKWGMIRGVPBQWTIFWLKIVPNVFWDBYJXDNJSRUBNKPCQSLXRZMBAJKDQEAHCRYHQYHXPSPIOFVKTXRNEASJZYWSGONCEXFQBDXGKSLVSXEGKMXYMNYWASXHSHANBUEUFU");

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
    msg.setTimeStamp(0.35706461904288533);
    msg.setSource(37393U);
    msg.setSourceEntity(160U);
    msg.setDestination(32904U);
    msg.setDestinationEntity(233U);
    msg.type = 80U;
    msg.error.assign("FANJWQPEIVFZFDLZFUDTFZOAAMUYWUUGRFQELJKAJSOHVDNQIMVJINRYMPWOEGPXCLXJVFWWPICBBOKRBHLJMXWSO");

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
    msg.setTimeStamp(0.2690635233490708);
    msg.setSource(37543U);
    msg.setSourceEntity(48U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(245U);
    msg.seq = 35116U;
    msg.sys_dst.assign("LHEXXCOITJSTSKKNQBFLLRWVTCBKIRYRAYECZJZHZUVMWAGGQSWGVZJSUKUQMFUOATOJRJDYFVRIDQTGEBXBKLKBVWFBENLBONQRCHCBOLMXPYNSEREJLDIXLPTAEXKIOVPNHRPNSOVNMKRDAGIYTPHGPNABKFZWUHHCHYDNOSS");
    msg.flags = 202U;
    const signed char tmp_msg_0[] = {116, 18, -85, 22, 2, -1, -105, -18, 50, 44, 47, 61, 66, 34, -121, 122, 72, -19, -57, -29, 112, -88, -89, 82, 15, -9, 109, -39, 19, -15, 105, 113, 36, 33, 116, 99, -15, 10, -125, 71, -101, 96, -35, -97, -85, -20, -108, -26, 77, 68, -120, 2, 74, -28, 41, 66, 72, 94, -98, 97, -45, 88, 31, -61, 102, -10, -45, 24, -86, -109, -127, -38, -60, 123, 97, 87, 69, 55, -28, 80, -88, 23, -66, -123, -124, 5, -74, 117, -11, 37, -118, -72, 80, 60, -69, -25, -24, -120, -84, -62, -15, 35, -83, 50, 35, 38, -11, 56, -24, -126, 10, 107, -40, 106, -58, -46, -9, -22, 31, -67, 20, 78, 23, -11, 60, 1, -62, -5, -58, 53, 97, 92, 115, 75, -98, 39, 15, -100, 9, -83, -26, -5, -105, -93, -58, -107, 115, 88, 70, -60, -33, 71, -41, -118, -75, -117, 103, -43, -115, 14, 54, 110, 74, -93, -46, -63, -58, 103, -120, 118, -51, 15, -54, 58, 108, -7, -89, 19, 16, -3, 63, -51, -38, -67, 87, 91, -91, 74, -91, 99, -25, 14, -61, 123, 108, 16, 8, -72, 38, -21, 53, 95, -32, -42, -110, 11, 6, -3, 54, -83, 37, -72, 36, 104, 117, -99, 28, -38, -82, 76, 124, 66, 108, 1, -84, 122, -93, 97, 72, -111, -66, 45, -86, -35, -60, -50, -120, 21, 86, -34, 104, 124, -90};
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
    msg.setTimeStamp(0.9311105582506922);
    msg.setSource(45264U);
    msg.setSourceEntity(47U);
    msg.setDestination(11680U);
    msg.setDestinationEntity(161U);
    msg.seq = 63662U;
    msg.sys_dst.assign("ODGBLRSPHZPSGMXQQEWQKRTIKOKONTSJRRCZVTAYZPIOLZGVHIBSSJVFAWLUTXIJYRKGWQDVVVQRTMWGGCLYYNJACXPLWEVLTBRWNOYGKBTFFMPSNATFBUAIUWCOQQMFIUOYPLWUKSEPRRFAFDDXXKL");
    msg.flags = 119U;
    const signed char tmp_msg_0[] = {54, -103, 105, -30, 66, 84, 54, -117, 33, 53, -19, 51, -81, 9, 53, -116, -90, -85, -126, -93, 49, -22, 106, 13, -99, 123, -57, -43, 40, 121, -34, 106, 100, -37, 110, 118, -64, -98, 120, -105, 35, -63, -73, -37, -65, -56, -57, -52, 83, 87, -72, 43, 49, -28, -45, 106, 122, -77, 108, -120, -121, 0, -97, 12, -90, 80, 33, 118, -51, 80, 1, 18, -52, -29, 10, -59, 35, 116, 124, 89, -2, -25, -93, -90, 39, -14, 64, -66, 46, -66, -61, 87, 112, 115, -68, -56, -61, 56, 108, 66, 126, -14, -39, 79, -17, 9, 97, -113, 117, -62, 73, 19, 65, 114, -70, -107, -92};
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
    msg.setTimeStamp(0.18469308374795135);
    msg.setSource(11372U);
    msg.setSourceEntity(152U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(142U);
    msg.seq = 37581U;
    msg.sys_dst.assign("PKXCFQSOVSFKRJTWQLUONZLSBTNHKNVPJXPOQMBPWNBMYIJIXCVCAYDPGEUDXRBZWYLJRWKGGLLZWNFVETQTXTUMFHVXHMINUNQKJPAZIYQYZAMCETFVSOLVTKRQCVRIWKMTCPOAAZSEZFJEHRYEIOQESSBTDPWCDBWHUAHPAGLINXADSZBSDHGNXUZDZDLGQHXGARHJHFK");
    msg.flags = 73U;
    const signed char tmp_msg_0[] = {110, -75, 47, 0, 50, -18, 95, 106, 43, -2, -120, -66, 103, -41, -55, 2, 123, -111, -120, 58, 14, 101, -19, 105, 64, 99, 44, -111, 104, 24, -90, -100, -80, -46, 116, 74, -17, -45, 55, 24, 107, -49, 2, -111, -105, -122, 52, -12, -88, 10, -43, -106, -8, 63, -101, 116, -85, 91, -54, 58, 7, -24, -69, -111, -30, -71, 14, 38, -26, 34, -90, 20, 55, 95, -36, -116, -31, -47, 51, 67, -104, 80, 62, -4, -108, 54, 21, 44, -55, 41, 52, -14, -64, 54, -6, -26, -13, -16, -49, 14, 13, -62, -43, 87, -82, -76, -77, -84, -40, -18, 17, 3, 69, 115, -18, -113, 50, -104, 30, 18, -37, -3, -80, -47, -53, 45, -22, 53, 59, 107, 109, 122, -73, -6, -24, 55, 78, -103, -3, -62, 46, -22, 71, 77, -16, -107, 80, -86, -26, 123, -37, 5, 89, -55, 31, 105, 58, 43, 60, 116, 77, -9, -66, 34, -53, -99, -81, 71, 91, 113, 11, 108, 0, 76, 19, 68, -10, 90, -33, -7, 70, 120, -36, -63, 111, 126, -43, 66, -46, -41, -98, 108, -46, 105, 107, -28, 9, -70, 41, -62, 101, 36, 114, -87, 100, -97, 74, 22, -64, 11, -55, -21, 123, -93, -86, -87, -19, 86, -76, 45, 82, 18, -52, 10};
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
    msg.setTimeStamp(0.3147052461075224);
    msg.setSource(16102U);
    msg.setSourceEntity(208U);
    msg.setDestination(51727U);
    msg.setDestinationEntity(147U);
    msg.sys_src.assign("MVAREPSLHVHGEEWRSTMMEHOPWKNAUQRBBTJLLCVUFDGRCXFWNGFYWLBNGOJHCDBBIOEKZDUPQGTDRCETVZVMPJMBIZPVHUBOAYJIVDMNZZUDSKDJIGUECWHTFQJNHRVTSZSYGXQJYTGCCARTXLZXXXGAMOYLKPNJWQCXBUJDPTYNKHRKPRSIOAASYKVBLYLOISCJIXPKYGZWIWAXYQLSWOVUASKFZQFMNUOFOZN");
    msg.sys_dst.assign("ETHJJVLBNWRCMXUDKCFNNOUAOJIDYQQZKUNJEMPFSAUKUSWOWJOGMNTFJZKXHOIBRGHBKIDUQDNLMYTYBTQWASIOPFCSZVTLWKIKMRBMQRKNLRHTIXPELJXHCMYCLBLVRHOEOPQESVRERFWPUYCTZXMDBJGGFNTWEOTJASZCAGZUYXXJE");
    msg.flags = 37U;
    const signed char tmp_msg_0[] = {62, -109, -73, -8, 117, 18, 80, 99, 56, 91, -1, -42, -57, -57, -75, 31, -82, 112, 48, 26, 31, 0, 42, -2, 107, -83, 8, 117, -115, -112, 110, -3, -46, -27, 82};
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
    msg.setTimeStamp(0.2570041266420994);
    msg.setSource(48791U);
    msg.setSourceEntity(32U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(0U);
    msg.sys_src.assign("ZRKFKZGRPW");
    msg.sys_dst.assign("QMHQBTGDAFUWRQHQDICDNMLAYXKKTICJRXWRJKTMGHCHUIFAUDVNVORXIETOOYVOEXYLXZCWLZEDOMJJLMQOETAOMVTDBLNCLQCJASGAPSESGATCKPBZSNRMBIEAJWGNYKUGKXHBKMXXLBPNHURAZNSPFXIPZVGZYZEBUWLPTJWFFURCRHUDHBYZKIG");
    msg.flags = 52U;
    const signed char tmp_msg_0[] = {118, -102, 125, -37, 112, -39, 74, 49, -116, -81, 83, -69, -1, 26, -104, -105, -96, -109, 116, 119, -126, -30, -20, -61, 126, -104, -41, 13, -58, 52, -16, -35, -17, 92, -39, 16, -106, 43, -56, 35, 119, 47, 78, -74, 40, -36, -108, -120, 51, 38, -116, -87, -28, 0, -84, 101, 44, 120, 12, -65, 30, 25, -90, 12, 102, -87, -121, 90, 89, -78, -13, -124, 69, 27, -80, -49, 13, 120, -39, 119, 48, -10, -15, -91, 35, 55, 37, -127, -74, -74, 46, 3, 117, -35, -39, -41, -106, -29, -17, -98, -45, -46, 81, -39, 101, -32, -28, 64, 46, 2, 100, -11, -91, -98, -49, -101, 121, -68, 62, 22, -115, 38, -39, 123, 106, -7, -12, 21, 93, -95, -91, -92, 83, 75, 65, 94, -76, 126, 88, 85, -71, 90, 21, 120, 70, -90, 12, -58, -100, -118, 28, 23, -43, -97, 80, 68, 115, 94, 55, -46, 83, -85, -105, 65, -123, 48, -96, 119, -90, -99, 118, 94, -58, -46, -105, -64, -113, 53, -88, 108, -110, 18, 69, -107, -29, 30, -64, 25, -24, -100, -117, -40, -115, -119, 80, 38, 119, -103, 82, -90, -73, 15, 46, 18};
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
    msg.setTimeStamp(0.533159463365801);
    msg.setSource(41644U);
    msg.setSourceEntity(44U);
    msg.setDestination(11557U);
    msg.setDestinationEntity(210U);
    msg.sys_src.assign("ATRGPWUIIYTMLFMAZLOIIHWCHBKQXGGGWKORFKBPZLUADPVGHBSIXNHZPGAVEDCFGFJTDSQLOUWDDDVBMAFWBYJRJHQCRKDKACEYTWKNPLWZNSCZESJVHYPCUVBTBCXFOHPGNRUNVOWAYXNNCQZVVFZBMQMEXKKLXZOHHRDKNJREATPFYTCJMEGPZVWIABJ");
    msg.sys_dst.assign("NCFWNYMQFZKYBCFGWQYVTPVXQWNAYUSZQJRESVZOBRJTSSJWAFNGTZWACBREZULDKWZTKYLPDBGMEUIKTCBYBOZOWFAQHOHLLTXIMPZAMEOFJORIPSNIIUVHXDPXSWYPCOGGXQBYEPV");
    msg.flags = 157U;
    const signed char tmp_msg_0[] = {-39, -88, 40, 123, 71, 93, -124, 117, 87, 33, 97, 95, 39, 111, 4, -93, 58, 64, 123, -8, -65, 78, -103, 57, 10, -19, 112, -127, -20, -86, 18, 116, 42, -66, 46, -66, -1, 72, 95, -63, 82, 14, 59, 1, -5, 13, 76, 20, 96, -128, 75, 125, -123, 106, -17, -55, 123, 1, 18, -57};
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
    msg.setTimeStamp(0.8976584543821654);
    msg.setSource(62888U);
    msg.setSourceEntity(184U);
    msg.setDestination(38816U);
    msg.setDestinationEntity(151U);
    msg.seq = 24427U;
    msg.value = 231U;
    msg.error.assign("YHMCTRXQUAWLCHETRUWKHGNJYXUKCGQUSUYUJFXPXAGEYXOEFDPBSEHYAFLNWLDHUBJTJKQAPREBXOKKDARLERTGVJMILMFJNMGWVPCCRBTERVXAWNJHZIPPVHZJDBGOVPDZONOZDTINYAPWWFYLZVDFSKWLKHHPHXZFIXKTJOGGDLVZUTBRWKYBDAMCFYAQIYVTIQQISCOCQECMMBOJQSESFPFQLSIVBGISUREZNONKND");

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
    msg.setTimeStamp(0.6697048900236958);
    msg.setSource(15030U);
    msg.setSourceEntity(38U);
    msg.setDestination(27647U);
    msg.setDestinationEntity(183U);
    msg.seq = 41036U;
    msg.value = 173U;
    msg.error.assign("VYRMHAQOWFDKIZQJFPMHDDZNYTQYBZEBBOCSUKCXECSQBXINRFOLYIIQZSSHDOIEBKDWBKVEMAJEOATHFTQBGLAANTXXUUPCPXYRAINIGPUKKEMFYRJWXICBPKCDLLK");

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
    msg.setTimeStamp(0.6035925049175629);
    msg.setSource(12844U);
    msg.setSourceEntity(37U);
    msg.setDestination(62739U);
    msg.setDestinationEntity(152U);
    msg.seq = 57640U;
    msg.value = 141U;
    msg.error.assign("HLHBOKKVZYDGHFVRNMKXSDDDOMKUYGKVGBWCMJWQISLRXXHEGTWLPKNJZTBXEJQAYPFYYPCRDXEOPNQJONRXESLIHSGNJCPFEGRBWMUGOXTAHKAOQ");

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
    msg.setTimeStamp(0.30036038297882395);
    msg.setSource(49030U);
    msg.setSourceEntity(240U);
    msg.setDestination(63027U);
    msg.setDestinationEntity(200U);
    msg.seq = 33791U;
    msg.sys.assign("HGEFUJNSHIQOZBPNWFDYHCDULOFPFYVLIDLXIEYZXMDTAQBSCBUNZKFLGYDVUSSIVCKKSMCCNKZOSQWZKRYGPRDAVDBVAVZWTNAMIHVGBSMCZMEZCYHPPKJKTEFLTAPNUSRHOXODEYWGRPHXCTWXMEVDJURUBHIXRWGVBGNSBOYGZRCAATAMPRQLNEUEQCULJRKJQVTGEXJJKXIHMASIOMBBAKOOLQJDIQURLQW");
    msg.value = 0.13015319630105293;

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
    msg.setTimeStamp(0.004035951673883709);
    msg.setSource(12660U);
    msg.setSourceEntity(175U);
    msg.setDestination(13891U);
    msg.setDestinationEntity(8U);
    msg.seq = 44809U;
    msg.sys.assign("WYORAAHHSKNTUBYCPZNFVKNUMZFBRPZDFIIMPDZZWILLXWSGRWCDYRNRQLOKSBEEIJFXGCVXFHJWYTMUUBSRZFKAAAOWNRKCYWCGMCPSESTTTVFLGUYSDLRDAVNVKQHAKHQYQZKEXCBMVLURGPDENKLXTDAOTXSBUD");
    msg.value = 0.20999419731008817;

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
    msg.setTimeStamp(0.488562564722301);
    msg.setSource(64076U);
    msg.setSourceEntity(199U);
    msg.setDestination(9551U);
    msg.setDestinationEntity(176U);
    msg.seq = 50490U;
    msg.sys.assign("QWJJKSQEFFZOARBSGUVMYU");
    msg.value = 0.05518584290828765;

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
    msg.setTimeStamp(0.8592107506962824);
    msg.setSource(24259U);
    msg.setSourceEntity(63U);
    msg.setDestination(61368U);
    msg.setDestinationEntity(8U);
    msg.seq = 13948U;
    msg.sys_dst.assign("WZXFBZABMCEISLCRCPFBGMQEUEYKNYSRSIGREULKJJCCDAGQBZHZJKOQNMJPUHVTTJDFOFJIVZUWYQHSDBUVTGYZPMNYZAOJFMSLPBSRCGQVPATKALXGNCXVXMWFRAI");
    msg.timeout = 0.4092528064902645;

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
    msg.setTimeStamp(0.7624980236493968);
    msg.setSource(21724U);
    msg.setSourceEntity(169U);
    msg.setDestination(10656U);
    msg.setDestinationEntity(114U);
    msg.seq = 14399U;
    msg.sys_dst.assign("VHFERDSURFNJTWRJAQBAHJGYKKXCRURWDYAJNYBZZXRVULVPGRHQMLJDPMIUWEYCEQIZOFMLPXOBRQNRCNQTDKBLEDHAUTGPOHRHVLUENLVKNQCWIKJLBGQIHLEMDWSFFXIVZHWLNKNTVOMOABPAKSEPZDOFFMJIBCMYDEJZTUOSCSXTGZBVQBIPYHTTVWOSSZXPK");
    msg.timeout = 0.24073411606880202;

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
    msg.setTimeStamp(0.9830805459364621);
    msg.setSource(9765U);
    msg.setSourceEntity(13U);
    msg.setDestination(41025U);
    msg.setDestinationEntity(131U);
    msg.seq = 60346U;
    msg.sys_dst.assign("ABZDKQPLHXFDCXLYLIUDAGZIXOCYILJBKLXYTBZADQWOGMSHQOOPYJQTGEDWHGUJCXBEBZZKEDFQOQPYXNFMSWLMICPTCQLCKNZPFC");
    msg.timeout = 0.9034196900154654;

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
    msg.setTimeStamp(0.46607813877206805);
    msg.setSource(31157U);
    msg.setSourceEntity(171U);
    msg.setDestination(51853U);
    msg.setDestinationEntity(214U);
    msg.action = 231U;
    msg.longain = 0.5674465174235093;
    msg.latgain = 0.780818055436445;
    msg.bondthick = 1378221356U;
    msg.leadgain = 0.429032536324342;
    msg.deconflgain = 0.5952630274468952;

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
    msg.setTimeStamp(0.6595751555334977);
    msg.setSource(62937U);
    msg.setSourceEntity(40U);
    msg.setDestination(23297U);
    msg.setDestinationEntity(83U);
    msg.action = 223U;
    msg.longain = 0.2786844651817243;
    msg.latgain = 0.08376989433976423;
    msg.bondthick = 1454215386U;
    msg.leadgain = 0.59995783242507;
    msg.deconflgain = 0.9957328926026425;

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
    msg.setTimeStamp(0.05558268114970777);
    msg.setSource(52620U);
    msg.setSourceEntity(228U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(226U);
    msg.action = 166U;
    msg.longain = 0.5290702272682065;
    msg.latgain = 0.36374704054153006;
    msg.bondthick = 531035670U;
    msg.leadgain = 0.7655955088653263;
    msg.deconflgain = 0.7193664114016635;

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
    msg.setTimeStamp(0.6976151300074172);
    msg.setSource(18095U);
    msg.setSourceEntity(33U);
    msg.setDestination(56573U);
    msg.setDestinationEntity(63U);
    msg.err_mean = 0.8274024271762375;
    msg.dist_min_abs = 0.5196778515199098;
    msg.dist_min_mean = 0.9416742931055261;

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
    msg.setTimeStamp(0.8589015742853537);
    msg.setSource(36979U);
    msg.setSourceEntity(215U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(122U);
    msg.err_mean = 0.7002050517898564;
    msg.dist_min_abs = 0.22597061202491875;
    msg.dist_min_mean = 0.7465814633905302;

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
    msg.setTimeStamp(0.8953644876390099);
    msg.setSource(674U);
    msg.setSourceEntity(147U);
    msg.setDestination(65111U);
    msg.setDestinationEntity(94U);
    msg.err_mean = 0.6374561576145339;
    msg.dist_min_abs = 0.6564842024218028;
    msg.dist_min_mean = 0.3541677252762352;

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
    msg.setTimeStamp(0.848697001252479);
    msg.setSource(33691U);
    msg.setSourceEntity(64U);
    msg.setDestination(30306U);
    msg.setDestinationEntity(224U);
    msg.action = 27U;
    msg.lon_gain = 0.6650082853263104;
    msg.lat_gain = 0.6397961107560847;
    msg.bond_thick = 0.4254852219348976;
    msg.lead_gain = 0.5696535511498722;
    msg.deconfl_gain = 0.48221154856686954;
    msg.accel_switch_gain = 0.558251072826796;
    msg.safe_dist = 0.3723874976232441;
    msg.deconflict_offset = 0.8531421936644337;
    msg.accel_safe_margin = 0.390569636332066;
    msg.accel_lim_x = 0.7938198019101873;

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
    msg.setTimeStamp(0.8687009069853466);
    msg.setSource(63049U);
    msg.setSourceEntity(174U);
    msg.setDestination(4822U);
    msg.setDestinationEntity(220U);
    msg.action = 213U;
    msg.lon_gain = 0.38443280889562514;
    msg.lat_gain = 0.6658105662660598;
    msg.bond_thick = 0.20613750728252256;
    msg.lead_gain = 0.5741287641830464;
    msg.deconfl_gain = 0.8543243698154457;
    msg.accel_switch_gain = 0.4193129668500486;
    msg.safe_dist = 0.26370810009831047;
    msg.deconflict_offset = 0.9634361725922107;
    msg.accel_safe_margin = 0.9414749619770445;
    msg.accel_lim_x = 0.6682195775120994;

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
    msg.setTimeStamp(0.7259582283557975);
    msg.setSource(8641U);
    msg.setSourceEntity(71U);
    msg.setDestination(18732U);
    msg.setDestinationEntity(77U);
    msg.action = 95U;
    msg.lon_gain = 0.735518383171755;
    msg.lat_gain = 0.5777741802942062;
    msg.bond_thick = 0.23710172277086927;
    msg.lead_gain = 0.4874604568310388;
    msg.deconfl_gain = 0.10185978766259962;
    msg.accel_switch_gain = 0.8245584567078074;
    msg.safe_dist = 0.5228663021527291;
    msg.deconflict_offset = 0.30449333632636466;
    msg.accel_safe_margin = 0.9432661809214251;
    msg.accel_lim_x = 0.9038510127334847;

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
    msg.setTimeStamp(0.9330332819006946);
    msg.setSource(9314U);
    msg.setSourceEntity(79U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(147U);
    msg.type = 36U;
    msg.op = 223U;
    msg.err_mean = 0.1574211529290921;
    msg.dist_min_abs = 0.7768451069205917;
    msg.dist_min_mean = 0.392711243439121;
    msg.roll_rate_mean = 0.3876213529384762;
    msg.time = 0.32079458719400145;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 75U;
    tmp_msg_0.lon_gain = 0.6718306240663424;
    tmp_msg_0.lat_gain = 0.4531670596082997;
    tmp_msg_0.bond_thick = 0.034339925833395846;
    tmp_msg_0.lead_gain = 0.015715515407170977;
    tmp_msg_0.deconfl_gain = 0.2527907690226573;
    tmp_msg_0.accel_switch_gain = 0.6590861871180868;
    tmp_msg_0.safe_dist = 0.6945948321241459;
    tmp_msg_0.deconflict_offset = 0.9811796802011933;
    tmp_msg_0.accel_safe_margin = 0.9950009744029715;
    tmp_msg_0.accel_lim_x = 0.19816903304249855;
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
    msg.setTimeStamp(0.3850436967578639);
    msg.setSource(47069U);
    msg.setSourceEntity(190U);
    msg.setDestination(34832U);
    msg.setDestinationEntity(110U);
    msg.type = 85U;
    msg.op = 86U;
    msg.err_mean = 0.0354165490064412;
    msg.dist_min_abs = 0.4727214135125626;
    msg.dist_min_mean = 0.1252754968395462;
    msg.roll_rate_mean = 0.9567203890788193;
    msg.time = 0.964270541163913;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 74U;
    tmp_msg_0.lon_gain = 0.1833231480254105;
    tmp_msg_0.lat_gain = 0.4737559494631123;
    tmp_msg_0.bond_thick = 0.14570483022220837;
    tmp_msg_0.lead_gain = 0.5287909512526592;
    tmp_msg_0.deconfl_gain = 0.41452551215126276;
    tmp_msg_0.accel_switch_gain = 0.547137876633774;
    tmp_msg_0.safe_dist = 0.14948585132609082;
    tmp_msg_0.deconflict_offset = 0.9585631474715297;
    tmp_msg_0.accel_safe_margin = 0.11512619426575155;
    tmp_msg_0.accel_lim_x = 0.013409138202387538;
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
    msg.setTimeStamp(0.6904920603243064);
    msg.setSource(12722U);
    msg.setSourceEntity(73U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(76U);
    msg.type = 135U;
    msg.op = 158U;
    msg.err_mean = 0.2366082656575781;
    msg.dist_min_abs = 0.24082579956826888;
    msg.dist_min_mean = 0.33960972921215793;
    msg.roll_rate_mean = 0.7910273160146478;
    msg.time = 0.8321105826018901;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 119U;
    tmp_msg_0.lon_gain = 0.37961967135549535;
    tmp_msg_0.lat_gain = 0.26354948845500337;
    tmp_msg_0.bond_thick = 0.4270878454431617;
    tmp_msg_0.lead_gain = 0.422523281830539;
    tmp_msg_0.deconfl_gain = 0.16994657693734905;
    tmp_msg_0.accel_switch_gain = 0.6246515890909465;
    tmp_msg_0.safe_dist = 0.5787314357566972;
    tmp_msg_0.deconflict_offset = 0.36941155439863527;
    tmp_msg_0.accel_safe_margin = 0.7669453908279881;
    tmp_msg_0.accel_lim_x = 0.1239681611764708;
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
    msg.setTimeStamp(0.848203097205907);
    msg.setSource(43874U);
    msg.setSourceEntity(85U);
    msg.setDestination(11339U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.8966586828014356;
    msg.lon = 0.8475839207401789;
    msg.eta = 927288932U;
    msg.duration = 37878U;

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
    msg.setTimeStamp(0.5167682431034251);
    msg.setSource(33118U);
    msg.setSourceEntity(128U);
    msg.setDestination(60831U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.5143621017151786;
    msg.lon = 0.4347888686672535;
    msg.eta = 3997056530U;
    msg.duration = 37136U;

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
    msg.setTimeStamp(0.19636662208431055);
    msg.setSource(6005U);
    msg.setSourceEntity(201U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.6704686623849461;
    msg.lon = 0.43795227832296957;
    msg.eta = 1466873015U;
    msg.duration = 44885U;

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
    msg.setTimeStamp(0.7122374261579225);
    msg.setSource(15284U);
    msg.setSourceEntity(63U);
    msg.setDestination(37297U);
    msg.setDestinationEntity(137U);
    msg.plan_id = 21321U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8250028372144586;
    tmp_msg_0.lon = 0.5637568916502814;
    tmp_msg_0.eta = 1057852431U;
    tmp_msg_0.duration = 50919U;
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
    msg.setTimeStamp(0.6101704368534243);
    msg.setSource(24011U);
    msg.setSourceEntity(218U);
    msg.setDestination(65086U);
    msg.setDestinationEntity(112U);
    msg.plan_id = 40363U;

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
    msg.setTimeStamp(0.6462640693439359);
    msg.setSource(18825U);
    msg.setSourceEntity(131U);
    msg.setDestination(57327U);
    msg.setDestinationEntity(93U);
    msg.plan_id = 34066U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.949932693753163;
    tmp_msg_0.lon = 0.42138246518123046;
    tmp_msg_0.eta = 1518858465U;
    tmp_msg_0.duration = 58969U;
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
    msg.setTimeStamp(0.21635241178776643);
    msg.setSource(9168U);
    msg.setSourceEntity(217U);
    msg.setDestination(3092U);
    msg.setDestinationEntity(137U);
    msg.type = 43U;
    msg.command = 184U;
    msg.settings.assign("SIWBRXJJJLEDBWIGFOPTDDXXXOLQGRVLLXCTUYJZHWOHPISHCYWLTLTSVXCOYGHZRFDEQPNADARDGWKWSIANPOJLTBZBBEJOUKZTGGFMEAFAKHENRHIOBUDRXVCPMEVNNPCYHVBSTIWEYGPDRBJFUEMMLMLZFUYGQSKKPHQZSCGZMZOXUCIFMVTAWSKBW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 15522U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RHHALEAVTQITEFNQHALKRMVLKCPSLZOBQFMZISMYTNJJSDOQDSCLGWZQN");

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
    msg.setTimeStamp(0.03647970557610425);
    msg.setSource(6105U);
    msg.setSourceEntity(235U);
    msg.setDestination(9801U);
    msg.setDestinationEntity(110U);
    msg.type = 10U;
    msg.command = 251U;
    msg.settings.assign("CVSHUHFLVLCPEPCNQZDKNEJXVLSZVCOVHZMOQETNMTBRMGXEVDBXYUNOJBVXMMMDETMCBAQKTNJPIWIXWFPDCXJUDGDRLPMFQERTYPKAOVRTGYBWPHLOFIIITGEASQCBWALZHHFRKGUWIANAUUJSSRJLXCBAFBKYBWWRATSHSMEZRXNDRAPEZRIZOUPCSYOOLLWQNQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41352U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("REYWUIJXOYMLKTRTVJKYUBRSSPERDOJYAZSKTJXPMWYTKSHBSXBVUTYNCODGQXMURGWSBAHDUFECJMMQOKAKHQGPIHLHRCNWUSXO");

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
    msg.setTimeStamp(0.6384853121210124);
    msg.setSource(21488U);
    msg.setSourceEntity(230U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(77U);
    msg.type = 18U;
    msg.command = 128U;
    msg.settings.assign("VERBQSLDSJSDIFCZITVWRZUARYVRJQLBXZMRLPWUOLIYFKAZGEVBOSNTZFITFDNDEQAUSEZGIRDAQBTWUXINCFBWOBWVHRLYJSIXTCDQXJOUZKFDHHNQNYKNSJPMIKKEXZVPQJAYKGMNRXGWMMHEFZXPHMITFNKPVCYBZUXUVVGJBLGWIAKETGUROMYH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54952U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6698926673141039;
    tmp_tmp_msg_0_0.lon = 0.965236320006339;
    tmp_tmp_msg_0_0.eta = 3302245369U;
    tmp_tmp_msg_0_0.duration = 2691U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VTGOORGMFWDGQGVNFLQAIBNJSSHAJVVRANZVTNIDOFOJWUBHEPJZCKPJHHOGRDHYOAKWBRKKKWLEIXUNNJLGNDQAVPMFBGFZCVAMHKWSERUXMEQTXTMBZQDQCZUFPCLY");

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
    msg.setTimeStamp(0.10830608040196588);
    msg.setSource(28710U);
    msg.setSourceEntity(76U);
    msg.setDestination(54300U);
    msg.setDestinationEntity(21U);
    msg.state = 115U;
    msg.plan_id = 47073U;
    msg.wpt_id = 23U;
    msg.settings_chk = 22595U;

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
    msg.setTimeStamp(0.6405783718755058);
    msg.setSource(40434U);
    msg.setSourceEntity(117U);
    msg.setDestination(17145U);
    msg.setDestinationEntity(205U);
    msg.state = 232U;
    msg.plan_id = 59071U;
    msg.wpt_id = 144U;
    msg.settings_chk = 3169U;

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
    msg.setTimeStamp(0.18327517680305405);
    msg.setSource(15805U);
    msg.setSourceEntity(200U);
    msg.setDestination(28162U);
    msg.setDestinationEntity(200U);
    msg.state = 194U;
    msg.plan_id = 59851U;
    msg.wpt_id = 23U;
    msg.settings_chk = 4393U;

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
    msg.setTimeStamp(0.8892555934715656);
    msg.setSource(43194U);
    msg.setSourceEntity(87U);
    msg.setDestination(14705U);
    msg.setDestinationEntity(40U);
    msg.uid = 123U;
    msg.frag_number = 107U;
    msg.num_frags = 80U;
    const signed char tmp_msg_0[] = {22, -90, -28, 111, 110, 11, -114, -69, 18, 54, 52, 9, 112, 14, -58, -14, -41, 44, -38, -66, 1, 117, -61, 6, 25, -18, -79, 89, 3, 51, -101, -43, -72, 81, 3, -77, -97, -26, 77, -105, 12, -88, 10, 72, 97, -68, -81, 91, -120, -82, -29, -62, 103, -25, -28, 9, 62, -6, 42, 32, 15, -75, 36, 95, -22, -52, -109, -26, 4, -61, 85, -1, -18, -17, 0, -63, -115, 98, 58, -111, -110, 67, -34, 5, 41, -50, -103, 13, 12, -39, -65, 21, 65, 2, -60, 81, 54, 61, -31, -44, -115, -28, 70, -101, -63, -99, 6, -82, 97, -117, -99, -86, -3, -76, -1, -59, 84, -62, -75, 56, -12, 23, -48, -83, -128, 101, -58, 96, 104, 116, 21, -21, 87, -39, -111, 110, -33, 76, 115, -66, 9, -22, -19, 112, -13, -62, 102, 57, -4, 110, -86, -103, 53, -70, 35, -116, 12, 126, 62, -44, -122, 108, 21, 52, -41, -66, 75, 109, 82, -85, 16, -20, -5, 122, 20, 68, -88, 53, 64, 26, -65, -37, -52, 71, -14, -80, 114, 36, -50, -101, -37, -62, 106, 97, -88, 33, 91, 82, -76, 121, -84, 61, -13, 77, 50, 3, 16, 107, -61, -8, -84};
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
    msg.setTimeStamp(0.28058580495978636);
    msg.setSource(42708U);
    msg.setSourceEntity(126U);
    msg.setDestination(48003U);
    msg.setDestinationEntity(175U);
    msg.uid = 111U;
    msg.frag_number = 168U;
    msg.num_frags = 199U;
    const signed char tmp_msg_0[] = {6, -63, 75, -88, 85, -20, -64, -15, -38, -39, -97, 8, 72, -31, 7, -100, 23, -59, -107, 28, 13, 36, -121, -86, -70, 97, 3, -120, -13, -1, 27, 120, 104, 92, -45, 71, -5, -109, -27, 108, -21, 69, -72, 70, 117, 23, 12, -69, 126};
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
    msg.setTimeStamp(0.6672713474501101);
    msg.setSource(3022U);
    msg.setSourceEntity(48U);
    msg.setDestination(4833U);
    msg.setDestinationEntity(250U);
    msg.uid = 168U;
    msg.frag_number = 238U;
    msg.num_frags = 41U;
    const signed char tmp_msg_0[] = {-63, -83, 44, 0, -28, -8, -84, 87, 8, -48, -72, -105, 80, -118, 117, 75, 39, 39, 104, 7, 49, 67, -18, -10, 27, 97, -44, 50, -60, -47, 48, 19, 84, -8, 69, -43, 88, -65, -31, 16, -113, 27, 94, -115, 111, -120, -86, -80, 103, -35, 11, 97, -31, 80, 0, -93, 59, -27, 45, 66, 76, 82, -108, 102, 120, -104, 57, 80, -103, -104, 4, -23, 109, -64, -52, -120, 119, -86, 66, 76, -71, -70, -44, -96, 82, -113, -100, -8, -10, 14, 103, -37, -121, -84, 26, 6, -97, 95, 110, -90, -43, -88, 98, 83, 4, -16, 78, -7, -35, -42, -59, -1, 57, 36, 64, -47, 65, 72, 32, 116, 11, 46, 111, -66, 119, 20, -113, 75, -27, -121, -12, 4, -18, 114, -58, 43, -37, 19, 50, -57, -26, 101, 114, 20, -6, -47, -58, 119, 72, 2, -86, 100, -71, 20, 50, -117, -91, -18, -27, -31, -100, -19, -1, -118, -64, 71, -76, -80, -70, -124, -97, -99, -2, -70, 46, 79, 3, -26, 114, -32, -47, 66, -44, 14, -95, 69, 84, 42, 2, 11, 2, -74, -105, -85, -18, 11, -86, 21, 30, -4, -113, 114, -82, 26, -125, -77, 27, 7, -6, 106, 31, 74, -121, 106, 54, -120, 112, 126, 11, -84, 109, -79, 75, -29, 64, 110, -118, 110, -65, 61};
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
    msg.setTimeStamp(0.8587137311900388);
    msg.setSource(41661U);
    msg.setSourceEntity(237U);
    msg.setDestination(4542U);
    msg.setDestinationEntity(179U);
    msg.content_type.assign("NESDQSOGLNABQATTNDEWXUIGAEFSZLQWYAWHCXKFHTGCRVYLDEKUWZBHWCUIPSXZCDODRSLRFORABYOIAEIGXCHHQYTMFEPOBEIPRIZJCZFLLBGVFVPPAYWVKZXRYHQCQMQKMJFWTLTOUPRNCAXFESVAZNMRLWBYWKTNZJHKCDOUDHVGVRSSWJIXJNNZTQGXMZPEKOIJSYXXQTGGTVFBMJ");
    const signed char tmp_msg_0[] = {-123, -3, -29, 42, 87, -18, 123, 40, -51, 124, 6, -104, -80, -83, -98, -57, 10, -86, -95, -15, -110, -86, -51, 58, -75, 27, 71, 105, 65, 62, -108, -70, 113, 116, 121, 59, -5, 83, -96, 57, -38, -110, 28, -30, -64, -5, -42, -99, 105, 96, -19, 126, -84, -82, 85, 122, -106, 104, -105, -109, 56, -82, -7, -88, -99, 35, -127, 43, -20, -103, 51, 85, 25, -96, 103, 18, -83, -55, 2, 3, 111, -100, -119, 26, 71, -50, -2, 34, 110, 112, -81, -128, -115, -107, -43, -96, -43, -62, -14, -16, -75, 69, 1, -125, 121, -72, 99, 122, 117, 59, 121, 86};
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
    msg.setTimeStamp(0.5668760056016049);
    msg.setSource(24924U);
    msg.setSourceEntity(46U);
    msg.setDestination(49721U);
    msg.setDestinationEntity(43U);
    msg.content_type.assign("UTIGXETWHGKTDGMVMJPENYSBYPWLOYZGKXSXKGECHKUBHIGOUYZIAYOZDHCELAPSWDFGNJTFRZRUZNVOLZLLZIXVWNOHJJANNQKDBKMXUVAXXGTOFVTMBIQQPZMVPBNBFXJYLVODQCCKKUTRYPTOJEGCFAQRIFNKABJHLJHWWMWPSUIQRGQWMEZCYWSSYOQVALJQHCEHTEQMZEDURAVRX");
    const signed char tmp_msg_0[] = {43, -76, 16, 75, 112, -58, -15, 1, 81, -60, -79, 66, 37, 32, -83, 75, 84, 70, -57, -56, 38, 69, -92, 38, 118, -4, 104, -55, 109, 21, 99, -37, 54, 15, 24, 118, -65, -79, 113, 114, 104, 112, -94, 96, -57, 35, -23, 5, 33, 74, 11, 24, 68, -19, -46, -25, -38, -85, -10, -4, -115, -117, 1, 2, 26, -74, -52, 64, -69, -64, 95, -13, 64, -9, 118, -66, -39, 109, -114, -53, 35, -77, 95, -38, -89, -42, 6, 50, -31, -58, -100, -60, 29, 53, -76, 65, 117, 76, -104, -120, 89, 38, 96, -34, -122, -30, -4, -128, 61, -125, -94, 30, -55, 38, 81, -22, 93, -95, -10, -43, 0, 104, -76, 20, 81, -34, -40, 37, -18, -82, -79, 76, 115, 41, 51, 91, -120, 102, -115, -10, 111, 88, -64, 63, 58, 98, 99, 93, -89, 92, 79, -57, 121, 21, 107, 4, 23, -42, 2, 27, -41, -48, 94, -59, 122, 67, -84, -56, 117, 67, -37, 31, 41, -2, -19, -128, 83, 39, 11, 101, 112, 110, 102, 122, 19, 121, -81, -128, 18, -55, -88, 79, 80, -85, 70, 64, 63, -25};
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
    msg.setTimeStamp(0.5461868135210657);
    msg.setSource(32879U);
    msg.setSourceEntity(196U);
    msg.setDestination(42935U);
    msg.setDestinationEntity(215U);
    msg.content_type.assign("UCHCHFQODLKCBULTXGGHXGSNVOIYMJKYYIFYXXPNVVDWNABTSQKJRLWYYTXHEVVFAB");
    const signed char tmp_msg_0[] = {86, -99, 110, 82, -58, 126, 83, 68, 107, -108, -119, -17, -60, 98, 11, 84, 9, 34, -37, -120, 6, -80, 93, -91, -35, -37, -117, 66, -92, -55, -67, -101, 118, -97, -54, -40, -119, -65, 93, 80, 81, -127, 39, -31, -89, 61, 59, 112, 57, 61, 37, -54, -80, -84, -125, 93, 74, -45, -128, 67, 0, 24, -113, -2, 31, -79, 29, -120, 78, -74, 105, 23, -27, -28, -62, -84, -59, -96, -108, -46, 89, -94, 98, 44, 110, 93, -109, 96, -74, 11, -25, -60, 123, -30, -54, -126, -86, -109, 87, 124, -64, -117, -82, -52, 31, 9, 93, -51, 36, -94, 1, 6, -54, 87, -100, 108, -72, 9, 4, 3, 90, 29, -24, 36, -18, -39, 82, -72, 70, -51, -88, 105, 77, -102, -122, 78, 118, -66, 73, 79, 41, -23, -34, 41, 9, -122, 87, 119, 49, 56, 89, 125, 47, 21, -39, -37, -7, -19, 29, 99, 122, -75, 60, -34, -123, 69, 100, 75, -4, 51, -62, -98, -68, 73, 56, -59, -109, 44, -74, 65, 54, -89, 1, 52, 41, 109, -49, 99, -1, 8, -1, -10, -40, 100, -47, -94, 122, -42, -85, -65, -75, -5, -111, -103, -2, -57, -45, 122, 69, -106, 1, 23, -41, 81, 100, 3, -72, -8, 83, 110, -36, 67, -127, -39, 84, 85, 13, -11, 2, -91, -2, -33, 6, -6, -17, -62};
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
    msg.setTimeStamp(0.30989856629005197);
    msg.setSource(63476U);
    msg.setSourceEntity(182U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.666806896685041);
    msg.setSource(37227U);
    msg.setSourceEntity(30U);
    msg.setDestination(59066U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.7849540491536826);
    msg.setSource(55643U);
    msg.setSourceEntity(20U);
    msg.setDestination(44029U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.32234196342539156);
    msg.setSource(61398U);
    msg.setSourceEntity(77U);
    msg.setDestination(8921U);
    msg.setDestinationEntity(40U);
    msg.target = 62989U;
    msg.bearing = 0.6111599195298408;
    msg.elevation = 0.6730339718409573;

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
    msg.setTimeStamp(0.8642141779954743);
    msg.setSource(23149U);
    msg.setSourceEntity(96U);
    msg.setDestination(6806U);
    msg.setDestinationEntity(72U);
    msg.target = 32106U;
    msg.bearing = 0.07235736120295766;
    msg.elevation = 0.7679512849782106;

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
    msg.setTimeStamp(0.540778941276561);
    msg.setSource(17078U);
    msg.setSourceEntity(246U);
    msg.setDestination(60994U);
    msg.setDestinationEntity(28U);
    msg.target = 55467U;
    msg.bearing = 0.47533440541919847;
    msg.elevation = 0.029882541244591776;

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
    msg.setTimeStamp(0.07460617639461842);
    msg.setSource(54480U);
    msg.setSourceEntity(1U);
    msg.setDestination(27114U);
    msg.setDestinationEntity(20U);
    msg.target = 58178U;
    msg.x = 0.8275549587316415;
    msg.y = 0.18531241580446844;
    msg.z = 0.1439607974443563;

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
    msg.setTimeStamp(0.2554011906279229);
    msg.setSource(46202U);
    msg.setSourceEntity(204U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(204U);
    msg.target = 57961U;
    msg.x = 0.005668014887836081;
    msg.y = 0.6414768219620663;
    msg.z = 0.03501592973139367;

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
    msg.setTimeStamp(0.752695285758639);
    msg.setSource(7259U);
    msg.setSourceEntity(165U);
    msg.setDestination(48604U);
    msg.setDestinationEntity(175U);
    msg.target = 63050U;
    msg.x = 0.8604356166692178;
    msg.y = 0.6982606485885958;
    msg.z = 0.896019106364577;

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
    msg.setTimeStamp(0.24496320751084266);
    msg.setSource(10618U);
    msg.setSourceEntity(199U);
    msg.setDestination(46936U);
    msg.setDestinationEntity(202U);
    msg.target = 41439U;
    msg.lat = 0.5797692132162706;
    msg.lon = 0.6002820942863575;
    msg.z_units = 74U;
    msg.z = 0.7839720381490866;

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
    msg.setTimeStamp(0.9824411769794095);
    msg.setSource(20823U);
    msg.setSourceEntity(99U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(175U);
    msg.target = 57662U;
    msg.lat = 0.07017094733576601;
    msg.lon = 0.3809240035290067;
    msg.z_units = 92U;
    msg.z = 0.8253329961459497;

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
    msg.setTimeStamp(0.3742369470128315);
    msg.setSource(43423U);
    msg.setSourceEntity(160U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(230U);
    msg.target = 22631U;
    msg.lat = 0.7215277393032568;
    msg.lon = 0.8112553339871268;
    msg.z_units = 93U;
    msg.z = 0.44564095244905333;

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
    msg.setTimeStamp(0.6379721747972805);
    msg.setSource(35428U);
    msg.setSourceEntity(86U);
    msg.setDestination(52953U);
    msg.setDestinationEntity(208U);
    msg.locale.assign("JQWKGZKSCFPRRTFKRFSVMTPLMOCPIMWNCBORDJKNPYTSHIDQUETJSKJWQSDYMWXLNNDMFUETFZIUZOCRVCXXLYBFMOWOEEWARQYBQIWZACGTBFPGAVVGMNNPQIEQHTDBTNALKOURBEJWJTZVFQJNIMFOIQMLZGMAKYVGWVVYHASUCUUSFBELIPLXUHCTZYERAX");
    const signed char tmp_msg_0[] = {91, -102, 29, 22, -89, -15, -4, 82, 112, -75, -83, 40, 120, 62, -109, 87, -109, 26, -72, 3, -128, -73, -3, 93, -35, -125, 98, 26, -118, -15, 48, 97, 35, 24, 76, -53, -43, 15, 14, -91, -39, 44, 59, 125, 27, -43, 123, -123, 41, -39, 93, 73, 36, -31, 64, 2, 12, -3};
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
    msg.setTimeStamp(0.23167676572732343);
    msg.setSource(37592U);
    msg.setSourceEntity(226U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(201U);
    msg.locale.assign("WHJGISVZLQFYSBMLQJXDREGSJFMLBOFAZCXARHUIRYTKIQWNPAZKPPKUEAHCEKQPPSTH");
    const signed char tmp_msg_0[] = {68, 64, -114, -5, 61, 79, 27, -94, 97, -98, 21, 10, 33, -86, 66, 81, -21, 114, 77, -109, 100, -120, 108, -109, -1, -123, -51, 79, -107, -60, 112, -80, -55, 36, 95, 39, 37, -28, -105, 111, -28, -94, 44, -99, -82, 111, -95, -47, 81, 53, -40, 103, 15, 13, 94, -114, -93, -39, -91, 27, -60, -87, 64, -72, -90, -17, -97, 34, 4, -69, -87, -67, -58, -96, -7, 21, -118, 72, 42, 104, 39, 50, 45, -115, -127, -72, 76, 74, -24, -10, -84, 48, -102, 54, -111, 31, 78, 13, -91, -34, -75, -57, 50, -33, 69, 126, 41, -80, -77, 30, 81, -97, 110, -73, 29, -96, -122, 69};
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
    msg.setTimeStamp(0.4019822992182984);
    msg.setSource(5885U);
    msg.setSourceEntity(200U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(79U);
    msg.locale.assign("GYMPBWRYCEUJMJPQFMBLJLWABCGTKAIQFLYZIAINJPADCVLXAATVBFNEYOIXGDSSDWGWKZSKGNEPCANJPQCHHFFEKVRTWZDJUXHHKZUHVCZEADOKVQVUJDNYKKGDXUBITEWBEIXOEBRJJCDQGNPPVGRMYLIYJSTPSHRRHYSNZZBTYDYXIWQFNXTQKHLQXCVQNAL");
    const signed char tmp_msg_0[] = {-106, -91, -112, -19, 5, 114, -71, 103, -80, -54, -116, -47, -122, 97, -43, 81, -36, 82, -123, -7, -101, -62, 37, -13, -80, 81, 97, 34, 45, -47, -63, 18, 113, 27, -38, -81, -28, 63, 59, -114, 119, -3, 72, 16, 16, 48, -90, 109, 84, -53, 21, -93, 81, 63, 72, 109, -15, 84, 70, -47, 98, -91, 112, -128, -28, 99, -63, -22, -50, -23, 52, 63, -88, 70, -84, -67, 111, -31, 68, 92, 49, 85, -26, 82, -71, -20, -13, -99, -34, -49, 126, 62, 81, -124, -36, -34, 90, -3, -25, 80, 74, -125, 58, 36, -113, 43, -9, 52, -55, 88, -55, -93, 120, -62, -41, -97, -75, 4, -35, 57, 64, -107, -103, 69, 40, 38, -27, -111, 84, -65, -46, -12, 28, -25, -39, 78, 62, -76, 14, -119, -85, -83, 53, -103, 121, 75, 64, 23, -22, 4, -52};
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
    msg.setTimeStamp(0.3857399271575249);
    msg.setSource(48688U);
    msg.setSourceEntity(63U);
    msg.setDestination(11591U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.187762465158005);
    msg.setSource(11864U);
    msg.setSourceEntity(147U);
    msg.setDestination(15293U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.3523407754688457);
    msg.setSource(36673U);
    msg.setSourceEntity(24U);
    msg.setDestination(54938U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.47316358365695577);
    msg.setSource(56603U);
    msg.setSourceEntity(179U);
    msg.setDestination(63771U);
    msg.setDestinationEntity(63U);
    msg.camid = 132U;
    msg.x = 15375U;
    msg.y = 13128U;

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
    msg.setTimeStamp(0.5838535955035399);
    msg.setSource(59068U);
    msg.setSourceEntity(15U);
    msg.setDestination(58935U);
    msg.setDestinationEntity(192U);
    msg.camid = 86U;
    msg.x = 21402U;
    msg.y = 27395U;

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
    msg.setTimeStamp(0.49771139708314516);
    msg.setSource(27300U);
    msg.setSourceEntity(15U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(45U);
    msg.camid = 152U;
    msg.x = 14180U;
    msg.y = 32444U;

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
    msg.setTimeStamp(0.8393810202696417);
    msg.setSource(62897U);
    msg.setSourceEntity(2U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(240U);
    msg.camid = 102U;
    msg.x = 25078U;
    msg.y = 48922U;

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
    msg.setTimeStamp(0.7581625118965835);
    msg.setSource(26238U);
    msg.setSourceEntity(39U);
    msg.setDestination(28191U);
    msg.setDestinationEntity(29U);
    msg.camid = 45U;
    msg.x = 3558U;
    msg.y = 28798U;

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
    msg.setTimeStamp(0.8905688690643092);
    msg.setSource(47251U);
    msg.setSourceEntity(107U);
    msg.setDestination(43801U);
    msg.setDestinationEntity(178U);
    msg.camid = 253U;
    msg.x = 12320U;
    msg.y = 6443U;

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
    msg.setTimeStamp(0.9610888073166192);
    msg.setSource(40830U);
    msg.setSourceEntity(72U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(16U);
    msg.tracking = 206U;
    msg.lat = 0.6552038011837568;
    msg.lon = 0.09021774193450305;
    msg.x = 0.5403574060974422;
    msg.y = 0.6980881546820145;
    msg.z = 0.5200910976037555;

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
    msg.setTimeStamp(0.15737140244342707);
    msg.setSource(37821U);
    msg.setSourceEntity(126U);
    msg.setDestination(27074U);
    msg.setDestinationEntity(2U);
    msg.tracking = 16U;
    msg.lat = 0.5105580032216371;
    msg.lon = 0.8792449911972515;
    msg.x = 0.795699861752636;
    msg.y = 0.6400765471709718;
    msg.z = 0.06570525925240722;

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
    msg.setTimeStamp(0.016900997603191747);
    msg.setSource(24758U);
    msg.setSourceEntity(186U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(79U);
    msg.tracking = 231U;
    msg.lat = 0.31954530265665093;
    msg.lon = 0.7822160680916799;
    msg.x = 0.21973286502152278;
    msg.y = 0.7144934846720385;
    msg.z = 0.45698990461510314;

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
    msg.setTimeStamp(0.30125406163669854);
    msg.setSource(65480U);
    msg.setSourceEntity(237U);
    msg.setDestination(57711U);
    msg.setDestinationEntity(225U);
    msg.target.assign("ISMCDXMUHVPCNUPOGCKQXQIQFZEUKBRBWBOOAGUJSSATJRUAMMDPYYVQWZHKWOGFXZCENAMYHRFXQCWWRXUZZZCYKYZCTWZCSOUOPNTOOXNJJBRVMVNFQAJBKJSHJARDDHGOJPPHIDSFLJFDULDWIBLNGGWECTS");
    msg.lbearing = 0.73186951467767;
    msg.lelevation = 0.9155577293790739;
    msg.bearing = 0.37400344029463695;
    msg.elevation = 0.5893730020605955;
    msg.phi = 0.10261793992203616;
    msg.theta = 0.5759618389922733;
    msg.psi = 0.21591249276828672;
    msg.accuracy = 0.8979369491221005;

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
    msg.setTimeStamp(0.03521512903648438);
    msg.setSource(54630U);
    msg.setSourceEntity(36U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(102U);
    msg.target.assign("XDKAHCRUEQWASHPKBKWUTHRPMMRZZNEOOGVUMPBJBZNMTRWVQPVYNQBWKGFZZGJQICLYISVRUHICEJOUHIUXNAFQNFSKEDLUXXSCHPJZSWDFDTCHPDIOLYJELRLILXGAUVCRTAFZQMRTCYTGGQDWJZTNXVBRJYTWMWPXNJBUNYXXFJZKKYOVEFBPCPE");
    msg.lbearing = 0.8861327915950353;
    msg.lelevation = 0.5705480534601446;
    msg.bearing = 0.16201379240340386;
    msg.elevation = 0.39278655618454916;
    msg.phi = 0.54445473312151;
    msg.theta = 0.19719079929816818;
    msg.psi = 0.9851614173947255;
    msg.accuracy = 0.5353277372360502;

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
    msg.setTimeStamp(0.33118867198823876);
    msg.setSource(37559U);
    msg.setSourceEntity(210U);
    msg.setDestination(3768U);
    msg.setDestinationEntity(11U);
    msg.target.assign("TWPHKQBVCQRGABCNTTPLGGKSDYCSWHPWREJYPQCKIEXYVWQETMTUAYGSBOFFFDUXJLCIUBEKDGAQLMARTULRFQOOOFRKLYCDHHNPMMG");
    msg.lbearing = 0.007358062625363315;
    msg.lelevation = 0.08640781724167534;
    msg.bearing = 0.005115190573809936;
    msg.elevation = 0.01673245829049419;
    msg.phi = 0.9398334011845048;
    msg.theta = 0.8211526003579424;
    msg.psi = 0.016453972389491867;
    msg.accuracy = 0.796984521865005;

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
    msg.setTimeStamp(0.04214953631573082);
    msg.setSource(54684U);
    msg.setSourceEntity(26U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(241U);
    msg.target.assign("SRZMKLNYEORDVIAKEJCFNQXDKKENHYMKRPVGZJIQGSWBNHBEOQATPLVRTEWSTHFIYZJSPXMNCIZLVGXHJRUJGUHKUUKQPFNDWUFQMANVIQBBBBYACKKGXAZLAGEFFYDPUIDOTVQNTXEQVDFYXVOSSTWTDGMRGL");
    msg.x = 0.5268548662370777;
    msg.y = 0.5708437254844647;
    msg.z = 0.8374285504491928;
    msg.n = 0.8694692567231792;
    msg.e = 0.20295374712252734;
    msg.d = 0.9138938645332823;
    msg.phi = 0.4113414832339699;
    msg.theta = 0.3931606950371842;
    msg.psi = 0.35974748465206563;
    msg.accuracy = 0.3496321509351058;

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
    msg.setTimeStamp(0.02123879811107332);
    msg.setSource(39219U);
    msg.setSourceEntity(236U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(152U);
    msg.target.assign("FGXFESKTXESCXZJHDHCCVUTYYXSWDBZPJMYIGVRVLONJXPTMUPEEGVJW");
    msg.x = 0.6358373998816574;
    msg.y = 0.11985991581242961;
    msg.z = 0.43720814370926087;
    msg.n = 0.11815508297106281;
    msg.e = 0.27111671983371255;
    msg.d = 0.1538918077195759;
    msg.phi = 0.3431816068887009;
    msg.theta = 0.9654421440300585;
    msg.psi = 0.5944935599565606;
    msg.accuracy = 0.9495037044580396;

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
    msg.setTimeStamp(0.9819445686810238);
    msg.setSource(19093U);
    msg.setSourceEntity(93U);
    msg.setDestination(23278U);
    msg.setDestinationEntity(131U);
    msg.target.assign("YILJLFMPUVKRPYJOJEUYZAKGQWJCWLQZGGNZQEBMDRCKQYBPTCGXJPOIAURNWFRVBGXDTBHLJOXIAUKWLAHDPMJVYVVXVFTOXSQBFQHUGYSWRTWMRC");
    msg.x = 0.9535903906074332;
    msg.y = 0.2989250625521168;
    msg.z = 0.013803138953970784;
    msg.n = 0.3264561532888549;
    msg.e = 0.9071309422989973;
    msg.d = 0.16744649746943452;
    msg.phi = 0.9893702393022373;
    msg.theta = 0.8910533991862171;
    msg.psi = 0.18228470518713757;
    msg.accuracy = 0.7166627752391227;

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
    msg.setTimeStamp(0.49811336127566597);
    msg.setSource(23026U);
    msg.setSourceEntity(127U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(109U);
    msg.target.assign("ZBWYMNAFYMFRMNFFIWAJBJZGXUTEUOPQAHJPUIIKZKXRJNFLRGUWWRSAGFYSZMZOEXFLZGOVFWRXCOIXKKMOGBVVTCSRTYUZSPCPYCNZCYDQLEGVTZQRREGNIYTVVWQDLAIJCJPEKYVHJBWVEQLEJCMTESDZTABYQBPPTQBDVUKCXODLIRWECLDGTWLONHQSH");
    msg.lat = 0.005731660427004792;
    msg.lon = 0.48663278088447814;
    msg.z_units = 34U;
    msg.z = 0.16647966602754016;
    msg.accuracy = 0.22810636405457696;

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
    msg.setTimeStamp(0.7972723817449553);
    msg.setSource(64987U);
    msg.setSourceEntity(155U);
    msg.setDestination(53739U);
    msg.setDestinationEntity(72U);
    msg.target.assign("PTNUPJFKHYFLJIHILNSYVOQRFCJJBAXSORYDCUVCCOHPMNBKWNPEJMEPZYUUKBGOKAOBGJQCEXQRCWGSPXIEYSVYDGZLWJKHVSMMKGMISRHWLXNPBIWSEBCCUDTQNXTTQHXDLOZLLDRYEYVQJYXIZNBHAAOVRXVTGIWIDWFPEPN");
    msg.lat = 0.032982282073073854;
    msg.lon = 0.5714189792202816;
    msg.z_units = 147U;
    msg.z = 0.19907248049170478;
    msg.accuracy = 0.4018288322117729;

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
    msg.setTimeStamp(0.6927607645013604);
    msg.setSource(5961U);
    msg.setSourceEntity(27U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(79U);
    msg.target.assign("XBVKPPAPSZTFRTREDJAVFOWYKFOQYTHPHWUWBIFIQJQHLHLXEETSRNZPTOKKXEVCNGULFCDSBS");
    msg.lat = 0.9707269836553405;
    msg.lon = 0.42794295720041553;
    msg.z_units = 74U;
    msg.z = 0.961701676040421;
    msg.accuracy = 0.299546959072861;

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
    msg.setTimeStamp(0.4137578436330286);
    msg.setSource(56958U);
    msg.setSourceEntity(236U);
    msg.setDestination(49502U);
    msg.setDestinationEntity(153U);
    msg.name.assign("UHKPHRYPVFLKSOYZLBEOXMPAMFFXJDHOXMDVFROFQTYPXQQSJSZWLDBKJAMVZSHBUCSUQBCGHAIOHCINGBMANPNEHLTQTRCTRZGXCTNSACVOQIKANZUUS");
    msg.lat = 0.4352150560326764;
    msg.lon = 0.5359625320434267;
    msg.z = 0.40508599723725625;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.04457031130454936);
    msg.setSource(56815U);
    msg.setSourceEntity(35U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(184U);
    msg.name.assign("LUBRPVINQVARVHECJMPFYNWJBXDHTLRIVQSIYFUMNFEZXOCUWHIXULSTUAPZTUOFLCZMBQYDDWKJIEVXCHPBNGGSBEWBOOFYJWTQIQJMGUSPNRLDEMOSAKW");
    msg.lat = 0.2617880302003457;
    msg.lon = 0.5777612456841884;
    msg.z = 0.48597692737000053;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.09722361983393513);
    msg.setSource(28521U);
    msg.setSourceEntity(213U);
    msg.setDestination(18704U);
    msg.setDestinationEntity(86U);
    msg.name.assign("YOJZBEGSSTSGBXDZQARXONPJOQYTVEI");
    msg.lat = 0.7934574140882631;
    msg.lon = 0.16988308053631684;
    msg.z = 0.06166181115291047;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.31791553364232983);
    msg.setSource(19687U);
    msg.setSourceEntity(180U);
    msg.setDestination(42130U);
    msg.setDestinationEntity(15U);
    msg.op = 121U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("REEOVYHMDKPAWXJSXECGTHADYICUAZBATFDQPKWCRTQPFMFROMDBZDPVLZYSUYNNUCILKOJWXIOOBNYMNWVSORSBZLMKRSJTURYEDXKTDFIUPHBKMJJUNMGCZDZLSXQCFLCALISILYYHEGSOVEITFUBXYKCNOGSZHEFXPQLHOBVAQEEEYIKMGRWZVTRWLJVKSWKHPGVDAVCONHGABQNXWCFMFDZBUVIIGMGPXJQPTRWJPZWHAQXAJBULJNQRF");
    tmp_msg_0.lat = 0.17822410597160987;
    tmp_msg_0.lon = 0.30491973208057255;
    tmp_msg_0.z = 0.9356039948959247;
    tmp_msg_0.z_units = 31U;
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
    msg.setTimeStamp(0.6302925714488);
    msg.setSource(34657U);
    msg.setSourceEntity(3U);
    msg.setDestination(31062U);
    msg.setDestinationEntity(159U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.8753812646128195);
    msg.setSource(12798U);
    msg.setSourceEntity(107U);
    msg.setDestination(30032U);
    msg.setDestinationEntity(247U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.38321153890425064);
    msg.setSource(48390U);
    msg.setSourceEntity(89U);
    msg.setDestination(42487U);
    msg.setDestinationEntity(120U);
    msg.value = 0.10276495316815737;
    msg.type = 151U;

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
    msg.setTimeStamp(0.7239113304666618);
    msg.setSource(52034U);
    msg.setSourceEntity(216U);
    msg.setDestination(37342U);
    msg.setDestinationEntity(91U);
    msg.value = 0.2398605893947453;
    msg.type = 35U;

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
    msg.setTimeStamp(0.7087510557998437);
    msg.setSource(22759U);
    msg.setSourceEntity(167U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0956615264522862;
    msg.type = 239U;

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
    msg.setTimeStamp(0.4167143969128393);
    msg.setSource(42796U);
    msg.setSourceEntity(16U);
    msg.setDestination(45462U);
    msg.setDestinationEntity(79U);
    msg.value = 0.23871430743687694;

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
    msg.setTimeStamp(0.29706171019909544);
    msg.setSource(53716U);
    msg.setSourceEntity(73U);
    msg.setDestination(26815U);
    msg.setDestinationEntity(144U);
    msg.value = 0.36211832868677585;

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
    msg.setTimeStamp(0.967477432548522);
    msg.setSource(35705U);
    msg.setSourceEntity(162U);
    msg.setDestination(7541U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6753197105911929;

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
    msg.setTimeStamp(0.17974587193302827);
    msg.setSource(58503U);
    msg.setSourceEntity(35U);
    msg.setDestination(14616U);
    msg.setDestinationEntity(45U);
    msg.timestamp_last_service = 0.7765689347271754;
    msg.time_next_service = 0.25618059824299444;
    msg.time_motor_next_service = 0.846120843785431;
    msg.time_idle_ground = 0.153690591191182;
    msg.time_idle_air = 0.8622492486643308;
    msg.time_idle_water = 0.07885075365410321;
    msg.time_idle_underwater = 0.37001378034238197;
    msg.time_idle_unknown = 0.30933162450746343;
    msg.time_motor_ground = 0.43511384142432874;
    msg.time_motor_air = 0.3888658362426629;
    msg.time_motor_water = 0.8917239852116241;
    msg.time_motor_underwater = 0.6131531674309842;
    msg.time_motor_unknown = 0.31912044929345307;
    msg.rpm_min = -11999;
    msg.rpm_max = 23833;
    msg.depth_max = 0.10613276274725092;

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
    msg.setTimeStamp(0.5205465732060138);
    msg.setSource(41919U);
    msg.setSourceEntity(93U);
    msg.setDestination(42009U);
    msg.setDestinationEntity(60U);
    msg.timestamp_last_service = 0.6164039030523646;
    msg.time_next_service = 0.8448004297828454;
    msg.time_motor_next_service = 0.8046291289986408;
    msg.time_idle_ground = 0.30172003394287294;
    msg.time_idle_air = 0.039368401102980455;
    msg.time_idle_water = 0.7868717456554152;
    msg.time_idle_underwater = 0.5207978102504134;
    msg.time_idle_unknown = 0.575343207775248;
    msg.time_motor_ground = 0.22761571892245447;
    msg.time_motor_air = 0.8689179962915644;
    msg.time_motor_water = 0.8337072002846646;
    msg.time_motor_underwater = 0.27952222185195374;
    msg.time_motor_unknown = 0.4849839429189663;
    msg.rpm_min = 28705;
    msg.rpm_max = -5254;
    msg.depth_max = 0.25853891868905;

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
    msg.setTimeStamp(0.3428145313895846);
    msg.setSource(54487U);
    msg.setSourceEntity(101U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(24U);
    msg.timestamp_last_service = 0.33473594599883816;
    msg.time_next_service = 0.8354271381895007;
    msg.time_motor_next_service = 0.5393520882960059;
    msg.time_idle_ground = 0.7687520358018571;
    msg.time_idle_air = 0.3489809154001511;
    msg.time_idle_water = 0.7532529449673409;
    msg.time_idle_underwater = 0.06942361342105119;
    msg.time_idle_unknown = 0.8712405875063407;
    msg.time_motor_ground = 0.8930687959607759;
    msg.time_motor_air = 0.15169899176376367;
    msg.time_motor_water = 0.11981166032762025;
    msg.time_motor_underwater = 0.549100433230825;
    msg.time_motor_unknown = 0.5784922510216067;
    msg.rpm_min = 23122;
    msg.rpm_max = -5940;
    msg.depth_max = 0.2858742985627143;

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
    msg.setTimeStamp(0.14644585358996998);
    msg.setSource(44290U);
    msg.setSourceEntity(46U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(101U);
    msg.severity = 128U;
    msg.text.assign("KGWJENXRZMABJIPWJNVPGBDLGDTIIZBIUOSIUXTDKNKARCJ");

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
    msg.setTimeStamp(0.5715664934443871);
    msg.setSource(43624U);
    msg.setSourceEntity(154U);
    msg.setDestination(31003U);
    msg.setDestinationEntity(118U);
    msg.severity = 180U;
    msg.text.assign("ETHTKTBKOOZIHKCWZRGGLCFYNFLBEWBVMPXCNOMWNAXLUGOGRQMNPASZPYSLJCAUFUVISMIAHRAQSTWANATKPXFAYBPWOHNPNVSZFJMCPZVXOYDOUOJDXMYIKLMDROLWIJHJVZJSRJVBYSQVJFUCHYNWWTCFOXDBXJ");

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
    msg.setTimeStamp(0.9116025916400066);
    msg.setSource(43977U);
    msg.setSourceEntity(143U);
    msg.setDestination(5709U);
    msg.setDestinationEntity(49U);
    msg.severity = 42U;
    msg.text.assign("MREDIODIRZCYNWDMMAQPDAOEIIWQUCZYGUFHCWCUPXZNEWKAHFVLJUXAGJWKNOGCMXUKSEWZPPRBOETRTOAHGJZC");

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
    msg.setTimeStamp(0.9160213362265689);
    msg.setSource(51415U);
    msg.setSourceEntity(224U);
    msg.setDestination(40336U);
    msg.setDestinationEntity(72U);
    msg.channel = 6;
    msg.value = -1451838624;
    msg.gain = 61U;

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
    msg.setTimeStamp(0.49739429048115147);
    msg.setSource(32836U);
    msg.setSourceEntity(206U);
    msg.setDestination(61185U);
    msg.setDestinationEntity(119U);
    msg.channel = -59;
    msg.value = 1883284394;
    msg.gain = 21U;

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
    msg.setTimeStamp(0.6037002600609316);
    msg.setSource(13766U);
    msg.setSourceEntity(162U);
    msg.setDestination(9761U);
    msg.setDestinationEntity(251U);
    msg.channel = 44;
    msg.value = 61121181;
    msg.gain = 7U;

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
    msg.setTimeStamp(0.9453521100890141);
    msg.setSource(41361U);
    msg.setSourceEntity(169U);
    msg.setDestination(61770U);
    msg.setDestinationEntity(252U);
    msg.ch01 = 0.9514260380070466;
    msg.ch02 = 0.1480191880002948;
    msg.ch03 = 0.19019896737308628;
    msg.ch04 = 0.7337705392212381;
    msg.ch05 = 0.7267073502356436;
    msg.ch06 = 0.15917888760383414;
    msg.ch07 = 0.5052680490142839;
    msg.ch08 = 0.262067584449745;
    msg.ch09 = 0.4798661739246335;
    msg.ch10 = 0.004030135413063407;
    msg.ch11 = 0.556271624756958;
    msg.ch12 = 0.25076391521761043;
    msg.ch13 = 0.8930469950152115;
    msg.ch14 = 0.882428185908527;
    msg.ch15 = 0.5907912858660643;
    msg.ch16 = 0.4166614531327191;

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
    msg.setTimeStamp(0.3235048297987101);
    msg.setSource(37804U);
    msg.setSourceEntity(167U);
    msg.setDestination(21768U);
    msg.setDestinationEntity(103U);
    msg.ch01 = 0.9991399685884744;
    msg.ch02 = 0.13569201108507623;
    msg.ch03 = 0.2750870996841449;
    msg.ch04 = 0.9259135884263685;
    msg.ch05 = 0.5145763603074879;
    msg.ch06 = 0.30560088452807666;
    msg.ch07 = 0.7626355050676865;
    msg.ch08 = 0.675341014268307;
    msg.ch09 = 0.056194705876176365;
    msg.ch10 = 0.7132285372629936;
    msg.ch11 = 0.16596646714741836;
    msg.ch12 = 0.6007616634670094;
    msg.ch13 = 0.2520223426849527;
    msg.ch14 = 0.4437780566588846;
    msg.ch15 = 0.8024841011656436;
    msg.ch16 = 0.32993477829751694;

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
    msg.setTimeStamp(0.012392798579189845);
    msg.setSource(25837U);
    msg.setSourceEntity(168U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(80U);
    msg.ch01 = 0.23214101799865172;
    msg.ch02 = 0.255686230692615;
    msg.ch03 = 0.9634842715314142;
    msg.ch04 = 0.7280264235741798;
    msg.ch05 = 0.2902861482953627;
    msg.ch06 = 0.27376522319618035;
    msg.ch07 = 0.0017680961473924839;
    msg.ch08 = 0.7733090583115335;
    msg.ch09 = 0.6049249850376635;
    msg.ch10 = 0.31045518852119713;
    msg.ch11 = 0.6204326783231771;
    msg.ch12 = 0.42110937218763256;
    msg.ch13 = 0.10970655603012103;
    msg.ch14 = 0.9738991828921275;
    msg.ch15 = 0.0805994859380208;
    msg.ch16 = 0.5133718193180475;

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
    msg.setTimeStamp(0.5563052792548285);
    msg.setSource(44431U);
    msg.setSourceEntity(151U);
    msg.setDestination(37168U);
    msg.setDestinationEntity(140U);
    msg.op = 105U;
    msg.lat = 0.6029717488539844;
    msg.lon = 0.9893219261239703;
    msg.height = 0.9904646204984072;
    msg.depth = 0.269922017094295;
    msg.alt = 0.1959409772818137;

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
    msg.setTimeStamp(0.1564316454101845);
    msg.setSource(33541U);
    msg.setSourceEntity(101U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(6U);
    msg.op = 11U;
    msg.lat = 0.7210513012634051;
    msg.lon = 0.4031854964128856;
    msg.height = 0.4840308546127702;
    msg.depth = 0.4959561569294867;
    msg.alt = 0.12054940302972272;

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
    msg.setTimeStamp(0.3506814636303244);
    msg.setSource(26393U);
    msg.setSourceEntity(104U);
    msg.setDestination(39053U);
    msg.setDestinationEntity(232U);
    msg.op = 248U;
    msg.lat = 0.418145893686072;
    msg.lon = 0.44782426549196463;
    msg.height = 0.37949771153968737;
    msg.depth = 0.9566326761680514;
    msg.alt = 0.8352395097897681;

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
    msg.setTimeStamp(0.9911782588293987);
    msg.setSource(3815U);
    msg.setSourceEntity(216U);
    msg.setDestination(58838U);
    msg.setDestinationEntity(76U);
    msg.nbeams = 53U;
    msg.ncells = 216U;
    msg.coord_sys = 192U;

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
    msg.setTimeStamp(0.2264140107809941);
    msg.setSource(4451U);
    msg.setSourceEntity(152U);
    msg.setDestination(15535U);
    msg.setDestinationEntity(144U);
    msg.nbeams = 22U;
    msg.ncells = 143U;
    msg.coord_sys = 86U;

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
    msg.setTimeStamp(0.7321444301625354);
    msg.setSource(35269U);
    msg.setSourceEntity(136U);
    msg.setDestination(55027U);
    msg.setDestinationEntity(195U);
    msg.nbeams = 207U;
    msg.ncells = 188U;
    msg.coord_sys = 8U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.666622586469756;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.9864054767535547;
    tmp_tmp_msg_0_0.amp = 0.36643837837196336;
    tmp_tmp_msg_0_0.cor = 2U;
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
    msg.setTimeStamp(0.829320461124177);
    msg.setSource(5860U);
    msg.setSourceEntity(231U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(104U);
    msg.cell_position = 0.9173998311088253;

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
    msg.setTimeStamp(0.9342108090152501);
    msg.setSource(1653U);
    msg.setSourceEntity(0U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(131U);
    msg.cell_position = 0.9837035341109868;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.4706222095341336;
    tmp_msg_0.amp = 0.5972504286802932;
    tmp_msg_0.cor = 114U;
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
    msg.setTimeStamp(0.22886911728632997);
    msg.setSource(59490U);
    msg.setSourceEntity(36U);
    msg.setDestination(43958U);
    msg.setDestinationEntity(215U);
    msg.cell_position = 0.9655112535705936;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.27582032303881343;
    tmp_msg_0.amp = 0.034582293018145194;
    tmp_msg_0.cor = 115U;
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
    msg.setTimeStamp(0.8310773373046995);
    msg.setSource(24942U);
    msg.setSourceEntity(41U);
    msg.setDestination(34721U);
    msg.setDestinationEntity(162U);
    msg.vel = 0.8179481896898786;
    msg.amp = 0.33654354222215366;
    msg.cor = 66U;

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
    msg.setTimeStamp(0.7126429954380554);
    msg.setSource(26660U);
    msg.setSourceEntity(58U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(188U);
    msg.vel = 0.13102457724613414;
    msg.amp = 0.8026472589910576;
    msg.cor = 90U;

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
    msg.setTimeStamp(0.37324372425327257);
    msg.setSource(5450U);
    msg.setSourceEntity(5U);
    msg.setDestination(35556U);
    msg.setDestinationEntity(52U);
    msg.vel = 0.16785137242204407;
    msg.amp = 0.8582347360464898;
    msg.cor = 30U;

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
    msg.setTimeStamp(0.6726812925015322);
    msg.setSource(44389U);
    msg.setSourceEntity(161U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(197U);
    msg.name.assign("QKRTRGWZNYVMDSUYIICXGZINSLNEFOAOUXXYZJTBCKWMWFDVBLLLQGJVSRLSDPBQVJPBJTHXZQPJUGCDEPCHKLGTARWMPEQWKOPWDUEHFIUTPLRLHZIVSQEADFEDOKVTSFUMYHDYEYYKXBZPMWHOYHFMCIBTQNEUGSNIRYZWORAWBFUSAAARNXSHTJULXTNXIJGGKXQFNMCLA");
    msg.value = 237U;

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
    msg.setTimeStamp(0.4954008911240535);
    msg.setSource(42737U);
    msg.setSourceEntity(147U);
    msg.setDestination(16693U);
    msg.setDestinationEntity(135U);
    msg.name.assign("DYEFUGZYKTAABMMPHJGXGOFMRQYBJKEH");
    msg.value = 152U;

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
    msg.setTimeStamp(0.30182047584997085);
    msg.setSource(16813U);
    msg.setSourceEntity(234U);
    msg.setDestination(59176U);
    msg.setDestinationEntity(44U);
    msg.name.assign("YVFAYFTDBTOJXFUWFRQKWOMVKCNWKPYPBVLVXZEJHGTWGYPATSJPRYEZXQPZIWGBMUFJUGNEZGNHZZFRDSVLUCVSKDMAHTISVQIVFNRJDMTXRSYXFLMXHQIKOWUJWHQXNNDRWPOKEEWTBYSPHKI");
    msg.value = 172U;

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
    msg.setTimeStamp(0.6188098690731598);
    msg.setSource(11411U);
    msg.setSourceEntity(103U);
    msg.setDestination(57185U);
    msg.setDestinationEntity(11U);
    msg.name.assign("NLLXIVJFSYUDOLXRKTIKQTVBCVWYTLLOCXVRYBRZVJMEHNEBOCTOOGSZQGTLIHOTBVKXXKIFNEBCFSUJPMDKPCHSZYDFQHQMANNHEPQFYTZVUTPHBJAXFEEABPVDQZFRHQKNFBUUVHECCUAWWGJILNAUKWJMMLQWWUAAGPNMWWRCMJZFRQGM");

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
    msg.setTimeStamp(0.3213797135502161);
    msg.setSource(50338U);
    msg.setSourceEntity(1U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(51U);
    msg.name.assign("VAXSOBGNCXKMUNPCIAVGUJGRJQXJA");

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
    msg.setTimeStamp(0.9595451725771783);
    msg.setSource(63948U);
    msg.setSourceEntity(123U);
    msg.setDestination(30781U);
    msg.setDestinationEntity(156U);
    msg.name.assign("CZIGPGYOQBRDUFGQTESBTQRLDOAFUILAMPAKMXYWWEXECPGGOHLLYMYJYZRMFGHQTULWVTZDOZADHMKGYNVDMNESEROBNCSZAYSINERAWQSXRMMQZPYZUJSHZHSIOXJNQBNEMJHWKJWLHWPNGBKTKKTVVWUGKAETVUFEDWJIQEBRTYJIIPBDBBXAJRXJPBXFUCAMILCZCFHVCHOYXJULRHLIVOWZXQIXKNGFTQKSLFVF");

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
    msg.setTimeStamp(0.8227638293966675);
    msg.setSource(19819U);
    msg.setSourceEntity(4U);
    msg.setDestination(38109U);
    msg.setDestinationEntity(137U);
    msg.name.assign("HEZILPEMURDPGFZJODZMZYNWAGYVFUVJGAISURPAXLKYGVFXTSBTDIVWGGOBXEUPJMLWAOUFMOFAXHNOPEJWDXNXWBKJNZCMHISH");
    msg.value = 60U;

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
    msg.setTimeStamp(0.7610779237175131);
    msg.setSource(25820U);
    msg.setSourceEntity(23U);
    msg.setDestination(52508U);
    msg.setDestinationEntity(246U);
    msg.name.assign("OPZCSDNBMMQTAEMRRLRHXYUPGKJOKCNAUXCROKLBZZNHKDELYCDFWUOVCFMACXATEXEXSQTKQXQZFMYJLXXFGLPCMUOFFWMPUEIHRVAOXVKYYFDJAJNWZLPTERSGFAUGHCPIFNYYDMUOJSWSDCTWKHAGJZUYVPHMRVIYGCTRDVTOVZQLJQGFNLEEIZTRNILRXIWNVKWGYVEWQLBZGKQJJBPQSETUHGWIKDIHOUMJSNBPODHBBDIIBH");
    msg.value = 77U;

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
    msg.setTimeStamp(0.2080324076290755);
    msg.setSource(38783U);
    msg.setSourceEntity(215U);
    msg.setDestination(5587U);
    msg.setDestinationEntity(197U);
    msg.name.assign("HCBTJNSSJPGWQHNPMAHMCTKTRSQDSJGRMNGXYSXBLYJLMKDCBEKHFUAEIVVNIYTRJWESZPPZBOXFDEDJLWZJMDJXALSVXEUMWEFZPTRVQZGMEULFRKJHHJXWNUUOOIRKAPDVAIZLCKYSODWGOMQNMNIZEPGCHVSWKQYLCLYTTFQODQIRCUVATTUIONHABXFKYCBOG");
    msg.value = 208U;

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
    msg.setTimeStamp(0.41443145111880997);
    msg.setSource(56202U);
    msg.setSourceEntity(55U);
    msg.setDestination(3533U);
    msg.setDestinationEntity(113U);
    msg.value = 0.39886092595760814;

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
    msg.setTimeStamp(0.5388482551028105);
    msg.setSource(20882U);
    msg.setSourceEntity(71U);
    msg.setDestination(39456U);
    msg.setDestinationEntity(237U);
    msg.value = 0.2326678936733656;

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
    msg.setTimeStamp(0.024056695832531005);
    msg.setSource(14832U);
    msg.setSourceEntity(41U);
    msg.setDestination(34068U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5099892623010306;

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
    msg.setTimeStamp(0.0271250721535522);
    msg.setSource(45593U);
    msg.setSourceEntity(236U);
    msg.setDestination(33555U);
    msg.setDestinationEntity(252U);
    msg.value = 0.49306904812069163;

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
    msg.setTimeStamp(0.9861974758602189);
    msg.setSource(1015U);
    msg.setSourceEntity(221U);
    msg.setDestination(23266U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5842059545894678;

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
    msg.setTimeStamp(0.5602613891009254);
    msg.setSource(8846U);
    msg.setSourceEntity(227U);
    msg.setDestination(24138U);
    msg.setDestinationEntity(64U);
    msg.value = 0.33074696009183113;

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
    msg.setTimeStamp(0.20297959369058094);
    msg.setSource(10275U);
    msg.setSourceEntity(9U);
    msg.setDestination(51928U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7309732423457703;

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
    msg.setTimeStamp(0.5757695543356163);
    msg.setSource(21384U);
    msg.setSourceEntity(18U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9797404190180602;

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
    msg.setTimeStamp(0.5071820820565415);
    msg.setSource(63902U);
    msg.setSourceEntity(193U);
    msg.setDestination(29272U);
    msg.setDestinationEntity(140U);
    msg.value = 0.20886285872987964;

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
    msg.setTimeStamp(0.7962205556245969);
    msg.setSource(8163U);
    msg.setSourceEntity(111U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(79U);
    msg.restriction = 50U;
    msg.reason.assign("KWVHZELUHPPTRBRAZIOQGFPOITQCMDFNILKYMYISNDWNUASWFWSKHSBWXARMLVCPNVTMXJEVWVYIZQPPTUJBTGCDIQKEKZBTMFLSXSDGJBRFGXOYUYDQHSLAYOFECDQEOYOASEMUBUOQCFURBKAVKDCVQARFGJEGKGZTXGNWZWYWXUJDJNOTIALHMZYLCLNMBENWMHZHFUDNIACZGCDZSQHPIQJ");

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
    msg.setTimeStamp(0.9322909735483552);
    msg.setSource(58292U);
    msg.setSourceEntity(118U);
    msg.setDestination(48332U);
    msg.setDestinationEntity(206U);
    msg.restriction = 38U;
    msg.reason.assign("VZBTJNCCABUAAWORNINIIKGNIGVSFUGYUHWIZJQMPGQDAAYLAFBHNSEDPMEPXENPRIGFMAUPFYLH");

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
    msg.setTimeStamp(0.12077383196546287);
    msg.setSource(23625U);
    msg.setSourceEntity(42U);
    msg.setDestination(62480U);
    msg.setDestinationEntity(11U);
    msg.restriction = 9U;
    msg.reason.assign("HCYYCTSLANDVIDZTRXXMFRHTUHOBKPFLEGBZURAXFLVYCOJDLYALCAKNHHZNPZOTPMKWMIXEQQSMOLTLJHJRALVVKCXQOWPNJB");

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
    IMC::TrajectoryReference msg;
    msg.setTimeStamp(0.5979409490302277);
    msg.setSource(26120U);
    msg.setSourceEntity(118U);
    msg.setDestination(20506U);
    msg.setDestinationEntity(52U);
    msg.r_x = 0.574190622828264;
    msg.r_y = 0.637283039582574;
    msg.r_z = 0.010432788860259556;
    msg.v_x = 0.07019731119668315;
    msg.v_y = 0.7779454522035261;
    msg.v_z = 0.4118342542636273;
    msg.a_x = 0.3197983423754017;
    msg.a_y = 0.8048730110861718;
    msg.a_z = 0.16217550162692385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryReference msg;
    msg.setTimeStamp(0.5245834170833666);
    msg.setSource(51216U);
    msg.setSourceEntity(121U);
    msg.setDestination(57017U);
    msg.setDestinationEntity(100U);
    msg.r_x = 0.3913375487093631;
    msg.r_y = 0.051575225618367804;
    msg.r_z = 0.4087375820248693;
    msg.v_x = 0.061322995537878455;
    msg.v_y = 0.30054793352105635;
    msg.v_z = 0.8839361207720643;
    msg.a_x = 0.7534352668193073;
    msg.a_y = 0.929919533534333;
    msg.a_z = 0.42935690552781325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryReference msg;
    msg.setTimeStamp(0.08432412605469242);
    msg.setSource(39764U);
    msg.setSourceEntity(100U);
    msg.setDestination(15321U);
    msg.setDestinationEntity(6U);
    msg.r_x = 0.30859815815499037;
    msg.r_y = 0.6996991931782383;
    msg.r_z = 0.6769668250919327;
    msg.v_x = 0.21153501340954073;
    msg.v_y = 0.9450428915508319;
    msg.v_z = 0.9174065587493248;
    msg.a_x = 0.5804114574259851;
    msg.a_y = 0.4170500918365817;
    msg.a_z = 0.8016811792671433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HandPosIn msg;
    msg.setTimeStamp(0.0085475052067292);
    msg.setSource(33910U);
    msg.setSourceEntity(129U);
    msg.setDestination(60065U);
    msg.setDestinationEntity(133U);
    msg.type = 190U;
    msg.u_x = 0.19890760077616965;
    msg.u_y = 0.04549716813713989;
    msg.u_z = 0.2856450346745152;
    IMC::TrajectoryReference tmp_msg_0;
    tmp_msg_0.r_x = 0.07127675598978234;
    tmp_msg_0.r_y = 0.9163879197683187;
    tmp_msg_0.r_z = 0.8564516980788525;
    tmp_msg_0.v_x = 0.06401699538192718;
    tmp_msg_0.v_y = 0.7646255828759732;
    tmp_msg_0.v_z = 0.1990764378124571;
    tmp_msg_0.a_x = 0.4059047575272755;
    tmp_msg_0.a_y = 0.8043394303078479;
    tmp_msg_0.a_z = 0.9102565943993122;
    msg.reference.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HandPosIn #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HandPosIn msg;
    msg.setTimeStamp(0.2698086177790384);
    msg.setSource(661U);
    msg.setSourceEntity(99U);
    msg.setDestination(50161U);
    msg.setDestinationEntity(201U);
    msg.type = 204U;
    msg.u_x = 0.08045352445609599;
    msg.u_y = 0.6330481942309006;
    msg.u_z = 0.8965803839842806;
    IMC::TrajectoryReference tmp_msg_0;
    tmp_msg_0.r_x = 0.2524711500731538;
    tmp_msg_0.r_y = 0.5129312492594791;
    tmp_msg_0.r_z = 0.3861462975723833;
    tmp_msg_0.v_x = 0.728167690406583;
    tmp_msg_0.v_y = 0.8639466905550705;
    tmp_msg_0.v_z = 0.19052695996783697;
    tmp_msg_0.a_x = 0.9094845097656348;
    tmp_msg_0.a_y = 0.3181390240814065;
    tmp_msg_0.a_z = 0.5924226236966221;
    msg.reference.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HandPosIn #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HandPosIn msg;
    msg.setTimeStamp(0.45059971866129844);
    msg.setSource(10348U);
    msg.setSourceEntity(14U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(9U);
    msg.type = 141U;
    msg.u_x = 0.6594310728833072;
    msg.u_y = 0.661874460747037;
    msg.u_z = 0.7322483736532004;
    IMC::TrajectoryReference tmp_msg_0;
    tmp_msg_0.r_x = 0.5897637515359161;
    tmp_msg_0.r_y = 0.07009025595240237;
    tmp_msg_0.r_z = 0.40716278689464525;
    tmp_msg_0.v_x = 0.8708372085626361;
    tmp_msg_0.v_y = 0.5875704870826477;
    tmp_msg_0.v_z = 0.4402651888786949;
    tmp_msg_0.a_x = 0.3927669515904165;
    tmp_msg_0.a_y = 0.6635779037604972;
    tmp_msg_0.a_z = 0.42493875074433385;
    msg.reference.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HandPosIn #2", msg == *msg_d);
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
    msg.setTimeStamp(0.07469445063452596);
    msg.setSource(40800U);
    msg.setSourceEntity(155U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(94U);
    msg.start = 34U;
    msg.delay = 0.7207130302681815;

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
    msg.setTimeStamp(0.8483225432065904);
    msg.setSource(43888U);
    msg.setSourceEntity(251U);
    msg.setDestination(41030U);
    msg.setDestinationEntity(235U);
    msg.start = 177U;
    msg.delay = 0.569754755061905;

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
    msg.setTimeStamp(0.5609719496699207);
    msg.setSource(16497U);
    msg.setSourceEntity(28U);
    msg.setDestination(2464U);
    msg.setDestinationEntity(172U);
    msg.start = 5U;
    msg.delay = 0.4215339238701834;

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

  return test.getReturnValue();
}
