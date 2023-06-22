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
// IMC XML MD5: acdb5938318a606efc568d43587bd366                            *
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
    msg.setTimeStamp(0.7734946084220814);
    msg.setSource(32326U);
    msg.setSourceEntity(212U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(245U);
    msg.state = 35U;
    msg.flags = 53U;
    msg.description.assign("SRCWDLIGDJBVFAGPMOJNBXUOAJRVWUXYDVNKGZZHRTHSOHSTGSMHJISZNEQEIXPCRKEEDPXYDIDOVMFAVKUHNHXTWXJVNFVNJUPORZZRKQCYG");

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
    msg.setTimeStamp(0.5273292675229903);
    msg.setSource(51566U);
    msg.setSourceEntity(253U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(140U);
    msg.state = 36U;
    msg.flags = 89U;
    msg.description.assign("QCGBTUIKERHISDKOHASPPRBZMXEHRLJGKMBTEUJXKOSSVLFLGJNZREZEEQHHLEFMUACWSXRVICPXFQRELBTQBNIDCODGYUDFIOUNWPRWHRBDCQTPIMIDZJGYFXNZSCHXVC");

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
    msg.setTimeStamp(0.0765428945036618);
    msg.setSource(20109U);
    msg.setSourceEntity(12U);
    msg.setDestination(3341U);
    msg.setDestinationEntity(177U);
    msg.state = 98U;
    msg.flags = 254U;
    msg.description.assign("OJXTZKDHURNOXRDEAJMTBCYYMATXEZBDIDEJJUHVYNFGGUFCSBKRPBIIOJFHEVKTVHHSCSQQZWYDHGJQJGPWNQWNLSNTMGFDMYHUWECQV");

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
    msg.setTimeStamp(0.4562546559328816);
    msg.setSource(41984U);
    msg.setSourceEntity(41U);
    msg.setDestination(245U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.14641258169715277);
    msg.setSource(33544U);
    msg.setSourceEntity(204U);
    msg.setDestination(52528U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.18431793228805715);
    msg.setSource(57952U);
    msg.setSourceEntity(241U);
    msg.setDestination(2266U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.22847117568773945);
    msg.setSource(49842U);
    msg.setSourceEntity(194U);
    msg.setDestination(58293U);
    msg.setDestinationEntity(233U);
    msg.id = 105U;
    msg.label.assign("ULUSEYPXYDXKHCPTFNTGOFKVCWJQBTORZFAKVQHZPUGRHFVFRVPHDOKCML");
    msg.component.assign("EUIOHBIUKSKSUZVDVJMRQEZGQCAXTHYDYUBMDCWHNBPOBOQVHKIKVTRIJJFPLHLAWYACPDBZLZRQTMNTHYFRWMZESLGKAXNOOSXGGOVWRFCJHDRRPSMAVVHFGEMRSAOVFFNQBXWGZJYCROWAMLQPYGCGESKGPOYMBUNQAPTUGDQHFUEMBNSKKJYIEUNZDXAIIMUAHDVQNZJVFWQ");
    msg.act_time = 35161U;
    msg.deact_time = 50867U;

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
    msg.setTimeStamp(0.6336823482642211);
    msg.setSource(49723U);
    msg.setSourceEntity(142U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(249U);
    msg.id = 118U;
    msg.label.assign("GKNYLKTKHIKRCYUOIQLMVYMVSUMDNGAHLFASBYQLZLSMVUTAKRXBPUXBODMIKGZVJHRFJRBPNWQENDCVSMMPRWUYYJNTBDNIBXXOPGCTHTOJQFFJILCCPIIONVBWSTFQFQERGHMDHSAMBPACUXOGCQLAAUTWTUCWJPUXTZSMZSKFALFGDVIHWZGEAQRKZVWVRJXPQGHEIWNEEOTLQXCYXNDYGHOESF");
    msg.component.assign("IMUUYQQBRYYLAJW");
    msg.act_time = 51320U;
    msg.deact_time = 26026U;

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
    msg.setTimeStamp(0.49307685974002613);
    msg.setSource(11657U);
    msg.setSourceEntity(147U);
    msg.setDestination(49560U);
    msg.setDestinationEntity(15U);
    msg.id = 159U;
    msg.label.assign("ZWDKVWICUFSVFGZQKYZIJNPISBZZRKOANPHUSUTCPLYTSXFIMEIOGIHJDYQNTPPMHXSYMOKWEAJZQTNDWOVKVUWMPJMCMXABWPBVQQADZYNTCRUYRTETXLSXGIGFJVHXPDYKKQQEQHLGZBJABGFX");
    msg.component.assign("SFTCHLWYLGNBHAVLWLESSEZHKKIOETDRLKFGDYDWBJXAXZMUJPMHIDWTQCBVWYJMIJRDLRSVOAZTKUSBKUHPXPNSWWNILPBGEAJQEKEQCTFGLMJCVQSGFSUXNRJRZMYAILRUZZOHBUXYXMQYNOAPAGTGBAKZJTCVVYEDYUETCPJVVNKCWQFNWXIBXDFIKZOURSTICPIHEFABQVOHWRPD");
    msg.act_time = 48175U;
    msg.deact_time = 20304U;

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
    msg.setTimeStamp(0.9934999901910583);
    msg.setSource(12106U);
    msg.setSourceEntity(79U);
    msg.setDestination(37959U);
    msg.setDestinationEntity(148U);
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
    msg.setTimeStamp(0.16712881783383804);
    msg.setSource(1606U);
    msg.setSourceEntity(143U);
    msg.setDestination(43786U);
    msg.setDestinationEntity(170U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.8805568320781669);
    msg.setSource(8992U);
    msg.setSourceEntity(3U);
    msg.setDestination(42731U);
    msg.setDestinationEntity(230U);
    msg.id = 57U;

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
    msg.setTimeStamp(0.2175515800950365);
    msg.setSource(51947U);
    msg.setSourceEntity(170U);
    msg.setDestination(53676U);
    msg.setDestinationEntity(240U);
    msg.op = 29U;
    msg.list.assign("RJZZDZHWFEVQYEAX");

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
    msg.setTimeStamp(0.8616446802710646);
    msg.setSource(31414U);
    msg.setSourceEntity(222U);
    msg.setDestination(55560U);
    msg.setDestinationEntity(202U);
    msg.op = 77U;
    msg.list.assign("SRBUZIRWLPEJNTKWRHKNISLBQLVZYKMQEXRJRDHWNCTONUFUKMASIJNDGQOGMWPXZXCTRPXHTKMYQMAHKCYJUAQBPEKFXEYRAFESFFVFFWUYBHOBUDMSKMMVJXHRDDTQAROOHPWIULNOZGXJXLQTAILHNVNBTQTLDIJTZKVYEVPAIFOYLIWOGEACCWVKGFTJCCIUDLVNPMHYZDHFEYRVGEYCAUIBBSSDBBXNZCZDGSC");

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
    msg.setTimeStamp(0.1736031513489461);
    msg.setSource(18881U);
    msg.setSourceEntity(190U);
    msg.setDestination(7530U);
    msg.setDestinationEntity(58U);
    msg.op = 140U;
    msg.list.assign("OEESYDYGSVWQ");

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
    msg.setTimeStamp(0.6210424519791985);
    msg.setSource(28132U);
    msg.setSourceEntity(25U);
    msg.setDestination(36721U);
    msg.setDestinationEntity(77U);
    msg.value = 48U;

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
    msg.setTimeStamp(0.6300580802892871);
    msg.setSource(373U);
    msg.setSourceEntity(211U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(190U);
    msg.value = 187U;

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
    msg.setTimeStamp(0.1928678389680213);
    msg.setSource(48306U);
    msg.setSourceEntity(46U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(14U);
    msg.value = 130U;

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
    msg.setTimeStamp(0.8691398502737185);
    msg.setSource(30797U);
    msg.setSourceEntity(33U);
    msg.setDestination(31966U);
    msg.setDestinationEntity(147U);
    msg.consumer.assign("AIVYTJDBBMMHLULEWZBBPSTDRYWNMWEKTWPAGGWNELCAWPKQHSZPCJFSBQWDYANHBRWIGHBKMFCSTQUIIGXJMDMMOGQVGOREIIJPQPMOUICDUAAFGQKHVLZXXEAQIZLNEKYUNXCVEOLJJAEZJVHRFSFDMCNJFCOVGGYURDPSKYO");
    msg.message_id = 45074U;

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
    msg.setTimeStamp(0.7303226947797612);
    msg.setSource(1063U);
    msg.setSourceEntity(19U);
    msg.setDestination(50142U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("GDJYBNHWLSXKZV");
    msg.message_id = 28716U;

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
    msg.setTimeStamp(0.6068051549419451);
    msg.setSource(50138U);
    msg.setSourceEntity(232U);
    msg.setDestination(9339U);
    msg.setDestinationEntity(118U);
    msg.consumer.assign("EUZZMKDQIRMLBOACCLSZSSJTJRUFEVKHQNZQBMFNFREIKNKNLTYKWGRJOXIVFMTWQXHLFOCEJGYLDMHWPCWFIMGHDASYTELNXBD");
    msg.message_id = 11838U;

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
    msg.setTimeStamp(0.8246986173551392);
    msg.setSource(8800U);
    msg.setSourceEntity(60U);
    msg.setDestination(61438U);
    msg.setDestinationEntity(32U);
    msg.type = 91U;

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
    msg.setTimeStamp(0.24323559602136002);
    msg.setSource(13955U);
    msg.setSourceEntity(52U);
    msg.setDestination(46080U);
    msg.setDestinationEntity(3U);
    msg.type = 9U;

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
    msg.setTimeStamp(0.555280344558543);
    msg.setSource(40274U);
    msg.setSourceEntity(220U);
    msg.setDestination(61582U);
    msg.setDestinationEntity(247U);
    msg.type = 3U;

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
    msg.setTimeStamp(0.6020794850677844);
    msg.setSource(4512U);
    msg.setSourceEntity(101U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(55U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.6263495054720853);
    msg.setSource(17335U);
    msg.setSourceEntity(51U);
    msg.setDestination(12871U);
    msg.setDestinationEntity(222U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.8972251155139855);
    msg.setSource(54322U);
    msg.setSourceEntity(163U);
    msg.setDestination(34750U);
    msg.setDestinationEntity(24U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.40338223718951216);
    msg.setSource(51279U);
    msg.setSourceEntity(49U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 227U;
    msg.step_number = 70U;
    msg.step.assign("IOJMGQHUTXKVYSONGQBLHCTLSXQPAEWOGUFMAJDLLNWNSZPKVHBCCUROFPWMKMNAFDKXQPTURHOJZEFCNXZPTBTWWOIWRCXYIDFWQLTTMAGCVUGOVZYLIJXGFINJEURRGQSYPFXKCAQMEQEIRHVVBAYYRBSUWNVPLYJHS");
    msg.flags = 68U;

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
    msg.setTimeStamp(0.7117290225948579);
    msg.setSource(5801U);
    msg.setSourceEntity(157U);
    msg.setDestination(58460U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 70U;
    msg.step_number = 248U;
    msg.step.assign("OQDHDFJPPQVWFFWEBLWEETHALBCEAQFCMWZNBYRZGCBEGVKTXQVFZJAWMUBQWGAIVKLCNSVNARKGDZOULYYTBLIQIPHXLBVRRLCGXMHXQSPMBZJUNSS");
    msg.flags = 0U;

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
    msg.setTimeStamp(0.3107392087381424);
    msg.setSource(34283U);
    msg.setSourceEntity(107U);
    msg.setDestination(46967U);
    msg.setDestinationEntity(69U);
    msg.total_steps = 209U;
    msg.step_number = 47U;
    msg.step.assign("MKNLJMDIJGPROMJINLNPXXSHTNDHFGBDHEXBEAQUBSKQJWVLONHFLWQZSOZOMYPFDXVRCVYZBDSKIVDQYYCZUKGDTXCMNZIFMFLCIWETHRAKXSZEJLPSTCWFRKDSVFAHIQAPUFWNKCHPK");
    msg.flags = 20U;

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
    msg.setTimeStamp(0.6505039737957105);
    msg.setSource(59507U);
    msg.setSourceEntity(225U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(64U);
    msg.state = 78U;
    msg.error.assign("OJOXFIDIASSWQRZJRBRJFMTYLTXNIPJHOIFVOEECNEBJUHVNQITPJGBGYWAYPRUEECQYSDCBHQBMPAKLLQKVKMJTSRUTGKLAXCCXDAMXUJHGZLSIBT");

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
    msg.setTimeStamp(0.24157669409382665);
    msg.setSource(61201U);
    msg.setSourceEntity(100U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(44U);
    msg.state = 133U;
    msg.error.assign("MKWYPWBKLWKOUPTTTZCNMLAEXIXNMKJIGNZAUPMNCFRBUDHKJCYQTDIAELBGPQDQGOLVSIRLVEUVWYFNOXQTZUKYHOHCJPAEBQUOHZMUCGGHKDTBLJ");

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
    msg.setTimeStamp(0.8066280156755775);
    msg.setSource(61770U);
    msg.setSourceEntity(85U);
    msg.setDestination(61649U);
    msg.setDestinationEntity(158U);
    msg.state = 60U;
    msg.error.assign("BHEKWBEKCODLTZYNHZHOOJPVHAILGIQQKRJUTNDBYZXTXPXGUCFTTPZDSVHICKUPTRQDKMUFORRVZIASZPPOMCQUFHDCQSXDMMNESMFRQALOBIUJFMANWAUWZGCAMVVHEWNAIJUIMTHYWLGPGKTRETYFVTIJBSCSNVGQYAVKZYRXLQRLVJXFNOUIOCYXEYWQNGSXBDDJLAV");

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
    msg.setTimeStamp(0.7696833918624956);
    msg.setSource(47685U);
    msg.setSourceEntity(239U);
    msg.setDestination(47451U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.2728663018583355);
    msg.setSource(23226U);
    msg.setSourceEntity(34U);
    msg.setDestination(24897U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.9213359641742257);
    msg.setSource(2908U);
    msg.setSourceEntity(51U);
    msg.setDestination(56577U);
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
    msg.setTimeStamp(0.912570621089012);
    msg.setSource(24306U);
    msg.setSourceEntity(228U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(7U);
    msg.op = 87U;
    msg.speed_min = 0.6225975614065966;
    msg.speed_max = 0.19329327884996916;
    msg.long_accel = 0.25889388809594904;
    msg.alt_max_msl = 0.14471942730836873;
    msg.dive_fraction_max = 0.20161957835486755;
    msg.climb_fraction_max = 0.5985426629809091;
    msg.bank_max = 0.852787482488783;
    msg.p_max = 0.019746396347238182;
    msg.pitch_min = 0.9098843812455574;
    msg.pitch_max = 0.7732212380445889;
    msg.q_max = 0.6732173162783697;
    msg.g_min = 0.31039257952047794;
    msg.g_max = 0.26485564681610474;
    msg.g_lat_max = 0.5764694949650682;
    msg.rpm_min = 0.3945971277827357;
    msg.rpm_max = 0.9427679179700361;
    msg.rpm_rate_max = 0.7536392263588437;

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
    msg.setTimeStamp(0.7587575766305573);
    msg.setSource(34734U);
    msg.setSourceEntity(12U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(34U);
    msg.op = 149U;
    msg.speed_min = 0.6012124858038157;
    msg.speed_max = 0.4318369025010633;
    msg.long_accel = 0.5160674537151073;
    msg.alt_max_msl = 0.1655049622413508;
    msg.dive_fraction_max = 0.4055070684414471;
    msg.climb_fraction_max = 0.9512397307408696;
    msg.bank_max = 0.5076314465653539;
    msg.p_max = 0.7913768403821007;
    msg.pitch_min = 0.2933219290336656;
    msg.pitch_max = 0.06392254679414944;
    msg.q_max = 0.15649133084873945;
    msg.g_min = 0.34782881940123256;
    msg.g_max = 0.1896839968755063;
    msg.g_lat_max = 0.3915544266900023;
    msg.rpm_min = 0.9804030622545831;
    msg.rpm_max = 0.9108056555469034;
    msg.rpm_rate_max = 0.9929849508959235;

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
    msg.setTimeStamp(0.4199148693310386);
    msg.setSource(59797U);
    msg.setSourceEntity(140U);
    msg.setDestination(1851U);
    msg.setDestinationEntity(165U);
    msg.op = 187U;
    msg.speed_min = 0.5296579550703185;
    msg.speed_max = 0.9580664530873655;
    msg.long_accel = 0.06901930435234593;
    msg.alt_max_msl = 0.8278124317226533;
    msg.dive_fraction_max = 0.8814507077917777;
    msg.climb_fraction_max = 0.6793154937687467;
    msg.bank_max = 0.14591838391708756;
    msg.p_max = 0.5204210810066765;
    msg.pitch_min = 0.5512379271970709;
    msg.pitch_max = 0.598425789123442;
    msg.q_max = 0.007926809366382459;
    msg.g_min = 0.8192131505552516;
    msg.g_max = 0.2701338138880568;
    msg.g_lat_max = 0.7871515720501512;
    msg.rpm_min = 0.1093703514200699;
    msg.rpm_max = 0.40964661537188163;
    msg.rpm_rate_max = 0.8748792641727099;

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
    msg.setTimeStamp(0.35337543319902964);
    msg.setSource(159U);
    msg.setSourceEntity(250U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.444839172091413);
    msg.setSource(56932U);
    msg.setSourceEntity(231U);
    msg.setDestination(12701U);
    msg.setDestinationEntity(246U);
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.7391183113978427;
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
    msg.setTimeStamp(0.3367691039691585);
    msg.setSource(15666U);
    msg.setSourceEntity(210U);
    msg.setDestination(27488U);
    msg.setDestinationEntity(210U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WONEKFMCSKGJJJDPGAYHZCVVWZTRTOJNQXZBSKNHDHTAOYBDXZQIOVBAMRTXRUUEHKIWFDTKMN");
    tmp_msg_0.value.assign("RWWJJOEZRPXBGDTEZVXESDMVVDHJFXWTNGQQKEISRDONFQZIQCEEUYSFKQUKATGHJXLAUVZTIRKTBDPDNXPHVISCZAMTLQOUHFLLQSPEAZGKGNANNRLSHNOMUXRCYWPCLUBZHUUYFQXQYEBJWLBASQZVKZMCYW");
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
    msg.setTimeStamp(0.628422463094325);
    msg.setSource(23352U);
    msg.setSourceEntity(172U);
    msg.setDestination(13931U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.8132463377469904;
    msg.lon = 0.11149476311255335;
    msg.height = 0.7227883143195049;
    msg.x = 0.6631443471177131;
    msg.y = 0.9447051172368434;
    msg.z = 0.09539688657208167;
    msg.phi = 0.4202875693334852;
    msg.theta = 0.40838491347731;
    msg.psi = 0.4904998326943567;
    msg.u = 0.13704225204007747;
    msg.v = 0.3765832052089302;
    msg.w = 0.9771113056342366;
    msg.p = 0.20218948129164493;
    msg.q = 0.11704123271589373;
    msg.r = 0.3617770420277576;
    msg.svx = 0.3726927087774995;
    msg.svy = 0.16174492454410938;
    msg.svz = 0.2053229283157758;

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
    msg.setTimeStamp(0.2397439351180335);
    msg.setSource(31906U);
    msg.setSourceEntity(225U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.8901789628903811;
    msg.lon = 0.8665501022079775;
    msg.height = 0.5939799554496785;
    msg.x = 0.7863305966653774;
    msg.y = 0.553165764450814;
    msg.z = 0.5412487471840672;
    msg.phi = 0.07456282979114093;
    msg.theta = 0.8456899615396312;
    msg.psi = 0.32238488772772456;
    msg.u = 0.24006390779021414;
    msg.v = 0.06756721896334461;
    msg.w = 0.35754212165162136;
    msg.p = 0.031389799680044184;
    msg.q = 0.3669737685992648;
    msg.r = 0.7132949888081732;
    msg.svx = 0.6139408796783988;
    msg.svy = 0.10811997206832225;
    msg.svz = 0.1464455869401703;

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
    msg.setTimeStamp(0.25797476139906095);
    msg.setSource(44496U);
    msg.setSourceEntity(171U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.46871774572706515;
    msg.lon = 0.7629005358156236;
    msg.height = 0.37911721213682503;
    msg.x = 0.3753048465835833;
    msg.y = 0.6386209497987871;
    msg.z = 0.5803848473438182;
    msg.phi = 0.28725372069261;
    msg.theta = 0.13324889531675743;
    msg.psi = 0.31293037482595276;
    msg.u = 0.3545981961477346;
    msg.v = 0.5819075381119638;
    msg.w = 0.6798494619919692;
    msg.p = 0.36472278824457693;
    msg.q = 0.42560130222040193;
    msg.r = 0.3267553232406709;
    msg.svx = 0.4800891585202084;
    msg.svy = 0.7177273092848351;
    msg.svz = 0.11078831082610185;

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
    msg.setTimeStamp(0.9485423667277711);
    msg.setSource(41554U);
    msg.setSourceEntity(221U);
    msg.setDestination(23374U);
    msg.setDestinationEntity(189U);
    msg.op = 225U;
    msg.entities.assign("EXOQGDKVPDJDLEQQHZIQSQLCPHGPLBTJSWIUIVBPKZZCFNNYFEUMGPPRZQHDCXYITLWBYUQGQCVEUNMS");

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
    msg.setTimeStamp(0.4903901653626107);
    msg.setSource(61431U);
    msg.setSourceEntity(158U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(71U);
    msg.op = 218U;
    msg.entities.assign("OVYXXNINSELNHLXOONXGRI");

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
    msg.setTimeStamp(0.03014687618006917);
    msg.setSource(36528U);
    msg.setSourceEntity(44U);
    msg.setDestination(12654U);
    msg.setDestinationEntity(9U);
    msg.op = 239U;
    msg.entities.assign("EKNCHUMOWOLTDRBPSKSCQLEEMVSLXCGQMBXIKZSXQHARCQCMPHGDABAZJIIYBLJQHBLMOCIODNDFXWKFKMWTYTUEEQMYFVNOICBUVAJGTICFDSYEFJXYNDCZXASKLYDDOLCWWFYYRXGJNYDFPWLEVJPZPRLTGBZQHVWZOPQSUBGJHNBNHAVPZOAMJRGWNWYVGSQ");

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
    msg.setTimeStamp(0.6242315286745242);
    msg.setSource(12375U);
    msg.setSourceEntity(198U);
    msg.setDestination(48233U);
    msg.setDestinationEntity(84U);
    msg.type = 204U;
    msg.speed = 20737U;
    const signed char tmp_msg_0[] = {-1, -11, -69, 123, 18, 31, -58, 32, 112, -61, -125, 107, 100, -36, 48, -90, -49, 45, -30, -125, -3, -19, 13, 81, 45, 119, -4, 77, 23, 106, 61, -106, 114, -1, -4, 54, 100, -36, 97, -69, -115, -118, -110, 47, 70, -77, -86, 15, 121, -121, -48, 46, 118, -13, -53, 34, -51, -58, 21, 49, -106, 117, 105, 4, -12, 38, 23, 61, -67, 87, 96, -34, -1, 41, 98, 11, -21, 68, 53, 89, 74, 30, -91, 0, 99, 16, 88, -3, -92, 83, 118, 0, 77, -97, 98, -19, 49, 40, -39, 12, 62, -124, -41, -62, -107, -26, -1, 33, -87, -58, 54, 115, 44, -66, -22, -4, -99, -86, 10, 27, -91, -41, -61, 21, -50, 33, -67, 36, 100, -125, -52, -97, 65, -46, -21, 0, 58, 117};
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
    msg.setTimeStamp(0.33979196871838);
    msg.setSource(27975U);
    msg.setSourceEntity(211U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(118U);
    msg.type = 105U;
    msg.speed = 11800U;
    const signed char tmp_msg_0[] = {-29, -47, -24, 78, 70, 15, 31, -18, 13, -89, -69, 126, 103, -61, -67, -123, 89, -68, 8, 24, -109, 94, -66, 58, 8, 57, -125, -9, -44, -86, -120, 106, -92, 111, 18, 104, 107, -85, 117, 52, -116, -72, 34, 51, 4, 42, 1, 96, -106, -30, -115, 36, 16, -88, 62, -22, -62, -53, -111, 64, -123, 106, 83, 12, -125, 45, 27, 105, 120, -63, 66, 97, -7, -54, -62, 95, 9, -62, -61, -55, -55, 90, 111, -120, 69, -74, 12, 100, -110, 26, -47, 82, 25, -5, -111, -21, 2, 33, -110, 76, -71, 49, -27, -100, -62, -108, -48, 41, 85, -25, -18, 75, -101, -117, 57, -35, -11, 25, -116, -90, -49, -41, -38, 103, -8, 4, -38, 92, 114, -13, -100, 94, 64, -86, -76, -48, -56, 53, -35, 63, 123, 88, 25, 30, 110, 95, -13, -97, -22, 98, 119, 102, 103, 86, -24, -86, -117, -25, -100, 37, 33, -117, -106, -18, -9, -41, 84, 66, 26, 17, 117, -32, 40, 103, -52, -37, 2, 33, 66, 111, -84, -21, 2, -72, 67, -57, 102, 42, -98, 54, -15, -106, 6, -103, 65, -118, 123, 109, -6, -95, 49, 98, 66, -2, 76, 91, 47, -95, 12, 87, -61, 24, 94, 75, 91, -34, 18, 63, 1, -53, -94, 7, 67};
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
    msg.setTimeStamp(0.7138074191434611);
    msg.setSource(4572U);
    msg.setSourceEntity(223U);
    msg.setDestination(47976U);
    msg.setDestinationEntity(134U);
    msg.type = 159U;
    msg.speed = 26651U;
    const signed char tmp_msg_0[] = {-105, 71, 11, 24, -50, -121, 11, 91, -49, -64, 53, -31, 87, 48, 57, 0, -84, 90, 92, -4, 105, -103, 28, 107, -122, 90, -44, 26, 48, -119, 71, 59, -13, -121, 125, 32, -58, -127, 121, 123, 52, -116, -30, 62, 6, -9, 11, 62, 65, -118, 123, -126, -127, -111, 78, 117, -91, 26, -126, 19, -117, 70, -22, -33, -103, 98, 115, 67, 55, -38, -113, 55, -13, -117, 20, 11, -104, 124, -27, -26, 113, 113, 29, -49, -67, 88, 8, 101, -119, 9, 65, -112, 6, 99, -22, 89, 63, -119, -76, 29, 9};
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
    msg.setTimeStamp(0.6502551034434331);
    msg.setSource(37512U);
    msg.setSourceEntity(100U);
    msg.setDestination(1344U);
    msg.setDestinationEntity(57U);
    msg.op = 175U;
    msg.tas2acc_pgain = 0.7849992520378278;
    msg.bank2p_pgain = 0.6228096176127533;

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
    msg.setTimeStamp(0.45800091620335137);
    msg.setSource(14172U);
    msg.setSourceEntity(32U);
    msg.setDestination(32681U);
    msg.setDestinationEntity(161U);
    msg.op = 166U;
    msg.tas2acc_pgain = 0.10912569221378177;
    msg.bank2p_pgain = 0.649785397636728;

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
    msg.setTimeStamp(0.6240677702136974);
    msg.setSource(12595U);
    msg.setSourceEntity(40U);
    msg.setDestination(27841U);
    msg.setDestinationEntity(80U);
    msg.op = 230U;
    msg.tas2acc_pgain = 0.02526511660862263;
    msg.bank2p_pgain = 0.6836296958308203;

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
    msg.setTimeStamp(0.2468818772399911);
    msg.setSource(15011U);
    msg.setSourceEntity(12U);
    msg.setDestination(3610U);
    msg.setDestinationEntity(149U);
    msg.available = 909482414U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.6515692835571439);
    msg.setSource(38695U);
    msg.setSourceEntity(111U);
    msg.setDestination(50186U);
    msg.setDestinationEntity(247U);
    msg.available = 371962773U;
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
    msg.setTimeStamp(0.6548203455248115);
    msg.setSource(30142U);
    msg.setSourceEntity(52U);
    msg.setDestination(58621U);
    msg.setDestinationEntity(193U);
    msg.available = 635812977U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.7694003188439009);
    msg.setSource(33102U);
    msg.setSourceEntity(46U);
    msg.setDestination(44201U);
    msg.setDestinationEntity(141U);
    msg.op = 66U;
    msg.snapshot.assign("LJLLKPGHTYJDYGBAIKEOTQRERGBMEDUHVZRMAZLITIXRYPABQZHNVDCBSRVXAPPLNREOCOGXIWCOOEPUXSUGTUUSUNFTWCJNVFEPUVMIYTKQNMKMNPZIVQZSOHKDVWZXFSJAQWSVVODSDLMRQWXNKKBJLAXKPAXYQZUTAFJODHHSSYRZWMIZ");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.592264036712124;
    tmp_msg_0.lon = 0.19889513498341727;
    tmp_msg_0.depth = 0.1929184840546806;
    tmp_msg_0.roll = 0.6736486487415835;
    tmp_msg_0.pitch = 0.6547623294142102;
    tmp_msg_0.yaw = 0.4465391850816631;
    tmp_msg_0.rcp_time = 0.7476702826852514;
    tmp_msg_0.sid.assign("BUAEFTJEWRJGFEQZMLFPTRAQQQZXIRAKKQQDLGZZGAOORGTLFMKWHJSSYIHSSBXOKMYYXEJNRTVVJPQLXFTYBVVHTOYVTDDGNIEXBVVKGINASNOZAPUCBDNLWLNZIKAUJKCPPQMMEXABHIFJMXHFWCIEFXBCYSOZFQHKWJZUYRDAFGNHPUNWGDWBXSEKYZPQMMSXCUDUIOLDCVGRBWOILDGJZCHMJHOYDCUMWTCICLUVA");
    tmp_msg_0.s_type = 191U;
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
    msg.setTimeStamp(0.4216381471696906);
    msg.setSource(44067U);
    msg.setSourceEntity(218U);
    msg.setDestination(8732U);
    msg.setDestinationEntity(37U);
    msg.op = 230U;
    msg.snapshot.assign("NDHTBODMQKPOJTWQYHZWOMTKXUQOJQWIEFQCRWIFHVMAPVUUNAEYIGVXCNCBRIVKRRKWAAHEZETNKCUNIQODPDLDGUSDEGPWHWJLUFYYLVXOVGALLEBMSBWLTCRZNXCZRXIJBPHNLBDHGPBXMWEDTYZZOAFXABZMZUMGXFPBFIRKCSKDKTTGPHIHTXYWXVFFIQJAZSHSTSIKKCPMMGFAROJVQSJCSEQNBUPYJLUYSRORLEZJYLVOGGNMVSJD");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 121U;
    tmp_msg_0.id.assign("YGMCDFPYIEIGAPNEWYGMVCK");
    IMC::EntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MWFFPKFKCTANRHWNFVUGFQHHRPOMAVIXTWCSMKISNMIWRPNWOLXHLTUQPXBJYOYPLXERIGWBWWQXSLUHITUMBQGFVVKVOTLWLIBPFOUJXCNEVTJOSBDJUDWPULBAKDQGKFZGQVNJQYKASXNYUDCKDOUQCQSEZUEEAXIPGEAOEKTGICAJRTKIZZHRGTBDEGMDMIEJXNBLSCSARHNACH");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("HAHTMKLTNLYGDOSVCRUTHGHENHEYLKWUEYNPSFEZOCRSQUUKITXMRAMOKTUTCHBLAPBJXVQVCHZSBAREKQTEADHDDLORJXOBGLYJUMMVFGIJSTIWWXDPZQMPZVBROABDILDMWXVLPSREGEYXCDSHBNKCYJMPFQFGNWZWHZFDGNOJJWMOTPQFIASUUEZKCWKBSCDBIJRJIQVFIBNWUCYRIPKXVAZTQUQNVNAEXGFGMSF");
    tmp_tmp_tmp_msg_0_0_0.value.assign("VBZRFTFUCMIWBEOQAAMWSIQPFGVYGODTFXISOERWMSNPASXBZKECDYUGNRJQPUZKPSOCKWCDOZVRLXTCNSQBXZLEATGLKHDLOVRXKVLKTXNZDNIAMMJKZGUANMROBAWGEQOXFJYEDCDZMUCFH");
    tmp_tmp_msg_0_0.params.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9320897322248065);
    msg.setSource(25183U);
    msg.setSourceEntity(183U);
    msg.setDestination(27711U);
    msg.setDestinationEntity(139U);
    msg.op = 108U;
    msg.snapshot.assign("HMWJKHBQGYLXPNCMIQICQIAXFWTKMQEELJRYMQQDHPBFWCBKQWFOYTLVJELRKLYRDLVXRAJLBFTPZWAYECKFVWJIFKNOXZURNIDZVMWPUIDUGZHTZREZUIMFGSHONTFEDUVSRXYXAMMWAYPNKSSYAVQBJNHZFXZTDCGCSVHSPNEXGVUSANJVHENSD");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 181U;
    tmp_msg_0.op = 168U;
    tmp_msg_0.request_id = 21595U;
    tmp_msg_0.plan_id.assign("DUBBLUEQTXQHZSRJXHITAZPSGOTPVKMXULLEPYGAMCXNRMQNMIJEMZHHDDDHVKTXSGKWIFCWYPNLDAOVYOCLVUGHCJ");
    tmp_msg_0.flags = 28261U;
    IMC::VelocityDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.8814799817384783;
    tmp_tmp_msg_0_0.x = 0.9567655156845966;
    tmp_tmp_msg_0_0.y = 0.26001991658209533;
    tmp_tmp_msg_0_0.z = 0.11279967819367576;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VZPKWZSVXIGGWOMRHCEIFPLQNHVWDMQUXKNWASFJTDNLMNVKDAOHEOWFHUEYBBDQJFULYTUGOBZIODSQNEWHZLYUCGYMIWECSYFCVGRYUHVKOTIMDZROJKNRESJAEMGGJCNHTTOWLKLPZZJLXTKLLXXXBJZTDLIVDPHUAPPCRTIOQAYBEQRYURHPABZEXICDPJOCXQFQJNYVAKWGFNVSUA");
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
    msg.setTimeStamp(0.5985175936953789);
    msg.setSource(41848U);
    msg.setSourceEntity(88U);
    msg.setDestination(62820U);
    msg.setDestinationEntity(78U);
    msg.op = 144U;
    msg.name.assign("HVXVIBWCAOSHPEDAGCXTPWPTYVZTYXMMMJKNUYFDVRIBUCMRBBXDHOJSBYPXOQVWXQVEGCUMZDRTPCZPYKCNMLFBDPYHFOITTWIELVQLLSQBESMWPLPIRYGLGXQWJFUDLGFAJLOOHVKIEFCAQNWLFSZSJUHNBOUUVKZARHZNTKXTXYWYNPEETIZNXOKJCFIQTKUDSQRORFKFGUHAMDASC");

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
    msg.setTimeStamp(0.2358400024360242);
    msg.setSource(65419U);
    msg.setSourceEntity(159U);
    msg.setDestination(35247U);
    msg.setDestinationEntity(40U);
    msg.op = 16U;
    msg.name.assign("ZTEFJRPYHCLKJDPSLBQPYOVUFOQRMIUILKPHLTCCIETVWKUDHJITFAEYFYGAVENVMTUGJIVALAHFUKRWQXKONNAWWWFMKNRPZRBXANHKHDORYWIIBJDEGZTMLMIUJWMYEOXGDGAVLBKEVYFEZNWSZAXEXJ");

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
    msg.setTimeStamp(0.42943045802057156);
    msg.setSource(26129U);
    msg.setSourceEntity(61U);
    msg.setDestination(3926U);
    msg.setDestinationEntity(143U);
    msg.op = 189U;
    msg.name.assign("ZZXDKBAYJBJATKWTNWDTGKKGOQREOLAHFIGECFEGZYXSAOYQHWANXOWRRRUIIKZJPFSTMNRHTHZUOOELVPDVLUVXOQNMPBRHSHVUSVWCCJLTULOWNGNQXMGDKJIZDXBLTYCVBTNGCANDSFBGUPCJFBYUVXECINIXBZWZUEAMV");

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
    msg.setTimeStamp(0.9259445385607956);
    msg.setSource(30226U);
    msg.setSourceEntity(51U);
    msg.setDestination(48115U);
    msg.setDestinationEntity(197U);
    msg.type = 94U;
    msg.htime = 0.29060911826653635;
    msg.context.assign("YNUTCZGKVVONFPZHHKBOKJIKYUMWCDCOTEQGPPGBDHIWZMKEMFIZQEOZUSTEAMODSWXAIQSJBDRDFHLSBBIMZELLVNHXCNJTCCTKXNQYEUGAGFQAYZCIHKKPAFDFPPLJAGDINEVXQOVDHCDHYMAXTNKRQIFXMTRLBOHJJXYETRBSXUBFLXGSMVFRUYCGBCQLRDPPLZJMZQEUQSEYPYSSHVKW");
    msg.text.assign("HZTDECUSWOGEUNJJMJOXAECXDWNRFRGZUKPOKVGWWTGIVTXAISPMDTFNKFWBJAVLMNQSFOBIIVQYWAVHEHMUOFOBBCSLDFBQLGZYYSLTURBGBOCSQYACRXXJYPGXOPWDPQSMAMQTWEDOGEJRZZVQHPRCIUHCJFCAUYIVDZBUVMWKEHXDGKNNLHLFCUYNYZQZIGKAHIHNKXLKZPTL");

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
    msg.setTimeStamp(0.1661819276763371);
    msg.setSource(35474U);
    msg.setSourceEntity(46U);
    msg.setDestination(25658U);
    msg.setDestinationEntity(210U);
    msg.type = 150U;
    msg.htime = 0.08312568420462596;
    msg.context.assign("LPFWCKJMOEPWSDQAEPGXGKEZXWLQKZPBWOOOAVOYIHFCJCEFOWLXWSZNSZCYNPRWIDLALXQDRBGUMBCLGASRKTNRPGNBTSIJMQZGDAZVRNNRMYUETIEJUVTMDRTQ");
    msg.text.assign("SRAKYEBIMSTDCVVEOJETCCQZQMZJXQHKEBMNWGSHMSAUVCOCQPGDYNXRQPFJTEKMKZCKMCYLJX");

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
    msg.setTimeStamp(0.26849057780489083);
    msg.setSource(59311U);
    msg.setSourceEntity(20U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(61U);
    msg.type = 27U;
    msg.htime = 0.9773686957922207;
    msg.context.assign("ZNHNHYQYGCSFOEAGUWJUAGPANDHJTCFEAJZNJKXIOUQHSMLYMIDSBEDTOSVUBVWQOCFZKWFYTMLSTMYUBYZWXISMWNTIWDRTIQBNXXNGRNBZWWSDRHCEUZRAVZKYFBYVWZCPPMQKMRIDROFLGNPGAZKCIKRYLAOBRMVLHOCLHELGDWQMQBPAERUVDLKFXQPIURDKFSPJXEBTXJGJLDXAYOGBZTCNLGCVMUJXSJHHEJUVQKFAPVKFICVQOTOSP");
    msg.text.assign("DURNIJQSNSOVPIHKWYPDVJCIWKHEWZVKVAEALHZPOQEJPFAUMFHPXZRNTLXBXDSOSAXFVJBGMFNCSZATHIKPYOAWWSZWZVLFBRLNUTQCGUBYYFTYIMOGYLCXTJBZCMDMUQSOBQPXQPQEGTHYMSCJNKCZXLNBUPSZADRDAKYUEOQDKLGJDXZFWCHTWBLJTJEBHRQVVM");

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
    msg.setTimeStamp(0.6281767314342327);
    msg.setSource(62577U);
    msg.setSourceEntity(140U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(128U);
    msg.command = 199U;
    msg.htime = 0.6642841449826429;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 175U;
    tmp_msg_0.htime = 0.020371416201603876;
    tmp_msg_0.context.assign("EPSPQPTBOZVYONIRWODHIJYKLXGKWCWXXBXEHZUFMMHKJOQOROAZFTUUEANCULRVYBTGNDSCGFUYOHMSLFECJXPUDWJHEILZQANVBRVEZPAUNMDQTEDLNCQWEVGTOPZKIHVCMGT");
    tmp_msg_0.text.assign("SZRZRLFMQHEUTBAEMVHEAOZVKQLBOITDYKMQIITVGCFXJXALFMFOBHSTPGQRHGVOUUHAPHEQIBLJKJOAJYCGTGDPDECYIPWQZCLTEPINKLQFCRAUDEVXSRFJIJCUDBQDVDNGXMKWTRKNONRZDIMYQXGJLTFUCNKHELKIMSLVTBYNNWDSYRPOWUAGBRXBMKAYSJDTIW");
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
    msg.setTimeStamp(0.48842692029691737);
    msg.setSource(52459U);
    msg.setSourceEntity(35U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(183U);
    msg.command = 218U;
    msg.htime = 0.05969447704317543;

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
    msg.setTimeStamp(0.5765551175512499);
    msg.setSource(31660U);
    msg.setSourceEntity(130U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(187U);
    msg.command = 179U;
    msg.htime = 0.8831592652587849;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 151U;
    tmp_msg_0.htime = 0.8384825732423755;
    tmp_msg_0.context.assign("JMSDNAQTETLHNVWNEQFZOLRICQBJPUKRFATGTMOJCWJUXSGDSLRUHPXXRNICMDFYDQOLBADWDZPRIIGZXCNTAGOXEFVZMBYBZXNVRFBHSUUBLGJOESYBFHAVKMEGXKIYYNKPWMKEPOEGJQVUKXJDGHHSELCMIHDTRMXRQZYZYUWKTPHIMZKVVBUTVCCMJATICOFFRSANWNLKYEFPQWCLSGHPCY");
    tmp_msg_0.text.assign("UERCXWJMVWKHUOFBWPBNESLGSGQAGUOAETNOULAKXQPMLJWANIWCDTNVFQAYZOPNHYBRKUJZBJPTZXQFJEDETVGICYDGJHCKIIPZLCASCMHWNCOUCGZTYYRMFSVSTADRVEQQPIJGQWSTZKLIBATHCCOTLHDSRLFLRGSEOJKDVJMWKAEOIGBVFNXSFXBDEVY");
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
    msg.setTimeStamp(0.18116489176615036);
    msg.setSource(44511U);
    msg.setSourceEntity(188U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(111U);
    msg.op = 119U;
    msg.file.assign("YRBOPVAFQOPMJSXJIECVJGMDHLZDLFZUGORQQIVBVOASQPKCTBIVPKULOAXCPJYNROAPRGHLSNDCYGJNAFXMCTCKFEXUFWASESZTUHIWXYSHPRDGMDTAWHTRYPFBZCYZUZEMMRAFBVQGHSWLQKJENVJSCUEZXIUGDQIPENFQKBLRRIQLTHOYMBCYXFGGOXDVHWDPXJBZUNLYKZONNIUIEWMWWMDFKJWTOZYBSTNAHVHKGQSJXDLIRAULNBMV");

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
    msg.setTimeStamp(0.4001286018324023);
    msg.setSource(53190U);
    msg.setSourceEntity(96U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(247U);
    msg.op = 207U;
    msg.file.assign("THPPVOPIWSEHAIFKYPDBTDLVBJNHXOVBEGGOXWFORIGRJLIVADWHGVZMWFDHRYSSZCSHTXHAQTMPISTNAHBQBFUJF");

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
    msg.setTimeStamp(0.22073453521074216);
    msg.setSource(14886U);
    msg.setSourceEntity(132U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(232U);
    msg.op = 68U;
    msg.file.assign("IIDNSYXOEMTMB");

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
    msg.setTimeStamp(0.21953552539552812);
    msg.setSource(21224U);
    msg.setSourceEntity(127U);
    msg.setDestination(6850U);
    msg.setDestinationEntity(91U);
    msg.op = 21U;
    msg.clock = 0.32623271852029834;
    msg.tz = 74;

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
    msg.setTimeStamp(0.19788947762144604);
    msg.setSource(64608U);
    msg.setSourceEntity(97U);
    msg.setDestination(46025U);
    msg.setDestinationEntity(29U);
    msg.op = 184U;
    msg.clock = 0.8958383160218637;
    msg.tz = 58;

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
    msg.setTimeStamp(0.9094012788599872);
    msg.setSource(51032U);
    msg.setSourceEntity(172U);
    msg.setDestination(48223U);
    msg.setDestinationEntity(205U);
    msg.op = 50U;
    msg.clock = 0.012700894181003508;
    msg.tz = 67;

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
    msg.setTimeStamp(0.38349145394425466);
    msg.setSource(14331U);
    msg.setSourceEntity(156U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(181U);
    msg.conductivity = 0.8732779699652081;
    msg.temperature = 0.44610366257303746;
    msg.depth = 0.9600886471331183;

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
    msg.setTimeStamp(0.18059990468297515);
    msg.setSource(10964U);
    msg.setSourceEntity(231U);
    msg.setDestination(37797U);
    msg.setDestinationEntity(68U);
    msg.conductivity = 0.41688974504945986;
    msg.temperature = 0.39742518453004105;
    msg.depth = 0.8528822691637774;

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
    msg.setTimeStamp(0.4558874622150514);
    msg.setSource(30693U);
    msg.setSourceEntity(166U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(169U);
    msg.conductivity = 0.998668486362852;
    msg.temperature = 0.7511659675813654;
    msg.depth = 0.16532009550433968;

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
    msg.setTimeStamp(0.12020139588587864);
    msg.setSource(23630U);
    msg.setSourceEntity(77U);
    msg.setDestination(60847U);
    msg.setDestinationEntity(112U);
    msg.altitude = 0.7119281101012255;
    msg.roll = 35569U;
    msg.pitch = 5608U;
    msg.yaw = 1712U;
    msg.speed = 19278;

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
    msg.setTimeStamp(0.7392725686135307);
    msg.setSource(56374U);
    msg.setSourceEntity(64U);
    msg.setDestination(54065U);
    msg.setDestinationEntity(120U);
    msg.altitude = 0.060466325276461785;
    msg.roll = 47847U;
    msg.pitch = 13430U;
    msg.yaw = 40583U;
    msg.speed = -28587;

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
    msg.setTimeStamp(0.03604730875137485);
    msg.setSource(16659U);
    msg.setSourceEntity(84U);
    msg.setDestination(3380U);
    msg.setDestinationEntity(244U);
    msg.altitude = 0.40350482446545977;
    msg.roll = 37188U;
    msg.pitch = 36368U;
    msg.yaw = 47825U;
    msg.speed = -23227;

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
    msg.setTimeStamp(0.7614608264858758);
    msg.setSource(21450U);
    msg.setSourceEntity(185U);
    msg.setDestination(58550U);
    msg.setDestinationEntity(90U);
    msg.altitude = 0.9217655234173034;
    msg.width = 0.3398622838478945;
    msg.length = 0.5002218255222963;
    msg.bearing = 0.442029701192747;
    msg.pxl = 13857;
    msg.encoding = 61U;
    const signed char tmp_msg_0[] = {-43, 26, -104, 59, 50, 100, -111, 7, -64, 33, 90, 102, -63, 106, 67, 49, -42, 14, 33, -84, -77, -58, 119, 72, -106, -54, -62, -5, 0, 55, -20, 40, 78, -61, 32, -119, 125, 121, 97, -65, -13, 16, 108, -100, -60, 54, 3, 79, -109, -98, 99, 82, 61, -91, -59, -34, 23, 59, 119, -98, 122, -38, 32, -121, -58, -3, 66, 56, -127, 14, 114, -50, 69, -41, 37, -32, -17, -4, 17, -75, 8, 94, 81, 115, -48, -81, -16, 3, -109, 45, -45, -121, -42, -73, 83, -55, 95, 62, -119, -99, 8, -105, -120, 74, 51, -57, 31, 26, 60, 27, -22, 11, 5, 37, 42, -27, 38, -30, -39, 18, -39, -45, -15, -84, -110, -73, -116, -35, -70, 45, 104, 97, -108, -43, -99, -80, 58, -71, 84, 37, -79, 2, -99, -85, 40, 61, 126, -113, -36, -93, 27, 80, 18, -1, 5, -10, -124, -61, -49, 5, 125, -117, -12, 31, 34, 38, -25, -49, -81, -119, -33, 46, -117, 18, 123, -56, -71, -43, -94, -72, -31, -56, -121, 106, 23, -120, 92, -127, 45, 32, 76, 103, 8, 22, -118, 70, 14, 31, 37, 51, 72, 95, -24, 33, 53, -13, -32, 100, 107, -4, -92, 60, -64, 42};
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
    msg.setTimeStamp(0.1903078081964411);
    msg.setSource(63298U);
    msg.setSourceEntity(191U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(163U);
    msg.altitude = 0.3767990359652271;
    msg.width = 0.3787101073646928;
    msg.length = 0.05053882441099289;
    msg.bearing = 0.33762610671423476;
    msg.pxl = -15970;
    msg.encoding = 81U;
    const signed char tmp_msg_0[] = {114, 49, -84, -17, -93, -55, -56, -82, 50, 17, 83, 115, -84, -25, 67, -76, -75, -20, -82, -112, -81, 29, -51, 39, 8, 43, 7, -62, 20, 35, -36, 62, -2, 125, 102, 0, 87, 62, -123, 26, -94, -21, -112, 60, -103, 96, 41, 36, -28, 89, -78, -91, -61, 102, -7, -17, 122, -126, -109, 33, -57, 43, -4, 59, 18, -49, -84, 8, -56, -1, 63, 34, 113, 50, -7, -105, -101, -77, 78, 57, -33, 119, 53, -104, 42, -90, 54, -93, 59, 83, -12, 18, -44, 62, -94, 78, -47, 4, 41, 111, 116, -111, -35, -26, 14, 92, 21, -56, 49, 43, -83, -117, -49, 60, -39, 83, 22, -102, -94, -113, -40, 68, -20, 87, -10, 107, 24, 57, -52, -41, -57, 51, 13, 3, -42, 87, 75, -79, -73, -4, -14, 8, 112, 93, 52, 1, 42, -22, -8, 81, 96, 24, -17, -99, -104, -36, 99, 25, -59, -62, 97, 116, -71, -19, 27, 92, 67, -52, 11, 117, 61, -8, -26, 48, -86, -69, -3, -78, 98, -44, -5, -26, 104, 50, 99, -127, -94, -20, 26, 121, -74, 78, 58, 103, -8, 93, -59, 33, 12, 75, -23, 53, -36, 84, -84, -98, 36, 116, 50, -66, 18, -20, -84, 38, 62, -38, -14, -75, -58, 104, 12, -97, -71, -10, 123, 71, -128, -20, -114, -53, -101, 103, -113, 66, 58};
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
    msg.setTimeStamp(0.5508752148402688);
    msg.setSource(46213U);
    msg.setSourceEntity(249U);
    msg.setDestination(517U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.33395279121136456;
    msg.width = 0.42632890125775946;
    msg.length = 0.47102807445890804;
    msg.bearing = 0.542423271020346;
    msg.pxl = 28450;
    msg.encoding = 190U;
    const signed char tmp_msg_0[] = {-126, -1, -14, -22, -57, -124, 62, -116, -112, -95, -45, -48, -55, 33, -8, -79, -30, 98, 67, 60, -36, -56, -23, -72, -91, -95, 116, -51, 43, 90, -89, 3, 118, -67, 17, -45, -20, -64, 85, -42, 99, 119, -2, 20, 27, -124, 60, -117, 25, -75, -128, 1, 42, -39, -79, -37, -66, -123, -70, -32, 95, -1, 116, -65, 77, 95, 46, 85, -75, 60, -57, 4, -45, 23, -108, -92, 114, 88, 117, -34, 114, 16, -32, 55, -71, -59, -62, 92, 103, 49, -13, 44, 124, -32, -69, 35, -21, 107, -51, -39, 79, -82, 65, 81, 79, -25, -27, -73, -15, -30, -118, -5, 42, -96, -34, -128, -29, 85, -96, 82, 119, -89, -13, 85, 23, 38, -109, 25, -88, -9, 36, -57, -7, 30, -7, -94, -79, 54, -120, 112, -122, 116, 91, -60, 14, -93, 117, -18, 16, 114, 112, -45, -54, -42, 38, -28, -76, -17, 22, -101, -72, -47, -108, 101, -3, 101, 37, 58, 35, 71, 24, -3, -76, -8, 42, -118, 111, -27, 71, 49, 9, -60, -25, 0, -66, 32, 99, 70, -37, 116, 2, 55, 106, 78, -38, 89, 68, 8, 112, -39, 119, -94, -65, 82, -93, 120, 100, 64, 70, -18, -120, 67, -56, 32, -75, 8, -43, 42, -16, 102, -89, -42, -19, 13, -69, 126, -118, -59, -41, 109, -5, -105, -107, 99, 19, 76};
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
    msg.setTimeStamp(0.10728835652402946);
    msg.setSource(57314U);
    msg.setSourceEntity(132U);
    msg.setDestination(8687U);
    msg.setDestinationEntity(240U);
    msg.text.assign("TDMXAMROZOCSBIBYXEPRPQGKOAGYVVMYUXVKLMPNEVBPMBJEDJHHIOOOHJBFPPVVWRFWEDQPAMHNLBCUFQEIMEKBXKXUAQFXNCAKSJZJMNSIVNNLGXKSRRDZIDKOICTJIOGRZQXGWLCGWYQQZNGTIGRECAIQCHYFKDKYLYRQVLMLBARDWPIYUJVWRNFCWWPYCUAGUXFFUSTTBTOSVLOYZZDHZTLJQSWUNBCHDELSZFKEJUTHU");
    msg.type = 139U;

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
    msg.setTimeStamp(0.9352009735227371);
    msg.setSource(45002U);
    msg.setSourceEntity(151U);
    msg.setDestination(58830U);
    msg.setDestinationEntity(249U);
    msg.text.assign("VXZBAVQCIWINTJKDZGGNSJGYEGLDARQTJEJIJRBLHYPQNFPPZSAOOIYFAABUKRWDJWECLEPRRLINORAAVKPJNLM");
    msg.type = 188U;

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
    msg.setTimeStamp(0.4195662299685422);
    msg.setSource(30848U);
    msg.setSourceEntity(143U);
    msg.setDestination(31186U);
    msg.setDestinationEntity(50U);
    msg.text.assign("OIAZPOAHLNSLPLJWEMHMMIXIXQJKPIVRVQIHTVK");
    msg.type = 45U;

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
    msg.setTimeStamp(0.785224132211069);
    msg.setSource(59635U);
    msg.setSourceEntity(109U);
    msg.setDestination(23718U);
    msg.setDestinationEntity(137U);
    msg.parameter = 120U;
    msg.numsamples = 188U;
    msg.lat = 0.02368205410375457;
    msg.lon = 0.49734332735107434;

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
    msg.setTimeStamp(0.6122597245750937);
    msg.setSource(37885U);
    msg.setSourceEntity(14U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(35U);
    msg.parameter = 239U;
    msg.numsamples = 0U;
    msg.lat = 0.3660289911932464;
    msg.lon = 0.8389358406722427;

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
    msg.setTimeStamp(0.23001026613113784);
    msg.setSource(62899U);
    msg.setSourceEntity(220U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(0U);
    msg.parameter = 198U;
    msg.numsamples = 38U;
    msg.lat = 0.33375542036815653;
    msg.lon = 0.9120169415181815;

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
    msg.setTimeStamp(0.23535695154968272);
    msg.setSource(6919U);
    msg.setSourceEntity(183U);
    msg.setDestination(24510U);
    msg.setDestinationEntity(74U);
    msg.depth = 40074U;
    msg.avg = 0.26586327205120863;

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
    msg.setTimeStamp(0.6186332751797305);
    msg.setSource(29330U);
    msg.setSourceEntity(234U);
    msg.setDestination(8446U);
    msg.setDestinationEntity(18U);
    msg.depth = 3933U;
    msg.avg = 0.39264895666321464;

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
    msg.setTimeStamp(0.7036850580023148);
    msg.setSource(46910U);
    msg.setSourceEntity(67U);
    msg.setDestination(7082U);
    msg.setDestinationEntity(90U);
    msg.depth = 4577U;
    msg.avg = 0.13046866042386585;

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
    msg.setTimeStamp(0.3446524278956947);
    msg.setSource(26834U);
    msg.setSourceEntity(1U);
    msg.setDestination(8254U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.5713167209933935);
    msg.setSource(54758U);
    msg.setSourceEntity(43U);
    msg.setDestination(27682U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.06848797269155016);
    msg.setSource(52832U);
    msg.setSourceEntity(60U);
    msg.setDestination(39637U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.8023746995122976);
    msg.setSource(23190U);
    msg.setSourceEntity(94U);
    msg.setDestination(29351U);
    msg.setDestinationEntity(236U);
    msg.sys_name.assign("ELRCKSHHYGJOPDQHMQDMWOXUQFMABCMXOGBRPKNXWUZSVREPVIAYYLMWCKMWASCKEQYDJGPPAIBKIVUUTORJWJOYSPDUDLNZCGFFKBMGCDEGUXQZUWNLYTVAMJKPGQXLTURXFPNHISEOZROSW");
    msg.sys_type = 160U;
    msg.owner = 15800U;
    msg.lat = 0.7411309583062125;
    msg.lon = 0.17050988112401078;
    msg.height = 0.9263899229158097;
    msg.services.assign("AUOWUNMEXDRNAUABNBLFHEJYJZWCBXRHMBLBTHVYDVQEYKIQFXPQDNZPGCVVUFZRK");

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
    msg.setTimeStamp(0.24679480134630705);
    msg.setSource(4273U);
    msg.setSourceEntity(155U);
    msg.setDestination(29257U);
    msg.setDestinationEntity(98U);
    msg.sys_name.assign("UKANCQXTGTYMIMPKRWYRBKQATTVNBGLAABIXPVRSGVSZSHDUVKKCMXLIERTQAJZGUCHHDONFJWTJHRWPLXTCKEBWJRVECLWBOOSEYZYQZYFZXSHOPUVMXNODHUXTFVNDSKHJXQCMYRIEQFLGZRWHCLPIPBYLDTKWXPBIVEUNFYLVINUGYQBUGOYAMOMUBSEDZSOVJFDNOFGPAABNLQCMRJDIHZJMWISGIFKZWFZQGLQCKCXEMTOERSHPDPJ");
    msg.sys_type = 93U;
    msg.owner = 56415U;
    msg.lat = 0.7759603723119152;
    msg.lon = 0.8901785795206597;
    msg.height = 0.17176427887134138;
    msg.services.assign("XFWPQJUCYITTE");

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
    msg.setTimeStamp(0.7962995605948046);
    msg.setSource(61911U);
    msg.setSourceEntity(176U);
    msg.setDestination(10391U);
    msg.setDestinationEntity(144U);
    msg.sys_name.assign("AVBZGGSFWRALSTUOPONKYEZNEAURDJYRCHMPYNPXDPAISWSKPGHYUEATEOGOVLNQFGWWUMNDFBYFRVXAFZOCVEJIHUKQOKC");
    msg.sys_type = 33U;
    msg.owner = 23470U;
    msg.lat = 0.5700291366026837;
    msg.lon = 0.5621729790243919;
    msg.height = 0.05218705734529194;
    msg.services.assign("GYCLAIIQZWNDDOEPMQUICQQVYRJ");

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
    msg.setTimeStamp(0.03003119355060091);
    msg.setSource(26805U);
    msg.setSourceEntity(3U);
    msg.setDestination(482U);
    msg.setDestinationEntity(120U);
    msg.service.assign("VWEDCZSMLAJHPMFQZEVCCBZQYISEGUIPCOHRAUTUDQYUHLBPBAMGMTVLNKAFEEKTFAADXVRGBOHGUCWDUMHIREPXIYWMFROFIGZZRLAJLRJSDYQRBDNHWZHIJPRNGQVPXSCLQPFCGXWPOYSP");
    msg.service_type = 183U;

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
    msg.setTimeStamp(0.4880432726670415);
    msg.setSource(24160U);
    msg.setSourceEntity(250U);
    msg.setDestination(54410U);
    msg.setDestinationEntity(165U);
    msg.service.assign("PZNNYNDCTXAVLLZOVOIKONMPCVUIOXLRIYOYKVMOFRCQKJXGNPEFZDBKQKGATADJBUFIMLVHMZBDEZQDSUMOGODEYXUZJFLVGSKMACZNHDRPNMERKBSFJSGZGAEWIWGTQSHUASHRLXNWOQUBCWQTLB");
    msg.service_type = 143U;

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
    msg.setTimeStamp(0.17768438870447267);
    msg.setSource(28115U);
    msg.setSourceEntity(176U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(41U);
    msg.service.assign("APZUSMQWPNHAEJQEINYYREKBVLUSELTXAIT");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.5874735925410813);
    msg.setSource(62044U);
    msg.setSourceEntity(38U);
    msg.setDestination(7813U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9422266702007233;

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
    msg.setTimeStamp(0.28065728217327146);
    msg.setSource(61597U);
    msg.setSourceEntity(196U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(242U);
    msg.value = 0.4850329302458942;

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
    msg.setTimeStamp(0.5119926864593825);
    msg.setSource(13776U);
    msg.setSourceEntity(237U);
    msg.setDestination(875U);
    msg.setDestinationEntity(0U);
    msg.value = 0.06321095517897757;

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
    msg.setTimeStamp(0.7396290674925005);
    msg.setSource(38030U);
    msg.setSourceEntity(23U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9166336948267905;

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
    msg.setTimeStamp(0.647023777457);
    msg.setSource(5107U);
    msg.setSourceEntity(48U);
    msg.setDestination(15677U);
    msg.setDestinationEntity(229U);
    msg.value = 0.32899844527507227;

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
    msg.setTimeStamp(0.594487615790675);
    msg.setSource(34335U);
    msg.setSourceEntity(228U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(70U);
    msg.value = 0.02310241105834754;

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
    msg.setTimeStamp(0.25653960363681694);
    msg.setSource(11430U);
    msg.setSourceEntity(51U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(252U);
    msg.value = 0.14790619600569166;

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
    msg.setTimeStamp(0.42298087201823487);
    msg.setSource(9792U);
    msg.setSourceEntity(99U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(117U);
    msg.value = 0.32670251919391813;

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
    msg.setTimeStamp(0.504952032329103);
    msg.setSource(21455U);
    msg.setSourceEntity(84U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(178U);
    msg.value = 0.821420259221557;

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
    msg.setTimeStamp(0.9879734521693274);
    msg.setSource(45798U);
    msg.setSourceEntity(141U);
    msg.setDestination(19815U);
    msg.setDestinationEntity(57U);
    msg.number.assign("WNAYYSBDYIEALQNQFJQUJRXAPUKCBWFKUGBFWAVDNLGEWMXENYKPOXSCIBJKOZEVGMFIJWVOIENICVTANHCLWTTXOJXPJBYTITPOXDSLMSALUAXZBMOSGPRGUAYRSZHQQXZZSWTVITMSQEYEIDHKEHOJFQCSFNKPGZYKSVJHXBZAXHOWGLIZMMIPOJYJDFVKUZPVBVGFPUVZPKWRRMQRDWKDT");
    msg.timeout = 41802U;
    msg.contents.assign("DCXJUNUOYHPGHHPPNSPPVPMIMCUVFUQPGWBSDDMHGMITJACOXZRHMBTNSYPBNTIDLTEEVCNEWXRRTAUXJOFIVJDQFGQWXPGMTSANKDEHPLKCTSJIFQBLZWJMIWHRHGVJVZZLXYLQE");

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
    msg.setTimeStamp(0.6294149832903755);
    msg.setSource(38970U);
    msg.setSourceEntity(243U);
    msg.setDestination(42121U);
    msg.setDestinationEntity(88U);
    msg.number.assign("WVDHUHBYHAMKHNGTANPOQLZMBLBSJBDAWJFVDVYWOGHTWVCWBWIXFYGXSVNZGJWTTIHJCIQQVGYCYDLDIMOKJJNEEYQVRWANCCLRRMZNRMUDXWEQNMIUUDFHPCJABKFIDIZNEQBPUOXMPUSNALJTXKFKHKEFIXOCTGVOZVZQGSKDUAYLPYTESPQBKPGRFSXZVYRMRXGRPUEPOMTR");
    msg.timeout = 32408U;
    msg.contents.assign("RXWWHXNVNBDEQROCEDAXFHCDLTXVGCECDALKJMMLFXYQABZTSWSSFXLKSVYVFPTYFRGHVOQIAGDCFRMEWUIKORMKSRPTGWOX");

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
    msg.setTimeStamp(0.8089927251316531);
    msg.setSource(55234U);
    msg.setSourceEntity(82U);
    msg.setDestination(34500U);
    msg.setDestinationEntity(57U);
    msg.number.assign("LNJNMEXPSTQBBLRVXSXXPRZDBUBDJCEHLEUJEYKIMMLHIKKNIWRCWQGAHUAHWXEIVVVPAAOOHCCFFGYJZGMEVTRHDIRZTTJXYPVXCNSGQCBXRBAASDWWIZOQTONGDZPGGAOGKRAJVTQIYFMUDUKOKICXWRWATEBMLSDTRJFNOTGHPAPLVONSNMIQWYHMOUFYLEFBUSEFPLJGQWJHKNQXEYCZHMCKOWUBSDUYVZMFPDBCIYZSZQNUTQKZFY");
    msg.timeout = 34688U;
    msg.contents.assign("EGSJCAKQWRIBQZFNRDRCBWCKDPJFYINZMTPFBNIGYVHYWXPMFMSNSNBACBQZZZCAYSUOIUTMDLHOAGM");

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
    msg.setTimeStamp(0.48776534177168107);
    msg.setSource(41940U);
    msg.setSourceEntity(80U);
    msg.setDestination(29478U);
    msg.setDestinationEntity(97U);
    msg.seq = 832087507U;
    msg.destination.assign("QSJXNBSXAKOGETRDKGWTGXSSVSMODUQDLCNYOMNSVOGRMNGNAARTVPMIHBIUCYGHRFKTFIS");
    msg.timeout = 22163U;
    const signed char tmp_msg_0[] = {32, 82, 24, -108, -82, -121, 22, -62, -22, 88, 124, 46, 28, 63, -93, -126, 63, -97, -101, -118, 95, 93, -115, -27, 32, 6, -58, 86, 96, 32, -106, -19, -66, 62, 49, -41, -56, -61, 58, 107, 45, 46, -22, -115, 70, -15, 92, -83, 27, -69, 120, -72, 16, -67, 120, -19, -91, 117, -26, -116, -75, -6, 88, 103, 34, 55, -74, -42, -26, 18, -80, 35, -123, -42, -27, 46, 71, -60, 79, -108, 45, -107, 121, -79, 61, 92, -63, 93, 27, 69, 42, -83, -15, -6, 120, 76, 110, -32, -116, -107, -24, 108, -49, 116, 70, -8, -119, -123, 105, -40, -32, 15, -78, 112, 5, 43, -61, 68, 51, 79, 123, -13, -50, -73, -124, -13, 96, -37, 23, 50, 17, 57, 85, 75, 33, 83, -81, 47, -45, -56, -10, -6, -23, -65, -119, -31, -36, 91, -121, -54, -100, -22, -65, 109, -80, 98, 91, 120, 96, 47, 2, -78, -115, -15, -67, 48, 95, 91, 89, -43, -93, -77, 65, -95, 126, -16, 110, 97, 90, -38, 19, 30, -84, -47, 66, 5, -19, 5, -46, -71, 5, 126, -74, -114, 102, -24};
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
    msg.setTimeStamp(0.8532488793306651);
    msg.setSource(59579U);
    msg.setSourceEntity(181U);
    msg.setDestination(10669U);
    msg.setDestinationEntity(27U);
    msg.seq = 4121107502U;
    msg.destination.assign("VYSKBPAXGDURUNQNGXWAQRVCSRJRFFSYSIBGAXOXRNSNEWSFQUKTXIQCDEPJTMJHSYTFVVTZOMWDNDETBIWUZAJLZXOGHKSQPPTEWEPBHLBJVXNMZTTCCFYCCMJAOQGCIHBRYGAEK");
    msg.timeout = 30285U;
    const signed char tmp_msg_0[] = {61, -86, 77, -2, -70, -83, -42, 17, -8, -58, -122, 59, -85, -33, 38, -101, 74, 73, 14, 52, -52, 23, -39, 80, -46, 18, -16, -95, -41, 70, 70, -36, -4, -90, 112, -77, -84, -68, 98, -29, -70, -41, -10, -71, -17, -56, -1, -39, -74, -97, 95, 33, -63, 47, 15, 20, 23, -62, -79, -27, -74, 46, -108, -58, 34, -20, -100, -71, 110, -66, 8, 29, 63, -29, 96, -22, -97, -73, -1, -85, -71, 97, 45, 48, -48, 121, -27, -67, 55, 13, 43, 25, 31, 63, -99, 81, 48, -47, 37, -115, 42, -73, -108, 10, 5, -21, 118, 62, -17, 35, 62, -55, 3, -5, 97, -42, -124, -124, -60, 57, -42, 58, -36, -126, 40, -7, -109, -127, -93, -109, 63, 14, 77, 64, -53};
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
    msg.setTimeStamp(0.06938646070799215);
    msg.setSource(10026U);
    msg.setSourceEntity(149U);
    msg.setDestination(65256U);
    msg.setDestinationEntity(13U);
    msg.seq = 2391958608U;
    msg.destination.assign("VYIIOEMMHZDBKDDWHDNMPCUFK");
    msg.timeout = 49204U;
    const signed char tmp_msg_0[] = {29, 49, -69, 19, 96, -49, -81, 54, -101, -76, -7, -62, -96, -66, -88, 29, -119, 70, -64, -98, -87, 18, -48, 86, 10, -30, 66, -98, 38, -103, -72, 52, 21, -45, 94, -109, -80, -112, -54, -72, -106, -125, -125, 8, -41, 55, -46, -108, 25, -36, 66, 56, 117};
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
    msg.setTimeStamp(0.9770203213486567);
    msg.setSource(47889U);
    msg.setSourceEntity(92U);
    msg.setDestination(12541U);
    msg.setDestinationEntity(45U);
    msg.source.assign("DUWWRYQIENNELSDIZDWTQGIUFLUPUZJTXWMKDNKBICNRTGVQSNRSCLXQBTKORXGEWAHIKPZOQBJYUMPAFZHONSIBKHTJDZFMOGLUTOUHAYJUJZXQRLRKXGGFQNNVNLMKQSWKOCYXYFPWJVPMVFIWZMUVPCKDVOQIARPWABZHFHGXCMTPEABVOXDOSEYJBSXCHYTVUC");
    const signed char tmp_msg_0[] = {-120, 99, -105, -111, 23, 26, 72, -3, -17, 45, -38, -106, 41, 90, 107, 111, -40, -109, -74, -26, 114, -15, -44, 22, -98, 108, 114, -87, -115, -43, -66, 100, 82, -40, -39, -57, -75, 33, 124, 80, -96, -24, -35, -33, -27, 2, 56, -13, -22, 90, 63, -23, -84, -115, -37, -20, 66, -4, -64, 21, -53, -90, 109, 76, 94, -88, -78, 108, -28, 95, -19, 33, 66, 60, -102, -87, -70, 31, -108, -34, -59, 115, -74, 109, 1, -33, 72, -45, -50, 72, 111, -27};
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
    msg.setTimeStamp(0.8432573751172894);
    msg.setSource(59634U);
    msg.setSourceEntity(165U);
    msg.setDestination(62689U);
    msg.setDestinationEntity(22U);
    msg.source.assign("TWSMGAIBATLHISKDLJEUQSTDOGBNVCMJDFBJVDPNRPYQQXJLGJSRNYACZVMWURQUSOXGZOGBUZPAKYFCETCRXLBKMMEBBXRZYAOEIHAPNONOBFIXPHFVHEZWCHGDHMUOOYCNZHUWVGYRPXEQPQGOJKFITTUSOTJ");
    const signed char tmp_msg_0[] = {-20, 48, 15, -113, -99, -4, 29, 6, 102, -2, 56, 50, -127, 4, -46, 111, 71, -5, -24, 35, -95, -11, 98, -99, 119, 0, -86, -54, -56, 27, 117, 8, -21, -60, -27, 110, 90, 113, 71, 80, -88, -128, -8, -119, -108, 52, 59, -115, -103, 5, 48, 55, -31, 30, -61, -58, -78, 117, 100, -20, 126, 28, 101, 44, -54, -118, 4, -61, -100, 105, -15, -95, -63, -17, 120, 54, -25, -53, -15, 103, -55, 0, 70, -98, 60, 91, -23, 14, -72, -86, 116, -17, 27, 123, -118, 73, -62, -107, -54, 78, -117, 93, 125, 6, -88, 16, 11, 35, 117, 19, -121, 95, -118, 106, -59, -110, -48, 41, 121, 47, -125, 91, 21, -111, 23, 28, -123, 46, 42, 40, -67, 112, -59, -122, -45, 112, -32, -69, -91, 19, -124, 38, -46, -15, 113, -21, -24, 71, 37, 43, -113, -83, 114, -128, -31, -70, -100, -126, 50, 83, -107, 101, -8, 62, 3, 40, -113, 8, 109, 8, -72, 119, 77, -100, 62, -86, -118, 107, -87, -84, 34, 101, -110, 44, 95, 16, 46, 117, -76, -54, 50, -100, 63, -124, 83, -63, 97, -1, 27, 72, 70, -93, 50, 44, 89, 32, 84, -7, 116, 108, 70, -45, 104, 33, -75, 42, 7, -15, -128, -51, -110, 67, 96, -10, -100, 3, -69, 78, -10, 6, -9, 25};
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
    msg.setTimeStamp(0.12132538425540274);
    msg.setSource(16672U);
    msg.setSourceEntity(235U);
    msg.setDestination(39089U);
    msg.setDestinationEntity(187U);
    msg.source.assign("EQNLUJROWMVUJASETIITXBBCDAWEGJACWHTFBMLYRPLRYCGOGUKAECTTDSLPMUSAVRCBLDJYHQGXSQZOQWYNZGWRHXHVWK");
    const signed char tmp_msg_0[] = {-20, 13, 119, -38, -80, -71, 74, -10, -89, -127, -120, -63, -103, -116, 76, 7, 91, 24, -104, -5, -25, 116, -82, -4, -24, -93, 56, -45, -79, 4, 109, -57, 87, -42, -97, -72, -78, -40, 44, 39, 3, 44, -2, -69, 86, 83, -46, -85, 64, 86, -5, 52, -99, -94, -69, 106, -54, -110, 15, 66, -72, -6, 63, -78, 112, -77, 121, -43, -44, 82, 76, -36, -44, 84, -10, -33, 45, -51, 62, -89, 111, 53, 115, 88, 20, -75, 100, -24, 24, 110, -110, 50, 97, -23, 104, -18, 78, 37, -4, -1, -77, -107, 77, -26, 50, 79, -6, 4, 73, -40, 67, 81, -11, -67, -116, 82, 25, 119, -12, -76, 84, 0, 24, 64, 37, -81, 38, 2, -110, -95, -61, 102, 109, 26, 25, -63, 102, -101, 109, 93, 46, -94, 36, 89, 70, -97, -79, 68, 26, 25, 119, -120, -44, 20, -87, -80, -85, -44, -93, -53, 125, -97, -3, -39, 118, 57, -74, -115, -42, -116, -35, -49, -43, 25, 90, 22, -107, -57, -60, -31, -104, 5, 58, -52, -71, 104, 111, 124, -34, -21, -45, -59, 20, 19, 57, -91, -48, -46, -103, -118, 3, -110, -29, 62, -71, 65, -61, -115, -121, -20, 47, -64, 78, -34, -5, 122, 55, 15, 107, 17, -29, 24, -128, 87, 103, -91, -36, 17, 62, -100, 80, 82, 97, 35, -20, 7, -115, 124, 107, 117, 109};
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
    msg.setTimeStamp(0.397709410893907);
    msg.setSource(43009U);
    msg.setSourceEntity(152U);
    msg.setDestination(2696U);
    msg.setDestinationEntity(215U);
    msg.seq = 3132262181U;
    msg.state = 93U;
    msg.error.assign("ZGAAQTSFFFRUCQLTKVCBIYLUYWONJVECTXPAPNZYBKZWFCGJMTLDVVCXWFBDFZZVTWNEJLVKISHMNITOHXAMRSKYZMAOGEITBDDWCVSSBLHYQOUJGMGFKNAJPZNCTYUMPXJKLIMJABHNWIYRMPRGFQOLBKSSKQTHRUOUFQZXRVRXPEAIYGRAIHNDPOMEXPEBELMSERY");

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
    msg.setTimeStamp(0.2016468468411282);
    msg.setSource(51285U);
    msg.setSourceEntity(81U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(71U);
    msg.seq = 2086507397U;
    msg.state = 208U;
    msg.error.assign("RPWNGDKEUISRMSFUVKEBCJOAOXZYDZOLHCDMXOIYYGFIVBVMNRQMJBJFDGLFASKOIAVMJHFNKRZJAGQNXTPUNWCPLMREOYDLWQBZQSCITPFHYYCZLIHTWJRZQEPFBJMBTKWNVENQRVPWYABPDXUMFIESYKLOEYNTLBYCQHRWLCXGNUTGUZAWGMDTIG");

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
    msg.setTimeStamp(0.7028697472744881);
    msg.setSource(29369U);
    msg.setSourceEntity(120U);
    msg.setDestination(60879U);
    msg.setDestinationEntity(127U);
    msg.seq = 2262283030U;
    msg.state = 143U;
    msg.error.assign("ZPGOEKXLYFCHYCLDOMGDYTILOQBLUXCTUWOPGOCSDEQJNVVGCRVXSZAQSKAYIMFQGHQHVFNASBEMOHWIEZ");

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
    msg.setTimeStamp(0.38209549419578326);
    msg.setSource(43131U);
    msg.setSourceEntity(40U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(43U);
    msg.origin.assign("OTSFLHLSXWQFUAYAOOEONYRPUFUZZJCJTBCXARLUYIDPTYPKRLJZAUHSFKNHIPSVHWFTETGDCNEDXNKELPEPUIMXZTSYNBPCDNFBITCMJGSBWZVNTVXOWHYNQOWJESIYVADMFVQHQJQTVPIFPBRBNMXKARGVQJEMXKRZJBCPGQLWDVEKOUGHIELGRWXYHZUKLNIGSDHOODLBFMYIALCKDGMAQCMAWOCAKRJ");
    msg.text.assign("ULPMOGUVWEINKRRKUFFSIWQUPJWYHVDSMKZDOCNRDNVDOVUMZWMFQRAOMRYLKTGSHFLXHMAUVJQEGVYYPFCNCEUCBMEZNPHZOJHPOEHIXAASQYPB");

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
    msg.setTimeStamp(0.9417868064774555);
    msg.setSource(38011U);
    msg.setSourceEntity(8U);
    msg.setDestination(2731U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("BSEVDKOBNZACZNUTKFALOJJFYEEKWFVJALSOFVAREWPJHTLAVCEXCKRQPORGASXBBPVKWLLMFDDMSCLUNKOXNMAUROMNHIVGBHNVTWTBITQZZQOWIQNUJKRMPXGGKBUPUGQROOYLZNASHFABLTMQBPHDPTMNXSHDZGPJZZLYWGWXICMEHTVYDZIZQVGCEJEVWWSSTEDJYSJRXCRCGYXIUXDKYHWFQIEFBUHYMJIKQXAUGMDPNHCRRFFOUI");
    msg.text.assign("KOEASLORWNQYSSATVYHDQEFSWYEIXLXNDSQWHDFPGHWKCDPRHNYOTAZSBZDYOSWJXXDKZBJLVUNOPOVQECUTIFIMFIREUZUOVKXMZMIVYHFHMRLLRMDNXWUQPTUZLTVIMCGIRRUQIBYQXHARNBVWBNKPJATAZSLGD");

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
    msg.setTimeStamp(0.4017157177028864);
    msg.setSource(18397U);
    msg.setSourceEntity(151U);
    msg.setDestination(43360U);
    msg.setDestinationEntity(73U);
    msg.origin.assign("PITGKHAFXRXLGVGAISRNYSHBRUBQISCNXCLWZQERBXHQIRSOLJLTQICGHQ");
    msg.text.assign("ULLKJEEVHHAOYUNDTCJYSLCRQMFYUXMPCGTVQRVNLWJENRBXKOUBPCQAAGNOORJXWEXNLJZEKIIETCKBCZBEOPHQHSPYQGFPNOYAGLJBPMDMZHTLSWDVJTJGUVSVLVHDKMCATXWQKATYGIPAOIXEI");

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
    msg.setTimeStamp(0.8698019657601167);
    msg.setSource(22502U);
    msg.setSourceEntity(117U);
    msg.setDestination(58293U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("VIYUWSOETVJUVXAUKXMEDLACVMAVTTYQWKODEMOFFZOYPRISIQJZFUEPLEPSRGLGKBBOWDZECYDLMPQTKOYZQCMGNZHRCAIDFKVTBNCIJUGTHBMMPYLO");
    msg.htime = 0.4116797230724303;
    msg.lat = 0.4397463655291436;
    msg.lon = 0.4381363816889178;
    const signed char tmp_msg_0[] = {84, -87, 7, 69, -108, -38, -40, -35, 5, 33, -111, -32, 83, 108, 35, 104, 57, 43, 124, -113, 96, 90, 10, 61, -26, -76, 85, 48, -2, 122, 29, -82, -83, -45, 76, 126, 34, 57, 108, -77, 18, -49, 49, -31, 81, -59, -92, -19, 107, 124, -58, 59, 17, 32, -34, -26, 86, 123, 93, 23, 56, -63, -8, -52, -87, 50, -60, 95, 46, -106, 83, 7, -11, 122, 52, 51, 20, -3, 65, -40, 125, 53, -98, -81, 85, -83, -107, 66, -121, 83, 116, 1, 44, -109, -39, 103, -57, -88, -59, -61, -127, 77, -73, -86, 48, -61, -48, -40, -22, 39, -114, -109, -26, 61, 86, -119, 5, 78, -69, 40, -66, 20, 100, -118, 107, 63, 58, -81, 101, -85, -4, -28, -87, 0, 45, -32, -20, -3, 55, -50, 70, -17, 101, 44, -83, -105, 103, 104, -76, -34, -55, -88, -56, -42, -98, -26, -31, -95, 121, -78, -77, -36, 71, -127, -123, -104, -50, 23, 69, 20, 41, 66, 18, 41, 56, 98, 18, -33, 28, 39, 63, -83, -106, 57, -22, 26, -11, -21, 20, 113, -21, -87, -71, -56, -49, 42, 63, -36, -30, 17, -115, -84, -118, -60, 108, 40, -1, 75, -32, 66, 126, 126, 7, -7, -27, 54, -86, 52, 17, -74, -117, -107, -54, 31, 79};
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
    msg.setTimeStamp(0.07745003935056916);
    msg.setSource(30358U);
    msg.setSourceEntity(25U);
    msg.setDestination(39955U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("GOWKBKJUNEHESMPVIGPTDQYKRLWDJCYDWFATETQPVNLOFUCCYHYFMGTZZBKVZBXLVSBZHMURGQYHHYVXKIPHBRRDO");
    msg.htime = 0.7082658655756776;
    msg.lat = 0.6096854301442124;
    msg.lon = 0.9492916709348813;
    const signed char tmp_msg_0[] = {101, -48, 83, -115, 91, 108, -86, -81, 42, 95, -119, -38, -26, -30, -12, 117, 42, 104, 35, -54, -40, 99, -65, 19, -117, -35, 37, 116, -74, 91, 69, -42, 73, 37, 83, -26, -3, 78, 124, -54, 109, -32, -32, 109, 4, 101, -2, 39, 55, -23, 91, -51, 78, -74, -64, 103, -92, 115, 83, 22, -102, -124, 109, 123, 28, -26, -11, 81, 94, 76, -55, 81, -102, 124, -88, 92, -86, -24, 14, -66, -67, 19, -100, 62, -97, 5, -4, 17, 6, 83, 114, -127, 57, 71, -116, -63, 56, -101, 24, 3, 25, 24, 71, 44, -83, -19, -94, -73, 24, -51, 62, 124, 58, 38, 115, -78, 89, -11, -108, 30, 48, 68, 52, 106, 105, 27, -64, 66, -102, -101, 124, 97, -104, -19, -127, 115, 49, -124, 52, -49, -31, -125, -82, 60, -61, 46, -89, 112, 102, -88, -16, -45, 10, 84, 123, 37, -63, 104, 59, -104, 55, 113, -45, 26, -3, -65, -46, -38, -6, -79, -83, 104, 121, 54, 57, 70, 116, -9, -91, 56, -113, 88, 13, 50, -69, 97, -40, 11, 17, 6, -48, 55, 31, -28, -59, -79, 64, -103, 29, -76, 20, 86, 43, -88, -37, 38, -25, 110, 40, 15, 123, 92, -39, 84, -11, -128, -96, -105};
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
    msg.setTimeStamp(0.11398477076701241);
    msg.setSource(2409U);
    msg.setSourceEntity(3U);
    msg.setDestination(60687U);
    msg.setDestinationEntity(49U);
    msg.origin.assign("ORLTQYELYUQJMXDRBQJUYBGYSAETCHAXRBCKDQVBXMYIEDBMIAERLWPPBSAVTNDJNMHKVFZGVRMVWQVJVSGOWBQPNBY");
    msg.htime = 0.8848593059102142;
    msg.lat = 0.1751261927936838;
    msg.lon = 0.060360291383640075;
    const signed char tmp_msg_0[] = {11, -121, 19, 121, -24, -77, 79, -24, 110, -123, -94, -38, -89, -128, 87, -128, -83, 1, -120, -114, 112, -87, 66, -3, 72, -57, -123, -93, 96, -52, -52, 97, -33, 111, 103, -49, 105, -89, 122, 21, 89, 17, -58, 82, 72, -80, -126, -67, -125, 73, -75, 102, 28, -16, -57, 26, -76, 55, 62, -127, -45, 107, -82, 105, 3, 115, 109, -106, 104, 19, 66, 14, -112, -58, 40, -66, 22, -83, 31, 111, 67, -127, 104, -94, -11, -86, 60, 8, 83, 83, 75, 96, -113, 120, 61, 63, 118, -48, 109, -61, -66, 76, 101, -107, -58, -62, -2, -128, -63, -42, -117, 30, -79, 30, -59, 93, -89, 102, -47, -25, 62, -117, 100, -17, -36, 117, 40, -109, 123, -31, -92, 44, 56, -109, 62, 18, 115, -126, 90, 9, -49, -38, 63, -32, 28, -76, 106, -1, -13, -116, -16, -93, -111, -118, -40, -111, 3, 12, -102, 126, 57, -79, 126, 3, -65, 125, 68, 100, -112, -89, -38, -11, 0, 90, -125, 94};
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
    msg.setTimeStamp(0.6566338144415808);
    msg.setSource(38461U);
    msg.setSourceEntity(165U);
    msg.setDestination(21067U);
    msg.setDestinationEntity(145U);
    msg.req_id = 43430U;
    msg.ttl = 14393U;
    msg.destination.assign("JVJPZFLEVNYXRQYJDETLNKSFBCGYJFNZZXPUIGMSDIVNHSINGKTPIAEPLLUBCUYJUCMGJKZWTIDNGBSRIGFGPVSEEYUMIRQOOWKFTXMIRTZDAJTHKCLCNHJXPWWSOBPEHHHAAQCZQHHYXAVNUNURXSACWOUMVGMCLQLTQXBIEXRMEGLPDAEAYWOOYFSTQKMQVXORUQZVMKKZZDWSFDRIBOKCPPXJHDFTYJLEMQ");
    const signed char tmp_msg_0[] = {-83, 39, 91, -27, -28, -64, 121, 94, -95, -102, 93, 69, -72, 17, 30, -12, -77, 33, 108, 88, -126, -123, 4, -128, 57, -92, 66, 105, -1, 122, 85, -6, -43, 2, -64, -8, 13, -119, 72, 95, -92, -94, 113, -26, -117, 10, 86, 108, 120, 46, 100, 91, 126, -98, 94, -36, 125, -30, -5, 78, -19, -9, -27, 47, 14, 41, -22, -78, -74, -30, 24, -33, 70, 10, -29, -93, -93, -116, 53, 86, -56, 87, 116, 80, -40, -6, 56, -38, 99, 74, -97, -49, 65, -80, -124, -45, -108, 58, 103, 105, 67, 96, 91, -126, 46, 67, -60, -112, 76, 105, -66, 23, 49, -128, -73, 29, 95, -69, -104, 51, -43, 88, 11, -8, 8, -76, 89, 67, 68, 11, 119, -79, -27, 88, -28, 39, 108, -38, -76, 16, -27, 24, 122, -104, -69, 105, -115, 78, -108, -52, -25, 16, -46, -20, -63, -103, 86, -49, 14, 49, -109, 100, -118, -41, 82, -115, -74, -90, -75, -3, -16, 49, -68, -42, -111, -42, -75, -91, 9, 33, -55, 64, -118, 9, 65, -114, -42, -26};
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
    msg.setTimeStamp(0.1253141912670248);
    msg.setSource(41670U);
    msg.setSourceEntity(145U);
    msg.setDestination(51977U);
    msg.setDestinationEntity(23U);
    msg.req_id = 63799U;
    msg.ttl = 43659U;
    msg.destination.assign("LATMVHROAAZMELRUMOOZJIBBMPXNBWNHEWKWMTXESUWDBCFARRWDPUGQKNQSABOD");
    const signed char tmp_msg_0[] = {-2, 90, 26, 7, -91, 69, 31, 64, 106, -1, 121, -39, 16, 110, -41, -61, -69, 96, 79, -16, -120, 117, 87, 117, 120, -54, -5, -11, -64, -78, -128, 58, 114, 62, -97, 0, 33, 76, 71, -45, 61, 70, 34, 85, -127, -84, -55, 103, -108, -125, -84, 46, 83, 7, -6, 15, -102, 94, 69, 120, -59, -72, -36, 93, 0, 54, -120, 67, 116, -68, -123, 73, -111, 19, 97, -44, -117, 126, 59, -57, 14, -59, -59, 32, 61, -76, -3, -99, 58, 97, 42, -113, -68, 47, -31, -128, -91, -116, 122, -119, 88, 47, 73, 3, -59, 84, -75, -23, 112, -127, -123, -48, 12, 90, -15, -69, 105, -31, -96, -36, 87, -128, -101, -40, -36, -43, -41, -109, 6, 51, -117, 48, 46, -12, 88, 33, 88, 94, -42, -39, 63, 28, 13, -47, 55, -3, 28, -42, 33, 43, -36, -93, -2, 6, 78, -23, -62, 42, -110, -11, -88, 12, -103, -112, -118, 25, 23, -8, 24, 13, -86, -48, -120, -61, 114, 51, -62, 76, 45, 3, -102, 72, -19, -84, 5, 10, 32, 37, -88, 48, -27, -67, 52, 20, -105, 111, 123, -122, 68, 16, 71, -64, 113, 69, 101, -28, 22, -80, 24, 81, -68, -124, -80, -7, 53, 68, 40, -46, 94, -44, -120, -88, 112};
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
    msg.setTimeStamp(0.7986024584907565);
    msg.setSource(46368U);
    msg.setSourceEntity(192U);
    msg.setDestination(21739U);
    msg.setDestinationEntity(100U);
    msg.req_id = 42567U;
    msg.ttl = 24762U;
    msg.destination.assign("JHIQZVKGNPCQVLFKEWXSIFAGWPFILDAQDKGJPNQFBTJCKRRTKRRSMZUNXPQABJWDVTPPSXFSLQNNPPRWOEJAWCOYWJLNMANCHESIDDUPGUMXOSSDVHGCEHOURYEUTCBETGMYQMCZI");
    const signed char tmp_msg_0[] = {-112, 45, -79, 47, 83, -26, 10, -118, 76, 6, 113, -7, -78, 9, 49, 104, 89};
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
    msg.setTimeStamp(0.14231163487492615);
    msg.setSource(13872U);
    msg.setSourceEntity(9U);
    msg.setDestination(48548U);
    msg.setDestinationEntity(154U);
    msg.req_id = 57398U;
    msg.status = 248U;
    msg.text.assign("ZWLVCQVAHGYFMBJKRIBNOPPTMKGCSPWCTHNWBMSEXPCOUIOEZSLCGFWRBDAAXAQEPZNIVMKXHQSJQDNZNACQHOPTFBEHGEEOLIKQOWRSKGAIFPWUXVZVWULYBREJLOYZDMXDUUUAYRTDUMYYYNDJLHWHRZ");

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
    msg.setTimeStamp(0.1519998949157576);
    msg.setSource(39927U);
    msg.setSourceEntity(183U);
    msg.setDestination(59139U);
    msg.setDestinationEntity(25U);
    msg.req_id = 25576U;
    msg.status = 83U;
    msg.text.assign("MWSBQZIQYNKAWCKDXGPJDOQOHIWHQJZYQVEDZZTRMEFAUHMYBABYRQANEMIJGIOK");

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
    msg.setTimeStamp(0.1156428522494114);
    msg.setSource(10573U);
    msg.setSourceEntity(161U);
    msg.setDestination(60916U);
    msg.setDestinationEntity(183U);
    msg.req_id = 21645U;
    msg.status = 34U;
    msg.text.assign("DHSENZOCYVHTHAILCWIOIJEFRPXQJQGSOEUEWBWCLZTJHPMDSJLJGWAIDRGWZTGYOZVDCCJCPQYYFGXACSMOOMQWDIEPPKMAPKRCSMGJVUQKFQDTAXHADMVHPRSRYFHF");

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
    msg.setTimeStamp(0.653588279664959);
    msg.setSource(46603U);
    msg.setSourceEntity(167U);
    msg.setDestination(49388U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("LSDQSEFDXOQLKNIMOTSLJGKNLUAYGTJOETWSKKUJWLONGIAJTLXKRDRVNFNBUVBCEAD");
    msg.links = 388898348U;

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
    msg.setTimeStamp(0.6581474922235365);
    msg.setSource(64968U);
    msg.setSourceEntity(73U);
    msg.setDestination(34174U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("VPSNVUUPCOOXRLRFQLICTAKLVJTKFQIVWSTYNHIUOBYPKBNCKJFMWSQRVSCOCSXCYFBOXRSZPUUHBTPIMEDDCJRVUPZBKJTEWK");
    msg.links = 73206659U;

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
    msg.setTimeStamp(0.9353093585159237);
    msg.setSource(46983U);
    msg.setSourceEntity(167U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("IINQHKNHEQDIOKIIDBNOSUUBVRYVGALXLGGUHXD");
    msg.links = 668893005U;

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
    msg.setTimeStamp(0.7067118163914794);
    msg.setSource(33219U);
    msg.setSourceEntity(39U);
    msg.setDestination(21521U);
    msg.setDestinationEntity(223U);
    msg.groupname.assign("TWFWJKZMCPVBYCSIWKDROAXGVBLNFROCQWVSTKLZGJZQZUUNRPYYVUREBKEQSOYODNPAACHTPOUUDYHBBIHLLTLFIJJJ");
    msg.action = 115U;
    msg.grouplist.assign("AQLXUXWOVXRLXYRSKTQFRDNOWDKVUQCRB");

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
    msg.setTimeStamp(0.3986896437340195);
    msg.setSource(22702U);
    msg.setSourceEntity(74U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(177U);
    msg.groupname.assign("TOLYMAIIDGUYKBOQRMBVNSKUHVNXWWENAPUQUQTTPLXOQVZUVASGJIGPWEEORHUWMMWSKNPBRCFHDZDJXQQLPLIGESUBSKATIEUXFAEFVFAEBACGJDYBZHDYKQTYOHHWROKGLIJYXCGPBHRAAILQCIZJZWVXCPSJOHCMTLG");
    msg.action = 30U;
    msg.grouplist.assign("ELHPNEFZVRRJSTKYXGEVBCANDDFJRPLXDWAFNZPCDSOGGJBUCMWVNVZZOE");

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
    msg.setTimeStamp(0.8250408825974885);
    msg.setSource(24558U);
    msg.setSourceEntity(244U);
    msg.setDestination(178U);
    msg.setDestinationEntity(99U);
    msg.groupname.assign("GUGCXOGKHNRPVPMAALQFTAJXWLCVZJPQHJNISDHAMPVUMFPUMOEZYKUDNVGVYJVFLDLEIWUPTBKCN");
    msg.action = 149U;
    msg.grouplist.assign("IXNIOFPIMZAUQPXYSGNBZPJFNZTBRIVUNDBQGFZQRTZJWHVBJWYOFKUGMXEPVRRLKAXHKOKWYNTSXCCRKSOYNY");

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
    msg.setTimeStamp(0.6821719381548234);
    msg.setSource(54038U);
    msg.setSourceEntity(57U);
    msg.setDestination(51961U);
    msg.setDestinationEntity(163U);
    msg.value = 0.8369825137837251;
    msg.sys_src = 56896U;

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
    msg.setTimeStamp(0.7546069829207481);
    msg.setSource(11070U);
    msg.setSourceEntity(95U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5565780022914053;
    msg.sys_src = 8667U;

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
    msg.setTimeStamp(0.8645828123669004);
    msg.setSource(30269U);
    msg.setSourceEntity(241U);
    msg.setDestination(46602U);
    msg.setDestinationEntity(224U);
    msg.value = 0.5974670053160244;
    msg.sys_src = 58788U;

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
    msg.setTimeStamp(0.015420245943537414);
    msg.setSource(45621U);
    msg.setSourceEntity(219U);
    msg.setDestination(33665U);
    msg.setDestinationEntity(51U);
    msg.value = 0.9375399777847817;
    msg.units = 248U;

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
    msg.setTimeStamp(0.5761819253651367);
    msg.setSource(37832U);
    msg.setSourceEntity(94U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(67U);
    msg.value = 0.12726894523584797;
    msg.units = 39U;

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
    msg.setTimeStamp(0.76387937615165);
    msg.setSource(19919U);
    msg.setSourceEntity(52U);
    msg.setDestination(39869U);
    msg.setDestinationEntity(161U);
    msg.value = 0.718468790457724;
    msg.units = 13U;

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
    msg.setTimeStamp(0.7672367063658271);
    msg.setSource(43181U);
    msg.setSourceEntity(34U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(201U);
    msg.base_lat = 0.4073654548066459;
    msg.base_lon = 0.011210848150285058;
    msg.base_time = 0.87011813852859;

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
    msg.setTimeStamp(0.7459446915554648);
    msg.setSource(49513U);
    msg.setSourceEntity(161U);
    msg.setDestination(38932U);
    msg.setDestinationEntity(213U);
    msg.base_lat = 0.5079634428282558;
    msg.base_lon = 0.2571629023682642;
    msg.base_time = 0.9003497022756646;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 16895U;
    tmp_msg_0.priority = 116;
    tmp_msg_0.x = 17584;
    tmp_msg_0.y = -20596;
    tmp_msg_0.z = 8981;
    tmp_msg_0.t = -2488;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5530866218388248;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 181U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.8778868989633013;
    tmp_tmp_tmp_msg_0_0_1.z_units = 240U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.7720806295962954;
    tmp_tmp_msg_0_0.lon = 0.4049097105172891;
    tmp_tmp_msg_0_0.radius = 0.9919570853835346;
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
    msg.setTimeStamp(0.8588492742135985);
    msg.setSource(3220U);
    msg.setSourceEntity(124U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.3190710337330821;
    msg.base_lon = 0.25696148252311013;
    msg.base_time = 0.9014023903724886;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 48917U;
    tmp_msg_0.destination = 1504U;
    tmp_msg_0.timeout = 0.6189355983202854;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7318954932053495;
    tmp_tmp_msg_0_0.y = 0.3282510903598699;
    tmp_tmp_msg_0_0.z = 0.8200344822197857;
    tmp_tmp_msg_0_0.phi = 0.953991655061552;
    tmp_tmp_msg_0_0.theta = 0.31811474027262776;
    tmp_tmp_msg_0_0.psi = 0.7342510099223075;
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
    msg.setTimeStamp(0.21158348802476312);
    msg.setSource(23313U);
    msg.setSourceEntity(246U);
    msg.setDestination(9384U);
    msg.setDestinationEntity(202U);
    msg.base_lat = 0.04040391355448125;
    msg.base_lon = 0.8528521510927235;
    msg.base_time = 0.09500631975085061;
    const signed char tmp_msg_0[] = {-51, -105, 113, 6, -66, -50, 120, -39, 1, -4, -81, -127, -50, -54, 113, -34, -94, 86, 58, -60, 2, -100, 117, 100, 79, -100, -88, 8, 124, 50, -14, -29, 87, 73, 115, -8, 32, -124, -36, 47, -10, -108, 23, 3, 92, 87, -64, -56, 98, -2, 101, -21, 12, 96, -53, 7, 125, -74, -21, -84, -110, 85, 97, -20, 125, -75, 10, 50, 121, -68, -54, -60, 12, 17, 33, 6, 21, -114, 15, -101, 91, 26, 109, -3, -90, 114, -107, -47, -25, -69, 12, -81, 69, -77, 41, 52, 6, 122, 85, 109, 30, -119, 9, -36, -110, 95, -83, -4, -39, 81, 86, 69, -90, -19, 10, -77, 51, -1, -6, -3, -94, 89, -50, -7, 49, 91, -119, -46, -127, 110, -52, -119, -36, 29, -39, 11, -47, -33, -51, -44, 75, -44, -2, -70, 49, -29, -83, 123, -87, 68, -119, 16, 103, -96, 94, 48, 71, -2, -35, -14, -59, -42, -23, 101, 54, 92, 24, -49, -53, 99, 101, 10, -23, 54, 121, -8, 61, 104, -37, -80, 59, 110, 102, 18, -69, -118, -68, 108, -12, 65, -1, 83, 38};
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
    msg.setTimeStamp(0.07636266680460335);
    msg.setSource(36075U);
    msg.setSourceEntity(161U);
    msg.setDestination(55843U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.6962309417478476;
    msg.base_lon = 0.9680081742102695;
    msg.base_time = 0.9250350189796012;
    const signed char tmp_msg_0[] = {-93, -14, -65, -72, 6, 121, -63, -44, 33, 33, -30, 81, -6, 46, 34, 117, 76, -53, -19, 37, 126, 72, 56, -11, -55, -16, -26, -103, 40, -104, 120, -94, 89, -25, 124, 54, -117, 26, 89, 4, -96, -45, 126, -125, -120, -15, -109, 16, -52, 50, -110, 87, -23, 94, -106, 49, 100, 113, 10, -11, 42, -93, -21, -59, -29, -61, -5, -23, -44, 39, 64, 54, 49, -91};
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
    msg.setTimeStamp(0.9443865166289321);
    msg.setSource(20972U);
    msg.setSourceEntity(8U);
    msg.setDestination(35076U);
    msg.setDestinationEntity(79U);
    msg.base_lat = 0.20800612023420073;
    msg.base_lon = 0.28980462375531;
    msg.base_time = 0.3167033630290019;
    const signed char tmp_msg_0[] = {104, 94, 34, 82, 78, -66, -119, 101, -93, -93, 53, -33, -128, -73, -34, -50, 1, -83, 101, 99, 15, 103, -46, -74, 87, 86, -47, 10, 74, -8, -122, -100, 45, -110, 23, -115, 120, 58, -105, -90, 28, 83, 113, 45, 120, 115, 125, 113, 117, -5, 52, 60, -98, 114, 99, 4, -25, 96, -100, -64, -49, -24, -61, 101};
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
    msg.setTimeStamp(0.8492342389128337);
    msg.setSource(8186U);
    msg.setSourceEntity(20U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(243U);
    msg.sys_id = 42132U;
    msg.priority = -41;
    msg.x = 1896;
    msg.y = 3250;
    msg.z = -13196;
    msg.t = -23149;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22275010204895362;
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
    msg.setTimeStamp(0.6763086423418437);
    msg.setSource(32505U);
    msg.setSourceEntity(134U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(253U);
    msg.sys_id = 16325U;
    msg.priority = 22;
    msg.x = -17399;
    msg.y = -16106;
    msg.z = 20823;
    msg.t = -10516;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 49U;
    tmp_msg_0.time_remain = 0.050494017974480276;
    tmp_msg_0.sched_time = 0.9143140706009107;
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
    msg.setTimeStamp(0.9836208607142007);
    msg.setSource(13917U);
    msg.setSourceEntity(250U);
    msg.setDestination(2213U);
    msg.setDestinationEntity(245U);
    msg.sys_id = 38356U;
    msg.priority = 51;
    msg.x = -19787;
    msg.y = -18457;
    msg.z = -29423;
    msg.t = 26588;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 35U;
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
    msg.setTimeStamp(0.6043430710860285);
    msg.setSource(6209U);
    msg.setSourceEntity(117U);
    msg.setDestination(49885U);
    msg.setDestinationEntity(31U);
    msg.req_id = 23385U;
    msg.type = 66U;
    msg.max_size = 48891U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9280781758873915;
    tmp_msg_0.base_lon = 0.9089086578878106;
    tmp_msg_0.base_time = 0.5626459418049371;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 53244U;
    tmp_tmp_msg_0_0.destination = 24316U;
    tmp_tmp_msg_0_0.timeout = 0.8295793304164646;
    IMC::RemoteActions tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.actions.assign("KSFUZDNMEHOMJPKAONOTLFHXBSZXDNLFRLDPJPRUPIDUAKHWISQEUSMNQJZWUZKTBPBTVIDXMCUDWZDYRINQHXCJVAO");
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
    msg.setTimeStamp(0.18216272780275122);
    msg.setSource(44659U);
    msg.setSourceEntity(145U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(117U);
    msg.req_id = 4956U;
    msg.type = 74U;
    msg.max_size = 5050U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7425743331936177;
    tmp_msg_0.base_lon = 0.675971022555479;
    tmp_msg_0.base_time = 0.07041796701973835;
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
    msg.setTimeStamp(0.9129087631617355);
    msg.setSource(40909U);
    msg.setSourceEntity(50U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(18U);
    msg.req_id = 46214U;
    msg.type = 93U;
    msg.max_size = 46158U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6229138074112031;
    tmp_msg_0.base_lon = 0.13202564103264836;
    tmp_msg_0.base_time = 0.18040722388757713;
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
    msg.setTimeStamp(0.11431667383439825);
    msg.setSource(17671U);
    msg.setSourceEntity(154U);
    msg.setDestination(36490U);
    msg.setDestinationEntity(207U);
    msg.original_source = 9860U;
    msg.destination = 651U;
    msg.timeout = 0.19949726228790654;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("RCQZSRXUTHWXDIQHQNMWOICARTIESZWEWPRKSJJBMQDJWCGCPAMHEYKAWVFXKQNODANJZMOAIBINDCGGCALPRTSJOBKSYKNJFHMOYLDMRFJQOGONYBQTRPOAKDFDFJHWZFDGZPSNMKXZLIFVVWXTQVGSVIRVNQUEHULNBZZITEGHNUU");
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
    msg.setTimeStamp(0.10353955796000391);
    msg.setSource(64085U);
    msg.setSourceEntity(110U);
    msg.setDestination(15575U);
    msg.setDestinationEntity(205U);
    msg.original_source = 41104U;
    msg.destination = 51043U;
    msg.timeout = 0.07766822792752603;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.03186289668540765;
    tmp_tmp_msg_0_0.lon = 0.6806183773863569;
    tmp_tmp_msg_0_0.height = 0.8815677527434674;
    tmp_tmp_msg_0_0.x = 0.6114980199989121;
    tmp_tmp_msg_0_0.y = 0.520604498359857;
    tmp_tmp_msg_0_0.z = 0.16092741963357904;
    tmp_tmp_msg_0_0.phi = 0.06381722409249324;
    tmp_tmp_msg_0_0.theta = 0.7248879585297809;
    tmp_tmp_msg_0_0.psi = 0.3540351626490815;
    tmp_tmp_msg_0_0.u = 0.5540608405378223;
    tmp_tmp_msg_0_0.v = 0.5258654469125673;
    tmp_tmp_msg_0_0.w = 0.5754629076092808;
    tmp_tmp_msg_0_0.vx = 0.10923140937128595;
    tmp_tmp_msg_0_0.vy = 0.8705965604423771;
    tmp_tmp_msg_0_0.vz = 0.6489627706437663;
    tmp_tmp_msg_0_0.p = 0.805653504043395;
    tmp_tmp_msg_0_0.q = 0.672364235521059;
    tmp_tmp_msg_0_0.r = 0.3437116625134611;
    tmp_tmp_msg_0_0.depth = 0.5593796707638083;
    tmp_tmp_msg_0_0.alt = 0.9763083596926525;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 8U;
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
    msg.setTimeStamp(0.05789441394261363);
    msg.setSource(47959U);
    msg.setSourceEntity(236U);
    msg.setDestination(52439U);
    msg.setDestinationEntity(167U);
    msg.original_source = 20191U;
    msg.destination = 48945U;
    msg.timeout = 0.5890437552006016;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 60419U;
    tmp_msg_0.duration = 49871U;
    tmp_msg_0.speed = 0.7077161165403892;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.x = 0.837211760384071;
    tmp_msg_0.y = 0.600846569288365;
    tmp_msg_0.z = 0.9528441603257313;
    tmp_msg_0.z_units = 117U;
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
    msg.setTimeStamp(0.062314404074294116);
    msg.setSource(20791U);
    msg.setSourceEntity(220U);
    msg.setDestination(59959U);
    msg.setDestinationEntity(101U);
    msg.type = 136U;
    msg.comm_interface = 4698U;
    msg.model = 37197U;
    msg.list.assign("ENRKZHPEAWKOUGPGUEQSSODQENULAKWJXZUQPTQRQSWPCFRMVWQLCBNEENOTWRJXFBSXUIHBTDMIBVJRNXIFCONLPNLREILRVKIZPSZCWWQMPRHKYEKIOENFBMDFGJSMSJJFGO");

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
    msg.setTimeStamp(0.30843581261087594);
    msg.setSource(61329U);
    msg.setSourceEntity(233U);
    msg.setDestination(2024U);
    msg.setDestinationEntity(65U);
    msg.type = 63U;
    msg.comm_interface = 12854U;
    msg.model = 32193U;
    msg.list.assign("TCOSYVGEVFAULGXDZVBOGMKFCCUUXCCCJJBBSEGMXTEWOROBUAFHDBMOBPVPOJQQQJFJXPMSCDERGNWBHTXCUUACMPQENXKBWYZDIRKFQKLLJJQOKYTIRMQOJMFSASWHHINTGALLZRLQLUEFKSOWTZHRXYFIMWIZNEUZXWXDAODVTGPPIDYAPQILGSHFVNLPCWMRHDFH");

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
    msg.setTimeStamp(0.18134982544595069);
    msg.setSource(9740U);
    msg.setSourceEntity(212U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(203U);
    msg.type = 39U;
    msg.comm_interface = 38828U;
    msg.model = 45688U;
    msg.list.assign("CDNNVBKTKHYSTGXUCNJAOFPWMAZFLLIWEMQRWOMEDISETEPBIVGBTQKJFZBTXCDQJGGNVLULDIQRYVYFHXBIYQOMJJZTZLWDBMAAIGCLOYKREHSZEKETKJOPBXCRXUZCRVHGOFTIEPOHUYDPRMBISUDJLUHJEAZTZNQHVNOUGNAAVYUXUSQGDRSQ");

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
    msg.setTimeStamp(0.16363438179235057);
    msg.setSource(57997U);
    msg.setSourceEntity(38U);
    msg.setDestination(27897U);
    msg.setDestinationEntity(105U);
    msg.type = 106U;
    msg.req_id = 1604734455U;
    msg.ttl = 20886U;
    msg.code = 163U;
    msg.destination.assign("WXXROCNKJZDIZJNBIBVJGPOVDXFAWFMBUHGBJSBKDBGSSFBIHHCOYXRPWYMXSXXICAZTTTDUINFIAYCENGVTCUVHAWNGVQUZLAVTRJRLVTZOHHKOGLBDQYDWFOJAAPUZJQOKSKJQCTALIZMNLQYLDDPWPLELFGXQPONJEUOREPHBKUNDKIQFVSAXRFMSS");
    msg.source.assign("AEZXBLXHICCVXQMJXPLJWUUFQGHRHWDWMWWLYFUJTUSKJPKZGQWEFDOKAPMXASGJKYAFJVBDTTLTYYUNEBRKZULIPMJNXHSEAQBMUNQZIQBLMBXRVFKNJIVPOHIOAFKOEKRSKGSSSBEY");
    msg.acknowledge = 191U;
    msg.status = 52U;
    const signed char tmp_msg_0[] = {-31, -123, -106, 28, 31, -34, -95, 72, -99, 99, 85, 52, 42, -96, 109, -87, 24, -94, -57, -2, -47, -17, 33, 125, -60, 29, -80, -81, 10, 20, 77, -109, 44, -108, -59, 51, 23, 82, 42, -31, 7, 33, -87, -35, 85, 123, 93, -16, -115, -33, -28, 18, -26, 46, 94, 48, 54, 66, -55, -43, -121, 11, -4, -61, -19, -18, 51, 69, -123, -72, 67, -101, 1, -87, -71, -124, 28, -114, -69, -97, -119, 117, 21, -68, 37, -30, -86, -79, 58, -44, -72, -123, 104, 18, -2, -4, -84, 38, 45, -37, -37, 8, -86, -26, 48, -100, -23, 98, -29, 33, 76, 14, 1, -48, 79, -68, 25, -104, 64, 27, -20, -81, 119, -34, -75, 8, -105, 51, -29, 106, -72, -19, 15, -74, -14, -1, 44, -113, -1, 74, -8, 12, -33, -59, 77, 62, 71, 42, 13, 107, -107, 105, 113, -101, 34, 50, 70, 122, -28, -37, 46, 79, 94, -81, -48};
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
    msg.setTimeStamp(0.4783725481589267);
    msg.setSource(50931U);
    msg.setSourceEntity(187U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(201U);
    msg.type = 92U;
    msg.req_id = 477402072U;
    msg.ttl = 58719U;
    msg.code = 58U;
    msg.destination.assign("SSIWTMGUGQVEMWBAWTKKSZZHXKJITTXLLIJDRZJHYUBYHTZVXESIWDFVHABQPYZJWGPLWXEEQRRUGKKGLSYSOUAVKOFXFJSKXDCAGAXZFORGROMQPULBQPXNNPMJJXIEINDVRYSMTQDFMQUCHVNITZGGAONLPKEY");
    msg.source.assign("SEWZAIFPQUCHXCEGBRBDLOMMDWZFGVGPGVDTWNDCVENAVCKBCNHLREACRNKDZHNEUXFXFUKRHYVPDQZFHPMFIBIWOTJTLSQGQYOHAOQQQKFUWNFXVJCAGEKUOAZPXUEAY");
    msg.acknowledge = 50U;
    msg.status = 218U;
    const signed char tmp_msg_0[] = {-124, 15, 95, 120, -33, -72, -42, -112, 54, -32, 24, 46, 63, 101, -39, -51, -125, 3, 18, -28, 41, -36, -16, 14, 86, -116, -86, 89, 26, 12, 55, -60, -58, -47, -13, -20, -76, 91, -10, 108, 31, 35, 21, -125, 123, -34, -99, 123, -104, -115, -13, 124, 74, -108, 93, -6, 86, 122, -5, 80, -70, -92, -17, -82, -119, -56, 22, 109, -76, 74, 98, -79, -101, 78, -38, -45, -35, -47, 118, -95, 64, 17, 106, 19, -17, 107, -119, -96, -8, 78, 76, -96, 39, -34, 55, -20, -108, -96, -66, -90, -99, 6, -111, 40, -87, -16, -6, 4, 114, 67, 104, -33, -120, -1, -41, 105, -32, 101, -40, 111, 8, 71, -42, 30, -46, 74, 114, 36, 61, -112, 75, -83, -118, -106, -124, 31, 115, -78, -41, -122, -69, -14, -79, -33, -118, -112, 99, 37, -103, 7, 105, -85, -16, -26};
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
    msg.setTimeStamp(0.42391162464373977);
    msg.setSource(41921U);
    msg.setSourceEntity(26U);
    msg.setDestination(35965U);
    msg.setDestinationEntity(75U);
    msg.type = 68U;
    msg.req_id = 2666597181U;
    msg.ttl = 52840U;
    msg.code = 170U;
    msg.destination.assign("DNAYTLBWAYIAYNFCQBBFCSFYOCRVZEHPWQUHKUUEVYXJBWHZOUDWLSKTYWDUFQMXJJZKZHEVWRSJGSZPMEMCYQPURDHCUIAGKGFGGYXBEHKIMNATEINNQWLLBLMJXGBCGIJMLDAIXAPRIIRHHTSXOKWDAVRNNTBSZTTCEGPPQSBDVMEQYLWXDFOVQFKGEMXQOMOUDVP");
    msg.source.assign("DLOSVSGSFJYZUHORJJLIATRATKWXYIOFERDTSIEVABRNQSEOXXWHVDPUPJUUYYLVEQYNWALQTHKLHJHCBZSANQNOBASFHOEIGQAJGFIHGLBIBMCBVRFDWMPZGKVUDAXZF");
    msg.acknowledge = 186U;
    msg.status = 240U;
    const signed char tmp_msg_0[] = {-71, 60, 81, 68, 75, 20, 76, 30, -59, 64, -42, 40, 105, -61, 120, 59, -80, 103, -7, 23, -3, 125, -33, 93, 83, 78, -64, -42, -18, -4, -112, 121, -64, -28, -127, 123, -113, 101, 54, -24, -88, -83, -47, -100, -122, 91, -91, 36, 94, 90, -22, -65, 51, -120, 57, -39, -102, 17, 115, 74, -98, -1, 91, -31, -125, -125, -15, -34, 74, -59, -29, 70, 21, 19, -77, -35, 2, -91, -72, 113, 62, 24, -19, 51, -114, 88, 100, 27, -102, 103, -83, 38, 25, 84, 68, -126, 60, -58, -91, -83, 86, -9, -74, -120, -30, 122, -52, -47, 71, 9, 48, -55, -49, 69, 99, 47, -97};
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
    msg.setTimeStamp(0.32813003027513277);
    msg.setSource(23242U);
    msg.setSourceEntity(111U);
    msg.setDestination(62101U);
    msg.setDestinationEntity(90U);
    msg.id = 63U;
    msg.range = 0.8087189934623175;

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
    msg.setTimeStamp(0.2704386566427447);
    msg.setSource(9828U);
    msg.setSourceEntity(139U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(76U);
    msg.id = 20U;
    msg.range = 0.9508082389117661;

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
    msg.setTimeStamp(0.11419012453014465);
    msg.setSource(11772U);
    msg.setSourceEntity(33U);
    msg.setDestination(63359U);
    msg.setDestinationEntity(72U);
    msg.id = 231U;
    msg.range = 0.2670134279364337;

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
    msg.setTimeStamp(0.768106280299494);
    msg.setSource(17278U);
    msg.setSourceEntity(57U);
    msg.setDestination(49843U);
    msg.setDestinationEntity(232U);
    msg.beacon.assign("IFEKMMLQHVEDFDDSCRBGRTTWPOXSIADROTEVRCQCOXVNQZCKLYTPCSIUQEDURCIOSEAUYDYWJKKDDMLXEFTNJGAWWZUJMNRAVMXFGJSQVVBHMYZH");
    msg.lat = 0.6034502421285011;
    msg.lon = 0.747821487319007;
    msg.depth = 0.5024658452517575;
    msg.query_channel = 207U;
    msg.reply_channel = 238U;
    msg.transponder_delay = 136U;

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
    msg.setTimeStamp(0.8133086051179524);
    msg.setSource(33557U);
    msg.setSourceEntity(246U);
    msg.setDestination(38848U);
    msg.setDestinationEntity(132U);
    msg.beacon.assign("JFFYEGMEWESDLZOGPUMMHHIIUXQ");
    msg.lat = 0.6488682983231131;
    msg.lon = 0.375595417002484;
    msg.depth = 0.5069171119323546;
    msg.query_channel = 201U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 23U;

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
    msg.setTimeStamp(0.1724496925930099);
    msg.setSource(2414U);
    msg.setSourceEntity(36U);
    msg.setDestination(55757U);
    msg.setDestinationEntity(207U);
    msg.beacon.assign("AMVQKIZIONFTXKIBLGQYRWXBIQYGKHWRZBLWAWJCDUBZCADSVXSMXCNQUEFTVHVOFCHJHPOCTKVSYPGRFGGRTQXYEPNXHDOSDUKZXRYAJMHXHUJACHIUEDWUGQISKPQIBINKOWMQMYONZAGDDVGLKRLJKZBPTOIGEEZZSW");
    msg.lat = 0.6464988554595933;
    msg.lon = 0.7933027888284104;
    msg.depth = 0.4185990210797844;
    msg.query_channel = 38U;
    msg.reply_channel = 234U;
    msg.transponder_delay = 26U;

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
    msg.setTimeStamp(0.7089371071597556);
    msg.setSource(47590U);
    msg.setSourceEntity(224U);
    msg.setDestination(48493U);
    msg.setDestinationEntity(118U);
    msg.op = 135U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PVZNUSWSWVKWKHJUQSMPFWHFTDPUQORZNMARA");
    tmp_msg_0.lat = 0.36422659790572665;
    tmp_msg_0.lon = 0.7571420566183661;
    tmp_msg_0.depth = 0.9078482239859914;
    tmp_msg_0.query_channel = 16U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 71U;
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
    msg.setTimeStamp(0.7112405031655944);
    msg.setSource(27887U);
    msg.setSourceEntity(210U);
    msg.setDestination(7104U);
    msg.setDestinationEntity(166U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.3232731080351967);
    msg.setSource(55384U);
    msg.setSourceEntity(7U);
    msg.setDestination(28476U);
    msg.setDestinationEntity(229U);
    msg.op = 85U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IETSZFKVNVCFMHMVYEDFONLMSONGIVJGRXYSBIDERAQAXBIVZFOLCPIJKXQKWFXFLZXLQHQXNZDGSSAUQRTKVMWXCOLCTEBM");
    tmp_msg_0.lat = 0.31683392855730974;
    tmp_msg_0.lon = 0.2735806128364373;
    tmp_msg_0.depth = 0.05857034371072101;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 101U;
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
    msg.setTimeStamp(0.7998250392121745);
    msg.setSource(54550U);
    msg.setSourceEntity(123U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(159U);
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.07135553312530352;
    tmp_msg_0.x = 0.11596121919157287;
    tmp_msg_0.y = 0.13421256573933782;
    tmp_msg_0.z = 0.5866363349861439;
    tmp_msg_0.timestep = 0.7926420491408118;
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
    msg.setTimeStamp(0.451591487374174);
    msg.setSource(51729U);
    msg.setSourceEntity(49U);
    msg.setDestination(13369U);
    msg.setDestinationEntity(245U);
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.9017838970299618;
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
    msg.setTimeStamp(0.21628909875324998);
    msg.setSource(35930U);
    msg.setSourceEntity(248U);
    msg.setDestination(12116U);
    msg.setDestinationEntity(52U);
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.656457031014016;
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
    msg.setTimeStamp(0.5850067141918216);
    msg.setSource(14773U);
    msg.setSourceEntity(174U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.7811144445218493;
    msg.lon = 0.7794770251178815;
    msg.depth = 0.5680720504557615;
    msg.sentence.assign("GCKRDZORKUFITFVJRSOMVRRFVKAJHPEBOUOFPRJDKXQRLQKTYWEFYKCJZBCKEWIIETBCXWR");
    msg.txtime = 0.6842325334984246;
    msg.modem_type.assign("KDATWPALJVSSLGLAXONFZMAYGQMYDACHSUCEFTCKZAYKIPQTQAOSHOEVEXTPGQJKMMDNCVOUPF");
    msg.sys_src.assign("HWJDXUCOXGKQZHKWSNFQAJUUKXXMOMGRPTLJPSRRXNCREELMBRPLDVBVRQZBYSCEAVLDVTSJPQBNNVXEZURXPZTJWYUCITWORSMWHFDNLDYBIOWMYGILILVMFDHPYLWNYQOEDCTRTZGAHEPPAHGJJZRAAFZWDOZJSITCFSTAFYKKGBTXUJHCDQNIEMEVBIHFHAGBVIDUVGBYLOKYPVKUWAWOGTAOXFFBQXJMHNQUCYKL");
    msg.seq = 26974U;
    msg.sys_dst.assign("BBQKLOBTEIEQSVITJCWEKMLXOTHTARCCZCXBI");
    msg.flags = 229U;
    const signed char tmp_msg_0[] = {14, 58, -32, 48, -4, -128, 23, -121, 95, 24, 110, 60, 123, -95, 60, 11, 77, -37, 12, -92, 41, -109, -69, -99, 114, -76, -24, 61, 100, 42, 4, -33, 33, -48, 8, 70, -73, 120, -107, -22, 71, -34, -24, -83, -66, 105, 73, 123, 55, -27, 59, 6, -100, -7, 88, -98, 50, 120, 87, 115, 114};
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
    msg.setTimeStamp(0.6951289319478142);
    msg.setSource(58104U);
    msg.setSourceEntity(155U);
    msg.setDestination(12323U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.310197841558116;
    msg.lon = 0.6504526202105074;
    msg.depth = 0.056456695361013054;
    msg.sentence.assign("ZWQIEYZYRUBNWPXYACSHODLKHBDRJQNJTPMHWYBUJYEINDOVSCMSFDAEKDCZYHWMBFUIZUJNPXAZQGBTAY");
    msg.txtime = 0.5761482095629121;
    msg.modem_type.assign("JJCTNCVBODLDOGUQDOHSBTSXCKIZKUVAEZTNEWRIDUVAZFASBJTDGTCDEARPKLAWMHIMNXHCBEOHXFXJPXJVMNEXWEQPKDTRWUEPBLTLYQFGHNIWYEGIUZQIYZHJUDIDFFMQSLCYXUMRRGPGJWHPRWSJGZKTFWONMRIGGYNPJUXXUQUTVEVWFHLQJLIGMSMDAKRMNOQKRBKHOFRYLQQEBV");
    msg.sys_src.assign("CJABQRYURVNZQDGFWVOJWZJERUYHGPMIPEWMKMOMNDRHCDEUKTANURRCSCAXLDJDJUOWKITSYKXZDIVQNGOOSDYXBSQLBWAPSHFZZKDAVMTDZCOHHUXXVVNAAUGWKLFOVPKHSPTLNHWEQMEGLOVYQLXMLFJZPYFMYJPHGGNGEPINISCVIWZLXAVRNSOYQKJBWQJYOFBTKELATFUIXKETUYCIUSCDTPTQBMFRIIGREMXGSLBQBCJTFFBZRBX");
    msg.seq = 58209U;
    msg.sys_dst.assign("NYXMPPJFLBISSTFNUOLVKRVRVYVIEMJPWGMDBHYTALHIQXZRRZATCDNGCCKALCCWQMTWFXCXG");
    msg.flags = 108U;
    const signed char tmp_msg_0[] = {51, -72, 28, 72, -105, 66, -85, -100, -12, 92, 18, 5, 47, 92, 23, -85, 62, -68, 79, 122, -61, -71, -113, -34, -9, 116, 23, -36, 39, 35, 47, 43, -41, 33, 51, -99, 101, -84, -84, -111, -125, -111, 12, 11, 93, -107, -76, -18, 69, -106, -63, -20, 98, 63, -20, 104, 61, 106};
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
    msg.setTimeStamp(0.6125052702452829);
    msg.setSource(4955U);
    msg.setSourceEntity(62U);
    msg.setDestination(6842U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.47233436530966844;
    msg.lon = 0.7700088175611358;
    msg.depth = 0.38399838396825237;
    msg.sentence.assign("JLTUBHMPMFCITFENCFIKVLHCNKISGJCRGXZAMHKFOBTR");
    msg.txtime = 0.1923077506227382;
    msg.modem_type.assign("PMXPKXABCXWJVVLFNTJLTNLYHQCKLFWJAPNZNGHIHFQSVPXDSIYCKMJ");
    msg.sys_src.assign("CEHZQPRVPQWZXPJROJXFOXJINWYARMKMBLPVIMVQLYKETNEJDRQNARPHZLCCYDAUNETWCADBFTIDGISQXGQIZNLJGWYLRMUGYWKXTKTYBFGEFSFAOEMWVGKVZNAKJPNWENGSLXOMLBOFCWMCHHATVATFBYPIPDRMHPVIWDGCBZJYZNWSSMUDISEHNZORUPUKXUCOTFCBXVXSFYCLKTUKAXQOSRBUHOQVBZZYTJVGUSJUEHMQRILF");
    msg.seq = 45985U;
    msg.sys_dst.assign("TRTZUHPNRKWRJUCOFHPAXWNMBAFEXLWJVMEWEVGAVBZQJQOLMQKYYQIOEQZDEZXBBPNGGAZWMFCFVDNLGKPISWMBGEDFBAPDZSFYOSHTNKIKCSUREAMTOPDPCDULZYLUMQJKALWCJHOVUNRHNQGN");
    msg.flags = 184U;
    const signed char tmp_msg_0[] = {121, 81, 57, -46, -124, 34, -80, -7, -7, -4, 112, 102, -4, 105, 53, 24, -70, 124, -37, 12, -111, -85, 72, 120, 85, 101, 60, -77, -86, 61, -56, -6, 6, -124, 61, -95, 96, -85, 123, 18, -110, 19, 16, -40, -20, -44, -13, 4, -93, -120, 77, -90, 60, 55, 53, 27, -6, -70, 75, 104, -109, -25, -36, -72, 3, 74, -117, 87, 79, -38, 5, -123, 47, 123, 15, -88, -74, -99, -23, 101, -61, 66, -78, 66, 8, 52, 2, 106, -112, -100, -46, -83, 58, 27, 17, -89, 74, -118, 50, 96, 34, 45, 76, -66, 63, 0, -86, 32, 51, 67, 72, -55, 45, -92, -3, -112, 123, -74, -64, 67, 122, -70, 22, 36, 118, 99, 6, 91, -49, 123, -69, 109, 107, 115, 31, 73, -84, 104, -76, -35, -126, 84, -86, 98, -18, -103, -50, -81, 73, 20, 54, -90, -45, 69, 53, -31, 58, 42, 74, -39, -68, 22, 36, -71, -49, 36, 125, 27, 125, 23, 15, 65, 90, -62, -24, 102};
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
    msg.setTimeStamp(0.014463180489348804);
    msg.setSource(868U);
    msg.setSourceEntity(16U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(154U);
    msg.op = 195U;
    msg.system.assign("CXTBUVCRDNK");
    msg.range = 0.4828247191858046;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1429668637595184;
    tmp_msg_0.y = 0.43080143309018826;
    tmp_msg_0.z = 0.7781829225405226;
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
    msg.setTimeStamp(0.21693986967377854);
    msg.setSource(49945U);
    msg.setSourceEntity(239U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(52U);
    msg.op = 197U;
    msg.system.assign("LASZTPUJYGVYJFKHPPBUOSLJRFGTNWRNHCOCIZYNZQIUETPFBDFBZXAFMLKBHHCCQODMGSYHNSCHPLKDFYYVAWHWCWWBYPZKYRETXORNASBQQIIVRBNQUSZLTACWMMGLDGGPUOPFLKXJOXXTOCAKEUJELCAAOWJUGMNMXKXGDKLDGASQIEUZIBFTBEYONXWVMQHIHUVGOVQIFWRTMERRARFMJTYQJURNVHPINVM");
    msg.range = 0.25737054441343077;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.959284197168825;
    tmp_msg_0.bias_r = 0.5381971542598101;
    tmp_msg_0.cog = 0.1340713341452151;
    tmp_msg_0.cyaw = 0.2081478175454078;
    tmp_msg_0.lbl_rej_level = 0.284843611366702;
    tmp_msg_0.gps_rej_level = 0.7893977778354512;
    tmp_msg_0.custom_x = 0.1879140003179296;
    tmp_msg_0.custom_y = 0.19054137653264203;
    tmp_msg_0.custom_z = 0.009088522365930052;
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
    msg.setTimeStamp(0.3357414010438434);
    msg.setSource(14309U);
    msg.setSourceEntity(101U);
    msg.setDestination(55646U);
    msg.setDestinationEntity(206U);
    msg.op = 41U;
    msg.system.assign("ITINKSRRBOTYXCCSORCVOJISJVSLAEQBVTWGTMHKRRGTLAUPSWDVPJFDESGDJDVHJEYCXXLXEHXWUZPQSOLAYDLBNPCNIEYOIWBUOWDSPMYTTHGANMNXMYZCDPKFKQAZZIAMFLRNBJMHPEUXAQGQLEDHNKXBIBWBRUQPNCDMDEIYHQNAV");
    msg.range = 0.44053254217722815;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("JMNEXLOUUWHIGVWZJEOGMIMBQUREMAPKKLTUIWYJIJZDPVEXYLCXCAKQUDBQWHOGBDAXJHFQZCGNERLSBOLXVJEMNWKSZAFSYROPBZRTHCQKFGZTFSVEIBLPTAFKDHZMNTBLJDPVRVODYXTGYWAASVUREQXCZNVGCHTONURBXPSSYRTFGDCRSLZYKJRMNNVQKXUEMIIWGQALGBHNFYYDXOKECTDCNMOMHHAQPFUOWJDBKTIYFSCWIPIH");
    tmp_msg_0.plan_size = 4833U;
    tmp_msg_0.change_time = 0.5123769388480808;
    tmp_msg_0.change_sid = 28312U;
    tmp_msg_0.change_sname.assign("EVQVTAJHMTSCYVWIJGCCZCCYHGUVGHZCRDWBUTATZQOCLG");
    const signed char tmp_tmp_msg_0_0[] = {73, 98, 115, -83, -76, -21, -95, -74, 94, -110, 111, 56, -8, -99, -120, -66, 42, -42, 99, 10, -58, -63, -47, -61, -110, 86, 23, -63, -11, -64, 112, -111, -81, 101, 86, -13, -122, -44, -89, 94, -103, -26, -92, -78, 57, 87, -61, -3, 27, -42, -44, 81, -4, 17, -121, 76, -1, 94, 22, 119, -100, -30, 73, -104, -119, 125, 57, -115, 57, 116, -17, -61, 103, -40, 40, -99, -46, -8, 48, 29, 74, 5, 62, 71, 7, 65, 122, -97, -51, -98, 103, -128, 112, -37, -36, -40, -95, 80, 113, 92, -60, -66, 75, 51, -61, -56, -119, 89, -49, -128, -70, -103, -60, -1, 25, -99, -59, -62, 126, -71, 31, -68, -8, 123, 12, -53, 9, 54, 9, 126, -2, -44, 28, -5, -94, -5, -126};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.40012680888760244);
    msg.setSource(23529U);
    msg.setSourceEntity(129U);
    msg.setDestination(42249U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.9360782133522686);
    msg.setSource(39999U);
    msg.setSourceEntity(32U);
    msg.setDestination(14177U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.657529521931125);
    msg.setSource(32096U);
    msg.setSourceEntity(67U);
    msg.setDestination(60270U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.766070937019663);
    msg.setSource(31424U);
    msg.setSourceEntity(187U);
    msg.setDestination(5480U);
    msg.setDestinationEntity(196U);
    msg.list.assign("ECOZGLFFJSEVTCQABJSMMGIEFKHMJAOIWPLDQNURHAWWNVTGHYQZQXDPGVNSPHSGSPUFQJMEXUQFOBMVALZBWVBSFPEPJEKXZCOGJKRICZLNUHAVVQIJCDFBVXSCOHLNYXGZT");

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
    msg.setTimeStamp(0.49810116931809056);
    msg.setSource(50104U);
    msg.setSourceEntity(126U);
    msg.setDestination(5009U);
    msg.setDestinationEntity(0U);
    msg.list.assign("SFKJDHCTMSCZMFUQNWNBWEFOYVUGTLAQGSERAXJBZXNSKEIPPLHYZWNJBRIQPYAYENTSJSYEOXLQRCXWWVHUOVDCMCXREBHGBOWUHKINIIARMEZAXLYNCHKHJBFNXSGVUOGEFDVDJKYGCVPAETJQOLSTLXBTLHVTGIBCORPLFRKMWGQUZWQYDDEIAZUFVIBLJMSOWVGQXVTCXKTPDQNDFCBHDSMPKLYQ");

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
    msg.setTimeStamp(0.09231617903948297);
    msg.setSource(35984U);
    msg.setSourceEntity(78U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(160U);
    msg.list.assign("LBNXYLAGQYIONRZXQHZRFZBIAPWLPGECJEGTKKJSBBZUTVHRUBKGMQGMXFYCDTLFPEHSLSOBXELVTARWHKAIEMJALPNBJMXVRJGQQUCAEUVACLNNIUDVPOUEZKGQXOXZKDMICCIUSDPMDWFRP");

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
    msg.setTimeStamp(0.7297704161216889);
    msg.setSource(50054U);
    msg.setSourceEntity(238U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(142U);
    msg.peer.assign("GNYOLNNKZWPIMVWSADOYIRQVSPTVBEZGRYORBARDUOEJIGHETNQKGIWXXBHNSFPBNFJOSVNF");
    msg.rssi = 0.21689030716155966;
    msg.integrity = 51214U;

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
    msg.setTimeStamp(0.10613116389956301);
    msg.setSource(1894U);
    msg.setSourceEntity(185U);
    msg.setDestination(13325U);
    msg.setDestinationEntity(59U);
    msg.peer.assign("LNQFCKEPNXQGMUUZXFXNYSZOSPTJKAJPNKEQCBMBIXQQIDEBHMXUXSDAYHGTHZBMDSXCVPFJPQILIPZRLRJUETTYVWHFZLXWQSXVLZUCBUYCEOLYRJXVDNHFFDMWOWGNWBBAOHLKIFAOILWAOEFVMWAUIDECLDGTTCWRRAVKIGMBZSJHBO");
    msg.rssi = 0.5828757758957189;
    msg.integrity = 60588U;

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
    msg.setTimeStamp(0.8431970830750217);
    msg.setSource(31390U);
    msg.setSourceEntity(188U);
    msg.setDestination(9841U);
    msg.setDestinationEntity(31U);
    msg.peer.assign("XBNFDOIJTALUGGQNBPCKRCHSUTNJLHKQZCWNXRYWCMQCQHHGTSRUKP");
    msg.rssi = 0.45307027005445455;
    msg.integrity = 15410U;

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
    msg.setTimeStamp(0.8925048474128249);
    msg.setSource(19409U);
    msg.setSourceEntity(189U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(126U);
    msg.req_id = 10183U;
    msg.destination.assign("ATOTMTSZDIQITWARJZTLFYTINPCNFDXEVHTBPDSZHPYMOWKUQHKOIFBKMTHAIORBFZENTBSOFEPHEPMSPBDJCJMJNQPSYCVGKNXOMAGUVVHDQBDRREYBEGIQQVIFYUAGXNUALUQYXVKZAXYEFLNMYVXIXPVMFVCBNLLCDRUWRLGS");
    msg.timeout = 0.8337243925349513;
    msg.range = 0.812389605528562;
    msg.type = 24U;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5747506775042612;
    tmp_msg_0.amp = 0.023381416756173;
    tmp_msg_0.cor = 56U;
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
    msg.setTimeStamp(0.26874294365050333);
    msg.setSource(49311U);
    msg.setSourceEntity(33U);
    msg.setDestination(55101U);
    msg.setDestinationEntity(254U);
    msg.req_id = 53365U;
    msg.destination.assign("OKSILUKNNMGMHGXBYWHEJHYMGOZVLTKXRIGFNLBKKALAIXRGMMPXMVCSEKZWWUPCLFICHQUQHRYJZCJGDYRHVUUPIDWPZNPQTJBAVASQDTHQNXGKGOCATPCDQYMPCCVXBSVCDMTOPYBQJSHRAAMIULNEWWZBNWFBWRTFBULLPEOSOFCIRZYHAOSSJDF");
    msg.timeout = 0.8376005401425494;
    msg.range = 0.01321828951465609;
    msg.type = 78U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.8398438241957344;
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
    msg.setTimeStamp(0.8318671404879332);
    msg.setSource(27694U);
    msg.setSourceEntity(25U);
    msg.setDestination(1778U);
    msg.setDestinationEntity(128U);
    msg.req_id = 27826U;
    msg.destination.assign("ZQLBRYCHJMIKCWXSYKCPOBPUGUNTXMYNVVZNEXAYMTYUJKXKJRIYNNEXJDGBCFTYWPZQHPPWFOTWTEEJZT");
    msg.timeout = 0.7938464459563258;
    msg.range = 0.1634725167480856;
    msg.type = 82U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("QERSEGNOXCHRUPWDCGNCUSTERXGCMKWZPKVGXUCIYHWIKWMJGLWBQCVVWGCRSWXZLAMIZZHWYDNCRFZPKRKBZLESPLPHTHJALNDNXPQXTMKJQJLEBURPOIBRTWGIQEABHDDNBZZYJIQUVEYYSBHIDXSYVYJAKFBVFFHDATQMQVNRLYPFTHSMQXDFVAORJMLBKIOAZE");
    tmp_msg_0.message_id = 13527U;
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
    msg.setTimeStamp(0.30676371387673385);
    msg.setSource(32353U);
    msg.setSourceEntity(158U);
    msg.setDestination(24829U);
    msg.setDestinationEntity(107U);
    msg.req_id = 46831U;
    msg.type = 253U;
    msg.status = 229U;
    msg.info.assign("HLDOYXHNFRHLSLQPJCNAEBELIOIGSTWRKIQAFCKLSQPOBVXVTMWKCJHTIEDAWCKOFMFATREAMZGSYNAIVRDBJVWTQULEDGTBHYPJGYAENQXQZMMSEQFWVXYWBEWYOIKDIOUOJDNUGCGUXCYKCKMKCMMQWQWDHBOJICZSRNRSONJIABTRDTFUZTZYEPFJVEAKLUZQPSODZURFNZVHNYFHMPNWDSVGGPZVXHUJUJHV");
    msg.range = 0.12497068377042964;

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
    msg.setTimeStamp(0.15102736197551858);
    msg.setSource(61149U);
    msg.setSourceEntity(123U);
    msg.setDestination(38599U);
    msg.setDestinationEntity(46U);
    msg.req_id = 55304U;
    msg.type = 20U;
    msg.status = 30U;
    msg.info.assign("HQORVPNJSMZWGLGJWKVAHFLOFWPPYEUKTUUCGBIJNEOXPXGKSFGJVICRVBMPGKOULECLOGBQMOSAYUYWEVHOXPDUIFLZBRSLUIPERZHEOXNFFTSHNSZGMDGWFCTYYVTKAANHZABOBGPDCIBUKDQLXML");
    msg.range = 0.6425728123756528;

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
    msg.setTimeStamp(0.8338723184016208);
    msg.setSource(474U);
    msg.setSourceEntity(78U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(253U);
    msg.req_id = 48411U;
    msg.type = 64U;
    msg.status = 100U;
    msg.info.assign("OGWNMVGINJHKJEWOKEPFJCMZDMEHQURPYKBLXQYXNGOXWFBWAQGAILNRSSBQCRYNF");
    msg.range = 0.6680638651570524;

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
    msg.setTimeStamp(0.2843269295016666);
    msg.setSource(7441U);
    msg.setSourceEntity(242U);
    msg.setDestination(50499U);
    msg.setDestinationEntity(167U);
    msg.value = 15066;

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
    msg.setTimeStamp(0.11641659276671334);
    msg.setSource(22767U);
    msg.setSourceEntity(131U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(202U);
    msg.value = -30144;

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
    msg.setTimeStamp(0.6111065206557681);
    msg.setSource(43844U);
    msg.setSourceEntity(117U);
    msg.setDestination(14388U);
    msg.setDestinationEntity(18U);
    msg.value = 29090;

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
    msg.setTimeStamp(0.9159166851622291);
    msg.setSource(40178U);
    msg.setSourceEntity(109U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(243U);
    msg.value = 0.3587375849386074;

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
    msg.setTimeStamp(0.44642416518641836);
    msg.setSource(41980U);
    msg.setSourceEntity(84U);
    msg.setDestination(6267U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6037246967328689;

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
    msg.setTimeStamp(0.31194549576438824);
    msg.setSource(35900U);
    msg.setSourceEntity(40U);
    msg.setDestination(49140U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6966810588166416;

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
    msg.setTimeStamp(0.3122036745041463);
    msg.setSource(10257U);
    msg.setSourceEntity(31U);
    msg.setDestination(1202U);
    msg.setDestinationEntity(194U);
    msg.value = 0.22273782085528449;

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
    msg.setTimeStamp(0.2471373323891961);
    msg.setSource(11381U);
    msg.setSourceEntity(118U);
    msg.setDestination(12425U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9958848762335838;

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
    msg.setTimeStamp(0.9834077410343273);
    msg.setSource(51108U);
    msg.setSourceEntity(177U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(111U);
    msg.value = 0.19216377138225016;

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
    msg.setTimeStamp(0.04793639331446098);
    msg.setSource(47118U);
    msg.setSourceEntity(4U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(80U);
    msg.validity = 37876U;
    msg.type = 149U;
    msg.utc_year = 13525U;
    msg.utc_month = 236U;
    msg.utc_day = 128U;
    msg.utc_time = 0.4337309937609274;
    msg.lat = 0.0723285076485971;
    msg.lon = 0.5627914039128219;
    msg.height = 0.5303829581153287;
    msg.satellites = 120U;
    msg.cog = 0.6545208173008982;
    msg.sog = 0.3955134697546876;
    msg.hdop = 0.9631204229349639;
    msg.vdop = 0.6688855340146513;
    msg.hacc = 0.8264081779653667;
    msg.vacc = 0.6370857718259214;

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
    msg.setTimeStamp(0.3210222847500135);
    msg.setSource(39697U);
    msg.setSourceEntity(239U);
    msg.setDestination(25375U);
    msg.setDestinationEntity(140U);
    msg.validity = 43822U;
    msg.type = 6U;
    msg.utc_year = 24911U;
    msg.utc_month = 65U;
    msg.utc_day = 71U;
    msg.utc_time = 0.9686098776684473;
    msg.lat = 0.304495099031064;
    msg.lon = 0.5053214316478982;
    msg.height = 0.92827008896918;
    msg.satellites = 187U;
    msg.cog = 0.11069085752343655;
    msg.sog = 0.6664866313370312;
    msg.hdop = 0.3802634514202883;
    msg.vdop = 0.6179104612773059;
    msg.hacc = 0.7140022107013162;
    msg.vacc = 0.6308197606865351;

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
    msg.setTimeStamp(0.40281088250652497);
    msg.setSource(50678U);
    msg.setSourceEntity(164U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(8U);
    msg.validity = 14963U;
    msg.type = 105U;
    msg.utc_year = 20685U;
    msg.utc_month = 187U;
    msg.utc_day = 56U;
    msg.utc_time = 0.5993344544679289;
    msg.lat = 0.8114556735011494;
    msg.lon = 0.8509668388967905;
    msg.height = 0.654316836596756;
    msg.satellites = 222U;
    msg.cog = 0.2723905812067693;
    msg.sog = 0.6379065266467348;
    msg.hdop = 0.27075862626684544;
    msg.vdop = 0.6140238991570416;
    msg.hacc = 0.8816978901762341;
    msg.vacc = 0.32192142398673074;

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
    msg.setTimeStamp(0.13842027917417776);
    msg.setSource(27868U);
    msg.setSourceEntity(219U);
    msg.setDestination(45767U);
    msg.setDestinationEntity(88U);
    msg.time = 0.4957719019336547;
    msg.phi = 0.3954550227537168;
    msg.theta = 0.622086579823474;
    msg.psi = 0.5190983852793916;
    msg.psi_magnetic = 0.5254933206114858;

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
    msg.setTimeStamp(0.9798995769007232);
    msg.setSource(29033U);
    msg.setSourceEntity(161U);
    msg.setDestination(19069U);
    msg.setDestinationEntity(241U);
    msg.time = 0.7253131456474262;
    msg.phi = 0.5272955987714526;
    msg.theta = 0.5463790433722006;
    msg.psi = 0.17414174228430657;
    msg.psi_magnetic = 0.2544115954481614;

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
    msg.setTimeStamp(0.762888640509015);
    msg.setSource(25384U);
    msg.setSourceEntity(62U);
    msg.setDestination(15112U);
    msg.setDestinationEntity(21U);
    msg.time = 0.5027776160927553;
    msg.phi = 0.7430451254096327;
    msg.theta = 0.49412232421951885;
    msg.psi = 0.6679677404400203;
    msg.psi_magnetic = 0.24692558921881202;

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
    msg.setTimeStamp(0.12237081886167123);
    msg.setSource(32289U);
    msg.setSourceEntity(95U);
    msg.setDestination(49265U);
    msg.setDestinationEntity(214U);
    msg.time = 0.9921560959148865;
    msg.x = 0.958962762583653;
    msg.y = 0.05342856355967096;
    msg.z = 0.30087554319911014;
    msg.timestep = 0.3868981121256305;

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
    msg.setTimeStamp(0.1261395634162188);
    msg.setSource(3705U);
    msg.setSourceEntity(40U);
    msg.setDestination(29275U);
    msg.setDestinationEntity(207U);
    msg.time = 0.262557347179757;
    msg.x = 0.7889288326572259;
    msg.y = 0.1412391591429515;
    msg.z = 0.8012154817001064;
    msg.timestep = 0.9086996099824861;

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
    msg.setTimeStamp(0.4226517520576686);
    msg.setSource(46861U);
    msg.setSourceEntity(229U);
    msg.setDestination(55994U);
    msg.setDestinationEntity(98U);
    msg.time = 0.8590698028532722;
    msg.x = 0.5260744964040349;
    msg.y = 0.12802476539136676;
    msg.z = 0.18799188818109247;
    msg.timestep = 0.2789049919897232;

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
    msg.setTimeStamp(0.11497760778935451);
    msg.setSource(22947U);
    msg.setSourceEntity(57U);
    msg.setDestination(45228U);
    msg.setDestinationEntity(161U);
    msg.time = 0.15016767757036187;
    msg.x = 0.9123711559624854;
    msg.y = 0.34670517778186283;
    msg.z = 0.39712956450714976;

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
    msg.setTimeStamp(0.933860024341171);
    msg.setSource(59581U);
    msg.setSourceEntity(212U);
    msg.setDestination(33948U);
    msg.setDestinationEntity(238U);
    msg.time = 0.43332690954271447;
    msg.x = 0.35354586730036774;
    msg.y = 0.7084606160438943;
    msg.z = 0.15106739999676233;

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
    msg.setTimeStamp(0.5162486272913833);
    msg.setSource(63140U);
    msg.setSourceEntity(192U);
    msg.setDestination(21677U);
    msg.setDestinationEntity(132U);
    msg.time = 0.41469339319265763;
    msg.x = 0.17110286682917164;
    msg.y = 0.12013068193860499;
    msg.z = 0.905977981398998;

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
    msg.setTimeStamp(0.18893865759773232);
    msg.setSource(45516U);
    msg.setSourceEntity(66U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(185U);
    msg.time = 0.6207630961656899;
    msg.x = 0.5083170210939568;
    msg.y = 0.0832829426278513;
    msg.z = 0.2468391772741706;

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
    msg.setTimeStamp(0.49032714156100354);
    msg.setSource(55416U);
    msg.setSourceEntity(215U);
    msg.setDestination(42833U);
    msg.setDestinationEntity(160U);
    msg.time = 0.7188017349120811;
    msg.x = 0.9734545303287861;
    msg.y = 0.1324584206808458;
    msg.z = 0.8410994390251055;

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
    msg.setTimeStamp(0.3682458740945871);
    msg.setSource(51812U);
    msg.setSourceEntity(46U);
    msg.setDestination(55667U);
    msg.setDestinationEntity(228U);
    msg.time = 0.8278105862006594;
    msg.x = 0.7449868155556576;
    msg.y = 0.2501349492340851;
    msg.z = 0.6946470780943713;

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
    msg.setTimeStamp(0.9779891614854826);
    msg.setSource(58259U);
    msg.setSourceEntity(172U);
    msg.setDestination(51597U);
    msg.setDestinationEntity(39U);
    msg.time = 0.9356014016102165;
    msg.x = 0.377356374297229;
    msg.y = 0.15782197300605094;
    msg.z = 0.6637229035219936;

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
    msg.setTimeStamp(0.3644359730639103);
    msg.setSource(10783U);
    msg.setSourceEntity(7U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(94U);
    msg.time = 0.3488272776259751;
    msg.x = 0.7846838968981924;
    msg.y = 0.6773242800553697;
    msg.z = 0.3412322971757339;

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
    msg.setTimeStamp(0.10082763442223452);
    msg.setSource(47352U);
    msg.setSourceEntity(62U);
    msg.setDestination(28925U);
    msg.setDestinationEntity(248U);
    msg.time = 0.9734873220341939;
    msg.x = 0.5138014023283392;
    msg.y = 0.1489604675911892;
    msg.z = 0.5512333402331956;

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
    msg.setTimeStamp(0.06568077026666275);
    msg.setSource(31494U);
    msg.setSourceEntity(223U);
    msg.setDestination(52233U);
    msg.setDestinationEntity(39U);
    msg.validity = 164U;
    msg.x = 0.31760681291851833;
    msg.y = 0.45183981560120057;
    msg.z = 0.8217028046900883;

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
    msg.setTimeStamp(0.21857927954965561);
    msg.setSource(37661U);
    msg.setSourceEntity(249U);
    msg.setDestination(58765U);
    msg.setDestinationEntity(111U);
    msg.validity = 158U;
    msg.x = 0.09092169797629557;
    msg.y = 0.6692093921331529;
    msg.z = 0.8073058619025086;

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
    msg.setTimeStamp(0.7791964641119583);
    msg.setSource(53984U);
    msg.setSourceEntity(248U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(127U);
    msg.validity = 9U;
    msg.x = 0.5410431361146589;
    msg.y = 0.4986607208665117;
    msg.z = 0.953661017245391;

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
    msg.setTimeStamp(0.316560412211079);
    msg.setSource(57053U);
    msg.setSourceEntity(117U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(199U);
    msg.validity = 113U;
    msg.x = 0.42977009888550965;
    msg.y = 0.48827946757447127;
    msg.z = 0.989788618169653;

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
    msg.setTimeStamp(0.016945105410233308);
    msg.setSource(63888U);
    msg.setSourceEntity(61U);
    msg.setDestination(45376U);
    msg.setDestinationEntity(213U);
    msg.validity = 190U;
    msg.x = 0.9254000040805261;
    msg.y = 0.4807733352395671;
    msg.z = 0.3206359965736356;

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
    msg.setTimeStamp(0.32052623530620206);
    msg.setSource(31906U);
    msg.setSourceEntity(173U);
    msg.setDestination(18207U);
    msg.setDestinationEntity(65U);
    msg.validity = 241U;
    msg.x = 0.23545963065242115;
    msg.y = 0.2572867855212847;
    msg.z = 0.6198777348812232;

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
    msg.setTimeStamp(0.748171722349551);
    msg.setSource(21936U);
    msg.setSourceEntity(103U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(29U);
    msg.time = 0.6392388153371902;
    msg.x = 0.5601309509717686;
    msg.y = 0.8743171327777688;
    msg.z = 0.5406678644057122;

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
    msg.setTimeStamp(0.35775588534513114);
    msg.setSource(7176U);
    msg.setSourceEntity(88U);
    msg.setDestination(45344U);
    msg.setDestinationEntity(42U);
    msg.time = 0.6588484214802152;
    msg.x = 0.41727100060166455;
    msg.y = 0.8032726852158608;
    msg.z = 0.6573433175401562;

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
    msg.setTimeStamp(0.6831628325474687);
    msg.setSource(49034U);
    msg.setSourceEntity(62U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(248U);
    msg.time = 0.9183765516659042;
    msg.x = 0.7117898654384082;
    msg.y = 0.3239998036080264;
    msg.z = 0.6948838510291482;

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
    msg.setTimeStamp(0.36131860968070006);
    msg.setSource(61504U);
    msg.setSourceEntity(168U);
    msg.setDestination(52140U);
    msg.setDestinationEntity(136U);
    msg.validity = 195U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.19656659100509222;
    tmp_msg_0.beam_height = 0.09493527776181887;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6135734401602566;

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
    msg.setTimeStamp(0.7680911326078608);
    msg.setSource(1798U);
    msg.setSourceEntity(190U);
    msg.setDestination(1789U);
    msg.setDestinationEntity(229U);
    msg.validity = 177U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7127886436126276;
    tmp_msg_0.beam_height = 0.9129244155583569;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.22424687964445866;

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
    msg.setTimeStamp(0.7973285989356179);
    msg.setSource(49608U);
    msg.setSourceEntity(45U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(163U);
    msg.validity = 24U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.18587483048826414;
    tmp_msg_0.y = 0.6167119558689267;
    tmp_msg_0.z = 0.2813415895351583;
    tmp_msg_0.phi = 0.41652422813418377;
    tmp_msg_0.theta = 0.8762999039933603;
    tmp_msg_0.psi = 0.1713134663508722;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.44443196165822607;

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
    msg.setTimeStamp(0.2107925942344413);
    msg.setSource(48404U);
    msg.setSourceEntity(69U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(253U);
    msg.value = 0.05101311179696966;

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
    msg.setTimeStamp(0.12122369606503391);
    msg.setSource(62419U);
    msg.setSourceEntity(239U);
    msg.setDestination(10151U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7388582467125467;

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
    msg.setTimeStamp(0.8464989703659114);
    msg.setSource(11842U);
    msg.setSourceEntity(217U);
    msg.setDestination(37214U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9467494613375821;

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
    msg.setTimeStamp(0.3068324451173454);
    msg.setSource(51928U);
    msg.setSourceEntity(207U);
    msg.setDestination(27450U);
    msg.setDestinationEntity(196U);
    msg.value = 0.4683884777059373;

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
    msg.setTimeStamp(0.48380590677846425);
    msg.setSource(576U);
    msg.setSourceEntity(112U);
    msg.setDestination(60696U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6642968323574379;

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
    msg.setTimeStamp(0.11123935009704111);
    msg.setSource(46245U);
    msg.setSourceEntity(92U);
    msg.setDestination(27466U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6619934714558967;

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
    msg.setTimeStamp(0.8518881926073302);
    msg.setSource(38232U);
    msg.setSourceEntity(30U);
    msg.setDestination(60956U);
    msg.setDestinationEntity(95U);
    msg.value = 0.44055900311301677;

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
    msg.setTimeStamp(0.7316143657094909);
    msg.setSource(22779U);
    msg.setSourceEntity(19U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(140U);
    msg.value = 0.26659579754507867;

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
    msg.setTimeStamp(0.3999311157659172);
    msg.setSource(60349U);
    msg.setSourceEntity(212U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9965334329627319;

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
    msg.setTimeStamp(0.6408273309467508);
    msg.setSource(53435U);
    msg.setSourceEntity(18U);
    msg.setDestination(11316U);
    msg.setDestinationEntity(180U);
    msg.value = 0.643352266638543;

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
    msg.setTimeStamp(0.6027184905243893);
    msg.setSource(31486U);
    msg.setSourceEntity(231U);
    msg.setDestination(20850U);
    msg.setDestinationEntity(150U);
    msg.value = 0.3012255430236481;

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
    msg.setTimeStamp(0.44948301968969695);
    msg.setSource(5709U);
    msg.setSourceEntity(139U);
    msg.setDestination(34447U);
    msg.setDestinationEntity(12U);
    msg.value = 0.045458511899577614;

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
    msg.setTimeStamp(0.9843570102592072);
    msg.setSource(43496U);
    msg.setSourceEntity(254U);
    msg.setDestination(1191U);
    msg.setDestinationEntity(92U);
    msg.value = 0.33871513844446666;

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
    msg.setTimeStamp(0.9956937191881522);
    msg.setSource(34019U);
    msg.setSourceEntity(182U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6906692536063821;

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
    msg.setTimeStamp(0.5517126735464122);
    msg.setSource(18539U);
    msg.setSourceEntity(116U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(90U);
    msg.value = 0.2433284171928044;

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
    msg.setTimeStamp(0.3455565398205078);
    msg.setSource(29636U);
    msg.setSourceEntity(20U);
    msg.setDestination(57887U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7251675245432795;

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
    msg.setTimeStamp(0.12843079012396175);
    msg.setSource(35128U);
    msg.setSourceEntity(158U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(183U);
    msg.value = 0.13493322635161453;

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
    msg.setTimeStamp(0.032832925333311835);
    msg.setSource(16273U);
    msg.setSourceEntity(250U);
    msg.setDestination(55757U);
    msg.setDestinationEntity(57U);
    msg.value = 0.01583407529131331;

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
    msg.setTimeStamp(0.9393774778988553);
    msg.setSource(41039U);
    msg.setSourceEntity(72U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(128U);
    msg.value = 0.16621654525826834;

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
    msg.setTimeStamp(0.7082319586402384);
    msg.setSource(23070U);
    msg.setSourceEntity(215U);
    msg.setDestination(30866U);
    msg.setDestinationEntity(202U);
    msg.value = 0.46631340125746024;

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
    msg.setTimeStamp(0.8029912759617297);
    msg.setSource(29488U);
    msg.setSourceEntity(196U);
    msg.setDestination(13446U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5719942048281722;

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
    msg.setTimeStamp(0.7386902949392322);
    msg.setSource(10944U);
    msg.setSourceEntity(82U);
    msg.setDestination(30186U);
    msg.setDestinationEntity(146U);
    msg.value = 0.26411539577255105;

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
    msg.setTimeStamp(0.2381721357895834);
    msg.setSource(7231U);
    msg.setSourceEntity(182U);
    msg.setDestination(46142U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9703409185757256;

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
    msg.setTimeStamp(0.11844012024245343);
    msg.setSource(56035U);
    msg.setSourceEntity(242U);
    msg.setDestination(7551U);
    msg.setDestinationEntity(208U);
    msg.value = 0.3106273806802009;

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
    msg.setTimeStamp(0.14299154106550493);
    msg.setSource(62637U);
    msg.setSourceEntity(32U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(137U);
    msg.direction = 0.3430682573457059;
    msg.speed = 0.1315599659065585;
    msg.turbulence = 0.4014946976866882;

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
    msg.setTimeStamp(0.5146322510878847);
    msg.setSource(61059U);
    msg.setSourceEntity(152U);
    msg.setDestination(21831U);
    msg.setDestinationEntity(122U);
    msg.direction = 0.2085556644821831;
    msg.speed = 0.6144248647606418;
    msg.turbulence = 0.8157447067614046;

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
    msg.setTimeStamp(0.5971338754404923);
    msg.setSource(16312U);
    msg.setSourceEntity(170U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(250U);
    msg.direction = 0.8060198927461847;
    msg.speed = 0.5563396846171907;
    msg.turbulence = 0.01969944970248272;

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
    msg.setTimeStamp(0.3287123713326895);
    msg.setSource(3992U);
    msg.setSourceEntity(164U);
    msg.setDestination(3108U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7888675735192445;

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
    msg.setTimeStamp(0.46182637687787553);
    msg.setSource(27040U);
    msg.setSourceEntity(38U);
    msg.setDestination(59539U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6301943695419411;

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
    msg.setTimeStamp(0.9447753860150174);
    msg.setSource(60947U);
    msg.setSourceEntity(189U);
    msg.setDestination(27710U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6187636771555275;

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
    msg.setTimeStamp(0.2097794622346849);
    msg.setSource(62328U);
    msg.setSourceEntity(121U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(212U);
    msg.value.assign("EIGAICWFOCBHTWWNOPVAGZWZPOKNOLWPMJPPBVPYULNIGRTQSOFMHAKZRHQQEXHQKERSURSMVRQPUDSOZBJNAIGYWCEXEDDLUNSUOHIFEXFJKLHRSXCIWTGEKQDHFSNALZKRGIMUTBUWLQGZHOZVJVUTAFAFBDWARSVSJQAFMKJDXPJBKFGCIGBMZRVDCPNVIYEAYTMODSHLWYCPLLBCYCRBXJGXOJNNKE");

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
    msg.setTimeStamp(0.2618041642529445);
    msg.setSource(54445U);
    msg.setSourceEntity(21U);
    msg.setDestination(46956U);
    msg.setDestinationEntity(96U);
    msg.value.assign("KHXAXJPFKUFTMPPBIGFYKTCNGZRSYDEDOVRFDRUZRBEWSYBVIIYLPQFHUAVUFIFPJMMEWACDXPUOUNKNLPQWTDSMEUIOKCVZEYBLXNJHYWMXJDIVHQQGMZQTSSVRMRGUPDWPREIBIWMIPQNXQXTBVWUDYNOXHWORLKEOSYJKLZHCAOTHKYRGFZEDBJAZVCSJOFHGNRAFAOHQJXKBOGCVGGKX");

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
    msg.setTimeStamp(0.6199673521001162);
    msg.setSource(55608U);
    msg.setSourceEntity(248U);
    msg.setDestination(46396U);
    msg.setDestinationEntity(103U);
    msg.value.assign("MTSSOAIHBLDNOIOKZEZBPAVI");

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
    msg.setTimeStamp(0.9726096325908776);
    msg.setSource(8375U);
    msg.setSourceEntity(50U);
    msg.setDestination(21172U);
    msg.setDestinationEntity(16U);
    const signed char tmp_msg_0[] = {60, 31, 19, -106, -116, -7, 91, 4, -25, 120, -10, -12, 32, 83, 80, 44, -127, 91, 100, 63, 57, 103, 50, 106, 27, 77, 52, -43, -52, -112, -110, -44, -40, 46, -53, 34, 58, 101, 24, -46, 70, 41, 34, 27, 31, 77, -41, 63, -113, 17, -49, -119, 26, -113, 11, -4, -94, -112, 73, 37, 110, -46, 66, -10, -14, 42, 18, 121, -91, -89, -116, -84, -9, -107, 10, 110, 82, -56, 35, -92, -36, -86, 90, -42, -68, -67, -20, 119, 17, 103, 87, -61, -7, -32, -83, 104, 14, -57, -59, 65, -115, 48, -86, -9, -10, -114, -73, 84, 100, -56, -116, -91, -24, 98, -67, -75, -60, -108, 75, 102, 17, -89, 13, 112, 48, 108, -3, -36, 29, -81, 39, 77, 116, -111, -15, 86, -19, 14, 27, -85, -2, 115, 53, 4, 41, -113, 58, 20, 108, 3, -99};
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
    msg.setTimeStamp(0.5952278150430967);
    msg.setSource(44762U);
    msg.setSourceEntity(187U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(141U);
    const signed char tmp_msg_0[] = {39, 53, -106, 9, 75, 64, 68, 83, -75, 13, 60, 73, -96, 64, 20, -81, 84, -94, -65, 109, 118, -87, 76, -9, -23, -65, -77, -118, -118, 98, 125, -107, 123, -85, -63, 10, -23, -26, -56, -83, 89, -60, -71, 46, -28, 79, 38, 43, -87, -98, 25, -27, 31, 116, 0, -123, -109, 118, -109, 42, -94, -84, 114, -115, -94, 62, -6, 6, 123, 102, -12, -96, -7, 98, 85, -51, -50, 111, -65, -8, 47, 41, 33, -122, 112, 87, -33, -96, -74, -126, -11, 45, -1, -76, -100, 94, 104, -99, 84, 54, -61, 83, 35, -102, -111, 67, 86, -20, -3, -119, 28, 51, 37, 98, -27, -77, 80, 96, 56, 77, 63, -41, 91, -80, 62, -124, 82, -68, 76, -69, -39, 124, -15, -111, 75, 51, -36, -35, 76, -125, -50, 89, -66, 105, 96, 41, -42, -33, 113, -18, -12, 117, -108, -52, 89, 82, 114, 24, 96, 24, 94, -103, -100, -108, 33, -110, 64, -21, -126, -117, 61, 54, -33, 20, -105, -34, -66, 84, 120, -85, -73, 56, -47, -127, 41, -54, 52, 102, -8, 76, -36, 38, 77, -96, -78, 20, -47, -114, 28, -13};
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
    msg.setTimeStamp(0.5692414517857612);
    msg.setSource(35043U);
    msg.setSourceEntity(227U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(37U);
    const signed char tmp_msg_0[] = {120, 8, -36, -105, -107, -96, -87, -1, -31, 22, -53, -28, -48, -126, -28, 85, 93, 22, 104, -125, -25, -52, -52, 111, -44, -66, 18, -89, 94, 62, 12, 15, 122, -99, 75, -31, -32, 89, -114, 31};
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
    msg.setTimeStamp(0.9373362936411934);
    msg.setSource(28563U);
    msg.setSourceEntity(73U);
    msg.setDestination(59082U);
    msg.setDestinationEntity(118U);
    msg.value = 0.817946548294175;

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
    msg.setTimeStamp(0.985743695415837);
    msg.setSource(47927U);
    msg.setSourceEntity(101U);
    msg.setDestination(59040U);
    msg.setDestinationEntity(146U);
    msg.value = 0.09483313215823175;

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
    msg.setTimeStamp(0.7756843813987079);
    msg.setSource(22153U);
    msg.setSourceEntity(178U);
    msg.setDestination(60697U);
    msg.setDestinationEntity(118U);
    msg.value = 0.46405869286411794;

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
    msg.setTimeStamp(0.7973050743731223);
    msg.setSource(13613U);
    msg.setSourceEntity(250U);
    msg.setDestination(5346U);
    msg.setDestinationEntity(41U);
    msg.type = 90U;
    msg.frequency = 1606628405U;
    msg.min_range = 25555U;
    msg.max_range = 443U;
    msg.bits_per_point = 245U;
    msg.scale_factor = 0.28260796802844446;
    const signed char tmp_msg_0[] = {25, -28, 36, 81, 7, -49, -59, 91, 74, -10, -82, 55, -94, 37, -11, -26, 34, -11, -24, -27, 17, -67, -20, -30, 54, -65, -126, -70, -128, 115, -19, 95, -10, -103, -71, -7, -78, -23, 7, 124, 63, 13, 50, -52, -71, -30, 112, 46, 65, 117, 120, -7, -6, 3, 21, 91, 95, 36, 102, -62, -49, 33, 123, -119, 33, -121, -25, -101, -114, 108, -18, 29, 18, 41, -38, -110, 83, 34, -59, 117, -116, -54, -50, -101, 27, 96, 8, 126, 50, -98, 114, -84, 108, -120, 105, -119, -44, 22, -57, -23, 34, -66, 114, -89, 20, 3, -90, 7, -16, -64, 86, -42, 107, -114, 99, 124, -60, 80, 73, 102, -33, -10, -1, -48, 91, 44, -84, -78, -126, 47, 4, 29, -7, -82, -14, -75, -64, 89, 41, -74, 64, -117, -89, 1, 22, -107, -37, 1, 56, 96, -68, 1, -17, -69, -70, -17, 110, 23, 25, -121, -39, 46, -20, 112, 22, -66, 104};
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
    msg.setTimeStamp(0.9979426716659647);
    msg.setSource(62668U);
    msg.setSourceEntity(253U);
    msg.setDestination(43698U);
    msg.setDestinationEntity(67U);
    msg.type = 173U;
    msg.frequency = 2394483733U;
    msg.min_range = 32504U;
    msg.max_range = 38214U;
    msg.bits_per_point = 107U;
    msg.scale_factor = 0.33377436975102337;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5641249854210623;
    tmp_msg_0.beam_height = 0.4449927288678118;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-7, 101, 11, -12, 97, -62, 3, -66, -122, -75, -47, 72, -54, 69, 52, 19, 11, -125, 66, 62, 33, 31, -88, -52, 95, -74, 111, -28, 61, -60, -7, -28, -1, -103, 87, -94, 19, 79, 90, -56, -75, 51, -68, 15, -90, -9, 115, -107, -116, 48, -2, 52, -58, 41, 31, 73, 122, 118, 79, -54, 71, 25, -82, -121};
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
    msg.setTimeStamp(0.026213749833811528);
    msg.setSource(55331U);
    msg.setSourceEntity(168U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(24U);
    msg.type = 3U;
    msg.frequency = 1682194002U;
    msg.min_range = 1314U;
    msg.max_range = 26652U;
    msg.bits_per_point = 198U;
    msg.scale_factor = 0.5293304289215717;
    const signed char tmp_msg_0[] = {58, -98, -45, 55, 34, 13, -18, -51, -76, 104, -110, 117, -35, -38, 57, -122, -121, -1, -78, -74, 42, -83, 44, 63, 50, 85, -126, -115, -93, -34, 64, 74, -1, 9, 45, 75, 113, 98, 59, -79, -27, -68, -30, 31, -22, -16, -67, -45, 33, 26, 119, 73, -108};
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
    msg.setTimeStamp(0.3133801454706021);
    msg.setSource(54436U);
    msg.setSourceEntity(39U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.86015167745526);
    msg.setSource(50285U);
    msg.setSourceEntity(64U);
    msg.setDestination(48283U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.08457872078982553);
    msg.setSource(14460U);
    msg.setSourceEntity(230U);
    msg.setDestination(6013U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.031162459743963478);
    msg.setSource(14903U);
    msg.setSourceEntity(123U);
    msg.setDestination(29343U);
    msg.setDestinationEntity(168U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.2524965478317662);
    msg.setSource(14882U);
    msg.setSourceEntity(178U);
    msg.setDestination(65035U);
    msg.setDestinationEntity(189U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.16114274677616358);
    msg.setSource(27607U);
    msg.setSourceEntity(37U);
    msg.setDestination(3287U);
    msg.setDestinationEntity(183U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.4236033720046556);
    msg.setSource(46248U);
    msg.setSourceEntity(63U);
    msg.setDestination(40299U);
    msg.setDestinationEntity(107U);
    msg.value = 0.22911649714916493;
    msg.confidence = 0.7249022014863336;
    msg.opmodes.assign("TSUGCOWQXGXVOBNEGYFMJSULTIZXRVXZYQDIRKOFYCHFESNTDXWDKVBPNPVPMEMNLKPKBKQBCKQMZKGUYDOMOXZILLYFISE");

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
    msg.setTimeStamp(0.0029983440534121497);
    msg.setSource(18619U);
    msg.setSourceEntity(170U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(38U);
    msg.value = 0.2622403800355334;
    msg.confidence = 0.38464947370375036;
    msg.opmodes.assign("OFBYVFWPCLLIDIWDSFUQWOZDORZKUYKGRAANPQENRILNNKGEKTJAHHMBPJJIIGLFAIRSZMRWTNJIHGLOUUQKSDEYTHHSFFDSJSVAKPCGPZXXGXZWUDLABPZCINWHEMPQXCEHBMZLVEEYOHYVJURFBBOORGAMUNYFRX");

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
    msg.setTimeStamp(0.45160750825444107);
    msg.setSource(14066U);
    msg.setSourceEntity(25U);
    msg.setDestination(11561U);
    msg.setDestinationEntity(193U);
    msg.value = 0.4582628371183539;
    msg.confidence = 0.8268422584383144;
    msg.opmodes.assign("CCZPQKLPAZAAQWVTERKWMMWDWBLXUUKBMYQJUITWLSKBVWSNJXEGODZDWNDPQBHJOJDCWRCFMHHFKSHVQAIQLYKHGICFYADPMAWNNSUVYACOPFXKUTVLYCEXQENFJGFVABMFOJVLYGMSEEMVULBQSSPJHRXZNRTUTOHOVPXILFJPRGZTGRHKJNERXYQIGOIGUXLSPDXALETEHKYIBDYNZCXASCQFKMRBIJPOZFOGTHZUNTGZE");

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
    msg.setTimeStamp(0.8945653303948218);
    msg.setSource(23363U);
    msg.setSourceEntity(153U);
    msg.setDestination(43578U);
    msg.setDestinationEntity(183U);
    msg.itow = 1727769502U;
    msg.lat = 0.6096725413259763;
    msg.lon = 0.668427279201935;
    msg.height_ell = 0.4450285559538081;
    msg.height_sea = 0.0485859288798316;
    msg.hacc = 0.9984521304422045;
    msg.vacc = 0.39837079752805327;
    msg.vel_n = 0.0774049523784257;
    msg.vel_e = 0.49366539924811936;
    msg.vel_d = 0.5470114358381974;
    msg.speed = 0.21880371784895136;
    msg.gspeed = 0.37622825850600894;
    msg.heading = 0.6653668148715839;
    msg.sacc = 0.40033895885388027;
    msg.cacc = 0.1988772793154192;

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
    msg.setTimeStamp(0.20085019320274955);
    msg.setSource(42889U);
    msg.setSourceEntity(195U);
    msg.setDestination(42588U);
    msg.setDestinationEntity(56U);
    msg.itow = 1726406010U;
    msg.lat = 0.8216419600957907;
    msg.lon = 0.6117695120928216;
    msg.height_ell = 0.6387417365512941;
    msg.height_sea = 0.19967264869269452;
    msg.hacc = 0.5522005258218636;
    msg.vacc = 0.5475075924296788;
    msg.vel_n = 0.6806819722763977;
    msg.vel_e = 0.4852349686008054;
    msg.vel_d = 0.3147491876156989;
    msg.speed = 0.4413445272632055;
    msg.gspeed = 0.03388917413545567;
    msg.heading = 0.8597048778930567;
    msg.sacc = 0.582413602088547;
    msg.cacc = 0.3825773098650799;

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
    msg.setTimeStamp(0.13698445507224322);
    msg.setSource(11865U);
    msg.setSourceEntity(72U);
    msg.setDestination(34617U);
    msg.setDestinationEntity(245U);
    msg.itow = 3749066216U;
    msg.lat = 0.02860014953010348;
    msg.lon = 0.5243214490828412;
    msg.height_ell = 0.1202467750728815;
    msg.height_sea = 0.5325061842313901;
    msg.hacc = 0.3700874291811651;
    msg.vacc = 0.38223572413668094;
    msg.vel_n = 0.8505281761518155;
    msg.vel_e = 0.09038773162127933;
    msg.vel_d = 0.06765320019157639;
    msg.speed = 0.8054720704653127;
    msg.gspeed = 0.7746695531411993;
    msg.heading = 0.7898544387993577;
    msg.sacc = 0.5056752067632053;
    msg.cacc = 0.1419357570348726;

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
    msg.setTimeStamp(0.1357755274658805);
    msg.setSource(37332U);
    msg.setSourceEntity(143U);
    msg.setDestination(57488U);
    msg.setDestinationEntity(181U);
    msg.id = 16U;
    msg.value = 0.5794889433897196;

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
    msg.setTimeStamp(0.2899284325651329);
    msg.setSource(27545U);
    msg.setSourceEntity(100U);
    msg.setDestination(58506U);
    msg.setDestinationEntity(16U);
    msg.id = 243U;
    msg.value = 0.4030076437623653;

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
    msg.setTimeStamp(0.27028913511180497);
    msg.setSource(11531U);
    msg.setSourceEntity(72U);
    msg.setDestination(53609U);
    msg.setDestinationEntity(12U);
    msg.id = 30U;
    msg.value = 0.794395631731455;

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
    msg.setTimeStamp(0.913927132376568);
    msg.setSource(1077U);
    msg.setSourceEntity(218U);
    msg.setDestination(54469U);
    msg.setDestinationEntity(43U);
    msg.x = 0.4759808863381634;
    msg.y = 0.7564600140649463;
    msg.z = 0.9787025912231994;
    msg.phi = 0.8224160804633747;
    msg.theta = 0.2992804863706645;
    msg.psi = 0.6342114895337153;

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
    msg.setTimeStamp(0.1123704252112715);
    msg.setSource(2504U);
    msg.setSourceEntity(12U);
    msg.setDestination(17579U);
    msg.setDestinationEntity(219U);
    msg.x = 0.1699189633107141;
    msg.y = 0.5255358856191273;
    msg.z = 0.1530901538035102;
    msg.phi = 0.10068116707878572;
    msg.theta = 0.17996791216033048;
    msg.psi = 0.8247592896514317;

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
    msg.setTimeStamp(0.5547480673862534);
    msg.setSource(8439U);
    msg.setSourceEntity(98U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(163U);
    msg.x = 0.47745578480608053;
    msg.y = 0.3374331206110429;
    msg.z = 0.9949563865700509;
    msg.phi = 0.7626009034065975;
    msg.theta = 0.9470407480715889;
    msg.psi = 0.6018050841806979;

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
    msg.setTimeStamp(0.2541198229305497);
    msg.setSource(15058U);
    msg.setSourceEntity(136U);
    msg.setDestination(24163U);
    msg.setDestinationEntity(73U);
    msg.beam_width = 0.7643169525786303;
    msg.beam_height = 0.2555156133410651;

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
    msg.setTimeStamp(0.7392074664065507);
    msg.setSource(23758U);
    msg.setSourceEntity(50U);
    msg.setDestination(45654U);
    msg.setDestinationEntity(250U);
    msg.beam_width = 0.28356832375479;
    msg.beam_height = 0.5114876836481068;

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
    msg.setTimeStamp(0.19330346313002622);
    msg.setSource(43960U);
    msg.setSourceEntity(226U);
    msg.setDestination(22338U);
    msg.setDestinationEntity(138U);
    msg.beam_width = 0.0291936102907423;
    msg.beam_height = 0.6707587203851509;

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
    msg.setTimeStamp(0.3270642493490139);
    msg.setSource(63127U);
    msg.setSourceEntity(195U);
    msg.setDestination(7246U);
    msg.setDestinationEntity(209U);
    msg.sane = 24U;

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
    msg.setTimeStamp(0.2700065028605566);
    msg.setSource(49248U);
    msg.setSourceEntity(141U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(166U);
    msg.sane = 194U;

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
    msg.setTimeStamp(0.8002833953677423);
    msg.setSource(838U);
    msg.setSourceEntity(55U);
    msg.setDestination(354U);
    msg.setDestinationEntity(74U);
    msg.sane = 224U;

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
    msg.setTimeStamp(0.887594958098927);
    msg.setSource(62315U);
    msg.setSourceEntity(42U);
    msg.setDestination(14708U);
    msg.setDestinationEntity(49U);
    msg.value = 0.7636398923800959;

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
    msg.setTimeStamp(0.6601107014112201);
    msg.setSource(7955U);
    msg.setSourceEntity(98U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(27U);
    msg.value = 0.3790051731426203;

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
    msg.setTimeStamp(0.8023639993095816);
    msg.setSource(44890U);
    msg.setSourceEntity(229U);
    msg.setDestination(50200U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9386891504646023;

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
    msg.setTimeStamp(0.35732035951068997);
    msg.setSource(45924U);
    msg.setSourceEntity(123U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5510853571796527;

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
    msg.setTimeStamp(0.236501152013605);
    msg.setSource(52665U);
    msg.setSourceEntity(146U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9416365477384467;

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
    msg.setTimeStamp(0.9864152251884266);
    msg.setSource(2902U);
    msg.setSourceEntity(37U);
    msg.setDestination(33528U);
    msg.setDestinationEntity(184U);
    msg.value = 0.9176144928017205;

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
    msg.setTimeStamp(0.8836450014499773);
    msg.setSource(29340U);
    msg.setSourceEntity(175U);
    msg.setDestination(25460U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9161651067803867;

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
    msg.setTimeStamp(0.9273709758722727);
    msg.setSource(38745U);
    msg.setSourceEntity(24U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(27U);
    msg.value = 0.1946861514171656;

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
    msg.setTimeStamp(0.40493526098375066);
    msg.setSource(44026U);
    msg.setSourceEntity(69U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(169U);
    msg.value = 0.34997865645730086;

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
    msg.setTimeStamp(0.45588500970228274);
    msg.setSource(1421U);
    msg.setSourceEntity(206U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(55U);
    msg.value = 0.41155764417594165;

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
    msg.setTimeStamp(0.3779852428272523);
    msg.setSource(52459U);
    msg.setSourceEntity(13U);
    msg.setDestination(30663U);
    msg.setDestinationEntity(229U);
    msg.value = 0.19958828243328341;

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
    msg.setTimeStamp(0.9983050651643949);
    msg.setSource(32704U);
    msg.setSourceEntity(51U);
    msg.setDestination(10714U);
    msg.setDestinationEntity(41U);
    msg.value = 0.26218471916521957;

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
    msg.setTimeStamp(0.6572098703313772);
    msg.setSource(9811U);
    msg.setSourceEntity(152U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6591650446101335;

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
    msg.setTimeStamp(0.8451497346384383);
    msg.setSource(43900U);
    msg.setSourceEntity(113U);
    msg.setDestination(49958U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7238705555167514;

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
    msg.setTimeStamp(0.7739777005803198);
    msg.setSource(11242U);
    msg.setSourceEntity(58U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(67U);
    msg.value = 0.26031226482597514;

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
    msg.setTimeStamp(0.8151418038980465);
    msg.setSource(2459U);
    msg.setSourceEntity(44U);
    msg.setDestination(26464U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5708539896243789;

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
    msg.setTimeStamp(0.45199441301046983);
    msg.setSource(36240U);
    msg.setSourceEntity(16U);
    msg.setDestination(44489U);
    msg.setDestinationEntity(231U);
    msg.value = 0.07239824032408215;

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
    msg.setTimeStamp(0.5406037195638131);
    msg.setSource(64456U);
    msg.setSourceEntity(131U);
    msg.setDestination(31793U);
    msg.setDestinationEntity(112U);
    msg.value = 0.4509165414297255;

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
    msg.setTimeStamp(0.1871122026642743);
    msg.setSource(41860U);
    msg.setSourceEntity(207U);
    msg.setDestination(59388U);
    msg.setDestinationEntity(160U);
    msg.value = 0.8457614630644646;

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
    msg.setTimeStamp(0.0836181938934426);
    msg.setSource(47633U);
    msg.setSourceEntity(90U);
    msg.setDestination(51497U);
    msg.setDestinationEntity(29U);
    msg.value = 0.8747856943951177;

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
    msg.setTimeStamp(0.6212158678564164);
    msg.setSource(4660U);
    msg.setSourceEntity(27U);
    msg.setDestination(28287U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5146704102008668;

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
    msg.setTimeStamp(0.6870306305955937);
    msg.setSource(46992U);
    msg.setSourceEntity(235U);
    msg.setDestination(2947U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7129843021641612;

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
    msg.setTimeStamp(0.6043461745639209);
    msg.setSource(15132U);
    msg.setSourceEntity(90U);
    msg.setDestination(12272U);
    msg.setDestinationEntity(151U);
    msg.value = 0.4546768036774739;

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
    msg.setTimeStamp(0.7558254580826477);
    msg.setSource(34897U);
    msg.setSourceEntity(15U);
    msg.setDestination(10208U);
    msg.setDestinationEntity(243U);
    msg.value = 0.43860474233369806;

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
    msg.setTimeStamp(0.23857193874369487);
    msg.setSource(22968U);
    msg.setSourceEntity(180U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(65U);
    msg.validity = 61139U;
    msg.type = 22U;
    msg.tow = 2914659232U;
    msg.base_lat = 0.5066295476897059;
    msg.base_lon = 0.9278893593009456;
    msg.base_height = 0.48037887056088946;
    msg.n = 0.9006093388550878;
    msg.e = 0.3327192840351757;
    msg.d = 0.19476668683449228;
    msg.v_n = 0.9204867199160229;
    msg.v_e = 0.16125121790981667;
    msg.v_d = 0.22886523705086437;
    msg.satellites = 68U;
    msg.iar_hyp = 15353U;
    msg.iar_ratio = 0.7137712724702064;

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
    msg.setTimeStamp(0.5269724484597672);
    msg.setSource(31229U);
    msg.setSourceEntity(40U);
    msg.setDestination(7641U);
    msg.setDestinationEntity(14U);
    msg.validity = 46326U;
    msg.type = 47U;
    msg.tow = 697487517U;
    msg.base_lat = 0.4152625812926055;
    msg.base_lon = 0.043685715582347684;
    msg.base_height = 0.6104454762933942;
    msg.n = 0.54792561792588;
    msg.e = 0.18411192056751036;
    msg.d = 0.8550223052777127;
    msg.v_n = 0.7785349046937053;
    msg.v_e = 0.3567110926431386;
    msg.v_d = 0.8284258443251838;
    msg.satellites = 96U;
    msg.iar_hyp = 24130U;
    msg.iar_ratio = 0.6770920337524183;

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
    msg.setTimeStamp(0.40786993464812993);
    msg.setSource(42291U);
    msg.setSourceEntity(173U);
    msg.setDestination(12453U);
    msg.setDestinationEntity(17U);
    msg.validity = 40414U;
    msg.type = 3U;
    msg.tow = 769137413U;
    msg.base_lat = 0.5610824162917207;
    msg.base_lon = 0.20202049379999087;
    msg.base_height = 0.36922884447899473;
    msg.n = 0.46054202054868854;
    msg.e = 0.87164992500121;
    msg.d = 0.8627003274310778;
    msg.v_n = 0.07148278025619814;
    msg.v_e = 0.8146888862940076;
    msg.v_d = 0.594005902845985;
    msg.satellites = 205U;
    msg.iar_hyp = 30167U;
    msg.iar_ratio = 0.2285213692622049;

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
    msg.setTimeStamp(0.588441171309652);
    msg.setSource(48049U);
    msg.setSourceEntity(141U);
    msg.setDestination(33934U);
    msg.setDestinationEntity(183U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9293168282698883;
    tmp_msg_0.lon = 0.9289572066868846;
    tmp_msg_0.height = 0.18388191604843152;
    tmp_msg_0.x = 0.08145169938000074;
    tmp_msg_0.y = 0.6825631591527649;
    tmp_msg_0.z = 0.9092760502418472;
    tmp_msg_0.phi = 0.14193539088701856;
    tmp_msg_0.theta = 0.5780005153833998;
    tmp_msg_0.psi = 0.4848443142372172;
    tmp_msg_0.u = 0.44214303759242024;
    tmp_msg_0.v = 0.714288685622157;
    tmp_msg_0.w = 0.5425101130814599;
    tmp_msg_0.vx = 0.9833937577141035;
    tmp_msg_0.vy = 0.2899184644843683;
    tmp_msg_0.vz = 0.9743996567611793;
    tmp_msg_0.p = 0.9317481587341354;
    tmp_msg_0.q = 0.6356871737848879;
    tmp_msg_0.r = 0.9119084423966758;
    tmp_msg_0.depth = 0.7019807537989569;
    tmp_msg_0.alt = 0.13311048186939123;
    msg.state.set(tmp_msg_0);
    msg.type = 113U;

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
    msg.setTimeStamp(0.9252076709908438);
    msg.setSource(64545U);
    msg.setSourceEntity(57U);
    msg.setDestination(12646U);
    msg.setDestinationEntity(35U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5643031451678667;
    tmp_msg_0.lon = 0.17714980234391986;
    tmp_msg_0.height = 0.26501260284662187;
    tmp_msg_0.x = 0.17306293474152723;
    tmp_msg_0.y = 0.7816531263363858;
    tmp_msg_0.z = 0.7550341242923131;
    tmp_msg_0.phi = 0.41565103003383086;
    tmp_msg_0.theta = 0.1817056594763794;
    tmp_msg_0.psi = 0.9895860487926518;
    tmp_msg_0.u = 0.016190206806809382;
    tmp_msg_0.v = 0.7702676803297528;
    tmp_msg_0.w = 0.9164744715050835;
    tmp_msg_0.vx = 0.7588877761731427;
    tmp_msg_0.vy = 0.2549908379018453;
    tmp_msg_0.vz = 0.32795415759916224;
    tmp_msg_0.p = 0.09610247032168573;
    tmp_msg_0.q = 0.08064387979669108;
    tmp_msg_0.r = 0.17552360386123878;
    tmp_msg_0.depth = 0.46109073528292344;
    tmp_msg_0.alt = 0.21295640562196316;
    msg.state.set(tmp_msg_0);
    msg.type = 40U;

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
    msg.setTimeStamp(0.8221408135153263);
    msg.setSource(14275U);
    msg.setSourceEntity(60U);
    msg.setDestination(31378U);
    msg.setDestinationEntity(164U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0016897735778325096;
    tmp_msg_0.lon = 0.1327275300104579;
    tmp_msg_0.height = 0.4616877383715392;
    tmp_msg_0.x = 0.6135778664824634;
    tmp_msg_0.y = 0.7418891870485906;
    tmp_msg_0.z = 0.7411721244224534;
    tmp_msg_0.phi = 0.4954889640432417;
    tmp_msg_0.theta = 0.20618921048338656;
    tmp_msg_0.psi = 0.6440499311223208;
    tmp_msg_0.u = 0.39315902165491456;
    tmp_msg_0.v = 0.059216192021451564;
    tmp_msg_0.w = 0.25834378548787273;
    tmp_msg_0.vx = 0.06954178228727814;
    tmp_msg_0.vy = 0.5436278263775658;
    tmp_msg_0.vz = 0.832189882355885;
    tmp_msg_0.p = 0.03971107534815932;
    tmp_msg_0.q = 0.8911761101454218;
    tmp_msg_0.r = 0.02003096165763396;
    tmp_msg_0.depth = 0.4611043184275553;
    tmp_msg_0.alt = 0.7266359916471583;
    msg.state.set(tmp_msg_0);
    msg.type = 14U;

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
    msg.setTimeStamp(0.16757737462177114);
    msg.setSource(24679U);
    msg.setSourceEntity(181U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5320680003666893;

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
    msg.setTimeStamp(0.15797801808311174);
    msg.setSource(9051U);
    msg.setSourceEntity(222U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8270143830392489;

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
    msg.setTimeStamp(0.03429413461645969);
    msg.setSource(21654U);
    msg.setSourceEntity(204U);
    msg.setDestination(6664U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7538861766968203;

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
    msg.setTimeStamp(0.16544092562718238);
    msg.setSource(49966U);
    msg.setSourceEntity(150U);
    msg.setDestination(26257U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8124100829002285;

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
    msg.setTimeStamp(0.006373862380749995);
    msg.setSource(61202U);
    msg.setSourceEntity(170U);
    msg.setDestination(6194U);
    msg.setDestinationEntity(151U);
    msg.value = 0.2519704766384997;

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
    msg.setTimeStamp(0.9531479657515044);
    msg.setSource(27317U);
    msg.setSourceEntity(97U);
    msg.setDestination(28388U);
    msg.setDestinationEntity(132U);
    msg.value = 0.16510720422661695;

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
    msg.setTimeStamp(0.7483861731648057);
    msg.setSource(52090U);
    msg.setSourceEntity(204U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(114U);
    msg.value = 0.47972938915912655;

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
    msg.setTimeStamp(0.15665081488927413);
    msg.setSource(61486U);
    msg.setSourceEntity(174U);
    msg.setDestination(54142U);
    msg.setDestinationEntity(220U);
    msg.value = 0.912490252558048;

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
    msg.setTimeStamp(0.3298911936487706);
    msg.setSource(60619U);
    msg.setSourceEntity(20U);
    msg.setDestination(13370U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3605531487251331;

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
    msg.setTimeStamp(0.3714901714501091);
    msg.setSource(24952U);
    msg.setSourceEntity(88U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(231U);
    msg.value = 0.8430566513205731;

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
    msg.setTimeStamp(0.5697629426881787);
    msg.setSource(18435U);
    msg.setSourceEntity(146U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7917247286502714;

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
    msg.setTimeStamp(0.35109383998681365);
    msg.setSource(50210U);
    msg.setSourceEntity(101U);
    msg.setDestination(63827U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8224054334222026;

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
    msg.setTimeStamp(0.9913685843128599);
    msg.setSource(33874U);
    msg.setSourceEntity(112U);
    msg.setDestination(25273U);
    msg.setDestinationEntity(6U);
    msg.value = 0.3141261328934891;

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
    msg.setTimeStamp(0.8882139683200417);
    msg.setSource(31196U);
    msg.setSourceEntity(170U);
    msg.setDestination(15449U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7283595681608762;

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
    msg.setTimeStamp(0.4323567142923168);
    msg.setSource(21595U);
    msg.setSourceEntity(173U);
    msg.setDestination(28380U);
    msg.setDestinationEntity(146U);
    msg.value = 0.03667739964334871;

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
    msg.setTimeStamp(0.880469153624611);
    msg.setSource(23707U);
    msg.setSourceEntity(181U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(94U);
    msg.id = 93U;
    msg.zoom = 26U;
    msg.action = 115U;

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
    msg.setTimeStamp(0.00823367167818756);
    msg.setSource(32581U);
    msg.setSourceEntity(160U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(203U);
    msg.id = 65U;
    msg.zoom = 199U;
    msg.action = 87U;

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
    msg.setTimeStamp(0.19524202610421038);
    msg.setSource(31998U);
    msg.setSourceEntity(81U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(119U);
    msg.id = 203U;
    msg.zoom = 143U;
    msg.action = 197U;

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
    msg.setTimeStamp(0.45411493675029657);
    msg.setSource(23278U);
    msg.setSourceEntity(204U);
    msg.setDestination(19883U);
    msg.setDestinationEntity(144U);
    msg.id = 99U;
    msg.value = 0.3581998534719095;

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
    msg.setTimeStamp(0.13665717019820967);
    msg.setSource(34179U);
    msg.setSourceEntity(94U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(174U);
    msg.id = 191U;
    msg.value = 0.541230715967207;

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
    msg.setTimeStamp(0.6982845038092913);
    msg.setSource(35176U);
    msg.setSourceEntity(147U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(139U);
    msg.id = 13U;
    msg.value = 0.12763865604464297;

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
    msg.setTimeStamp(0.6321252767866572);
    msg.setSource(63349U);
    msg.setSourceEntity(203U);
    msg.setDestination(47420U);
    msg.setDestinationEntity(233U);
    msg.id = 77U;
    msg.value = 0.7086149562813902;

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
    msg.setTimeStamp(0.09176841657907342);
    msg.setSource(13772U);
    msg.setSourceEntity(96U);
    msg.setDestination(44810U);
    msg.setDestinationEntity(249U);
    msg.id = 172U;
    msg.value = 0.3862673691063139;

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
    msg.setTimeStamp(0.5644098327262999);
    msg.setSource(40264U);
    msg.setSourceEntity(148U);
    msg.setDestination(54668U);
    msg.setDestinationEntity(120U);
    msg.id = 212U;
    msg.value = 0.571067944091723;

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
    msg.setTimeStamp(0.898393014522294);
    msg.setSource(40156U);
    msg.setSourceEntity(155U);
    msg.setDestination(10340U);
    msg.setDestinationEntity(161U);
    msg.id = 208U;
    msg.angle = 0.8729769036986216;

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
    msg.setTimeStamp(0.411725929059497);
    msg.setSource(25062U);
    msg.setSourceEntity(87U);
    msg.setDestination(1775U);
    msg.setDestinationEntity(222U);
    msg.id = 95U;
    msg.angle = 0.7892822723979258;

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
    msg.setTimeStamp(0.17851859368552025);
    msg.setSource(41211U);
    msg.setSourceEntity(246U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(177U);
    msg.id = 137U;
    msg.angle = 0.49311610973099473;

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
    msg.setTimeStamp(0.8813371690489581);
    msg.setSource(52085U);
    msg.setSourceEntity(142U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(141U);
    msg.op = 190U;
    msg.actions.assign("OVPPBCRRXKNSAOJKEFQKHBUJWAUAUSSFTQIRAUSHGFFHNQOMCICMPXUEUVNTQMPTZKDPWSNG");

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
    msg.setTimeStamp(0.282424547664496);
    msg.setSource(47147U);
    msg.setSourceEntity(147U);
    msg.setDestination(9265U);
    msg.setDestinationEntity(167U);
    msg.op = 224U;
    msg.actions.assign("EPWKJLKCOWHBXSEDGEAFLXIFONXOCEEBDKOTGSGYJEZFABROVOIZXMPQFMHWSWXIASPNOYYJBRDPOSXBSUZHYEQMVLGABCNFACVBQTUCCIQGTHBPUQRVXVLZTGZPPVDZTDHBYGCLIJUGJSYKNMIQNPYHGJSRWUIPQKEHXKWVKIPDLTAWWTRHZQMVGMJKWHMUKZMDUZVTARYQXXFIFJMHRFRLONSDYAKAM");

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
    msg.setTimeStamp(0.3020454154270664);
    msg.setSource(48921U);
    msg.setSourceEntity(97U);
    msg.setDestination(55951U);
    msg.setDestinationEntity(45U);
    msg.op = 221U;
    msg.actions.assign("GCMJBSBUIKVLOXKEJQZBAOMVVBNPGZFJUXRQIBVJITMUNHZCUCISVRQBHOOWGW");

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
    msg.setTimeStamp(0.2691349872112111);
    msg.setSource(7047U);
    msg.setSourceEntity(132U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(168U);
    msg.actions.assign("SYKDHWYPOVJHZXEQQUDMGWWWFNUJFBEIWHENZYPPKTMXTPNPZFTYQCJCANDZGAWOSTHOFGUILVGZIBLJXVNLYSGLTRMRBIJDACSGIXRABWRIQQQVPZVULGAESNEPKNZMOTKDYQMJIDGMUEVCMOHWUOIKJEQXPFMXXCFQBUCVYPDHIPZOAJOOMHBNXKOKEGYBJWDXY");

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
    msg.setTimeStamp(0.33382111876350873);
    msg.setSource(40326U);
    msg.setSourceEntity(35U);
    msg.setDestination(18587U);
    msg.setDestinationEntity(115U);
    msg.actions.assign("NKRLKXPTTYZOCLTIMUBQCNGJALBJCMTUGHTWVKMDFCMXQFBST");

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
    msg.setTimeStamp(0.20764990305009245);
    msg.setSource(29790U);
    msg.setSourceEntity(216U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(203U);
    msg.actions.assign("MNLAJCNCGFQCMITPJFBZLDBKUUKSQPQTTVDNUEHEHBUNARVJJKLNHSRFEHPSJMF");

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
    msg.setTimeStamp(0.7099830968657008);
    msg.setSource(24156U);
    msg.setSourceEntity(213U);
    msg.setDestination(6389U);
    msg.setDestinationEntity(156U);
    msg.button = 205U;
    msg.value = 240U;

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
    msg.setTimeStamp(0.11190936012894181);
    msg.setSource(53330U);
    msg.setSourceEntity(43U);
    msg.setDestination(63803U);
    msg.setDestinationEntity(65U);
    msg.button = 103U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.3721863424214973);
    msg.setSource(38616U);
    msg.setSourceEntity(23U);
    msg.setDestination(60902U);
    msg.setDestinationEntity(185U);
    msg.button = 111U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.3796257097418311);
    msg.setSource(3069U);
    msg.setSourceEntity(162U);
    msg.setDestination(51731U);
    msg.setDestinationEntity(246U);
    msg.op = 131U;
    msg.text.assign("ZCBKSGJHHPEZLKHIRELCOAVKRSRDTIVMYPZUMJIHIWECWFGOKUTLFIDUZMAYHGPVNFNUBAOEZMCWAQWVXTPFRRDBFSNMUELKQGQBXAHWDSASZOEDMGLIXKVOYGCPTHYVXDJLXWYPIEASCJUJQVSJBFLMAOGFQRJJEDFYINKRRUEXQZEXXWWFTZTSUUQY");

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
    msg.setTimeStamp(0.500550478139853);
    msg.setSource(43398U);
    msg.setSourceEntity(7U);
    msg.setDestination(16480U);
    msg.setDestinationEntity(15U);
    msg.op = 125U;
    msg.text.assign("NYDKTHAUWPYPOOOVEWEPNDUIEBWILMMMHHYCOUZNVQBJHTFPXOAXIWGNWRBSCWXOXQHKNQTLOHXIQKCUJAIGDMDZZPDBSLPMARFCRVKXFEGTWTYZVFQGYFIRTXYUDGNLKKRZJVMCCCWEDPLTTQCLGUFKNSABSKXYRFIWJIZLREBHEDHLJICNNYMMRZGHSPLPXVDGVTSU");

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
    msg.setTimeStamp(0.6482262261997548);
    msg.setSource(8807U);
    msg.setSourceEntity(15U);
    msg.setDestination(6805U);
    msg.setDestinationEntity(103U);
    msg.op = 206U;
    msg.text.assign("LLFPUORXOMFAYLJJSIURTWXKGHOAVSJDTOJHOWIVERGTKXMWUPETWXCVJITBEMQBBMTLGXDEPKBNCIZIWCZQXZXQMLZUNZKPOFSGFYTCOYWRGEFHFYBXEPCIUPDIUVRHZDJRMPESNUJABYIBHDDNQMHYEUCWSNAZYQCZLVAAOATHHCLBMYDKRJRKSDTVAGMGWSQWGDIAHPRYVENLKQSXQXEPKOTLLODUB");

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
    msg.setTimeStamp(0.8575062027219844);
    msg.setSource(14845U);
    msg.setSourceEntity(240U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(89U);
    msg.op = 75U;
    msg.time_remain = 0.31131611318811603;
    msg.sched_time = 0.9235208157659915;

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
    msg.setTimeStamp(0.3856934602371638);
    msg.setSource(9255U);
    msg.setSourceEntity(212U);
    msg.setDestination(42536U);
    msg.setDestinationEntity(65U);
    msg.op = 89U;
    msg.time_remain = 0.5267319353543766;
    msg.sched_time = 0.8338112695620145;

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
    msg.setTimeStamp(0.9973103105443001);
    msg.setSource(17213U);
    msg.setSourceEntity(245U);
    msg.setDestination(33896U);
    msg.setDestinationEntity(151U);
    msg.op = 107U;
    msg.time_remain = 0.1646781641069831;
    msg.sched_time = 0.5529659504077123;

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
    msg.setTimeStamp(0.6463851258597765);
    msg.setSource(29473U);
    msg.setSourceEntity(128U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(97U);
    msg.name.assign("RIOSQAYZORSWGBAHCKHOQKORNNLEZAXECRLZKDSETOCPIZAWVFLROYFZAZNFWEHGXKQRDBTXMHQ");
    msg.op = 148U;
    msg.sched_time = 0.503141467157074;

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
    msg.setTimeStamp(0.15161823939213426);
    msg.setSource(25560U);
    msg.setSourceEntity(66U);
    msg.setDestination(6611U);
    msg.setDestinationEntity(140U);
    msg.name.assign("CRBICFLWBGSBKLTBPQNHJPLXDATXVEKRZEGOSNJAHEQICLETSKHLMVJFFMVPTRRAPOYBYAGVOMRUXWSJHRFWCLUYHPENUEFWOWVEN");
    msg.op = 193U;
    msg.sched_time = 0.345550216798995;

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
    msg.setTimeStamp(0.13203047530465217);
    msg.setSource(64346U);
    msg.setSourceEntity(84U);
    msg.setDestination(14081U);
    msg.setDestinationEntity(29U);
    msg.name.assign("HWHVRNLNMNRADZUKMYKOJKTARDWVCQDYEKRSKOLXUZZQBTKVOYLIMOZCRPFDXCFHQRZQMEGVUCENSSELPMIJMOJUBNDOPQCHGXBBSKCIVLSUHSBHGKTDZFLCPEHCSLUMYCNQGIVIMFSAXGFEZUCVLXNOHYTVGOPPZHWAFMIJFPADUJBGEHDTVAWJXXTDXFJLJSIQRPNAWBZTBNRDABSYFXPGWWIJIJEIT");
    msg.op = 199U;
    msg.sched_time = 0.4753669220539788;

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
    msg.setTimeStamp(0.3197379222453849);
    msg.setSource(52929U);
    msg.setSourceEntity(254U);
    msg.setDestination(40486U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.056068764167518714);
    msg.setSource(45751U);
    msg.setSourceEntity(89U);
    msg.setDestination(41914U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.02013800526682563);
    msg.setSource(42221U);
    msg.setSourceEntity(250U);
    msg.setDestination(62857U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.7283255611774588);
    msg.setSource(15845U);
    msg.setSourceEntity(55U);
    msg.setDestination(51685U);
    msg.setDestinationEntity(35U);
    msg.name.assign("SLWSYAUWWXTOXHNOTPNTFSQQCQUADAJBQFRRNLFIIXGBZNAERCRUF");
    msg.state = 181U;

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
    msg.setTimeStamp(0.057948789173269954);
    msg.setSource(35444U);
    msg.setSourceEntity(9U);
    msg.setDestination(11777U);
    msg.setDestinationEntity(85U);
    msg.name.assign("MHUQGYWTSEBFPOQLZACTHXBSVMVHOIGAHONOKIDKEMHFUZAJSBCP");
    msg.state = 22U;

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
    msg.setTimeStamp(0.6578380939991008);
    msg.setSource(24214U);
    msg.setSourceEntity(237U);
    msg.setDestination(39780U);
    msg.setDestinationEntity(93U);
    msg.name.assign("NBYXXUCNTCDJPPQKXIQMVIKWJCKRUUTTLFSRGZWRIVJKUZ");
    msg.state = 41U;

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
    msg.setTimeStamp(0.8970765070142294);
    msg.setSource(20349U);
    msg.setSourceEntity(80U);
    msg.setDestination(15488U);
    msg.setDestinationEntity(68U);
    msg.name.assign("YJFEXWYMXAJNGMYDYURZWZYZHAPCNBEEJOVVILLXAOUVFGESKNCCDEGQPATGWDLALHVPIFLNJIJKSUCBTUVXEFEYJYDITSATNIIWNGHQXQCFNAKWKCMFQNVQJTWLKPWHMIESTRKDLKZQBZDAGHJLPQSYXLBUFBFZKXR");
    msg.value = 89U;

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
    msg.setTimeStamp(0.997935891567864);
    msg.setSource(31603U);
    msg.setSourceEntity(164U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(166U);
    msg.name.assign("ZFBCITSZQGPVZBUNMNIDGKRKKQUHRHJNXLUTXDWTYRZPXAEDCVMZMYYJGTUQQYLWCYORPCLAMOLOYXGJRISSOFXIFKXOUHGUZMAZIPBWOMJVTBPDHAQPONEHWGNILZGVSVSFJIUBWLURTSEFOSECMQFUWFKHFNJIAYVQVLPNABCFOMS");
    msg.value = 224U;

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
    msg.setTimeStamp(0.9848675276234631);
    msg.setSource(32363U);
    msg.setSourceEntity(251U);
    msg.setDestination(51622U);
    msg.setDestinationEntity(54U);
    msg.name.assign("JLHBKXCGWDPIDZDIZNCKNKECVQJYLKYJQPDEIUTNOJVEZUYDSCOYDAKMFUCATJHSUEBGIOHWLGWDNBAWRJJUGMPTGZOMAPSLLWFOQMVFHEKBTEBOEIICIGEATYISSBVVZSUVQWWFXDITAWWDAKLVBRCAEAFRNNXSTPOUZTFKRSQZVMMHYYCWRNYJXHCQPYXIUNBOFPPSODNQCBPTLRFKGUHXZREQHSXLQGVLYBFAZKUGPRRGNMXOHFVQX");
    msg.value = 223U;

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
    msg.setTimeStamp(0.41739613899423444);
    msg.setSource(6706U);
    msg.setSourceEntity(149U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(96U);
    msg.name.assign("PMCXLDIODUPTUAAQHHEAVCFGTUNLHBURZQWGQHDBETGBXELICKKIGNSHLNPQFMBNMOLTMFWIFUGKFOKHKZDVXYEVSLBIPZJYCJCGFAIYEDCZGRZJVTCYYMMATLRYVRQBSPYVREUZBOFQPSGWJTTVSRZXJRLWVHAKCBOJQMTGSMEWFKBWXJXLDNQSPOKXNOLANSDISUMCWBIWNODJP");

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
    msg.setTimeStamp(0.08645752065897461);
    msg.setSource(34920U);
    msg.setSourceEntity(161U);
    msg.setDestination(9138U);
    msg.setDestinationEntity(133U);
    msg.name.assign("JNXABDVLATSGHVQNLJLRCN");

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
    msg.setTimeStamp(0.7288139828085547);
    msg.setSource(51118U);
    msg.setSourceEntity(50U);
    msg.setDestination(55470U);
    msg.setDestinationEntity(242U);
    msg.name.assign("JHOYOKXPTWJKYGLDFSILGOPWQTZFIPDEYEJTEZTDPWVHABZOYWJHDMUIVOMWKSATUQJHUIBONOEVAVUUQFHFRTYTQGBUQFHVBBSONFEXAWIEMGANPLWTYEIZKUZRKVYMZRRDCBSIAQACGSGAXGCRQDRDBBHCCCTMPPLBIUIMDTBZJDFOFAGNPQXEYLHZZCNRLQIXEWDSRKASRL");

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
    msg.setTimeStamp(0.5594014344427515);
    msg.setSource(60951U);
    msg.setSourceEntity(123U);
    msg.setDestination(9330U);
    msg.setDestinationEntity(251U);
    msg.name.assign("XSHDOVOTIUTLLYAGTQTMRXHFEHHNEROZOUGFVJC");
    msg.value = 245U;

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
    msg.setTimeStamp(0.39977065252289556);
    msg.setSource(8726U);
    msg.setSourceEntity(190U);
    msg.setDestination(2722U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KINJEBKLWUZDMFUWCNYIPFLXKPBZZAGRTWOBTRI");
    msg.value = 175U;

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
    msg.setTimeStamp(0.09942695210984942);
    msg.setSource(27286U);
    msg.setSourceEntity(126U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(196U);
    msg.name.assign("KZKHDETYGJBGNYHWSPKHMJRBXKZGTZGQTOCARKWSBGJBKZYXRZYZXNLMYACCIDTUSKWVODBBOUXWXUPMCEVEAQMHUSIABBVTHKWXBRKPRPCLODCCNUJXFUMNAFUMMGJQFODFQYVYIPEIMHGFMVHTURRJPQJNLWSJGQAV");
    msg.value = 169U;

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
    msg.setTimeStamp(0.46360704484183457);
    msg.setSource(52062U);
    msg.setSourceEntity(51U);
    msg.setDestination(40966U);
    msg.setDestinationEntity(182U);
    msg.id = 150U;
    msg.period = 1662881760U;
    msg.duty_cycle = 2053531307U;

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
    msg.setTimeStamp(0.9054344521133773);
    msg.setSource(63858U);
    msg.setSourceEntity(144U);
    msg.setDestination(31427U);
    msg.setDestinationEntity(180U);
    msg.id = 230U;
    msg.period = 647880905U;
    msg.duty_cycle = 2377861953U;

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
    msg.setTimeStamp(0.736599684214395);
    msg.setSource(36248U);
    msg.setSourceEntity(16U);
    msg.setDestination(327U);
    msg.setDestinationEntity(54U);
    msg.id = 214U;
    msg.period = 288323028U;
    msg.duty_cycle = 1950208199U;

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
    msg.setTimeStamp(0.9219961464484039);
    msg.setSource(55392U);
    msg.setSourceEntity(107U);
    msg.setDestination(41569U);
    msg.setDestinationEntity(193U);
    msg.id = 42U;
    msg.period = 1865711784U;
    msg.duty_cycle = 623984866U;

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
    msg.setTimeStamp(0.409025622470527);
    msg.setSource(26931U);
    msg.setSourceEntity(202U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(110U);
    msg.id = 26U;
    msg.period = 3744868535U;
    msg.duty_cycle = 4292455049U;

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
    msg.setTimeStamp(0.202372607544679);
    msg.setSource(57252U);
    msg.setSourceEntity(185U);
    msg.setDestination(49743U);
    msg.setDestinationEntity(94U);
    msg.id = 240U;
    msg.period = 967473850U;
    msg.duty_cycle = 153014641U;

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
    msg.setTimeStamp(0.8671448149234453);
    msg.setSource(112U);
    msg.setSourceEntity(251U);
    msg.setDestination(6483U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.4879506064127076;
    msg.lon = 0.8896599907838718;
    msg.height = 0.9248042777623466;
    msg.x = 0.48446017968757205;
    msg.y = 0.641746928461601;
    msg.z = 0.4747173954996958;
    msg.phi = 0.9685800369722459;
    msg.theta = 0.2899172084151397;
    msg.psi = 0.9219113362589421;
    msg.u = 0.8557327099172314;
    msg.v = 0.27808677502390655;
    msg.w = 0.0004663207539566949;
    msg.vx = 0.5330421216447394;
    msg.vy = 0.6115380733893319;
    msg.vz = 0.1680471193511942;
    msg.p = 0.2053416913735191;
    msg.q = 0.3202988646240562;
    msg.r = 0.10963391745515283;
    msg.depth = 0.6517905965307923;
    msg.alt = 0.02089529872426832;

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
    msg.setTimeStamp(0.3770635204985283);
    msg.setSource(56155U);
    msg.setSourceEntity(37U);
    msg.setDestination(3101U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.08551378909150753;
    msg.lon = 0.3399824249440182;
    msg.height = 0.6404485830100968;
    msg.x = 0.19916717270917617;
    msg.y = 0.19919291837444264;
    msg.z = 0.15176431815532987;
    msg.phi = 0.15313496368033885;
    msg.theta = 0.3856754146759507;
    msg.psi = 0.29268698830885875;
    msg.u = 0.575906381538493;
    msg.v = 0.7789549641483249;
    msg.w = 0.8900068244009066;
    msg.vx = 0.07928133436226359;
    msg.vy = 0.9882453465771067;
    msg.vz = 0.9601198467337249;
    msg.p = 0.3966126663993106;
    msg.q = 0.8557381738380218;
    msg.r = 0.6304765172591313;
    msg.depth = 0.6628001709290681;
    msg.alt = 0.3503446525405113;

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
    msg.setTimeStamp(0.09207772934927982);
    msg.setSource(18456U);
    msg.setSourceEntity(221U);
    msg.setDestination(8293U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.06415214993195828;
    msg.lon = 0.4330129706206114;
    msg.height = 0.22906555590156585;
    msg.x = 0.22495946583142412;
    msg.y = 0.6070255084789977;
    msg.z = 0.9669114219665581;
    msg.phi = 0.3427111967136144;
    msg.theta = 0.4139952668530371;
    msg.psi = 0.5935871502081674;
    msg.u = 0.2488245010633341;
    msg.v = 0.1461169271555487;
    msg.w = 0.977821436327569;
    msg.vx = 0.8770115506820428;
    msg.vy = 0.5954870763207116;
    msg.vz = 0.6103960394928094;
    msg.p = 0.7319548950343086;
    msg.q = 0.49414508379443955;
    msg.r = 0.665474678294937;
    msg.depth = 0.3221544960387934;
    msg.alt = 0.8367725423286385;

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
    msg.setTimeStamp(0.1844116766977978);
    msg.setSource(61903U);
    msg.setSourceEntity(113U);
    msg.setDestination(4456U);
    msg.setDestinationEntity(15U);
    msg.x = 0.36067107385571406;
    msg.y = 0.399664103589665;
    msg.z = 0.06659355702923075;

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
    msg.setTimeStamp(0.13129168572345484);
    msg.setSource(25282U);
    msg.setSourceEntity(251U);
    msg.setDestination(46151U);
    msg.setDestinationEntity(84U);
    msg.x = 0.14125434357337996;
    msg.y = 0.9472723410755037;
    msg.z = 0.15581982391238236;

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
    msg.setTimeStamp(0.9418700355922363);
    msg.setSource(9514U);
    msg.setSourceEntity(226U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(91U);
    msg.x = 0.06815458523858753;
    msg.y = 0.3665662171766836;
    msg.z = 0.9666971647733746;

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
    msg.setTimeStamp(0.8312923750924529);
    msg.setSource(58708U);
    msg.setSourceEntity(227U);
    msg.setDestination(40188U);
    msg.setDestinationEntity(73U);
    msg.value = 0.7325234430527638;

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
    msg.setTimeStamp(0.25552874223204225);
    msg.setSource(22525U);
    msg.setSourceEntity(163U);
    msg.setDestination(58959U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6924433496219479;

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
    msg.setTimeStamp(0.8306606783246778);
    msg.setSource(12681U);
    msg.setSourceEntity(58U);
    msg.setDestination(175U);
    msg.setDestinationEntity(248U);
    msg.value = 0.8152925474789502;

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
    msg.setTimeStamp(0.7215022014260005);
    msg.setSource(55401U);
    msg.setSourceEntity(204U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(109U);
    msg.value = 0.254156248038202;

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
    msg.setTimeStamp(0.4026712570534974);
    msg.setSource(33663U);
    msg.setSourceEntity(102U);
    msg.setDestination(2803U);
    msg.setDestinationEntity(22U);
    msg.value = 0.09007996835255194;

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
    msg.setTimeStamp(0.9756626514981601);
    msg.setSource(64784U);
    msg.setSourceEntity(21U);
    msg.setDestination(13596U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8584849626024631;

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
    msg.setTimeStamp(0.20946356631777907);
    msg.setSource(10322U);
    msg.setSourceEntity(168U);
    msg.setDestination(18915U);
    msg.setDestinationEntity(148U);
    msg.x = 0.3635542389476273;
    msg.y = 0.682049280797622;
    msg.z = 0.30111136851176445;
    msg.phi = 0.09884635258181307;
    msg.theta = 0.4572367755703728;
    msg.psi = 0.20233603235848963;
    msg.p = 0.8049083276736475;
    msg.q = 0.3337899677782866;
    msg.r = 0.5459290160996544;
    msg.u = 0.9141947312603995;
    msg.v = 0.3588971633699857;
    msg.w = 0.9032875834904678;
    msg.bias_psi = 0.16385283583436372;
    msg.bias_r = 0.14310411106399712;

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
    msg.setTimeStamp(0.2533387562756704);
    msg.setSource(49677U);
    msg.setSourceEntity(18U);
    msg.setDestination(52336U);
    msg.setDestinationEntity(13U);
    msg.x = 0.6417089483534902;
    msg.y = 0.33130703693199015;
    msg.z = 0.5198892767522224;
    msg.phi = 0.026584161857472588;
    msg.theta = 0.3805871689729772;
    msg.psi = 0.08966351541354467;
    msg.p = 0.11893409523950305;
    msg.q = 0.28077076340485874;
    msg.r = 0.5436993307067634;
    msg.u = 0.08059693039472382;
    msg.v = 0.08895487173993744;
    msg.w = 0.6596169126500965;
    msg.bias_psi = 0.5127321622666461;
    msg.bias_r = 0.091746061450653;

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
    msg.setTimeStamp(0.2481829419502426);
    msg.setSource(54876U);
    msg.setSourceEntity(7U);
    msg.setDestination(38305U);
    msg.setDestinationEntity(113U);
    msg.x = 0.44239463199508566;
    msg.y = 0.8745733992088379;
    msg.z = 0.8044151916211973;
    msg.phi = 0.7864508231083036;
    msg.theta = 0.9745235706761464;
    msg.psi = 0.06679879467491456;
    msg.p = 0.652418746698486;
    msg.q = 0.32169579608377885;
    msg.r = 0.8003358207967496;
    msg.u = 0.6868618783630768;
    msg.v = 0.5215626175614456;
    msg.w = 0.46431287867403914;
    msg.bias_psi = 0.49730688254746425;
    msg.bias_r = 0.2150616904362831;

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
    msg.setTimeStamp(0.8204128925642521);
    msg.setSource(23491U);
    msg.setSourceEntity(203U);
    msg.setDestination(63872U);
    msg.setDestinationEntity(65U);
    msg.bias_psi = 0.10616244705288802;
    msg.bias_r = 0.5770076515451081;
    msg.cog = 0.2122268175878511;
    msg.cyaw = 0.95125151467479;
    msg.lbl_rej_level = 0.33877516595342927;
    msg.gps_rej_level = 0.7027301187266891;
    msg.custom_x = 0.7859296126780619;
    msg.custom_y = 0.8167986385518107;
    msg.custom_z = 0.5149581650013623;

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
    msg.setTimeStamp(0.6003340893680373);
    msg.setSource(29475U);
    msg.setSourceEntity(194U);
    msg.setDestination(55871U);
    msg.setDestinationEntity(88U);
    msg.bias_psi = 0.6682619206049756;
    msg.bias_r = 0.3112420431097279;
    msg.cog = 0.32313475311326323;
    msg.cyaw = 0.700531997467593;
    msg.lbl_rej_level = 0.9543252223362334;
    msg.gps_rej_level = 0.976202562552545;
    msg.custom_x = 0.06703777164735525;
    msg.custom_y = 0.9279347665062135;
    msg.custom_z = 0.29136693542691094;

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
    msg.setTimeStamp(0.15790897039841867);
    msg.setSource(11878U);
    msg.setSourceEntity(71U);
    msg.setDestination(743U);
    msg.setDestinationEntity(148U);
    msg.bias_psi = 0.27709455264489125;
    msg.bias_r = 0.8037769585868948;
    msg.cog = 0.882524833596533;
    msg.cyaw = 0.7281526248854273;
    msg.lbl_rej_level = 0.3427419874715182;
    msg.gps_rej_level = 0.10308686392332078;
    msg.custom_x = 0.25217393161079926;
    msg.custom_y = 0.29439222010128674;
    msg.custom_z = 0.7469750580035178;

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
    msg.setTimeStamp(0.782357057860815);
    msg.setSource(63773U);
    msg.setSourceEntity(169U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.7657294244756011;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.09255873356282229);
    msg.setSource(23516U);
    msg.setSourceEntity(135U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(93U);
    msg.utc_time = 0.3642001376142575;
    msg.reason = 50U;

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
    msg.setTimeStamp(0.8928468315099252);
    msg.setSource(25613U);
    msg.setSourceEntity(229U);
    msg.setDestination(17258U);
    msg.setDestinationEntity(243U);
    msg.utc_time = 0.20564753404985026;
    msg.reason = 74U;

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
    msg.setTimeStamp(0.14233788182148632);
    msg.setSource(10722U);
    msg.setSourceEntity(94U);
    msg.setDestination(46079U);
    msg.setDestinationEntity(238U);
    msg.id = 28U;
    msg.range = 0.17503808345623206;
    msg.acceptance = 121U;

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
    msg.setTimeStamp(0.04084793614371218);
    msg.setSource(21184U);
    msg.setSourceEntity(171U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(148U);
    msg.id = 190U;
    msg.range = 0.23709800272819082;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.5142008082421288);
    msg.setSource(26532U);
    msg.setSourceEntity(228U);
    msg.setDestination(7775U);
    msg.setDestinationEntity(240U);
    msg.id = 32U;
    msg.range = 0.21190830102094294;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.5076038783002079);
    msg.setSource(19055U);
    msg.setSourceEntity(28U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(38U);
    msg.type = 106U;
    msg.reason = 40U;
    msg.value = 0.7092057497728168;
    msg.timestep = 0.8712674828600857;

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
    msg.setTimeStamp(0.04853269462756904);
    msg.setSource(5619U);
    msg.setSourceEntity(135U);
    msg.setDestination(37417U);
    msg.setDestinationEntity(143U);
    msg.type = 109U;
    msg.reason = 83U;
    msg.value = 0.39115400675092193;
    msg.timestep = 0.21647995241086704;

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
    msg.setTimeStamp(0.8805995237779959);
    msg.setSource(27025U);
    msg.setSourceEntity(107U);
    msg.setDestination(4532U);
    msg.setDestinationEntity(65U);
    msg.type = 244U;
    msg.reason = 143U;
    msg.value = 0.6051325842073795;
    msg.timestep = 0.2915848315645885;

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
    msg.setTimeStamp(0.6603032441336267);
    msg.setSource(51929U);
    msg.setSourceEntity(41U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(53U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QXVIOGRCXSTTKZUUKPMJWELOFOOQMGPCIVYPYCDHSNSNBWVBPFGRD");
    tmp_msg_0.lat = 0.11336165759170702;
    tmp_msg_0.lon = 0.08345608988764086;
    tmp_msg_0.depth = 0.008027578134838786;
    tmp_msg_0.query_channel = 118U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 23U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.49545216768348943;
    msg.y = 0.5596784345657217;
    msg.var_x = 0.7394817343293885;
    msg.var_y = 0.9080146273124994;
    msg.distance = 0.22051167180632059;

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
    msg.setTimeStamp(0.05385503185880214);
    msg.setSource(37009U);
    msg.setSourceEntity(183U);
    msg.setDestination(37754U);
    msg.setDestinationEntity(202U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TWVZJCRLFUORLGDFDDOWITZMUKFOEABZNVZYQXILXBYYJWRUFXSIVJMLDQXLMPMVOUSRKZWKAPNDROXVQGTEWPZSPMYISMJZAGOXQVXGQPDCFOWSYVDCJYEHBXRLJBQKLLBZNFBEECYKHEJMGUGUAZTBKA");
    tmp_msg_0.lat = 0.6863927624111974;
    tmp_msg_0.lon = 0.513470280727702;
    tmp_msg_0.depth = 0.8418731905032045;
    tmp_msg_0.query_channel = 154U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 164U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18659688449881928;
    msg.y = 0.1909049188339853;
    msg.var_x = 0.3888186766101115;
    msg.var_y = 0.4591851388320498;
    msg.distance = 0.05231419422243322;

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
    msg.setTimeStamp(0.539239846585673);
    msg.setSource(19388U);
    msg.setSourceEntity(213U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(200U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AHXRCSERIMRBHWPLBGVFXZPGNACBGLPGVLBOGHECOVNSCXILMTTUDXXNTXAVYCCJOHOVOLSUQLHFODRBTDUFBDMUFIOUULKSLCAZGEYEQEZNQWXVKHNDAQIJEBPAEKEMBRL");
    tmp_msg_0.lat = 0.47991622710885695;
    tmp_msg_0.lon = 0.17857397848718948;
    tmp_msg_0.depth = 0.05815716052254716;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 49U;
    tmp_msg_0.transponder_delay = 210U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5622988820735046;
    msg.y = 0.8770749973098958;
    msg.var_x = 0.18050375643464878;
    msg.var_y = 0.7024076600525138;
    msg.distance = 0.5364308442337579;

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
    msg.setTimeStamp(0.9915006806406429);
    msg.setSource(2401U);
    msg.setSourceEntity(40U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(160U);
    msg.state = 57U;

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
    msg.setTimeStamp(0.768602693183655);
    msg.setSource(50880U);
    msg.setSourceEntity(52U);
    msg.setDestination(50422U);
    msg.setDestinationEntity(245U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.06268730953640744);
    msg.setSource(34319U);
    msg.setSourceEntity(183U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(211U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.11839778041601323);
    msg.setSource(20105U);
    msg.setSourceEntity(223U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(73U);
    msg.x = 0.24176351772906735;
    msg.y = 0.6754632328798;
    msg.z = 0.9590958131191032;

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
    msg.setTimeStamp(0.5576425467695121);
    msg.setSource(54668U);
    msg.setSourceEntity(10U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(152U);
    msg.x = 0.6545815382136813;
    msg.y = 0.7808965983919343;
    msg.z = 0.9187151403078834;

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
    msg.setTimeStamp(0.22066678589368516);
    msg.setSource(59693U);
    msg.setSourceEntity(235U);
    msg.setDestination(52064U);
    msg.setDestinationEntity(40U);
    msg.x = 0.6367871655675053;
    msg.y = 0.2293423677406028;
    msg.z = 0.6667272132375599;

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
    msg.setTimeStamp(0.8537882728213193);
    msg.setSource(11882U);
    msg.setSourceEntity(164U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(64U);
    msg.va = 0.9137707779496383;
    msg.aoa = 0.7596064344018914;
    msg.ssa = 0.2484424091680134;

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
    msg.setTimeStamp(0.7754210542382922);
    msg.setSource(1664U);
    msg.setSourceEntity(28U);
    msg.setDestination(41965U);
    msg.setDestinationEntity(65U);
    msg.va = 0.7666709944705653;
    msg.aoa = 0.49241718976932247;
    msg.ssa = 0.990453862076244;

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
    msg.setTimeStamp(0.2608567949213336);
    msg.setSource(28489U);
    msg.setSourceEntity(187U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(230U);
    msg.va = 0.4577885742767498;
    msg.aoa = 0.5315993189295368;
    msg.ssa = 0.41564414630761326;

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
    msg.setTimeStamp(0.032395857210614);
    msg.setSource(63480U);
    msg.setSourceEntity(191U);
    msg.setDestination(48061U);
    msg.setDestinationEntity(128U);
    msg.value = 0.7333850592522636;

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
    msg.setTimeStamp(0.09741185513885431);
    msg.setSource(64022U);
    msg.setSourceEntity(187U);
    msg.setDestination(43914U);
    msg.setDestinationEntity(6U);
    msg.value = 0.7012457160075664;

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
    msg.setTimeStamp(0.9781256464527553);
    msg.setSource(5148U);
    msg.setSourceEntity(223U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(232U);
    msg.value = 0.6509673658543224;

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
    msg.setTimeStamp(0.4351963820431032);
    msg.setSource(40315U);
    msg.setSourceEntity(95U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(221U);
    msg.value = 0.08685047401411417;
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
    msg.setTimeStamp(0.9562494495252705);
    msg.setSource(52700U);
    msg.setSourceEntity(99U);
    msg.setDestination(39423U);
    msg.setDestinationEntity(35U);
    msg.value = 0.4001325467431446;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.41714036895480744);
    msg.setSource(36688U);
    msg.setSourceEntity(196U);
    msg.setDestination(48368U);
    msg.setDestinationEntity(40U);
    msg.value = 0.28532816153352614;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.6049257459165579);
    msg.setSource(13729U);
    msg.setSourceEntity(152U);
    msg.setDestination(51153U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6005619870991472;
    msg.speed_units = 253U;

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
    msg.setTimeStamp(0.9739857433556195);
    msg.setSource(55490U);
    msg.setSourceEntity(132U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(79U);
    msg.value = 0.38436436239840654;
    msg.speed_units = 109U;

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
    msg.setTimeStamp(0.15001315864480846);
    msg.setSource(60836U);
    msg.setSourceEntity(58U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9929061858081246;
    msg.speed_units = 33U;

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
    msg.setTimeStamp(0.6799595229534242);
    msg.setSource(49471U);
    msg.setSourceEntity(244U);
    msg.setDestination(14898U);
    msg.setDestinationEntity(69U);
    msg.value = 0.06369649814283274;

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
    msg.setTimeStamp(0.07702756937264221);
    msg.setSource(8703U);
    msg.setSourceEntity(218U);
    msg.setDestination(5380U);
    msg.setDestinationEntity(79U);
    msg.value = 0.07370181691686406;

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
    msg.setTimeStamp(0.24457352144686417);
    msg.setSource(49845U);
    msg.setSourceEntity(208U);
    msg.setDestination(17925U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8360434696899115;

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
    msg.setTimeStamp(0.9912318638063352);
    msg.setSource(59024U);
    msg.setSourceEntity(197U);
    msg.setDestination(33936U);
    msg.setDestinationEntity(249U);
    msg.value = 0.477418221308591;

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
    msg.setTimeStamp(0.7705113179844464);
    msg.setSource(2182U);
    msg.setSourceEntity(97U);
    msg.setDestination(59694U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9159420209136715;

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
    msg.setTimeStamp(0.5687907977475077);
    msg.setSource(37499U);
    msg.setSourceEntity(109U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9543277420712971;

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
    msg.setTimeStamp(0.5949890079807266);
    msg.setSource(17405U);
    msg.setSourceEntity(238U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9449104924170275;

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
    msg.setTimeStamp(0.012950455811538308);
    msg.setSource(5865U);
    msg.setSourceEntity(49U);
    msg.setDestination(13762U);
    msg.setDestinationEntity(146U);
    msg.value = 0.7576361418828917;

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
    msg.setTimeStamp(0.5827354805476421);
    msg.setSource(28008U);
    msg.setSourceEntity(113U);
    msg.setDestination(27608U);
    msg.setDestinationEntity(165U);
    msg.value = 0.009135894249798215;

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
    msg.setTimeStamp(0.7882798793010504);
    msg.setSource(39167U);
    msg.setSourceEntity(63U);
    msg.setDestination(33378U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 77078075U;
    msg.start_lat = 0.6626997883532795;
    msg.start_lon = 0.09232853025995902;
    msg.start_z = 0.046556571673665115;
    msg.start_z_units = 64U;
    msg.end_lat = 0.16362030168077446;
    msg.end_lon = 0.9523038851045992;
    msg.end_z = 0.15293836519187498;
    msg.end_z_units = 253U;
    msg.speed = 0.41739278383652434;
    msg.speed_units = 76U;
    msg.lradius = 0.5867503533427164;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.6453639865228369);
    msg.setSource(62607U);
    msg.setSourceEntity(162U);
    msg.setDestination(62023U);
    msg.setDestinationEntity(203U);
    msg.path_ref = 1687585716U;
    msg.start_lat = 0.12592931529790108;
    msg.start_lon = 0.8517023548758599;
    msg.start_z = 0.8396549569706551;
    msg.start_z_units = 102U;
    msg.end_lat = 0.5503224216439774;
    msg.end_lon = 0.024179863927402012;
    msg.end_z = 0.7633724794799659;
    msg.end_z_units = 150U;
    msg.speed = 0.5894539733342465;
    msg.speed_units = 227U;
    msg.lradius = 0.13349514763739245;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.09190322612514035);
    msg.setSource(23589U);
    msg.setSourceEntity(209U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(207U);
    msg.path_ref = 2234200057U;
    msg.start_lat = 0.20677023514406478;
    msg.start_lon = 0.24814679184620725;
    msg.start_z = 0.006929247665205307;
    msg.start_z_units = 46U;
    msg.end_lat = 0.7058129813129758;
    msg.end_lon = 0.8524727709461747;
    msg.end_z = 0.6793615035140992;
    msg.end_z_units = 164U;
    msg.speed = 0.7008845657689755;
    msg.speed_units = 245U;
    msg.lradius = 0.6903557922559269;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.7582001393023095);
    msg.setSource(35643U);
    msg.setSourceEntity(105U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(84U);
    msg.x = 0.659376978601815;
    msg.y = 0.46960456945663787;
    msg.z = 0.6117320945938869;
    msg.k = 0.022505082203501336;
    msg.m = 0.42401107395119475;
    msg.n = 0.8475276272736973;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.1980867508865879);
    msg.setSource(61039U);
    msg.setSourceEntity(222U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(141U);
    msg.x = 0.5679273841740824;
    msg.y = 0.7881687603005918;
    msg.z = 0.9525327212687137;
    msg.k = 0.5735775726357935;
    msg.m = 0.6221134188641417;
    msg.n = 0.5942213832070484;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.9702565049549657);
    msg.setSource(50661U);
    msg.setSourceEntity(112U);
    msg.setDestination(23763U);
    msg.setDestinationEntity(47U);
    msg.x = 0.23645645591505193;
    msg.y = 0.47185401275907246;
    msg.z = 0.3920401011155886;
    msg.k = 0.9499775903485317;
    msg.m = 0.3770274211283213;
    msg.n = 0.5717673821680596;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.8145451266994981);
    msg.setSource(12968U);
    msg.setSourceEntity(41U);
    msg.setDestination(34128U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7521700522091188;

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
    msg.setTimeStamp(0.4059764052794026);
    msg.setSource(25709U);
    msg.setSourceEntity(7U);
    msg.setDestination(20418U);
    msg.setDestinationEntity(59U);
    msg.value = 0.686800441407488;

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
    msg.setTimeStamp(0.6663682127080743);
    msg.setSource(24399U);
    msg.setSourceEntity(34U);
    msg.setDestination(57521U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7266695087749702;

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
    msg.setTimeStamp(0.01769791578769775);
    msg.setSource(17175U);
    msg.setSourceEntity(105U);
    msg.setDestination(41641U);
    msg.setDestinationEntity(185U);
    msg.u = 0.7484449462641006;
    msg.v = 0.44058145383269187;
    msg.w = 0.9615344324370296;
    msg.p = 0.48705587115132043;
    msg.q = 0.614320203937824;
    msg.r = 0.21583099129058814;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.9658516116254506);
    msg.setSource(52597U);
    msg.setSourceEntity(70U);
    msg.setDestination(36072U);
    msg.setDestinationEntity(13U);
    msg.u = 0.17226900365559017;
    msg.v = 0.18643964771681787;
    msg.w = 0.222798112720758;
    msg.p = 0.47416504270745896;
    msg.q = 0.3546275032512388;
    msg.r = 0.75547084288867;
    msg.flags = 240U;

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
    msg.setTimeStamp(0.7651784317806417);
    msg.setSource(51491U);
    msg.setSourceEntity(70U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(242U);
    msg.u = 0.05885512225107947;
    msg.v = 0.1451706577323698;
    msg.w = 0.6723598337556895;
    msg.p = 0.7331414122255703;
    msg.q = 0.8726008119222334;
    msg.r = 0.6783065595882678;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.4572518141408922);
    msg.setSource(1788U);
    msg.setSourceEntity(237U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 2238017030U;
    msg.start_lat = 0.6095500485569569;
    msg.start_lon = 0.9298365797822911;
    msg.start_z = 0.7712293238984406;
    msg.start_z_units = 33U;
    msg.end_lat = 0.6232884810822249;
    msg.end_lon = 0.41569234881219896;
    msg.end_z = 0.9514890122832952;
    msg.end_z_units = 87U;
    msg.lradius = 0.6074523690247807;
    msg.flags = 95U;
    msg.x = 0.9652217633519952;
    msg.y = 0.8734568699002399;
    msg.z = 0.3067573382848183;
    msg.vx = 0.03144522975587605;
    msg.vy = 0.6812153405079646;
    msg.vz = 0.27839792298275545;
    msg.course_error = 0.35563537577680837;
    msg.eta = 28595U;

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
    msg.setTimeStamp(0.9936588515619554);
    msg.setSource(51822U);
    msg.setSourceEntity(232U);
    msg.setDestination(36879U);
    msg.setDestinationEntity(108U);
    msg.path_ref = 3963816700U;
    msg.start_lat = 0.9867359366196539;
    msg.start_lon = 0.8929882392533898;
    msg.start_z = 0.25306355140190007;
    msg.start_z_units = 36U;
    msg.end_lat = 0.06330578444826973;
    msg.end_lon = 0.5466143297189381;
    msg.end_z = 0.6142901806116235;
    msg.end_z_units = 62U;
    msg.lradius = 0.1035338111625792;
    msg.flags = 220U;
    msg.x = 0.5099393819828307;
    msg.y = 0.6381189005191716;
    msg.z = 0.1679616295395684;
    msg.vx = 0.26119567728969795;
    msg.vy = 0.6724998056721259;
    msg.vz = 0.8616953496934773;
    msg.course_error = 0.38082878235759743;
    msg.eta = 25645U;

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
    msg.setTimeStamp(0.6132664343727188);
    msg.setSource(30047U);
    msg.setSourceEntity(183U);
    msg.setDestination(1185U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 2921796211U;
    msg.start_lat = 0.2228498332365122;
    msg.start_lon = 0.30724940401139134;
    msg.start_z = 0.6122484369090404;
    msg.start_z_units = 187U;
    msg.end_lat = 0.3408306403257122;
    msg.end_lon = 0.4130183201389529;
    msg.end_z = 0.101689179148859;
    msg.end_z_units = 172U;
    msg.lradius = 0.35404599770934864;
    msg.flags = 29U;
    msg.x = 0.4980657078651103;
    msg.y = 0.23398333754248724;
    msg.z = 0.9018214821204004;
    msg.vx = 0.6065611005339047;
    msg.vy = 0.663757364549746;
    msg.vz = 0.564396719844358;
    msg.course_error = 0.0052745322632312686;
    msg.eta = 56783U;

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
    msg.setTimeStamp(0.5130493576927307);
    msg.setSource(53868U);
    msg.setSourceEntity(189U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(34U);
    msg.k = 0.07638593674008709;
    msg.m = 0.3155962325485304;
    msg.n = 0.9831222497997396;

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
    msg.setTimeStamp(0.9970532878907488);
    msg.setSource(53117U);
    msg.setSourceEntity(253U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(125U);
    msg.k = 0.186787801553701;
    msg.m = 0.49427701711098426;
    msg.n = 0.5183807666185313;

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
    msg.setTimeStamp(0.3887211602921813);
    msg.setSource(7920U);
    msg.setSourceEntity(138U);
    msg.setDestination(60556U);
    msg.setDestinationEntity(143U);
    msg.k = 0.09692802760762143;
    msg.m = 0.17984737923458805;
    msg.n = 0.9720424874301916;

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
    msg.setTimeStamp(0.7685738049277451);
    msg.setSource(17711U);
    msg.setSourceEntity(239U);
    msg.setDestination(53532U);
    msg.setDestinationEntity(118U);
    msg.p = 0.38479437935160454;
    msg.i = 0.6722505802286597;
    msg.d = 0.31899885004710604;
    msg.a = 0.14263383035728794;

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
    msg.setTimeStamp(0.02148874287445146);
    msg.setSource(22594U);
    msg.setSourceEntity(149U);
    msg.setDestination(51397U);
    msg.setDestinationEntity(76U);
    msg.p = 0.16831746636209488;
    msg.i = 0.662300545622404;
    msg.d = 0.20259599636942682;
    msg.a = 0.6482161663891336;

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
    msg.setTimeStamp(0.04114406779850366);
    msg.setSource(47370U);
    msg.setSourceEntity(121U);
    msg.setDestination(56666U);
    msg.setDestinationEntity(65U);
    msg.p = 0.8683475159506225;
    msg.i = 0.8515062784578342;
    msg.d = 0.7898998156336724;
    msg.a = 0.5075649299075486;

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
    msg.setTimeStamp(0.32898194829158567);
    msg.setSource(34372U);
    msg.setSourceEntity(192U);
    msg.setDestination(52195U);
    msg.setDestinationEntity(150U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.26440446831890474);
    msg.setSource(64904U);
    msg.setSourceEntity(129U);
    msg.setDestination(50249U);
    msg.setDestinationEntity(40U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.8338379513776459);
    msg.setSource(52695U);
    msg.setSourceEntity(38U);
    msg.setDestination(15446U);
    msg.setDestinationEntity(239U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.8775442158569539);
    msg.setSource(55227U);
    msg.setSourceEntity(133U);
    msg.setDestination(64524U);
    msg.setDestinationEntity(212U);
    msg.x = 0.46003110418681026;
    msg.y = 0.6543384432343501;
    msg.z = 0.5199904903276963;
    msg.vx = 0.17095067830049127;
    msg.vy = 0.8651420146442823;
    msg.vz = 0.851650285335301;
    msg.ax = 0.9958111052564445;
    msg.ay = 0.47757058936006824;
    msg.az = 0.17232920486409176;
    msg.flags = 17668U;

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
    msg.setTimeStamp(0.9084287576039362);
    msg.setSource(44992U);
    msg.setSourceEntity(254U);
    msg.setDestination(27921U);
    msg.setDestinationEntity(128U);
    msg.x = 0.14003390356827705;
    msg.y = 0.08675595024382554;
    msg.z = 0.28316155857241354;
    msg.vx = 0.6644617592702987;
    msg.vy = 0.3186602702715403;
    msg.vz = 0.6568679237164894;
    msg.ax = 0.7652122456764012;
    msg.ay = 0.08232636151830985;
    msg.az = 0.6685097270467465;
    msg.flags = 34884U;

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
    msg.setTimeStamp(0.3031155456688345);
    msg.setSource(23242U);
    msg.setSourceEntity(155U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(50U);
    msg.x = 0.4983606902943861;
    msg.y = 0.6048012747195556;
    msg.z = 0.5691770428074724;
    msg.vx = 0.025367903493583976;
    msg.vy = 0.4297829735834673;
    msg.vz = 0.40170677402333266;
    msg.ax = 0.9694118082027829;
    msg.ay = 0.2856393254205273;
    msg.az = 0.22062764060822015;
    msg.flags = 36492U;

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
    msg.setTimeStamp(0.9630602517463905);
    msg.setSource(6627U);
    msg.setSourceEntity(242U);
    msg.setDestination(52406U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7592159557535821;

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
    msg.setTimeStamp(0.3726283435962029);
    msg.setSource(41611U);
    msg.setSourceEntity(85U);
    msg.setDestination(32723U);
    msg.setDestinationEntity(189U);
    msg.value = 0.24472094173484316;

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
    msg.setTimeStamp(0.596512757881688);
    msg.setSource(28460U);
    msg.setSourceEntity(176U);
    msg.setDestination(58201U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8841504565743405;

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
    msg.setTimeStamp(0.5949630379230842);
    msg.setSource(55710U);
    msg.setSourceEntity(20U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(71U);
    msg.timeout = 12640U;
    msg.lat = 0.2576673645318003;
    msg.lon = 0.2621996664515256;
    msg.z = 0.7677915370113183;
    msg.z_units = 136U;
    msg.speed = 0.5428993776444474;
    msg.speed_units = 254U;
    msg.roll = 0.8530724112209932;
    msg.pitch = 0.17127425985320532;
    msg.yaw = 0.8337622393447394;
    msg.custom.assign("WGEFFNAGHICZFPUIAOFUGPBVLQIZJLZCYBVQQMQLSEPTKYFHLRCIVVQWUXUOJRBKZODJZKXTSFPWEVXHJOEOATJRZCWRPGPHERWUAIYYEZCTGWYHSXYJTYFDKNZGIOXXOOKBUTSEXTDRDNVMPMJLBLXSOIRQJHDBFWNITEQVKKADBFMEOKACSWNALHSKHNMCUWCDYBE");

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
    msg.setTimeStamp(0.24143601743223586);
    msg.setSource(6003U);
    msg.setSourceEntity(184U);
    msg.setDestination(22374U);
    msg.setDestinationEntity(37U);
    msg.timeout = 43757U;
    msg.lat = 0.3574178157113338;
    msg.lon = 0.607818865124964;
    msg.z = 0.14562707608263337;
    msg.z_units = 157U;
    msg.speed = 0.4805011809835986;
    msg.speed_units = 88U;
    msg.roll = 0.3686162862211927;
    msg.pitch = 0.34204923079580574;
    msg.yaw = 0.1470751082223848;
    msg.custom.assign("BWKMRZUPUDTOYTCNLRBALPKXFDHDIVFMYY");

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
    msg.setTimeStamp(0.18552626886803147);
    msg.setSource(60638U);
    msg.setSourceEntity(193U);
    msg.setDestination(12444U);
    msg.setDestinationEntity(240U);
    msg.timeout = 43484U;
    msg.lat = 0.13365421724713145;
    msg.lon = 0.9681113861224947;
    msg.z = 0.49184965143439063;
    msg.z_units = 199U;
    msg.speed = 0.058101723631431734;
    msg.speed_units = 236U;
    msg.roll = 0.08655726492662674;
    msg.pitch = 0.07637183953959537;
    msg.yaw = 0.8841918626416944;
    msg.custom.assign("YRCFFETDUVHKRAYOJVLVROHLUWYJODLZLAKZSJQAW");

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
    msg.setTimeStamp(0.2760358251779441);
    msg.setSource(7696U);
    msg.setSourceEntity(15U);
    msg.setDestination(37900U);
    msg.setDestinationEntity(80U);
    msg.timeout = 64831U;
    msg.lat = 0.3221569073184348;
    msg.lon = 0.20528124734083242;
    msg.z = 0.7462422947247724;
    msg.z_units = 253U;
    msg.speed = 0.2792452310080845;
    msg.speed_units = 65U;
    msg.duration = 52197U;
    msg.radius = 0.14733464551515707;
    msg.flags = 135U;
    msg.custom.assign("JOECUYPFJDKTOAOABBLXXZENIQYXWHKGHHZIIDNYVDOKZXIEUENOILWXJHHRPGKFKLIMTMBDSZQOJZWXDMULCPQMAGWFGJTNKHRCZFPOSKLNTCEFSTTNUFLZVRYVARMSLWDACVVFLDHRSRWCECPTBKAQUPJSBAGLQFMVWNUZJWSSZEXTBOHFQPQBARUOIDJUVUZNUGAGDMYL");

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
    msg.setTimeStamp(0.7448291319445002);
    msg.setSource(32669U);
    msg.setSourceEntity(74U);
    msg.setDestination(37797U);
    msg.setDestinationEntity(115U);
    msg.timeout = 48609U;
    msg.lat = 0.5803991907653432;
    msg.lon = 0.11782314535870064;
    msg.z = 0.042447194993359916;
    msg.z_units = 22U;
    msg.speed = 0.26373433285095016;
    msg.speed_units = 49U;
    msg.duration = 18294U;
    msg.radius = 0.7366392393396756;
    msg.flags = 217U;
    msg.custom.assign("UDPVXDEFCVDFHBR");

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
    msg.setTimeStamp(0.542202918207893);
    msg.setSource(26082U);
    msg.setSourceEntity(140U);
    msg.setDestination(44239U);
    msg.setDestinationEntity(141U);
    msg.timeout = 7877U;
    msg.lat = 0.09095919048736845;
    msg.lon = 0.767413081492497;
    msg.z = 0.5852144349922779;
    msg.z_units = 143U;
    msg.speed = 0.1939577952468564;
    msg.speed_units = 75U;
    msg.duration = 15717U;
    msg.radius = 0.3699734111813733;
    msg.flags = 211U;
    msg.custom.assign("NXKEGDYOLEHHOEXINQASUQXTIGFVELROVYMINCKSTJJMPKDLYAOJSZFWFFFTQROHJAZKWOMBBIQAPNROGCIJMYJBNTPDDJRDDHVYNWWIGGXTLUPSWKRQZNUZVNPWUFNZYVINEEISDXXBRZUVRHAPEFSRYBSVGDGHCCCTRLEKCT");

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
    msg.setTimeStamp(0.8514752775853653);
    msg.setSource(37711U);
    msg.setSourceEntity(96U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(223U);
    msg.custom.assign("QEARRBNRRHJFIL");

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
    msg.setTimeStamp(0.2422597559394869);
    msg.setSource(23620U);
    msg.setSourceEntity(213U);
    msg.setDestination(43551U);
    msg.setDestinationEntity(56U);
    msg.custom.assign("SMBNFDXHKFYUYJLBOOKNBJBMQRAFKBHYNPIOAYCNDAPGQVUWRWWFDGYAIZFFOLQKPPTAZEIKXNLQFSMWAHIODQCLECWMUNPDIOYDVSOTJOHWZZREUUPGGPTIBKSWUFLNPHCDRRSYBITEZIESXPUSAXLQXGMURQETZCFHXIXJKWLTTGHCLBGNVZGMQGCKMUNPYVHBEELVAIEMDUZXHGOCJJWYYHJXZDR");

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
    msg.setTimeStamp(0.2746978902649708);
    msg.setSource(55366U);
    msg.setSourceEntity(136U);
    msg.setDestination(11287U);
    msg.setDestinationEntity(59U);
    msg.custom.assign("ZKZXUYCXUTWAHVJSYODQFLHXKDUWKQLDNZHHQWNPGGZCVHLGNUPRTMIVKTCMSMYOPMXFQUIQXU");

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
    msg.setTimeStamp(0.6940934746168554);
    msg.setSource(34523U);
    msg.setSourceEntity(129U);
    msg.setDestination(30942U);
    msg.setDestinationEntity(73U);
    msg.timeout = 58801U;
    msg.lat = 0.3959338316831592;
    msg.lon = 0.9354684866210055;
    msg.z = 0.1749169492660242;
    msg.z_units = 24U;
    msg.duration = 23900U;
    msg.speed = 0.20579838496704306;
    msg.speed_units = 200U;
    msg.type = 217U;
    msg.radius = 0.4894318480970459;
    msg.length = 0.06283367402783835;
    msg.bearing = 0.9410819042035107;
    msg.direction = 174U;
    msg.custom.assign("SZHHVJEKGOETJBHJUNFLWPGMMNOVSZHKLFKZYUTQBEMWCNTASXSLAUDKNVAPGRRNCVKTUYRYIXWYNBQOIQEQOLHIFEGFGEWBPXEQORAHYVQCNXIHDQZPDXTLTSZWCTCISZKWZMHJKUULWRVBXACKOELDJAYXPZMBCVWAFEIKCBYLOXRVYXQDIFOTYOPIAMVCYPPHUMDGOJUQHRIESL");

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
    msg.setTimeStamp(0.43211320765238426);
    msg.setSource(41882U);
    msg.setSourceEntity(246U);
    msg.setDestination(57578U);
    msg.setDestinationEntity(116U);
    msg.timeout = 43215U;
    msg.lat = 0.2852510849506914;
    msg.lon = 0.6690666036715032;
    msg.z = 0.163226740606069;
    msg.z_units = 217U;
    msg.duration = 46262U;
    msg.speed = 0.055232900224104875;
    msg.speed_units = 100U;
    msg.type = 113U;
    msg.radius = 0.7676184006494466;
    msg.length = 0.19589843793844786;
    msg.bearing = 0.21507077046521472;
    msg.direction = 52U;
    msg.custom.assign("NMYHWZUCTTGISNFDNLONJEOITWFVZONEWHPNTXHZJUIUZSSDZRDKRLCPXDVIISBERXHLIQUXPYWDARIGMRP");

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
    msg.setTimeStamp(0.8113037958389036);
    msg.setSource(31521U);
    msg.setSourceEntity(181U);
    msg.setDestination(37625U);
    msg.setDestinationEntity(123U);
    msg.timeout = 22481U;
    msg.lat = 0.4131615984439908;
    msg.lon = 0.2053906352000594;
    msg.z = 0.2006690827093064;
    msg.z_units = 136U;
    msg.duration = 42843U;
    msg.speed = 0.5212998322528657;
    msg.speed_units = 156U;
    msg.type = 160U;
    msg.radius = 0.4658811143479006;
    msg.length = 0.7643890617441059;
    msg.bearing = 0.230417219370888;
    msg.direction = 86U;
    msg.custom.assign("OUPUZSISLJWWKFPXWZVJEAWTSHCRMZEVZXGTXUDGCZDQGEPMJKRJVYAXMDNPOGTVQBGDIQUDNBOTDGH");

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
    msg.setTimeStamp(0.05806543397490982);
    msg.setSource(52645U);
    msg.setSourceEntity(140U);
    msg.setDestination(58093U);
    msg.setDestinationEntity(87U);
    msg.duration = 8437U;
    msg.custom.assign("ZICTSDKUREJJCXTDONIXMTIXWOKVGTQKZYFNUBEFKUPQLQZWZTJVCXEGLHIIRAACZLDGTUHSRLPUHPPWXBYGMKHYCTVVMNRRFIHHKCUFJQEHVETSBYFMAFLJGKISUQAWJSIZDGNCCOSWKXARDLEKDGAEDBCFZLYBPXPQWLIBBENEPYOSFXHMRYMMSPUOGQJDPS");

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
    msg.setTimeStamp(0.6459822734660815);
    msg.setSource(31906U);
    msg.setSourceEntity(127U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(203U);
    msg.duration = 64171U;
    msg.custom.assign("MUBFFEVFIEGYZZAIBWOBMNANDYXQDDQWKAMNBJNJYPFSHACPANRHWUTRHRJDTCWLUNZYEMJMYAMQXURBDHTSZGCLKSVHGLZSUIBPJWJMPIQYKKVTZMVVFAYXJQOEVHEKPXZJBGG");

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
    msg.setTimeStamp(0.2633213942903031);
    msg.setSource(3714U);
    msg.setSourceEntity(97U);
    msg.setDestination(48322U);
    msg.setDestinationEntity(250U);
    msg.duration = 32132U;
    msg.custom.assign("FNCMTQGJPPCYMZZDJSGZJYDRBFGDOQTHLJTBCFDLUGEITSCMSKLVYXVBZINRLUWEARICEKEWNULHUSPQLFVZDMAOVVVYOMQXLIANAVPGZCPDJNFYQH");

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
    msg.setTimeStamp(0.27692091620756387);
    msg.setSource(30849U);
    msg.setSourceEntity(29U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(116U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0019881675738921967;
    tmp_msg_0.z_units = 252U;
    msg.control.set(tmp_msg_0);
    msg.duration = 15116U;
    msg.custom.assign("OZYDNGSIKZZAOHZDJUNBYVBXEHGYWULRNVJJQGGJJPFGCXSADDOGQCJPWIFTWSYQTDEQMPZIZBIPFBWPWSNJETGHFLMWBABLKCPMXX");

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
    msg.setTimeStamp(0.49120362670811046);
    msg.setSource(44389U);
    msg.setSourceEntity(31U);
    msg.setDestination(7842U);
    msg.setDestinationEntity(23U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4283233539463285;
    tmp_msg_0.speed_units = 165U;
    msg.control.set(tmp_msg_0);
    msg.duration = 35448U;
    msg.custom.assign("KJYNKCTGHWZWDIWDYNBLXPFMVVMSCRQQLBZWKXYUTQFVHEOQONXPILMDBKJQSHGRACDZEYQMTXHYZMVJHATQRYUGBZSSHQJFWLEOOXQVTYORUSNKDNZWJWHAFWBKSNIMNCJAALXSMEATUFPWCKTJNWPRPKFUEGPBLVZQILEVCCOBRGKMZLTPDXDLEGCALIEYOBJPFGHHSUVIURDRIOXOUIFPXGMIGJKZORAIVSUVGZCADFH");

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
    msg.setTimeStamp(0.11412588599581919);
    msg.setSource(17931U);
    msg.setSourceEntity(224U);
    msg.setDestination(25123U);
    msg.setDestinationEntity(187U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.30204852394901593;
    msg.control.set(tmp_msg_0);
    msg.duration = 45836U;
    msg.custom.assign("JLDPUVQEMFOGOMWTGHBIFMSDVVPBOVFHWSPZRKPRHEYCMLHJBJBNWWKKLOAFQRZINDENJCKREUYUQAQZGZBRMOTTXKVTIFJQGIRVVKYAXRLYEDJDYNNYCYDQHLLFGHSUNRMJQOILTVJTBQCPMGKWIGKOCTEUNASZOEFBNKFSUUNSYACOTXLPZSEJHRU");

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
    msg.setTimeStamp(0.4851949298967694);
    msg.setSource(15240U);
    msg.setSourceEntity(47U);
    msg.setDestination(48421U);
    msg.setDestinationEntity(133U);
    msg.timeout = 57265U;
    msg.lat = 0.054703295116948936;
    msg.lon = 0.7104065792093429;
    msg.z = 0.2794668014415119;
    msg.z_units = 175U;
    msg.speed = 0.0659342443904094;
    msg.speed_units = 148U;
    msg.bearing = 0.8446368109586871;
    msg.cross_angle = 0.5158825312306203;
    msg.width = 0.30105296578572904;
    msg.length = 0.21304487603260625;
    msg.hstep = 0.5036309065288018;
    msg.coff = 168U;
    msg.alternation = 41U;
    msg.flags = 54U;
    msg.custom.assign("JJFRKVLSDOZUKKNDCQYQHBHTJTDDMQQLIBLGWSHDZQWQGUYZGYPCXRCCAMBIJDVGARTLJGWRBXXZDFDENSCVSHCLSGFIKRVJJPKPOOAYVYUTPZAPZJNJPWTTKGGQONNUFZAYWAZZRVHIWENLIHNCXXEHTSHOBFMYELOIVEQVWANFUUPMHDKSTGNBOMXBCRTULRFQUSOHACBWEFLRZCUOAGXXPEESF");

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
    msg.setTimeStamp(0.952822928447482);
    msg.setSource(31601U);
    msg.setSourceEntity(126U);
    msg.setDestination(44142U);
    msg.setDestinationEntity(106U);
    msg.timeout = 41207U;
    msg.lat = 0.7357838000403824;
    msg.lon = 0.2958214615181366;
    msg.z = 0.8105077766331712;
    msg.z_units = 212U;
    msg.speed = 0.0318469811562303;
    msg.speed_units = 203U;
    msg.bearing = 0.3271129307407531;
    msg.cross_angle = 0.9276560091963971;
    msg.width = 0.6262906568687358;
    msg.length = 0.45944746567774875;
    msg.hstep = 0.46965394796539484;
    msg.coff = 29U;
    msg.alternation = 47U;
    msg.flags = 0U;
    msg.custom.assign("LGBGFXLNQEHRFGAQIDTUARIMTKMDHPIZCTCQLXLURVJAFQXHUXVCEMCSHNNKAKMVLFESBKTYZJOIOKCNDDEMJAWPYJTZGBZMUSEDFXSGJDVJJRNPEOQHMOQTMFVUBHOWQWHT");

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
    msg.setTimeStamp(0.5941825273728724);
    msg.setSource(11648U);
    msg.setSourceEntity(234U);
    msg.setDestination(38377U);
    msg.setDestinationEntity(170U);
    msg.timeout = 52559U;
    msg.lat = 0.71874836224065;
    msg.lon = 0.6440698443527397;
    msg.z = 0.19439264793656819;
    msg.z_units = 248U;
    msg.speed = 0.6434812976051368;
    msg.speed_units = 72U;
    msg.bearing = 0.1298281417683741;
    msg.cross_angle = 0.254621715235533;
    msg.width = 0.6770643744722572;
    msg.length = 0.2254270671734343;
    msg.hstep = 0.9888001693383875;
    msg.coff = 66U;
    msg.alternation = 23U;
    msg.flags = 223U;
    msg.custom.assign("YESBFBLXQVJAFFOEXGFGLFJBXMVUWRGQQGDCGLMKWRGOZNZKTIVQNPUKDSOIHKMBYKMBCTECIZCQRJSMCXHGYEODIRAHHUSYNLRFALHQVJRCPBIPDQHYWIRYFUZSJFOHXEAXUTTWCLVYVUOZQWUNVFSATWOPZLVVEDNMSTWJM");

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
    msg.setTimeStamp(0.8625630375371037);
    msg.setSource(32022U);
    msg.setSourceEntity(47U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(222U);
    msg.timeout = 2484U;
    msg.lat = 0.44212567584019347;
    msg.lon = 0.04939082149787444;
    msg.z = 0.15335192425987643;
    msg.z_units = 230U;
    msg.speed = 0.8298181203313111;
    msg.speed_units = 59U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.14491186032807235;
    tmp_msg_0.y = 0.8045170728191774;
    tmp_msg_0.z = 0.5681959316344897;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EPGIMUWOTSWPQMRBAEMDHFBZQSFQOWNYPSPIVSOFZDYMIZYITXXJAXBNGHMCBXKWFYLTFIRVAZWYTXAAEJHVXGYJNREDSZVMNKVBBZXLCGIVATDPXODKE");

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
    msg.setTimeStamp(0.4103565926451095);
    msg.setSource(38649U);
    msg.setSourceEntity(120U);
    msg.setDestination(25016U);
    msg.setDestinationEntity(67U);
    msg.timeout = 8195U;
    msg.lat = 0.5868692091519457;
    msg.lon = 0.48090699075496224;
    msg.z = 0.6781541842898344;
    msg.z_units = 192U;
    msg.speed = 0.23650481333645446;
    msg.speed_units = 38U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6661289038465078;
    tmp_msg_0.y = 0.991772341039583;
    tmp_msg_0.z = 0.43266612155625117;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CZXBDFUZCSENIVGIWJOKRXJWBMQDKMMLOIGBCIMDBEFRRFGQGJUSPDXAWZPWQDWMVZYSONDRIUPFYQNSZHTOIGVJWYAVGITJHZKKMEJWRFBDJESRTIBPIWMPPYBBGPHCQXLUFLUXVVPLEAFCCZRKRAENNQNDNAETAGVJUELJXOFYCTFLNVOZPXJMKMOANUCKKCXSDXVGOSSHHTORNHRDESOTYMQPYLUKQXIYZQCEG");

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
    msg.setTimeStamp(0.9983300160900248);
    msg.setSource(10359U);
    msg.setSourceEntity(103U);
    msg.setDestination(56735U);
    msg.setDestinationEntity(174U);
    msg.timeout = 17354U;
    msg.lat = 0.7326528460349874;
    msg.lon = 0.6501234186727127;
    msg.z = 0.26193056723533237;
    msg.z_units = 29U;
    msg.speed = 0.4641618976490687;
    msg.speed_units = 198U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.07363427608067896;
    tmp_msg_0.y = 0.46427340552241414;
    tmp_msg_0.z = 0.30229118379194164;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ESCXQUKPNPSOVGOJNGTNKOMSBASALWKANIRCTYEGMLTJJKKYDXRFKWERJVNVPTBIPCFOIBZEDSUBVMHVIAYXCLWTMJLC");

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
    msg.setTimeStamp(0.19905031124977368);
    msg.setSource(3327U);
    msg.setSourceEntity(52U);
    msg.setDestination(37887U);
    msg.setDestinationEntity(37U);
    msg.x = 0.9010151589145209;
    msg.y = 0.47463450871691504;
    msg.z = 0.734583606169142;

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
    msg.setTimeStamp(0.7490681517152529);
    msg.setSource(46168U);
    msg.setSourceEntity(71U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(242U);
    msg.x = 0.9953893051359397;
    msg.y = 0.5993141533223515;
    msg.z = 0.3736306218584191;

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
    msg.setTimeStamp(0.5218643821088582);
    msg.setSource(58713U);
    msg.setSourceEntity(81U);
    msg.setDestination(48867U);
    msg.setDestinationEntity(157U);
    msg.x = 0.40748989710347683;
    msg.y = 0.16302185086386456;
    msg.z = 0.6573575267463785;

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
    msg.setTimeStamp(0.8634492584803573);
    msg.setSource(1273U);
    msg.setSourceEntity(44U);
    msg.setDestination(56474U);
    msg.setDestinationEntity(244U);
    msg.timeout = 51336U;
    msg.lat = 0.19048381788600255;
    msg.lon = 0.6294490862250367;
    msg.z = 0.817594487010939;
    msg.z_units = 42U;
    msg.amplitude = 0.808084274247803;
    msg.pitch = 0.9344849420188394;
    msg.speed = 0.5093378862464697;
    msg.speed_units = 108U;
    msg.custom.assign("ZDTQHSVKYYITGAYRZYMFEMSGTORHEMWPW");

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
    msg.setTimeStamp(0.5772195599475397);
    msg.setSource(39010U);
    msg.setSourceEntity(131U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(83U);
    msg.timeout = 36085U;
    msg.lat = 0.14512597452668163;
    msg.lon = 0.789313928690559;
    msg.z = 0.1574744993257714;
    msg.z_units = 164U;
    msg.amplitude = 0.42899028079353185;
    msg.pitch = 0.3015223987676521;
    msg.speed = 0.6126512767458703;
    msg.speed_units = 149U;
    msg.custom.assign("BIBAVXOTDZHNIKBQYSLAYEOKLXWIMVMKSFKMKHIBLZMYHRHEWEIRFVCVHVRQUPUBUMGUFIPRTYKQTHVNQDNKHTQYAULEAIANUTPWCHGNSUBJXITODNXTOUVRPNZFFNVJRGZMGMCYWLGXCIXJWWXDCDORGGPBDGJFQEXWLBKDCNGZDBJSDKQEAAPLJKSULJYSCYTGZMZTETFAJAPFQYSNQJEZLCOOCZEBZHVOSRXMPYWJW");

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
    msg.setTimeStamp(0.6693984317259856);
    msg.setSource(7167U);
    msg.setSourceEntity(33U);
    msg.setDestination(60374U);
    msg.setDestinationEntity(207U);
    msg.timeout = 55441U;
    msg.lat = 0.40778163362048236;
    msg.lon = 0.30691380422889736;
    msg.z = 0.63729135019119;
    msg.z_units = 8U;
    msg.amplitude = 0.5393974066961875;
    msg.pitch = 0.29234185479803;
    msg.speed = 0.7158460471628922;
    msg.speed_units = 1U;
    msg.custom.assign("OWQWWLCATLJCDGVHJWZIBYBDDKKNGMNPMOVLTLTZVEHWEGJVCDZMKSEKFGZWFUQOJQONAJYSDGASAUERBPHD");

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
    msg.setTimeStamp(0.7681965996784155);
    msg.setSource(14586U);
    msg.setSourceEntity(18U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.1500070136595104);
    msg.setSource(25962U);
    msg.setSourceEntity(159U);
    msg.setDestination(5975U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.08862144706902442);
    msg.setSource(7723U);
    msg.setSourceEntity(239U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.4203949845072118);
    msg.setSource(59815U);
    msg.setSourceEntity(227U);
    msg.setDestination(63411U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9779573839882181;
    msg.lon = 0.609660252439545;
    msg.z = 0.9196329624451947;
    msg.z_units = 98U;
    msg.radius = 0.4918905972144224;
    msg.duration = 43306U;
    msg.speed = 0.11337491325376747;
    msg.speed_units = 240U;
    msg.custom.assign("CHSDWIUEOLBIYOQCTJKKIJVMDNMJJYMPWEWGOSZPCYFTHUSNKSYRZESGIILXSPAYXLTHTAPKREQSLPDKRVLTXAAILPJFRKBHFGCSEUZNFHPMWOFTWVFWKLZXGJUMRXQYCYNAAHBQBD");

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
    msg.setTimeStamp(0.05542589963535616);
    msg.setSource(41622U);
    msg.setSourceEntity(247U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.7423662610345406;
    msg.lon = 0.09575869079207922;
    msg.z = 0.4774470450622107;
    msg.z_units = 163U;
    msg.radius = 0.9256227239952187;
    msg.duration = 32349U;
    msg.speed = 0.5609307137058225;
    msg.speed_units = 197U;
    msg.custom.assign("EIZYVQZSAKHVCASBVQEJGZNAGMO");

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
    msg.setTimeStamp(0.13379319721886196);
    msg.setSource(14107U);
    msg.setSourceEntity(33U);
    msg.setDestination(21850U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.8682798463211168;
    msg.lon = 0.6740258407784723;
    msg.z = 0.17096955602552322;
    msg.z_units = 16U;
    msg.radius = 0.9979805624076151;
    msg.duration = 16463U;
    msg.speed = 0.26150916973487726;
    msg.speed_units = 43U;
    msg.custom.assign("HPBGYNWWCQZUYIGDYUVBBSEGPVIMZXKBEOPKTUCMRUUOKWQGQXMYMANCBBOH");

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
    msg.setTimeStamp(0.429687155754502);
    msg.setSource(61200U);
    msg.setSourceEntity(125U);
    msg.setDestination(34748U);
    msg.setDestinationEntity(228U);
    msg.timeout = 58057U;
    msg.flags = 224U;
    msg.lat = 0.2394566678751292;
    msg.lon = 0.2712708247714304;
    msg.start_z = 0.7688816866235432;
    msg.start_z_units = 227U;
    msg.end_z = 0.7305801436499535;
    msg.end_z_units = 177U;
    msg.radius = 0.7321484533980153;
    msg.speed = 0.593452020953901;
    msg.speed_units = 245U;
    msg.custom.assign("PEDHTXMNFHDXDHWYVTGFLCQEKHTVZXPLXDRXTOAMOMUNJYHGUQUVHDQROVCFANEWEMBZIALMOLBUAHGSMNWWXVIYSOSYONIPQCJCASCJNFIDLVJQKWWKSQLZJCRWLSRPNFASEGNTF");

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
    msg.setTimeStamp(0.5394870447783106);
    msg.setSource(52398U);
    msg.setSourceEntity(176U);
    msg.setDestination(28874U);
    msg.setDestinationEntity(219U);
    msg.timeout = 44130U;
    msg.flags = 66U;
    msg.lat = 0.21513866108823088;
    msg.lon = 0.869177245368449;
    msg.start_z = 0.6234141246153249;
    msg.start_z_units = 157U;
    msg.end_z = 0.12179674409423547;
    msg.end_z_units = 4U;
    msg.radius = 0.7347446975830877;
    msg.speed = 0.6899397267685777;
    msg.speed_units = 41U;
    msg.custom.assign("VGQOEMOWXMPIFIBHTMBGDCMREQCPTCKNSJYPBMKVINQLXOZJABXNNJHTTXEAWLCPAXQYWGOYURESTZFLISKISKJUHDYVWMANZNXYQPDUKZGSUQZULKJPTJXNFYFJJBATAFGPHDWLPMYMCNZRSRAZPSIROSUIFHJGDUBADHTVEEJHOIVWOCLEGCVVDUB");

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
    msg.setTimeStamp(0.7891014841412768);
    msg.setSource(32239U);
    msg.setSourceEntity(112U);
    msg.setDestination(20433U);
    msg.setDestinationEntity(7U);
    msg.timeout = 64866U;
    msg.flags = 156U;
    msg.lat = 0.7522548236415396;
    msg.lon = 0.31621152974055966;
    msg.start_z = 0.6510162556008793;
    msg.start_z_units = 191U;
    msg.end_z = 0.1826161613029732;
    msg.end_z_units = 8U;
    msg.radius = 0.44219696602130243;
    msg.speed = 0.14145442246649775;
    msg.speed_units = 52U;
    msg.custom.assign("NKEQDYMFUADWGMYQUWRAJYV");

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
    msg.setTimeStamp(0.21724505773196945);
    msg.setSource(25174U);
    msg.setSourceEntity(159U);
    msg.setDestination(34724U);
    msg.setDestinationEntity(169U);
    msg.timeout = 48638U;
    msg.lat = 0.3388135263891925;
    msg.lon = 0.21520744963864635;
    msg.z = 0.10017432894414724;
    msg.z_units = 240U;
    msg.speed = 0.8207033730317935;
    msg.speed_units = 167U;
    msg.custom.assign("WGBJJVCSITUTZEXTROPCYUBUOFGAYJCBEBFTYQZNYSRVFQQAMKSCDMUGOZBLWYJLYUPUOYDREOBISXQDCDNDYHTHMOUFLMILNXXXUNXCPXHKAKEAIJEIBPPFE");

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
    msg.setTimeStamp(0.2664521603881864);
    msg.setSource(37343U);
    msg.setSourceEntity(226U);
    msg.setDestination(12341U);
    msg.setDestinationEntity(223U);
    msg.timeout = 17853U;
    msg.lat = 0.5836795227031534;
    msg.lon = 0.39622583736399375;
    msg.z = 0.10637560379583944;
    msg.z_units = 65U;
    msg.speed = 0.5270868844363858;
    msg.speed_units = 207U;
    msg.custom.assign("FWAYBQUCZOSTYVBSZNTHTNJGJLINNPTFTPFJWXXQUXYKFOANRHFPEFAJBWTXQMERQBAGSJLHYVAUENOOUHVGJOMCZMHRVIVFKZBEPSRTDTVQCLLPCVTCKXVYHLBRO");

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
    msg.setTimeStamp(0.3961068744450199);
    msg.setSource(65356U);
    msg.setSourceEntity(99U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(223U);
    msg.timeout = 20064U;
    msg.lat = 0.6402120685216108;
    msg.lon = 0.007776168381822823;
    msg.z = 0.28597657051576064;
    msg.z_units = 103U;
    msg.speed = 0.43852953218809554;
    msg.speed_units = 47U;
    msg.custom.assign("QUSJMZBFWKOPANNCWWBEGCEVPVUFIJQBTILNOJOKXZHZGVGPREEIWVINSPHORMXWDGLSQOAOZHCVYKHQUMLZESNAOVGRZHLZQUGPDIJNFHXMBSUFEZRNTQCRDP");

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
    msg.setTimeStamp(0.5223224319089017);
    msg.setSource(27676U);
    msg.setSourceEntity(83U);
    msg.setDestination(11121U);
    msg.setDestinationEntity(209U);
    msg.x = 0.1441340117466371;
    msg.y = 0.602816302840832;
    msg.z = 0.42943310250758027;
    msg.t = 0.8953353478558893;

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
    msg.setTimeStamp(0.6575389731409581);
    msg.setSource(7038U);
    msg.setSourceEntity(9U);
    msg.setDestination(43627U);
    msg.setDestinationEntity(69U);
    msg.x = 0.6013708402022969;
    msg.y = 0.859551948243521;
    msg.z = 0.2619382369942028;
    msg.t = 0.9856391073934836;

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
    msg.setTimeStamp(0.7885700398407175);
    msg.setSource(15009U);
    msg.setSourceEntity(243U);
    msg.setDestination(32185U);
    msg.setDestinationEntity(100U);
    msg.x = 0.72614787984606;
    msg.y = 0.19431431624777784;
    msg.z = 0.8510228720663177;
    msg.t = 0.9388558805212827;

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
    msg.setTimeStamp(0.749857944287019);
    msg.setSource(45729U);
    msg.setSourceEntity(57U);
    msg.setDestination(24220U);
    msg.setDestinationEntity(82U);
    msg.timeout = 14298U;
    msg.name.assign("IZGJKQIVBOUQXJBNVPLSCZNPSANQVRVLSPXWEEYRZMIGHXZXJMRLXPVWZTKTDUQHVXUKQMSPYZSIYXJQLYEFTYDFRANOFBUHFIWJSGDBOPCAUPJAEUIRZOXJKDWPBPHUTNENWQRMTVDFTOJTDSPGBDMGBENYCCYMCKRIAOGCUFQJEZATASGKHLILHZKFHUSIMNDYHVWMHADKCKBARTWLQQARVBHDGG");
    msg.custom.assign("XZJTPUOKFWQKFRCCVGKPRYMRZEIFVMFUIAYVDDEBQRHBVNEKYSWMMHYCL");

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
    msg.setTimeStamp(0.8852178528058741);
    msg.setSource(65179U);
    msg.setSourceEntity(50U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(192U);
    msg.timeout = 45347U;
    msg.name.assign("UOXSDEDNLSKFMMFDZKTGAUMQYMKZSABLREBVNEYTFYDPXARGCZNZPEZHFZABJPISQKBIIVQDQBWTTFIRPVYOWXUQSAITGJJZCOJLSMRCNAWGLORQKDJWVIVLQKWXCCOUYXJCSQTCYLFODKUKSMDXBHIEWMRRMUGP");
    msg.custom.assign("BSUWPPFOGUTEYPZFO");

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
    msg.setTimeStamp(0.09624040259481048);
    msg.setSource(30300U);
    msg.setSourceEntity(76U);
    msg.setDestination(113U);
    msg.setDestinationEntity(63U);
    msg.timeout = 26534U;
    msg.name.assign("KYIMNDCRRQMMNMVWWPDDDQEVZJFZXGBWPBUVROYBERQPSQCASAYEQLTXTAFXVEUOPMAUGISYIZNLWSXCGVMLKMKJRBFBIKATONIVUWFVWBMWNYKCXQUWNXRTFEZDTILJOYCFPFKSJZOAUVZBFNZUNPEVONPXLLVSWCGKHZHKELIKQTCBHFXXJDYHFAT");
    msg.custom.assign("TOUDOWPYHENQWNJLOLKIFNSGDQSOJJYFEEDIJVYGNHBLFZXMMMULRFSZTAOSMOJTGMLTMRXVHHTQDERKVWBKEFYJBGWIXVOCSODSIYWZBEGIZIGJFLLHIGKDPAKVRBYKURLCPFSCSAZQBSGNWFAAYYQHVCPU");

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
    msg.setTimeStamp(0.695183447112276);
    msg.setSource(50672U);
    msg.setSourceEntity(66U);
    msg.setDestination(56616U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.24784116865514827;
    msg.lon = 0.1969951476679721;
    msg.z = 0.1340208637127781;
    msg.z_units = 232U;
    msg.speed = 0.7073069058229945;
    msg.speed_units = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30362U;
    tmp_msg_0.off_x = 0.6135876283589355;
    tmp_msg_0.off_y = 0.7166699528094136;
    tmp_msg_0.off_z = 0.6568017513579204;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8449718886049824;
    msg.custom.assign("XXATZKZJXNGPHDONNEBNFJOBLNVXXNGRWQLTSPZRSUTMJBKIDLVHALNBMCIUDECQMDXBODCDFUPXAYVTXFWQZIYMARTZ");

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
    msg.setTimeStamp(0.6274176433097886);
    msg.setSource(4594U);
    msg.setSourceEntity(222U);
    msg.setDestination(25836U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.23411523703516512;
    msg.lon = 0.8819920384121164;
    msg.z = 0.5490287901630048;
    msg.z_units = 115U;
    msg.speed = 0.4033210465336684;
    msg.speed_units = 114U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9043852378651119;
    tmp_msg_0.y = 0.8309706459209859;
    tmp_msg_0.z = 0.96688098832294;
    tmp_msg_0.t = 0.4338198541834044;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8339713896439361;
    msg.custom.assign("DFLUMXZKSDKFPSGIBQNVGHDAUTOOSWZJOJIFLOPDYGQNLFULXAUHMDZEIHFQOGPQOPVBZMZTCCHSIYNBGDDANPFCQMETKRISBUKTLJBMWROFKLMJYHZWRBSPQUKFZNLOIRBICMHAGPLCPOFC");

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
    msg.setTimeStamp(0.5678586836479559);
    msg.setSource(23438U);
    msg.setSourceEntity(252U);
    msg.setDestination(38051U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.5922991644143912;
    msg.lon = 0.8048688705503997;
    msg.z = 0.562523073869865;
    msg.z_units = 205U;
    msg.speed = 0.9629551020185508;
    msg.speed_units = 150U;
    msg.start_time = 0.9052781272403577;
    msg.custom.assign("XNBXYMUITPTQGJOVIFLUHBMMSKXUYPQLAEGRAJBQYBQRNWGXEQZMHLSZSSVSRUXHDDQWAVMTOZZFWMJFQQTVLYAUXKKLNAPEBFBJDXRSOTGXOIAWYOYOEITXHKNYKKEDLFWQUOUCWMLKSLBTPTITFCFZEVPJFCHYEUVGQVGRFDYGWYRMCASPUDARZVIIDONSGMNWEIVKRNSRBVLCHCP");

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
    msg.setTimeStamp(0.6948554508366876);
    msg.setSource(15413U);
    msg.setSourceEntity(84U);
    msg.setDestination(44322U);
    msg.setDestinationEntity(91U);
    msg.vid = 30509U;
    msg.off_x = 0.544028417661247;
    msg.off_y = 0.947611613490086;
    msg.off_z = 0.33091068813475355;

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
    msg.setTimeStamp(0.3510465236680307);
    msg.setSource(40184U);
    msg.setSourceEntity(168U);
    msg.setDestination(27692U);
    msg.setDestinationEntity(89U);
    msg.vid = 35858U;
    msg.off_x = 0.6012794216772972;
    msg.off_y = 0.25080618930441045;
    msg.off_z = 0.3875102183212972;

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
    msg.setTimeStamp(0.5626002659818613);
    msg.setSource(25368U);
    msg.setSourceEntity(28U);
    msg.setDestination(39U);
    msg.setDestinationEntity(27U);
    msg.vid = 48811U;
    msg.off_x = 0.7250165741772968;
    msg.off_y = 0.8656330987615387;
    msg.off_z = 0.965933133682146;

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
    msg.setTimeStamp(0.7187219220165659);
    msg.setSource(20990U);
    msg.setSourceEntity(41U);
    msg.setDestination(14873U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.20971103892672327);
    msg.setSource(50481U);
    msg.setSourceEntity(206U);
    msg.setDestination(19094U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.32514917340523763);
    msg.setSource(25355U);
    msg.setSourceEntity(219U);
    msg.setDestination(7799U);
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
    msg.setTimeStamp(0.931414785175798);
    msg.setSource(3279U);
    msg.setSourceEntity(16U);
    msg.setDestination(8331U);
    msg.setDestinationEntity(122U);
    msg.mid = 8175U;

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
    msg.setTimeStamp(0.4868899006352446);
    msg.setSource(40745U);
    msg.setSourceEntity(158U);
    msg.setDestination(20522U);
    msg.setDestinationEntity(146U);
    msg.mid = 50959U;

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
    msg.setTimeStamp(0.6965619952244322);
    msg.setSource(23924U);
    msg.setSourceEntity(16U);
    msg.setDestination(31362U);
    msg.setDestinationEntity(99U);
    msg.mid = 5709U;

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
    msg.setTimeStamp(0.7704155695655678);
    msg.setSource(6763U);
    msg.setSourceEntity(240U);
    msg.setDestination(35375U);
    msg.setDestinationEntity(138U);
    msg.state = 12U;
    msg.eta = 34031U;
    msg.info.assign("FZOSPIKSDIEMVKTWOXHOOGKYVVZTAQCFZYJYCRFUAXLWDBRGISFHYBUCAHLZWRLTQACBZMSNTEZTQIPGTAGPHDVXUJHOCBGLUJWCMWDGYPIVPPDRNVOMBKOIYZOSHRAPNESVQJJFUOLJRUHKEISREMNWELHDYOQCQUEZNTVPJMVKQMUGIEUECDWCBFKBTLPJFQEBKVSLXFXMAXNNJFIM");

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
    msg.setTimeStamp(0.03786251684542985);
    msg.setSource(55091U);
    msg.setSourceEntity(15U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(130U);
    msg.state = 25U;
    msg.eta = 5516U;
    msg.info.assign("PKMMLJSABMLFZXCYRCQPWINKNEJFHCTUKWVBVJERDNAZHLPZYNZAOPSDOJNWMQMVJGCAEEAQODJUPIPHKJBBHGTHHYPFITUQCXQEFNBRZRCSSZSMMUWRGZIDTXYIQQVYJHRGXOTYTFAKTALPEQOSANOWWGSXKBEVHFCGODDBLWVNXVCBYZMLUVFDLXORS");

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
    msg.setTimeStamp(0.9806931369865647);
    msg.setSource(28984U);
    msg.setSourceEntity(133U);
    msg.setDestination(13682U);
    msg.setDestinationEntity(220U);
    msg.state = 107U;
    msg.eta = 25280U;
    msg.info.assign("JYDWHXSQARRRAEG");

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
    msg.setTimeStamp(0.9912616558777271);
    msg.setSource(15530U);
    msg.setSourceEntity(41U);
    msg.setDestination(26227U);
    msg.setDestinationEntity(67U);
    msg.system = 50932U;
    msg.duration = 33543U;
    msg.speed = 0.5700426611407924;
    msg.speed_units = 103U;
    msg.x = 0.0853514796313084;
    msg.y = 1.9078507045633408e-05;
    msg.z = 0.969265935989764;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.5185371513480234);
    msg.setSource(19859U);
    msg.setSourceEntity(47U);
    msg.setDestination(5809U);
    msg.setDestinationEntity(41U);
    msg.system = 51814U;
    msg.duration = 12891U;
    msg.speed = 0.4886830139571614;
    msg.speed_units = 66U;
    msg.x = 0.4605069172046712;
    msg.y = 0.5378678574107572;
    msg.z = 0.2848622187789258;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.9613887282641893);
    msg.setSource(12757U);
    msg.setSourceEntity(237U);
    msg.setDestination(55041U);
    msg.setDestinationEntity(156U);
    msg.system = 8745U;
    msg.duration = 12943U;
    msg.speed = 0.43986550433753746;
    msg.speed_units = 163U;
    msg.x = 0.289676518506656;
    msg.y = 0.689664148459637;
    msg.z = 0.8001485097756109;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.7674244842308294);
    msg.setSource(1970U);
    msg.setSourceEntity(157U);
    msg.setDestination(28400U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.33490339344076314;
    msg.lon = 0.5299355976036733;
    msg.speed = 0.7450908852808186;
    msg.speed_units = 213U;
    msg.duration = 51472U;
    msg.sys_a = 4638U;
    msg.sys_b = 58098U;
    msg.move_threshold = 0.030425603146160607;

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
    msg.setTimeStamp(0.675708942012563);
    msg.setSource(51593U);
    msg.setSourceEntity(169U);
    msg.setDestination(23842U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.028432924795994574;
    msg.lon = 0.866391970302667;
    msg.speed = 0.5252562767143661;
    msg.speed_units = 211U;
    msg.duration = 42871U;
    msg.sys_a = 11388U;
    msg.sys_b = 22382U;
    msg.move_threshold = 0.6150012575203709;

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
    msg.setTimeStamp(0.535094387218621);
    msg.setSource(64921U);
    msg.setSourceEntity(191U);
    msg.setDestination(11548U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.9250504316049297;
    msg.lon = 0.7993615442281912;
    msg.speed = 0.2591408732916065;
    msg.speed_units = 238U;
    msg.duration = 17823U;
    msg.sys_a = 12766U;
    msg.sys_b = 18752U;
    msg.move_threshold = 0.21061249602298404;

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
    msg.setTimeStamp(0.9812524355956003);
    msg.setSource(8272U);
    msg.setSourceEntity(3U);
    msg.setDestination(60677U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.09237306155493097;
    msg.lon = 0.02098902846654982;
    msg.z = 0.40277036779958686;
    msg.z_units = 56U;
    msg.speed = 0.912671479830949;
    msg.speed_units = 153U;
    msg.custom.assign("NAWDFWUOACEUBFKNVGDBLAVJDYIAXHILSCIHSCBUWVXIDOGCYWHWKEMFARNTPBVOKQ");

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
    msg.setTimeStamp(0.9501509037103358);
    msg.setSource(28689U);
    msg.setSourceEntity(147U);
    msg.setDestination(58897U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.9371591310869882;
    msg.lon = 0.7022151031278258;
    msg.z = 0.5988607896700038;
    msg.z_units = 235U;
    msg.speed = 0.8056020843338509;
    msg.speed_units = 33U;
    msg.custom.assign("QMQDKYVPYICFQPSBKDSIHPRYOJZPNPCSADNVUTKHKGQBNQZFOYEBMSDVNGSUDXYLAAIFSIRZHXDIIKUGRO");

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
    msg.setTimeStamp(0.8535497008478853);
    msg.setSource(31858U);
    msg.setSourceEntity(160U);
    msg.setDestination(26035U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.586771567828634;
    msg.lon = 0.6220238558759404;
    msg.z = 0.39743015954193117;
    msg.z_units = 227U;
    msg.speed = 0.8717317911106589;
    msg.speed_units = 124U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6137284888297155;
    tmp_msg_0.lon = 0.7662115833367465;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LDIVEWHLXE");

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
    msg.setTimeStamp(0.7473563553099453);
    msg.setSource(44153U);
    msg.setSourceEntity(189U);
    msg.setDestination(26534U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.5635816463772984;
    msg.lon = 0.6763291790996324;

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
    msg.setTimeStamp(0.9082752342053536);
    msg.setSource(50889U);
    msg.setSourceEntity(94U);
    msg.setDestination(24586U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.6383873988584792;
    msg.lon = 0.8597005521245914;

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
    msg.setTimeStamp(0.5805274035312791);
    msg.setSource(19847U);
    msg.setSourceEntity(87U);
    msg.setDestination(51513U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.3938113942639787;
    msg.lon = 0.2186731728045075;

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
    msg.setTimeStamp(0.8684934381121465);
    msg.setSource(41164U);
    msg.setSourceEntity(159U);
    msg.setDestination(15906U);
    msg.setDestinationEntity(227U);
    msg.timeout = 17071U;
    msg.lat = 0.3540611281265609;
    msg.lon = 0.02489167988338148;
    msg.z = 0.227767287773045;
    msg.z_units = 203U;
    msg.pitch = 0.05679370744731893;
    msg.amplitude = 0.8307355510977359;
    msg.duration = 14396U;
    msg.speed = 0.7594979965422117;
    msg.speed_units = 160U;
    msg.radius = 0.7955213647035102;
    msg.direction = 208U;
    msg.custom.assign("LEDKHBKDYNFGLQMEZSOJLCLLQWKPXITCRVMQYZQYEJUAPEPEQHNSUIXITWKGMNVVKNRHHMOUOWWTJLDFUSXCRQPLXYKHZUNPACKDXSFJFLFHFWHCFWDYRBVGTEWISRIOWDBDQUTDCJXPCRJPIZGIYPCTYSM");

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
    msg.setTimeStamp(0.45263184769392606);
    msg.setSource(38066U);
    msg.setSourceEntity(204U);
    msg.setDestination(63280U);
    msg.setDestinationEntity(49U);
    msg.timeout = 60591U;
    msg.lat = 0.045016494140779795;
    msg.lon = 0.8518720307919554;
    msg.z = 0.47875268170155316;
    msg.z_units = 225U;
    msg.pitch = 0.2797426798389554;
    msg.amplitude = 0.16587134578166673;
    msg.duration = 44451U;
    msg.speed = 0.3716226863935065;
    msg.speed_units = 142U;
    msg.radius = 0.7391329497854866;
    msg.direction = 169U;
    msg.custom.assign("MAUBEMSPGSVNPWPCDTRHHYHVOFRFJBUWRWVVUKNKTWEVSBMOCUXXWXMQKIEJJITBGZKO");

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
    msg.setTimeStamp(0.18140308145854178);
    msg.setSource(56737U);
    msg.setSourceEntity(238U);
    msg.setDestination(59945U);
    msg.setDestinationEntity(178U);
    msg.timeout = 61927U;
    msg.lat = 0.8500107537063787;
    msg.lon = 0.6163731016706712;
    msg.z = 0.7483735909458481;
    msg.z_units = 8U;
    msg.pitch = 0.11202882050517415;
    msg.amplitude = 0.5247395997972589;
    msg.duration = 1978U;
    msg.speed = 0.6902196599172936;
    msg.speed_units = 201U;
    msg.radius = 0.3851862287161508;
    msg.direction = 75U;
    msg.custom.assign("OEWHSUVGHIFFUQFZLEYEOPXZPFGOLIGTUELGCMLPGIJWRNDBDAYCZYTDPOLOKZBDEINMHUAJTFTCSZFNUXOYHCGTCYBMWUJHQMALIPGHBXFRUVAIXCJNWEMKRXAHPHDDMTCQJRSQKIWAAXYHRERFKXITIVYJSV");

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
    msg.setTimeStamp(0.3149203549264653);
    msg.setSource(34729U);
    msg.setSourceEntity(69U);
    msg.setDestination(61523U);
    msg.setDestinationEntity(140U);
    msg.formation_name.assign("KSPDWVVYLTJEOZPNITZYOBSAXWMVQECWDDIHYYCNHCLUMZGPUXSBBJTQDZBCYEBKPEVTPOXDSVNWLHJZFGOJDLLAQVFHKETRAMIATXJLRYGRXPGGGBWVZSXAGUIFHQRQNQUZLABPCOVFNJTGBXWJKQXMCYEUHOKMCDRMXJFKKJHIZKZ");
    msg.reference_frame = 94U;
    msg.custom.assign("BXVWTTFVJBGUKFAZLTXGTUIQYTBYADCTLIWKEEBJHPALEKYPMNUNERWVISENQBTHSFOEXAJGYUJGYMDJHPFHLQUCWJQYZSHEZHAZIPKUCVTZMSPWWGIBAQKOVMDPCOWQLRISISTGRMKECYFRKOXCZBGJOIRWGVNADJSONTGUNPHXDNWQMUV");

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
    msg.setTimeStamp(0.7597914762191689);
    msg.setSource(24609U);
    msg.setSourceEntity(15U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(157U);
    msg.formation_name.assign("ESEFRHWHBICUIIDPMHZSAVFXQQVJXDMZASXFYQJZRTHMANSLJJYQAMQEEEIFRILMUXKJVNPVNTOAOTVSBXPCNNBVAPKOEAQOKCDLGNWADKXVZMSTBPTUPTWFPOCYGSCIBLFHNCQRWGRBDJCKJLGTNRUKRCWLDNYYKOYWRRBTTCYGLWZALGPNOJAQLZHXIPKJEGUHUZOYBDGPKBHMCYZSBDMIXRFGXVDFKLVEMQGIFMSFI");
    msg.reference_frame = 178U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18182U;
    tmp_msg_0.off_x = 0.8890701829703281;
    tmp_msg_0.off_y = 0.01987732391529251;
    tmp_msg_0.off_z = 0.2043766394010299;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GDFNNNSXJNWBYGHOKSOVVGVBTGDOKXQCNULAYWABWDYVZOFPEMLBLOXGDDVWKRZMNITH");

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
    msg.setTimeStamp(0.6483794899212099);
    msg.setSource(58690U);
    msg.setSourceEntity(219U);
    msg.setDestination(18408U);
    msg.setDestinationEntity(158U);
    msg.formation_name.assign("TQSBXCPPGXBXMUKUCPDMNVFZYPCDBJGHKJUEEGOONHBQJINWLQAFYLEBWXWJSDCLIYHKSUSYPTTXCZEBMKWXQDNAIVTSHOZQLZMJZUHOEVSABLFHHSPGXXSGKZCRJXNHTTOYUFSYRPEDGGPACRYLNKUWQJVCTBALZARDWIWMXJAMNROVJDRZIDKQBMORIWOAVUNIPQVVHCULNQTFTMJRWFTIZMIGSRFCURAYKDKOGIYBVKEHY");
    msg.reference_frame = 100U;
    msg.custom.assign("BPRXALRAXEVEEXQCZNTSPUTYSHTAJDLPJDOQSXHCWTHUZUDWUPYAZYFFYWAVZUIBTIGKXENXMLMCSQGKAKQPNGARQHZLRSMJMCONOVLSYEROYPZKWNLJCPSMZJUOPZOUMTSFGLIBMJXXHAIVRNFAYECYILSMQIYKBLETKGDFRFIQBJDHIPRNKFOCWVTTCOFHGEVDQMGIENGWJBUFUDFIRBVQKZOSBMPKDCNVHGGX");

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
    msg.setTimeStamp(0.214279240711453);
    msg.setSource(45655U);
    msg.setSourceEntity(211U);
    msg.setDestination(15993U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("XWDVMUGPJEQPYYUUWVHRNBJWCHYJRITZVCKDNXUNFDEVGWPSBALESDVJILLZJXZKXLNKLIEQILMMPRTKSKOALCZNYKZBKTLGRLKCMA");
    msg.formation_name.assign("JBIQAZZHPXRULEINNTGXKGVRBRALYYWTKHHJLBEWNSWQRQGAEJGPYMHHSJHYQTOFSRVMAFCOGQYMQNVNKZDQDH");
    msg.plan_id.assign("QGJNJQTITXVVKYLTINPUKRDRWJMMWFYNLVYULXBPQFEMOAOUAFCOJHVPCWQCNDNVSEAINVHGXLWLBMADZWHWEQXSQZASUGHHHSVKLPWXBOKOEFTXCGUUHNPEEUDJDECPAIWRPVVBRGYMKZCFPFKZZUNBKPRTTMJXJAQYZIXJGMOKFORSJTWZOSEIYKTCIAGXHYYBFRPLMTBERZYASUWIFDBLSYHMBSV");
    msg.description.assign("MTJCMVEUBKQUJVPRLBPJYCSTIFUSFZECXTZUPKWCCKTBQPDELCNCEKZMMHLJPZIVNTXGOAFJHTGSVINOSHPKXNUMQZGXOPFOZXHNMFIDKYBYDOJHOYNLVGKYOSOWZGVQZQIPMXDWWSLRDISQXKDINWTQFMEATETJYRL");
    msg.leader_speed = 0.30455852492545976;
    msg.leader_bank_lim = 0.4092693312277541;
    msg.pos_sim_err_lim = 0.12932317424162032;
    msg.pos_sim_err_wrn = 0.6793147687066113;
    msg.pos_sim_err_timeout = 58258U;
    msg.converg_max = 0.21350931508547144;
    msg.converg_timeout = 47485U;
    msg.comms_timeout = 22051U;
    msg.turb_lim = 0.003654739993275369;
    msg.custom.assign("PXFKDHIPMBVAOGTWQHLCQNIDALDCKDEFJOVRASFTZWBEDZWTMRHWVJLMGCB");

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
    msg.setTimeStamp(0.03039793026321158);
    msg.setSource(36017U);
    msg.setSourceEntity(141U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("ASKHOUDHEQISBYYLNAMQPIRZYQEZXLPROGFKXJLBWQMQLCFTNXVGVWXMHONTUUCDCUCPGLVGYZOPJXEWOWBSNRYBQAYVGTVX");
    msg.formation_name.assign("XYEPELYPVHBELTZELXMFRZIOIXNYMNQXAJQSQDBFSBLAXWWLWTIVEHLUVCQIXGJYFJUJNWGZRKTNOHYWCDEPTSKIABHGWPFMWIUGPJTNVEDQEUDOXOKGUZCRPAOIGKPTFMUHCCBOMQGQGZKHCFXMIADZKBASPSGQJKRRAWIZIULSFVUOVLNVRYTLERVRTDQFABNXEHYM");
    msg.plan_id.assign("NXBGFFYIFMSEOVEASNHJUZRLMZZUNARFIOLNKDEFWPBUOJHPCVLWKNVSWDCELITPWKHEHWRLQLYWVXQROEOGFSQFSHBCYXCZCYPHUGZADAAEYZMKQNMIPWTEIBILCBIQTKUGUSTMCLJJAOQBQMRORAJTJBHDTXDIWUEBZTEQVLTHBNOPCOFKDMXCKQUYFGVTGXGIOXTRYYUKJVRN");
    msg.description.assign("GLTRMBGOVABAWDASSBWOQCHKLKJWIVYUNVZGEQNHMUSHWAMTWPEXOZUCKWLACSFPCSPKGDRCQRZMUPJAIJOTWYISLPVQVTIWYQBATQPGBIXYNLRWYNU");
    msg.leader_speed = 0.7257100846536775;
    msg.leader_bank_lim = 0.3698638291853614;
    msg.pos_sim_err_lim = 0.11406089947921105;
    msg.pos_sim_err_wrn = 0.22097897004299905;
    msg.pos_sim_err_timeout = 19558U;
    msg.converg_max = 0.2793071073916179;
    msg.converg_timeout = 57890U;
    msg.comms_timeout = 7768U;
    msg.turb_lim = 0.3378628661337749;
    msg.custom.assign("UDLEYRHPWTUBEGRMHICRFSLGOFJZCCWGZQAPFOORJPXSISNQRDXEJTSGNIUVOMQNHGYVXBVAZFCONFCFXUBRXJDBLXHVSBVDKIJEYVCLNPBZKNYYHMHFTHWUZPRRWMIWOWJPDGVZASAWQLHPGAJIPGKOKUKEBJFBOYDJHKGGWATTITUAWERMRIN");

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
    msg.setTimeStamp(0.6421141294326537);
    msg.setSource(33338U);
    msg.setSourceEntity(22U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("OQOEZAXSEUTWYQLUBRNYXAIQFGCTDKWFGLPCEZKHLFIYPDJZKMUUNOKSTRPKJQBSIAZDG");
    msg.formation_name.assign("GDVQMGSQKFPM");
    msg.plan_id.assign("CSNVEORKZYLYDBXSQCXJHSWMLYYGSYNOXINSZIGAYFARRXJQUIXJDRYGOWLSFPWDBSBDCNFKUCIZJIMEANQTNRPULXWITVHZPMDVQVRFITBZQMUAUMUUORTXDPWTBHFJOGNLBHCYGFUDFKLVQKCAHYFUHZDGXELPBIVQUWHJFENLXHTMEPVVGBKLTMJONHRBEOKEPMJRVCKLPOAFIGKBWTSPQXASANKZQPC");
    msg.description.assign("LNSNZWFRFTGBSJVWLJSIPWUIIVKPDDBJAFPKOMCJSEBCVLKMKFBPCRZQKDOFWEUHSGDWIOIRNEPWUNJQXLZHOYDHASBQHSSDPTGQVLMOSFMC");
    msg.leader_speed = 0.5523927329465625;
    msg.leader_bank_lim = 0.841197859473023;
    msg.pos_sim_err_lim = 0.13663258895696662;
    msg.pos_sim_err_wrn = 0.7717461124432098;
    msg.pos_sim_err_timeout = 61783U;
    msg.converg_max = 0.22674592248453174;
    msg.converg_timeout = 57506U;
    msg.comms_timeout = 3526U;
    msg.turb_lim = 0.7030998284213503;
    msg.custom.assign("OBLIAZLVKOJLIOQUGFEFNUYYECXAWQCCVCEFTWBOHWCDPMHJLPHDNYIVLUZBYCEBNGOIKGMVTFJNFCOMJUPRXWKYQVVRHCFOFRDYVUZSDNWRKYRXHEZQOBESAARQZSMXMBNDSTKEPFWPIQKPMDWY");

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
    msg.setTimeStamp(0.5197940861674315);
    msg.setSource(58285U);
    msg.setSourceEntity(130U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(212U);
    msg.control_src = 52057U;
    msg.control_ent = 27U;
    msg.timeout = 0.9247313351038232;
    msg.loiter_radius = 0.21840901390992873;
    msg.altitude_interval = 0.25512584742389877;

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
    msg.setTimeStamp(0.13290038034699325);
    msg.setSource(5858U);
    msg.setSourceEntity(201U);
    msg.setDestination(38176U);
    msg.setDestinationEntity(143U);
    msg.control_src = 25524U;
    msg.control_ent = 199U;
    msg.timeout = 0.11042155495295147;
    msg.loiter_radius = 0.2571868417330617;
    msg.altitude_interval = 0.621083623351191;

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
    msg.setTimeStamp(0.927747902495951);
    msg.setSource(53425U);
    msg.setSourceEntity(66U);
    msg.setDestination(45785U);
    msg.setDestinationEntity(7U);
    msg.control_src = 12930U;
    msg.control_ent = 163U;
    msg.timeout = 0.39597571634163453;
    msg.loiter_radius = 0.11758020308956374;
    msg.altitude_interval = 0.6324553314631464;

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
    msg.setTimeStamp(0.13877788730532348);
    msg.setSource(13572U);
    msg.setSourceEntity(47U);
    msg.setDestination(60835U);
    msg.setDestinationEntity(48U);
    msg.flags = 43U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9631067264160453;
    tmp_msg_0.speed_units = 72U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.43864843438087997;
    tmp_msg_1.z_units = 79U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7998317987146274;
    msg.lon = 0.5298571509249961;
    msg.radius = 0.7754298796659727;

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
    msg.setTimeStamp(0.44485208063457815);
    msg.setSource(50809U);
    msg.setSourceEntity(60U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(89U);
    msg.flags = 128U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7128029216956665;
    tmp_msg_0.speed_units = 252U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.33415775156365424;
    tmp_msg_1.z_units = 59U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6817736231705754;
    msg.lon = 0.8625203226990925;
    msg.radius = 0.26977980355081654;

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
    msg.setTimeStamp(0.21488820084297555);
    msg.setSource(53768U);
    msg.setSourceEntity(184U);
    msg.setDestination(42322U);
    msg.setDestinationEntity(84U);
    msg.flags = 93U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6468842967835357;
    tmp_msg_0.speed_units = 186U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2324815103187159;
    tmp_msg_1.z_units = 157U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3452723649734638;
    msg.lon = 0.24761331215920834;
    msg.radius = 0.37051302986880175;

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
    msg.setTimeStamp(0.13876602246311354);
    msg.setSource(55215U);
    msg.setSourceEntity(229U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(229U);
    msg.control_src = 27650U;
    msg.control_ent = 60U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 200U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.05006493809557022;
    tmp_tmp_msg_0_0.speed_units = 234U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.03777611684828941;
    tmp_tmp_msg_0_1.z_units = 241U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.32629552556892505;
    tmp_msg_0.lon = 0.13781859908618221;
    tmp_msg_0.radius = 0.19287300571060384;
    msg.reference.set(tmp_msg_0);
    msg.state = 199U;
    msg.proximity = 216U;

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
    msg.setTimeStamp(0.3546323745500113);
    msg.setSource(39538U);
    msg.setSourceEntity(60U);
    msg.setDestination(36121U);
    msg.setDestinationEntity(227U);
    msg.control_src = 57355U;
    msg.control_ent = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 225U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.041551691734552865;
    tmp_tmp_msg_0_0.speed_units = 109U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8616970476357689;
    tmp_tmp_msg_0_1.z_units = 21U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.310362314647192;
    tmp_msg_0.lon = 0.2793427127696618;
    tmp_msg_0.radius = 0.9737486859445557;
    msg.reference.set(tmp_msg_0);
    msg.state = 153U;
    msg.proximity = 189U;

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
    msg.setTimeStamp(0.18831497451347);
    msg.setSource(44614U);
    msg.setSourceEntity(45U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(157U);
    msg.control_src = 40795U;
    msg.control_ent = 163U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 46U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.004463437106670853;
    tmp_tmp_msg_0_0.speed_units = 56U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.858073569854979;
    tmp_tmp_msg_0_1.z_units = 112U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3001995210128775;
    tmp_msg_0.lon = 0.8481552711067329;
    tmp_msg_0.radius = 0.8888769649551459;
    msg.reference.set(tmp_msg_0);
    msg.state = 125U;
    msg.proximity = 49U;

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
    msg.setTimeStamp(0.20363441914182034);
    msg.setSource(26028U);
    msg.setSourceEntity(232U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.16051986554951292;
    msg.ay_cmd = 0.6664801423443864;
    msg.az_cmd = 0.4498735903150226;
    msg.ax_des = 0.735535751534678;
    msg.ay_des = 0.21146735708452857;
    msg.az_des = 0.4854035039755894;
    msg.virt_err_x = 0.37370677327461266;
    msg.virt_err_y = 0.08984860888371315;
    msg.virt_err_z = 0.3597864696816103;
    msg.surf_fdbk_x = 0.3152298221085841;
    msg.surf_fdbk_y = 0.05352213787360982;
    msg.surf_fdbk_z = 0.7359403861824131;
    msg.surf_unkn_x = 0.7693842281727101;
    msg.surf_unkn_y = 0.7406156005568714;
    msg.surf_unkn_z = 0.6509038759958734;
    msg.ss_x = 0.26024618793245;
    msg.ss_y = 0.5376413316687341;
    msg.ss_z = 0.07421427656841717;

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
    msg.setTimeStamp(0.09022075487549575);
    msg.setSource(31186U);
    msg.setSourceEntity(71U);
    msg.setDestination(12702U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.6795936948984527;
    msg.ay_cmd = 0.07563678108819993;
    msg.az_cmd = 0.742539803423707;
    msg.ax_des = 0.5287435837402389;
    msg.ay_des = 0.5680665320190578;
    msg.az_des = 0.07536454399351922;
    msg.virt_err_x = 0.12062049920589468;
    msg.virt_err_y = 0.37442110486743474;
    msg.virt_err_z = 0.5801412838343922;
    msg.surf_fdbk_x = 0.37432575238975285;
    msg.surf_fdbk_y = 0.9652636376735863;
    msg.surf_fdbk_z = 0.9296521057654124;
    msg.surf_unkn_x = 0.1310511381303845;
    msg.surf_unkn_y = 0.23551537378682652;
    msg.surf_unkn_z = 0.205351989163305;
    msg.ss_x = 0.779765695037724;
    msg.ss_y = 0.5722270712178772;
    msg.ss_z = 0.606258495218001;

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
    msg.setTimeStamp(0.19038079900309035);
    msg.setSource(43526U);
    msg.setSourceEntity(147U);
    msg.setDestination(44855U);
    msg.setDestinationEntity(48U);
    msg.ax_cmd = 0.27965639435772893;
    msg.ay_cmd = 0.9444176235175561;
    msg.az_cmd = 0.6263272679163255;
    msg.ax_des = 0.7982765045411874;
    msg.ay_des = 0.4068714823048266;
    msg.az_des = 0.9865777647149748;
    msg.virt_err_x = 0.6511429509533257;
    msg.virt_err_y = 0.1843446709872203;
    msg.virt_err_z = 0.11486789095976657;
    msg.surf_fdbk_x = 0.8083580791441157;
    msg.surf_fdbk_y = 0.37345067624664685;
    msg.surf_fdbk_z = 0.9916229912881088;
    msg.surf_unkn_x = 0.21716481810286425;
    msg.surf_unkn_y = 0.4084187204872284;
    msg.surf_unkn_z = 0.7748510934358953;
    msg.ss_x = 0.1691297105288777;
    msg.ss_y = 0.094712660897038;
    msg.ss_z = 0.4611795532092533;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MYYCECWNFZIUIREUICSPMAFKEKUPHFZWFTFGGLQMTQGKPQMUTED");
    tmp_msg_0.dist = 0.7589332190485845;
    tmp_msg_0.err = 0.4399024167176099;
    tmp_msg_0.ctrl_imp = 0.46384557099914236;
    tmp_msg_0.rel_dir_x = 0.20211379933316886;
    tmp_msg_0.rel_dir_y = 0.5533109757815152;
    tmp_msg_0.rel_dir_z = 0.04013726109015747;
    tmp_msg_0.err_x = 0.45635031823345173;
    tmp_msg_0.err_y = 0.44772275753760293;
    tmp_msg_0.err_z = 0.7289235692382272;
    tmp_msg_0.rf_err_x = 0.04915161527041456;
    tmp_msg_0.rf_err_y = 0.3280103774976697;
    tmp_msg_0.rf_err_z = 0.915388348736076;
    tmp_msg_0.rf_err_vx = 0.6518320370983657;
    tmp_msg_0.rf_err_vy = 0.005010708866175273;
    tmp_msg_0.rf_err_vz = 0.17231335290993033;
    tmp_msg_0.ss_x = 0.9785927340085478;
    tmp_msg_0.ss_y = 0.6995145163363755;
    tmp_msg_0.ss_z = 0.5458989751027714;
    tmp_msg_0.virt_err_x = 0.34911675637913264;
    tmp_msg_0.virt_err_y = 0.2558145561097157;
    tmp_msg_0.virt_err_z = 0.22026408447526558;
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
    msg.setTimeStamp(0.04543609797388748);
    msg.setSource(35956U);
    msg.setSourceEntity(92U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(87U);
    msg.s_id.assign("JPPNTYSWSGZFHQNKXUWSXNVLLXOTUEEUGULXJYJNTCMVWBTYCEZOOTZALVCIETVRAAJF");
    msg.dist = 0.4326820014335755;
    msg.err = 0.0278616082514751;
    msg.ctrl_imp = 0.24265341528890116;
    msg.rel_dir_x = 0.20764787478261626;
    msg.rel_dir_y = 0.0939701246716016;
    msg.rel_dir_z = 0.34672831084728006;
    msg.err_x = 0.45159960307506397;
    msg.err_y = 0.45149359547038614;
    msg.err_z = 0.3361579552033308;
    msg.rf_err_x = 0.44213934642932684;
    msg.rf_err_y = 0.003900386894780672;
    msg.rf_err_z = 0.6111720387660633;
    msg.rf_err_vx = 0.3641495245869242;
    msg.rf_err_vy = 0.1880139332188473;
    msg.rf_err_vz = 0.5896262649106467;
    msg.ss_x = 0.9807342061877996;
    msg.ss_y = 0.967468522509361;
    msg.ss_z = 0.4116826401472723;
    msg.virt_err_x = 0.38423428037174223;
    msg.virt_err_y = 0.5965061758775951;
    msg.virt_err_z = 0.21493460454376967;

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
    msg.setTimeStamp(0.9603086113713496);
    msg.setSource(5071U);
    msg.setSourceEntity(24U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(125U);
    msg.s_id.assign("PDZYVKIABRWTTRVSSEHHXYOJCSEEWACQSNPYPPQUGPUOVLUAMMWPMUIFTUGXYSDRNBHY");
    msg.dist = 0.3122451050816887;
    msg.err = 0.38955499842884633;
    msg.ctrl_imp = 0.35979538047987614;
    msg.rel_dir_x = 0.7893773444870475;
    msg.rel_dir_y = 0.3795088680758075;
    msg.rel_dir_z = 0.64150343291901;
    msg.err_x = 0.47517603818970455;
    msg.err_y = 0.2868629252239049;
    msg.err_z = 0.5239070620188083;
    msg.rf_err_x = 0.8518505929984649;
    msg.rf_err_y = 0.718023471780672;
    msg.rf_err_z = 0.1665088631336603;
    msg.rf_err_vx = 0.25508865992296725;
    msg.rf_err_vy = 0.4248379292726333;
    msg.rf_err_vz = 0.8755237881454111;
    msg.ss_x = 0.6557759382463424;
    msg.ss_y = 0.6753829784330859;
    msg.ss_z = 0.7305374519238225;
    msg.virt_err_x = 0.9366247769807166;
    msg.virt_err_y = 0.4397042703785594;
    msg.virt_err_z = 0.0276711285446255;

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
    msg.setTimeStamp(0.3544607138592062);
    msg.setSource(59073U);
    msg.setSourceEntity(211U);
    msg.setDestination(58576U);
    msg.setDestinationEntity(138U);
    msg.s_id.assign("FEWRLAWMLDCKCGETOZFFWNNNROUEWUOAGGASCAVMQNYSLHGFDIYHVOTVLNZADBYZGTWKLMTDGIWTFPYGKRKPPFZPZGVEQCGDNBPMDHTM");
    msg.dist = 0.3832579382590423;
    msg.err = 0.5873994855382146;
    msg.ctrl_imp = 0.1504200621291767;
    msg.rel_dir_x = 0.3455136935963127;
    msg.rel_dir_y = 0.31067729858230064;
    msg.rel_dir_z = 0.06955148311688875;
    msg.err_x = 0.3037034759595544;
    msg.err_y = 0.0737292350714347;
    msg.err_z = 0.7360932896710215;
    msg.rf_err_x = 0.8118610494260883;
    msg.rf_err_y = 0.2737566466458131;
    msg.rf_err_z = 0.7783549519531376;
    msg.rf_err_vx = 0.5543602205879651;
    msg.rf_err_vy = 0.7675645582542792;
    msg.rf_err_vz = 0.5760197255095872;
    msg.ss_x = 0.2716316964477158;
    msg.ss_y = 0.032685160530800283;
    msg.ss_z = 0.7697196686212466;
    msg.virt_err_x = 0.10970345003387394;
    msg.virt_err_y = 0.3304111192884668;
    msg.virt_err_z = 0.32002225983081567;

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
    msg.setTimeStamp(0.3337298175647022);
    msg.setSource(52359U);
    msg.setSourceEntity(64U);
    msg.setDestination(48171U);
    msg.setDestinationEntity(246U);
    msg.timeout = 23125U;
    msg.rpm = 0.47727363562497693;
    msg.direction = 204U;
    msg.custom.assign("LMJKPAZWUTFOEIVUCTOQUUFFRAJJJCUEHEABQNZCMICSJLVGSRDKEXNUHWKAKUVCMEFRXCYXPOSYQCBDTYMZLFSLOZBNTBDXOSGNIMYSVQWITBGDBXZSAUVGSLLEPCDHVNYEFHFQTGLXYAITSHRZMNNRKQE");

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
    msg.setTimeStamp(0.8873561636129199);
    msg.setSource(51205U);
    msg.setSourceEntity(31U);
    msg.setDestination(46709U);
    msg.setDestinationEntity(196U);
    msg.timeout = 31021U;
    msg.rpm = 0.36546566883077336;
    msg.direction = 129U;
    msg.custom.assign("FISHWNOGPSWNYMGMMUQFAWGDSZKTLLOFDVKUEGLCXNECPDYRWEXZJXKHZYHLMYKXBZDHYISULXNPWZJIPGSTLJUCCYKNGUVBHEHRPLHIRQORCMZMTAJSBFKTCXPBERWKVC");

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
    msg.setTimeStamp(0.23740932099899703);
    msg.setSource(46329U);
    msg.setSourceEntity(238U);
    msg.setDestination(16872U);
    msg.setDestinationEntity(202U);
    msg.timeout = 43950U;
    msg.rpm = 0.9226402326241252;
    msg.direction = 81U;
    msg.custom.assign("VFIAEDTSNZKRKNQYCHXTTOJBLAJCSVHZWPXMFNDENQEC");

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
    msg.setTimeStamp(0.08940486753535415);
    msg.setSource(6905U);
    msg.setSourceEntity(209U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(100U);
    msg.formation_name.assign("LVSWRHQBFVRNJUDQXBSAVNUXXOBCVNWIFSGRSWUKNOSVFBNZEKUQGFIEX");
    msg.type = 233U;
    msg.op = 126U;
    msg.group_name.assign("VDTAGHFOAMDRJPPIEXORULDKZVTOMJUXMQRGMRGOBUJXGKNQJRQDACWJSIJIRMXWOEVAHHXMSGSLETEGZRAZCSPWDHMNLPHKKSUEPQIBBWNNUJVBHIZOFCPTPGQOBQYDUQXZWZIPSYXFDMVSTOAGLSQLUUWVHBYNHKVKVCVLFFABCKYQVXFTTDWSRZCNAFOCAMAFBILQKBUCSYELFJJZZBXIPDY");
    msg.plan_id.assign("IWDLROGDHIEQNUSNATSTFVOMVEHVRUGNBENKJAXJNYNRADPUVWWEMZWLXELJAPALCSYTRBRGJOJINIAHWTKXCMZOHZIOXMFFKDKZOMVWXXIQPBKKCPLQYUYKBYMYUKHRZPJRAGWLGNACJSDTBYIJGPDZWQTEFDXDHCSCTILOEQZWMDVQFQAHMTPCQSVSQFJXBHZDLGBFUMYGFHV");
    msg.description.assign("VMMTREPWJEKAUPWENHTWXQKZIUWULKXHHZYPIUHVMQLBWSNRNTCUUSGGAZBQYFRYDXMIHICKCOAVGROGXXEDXFTWYBEXKMNC");
    msg.reference_frame = 139U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1990U;
    tmp_msg_0.off_x = 0.6239854031489196;
    tmp_msg_0.off_y = 0.9100311998915847;
    tmp_msg_0.off_z = 0.8012448148569251;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.23897144641761536;
    msg.leader_speed_min = 0.33608859873642793;
    msg.leader_speed_max = 0.7369031251128465;
    msg.leader_alt_min = 0.03432871573780516;
    msg.leader_alt_max = 0.2318365111910321;
    msg.pos_sim_err_lim = 0.751643878449233;
    msg.pos_sim_err_wrn = 0.583054577344023;
    msg.pos_sim_err_timeout = 47712U;
    msg.converg_max = 0.2312482504089185;
    msg.converg_timeout = 33092U;
    msg.comms_timeout = 63220U;
    msg.turb_lim = 0.9172178071014122;
    msg.custom.assign("DZGXBEXJKZPHQSWZMYRORMTIBBNBGTXEHNOICAMBENYJOCHPQZLKFAGXUFCWJFDQSMIWSHAGFPWVYMVWCQYVHHZHRJUIYKUTADDLUENQVMOVDOWBIFNEJZKKXYJWLJAGFXQPARCWERPOIVVJBKFQTEPTTVCPSLLDCDPSYZRPUOLRKGZNYFALOXNUQFSIDANQSNIHJRLBTCWKDPWSZOVDTJUCKRGIM");

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
    msg.setTimeStamp(0.9134035317231993);
    msg.setSource(48510U);
    msg.setSourceEntity(147U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(100U);
    msg.formation_name.assign("JERKDFUIYOMRBTPFLDWTQTDXDWZWKUCJRNFVPAGLFMHQFCSATSKVYSXHBJJUCHMRYKVVRWQGQCNMKDAOWQJYOYPRWUHTGKMXSLIIPRYVOKQJEINVPOXALOTCVQKROALLEAXBBUNUZSLQRMPSMJSDIMWWMGCKPUYIGNVKPUAOYDLVUFCEUCFZB");
    msg.type = 195U;
    msg.op = 186U;
    msg.group_name.assign("PUNCQBCFRTTCQAJRRERYDPFEWOPZKONUKZKJSIVJSIFJSVOMXZRYFNIWXKSACKDEQBJLKUSTXXLDMUVEWVOTQCOVATNCSPEWUZZDOMSYLEGFLRLHEUNOPTSFGWDRQMIEBWLZVJIHSUNYCXRGEWYCQAHNMGHYAKGWWDYLNDIHGZIXQBHKPFEPDUFGTHXQVMXIO");
    msg.plan_id.assign("TOULUWPMDGXKHFZZDWYCNNROHMOYXAFXZOJYQGUBKMIGJQERTRWDHYBCEPMDBNEVHVRZCHUMMAFAYQSVPIPLOTUHDQPNSVTOLPRRNAHVMIBK");
    msg.description.assign("JQFQIOURTPCROEMELFFBWWYFDGXIIEBNWPYYUPUMPSSMGYSTQHFNZVLQANZTHPFENZMAXLCCJBTGEMLHRZXVYDKZOPHTXSALWPJPYLYHIDHJUNBD");
    msg.reference_frame = 227U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1133U;
    tmp_msg_0.off_x = 0.9961126065819522;
    tmp_msg_0.off_y = 0.19661404819710826;
    tmp_msg_0.off_z = 0.15750288189661332;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5446461224974558;
    msg.leader_speed_min = 0.07691466030756877;
    msg.leader_speed_max = 0.6651094497709497;
    msg.leader_alt_min = 0.7783629106752988;
    msg.leader_alt_max = 0.2192318125002083;
    msg.pos_sim_err_lim = 0.18763862125725594;
    msg.pos_sim_err_wrn = 0.8008419495297927;
    msg.pos_sim_err_timeout = 49042U;
    msg.converg_max = 0.45969295805949284;
    msg.converg_timeout = 21482U;
    msg.comms_timeout = 58616U;
    msg.turb_lim = 0.7846985891014494;
    msg.custom.assign("KZUJJSDVPCMHZYRIDYOFXFGBWEJOXMFSKNUTGVSOESFUSJXDVADFLESGJEBOLVAFOELWOQYNMVHXITYNWJIDBRTREPLDCSPHCFTWAWAPPGZIBQIXADIUVRGNFDA");

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
    msg.setTimeStamp(0.37393752420243265);
    msg.setSource(18944U);
    msg.setSourceEntity(137U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("FXLHPNZUXIWGREIYKYRIGGYCOSARJQTPRPOFEFDGJSNNPBNIHYKMMKLFTXALDBYVENXOUJIUZDTDKPYPMEMAGHJHEDOFITTQKIRHDZCLECEABVSFFEVMDRWTWCOWJVXCRESCVVKXJOJVTWQABUQFZKUAZZWLCQPHPBQNCXWSWAJYQGZGIVYSMSWUTHUQSODZYLBNMCXZHMOHXPELKNNKUVGXNLROWQQRTPIZGARBALLMS");
    msg.type = 50U;
    msg.op = 24U;
    msg.group_name.assign("XPJHIANYAZNKHHKYJOACWEGSQYTLCTBAOHCEMVCISFRPULBMMFSRTYDDZPWXLUQUQNMDAVSARXRRVI");
    msg.plan_id.assign("LXNCOWBIBUEOORMJMZCLNUEZWXVBMVCRGWADERHGDNQAHNAQYPJQJDEONWAMTJTALCGUJXORSWJVCVFMQF");
    msg.description.assign("DWMDGMYTPHARUSRXFTCLUQQETFHQTONGPYTHTUYKPFBDKYEWIJSLMJWBXOTOYATILHUZHQFANURSGZGBUANRLZJNIQPMXEASPDSJCOINNJWLDEIYMPGYCINVZSWWJZCVPLLXULSGCGAKAWCQBKUFQRFCJDUFVJIVOCGOQVMBXVFLVNIH");
    msg.reference_frame = 46U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11261U;
    tmp_msg_0.off_x = 0.9543246805408726;
    tmp_msg_0.off_y = 0.12106939686761231;
    tmp_msg_0.off_z = 0.8306286357437679;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8822754014554709;
    msg.leader_speed_min = 0.4422969633657653;
    msg.leader_speed_max = 0.48498871840298574;
    msg.leader_alt_min = 0.7006762116226837;
    msg.leader_alt_max = 0.6983798205599377;
    msg.pos_sim_err_lim = 0.16498189439297128;
    msg.pos_sim_err_wrn = 0.3950170711623243;
    msg.pos_sim_err_timeout = 65372U;
    msg.converg_max = 0.6665922139983604;
    msg.converg_timeout = 710U;
    msg.comms_timeout = 44729U;
    msg.turb_lim = 0.11091598665972535;
    msg.custom.assign("FOHUWWGJXWJBFFNZZICLDURVNZUTYCIAIRNQUKHKSHYOFNKAGIVNTFBWONHHYQFGKEQXJAZVLOWJIQUZCRGVVDOPAFQXVYQRYWCEOOLDHEMLJLSBDNXFJLOBTJGRXI");

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
    msg.setTimeStamp(0.29177811404174037);
    msg.setSource(49604U);
    msg.setSourceEntity(209U);
    msg.setDestination(2778U);
    msg.setDestinationEntity(74U);
    msg.timeout = 11987U;
    msg.lat = 0.5605801361958463;
    msg.lon = 0.7596273070322863;
    msg.z = 0.9784714469276256;
    msg.z_units = 184U;
    msg.speed = 0.5521275768799723;
    msg.speed_units = 70U;
    msg.custom.assign("SNLPXYIBHZJFQKUGSSKTBVGRBATHEFRPDJAMBGULOBJOZAPGMJRAEQEIWYLMCZTNXWRYKDQFJNMFCBNNTMWPNDFBRQZHQDHHPVYEOSLLTBOPUATKKEMBVDQJEZNRXILQVXUD");

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
    msg.setTimeStamp(0.6368093081922082);
    msg.setSource(39397U);
    msg.setSourceEntity(232U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(136U);
    msg.timeout = 59674U;
    msg.lat = 0.5303498883655182;
    msg.lon = 0.828789407193931;
    msg.z = 0.2509044247714961;
    msg.z_units = 9U;
    msg.speed = 0.13267930196956135;
    msg.speed_units = 32U;
    msg.custom.assign("PTHFPUBSUELBWPZONJSIZGDXVXLLIXSRTMQOTVLRCZXMIWAEKHUAXXJHOKMNWMWNGCTSNPQLQKDAPWAZUVFRFWVGEHKUEDKSIRGFYYFBTIXQGYZKMETWHGGAPJVEQCRFIVYICMSIOGPDENXCTTXJWKEAMVVROAQNQBMSBYJVERYHDGCNFRQUKDYSUJJYNBBF");

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
    msg.setTimeStamp(0.8401156002499145);
    msg.setSource(12070U);
    msg.setSourceEntity(119U);
    msg.setDestination(64357U);
    msg.setDestinationEntity(31U);
    msg.timeout = 13495U;
    msg.lat = 0.7257388387368524;
    msg.lon = 0.05765195746095342;
    msg.z = 0.45793772077365436;
    msg.z_units = 47U;
    msg.speed = 0.560700455254305;
    msg.speed_units = 196U;
    msg.custom.assign("TXVZNFHMQURERIECGDLWDIJEPGZWJKBVWCYZTKJOBFXBGQIGAVLFQHPVLXNPBPDRHCSCQFWZYOMXWYFCIPAOHICMERSYRMNAQSTGVBMRUHYUHUDQTOQQVBSIFKRJXFXXGNHFPWEKXQNKOJATOIEMLADYMIZLZGSARABZKAXUFLGBZOMRKDPMCDLUDYWCNMFVV");

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
    msg.setTimeStamp(0.15839374670163053);
    msg.setSource(39648U);
    msg.setSourceEntity(186U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(251U);
    msg.timeout = 30479U;
    msg.lat = 0.0031173360199263644;
    msg.lon = 0.020545398831196215;
    msg.z = 0.15568789000685757;
    msg.z_units = 1U;
    msg.speed = 0.049653443497881145;
    msg.speed_units = 34U;
    msg.custom.assign("CZJKKRFWQKVABDSABQUHMZYQIRCFILOWRWOKYKJGPODCJGCJZQXEBMAZGRHPLMVSPREDSVOAJPHIONLDSQAJEQQJMUXLNOTJHBMEYYSMDBGEWXNHAOVHVXPGCLPWFVIBIUWEX");

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
    msg.setTimeStamp(0.9498410927953951);
    msg.setSource(65500U);
    msg.setSourceEntity(101U);
    msg.setDestination(62477U);
    msg.setDestinationEntity(120U);
    msg.timeout = 23617U;
    msg.lat = 0.8581521182036107;
    msg.lon = 0.2503705216733545;
    msg.z = 0.428375950393284;
    msg.z_units = 52U;
    msg.speed = 0.6525404722819691;
    msg.speed_units = 157U;
    msg.custom.assign("HPASKDMJSYXLMVFTERIKGGKRMFPJWFOLVERXBYVLEQNOZYBLQXZOOWSMCKPORQELGNSXLXWVN");

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
    msg.setTimeStamp(0.5288159319929899);
    msg.setSource(60851U);
    msg.setSourceEntity(63U);
    msg.setDestination(20118U);
    msg.setDestinationEntity(193U);
    msg.timeout = 26107U;
    msg.lat = 0.09987255867652867;
    msg.lon = 0.7243936066022164;
    msg.z = 0.325784852494741;
    msg.z_units = 165U;
    msg.speed = 0.6598614594277042;
    msg.speed_units = 160U;
    msg.custom.assign("FYGHCNGXWOLAUMJSPSBPVBRXWYAFOPOKQBXDQRQXUBRSIYAKDKCCNOIBBEMOLAHFGTISPDZKHMXDDSPSLELZWOAPTRPYFTIEJFUVQDRLDDILHAJZSLFJGEJLYLMIKD");

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
    msg.setTimeStamp(0.5699530399070075);
    msg.setSource(11336U);
    msg.setSourceEntity(120U);
    msg.setDestination(37399U);
    msg.setDestinationEntity(197U);
    msg.arrival_time = 0.29632592187757456;
    msg.lat = 0.9468992297446164;
    msg.lon = 0.2597086067372866;
    msg.z = 0.18786843484225157;
    msg.z_units = 113U;
    msg.travel_z = 0.5024979808717532;
    msg.travel_z_units = 104U;
    msg.delayed = 98U;

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
    msg.setTimeStamp(0.1280941729301498);
    msg.setSource(44040U);
    msg.setSourceEntity(50U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(247U);
    msg.arrival_time = 0.3780737630453255;
    msg.lat = 0.06738890532020692;
    msg.lon = 0.6150128019149929;
    msg.z = 0.8297161168626587;
    msg.z_units = 48U;
    msg.travel_z = 0.32025177770599766;
    msg.travel_z_units = 7U;
    msg.delayed = 170U;

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
    msg.setTimeStamp(0.1873638699740252);
    msg.setSource(52497U);
    msg.setSourceEntity(72U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(213U);
    msg.arrival_time = 0.8076386071257068;
    msg.lat = 0.5955087575441771;
    msg.lon = 0.7371163900555214;
    msg.z = 0.7672302675470587;
    msg.z_units = 68U;
    msg.travel_z = 0.5094502790047977;
    msg.travel_z_units = 9U;
    msg.delayed = 6U;

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
    msg.setTimeStamp(0.12871065279674376);
    msg.setSource(47698U);
    msg.setSourceEntity(160U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.7150012819933422;
    msg.lon = 0.8313719885932201;
    msg.z = 0.12812608698778305;
    msg.z_units = 169U;
    msg.speed = 0.20308999262462557;
    msg.speed_units = 144U;
    msg.bearing = 0.47444476600018437;
    msg.cross_angle = 0.1834204676105612;
    msg.width = 0.6318775655752052;
    msg.length = 0.9225930485670556;
    msg.coff = 43U;
    msg.angaperture = 0.9275500574518879;
    msg.range = 58908U;
    msg.overlap = 231U;
    msg.flags = 247U;
    msg.custom.assign("GXBHYMNZRWNQXBSTYYQYSNOXPGPDUIVQNCRIDTKMMOJEILAVORSHGDWTMKHKBNVZEBVHMAZSBKZVRBRZNTOALKWZECIEACPCLDAEPEECDIPYWUYNGSULCVOPKTHPUIMFFOANRXTDYQFCUCSKGASFAYRWGMMRSLEL");

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
    msg.setTimeStamp(0.925088627276616);
    msg.setSource(21121U);
    msg.setSourceEntity(35U);
    msg.setDestination(18666U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.7839880403812941;
    msg.lon = 0.732684353161145;
    msg.z = 0.2224107233933813;
    msg.z_units = 40U;
    msg.speed = 0.739380844079142;
    msg.speed_units = 65U;
    msg.bearing = 0.8078242445833838;
    msg.cross_angle = 0.3666301929804706;
    msg.width = 0.28122438749271816;
    msg.length = 0.9146552233378799;
    msg.coff = 128U;
    msg.angaperture = 0.41367116055264086;
    msg.range = 49077U;
    msg.overlap = 201U;
    msg.flags = 208U;
    msg.custom.assign("RUHTHUKGCILOIJUQXPEGZMQKFLTXHQUMWWPRAVIHFDIEVMQWCEISVJARDRECQEJTCFBZBXKGUHLNJJQNMROTLQDJEXXSMAYUM");

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
    msg.setTimeStamp(0.3550910454523353);
    msg.setSource(17733U);
    msg.setSourceEntity(131U);
    msg.setDestination(54715U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.3291355009481629;
    msg.lon = 0.6031010257338857;
    msg.z = 0.9995446868143748;
    msg.z_units = 67U;
    msg.speed = 0.08189616869994709;
    msg.speed_units = 112U;
    msg.bearing = 0.4847109623833197;
    msg.cross_angle = 0.1541649677951208;
    msg.width = 0.6099230155634869;
    msg.length = 0.26504088142681936;
    msg.coff = 67U;
    msg.angaperture = 0.07027858972790912;
    msg.range = 42077U;
    msg.overlap = 189U;
    msg.flags = 96U;
    msg.custom.assign("MNZTLDXTCVOAUMGFPBJSYLESKIRGBDVXUERROMOEPIGOQCDIKILNCSCGNIHHCFVUTRFPREUMEWNVXKJDZTQOZXOBLXUHFSJXKDQJWSBMWYGZVQVLWPJYAEQUTBCTHDOFPABAKESMSKONYHKNGYBQGUJDZ");

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
    msg.setTimeStamp(0.6309787231473137);
    msg.setSource(59361U);
    msg.setSourceEntity(140U);
    msg.setDestination(798U);
    msg.setDestinationEntity(196U);
    msg.timeout = 45601U;
    msg.lat = 0.26645068507128356;
    msg.lon = 0.5079650257227752;
    msg.z = 0.9616939881845381;
    msg.z_units = 60U;
    msg.speed = 0.8873536709943012;
    msg.speed_units = 118U;
    msg.syringe0 = 170U;
    msg.syringe1 = 160U;
    msg.syringe2 = 64U;
    msg.custom.assign("CGPXELHVEFFIZYIBLZIGDFPTFZCLLYWUSJZUJQNFWWDPXZROAPCNGPKNOJIOQMYATQIXVLRBMWPUZCUOAVTSISYUWYEHKHFHIGXMWNRQMTODJQUQVEVCRXBHZA");

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
    msg.setTimeStamp(0.73323188165409);
    msg.setSource(55370U);
    msg.setSourceEntity(94U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(139U);
    msg.timeout = 34330U;
    msg.lat = 0.9507330562942293;
    msg.lon = 0.0758300066737494;
    msg.z = 0.6139394904298833;
    msg.z_units = 47U;
    msg.speed = 0.8722145499076727;
    msg.speed_units = 156U;
    msg.syringe0 = 148U;
    msg.syringe1 = 198U;
    msg.syringe2 = 155U;
    msg.custom.assign("AXBWVZYQXZGUIMKTBMXWROQINCJYVPPZNIVCMQLFNPGSEPNASKSVBKHYKDXMRZUXEINICXKVYDSBLCWARDTJLEHADBPIGEBMBHOANRKOKHFQIHDUNLOETQYKEZKHDUTUCOGYFIHOURPRBDAUJJQLDFWSIBXTFYGHJGYTWYNJMLPLZAEUKQPOCQDJRRFYNQMGUMTHCWOLXMVWA");

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
    msg.setTimeStamp(0.8358144338159685);
    msg.setSource(50380U);
    msg.setSourceEntity(182U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(94U);
    msg.timeout = 50798U;
    msg.lat = 0.4730778702424976;
    msg.lon = 0.05864584935789108;
    msg.z = 0.7485167418106304;
    msg.z_units = 211U;
    msg.speed = 0.862926571659245;
    msg.speed_units = 194U;
    msg.syringe0 = 141U;
    msg.syringe1 = 209U;
    msg.syringe2 = 75U;
    msg.custom.assign("CVUAFRYPYHAZQNCSRUB");

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
    msg.setTimeStamp(0.9011295984699391);
    msg.setSource(8595U);
    msg.setSourceEntity(162U);
    msg.setDestination(34323U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.5466604073511238);
    msg.setSource(16686U);
    msg.setSourceEntity(32U);
    msg.setDestination(22403U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.028548271340189113);
    msg.setSource(15183U);
    msg.setSourceEntity(124U);
    msg.setDestination(33822U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.8325914820183095);
    msg.setSource(38864U);
    msg.setSourceEntity(102U);
    msg.setDestination(62788U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.3776229536697777;
    msg.lon = 0.47025406801476466;
    msg.z = 0.16628174206117474;
    msg.z_units = 52U;
    msg.speed = 0.6375236792319361;
    msg.speed_units = 61U;
    msg.takeoff_pitch = 0.25635339403225343;
    msg.custom.assign("RVYAFNHFCHYZSVHLEPMAXRNLTYJFATBEQABMLHOBAKPPIRXMTMJQLHLXIPUDVWVKVQRMDHZATDJSYYGILDPRJ");

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
    msg.setTimeStamp(0.5408639854913512);
    msg.setSource(60039U);
    msg.setSourceEntity(15U);
    msg.setDestination(40706U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.5445778024791006;
    msg.lon = 0.28880642117061195;
    msg.z = 0.3054409211215504;
    msg.z_units = 85U;
    msg.speed = 0.33537079786289437;
    msg.speed_units = 53U;
    msg.takeoff_pitch = 0.718104558289846;
    msg.custom.assign("FEHRSLRKKIBXNZLHUJTQRHFWFDQMEBPPDCDW");

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
    msg.setTimeStamp(0.11718385306008017);
    msg.setSource(62345U);
    msg.setSourceEntity(110U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.7083931608501126;
    msg.lon = 0.8762918515653877;
    msg.z = 0.15366861041411173;
    msg.z_units = 43U;
    msg.speed = 0.7227308852649904;
    msg.speed_units = 200U;
    msg.takeoff_pitch = 0.9430555518566511;
    msg.custom.assign("QJNDSXTDMEQRXQGMMVLNKAGOUEGZRVUWTRJCBMFGKCDC");

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
    msg.setTimeStamp(0.5338894488394823);
    msg.setSource(37887U);
    msg.setSourceEntity(31U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.8430978431712953;
    msg.lon = 0.1890537800805342;
    msg.z = 0.3444645351853123;
    msg.z_units = 160U;
    msg.speed = 0.8346158685920246;
    msg.speed_units = 115U;
    msg.abort_z = 0.26224865970982314;
    msg.bearing = 0.7275922654031874;
    msg.glide_slope = 14U;
    msg.glide_slope_alt = 0.8167820929943382;
    msg.custom.assign("LPGIJLUDVWVVTFHFZETCORAPGMYHFMALDBKIGSKUPPOMEXSJWPGNUXKJRURSIBMJYDPTPREYPJWCUIFSKTOZEMTACGGDKPUKBXDWYJXQIKOYTZHKLTCWPCXSQOAIFXFVBCEHAQOOINMESGVDLNNAVNSZRMBAQDRJHQXERYJXCRNFSWBHONQUHBMOHVECWDYEKRTZQVIQGTFFYAZVSZJBWTZHMIAUM");

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
    msg.setTimeStamp(0.4315270529632348);
    msg.setSource(27059U);
    msg.setSourceEntity(248U);
    msg.setDestination(61145U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.44482745716337824;
    msg.lon = 0.13988218854155599;
    msg.z = 0.05849712739208168;
    msg.z_units = 192U;
    msg.speed = 0.4020314473838059;
    msg.speed_units = 82U;
    msg.abort_z = 0.4020900218287363;
    msg.bearing = 0.2377585131920098;
    msg.glide_slope = 148U;
    msg.glide_slope_alt = 0.9454001769844834;
    msg.custom.assign("XXNZMEXZVQEGAUYUMWJBVAQQUUTBYQRJFDLQOWRTEBENZIJQMGVXLITFNNDZHYTICMDYGRHFTSSVKGALYOKSNJPNWTMRPFIKPESJUBIPWGFFREYHBQTPRMVVHXQCKKOCWCWAZSEJIOBESODN");

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
    msg.setTimeStamp(0.78606732420183);
    msg.setSource(19145U);
    msg.setSourceEntity(214U);
    msg.setDestination(50532U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.511608079322642;
    msg.lon = 0.8705183309324729;
    msg.z = 0.4675952751717959;
    msg.z_units = 245U;
    msg.speed = 0.9426637183694231;
    msg.speed_units = 203U;
    msg.abort_z = 0.9838709040387437;
    msg.bearing = 0.6645894595366657;
    msg.glide_slope = 230U;
    msg.glide_slope_alt = 0.051400846363341635;
    msg.custom.assign("XBLWCEZFGAKWFRVNNWYJAMGFPCMOTTPF");

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
    msg.setTimeStamp(0.09866478804452172);
    msg.setSource(15044U);
    msg.setSourceEntity(223U);
    msg.setDestination(51560U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.9691125068115668;
    msg.lon = 0.851395133215253;
    msg.speed = 0.3413584171932884;
    msg.speed_units = 146U;
    msg.limits = 128U;
    msg.max_depth = 0.3659510897679522;
    msg.min_alt = 0.6927213898456074;
    msg.time_limit = 0.08646267951237785;
    msg.controller.assign("UDQBZVPINGGDBSZBQOJKHTZIQCBLUEPVCDYIWSROTKEAJWKZNLYDNCIKPMLYTATAQGWZGXRYOYXFFDOCPFVNUSQOSACQJRZODTHENVH");
    msg.custom.assign("VOISKCHHGGUZISWJDKEYLWQQUQKSLSRLSACZPXXNYWMVJIIJJOTUFTLONLYFQMJWRUHXTOMJLAIHATRZXNUODEZUSKDFNDPWXBRZFOIECLOKTYQZMKEAC");

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
    msg.setTimeStamp(0.659959325385958);
    msg.setSource(37232U);
    msg.setSourceEntity(26U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.20461184724625636;
    msg.lon = 0.25875593634936167;
    msg.speed = 0.2411547580005683;
    msg.speed_units = 188U;
    msg.limits = 217U;
    msg.max_depth = 0.8195193497082259;
    msg.min_alt = 0.9440605240237215;
    msg.time_limit = 0.305185160046094;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5361577278997584;
    tmp_msg_0.lon = 0.5335639320785474;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GQRNGUBOCSBGBSRKMKZNWEEDIZRGZMULOHTBAEOIHDCANICHWZQUJHTMYTJHGZPFPXGDYFYOVHTPXVPXDLLUKZTWZJUHKIYHNSIXLQVSFTVJXYAWWAJDZMOJZAAMUCHQ");
    msg.custom.assign("KYAVKISQXZYXHLOEBBMODKCGDEFNJMEQUARGIHMKPPCTYJHAYMYJIBTFT");

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
    msg.setTimeStamp(0.32857400820932137);
    msg.setSource(38280U);
    msg.setSourceEntity(10U);
    msg.setDestination(17832U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.0019583839168048067;
    msg.lon = 0.9812366755228096;
    msg.speed = 0.13820842818003087;
    msg.speed_units = 151U;
    msg.limits = 1U;
    msg.max_depth = 0.9136353868955347;
    msg.min_alt = 0.37416726598057726;
    msg.time_limit = 0.5516765354517613;
    msg.controller.assign("QUOLABYUNOIAFEJTDWDPQONJOINYIKFZHEFVKGVQTIPLKYLTRTULHBZMJMKPRHARNTTHBMCRZBLOUIZTOFBUOFIECRMJQJYAMJHGWLMNXIMZYSKCSZEASXEGKRELAPDJDHETVISQE");
    msg.custom.assign("WSSVTEJSBPNXCGVXHVLTRXMCBBFTGDIRIYCWEKKISZOOFMPXDKQRJILAJXLBI");

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
    msg.setTimeStamp(0.5374320673910898);
    msg.setSource(16257U);
    msg.setSourceEntity(181U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(133U);
    msg.target.assign("CKQQWKOLWSRETDRZNBSNYVPLSWQCHXFHUOQPWAKPTDNPVHAWCLFGRRUHOBX");
    msg.max_speed = 0.6304036147770413;
    msg.speed_units = 213U;
    msg.lat = 0.703371088895247;
    msg.lon = 0.5360696696449448;
    msg.z = 0.7959554241068254;
    msg.z_units = 163U;
    msg.custom.assign("PHSDIBCBGBURFNKFTYOZQWIXMIRGHMQQJVWTTUVNGWDXZXSHF");

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
    msg.setTimeStamp(0.2492012169485388);
    msg.setSource(63763U);
    msg.setSourceEntity(82U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(50U);
    msg.target.assign("YDMBQVYZTFLTEAINMBJLZENORZYAGUGGCITAKICBPZJMAXCSIUYZAWRNOGWPZIGOQSUTEWRLZUCOLMLNBGOVVBWDIPRBBGNIYWHORCXXDACWIHMORQZKDAKVXJEDFDHEPPFXKVUQFZXJUPFFNIVARPHXCTSQLGHTEOLMNAGVUEKFBNBPRJTSRVYFMKZBPTKKTKQELCJIJYHWWQVESHUDOQRNCYLQJMTSJSXO");
    msg.max_speed = 0.6350898819405593;
    msg.speed_units = 147U;
    msg.lat = 0.2783768214027542;
    msg.lon = 0.21068324041403141;
    msg.z = 0.9474947534001159;
    msg.z_units = 135U;
    msg.custom.assign("RKLEQINCDYPEVKSOLWICUUFJVOBCUNSNTZGVTFCAWENSKODRSZBWHPUNFOMXKGRCQBNALCNCTKFHSWGDZPDWGDTIJVKPOZMRREPXFHIALYRHOTZUMMLZZVDMEGQMDDYIMXTLBWELHQFYS");

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
    msg.setTimeStamp(0.9308431984020502);
    msg.setSource(9509U);
    msg.setSourceEntity(72U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(243U);
    msg.target.assign("TYQDJXUICXZFLNUEACDQTHJCGGAHJFUZFVHLHUFXWWSOPSCPCRRTGPZJBZNWOGNITHIQHLBGTJHOBAQSKRTVYXMKRYEOIUPESDFKLJZSZIRRKOPQCRLDHWUFOJVXEJEUBBXBMEAYWDTSDKOMVFBAAAWKG");
    msg.max_speed = 0.26494678291330076;
    msg.speed_units = 60U;
    msg.lat = 0.609298249187482;
    msg.lon = 0.45895633842374794;
    msg.z = 0.7657466648186729;
    msg.z_units = 52U;
    msg.custom.assign("KTPMMTSPZPLOQPAOALYKDZCRBGSYEXISYZIENUFJDGJLCPBMFOBELA");

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
    msg.setTimeStamp(0.3646316898548927);
    msg.setSource(37629U);
    msg.setSourceEntity(74U);
    msg.setDestination(12469U);
    msg.setDestinationEntity(71U);
    msg.timeout = 14365U;
    msg.lat = 0.2547707667819141;
    msg.lon = 0.697354166334605;
    msg.speed = 0.4832387693033269;
    msg.speed_units = 163U;
    msg.custom.assign("DMJKQDKGZOJCBAYAIICJYZBPZMXRPLJPKPWFHLAJLEQAUKRASLYHWSADFNZIAXCSQWGMLPGLSOT");

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
    msg.setTimeStamp(0.394852044950877);
    msg.setSource(10501U);
    msg.setSourceEntity(173U);
    msg.setDestination(2612U);
    msg.setDestinationEntity(109U);
    msg.timeout = 40307U;
    msg.lat = 0.8132061126853712;
    msg.lon = 0.8741250116947525;
    msg.speed = 0.7877644196293014;
    msg.speed_units = 144U;
    msg.custom.assign("ARMVSPALHMJKVJTGOLOLLXXGCDMFOCROFZZECTJSQBTSXQMQZLQRDIMBNQSYZCWPBPCQUXVVXPJWKJYKKQZURVBIGFHLVIKWVQRJDDSXMHBS");

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
    msg.setTimeStamp(0.46654474424639647);
    msg.setSource(59880U);
    msg.setSourceEntity(67U);
    msg.setDestination(48788U);
    msg.setDestinationEntity(150U);
    msg.timeout = 50802U;
    msg.lat = 0.9938036839983808;
    msg.lon = 0.41636729331625244;
    msg.speed = 0.5231494724369493;
    msg.speed_units = 161U;
    msg.custom.assign("IXXUBGREWBLPBFNIHJGJTXFNJJEAHVYASVJVXTKCORTBGKZIAVFHYRSPQVAJZUBLWAXZQNXWYKPRDLCWCKKZULPSEDFZZWKFTGOYTMMJZXPXABGCBKLNECQHHSEFAFSUSBTGI");

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
    msg.setTimeStamp(0.9040050802145487);
    msg.setSource(9560U);
    msg.setSourceEntity(20U);
    msg.setDestination(18512U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.34865010489983417;
    msg.lon = 0.22427765389463938;
    msg.z = 0.34891854587422877;
    msg.z_units = 130U;
    msg.radius = 0.9078990159038004;
    msg.duration = 57588U;
    msg.speed = 0.1880240588519686;
    msg.speed_units = 160U;
    msg.popup_period = 58702U;
    msg.popup_duration = 3202U;
    msg.flags = 27U;
    msg.custom.assign("ZNFNJMNBBFJYKAGIBBTKUSUNJNHYGJBXCZEAREUCWAGPSXYRCAKPOSJAOPCDUAMVWFIDEVIPQULPPVLOWTZLGWBUFSFWMXHQRQZFHYFTDYSWHAERKOQJZRWORNNSXCHFVGVVVEHDMRIFSJLQKPWTKPLAJL");

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
    msg.setTimeStamp(0.7129278031743278);
    msg.setSource(37777U);
    msg.setSourceEntity(250U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.48735731629842194;
    msg.lon = 0.00997194613675545;
    msg.z = 0.09567058875019041;
    msg.z_units = 4U;
    msg.radius = 0.368974898822638;
    msg.duration = 8528U;
    msg.speed = 0.4206813846356102;
    msg.speed_units = 22U;
    msg.popup_period = 13957U;
    msg.popup_duration = 64U;
    msg.flags = 110U;
    msg.custom.assign("MKBHMWUURRPCSYTZNZOMAACLLWISULZJRSHQEUBGYKREITKYKNUJWBCVVEARYPSBMKFTATIGMQPYGBWWCVSKZEGNWBJEIXNVPLHAGADHVKGPXTJHJZTVTTCNHWASNHZUHI");

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
    msg.setTimeStamp(0.7258317743512331);
    msg.setSource(19611U);
    msg.setSourceEntity(16U);
    msg.setDestination(10529U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.8162269225282914;
    msg.lon = 0.9080290415136383;
    msg.z = 0.28038033259114226;
    msg.z_units = 242U;
    msg.radius = 0.6560032319777569;
    msg.duration = 22846U;
    msg.speed = 0.6194457431172206;
    msg.speed_units = 199U;
    msg.popup_period = 37461U;
    msg.popup_duration = 4638U;
    msg.flags = 177U;
    msg.custom.assign("FIKWDIJHOBKYEGENUEWDPLXDFIJJEQDUQKWSRTZZLNKTCGHAMMQTOTSCVF");

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
    msg.setTimeStamp(0.6585394981566755);
    msg.setSource(23734U);
    msg.setSourceEntity(42U);
    msg.setDestination(17684U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.9780250767340418);
    msg.setSource(25763U);
    msg.setSourceEntity(165U);
    msg.setDestination(6620U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.3703795340370908);
    msg.setSource(14418U);
    msg.setSourceEntity(161U);
    msg.setDestination(61312U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.4338880894118232);
    msg.setSource(22001U);
    msg.setSourceEntity(44U);
    msg.setDestination(48204U);
    msg.setDestinationEntity(237U);
    msg.timeout = 20460U;
    msg.lat = 0.9782242906445393;
    msg.lon = 0.29588329654898904;
    msg.z = 0.45642445070783233;
    msg.z_units = 129U;
    msg.speed = 0.1823432365740143;
    msg.speed_units = 119U;
    msg.bearing = 0.2887935113067711;
    msg.width = 0.24490740364149866;
    msg.direction = 233U;
    msg.custom.assign("UXXLRTIMPCMIVVKIAWMQCXOPLQWGLWIJELFFSDKFCENPWZYOUIUHBLSJZTGCSQSWRATUVFMAEKSWRCXTXUJDGNVBNKXCEFGOJGWMZXSIVDFEQHZYYNUQEUSUGBJMZRNTUTFBEMANIWVPFIPRLKTJIQKNYZKPNBVAAZTWXAZOKKAGYQDLGVRBVZSLCODJMCRDCRDHOWEGBIHCNHERGJYYJHQOJHTDMHQRFAXPMZFOBK");

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
    msg.setTimeStamp(0.34860828960650525);
    msg.setSource(2470U);
    msg.setSourceEntity(50U);
    msg.setDestination(32486U);
    msg.setDestinationEntity(174U);
    msg.timeout = 56175U;
    msg.lat = 0.6683839539564754;
    msg.lon = 0.6513512545860132;
    msg.z = 0.386100478907623;
    msg.z_units = 79U;
    msg.speed = 0.2854871118149639;
    msg.speed_units = 65U;
    msg.bearing = 0.278251336556967;
    msg.width = 0.8322408283204576;
    msg.direction = 210U;
    msg.custom.assign("YUCXRGGBJYSHSMNOTLEGNQTTROODYJCMUKBBOWAZQSVMTMDKCTXCABGNELQFIGEPOLDPZHCPTUBVTSNWUWDHPISHIWFKNFZCZPCLY");

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
    msg.setTimeStamp(0.34344178571140693);
    msg.setSource(7222U);
    msg.setSourceEntity(106U);
    msg.setDestination(18401U);
    msg.setDestinationEntity(154U);
    msg.timeout = 19477U;
    msg.lat = 0.8714878498635429;
    msg.lon = 0.11881541594983669;
    msg.z = 0.749673264336644;
    msg.z_units = 140U;
    msg.speed = 0.734146798079959;
    msg.speed_units = 120U;
    msg.bearing = 0.34075120130919656;
    msg.width = 0.706442932860588;
    msg.direction = 49U;
    msg.custom.assign("NKKAMMNTLIVSZDQUUDBBOAYSVXRWKHEUDSFBZACMDPSRRNXDBCRNHEFEIBNQBXGEXOQUEAMCYZQJQWJMXSSCFAWHBSYPOTDMZUIBYLNZTCCPVSERUVDHWWAXOIJTNQMUTJFGUFRXYVGTEQMXGKPCYFVCNLTOYMLIKZIHUIVWMTHRKIRJXRKHPOZWOQJWFAJBXALZQIDLNWDJKNGTLEYAP");

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
    msg.setTimeStamp(0.15520506854457972);
    msg.setSource(43096U);
    msg.setSourceEntity(167U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 202U;
    msg.error_count = 112U;
    msg.error_ents.assign("VZCOYSQLLMQQXSVIKCHYEVBCZHPO");
    msg.maneuver_type = 30755U;
    msg.maneuver_stime = 0.5055673378986828;
    msg.maneuver_eta = 63876U;
    msg.control_loops = 1899826932U;
    msg.flags = 239U;
    msg.last_error.assign("POVMWHXVYYALJDMHXTOZNWRQYTJJFVENNPRCFKGQCZJCMLUINGDORQICTYHBNDSKXOOVSABRHTCGYTRSYNSFVFPLJNTIEAHKIUQWEXXYQDXFZVBYWILHSLBHMESKVDQGVZZQQJKJWDZPCTKOUVHUPJJAZEN");
    msg.last_error_time = 0.70912807310786;

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
    msg.setTimeStamp(0.21250970158654992);
    msg.setSource(23168U);
    msg.setSourceEntity(188U);
    msg.setDestination(45926U);
    msg.setDestinationEntity(80U);
    msg.op_mode = 232U;
    msg.error_count = 199U;
    msg.error_ents.assign("GZZCCJCOBVBNKCWMXY");
    msg.maneuver_type = 20321U;
    msg.maneuver_stime = 0.13001150855927812;
    msg.maneuver_eta = 25517U;
    msg.control_loops = 1840594057U;
    msg.flags = 57U;
    msg.last_error.assign("ZUNUHTFNFHDJPVRCGFGLGWDZQFFLPTRRBCTGXUYXTYJANGOOJWKPZOJQRZEARDNPDVYEKJGLQOAHSTXBXGLIMYEWTSPWCUIMTEKCPZNMQMKZJJLVUYVCOQSDEUYOXMLXARDRSSYBNFQDSICKYYJZGT");
    msg.last_error_time = 0.5507009261674336;

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
    msg.setTimeStamp(0.17706987895836124);
    msg.setSource(45774U);
    msg.setSourceEntity(185U);
    msg.setDestination(26572U);
    msg.setDestinationEntity(162U);
    msg.op_mode = 54U;
    msg.error_count = 204U;
    msg.error_ents.assign("JDPGGEBOQTPRIAYVDJIONWVTCSSQBJANKUQDWNJMJYBQOALLWHJMCMEHKFFFYGILXXOLCOHSXRMD");
    msg.maneuver_type = 46777U;
    msg.maneuver_stime = 0.9256264821057828;
    msg.maneuver_eta = 39515U;
    msg.control_loops = 871565596U;
    msg.flags = 168U;
    msg.last_error.assign("BGZJHOTNUOABKICROWIRCQMQXEHECJJHGKDVGCNYSRRETCEJPNVPMYLKTMFVMLEHSDIIAHVMHTRSWQFXWVHFREDIDOAOPWTZYJSKRLDIWERELNQGBMPFXABJNUYEKYTQGIHSSAARQPDXGPQWZETLYYNOVYP");
    msg.last_error_time = 0.06644440733209589;

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
    msg.setTimeStamp(0.422143388337647);
    msg.setSource(23642U);
    msg.setSourceEntity(140U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(254U);
    msg.type = 187U;
    msg.request_id = 61971U;
    msg.command = 205U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 9589U;
    tmp_msg_0.lat = 0.9772834462417375;
    tmp_msg_0.lon = 0.7848234773846966;
    tmp_msg_0.z = 0.8939612347116869;
    tmp_msg_0.z_units = 247U;
    tmp_msg_0.amplitude = 0.1549023565937495;
    tmp_msg_0.pitch = 0.9081826996849233;
    tmp_msg_0.speed = 0.8488231749091009;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.custom.assign("BYIGNGMSORDJMGPGAGHBWBSYPKUASMHRSMFKIBZDXIYWNIOWQWROUBFEGGVVEZVJPKTWXRGZJORVHCSKUCUNOAJHLXFXTRTVRKAWSAUHXVWZEPULPAXCRNLLMAOZNDYVQFLUNYQMIJBYKFATTLZHSQHIYJFZPOWEDDCATJERDJLQWINYYEQEWUVLQETDTKNNBCMF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11308U;
    msg.info.assign("IQPWPNTZKANIEWMLXGRUBRECTCOCXSIKJVSXCZYEIOIXSFCGSHRLCZWUOPABOTRLFJDVDMBELTVYWAQRVGVKXVPMSPFLFJVUHEDPYJYBBRMBHZCCSLFA");

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
    msg.setTimeStamp(0.3867138900127407);
    msg.setSource(64212U);
    msg.setSourceEntity(237U);
    msg.setDestination(11897U);
    msg.setDestinationEntity(201U);
    msg.type = 92U;
    msg.request_id = 63303U;
    msg.command = 114U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34634U;
    msg.info.assign("IPBDXWKSUXNQSGDLKJVJIYMMFZKBXWSDYLQZOFXKSHYOGDMRMTEEPQCEYANGMPXCUVGNXHIBPMEVLARYAUHBVNIAALXPTQPUUHUTJKWABCQBAWMRVEFKTIMGSVHTYQTFYRBFPIIFPOMNNJRKWHHZOOVMGJJGJDFJSDWIDWGQWBUNXZJFVCDQKTZLCPZLZCEQERALVYIFSGNRRAKOSBLNRUZCYHUTITFZCUENOXQXKGOJADOWZ");

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
    msg.setTimeStamp(0.8257519634353118);
    msg.setSource(59508U);
    msg.setSourceEntity(235U);
    msg.setDestination(27987U);
    msg.setDestinationEntity(73U);
    msg.type = 21U;
    msg.request_id = 24608U;
    msg.command = 120U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 16166U;
    tmp_msg_0.lat = 0.9281036822426667;
    tmp_msg_0.lon = 0.7306525300476703;
    tmp_msg_0.z = 0.98612894613285;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.amplitude = 0.13946710729209488;
    tmp_msg_0.pitch = 0.35074241864985123;
    tmp_msg_0.speed = 0.3035244640018079;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.custom.assign("CYQNKXGLEDBYKBJVQTKOZOIOSLUGFTCTSRENRCUBMLXQQDFWPGKTFAFRKYOSQPNLHFBDMMMUMZYQSWRPNSBSTOKOKAPPNXYYEUALQRTOIXKJCAXCFJXGAVHFMFHOCTNZRYURWGPBEVVLHNWSHJGWRFLGDTZIWAQEHWDJUMVASLCPWDNE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59721U;
    msg.info.assign("OFNKYVUJBRQMMXQNMWAUHBMIPJDXTLUXSPRMTZPIODPVCYCQXJMWJRQVBGEQNKZGAUUCWSDEPFRIIFGZIJBKZTPEDSQNADORHFSCBNFVXICOAZQOASLOVFAHPTWQNUNIEAKSRCKLLYREHZRCYXTWGXRNQGHTCGLHXJJA");

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
    msg.setTimeStamp(0.8270878858489334);
    msg.setSource(56314U);
    msg.setSourceEntity(207U);
    msg.setDestination(10772U);
    msg.setDestinationEntity(235U);
    msg.command = 176U;
    msg.entities.assign("FWNVKJUDRBAYYUIFEXDKWAQYAMWGSAJFOSPEDLHKLOXWCONZSQIIOXABXVRSJUJHOSHDFJBGLJERHSPJXKTWHZFFSQFXGMKWHRJMSOYNRMJTCSPMCVDPVAOZNCBGNLYNCGZJVQKLPUZBVHMRLUIBFTPXMHZDILTVUIMYYIUTEYULQEKZWUFOAUT");

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
    msg.setTimeStamp(0.48328937983473097);
    msg.setSource(41319U);
    msg.setSourceEntity(144U);
    msg.setDestination(63825U);
    msg.setDestinationEntity(170U);
    msg.command = 30U;
    msg.entities.assign("PWMIEAZGRAQXDYYMRFVKGSJASEFOQUUDOXWTVHVCHCPJMMJEODFZJCIETXSFBHXDEKWSLMQZCRKLOGVOHWEFHRLRZDIBVTDQWACNH");

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
    msg.setTimeStamp(0.45244714118772456);
    msg.setSource(54697U);
    msg.setSourceEntity(238U);
    msg.setDestination(5879U);
    msg.setDestinationEntity(92U);
    msg.command = 66U;
    msg.entities.assign("JCSQFSPIEQTIKUZIMJTCMXQXVJLBLJWDJVTVRODZZKSAEOVQQWKQNCRZVCGXYAYZNJUBQRWRGMUCQRPBDUHXFGMVTNTTCSHLZYULRDFPJEZTMBUKKDRAYBLDSFKATOEGIBFVSMAIKSCEWMLILBHWNIAAZEPEYTGCFVY");

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
    msg.setTimeStamp(0.40102885742703354);
    msg.setSource(9155U);
    msg.setSourceEntity(54U);
    msg.setDestination(42228U);
    msg.setDestinationEntity(234U);
    msg.mcount = 235U;
    msg.mnames.assign("PKKNLDZAFGCQRHFEVAIXPLXQMAFELVIRECBLWXXRTDKMQOAITRGSOYPSGIUJGBIXSNBZRWWEBKCUFFHDSJDCQTZTZZBQYLTMWTAJVMWKPDAVPNAHWXMPYNOGLQJVFRYIZLPJRYQHUJWBZPANNJXBFYDC");
    msg.ecount = 49U;
    msg.enames.assign("ALYEFUJESUYKOUDJNIEIGDGIZPZGDYMQHAQYLYFRGWVLHKNEHCGHOAPDXBAAWIIWMBCDPSXZYBISHYCQHRPOLUKJGXVOMYONMRBMKZTUGRUTJDFTJGWGNSXZSPNQBOFBWNWIDEQUAXOEQCPZORRVSODVXUQPCSCIVPMTOBBAZPKKBHII");
    msg.ccount = 56U;
    msg.cnames.assign("WNHQWKDSJGNDXAUWOAFANXQDIAOBSUQJEALPZAHMQEFHLRUPVRIBBPBXTEEZGXYAPGDDPXODOFMMCCSOEHVZPWLTFRQCGMITBLTTYPKTTKJPCOYNMLYZVLVXVWTYJJQLBLMCIEPWSWCOOYKZSKLHQAKDZVZRENRCCCUIEUIVSFEFGDSFUUZJGRANJRPKVVJO");
    msg.last_error.assign("MQVBFYEDTLQQAQAZCDWWYTZKVXJSOKCILRGMXVKFGABORUFQLXJIDXCNACSSCMNNGEDCMYTAAVMYEOIQTXZQGVFPGPQIIUAJRLODXYRWEPFMOWFCYGBDKGDVLZSBUCIO");
    msg.last_error_time = 0.575313691940587;

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
    msg.setTimeStamp(0.4542218284085655);
    msg.setSource(3305U);
    msg.setSourceEntity(184U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(229U);
    msg.mcount = 142U;
    msg.mnames.assign("JLBYGWOQHYTDAPRWSYDZTNABVQUPFMSDSZRIIWOMMYEZELGXRPHUWVCQJYTVOSUZAHXTUVCPJBJDXIKXJSIONNGBKIOJFWKCTZBDEFYGHXFDSZVZTQGXSZKRMCEOUCYTRKFTQAAASDLNZGVQSFBEFWCAIVUJMPEQHCLKBMVELONIIKRPPJXKMDAHWOQDOL");
    msg.ecount = 54U;
    msg.enames.assign("VLTWASIQUCZLBLTTYWKRPESDIJZUNWGCUHNUAKZZFHSOCETIOGBQSYCCD");
    msg.ccount = 154U;
    msg.cnames.assign("ODBBEFHWDMXCLJVXNLSNYWTPGNJBCAVDPNWUJGLIKQTXRLEEGCPXXVUQPEYZGZIWILHYDIRJXUWITBA");
    msg.last_error.assign("ZTSHZRSEJUSWNDTGAHNMKYLGCTIHBSXNXQAUOUNTBSQJKMJNVPUSHZRLGEKDLPXVGMOBKNYIMTHVYBYLETMRUACENFDYTYHYWDYRVWTHWHFDLCPFBTIVQCZJCRAIUMIMVGAFOZJSBAFBEXWQQMDLZSPSNIIEWVZGPONABKNYFFHLRUQIKQAXXQGIVR");
    msg.last_error_time = 0.5127951742386192;

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
    msg.setTimeStamp(0.972358617133592);
    msg.setSource(11807U);
    msg.setSourceEntity(57U);
    msg.setDestination(26126U);
    msg.setDestinationEntity(219U);
    msg.mcount = 154U;
    msg.mnames.assign("WSZUEAWKMIFZGCNLZMIGJIOAXMCFCAZPKURQCGHDWBTQOKHJMCVHYEIQVTWHNAYMOFPGHEOYXTKJXNVTDRIJSKPCXRCOQSIBASXKBVBAXWZPZLLJUXYPNRMZ");
    msg.ecount = 226U;
    msg.enames.assign("AGNIVBYQCHSFQPTGWFEXGLVCSBYJUJHMPEERXVMPKBHLXTYOTDRIAWCAWAHBKOOTNTWFUNCUJMKUJICHMASECGSWWD");
    msg.ccount = 180U;
    msg.cnames.assign("TXWCXSMETMTWQIJSZFANDVHWNWLGJQGXYOPLMWDGLKKBLSPRPOEUEYJGOGVIFUJMQMEUBMQNXZNCGHQIJJVSSIZFONWXNBPSEHUYYDKTTRZBALIYGNECAHBAUHVHLEPJWCKPFXLVYUNDRPPLCCNFSDEKCFWBRYINWDZGSORVOOAQPHZUMIIHDMTECQQJXOSOHGSVAKYDBPFXKMVFBTLCZVEFKCJAMKLGRKUIY");
    msg.last_error.assign("MEBAPEFFJPGDZBHDUBQLHMEQJMARNHHUNJMWCVZDYLIVCJRKYDYPKKNAYTHVVOEQRXJEWBGKYPOTALJFQUIOKQVEPCCSXRDDTBLWYQVQHMTSDUMCGRGUCMWMKOSGLX");
    msg.last_error_time = 0.8863618433144299;

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
    msg.setTimeStamp(0.15462373781005323);
    msg.setSource(37723U);
    msg.setSourceEntity(45U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(116U);
    msg.mask = 38U;
    msg.max_depth = 0.3678814522412266;
    msg.min_altitude = 0.2647133603144237;
    msg.max_altitude = 0.06298877355715826;
    msg.min_speed = 0.16169233585900877;
    msg.max_speed = 0.20256759683224435;
    msg.max_vrate = 0.4615024078407327;
    msg.lat = 0.18789778909108468;
    msg.lon = 0.8111291270795763;
    msg.orientation = 0.03194800210252002;
    msg.width = 0.7275286537291124;
    msg.length = 0.6938280753454564;

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
    msg.setTimeStamp(0.1952649240471508);
    msg.setSource(9607U);
    msg.setSourceEntity(206U);
    msg.setDestination(45606U);
    msg.setDestinationEntity(0U);
    msg.mask = 138U;
    msg.max_depth = 0.3153002229804426;
    msg.min_altitude = 0.8368233361340907;
    msg.max_altitude = 0.5642971168067485;
    msg.min_speed = 0.348859738700776;
    msg.max_speed = 0.8902259593272632;
    msg.max_vrate = 0.18216428935695195;
    msg.lat = 0.169002288708343;
    msg.lon = 0.1461366359505123;
    msg.orientation = 0.3488333345486365;
    msg.width = 0.5445894534951272;
    msg.length = 0.5371446904737904;

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
    msg.setTimeStamp(0.11076787104427366);
    msg.setSource(61533U);
    msg.setSourceEntity(191U);
    msg.setDestination(9431U);
    msg.setDestinationEntity(29U);
    msg.mask = 34U;
    msg.max_depth = 0.036051000141565925;
    msg.min_altitude = 0.3681944488072898;
    msg.max_altitude = 0.0021483462782495577;
    msg.min_speed = 0.7408313021194189;
    msg.max_speed = 0.48926261710545005;
    msg.max_vrate = 0.08849012739096374;
    msg.lat = 0.7594072316824056;
    msg.lon = 0.08142752358348448;
    msg.orientation = 0.6016313678371504;
    msg.width = 0.6963889490857679;
    msg.length = 0.567867654000744;

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
    msg.setTimeStamp(0.1475578718020537);
    msg.setSource(38772U);
    msg.setSourceEntity(103U);
    msg.setDestination(44631U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.4452466841553865);
    msg.setSource(62410U);
    msg.setSourceEntity(6U);
    msg.setDestination(5123U);
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
    msg.setTimeStamp(0.059669264542079326);
    msg.setSource(34572U);
    msg.setSourceEntity(63U);
    msg.setDestination(26760U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.9804536621587203);
    msg.setSource(50716U);
    msg.setSourceEntity(152U);
    msg.setDestination(15240U);
    msg.setDestinationEntity(186U);
    msg.duration = 34315U;

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
    msg.setTimeStamp(0.4771118749876956);
    msg.setSource(2903U);
    msg.setSourceEntity(98U);
    msg.setDestination(37860U);
    msg.setDestinationEntity(63U);
    msg.duration = 59300U;

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
    msg.setTimeStamp(0.7966621216962128);
    msg.setSource(9893U);
    msg.setSourceEntity(179U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(110U);
    msg.duration = 6630U;

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
    msg.setTimeStamp(0.8499766400231406);
    msg.setSource(5004U);
    msg.setSourceEntity(155U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(226U);
    msg.enable = 95U;
    msg.mask = 2347971120U;
    msg.scope_ref = 763298359U;

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
    msg.setTimeStamp(0.2620535681687889);
    msg.setSource(35463U);
    msg.setSourceEntity(37U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(57U);
    msg.enable = 221U;
    msg.mask = 4265085765U;
    msg.scope_ref = 1168772158U;

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
    msg.setTimeStamp(0.22467201896265443);
    msg.setSource(6689U);
    msg.setSourceEntity(177U);
    msg.setDestination(40840U);
    msg.setDestinationEntity(120U);
    msg.enable = 152U;
    msg.mask = 3619086557U;
    msg.scope_ref = 1492600495U;

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
    msg.setTimeStamp(0.9508534437027879);
    msg.setSource(62002U);
    msg.setSourceEntity(225U);
    msg.setDestination(12050U);
    msg.setDestinationEntity(190U);
    msg.medium = 145U;

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
    msg.setTimeStamp(0.5179381390398845);
    msg.setSource(2877U);
    msg.setSourceEntity(159U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(66U);
    msg.medium = 168U;

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
    msg.setTimeStamp(0.905360955942434);
    msg.setSource(53437U);
    msg.setSourceEntity(121U);
    msg.setDestination(56132U);
    msg.setDestinationEntity(33U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.49875671897473217);
    msg.setSource(33698U);
    msg.setSourceEntity(166U);
    msg.setDestination(25621U);
    msg.setDestinationEntity(159U);
    msg.value = 0.2806774054865686;
    msg.type = 9U;

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
    msg.setTimeStamp(0.00500728993104782);
    msg.setSource(44604U);
    msg.setSourceEntity(198U);
    msg.setDestination(28221U);
    msg.setDestinationEntity(186U);
    msg.value = 0.06999960350806023;
    msg.type = 133U;

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
    msg.setTimeStamp(0.8839770758344093);
    msg.setSource(29613U);
    msg.setSourceEntity(207U);
    msg.setDestination(40848U);
    msg.setDestinationEntity(55U);
    msg.value = 0.9362071714119367;
    msg.type = 41U;

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
    msg.setTimeStamp(0.1330694435047981);
    msg.setSource(43394U);
    msg.setSourceEntity(34U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(226U);
    msg.possimerr = 0.5217972506716096;
    msg.converg = 0.257510721273711;
    msg.turbulence = 0.21170207152351994;
    msg.possimmon = 92U;
    msg.commmon = 138U;
    msg.convergmon = 22U;

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
    msg.setTimeStamp(0.3783199923640743);
    msg.setSource(5428U);
    msg.setSourceEntity(142U);
    msg.setDestination(36788U);
    msg.setDestinationEntity(252U);
    msg.possimerr = 0.7793068774444847;
    msg.converg = 0.7148198231157069;
    msg.turbulence = 0.8126839697416787;
    msg.possimmon = 83U;
    msg.commmon = 67U;
    msg.convergmon = 186U;

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
    msg.setTimeStamp(0.5509591999599798);
    msg.setSource(48759U);
    msg.setSourceEntity(7U);
    msg.setDestination(50383U);
    msg.setDestinationEntity(60U);
    msg.possimerr = 0.283964330209197;
    msg.converg = 0.04284780879737082;
    msg.turbulence = 0.7578701638521793;
    msg.possimmon = 194U;
    msg.commmon = 44U;
    msg.convergmon = 56U;

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
    msg.setTimeStamp(0.46927362740061196);
    msg.setSource(32921U);
    msg.setSourceEntity(156U);
    msg.setDestination(6765U);
    msg.setDestinationEntity(111U);
    msg.autonomy = 120U;
    msg.mode.assign("VEHDSDTLBCJCYIQLEZFKKCLYDIQUAJPYORWXFXIZVJPFUKWGPESHQWLQDLMGSXBYVRVOWFUJLFUMMJAHYDIHGUOXY");

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
    msg.setTimeStamp(0.3960811746149211);
    msg.setSource(45520U);
    msg.setSourceEntity(245U);
    msg.setDestination(43865U);
    msg.setDestinationEntity(45U);
    msg.autonomy = 54U;
    msg.mode.assign("YBKCVCIWUHAVPUUHYBJMQDHAWIKGNAFOXLAJAVTFEWOAZNESGCCZQXGPETLMSNORDINILHXFWYLEELSHJVVFIPKCEQDDYBPYFASUGJXODETRPPOWTEYJYVOMNEIQITTXRXDBGQCJORRKNSOLVBMSPNUMGBTDSYORMUDJVYCZWWG");

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
    msg.setTimeStamp(0.2566915114097732);
    msg.setSource(6540U);
    msg.setSourceEntity(111U);
    msg.setDestination(30644U);
    msg.setDestinationEntity(116U);
    msg.autonomy = 223U;
    msg.mode.assign("ZEFMRNVSIJZXOZTBKSPOAYWTYCNSMBONJBFDIISEZHDIKAWCDNLLD");

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
    msg.setTimeStamp(0.2809955552401514);
    msg.setSource(50147U);
    msg.setSourceEntity(202U);
    msg.setDestination(55166U);
    msg.setDestinationEntity(245U);
    msg.type = 23U;
    msg.op = 56U;
    msg.possimerr = 0.3243847724396688;
    msg.converg = 0.4401845590135368;
    msg.turbulence = 0.17054061524920627;
    msg.possimmon = 193U;
    msg.commmon = 37U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.932946927147813);
    msg.setSource(23704U);
    msg.setSourceEntity(94U);
    msg.setDestination(11935U);
    msg.setDestinationEntity(146U);
    msg.type = 74U;
    msg.op = 232U;
    msg.possimerr = 0.9309377698366121;
    msg.converg = 0.10030395725775465;
    msg.turbulence = 0.128179665314908;
    msg.possimmon = 94U;
    msg.commmon = 202U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.5730307977230898);
    msg.setSource(6144U);
    msg.setSourceEntity(185U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(174U);
    msg.type = 152U;
    msg.op = 233U;
    msg.possimerr = 0.929566352515996;
    msg.converg = 0.20336129812766157;
    msg.turbulence = 0.7641105210641967;
    msg.possimmon = 159U;
    msg.commmon = 112U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.6906077495732327);
    msg.setSource(44041U);
    msg.setSourceEntity(52U);
    msg.setDestination(7096U);
    msg.setDestinationEntity(223U);
    msg.op = 174U;
    msg.comm_interface = 178U;
    msg.period = 59316U;
    msg.sys_dst.assign("DHSADDCEJRNUIUHNMJOMCSCEESRKWPA");

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
    msg.setTimeStamp(0.5488073692228846);
    msg.setSource(1237U);
    msg.setSourceEntity(178U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(199U);
    msg.op = 29U;
    msg.comm_interface = 13U;
    msg.period = 19351U;
    msg.sys_dst.assign("RKYFOHUQSDSCLWGTLY");

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
    msg.setTimeStamp(0.8253450255669535);
    msg.setSource(3362U);
    msg.setSourceEntity(90U);
    msg.setDestination(48964U);
    msg.setDestinationEntity(220U);
    msg.op = 212U;
    msg.comm_interface = 234U;
    msg.period = 34980U;
    msg.sys_dst.assign("UBMCNZFPKQTTEWECICDVOZCDPBBWLQUCANAZGQGUBHJXOVQAODTYLEJHASPMIHLSLXSRDCEXJJOIUHLWJBLDMENZNKUHEZRVSJNQGQFFYUGDNMTYPGXWPFJEMYBUYORWQIAVGKTXMUBZPBPTSTZRYKZVVAHIJYCMEHXGAOIHVFIPXVOAKLIKATSMZPMGEKCJYRIRXDTRHHYCTLDXV");

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
    msg.setTimeStamp(0.2691954496583736);
    msg.setSource(44145U);
    msg.setSourceEntity(229U);
    msg.setDestination(31364U);
    msg.setDestinationEntity(11U);
    msg.stime = 320623835U;
    msg.latitude = 0.3111557791575206;
    msg.longitude = 0.11065086698210214;
    msg.altitude = 50890U;
    msg.depth = 10830U;
    msg.heading = 52454U;
    msg.speed = -27094;
    msg.fuel = 29;
    msg.exec_state = 9;
    msg.plan_checksum = 12193U;

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
    msg.setTimeStamp(0.20743313790182016);
    msg.setSource(10863U);
    msg.setSourceEntity(119U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(27U);
    msg.stime = 3630531740U;
    msg.latitude = 0.15552886256662868;
    msg.longitude = 0.2956007570059582;
    msg.altitude = 38746U;
    msg.depth = 19073U;
    msg.heading = 23262U;
    msg.speed = -24003;
    msg.fuel = 123;
    msg.exec_state = 50;
    msg.plan_checksum = 49792U;

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
    msg.setTimeStamp(0.009196287709202444);
    msg.setSource(17096U);
    msg.setSourceEntity(132U);
    msg.setDestination(24530U);
    msg.setDestinationEntity(156U);
    msg.stime = 3285353420U;
    msg.latitude = 0.13913746576953534;
    msg.longitude = 0.22024020023486068;
    msg.altitude = 34320U;
    msg.depth = 17186U;
    msg.heading = 56254U;
    msg.speed = 23466;
    msg.fuel = 114;
    msg.exec_state = 105;
    msg.plan_checksum = 47095U;

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
    msg.setTimeStamp(0.6583084466012855);
    msg.setSource(4223U);
    msg.setSourceEntity(80U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(201U);
    msg.req_id = 30773U;
    msg.comm_mean = 51U;
    msg.destination.assign("LYRKRXEWDCEOBBRXOJTUYQKTQZDWTOYWLAKACZITVJKHYHDETPWUDMWKNTGZVUQSIZODNVIQIOACDJEXVEXWNHUKIJPXMHJBAAHLHYOTLGSGMZQTSRIFMJNNAUSSPNEOS");
    msg.deadline = 0.30319710996926585;
    msg.range = 0.48884179385595894;
    msg.data_mode = 60U;
    IMC::Pulse tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VRTECMRABICDFJJCHWYO");
    const signed char tmp_msg_1[] = {98, 68, 12, 40, -55, -43, -53, -44, -17, 58, -65, -128, -100, 95, 89, 121};
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
    msg.setTimeStamp(0.7640905315688268);
    msg.setSource(26592U);
    msg.setSourceEntity(184U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(50U);
    msg.req_id = 9900U;
    msg.comm_mean = 212U;
    msg.destination.assign("YYTRZUHNSQKWSWTIBVSJWUFBNMMCEECSUOUOXICPUNEDRNYFQYZPLHUEJTDYEKCVQNZAWBXGKLRSBRQNVVHKBSXRNCPEGJCTAMOMQDBTWBOHHAJVRJSPKOPOZKLDDZFYPJAPMQDVZDFFISLGJU");
    msg.deadline = 0.474008494899267;
    msg.range = 0.6816899828523263;
    msg.data_mode = 196U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.004785032986791116;
    tmp_msg_0.sys_src = 56670U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WZYFGYODRRGWVPHQTHNTTEXTERCRGXLRAHVIUTLYPLLBTHKPODSKSXGMNHFHAPTELYRGQTJSSMAUSPGVWPNJAUAUAZVKCPIWDUANLSKKDXLRCWVHTWXFBIYQVNDZYPFCEQKIONULZPRBZXECKWVOYZDCJIFUUI");
    const signed char tmp_msg_1[] = {20, 102, -14, 94, -83, -126, 1, -47, -95, 119, -125, -108, -61, 78, -83, -58, 28, 94, -67, -112, -50, -104, -27, 15, -17, 46, 4, -64, 81, 57, -75, 117, -119, 80, -7, -117, -88};
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
    msg.setTimeStamp(0.18030456470569234);
    msg.setSource(49687U);
    msg.setSourceEntity(189U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(29U);
    msg.req_id = 47585U;
    msg.comm_mean = 174U;
    msg.destination.assign("JVNELTICYWVTBZBFJRLTWNCYSVTEWIRMHQHHKCYXQGLELUBEWFOWPQRNAKNAHPXRJCEVMPYPCWF");
    msg.deadline = 0.42702135832380594;
    msg.range = 0.16406605341088942;
    msg.data_mode = 94U;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.3643744695684539;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EKHBPDUHOYKNBQBGIXARSHEALGLFLZPMMHQUVCUSZGCCEYTMGNCREHJMFDJHRDEOZEWUIDIIJNPFCBSSFGXKMDDNKIPPBPLSGFOARQEWZNAKVRNKEYFJWSQCBBPRMMDHAFRLOEEKPNFQMV");
    const signed char tmp_msg_1[] = {-36, 92, -128, 33, -19, -9, -64, -118, -19, 77, 88, -75, -102, -34, -58, -107, 109, 59, 125, -87, 115, 98, -118, -118, -34, 61, -50, -72, -121, -119, -115, 75, 3, -63, 18, 113, 45, 73, -85, 103, 21, -29, -34, -123, 66, 92, 51, 41, -54, 25, -49, -60, 15, 21, 87, 50, 91, 70, -63, 81, 21, 121, 105, -45, 78, 118, -24, -93, 102, -59, 31, -17};
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
    msg.setTimeStamp(0.22410542102519093);
    msg.setSource(12313U);
    msg.setSourceEntity(75U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(204U);
    msg.req_id = 43213U;
    msg.status = 116U;
    msg.range = 0.8772876480711989;
    msg.info.assign("UKESBFSIHMFXVBQWRDIODTUBNBQTSAXQBQYNKWCUCMXGWYGBODDMWZMPGLCFAJZCRASNSQPWRCVHRGYVPRYRIV");

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
    msg.setTimeStamp(0.7819555152351126);
    msg.setSource(43970U);
    msg.setSourceEntity(198U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(213U);
    msg.req_id = 34466U;
    msg.status = 163U;
    msg.range = 0.397407203608519;
    msg.info.assign("QIFWTITFJDTHBEQEAWVSAUUOECDFZGYFSPPETRLNCPULXVVWXPMJDOIQCJJYDQJJUESGQPFSEHQKHKYLBAZIQSXGNIDFOKBGTWMJUNOIDNNGBEAFRHSSCXSKFEKCWBPNAISZZVXWNURZTPLUVDBUZBOHCCQCHALGDMRBSRKRXZJNTYXHM");

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
    msg.setTimeStamp(0.041259469319327);
    msg.setSource(12331U);
    msg.setSourceEntity(201U);
    msg.setDestination(4064U);
    msg.setDestinationEntity(11U);
    msg.req_id = 14281U;
    msg.status = 142U;
    msg.range = 0.28651531325250845;
    msg.info.assign("VXUCHTSYJUFEJYZELBIWQAVPINTJIRNUOGYKGOROLBGABXMLPENNKZNCXYAFFHUDWCNLTLBOBZTNSQWVCGHPMCXKFLRTJANTJQEBQVZZGIUWYPHMERMIASRDFQZWKGRQOROHMEIS");

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
    msg.setTimeStamp(0.967470412075818);
    msg.setSource(38718U);
    msg.setSourceEntity(59U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(28U);
    msg.req_id = 20401U;
    msg.destination.assign("CDYZMRBYDWKJBLKBIYTFILDUJQIHDRZRYRFPGAEROAWHNLETSVTGUPDYXMCCVGTWZLZLXMVMXCNOEEKAHFFUQLXSPWJBHZHUYVQIMUEXNTYMYNVPSOWWXXGTFJWGNIJOZDVIFXVICHSKCSGBOEUBGIMTAJNDYNXWOCPUAQUZQKNRAZSZNGTCFLASA");
    msg.timeout = 0.8626729881937931;
    msg.sms_text.assign("TUZLYBASVPXZZLSNGQVWBLJWAOWRYURQVPKTJMDEIHEAYJMXRDWTAMSOZEYAZWWLMQMAFNNGDNLKZPPLEMVSBGSGSVXHKGGTRCBEYOFCVYBKSRMDAXIFPNZFQQNTQHRSXJZSFXGSWJOFUBRIWLJIEQBNTOLJJYIVTKZURWHOYAHEHMDHIOFXUDZVJMODWCDUVUPOLQDQAETCTCYPQ");

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
    msg.setTimeStamp(0.3766144012894159);
    msg.setSource(41684U);
    msg.setSourceEntity(30U);
    msg.setDestination(37473U);
    msg.setDestinationEntity(48U);
    msg.req_id = 21604U;
    msg.destination.assign("CPKTXPUBHNQXBHMNRTCXNBQTFZUOA");
    msg.timeout = 0.98947773703295;
    msg.sms_text.assign("PHGSQCUWUQAVQORFYSRKOWNOREBWDFJTUHNJOFNLMTWUXAGPCYKQFATJKXGIHDAIJGHKFSWTNFDVLIEICDXJLOJMNWHVOZLXQUMOPXVUWESQCFBZBGVEVPVPDPTAQGXCJNPBDKEDCOZDOAQHLALERWAMKBKUJSBRTEIKGZCBLCRDSLHXEYISYHBKGCRYJBQNYZTMRPMFZYWXNIUTIOISSAIPEZVZGKDXFLTYRAGLYFBNMQMCJ");

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
    msg.setTimeStamp(0.2306958816560306);
    msg.setSource(9379U);
    msg.setSourceEntity(199U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(167U);
    msg.req_id = 24660U;
    msg.destination.assign("MVCXBXWRNQYEHRGPAOTKXPMULCVVKWSIYXVIUVTCYZZATJUYJJGORIHNDTOEGCQHIFKQNDGZHNJEYRMBKERJHVOQDNSUIQAGTNOUSYJQMYECXULAZWLIAHEHMWKXRTGALTBDGWDMBNBFKVCUHOQZWUIYSPNOPXTEFCKFZLRQFPLMBVZWDFWYKOGGVSDSMLBFKFXAXBYDHPMKMIFCJCDATOOAUJRBRLWZISNJZEXSPSLQSGCQPAHPTIVBNLDWJ");
    msg.timeout = 0.9297075426652204;
    msg.sms_text.assign("SKWPPJNUCXZLGFWUTFWPHTOFHQDBNXUJOXMYTELQOMBAZEWWHIXPMAURFGDAUSQNZOKXLIKGNEVVLMJHEQSEORTNALMEPBXAGHOTFLGOHDGRCPKVR");

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
    msg.setTimeStamp(0.7680790523377593);
    msg.setSource(48379U);
    msg.setSourceEntity(129U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(147U);
    msg.req_id = 4332U;
    msg.status = 4U;
    msg.info.assign("RERJKJYZTWCUEGEHWSZNYYGIVSPVVANKRTFMPPMBQUCZBTVQSYD");

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
    msg.setTimeStamp(0.24502601495737986);
    msg.setSource(12242U);
    msg.setSourceEntity(195U);
    msg.setDestination(59161U);
    msg.setDestinationEntity(129U);
    msg.req_id = 44031U;
    msg.status = 109U;
    msg.info.assign("ECQTVQBHRGDMQIPBSIMDJIHOGXNKSBGWRUXGGYRNNZPGWXWQRVCXAAFPALYSASIUEZLWKZBHSOGRTYOFF");

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
    msg.setTimeStamp(0.446606617065054);
    msg.setSource(30974U);
    msg.setSourceEntity(179U);
    msg.setDestination(34371U);
    msg.setDestinationEntity(127U);
    msg.req_id = 52631U;
    msg.status = 155U;
    msg.info.assign("LRMRWZLVVEAONSYRJYOUXIYNTGOISIMKNIHMVRLGTOCCKIRPOFWIHLNDJDBZJODHKDLRLMBSTAIDFPGQKLBSWBGEOCFXPMUDHOVCXUYQCDKJCPYQQJUEZMUUZWYIPSXQAGNHUGDQXZBNKAPASLHTEMBGTAHVVYABWINWKBUJJVLTCDRFJPXTNHQECZPUZALVQSJFAZEDSXRF");

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
    msg.setTimeStamp(0.4108437212486251);
    msg.setSource(8361U);
    msg.setSourceEntity(163U);
    msg.setDestination(56994U);
    msg.setDestinationEntity(78U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.44991425611024893);
    msg.setSource(29346U);
    msg.setSourceEntity(239U);
    msg.setDestination(27952U);
    msg.setDestinationEntity(89U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.03596986741215036);
    msg.setSource(51874U);
    msg.setSourceEntity(184U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(223U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.9838174931866207);
    msg.setSource(31601U);
    msg.setSourceEntity(161U);
    msg.setDestination(34621U);
    msg.setDestinationEntity(70U);
    msg.state = 246U;

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
    msg.setTimeStamp(0.9182935745144767);
    msg.setSource(8674U);
    msg.setSourceEntity(102U);
    msg.setDestination(11025U);
    msg.setDestinationEntity(60U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.6984473729680688);
    msg.setSource(26241U);
    msg.setSourceEntity(241U);
    msg.setDestination(62961U);
    msg.setDestinationEntity(242U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.27573162988191957);
    msg.setSource(38512U);
    msg.setSourceEntity(82U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(65U);
    msg.req_id = 36980U;
    msg.destination.assign("HAIHUYFXHEBMQRGLKPZYDPCOIACLYMAIUGCCDQPHRJWGLSKFJXOPFXOPVNCJTMWYAISWEBYTBKUSWMHVDHLTNASYZDQTIJQBMMVSAKZMDDJSNLJPXYNGKSCDGMHGEVQUJGKSERFOFCBGLRAXBBJYUIZEYOSMPRKOWILQTEERJDNQPAXQRAUWCZNKDFLIVJCEUPWVBOQXXBONZNILFCERFUPRVGNXXHULOWNZWZSDTUHTGKMOVTB");
    msg.timeout = 0.9519411232924632;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("CNCMTQZWBOFYCIGLSOUVTMYRBXKIXPSWYM");
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
    msg.setTimeStamp(0.43404062819839984);
    msg.setSource(6349U);
    msg.setSourceEntity(176U);
    msg.setDestination(30729U);
    msg.setDestinationEntity(69U);
    msg.req_id = 48849U;
    msg.destination.assign("CISTNPRDERZTXM");
    msg.timeout = 0.23922258757234094;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("QDKSCQGHPAXRENUBHSEMHYGFCDOTNRBOWYFMCW");
    tmp_tmp_msg_0_0.lat = 0.6321827849524838;
    tmp_tmp_msg_0_0.lon = 0.32612801673725345;
    tmp_tmp_msg_0_0.depth = 0.784684140303564;
    tmp_tmp_msg_0_0.query_channel = 158U;
    tmp_tmp_msg_0_0.reply_channel = 22U;
    tmp_tmp_msg_0_0.transponder_delay = 208U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.5124490229124109;
    tmp_msg_0.y = 0.0009846935118058564;
    tmp_msg_0.var_x = 0.43024514989079876;
    tmp_msg_0.var_y = 0.10555895388887493;
    tmp_msg_0.distance = 0.08241905820482909;
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
    msg.setTimeStamp(0.4470638429643593);
    msg.setSource(50723U);
    msg.setSourceEntity(172U);
    msg.setDestination(58179U);
    msg.setDestinationEntity(252U);
    msg.req_id = 41913U;
    msg.destination.assign("OEXGKCOYLLBIIRJYTJVRWEHTGNOZUAUOYMMHKDOTGJTRWR");
    msg.timeout = 0.322736535619671;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.5014980800878278;
    tmp_msg_0.converg = 0.9575590471872929;
    tmp_msg_0.turbulence = 0.5493096733942007;
    tmp_msg_0.possimmon = 112U;
    tmp_msg_0.commmon = 243U;
    tmp_msg_0.convergmon = 57U;
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
    msg.setTimeStamp(0.4116868182007781);
    msg.setSource(47520U);
    msg.setSourceEntity(200U);
    msg.setDestination(23016U);
    msg.setDestinationEntity(75U);
    msg.req_id = 36441U;
    msg.status = 92U;
    msg.info.assign("XYKCBAVVTOMRGLZAQLXAXMWDURYFWQNBVEGZUYVIPDMJDTENUXMEQBMDCZFECCLFJULXFOUYXSDFMWYMPWRIZGFSIQGPCPVQJREWSVAFGBGRZCPNWHKNHLUQOGSEWRUZLROSBKVMHKGDQSITAZITBQIZPOWCTYABTPDMERAWHAXBZ");

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
    msg.setTimeStamp(0.021084607936692423);
    msg.setSource(52404U);
    msg.setSourceEntity(88U);
    msg.setDestination(27356U);
    msg.setDestinationEntity(113U);
    msg.req_id = 41730U;
    msg.status = 62U;
    msg.info.assign("XFZEGEVHZRCPKGNCDFUFWPWBFORTAEVRRVLFXRKMBVSPIBTOOIMEJALLSFCQPLXNLAZKTKRLBSVLNDJSRJHDUXPJMZKICGWFICHAQUJAFAOSKNNYHQTWZMONLQFCT");

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
    msg.setTimeStamp(0.19039851449729828);
    msg.setSource(52132U);
    msg.setSourceEntity(155U);
    msg.setDestination(49219U);
    msg.setDestinationEntity(174U);
    msg.req_id = 40115U;
    msg.status = 55U;
    msg.info.assign("MLNGSAFTAQRBCEFMUAGDQRLRTUAEKUYXKISUPFUZIWPGQCTNFZALLCBBMVYILPFJXJVAAPBIYVVLKOFRREEPLMEIZDUWWXODCSZVYVUUIWMNCE");

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
    msg.setTimeStamp(0.6845477450836434);
    msg.setSource(28943U);
    msg.setSourceEntity(140U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(28U);
    msg.name.assign("ZMJVIWMNLEFFIIFVKZHGOKASECHRROLKZXRPUNUNCCWQWTXOXFQSTTJPQSMGCYEAHYDOCFQLVJRTJJLHTNTYGLRFNIBPJVXVDATJIKYCOOHPRKEGZIEPPNZWUBSQGZKNRLSTNFJDBTVSVYAYGAVXWFVUQEWLUXA");
    msg.report_time = 0.3780888633949815;
    msg.medium = 97U;
    msg.lat = 0.8678249882932265;
    msg.lon = 0.9035952956354195;
    msg.depth = 0.7313134277814336;
    msg.alt = 0.18027300430447102;
    msg.sog = 0.8446180006410237;
    msg.cog = 0.17202602932338928;

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
    msg.setTimeStamp(0.9620815495289955);
    msg.setSource(7560U);
    msg.setSourceEntity(113U);
    msg.setDestination(41601U);
    msg.setDestinationEntity(159U);
    msg.name.assign("HMIUMPWQRKDNWTSYJQZNYLIPXGNDJIAWSOHZGEGUBDFVOKUKCJVWMVGLXRIQGQVQJQNYFEHLQYHRTJLEVJTFRAAEUMSDDUWAKNSXHXZBXEYEMPEZN");
    msg.report_time = 0.8936354976284118;
    msg.medium = 164U;
    msg.lat = 0.769703648303183;
    msg.lon = 0.2322206971954589;
    msg.depth = 0.8241242467310268;
    msg.alt = 0.3624420177497458;
    msg.sog = 0.24216895153469942;
    msg.cog = 0.5296825834851514;
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 54U;
    tmp_msg_0.plan_id = 55385U;
    tmp_msg_0.wpt_id = 73U;
    tmp_msg_0.settings_chk = 20499U;
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
    msg.setTimeStamp(0.21562822836923756);
    msg.setSource(36855U);
    msg.setSourceEntity(20U);
    msg.setDestination(19986U);
    msg.setDestinationEntity(146U);
    msg.name.assign("QKZCEYEBFOQEXCXUGYOLQHLXMFKZDZBCGNHHCSJZYEMZFODRPYGTAONEVUZTWPVNCUVQNNTGKBL");
    msg.report_time = 0.5496898686998604;
    msg.medium = 167U;
    msg.lat = 0.683477056073211;
    msg.lon = 0.5422710432263044;
    msg.depth = 0.016764071523982293;
    msg.alt = 0.9205101884028198;
    msg.sog = 0.2469888477771216;
    msg.cog = 0.5893728212079019;

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
    msg.setTimeStamp(0.851036659514523);
    msg.setSource(59462U);
    msg.setSourceEntity(142U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.7169378261690434);
    msg.setSource(54268U);
    msg.setSourceEntity(128U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.7316063812798074);
    msg.setSource(54279U);
    msg.setSourceEntity(181U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.9317923340075199);
    msg.setSource(45116U);
    msg.setSourceEntity(154U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("LMXPVGAVBACWCEQATPYCWPFEVBFCQKVZIFRKNXKBWNEWDZKEWFBAKTSLRBGLWJBLESWTITUEXFROGBXENSPNCHYALGTHBUSAJHMMSSSXXRQGGDB");
    msg.description.assign("YBXEYMGRWKCXQHGWATDDRYHUNRCVQVLCRVMZCSWVOAXAJQZHKMCHDZZNLIFJSBDJEKHGWUEUKPMFTGSBPUTLXFTPRWAZQMNSXYCVFESJLZYOCOBLJBPSBULDBACKOZUNMFDJPDWWHRAQFGYZPRGVSOVTUJCEBYMNPEITQBHXJLZFW");
    msg.vnamespace.assign("NHRKJNXILFQVAXUUNNMPVNOFNIGEFLZFZLFDABBMLCLTRAIKPCLBNVPISRXJMTLPAEQYSIJWPEPHVUHOVOSKEOGLAJHMJDAMDPXIUQEUTRDRWKCLISOBORWUYTTRFZIZSAWZVTDRKBQLOEKD");
    msg.start_man_id.assign("ERQJQLECPPJAYVHZCNOSRBKOQXXDGGNMLGLEUUPIDVZQJWBKKOBEFFGZJDIGMYAHAYUXUBMRAUDFTQDLPSAKNMQXZETOHOCHOVJKGHONPNESMPRFKLCXYSJPGWNVPWHITIYIIIKTONWZJZHFADUCSHFNOJYZARWXEYQWZHXDMCJWMPCCT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DVGPZHPQWZMZSPJVOWOTVDUBKS");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6850951356739143;
    tmp_tmp_msg_0_0.lon = 0.24857112840288753;
    tmp_tmp_msg_0_0.z = 0.695074212994357;
    tmp_tmp_msg_0_0.z_units = 163U;
    tmp_tmp_msg_0_0.speed = 0.6091274803612601;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_tmp_msg_0_0.bearing = 0.3064659685684954;
    tmp_tmp_msg_0_0.cross_angle = 0.5683689418120286;
    tmp_tmp_msg_0_0.width = 0.49419810430072353;
    tmp_tmp_msg_0_0.length = 0.748630500877343;
    tmp_tmp_msg_0_0.coff = 18U;
    tmp_tmp_msg_0_0.angaperture = 0.9473108384984884;
    tmp_tmp_msg_0_0.range = 59248U;
    tmp_tmp_msg_0_0.overlap = 58U;
    tmp_tmp_msg_0_0.flags = 64U;
    tmp_tmp_msg_0_0.custom.assign("LFFIATIEWRARJCVQPZMLTKEFUDKLSLJLIZBOOBXHUQWQNPZMUZXUELDTKRZIGVDSGFEVUNAPNANXMFAKNGGHCOSTQXJBWWURVYYYMPNYASCWSWVZQTGEOXYQXOJDYHKBKAVBXYMLMHJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CompassCalibration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 53464U;
    tmp_tmp_msg_0_1.lat = 0.7961874182969606;
    tmp_tmp_msg_0_1.lon = 0.44057324398986386;
    tmp_tmp_msg_0_1.z = 0.9707175532295862;
    tmp_tmp_msg_0_1.z_units = 71U;
    tmp_tmp_msg_0_1.pitch = 0.6457356200844404;
    tmp_tmp_msg_0_1.amplitude = 0.25435466740917434;
    tmp_tmp_msg_0_1.duration = 10462U;
    tmp_tmp_msg_0_1.speed = 0.11575579341685316;
    tmp_tmp_msg_0_1.speed_units = 126U;
    tmp_tmp_msg_0_1.radius = 0.13946183190456085;
    tmp_tmp_msg_0_1.direction = 85U;
    tmp_tmp_msg_0_1.custom.assign("EGIPUIIJGPIKGNWQHHXSMKCSSBQCPYBNQJCGGYTFPQXUKWZGTHMLNDMVMRFRQFETPXDDVCHLRJEWDYCBUXJSVRHJRHKGMCUAWPUVQAOAIOBNNBVWOFOAKLIVYQRFZLVARUUARQADMLEUYWDARHXJEYJUZYHWLFYKWJCMHILKTPGANFFJVRWLSBTTXUJAETNPONOPXKKDZXXDPTMCTOEETVGXZHDVMKOSGFDECN");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.33289646280194896;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetImageCoords tmp_msg_2;
    tmp_msg_2.camid = 106U;
    tmp_msg_2.x = 5727U;
    tmp_msg_2.y = 31074U;
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
    msg.setTimeStamp(0.5738934722356943);
    msg.setSource(48641U);
    msg.setSourceEntity(230U);
    msg.setDestination(65239U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("OLWKRTOAAYZNCMXGLNMBZLPNCMSABVTNXN");
    msg.description.assign("MIDFJGIPDVMIPWETKMZXNOYXJCQFUPDNXEERZFPJYEHWXZNUNWSJFLYCKRUADSXBPZVCKJAJBXWZSMCMSELWNBCOPYFGZBUMUIORQGZTIYTLVIJJBWSLQYHMBPMJPDKDTOGYNFFSQQHIXUSAEYAZHOCLEGUA");
    msg.vnamespace.assign("UXZCNOYVNQHJXTTYAJJBWEZXYU");
    msg.start_man_id.assign("RVZHLVKNNSICUBAIIUSKVMGTYSECOOQTCTVWFFULKZWYMEMHDTSXKBGCNPCKGTPBXYBDJU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QGHIOKPMNWAENBJEUFNLCPHNXMQWQYDCPRXPCWDKTTSTOVTCUWKHIBE");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3593608298299168;
    tmp_tmp_msg_0_0.lon = 0.6879597768444123;
    tmp_tmp_msg_0_0.z = 0.12652939507800998;
    tmp_tmp_msg_0_0.z_units = 13U;
    tmp_tmp_msg_0_0.radius = 0.4397094795991128;
    tmp_tmp_msg_0_0.duration = 61959U;
    tmp_tmp_msg_0_0.speed = 0.8403557033379344;
    tmp_tmp_msg_0_0.speed_units = 131U;
    tmp_tmp_msg_0_0.popup_period = 2266U;
    tmp_tmp_msg_0_0.popup_duration = 58745U;
    tmp_tmp_msg_0_0.flags = 100U;
    tmp_tmp_msg_0_0.custom.assign("UFZGZIOLTVQPDWXHYQGXARMCSWKDSZQUEJBMOPEFMASCHQFSQJTWQEAUBGUPLVPPHNXVIOFVDZUQROBRPBLRHJYGWTPBTLEKDOCIFINJRVQHVYBWIILRRGLUGSBDJEFJITOYYCXXLKPTMNEZVZT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Formation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.formation_name.assign("EJCODTVZHXERMYNZASAWKZEDOIEJZXZETQXLPVSROLYGUODBKNUNAXQPBBKGIZVNGTIFXLWMQVSFXNYDCBRWTJJYMGSPATIMWLKZPAPBEEAIBFFHJNQYXROGZIVGLHYDPISCPKOVOULFMHQRFKQFCVPBXYFLTQKEALUCKGHAQNWUHXTEEWGYDNUGBMHJIAVMJI");
    tmp_tmp_msg_0_1.type = 161U;
    tmp_tmp_msg_0_1.op = 135U;
    tmp_tmp_msg_0_1.group_name.assign("AEKWQEUHRAOLEBNJTHJJCEHKLRYSCUPCNMDEZXPJXMKKHYZEFSNVPINXVABUKOYQRBIUQROLPRRWUFGAHFNOSMXIJXHOKSTQFJAYJHSTVFPCMWGLCOVIYLLYBZMZDZCGICARANYYTBBYWSLOBQVOIWMSNFNZUTUMIHBLXMSYTESPVRJMPLVAJGEQGNKASDQO");
    tmp_tmp_msg_0_1.plan_id.assign("WPYGGOCWIMFDUJSRKTQNOEJFYQGAKYUYESYZSKZMYUAXRCDVKCVZSMCZUBUDLNWWOUKVAADCOQBYXCLRZATVUQEDPJXHSUTQZTXVSZZDOBBNPEHLFPITGGJRPXTXMAJLQWPFIQTBZRTJVXLMNCIGXFETRKIAWWSHBINABRMWYDLLGNFVNBRLRUMCVKEDDFUKBIOQHQLRHBMHIOSWLGYCGHPSMYPSZJOJEHE");
    tmp_tmp_msg_0_1.description.assign("OJGEPRLYOCWSAFXIDMQECALHDKOVFQLNMDBTLEAIUUAQHLCSTXLMPPPJZUDIRHMGNSYUKHOEFNZGBJRTKIJGBOLTUZEVWMWDSQJVVNYNAODBQQODPIRYUVJPXAMEZFWLCBYDZBTRJZPXECRTQCHFKWRIBVHYMIHHBAZXERRZMLFCXGKTNYKCXCSSXURXVQ");
    tmp_tmp_msg_0_1.reference_frame = 66U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.vid = 9691U;
    tmp_tmp_tmp_msg_0_1_0.off_x = 0.9099232409478317;
    tmp_tmp_tmp_msg_0_1_0.off_y = 0.49898833928303943;
    tmp_tmp_tmp_msg_0_1_0.off_z = 0.37828410736165285;
    tmp_tmp_msg_0_1.participants.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.leader_bank_lim = 0.47606675957877986;
    tmp_tmp_msg_0_1.leader_speed_min = 0.09251705847407621;
    tmp_tmp_msg_0_1.leader_speed_max = 0.1507032140826977;
    tmp_tmp_msg_0_1.leader_alt_min = 0.5253197612110589;
    tmp_tmp_msg_0_1.leader_alt_max = 0.21896525071869888;
    tmp_tmp_msg_0_1.pos_sim_err_lim = 0.020159193670394204;
    tmp_tmp_msg_0_1.pos_sim_err_wrn = 0.3446447838947716;
    tmp_tmp_msg_0_1.pos_sim_err_timeout = 15339U;
    tmp_tmp_msg_0_1.converg_max = 0.08757756667759042;
    tmp_tmp_msg_0_1.converg_timeout = 56376U;
    tmp_tmp_msg_0_1.comms_timeout = 34943U;
    tmp_tmp_msg_0_1.turb_lim = 0.5012154696498287;
    tmp_tmp_msg_0_1.custom.assign("JHJOKHXVJFHZKCDPVMRRLLIMCUM");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.12144950168504443);
    msg.setSource(4511U);
    msg.setSourceEntity(175U);
    msg.setDestination(7521U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("WCGHPIWHLIVCTZVUEALKDXDKALJHQNSDRZUSC");
    msg.description.assign("WXGPGNMSREJQGARJCDOCZZKIDPIVFNMKORQVLISTZMZTEHHJDPOXEKLMCBIBMOHNIFWDTBKZRPQOXYUKIWLJQCINCVFPBYRTYRFVJCJIYYDBCDWVXRVBFETPLAQMUYHEUEKTBZDPKDRABJSGUXPMDLOQPBHMKWLNKOHFIHNSWWOXSFBLVRSXHLFAYQAKWUJNGTNXVZASFCYZWAAFJSXQYRHEGGDEVGUUCTGTJAAWOXIOVSNSEPLHZCNELZ");
    msg.vnamespace.assign("BNCODXYOCUMYUXQKWXFCUOVFIRDIPJSLJVCLNRWHQBBWPGKPTWMWAKXZVPGNEPCJGHCCIHGKQGPLVDRZMAXAIJQZTDHQWDTLSVSJFAQPVZMLIAGFBHGISBQBYBUTRRTROKKMONNOFYYEXSUSZLRKZVIQZHTJTRBEGLJUKMERN");
    msg.start_man_id.assign("AIFLJGQUCSTPKXBHFQRZSLGXCQYQARCORAVNMTHYHHHQZWYFJKFLLNZOVUCDZBDZBKQOVRLEJYVNLEWUYYDQSUIKUVIOERNIDNWLKPHMETMPTLLGOGBHQRXPOHFCKVRWNYGFMSOOBLUBGPPIJCUPTDUXWITAUNGSCKCWYVTZCFZBSIDAGQXY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("NBEWHRUIIYJMVQHMNUASFTJFAOMDYPQKKUDFDMFBLGGOZZSLFXRPWCXTEBMYALIEWKLQAKVIQILJUXTRJVNLHCXPTPYLVSTOHAYGQTJWWZJGBGXSLCSHDVPHDKGRXDTEEOXAVDRQEPEAJSQUFHBKORACQKBHJEMO");
    tmp_msg_0.dest_man.assign("GUXJUHMSGPQSLWLWNNRIVLGKKRLVBROPISFPECPUMVBTKZIHQKNMZASRORYMIGCGRGWUBYDMFYQQLBCWSLNXXQTZXKCQSWNYJGXTYXDFRDTIUWBWAEFVCEZVLOKDDCWIHTJJTDT");
    tmp_msg_0.conditions.assign("ZDOHECPFERLIPCYUNYSNYEQKRMFCJURQGJRAGVSXAKMVRPNPZUEMYMVMTJIZLEEQFLJDTPLQLZXOYDXWTGIQQMARKWWODAWDKFEOGFMFUPFCGJXQHCBIHKXHNVFAGUAEIQAXCYUIXWKABTAZGHRBIDWLYCEBSZMNNHGJIBSVHUKSMXTOBBBCHR");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Force tmp_msg_1;
    tmp_msg_1.value = 0.7955111838444818;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7065572839652843);
    msg.setSource(15974U);
    msg.setSourceEntity(126U);
    msg.setDestination(28941U);
    msg.setDestinationEntity(227U);
    msg.maneuver_id.assign("UBMYFNJYOBLFBIBTFQINGGDLRRCCGSGCMINPHMARJQSCGUOHKDWRHENPAHZAHTFPZZUVKBOPFXWGAPSXWVQFUDRXTYEXYTVJAJLXWNAMZLID");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("KYYKJCYVRVFHBXVXXRNIESEYACZCNY");
    tmp_msg_0.formation_name.assign("ORWFSAPXYZAKNHVSTQXYUUTGOZCRHLMILJZORVJMFPNPIIDSYUVMTJRXFYAVMIRPGKTDJEYGWUWRCMLQGMWEK");
    tmp_msg_0.plan_id.assign("TFBBTUSZYOSZRHKWOPVCFYVBBWWGWMTOGHKZMWFGHXCCFNZCKHCHARXJEIIZXHVRIIPJZRIUYZTPXR");
    tmp_msg_0.description.assign("QCSPOAQNFBGG");
    tmp_msg_0.leader_speed = 0.03250979697841616;
    tmp_msg_0.leader_bank_lim = 0.30360036199209905;
    tmp_msg_0.pos_sim_err_lim = 0.7000396891459157;
    tmp_msg_0.pos_sim_err_wrn = 0.8409788828756942;
    tmp_msg_0.pos_sim_err_timeout = 58946U;
    tmp_msg_0.converg_max = 0.8416498077564165;
    tmp_msg_0.converg_timeout = 5424U;
    tmp_msg_0.comms_timeout = 6506U;
    tmp_msg_0.turb_lim = 0.9119793523183743;
    tmp_msg_0.custom.assign("CUFFEFWZLOHEJDJRIWAYRASMGFMOXHZQTQOCXZKCVMGJNZNLOTAWKLOQZBRXDUVZFPLBNWJIIYWRBONQPQUVGXRDHH");
    msg.data.set(tmp_msg_0);
    IMC::WindSpeed tmp_msg_1;
    tmp_msg_1.direction = 0.3283476795413609;
    tmp_msg_1.speed = 0.5509937840416457;
    tmp_msg_1.turbulence = 0.6821174808453752;
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
    msg.setTimeStamp(0.09912236439309796);
    msg.setSource(56189U);
    msg.setSourceEntity(20U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(47U);
    msg.maneuver_id.assign("TEJBZOZQHIZWIAFLTXJWOZUQCDKJXLLDVNVIOBRJOIFXHGYCSREILGNHLCYPNMBOTXYXNWJFIHYOAYVKUEFFEJDULUYHMBONAEZPNEAPVRKTSXVDBCBLKFGFRQLGXPTDS");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.08480923888015135;
    tmp_msg_0.lon = 0.44046046352165813;
    tmp_msg_0.speed = 0.28658592334195454;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.duration = 23471U;
    tmp_msg_0.sys_a = 35206U;
    tmp_msg_0.sys_b = 6475U;
    tmp_msg_0.move_threshold = 0.4232106535838219;
    msg.data.set(tmp_msg_0);
    IMC::PowerOperation tmp_msg_1;
    tmp_msg_1.op = 204U;
    tmp_msg_1.time_remain = 0.7295043830375252;
    tmp_msg_1.sched_time = 0.6501825248756101;
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
    msg.setTimeStamp(0.6271684811004711);
    msg.setSource(28140U);
    msg.setSourceEntity(40U);
    msg.setDestination(64343U);
    msg.setDestinationEntity(83U);
    msg.maneuver_id.assign("FMUDTIKIHEKIDGALVYMWWDMTTPCUAAQXHJETZSPPGEGNRQRACIFCGSALQVE");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("ZOZJLNAFWAGPGGVJHRUTKHEAZBMUIMFCDJJZKAIWXGURRJKQLOBYXOKPWSCGXYTZFETQPZSSGQOOFDETSRTNXWBAYAIQWHEWFLLQDQHBCVDFCVNHDMCKELUTMCFILWNUYGVXCHKQIQPRRBLXCQYDPSMWIRRUYZHDKYIB");
    msg.data.set(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.07894869346359157;
    tmp_msg_1.confidence = 0.19279224584435217;
    tmp_msg_1.opmodes.assign("KNQNBMLTJMPJSSDRZSAOJGNYTFFSYFJXHOBNVKJPCHHUWTKEHORAMGPLZKLTCXAEWCGEDQONMVEUYVDXYF");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.21696404280628634);
    msg.setSource(6954U);
    msg.setSourceEntity(86U);
    msg.setDestination(49650U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("GWYQKXLIWXFENVTVZTEQNORBPRDYJZVAHDPGJZCHKQIZITOFMJUNEXPCORUAJIPMGHJUSGGYWWIFWDZMDDOMBLOW");
    msg.dest_man.assign("PRLCPFVBYKBLSBQDEKMWFADCBTTIOKGDTAMVOEPFOZANLEDJFZKYMMSOBUXXPIDJZWSOVYJJNRACTBXGLUPYRYVEUPQWXYANOJHRHEULXTMEQEVTCFBHJJRSXJHGWZLFCSGNFASEBGHYMASPMDXGDANIHNIHWQHHIWLQRNCOIVTOKICUBVDRKUZMIVUKAPXWSFFW");
    msg.conditions.assign("RCKUSKEKZSZYEACMLMZQDLDNMMHIIYNJFGVAPPMXTCTKRSIZYQDWQGZGUWFXOTGHHMVRLBYTEYLXDQCEHWQDARVPILLJYCYHKRVBVFBDICR");

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
    msg.setTimeStamp(0.9919999223152398);
    msg.setSource(24530U);
    msg.setSourceEntity(173U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("YRQZSSRJSBFJRKOTLEWCZYGKJQJKYHFVXURAFPDZUVFWUNZHATAIQBBGGEUPPUQNSMWATHTYKAEVILERBMQMDDLOTLKHIZMICJXRQTMHSUEZXJMBXXUWOLACYXNSFROREVAGCNYWINTEBGAXXPKRPDDJDMCFWHLHPNGIYWLSGDHFOFVJNVGPOGIMZDHKONMYXCTERKQOGEHQPMKJUIIKDTTBVPOISA");
    msg.dest_man.assign("ABMXMQQQQYZWGSTRMSTJOPJIIFHUVIBHVRORRPVHLICEAELGQENMESOSSVYUUJDIDLVGAKXHZCJMYYOFGOWJYBIYZGTSN");
    msg.conditions.assign("MGMEUJHJWADKUMXNC");

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
    msg.setTimeStamp(0.5992167089031851);
    msg.setSource(61754U);
    msg.setSourceEntity(75U);
    msg.setDestination(30165U);
    msg.setDestinationEntity(107U);
    msg.source_man.assign("HPZQKLPQSCQBYBDAVZCSZMRKKSLC");
    msg.dest_man.assign("EIIWBDVCNLICGPHTGBOKJVWAREHUONW");
    msg.conditions.assign("VSGNHABTPIJCCGENBNLIKFHRMSBRKTBSKIYCUFMTPPPALVRCPTFFUHDRZWZWWGJJDOJVNOAJURCSWFVPIUYNDKXFMEANKN");

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
    msg.setTimeStamp(0.6745658980412828);
    msg.setSource(42066U);
    msg.setSourceEntity(170U);
    msg.setDestination(43938U);
    msg.setDestinationEntity(208U);
    msg.command = 69U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FJBPFVFIIHMMEMVDDNIILRPEFOJRUHPPVCNYXDDMVSXTDIGQBJUWXBRKFOLTJTPKLHPZNXOWJZWADCGGPRBWABAOXSJVES");
    tmp_msg_0.description.assign("FXNKDWVYSOZRLNGIBVLOWRXDMDYORVHJPFASMAVIACTDMQQTZVWBLNPCVJCYOIEXMHNLYEEGGHGAIJQSW");
    tmp_msg_0.vnamespace.assign("GIBSZUCIHPKTKNXCVKSQQEERTWVMQTXIWJEXIFAEVVAZSQYTHQURJLSGBTKZEBZXZOPNGFRADBRFS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FCZUQUECSVASKJJKGXNLNAATOSHXVLLDBJPHWRZKYGCGWHJSMDUQZZVGDYTUSVQTJVCYTJNEUDZXFRAJUORBBXWERCGLKNTEIKOZPSYTBQFDIFQKACEBLZVOBIPNXIDDRQUBIMLWVPRHTFFXRGERMIVLNDBMABBWOKCPEZCMNGPFMDEQJOFWUHWHWGDXSWGJQQ");
    tmp_tmp_msg_0_0.value.assign("VFSLSCIUPCJWOEXNQBZKWIUFKDHMJZQTSFKLEEVMZOGYPXCLJDXNIHUQYYIEWMVWRGJQUSXEPZSZGH");
    tmp_tmp_msg_0_0.type = 126U;
    tmp_tmp_msg_0_0.access = 5U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GRHOXBHZIKUHGSXMPGJREWUSAUMATZQNHYIKJNLCUFDGLBBDMZCUCHSOEIQPVVIRKWOQPYZOJNCSTXNPWDASZYCZMTDITPEXCJXBRBDDQVYRTSFEALRCYFPAOWPTISUDFTMQUGWXXETYJWQZNLQF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZKJVCIDXTTQAKUVQOZLBXOTWIFXBMFNPGXMBWCBAIVRIPULAYEBMUFHLFHRBDGCFWKIQLISTJWCYUBGKXMRQQNPMRDPAPYQ");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 53068U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.49791167255696045;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3851240080666085;
    tmp_tmp_tmp_msg_0_1_0.z = 0.17235493664472434;
    tmp_tmp_tmp_msg_0_1_0.z_units = 21U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.41002175730295365;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 191U;
    tmp_tmp_tmp_msg_0_1_0.duration = 64431U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9595992177907624;
    tmp_tmp_tmp_msg_0_1_0.flags = 19U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BKMOJARCAERNGLDHKICUZVGVBFGTSDERVNIIBQYLRVOOVLJSLYSVURNPFLHZVZARAHEXQMUDKYJWIZIRHATPHLHFNQPEEMJPDQDFCYQTAMRLTPQDJBRMKAEICOSHZDEVTYTYXZCYJWQKHEFTEFYPLFKIXPUUZJUCSFHDZMAMOBJVYH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetLedBrightness tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("YSOKMSRPTZYIDTNJDHSRXUWODCXEHYPZPKDEJXMFSAUOHYZCEVPUTLLQBJOKXGVQPTQPVXSZMZNHIGQJASLGWSZMALNNUCFLIJIWYAODSOUEEFDGUTXTRDLAETKDVQTVGSXVDRUBRLEHVMYPSFWEYHLXPQBYRQJOILEIFNCKNBJKWMZYMKWUQKCWHGQUTIRZFOIHBCINGV");
    tmp_tmp_tmp_msg_0_1_1.value = 231U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::HistoricTelemetry tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.altitude = 0.4900523328741624;
    tmp_tmp_msg_0_2.roll = 11327U;
    tmp_tmp_msg_0_2.pitch = 41480U;
    tmp_tmp_msg_0_2.yaw = 53855U;
    tmp_tmp_msg_0_2.speed = -914;
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
    msg.setTimeStamp(0.3039962279278653);
    msg.setSource(28280U);
    msg.setSourceEntity(142U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(168U);
    msg.command = 72U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AYKNLCAREDBAIFQQATSAJPJUBKIXGLDJELYOEGWXLHJGRZOFUHJTJORXAKDSXHWVITPCCGFZNAUZIPVYCROCKKSRHVPJ");
    tmp_msg_0.description.assign("RQPUNKGFZQXWWZFUHFLRSBDILPAWFHBIRJQPGMJDMMNFUAIWVPRIUDFPTZJWJNLZZJJODSBTFOZPCYAEYNTXIAOXBBNDEWVDIQVQKKHLTMORGGTKKECXCMGEVDLLCUHWYXCCFKEIBLJGVYUAACYOGCVHSWLGXEULOHYUYXOMCXHJEQSPNOWXHRTVMPNCBQVKQABHSRPSYYENTAQZHTRKVVSIWE");
    tmp_msg_0.vnamespace.assign("SGMMXAZLFWHSTVAKNZZOUWCBPIDTOXLCOL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SCELAAAWFJPDXENAUQJMCTIFEURGNMVQXBQZZDNHRLTVRGIVHZJYXMIQXEYTOSWWCMAYSBOFXKPYFIREZZRIYFQVMLTNWKOWLIKMKVFPXQXBRTJWZTLPHXAROYPGANVUFCHPWDBLDPZMGEGUTSQYNOFTQKARKELDHCDSPLMXNSGJFKBMBDIOVDIUQHXBGKZBYEJOFMCYVWLGJESEHUOOGURJNCSASJVJTCIHZKRUBPCCBWPDHSWNYUKOGLTU");
    tmp_tmp_msg_0_0.value.assign("EAAGOBKZMGESMTUKFWWPBWHOBQSDEQXFWRBQOCKZRCRTJNBZHXYLDFWJSIAXKGNCIRWLCTTXHUPUOAMRIVMUYLLKPSZZMMRDCGUNRGFPMZHJTKUEJEDKBDKHYFXVBFINQHQJPDYTROUWJBGQQVWHVEYTNEJIYXALMLRMWPQVNCJNYSOUFSTIAXSVZLNUFZYCTIYFMPRIBWEOXD");
    tmp_tmp_msg_0_0.type = 25U;
    tmp_tmp_msg_0_0.access = 47U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TDAXNLXICMHMIMKBXPBKGTKHJPOAIFHERLWSLRZDZTJHANOAGFIUGYNYDDMPAYWVMXTQQNYSRHCNOUWMZLFUCYQUJBPDKSJFTYMXVEPRHQITEVYCJBAKBRLBWCSVTRFPEUXPVRQIXLLSQTOWZWLIFFOIDGWZXWZBMCGIHNVVYVDHDJGEUAVJXWKUPKSBBDNA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KJVEKRDNVYWBDZAUCOCOEBADTHAWJPLEBWBDHZKJYOSKYDNLHRAEBDHIEKZGGRUSWBFSPISOHIQIXSJCRNLUYPFMRTERXDFXBMHFQJOPCFFOOJSEVEWZUMGTNPOHQJQRLOVABHCFYLWTJXRUGBQEGLKZWNFVVVWZVDUZNRKLKXWMYAMZDNDJSYMLEITIC");
    tmp_tmp_msg_0_1.dest_man.assign("HWXHGXLMZP");
    tmp_tmp_msg_0_1.conditions.assign("CNMVTFSMVJEHGMGOCLPEYNXWAPAQCUGXYFULEEIXNTBXRWFGPFWLFLDEE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.04361847778911965;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::RelativeState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.s_id.assign("SXRGSSKUMLNGYZ");
    tmp_tmp_msg_0_3.dist = 0.2378808286352052;
    tmp_tmp_msg_0_3.err = 0.37171703699465186;
    tmp_tmp_msg_0_3.ctrl_imp = 0.30494519751460536;
    tmp_tmp_msg_0_3.rel_dir_x = 0.4942796060802074;
    tmp_tmp_msg_0_3.rel_dir_y = 0.572542052141767;
    tmp_tmp_msg_0_3.rel_dir_z = 0.28553499258669257;
    tmp_tmp_msg_0_3.err_x = 0.23190802724974602;
    tmp_tmp_msg_0_3.err_y = 0.24249857415312048;
    tmp_tmp_msg_0_3.err_z = 0.35059919525464156;
    tmp_tmp_msg_0_3.rf_err_x = 0.3695748637367694;
    tmp_tmp_msg_0_3.rf_err_y = 0.1439844918662353;
    tmp_tmp_msg_0_3.rf_err_z = 0.2713579558535687;
    tmp_tmp_msg_0_3.rf_err_vx = 0.2230125822269602;
    tmp_tmp_msg_0_3.rf_err_vy = 0.30391760471712026;
    tmp_tmp_msg_0_3.rf_err_vz = 0.7801594788198181;
    tmp_tmp_msg_0_3.ss_x = 0.13101136748415865;
    tmp_tmp_msg_0_3.ss_y = 0.7350202911632672;
    tmp_tmp_msg_0_3.ss_z = 0.053814412119171595;
    tmp_tmp_msg_0_3.virt_err_x = 0.2870657295522334;
    tmp_tmp_msg_0_3.virt_err_y = 0.7111622452848698;
    tmp_tmp_msg_0_3.virt_err_z = 0.8421215377081869;
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
    msg.setTimeStamp(0.5493946776125578);
    msg.setSource(20695U);
    msg.setSourceEntity(85U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(114U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JPBNDNNRNLWBASETGUUIUTXFIYGTS");
    tmp_msg_0.description.assign("FWRILJELCUZTEQNQPPXTMMHVWJBVDIVJRKYMBIIEXYRGTDWRGYSOYKIFPXPTKZAGGBGXPLTRSZTDPIJGIOEMVJXRSYZUQOOOAWKCNAKUVLXC");
    tmp_msg_0.vnamespace.assign("IRDNUUWIWQEQVUGRNHFVGJQGFZRSYYQOLQVQJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PBPCTCTKQSTQFBZZEDXMOJMKNNALAZOIGIHTRWUPQLVFJHAGUAATIRBJRIBNWPBYCUSYYLRVQACMECLBNHHDZ");
    tmp_tmp_msg_0_0.value.assign("BUFMQFSIDRJZFZPMZXXSOXANNAOFVIQVZVAJBVHIYRPMBWBGKCSTKCZNVMXMQQMTBRTZFKVGRPTYSLYAHGAJDUMWYKZEIHBRPXETANRMK");
    tmp_tmp_msg_0_0.type = 194U;
    tmp_tmp_msg_0_0.access = 137U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XMUDAHUUCKDQTSSWPHZPYRYSFSKJGBGIWRWNIWTOKXURGVDZFVFBAKOZLYTNFTLXYVTETJEYKFGZEQEEMTXVZQLVAYLQNVCDXPI");
    IMC::PowerOperation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 29U;
    tmp_tmp_msg_0_1.time_remain = 0.539990641024139;
    tmp_tmp_msg_0_1.sched_time = 0.5313760309362072;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Fluorescein tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.11589251467671036;
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
    msg.setTimeStamp(0.45239500404157384);
    msg.setSource(6063U);
    msg.setSourceEntity(35U);
    msg.setDestination(17679U);
    msg.setDestinationEntity(2U);
    msg.state = 231U;
    msg.plan_id.assign("WSFOQSPLCUWBINSXZNRTVHJDJBLDSFAXQOHEPJVTRVQKRMMOIMFLB");
    msg.comm_level = 88U;

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
    msg.setTimeStamp(0.013622634597163397);
    msg.setSource(26771U);
    msg.setSourceEntity(162U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(126U);
    msg.state = 208U;
    msg.plan_id.assign("CHZEXCWOFCBBMJXSEKOVNNEROICCPSPSKKPBVKKZHBANUDKIJYNRPDJRYEGCXDUEYWSHBQULORHGWSBFAGADIFQVOGVOARUZOXGUJKGWVMCZDYDNWLAXPVL");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.40352259763038134);
    msg.setSource(24725U);
    msg.setSourceEntity(189U);
    msg.setDestination(19517U);
    msg.setDestinationEntity(50U);
    msg.state = 66U;
    msg.plan_id.assign("TMEOONLWMYJTOBYWMBTQCERYZYMKPPTSSFGKTHCJQUZDVKWEPOWNNZQPMWRHYCHOXXTEMYGXPZKUHVCJARSLGVGCDTNDGRAPLIGDVLMBYPRNNWNKHHBKNXXWGIOE");
    msg.comm_level = 249U;

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
    msg.setTimeStamp(0.9575479009677161);
    msg.setSource(59135U);
    msg.setSourceEntity(225U);
    msg.setDestination(35751U);
    msg.setDestinationEntity(26U);
    msg.type = 151U;
    msg.op = 199U;
    msg.request_id = 47747U;
    msg.plan_id.assign("DQZIZXEJDQYLTRCTCVEVZNZHSPYCBHACFMZMQHIODHMSMLELVXTLJFEAXNRAFNBHOKVZBCGAU");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 134U;
    tmp_msg_0.op = 100U;
    tmp_msg_0.request_id = 18306U;
    tmp_msg_0.plan_id.assign("ZQRUAVRYEOVXOQNBQTOMKLGJQCKTFIWSRZWWKFKANTMDLBEVHUPORMIZKDMSTUJUBFEKGLZTWVIGYMTSXYFHGFAZTSNBLQZBFWIOJFIHYCUWTHHPEMNCUSYPGNMOCPVTDPSXZQOIJLPGWAARJGIQCOICQEHEZLKELNKAOUVHDTVAAUNS");
    tmp_msg_0.flags = 62184U;
    IMC::TelemetryMsg tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 217U;
    tmp_tmp_msg_0_0.req_id = 4125141949U;
    tmp_tmp_msg_0_0.ttl = 64748U;
    tmp_tmp_msg_0_0.code = 253U;
    tmp_tmp_msg_0_0.destination.assign("EWRGDZAGQZMWFLUVSQMWEPSMMLJPIJYLYBWAWQCKHCEMESYWXTNTQAHLIAJSHJVDVGVTSFWCFZPRYABODLNTLWEZQBLDXTHCNKKITQNZMRQPRGVMAQABRYSEC");
    tmp_tmp_msg_0_0.source.assign("NJDEUFORACPAGTYGPGLUHJDIJJXDBRRYXYVAEHLKIGTOXVTQDFJSUITVQKCTRNMFACAHFPELWHBIEHZBPYKHSUIITDCZJSHAVZZNCWKVENATZZOULYFCWYGTBQKAMOUKFZEVQVBQQSBRIEURS");
    tmp_tmp_msg_0_0.acknowledge = 160U;
    tmp_tmp_msg_0_0.status = 56U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-127, 100, -111, 120, -47, -57, 37, 120, 33, 99, -84, 70, 90, 81, 117, -53, 49, 61, 53, -115, -11, -77, -13, -65, -85, -61, 61, 103, 47, 24, 90, -90, -56, 120, 122, 70, -116, -30, -107, -7, 73, 15, -43, 17, -28, 15, -127, 63, 76, 86, -34, 50, 126, 28, -17, -119, 6, -62, -75, -94, -13, 48, -89, 96, -35, -69, -10, -72, -26, -125, 49, 9, 74, -100, 48, 24, -95, 126, 71, 10, -81, 12, 110, -80, -90, 40, -5, 72, 31, -53, 85, 68, 96, -53, -74, -36, 105, 108, 36, -119, -110, -95, 41, -29, -106, -68, 57, -119, 23, 46, -45, -115, 5, 98, 121, -45, -88, -119};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("LRRPMAYVGSWGIKDIVJJQNGDFJUVSLFGQACFKQANJMMQIGWCAMXBBEEUIDMYDPUZVLYLOKUPONPXGRHFOPTWXWJDODKSXSZSOUNDRMNAFSSTZFIDEGFHHHLAYFKHCTZYHVWNPOJRUZXGCLGWVEJQQPFATVY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QLVZJTORCOHVSSIQWXKUVWBMXSXAJIUUWNDLFADGYPLFTVALCUDXIRCZTQJCTBDDVWYLKSKWRLBWIPOHXGRMSZAJOSKHAMNIBLKTBIQXRHM");

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
    msg.setTimeStamp(0.9854939119523491);
    msg.setSource(45266U);
    msg.setSourceEntity(249U);
    msg.setDestination(27443U);
    msg.setDestinationEntity(247U);
    msg.type = 151U;
    msg.op = 201U;
    msg.request_id = 28710U;
    msg.plan_id.assign("VPVZRTKGLQTBZDBYMIDXYPKEEFAZPPDWMLIHMRNVKGCEOSENDOGKIBCOUZMBASQHXWKQTWUJFKVJRSUIOGMODYDWHETUAOYKYFTNCNZTHTQGLVJUXDNCJCDXSBQAJVYTLERPZMJVGIRNYIHCYLQWXIFUCZWNYVOUNMQOJWFXPZJHOSUMUQPLFPAZKLFCOFASVCIQSSGXQWYARHLGLBWSERGRJEEGRNXCJLBKMHKPTAXE");
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.comm_interface = 60424U;
    tmp_msg_0.model = 3951U;
    tmp_msg_0.list.assign("EPYBGCTUWRSXRNSPYXOCCDFTKELBNCMUTLLCSXDZRIZTQOLJPSNTYFSHDUSHWAERGFPBXNJDKEGVMFRLICDGYDPAEAVBJUIZVGIFLWLBFFIWQIRJGEM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YTPRULPNCUOJKPUEGDZGQKUTVTNZJPWFCYCJMBQHKQBNCLQSGYEHYHSXMCHSWFLITZWELFJKEMMPUXUDCVKDNMAVZAWBIZOIRKWIJBVSYVITYZPDEFGDFQAARJMYTOOLXYVZAPFOAFESFIVGQBHQGNPVFCZQXUYRKPSOKXVTNEUGXHZBEPKLLVSDWMWDIEOEBSWQAIJCRZQDTM");

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
    msg.setTimeStamp(0.05617435139695637);
    msg.setSource(8530U);
    msg.setSourceEntity(250U);
    msg.setDestination(74U);
    msg.setDestinationEntity(232U);
    msg.type = 236U;
    msg.op = 85U;
    msg.request_id = 59797U;
    msg.plan_id.assign("XPIBWJGSQUAECBNMVBQMEPLZYHVHBRLAZDPYNVSUFBUJKSZTWIEF");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 207U;
    tmp_msg_0.period = 2465030755U;
    tmp_msg_0.duty_cycle = 1085721742U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EKNBTJNACXFZIAYICXSLHLSILNSMQQCPAHLTAGKPRTIGNZWOHPQSJBZUDGYJMXOXCNQDVLTQNZLVOPQHOOIVXKYBRBIPEPBKLZFJVOQIRFZCHGYFCEMGHZRSWETVJYIKDENGNCOQRYAWOZDHYBNMWTSMWLBXXUMFBYFZTCAEBCQFUWSTPMHDDGUYOIEEJNTGARYCZSWJRDSAFKUDWDAMPXMWHIGJRKJUUEKJWPV");

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
    msg.setTimeStamp(0.970164144840326);
    msg.setSource(61094U);
    msg.setSourceEntity(162U);
    msg.setDestination(25856U);
    msg.setDestinationEntity(154U);
    msg.plan_count = 52318U;
    msg.plan_size = 3615865875U;
    msg.change_time = 0.15022266788230854;
    msg.change_sid = 28334U;
    msg.change_sname.assign("OUFAERVWSKXMFMZRZDIMCQLJADACWSEWGYQTLVQFCOXIFHMLUYHDXJCMJEQKKPIJGQLPQKRGJRUYSNHTBOVZEYNUBCWRNMLDFRXSXHZECIBJTSJSLHFHDYUFDLLMUFHBVEPAIMWOGTVLLIGPCNPQGZFZAGWIKFNEZNBJHSDZOSTGGZQTIVUBPBBCOSB");
    const signed char tmp_msg_0[] = {51, -22, -64, 105, -110, -27, 84, 62, -64, 73, 8, 96, 35, -49, -33, 30, 89, 32, 87, 106, -65, 106, -3, 60, -91, 120, -65, 84, -25, -113, -31, 86, -101, 18, -118, -53, -60, -84, -111, -22, 59, 41, -12, -63, -22, -52, 101, 12, -46, 82, -95, -105, 29, 17, -13, 81, -89, -122, 67, -127, -24, 19, 126, 43, 101, 96, -34, 71, -84, 68, -63, -36, 70, -110, 32, -74, -42, -53, -89, 83, 62, -99, -128, -9, -24, -63, -48, -10, 23, 2, 31, 1, 120, -76, 82, -41, 12, 90, 118, 3, -121, -103, 44, -83, 99, 110, 87, 79, 69, 87, 113, 101, 31, -28, -59, 96, 95, 52, -15, -86, -7, -102, 20, -113, -92, 22, -58, -72, -27, 103, 70, -83, -26, -76, -49, 69, 88, 6, 114, -58, 35, 98, -117, -42, 63, 82, -42, 6, -53, 76, -80, 125, -72, -59, -108, 20, -96, -52, -81, -67, 23, -7, 72, -42, -28, 36, -51, -66, -112, -109, -116, -76, 82, 61, -71, 31, -120, -50, 26, -102, -99, 64, -1, 31, -63, 71, -56, 105, 49, -110, 81, -98, 118, 7, -105, -92, 57, -14, -72, 72, 26, -43, -1, -122, -59, 35, 47, 59, -58, 54, 97, -101, 109, -41, -102, -123, 29, 54, -46, 79, -68, -1, -5, 4, 61, 3, -73, -104, -50, -101, -39, 56, -84, -115, 19, -81, -101, 14, 112, -72, -83, 37};
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
    msg.setTimeStamp(0.6789393833002445);
    msg.setSource(55608U);
    msg.setSourceEntity(192U);
    msg.setDestination(16672U);
    msg.setDestinationEntity(237U);
    msg.plan_count = 1330U;
    msg.plan_size = 3764505594U;
    msg.change_time = 0.5025386208841206;
    msg.change_sid = 33056U;
    msg.change_sname.assign("CFVVWYHHFLADVRBOGTZBHWWPZXIFMKFPIJOZNDRZGYNSNEOFAUYFNXCRLWLPZEAAHSCIEATGUZCPUXI");
    const signed char tmp_msg_0[] = {-90, -110, 82, 31, 50, -124, 39, -62, 27, 25, -50, 89, 98, -3, 65, -12, 81, -112, -80, 83, -60, 68, -9, -55, -58, -124, -95, -26, 84, -27, -3, 64, 88, 23, -45, -85, -8, -2, 73, 17, -121, 20, -8, -52, -106, -80, 53, 62, 70, -20, 124, 18, -120, -97, -5, -11, -13, 112, -87, -126, -128, 8, -104, 105, -20, -35, -99, 95, 104, 55, -43, -37, -83, -72, 111, -95, 86, 68, 15, -7, -76, 18, 62, -27, -119, 34, -78, 57, 71, -24, -40, -57, -28, -4, -10, 57, 47, -53, 75, -23, 62, -95, -109, 11, 92, -7, -2, 7, 119, -11, 19, 7, -63, 28, 19, 18, -24, -100, -100, -75, -101, -71, -35, 65, -104, 81, 86, 125, 51, 100, 76, 34, -41, 95, 106, -38, 8, 7, 12, -85, 26, -90, 57, -96, -116, 59, -113, 53, 29, -88, -113, -5, -98, 37, 102, -66, -98, -50, 67, 57, -80, 95, -36, -111, 74, 94, 15, 114, -82, -55, 41, -61, -3, -34, 0, -36, 67, 71, 82, -32, -126, -102, 59, 12, -22, -21, -115, 64, -36, -106, 62, 24, 105, 78, 116, -65, 74, -75, 62, -74, 60, -56, -83, 10, 113, 47, 92, -20, 29, 27, 12, -60, -15, 110, 24, 62, 0, -47, -73, -72, -74, 68, 9, -116, 104, 22, 7, -4, -59, 112, -79, -22, -47, -32, 25, -67, 90, 59, -43, 85, -41, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XBRSNHSSEODSLSJOSVVHAOYIBAOFQHNAJSCBYGTZK");
    tmp_msg_1.plan_size = 4466U;
    tmp_msg_1.change_time = 0.5919589367367207;
    tmp_msg_1.change_sid = 34613U;
    tmp_msg_1.change_sname.assign("JESQGCVXCIMIEYZXKYUGHFMRGFNAOKADSKIAPZBWMURULFDCNXJDXJYHBJFDJWIEQSQIZNBDMPJCULCFXGPVEVRFGTIKPRKHRWTLWHWIUSUDDIRFKKN");
    const signed char tmp_tmp_msg_1_0[] = {-83, 25, -125, 40, 117, 49, -2, 23, -84, -56, -30, 2, -41, -22, -111, -90, -77, -51, -115, 41, -89, -71, -51, -20, 42, 77, -25, 75, -26, -107, 28, -79, -104, -47, -127, -34, -100, -22, 84, 63, -108, -94, -32, -119, -54, 40, 49, 19, 82, -7, 111, 58, -62, 0, 63, 97, 23, -57, -45, -47, 23, 24, -4, -115, 80, 22, 73, 12, 108, 25, -3, -32, 64, -115, 61, -45, 17, -93, 21, 93, 72, -116, -98, 11, -98, -85, 117, -67, -100, 92, 38, 96, 124, -124, -82, 11, 49, 2, 102, 67, -85, 116, 118, -87, -109, -85, -73, 110, -55, -74, 97, -103, 42, -102, -1, 98, -98, 15, -96, -47, 84, 58, -39, -26, 116, -76, 31, -24, -74, -117, -66, 41, -75, -36, 120, 52, -109, 23, 0, -55, 84, 47, -36, 9, -41, 100, -55, 67, -34, -38, 101, 99, -4, -4, 88, -32, 6, -40, -4, -67, 58, 7, -116, 0, -118, -93, -70, 115, 47, -7, 34, -27, 120, -29, 66, -104, -15, -48, -121, 126, -109, -127, 43, 101, -126, -16, -63, 3, 59, 19, -46, 39, -128, 12, -36, -84, -29, 124, 107, 88, 98, 8, 45, -32, -34, -78, -111, 48, -110, 76, -56, -2, -109, -85, -50, -77, -3, 20, 12, -40, 45, 70, 117, -88, 68, -103, 42, -96, 90, -6, -23, 83, -53, -106, -107, 120};
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
    msg.setTimeStamp(0.4574922896688597);
    msg.setSource(30455U);
    msg.setSourceEntity(154U);
    msg.setDestination(61893U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 59293U;
    msg.plan_size = 3203791463U;
    msg.change_time = 0.510695714230547;
    msg.change_sid = 8683U;
    msg.change_sname.assign("OPYBGUYNVKMFDKIMAKJZVUOLOHMDHDIVZSPXGIAXDYQNJYUTMZERIYUWITAFGICYOUBPHDKCSLZNQDEVLQOQR");
    const signed char tmp_msg_0[] = {101, 100, 104, 35, 11, -58, -14, 103, -61, -68, -79, -108, -35, 1, 99, 53, 98, 69, -14, 119, 24, -92, 60, -20, -49, 69, -104, 63, -77, -75, 22, 23, 107, -7, 20, -28, 43, -98, -1, 47, -30, 70, -74, -119, -11, 50, -31, 49, 107, -76, -95, -10, 122, 61, 31, 74, 60, 67, -83, 98, -121, 25, -95, -34, 66, 84, -49, -69, 102, -72, 13, 84, -104, 86, 86, 70, 101, -73, -43, -72, -48, 12, 107, -26, 50, 116, 22, -50, -86, -110, 86, 57, -10, -58, -56, 75, -100, -122, -26, -83, -55, -119, 82, 76, 58, 8, 52, 45, -33, 99, -19, 111, -53, 83, 58, -10, -39, -30, 72, 44, -91, -87, 47, -42, 45, 89, -12, -99, -118, 64, 1, 45, 34, -14, 79, 61, 59, -92, 8, -43, -41, -3, 39, -20, 77, 106, -3, 35, 123, -22, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TICPGJFDONCQCIYSYZVWXJHILUEUMSYRBBVZRHWUUBWDHWSMJQMYVEDTFJYUDRCWIBKKZDJLFVGXAEHOPUKUYZKMMZVQFSOFOTYDJFPVRMLUOYKFWKJLAWOREGQPOBNKKGTENJBTTXXZDIZFMATHPCDFZRGBZQANLNCTDAGXISMXOWNXPSAOPMKLBDUEFCEPEVTQASGRIINQWLPEHHXAQBJQNYJGVL");
    tmp_msg_1.plan_size = 28113U;
    tmp_msg_1.change_time = 0.5374826425105902;
    tmp_msg_1.change_sid = 330U;
    tmp_msg_1.change_sname.assign("WIWHWGRLYAHZHLICCGIOTJWEFWMWBJKRPQQSMFDFZLLEOOEBIPAAVMNARENQHRXVANEPSUMYVEDONFMPMTIDHJWFNEXZSOGATTFSXUKCKHODWRPLPPQGJEIETFIRCHNYQVATLFAGSVSDZSRMKIYBGCHYPOYJNZTJTQKHKSULMYSBQROGGDXTDLXUWKBLUR");
    const signed char tmp_tmp_msg_1_0[] = {-10, -14, -120, 13, -40, 58, -105, 114, -47, 118, 38, -13, -125, 112, -100, 59, -54, -125, 9, 61, -69, -92, -59, 30, -122, 52, -83, -15, -54, 24, -24, 14, 81, -91, 28, 43, -15, -85, -68, -109, -26, -38, 100, -64, -38, -119, -30, 17, 91, 73, 98, -39, 64, 46, -23, 60, 107, 109, -96, 51, 28, 106, 45, -118, 41, 17, -8, -52, -21, 0, 9, -121, -13, 96, -46, -30, 25, -33, -46, -15, 114, 99, -90, 126, -20, -37, 125, 0, -47, -107, -104, -77, 58, -98, 123, 104, 39, -31, -83, 12, -44, 77, 101, 104, 1, 58, -41, -33, 32, 43, -107, -83, -32, -17, -21, 73, -111, 21, 81, 96, -126, 9, -84, 17, 26, -77, -76, 112, 45, -53, -114, -119, -34, -115, 59, -81, 41, 6, -68, -39, -74, 41, 19, 9, 119, -23, -41, -65, -103, 75, -22, -53, 3, -67, 70, -109, -125, -26, -46, -49, -105, -60, 119, -111, 32, 109, 76, -29, -123, 5, 114, -78, 73, -76, -56, -78, 4, 48, 50};
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
    msg.setTimeStamp(0.6648574204631869);
    msg.setSource(47467U);
    msg.setSourceEntity(204U);
    msg.setDestination(14565U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("QJMCSLOGXCYYOORPJMMRKKAVMSRDNVUHPOLRAPEXFUZKOXUJYIFECJEFDIZQBGRONKGJGHSGUPQBBWJAEDXTVZLEHLTWLKARAXTKSZQXNGMWIIFVTETQKOZVCQIRUSYACUDCQHNUYPMIFWZMVNESOHDOGBKUONDXPYCBJUHWDDYZDWNPFETGHMZTCLSZRDJJBLHHGAQTMBFAHFKVPYNWQXAGFYB");
    msg.plan_size = 59665U;
    msg.change_time = 0.297210711126879;
    msg.change_sid = 19532U;
    msg.change_sname.assign("GMKJJIRTPVXDBNBVUQEMCNPFAVLRFIVMWOSFMIYXOWLKDCPDQSQRQHHSZVZOHFJNGIGF");
    const signed char tmp_msg_0[] = {89, 5, 16, 86, -63, 43, 90, 6, 66, 82, 85, -109, 28, 10, -6, 25, -76, 19, -67, 97, 68, 106, -3};
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
    msg.setTimeStamp(0.6850807596387198);
    msg.setSource(18641U);
    msg.setSourceEntity(138U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("RTSXRSXDGDYGOXKGSJQFRBJPSNUEWOMABRMAYQNZTGNXMAKSMVEPFXSWYMLPTEMQTTBFSPTMIYWPCDAFLGONUCIVFIGOYQVQOFKLXZUJSFWHIDSDVWVBQMERLWKAATNUZCCHVUH");
    msg.plan_size = 42279U;
    msg.change_time = 0.4063231947825513;
    msg.change_sid = 59093U;
    msg.change_sname.assign("TTJSOPURAMXXNKYRSFBHUAAEQQI");
    const signed char tmp_msg_0[] = {-104, -65, 26, 6, -10, 79, -103, -122, 119, -116, -102, -88, 78, 4, 124, -1, 84, -29, 92, 26, -18, -106, 48, 62, 21, 74, 59, -69, -121, 55, -112, -34, -25, 99, -79, 120, -123, -18, -48, -84, -41, 37, -114, 46, -88, -19, 120, 31, -51, 15, -59, -6, -30, 58, -5, 91, 59, 70, 89, 38, -37, -5, -50, 40, -6, -50, -54, 54, -5, 71, 5, -102, -71, 12, -48, 105, -82, -17, 60, 86, -83, 83, 78, 106, -19, 107, -94, 35, 83, -109, 97, -19, -123, 8, 17, 29, -114, 126, -107, -44, 0, 94, 82, -102, -47, 91, 24, 112, 54, -63, -88, -86, 3, 20, 106, -92, 74, 46, 84, -35, -42, 56, 61, 83, 110, -1, 97, 20, -69, -5, 67, -56, -87, -92, 101, -69, -20, 100, 3, 8, -15, 51, 16, 43, 68, -18, 2, -78, -65, 67, -92, 77, -126, -43, 115, 51, -62, 90, 78, 7, 119, 5, -36, 121, 8, 78, 21, 122, -56, -93, 76, 10, 8, -19, 126, -78, 100, 47, 43, 23, -63, 119, 38, 87, 29, -31, -34, 54, 101, -26, -65, -40, 25, -32, 64, 110, 92, 1, 68, -98, 32, 76, 118, 68, 43, 91, -52, -70, -93, 104, -6, 9, 32, -110, 50, -125, -67, -107, -12, -62, -21, 20, -29, -64, 95, -59, -63, 18, 75, -49, 6, 75, 92, 100, -10, 49, 98, 114, -45, -100, 3, 32, -97, 63};
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
    msg.setTimeStamp(0.42361452555484125);
    msg.setSource(29053U);
    msg.setSourceEntity(253U);
    msg.setDestination(1177U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("DVNGGGOENTKXWFDWWLYVUJHZIOLEMQTCFRRVPIQVQXSSNNBGVWNUIZDDOVLARJRGIAPBEYTMSSFTAYVHARMXFLCJWYVTRCDXEKCFIABHAJPUNTCTVMFKURCZDSXJZLK");
    msg.plan_size = 63906U;
    msg.change_time = 0.47297363627745936;
    msg.change_sid = 30036U;
    msg.change_sname.assign("IMJGMGDJCKQVQZMRBQPCRDNAR");
    const signed char tmp_msg_0[] = {27, 52, 112, -94, -35, 125, -77, 5, 68, 36, -11, -99, 71, 59, -16, -50, -45, -25, 67, 86, 96, -15, 61, -17, 24, -45, -10, 56, 99, 117, -59, 72, -68, 54, 88, 59, -126, -33, 34, -19, 52, 49, -84, 43, -27, -88, -98, -27, 15, -66, 38, -62, -24};
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
    msg.setTimeStamp(0.44849715501792664);
    msg.setSource(65523U);
    msg.setSourceEntity(188U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(187U);
    msg.type = 82U;
    msg.op = 93U;
    msg.request_id = 36443U;
    msg.plan_id.assign("YCIGAHCRUEHTPSWPIYOVISMEYNBMXQAXGZRHBEUWYLNTWBCCXONISADDEULEPTNCRV");
    msg.flags = 62666U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 18617U;
    tmp_msg_0.destination.assign("QUPZTUQOJTPCBFSUZXIPKXMRZF");
    tmp_msg_0.timeout = 0.7102239716229872;
    tmp_msg_0.sms_text.assign("ZGHVYZHMRFXJNNLWLHBTBPLDANZLKOKUDTNGFQPHYGKVBJWJZIRWMSTPTESOCXIIUVQNAJVQCOLIJQRKHOVLXKEUQXKDKJBEVTPAQWMGKVGAUDFUNBODFXOVZOBYNMQYILGU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TSQYOSSQBXAZMGLLBUKEZNZWLTCYEICGYEVUOAXFCITVPRKMLBAFBUFKDNNDXYDNFIMVKQZBZSWCGXAPRWGGHIRSFRCRXCPPBYRCDJSNCVPGVYNDTFZPVEELOWHHESFIKASAGNUJLHREQTXJIPEUWJQUZKDWHKADFDXJXIKFPMEQIOBIMXFPRYWUHTSMEJ");

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
    msg.setTimeStamp(0.29138573897608355);
    msg.setSource(38692U);
    msg.setSourceEntity(217U);
    msg.setDestination(41887U);
    msg.setDestinationEntity(19U);
    msg.type = 84U;
    msg.op = 78U;
    msg.request_id = 33720U;
    msg.plan_id.assign("CQBDSMBMGAPXXOQBTAPGRAKMSNPVTGFVTCXCUWSVWUCMEHYIVSZVUEPQOKOAEIMMJJJGWMFQDWPXLDINDLOLUBJHHHLQNYWKRKPWBLRYYLKDFBCNIKLXNYQHUJILYRJJESHMULEBEXGFZERZWGIHKUGVPZQNIJZJVZFTIDHDKQHDGZCDMCQGFPTXVOPZTCBUODGUBCJYKXXATFR");
    msg.flags = 42998U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VEYKPISVOFWBQAMEQMFPNGLDRBTIGHSCHNUYVPGBXEMJTSOVOPVZAFFAHDITEQRXYWFDHSMHWISPYXREZEWUKRVBOROIDWALKTNKHAOCJYGXRQUNSWQWLFFUPDZMKNTPYMBRVJZNIGCTDNZXSPKGDWDZUMUBUHRQPPVCVQEZEJUNOCICIFQLHIKGLILVDGTCHGJZUYESLMENJFYTCQXKUYWBLRSJJDXAJAAKFJKOSCXZQGMZAB");
    tmp_msg_0.lat = 0.9808440368658551;
    tmp_msg_0.lon = 0.021157713896115427;
    tmp_msg_0.depth = 0.713141411136283;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 205U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VYYMIXCNCCWHTMGSGKDKPKTXOAATPLQWW");

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
    msg.setTimeStamp(0.15492863827011316);
    msg.setSource(6929U);
    msg.setSourceEntity(81U);
    msg.setDestination(40713U);
    msg.setDestinationEntity(160U);
    msg.type = 33U;
    msg.op = 23U;
    msg.request_id = 65328U;
    msg.plan_id.assign("QDRQMDAYLQOGJXZNSZGSQFWCIGXQMCGMLJHFRYUHHPFBEAMWGRMOKWGXNLSDUWUBXRJLEXBBYINHIGHISVSMYETTQUZSDGTANXNDJCATMJWUEYAVBMPLUJMZLYAJPYDJZFKIXPPRVTSWHCEZVTIPUNGQVDZQLBOZEFVDUKECFKBPERKOGWPKOTALCXLBVKVWSIKZBCMYPOAWRTRHFHBJAXNPLRSUEOFSNJYOYO");
    msg.flags = 26128U;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.4667264566619418;
    tmp_msg_0.ch02 = 0.09497421510938464;
    tmp_msg_0.ch03 = 0.3628567709412004;
    tmp_msg_0.ch04 = 0.42266882717597887;
    tmp_msg_0.ch05 = 0.5286634224921071;
    tmp_msg_0.ch06 = 0.5948612437858007;
    tmp_msg_0.ch07 = 0.6594278803779083;
    tmp_msg_0.ch08 = 0.9552849705149992;
    tmp_msg_0.ch09 = 0.665940923775592;
    tmp_msg_0.ch10 = 0.8978730249083527;
    tmp_msg_0.ch11 = 0.8831610716680789;
    tmp_msg_0.ch12 = 0.8954062155844982;
    tmp_msg_0.ch13 = 0.2994321266072433;
    tmp_msg_0.ch14 = 0.599067337951217;
    tmp_msg_0.ch15 = 0.8182721419435732;
    tmp_msg_0.ch16 = 0.9481163346978873;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SAFHHYYSFRBJKADQUGFYWHCKSZGWVKQKXEMUXJCJECRVOZLQKMHIXCXLNLPARKVBHWDOGUYYBARXCVTEXRZZEIGHQWZLRBISMEAUWQGDKTDNFKYRUX");

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
    msg.setTimeStamp(0.8867867658533249);
    msg.setSource(19262U);
    msg.setSourceEntity(216U);
    msg.setDestination(31636U);
    msg.setDestinationEntity(60U);
    msg.state = 157U;
    msg.plan_id.assign("GZJZBUULJWDSOSEFGUSXFYCAJXCOTTEMIZPBMWVOQIJBMIUDINDYKFMJCVUKIBYQZVNFNDIERZLYYQAAVJJOAOFLPVRXTBRULKTNQWEAKJRQGTEJLRXHAOFVPSHBHKCTSLVHAYXHESLLCFQOHWCWRNHISFRVZXXMRYTMKYSDQTOJKWCONLGMPKNGBHDQPCFWDBCEASPWFOVWEVGADZANUPHYZRMWHNUKEMGDIBIXKPYLQUCZTGXD");
    msg.plan_eta = -1113306754;
    msg.plan_progress = 0.42986735859810166;
    msg.man_id.assign("RIHTQVPRJTXCZWEIPGZOVZBYXJNIFOFUTHKNPYOMJYIJSDKNIDVNNFCMWWMUKUXCGYMQYNAIYJKPCFOQWHZUFLBMWOKPTHHYBVNMEEMSIUVERAIAPAVGWVJCXUYFXKTRBLSCIBWPDQURUFTOHNXCCGAZQLJEADDFFSSMRJHRKXRCOXWBPEKKAUQEQLKAOZVPLOLOWLLPNILHMUGCRQSSGEQJMSGGSZZDGDNTHJXTAFQWEXSVBYHBDGDB");
    msg.man_type = 16943U;
    msg.man_eta = 1056673926;
    msg.last_outcome = 63U;

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
    msg.setTimeStamp(0.9199665299812892);
    msg.setSource(42112U);
    msg.setSourceEntity(109U);
    msg.setDestination(29330U);
    msg.setDestinationEntity(138U);
    msg.state = 252U;
    msg.plan_id.assign("VEPSTNXHUKYRJXBROV");
    msg.plan_eta = -722579735;
    msg.plan_progress = 0.43337384949350244;
    msg.man_id.assign("YUIJFHZIBHSTHWPZWPKTRFRBDTOKWBVUIFJXUYFJXHNLNVQKZUGAQYHQYSNOIJFLMRVUMJPOXIJTNPTIJEDFXOQGZCYPMAHSLSUQCATBWCDH");
    msg.man_type = 45107U;
    msg.man_eta = 1867641399;
    msg.last_outcome = 168U;

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
    msg.setTimeStamp(0.25845269023808226);
    msg.setSource(24104U);
    msg.setSourceEntity(232U);
    msg.setDestination(20639U);
    msg.setDestinationEntity(225U);
    msg.state = 182U;
    msg.plan_id.assign("IKVKWMZLAIGOBYSPKNGCGRGRNXHFDBMQNV");
    msg.plan_eta = -55889358;
    msg.plan_progress = 0.40290912494107756;
    msg.man_id.assign("OEYJBAVSLSARIYNQWASRIJENMBUMXKMZYJHNWGXCLQQVQZNWAHOKIUACTWSEOJRVBCENUSCLTGDHGKZTOLTZPBCHOKJOSKGIFOEAZQHSIBGZTGWTKVBSOOEXDFYKBFNYLVPFBUMEWTFRZFPYTMIQVRGUWCJPVYDLRZVLRXIBPWHZRPYIATDPDAHNDMKAXGBWGXWQDNDRDUUNMHT");
    msg.man_type = 7473U;
    msg.man_eta = 1319164861;
    msg.last_outcome = 159U;

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
    msg.setTimeStamp(0.5681458221822916);
    msg.setSource(29363U);
    msg.setSourceEntity(232U);
    msg.setDestination(34230U);
    msg.setDestinationEntity(74U);
    msg.name.assign("HBTIKQVNGUZSPELUZMUVCEOEOIXWAZZMDOYRKLLWWAXZNXISDTQFIJENLPBRGRDGBKOPVTZMIPDTCZMJTJJCHYDXNOKRGIAQOTOGUNPHDFUHFVAYXDGAWFNMBFEHXNKKLIHKKIJGAECENWHTYYXXFTLYMFBCAMLSZVQSFRSQCCIZVGCOQMGQJBJJW");
    msg.value.assign("GCLIXFPMSQRALGQGMWKTYLHLTYIOZWLRWTDVIJOZJCXQAJPLMUBIVPZOGAGZNRPAKHY");
    msg.type = 112U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.6170223785817287);
    msg.setSource(33877U);
    msg.setSourceEntity(100U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(216U);
    msg.name.assign("ODBODUDERPJOBFZWXFRTXSMKPIFVW");
    msg.value.assign("TFQJOIOHNBMSJAAFICFLIKPRENXZFQQREVOJGXHWNSDGLOOLSDYMTQWEIYBPVAXESUZPVJXQKWDMCBPKZKWGBOCYUWNZEHALVSGONDCKQGFGVQGXBTWVYTVZEKKJXTBCDMAUZDPHMFVMPTZHLPKJDWUBYSYMY");
    msg.type = 146U;
    msg.access = 112U;

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
    msg.setTimeStamp(0.37109415105536026);
    msg.setSource(53924U);
    msg.setSourceEntity(247U);
    msg.setDestination(47505U);
    msg.setDestinationEntity(249U);
    msg.name.assign("CZIKNPBISSRWJMOOSCFUWDIATBPMYZQODZFBSDYPIZXAFMHCMULGTXY");
    msg.value.assign("DZOSFFRHYDHMOWVTTJGBOTNNJIELFQOLEVQXOQOWUKAIMVDAPNWDGPXZEHRYJQ");
    msg.type = 64U;
    msg.access = 225U;

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
    msg.setTimeStamp(0.6729754352474053);
    msg.setSource(3107U);
    msg.setSourceEntity(97U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(83U);
    msg.cmd = 213U;
    msg.op = 157U;
    msg.plan_id.assign("LJPBYEHLCCONBZYOMYFWWEJNAJOHRGXDVTZJIHPBCVFDVGUICZECAKUBLYSLPYFPGXMJOAUMZWDDBZDARHMLTNQSAHNPVMJODJUMXMJDCGQBTRAXEYLRFTGFAUEKTFSTIG");
    msg.params.assign("ZLVPAUXGNVMXYUWSCGQQXSBWPKJSRMJHIPZPPCAVEDYIHSQPFPARFGDL");

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
    msg.setTimeStamp(0.4478996266384889);
    msg.setSource(62105U);
    msg.setSourceEntity(209U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(8U);
    msg.cmd = 57U;
    msg.op = 33U;
    msg.plan_id.assign("PBXMZEXVSKPCQHODVEDWQAKKGFSXTAUIFRUZQELWPBUEDSCTVGMEFDLKNEFTAZYEJRHMMJCYOXVSIHCYVVYJXDLJHVZTFGDBGUIKMPNCRCVGEOLOXLQSH");
    msg.params.assign("NBYJFAIGZIMYWUBVSLGDJBDWZSNTRVJZIRYYKGJUZAKCMKRXJEQOFHNBLTYPHEDAQNPKEAQAXCVTOHTUXQRWZGVJUHMEFZYDTVFDCNCIXTERPYJSFOBVIVVXEKTDFGWLPNCZCHCTCQFEXWLHTZWMLNNSERGJIRONAKQPIMPPYQSLPWBSASSYSEJRMMFOWUULIDBFUKWMWVVFOMLKOCMDRHSKNZULQDGBAOAQPXTDXOLC");

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
    msg.setTimeStamp(0.4841521724146931);
    msg.setSource(62612U);
    msg.setSourceEntity(163U);
    msg.setDestination(37284U);
    msg.setDestinationEntity(220U);
    msg.cmd = 254U;
    msg.op = 207U;
    msg.plan_id.assign("JMXIBJGVHEXAACSIKPFBBHTQPXVXXEFGDLQTBOTBQWXNUVUDYLCKOAHAUYVVGZWYIDGZAMWNZCTCJSUKHLRFGRYXBHBRYFREMNVULJPEOTNEMNFFJMCHKLWUJIFJVRABUUVNXMOEZWW");
    msg.params.assign("QIKLZOGQAYCNLDDJKMASMNTWMHGIPQZJGNKHVURSUWAOYNVKRIEODTWKRALZUZVBCEUUIFCZOVKJJLFLSEZYASNCXMJKBGEIKIYTF");

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
    msg.setTimeStamp(0.3327703675329937);
    msg.setSource(26927U);
    msg.setSourceEntity(95U);
    msg.setDestination(49782U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("UKTQZLANXFWGRYMWPZDHXYQCBBLGJVFDROHIYPIEEARIWIYEFWXALUDQNEUFPVWQNJLHOVQSZGYOBODJSFCTHNJBNMZPLMSPEGQYFOSKISDMJMTNEIXVNYFSWLLJKETQMVWGLYCJCVHXXUNWTUJGPLBOCAHGVGRLQQNOZOXRHCTSMYMFUZKPURWJUAHCDHDBIVX");
    msg.op = 73U;
    msg.lat = 0.9989746502536322;
    msg.lon = 0.3957604188949192;
    msg.height = 0.3812036870802743;
    msg.x = 0.5250629426366964;
    msg.y = 0.8790026869546477;
    msg.z = 0.127342605234248;
    msg.phi = 0.24936163011426105;
    msg.theta = 0.3232028236169734;
    msg.psi = 0.6996973897176847;
    msg.vx = 0.1269137035654987;
    msg.vy = 0.29095532297438176;
    msg.vz = 0.75205624732989;
    msg.p = 0.8442929040080615;
    msg.q = 0.7192717603635563;
    msg.r = 0.7825920555817636;
    msg.svx = 0.18133924691866343;
    msg.svy = 0.037423478328126536;
    msg.svz = 0.6912920484514561;

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
    msg.setTimeStamp(0.6683722001265776);
    msg.setSource(38159U);
    msg.setSourceEntity(235U);
    msg.setDestination(44787U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("FIPBUHVRBVOYEDEGCMOCGLBEHLUVLYPVDQOUBGYXXQDCKHAHSYUBDMNAXUFXBQWBJHTLWCOMJNNZVYWQ");
    msg.op = 31U;
    msg.lat = 0.6614883827451388;
    msg.lon = 0.8062641916505288;
    msg.height = 0.9560763495361766;
    msg.x = 0.13087073346334022;
    msg.y = 0.07728061058289715;
    msg.z = 0.3113694919845842;
    msg.phi = 0.26162030751767285;
    msg.theta = 0.15222304746310922;
    msg.psi = 0.6957000180854596;
    msg.vx = 0.9564777408047199;
    msg.vy = 0.2533992669106685;
    msg.vz = 0.5941064135757432;
    msg.p = 0.6069829048794556;
    msg.q = 0.4837944584765419;
    msg.r = 0.18702031310907907;
    msg.svx = 0.12291293851658847;
    msg.svy = 0.2776609735835178;
    msg.svz = 0.5313543921977099;

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
    msg.setTimeStamp(0.21570442550763191);
    msg.setSource(26205U);
    msg.setSourceEntity(160U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("PJKICOEWDGDXEQWONKQAHAGTYIAEVMGJEEZRSRFCURUZRLAN");
    msg.op = 148U;
    msg.lat = 0.9805289294304107;
    msg.lon = 0.4530045321566928;
    msg.height = 0.5997342845735256;
    msg.x = 0.5215408391104785;
    msg.y = 0.1900560148331305;
    msg.z = 0.15492698921494497;
    msg.phi = 0.5490318350659145;
    msg.theta = 0.7379964197761611;
    msg.psi = 0.16056582099453065;
    msg.vx = 0.6188538476957292;
    msg.vy = 0.9467529779591068;
    msg.vz = 0.13633652510443917;
    msg.p = 0.15773298392258084;
    msg.q = 0.8480755158700125;
    msg.r = 0.864684889888263;
    msg.svx = 0.627115544564532;
    msg.svy = 0.09963704714691302;
    msg.svz = 0.37594429599509605;

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
    msg.setTimeStamp(0.499844842523518);
    msg.setSource(8215U);
    msg.setSourceEntity(120U);
    msg.setDestination(45625U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("NMKECYMGVQENWZASWUFYSMZDREGGNTXJWXCOSNIVHDDATKOXDUWHGEEOIOPIVDIFPCYUURUNOTTQIQQCXFLPLRNMXHUZKSRNUJTTFMLWJYWJSGJYDXJQUP");
    msg.type = 247U;
    msg.properties = 84U;
    msg.durations.assign("HVGHWBJQYQTVHLT");
    msg.distances.assign("VBIWOFXDOSMUXWUYESTCJMDBORJNCAFUJZCDLFWYLFHRFOOBBNCRPZWAQRSGTQIADXGTGKCGZYLGIGKSYVMWIRXIUMGXHANQCTUJLVDVVYGHLUSMKYRNHHKQECEKTFUTXFPWPXDNBUCDQBLEWERKFDMLLRSIIMAMUAWFKHEANNJPKQPCJVDPSBFRESHPOTOVUBQTZGXZEPXSRHK");
    msg.actions.assign("YOGDZOVTUJDUWELFKAEQIXRKXNUGVQTIQTLYHNJCCVGKCCDAQVJWHVMUUZXSXVUGOUPRHOGQAMLYRNESINTKYXGIHONLMQTIPSZKHUNMLFJFNQBXXIDUQRBXCJDPZ");
    msg.fuel.assign("TQDHNMTFTUYMCEZIJVIUGTWYXOROGSUOAMUYDATVLCAWMWXAPJKQLBIQQAGGQQZLUNFRFEOOXUXKIWGIPTGDLNWVEBGORRDPUSVVPFWAVOWJGMZDELORPSQCXUHPVZANRRBDPTELEZCHXDTYZBSBX");

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
    msg.setTimeStamp(0.43224671183982244);
    msg.setSource(63578U);
    msg.setSourceEntity(115U);
    msg.setDestination(27728U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("OGYZLQJWOWHO");
    msg.type = 164U;
    msg.properties = 130U;
    msg.durations.assign("DPKJMHJIBGICYWTUMGCOYICEZRABJFWBFWAANLYEASQOXXGIHJBSUOGJDWOOMMUNCIYYKJTURBBTDMQVDYBDERGHHCGEPLTSDCOHTVTLTNQRXSHWARXAKUOIVYTWJIZLPMIRNDNCCWA");
    msg.distances.assign("VXSTDQZQUIWSVFPGLWHGEVAUSSHSCJYUNOMQFKLDFTGODFYUPHXYPELKADEPPFAXBMNZVKISTYQDYYFGXNJXAMDHOQNBTHKKTJYXIUJJLNZOZBKIDYQXWFIGXQWLKWGRQTRLEOFGUNYBSHMCCMNSEEZRJPLIGTLRCQMIVWPJBZHRHCN");
    msg.actions.assign("HZPKVHYJSTLUAWXAMQMBYUACJDHIJWOXAMIRSPJKCICNFTVFJJWZWVGVYEDBXTIWKCVOBTFRZNRTYPQRIRHK");
    msg.fuel.assign("KLHYQSOSAKTXPKWURASXBKFFKEBUAWKWHNZHJOVVCFZTECBXEKXJRXINCZGOCMGQFLOYLBCNPHZDOEFIVYFLWPBQXAHZPOSAIGOZWGYOEEPAVNJMVULJQCHESLBUKDRYIJZTQGTDWRDNJAYLISBQQHTDTQUSWHPKTDGLMZDBNVNPCRJXMEBDMTYLMJFDUMRMIFPZYFMUZUGIEGYOYRHNTVAGJDCFWNXXLJCVQPTXKIPRNWVAMEVRCS");

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
    msg.setTimeStamp(0.8842885691697979);
    msg.setSource(58448U);
    msg.setSourceEntity(131U);
    msg.setDestination(27076U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("TABVXUVBIYGLIYDWVBAKZQLSOGMCLJWMONPFOVGTIUOGJYQWEHZGHFZIUQJUNPYTEPHDXLSETPRALTDCYQ");
    msg.type = 21U;
    msg.properties = 246U;
    msg.durations.assign("WJLQKQBKJPQIGLKNEKRFIAJPWMNFFFAZTKPMIDUCCFBUKGUEQHELMRGLDXPWSNTGPQZYNYDFLKHBRRSHUDVNLOBHPAXBIKYTQVHWRVHCKEZIDHZODICEFVYZAFOILEZJMYNMOFJTJZAUROPVOCAXIGTELGYGOCQCXOXEWBSEXRMAWBDFOVPOVYTNJDMURRMBRWHVSTXNISDYJSJYGABZELZMPASU");
    msg.distances.assign("SRPGVGVHPYIZELXNRQMRLZ");
    msg.actions.assign("EJTPEVIKCEBADECUWPELBUKSYILTVYFGZMXCOTBEBTHKGSZVVQIYGAAFRGWLSPULXPUBQQNOOWAIXYPOZEMFNQBUIXDWYQVHVBJVLYVJSKGOSYMBKGAHFCGHJQHOPPRKQUOEDAGDWCUNILNZPHVRWNQZKFNLSFJCJXOZLASUMAPVZWFNIDNTXFIRKWCTTQJZLSDRNYZZNEAWSQUYIRMCOBXILSJGGFFMJ");
    msg.fuel.assign("ZLWUCTOOKAEYWTSQNTPWJWPKLYNJEGCMSYFNQSIKEGILZCBWHZRKDMQNDPBXSKXNOFXQCWWMLJGIQELFVTUNFJASREJNMBXIRBIGMCXFPHUIARMFSVKAYUQUJRIRGVPPOBTVBMHSFZFLHGYJLHMIOPTAHETDYZBQBATUQJDZVLURQKEFKBIVBXSWQZJEYEJ");

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
    msg.setTimeStamp(0.7908171106883091);
    msg.setSource(12619U);
    msg.setSourceEntity(123U);
    msg.setDestination(56533U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7365400913298203;
    msg.lon = 0.7175881464247907;
    msg.depth = 0.9059112962824147;
    msg.roll = 0.043411578424252584;
    msg.pitch = 0.44687635122199376;
    msg.yaw = 0.2403594795788614;
    msg.rcp_time = 0.34841446760624895;
    msg.sid.assign("EQLSJIPNRWESPKPUXJXALEUDTPKIJEKO");
    msg.s_type = 43U;

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
    msg.setTimeStamp(0.034450533601005584);
    msg.setSource(21609U);
    msg.setSourceEntity(154U);
    msg.setDestination(59918U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.6785871425355696;
    msg.lon = 0.1253323788638897;
    msg.depth = 0.04579816666527414;
    msg.roll = 0.010712854052418508;
    msg.pitch = 0.4389884751283677;
    msg.yaw = 0.9752118790827358;
    msg.rcp_time = 0.7313986988312284;
    msg.sid.assign("EVOPXJMJAJSOJXGDNEWDTKLZGRXDQPWUKNSQRYVFTWBNX");
    msg.s_type = 199U;

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
    msg.setTimeStamp(0.4535502948246607);
    msg.setSource(4924U);
    msg.setSourceEntity(235U);
    msg.setDestination(5873U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.3372621837163654;
    msg.lon = 0.2850959399229829;
    msg.depth = 0.13836392307458067;
    msg.roll = 0.24443260154132984;
    msg.pitch = 0.5988337139146025;
    msg.yaw = 0.7620387006559397;
    msg.rcp_time = 0.09899559374777545;
    msg.sid.assign("BNOKHMAXUCLXTQBKYNMGUEYUWJLJUEIDXVNZJQCKKMPZASRUYZIVOSVDLEQXWOFRLMAGXJPXIJRTEAVMGSGVZIZOECNWWZGVVHDAOSTDERQLVVFXKXJINWQHMOBUTAUFGBZBHYXRNELMPHUDVSTDSPAPHUJBSQOEXYROPDQDRRNFBQITFFNCGWSHBKLFCTFZKEWRJCHCEKYPMSBGDAOZBHCRKTUPWTPCQ");
    msg.s_type = 208U;

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
    msg.setTimeStamp(0.8519446264691031);
    msg.setSource(2214U);
    msg.setSourceEntity(114U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(29U);
    msg.id.assign("STUJVSHVYQEIQNROCFDBCIEEMSLYZWZGVJMKFKOIDCWKWGVJRBHKFCCUFGXGAYIPZGPCZOAYFSZNHNENWTERULIHQSDB");
    msg.sensor_class.assign("GDGNZKFMLDUPPXAOYGAMXOHVRSQLIMTMUAKWWUPZTWOUFSYRSAONJPCCXOCBAJWWKXWLCDDNXHBCWHWVYXJPSPLDREYLERZUHEBUIJWFAN");
    msg.lat = 0.3998316728985879;
    msg.lon = 0.23489695503895547;
    msg.alt = 0.19869627181923555;
    msg.heading = 0.955949570382027;
    msg.data.assign("LHQFKVKSTLYJKDQPZLXNKSMHCEIIYHTPKGRABONAPVOQCSNYDCO");

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
    msg.setTimeStamp(0.03639116033416967);
    msg.setSource(51049U);
    msg.setSourceEntity(213U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(12U);
    msg.id.assign("LPIUIKRPENQQSYHWQEHZIMTQIUWMULKDCGCOHESFWTUBZOBYFTOVHZXHJFFGKSPOJKQYRJYNFJBACMMGXYFTTVBILPKNZLYSQABQDNWXUUOAELVENQAAYJXEHGPYUVVUNDRWPAEOBIGRPMMTFWXTWZFCCAPZDDYHJBNRFCDVCAGMKUJVDVOIHSGMERDYEJQKQZVDCRZLGZFXNLSKPZVCRTXDILOELHUNTKABWI");
    msg.sensor_class.assign("UPFLIPLENGTGHSQYLAJYDITIBRBXBODOBLOYNOQKBPQXFZNLALUSGHDPEJTHHJIODEYSGRUSI");
    msg.lat = 0.03350423868443031;
    msg.lon = 0.11920385960657254;
    msg.alt = 0.2348552999196839;
    msg.heading = 0.7502354360635085;
    msg.data.assign("EEKUZTSSPCARTXZEUCRWXOJHBYFOXPBQMTEYPOTYFDPXWCWQHDFACQIDXBBZCGZYAIKIOBKQVAGZBLRVONYMKPQUJTZCDJMFZNRJTQUIHGHKDQM");

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
    msg.setTimeStamp(0.7114225541566943);
    msg.setSource(55031U);
    msg.setSourceEntity(156U);
    msg.setDestination(21444U);
    msg.setDestinationEntity(66U);
    msg.id.assign("VWGDAHQUQRGJENLIPEKJTWIRWIRDAWYDTNOCXEFMHCQNIFDXTLYZIHOYEFNOZOEKNXSAGGKMDHQYCSGXCQLEKRUEO");
    msg.sensor_class.assign("HURUEUARAWOBVNKEJWIUFYDNKHLELQTNCCCUXXDWDSOQXPPRGIRHMFTJYTIZDVEUGVQOTQJAQTPNBCWMHDXJFWYNRCNHBCXEQMKBGPPWOMKJOSWEIBRCAFAHBCTXVOGZGBHMZUGZATFECSZDHZNOAIMNIBFRQANPXOEOZYKAWSVFYXPSLJBMPHKJLDLYIKXGIJQTVYMLPOXIDJZGVYRSYKLZRESSCPYJIMUSLNTRGLG");
    msg.lat = 0.029550220210696754;
    msg.lon = 0.19985057553919705;
    msg.alt = 0.016237780825396952;
    msg.heading = 0.8392293240334996;
    msg.data.assign("RUKCGVRWJXGJNFESLUUZYOYYVTTFSQRUPJQJTOSXNKKCLAGPEFPSRAJXISZPZYAJQWIIFLZONCWVJVUNOHPVWARHLGSQNEVICAVCMHBOXOSPHMYERPKBWXOMDEALOINCTWFZFB");

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
    msg.setTimeStamp(0.47288871581323266);
    msg.setSource(2382U);
    msg.setSourceEntity(37U);
    msg.setDestination(21700U);
    msg.setDestinationEntity(232U);
    msg.id.assign("UIFCLVLVYLUJCBQGYBROZHMHLPBBHJKXGTEQGXGWPASIJXCHVRKBIERZZWDYNPIGFPZPYQMHISQPKYMKUJUXOVITRYGHUROTSPTMFWJ");

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
    msg.setTimeStamp(0.7267100806792891);
    msg.setSource(54826U);
    msg.setSourceEntity(168U);
    msg.setDestination(62864U);
    msg.setDestinationEntity(229U);
    msg.id.assign("YOJYETZCNJCMEFMUFQQNWAJAXAHGQTPZLUGAEYJZZUMOFWAXPXNWPXCGCTZNDLIIFHSLTMWLKSIBSQMPSKBOHVFQSDGNCBIHVHTUXRKOCJQE");

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
    msg.setTimeStamp(0.6365491786424151);
    msg.setSource(31491U);
    msg.setSourceEntity(84U);
    msg.setDestination(21353U);
    msg.setDestinationEntity(229U);
    msg.id.assign("XPQJTDUIIYMNBUNMGHIRFXOHEMEVVSQUWRQIVXRNREMBXDWYIEZSJPFCPWWKOMVKJEUSDBNOLAQHQMOHJNXHVPZJWAFWONBRCVOEWIAYBALYPJZJCBGGFSPSIZKCCIZVUP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PKOAZCOAQMHDOFRPLAKXMBYWOUXGJUPUBXZTYXMAUYVYGQFQRNZMWDYTVVIKNHEWIQIKGZLHTKQMFSUTILZXKFESXAGZ");
    tmp_msg_0.feature_type = 110U;
    tmp_msg_0.rgb_red = 249U;
    tmp_msg_0.rgb_green = 211U;
    tmp_msg_0.rgb_blue = 173U;
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
    msg.setTimeStamp(0.46441404224461746);
    msg.setSource(45828U);
    msg.setSourceEntity(218U);
    msg.setDestination(46123U);
    msg.setDestinationEntity(59U);
    msg.id.assign("YNQIPNNJGUFUYAVVIOXSNVMZEMPVDZMCXRHPLBRCRUPDSPBKJWEIHKLCWAHWBAIEVLZQUTRFIAWGWFJAUSFQDIMHSGPYHXYHXAEFDOJYEYUQGJKLLENTNVLJOJDAFKYNSLAVKDQCOQXRTOTPOCWYXYEFGMMNTXJKUTIGAKEFDFSTINVTBCSKGB");
    msg.feature_type = 35U;
    msg.rgb_red = 14U;
    msg.rgb_green = 95U;
    msg.rgb_blue = 61U;

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
    msg.setTimeStamp(0.9256304511643141);
    msg.setSource(21741U);
    msg.setSourceEntity(36U);
    msg.setDestination(22896U);
    msg.setDestinationEntity(158U);
    msg.id.assign("YFAIISMFFXHRRDUMMLULQMATZHPJPKROHSDBPLWKHNPSJAYQZBDOUWIVUETMGCMBLBRPPCKBSGSIRKPZKESNIAOXODQZEFKSDVOIHAJLRYGEVEEYDHZQILWSTXETQCCBLZGJLIZKCMTFFNAJACSWNJMULJZAUVYZQEOTRPHMKRWSFXHHBYTUFTWXDOXQCVCEETXWDGVXRDDJTGUBQYYVAGJCINNCMVYXWWGUZPOGINWQQB");
    msg.feature_type = 108U;
    msg.rgb_red = 251U;
    msg.rgb_green = 181U;
    msg.rgb_blue = 177U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.013211024049372244;
    tmp_msg_0.lon = 0.3540290426613386;
    tmp_msg_0.alt = 0.6984330809629328;
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
    msg.setTimeStamp(0.8611809689555443);
    msg.setSource(58092U);
    msg.setSourceEntity(100U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(47U);
    msg.id.assign("PYJGSCOAIFVWMHTWCDCSRPZXTEJLRYBYTLRIBB");
    msg.feature_type = 171U;
    msg.rgb_red = 132U;
    msg.rgb_green = 99U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7665368642108145;
    tmp_msg_0.lon = 0.24729732426764028;
    tmp_msg_0.alt = 0.28199302683533234;
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
    msg.setTimeStamp(0.4345810762033909);
    msg.setSource(30264U);
    msg.setSourceEntity(113U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.820356764032132;
    msg.lon = 0.45788391697032105;
    msg.alt = 0.13256045322954968;

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
    msg.setTimeStamp(0.8794345432406868);
    msg.setSource(42382U);
    msg.setSourceEntity(105U);
    msg.setDestination(62554U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.6061156599330811;
    msg.lon = 0.8750782200860392;
    msg.alt = 0.9287411897607858;

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
    msg.setTimeStamp(0.3338838667667535);
    msg.setSource(48874U);
    msg.setSourceEntity(154U);
    msg.setDestination(25580U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.12571592173548884;
    msg.lon = 0.05735962852022469;
    msg.alt = 0.07265960704551422;

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
    msg.setTimeStamp(0.8749250342381346);
    msg.setSource(12043U);
    msg.setSourceEntity(251U);
    msg.setDestination(18831U);
    msg.setDestinationEntity(182U);
    msg.type = 84U;
    msg.id.assign("CCTSRZUNBDZGDKSYAGCMBRYLSJZNWOBOQDPLHUKNXYEXEBEBFRSMMQOIDYQDOYOQRMJSLUWEJIDXRWKXKIWVIHGJTFCKXYIDBXSEWFLPATMGQCNHMACNJNPWCZZBFRPOGLGHEJIEZSWFBJYHMPTCJALNGMONEVAUVEVHJVYWDTWOKVVHUQG");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 225U;
    tmp_msg_0.htime = 0.6426344987943685;
    tmp_msg_0.context.assign("XSEKQGUQVEGGONRQAK");
    tmp_msg_0.text.assign("GQHXPACUMBEQXTKPRLEJCRLCFPUVKBQLXOSYUQSVKXXDDRFKZSVFQUSPVMHDGMHQKDFHGNWYLKLOGIIOAWTKJJNYUPVJVYZFWSZTKVHHARVOZRYYWJOPIMVXNJLUNHIWRKQJZGTTPEXCNBZMQASINCGMUGLBDEXNEAGPYFOLQMATIYYVYHDBNCZ");
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
    msg.setTimeStamp(0.5499558792409278);
    msg.setSource(55984U);
    msg.setSourceEntity(7U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(53U);
    msg.type = 6U;
    msg.id.assign("BHXVMRGZIINCMLDUHVWNQUDOHKRLNELEOHSSQQKYOJHIAFKMEERGXMCVXUZHPLZTWATMWBPSOQMWKPOZCTJQMXIXWWAVGPEOBJXJNHVTJEOASCEZTYQIZIVLGSBUYTDFAVTZDGWARHDSJCKRIMABIUFKKPBZSFCPNCVKNFGMJFDBGHQSWTOACBAFRTKCNUGXFZPOGDYRPYLOEJJMTIYNSPUCBF");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.5262780068160654;
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
    msg.setTimeStamp(0.08428459027258273);
    msg.setSource(3823U);
    msg.setSourceEntity(238U);
    msg.setDestination(65309U);
    msg.setDestinationEntity(116U);
    msg.type = 173U;
    msg.id.assign("VMIFTPVMTFLRCOPGICUHOYWLBGWDIEBIN");
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 194U;
    tmp_msg_0.x = 32447U;
    tmp_msg_0.y = 32642U;
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
    msg.setTimeStamp(0.204757326595439);
    msg.setSource(1169U);
    msg.setSourceEntity(41U);
    msg.setDestination(44636U);
    msg.setDestinationEntity(19U);
    msg.localname.assign("LTPTFKLSZZCJODQYIBAEEIXUBBHEYJJQQRYDSFJVGVMCTEZLBPQNAUWVNRVASYIHWDKAGOKECBUBSNSMIOCKODASEGOFUUENBJHTIMNELUKWPPRHPPYGSRBUFMWJMTXTBOMCXZQTMAQNQTUFNTHNBRHAZKDVMURODYVFSW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HVMELZATCKZJQHFEDYBTEFSGNVGNDDUDFRTVJWOHZXGUGXARLEYJFWSMZMYLEBXOWNOULXMQOVUJPYXTMJZCAQNCXGQZAHOMYTPOIEGSVPHQIHRHUQHURIFMGZLSCTUPGBPSJEIQJTNKIAUCDDQZRCFNUGATFPKNBRJRVYYCYILFIELSZXSKVWCPRKJ");
    tmp_msg_0.sys_type = 237U;
    tmp_msg_0.owner = 5234U;
    tmp_msg_0.lat = 0.9831017036535581;
    tmp_msg_0.lon = 0.06921627082044446;
    tmp_msg_0.height = 0.8824004832167255;
    tmp_msg_0.services.assign("OBZLXTQLPHYCGMDUSLEUDTFXWOZBQTOGUEWHVPTNCMNWAZXPKAVNMNVTAXOKGQKVCZJWNRAUSADVUXPIMKQLUABKKYEEWKHZAKBCJOPJJYXRZEEKFQDVYIECFSIIPHLFIFHOFJWOYDZTRJYABDWQIRVOXONLYQMFHUDBHNEFNBZPCTWMCZIHMRORCBSSKQYYNMLHZMATGUWSXREVDVGPGQRLNDPSGCAFRVPDXCBRWB");
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
    msg.setTimeStamp(0.5483633457596556);
    msg.setSource(26736U);
    msg.setSourceEntity(122U);
    msg.setDestination(26911U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("DHDQBKUGQQQFUJYIPPICWIRSDEPWUESVJVJNCWYXQLRKMAELLRCECLYRMBHTHSFPNUSAFBDZMZVYZDXBKQCQXJJRWGMORLMTMGZDYWYJBBCPEAYOHNMTESKNIJCFWSEBKUTVCLZSNEXFOHRGFRVUODUGIIOCDETGXNOFTYVPOLZKBARFNKGMZZLOKABVFJXVYYPHWTMANILHRVAXNSBTQOLAWNAGWXSOFQJTEPVSJIUDXHAMIPZXGHQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GCMAUZSROSZUNMWDBHBFBKXSQVCLXSQXPGAGHNRQDVDPNKJLYIZTVJBEXEJDLJTHIVSAZHJKJF");
    tmp_msg_0.sys_type = 171U;
    tmp_msg_0.owner = 9442U;
    tmp_msg_0.lat = 0.8620943445764834;
    tmp_msg_0.lon = 0.4019444881154559;
    tmp_msg_0.height = 0.8190297251161655;
    tmp_msg_0.services.assign("ZHFIHUPTKPNF");
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
    msg.setTimeStamp(0.27267081341334864);
    msg.setSource(15892U);
    msg.setSourceEntity(38U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(31U);
    msg.localname.assign("MFHLOJTCFVBVVBHNHAIYGKIQBWOYXQUNVMYYKCSFTFBWKCDYVPCBTWPQJVSHODUASECERMIKZALXHZUTPKPIZMALDRFRQRQACNSTEJFCKPGJZRLWGXBZLFFBSA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SNIHTNFHPJIYDJYYZKDEGKSZJBJ");
    tmp_msg_0.sys_type = 178U;
    tmp_msg_0.owner = 58079U;
    tmp_msg_0.lat = 0.49513746536672765;
    tmp_msg_0.lon = 0.3445696939969587;
    tmp_msg_0.height = 0.5845938109160276;
    tmp_msg_0.services.assign("ZHAIWWQSTXUQTYETDHIXCRQHD");
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
    msg.setTimeStamp(0.35993204123627165);
    msg.setSource(17923U);
    msg.setSourceEntity(151U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("JYWWVFVSMDFFUFXVDDLIHTJAPRZYXCIYLRYLANTDCKVOGZITHWQQCSZALLUEFSUWSCTNWANYZMZGGGDBIYVCBYMHZIMVTPUCBYYXSIGFPMQXOFANZGVNAGNPRELROODPMESREFTCEKKEQZLKXKSRIACQXBZSWTEONIMKAPQHQJTPWHUMBKRUQNURMKJWHICGDO");
    msg.predicate.assign("BCMZBKPYUOWNIRTXNZANAZTWYRZZCJFAPCIIKHRGEQNYFST");
    msg.attributes.assign("HIHVDRSJGVNOSGEHJZEVJMFFZQXTLMFSLBIGAFZGYCKYEVHPWCADHBUZJYGWJQNNNRLKNFYUWVBXFZWOQCKGKSDIXXDVHMOOOSNLIDQESQDAHSLEHABWUKTZUXXPMWPEFLSYHILCNTBMCYRGAAKLYABTEELOQIGQNTHRJJOTPRMGUICCSPPIOJOTWZXQVMRCTADRVVUDXFQLYKAOPPUFYAUBMNFMNIJRTWPXTUWGBEECJKMRZIKKDXZZ");

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
    msg.setTimeStamp(0.6549741936607942);
    msg.setSource(2081U);
    msg.setSourceEntity(14U);
    msg.setDestination(21663U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("WAYTHNQTFDAOUZTVPWTCRLUJPXDQVXZBDAHFGSYKOPKEDXUIDUZLEJOAWSOZLEEUGBRWFSWMEHXMFZRZQIMHCKNQZTJSXAAFQXNCBIAEVLGSXIJRDKTJGKWVMNLNWGCLHMSKIPEBELITTVYSYCFBLWHCROSLYXKSJNVSMDDCGRCJYIKHNBOEBUKOWKRJYNGCGEXBOZBIIXAPPRMVMMNHGPOQNYQUROMFQJVQAGVPBHTIPUTLAJWCQDHUDYZUFP");
    msg.predicate.assign("UBBGQNRCQOLGQLDMFQDSWRJASWINDNEHJQALVGBRKITJOMCYXNKZZWQWNSUOWCHKMXUJVRVAYLJJEZPYIMXFEFHTICOXBFKELSPYOIBMHWMJNTVXXASXPPNNYMESKQRHKFNZTBOORBAYFJBGTLPIYTQRFDQCZDWRUYZHKKEDVUHPOIUUTUWMASFZMEDDZGPFVOXVBIGHRZVAAXPIDJLTBSECCALM");
    msg.attributes.assign("GMJEMFLZMQMBNSSPHGYKFQRIOOUOXGGNHIKHSTDDNAUIRLWMVIIRVTPRDJEZYPAOABZXOJEAZQCYOYFYRUDLDCCPATITDANLIQSTYVWHGMCFVMAPWGKJSUIJBEQVNPR");

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
    msg.setTimeStamp(0.5330491716543911);
    msg.setSource(26769U);
    msg.setSourceEntity(208U);
    msg.setDestination(30805U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("XIUFBUWWMFVHYOCEAOZHXACMAENXRLLHLOMFCKGKKCUBYZCGHLDNAEAJKMQFQVPQRGBLXVUENCWPN");
    msg.predicate.assign("IOAKYUSENVFMEJIMACTYPALXJZHGXJSIOIODLTVAKARGDDHRWLDTOSPAVULYCS");
    msg.attributes.assign("WDRUSMXSCYPZPTKONDKLMCYPRYMQLDIESTJQHSTQFYXSBNOQJQRMONAUQIAKMHYHJNHTCMPAXIDCTEJGIXDRXNISUZQEPOZCBRCAWVCPDKGXLGFLAGZIHKYVJRBKDRFEAQGOWQYBLYADTRHWQGUXWHJWTXZMF");

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
    msg.setTimeStamp(0.27789498288587344);
    msg.setSource(14212U);
    msg.setSourceEntity(174U);
    msg.setDestination(28395U);
    msg.setDestinationEntity(126U);
    msg.command = 219U;
    msg.goal_id.assign("WONJHJIDOTVXNHVURYTVKNQXIWSYCSMPVQZPDXWNQEWHSYPRKLAKAEURXMYXZXGMWFQKAFSTZJINFNHLOCZAQLQUCUEANOVGBEBREIRINZPKBMKSWHBOMGTHOVFCESCZQZLLKVDQTIGBKBTDGNUODZWAEZLU");
    msg.goal_xml.assign("MVPNRPQSIOZIKCZOSYXTAGXQVWQNNBRAXEHFSAKIKIUXEJO");

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
    msg.setTimeStamp(0.6547762357519458);
    msg.setSource(27647U);
    msg.setSourceEntity(236U);
    msg.setDestination(19702U);
    msg.setDestinationEntity(117U);
    msg.command = 29U;
    msg.goal_id.assign("JFOBLYUZDAYCAKZQARDRJUETPBATCSRJKLDKIXJWKHYEQDEQGRHNEQXOTWRBZVGSECQADIVDGXFHVMCGOAMNYBYGPFPRJNNKUECZLDVRZUSNQGKFLXBLCPPTVLMXNUEBMGEUWYHPKLIDFIKXOJFQBWZEYOPJHIJYXVBUSRNZODBPMNFMOOWTNFSPIATWAJHVIGWTTCXFYSAUIWLULHBDCQYIFMPHGNVW");
    msg.goal_xml.assign("DJNQKEROPTDZUCEFIGNNKWAGLXPUAQNUVMLSZXMXDBEQSDXAUAFOPVBCVMCQUOWFAJMAGFLNJHJKLNQTKIHYJOWBRKJLCRITJVUXHPIONRNBTTMFQBVYVXEOXEHWSWQEMHDMJUIDGWURCDCIYQYSUBMGIVRREY");

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
    msg.setTimeStamp(0.7875283517125132);
    msg.setSource(30835U);
    msg.setSourceEntity(19U);
    msg.setDestination(8226U);
    msg.setDestinationEntity(30U);
    msg.command = 20U;
    msg.goal_id.assign("VNRBYMUXQAYLAQVRDRXAITVEKUXWLKORPHUGZKBZRUFCCCPPSZHGFNKRBUYUOHYNVXFEQPPWMXPYOMMDWZFEZRZBDDPGJEHAOEFVEVQPJVZSKLNTLYHMQZBHXVPKDIKDINWFLAGKXJDALIDCHNGSQNURHEITVBSS");
    msg.goal_xml.assign("MNHHIRLXWLHSBHEIRKTFLTZLZFQGDKCDVWXZLIYTYFHNSBWWFPNKIRRZSUIBYSVCOXILUXJFTCWDGROYWPTHFGQOWBOCPSUGJLCGMCMRNEKWDQJWEYJ");

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
    msg.setTimeStamp(0.1994923711438359);
    msg.setSource(19514U);
    msg.setSourceEntity(173U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(163U);
    msg.op = 78U;
    msg.goal_id.assign("CWNNUOYTDWOLRUEXAUECXNWGGDUSYHR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QREZREPAXOHLYZEVRGQAKRAT");
    tmp_msg_0.predicate.assign("AILHMBUIPCHSEJSSMMHEUGFLYGYDNOQEQXJVGVKUYCMQUVEHZJRBJWUDWUZREFZTTQBPJXXOTPCQIUAZLYLDPL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KXBYEMVHTDDWKDAVWTIJFEVEOXRSLPZEGSREOADOWMOFKNGNGQWTKNHNLJCAAHAQGTFOPPRWJWLGSGAKSZCINBEFBXXPINFJNZCRXYRJKPYCUXGZPDVIB");
    tmp_tmp_msg_0_0.attr_type = 238U;
    tmp_tmp_msg_0_0.min.assign("WODKAAXDAUVVAECBWTHSISPCZCPBNPDEOIOLXSXUVSOKARDCIWFAGWUZNYZMHZWONECKXLHPUESIMBWUDINKFHEEITNYLSLJLMRZBQTLPRSGLAO");
    tmp_tmp_msg_0_0.max.assign("VWKCJYXQJDYNFZQQWNZAWOPJBRMBYXKNYMVNWEMYYZKQWQUHVURHJGICAXEZAFHPSUHLTADDEI");
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
    msg.setTimeStamp(0.22719286982795783);
    msg.setSource(10421U);
    msg.setSourceEntity(82U);
    msg.setDestination(17454U);
    msg.setDestinationEntity(158U);
    msg.op = 242U;
    msg.goal_id.assign("UVXPMQMZOBTLNPGXOAOAKUHGCKOBIHMEIFZUZDCKRIFFYLKFYBDALINTKTSNBLWHHDWSRSDXPMXFZHAIHPKYRWCUIZMPYQEENXOCJLPEHULBTWNELQGRPMTORWVVPSVSZVKDFCONYQGZLMBACLXGKUQBMDGFVY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VPODFONFQLJLKBEK");
    tmp_msg_0.predicate.assign("DOMQRAXMYRMGKATIZQVGUPHYNXSCNWOUDPCSCESJTQSJJPSLIEKCGVUFSBGBXLXLFXDRMXAEHNNRXHPOODCON");
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
    msg.setTimeStamp(0.6697284839803885);
    msg.setSource(58367U);
    msg.setSourceEntity(197U);
    msg.setDestination(35908U);
    msg.setDestinationEntity(110U);
    msg.op = 56U;
    msg.goal_id.assign("MNFAHHKCRKVBNSWHUZCMBKDVDVJAIMVHJJGFCZB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XINXKYOCTNEWEMIWDPJBDMII");
    tmp_msg_0.predicate.assign("CQJEAYQLCFOZUDPIJZNWVRVKWBPIWZY");
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
    msg.setTimeStamp(0.566844204670906);
    msg.setSource(12070U);
    msg.setSourceEntity(42U);
    msg.setDestination(119U);
    msg.setDestinationEntity(3U);
    msg.name.assign("TPZKLDDQETEQTPIFSSYWSVBPSGNGOAJFNQVZOALSOCRRURIGMKFYGUKIIQVMBEFXKBBFDNMHD");
    msg.attr_type = 252U;
    msg.min.assign("GYNRMZFASAYOUQVLLAUVCVAPGYQCWRIDUGDZSSPIIFABOFJQJPKSHEUZWBDNFQHSCLFNCBBNSXGLZXLRAVGTIJMUMXPNBEXZTK");
    msg.max.assign("WCFWBWZREQGJOCVQPLKGARPTICVGTUPPHPYBCXNUBLQFBLVYSDIHHMUGZLSDVQJBBTJVORDIKGYACSSHMKNODOXXYIEYSIEDZYWRFMQOAUAYFJSBJCCRAKENAZLLHOGUZWTKTGWFTQEFCZOMTJPIYENMVUXHTPJGAJKHQXNHBLINROKGPRJZTCDIADEXSDFREFNEDWRFJAMZO");

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
    msg.setTimeStamp(0.009262397503985942);
    msg.setSource(13509U);
    msg.setSourceEntity(127U);
    msg.setDestination(30914U);
    msg.setDestinationEntity(197U);
    msg.name.assign("ANTMOOQSGFQROUKJLEWDTQJHABGFAIVIAYXNCCBDPHXWSILNVGNONDSQIKEJUEWKMTBHIRWUQQOQZNFRLCWYJEUVRZYVHITPLVQMFKTLHZLABQBGUZEWHGBTZTEOQUFJTWBKSXKNUDMPDZXXVKRSUGZESAJWEGDYNJIIXDKYONVFFVPMKRACFV");
    msg.attr_type = 194U;
    msg.min.assign("XGFDNWFLXIQABZMYCXDCAPCUSQBFGMCYMHTTOOPBXAKNILQVYQDARGGDSAFXWYSSPRHCJWSVFVSVNYZSUECKGWEZVCIAOUTGTQUYLZNKVEPFLXHRKTDUQVGOZMEPULJBEZLRBFTPYOWKDULAQFVBMEJJGXEENPHECSRLPJYMRMDQIYBHXGSWINNHFJJZRZW");
    msg.max.assign("QDVLFVRTDGGZOBRHYELLBH");

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
    msg.setTimeStamp(0.5573710688514831);
    msg.setSource(31589U);
    msg.setSourceEntity(92U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(84U);
    msg.name.assign("ROCSIGNAZHQTLJLHEDQPTURJTCUDTLLEMXCXZHTASNKZVUQNLDIPJXOHLCOEKYLGKZXIYAEUQGYTOXCIFGFCGTNHXWEDKYMICMXSPJFH");
    msg.attr_type = 96U;
    msg.min.assign("WVQSCADZMAVMGKKSOSBCTFYBFQZBVZGRVGKXUHUKDBVEWCJSYMPQYOASGNCFPDZJNOCNYGCUUBQUOSCLEONYYJRBNILQTXWXPIZK");
    msg.max.assign("XCKYUFMVAXCRSTDWLEVZBOBWMAUQDOEAMREPXYKLOPAEGNDYKZZIJGWZKYMMKSBILPCIEHRIPUBYPJMGEPEUZSDJZWSVCBHNQJTHMUGZLRPFNFTCGQXQFZKMQXAAAVEKHIJOSNHOAYZNBXNCTWHCDSACOZBNUDKTCPLAULUNWSYDKNHOREIPTTFQGDBFNXRFODOXSIHMVYHFYLHQCWTJUVODTGWRIJLIRPXJSIRXWFVFBGEQVGUKBVLLVJS");

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
    msg.setTimeStamp(0.9262951633152324);
    msg.setSource(14126U);
    msg.setSourceEntity(81U);
    msg.setDestination(1682U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("OSKATOBGTWBBSOYXFKZGUYUTNGAJSMFXJJMPQZBQJPWKMVXJUUXSRQINUXWWRKKDWBPIUSRJRFQWFKWZQZCNROTDLQDXMGBVUIPGVMNOKNZDIPNLLXSVLBCRDWEBQZJMWVODIIQIXYYINMQTEMUOHJGKHDFRLPGCEVEIJQLVBAHKYTFYHADLUFZCLXZP");
    msg.predicate.assign("EXPMRTLSREKLCNQFFJGVDLSJKZOJKSNAIURSBEHXYCXUDFYSPJTYZOOSFYPFCOIWLRAIGPCVPQQPSLHVOUGVXRAWRIIRZFXYMTHSCVISFWDVAONUDMZRJTDWAIQLQCCLNJLUYLBZEZEGEXVOPZFMV");

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
    msg.setTimeStamp(0.8996907451567411);
    msg.setSource(16557U);
    msg.setSourceEntity(197U);
    msg.setDestination(34940U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("YPNNLWLQTYDHOLVNJFCANRMWWOKKSAMDJYPEXLYEIQGTSXFGDSFRBCONZXIFPXDMCYJKRTPEINYZUOXUBGXHYKJIFMPZHLWBCZCWQVTQOGJHGTRAMUHANHKRAQJLVULIIMCABBDDQKVPCRZJOTVULXSJSREIBHRKUGKUMEBIDXYSEWVEVONIW");
    msg.predicate.assign("HSGUYYKTPBFRMKLGBMVUNWAGWKBBDHEFKI");

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
    msg.setTimeStamp(0.12353440979994934);
    msg.setSource(9842U);
    msg.setSourceEntity(136U);
    msg.setDestination(24332U);
    msg.setDestinationEntity(231U);
    msg.timeline.assign("WKKUNMGXOICYZIZFFVNSGFKCAVFXIYDOMEIWIVHSCDJGCSDICUREISAEFEOPAUTRYUCDFZECRTXTNPYLOZDTGTXUVXVPBVGBENIYWQYMAOPLLRHTJPNJJTUENRGUADOVMPJGCBQGQOEHXOFKVNARCXWFKBIGZRFMBXSKLUKYXLJWMFRPHHJQYLGLDHALPMZPMAWEWRQBIBTXUNBCBJEKSMHWRAVSDUAOOQBHLQTHNZHMNZPDZKVYKJQLQQJWZ");
    msg.predicate.assign("CLFKOFBZYRSWZHDZIUXHNOXJEMAUKPWXYJPVSWYHTIBCLQLQNKMWBGQHFSBOBTZGXACEJZFYKNEGLMRVJNJTZTXWBRDTEUECOSDURMHPWAUTSOMOMSTEJNQKQKRMDCONMVTNKDTCOQHVKIHSCFDFLEPXCYYSUYYGKRRDGAZACABXJVABPGUXDWDEUIMYXZOLPNWIQEIGFRIXVHALBQFHPOSPI");

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
    msg.setTimeStamp(0.7448433597071231);
    msg.setSource(62018U);
    msg.setSourceEntity(75U);
    msg.setDestination(54020U);
    msg.setDestinationEntity(179U);
    msg.reactor.assign("ZGFQSBHCOXBSTONVKGULEXTYRGVALMOHHCIEPNPBDZYZCJRZMKNUHVXBDNQUIPMAMYSEMNHTWPSSCRETTQYYCQMADHWKGXLQUWNFJIZJIPLUXFTDNAXARLSQFWOUQPWUVJOOFHKRWIVEJACJTVUPYOXTDHDMTGRYQVBUHDPOBKLOBFYDZBALNKMVAEIFIDLISKGWENWZKFXBIXWIEGFKCJJYJT");

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
    msg.setTimeStamp(0.772030912234138);
    msg.setSource(7093U);
    msg.setSourceEntity(104U);
    msg.setDestination(20627U);
    msg.setDestinationEntity(58U);
    msg.reactor.assign("VYMRHEDJVUXLYQGLBBFZOQVKSNULFIWZCHFGDEEKFAUWJKMOYSYTDTCSEOQOIBGXOOLPXTNZGOLYARZZHBCRHJDCFXWYTERSPOVZGIIDKPGFMKDBMHRCDPLRHLPAJBPSUWINQHTAXKZGJCWIQTNMEYRTYEBIXBMSGBCLRFINUJYNMAKUWUIWPVITKWHQQFAPNSUTWNGMJFCVKACVTPNVXCGDJRKZSDYUXOSMRFPVQZM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BQBQITRWOBFHIXNQIEIYOPBERYIDXWRHRCIRUBPWCZWOGWSKMPPYALNUHQJUMLNGJTLKNFEFIJUYLDYSPKKHIRBKJOEGLTCGZXJHZBMOQONELQVDSDFYTQBAHCMECAZWKMOSZUNLNAXVKAAVZTHCTAJEBFA");
    tmp_msg_0.predicate.assign("PIQUXWYZSSJHNSDZUHSZSMRRJAUIMZSWKAAGFQEWVTCXUNUCAQLIOIRSQLKWAGPTEHKGYKDEPMSEICMDKBCPLXPYREPHHIVLQYYURIUIBHBBOFMRBOAPHMHFGKABVCQBJZTMFOJGQAVNCBFWNDVTVXILKQVNUZRFYOKGXJLTWNSECGFXFSAVNCJXYWVCHYWTQLGGDJGORJDOZPUXWFQAXRBLTDCTNENKNOEDLEKMHLOMTDJPPRO");
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
    msg.setTimeStamp(0.2519108016974373);
    msg.setSource(24770U);
    msg.setSourceEntity(29U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(155U);
    msg.reactor.assign("TPCQOSQLXZOEUPJDHCBQPQKAVCGOAVYEMFSXYIULDBIRKDAJRATVHGGLXXDFOCSDRZPAJQFKYMWNWDCUZBJETFTWFBJNLLAMZLOUGSYMGHIUTNJHKWSIALZWMPPAXBGEHVHNJHUHRNQSYRYIEQFPTIMWJDIWOCSUUFSOPDOGWVMKNLDVYTWFRFOVUZEBKGNXHLMIFNEBKZZVXPREQJQKRSC");

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
    msg.setTimeStamp(0.6624764184216385);
    msg.setSource(22541U);
    msg.setSourceEntity(179U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(175U);
    msg.topic.assign("UATAHXKYAGOSKZNSOWCSCCDEAKQUBCXZRFETBVURXLFMHRBAYNYITYQYQPNNVGUCDQNNLLRGEGOFUXRRJFRWTUEDEGOXINFHJGPEECTICVQMKITTGZJPCHFJDAMOLBSJOWTPDHQIJIWZQVIYZQUBIJRPEBLZWZVOSUPDPXALLMT");
    msg.data.assign("KNIXLCIRAETFZWEYOOHQEABLFGOYIPAUJEOVKYKAMGNDAHKQLCVXQIMSARCCWIWHFEZBZUGHOGWDCNZTUOSMKWHZCMUEHEPYOTJYWUARSNHBNNXPUUJXMYNUZENRXVXKBMJMQJDOBILA");

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
    msg.setTimeStamp(0.8991397709786575);
    msg.setSource(52531U);
    msg.setSourceEntity(37U);
    msg.setDestination(24315U);
    msg.setDestinationEntity(230U);
    msg.topic.assign("WXYIFWGICWFUJLJTDHMNMUTXEUISENYVGXHQKZMLVCRFUZVSPHKJEHSZDYTSUPCCTPOJNPCATZBOSIVWMHZLHUBKARQSDKLGDNTGVQGAPAFBJXSEULNTSAREZFLOGVEBRNICBQYGNUOQBWOMTEICCFNKBLGJELRRPPAWJVADIZKAJCMAVOALFNGRBDIMIDHMOQWWFJEXTYYP");
    msg.data.assign("KNUKIGJTUZDQVQAZRRPHLGQPZHVZJSTSALOONMLIOTQAOYDJDTBVJECYEDXCV");

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
    msg.setTimeStamp(0.43712840068193226);
    msg.setSource(30969U);
    msg.setSourceEntity(151U);
    msg.setDestination(16189U);
    msg.setDestinationEntity(76U);
    msg.topic.assign("CNOMFSQHEVYAQVOLNWBULAUEURDZDPCXRHYYVVABNEMVMDSGOLIKUOGWUDRMMSTQXNJIJZDYBZXJGBCLLYPMGWWDQSZAMVPZYHOOJRPKFIWJOZUPHQXNISGUUSKTIHJLFXKAQGNJGIJEBP");
    msg.data.assign("KCQOSLPFTOWRMWAHPHZOUKXTSAUJCQYHUENWDCDSAELCXNNCQHOKSYUJTVUZPWSPTZRDPEOSAPJRJJIGLSNXVPDVZYNDKEUFOJMASGFALXWNKIIDPVYHNCEUOLTZJPAMWQMNIEUORFWBOTFBJYE");

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
    msg.setTimeStamp(0.4863676752096543);
    msg.setSource(1097U);
    msg.setSourceEntity(131U);
    msg.setDestination(64626U);
    msg.setDestinationEntity(42U);
    msg.frameid = 76U;
    const signed char tmp_msg_0[] = {121, -90, -111, -48, 112, 57, 99, 64, -99, 34, 86, -96, -55, -107, -6, -4, 97, -77, 29, 11, 44, 37, 63, 103, 96, 49, -32, 57, -28, -77, 40, -34, 63, 61, -32, -27, 73, 31, 83, 14, -59, 118, -101, 126, 41, -57, -59, 104, 45, 37, 20, 122, 11, -11, 53, -114, -14, -122, 92, -22, 30, -29, -45, 105, 48, -100, 110, -78, 114, -122, -48, 53, 70, 59, -4, -58, -19, 95, -56, 117, 0, 94, 73, -56, -1, 54, -70, -116, 20};
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
    msg.setTimeStamp(0.6604138835616972);
    msg.setSource(41001U);
    msg.setSourceEntity(108U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(96U);
    msg.frameid = 45U;
    const signed char tmp_msg_0[] = {124, 38, 81, -106, 96, 55, -72, 126, 21, 60, -128, 106, -94, -45, 13, 87, 34, -35, 16, -3, 58, -75, 102, -96, -68, 10, -67, 32, 52, 2, 7, -102, -57, -82, -63, 73, 88, -24, -119, -26, 34, 82, 86, -56, 82, -88, 107, -43, 1, 2, 55, -57, 80, -72, 123, -100, -27, -83, -89, 69, 60, 94, -52, 106, -26, 59, -68, -55, 126, 123, -85, -47, -78};
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
    msg.setTimeStamp(0.3750539003838964);
    msg.setSource(23081U);
    msg.setSourceEntity(221U);
    msg.setDestination(12734U);
    msg.setDestinationEntity(238U);
    msg.frameid = 187U;
    const signed char tmp_msg_0[] = {-99, -68, 76, -33, 12, -4, -36, 76, -39, 107, 24, 93, 3, -18, 42, 30, -16, 113, -20, -121, -25, 104, 58, 5, 125, -73, -26, -60, 77, -113, 16, 60, -112, -43, -119, -59, 89, -65, -60, 18, -53, 71, -37, 76, -86, -15, -23, -63, 1, 119, 10, 22, -126, 10, 74, 28, 10, 97, 94, -87, -79, 24, -126, 102, -80, -119, 93, -123, 99, -29, -16, 16, -26, 28, 24};
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
    msg.setTimeStamp(0.9556935783143873);
    msg.setSource(16211U);
    msg.setSourceEntity(35U);
    msg.setDestination(61084U);
    msg.setDestinationEntity(214U);
    msg.fps = 242U;
    msg.quality = 174U;
    msg.reps = 70U;
    msg.tsize = 245U;

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
    msg.setTimeStamp(0.17176823184551826);
    msg.setSource(53335U);
    msg.setSourceEntity(173U);
    msg.setDestination(46051U);
    msg.setDestinationEntity(187U);
    msg.fps = 179U;
    msg.quality = 218U;
    msg.reps = 216U;
    msg.tsize = 234U;

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
    msg.setTimeStamp(0.06103380847777795);
    msg.setSource(24749U);
    msg.setSourceEntity(195U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(87U);
    msg.fps = 197U;
    msg.quality = 25U;
    msg.reps = 139U;
    msg.tsize = 162U;

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
    msg.setTimeStamp(0.03247277537269588);
    msg.setSource(65482U);
    msg.setSourceEntity(17U);
    msg.setDestination(62212U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.564137130393677;
    msg.lon = 0.3039520641560427;
    msg.depth = 74U;
    msg.speed = 0.17503719896147307;
    msg.psi = 0.061620153651956944;

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
    msg.setTimeStamp(0.27113721594859486);
    msg.setSource(34928U);
    msg.setSourceEntity(49U);
    msg.setDestination(23577U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.38269712149387514;
    msg.lon = 0.6949332738587879;
    msg.depth = 118U;
    msg.speed = 0.9397534316024821;
    msg.psi = 0.5092714574521565;

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
    msg.setTimeStamp(0.3781724136496266);
    msg.setSource(51454U);
    msg.setSourceEntity(30U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.6048080860891913;
    msg.lon = 0.7939052612802726;
    msg.depth = 14U;
    msg.speed = 0.556717632392157;
    msg.psi = 0.9593344539121155;

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
    msg.setTimeStamp(0.8631486424621306);
    msg.setSource(58818U);
    msg.setSourceEntity(5U);
    msg.setDestination(56097U);
    msg.setDestinationEntity(207U);
    msg.label.assign("OMXVNDJBTXLRHKZAACXCBMEGJQJPIEZUWOQCERJMNEYJRWICUGFALGVJMKGDYMDLULZRPCQXNHJFRJLULKVAOOEAKGSVFKHWYEFXOSCUMXEGTBNASYPYBIYMWQMWSOPWUO");
    msg.lat = 0.7389670154224635;
    msg.lon = 0.33034852842443885;
    msg.z = 0.521861441859776;
    msg.z_units = 237U;
    msg.cog = 0.19173985962294138;
    msg.sog = 0.106966640010414;

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
    msg.setTimeStamp(0.6726432878564035);
    msg.setSource(60436U);
    msg.setSourceEntity(224U);
    msg.setDestination(51934U);
    msg.setDestinationEntity(219U);
    msg.label.assign("LRFTMKKCIXWZRTWINVMYGXARITFZYBDJEYXWSLDGYWXBDLJWNJIKLFOOZMPGXSEQGFFKMDCQPPRSGHYSVBTH");
    msg.lat = 0.839396977977379;
    msg.lon = 0.7640724024780974;
    msg.z = 0.25827559577974524;
    msg.z_units = 5U;
    msg.cog = 0.7394274489837215;
    msg.sog = 0.7146242024844751;

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
    msg.setTimeStamp(0.29416211024842365);
    msg.setSource(45125U);
    msg.setSourceEntity(89U);
    msg.setDestination(24853U);
    msg.setDestinationEntity(197U);
    msg.label.assign("KQGUWZEJSYGALNKTFXRJMMBFQKBXVCTHOEMUPQNEOEKAPCSNKUPWSKDZ");
    msg.lat = 0.7706212991891563;
    msg.lon = 0.4558927184959647;
    msg.z = 0.9949607640577972;
    msg.z_units = 224U;
    msg.cog = 0.7373019932472485;
    msg.sog = 0.7844832840931382;

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
    msg.setTimeStamp(0.2864494330415126);
    msg.setSource(7685U);
    msg.setSourceEntity(50U);
    msg.setDestination(45853U);
    msg.setDestinationEntity(247U);
    msg.name.assign("JMAYFULWONGWLMKCNDVKOYNCAYQGXIGZXEZFQJMMSLVHOBEDTTCLLKGZCEOMKIEQCDQUBUCMWDHWBPRFFHWESDGJGNXUBERANHASIDHPORVCYSOHJGIVRLKWPAYHOJPNTIOGOXXLZRITBWVPXJZJTLZRZMGSHIVUEPOKCDHUUZKNTFTRQSKYXLEFXKIYVCTVSXPFIBJBWNGCBAEQYWUMVWXSRUYJALAFPKFNNEZPQTAVY");
    msg.value.assign("CRRBBJUPQCICHUREQHOSKWVPBZCDNHYLDTP");

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
    msg.setTimeStamp(0.5788183045264159);
    msg.setSource(30165U);
    msg.setSourceEntity(215U);
    msg.setDestination(41081U);
    msg.setDestinationEntity(64U);
    msg.name.assign("VPRNOJUSIECJOA");
    msg.value.assign("GHZSPBGONWDZMVEZNYSAKOCWSNRJPKQIIWQPQKVRPYVMXFOFGXPBAQIYTRRNTHAIUYJXKYFUAJGFHGWUDZXSZPCUXAIPJRKOOTPLHMEKXLRKQVFCCHDZFLBSLNQPMIQONSDSVJSUYWGVRTYJAAQWZUKEWHDDRMOKELTYOJBLLEBYDCSAFEMPIIMFFTNJIURUNNJGGWUVZDBWOTDACYVXNBIEEUHZWCHXTHATFQTKJGBMSHVZMEBRCXXCEDBVO");

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
    msg.setTimeStamp(0.1025528475775892);
    msg.setSource(47257U);
    msg.setSourceEntity(86U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(79U);
    msg.name.assign("SSXCRDTCGVHVFXUUDPZESYABJRWKVAMSLINFITDWNTJNCBCRSMSENMPZQUXZRCAXINZUDVKCEFWEZCIDDFTHLQRGUOSYKOQDMPLPJIGRYUEGSUJNZKIJQLTIXBHN");
    msg.value.assign("KCPPXNGCFFCTCNARPLHULEYUCXCPDECBYNLKOOPSIGBWENGZJIIAXLXBTOSSUWHPJTJPYUASMHFGMWTWHTLBLHVORQSORDIVKDKXRXFMFFMRKEZGWVWQCAOBWAKAYADPYIMEIJGTTUFCHYFAZJMESOAIJBNJVZYKNUKWOVUBQSYLDQZVLBVQREJNITGFUNIWOSHVWCZQDXXLRLJJOMQVUNDQGGSQHKPFRMTHIBXEQRZ");

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
    msg.setTimeStamp(0.9847843191291525);
    msg.setSource(45815U);
    msg.setSourceEntity(180U);
    msg.setDestination(10865U);
    msg.setDestinationEntity(107U);
    msg.name.assign("QXRNZCMCNVAXMRVLMHURDSYTLNJFCFTDZ");

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
    msg.setTimeStamp(0.6766283082276062);
    msg.setSource(44155U);
    msg.setSourceEntity(74U);
    msg.setDestination(47140U);
    msg.setDestinationEntity(47U);
    msg.name.assign("FKYMHLPCJRAQNQPYAOTCZBZHEVFFXTDCPJFOUIUIRJAXGTKWSQQCKLEUCSAZTYGVVYMPTUHHWPSWOXAIOBDNGATZMOFRKEGBVNLVQJZYHDKPNTCLLNBWBQGWWMUYXELXZYLKWSRFAMRQFBMDIXEIOBHKN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SAVISTGOKELKUYXTDMYGAPYHDUQXOPOECVZEAMXVEEOAQXRMRAR");
    tmp_msg_0.value.assign("CMQUXFYWCTSCAAULNIFMUPGVEUMGWQXUQBGZOFKJOVHF");
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
    msg.setTimeStamp(0.8988923873097068);
    msg.setSource(19949U);
    msg.setSourceEntity(248U);
    msg.setDestination(50776U);
    msg.setDestinationEntity(151U);
    msg.name.assign("XNHSBYPIIXEXCAJUIAZQYQXPDALCWNELPZYLFYJNMHLUYKXGYORDGRTVMIUHVXCBVUDMIECQWHEAWJOFORCGHLUJDKWFBQSZJNTWVPSZFPLOALYJPQACNEZCOWBTLVMKQJYMBEVWDCOKFWUGPRIIGRXKDMLGIBXPKDRATSVQFVHHVNQNGZFTFGUCVSUETAXOZMOSUYRTNS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MRDGKCSAITIOKBINYYRGORECWWPVBPIAWIRNRHDZEEANRQKUMCJFMVAJTJFTDMGPSBHPMGWGBMKKPBSZUXDWUZUJHGKGQQJCSOSJLDBUIIMVEZQJWNARHKXQTDEOPDEFCFOVNYBVHYYTXAJUYYWPLZTLSMIDIBNTMNZWRFNCTAAGZOEQLUUCPSGVZXVQEFAJFFDYMOLZCPQHVXBCIVTTGHECHBHKYULNLU");
    tmp_msg_0.value.assign("DVBJRZOJOCLUFDOIULRXNKBFOLNIHNWIMJTMBTNGULHPQVJVDCPGFSKGPSTEYRMVWKCUTMFZXNYWLRIVJLMQVTKOJWPDKGSZHOYCHLTUOSLQFHCWZXUXLGQSMCZDDPNCJQYYWPZQATYDZDUBNESUNGMDFYAXXYARWESGJRGIEOMTEAIKPAIRGBZPVZCBBSJLIYEXSXKMIAQUHNEWXCHQFDEPATRTHMRURQAQYHIAFWVS");
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
    msg.setTimeStamp(0.00013742755754553304);
    msg.setSource(34573U);
    msg.setSourceEntity(223U);
    msg.setDestination(14910U);
    msg.setDestinationEntity(68U);
    msg.name.assign("CYKTLMPETCRGSNIISROHUAJYYVCHYQCXMWANMEMLZUDRFBTSYOYHULSNAIQPKUJTFZSIUXDNUOZXPGKJHOBESLHYGCOXRWDOGVVZFIRJEXPBVQDDWTSGCZUSBGEHPYLBKGKIGQ");
    msg.visibility.assign("XORRETHCNCMECKEWMXXOGNLUOUYDVQXITVKWYRCXXVCFRECGXLTRLVCRHJNAGUGTYBIXFZKZNKETKAHNSRLAFUQQVAPMOMIEJCM");
    msg.scope.assign("SJZHXGBADFRGSJKKQRUJBOUJPTKDWGARVYIQGVSSEBZPNNUHAOLCMVEH");

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
    msg.setTimeStamp(0.4230126892028402);
    msg.setSource(56280U);
    msg.setSourceEntity(11U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(168U);
    msg.name.assign("MRPGYSINOEEUXIXTEHHJHNJKIYKDZKLRXVUOISLRGLDXESMANFSHCJODQCKPZMNWQYHVDTZEZFVQTHUJQSWBTZMLWSAECNCKNWQWVBIDMXCLPRNOMURJBRFXLDSTYTZCVDPKVUMXUPROBKGHBOYJOBMQAUNJTGGTVOAGQVXPGZOIPEHYBTZJFJJSRZWMDHIVFYCYKFBCQGASAAHLKFFDCZIGARWVSLPY");
    msg.visibility.assign("UDFINUSCCMPUBEKMYDWLAITRYHUHBWQGXCAIWDOJXKBMZDIFLYCFCFYIKVEFJGURKACGZZYOTKMTLIMURUSBPVHHWIZHLGODCVSXSOOMAFZVVIPCYTKTTRJQCPKTKJXRLKPHZRHGEDJDJXBPGNBSHQTPMPHDSWMAELZMGNKQEFGTYCWVNQGSWXIYQIHAYWXAAW");
    msg.scope.assign("CTJWDHJVDJDAXPWNSZHENMMFJSPAOWPGVLXYQXDUGUOHNSCVPPQFLULVHROWINQGDUMIXYUIKTUJXEY");

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
    msg.setTimeStamp(0.1161450910476487);
    msg.setSource(58988U);
    msg.setSourceEntity(24U);
    msg.setDestination(16509U);
    msg.setDestinationEntity(254U);
    msg.name.assign("VXKWWZHVLEDSLXGPPSHYKBOYMOQQZXIASNHBJNERTWCKGIGRDEJCDBIFULSALXHKFCPCLYZDNLRIJRUKYPCDXYWPVQKOOSILRFKHVFLNGCAABGISDMOOMCVWTBVTOQPMWY");
    msg.visibility.assign("UJERWXRWZMQWMENDHSHTIAECKHCWVFKBLFXQOSOJVAMTMYYNIQWEMJYAGGVGUSFCHCNLGTFDIOWXDLHORVBKNYBHOESNDZDOEABQXIUVQJJXF");
    msg.scope.assign("PGSYACGDRBAXMOFNODHNMSGAMCLRGYWHKXAWZBJJPFQKWZCCAIAYVODEQDCEMVLTKLPSKVQLFXQGDRIPHKGXKUNHRQHQNRJBRUAGUAZLHRXWVMSVOLTJJQPQIVIZUEBIKOZCJFSUBHNLXXLGQSFNFYZZWTUNTIFJTIYYSUMTXCWOJRVSOKIEWBEYTIWDOYSD");

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
    msg.setTimeStamp(0.1170558405566714);
    msg.setSource(49588U);
    msg.setSourceEntity(222U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ATJGMGRCMJHJZNBCBMDHHNCRAFPPOMKROWRSKTDDJNRXQQGFYEOTLGTFHKUUJLYDTNAODPZIROPGXEGMFNRLGYNYZSUVCYGFTIWQNQZEFRKWCZITFJBVVCVZDMDXPWJWSANJXVPCHASAEISIYBXHOQXNBDVTAUVKEF");

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
    msg.setTimeStamp(0.9729847617291271);
    msg.setSource(19937U);
    msg.setSourceEntity(26U);
    msg.setDestination(59220U);
    msg.setDestinationEntity(54U);
    msg.name.assign("JHXXYPMRLYPBVQBOCOTKPIAUNVIWXTUAUXAGCODDYAYFBBEYPEGVQKFWLEPNRXBUNRSDMVFAJGWQLCCMZZZGFPOL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GZTMSKNBVGLJQKKJGZECC");
    tmp_msg_0.value.assign("NDRCKZALZOMHTGJWVCQUDVZGHWURLRSXIMPETXRPIYZTTKUAREDVNHSVYKSIDTHSUPPSFXFWXPJNDKWXLBBOYLCLBAWAIJSNJUEWCQYKGLTFBVOXYMGLNHZVBQKDLROAACUOSCUQEZZTCMGOJIKNDADHLEBVKQFMGXYGBFPAYJHTJNOEMAMFBTOQBJLYSPWPDHUWBTZIYXFFNFUMXMOGPHQ");
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
    msg.setTimeStamp(0.5109872936867109);
    msg.setSource(18194U);
    msg.setSourceEntity(215U);
    msg.setDestination(7927U);
    msg.setDestinationEntity(169U);
    msg.name.assign("AHGAQURMQNCXNSOYITSSGBREKYECCTDJEVJQOPJHHZXDQEQXQWPOGSXGSWRIDBVGHRLCGABYBIWFIBVFVSHPWHZUKFNWUYIHTQCDAZQXJFMMRFRWXDJNKIOLAPLDZTHJOMNMYLVXXUPXRGMPOWDKFWSIVIVZSJOYZBTZWDVVABCIFGQUBRNSNTJIHYTELLVXMZBUNFBYEEOHKK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CVUMOCORDAJFWSHHPE");
    tmp_msg_0.value.assign("FRXGISAGPOKERDHAPATTSJKWBWQPFDFVMBDCNUJEYQWPSIDONKSGQJYVZWMGZHSXLCXSEBFJALZZTFJNKRBVZORVQIKDBQALADBJFOFIRTWCTRTCFOLDDGVLDVKOHHHNLTLUPHPGPYXKLJATMQYIBERULMGVXBGVOCHMWYIAGXTZNZVCZXOYEJFIOHYMQQUKJNMEEICDGCUNYCWUWSOYPZZPESQJVUSXRMWHEBUBMRUTKXNIUIRSAHNEWFAPM");
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
    msg.setTimeStamp(0.00580111677049755);
    msg.setSource(45488U);
    msg.setSourceEntity(233U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(93U);
    msg.name.assign("PWUGPMGWQPKCJSOTMUJSWUHCZKLOUKIHJTYEBQEDTSXTWUMVIBFITZYVWCFESGMNGDSRMNCAGEALGPINKGLBJZEZWVXEIXVNHIAQUQVYFKMHODMRCFSNRAYXCTDRKDFANJHYNHLFVOPEJTBHYHPDSZKQYDQLAJOMHRJJZGXGRQVTSNUZTXENARWHRBPCWWCAIXEBPXZOCDDVXAIQIUKLBCQFNMVRXZV");

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
    msg.setTimeStamp(0.37818086019085706);
    msg.setSource(19553U);
    msg.setSourceEntity(39U);
    msg.setDestination(43683U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ZZOERAKTFGZUMXDFOYJLXCXWBUNEMFFTAPXYLBEUNQIOPESGSLZBRIKKCYRSGHLKCVOYYYQRAVVMSWCDJSCKNFEPQTJTKVDJXMAULEHHNJLWUCDQKLKZBBOBHVWZKFMFSQHGFIRNBDJYDWGACNJHEOWU");

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
    msg.setTimeStamp(0.5310050012748568);
    msg.setSource(47229U);
    msg.setSourceEntity(77U);
    msg.setDestination(39390U);
    msg.setDestinationEntity(84U);
    msg.name.assign("QPGMMMOHBZUPEWAVYVPGXPRHTX");

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
    msg.setTimeStamp(0.6806272676143238);
    msg.setSource(31600U);
    msg.setSourceEntity(56U);
    msg.setDestination(22477U);
    msg.setDestinationEntity(241U);
    msg.timeout = 1299508944U;

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
    msg.setTimeStamp(0.1284520378513373);
    msg.setSource(9176U);
    msg.setSourceEntity(71U);
    msg.setDestination(35366U);
    msg.setDestinationEntity(175U);
    msg.timeout = 2061407931U;

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
    msg.setTimeStamp(0.19102671902963908);
    msg.setSource(10349U);
    msg.setSourceEntity(191U);
    msg.setDestination(6467U);
    msg.setDestinationEntity(163U);
    msg.timeout = 1493637345U;

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
    msg.setTimeStamp(0.8239133829979937);
    msg.setSource(29716U);
    msg.setSourceEntity(222U);
    msg.setDestination(4394U);
    msg.setDestinationEntity(144U);
    msg.sessid = 2450608686U;

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
    msg.setTimeStamp(0.8744899590862523);
    msg.setSource(49371U);
    msg.setSourceEntity(60U);
    msg.setDestination(26193U);
    msg.setDestinationEntity(118U);
    msg.sessid = 1264080414U;

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
    msg.setTimeStamp(0.5002940803150793);
    msg.setSource(42551U);
    msg.setSourceEntity(20U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(54U);
    msg.sessid = 2592152484U;

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
    msg.setTimeStamp(0.27136190743937594);
    msg.setSource(51976U);
    msg.setSourceEntity(43U);
    msg.setDestination(37073U);
    msg.setDestinationEntity(64U);
    msg.sessid = 721456485U;
    msg.messages.assign("KMXUCBEPQSZSXUNVZOIYZEMTOLPNOKLQATNJBPMSLPLAIJCRJ");

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
    msg.setTimeStamp(0.9400873771247789);
    msg.setSource(18046U);
    msg.setSourceEntity(179U);
    msg.setDestination(27984U);
    msg.setDestinationEntity(149U);
    msg.sessid = 1737202167U;
    msg.messages.assign("FEZQIPPBAEFSHSESREEXDXRNVYJXNEIWKMXMVRQNLWJNNCVZRIQIDGCPLAAVCYKSDBOOSOIKOODXBBATJFLCSLVOGLZXOKSENUPCGQRLHZKHWZGHEGJDQTNMUTPNFBARGYNDHJSSSAEWDEGYUOMUVZCGTTZBROUFUBMKIYFHJKVYVHLFFWPWYNAIYIQXMHATGPQHJKXMMVWAZYXKBUJQHRDFQVPFJGWJTTZLUIAYPKWRCORTDCLWZCITPMXQUC");

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
    msg.setTimeStamp(0.2071762025502506);
    msg.setSource(26658U);
    msg.setSourceEntity(237U);
    msg.setDestination(63542U);
    msg.setDestinationEntity(45U);
    msg.sessid = 1749610063U;
    msg.messages.assign("ATUHFNUWAITZRSMZVGESRSQWUIRQNKUMFIPARQUSPCKBHNDQEGMVOCGNMTQZNQNJLNFSESHBDGJATMMWWCXIOBEYGOYXIJTWLHCJLAXRBDDKVZENFQHPYUIFKMUTZVLERDLFRKALSEWYPUVFVZBADUGCKIOZUWYCBLDERPVJOIBONVJOMCZPAWQL");

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
    msg.setTimeStamp(0.5100053368558997);
    msg.setSource(5130U);
    msg.setSourceEntity(248U);
    msg.setDestination(47104U);
    msg.setDestinationEntity(67U);
    msg.sessid = 2441800009U;

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
    msg.setTimeStamp(0.31863882213613925);
    msg.setSource(16457U);
    msg.setSourceEntity(17U);
    msg.setDestination(38218U);
    msg.setDestinationEntity(212U);
    msg.sessid = 97044215U;

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
    msg.setTimeStamp(0.7983738274664756);
    msg.setSource(36630U);
    msg.setSourceEntity(19U);
    msg.setDestination(7583U);
    msg.setDestinationEntity(27U);
    msg.sessid = 2311357227U;

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
    msg.setTimeStamp(0.2675224833226204);
    msg.setSource(62149U);
    msg.setSourceEntity(253U);
    msg.setDestination(46102U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1977893593U;
    msg.status = 78U;

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
    msg.setTimeStamp(0.16217375144671553);
    msg.setSource(26493U);
    msg.setSourceEntity(106U);
    msg.setDestination(38047U);
    msg.setDestinationEntity(210U);
    msg.sessid = 1419575265U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.8152716093925478);
    msg.setSource(64748U);
    msg.setSourceEntity(249U);
    msg.setDestination(32757U);
    msg.setDestinationEntity(19U);
    msg.sessid = 3313116459U;
    msg.status = 199U;

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
    msg.setTimeStamp(0.7898480386769796);
    msg.setSource(11734U);
    msg.setSourceEntity(236U);
    msg.setDestination(63548U);
    msg.setDestinationEntity(36U);
    msg.name.assign("RMWEYBNCXQEALAVKDQVHEAKTIXRFUK");

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
    msg.setTimeStamp(0.38461721107938096);
    msg.setSource(29908U);
    msg.setSourceEntity(24U);
    msg.setDestination(9875U);
    msg.setDestinationEntity(72U);
    msg.name.assign("NJZWYBRQXBKBAESVUNHSLLFYRWVLRUKKCDJAASHCKPMYFEAWPXOVHIUGNGVRFGOXQCIZTNJTIFMIPKOZYEAQCHSHGMPAXLLYOTSKUNZTUENYQWVLLBQWBODXERVOQDXTOJTXEGCMGRWDIRCCHYNHJTRFJDNMZWZZRUVFGMPD");

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
    msg.setTimeStamp(0.05338944503383436);
    msg.setSource(20896U);
    msg.setSourceEntity(244U);
    msg.setDestination(11522U);
    msg.setDestinationEntity(146U);
    msg.name.assign("XPDCPLQCXFQNSJVMHNRBNKNXVVDWGUVSGXCPRSWCDQWNRYMYRDSDDATRAPBCDOTUFQMWLJSGJVSKHGMWECGYKFAZHDEU");

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
    msg.setTimeStamp(0.3585723905233502);
    msg.setSource(4272U);
    msg.setSourceEntity(83U);
    msg.setDestination(23221U);
    msg.setDestinationEntity(39U);
    msg.name.assign("TWLFHRFGEDWKXDHJOUWONOIPQTSISZUXRGJXNGRBLXSSFTQAKMTYWXYEMZEYHKLRCYJHOKVYTPLYJSVPZOCGJNNIDPSVNQUIHICCRWIHARKBWLBENDRQRFSAXVPEWAZEFUEM");

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
    msg.setTimeStamp(0.22353119728490067);
    msg.setSource(40676U);
    msg.setSourceEntity(179U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(15U);
    msg.name.assign("KQAFUCCDQZOBHYGYBOZJVHWUTMSOYPEVFQQYABWFVXCQZJB");

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
    msg.setTimeStamp(0.09455680761608642);
    msg.setSource(3796U);
    msg.setSourceEntity(187U);
    msg.setDestination(2213U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ODATCYABCAOPSAPKLLBKRERMQJZHTNDUSXIUEDPXUWZRLMEJKHRGOVQZSYYJXCFWJNCAGTUFFHLPNQTEWPVVVUBZBNFVJMWYOJGTSIYWSRCOPTLMKIDLVCKHLJQVPQUNFNROTHBPVZSOKHRKZXQEDFIAMIFQYFEOSHKDQHYFECIKREYSNHWMXDBZ");

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
    msg.setTimeStamp(0.09945352255821627);
    msg.setSource(47446U);
    msg.setSourceEntity(142U);
    msg.setDestination(40199U);
    msg.setDestinationEntity(84U);
    msg.type = 104U;
    msg.error.assign("VUAPYOJLVXBONGFHTKKFTXRDUOUDRUGOPMNHLYJKZIJSCQGMAJMHHMUSIYQBXIEIMNXRIOGJYDMCYBYFLPAKNBTJPJETPBFDFDISVSQQUXIWMRGAQGQUWNSMOGLIWIOQBBTZHXFKYPWVOHELXCLSRNZURENKCJSKCWLDWYSLGHVHEFQRNJZRMWNQAKCCKXHUZVEQREXDCSCLMWDRTVVFJWETSKAZXPHPCABVUDBLYGEOTFPAZAAYZVEZGTIN");

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
    msg.setTimeStamp(0.5672217016971449);
    msg.setSource(41422U);
    msg.setSourceEntity(155U);
    msg.setDestination(1159U);
    msg.setDestinationEntity(135U);
    msg.type = 221U;
    msg.error.assign("FVRHIFFTRJCBCRZJRLACVXFGQEIPMTESWXOTDKSFZMXXMDURNEGMNKTDGEOUQLUAAHHRGYKYQEBBOALJGQCSODBFNNTQTYOLUSBYXVHTHLQLKFMNDXJOZVYBUQPPZRXNWLTUXDDBHMWQASXCZSISVTPBPGZVLUPSVWVCQEWHHJYBKLDSYPIMXJMGZFP");

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
    msg.setTimeStamp(0.5094618691045749);
    msg.setSource(59283U);
    msg.setSourceEntity(1U);
    msg.setDestination(14587U);
    msg.setDestinationEntity(57U);
    msg.type = 136U;
    msg.error.assign("HAUFOUJFXRXWNO");

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
    msg.setTimeStamp(0.16566064183309337);
    msg.setSource(39953U);
    msg.setSourceEntity(22U);
    msg.setDestination(46371U);
    msg.setDestinationEntity(152U);
    msg.seq = 52657U;
    msg.sys_dst.assign("KBZJFSJNHMOFOYYHFMYXLYCVKXSLMENOFWRAEYGGBIWADGETGRAYWFXCPIELZKHHISDGCBDRLAAMCXPGVJJXJTIDILWYSGQPWHKNT");
    msg.flags = 227U;
    const signed char tmp_msg_0[] = {121, 15, -75, 50, -99, 7, 57, 4, 126, 86, 13, 25, 76, -10, 32, -45, -88, 45, -88, 113, -100, 51, -33, 82, -120, -47, 118, 71, -31, -22, 11, -27, -103, 17, -102, -14, 120, -77, -47, -86, -85, 77, 104, 29, 72, 41, -123, 31, -120, -127, 87, -31, 8, 25, 81, 49, 28, -44, 91, -15, 77, 73, -65, 9, -114, 10, 60, 37, 24, -87, -99, 98, 73, 24, -63, 80, -37, 117, 110, 109, -19, 99, 72, 60, -44, -8, 35, -16, -50, -7, -16, 85, -54, 117, -66, -89, 24, -68, -35, 66, 67, 26, -125, 73, 63, 38, -127, 27, -11, 118, 55, -15, 101, -99, -58, -47, 65, -1, -117, -116, -53, 19, -99, 42, -118, -26, 75, -111, -61, 90, -77, -96, -54, 122, 80, 36, 122, -74, 122, 107, -125, 57, 2, 31, -17, -104, -122, 8, -125, 58, 13, -54, 26, -124, -17, -62, -102, 119, -47, -24, -72, 43, 35, -92, -110, 10, -51, -78, -26, 36, 75, 105, 75, -57, 100, -71, -20, -105, -9, 70, 92, -68, 30, 42, -111, -3, -32, -8, 35, -20, 8, -26, 94, -52, -128, 126, 108, -23, -114, -89, -103, -7, -116, 61, 30, 68, 26, -66, -39, -17, -98, 119, 19, -25, -17, 84, 96, 6, 53, 105, 45, 2, 15, 98, -106, 46, 64, -42, 13, -46};
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
    msg.setTimeStamp(0.38826993674229815);
    msg.setSource(45870U);
    msg.setSourceEntity(105U);
    msg.setDestination(47398U);
    msg.setDestinationEntity(126U);
    msg.seq = 11422U;
    msg.sys_dst.assign("YDUVWKDPTCYXZKECQYVSEFGMJEAOQSRVKTNRYXJOOXFNPVUMSYHIKEFACHUOYFXLCZNALXZGGWPGDHQMRJEEUILJFCSKKZFTGVZAWIGEGTEDMEJLVUMZQYROZCPWMFGRYBADLQGCALDWHSVIMQTIRSBQKAFWQHXQZOVNHCTPLBNMCTPUYZWISBO");
    msg.flags = 47U;
    const signed char tmp_msg_0[] = {-11, 111, -48, 74, -40, 123, 31, 42, 112, 126, -108, 96, -83, -55, 50, -108, 75, 126, -36, -6, -32, -57, -83, -52, 34, 66, -91, -30, -91, -48, -52, -112, 54, 82, -17, 8, -25, -121, -28, -125, -31, -21, 6, -47, -122, -1, 14, -31, -120, -64, 75, 125, 73, 33, 15, -11, -3, -98, -115, 67, 99, -127, 68, -95, -102, 0, -124, -108, -20, 14, 37, 12, -94, -62, 103, -47, 33, -23, 93, -79, 68, -72, 100, 95, -98, 45, 78, -82, 104, 61, -95, -82, 96, -105, 3, 50, -63, 28, -73, -22, 9, 37, 87, -109, -63, -69, 85, 55, 7, 8, -112, -55, -126, 3, 68, -43, 27, -11, -81, -17, 103, -47, -103, 79, -111, 34, 103, -100, -31, 66, -55, 71, -116, -29, -59, 59, 40, 12, -42, -24, 76, 62, -60, 96, 94, -4, -98, -89, 48, 23, -117, 24, 65, 110, -85, -54, -108, 112, 110, -4, 9, -124, 55, 120, -78, 88, 97, -43, -14, 107, -94, 30, -108, -13, 119, -97, 105, -57, -71, -17, 33, 116};
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
    msg.setTimeStamp(0.0551600946704397);
    msg.setSource(11827U);
    msg.setSourceEntity(242U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(130U);
    msg.seq = 1013U;
    msg.sys_dst.assign("GBKJBEOPCAMNCXSQVIQGUGRIQKOOWIZSMEHNAUCNIAHXMMHPKAFUWELGCQYTQTEVGIXYVXYHURLHIFDTWFLUDSVDXBCIRAKBSLWVGACTOENPEKGYSJZVBBFZMSPHDUFDXWTMESOWGPHJFPO");
    msg.flags = 48U;
    const signed char tmp_msg_0[] = {46, -5, 27, -94, 27, -38, -5, 29, -117, -53, 97, -73, 27, -58, 28, 55, 93, -80, -73, -32, -74, 111, -53, 121, -32, 61, -84, -121, -6, 82, 59, -113, -99, 6, -45, -116, -73, 115, -74, 30, -128, -21, 56, -73, 46, -115, 107, 65, 125, 1, -123, 124, -9, 25, 108, -20, 92, 3, -43, -92, 82, 111, -102, 14, -119, -98, 40, 5, 92, -92, -50, 71, -61, 80, -109, 29, 5, 17, -8, 19, 23, 42, 6, -44, 39, 77, 91, 62, 37, -48, 86, -60, -63, -60, 56, 24, 105, 20, 18, -7, -60, 5, 80, 84, 122, -91, 32, -99, -12, -1, -92, -61, -83, -119, 94, 45, -78, 11, 40, 22, -23, -12, -22, -43, -86, 112, -86, -16, -76, 26, -74, -81, 47, 52, -19, 85, -103, 40, 34, 40, -34, -67, -30, -48, -23, -37, -4, -52, -80, -15, -45, -86, 15, -114, -6, -62, -50, -23, -43, 43, -118, 46, -10, -26, 40, 14, -65, 85, -32, -46, 5, 62, 28, -110, -1, -120, 107, -77, 114, -43, 82, 59, -3, 29, -39, 0, 122, -35, 28, 64, -104, -89, -48, 91, -81};
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
    msg.setTimeStamp(0.066394487524718);
    msg.setSource(21359U);
    msg.setSourceEntity(193U);
    msg.setDestination(13945U);
    msg.setDestinationEntity(86U);
    msg.sys_src.assign("OLWCISMEIBPDTWTQLAGLMIARKVLNECYPAAEJFPPKNOCXGLNRTFDNJNMTNMDJNUTIOBLAHHGUEBKIVIURGYQVFMISWJDQKVNQYDSTVNYMRJXEGZWXCXSOYEFVZGYSWZBUYZGHFUUHLCDXBEBQMPSHXXODFAMKVAORLJGAJSZWKMOKKFPXNPCFBVIJUBVSQVJICRKBUQRWZZJT");
    msg.sys_dst.assign("ILXDRHDYQZTTCLGHTAJXAKWNLZXBNOAYYODPMIZIIRYYMGSCKCDMPZHHDWCNSUTMJFNVOXBEKDSIGURKQTFONDXYWAKPUUBDOGLVILYBMLSTJKIWBFLOOCHZEHEGZJFYGXVAVXQJFLFBGPRJNKCSQYPNUVPWBRIMFFVFKAQUJDRNVWUVKCAGPTWEZRQXHEAOUSHIERMLSVYQUWIJ");
    msg.flags = 139U;
    const signed char tmp_msg_0[] = {98, 33, -127, -127, 114, 74, 64, -22, -43, -1, -109, -26, 103, 77, 122, 121, 62, 38, -3, -102, 126, -45, 46, -39, -62, 51, 47, 125, 34, -98, -120, 69, 37, -61, -41, -108, -115, 37, 38, -117, -23, -74, 75, 114, 123};
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
    msg.setTimeStamp(0.5668414815822922);
    msg.setSource(660U);
    msg.setSourceEntity(87U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(90U);
    msg.sys_src.assign("QDFMGNHBHQYBDEGDYSIKENWHBJZYTHSCJCCAFYOJDDICSREHWQFSOIPFVLVOLUOPGJFUGXWALNXNKTZILWHYYOZAWSZQACIADNZWMUUVCUQHGLFKXPBSNJIKSCTVSEHVAAVJBFBJ");
    msg.sys_dst.assign("NNPNEJDNYNHVAJWXRMCSLIKIWGVKMZQHOHSSLVVMXXYRLAEZDURDBXCNTIPEDWVZCOCRJWFQUPWUWQMTRECTFWFVEPFZPAQFCGWUTQDRCOOEXSOLGBFGTBBGBRTWDASZPYQUJYOXPYIKSIKZFOXUMLIHZA");
    msg.flags = 43U;
    const signed char tmp_msg_0[] = {101, 92, 25, -65, 31, 97, -31, -16, -56, -46, 80, -8, -27, 30, 65, 14, -104, -25, 102, -116, 30, 46, -76, -54, 69, -10, -72, -100, 21, -19, -39, -11, -57, 94, 113, -113, -18, -72, 8, -120, 125, 1, 27, 62, -27, -55, 100, 101, -75, -125, 88, 91, 115, -45, 55, 96, 58, -59, 2, 123, 91, -121, 92, 43, 112, 55, -50, 25, -63, 79, 102, -63, -90, 23, 7, -14, 114, 89, 52, 1, 37, -11, -46, 52, -19, -117, 104, -65, -8, 75, 92, 66, 27, 40, -26, -22, 14, 103, -84, 85, -66, 110, 46, 111, -16, -90, 85, 36, 66, 89, 102, 11, 51, 87, -105, 67, 18, -43, -86, 97, -77, 28, -53, -33, -17, 51, 81, 24, -83, 50, -21, 65, 124, -116, 108, 119, -64, -123, -69, -48, -126, 94, 20, -80, 23, 21, -14, 9, 93, 62, 12, -72, -33, 90, -118, 18, -54, -9, -106, -114, -118, -9, 65, -54, 108, 74, -69, -6, 110, 4, -104, -26, 55, -104, 34, -79, -46, 85, -22, -88, 10, -35, 1, -122, 88, -27, -113, 44, -113, -9, -66, -21, -96, 97, 98, -4, -107, -37, 40, 121, 79, 6, 44, 10, 121, -30, -51, 119, 84, -124, 119, 3, 3, 93, -60, -121, 11, -87, -4, -94, 26, -21, -110, -68, 14, -6, 65, -19, -71, 100, 35};
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
    msg.setTimeStamp(0.4224590112221087);
    msg.setSource(21020U);
    msg.setSourceEntity(120U);
    msg.setDestination(15598U);
    msg.setDestinationEntity(191U);
    msg.sys_src.assign("KLCDRGEAQVNPNOJTSXYTPTTPWWZFRUVFG");
    msg.sys_dst.assign("RRRZBMQXILHHVBYPJWZFXEACOADSKSQUBOKJFKCSYPRHVUCFTHGQBTFBANGVACRPGSMMMFEMMPZAIYFEFQKHOTOJDTJLVTXUZIXZBWEFCPYLYUVWLDOAVKGMQLWPWGNCWBIOERJTNVFTPCIXMHUXXRNQIXDDRYXDGJWQHK");
    msg.flags = 109U;
    const signed char tmp_msg_0[] = {102, 69, -14, 62, 12, 21, 116, -108, -74, -71, 93, 60, 53, -98, -7, -5, 30, 81, 25, -9, -82, 52, 57, 68, -6, 64, 121, 44, -73, -1, -54, -17, -18, 96, -58, 118, -68, -56, -16, 57, -85, -122, -1, -32, 71, -73, 76, -58, 94, 27, 3, -47, -12, -3, 41, -84, -27, -54, 34, 125, -46, -3, 84, 112, -118, -114, -90, -101};
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
    msg.setTimeStamp(0.03190767044577536);
    msg.setSource(26272U);
    msg.setSourceEntity(132U);
    msg.setDestination(2706U);
    msg.setDestinationEntity(192U);
    msg.seq = 36390U;
    msg.value = 17U;
    msg.error.assign("TZXBGNKAAKYBCMMUDPKSZPORXRAQHZDJVOKHCCZWLEHNKRYSBAICSWAIBVYBVJKFPSYXYISNSTWTQBHEKNZCPBZPMOUGKJQLRUROLANLIDNQJDAROLNXJEFCGMMWQVQGPBXDPXKXVCOCFEVMMFAMNSNYIIJPYDJEUHQGULIHLJLVRJFZZWEEZHBKOUXXFUOTEREFFMLJYRQGHBTWFVQTYOADPRGYUILDWTISQZ");

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
    msg.setTimeStamp(0.2714486511196079);
    msg.setSource(41762U);
    msg.setSourceEntity(245U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(193U);
    msg.seq = 12651U;
    msg.value = 76U;
    msg.error.assign("HDWKSFLWVNENBDKALRBTJRGNCQPDVZUHJQTKJVSWX");

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
    msg.setTimeStamp(0.397963447998405);
    msg.setSource(28602U);
    msg.setSourceEntity(10U);
    msg.setDestination(27550U);
    msg.setDestinationEntity(42U);
    msg.seq = 17303U;
    msg.value = 212U;
    msg.error.assign("ZPYCRLSEWGUVQHEBVHCPV");

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
    msg.setTimeStamp(0.9788619399683282);
    msg.setSource(55490U);
    msg.setSourceEntity(161U);
    msg.setDestination(43998U);
    msg.setDestinationEntity(198U);
    msg.seq = 13583U;
    msg.sys.assign("BGMUOXLDLHXVOUQAGYWJPPZQDGDPTNWKKYQOYBBDSOXGWYHPVMXCJELZJXMPUBTVRSLNWHHOQGNQAMAKHNIELKYKIEBGIMCXCCPKUJUJDNVODGVXGWMCTTRZKFRWAIEHBZIVDRASZZFVLYHANSODSDFFLNJJCARISVHFXLERGEBSRELEZKUS");
    msg.value = 0.3267795712725623;

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
    msg.setTimeStamp(0.14758656277641868);
    msg.setSource(59188U);
    msg.setSourceEntity(86U);
    msg.setDestination(841U);
    msg.setDestinationEntity(75U);
    msg.seq = 62792U;
    msg.sys.assign("TYBXFWOHVBOQHXIFTXNUDGURXIEPEJCJFMSORZFTSWKZKEJZGOJMEBBRUIWEZTPKLMIVNQATMPTDTQIXMKWILJQH");
    msg.value = 0.8977388746624759;

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
    msg.setTimeStamp(0.8508344963370036);
    msg.setSource(63473U);
    msg.setSourceEntity(188U);
    msg.setDestination(48732U);
    msg.setDestinationEntity(121U);
    msg.seq = 22334U;
    msg.sys.assign("GNCIWQGGNIXRWUYQWOEOGLVOGDHEVBJVUKBFUSAJUNKQXTZIKMWUZJZEUVMDJVMQVQKYHXMMPMUKXEAPWOLFCLPHYRCREFWZASYYBJUIRFBXIQATWODTTOYSOVIQDFSAXRNRRNHBQBHSGPEQILKYICRFNTBCGSFHOSCLNREAHKKZZXSSDLTORJMYPZDPLINGNDYBPKULATYZL");
    msg.value = 0.5210565602419563;

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
    msg.setTimeStamp(0.1973990015863445);
    msg.setSource(43605U);
    msg.setSourceEntity(182U);
    msg.setDestination(30546U);
    msg.setDestinationEntity(177U);
    msg.seq = 11008U;
    msg.sys_dst.assign("MQYWHJXAAACIOBLLZHESMPFXYMPUTWBSQSVTKEULRDICFGFPMBWGTEEKMIEUVKOFGZMJFSTJGNVUNHPEZCGLVRPOWFCINDCKBODBZSNRPUSRXGJZAMAOQZCW");
    msg.timeout = 0.6699900389954999;

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
    msg.setTimeStamp(0.42289454555878314);
    msg.setSource(41986U);
    msg.setSourceEntity(115U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(23U);
    msg.seq = 19047U;
    msg.sys_dst.assign("QOAMSHFIUMQEYTOHVFGYDTNXNPJGWJXSYXWWJNLREIJIKHWPSVVBUORFNPTCEBZTQQKWMRYQZRVLZHHIGUAAEVVDZOUTESXYQCXWNPIFZNCXDRYFRKJFAXLSVGDSSLBMHDLSJZBBEEFOTKTBEQRUYLOZLNOQATGPVKKQMBXGWCPTNUGDIGPZMKDIEFACHRKNIMXFEILJZTHALFCP");
    msg.timeout = 0.8627626481088471;

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
    msg.setTimeStamp(0.08713047497045734);
    msg.setSource(60116U);
    msg.setSourceEntity(221U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(247U);
    msg.seq = 27140U;
    msg.sys_dst.assign("AWELDKYOWUODMUUXDALWYRZJCPZGCREXORJTRGXMHNYAMLONCEJWWNJMYQJVUIXOYWVRRKZSSZZMABXGCHFLHOGVHKDOWKUKRKTCIQXEUXTSVVQLNRHODDPZTXVCHWFHFQSSVDEYFBPHBXABPWYNTDQIGANYICLTGBFZRQGBPTXFKAQFNIVVOLLYUCSVJPZUKPFJANBSGMGCRBFESILGITPQWIP");
    msg.timeout = 0.30019008739296504;

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
    msg.setTimeStamp(0.4989540500667038);
    msg.setSource(43850U);
    msg.setSourceEntity(114U);
    msg.setDestination(13183U);
    msg.setDestinationEntity(80U);
    msg.action = 39U;
    msg.longain = 0.12067960595328908;
    msg.latgain = 0.539468463624383;
    msg.bondthick = 3992183609U;
    msg.leadgain = 0.18592851235241847;
    msg.deconflgain = 0.6322945393676764;

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
    msg.setTimeStamp(0.5760019833282041);
    msg.setSource(776U);
    msg.setSourceEntity(185U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(129U);
    msg.action = 54U;
    msg.longain = 0.4806139317890218;
    msg.latgain = 0.5301918225794825;
    msg.bondthick = 2016646855U;
    msg.leadgain = 0.4408027890167199;
    msg.deconflgain = 0.6938269142243721;

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
    msg.setTimeStamp(0.49285600721532363);
    msg.setSource(35017U);
    msg.setSourceEntity(204U);
    msg.setDestination(9488U);
    msg.setDestinationEntity(101U);
    msg.action = 14U;
    msg.longain = 0.05074181156000879;
    msg.latgain = 0.12295846068168836;
    msg.bondthick = 2881817718U;
    msg.leadgain = 0.9580009495178063;
    msg.deconflgain = 0.8293850507520284;

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
    msg.setTimeStamp(0.4378836975561926);
    msg.setSource(23071U);
    msg.setSourceEntity(248U);
    msg.setDestination(64635U);
    msg.setDestinationEntity(64U);
    msg.err_mean = 0.27490908667608305;
    msg.dist_min_abs = 0.3547281555732591;
    msg.dist_min_mean = 0.7518726230090215;

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
    msg.setTimeStamp(0.5350448001589095);
    msg.setSource(2444U);
    msg.setSourceEntity(152U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(108U);
    msg.err_mean = 0.023893638866850253;
    msg.dist_min_abs = 0.8368849572176121;
    msg.dist_min_mean = 0.7299887950229712;

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
    msg.setTimeStamp(0.7367193358601324);
    msg.setSource(34836U);
    msg.setSourceEntity(240U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(168U);
    msg.err_mean = 0.7990955780302275;
    msg.dist_min_abs = 0.589461560280715;
    msg.dist_min_mean = 0.5239440021140589;

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
    msg.setTimeStamp(0.5636115639149137);
    msg.setSource(1463U);
    msg.setSourceEntity(183U);
    msg.setDestination(55375U);
    msg.setDestinationEntity(42U);
    msg.action = 251U;
    msg.lon_gain = 0.8795106218043265;
    msg.lat_gain = 0.13190679287132112;
    msg.bond_thick = 0.9751516098338963;
    msg.lead_gain = 0.3789559048280937;
    msg.deconfl_gain = 0.4698953394925667;
    msg.accel_switch_gain = 0.6957357752454568;
    msg.safe_dist = 0.18746493544706122;
    msg.deconflict_offset = 0.33514589736598643;
    msg.accel_safe_margin = 0.6793730961902619;
    msg.accel_lim_x = 0.17492198829913752;

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
    msg.setTimeStamp(0.023016778944689564);
    msg.setSource(50875U);
    msg.setSourceEntity(106U);
    msg.setDestination(33224U);
    msg.setDestinationEntity(137U);
    msg.action = 180U;
    msg.lon_gain = 0.14612991691336596;
    msg.lat_gain = 0.6053155011925101;
    msg.bond_thick = 0.6144115206156486;
    msg.lead_gain = 0.1868832219519707;
    msg.deconfl_gain = 0.22788924021821522;
    msg.accel_switch_gain = 0.9284335468794377;
    msg.safe_dist = 0.46024029331872096;
    msg.deconflict_offset = 0.4159481656096302;
    msg.accel_safe_margin = 0.20484800026876415;
    msg.accel_lim_x = 0.8189897843313305;

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
    msg.setTimeStamp(0.4175926514510442);
    msg.setSource(43314U);
    msg.setSourceEntity(161U);
    msg.setDestination(35421U);
    msg.setDestinationEntity(24U);
    msg.action = 184U;
    msg.lon_gain = 0.7962444428519857;
    msg.lat_gain = 0.42616610774909325;
    msg.bond_thick = 0.46905782126639384;
    msg.lead_gain = 0.290678747823221;
    msg.deconfl_gain = 0.9069494396420612;
    msg.accel_switch_gain = 0.23154251264125125;
    msg.safe_dist = 0.6086176660255177;
    msg.deconflict_offset = 0.6103050007386739;
    msg.accel_safe_margin = 0.614855293466945;
    msg.accel_lim_x = 0.49937203395724994;

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
    msg.setTimeStamp(0.949054024679345);
    msg.setSource(38526U);
    msg.setSourceEntity(164U);
    msg.setDestination(18991U);
    msg.setDestinationEntity(46U);
    msg.type = 218U;
    msg.op = 105U;
    msg.err_mean = 0.0771574480493239;
    msg.dist_min_abs = 0.022686070936647318;
    msg.dist_min_mean = 0.35046251564856246;
    msg.roll_rate_mean = 0.8563154618317064;
    msg.time = 0.4966171515501262;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.164603381634984;
    tmp_msg_0.lat_gain = 0.35695930369737994;
    tmp_msg_0.bond_thick = 0.007698841560692671;
    tmp_msg_0.lead_gain = 0.6261446694576327;
    tmp_msg_0.deconfl_gain = 0.333061549261227;
    tmp_msg_0.accel_switch_gain = 0.5459358551333714;
    tmp_msg_0.safe_dist = 0.4640991440875535;
    tmp_msg_0.deconflict_offset = 0.6172549350526955;
    tmp_msg_0.accel_safe_margin = 0.6409269145409033;
    tmp_msg_0.accel_lim_x = 0.15937243550606495;
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
    msg.setTimeStamp(0.7388458261244614);
    msg.setSource(30876U);
    msg.setSourceEntity(115U);
    msg.setDestination(24489U);
    msg.setDestinationEntity(152U);
    msg.type = 32U;
    msg.op = 40U;
    msg.err_mean = 0.3888092225246469;
    msg.dist_min_abs = 0.7184472468219435;
    msg.dist_min_mean = 0.8727090409632864;
    msg.roll_rate_mean = 0.8415339910301356;
    msg.time = 0.22476615831194235;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 66U;
    tmp_msg_0.lon_gain = 0.4607767528436556;
    tmp_msg_0.lat_gain = 0.4793268443065737;
    tmp_msg_0.bond_thick = 0.7791582913144534;
    tmp_msg_0.lead_gain = 0.43733636526831443;
    tmp_msg_0.deconfl_gain = 0.01570749910382896;
    tmp_msg_0.accel_switch_gain = 0.2334854636866145;
    tmp_msg_0.safe_dist = 0.7189958955238044;
    tmp_msg_0.deconflict_offset = 0.8602351070880306;
    tmp_msg_0.accel_safe_margin = 0.09193408547922066;
    tmp_msg_0.accel_lim_x = 0.5303193705810351;
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
    msg.setTimeStamp(0.5608322137812081);
    msg.setSource(4495U);
    msg.setSourceEntity(55U);
    msg.setDestination(27376U);
    msg.setDestinationEntity(242U);
    msg.type = 181U;
    msg.op = 191U;
    msg.err_mean = 0.8947079238535022;
    msg.dist_min_abs = 0.6173454860426805;
    msg.dist_min_mean = 0.2542918799796322;
    msg.roll_rate_mean = 0.43061315016125856;
    msg.time = 0.2866350045970423;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 104U;
    tmp_msg_0.lon_gain = 0.8797740471227706;
    tmp_msg_0.lat_gain = 0.9148317895483522;
    tmp_msg_0.bond_thick = 0.9146576397073273;
    tmp_msg_0.lead_gain = 0.1732823548181458;
    tmp_msg_0.deconfl_gain = 0.5076963349499775;
    tmp_msg_0.accel_switch_gain = 0.2456124917545789;
    tmp_msg_0.safe_dist = 0.9602631419473587;
    tmp_msg_0.deconflict_offset = 0.5289064056298982;
    tmp_msg_0.accel_safe_margin = 0.5477432012588077;
    tmp_msg_0.accel_lim_x = 0.9693749422160224;
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
    msg.setTimeStamp(0.2579880040117951);
    msg.setSource(57118U);
    msg.setSourceEntity(1U);
    msg.setDestination(18507U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.9424867921661066;
    msg.lon = 0.18258852741672194;
    msg.eta = 3766262150U;
    msg.duration = 27397U;

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
    msg.setTimeStamp(0.4153540168973726);
    msg.setSource(4606U);
    msg.setSourceEntity(57U);
    msg.setDestination(43379U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.06220959361941125;
    msg.lon = 0.42297382888017887;
    msg.eta = 70412429U;
    msg.duration = 61909U;

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
    msg.setTimeStamp(0.7715882708842661);
    msg.setSource(26612U);
    msg.setSourceEntity(34U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.3678567333508872;
    msg.lon = 0.6887624736338249;
    msg.eta = 435591088U;
    msg.duration = 46074U;

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
    msg.setTimeStamp(0.46802735302436493);
    msg.setSource(20994U);
    msg.setSourceEntity(201U);
    msg.setDestination(28197U);
    msg.setDestinationEntity(41U);
    msg.plan_id = 25862U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.048398450816697136;
    tmp_msg_0.lon = 0.31621085076947597;
    tmp_msg_0.eta = 4221214815U;
    tmp_msg_0.duration = 28003U;
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
    msg.setTimeStamp(0.7438223030364481);
    msg.setSource(53022U);
    msg.setSourceEntity(177U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(39U);
    msg.plan_id = 38762U;

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
    msg.setTimeStamp(0.9955639866665125);
    msg.setSource(439U);
    msg.setSourceEntity(16U);
    msg.setDestination(33402U);
    msg.setDestinationEntity(136U);
    msg.plan_id = 5961U;

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
    msg.setTimeStamp(0.9059219017720846);
    msg.setSource(4258U);
    msg.setSourceEntity(47U);
    msg.setDestination(51718U);
    msg.setDestinationEntity(56U);
    msg.type = 154U;
    msg.command = 77U;
    msg.settings.assign("AWHKAJNTQQEAWUDLRBIAIDUBFACKTJUMOVDOKOHBURHNLXSXGTKPWBZBIQUYMZZWSRTMIHLNBDYINCLIRXDECCPXUBDHXHTPSURFYJEEBNVVFREEPWZQZMJGLLFJJRQJWOXTJKGAOFYAZGEHGFNEQSMKKYDOCUAGVPPZIMXEMYSWZQJOVVKIMNCKDK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27951U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RLESWAMAUOXWTNCGXZFNOSQLHDHJNOEFDYPFZZMYMVJMSZXCRVFMEBVGQZEKCNEUYTPUIPZPKOLRJZIMRDRGSYQISAIDLJIVRKFUUDPXKQZYONQDRXTBWVDBBYQKAENFFITJBINHTKGTADRQWVVDALISDSBYKHPBPVMELGYQLNHIYTHFSAUCGEHJZOWQULSLGHMGHFUCEKBVIQJUJYXMOBCPVMTWOOJAXWUCK");

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
    msg.setTimeStamp(0.08592749570002756);
    msg.setSource(4238U);
    msg.setSourceEntity(16U);
    msg.setDestination(962U);
    msg.setDestinationEntity(13U);
    msg.type = 166U;
    msg.command = 137U;
    msg.settings.assign("ZMJKVMECHAQHECTUHNWQOYJIQXHRFSDUJOGRWUPXQBFWUOVNDNGSFZPWJBBWKSELFBQXNIZUOCBQZLXLFJWYLLKRMNTMWAKGHDOGFNIRAVSVRABVAKFXDTBHCIYKPWTJDXVKMYIONKEIGIIPXDPBZSABLJMEYSEJYEGWMAZQPJQLDRIGONMALTKLJSUKFTTVQYPHHTGBESSCWXRFEUMRIUZAQMVRLUGUCACYTCZYTOENFDOPZHDXDVVCPZCNOS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 44180U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5791089670071466;
    tmp_tmp_msg_0_0.lon = 0.27315804328059745;
    tmp_tmp_msg_0_0.eta = 2673385065U;
    tmp_tmp_msg_0_0.duration = 64737U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PFUHUYFXYS");

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
    msg.setTimeStamp(0.7173446366997067);
    msg.setSource(23958U);
    msg.setSourceEntity(44U);
    msg.setDestination(23001U);
    msg.setDestinationEntity(17U);
    msg.type = 112U;
    msg.command = 244U;
    msg.settings.assign("ZQUJNXSWMBJKTMFPQMCBCJGIACXZARBUOCQEUUAFGNXTDGIIKMCHUYYCVYRJQOTLWMVXDUIYEBKSLWFVNRTLHABNQHWFSXRFKOSSLWBNLTSPFTREPFXQOPHWG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7103U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.889129318829652;
    tmp_tmp_msg_0_0.lon = 0.3502531952129544;
    tmp_tmp_msg_0_0.eta = 2084341036U;
    tmp_tmp_msg_0_0.duration = 37013U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YVSUZGAGTOLUVWYTMCKIEUIHYYZPZOBNHUPZSXSNUHVHUYDBELMVKBNRYFFWLXSQDCWUSTXOGXNEMUVNAOHAZCANBBTPSWGWVPPJNCRAUWIQNFJRFCLJRRPGMYQVZLMIHQHVKEAPCRKZEYJDQHJIOT");

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
    msg.setTimeStamp(0.0377246797191233);
    msg.setSource(5813U);
    msg.setSourceEntity(67U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(47U);
    msg.state = 194U;
    msg.plan_id = 55542U;
    msg.wpt_id = 181U;
    msg.settings_chk = 30497U;

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
    msg.setTimeStamp(0.42010158264231945);
    msg.setSource(59150U);
    msg.setSourceEntity(209U);
    msg.setDestination(48865U);
    msg.setDestinationEntity(234U);
    msg.state = 186U;
    msg.plan_id = 64305U;
    msg.wpt_id = 171U;
    msg.settings_chk = 27152U;

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
    msg.setTimeStamp(0.3537628933179612);
    msg.setSource(48846U);
    msg.setSourceEntity(52U);
    msg.setDestination(29134U);
    msg.setDestinationEntity(56U);
    msg.state = 218U;
    msg.plan_id = 37277U;
    msg.wpt_id = 118U;
    msg.settings_chk = 60137U;

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
    msg.setTimeStamp(0.5558387475073677);
    msg.setSource(34466U);
    msg.setSourceEntity(117U);
    msg.setDestination(37950U);
    msg.setDestinationEntity(151U);
    msg.uid = 51U;
    msg.frag_number = 62U;
    msg.num_frags = 149U;
    const signed char tmp_msg_0[] = {11, -22, -96, -49, 117, -70, 108, -78, 117, 19, -7, 42, -16, 60, -53, -35, -46, -81, 29, 57, -5, -97, 24, 103, 12, -80, 48, -92, 57, -95, -41, 105, 12, -28, 46, 125, 16, 8, 90, 17, -74, -3, 67, 41, 122, -53, 91, -65, 78, -125, -116, 82, 125, -78, 83, 111, -28, 39, -29, 13, 79, -59, 93, -40, -66, -20, -118, -119, 104, -2, -25, -53, -93, -91, 36, -97, 12, 41, -19, 55, -28, -4, -117, 96, 59, -61, -46, -28, 108, 111, 113, -57, -47, 9, -74, -94, 41, -117, -64, 97, -15, -57, 33, -111, 82, 45, -91, 123, -48, -118, 89, -4, 52, 81, -123, -14, -6, 56, -9, -71, -24, -16};
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
    msg.setTimeStamp(0.7271894000643044);
    msg.setSource(40820U);
    msg.setSourceEntity(145U);
    msg.setDestination(35890U);
    msg.setDestinationEntity(180U);
    msg.uid = 138U;
    msg.frag_number = 86U;
    msg.num_frags = 153U;
    const signed char tmp_msg_0[] = {-122, -103, 86, 76, -55, -111, 48, 38, 78, 88, 10, 46, 48, 4, 58, 11, 119, 17, -102, 52, 33, 41, 21, -64, -126, -58, -123, -33, -51, -16, -110, -45, -96, 117, -96, -29, 49, -17, 58, 78, 7, 29, -70, 117, 78, 41, 80, -34, 15, -99, -14, 108, 103, 122, -57, 10, -99, -46, -105, 9, -31, -28, -98, 4, -57, 51, 79, 79, -73, -4, 67, -25, 118, 31, -51, 6, -95, -31, -87, -57, -23, -123, -74, 31, 63, 3, -26, 50, -85, -56, -22, 26, -54, 74, -22, -73, 53, -107, -74, 45, 21, -62, 0, -24, 21, -38, 25};
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
    msg.setTimeStamp(0.3422098213904393);
    msg.setSource(45757U);
    msg.setSourceEntity(60U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(169U);
    msg.uid = 29U;
    msg.frag_number = 54U;
    msg.num_frags = 125U;
    const signed char tmp_msg_0[] = {91, 9, -18, 110, 42, 57, -125, -105, -107, 97, -27, -12, 18, 65, 44, 57, 71, -46, 27, -100, -105, -125, -47, -85, -5, 112, 47, -124, -40, -105, 69};
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
    msg.setTimeStamp(0.902107091853551);
    msg.setSource(3178U);
    msg.setSourceEntity(100U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(232U);
    msg.content_type.assign("VSPDUFGPEFZEKX");
    const signed char tmp_msg_0[] = {104, -125, 14, -13, 42, -31, 113, -74, -43, 36, 5, -44, 30, 62, -19, 3, -97, 122, -1, 29, 98, 36, 95, -88, 11, -35, 103, -17, -60, -36, 114, 87, -5, -16, 87, 65, -93, -12, -62, 36, 105, -2, 47, 29, 59, -103, 104, -31, -70, -99, -108, 14, -95, -59, 11, -30, -49, -77, -61, 116, 77, -5, 50, 61, 115, 119, -49, -92, 32, 95, -22, 77, 95, 120, -28, -48, 117, 6, 78, 58, 76, 34, 3, 88, -10, 5, 20, -27, 87, -38, 123, -49, 94, 0, 73, 117, -43, 77, 17, -25, 63, -80, -10, -57, -121, 14, 74, 126, -35, 90, -64, 36, 110, -75};
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
    msg.setTimeStamp(0.5743348439146916);
    msg.setSource(29848U);
    msg.setSourceEntity(193U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(12U);
    msg.content_type.assign("IFKEATGFJNCYWPSIAFYUGPZPSQHDZGLUPTFCTAZECUJRCIJKHMVHXADNPQUVZBVUJGAZRHNUTLJUMYIIDVNWOSUWFBHYXOKCRAWYSLJKXVLWJUQQBAKGROGHYBDISVOKEJMATNQIXBLEOSLPXCHFASMPMDONJRYLVXDBPBBCJRRYOWEMQYE");
    const signed char tmp_msg_0[] = {-107, 124, -8, -92, 3, -111, 54, -26, 91, 110, -31, -12, 94, -61, 58, -88, -49, 14, -102, 107, -24, 90, 50, -73, 51, -126, 116, 118, -41, 37, -87, 34, 46, -19, -9, 53, -57, -49, -38, -41, 118, -37, 106, 122, -82, 61, -83, 83, -16, -21, -82, 124, 20, 90, -99, 64, 121, 113, -92, -71, 110, 112, -72, 27, -21, -103, 84, 117, 36, 64, 91, -85, 60, -57, -7, -106, -53, -43, 108, 56, -22, 50, -111, -44, 57, -103, 67, -51, -34, 69, 96, 116, 79, -115, -79, -23, 24, 123, 8};
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
    msg.setTimeStamp(0.4090616105770507);
    msg.setSource(63187U);
    msg.setSourceEntity(231U);
    msg.setDestination(7564U);
    msg.setDestinationEntity(23U);
    msg.content_type.assign("JGWJQWLDFMUUP");
    const signed char tmp_msg_0[] = {124, 58, -34, 125, 71, 60, 70, 106, -60, 38, 123, 92, 85, -6, 9, -122, -91, -34, -57, 77, -52, -25, 63, 44, -106, -17, -115, 123, 46, 112, -22, 33, 48};
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
    msg.setTimeStamp(0.7974587806546236);
    msg.setSource(49311U);
    msg.setSourceEntity(194U);
    msg.setDestination(5128U);
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
    msg.setTimeStamp(0.3687364980332972);
    msg.setSource(36232U);
    msg.setSourceEntity(16U);
    msg.setDestination(594U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.5874579418598774);
    msg.setSource(729U);
    msg.setSourceEntity(62U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.5663549555230359);
    msg.setSource(9684U);
    msg.setSourceEntity(208U);
    msg.setDestination(42779U);
    msg.setDestinationEntity(181U);
    msg.target = 35295U;
    msg.bearing = 0.720240413395116;
    msg.elevation = 0.3629659905666388;

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
    msg.setTimeStamp(0.8375785577130633);
    msg.setSource(38089U);
    msg.setSourceEntity(86U);
    msg.setDestination(41219U);
    msg.setDestinationEntity(238U);
    msg.target = 19593U;
    msg.bearing = 0.2059980322295648;
    msg.elevation = 0.6386759362444202;

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
    msg.setTimeStamp(0.0818362844426479);
    msg.setSource(47202U);
    msg.setSourceEntity(54U);
    msg.setDestination(3562U);
    msg.setDestinationEntity(129U);
    msg.target = 58480U;
    msg.bearing = 0.3522807781010039;
    msg.elevation = 0.0353966877242643;

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
    msg.setTimeStamp(0.5244255499059486);
    msg.setSource(18516U);
    msg.setSourceEntity(53U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(9U);
    msg.target = 64720U;
    msg.x = 0.22176141560055884;
    msg.y = 0.17721373547910857;
    msg.z = 0.5096840491055776;

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
    msg.setTimeStamp(0.41566523369784747);
    msg.setSource(58938U);
    msg.setSourceEntity(47U);
    msg.setDestination(37182U);
    msg.setDestinationEntity(71U);
    msg.target = 19682U;
    msg.x = 0.33351817095566527;
    msg.y = 0.8829423639758295;
    msg.z = 0.9850336167616973;

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
    msg.setTimeStamp(0.6255459095387386);
    msg.setSource(64340U);
    msg.setSourceEntity(87U);
    msg.setDestination(31904U);
    msg.setDestinationEntity(196U);
    msg.target = 18430U;
    msg.x = 0.8567871478929516;
    msg.y = 0.7559733646643926;
    msg.z = 0.4637149519645013;

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
    msg.setTimeStamp(0.08070699314123031);
    msg.setSource(29921U);
    msg.setSourceEntity(65U);
    msg.setDestination(17642U);
    msg.setDestinationEntity(13U);
    msg.target = 13733U;
    msg.lat = 0.04101479910485073;
    msg.lon = 0.6399529897869037;
    msg.z_units = 243U;
    msg.z = 0.4137690752590688;

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
    msg.setTimeStamp(0.885975841221737);
    msg.setSource(16942U);
    msg.setSourceEntity(70U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(146U);
    msg.target = 21521U;
    msg.lat = 0.9346981183222843;
    msg.lon = 0.7361436193251905;
    msg.z_units = 219U;
    msg.z = 0.24640417440752227;

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
    msg.setTimeStamp(0.755431789259633);
    msg.setSource(53346U);
    msg.setSourceEntity(89U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(202U);
    msg.target = 23538U;
    msg.lat = 0.5353219667714473;
    msg.lon = 0.4888049627851391;
    msg.z_units = 146U;
    msg.z = 0.0659490775057121;

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
    msg.setTimeStamp(0.22216672725455133);
    msg.setSource(30764U);
    msg.setSourceEntity(220U);
    msg.setDestination(58488U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("JXDOUUPKDQHDEPTYFHAKAWKHIWDCZHOMHZQDXXSMLQCMHNTOBCSBOEDQSGFLPEONFDZKNVYUFNQOPENGKMGTYKXXIDJBRARVSYESZBUGNWFFPPWNFYNQCXDVJOMPAZGCRJKRALIBQQWTVAJYWNLTZVGTLYCSKHRGTHCLVIUTAFEVMN");
    const signed char tmp_msg_0[] = {29, -97, 16, 50, 72, 49, 80, 116, -83, -18, 51, 66, 51, 20, 105, -79, -46, 49, -52, -34, 72, 79, 10, 10, 65, 60, -119, 107, 97, 38, -27, 42, -51, 126, -62, -85, 69, -21, 73, -6, 110, -94, -43, 71, -13, -115, -37, 115, 12, 17, 51, 50, -68, 5, -121, 97, -71, -111, 30, -51, 24, 65, -26, 15, 60, -32, -128, -93, -51, -51, 15, 56, 31, 41, 96, 9, -18, -33, -127, -73, 41, -90, -116, 22, 29, -123, 108, -66, 88, 2, -38, 115, 122, 94, -124, 84, -34, -120, 15, 111, 12, -113, -78, 13, 61, -63, 78, -25, 21, -79, -48, -61, 22, 121, 36, -17, -89, -102, 118, -71, -72, -17, 102, -2, 109, -21, -89, 110, 75, 39, -2, 59, 113, -6, 65, 72, -21, -53, 34};
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
    msg.setTimeStamp(0.765283529063828);
    msg.setSource(47635U);
    msg.setSourceEntity(7U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(37U);
    msg.locale.assign("UTIIBYNXUHDGEPVEBYWONMKZWYOAWUIIXXGNYXBYPQQZSBLUMGWHDLJZKCHLMXYSIREXNOCJALVFKQDJJXAGAFMCMWIRSJTGOEYUNCAMVSENUTJWKHMHVQTBBIOFTOCH");
    const signed char tmp_msg_0[] = {100, -109, -8, 51, -111, 63, -12, -36, 10, 86, -91, 16, -127, 45, -116, 63, 60, 106, -82, -75, -45, -81, 23, -89, 111, 85, -126, 37, -82, 8, -107, -69, 8, -25, -11, 71, 103, 102, 43, -49, 126, 60, 1, -101, 103, -82, 30, -49, -73, -113, 71, 94, 21, -9, -80, -43, 79, 108, -127, 17, -21, -83, -120, -97, -103, 115, 68, 55, -116, -2, -18, 53, -102, 89, -99, 108, 32, -76, 106, -19, -55, -6, 108, 107, -98, 31, -123, 38, -57, -56, -39, 8, 58, 75, 112, -7, -24, -85, 86, -69, -100, 68, 45, -82, -46, 121, -51, -92, 112, 97, -69, -68, -24, -103, -127, 111, 17, 124, 61, -50, 106, -123, -70, 54, 103, -119, 61, 106, 110, -117, -10, -57, 4, -63, -14, -112, 112, -26, 14, -65, 27, 20, 26, 115, 71, 43, 108, -27, 111};
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
    msg.setTimeStamp(0.6558511152189265);
    msg.setSource(16504U);
    msg.setSourceEntity(113U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(110U);
    msg.locale.assign("MKVTDYKPUGNCJEHEXETMMHXODLFAJDEWOXJWDTLZAABPDAOUWMMGVUNDLBKPGUBGHIGNZIACXNZOFMXECTRPCHERPZMYJQFMBPPVKZEVFHKBJRDZNQCLLEXLIK");
    const signed char tmp_msg_0[] = {-126, -57, 34, 116, 118, -11, 125, 112, -80, 23, 35, 100, -7, -10, 109, -8, 71, 35, -84, 25, -124, -128, 117, 115};
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
    msg.setTimeStamp(0.31552575418157325);
    msg.setSource(8660U);
    msg.setSourceEntity(233U);
    msg.setDestination(24944U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.4870586400429965);
    msg.setSource(34471U);
    msg.setSourceEntity(240U);
    msg.setDestination(12444U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.420873108889257);
    msg.setSource(39751U);
    msg.setSourceEntity(122U);
    msg.setDestination(29393U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.8667186783974732);
    msg.setSource(56807U);
    msg.setSourceEntity(59U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(136U);
    msg.camid = 19U;
    msg.x = 6554U;
    msg.y = 53625U;

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
    msg.setTimeStamp(0.3601717022202868);
    msg.setSource(50354U);
    msg.setSourceEntity(250U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(180U);
    msg.camid = 167U;
    msg.x = 54444U;
    msg.y = 31329U;

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
    msg.setTimeStamp(0.8035486006004232);
    msg.setSource(1178U);
    msg.setSourceEntity(8U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(49U);
    msg.camid = 224U;
    msg.x = 64817U;
    msg.y = 14541U;

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
    msg.setTimeStamp(0.49453026186341764);
    msg.setSource(58246U);
    msg.setSourceEntity(179U);
    msg.setDestination(47116U);
    msg.setDestinationEntity(154U);
    msg.camid = 7U;
    msg.x = 9287U;
    msg.y = 22658U;

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
    msg.setTimeStamp(0.2644466243953181);
    msg.setSource(42937U);
    msg.setSourceEntity(218U);
    msg.setDestination(52157U);
    msg.setDestinationEntity(78U);
    msg.camid = 153U;
    msg.x = 22530U;
    msg.y = 33694U;

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
    msg.setTimeStamp(0.10669266300643232);
    msg.setSource(52260U);
    msg.setSourceEntity(105U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(167U);
    msg.camid = 78U;
    msg.x = 64177U;
    msg.y = 2907U;

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
    msg.setTimeStamp(0.4631190660048796);
    msg.setSource(8168U);
    msg.setSourceEntity(49U);
    msg.setDestination(9336U);
    msg.setDestinationEntity(213U);
    msg.tracking = 174U;
    msg.lat = 0.9488978385665948;
    msg.lon = 0.14165069505566152;
    msg.x = 0.45311012786473337;
    msg.y = 0.11818774627300144;
    msg.z = 0.4726458241041058;

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
    msg.setTimeStamp(0.48538576283571355);
    msg.setSource(50693U);
    msg.setSourceEntity(168U);
    msg.setDestination(12547U);
    msg.setDestinationEntity(99U);
    msg.tracking = 149U;
    msg.lat = 0.03766733632211583;
    msg.lon = 0.49177712822722064;
    msg.x = 0.46782725578779094;
    msg.y = 0.6161216945953691;
    msg.z = 0.47972730911057104;

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
    msg.setTimeStamp(0.3368585269073814);
    msg.setSource(26521U);
    msg.setSourceEntity(89U);
    msg.setDestination(32703U);
    msg.setDestinationEntity(134U);
    msg.tracking = 34U;
    msg.lat = 0.25946269868597216;
    msg.lon = 0.31872175445375317;
    msg.x = 0.7323230163016279;
    msg.y = 0.8847562250847247;
    msg.z = 0.3167375661529833;

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
    msg.setTimeStamp(0.3351396062978148);
    msg.setSource(57994U);
    msg.setSourceEntity(97U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(76U);
    msg.target.assign("FRKZXYUHCWWZAAUETDDQYXHEOBBERAUAJMLPFYKNULQJCDPPEVYSTFXNFCUZJYNBGSGQUDGGYWYLDVJKJWERKRMLGGTOSVXQLRZROSGGIUWYQPTPVTDZIBHAEDKERNXXIALVUTWJSZWVEGMYRVFJZQPOIMBFKSAQMKTBCZOKNWLI");
    msg.lbearing = 0.30422485227343254;
    msg.lelevation = 0.3008658386300508;
    msg.bearing = 0.24792333520262178;
    msg.elevation = 0.4391718679853608;
    msg.phi = 0.9082246839122042;
    msg.theta = 0.630241681469926;
    msg.psi = 0.2126502273793539;
    msg.accuracy = 0.6061772753266643;

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
    msg.setTimeStamp(0.7233428566741473);
    msg.setSource(64394U);
    msg.setSourceEntity(205U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(205U);
    msg.target.assign("KUFRXKVSSYZGLBLEDROUGSCQQIXBZIMCLKUMKRFFYKGILXGMKWCPVFNEDZELEWNJDSZGCDRUQCCUHABTEHDWHYFLWTULXNWILDQUMKBLSTBEAYDPJWKNQTQVZMPMPAFTNTLVIYQOTCMCXPHXTCAZYFSROAJHMJYAVRTHAENOBVJZXSRVDUJOGPJJO");
    msg.lbearing = 0.5092501768022002;
    msg.lelevation = 0.05370547803762127;
    msg.bearing = 0.7836471421695462;
    msg.elevation = 0.5255905053918056;
    msg.phi = 0.9650868029490205;
    msg.theta = 0.47655343754602986;
    msg.psi = 0.9169445052453434;
    msg.accuracy = 0.10042272226181193;

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
    msg.setTimeStamp(0.6526378894269955);
    msg.setSource(24871U);
    msg.setSourceEntity(18U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(170U);
    msg.target.assign("VIPGDJFSPQEDBAHOPZVFFTFMRWJQLRSPFGYSYNEXLTUAQEFEPETUYDGQPEBWJWBDYUKYLJVHZJVZCLLSFIGQCXNVCDAISWRRGMNOXZDKZHBZMLIRUCHXFAKIPQUCHBAYSQDRMJSHNMXBLKUXGMJWJVPQGOZZEKIPHSOXRILUNZTODVGTLYWACKVKMSUHKWTXIRWDVCKEUJTLNBKETQFSOBNQCIEYDFHXA");
    msg.lbearing = 0.4699506655346274;
    msg.lelevation = 0.3208234180716213;
    msg.bearing = 0.678231944666375;
    msg.elevation = 0.05330874976109523;
    msg.phi = 0.25673325722551676;
    msg.theta = 0.40049057932241783;
    msg.psi = 0.6202258316204335;
    msg.accuracy = 0.42550159273366817;

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
    msg.setTimeStamp(0.7800767939995693);
    msg.setSource(28135U);
    msg.setSourceEntity(190U);
    msg.setDestination(49693U);
    msg.setDestinationEntity(12U);
    msg.target.assign("UHHHPBFGXHGOPVBEQCIMWRJBUIANTXTNXEFORUPQGVAYWFXLZOZNYSNNCZTLMGPDIODLHIQJAEMNCDSYEUWUUURQZLWPWMFRTLHZNCAJDSALKTUSKEVAIYSUVSHOOXYSHLZFBYMR");
    msg.x = 0.49617011420932633;
    msg.y = 0.9991500147009558;
    msg.z = 0.24959768626604784;
    msg.n = 0.140878157870875;
    msg.e = 0.8264391056989063;
    msg.d = 0.2758350087130351;
    msg.phi = 0.6193259067907757;
    msg.theta = 0.7641862213957207;
    msg.psi = 0.7629316685407105;
    msg.accuracy = 0.562402725320865;

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
    msg.setTimeStamp(0.10448898750377178);
    msg.setSource(63509U);
    msg.setSourceEntity(10U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(68U);
    msg.target.assign("CWSQZHMBBVQXJOADNRHVSLALBKOQBUNEDUFQQPZMHJKTRHZZBRXIURUJREYATWPWLWPYKGCRORHAKYQVODBDQEOBGENYKFOIJAFQKNACBVYVZMWGIVMMHFTDGSULZJKQXCGPALFEXWUTMYEANGFFJWYLICIJQIYZUESVABSDXRDTSCMKFNOMYEJUIOTKHNTIDLCGMVTXHX");
    msg.x = 0.1791940302397893;
    msg.y = 0.7029549691860171;
    msg.z = 0.6457985991908564;
    msg.n = 0.5114616934575404;
    msg.e = 0.6024625418349413;
    msg.d = 0.6226410955461991;
    msg.phi = 0.16593533698293672;
    msg.theta = 0.5075103189712333;
    msg.psi = 0.24728081124538515;
    msg.accuracy = 0.4568007208343251;

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
    msg.setTimeStamp(0.38323829490916883);
    msg.setSource(56435U);
    msg.setSourceEntity(21U);
    msg.setDestination(25661U);
    msg.setDestinationEntity(164U);
    msg.target.assign("URUDCOZYQLGMQKJLNNAOVWIQWBHUAIKMOGVWJCMCPJRRYTIPLDWRXINAOQXMHTWQZRGOJIBNPJSISHEUHCYDJFXXUBYTLZGGHKXJBKVTLRFDMIOBUVZEFXNGKHSVMXPRGWNGBXBHFOKDCCPFUIGOQPWEXHZTADAPLSYHYFNHD");
    msg.x = 0.825461288446476;
    msg.y = 0.7721451225959299;
    msg.z = 0.2681372448225303;
    msg.n = 0.48858788715329815;
    msg.e = 0.5315490457819766;
    msg.d = 0.2424434931357612;
    msg.phi = 0.8715797125548941;
    msg.theta = 0.7410118500712747;
    msg.psi = 0.21326116710557952;
    msg.accuracy = 0.5566315131590338;

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
    msg.setTimeStamp(0.4879778595568436);
    msg.setSource(58943U);
    msg.setSourceEntity(30U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(75U);
    msg.target.assign("JQSQWBKTWRMSZDMFBIRFNZDM");
    msg.lat = 0.6747377546000876;
    msg.lon = 0.814887477592288;
    msg.z_units = 244U;
    msg.z = 0.619604316933493;
    msg.accuracy = 0.27011100424088774;

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
    msg.setTimeStamp(0.9432047997190608);
    msg.setSource(28347U);
    msg.setSourceEntity(106U);
    msg.setDestination(46121U);
    msg.setDestinationEntity(1U);
    msg.target.assign("QRPIBVRSKIPTVPSCNPOREOZDEGVCOUZVTWXHBWCXPJYYHLMYWFVBYZSZQHCKQNXKAXYEZRGFENOVGODQLNXUBORMDRVRZXIBDTANCFLPKSNKLVZFJQWTOTYJESIWLLQDDJPGMIVSNGBCBPQFRJDXUBMK");
    msg.lat = 0.22926900457290478;
    msg.lon = 0.8768769760587819;
    msg.z_units = 57U;
    msg.z = 0.629841898197519;
    msg.accuracy = 0.9719146171604449;

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
    msg.setTimeStamp(0.02672568757077698);
    msg.setSource(63202U);
    msg.setSourceEntity(148U);
    msg.setDestination(40182U);
    msg.setDestinationEntity(254U);
    msg.target.assign("AQFJZXIDPHNNAGCKBACAONLLZGLYNHJZVLYOFPUXXVEJMYDCELEESDUPG");
    msg.lat = 0.9262424055966032;
    msg.lon = 0.05940197296790828;
    msg.z_units = 148U;
    msg.z = 0.13059051449290637;
    msg.accuracy = 0.07310328496084417;

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
    msg.setTimeStamp(0.6019560688262532);
    msg.setSource(309U);
    msg.setSourceEntity(2U);
    msg.setDestination(9022U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QXJTDVJZCZIWIPKSBCRUPKRCAKHJBIZNATLZROBGLXWPNIFIWFORFOFJZIDNJWNEORLERHHGYNZMKXVZPEKMJSTXUITUQGEWTMMBYORUKOECPMWUSMMPJXMAUTCCSGZHRFQYYBEHQVVINOHNSTTBBVLSARNGFLVSUWFVVMMOHARPGSSQUQPWVCYFKUZYGSWEJYXQXAYEVIEPYXKLGCHXDDADTCDLELDKKLAXOQYCFLTIAFUAHBGP");
    msg.lat = 0.5443496163424079;
    msg.lon = 0.564199126158927;
    msg.z = 0.42654446897422726;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.010555188623615153);
    msg.setSource(1730U);
    msg.setSourceEntity(4U);
    msg.setDestination(54319U);
    msg.setDestinationEntity(53U);
    msg.name.assign("JTLGPZRIDSAMFGLCISZOEMOIOWVPJIQDXTTKRQHVIEFGKESTUQKRLTFJNXMAHFDEWC");
    msg.lat = 0.9066255091195005;
    msg.lon = 0.8354559397944332;
    msg.z = 0.02596101635086867;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.9250211068303944);
    msg.setSource(5856U);
    msg.setSourceEntity(81U);
    msg.setDestination(20373U);
    msg.setDestinationEntity(39U);
    msg.name.assign("UEHATHBYDTLAJSHJWYQUMFDODQPQYEKHIBURBWMZMZQARUVLRGRPKSFUGULSMFZS");
    msg.lat = 0.8926496461593506;
    msg.lon = 0.9334987442500738;
    msg.z = 0.4847930823250918;
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
    msg.setTimeStamp(0.17789115721256388);
    msg.setSource(6316U);
    msg.setSourceEntity(3U);
    msg.setDestination(4082U);
    msg.setDestinationEntity(57U);
    msg.op = 196U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QVMOCWPAFPRMBXASVJQTTOHIGZRBTREDNMZHQRNQNYVQTULGGVJYMBAEGFMDJUYFTJDCJDFBLKXUALRNNZTQDSSMIXYFHKGKUUCYJGEMFXIPIOIMYSFLVQVBEETKDMNDHOKNKUDAWEZHRLZZVSCIWPPWWCSXCAUYSTBIGKNOHBCLUELMFAYNLLZWZVIUOSDOZAW");
    tmp_msg_0.lat = 0.22728755319144045;
    tmp_msg_0.lon = 0.5403677326185049;
    tmp_msg_0.z = 0.646247867077499;
    tmp_msg_0.z_units = 184U;
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
    msg.setTimeStamp(0.21948932367616492);
    msg.setSource(31390U);
    msg.setSourceEntity(194U);
    msg.setDestination(40513U);
    msg.setDestinationEntity(254U);
    msg.op = 140U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("METVVGQDIOJWANQZFMLILKEYQHALAPZIUUEAY");
    tmp_msg_0.lat = 0.285137288764414;
    tmp_msg_0.lon = 0.5564527333245101;
    tmp_msg_0.z = 0.44081147675651344;
    tmp_msg_0.z_units = 120U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.19342242525930775);
    msg.setSource(19078U);
    msg.setSourceEntity(136U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(76U);
    msg.op = 1U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RTJYPMDFTEOJIURYRNTXENMSQKJUXLSJGBLMPRGWKWCOBKAAFSZNLYVOGUQRFASYYONRKZBJSNLFKQIPPVKEIHWZUWZXANGFFLWFLCJUPWVQDHCXHRHLLGNAMOQUIHHTMMOYLYLNJZCAKBVIQKAJTYSOTTDXJURPRUVCCXJMNAEHXGHAWOOIDDGSFQQEGVZVDW");
    tmp_msg_0.lat = 0.8256574524166898;
    tmp_msg_0.lon = 0.4851801885741295;
    tmp_msg_0.z = 0.4874323099589709;
    tmp_msg_0.z_units = 100U;
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
    msg.setTimeStamp(0.9807074261353839);
    msg.setSource(4935U);
    msg.setSourceEntity(155U);
    msg.setDestination(39212U);
    msg.setDestinationEntity(244U);
    msg.value = 0.3502825823831601;
    msg.type = 115U;

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
    msg.setTimeStamp(0.21122438948021072);
    msg.setSource(59694U);
    msg.setSourceEntity(191U);
    msg.setDestination(10056U);
    msg.setDestinationEntity(180U);
    msg.value = 0.6187403780425524;
    msg.type = 106U;

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
    msg.setTimeStamp(0.19842532573821625);
    msg.setSource(17475U);
    msg.setSourceEntity(156U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(114U);
    msg.value = 0.4462617131565383;
    msg.type = 52U;

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
    msg.setTimeStamp(0.5258566905636739);
    msg.setSource(54367U);
    msg.setSourceEntity(252U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(219U);
    msg.value = 0.2885642463622823;

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
    msg.setTimeStamp(0.24378685849036097);
    msg.setSource(40344U);
    msg.setSourceEntity(109U);
    msg.setDestination(32760U);
    msg.setDestinationEntity(243U);
    msg.value = 0.1065487465067545;

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
    msg.setTimeStamp(0.8205134025044581);
    msg.setSource(2037U);
    msg.setSourceEntity(235U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8884601331831253;

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
    msg.setTimeStamp(0.18445248282012228);
    msg.setSource(35139U);
    msg.setSourceEntity(245U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(26U);
    msg.timestamp_last_service = 0.3510387820566233;
    msg.time_next_service = 0.8736831789778722;
    msg.time_motor_next_service = 0.47166315942734083;
    msg.time_idle_ground = 0.0629146276206567;
    msg.time_idle_air = 0.03514898653481291;
    msg.time_idle_water = 0.6722259861889911;
    msg.time_idle_underwater = 0.8683667807292625;
    msg.time_idle_unknown = 0.8883795023807572;
    msg.time_motor_ground = 0.2389315438424544;
    msg.time_motor_air = 0.10292417390811659;
    msg.time_motor_water = 0.7119299500195316;
    msg.time_motor_underwater = 0.9474017821665646;
    msg.time_motor_unknown = 0.9314589294818322;
    msg.rpm_min = 17144;
    msg.rpm_max = 25369;
    msg.depth_max = 0.26833297311210025;

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
    msg.setTimeStamp(0.30979228131394865);
    msg.setSource(27110U);
    msg.setSourceEntity(234U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(152U);
    msg.timestamp_last_service = 0.4887120496977768;
    msg.time_next_service = 0.7889559998089998;
    msg.time_motor_next_service = 0.4666919666881484;
    msg.time_idle_ground = 0.4915479690519886;
    msg.time_idle_air = 0.5709570276455874;
    msg.time_idle_water = 0.1169892824960046;
    msg.time_idle_underwater = 0.5723314523773734;
    msg.time_idle_unknown = 0.7596998632917553;
    msg.time_motor_ground = 0.9619543550767536;
    msg.time_motor_air = 0.7719956829958021;
    msg.time_motor_water = 0.5581108859411155;
    msg.time_motor_underwater = 0.30165952021303855;
    msg.time_motor_unknown = 0.7382586375868644;
    msg.rpm_min = 23227;
    msg.rpm_max = 8844;
    msg.depth_max = 0.5230039506696198;

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
    msg.setTimeStamp(0.12920515051223902);
    msg.setSource(60826U);
    msg.setSourceEntity(224U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(76U);
    msg.timestamp_last_service = 0.16412462613876055;
    msg.time_next_service = 0.4283152153866919;
    msg.time_motor_next_service = 0.8809098299980039;
    msg.time_idle_ground = 0.961896589758108;
    msg.time_idle_air = 0.1525216023133773;
    msg.time_idle_water = 0.22409201568378145;
    msg.time_idle_underwater = 0.9501267597844131;
    msg.time_idle_unknown = 0.700590312971076;
    msg.time_motor_ground = 0.045622817024118634;
    msg.time_motor_air = 0.9360015819465561;
    msg.time_motor_water = 0.6232492873183826;
    msg.time_motor_underwater = 0.8446971526353766;
    msg.time_motor_unknown = 0.40256165018460843;
    msg.rpm_min = 4895;
    msg.rpm_max = 20998;
    msg.depth_max = 0.04699508050720924;

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
    msg.setTimeStamp(0.6010874381445904);
    msg.setSource(6418U);
    msg.setSourceEntity(123U);
    msg.setDestination(43046U);
    msg.setDestinationEntity(62U);
    msg.severity = 118U;
    msg.text.assign("ATPQHVQVTUYWUEPIMBDGOICTKSDVNCBFLSJGPCDKYWEXBTKWYSIEUNPJEJQWQOJVNHKXJOCATWRBXUJMMIOQAAZMAPATFUZZVJVIHUEQPGCJQQOLROCMKMSGNPGNZCIBFAMRDEFRNLYLFSTSYLXGTDGXAELUEPRKWHFNXNYYZRJSKZSIPF");

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
    msg.setTimeStamp(0.370709488699863);
    msg.setSource(36171U);
    msg.setSourceEntity(215U);
    msg.setDestination(60894U);
    msg.setDestinationEntity(226U);
    msg.severity = 204U;
    msg.text.assign("KVNLPUELXLTHYIVIZBGZNMKMLYOWSTUUGPYDTCZXERAENYTOKNPNPKIDGSVK");

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
    msg.setTimeStamp(0.6717792212625545);
    msg.setSource(62284U);
    msg.setSourceEntity(210U);
    msg.setDestination(17130U);
    msg.setDestinationEntity(149U);
    msg.severity = 80U;
    msg.text.assign("ESCDDSNAQLFSWZFXYGDXKUALFWIKWYMHVETWDUUVVNJMIJVRWETYTAMMADLLYIODAMYNPJ");

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
    msg.setTimeStamp(0.5328424994959128);
    msg.setSource(40700U);
    msg.setSourceEntity(125U);
    msg.setDestination(36957U);
    msg.setDestinationEntity(44U);
    msg.channel = -84;
    msg.value = 1159773764;
    msg.gain = 165U;

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
    msg.setTimeStamp(0.2219698327774161);
    msg.setSource(47272U);
    msg.setSourceEntity(144U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(236U);
    msg.channel = 85;
    msg.value = -1359104906;
    msg.gain = 106U;

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
    msg.setTimeStamp(0.16718823091881763);
    msg.setSource(62837U);
    msg.setSourceEntity(130U);
    msg.setDestination(52821U);
    msg.setDestinationEntity(165U);
    msg.channel = 85;
    msg.value = -110731085;
    msg.gain = 70U;

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
    msg.setTimeStamp(0.5761882778019753);
    msg.setSource(2809U);
    msg.setSourceEntity(8U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(30U);
    msg.ch01 = 0.9034965110627466;
    msg.ch02 = 0.6999394034203389;
    msg.ch03 = 0.32880237372249455;
    msg.ch04 = 0.4303389133662371;
    msg.ch05 = 0.7761555493192938;
    msg.ch06 = 0.7480207468603896;
    msg.ch07 = 0.42005451446240427;
    msg.ch08 = 0.8318943281736553;
    msg.ch09 = 0.5346573087548979;
    msg.ch10 = 0.056102692607125304;
    msg.ch11 = 0.33794233150432307;
    msg.ch12 = 0.5995271266829006;
    msg.ch13 = 0.8286718662084843;
    msg.ch14 = 0.08148516273098483;
    msg.ch15 = 0.2005382615946022;
    msg.ch16 = 0.9331422321043208;

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
    msg.setTimeStamp(0.14883552444560955);
    msg.setSource(35851U);
    msg.setSourceEntity(117U);
    msg.setDestination(9475U);
    msg.setDestinationEntity(39U);
    msg.ch01 = 0.34600534601400545;
    msg.ch02 = 0.9818558208162073;
    msg.ch03 = 0.1088711682980531;
    msg.ch04 = 0.9788912870353332;
    msg.ch05 = 0.5060478654645354;
    msg.ch06 = 0.0987333132516397;
    msg.ch07 = 0.6176869435967267;
    msg.ch08 = 0.9904179219213345;
    msg.ch09 = 0.14275715924600552;
    msg.ch10 = 0.18226963809941443;
    msg.ch11 = 0.8870758346266963;
    msg.ch12 = 0.2233304230716554;
    msg.ch13 = 0.122170736164952;
    msg.ch14 = 0.5439039293158316;
    msg.ch15 = 0.5550539158606655;
    msg.ch16 = 0.25052096211058617;

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
    msg.setTimeStamp(0.1902117199393457);
    msg.setSource(2977U);
    msg.setSourceEntity(189U);
    msg.setDestination(35718U);
    msg.setDestinationEntity(77U);
    msg.ch01 = 0.276948895143849;
    msg.ch02 = 0.3897831328880985;
    msg.ch03 = 0.5407650277176708;
    msg.ch04 = 0.3941462198507292;
    msg.ch05 = 0.3244197995928838;
    msg.ch06 = 0.8511263192465673;
    msg.ch07 = 0.9524537775005565;
    msg.ch08 = 0.5118152745625644;
    msg.ch09 = 0.6792052829687792;
    msg.ch10 = 0.5493055440550079;
    msg.ch11 = 0.35673357807093486;
    msg.ch12 = 0.17520275228551774;
    msg.ch13 = 0.831507946471063;
    msg.ch14 = 0.8773695666634145;
    msg.ch15 = 0.5244783706572672;
    msg.ch16 = 0.022759311217167677;

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
    msg.setTimeStamp(0.1451833030384988);
    msg.setSource(12804U);
    msg.setSourceEntity(236U);
    msg.setDestination(25730U);
    msg.setDestinationEntity(103U);
    msg.op = 5U;
    msg.lat = 0.7130349690930952;
    msg.lon = 0.7978962131403169;
    msg.height = 0.45087914307092325;
    msg.depth = 0.029772597045955695;
    msg.alt = 0.6288923697455558;

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
    msg.setTimeStamp(0.42108543809052856);
    msg.setSource(28178U);
    msg.setSourceEntity(32U);
    msg.setDestination(41800U);
    msg.setDestinationEntity(1U);
    msg.op = 148U;
    msg.lat = 0.6443825072538871;
    msg.lon = 0.2669409195120952;
    msg.height = 0.8323882403439378;
    msg.depth = 0.9753454201283545;
    msg.alt = 0.5054420045099416;

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
    msg.setTimeStamp(0.509899283261627);
    msg.setSource(20303U);
    msg.setSourceEntity(89U);
    msg.setDestination(40150U);
    msg.setDestinationEntity(133U);
    msg.op = 143U;
    msg.lat = 0.9107068534658173;
    msg.lon = 0.2725597151752014;
    msg.height = 0.7305740919078577;
    msg.depth = 0.12306535495981086;
    msg.alt = 0.44546224685313573;

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
    msg.setTimeStamp(0.8177947227295199);
    msg.setSource(19572U);
    msg.setSourceEntity(51U);
    msg.setDestination(1923U);
    msg.setDestinationEntity(208U);
    msg.nbeams = 214U;
    msg.ncells = 104U;
    msg.coord_sys = 111U;

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
    msg.setTimeStamp(0.44254832416797074);
    msg.setSource(16281U);
    msg.setSourceEntity(203U);
    msg.setDestination(55224U);
    msg.setDestinationEntity(17U);
    msg.nbeams = 45U;
    msg.ncells = 174U;
    msg.coord_sys = 176U;

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
    msg.setTimeStamp(0.1132980215469005);
    msg.setSource(15454U);
    msg.setSourceEntity(236U);
    msg.setDestination(56685U);
    msg.setDestinationEntity(194U);
    msg.nbeams = 128U;
    msg.ncells = 128U;
    msg.coord_sys = 47U;

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
    msg.setTimeStamp(0.6062040149209085);
    msg.setSource(27235U);
    msg.setSourceEntity(158U);
    msg.setDestination(43377U);
    msg.setDestinationEntity(17U);
    msg.cell_position = 0.38044844039447734;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.39930150173308276;
    tmp_msg_0.amp = 0.8200887287676187;
    tmp_msg_0.cor = 77U;
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
    msg.setTimeStamp(0.1549696271726032);
    msg.setSource(10886U);
    msg.setSourceEntity(25U);
    msg.setDestination(26738U);
    msg.setDestinationEntity(231U);
    msg.cell_position = 0.08561355976658203;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8719547217131041;
    tmp_msg_0.amp = 0.5118422273609481;
    tmp_msg_0.cor = 95U;
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
    msg.setTimeStamp(0.05102972645310999);
    msg.setSource(51324U);
    msg.setSourceEntity(198U);
    msg.setDestination(551U);
    msg.setDestinationEntity(170U);
    msg.cell_position = 0.8886869289052128;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9190445282800188;
    tmp_msg_0.amp = 0.9699754227372959;
    tmp_msg_0.cor = 45U;
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
    msg.setTimeStamp(0.8407434035237197);
    msg.setSource(63323U);
    msg.setSourceEntity(66U);
    msg.setDestination(30858U);
    msg.setDestinationEntity(167U);
    msg.vel = 0.9502265235212171;
    msg.amp = 0.38290993607098567;
    msg.cor = 243U;

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
    msg.setTimeStamp(0.9118046803404593);
    msg.setSource(2521U);
    msg.setSourceEntity(22U);
    msg.setDestination(64142U);
    msg.setDestinationEntity(9U);
    msg.vel = 0.7105331314574431;
    msg.amp = 0.5218318636121516;
    msg.cor = 182U;

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
    msg.setTimeStamp(0.162133315166472);
    msg.setSource(55243U);
    msg.setSourceEntity(74U);
    msg.setDestination(23371U);
    msg.setDestinationEntity(93U);
    msg.vel = 0.6054938077328719;
    msg.amp = 0.8033160274728349;
    msg.cor = 40U;

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
    msg.setTimeStamp(0.6451726139115812);
    msg.setSource(4260U);
    msg.setSourceEntity(224U);
    msg.setDestination(47240U);
    msg.setDestinationEntity(135U);
    msg.name.assign("NNTRFJPTPLSKZIMOXWZQWWIEUAVQRHDVQUJHVIMDXGFFQMXNZKNGBXCNCVKSYWZHLLESRUBFXEQEGGPOCFFFDVDYSERZZGWCXUHRWAVVAMGTBATXVYDCJRUNBHEBTROBOJSNUQHRQWIRAWPGLTXFYDTOCHBOQICHVYUFUTLKLSZLAYRIW");
    msg.value = 25U;

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
    msg.setTimeStamp(0.8512653641396817);
    msg.setSource(48763U);
    msg.setSourceEntity(111U);
    msg.setDestination(5043U);
    msg.setDestinationEntity(145U);
    msg.name.assign("TQOSXFYVEYFYJFOUVKGDUORODRVAPZJXEPILZQWLKXFDOWATQZAFZUKONMPIHWPJXBDABITEWGRTPUFHXLSUSFRSVYWGBQAKDETMGUNWNLEXPZXJTMIOXCRILV");
    msg.value = 88U;

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
    msg.setTimeStamp(0.06654002202992915);
    msg.setSource(55936U);
    msg.setSourceEntity(124U);
    msg.setDestination(35627U);
    msg.setDestinationEntity(181U);
    msg.name.assign("HAHVWHRUTSSIFIJRBJNHPUUBLVRLWIVRUTVQXTNULLIZXDYXNPQTNOQNEIWBOFSYIPIZWMRQAESNOTJCODVOZJSPZEDGBUCEDRCAGKOYTBTMHMCNGWZNGMFFPHQSWEKDKSMBXLUEKGPQBJBZSAWGEGNCVCUHDFAXYYFBKQTJDLJGYMCWAXPKVAOESVQAYDFZJGXWKWMMELRCXJQYYKMHPOXOREULVNFJAAHLKSZUIHYFCG");
    msg.value = 126U;

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
    msg.setTimeStamp(0.7217529136247832);
    msg.setSource(612U);
    msg.setSourceEntity(154U);
    msg.setDestination(22775U);
    msg.setDestinationEntity(193U);
    msg.name.assign("FJRNAQCHDHQPDNZMPQBJOCGIKQENBQOMAVALRAKEHKMRKTUHZLIXVXVZVXQWIZJPTZMYMZPXOLJJTIQSDYKLJEZWOHTKIVUHOEBLTUZLQLPWFBBGFDG");

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
    msg.setTimeStamp(0.8428560505393176);
    msg.setSource(42199U);
    msg.setSourceEntity(98U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(105U);
    msg.name.assign("TMBZUGZPKVOPBBWDPHBPLHJNJQVUQYXACPHFATLTAMIKOBLYYNSECXPQTGCJUIILIHIQURXZXHJFUHADLGCJYRSFFGTASIUBQVWGVNFMLRVSZYBRXCFWAHXHKPBEMAWXRKNDGWHSOGEYCTXCWIQQURKBZGERJNNORNTDOALCSOAJXQFCPSETSOVTDUYHLLMNZVDWYEFRWDMQPNYVMBLEVXKFEMWECIKZQUJAMDRIFNVDOJIZKUEZPJMY");

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
    msg.setTimeStamp(0.8463515009885034);
    msg.setSource(25213U);
    msg.setSourceEntity(153U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(113U);
    msg.name.assign("ZCUTXEVMTMESMGCUXGLGBTIWLGBFRCWKSRIYYHAAJMDVGYRYOBSALPVACAKASPONDWGHHZDSXJFYRRCFPBWFERCTLKCNRTJWSJOHPEAVIHYBXOWWZLHEVDMODLJNHSNGMFMMIOTUKMNQQXBDWRVQDYXHXZIEJKQQKGYRKSMVJIX");

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
    msg.setTimeStamp(0.5655391425197928);
    msg.setSource(48435U);
    msg.setSourceEntity(128U);
    msg.setDestination(35393U);
    msg.setDestinationEntity(5U);
    msg.name.assign("LXHBYNLWGOXVSBVSKNYRGDRTXZMNBKCISPQBGFPVEZZHOHROWHVMHUWCWWBQCALCRTGBJGAMDOFIATKYKATISFRGZEIHMNVERSDMWMLCFJMGXFLJFTPABHWGPGXLVSPBTZKIDYESNGOCKNJYEPBUJDNQUMDSMOHNQZYCFQQYXDKFLZIVNTKRJCECKTKXAPN");
    msg.value = 3U;

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
    msg.setTimeStamp(0.84212568416741);
    msg.setSource(49667U);
    msg.setSourceEntity(203U);
    msg.setDestination(46963U);
    msg.setDestinationEntity(68U);
    msg.name.assign("LWMOZLGSCHYMEPAGVCAPHCDQTOTUHBSTEOPAKIDDCEWWRQSYXYSOWKUAUGVBAFFIHBLOZDMYJRICUTWBHGVFIFQOVXGYJYECCJWWXHTNRRBYMVACMFJUDAJMEADPXMLYNQOLRWGBJXRFDFKHPINDMHERKJWGVNEKHTKLQBLOBNPTQQXVPWQMEUXDOIFGKRYNPNEJOGYNZCVITLUSVKFZGNVBAIRSBHJEXZUPLZJSRQZ");
    msg.value = 236U;

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
    msg.setTimeStamp(0.7412256763498951);
    msg.setSource(5801U);
    msg.setSourceEntity(170U);
    msg.setDestination(58053U);
    msg.setDestinationEntity(169U);
    msg.name.assign("QBFUBGCRZOVKRCHEERYLFGEAQRBDKBQSTZAUDOFCLDDFWHPJWUWQVTWHTJBYFKLHTMXYIMFXOLTBILPZENJXUUSWERARPVMKGZGJYKINM");
    msg.value = 121U;

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
    msg.setTimeStamp(0.9206000175039759);
    msg.setSource(24473U);
    msg.setSourceEntity(166U);
    msg.setDestination(5686U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5452576181940019;

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
    msg.setTimeStamp(0.34835125313396664);
    msg.setSource(61218U);
    msg.setSourceEntity(201U);
    msg.setDestination(31232U);
    msg.setDestinationEntity(200U);
    msg.value = 0.4213844331019778;

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
    msg.setTimeStamp(0.37166241288646573);
    msg.setSource(11270U);
    msg.setSourceEntity(93U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(243U);
    msg.value = 0.8379469422551847;

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
    msg.setTimeStamp(0.6857029707946307);
    msg.setSource(12071U);
    msg.setSourceEntity(40U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7434779755836858;

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
    msg.setTimeStamp(0.8264019066553306);
    msg.setSource(58300U);
    msg.setSourceEntity(219U);
    msg.setDestination(37057U);
    msg.setDestinationEntity(220U);
    msg.value = 0.8094366966991869;

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
    msg.setTimeStamp(0.003645214289542009);
    msg.setSource(46735U);
    msg.setSourceEntity(173U);
    msg.setDestination(4002U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5115745178406971;

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
    msg.setTimeStamp(0.8862800763194615);
    msg.setSource(60965U);
    msg.setSourceEntity(254U);
    msg.setDestination(29037U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0671161865512313;

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
    msg.setTimeStamp(0.2961201729967834);
    msg.setSource(16894U);
    msg.setSourceEntity(99U);
    msg.setDestination(33273U);
    msg.setDestinationEntity(9U);
    msg.value = 0.4720519486186263;

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
    msg.setTimeStamp(0.350561978204857);
    msg.setSource(10507U);
    msg.setSourceEntity(196U);
    msg.setDestination(60423U);
    msg.setDestinationEntity(165U);
    msg.value = 0.005414824547568142;

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
    msg.setTimeStamp(0.8771836704901371);
    msg.setSource(51905U);
    msg.setSourceEntity(58U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(90U);
    msg.restriction = 190U;
    msg.reason.assign("BYRMZVAKGDMTTNDUITOMIFAMSGHUJFWBSFOXFGURQPBJUBVAPDFKGTSLRQZEPHIGIGBZINJ");

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
    msg.setTimeStamp(0.7493080982012962);
    msg.setSource(21263U);
    msg.setSourceEntity(125U);
    msg.setDestination(38888U);
    msg.setDestinationEntity(234U);
    msg.restriction = 162U;
    msg.reason.assign("OCSSZEFTAYLIGYBUCASXGXPHQLAJEIRNSOOEICVXQNXKCEOBNNLOQFVUGAIHHRWYTLHVBRVGJFMQHVDOQVDWNGL");

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
    msg.setTimeStamp(0.146804457751314);
    msg.setSource(33944U);
    msg.setSourceEntity(60U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(194U);
    msg.restriction = 129U;
    msg.reason.assign("FKJMSGYNPASBAZDMLKBMTIEPKZEUVHNHXCQWWOOGYBOWJAYOAYJTEQYEDIXNFXADY");

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
    msg.setTimeStamp(0.35525921688914164);
    msg.setSource(2403U);
    msg.setSourceEntity(133U);
    msg.setDestination(39475U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.8690300851695573;
    msg.lon = 0.9068822159491498;
    msg.z = 0.6220287251378195;
    msg.v_x = 0.4368353421814358;
    msg.v_y = 0.10354173473753192;
    msg.v_z = 0.6126099610709422;

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
    msg.setTimeStamp(0.7788075853837526);
    msg.setSource(47100U);
    msg.setSourceEntity(54U);
    msg.setDestination(46364U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.8391393374837229;
    msg.lon = 0.7979238665166951;
    msg.z = 0.8730335119331103;
    msg.v_x = 0.8309774734089407;
    msg.v_y = 0.33148798323500783;
    msg.v_z = 0.09144457855372967;

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
    msg.setTimeStamp(0.07899922351026667);
    msg.setSource(29883U);
    msg.setSourceEntity(24U);
    msg.setDestination(48750U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.3096688112265745;
    msg.lon = 0.9836293192861467;
    msg.z = 0.8859301109709047;
    msg.v_x = 0.7365156842539007;
    msg.v_y = 0.47055433590963003;
    msg.v_z = 0.5571658040687846;

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

  {
    IMC::VirtualTarget msg;
    msg.setTimeStamp(0.3309877300640579);
    msg.setSource(14109U);
    msg.setSourceEntity(4U);
    msg.setDestination(42673U);
    msg.setDestinationEntity(151U);
    IMC::ConsensusPacket tmp_msg_0;
    tmp_msg_0.lat = 0.9215988826104277;
    tmp_msg_0.lon = 0.885686446590276;
    tmp_msg_0.z = 0.9623380864702971;
    tmp_msg_0.v_x = 0.5690261124851826;
    tmp_msg_0.v_y = 0.14347570628336326;
    tmp_msg_0.v_z = 0.21219327348012174;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VirtualTarget #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VirtualTarget msg;
    msg.setTimeStamp(0.29932008011020506);
    msg.setSource(29327U);
    msg.setSourceEntity(122U);
    msg.setDestination(37477U);
    msg.setDestinationEntity(85U);
    IMC::ConsensusPacket tmp_msg_0;
    tmp_msg_0.lat = 0.18565526291226586;
    tmp_msg_0.lon = 0.120334440131729;
    tmp_msg_0.z = 0.766087084016085;
    tmp_msg_0.v_x = 0.08860511961306738;
    tmp_msg_0.v_y = 0.23417499476974157;
    tmp_msg_0.v_z = 0.6503304803899845;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VirtualTarget #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VirtualTarget msg;
    msg.setTimeStamp(0.7844747877619638);
    msg.setSource(58895U);
    msg.setSourceEntity(206U);
    msg.setDestination(9563U);
    msg.setDestinationEntity(196U);
    IMC::ConsensusPacket tmp_msg_0;
    tmp_msg_0.lat = 0.6962614581445055;
    tmp_msg_0.lon = 0.7139247956678986;
    tmp_msg_0.z = 0.1928684000078782;
    tmp_msg_0.v_x = 0.6190066064021621;
    tmp_msg_0.v_y = 0.4370726425394875;
    tmp_msg_0.v_z = 0.620410043365374;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VirtualTarget #2", msg == *msg_d);
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
