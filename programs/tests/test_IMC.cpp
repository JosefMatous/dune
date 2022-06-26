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
// IMC XML MD5: 67c0f72d81c2ccb3db5a1cc953056abc                            *
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
    msg.setTimeStamp(0.6817298917484943);
    msg.setSource(52397U);
    msg.setSourceEntity(109U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(63U);
    msg.state = 197U;
    msg.flags = 226U;
    msg.description.assign("PEYZTQPJPYAFQWDCZOQBVUETSTDYBVOCXALRRIFOEXNAWPWIYEBDEJNNCFTRMOZLLVAGCFTKVWMKMWAGENHLSDZAEWZNOPXQYSSKJIXDRJATVTFPJHOYMKOLGKROVUSWDSHERHUWBTKBFNXCASXZPUFPLMEBPTQWNYUGJARCXUYYGYJFIBGFMKFHRHJQCGAHSGIQXGLXMUIMZKZBCLDDNXVITZNIKNVUQPIHSIK");

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
    msg.setTimeStamp(0.04438993543337133);
    msg.setSource(50990U);
    msg.setSourceEntity(199U);
    msg.setDestination(44342U);
    msg.setDestinationEntity(11U);
    msg.state = 112U;
    msg.flags = 63U;
    msg.description.assign("CBLMXNQVWZRRPGAORBCYWXGQCD");

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
    msg.setTimeStamp(0.9705786824681738);
    msg.setSource(16230U);
    msg.setSourceEntity(67U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(215U);
    msg.state = 11U;
    msg.flags = 192U;
    msg.description.assign("XJONHOGWMTWNDBEPRFSWIKEURBNKFIZMKWUQILJDTLAGMZXYUPJETBHLTDSKTPWZLRBKGWSNVFQXANJDVUPPNCNJOFIASKNMRXCYQDWHAQRG");

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
    msg.setTimeStamp(0.09119239678933755);
    msg.setSource(58716U);
    msg.setSourceEntity(73U);
    msg.setDestination(2074U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.5822137970705854);
    msg.setSource(3685U);
    msg.setSourceEntity(239U);
    msg.setDestination(6687U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.3089777959119018);
    msg.setSource(30239U);
    msg.setSourceEntity(154U);
    msg.setDestination(14989U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.06780783637632393);
    msg.setSource(63127U);
    msg.setSourceEntity(59U);
    msg.setDestination(18407U);
    msg.setDestinationEntity(14U);
    msg.id = 15U;
    msg.label.assign("DYAJEZPQPFKAYRRQDESKHZWYUSSRLKTCDQNDKFPGWOIWWUFCYAFBXUXXMDVATGSOGVZPUBVLCAYZGPJGLT");
    msg.component.assign("ADNOBKALRTJHCNAYMCPCMWDCWYQTHRMSGCINGOJFRLJLHSWBEBOHVIGQZIFWUCQYPMYWZIDPDBMUKPOIWNJZEQFQZU");
    msg.act_time = 32058U;
    msg.deact_time = 57228U;

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
    msg.setTimeStamp(0.13141562601191348);
    msg.setSource(11697U);
    msg.setSourceEntity(176U);
    msg.setDestination(7967U);
    msg.setDestinationEntity(177U);
    msg.id = 220U;
    msg.label.assign("XFBEEXMLOUNBSASOTPXZIFQWDYVEYZFPYXYPTHYTOFDMAVIVGRJLZBFZCSERITNKDBPJQNZGNFSGUUTQBUHXLXONUJAIJOXYFQVBPARYEFQQADNEPRBSQITZFSRZMOOLOCKKJSTYWOADLZCAHHMJTCBYZSJCWAVWJXBTKINKDZRLGRIJCKTRXESWUEMUKGEFKVIJW");
    msg.component.assign("SYRKCMCEKLAHIXOGVNHTPTIFBYWDTSJQPZBPTFLDGWXUPEAXKQWJOXVYZQXSLGMKIVYUJHNDPGBECQRWMEJGPKOPRIDQJZFMNGFETJRSYZMMNFXKAYWGHUIIQBZDLNTDGRULOHLZLTDSHULUWVASOKWVYBHSCJPCVVTOFJHORHSQBWYPQVGWZUJJXXVNOTMCXFARDSZIKCBNRMYXNCOSEGBAWCIQURBKYAEFBLT");
    msg.act_time = 14347U;
    msg.deact_time = 4895U;

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
    msg.setTimeStamp(0.8368067285962648);
    msg.setSource(61344U);
    msg.setSourceEntity(218U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(106U);
    msg.id = 226U;
    msg.label.assign("MXUQZLQEXQLHTNYAFVPKCISJFNYMWRJKITFGGJVTFZQKMDBSRVNISSBERCVPXRGJJNRHZLXEWZOTNSNAJCVTDRHBUXRUCVYYHONFRPBQUWKTGCDXEHIYNTSVBXQICLBPNSKTBGCTHVUGJZJGHVPALUHDQATMOWYEIDQGDCKOZLIBMYXFISDYGZMFPKOLMJAEDPKJRAHKPWLOLHWSRXCEOQWGYEEMOUFWAUUWOWEZSABDZAO");
    msg.component.assign("EWOVHZRAJYGPGAQHZVRWXQNZOVGDMMXVCYMQCPHIUJJWSNOJLMGFLKCDALCOMPKQOTBQJPFRTLEYYSKDYELWMTNFKLAHBVZOCDSNTRRXKWUBTHRJHBFGJVAKUFECNSNLGXEOAQUIEXDOBCMPSWYGDXBAHI");
    msg.act_time = 9108U;
    msg.deact_time = 3472U;

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
    msg.setTimeStamp(0.5782754604251418);
    msg.setSource(44518U);
    msg.setSourceEntity(58U);
    msg.setDestination(43100U);
    msg.setDestinationEntity(227U);
    msg.id = 169U;

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
    msg.setTimeStamp(0.8004326879354295);
    msg.setSource(5863U);
    msg.setSourceEntity(198U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(58U);
    msg.id = 189U;

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
    msg.setTimeStamp(0.1660320117108901);
    msg.setSource(8472U);
    msg.setSourceEntity(200U);
    msg.setDestination(36137U);
    msg.setDestinationEntity(234U);
    msg.id = 214U;

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
    msg.setTimeStamp(0.7819916993851765);
    msg.setSource(25792U);
    msg.setSourceEntity(252U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(135U);
    msg.op = 236U;
    msg.list.assign("GMFPMSBPCJZPJGVPUTADAIIDTETSJVZNNFAYJMIWMQDKSFIFIYXUTLMELCCOEMBRVAODLDVULHHVDYBWXJWQNXNRVGYDDVPXKIWKCUNGAASKCBSHXYYRYLKJKBQXJWQZOXGBZDAJGOHEETZMISSHWRUOPXQMZKRCSEUUINZCCFGRYZFGFTZOFQIVBULJUYHES");

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
    msg.setTimeStamp(0.8965115944080196);
    msg.setSource(24505U);
    msg.setSourceEntity(150U);
    msg.setDestination(60987U);
    msg.setDestinationEntity(169U);
    msg.op = 121U;
    msg.list.assign("TSNIUHGSQVQRPFEXUDWFOZWPRGYMQKNELA");

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
    msg.setTimeStamp(0.5115244459095749);
    msg.setSource(24875U);
    msg.setSourceEntity(226U);
    msg.setDestination(17512U);
    msg.setDestinationEntity(224U);
    msg.op = 148U;
    msg.list.assign("SCNBOIFJXKAYZDKAIILZSCGPOXMJTPOFEKPQWEYFWLGVJFRRMQNSVIKRNODLMWSYQLGHCGLJRCADVGEYIMONGBUFTKNHFZUTGLCPVFRTXUTPRHMMEEPNRBPXCHRDYZCAWVDQWUJBWVSATPTNIDQMUJKPLDVBDEZDKUOZTOWQVOTKEYGRNNSCYAFHWQVHXLJAHSOBWMUXGBHQMAFEDOUIUEWJTPGKVZNZSXSCLMJZYLQEKIYQXHXBAIRZABX");

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
    msg.setTimeStamp(0.9838060521010757);
    msg.setSource(5004U);
    msg.setSourceEntity(243U);
    msg.setDestination(16303U);
    msg.setDestinationEntity(41U);
    msg.value = 164U;

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
    msg.setTimeStamp(0.4289529226293429);
    msg.setSource(44071U);
    msg.setSourceEntity(102U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(65U);
    msg.value = 225U;

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
    msg.setTimeStamp(0.6015251959744659);
    msg.setSource(10761U);
    msg.setSourceEntity(77U);
    msg.setDestination(62740U);
    msg.setDestinationEntity(179U);
    msg.value = 103U;

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
    msg.setTimeStamp(0.3947334633974525);
    msg.setSource(41086U);
    msg.setSourceEntity(106U);
    msg.setDestination(47883U);
    msg.setDestinationEntity(145U);
    msg.consumer.assign("KEZXSLDOVGTNHXVPCVXBLUAXZQVHDGHFLKMNJMFGHEQOVAQFPJMCJODFVTNDRSPYBUCULPRMCXFYVUHHVMUMYYCGDPPAOHUEXBQZIAFVAWOBIESNKSDINNGPBWPYWCWBTQJQOSWGXLWHGADQURZJWKTIOGBADQYJDCRJELKWOMPZYMLEODNYIZSZLBAONN");
    msg.message_id = 48739U;

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
    msg.setTimeStamp(0.03848212902935);
    msg.setSource(58409U);
    msg.setSourceEntity(94U);
    msg.setDestination(30332U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("MTAFYRRCJYIGGMBZEFFNGUKNURTSGHNNDTTYPXEYRMUQZSXHSGQOQXWEMPXLCUKHLSSZJWSAUKPQWKDPVNGXDLESBGWDUTRCLNDAOBZSPCOELZKUWXHFDHYQLIXJPZCSMEFXVPVQIUTVEVFMBYDARCUFQEHMWIAZXBNIJKITBEYSJYIZBAODHJPQAOOOHZACOGJXRIVWAVVBFHHQWKMCFZRPINCMVBROTLWCKKJBTVKMDLNRLGYY");
    msg.message_id = 63155U;

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
    msg.setTimeStamp(0.9282242563153965);
    msg.setSource(31863U);
    msg.setSourceEntity(17U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(145U);
    msg.consumer.assign("RZNLOSDGHPREDITMYLMOXTEIVWBJROHTCHPZMSOGRFZINMEFIQTAUSXANVJLDRHTZFIUYCKQNUZNHVCIBAWMWCOADDXUAQVYOSMHXVWYPFAWSBKVFSKYBONUZCJGOELOPTQMCSXPPXFJMHGBLPNQLIGDEEFKDOASRAEXBPAKICKWUCTRSIVKLGGXREJEJGZGUBDYJZFUTWBBBJHMHLWJQDYUYNXCQKVGFZEZIJTQMWTRYNUDSKQR");
    msg.message_id = 1920U;

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
    msg.setTimeStamp(0.1276613993634501);
    msg.setSource(37573U);
    msg.setSourceEntity(188U);
    msg.setDestination(4543U);
    msg.setDestinationEntity(201U);
    msg.type = 152U;

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
    msg.setTimeStamp(0.4601202713020325);
    msg.setSource(16252U);
    msg.setSourceEntity(252U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(234U);
    msg.type = 24U;

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
    msg.setTimeStamp(0.7332177967129326);
    msg.setSource(56362U);
    msg.setSourceEntity(129U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(13U);
    msg.type = 149U;

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
    msg.setTimeStamp(0.5004868873704805);
    msg.setSource(42012U);
    msg.setSourceEntity(211U);
    msg.setDestination(4203U);
    msg.setDestinationEntity(197U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.22970636016866308);
    msg.setSource(7980U);
    msg.setSourceEntity(7U);
    msg.setDestination(23429U);
    msg.setDestinationEntity(79U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.932931853775129);
    msg.setSource(59337U);
    msg.setSourceEntity(151U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(31U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.6343821668282927);
    msg.setSource(21311U);
    msg.setSourceEntity(45U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(11U);
    msg.total_steps = 54U;
    msg.step_number = 119U;
    msg.step.assign("COGVABPXMZVAUTPDV");
    msg.flags = 189U;

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
    msg.setTimeStamp(0.7174508153956474);
    msg.setSource(59354U);
    msg.setSourceEntity(39U);
    msg.setDestination(21611U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 167U;
    msg.step_number = 195U;
    msg.step.assign("UAUYHEZOHIVUJMECJUKALDSLRNMXBMQCFPHNNTIFUXSKOIYAXQBHECARVNFECNTPWFRGLWYR");
    msg.flags = 238U;

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
    msg.setTimeStamp(0.08154618058860441);
    msg.setSource(50604U);
    msg.setSourceEntity(240U);
    msg.setDestination(6852U);
    msg.setDestinationEntity(168U);
    msg.total_steps = 195U;
    msg.step_number = 30U;
    msg.step.assign("OAUHSZLQXVHHNIIAYACDCNZORWPLNBXPILUPVSFQPKGUAJTYXGEHRDKVJGWOYTBTUADZFZROUKWKDQSDSVFITJCOEOBUSNQM");
    msg.flags = 209U;

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
    msg.setTimeStamp(0.981581185897232);
    msg.setSource(35900U);
    msg.setSourceEntity(128U);
    msg.setDestination(47437U);
    msg.setDestinationEntity(148U);
    msg.state = 98U;
    msg.error.assign("YJBXHXCSMLOHGFDFWQOJGIFVUSSMGTKRHVSLOTIVCEXGZKLJNIAYAREBARJDRJSMTXQTENSDPAOBRBCGXMBWTJKQRVBAWOFBERLEFOPXGNVNNZUZEMMOWIGDHULNJIQWCFFOEPXSYILLYRTYZDGOHKRWFEDCEZPZUMWNAWBKWTVLBGAUQDHTFCOCTCAHI");

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
    msg.setTimeStamp(0.016997153806110554);
    msg.setSource(58964U);
    msg.setSourceEntity(140U);
    msg.setDestination(38654U);
    msg.setDestinationEntity(186U);
    msg.state = 103U;
    msg.error.assign("LUVSREBTRGDHZGWDOIDXQXQHICIBJE");

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
    msg.setTimeStamp(0.3578986729816759);
    msg.setSource(28951U);
    msg.setSourceEntity(130U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(247U);
    msg.state = 169U;
    msg.error.assign("ZFZLQAJSINEDYRMKXPGWTKGDMBGFCSIYFCBFKDSMKVCHLDYKBZQWXOPONGMSMGZDENTHVRNCVPUICQEWWUSXYMOACKU");

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
    msg.setTimeStamp(0.8815279833892279);
    msg.setSource(20278U);
    msg.setSourceEntity(170U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.8944075590735461);
    msg.setSource(36356U);
    msg.setSourceEntity(223U);
    msg.setDestination(28327U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.9039281072259839);
    msg.setSource(48133U);
    msg.setSourceEntity(247U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6702536259362837);
    msg.setSource(35646U);
    msg.setSourceEntity(125U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(58U);
    msg.op = 98U;
    msg.speed_min = 0.5160333519114667;
    msg.speed_max = 0.2150066827886854;
    msg.long_accel = 0.8497330052362614;
    msg.alt_max_msl = 0.6360359102730777;
    msg.dive_fraction_max = 0.3827849318605663;
    msg.climb_fraction_max = 0.03596780973492264;
    msg.bank_max = 0.10335736463802159;
    msg.p_max = 0.4007968513934518;
    msg.pitch_min = 0.8474764085805896;
    msg.pitch_max = 0.049714134303293744;
    msg.q_max = 0.44758299625991915;
    msg.g_min = 0.31401944906282997;
    msg.g_max = 0.7720740354260164;
    msg.g_lat_max = 0.4066546058189551;
    msg.rpm_min = 0.2380273803559657;
    msg.rpm_max = 0.6376750764442302;
    msg.rpm_rate_max = 0.5066790234498048;

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
    msg.setTimeStamp(0.09918331870633201);
    msg.setSource(27920U);
    msg.setSourceEntity(18U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(207U);
    msg.op = 48U;
    msg.speed_min = 0.00919365813177797;
    msg.speed_max = 0.9624369674665673;
    msg.long_accel = 0.7993077459406568;
    msg.alt_max_msl = 0.28139869877829393;
    msg.dive_fraction_max = 0.4341306753203805;
    msg.climb_fraction_max = 0.529774634996283;
    msg.bank_max = 0.09700395011426732;
    msg.p_max = 0.11217059892161285;
    msg.pitch_min = 0.45696762394698953;
    msg.pitch_max = 0.5634791845046585;
    msg.q_max = 0.6855781245168406;
    msg.g_min = 0.9093545732145317;
    msg.g_max = 0.1747230866653009;
    msg.g_lat_max = 0.03383429271354765;
    msg.rpm_min = 0.8910039616366194;
    msg.rpm_max = 0.18824630652403807;
    msg.rpm_rate_max = 0.3574273631564465;

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
    msg.setTimeStamp(0.09882417619476824);
    msg.setSource(64938U);
    msg.setSourceEntity(35U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(152U);
    msg.op = 230U;
    msg.speed_min = 0.7045684659500316;
    msg.speed_max = 0.25311599520104777;
    msg.long_accel = 0.379460943694766;
    msg.alt_max_msl = 0.915856368420258;
    msg.dive_fraction_max = 0.5838483897057973;
    msg.climb_fraction_max = 0.23623878759946781;
    msg.bank_max = 0.8436777601840761;
    msg.p_max = 0.8990174463454347;
    msg.pitch_min = 0.6848194030862129;
    msg.pitch_max = 0.7837285939471056;
    msg.q_max = 0.30926733714024146;
    msg.g_min = 0.5471777119098608;
    msg.g_max = 0.9046718788079073;
    msg.g_lat_max = 0.648741499512861;
    msg.rpm_min = 0.5271605468653813;
    msg.rpm_max = 0.3998719053579296;
    msg.rpm_rate_max = 0.014154740962362244;

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
    msg.setTimeStamp(0.9365354461686076);
    msg.setSource(5872U);
    msg.setSourceEntity(247U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.18971079828441129);
    msg.setSource(5812U);
    msg.setSourceEntity(132U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.2718509567604115);
    msg.setSource(2610U);
    msg.setSourceEntity(172U);
    msg.setDestination(24019U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.3842509037129864);
    msg.setSource(1168U);
    msg.setSourceEntity(144U);
    msg.setDestination(53072U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.9027531463161083;
    msg.lon = 0.6542967788509172;
    msg.height = 0.9649359314071172;
    msg.x = 0.061979214257452786;
    msg.y = 0.8616594430620981;
    msg.z = 0.2934577892736905;
    msg.phi = 0.7161731988810494;
    msg.theta = 0.25267286213276463;
    msg.psi = 0.8103773918553641;
    msg.u = 0.11531950373500932;
    msg.v = 0.8236004367754926;
    msg.w = 0.48655539824664606;
    msg.p = 0.20754046195742615;
    msg.q = 0.7922177734825461;
    msg.r = 0.07559266599295;
    msg.svx = 0.5315429958927838;
    msg.svy = 0.45047628628988445;
    msg.svz = 0.4027080495270289;

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
    msg.setTimeStamp(0.785869758171367);
    msg.setSource(10328U);
    msg.setSourceEntity(254U);
    msg.setDestination(22840U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.6953269357001195;
    msg.lon = 0.35319254259440536;
    msg.height = 0.20343009923309363;
    msg.x = 0.20762548565420613;
    msg.y = 0.7674128000460277;
    msg.z = 0.729662544179696;
    msg.phi = 0.43241916790533397;
    msg.theta = 0.6945563163602724;
    msg.psi = 0.5240694013787967;
    msg.u = 0.3817592757928263;
    msg.v = 0.8598487487925972;
    msg.w = 0.2577278926662714;
    msg.p = 0.3275458300625045;
    msg.q = 0.015255859976377684;
    msg.r = 0.6795495823043304;
    msg.svx = 0.4646682427760491;
    msg.svy = 0.21995441008390582;
    msg.svz = 0.8811599074308827;

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
    msg.setTimeStamp(0.9517323890587267);
    msg.setSource(53753U);
    msg.setSourceEntity(133U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.13345121188949893;
    msg.lon = 0.8434943562422434;
    msg.height = 0.08021689428457801;
    msg.x = 0.669965653594569;
    msg.y = 0.656157256629158;
    msg.z = 0.6711465128047102;
    msg.phi = 0.9690315355437366;
    msg.theta = 0.28602811574650555;
    msg.psi = 0.5298902164232492;
    msg.u = 0.4224504884358067;
    msg.v = 0.30795415845269536;
    msg.w = 0.16908321691862604;
    msg.p = 0.5443550228402556;
    msg.q = 0.10663566292125903;
    msg.r = 0.7189950388561736;
    msg.svx = 0.6038925217403276;
    msg.svy = 0.42317559850550446;
    msg.svz = 0.11527541509064565;

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
    msg.setTimeStamp(0.26315802856080994);
    msg.setSource(57498U);
    msg.setSourceEntity(69U);
    msg.setDestination(39760U);
    msg.setDestinationEntity(147U);
    msg.op = 61U;
    msg.entities.assign("BRAKJLYFMDMSSCFCINQRTPYAKOXVIMSZHQZHYGMHTOTHALRJEBPTWPBNDTAMLZDVGVIUXTPSRXLLVGOZEQJLRZGKRSJFOYHIUAXWDBLMSEJEVUOAUEBCJNZUVSKWIGCGZFXVCTWUDTWVTWOQBVMWVIHUEQIYUAYNBNPPXNZLKAIDCYCYBPOGEFHWKPCNWKNQKFEKRGLYGCTXUHXFABIXQMFNIDRKZJNZDYWBAQCPEOMSPJFESDQHQRJJFOXS");

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
    msg.setTimeStamp(0.1741674568779651);
    msg.setSource(37320U);
    msg.setSourceEntity(86U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(92U);
    msg.op = 20U;
    msg.entities.assign("OXBKKHBITDHCJQRFLCRPNAPOUVHETSXPNIAECQKUYZRFTCBBMDDEKHTHIVVLDQMMXBFOMDIMZZUFGARUMQVJSDRXGNOVQSFADANMGWOENYPPVNFKABRDLUSIJOYSSCNQTXJPWUNIYYZLBKXTFBSWFCIJGSUNESCWZRVKQHOQERHHGZGJRHJKOPZEXYGOTDLFMPLLDKUWQPBCXSJ");

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
    msg.setTimeStamp(0.7408369296231566);
    msg.setSource(22744U);
    msg.setSourceEntity(91U);
    msg.setDestination(34096U);
    msg.setDestinationEntity(234U);
    msg.op = 54U;
    msg.entities.assign("RHJBXHNUWFZAZQBTWNNRMYGQZQSETYOVULKWKQPFUWKQRVOTOZPIPRJAIPESMHWFPNYBYLKTI");

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
    msg.setTimeStamp(0.7161931279495194);
    msg.setSource(63467U);
    msg.setSourceEntity(144U);
    msg.setDestination(20805U);
    msg.setDestinationEntity(244U);
    msg.type = 187U;
    msg.speed = 12467U;
    const signed char tmp_msg_0[] = {68, 10, 84, -99, 120, -53, -105, -85, -28, -36, -114, -56, -57, 85, -34, -47, 110};
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
    msg.setTimeStamp(0.7987636990447282);
    msg.setSource(179U);
    msg.setSourceEntity(154U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(232U);
    msg.type = 219U;
    msg.speed = 49532U;
    const signed char tmp_msg_0[] = {-60, 125, 89, 91, 8, 111, -99, -65, 64, 74, 54, -98, -40, -25, -77, 88, -119};
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
    msg.setTimeStamp(0.7630431058741188);
    msg.setSource(17849U);
    msg.setSourceEntity(144U);
    msg.setDestination(1492U);
    msg.setDestinationEntity(96U);
    msg.type = 212U;
    msg.speed = 955U;
    const signed char tmp_msg_0[] = {-108, -71, -6, -106, 21, -98, -120, -22, -22, 104, 95, -16, 84, -95, 15, -45, -94, 116, -91, -45, -114, 26, -98, 34, 15, 110, -91, -30, 92, -112, -55, 24, 4, 69, -89, 83, -96, 92, -26, 72, 56, 64, 90, -64, -94, 27, -84, 40, -66, -63, 34, -79, 78, 52, 4, 47, 46, 32, 70, -30, 92, -57, 0, 82, 29, 3, 14, -57, -48, 43, -49, 93, 120, 93, -96, 5, -76, 99, -64, -23, -46, 60, 125, 79, 119, -112, 22, -3, 24, 42, 4, 123, 87, 89, 37, -79, -33, 12, 64, 114, 66, 125, 10, -71, -42, 43, 56, 78, -114, -34, 50, -84, -5, 36, 46, -60, 119, -55, -7, 57, 5, -10, -63, 119, 33, -22, 105, -121, 20, 118, 47, -79, -66, -105, -90, 105, -4, 100, -6, -105, -51, 112, -80, -75, 91, -41, -23, -43, -114, -99, -39, 20, 29, 92, -116, -116, 12, -80, 86, 88, -68, 15, 4, 30, 114, -46, 4, -83, 116, 113, -34, -70, -50, 85, 98, 26, -106, -91, 98, 28, -50, 11, -59, 72, -41, 124, 55, 104, 121, 103, 99, -61, -46, 80, -40, -30, -13, 26, 42, 98, -97, 87, -35, -34, -127, 81, -93, 104, 50, -67, -25, 54, -110, -79, -29, -112, 25, -78, -67, -58, -43, 6, 113, -63, 37, -24, 96, 42, -97, -107, -59, 122, -93, -33, 26, -37, -72, 108, -50, 70, -22, -93, 64, -67, 79, 41, 103, 123, -42, 117, 52, 10, -24};
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
    msg.setTimeStamp(0.6816896685089491);
    msg.setSource(37937U);
    msg.setSourceEntity(59U);
    msg.setDestination(41699U);
    msg.setDestinationEntity(158U);
    msg.op = 227U;
    msg.tas2acc_pgain = 0.7494412028307796;
    msg.bank2p_pgain = 0.8202650686932859;

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
    msg.setTimeStamp(0.8965472027536485);
    msg.setSource(33519U);
    msg.setSourceEntity(183U);
    msg.setDestination(55783U);
    msg.setDestinationEntity(74U);
    msg.op = 211U;
    msg.tas2acc_pgain = 0.04654600835113343;
    msg.bank2p_pgain = 0.90763032006507;

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
    msg.setTimeStamp(0.14792259015839915);
    msg.setSource(8433U);
    msg.setSourceEntity(139U);
    msg.setDestination(52612U);
    msg.setDestinationEntity(38U);
    msg.op = 175U;
    msg.tas2acc_pgain = 0.49857208384381557;
    msg.bank2p_pgain = 0.8161146317739775;

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
    msg.setTimeStamp(0.3562513982071055);
    msg.setSource(12057U);
    msg.setSourceEntity(30U);
    msg.setDestination(44565U);
    msg.setDestinationEntity(206U);
    msg.available = 3838504725U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.5072121368781154);
    msg.setSource(9890U);
    msg.setSourceEntity(82U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(18U);
    msg.available = 1429155069U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.9778411961683778);
    msg.setSource(28158U);
    msg.setSourceEntity(206U);
    msg.setDestination(4377U);
    msg.setDestinationEntity(20U);
    msg.available = 94796218U;
    msg.value = 213U;

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
    msg.setTimeStamp(0.8092398837173965);
    msg.setSource(38446U);
    msg.setSourceEntity(210U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(60U);
    msg.op = 194U;
    msg.snapshot.assign("PYQRRDOHVXHPWSJMUIEPAFSFBPHZLXJFOZHNQMQDQDMLFOXILTLYPILVOHQLYNTLODSBAGGNTNJSZQVPWDHAOWWYOBCTBXBGNMNYACGIEUXZNIACOKQAGBJTJTUWZRYKZKGPMVIVGWWOUELHFDQEBJBSKDBCSGTMPPXJRRKRVDXMBEMMSCTSASUZNAUU");
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.9260769532063731);
    msg.setSource(27169U);
    msg.setSourceEntity(130U);
    msg.setDestination(48339U);
    msg.setDestinationEntity(43U);
    msg.op = 42U;
    msg.snapshot.assign("GACDJIZTUJWKGQWDLUEVTORVODCIKSLANNHPCWPNCKFPTXCPGOUUXDNZINZUMXRVBAYEHRUJJTWGAUFSDQQFVBHBNIGJYAYLERMHQWMPEITBEBGWJXWSXVNELGRSNJQRYTZKCHMRRNTVGLBOFVCDVFZMSYVHHXXAFXGRLQYBTHQQCKAMKRPALYLZSBTCYFKQWEIYCZXZHZHTJDLDIOZADMFUUOPKQSVKFPS");
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("ZQYISGCTZMDGHVUTWYDTWUQKPQHHIKZYTQFAZTYGWLEVLLMQYIMWMOYIPVAABJUXOGWYLNGKUNLMMUEJNUEROKVBFKDXKHKANEXSASCCIXLCEZZZJPSFHBMDRQDCJPBFVMNRTNCVGUXKBBEWGBKLXJXUQLWFCPMHGDTVFJRXBHGHOYDR");
    tmp_msg_0.report_time = 0.04558864796329343;
    tmp_msg_0.medium = 201U;
    tmp_msg_0.lat = 0.5184234398105578;
    tmp_msg_0.lon = 0.47523430879336925;
    tmp_msg_0.depth = 0.6535973449065247;
    tmp_msg_0.alt = 0.39214167193960736;
    tmp_msg_0.sog = 0.6458807647045616;
    tmp_msg_0.cog = 0.6414960238756927;
    IMC::RemoteActionsRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 189U;
    tmp_tmp_msg_0_0.actions.assign("EINMWKUIKAJSLBOMNWEITHRTPXNWXBFPOZCUFXZHSTQNJSCAUIVEFCNHRQIVGJOOTRMZMHJGJSRZLVDTHXKQXBELJNXYRBDYDGDJTUYPOEMNDXVGSPGXEONRAYQPXNKLKZVGUURFUFKYBGDIWOIEVJQSYLVBAAZMTCUBFHOAOGDKZARZZWOANBBHFUKPIVDYJBRQYWCCHQQMPK");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.750207038578823);
    msg.setSource(44234U);
    msg.setSourceEntity(128U);
    msg.setDestination(12375U);
    msg.setDestinationEntity(200U);
    msg.op = 34U;
    msg.snapshot.assign("WOWOCGIJEI");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.47708415284077177);
    msg.setSource(62041U);
    msg.setSourceEntity(233U);
    msg.setDestination(17548U);
    msg.setDestinationEntity(162U);
    msg.op = 106U;
    msg.name.assign("WKUCGEBDEPBOASFFUOFDEAAVDAISLMRYFCPTZYVMGWRZFMHIQCIVIBPRVBKCPGYAUQXGZQSBJYXMDNFXKBXIBXVJAIOYSQREIJLXYDTXTQSKUPZIPZCLTCM");

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
    msg.setTimeStamp(0.44803837796277346);
    msg.setSource(27674U);
    msg.setSourceEntity(92U);
    msg.setDestination(35963U);
    msg.setDestinationEntity(194U);
    msg.op = 197U;
    msg.name.assign("VNPILMEPWBJPTMANSVPDZDMLQVARGESCWBVRVRZWSHOXAKURZYWQDVHUFKRAQHFFOJNOHGTTCCBBKXLTAAGZRFRXOHYEIIXODZUDHLXSKQJVNE");

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
    msg.setTimeStamp(0.8208432754174209);
    msg.setSource(4369U);
    msg.setSourceEntity(108U);
    msg.setDestination(55086U);
    msg.setDestinationEntity(135U);
    msg.op = 50U;
    msg.name.assign("VITXGPMSRGTGQHUQGJYPPEVEFQCJYCPFWMTHSJLBLAOTKOYEHUIBZAZMUVXRKIPGSDOYDULBJOFPXZMQYYKFVYZCZMACPHKNGAKRSZXNOWHMTMNDBAGELXQSOSBYIJFATUCRHXCRARVNNNZPDEEUDCFKTSCNXLWJHDGCVILWFNNLWOOIMQYZLJHJFEGADHBUXQSOQNIEP");

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
    msg.setTimeStamp(0.7642314110739066);
    msg.setSource(8705U);
    msg.setSourceEntity(52U);
    msg.setDestination(60956U);
    msg.setDestinationEntity(117U);
    msg.type = 77U;
    msg.htime = 0.4336943433473568;
    msg.context.assign("XWFPHYXIRBOJBQIASDGXHDOJOLSERKQVGCNEAUVKBLDERKSPKVVMOWMOYSTIAQKFTTONGDUYLBNLXWMCYGTZWMCKGTJAIIBSFIGBTDJAZYRRQJTDCRXYKSNIQO");
    msg.text.assign("QXWEPWIADDOFXFVVQDNAEFQPPHNYYSQWCLMUAZBOIJHEJALXYJDGXGVTCOMYCFKXXLLNVIZRBGCUHDGDAXFTJVNRSHJMBXHVGUGEPGLKURQZHBRNKIMTOLSZQMIYMIRFQLMTTWSCDTSIWGNHEVUBXJDCPIPJSGPBQVACUTMWPBCEORRJVUXCROPYAMJBBI");

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
    msg.setTimeStamp(0.3510131632190626);
    msg.setSource(53683U);
    msg.setSourceEntity(143U);
    msg.setDestination(7057U);
    msg.setDestinationEntity(231U);
    msg.type = 108U;
    msg.htime = 0.838095548946869;
    msg.context.assign("DIFNBPCUOYESRHAUDNCMQYIPZXFVHHXJMCHBNWPLRVCZNXGVDOBFHFOOVYMLZRAQKOUWWHPLVJCKWEFEGODTJPFCWUZUFDGRMXPKWJMALLYXLCWTKXTXBBQDTHGMMBEBXQLTAAEANUTRZIIOYQNNBIPJTIVQFMEYWSTKJASNKQYKFOZJVZLKVKUWVYGMBMCDBHGNSODI");
    msg.text.assign("VPMVZIZFKLREDBDZXLXXPHOCPRNOMUCZAMEDKPFDBHIVTYOK");

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
    msg.setTimeStamp(0.8222888398373279);
    msg.setSource(13972U);
    msg.setSourceEntity(88U);
    msg.setDestination(5261U);
    msg.setDestinationEntity(84U);
    msg.type = 193U;
    msg.htime = 0.014881978838553467;
    msg.context.assign("NBRMICMBILZETTJGQRXHXUBSXHEIZWHWAOQFNKQNXHIVEUVUHBTMDOIWMGVHWWKHULBDVARSHHAJMFQVG");
    msg.text.assign("MXFNTNGMVOHRHQIJITYZBCITWLYYLPXNIUQGOKNXCHNK");

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
    msg.setTimeStamp(0.6656099687509164);
    msg.setSource(12443U);
    msg.setSourceEntity(53U);
    msg.setDestination(28071U);
    msg.setDestinationEntity(31U);
    msg.command = 251U;
    msg.htime = 0.03595036409179142;

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
    msg.setTimeStamp(0.4710405803697508);
    msg.setSource(64588U);
    msg.setSourceEntity(169U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(177U);
    msg.command = 226U;
    msg.htime = 0.6929390608184028;

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
    msg.setTimeStamp(0.718026855199869);
    msg.setSource(17437U);
    msg.setSourceEntity(158U);
    msg.setDestination(45375U);
    msg.setDestinationEntity(152U);
    msg.command = 249U;
    msg.htime = 0.7665793432083345;

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
    msg.setTimeStamp(0.9739916367320791);
    msg.setSource(3442U);
    msg.setSourceEntity(128U);
    msg.setDestination(15102U);
    msg.setDestinationEntity(241U);
    msg.op = 217U;
    msg.file.assign("GMNDAGGDOBKOEDSRJBFJVXQCBTUAACEJRYFWRTDYKFUHIUJASKIBWGJUNFPTYIYSWWWKVICSDBVEV");

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
    msg.setTimeStamp(0.9497774113201943);
    msg.setSource(25689U);
    msg.setSourceEntity(34U);
    msg.setDestination(34365U);
    msg.setDestinationEntity(230U);
    msg.op = 220U;
    msg.file.assign("CYYUWRTLFMXRPZLFHISLVOZICFMIFBTDKYBJOJEBLMPLFUJXGJQZJUMCONZHCVDEJHXBLPUQKVHKYDGTVGFWSXQPGNNOIGNDTBEXIKHAAYGSUBFVRUDYIEDAHWHQBQXQPDASACVMAXLPSCONZEMYPXXEYCCMIPNSZYMQNESRWEOAVHRRGUFJKVWBIIJLWTOBXUDODISGHFMACEVGWHFY");

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
    msg.setTimeStamp(0.11523883573434357);
    msg.setSource(36874U);
    msg.setSourceEntity(89U);
    msg.setDestination(19597U);
    msg.setDestinationEntity(194U);
    msg.op = 124U;
    msg.file.assign("BPNRKSEFBTQCRGDZDXOCWITRBXOUAKDFZMBXZRGPJZIBVCISULAKHHMOYCOSVDWBKQQJPQGDDJRALVGBPXSVENJGGSOICLRFTLKNUOBMXANZAHETRPPDLYVAKIYCMMMTSRFOTVFWFSXOIWJFULRGOGPKWALEZYEBZFNJYLYICFVEPUMEUNDITMQWH");

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
    msg.setTimeStamp(0.8098429716158073);
    msg.setSource(6649U);
    msg.setSourceEntity(90U);
    msg.setDestination(24335U);
    msg.setDestinationEntity(149U);
    msg.op = 149U;
    msg.clock = 0.902160190784549;
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
    msg.setTimeStamp(0.07525777285608204);
    msg.setSource(16784U);
    msg.setSourceEntity(244U);
    msg.setDestination(5793U);
    msg.setDestinationEntity(83U);
    msg.op = 55U;
    msg.clock = 0.48738811556861505;
    msg.tz = 35;

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
    msg.setTimeStamp(0.4514694858996374);
    msg.setSource(28822U);
    msg.setSourceEntity(233U);
    msg.setDestination(45824U);
    msg.setDestinationEntity(153U);
    msg.op = 214U;
    msg.clock = 0.8792585602121284;
    msg.tz = -126;

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
    msg.setTimeStamp(0.781303264925073);
    msg.setSource(3246U);
    msg.setSourceEntity(166U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(108U);
    msg.conductivity = 0.2989885794628703;
    msg.temperature = 0.4994792135729754;
    msg.depth = 0.8382861799408264;

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
    msg.setTimeStamp(0.8311087859175506);
    msg.setSource(53213U);
    msg.setSourceEntity(205U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(4U);
    msg.conductivity = 0.3945983918368917;
    msg.temperature = 0.7162901450503519;
    msg.depth = 0.36008859955200645;

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
    msg.setTimeStamp(0.023163459917705742);
    msg.setSource(38339U);
    msg.setSourceEntity(134U);
    msg.setDestination(16851U);
    msg.setDestinationEntity(174U);
    msg.conductivity = 0.3101570587787098;
    msg.temperature = 0.8121021350298353;
    msg.depth = 0.3274445625424195;

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
    msg.setTimeStamp(0.15798164828295458);
    msg.setSource(6312U);
    msg.setSourceEntity(188U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(210U);
    msg.altitude = 0.6556290931139145;
    msg.roll = 42771U;
    msg.pitch = 43232U;
    msg.yaw = 20156U;
    msg.speed = 2429;

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
    msg.setTimeStamp(0.5597987130920905);
    msg.setSource(51366U);
    msg.setSourceEntity(25U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(177U);
    msg.altitude = 0.9096907199620219;
    msg.roll = 13572U;
    msg.pitch = 50257U;
    msg.yaw = 25898U;
    msg.speed = 18602;

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
    msg.setTimeStamp(0.015475355312754013);
    msg.setSource(29901U);
    msg.setSourceEntity(137U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(116U);
    msg.altitude = 0.7331850471146443;
    msg.roll = 53059U;
    msg.pitch = 23633U;
    msg.yaw = 53541U;
    msg.speed = 17861;

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
    msg.setTimeStamp(0.0981469494995807);
    msg.setSource(44202U);
    msg.setSourceEntity(82U);
    msg.setDestination(51629U);
    msg.setDestinationEntity(76U);
    msg.altitude = 0.9392026534703446;
    msg.width = 0.9389507320405258;
    msg.length = 0.4620039401844249;
    msg.bearing = 0.1779008646258019;
    msg.pxl = -9779;
    msg.encoding = 68U;
    const signed char tmp_msg_0[] = {58, -105, 54, 15, 76, -31, -17, -65, -91, 114, -16, -119, 21, -6, -123, 93, 59, -18, -70, 5, -77, 103, -111, -35, 67, 65, 71, 73, 68, -31, 95, 4, 100, -64, -30, 24, -6, 41, -54, 114, -122, -69, -45, 106, -69, -26, -47, 95, 124, -100, -60, -81, -123, 1, 27, 77, -111, -74, -44, 21, 37, 126, 91, -52, -91, -77, 30, 15, -101, -24, 51, -11, 68, -65, -92, -35, -28, -108, 3, 12, 111, -88, 116, 107, -41, 25, -12, 37, -40, -127, -89, -16, -95, -83, 41, -81, 73, 4, 47, -63, 71, -58, 111, 6, -41, 35, -121, -23, 12, 110, 26, -57, -22, -42, 40, 70, -109};
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
    msg.setTimeStamp(0.8934280427541317);
    msg.setSource(56711U);
    msg.setSourceEntity(86U);
    msg.setDestination(32013U);
    msg.setDestinationEntity(4U);
    msg.altitude = 0.3104063519776913;
    msg.width = 0.06969728761766847;
    msg.length = 0.9859600460552647;
    msg.bearing = 0.17720108192272666;
    msg.pxl = -5536;
    msg.encoding = 131U;
    const signed char tmp_msg_0[] = {8, -18, -28, -25, 96, 58, 49, 117, 109, -125, 25, -112, 102, 90, 9, 105, 53, -76, -53, -118, 78, -103, 39, -69, -13, 126, -66, 72, 67, 74, -6, -120, -29, -29, 122, -92, 38, 87, -123, -20, -121, 24, -75, -106, -80, 25, -33, -115, 19, 89, 100, -96, 67, -6, -12, -98, -23, 33, -58, -36, 71, -51, -68, 119, -64, 94, -49, -68, -17, -17, -99, 91, -60, 121, 109, 49, -120, 72, 91, -106, 70, -1, 61, -70, -81, -44, 11, -24, 116, 52};
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
    msg.setTimeStamp(0.941002810077747);
    msg.setSource(33506U);
    msg.setSourceEntity(69U);
    msg.setDestination(29085U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.8209910569109345;
    msg.width = 0.18874818231220658;
    msg.length = 0.11564466836059895;
    msg.bearing = 0.3588424326651821;
    msg.pxl = -17690;
    msg.encoding = 234U;
    const signed char tmp_msg_0[] = {-95, -4, 48, -24, 54, -77, 92, -42, 35, -21, -55, 57, 96, -109, -74, -74, 49, 38, 28, 13, -14, 114, -86, -10, -108, -13, 76, -101, -119, 25, 75, 9, -9, 58, -57, -34, -83, -69, 121, -13, 114, 43, -31, 5, -61, -127, -106, 80, -86, -51, 96, 37, 65, 27, 17, 70, -40, 0, -7, -34, -114, -60, -27, -89, -73, 25, -79, -79, -23, -3, 6, -81, -56, -92, 84, 14, 46, -122, -66, -85, 61, 122, 69, 119, -64, -86, 118, 90, 123, -90, -34, 9, 74, 105, -79, -126, 54, 99, -38, 39, 33, 45, -26, -38, -83, -98, 10, 27, 43, 84, -82, 45, 114, 64, 110, 52, 125, -6, -114, 46, -122, 83, 85, -116, -1, -91, 56, -44, -98, 122, 84, -112, -59, 56, 31, 80, -22, -127, 91, -96, -95, 112, 106, -92, -117, 119, -24, 109, -86, 8, 1, 47, -18, 81, -51, 48, 85, 106, 6, 55, 58, 2, 117, 69, -121, 21, -107, -124, -105, 3, -36, -28, -125, -83, 71, -31, -13, -121, 53, 91, 13, 62, -84, -112, 90, 85, -4, 93, 87, 114, -34, 99, 38, -87, -6, 23, -3, 85, -4, 67, -79, -11, -95, -91, 106, -21, -55, 13, 100, 8, 43, -18, -20, 37, -88, -67, -122, 74, 121, 24, -3, 54, -70, 94, 123, 69, -38};
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
    msg.setTimeStamp(0.3505996272483948);
    msg.setSource(59842U);
    msg.setSourceEntity(51U);
    msg.setDestination(61855U);
    msg.setDestinationEntity(33U);
    msg.text.assign("FFUMDAQPPMXXIPTSKZAOXLUREBGIPHEAJYJMSJXQBLLIBKGHPHBIGVZTFCQXISHUPVQBUZGMTAOWLOGVOYFLQTJVTMCNHSNPURBHWSXDMQHWMUDFLTHNRTRIEEKQWCLLVYIEEYJCNLDZAONYOKRYJSWCZKESPANBEIYPZGAQDFANTCZOUYMRALJTRVRDGZWCKRJBQDFDE");
    msg.type = 215U;

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
    msg.setTimeStamp(0.2718300387583592);
    msg.setSource(5643U);
    msg.setSourceEntity(131U);
    msg.setDestination(20215U);
    msg.setDestinationEntity(179U);
    msg.text.assign("ATYDBIBWEXWNJPKGTNYXHRMQYACOODCZFYANEFJYGBFVGFRZOPWKRUTKIOCFLGZQGOOZQRJLHGABKSDWNUMEZXOUMUGLMSNWHYXLRGZCJVTUPVLAGTDKXVXTBZQBLJZDRIRUTFOIISMYMBHHBABIHYCXVUDFUQCECJQPNSUKVGNPWZSNEHFWEZEBVYDELWMSKTKDOHEPPLXYCQWQATPKIAJJAELLHSFVMIHUTIXSRNVRMRCP");
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
    msg.setTimeStamp(0.675299584670699);
    msg.setSource(43250U);
    msg.setSourceEntity(92U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(36U);
    msg.text.assign("IUJRSMHBDRPAICSPFNWHDEGJQFZCBZRRHGQBYIQAYJJQLXPBDLAEXNTXMNBETGFQUVIYWRKGTJAGHULGOBOWOLRAMXBUOC");
    msg.type = 40U;

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
    msg.setTimeStamp(0.36348860766776303);
    msg.setSource(16279U);
    msg.setSourceEntity(101U);
    msg.setDestination(62323U);
    msg.setDestinationEntity(146U);
    msg.parameter = 205U;
    msg.numsamples = 101U;
    msg.lat = 0.03323835797539221;
    msg.lon = 0.5285230185246714;

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
    msg.setTimeStamp(0.11269801747156372);
    msg.setSource(34956U);
    msg.setSourceEntity(82U);
    msg.setDestination(60982U);
    msg.setDestinationEntity(168U);
    msg.parameter = 82U;
    msg.numsamples = 142U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 52240U;
    tmp_msg_0.avg = 0.13654479713820344;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.19425281847657416;
    msg.lon = 0.5063643409244275;

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
    msg.setTimeStamp(0.574249433529402);
    msg.setSource(19411U);
    msg.setSourceEntity(219U);
    msg.setDestination(35626U);
    msg.setDestinationEntity(92U);
    msg.parameter = 122U;
    msg.numsamples = 205U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24201U;
    tmp_msg_0.avg = 0.482135944900421;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7773891329784561;
    msg.lon = 0.22889331516580358;

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
    msg.setTimeStamp(0.38587918213649164);
    msg.setSource(65068U);
    msg.setSourceEntity(71U);
    msg.setDestination(6591U);
    msg.setDestinationEntity(126U);
    msg.depth = 32606U;
    msg.avg = 0.07024340790174832;

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
    msg.setTimeStamp(0.5166538699642791);
    msg.setSource(5161U);
    msg.setSourceEntity(173U);
    msg.setDestination(52765U);
    msg.setDestinationEntity(211U);
    msg.depth = 12743U;
    msg.avg = 0.07915169313662851;

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
    msg.setTimeStamp(0.9889042937952734);
    msg.setSource(29313U);
    msg.setSourceEntity(187U);
    msg.setDestination(44548U);
    msg.setDestinationEntity(44U);
    msg.depth = 11547U;
    msg.avg = 0.9429181480275617;

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
    msg.setTimeStamp(0.5234346349606833);
    msg.setSource(9325U);
    msg.setSourceEntity(163U);
    msg.setDestination(49438U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.5965949053592192);
    msg.setSource(20748U);
    msg.setSourceEntity(171U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.9477056182684892);
    msg.setSource(19840U);
    msg.setSourceEntity(244U);
    msg.setDestination(22959U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.4259506784884213);
    msg.setSource(10149U);
    msg.setSourceEntity(171U);
    msg.setDestination(26123U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("LTYBKCDRGMKPTVVCCXGUNIPCSEOANZKNQHXNDTKMYUYZGGGLOLWAHEXQUASBPNMVAYPGMFSOXFNHOLRWBRNHJIZZVOKZDLFSOAVHTJBZYJBDFNRJCFHFEXWWUAUSYEEDZKVFQJFVYRCUSPZPHRBTZMQCBOKMIFITVSUDRGRTYEWYECYHJKSDEQLAIIIAXUISIXMVEUWROWKGUJZNCJEQGXBMXPDMDJJOFOALNDTPPHQQHM");
    msg.sys_type = 19U;
    msg.owner = 13085U;
    msg.lat = 0.12057234393054483;
    msg.lon = 0.1231390837678088;
    msg.height = 0.837208314437164;
    msg.services.assign("XECPATSRTHVHROQSRGNHOEDQSGBJMLVJNKWPVBCGPIOLMBXIXBBVWTGCLYARLICJSUEIQWDXWKIFZBGQFIHQRZOOVYYAMIHJUWGNELPZWKSYWZAUAKPKYXTQLYFUGOVYQDQDSPJUVVPJVHNPCFKTYIHFRN");

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
    msg.setTimeStamp(0.4506680018145576);
    msg.setSource(65233U);
    msg.setSourceEntity(251U);
    msg.setDestination(21443U);
    msg.setDestinationEntity(68U);
    msg.sys_name.assign("TJZAZXSKNPJBTCIXRLQHNVSSTRIDDWRCKBYCOBLTOKAFGUHECQFJYHKHZBBVPJBPAUIWPZJCFUVCTSJOUYODMOZWDIISIRWGIDPOX");
    msg.sys_type = 225U;
    msg.owner = 2889U;
    msg.lat = 0.9269479737964225;
    msg.lon = 0.2761179011822674;
    msg.height = 0.977354419742682;
    msg.services.assign("DNCCYMEHKWVCBBHTHVEGPTWPGZQRGXTWDCYNMFYTATIHQJMLAZLLLYWFFQREUPCGZRSDMJAVLRFLQOHMBKTNYRVDADJSGFGM");

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
    msg.setTimeStamp(0.5907214327308717);
    msg.setSource(27843U);
    msg.setSourceEntity(252U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(75U);
    msg.sys_name.assign("BEGYRKZRYADRNHJQRZNWBUWNUFKDPYAUZZBQQMIANHFRJMSNWBZUPTSJLPWDRAMOVEAAEUIGOKEKLVNLJXZSSFHRVTIAZEWTZCJCXXVVJQBXJNHTBPQOVBTWALGIYPCDCZDLWTFTCDFRG");
    msg.sys_type = 85U;
    msg.owner = 37588U;
    msg.lat = 0.02625010868663158;
    msg.lon = 0.3167389354224177;
    msg.height = 0.20385867138293212;
    msg.services.assign("NLCJIIVEKYNOXHSLLVHWHVCQZWRZFXRONKMZKSZSXRHTRFFTBRQLNVWAKFJONSTXHWTCKMWLEOPUGFGTHGPAAJPSUJJAJKLMIOPYDYFERUWZQVPMJQXPOENYLGTDEDRWGWVBRTUBWEBABQCDAIMGAKBEQQBZSQIUKDMQIMMMOPRNJHPHQBXXVYXSDFCXMUHGKOUVFCCNDBWCLYSEYCUDRDVXZDJTUISZAGBHTEON");

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
    msg.setTimeStamp(0.5795363273884738);
    msg.setSource(40317U);
    msg.setSourceEntity(187U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(160U);
    msg.service.assign("EZKGDQXFUJYZGIPZCOLOCAQRSTPOPFEVJZWAEQONONEVCSUKKIRGNMRDCLLOSWEWZJPSYPFARGGRAPLLRDBRSBXXMQNIERBKEJHJTNKTBBHQHISPMAGCEVGLARBUOCQSZCLVTWLVXPTNMFSNJNIIANDWIBKXTMYJOTKVYQDICCDVMFTYGH");
    msg.service_type = 22U;

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
    msg.setTimeStamp(0.9763471214780628);
    msg.setSource(51616U);
    msg.setSourceEntity(240U);
    msg.setDestination(4054U);
    msg.setDestinationEntity(183U);
    msg.service.assign("PGKQWCQILSTBTZNKVVAGFAIJAUCJBSGEVZIESXSBL");
    msg.service_type = 224U;

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
    msg.setTimeStamp(0.1366280837819157);
    msg.setSource(61329U);
    msg.setSourceEntity(142U);
    msg.setDestination(23541U);
    msg.setDestinationEntity(46U);
    msg.service.assign("DMYQLBYENCWEUXHTXKAZGEHGRQAUXKRYMQJVTCUUUTVEEMSYNJHRYWSCOYVICROHPTFMOEDQPAYXDAVGSRJIMEGDAYQNISLBLONYMDLIBCPJCTGXZBCKIRUDKKXCKRDQQEVHNWZMDBWFLSMSKTYWPQLHFPZITNUGFTSOVMBNJLPEWFXLAVRBKGPPIGPRORPAQOFJZOJANMZGZI");
    msg.service_type = 99U;

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
    msg.setTimeStamp(0.5180127697780071);
    msg.setSource(114U);
    msg.setSourceEntity(82U);
    msg.setDestination(6962U);
    msg.setDestinationEntity(76U);
    msg.value = 0.9532793305229119;

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
    msg.setTimeStamp(0.1172476106813749);
    msg.setSource(50297U);
    msg.setSourceEntity(46U);
    msg.setDestination(60143U);
    msg.setDestinationEntity(107U);
    msg.value = 0.09848991808705532;

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
    msg.setTimeStamp(0.5610960770354063);
    msg.setSource(24011U);
    msg.setSourceEntity(61U);
    msg.setDestination(4271U);
    msg.setDestinationEntity(150U);
    msg.value = 0.7594205777955934;

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
    msg.setTimeStamp(0.4596427527968141);
    msg.setSource(2404U);
    msg.setSourceEntity(251U);
    msg.setDestination(53123U);
    msg.setDestinationEntity(248U);
    msg.value = 0.96456988297869;

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
    msg.setTimeStamp(0.3682956469777452);
    msg.setSource(47166U);
    msg.setSourceEntity(249U);
    msg.setDestination(15369U);
    msg.setDestinationEntity(221U);
    msg.value = 0.5234455828229595;

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
    msg.setTimeStamp(0.5984081439662625);
    msg.setSource(1647U);
    msg.setSourceEntity(147U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(215U);
    msg.value = 0.3393437440383379;

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
    msg.setTimeStamp(0.947807013362581);
    msg.setSource(50325U);
    msg.setSourceEntity(6U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(220U);
    msg.value = 0.1663433030250675;

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
    msg.setTimeStamp(0.6388729909974351);
    msg.setSource(24538U);
    msg.setSourceEntity(191U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5349030586665916;

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
    msg.setTimeStamp(0.6074316228872552);
    msg.setSource(1976U);
    msg.setSourceEntity(160U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(53U);
    msg.value = 0.039643895871139034;

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
    msg.setTimeStamp(0.7921523467095789);
    msg.setSource(33886U);
    msg.setSourceEntity(199U);
    msg.setDestination(895U);
    msg.setDestinationEntity(55U);
    msg.number.assign("IUKCMGNDRQTBVSJPFIIHMXLBHNTNEOADVBDIQYAWFZMBZJEGPAUTAGJNIDOQNJNZLPXCXAVUKLUEUBWHXBGRSXSFLRVFSHJLQOJEISXOMYRTJVTYYSQZQYHVKMHCU");
    msg.timeout = 24138U;
    msg.contents.assign("LORYLIWHVULXWFJXZZNWKREMDQOMOHUHIYQYDGDQVJPAYEKGAQXJWDXDKBJYLWILSWFTIIRFAFTRCVMPEIYSYPRKFVJKVGBFKBFGQUZCTHLLBAMDNRSDRRTXINTXFNQEZAVCWTUSNGUQHAENAELBVGVZS");

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
    msg.setTimeStamp(0.4210550912436821);
    msg.setSource(56485U);
    msg.setSourceEntity(60U);
    msg.setDestination(5141U);
    msg.setDestinationEntity(0U);
    msg.number.assign("SBDPPFKGQYWLTXRGHVMZOZUMAMEBBGSCZRHEESRGTIILEXAJINVPJNZRDEDMKZDWHSUYMWFJPCKNYUWBZKRYGRNOTMSVSDUJFENGGQYTTQHCZOEQQBLBNKUTWJWOPRGWYAHAICIXIOLHTYIVLYTWZMLQKDVCTOHWADRKJXXJCMBDKHJFAXHUJNMMFFREQUASYYFVPSDDIEXCZPGRUSPNLBUNCJOOAZSLIQHPXBELAQAVKFFC");
    msg.timeout = 62935U;
    msg.contents.assign("ZVCOQYGSGWQPECXYNIXSHEIVKDJJPRNFCHZEQAXNWRQVSJLTMZTYLYAGBAFTNXLEDJAFWKWJFIYZATVLVKUOCWPVKZDGVPAKXNKIQKUHTWVUNOSOOTXSKGQMWDTXYQUDQMICDEYSBUALIDIRMZAKMYHFAMOPXLHGBQEBSNIUEVICLHBFBCZGOZLXGGUWUIPPXVTDDKQUGYTNBJPHRPETYJJFDWCSROREMJLLFMFARZORSMZHMNW");

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
    msg.setTimeStamp(0.0727801081873839);
    msg.setSource(58643U);
    msg.setSourceEntity(96U);
    msg.setDestination(11746U);
    msg.setDestinationEntity(30U);
    msg.number.assign("CHWZBNPGUQGZPCWRLOAINEDQGARUEYYXQHHXHIBZXBSERWYODWCARKPKMXNFYLFUVFDVWVSFOFO");
    msg.timeout = 18506U;
    msg.contents.assign("QLNOCQEIKHGGYADFLNUKOLVCPBJVZGXKXBNWSQOTCZIJYBSEUJIBYYIHUJFYNAPRPWLSWIJLWYSMTGPFHGYHMWLUBASPRXBXIPJGCSACIFTBKRYNEWREC");

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
    msg.setTimeStamp(0.11361437247049955);
    msg.setSource(12529U);
    msg.setSourceEntity(59U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(120U);
    msg.seq = 1229212936U;
    msg.destination.assign("FKENZSJXHNORXXIMGZGZWNDOTGZYKTWNGOMJELMSSIOUFFPXOBMRENLIEPRTFCMLCRPBJWTDDZCLQGFIAHDCRAYQZJWSHQNVXUZGTYQZSUQTULWMYLRJPGTCUVPFVSGFPJHLNKHICUSDRCTVCSVBVSMEDIOAMOWKDKUKKRBHFGPATLZQENIHWEKVLAUPDBFHQWZAJCUYYERBQBBR");
    msg.timeout = 53188U;
    const signed char tmp_msg_0[] = {-53, 56, 83, 81, -103, -114, 15, -86, 81, 31, 70, -69, -56, 0, -62, 94};
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
    msg.setTimeStamp(0.4757371549474796);
    msg.setSource(21570U);
    msg.setSourceEntity(154U);
    msg.setDestination(2095U);
    msg.setDestinationEntity(161U);
    msg.seq = 599551657U;
    msg.destination.assign("NMAIFCAEUWGBCDEWUTOAIYVXQZELTVHEJXXLYPXTIWNOEGZDMEHOGQXBOLTIHCOWCDF");
    msg.timeout = 12153U;
    const signed char tmp_msg_0[] = {68, -121, 58, 42, 105, -52, -127, 107, 124, -84, 120, -60, -109, 6, 1, -92, 97, 34, 120, -26, 113, 87, 45, -123, 71, -112, -85, 1, 26, 67, 37, -41, 101, 121, -57, -126, -28, -60, -115, -78, -79, 119, 32, 60, -78, 35, -61, -82, 53, 0, -126, 33, 95, -74, 9, -16, 55, -108, -101, 61, -1, -23, -36, 33, 121, 65, 73, 5, 33, -55, 8, -115, 18, 11, 98, 87, -66, 122, 16, -32, -108, -98, 10, -24, 77, 39, -26, -107, 33, 51, -15, -106, 40, -91, -47, 75, 52, -38, -18, 54, 80, -22, -120, 120, -110, 53, -41, 62, -46, 77, 17, -71, -85, -40, -25, 0, 50, 57, 116, -15, -103, -119, -108, 62, -111, -123, 73, 47};
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
    msg.setTimeStamp(0.03907988431692644);
    msg.setSource(59718U);
    msg.setSourceEntity(216U);
    msg.setDestination(1234U);
    msg.setDestinationEntity(251U);
    msg.seq = 1040732581U;
    msg.destination.assign("OMRUJQIXMMUZSJJYLWYCXGPRZTPYWUWZAHBREQFQSWEJBYUMRPTNEEFERVYAEGXEOMTLKDCFRXLJYVKTLZQLGQRPDKWOYAJSYSUAT");
    msg.timeout = 1364U;
    const signed char tmp_msg_0[] = {102, 13, -86, 3, 80, -90, 35, 116, 84, -111, -45, 38, -94, 108, 78, -76, -10, 38, -42, 22, -100, -94, -112, 9, 18, 117, -65, 9, 66, 19, 120, -62, -113, 95, -57, 29, 62, 106, 88, 44, 36, -61, 109, 24, -31, -77, 24, -100, 47, 106, 38, 34, 101, 61, 51, 17, 9, -98, 103, 53, -98, -4, 21, 3, 91, -39, -53, 57, 39, 68, -87, -77, -128, 109, 93, -51, 9, -121, 6, 80, -25, -31, -47, 99, -56, -108, -7, -67, -122, -91, -8, 81, 89, -34, 118, 9, 57, 73, -51, -81, -68, -107, 119, -104, 73, -76, -115, 75, 31, -3, 76, -21, 59, 25, 98, 29, -30, 48, 86, -88, -7, 78, 81, -7, -10, 93, -1, -44, 104, 42, -45, -9, -115, -47, 116, 47, 16, -48, 65, -121, -101, -74, 7, 123, 84, -70, -62, 67, -102, 2, -12, 94, 78, -67, -84, 84, 124, -84, -17, 111, -37, 104, 45, -56, 120, -86, -15, -86, -12, -71, 103, 4, 47, -20, 100, -27, -63, 62, -72, 80, 78, 4, -78, 72, 45, 94, 93, 104, -81, 20, 76, -79, 62, 103};
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
    msg.setTimeStamp(0.5994808096556353);
    msg.setSource(45427U);
    msg.setSourceEntity(114U);
    msg.setDestination(41303U);
    msg.setDestinationEntity(119U);
    msg.source.assign("JCQEAUGDBLRXXNNJILOOFDXLFMEHRZNDMCEZMUIVMIZTYUJCFQICBJJWQVGKQWATBXVRVMKEROJSKJSZVXHYLGUEGYWJZUMOOFCWIVMRRFFCFYXAWQUIZDKN");
    const signed char tmp_msg_0[] = {112, 76, -1, -8, 90, 8, -33, 98, -101, 36, -15, 50, -14, -33, 41, 111, -14, 114, 108, -70, -127, 74, -71, 15, -29, -7, -123, -57, 111, 76, -97, -85, 90, 79, -125, 96, -121, -88, 69, -15, -33, -77, 62, 110, 19, -100, 9, 103, -67, 24, 82, 63, -37, -96, 51, 123, -14, 95, 68, -122, 11, -117, -127, -33, 44, -58, -79, 31, -43, 125, -124, 74, 37, 83, -47, 26, -75, 91, -14, -85, -61, -32, -122, 105, -45, -71, -11, -43, 63, -108, -40, -107, -124, 37, 7, -60, 76, -9, 102, 13, 75, 126, -90, 20, -108, -8, -97, 30, 114, -74, -125, 29, -25, 47, -108, -98, -14, 50, 70, 108, 107, -15, -50, -83, -91, 53, -2, -35, 22, 38, -19, -106, -121, -27, 50, 22, 109, 2, 68, 86, 119, -128, 18, 70, 78, -63, 42, -76, 108, 125, -53, 100, -125, 120, -73, -119, 91, -95, 28, -47, -103, 76, -48, 83, 84, -18, -110, 81, -17, -68, 45, -1, 2, 10, -35, -5, -94, 40, -125, 88, -109, -110, 124, 71, 60, -79, 73, 116, -55, 77, -29, 14, 56, 68, 110, 82, -18, -40, -80, -104, 71, 5, -58, -55, 104, 64, -121, -47, -52, -82, 61, -61, 0, -72, 82, 71, 68, 76, -80, -47, 62, 96, -116, -119, 27, 78};
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
    msg.setTimeStamp(0.8877499855461097);
    msg.setSource(46658U);
    msg.setSourceEntity(51U);
    msg.setDestination(57848U);
    msg.setDestinationEntity(98U);
    msg.source.assign("WWSIHTRWAYFTGKIVXICRTPOKWCGJUGREUQVFBSTYGHHZJAZGYWTKGBBDVCTNHARXLQIDFRZMBFYKUVUMXNGYZSYTIMMLRLFURDDBXCILWCN");
    const signed char tmp_msg_0[] = {107, -61, -16, -63, 87, 11, 6, 15, -51, -47, 12, -120, 15, 65, -19, 124, 29, -56, -7, 56, 75, -23, -66, 46, -56, 23, -50, -101, -49, 122, 53, -47, -29, 7, -35, -58, 9, -37, -45, -75, 122, -76, -88, -53, 120, 59, -79, 9, -82, -34, 114, -2, -8, -72, -67, 60, -61, 75, 80, 84, -47, -116, -65, 52, -17, 98, -40, -94, 30, 38, 17, -113, -28, -59, -67, 117, 93, 125, 103, 125, -68, 97, -100, -26, -124, 82, 93, -51, -114, -55, -81, 11, -42, 74, 126};
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
    msg.setTimeStamp(0.20415620873380147);
    msg.setSource(52062U);
    msg.setSourceEntity(86U);
    msg.setDestination(54463U);
    msg.setDestinationEntity(241U);
    msg.source.assign("WPQLYPRCFRWIKHSGYZCLEGOMMOVRDDTJKGNQAVSQXCPZKTQREASNQXFACVLQBIUCOCPMKJZMRQH");
    const signed char tmp_msg_0[] = {76, -97, 54, -91, -104, -59, 86, -8, 12, 4, 87, -121, -121, -91, -15, -115, -126, -61, 105, -108, -8, 117, 84, -107, 118, 125, 112, 26, -116, 35, -12, 29, -81, 18, 51, -32, 21, -58, 93, 1, 99, 29, -123, 5, -49, 7, 58, -90, -58, -58, 57, -87, 33, -21, 98, 21, 1, -40, 47, -18, -37, -71, -41, -114, 69, -22, -19, 33, -123, -52, 2, 14, -26, -38, -80, 33, 122, 0, -68, -122, 32, 113, -125, -39, -86, -56, 16, 98, 110, -96, 76, 77, -57, 47, 5, -12, -88, 23, 114, 118, -38, 124, -7, 42, -50, 6, -4, -34, 110, -125, -9, 72, 115, 22, 20, 77, 88, 13, -26, 68, 49, 32, -18, -124, -32, 66, 65, -45, -125, -58, 6, -77, 69, -62, 53, -117, -103, 58, -108, 110, 42, -65, -46, -114, -123, -102, -92, -73, 69, -3, -115, 119, -23, 123, 38, 66, 110, 37};
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
    msg.setTimeStamp(0.008348352385867064);
    msg.setSource(31561U);
    msg.setSourceEntity(124U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(164U);
    msg.seq = 3423110604U;
    msg.state = 174U;
    msg.error.assign("SLIXNXYYZUKFYSENFJFVLPZOKBGFCFNUUDIMYBANPVPITUHGWHSKHUGDUBKOELQHMFEDHWJGLPIHFOAVGAQWKFKNZEUBXOCBTOEMWAZKQYVISLXYZELRCDSTUDKJNSNATRRMPOLUIKMRWJDFDJQAOLOCGZMBMZI");

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
    msg.setTimeStamp(0.8879005901852917);
    msg.setSource(50183U);
    msg.setSourceEntity(70U);
    msg.setDestination(49221U);
    msg.setDestinationEntity(188U);
    msg.seq = 2774067713U;
    msg.state = 145U;
    msg.error.assign("OJYSOTBHCQTVTJ");

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
    msg.setTimeStamp(0.6593836130948937);
    msg.setSource(35406U);
    msg.setSourceEntity(71U);
    msg.setDestination(39796U);
    msg.setDestinationEntity(181U);
    msg.seq = 2612444660U;
    msg.state = 43U;
    msg.error.assign("QNVSDHQXDJCCRAJFYQYNCNZJNPEJJHRZENKRQXTKFOKOSPGILAFQBBJZPVPGACEETIMGBBKXTISPEZOSSDHHCCAJWXUINEUIQSADYMLIYZXUWWPRVNLUBXCHFIVHSWGODKMDPRRQUMOD");

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
    msg.setTimeStamp(0.3559074371527716);
    msg.setSource(48753U);
    msg.setSourceEntity(143U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("TQOURTCDRMAUXOSEWCHLTZZUQRFLELIHNVYMOVUXXARVBPJJUKNKASIBBCSFLNZIGFTBWPNPQKUDMOLBSIIAQVQGMQZTFEAHTTZTSPCIGMKYYQEYBZSUIEFCGGEXWRBFSHRPSWLXVFRJGYDARYDNHNDCVATRD");
    msg.text.assign("SOHKKFFVQEPPGTENYBYOXYQOUUGTHMYKRMHVPAVVTUSNJDOLOISKWJAXNAPKNVICXQBRAFCKSGQBJWXLFDIMTRUYGGBHWLWBVACXZHCGIXZZCJLIJPUJSOMKWERELAMABMHQFSCOTUFDMOXDIADQBR");

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
    msg.setTimeStamp(0.30864345183262276);
    msg.setSource(16020U);
    msg.setSourceEntity(149U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("KMFZGEFJASNAKVDWKCNECTOOTYVLJJCDJXGNZISUHDCNCPXUDTONLQWFSQJZXKOZDRUKHUYGWAQMZNNNGWGIGRZADTIHGJRMTSXEUXVYUYQTOKWOMPPAIFRAFMGVIHOQOIRYKMBRHXEDELCFJPRXFQHCPPEMEPBCHKBITXCHYUQBYQULKSVQBTVNRSBWSQAEAPLVLGVZCJJAWSVUZI");
    msg.text.assign("ANGTDQOAELZBCPTSIHR");

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
    msg.setTimeStamp(0.2865168914712358);
    msg.setSource(24201U);
    msg.setSourceEntity(194U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("CCYJKEIMKPYHUCTPNJJZPEPVVAKGI");
    msg.text.assign("GVAXQLPYXFTZBQJBONMFGFZEBAUZEBEBHMLVVURPDDMTRWJCZLSBGANVVNXDQFKPOCCWKOIEOWREOYRLYYPQJWVYMIPTXNGXKMOKCQIUENDKDSFPWPBMUK");

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
    msg.setTimeStamp(0.36599624602182);
    msg.setSource(51829U);
    msg.setSourceEntity(231U);
    msg.setDestination(29411U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("FBSWUGRXCAQCMHRMV");
    msg.htime = 0.971445228252258;
    msg.lat = 0.352460308319302;
    msg.lon = 0.32800169689062497;
    const signed char tmp_msg_0[] = {124, 31, 109, -20, -68, 33, 34, -123, -100, -74, -39, 98, -2, -79, -7, -110, 63, -94, -97, -49, 74, 63, -77, 111, -29, 74, 123, -25, -12, -120, -62, 16, -83, 62, 83, -9, 21, -94, 64, -55, 38, 4, -98, -123, 74, -51, 43, 54, 96, 69, -27, -3, 6, 26, -80, 106, 81, 8, -30, 82, 48, -47, -73, -95, 33, 33, 53, -7, -32, -90, 2, -83, 46, 76, -41, 100, -51, 114, 116, 3, -31, -22, 59, 86, 59, 31, -37, 86, -45, -18, -65, 117, -102, 30, 42, 43, 88, 71, -101, -55, -14, 116, 11, 20, 38, -52, -90, -4, 75, 95, -65, -11, -63, -25, 52, 93, 65, 124, -64, 73, -9, -57, -2, -97, -65, 67, -45, 75, -56, -22, 15, -20, -106, -68, -42, 48, -111, 46, 33, 111, 98, -46, -52};
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
    msg.setTimeStamp(0.18344171021899158);
    msg.setSource(25834U);
    msg.setSourceEntity(222U);
    msg.setDestination(26336U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("XTFPUVWFIFWMUKYEKUAFPLBRDCXVBUQNRHVVDWQZBYSXAIHHWZYGPCRDXLGTLLSPMGFEHDAHCEKOGNOOKPHBOMUMGYYTQDUCBOPZNWZIWMWJAWSPCERAFTVKSRKPTHJNVMBRFKGVEUJQCTIIJRXJQJSNKJFAGCIDZXKBLYKNQROMSQCJEVLSXBUFVSUETCSHRIFDIXBXOEGEDLIZOSMPTNALHNEVRLJIMTPYAWMBOZYYQQWHOGZAQJZZNDN");
    msg.htime = 0.20971860779617235;
    msg.lat = 0.4085895677380721;
    msg.lon = 0.12345412551874868;
    const signed char tmp_msg_0[] = {115, -57, -84, 123, 4, -78, 18, 115, -16, -47, 118, -68, 41, 80, -117, -102, 89, 38, 19, 55, 119, -53, 121, -117, 115, 9, -84, -70, -22, 88, -62, 11, -34, 123, 111, 7, -119, -127, -98, 89, 97, 26, -24, -25, -93, -126, 120, -85, 11, 18, 10, 114, 109, -119, -12, -48, -42, -31, -104, -108, 105, -72, 54, 119, -102, 106, -50, -68, 56, 26, 13, -75, -85, -67, -119, 74, -114, 49, -50, 100, -109, 126, 40, -8, -76, -45, 53, 115, -93, -19, -98, 40, -84, -122, 119, -115, 31, -62, 16, 27, 73, 42, 65, -122, 72, -97, -111, -103, -34, -101, 70, -4, 8, 55, -100, -47, 114, -81, -118, -64, -112, 98, -30, 81, 56, 70, -98, 11, 37, -84, 87, -9, 37, -68, -95, 85, -86, 78, -90, -125, -42, -67, 86, 102, 16, -101, -71, 31, -61, 114, -91, 23, 76, 33, -8, 19, 46, -109, -10, -67, 18, 62, 74, -6, -97, -40, -3, 122, 43, 70, 85, -28, 66, 8, -84, -115, -53, -5, -108, 117, 104};
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
    msg.setTimeStamp(0.4302451650465885);
    msg.setSource(6933U);
    msg.setSourceEntity(215U);
    msg.setDestination(4522U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("YCUNTVSVCQKRKQSXWVIGXMTYFSLBTHTZKCGWBDOSCYAMRAJMQXHHUMRCFFLGELTSNKJQJCWHGVBOCPYWPYWQNJKPNLMMOMXYAEIJVNZIBWTKRFLSKUDBKGQNAJAZQLONRZOFFYPXRYDPPCQOEZWUVIXUBDFBVLYTWIVW");
    msg.htime = 0.4728741684225435;
    msg.lat = 0.8801777984996512;
    msg.lon = 0.5025949975969378;
    const signed char tmp_msg_0[] = {49, 80, -12, 83, 35, -62, -81, 98, 4, -82, -100, 120, -92, 89, -3, 7, 2, 4, 68, 43, -17, -9, -122, 109, -13, -28, -110, -80, 95, -40, 11, 63, -100, -65, 27, -33, 68, 96, 80, 93, 67, 20, 117, 81, -109, -96, -5, 16, 14, 14, 103, 17, 53, -6, -15, -36, 16, -5, -53, 118, -63, 83, -79, 116, 120, 118, 19, 116, 105, -2, -114, 99, 46, -16, -65, 50, -64, -75, 124, 46, 100, 62, 1, -100, -9, -82, 77, -87, 58, -112, -71, -82, 67, 54, -71, -72, -96, 99, -108, -30, 81, -91, 125, -33, 65, -26, -57, -17, -44, -41, -125, 47, -81, -89, 112, -86, 77, 125, 97, -71, 29, -7, 99, 110, 92, 34, -97, 5, -31, 44, 73, 53, -31, 64, -124, 27, 17, 74, -47, -113, 69, 10, 26, -49, 18, 6, 49, -116, 112, 105, 15, 98, -73, -85, 6, -127, -35, 44, 84, 91, -107, -89, 89, -112, -93, 65, 83, -78, -124, -39, -14, -60, -81, -46, -74, 49, -37, 52, -8, 50, -21, -62, -25, 49, 102, -125, 56, -94};
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
    msg.setTimeStamp(0.5998120099994713);
    msg.setSource(15284U);
    msg.setSourceEntity(104U);
    msg.setDestination(56797U);
    msg.setDestinationEntity(237U);
    msg.req_id = 37353U;
    msg.ttl = 23301U;
    msg.destination.assign("YLSTHYPFKKTNTISBEHFJDAZGUTZHHBJERXTTLZPFSLIJRRLGZYO");
    const signed char tmp_msg_0[] = {-13, 34, -59, 13, -33, 100, -91, 52, 14, 110, -63, -31, 125, 65, 39, 63, -14, 105, -1, -67, -43, 37, 23, -28, 8, -123, -33, 2, 102, -127, 17, 123, 121, -45, -110, 103, 48, -16, -120, 34, -103, 80, 92, 79, -34, -8, -38, -78, 113, -117, -51, -97, 82, -105, 3, 52, 28, -15, 65, -53, 119, 117, -126, -117, -39, 80, 16, -123, 48, -108, 46, 124, 15, -16, 64, 97, 73, -9, 84, -45, -92, -17, -101, 2, 93, 43, -43, 47, 73, 120, -14, -79, -24, 14, -28, -11, -125, 110, 89, -65, 125, -46, 90, 56, -39, 90, 49, 74, 1, 35, 30, -112, 93, -103, 23, 83, 48, 118, -16, 120, 98, -90, 117, -15, 21, 62, -24, -111, 65, 103, 105, -2, -57, 121, 40, -67, -98, -90, 120, 99, 72, 26, 69, 0, 14, 23, 122, 124, 96, -124, 29, -24, -32, -5, -73, -86, 40, -29, 31, -85, 5, -51, -21, -62, 116, 11, 3, -53, -123, 81, 109, -97, 58, -67, 101, -124, 25, 105, -77, -108, 111, -85, 72, 23, -120, 56, -116, -103, -69, 89, 57, 79, -7, 58, 76, -21, -59, -33, -123, 112, -74, 79, -84, -125, 112, -92, 32, -48, 50, -117, 79, 92, 1, -53, -48, 97, -60, 37, 40, -104, -65, -62, -116, -18, -115, 101, 118};
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
    msg.setTimeStamp(0.40997429664144935);
    msg.setSource(55U);
    msg.setSourceEntity(178U);
    msg.setDestination(9801U);
    msg.setDestinationEntity(167U);
    msg.req_id = 19583U;
    msg.ttl = 4804U;
    msg.destination.assign("YQXUKRFZAZIDDPBNEXSMFNYAEDMXQSPCHDJPKVGTYLROUXWWRPIDRURHTQRLMTSYTVYBWFVBLIORSZHBPJTCPKWDWONNWEHADZTZIFUJGSJBEIXZUKLMVBVJQQOQCLESYCAGUKJOUTFKKREGFJCCSNQOMNDDYTNWHBLFEGVXJDQSXCYMVFGOKBOMHSAWLMANZXHXRSVPKVIZOOPJLIBRGXAYUG");
    const signed char tmp_msg_0[] = {-14, 73, 114, -31, 33, 92, -118, 0, 81, -39, 5, 75, -73, 9, 106, -107, -61, -39, -34, 104, 62, -34, 60, 26, 14, 51, -62, 53, 23, -36, -104, 46, 42, 40, 117, -7, 78, -16, -65, -99, -54, -101, -119, 32, -30, 86, -91, 36, -113, -14, 121, 72, 125, 19, -68, -108, -91, 115, 75, -12, 92, -126, 110, 82, 51, -110, -85, -17, 85, -98, 72, 28, 87, -44, -124, 48, -87, 70, 50, 60, -56, 120, 29, -118, -40, 126, -112, 10, 61, -15, 46, -61, 24, -78, -69, 82, 76, 19, -76, -28, 79, 22, 90, -118, -30, 73, -39, -80, 120, 45, -95, -121, 61, -59, 69, -24, -107, -56, -9, 42, -53, 109, -83, 71, -9, 82, 77, 126, -19, 122, -65, -22, -63, -73, -68, -10, -59, 62, 87, -78, -41, 124, -45, -97, -29, -70, 94, 71, -96, 57, 44, 71};
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
    msg.setTimeStamp(0.6883504178411206);
    msg.setSource(55310U);
    msg.setSourceEntity(243U);
    msg.setDestination(44607U);
    msg.setDestinationEntity(34U);
    msg.req_id = 53756U;
    msg.ttl = 64085U;
    msg.destination.assign("YEDKCBKHSDQPINVTWKMMFKXQQTOKTNJPISUMSGBZTUWVHEHPRFBNDWKXZKIDSCFZAT");
    const signed char tmp_msg_0[] = {51, -81, 28, 92, -121, 76, 17, 3, -36, 3, 25, -15, 72, 95, 61, -72, 84, -112, -66, -80};
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
    msg.setTimeStamp(0.8153223662164268);
    msg.setSource(30303U);
    msg.setSourceEntity(62U);
    msg.setDestination(38604U);
    msg.setDestinationEntity(102U);
    msg.req_id = 40290U;
    msg.status = 136U;
    msg.text.assign("MPYNCJTRHNJOEKLFZOCBODTBAPWYCQQZRHDXPQFOKLGVPIYKWSHPFXFBIGIAHJLNXKXBFUWEGLNNCMVQYKYIUOSDPLTFTRQBSVRMYJZAWEAW");

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
    msg.setTimeStamp(0.22389105611428672);
    msg.setSource(30618U);
    msg.setSourceEntity(10U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(113U);
    msg.req_id = 22151U;
    msg.status = 111U;
    msg.text.assign("VHKESRJVOUZXRIEULHWAOKDNUWWFRAXAFZDFSQNTZVPULTYSNMYBLXVIZLEQAJBVUNYHTICDGYVLAUBEZWGCGNJUCPRLOYRZMYTZOWHIIZKRWEFGUWJYMPTRKJQPRPEGSQFPSKMBWHFONAIQTBVIKLSBFDVHJOQQOCHFDDYDLEQWDITAXPHT");

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
    msg.setTimeStamp(0.40685992119591585);
    msg.setSource(20174U);
    msg.setSourceEntity(119U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(171U);
    msg.req_id = 3928U;
    msg.status = 135U;
    msg.text.assign("EESOLJJKSFJRFVVIVUVXQSXEYYTJWDIPLKSVBUQGBUSPAXDEHWRRSNOSVRUWNTFHAWZKBZDXUMOHCMWSTFZFODZNL");

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
    msg.setTimeStamp(0.06675581595679492);
    msg.setSource(8208U);
    msg.setSourceEntity(242U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("DLTVBOPSDSEKWFKPYQLWCTZUXMPRWWWHANRUONZCOXVDUHTYXVCECAZVFUXVQLXNCTQCCJZSHRPMYJNIKRDGJIUSIACCHVNQAUYTLDVXILY");
    msg.links = 2364091652U;

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
    msg.setTimeStamp(0.5040797168375073);
    msg.setSource(16626U);
    msg.setSourceEntity(186U);
    msg.setDestination(21558U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("RXEKXJKGVLCGINVXOFXCOQTUVRWIMPSDEOTTZVPHXLPGOBTOFEQCMOQRUATUVHCGBSMNFGPTURKSLHLLDNDHVITUEQQJAKOBZHNVFDTHJWYSXTQNRGRBQRAKFGYDXRTUZASUKAWCJFZGDUIYZBILWPZYFKJWWEACHWWDYJFOVIVBBDKWMVOCPBLGEXBNYKLRZKCNM");
    msg.links = 3204666802U;

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
    msg.setTimeStamp(0.46519470549316877);
    msg.setSource(43521U);
    msg.setSourceEntity(125U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("QSBXVDLJYROMHXZOVTOXWQKUZRWCVWFNSZMXLVLVGVNVZNYBMHTPCKWUWCHJMDKQANEJDGOZPBSVHDLMMJPNGEYAGUHTTIKRORSAAJRNXVYFUJIQOIUPHXAWKGBARPMWTIQEIWKJERTQCOCXDFJPUYLCZOHRGHTFZOUIPTDMLEHJDZACRGNXDNYFFYMLLQEBQYRSNTPSFLWYQBTPNCVJZFYAKLFEHXQGKMWGDZCSIUFOIAEIGK");
    msg.links = 3210496443U;

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
    msg.setTimeStamp(0.49709680144609447);
    msg.setSource(18004U);
    msg.setSourceEntity(40U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("GDSJYANDRKQMDTZWQVHEYXQEISACYUOTTJNPXSFOWMJPMYAUVNZHCJRWYHZKBUBRVKYINUZOJJJISCALDIQOOICWEGVKCLIGRMKBHOSPUFSXMYETWFEWAEWEJTZXQRQXTIALSDBLBXTFOLAXMVGNCXNMBYGKSGCESMLYDZLHZFTPSGGIRYMHLPBHFWNNPUPTZPMWXKPJVBXARFCRDVAFZHGUD");
    msg.action = 222U;
    msg.grouplist.assign("DTQSPWMJGCT");

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
    msg.setTimeStamp(0.5633408510997536);
    msg.setSource(54086U);
    msg.setSourceEntity(25U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(154U);
    msg.groupname.assign("EXILMHIPEITMWEEQYJPMWAPXUQKSDQZFZWOYBJOVLLKHEDPUKPFECBHEARIZQFNNVSVCVRCTXAMHCTIOUHYKGYSJHXYLOSXINXNCEIHRDGFESFWYUWFJFMGSOQPZTAGXKQSSPCWEOTZRUUWLYKOHOTFLJKN");
    msg.action = 56U;
    msg.grouplist.assign("IOKBMGABGVLXKHFLRUIQITGBRUGVMFLVZCAEKJXJVSAUMNFBZRKOWUREASWYZDSMBNDPYNQAVCFJXNLVXNAGDJLHTGDMJTXTONCKVHPLTNYGQXPKSNWDBT");

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
    msg.setTimeStamp(0.3802814580890064);
    msg.setSource(20136U);
    msg.setSourceEntity(116U);
    msg.setDestination(48906U);
    msg.setDestinationEntity(132U);
    msg.groupname.assign("UJZBZKPAYXPZUPJLTSHSXQMUYNRCJGVEUYLXQDIENZGRPJAISOLFUOOSQMIYCKPLKHRKXCWZVICHQHMROSUFZBOUSAINQFVRXHXGTMJAHAJRCWWTEVZUDMHVDGOEUCRWETSLBRBQVVMUKATFLLANQNYXYFTGIDVCLNOYXECAPSNACNJBFNQDQZODJIWQBYYWGBSGOKNF");
    msg.action = 53U;
    msg.grouplist.assign("FWGIOQCHDZRZDPGPIKKEJADAHEMTSLEOMOTXKBNMWVYJXGINJWZAMQUPMZYVEQYVPRSIYBBLSGSDACSOCOIUTETDRIQVGDFZCWUQWNKGJFSNRNXXSFSOMWZHKOCGQNWGLWZQQJQTKLVFDLCGEJLYUIRGXTITOAFJETAUECNUHVTMULDKSFARWFULAXBYKUXRSFMJXRMPKXJYMPR");

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
    msg.setTimeStamp(0.1126811206919005);
    msg.setSource(49609U);
    msg.setSourceEntity(36U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(200U);
    msg.value = 0.14800440657603586;
    msg.sys_src = 54445U;

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
    msg.setTimeStamp(0.8416687381307235);
    msg.setSource(26495U);
    msg.setSourceEntity(221U);
    msg.setDestination(5023U);
    msg.setDestinationEntity(66U);
    msg.value = 0.9401837744222374;
    msg.sys_src = 26752U;

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
    msg.setTimeStamp(0.5548948433844572);
    msg.setSource(42822U);
    msg.setSourceEntity(68U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5765326458229196;
    msg.sys_src = 10804U;

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
    msg.setTimeStamp(0.4190449614314392);
    msg.setSource(46488U);
    msg.setSourceEntity(141U);
    msg.setDestination(29480U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6713375647525086;
    msg.units = 182U;

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
    msg.setTimeStamp(0.422205799315009);
    msg.setSource(2553U);
    msg.setSourceEntity(26U);
    msg.setDestination(19U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2959803465674147;
    msg.units = 251U;

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
    msg.setTimeStamp(0.8595662290263559);
    msg.setSource(62546U);
    msg.setSourceEntity(189U);
    msg.setDestination(54130U);
    msg.setDestinationEntity(23U);
    msg.value = 0.849658055590328;
    msg.units = 171U;

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
    msg.setTimeStamp(0.4765924132098276);
    msg.setSource(34119U);
    msg.setSourceEntity(105U);
    msg.setDestination(47582U);
    msg.setDestinationEntity(76U);
    msg.base_lat = 0.6485604834171748;
    msg.base_lon = 0.08874617848657185;
    msg.base_time = 0.4517991119922453;

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
    msg.setTimeStamp(0.10170156331640834);
    msg.setSource(9537U);
    msg.setSourceEntity(216U);
    msg.setDestination(10885U);
    msg.setDestinationEntity(210U);
    msg.base_lat = 0.15008364404608676;
    msg.base_lon = 0.7257038283833496;
    msg.base_time = 0.2610094508566255;

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
    msg.setTimeStamp(0.4226387166301583);
    msg.setSource(34777U);
    msg.setSourceEntity(80U);
    msg.setDestination(24990U);
    msg.setDestinationEntity(115U);
    msg.base_lat = 0.8472635389015887;
    msg.base_lon = 0.4234233001892975;
    msg.base_time = 0.34225271688773107;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 38350U;
    tmp_msg_0.priority = 30;
    tmp_msg_0.x = -16006;
    tmp_msg_0.y = -6256;
    tmp_msg_0.z = -12120;
    tmp_msg_0.t = 13772;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 63225U;
    tmp_tmp_msg_0_0.lat = 0.7499289799119752;
    tmp_tmp_msg_0_0.lon = 0.1543942618312254;
    tmp_tmp_msg_0_0.z = 0.20726168079900498;
    tmp_tmp_msg_0_0.z_units = 145U;
    tmp_tmp_msg_0_0.speed = 0.8298770438215655;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_tmp_msg_0_0.custom.assign("CETUNICSASGIAJZBRKQGPOFBZKPLUWBLNDKFQOREIHTTDLDCWCRVJJKSBYBYZMELM");
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
    msg.setTimeStamp(0.44854240180736427);
    msg.setSource(19191U);
    msg.setSourceEntity(152U);
    msg.setDestination(42958U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.23161629476807477;
    msg.base_lon = 0.570497794383526;
    msg.base_time = 0.383928487011475;
    const signed char tmp_msg_0[] = {64, -17, 118, 59, -77, 120, -71, -114, -108, -90, 114, 63, -104, 9, -96, -81, -31, -10, 68, 41, 94, 28, -94, -99, -83, 28, 29, 76, -111, 72, 109, 96, 13, -96, 0, -17, 98, 96, 21, 17, -71, -87, 125, -13, 45, 91, -41, -36, 55, -12, -21, -22, 64, 125, 71, -102, 30, 68, 112, -96, 19, -38, -71, 77, 111, -114, 56, -94, 89, -124, -36, 23, 14, -31, 113, -44, -125, 46, -75, 108, -39, 64, -97, 19, -79, -124, -90, -10, -43, -124, 28, -42, 108, 78, -113, 27, -18, -81, -1, 82, -20, 111, -35, 60, 71, 4, -18, -79, 47, -35, -72, -46, -60, -15, -66, -51, -75, -98, 86, 68, 31, 21, -25, 18, -119, -67, 125, -53, 126, 52, 45, -35, 77, 2, 26, -28, -107, -89, 28, 89, 118, -22, -10, -64, -45, -92, -115, -95, -33, -100, -26, 115, 118, -25, -14, 79, -123, -18, 103, 55, 110, 45, -122, -111};
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
    msg.setTimeStamp(0.943733950253695);
    msg.setSource(62913U);
    msg.setSourceEntity(223U);
    msg.setDestination(172U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.4257119082845887;
    msg.base_lon = 0.6803946275218447;
    msg.base_time = 0.4265307556206306;
    const signed char tmp_msg_0[] = {126, -13, 1, 73, -56, 79, -120, 93, 53, -109, -10, 90, 47, 38, 22, 35, 100, -9, -124, 44, 106, 104, 69, 90, 34, -94, 23, 87, -124, 51, -79, 118, 42, 84, 76, 58, -61, -91, -94, 81, 83, 105, 40, -120, 8, -87, -118, -87, -63, -56, 26, -119, 79, -92, -10, -19, 66, 88, 98, -118, 115, -48, -68, -30, 42, -100, -28, -4, -37, 3, 42, -61, 100, -47, -31, -57, 8, 83, -28, -6, 110, 116, -93, 120, 96, -9, -122, 56, -72, -106, -126, -111, 84, -37, 19, -28, -14, -72, 70, -96, 38, -60, -82, 125, -91, 121, 9, 88, 0, 104, 62, -27, 99, 40, 3, -66, -1, 4, 77, -78, -52, -102, -68, 78, 48, 94, -117, 74, -65, -119, 15, -75, 109, -91, -53, 20, -71, -61, 88, 101, -13, -79, 15, -13, 81, -53, 14, 106, -27, 1, -75, -117, 119, -98, 28, 87, -35, 7, 90, -74, 99, -13, 49, 70, -40, -49, -49, -51, -72, -119, 18, 28, -123, -127, -14, 96, 87, -4, -84, -89, 84, 97, -95, -102, 17, -17, 124, -45, 86, 79, -112, 82, -90, -16, 24, 42, 1, 11, 62, -100, 48, -87, -47, 102, 66, -16, -58, 122, -89, 45, 25, -95, -66, -73, 87, -3, -32, 47, 7, 111, 92, -52, 42, -69, -5, 118, -68, 90, 30, 24, -24, 65, 38, -89, -96, 117, -33, -59, -38, -92, -11, -34, 51, 34, -37, 45, -12, -100, -97};
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
    msg.setTimeStamp(0.7534687986529875);
    msg.setSource(26197U);
    msg.setSourceEntity(31U);
    msg.setDestination(19132U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.6604258521428795;
    msg.base_lon = 0.812254226249047;
    msg.base_time = 0.15516624955280944;
    const signed char tmp_msg_0[] = {-47, 94, 97, 17, -47, -21, 12, -25, 100, -41, -62, 119, 103, -37, 39, -110, 40, 98, -6, 46, 118, -40, -26, 13, -118, -78, -52, 68, 116, -21, -86, 118, -45, -93, -83, 122, 120, 20, -40, 8, 90, -121, 93, -109, 109, -74, -63, -18, 69, 107, -121, -112, -28, -109, -16, -33, -76, -24, 94, -66, 81, -76, -9, -127, -3, 63};
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
    msg.setTimeStamp(0.516686192613695);
    msg.setSource(3489U);
    msg.setSourceEntity(81U);
    msg.setDestination(42298U);
    msg.setDestinationEntity(182U);
    msg.sys_id = 2533U;
    msg.priority = -4;
    msg.x = 2718;
    msg.y = -10429;
    msg.z = 546;
    msg.t = -2595;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.4485590808570582;
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
    msg.setTimeStamp(0.3946053192244994);
    msg.setSource(564U);
    msg.setSourceEntity(53U);
    msg.setDestination(56292U);
    msg.setDestinationEntity(119U);
    msg.sys_id = 47242U;
    msg.priority = 39;
    msg.x = 19046;
    msg.y = 8457;
    msg.z = -8757;
    msg.t = -21486;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 8064U;
    tmp_msg_0.value = 153U;
    tmp_msg_0.error.assign("SGEILXXTRPFOOAKYVWKCGGQNLXOQIMUVJTCPZTXUPKMHZTRXIAYFQFNYVOWVCQWFTBZKMMYACZYDDBSFESGJOCQSVHRCGSTWAVDOLRHZIIQHGSPIMFJLLLDACKEEUAKEWSVKJKM");
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
    msg.setTimeStamp(0.47463545920632955);
    msg.setSource(16566U);
    msg.setSourceEntity(155U);
    msg.setDestination(41849U);
    msg.setDestinationEntity(165U);
    msg.sys_id = 33656U;
    msg.priority = 124;
    msg.x = 28994;
    msg.y = -7577;
    msg.z = 3753;
    msg.t = 25612;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 916240994U;
    tmp_msg_0.destination.assign("KDMNUUKVWHQFAPSYYSRMDRDGTCZBHJBEVTIQPMDRYUAMFUNYMNCVMCRPSLLGQAFLFQYGTNYPWGIWSTJBGLKWCATQLYZHEJJSTVHCVFBXIHFSDBGEWBHNNDWJOHYWUNKFOUOMRUSHAYAAQEGLIDJJWUGVXZZAORWOXKBKICTRYPRQXNGQHFF");
    tmp_msg_0.timeout = 61846U;
    const signed char tmp_tmp_msg_0_0[] = {122, 110, -20, 14, -39, -116, 102, 48, 58, 30, -62, -128, 0, -90, -89, 48, -58, -48, -81, 40, -63, 80, 35, -122, 28, -27, -20, -106, 60, -20, -111, 56, 9, 29, -90, 80, -56, -2, -17, 112, 17, 61, -25, 118, -108, -37, -93, -33, -106, -115, -80, 106, 75, 15, -37, 80, 125, -47, -10, -126, 4, -63, -127, 31, 93, 90, -128, 116, -19, 114, 78, 49, -59, 113, 20, 53, -68, -70, -127, -122, 14, -45, 52, -30, -121, 89, 33, -79, -117, 0, -33, 92, 93, -98, 25, -112, 85, 15, -88, -20, 0, -6, 105, 110, 2, 99, 119, -33, -32, 82, 111, -23, -20, 87, -36, 110, 48, -115, -43, -125, -34, -77, 25, -32, 38, -102, -128, -25, -79, 93, -74, 2, 56, -117, 23, 44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5582637112812681);
    msg.setSource(44075U);
    msg.setSourceEntity(66U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(236U);
    msg.req_id = 47133U;
    msg.type = 231U;
    msg.max_size = 5328U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.46827565893871703;
    tmp_msg_0.base_lon = 0.588980477268556;
    tmp_msg_0.base_time = 0.04528355734525791;
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
    msg.setTimeStamp(0.3494210742571644);
    msg.setSource(5640U);
    msg.setSourceEntity(110U);
    msg.setDestination(53566U);
    msg.setDestinationEntity(36U);
    msg.req_id = 13397U;
    msg.type = 147U;
    msg.max_size = 59226U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.06753907988006691;
    tmp_msg_0.base_lon = 0.40542378689560765;
    tmp_msg_0.base_time = 0.6019047929013019;
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
    msg.setTimeStamp(0.9373182518421369);
    msg.setSource(21516U);
    msg.setSourceEntity(54U);
    msg.setDestination(63412U);
    msg.setDestinationEntity(56U);
    msg.req_id = 57762U;
    msg.type = 248U;
    msg.max_size = 59756U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4905351504947283;
    tmp_msg_0.base_lon = 0.9903237062312753;
    tmp_msg_0.base_time = 0.7352714826689775;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 15456U;
    tmp_tmp_msg_0_0.destination = 61625U;
    tmp_tmp_msg_0_0.timeout = 0.5910687669993625;
    IMC::Target tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.label.assign("NZNVVQXJKOUEQZRABSGTJJCDSBMEFRJTVVRUDFGWLSSGWHGCGYKQIMIDJBPJKMMSXPTTFKVBFYW");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.5587814012461426;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3216929026491867;
    tmp_tmp_tmp_msg_0_0_0.z = 0.05193996647383492;
    tmp_tmp_tmp_msg_0_0_0.z_units = 55U;
    tmp_tmp_tmp_msg_0_0_0.cog = 0.80774080276065;
    tmp_tmp_tmp_msg_0_0_0.sog = 0.4733662212221149;
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
    msg.setTimeStamp(0.5163064148831771);
    msg.setSource(42810U);
    msg.setSourceEntity(160U);
    msg.setDestination(24286U);
    msg.setDestinationEntity(188U);
    msg.original_source = 19513U;
    msg.destination = 36267U;
    msg.timeout = 0.09760781672520258;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.4372192086444717;
    tmp_msg_0.temperature = 0.3837601464144955;
    tmp_msg_0.depth = 0.580546165051527;
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
    msg.setTimeStamp(0.22452837960207506);
    msg.setSource(12654U);
    msg.setSourceEntity(97U);
    msg.setDestination(35246U);
    msg.setDestinationEntity(134U);
    msg.original_source = 7848U;
    msg.destination = 6081U;
    msg.timeout = 0.8399664086233753;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 62936U;
    tmp_msg_0.lat = 0.4274082065794257;
    tmp_msg_0.lon = 0.5816561426001987;
    tmp_msg_0.z = 0.8109724904173352;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.5235736379592161;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.bearing = 0.6111849710334087;
    tmp_msg_0.width = 0.4591290985101879;
    tmp_msg_0.direction = 76U;
    tmp_msg_0.custom.assign("YQCCIHNRFFAMZUEKAMLZZANDGEVBNSUDEPZKXQJFKPDXUIVLSOQMWZTXFTMELLAVXWEOWBCPOZNKYLYHUZVTIQURGSMZHJPPKYUXBTCNAKMWIHTZIWINGSMSUEOEYFWVH");
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
    msg.setTimeStamp(0.05289463080462298);
    msg.setSource(6326U);
    msg.setSourceEntity(57U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(67U);
    msg.original_source = 57043U;
    msg.destination = 41763U;
    msg.timeout = 0.4422985678968452;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("YZQAEBPXRVRJRGLQABCQOIEWMBHARCFQEGHFIGAJMBNSOFHTNWFCCRWZMJUJDOFBFEMZHYXVCVCKEDTRVYNBJYUAJVGZWZUMIMPPADWXZIWHZLNVCOOQJSLSDIGVLPSIMMWLUKYNVXLDDRLGOHRKQLQEGIOPUGXFNQWTAVYOYNBPFQHFXKHUPRPIHWDBDKSZBTKZTSXTIDGWAUXKSLJRKKBJHVATDCTTNUEKFOINCPZAESXQPECM");
    tmp_msg_0.service_type = 245U;
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
    msg.setTimeStamp(0.3344237756131492);
    msg.setSource(40529U);
    msg.setSourceEntity(144U);
    msg.setDestination(23560U);
    msg.setDestinationEntity(106U);
    msg.type = 20U;
    msg.comm_interface = 3576U;
    msg.model = 29111U;
    msg.list.assign("UIJVGPRHNIQEFBVZBEVZGRHJHYGDKULCMDYOKEGJPQNMFCNLMWZPWVQDYYRVDODPUHFSKFOWXMNYPEOSHAAHGZZSZSLGKCTRXXJPSBBUKXZQXLCMEQWKAPCJILTKWQUZAEECHADAEUTBFMSXG");

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
    msg.setTimeStamp(0.10002099389920815);
    msg.setSource(17492U);
    msg.setSourceEntity(5U);
    msg.setDestination(45699U);
    msg.setDestinationEntity(2U);
    msg.type = 18U;
    msg.comm_interface = 20090U;
    msg.model = 41082U;
    msg.list.assign("BFWLFPPDWSREDPJYLZQZZEIZJOCHDGUFNECXUSYXRMBMBDOMRQORRSNXYLKASKYGHJRNATLODNCSVNICWGFAQAG");

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
    msg.setTimeStamp(0.33764694548596474);
    msg.setSource(30115U);
    msg.setSourceEntity(36U);
    msg.setDestination(55793U);
    msg.setDestinationEntity(236U);
    msg.type = 185U;
    msg.comm_interface = 48246U;
    msg.model = 43948U;
    msg.list.assign("MQUBOOIARNQDQWADDOPANPSKQQAVYPHEJYQVAESPKINSDBVERYMAZBRVSYFDREUVLXLKCEGTJFFXHPIVUCJADKFMGLBRNRNN");

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
    msg.setTimeStamp(0.37982880110444284);
    msg.setSource(23666U);
    msg.setSourceEntity(111U);
    msg.setDestination(8353U);
    msg.setDestinationEntity(178U);
    msg.type = 189U;
    msg.req_id = 2202588073U;
    msg.ttl = 48847U;
    msg.code = 52U;
    msg.destination.assign("TJAOJFGWSGWKPELACIUMAQTWNHHTBXEOIZHFTFVDEWNYVQKWXZIKGRRXKUIOIGDZWA");
    msg.source.assign("UOGWVCLHVFBGXTYCOHRJLZLEYLWNYFHFZJPGOVWLAVQSOCKYTHCFGCMPXDVTZEIASRSKOLQQKKOSRRTMUEIMPNXYJSIYAEVPQTNAEFJALZSLMZQDIZVMRWRXCCUWYMKMMGXPFDJWKWUUQVDISBQOEDBDHHCUCAUYICNOGNGNXYJOIHQXDRLHBQLDWVUEZFSQAZUEERFRVRPANXPMWTBMDPTKKBTUBKSIPOEXIGYBZWPGBFDIJTBNJAJNGJHZ");
    msg.acknowledge = 186U;
    msg.status = 198U;
    const signed char tmp_msg_0[] = {87, -93, -87, -34, 125, -102, -42, 74, -76, -36, 93, -61, 21, 82, -89, -3, -25, -86, 48, 93, 71, -54, -8, 88, 68, 76, 38, 4, -68, -95, -53, -46, -25, -30, 104, -82, 86, 80, -93, -30, 40, -4, -38, -22, 67, 119, -117, 52, -121, -73, 75, -29, -69, 30, 120, -34, 100, 103, 33, -113, 66, 24, 5, -44, 8, 45, -96, 126, -32, 41, 93, -124, -61, -73, 32};
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
    msg.setTimeStamp(0.3716896970177398);
    msg.setSource(26991U);
    msg.setSourceEntity(144U);
    msg.setDestination(53194U);
    msg.setDestinationEntity(102U);
    msg.type = 87U;
    msg.req_id = 3316389133U;
    msg.ttl = 63217U;
    msg.code = 236U;
    msg.destination.assign("EVHNZUGHXGADEKJYVVTWCCCSPSNADMDDCPNOUALVLFQBUXHGLXFZGJDHQGPVRFUORMPFCTXLSBSEYKSYVLXSWBMWFJIFETTCDKNMUQFHCWHHKKBRLOMVZPCZQPOUAFGDJOFNDCZMGRUSAIORIGKZBCBTNZTMBRNEBMZEBBURNTL");
    msg.source.assign("ZXCYAQRKWJEIPNMUQBEQHFXPMVXNZLXCZIPABWTLPIERKOMIUZLSVMSDKTICKORNLWYFCHJZVLQGRJUXQEHUYRBWMOKEGFZJVBEZFRMVMHDAGYSNYHGSOGZGADSUBHWQUYJISJRPQCSSTFDCFBDIPOZIAPWYRKWBKNTCVDTGHSRHCMXWUASVIQTVZOULNNMOGXLDNHXBFTEJUTKQCAPRTLOUKGFWGLQVEN");
    msg.acknowledge = 14U;
    msg.status = 126U;
    const signed char tmp_msg_0[] = {-86, -42, -78, -74, 25, -40, -61, -121, 13, 65, 115, -42, -86, -94, 16, -52, 25, 29, 79, -37, -116, 119, -5, -79, 100, -90, 90, 20, -86, 94, -8, -66, -46, 103, 30, 6, -11, -62, -40, -112, 80, -36, -5, 15, -40, 2, 36, 81, -55, -127, -93, -39, -60, -93, 11, -114, 89, 108, -98, -91, 83, -14, -32, 57, 0, -18, 87, -42, 61, -6, -14, 43, -122, 68, -26, -83, 13, -123, 69, -110, 105, -2, -66, -10, -12, -122, 51, -80, -18, 49, 35, -36, 37, -17, 99, -65, 14, -74, -22, -119, -74, 13, -19, 20, -12, 22, -65, -27, 85};
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
    msg.setTimeStamp(0.8429702373112317);
    msg.setSource(45710U);
    msg.setSourceEntity(74U);
    msg.setDestination(16U);
    msg.setDestinationEntity(197U);
    msg.type = 169U;
    msg.req_id = 2927361883U;
    msg.ttl = 58020U;
    msg.code = 72U;
    msg.destination.assign("EWMRCPELTNYAMIDAWYVHORGQQFKQSBOWDJNDRZCOCSSBTPNIZCEYBTZKHFZHUHS");
    msg.source.assign("GQLCBKUDRFTYKRNTTSUWNKERSPBMYTSNTRMQUJBFSNHDQQCKXVPVKJWLSXQEWDVMYHBDKGVRZBXQDZZEOLCYVPMUKYARNIZIWFCUJNWHYPVAIOMUJNDDBTEJXPLXMFCTJAXLMESGOGEDUSFWIHOHQGDLNOOLYVLBZJIHIMZEHGJEYBTZIVKFXIOXNGEDCLRFHPWSGOPIBURQRZXJCRYEFWLMMOUFTAKVCAJHQXQFAIHAABUCNAS");
    msg.acknowledge = 170U;
    msg.status = 131U;
    const signed char tmp_msg_0[] = {-1, 43, 7, 91, -99, -107, -105, -74, -12, 83, 97, 46, 0, 39, -13, -101, 5, 7, -108, 61, 69, 105, -9, 18, -58, 38, 41, -120, 102, 1, 54, 91, 47, -25, -8, -60, -57, -35, -111, -63, 39, 97, -33, 39, 71, 3, 20, -28, -42, -67, 63, -126, -41, 80, -52, 99, -107, 21, 62, 69, -108, 120, -59, 71, 108, -26, -55, 6, -104, -105, 97, 78, -90, 72, 16, 40, -58, -100, -92, -73, 100, 94, -1, -22, 37, -7, 82, 49, 20, -127, 47, 30, 104, 126, -12, -125, 82, -42, -124, -126, 120, 68, 5, -54, 8, -51, -109, 104, 75, 44, -19, -12, -25, 0, 43, -107, 117, -42, -89, -39, 6, 25, -47, 45, -56, -68, -41, -95, 85, -70, 64, 51, 74, -35, -7, -14, 115, 102, -117, -86, 20, 30, -40, 31, -1, 63, -123, 39, 22, -110, -91, 99, 91, -82, 11};
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
    msg.setTimeStamp(0.09033999682445837);
    msg.setSource(28443U);
    msg.setSourceEntity(174U);
    msg.setDestination(50532U);
    msg.setDestinationEntity(172U);
    msg.id = 134U;
    msg.range = 0.8302054503821681;

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
    msg.setTimeStamp(0.9336930237155677);
    msg.setSource(13079U);
    msg.setSourceEntity(90U);
    msg.setDestination(9343U);
    msg.setDestinationEntity(93U);
    msg.id = 231U;
    msg.range = 0.0504783027177691;

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
    msg.setTimeStamp(0.04830127011090657);
    msg.setSource(62981U);
    msg.setSourceEntity(156U);
    msg.setDestination(15462U);
    msg.setDestinationEntity(242U);
    msg.id = 65U;
    msg.range = 0.572940761178483;

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
    msg.setTimeStamp(0.4825268511949222);
    msg.setSource(23024U);
    msg.setSourceEntity(92U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("VYXFOSYAMEPXTACUGBTCYQGPUICYLDKQBRTISQCFHKNOHBHMJMEXWVWOWEDORQZIBCXXNANJPTNLQVJVAOQXDMYSXTMLMNXVALBEJROQGJBKPSHZDAWFIKCOEOVZ");
    msg.lat = 0.8223984404306944;
    msg.lon = 0.4557408955426897;
    msg.depth = 0.8582764588942472;
    msg.query_channel = 185U;
    msg.reply_channel = 52U;
    msg.transponder_delay = 72U;

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
    msg.setTimeStamp(0.7730736766094327);
    msg.setSource(32298U);
    msg.setSourceEntity(246U);
    msg.setDestination(12121U);
    msg.setDestinationEntity(205U);
    msg.beacon.assign("YSNPGOOFGNTMXRWMIUATTBZTSWVVUWVPTYSPZOOINSCMFKEFUXACDABYMPEEOLDZQRNHXSIIHLHIVXBDWRUBSLLJCYPPHYMWDVDORMUYADIICVCYIFMAAPRHDQZVUVVUFOJPAZLMJGGATRC");
    msg.lat = 0.8065905823274349;
    msg.lon = 0.15090566014163675;
    msg.depth = 0.2323818765159923;
    msg.query_channel = 111U;
    msg.reply_channel = 231U;
    msg.transponder_delay = 171U;

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
    msg.setTimeStamp(0.4480553318923777);
    msg.setSource(25734U);
    msg.setSourceEntity(143U);
    msg.setDestination(37010U);
    msg.setDestinationEntity(30U);
    msg.beacon.assign("HXLBTCAISNVEESINLQNLQKHGZBZNCEMQKWMBIXAOHBMNPUKGGPNVWSQWHSFGKCZOOGCDPWPVNCPCKUTLFYQKIVOJEYMPOSXQSELFETDHUDZYLIFAYJJIXFQURRSCTTIBZXAPJJSEVS");
    msg.lat = 0.9498526642747729;
    msg.lon = 0.7059978169903492;
    msg.depth = 0.525737527561407;
    msg.query_channel = 235U;
    msg.reply_channel = 202U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.8308426307241672);
    msg.setSource(20140U);
    msg.setSourceEntity(47U);
    msg.setDestination(36280U);
    msg.setDestinationEntity(198U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.13257817520967363);
    msg.setSource(19031U);
    msg.setSourceEntity(174U);
    msg.setDestination(33565U);
    msg.setDestinationEntity(131U);
    msg.op = 83U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KBSANTDXSQNUPBYDPLPVMRYQVHFFEEWWEGHSHFMLFGZOASOZUGKATGSICRBTSXDAZJQXWCZRFMBOCTTAYNWBUMWWJAEDGDDHFQUZILXROJSKBIPHU");
    tmp_msg_0.lat = 0.008805233781570942;
    tmp_msg_0.lon = 0.16392693368410582;
    tmp_msg_0.depth = 0.06288954640749567;
    tmp_msg_0.query_channel = 152U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 77U;
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
    msg.setTimeStamp(0.11907291242089146);
    msg.setSource(50196U);
    msg.setSourceEntity(189U);
    msg.setDestination(23374U);
    msg.setDestinationEntity(170U);
    msg.op = 76U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FDELWTVMAUHFVNSQFFZBCOUHPJPYRKRLXTVCIYOXDWDVHRAEPBTAJJSFDELMBCTOQMXUKDHCODHGYSYZPQHSUGDVICQLUMOLEDIWZSISUKPIACVJFSPPNTNNBZGQKEPGRHAETVNBRLFDJYUSHQYOWXRJSTCJAXBTZZCKHFEEYQKYBVIJNUTMBNAYOIFJSG");
    tmp_msg_0.lat = 0.17928315155610774;
    tmp_msg_0.lon = 0.4701750870564878;
    tmp_msg_0.depth = 0.7739367510296444;
    tmp_msg_0.query_channel = 118U;
    tmp_msg_0.reply_channel = 44U;
    tmp_msg_0.transponder_delay = 74U;
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
    msg.setTimeStamp(0.7005395052492476);
    msg.setSource(57709U);
    msg.setSourceEntity(46U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(194U);
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.09360137869276064);
    msg.setSource(32894U);
    msg.setSourceEntity(149U);
    msg.setDestination(13049U);
    msg.setDestinationEntity(221U);
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.12693210651656706;
    tmp_msg_0.y = 0.5433607020888507;
    tmp_msg_0.z = 0.3609669294474984;
    tmp_msg_0.t = 0.6786103311251932;
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
    msg.setTimeStamp(0.104779548662288);
    msg.setSource(3541U);
    msg.setSourceEntity(8U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(97U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.23387413127181234;
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
    msg.setTimeStamp(0.24725321837314607);
    msg.setSource(43463U);
    msg.setSourceEntity(20U);
    msg.setDestination(22413U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.04326071238625029;
    msg.lon = 0.2483766112088982;
    msg.depth = 0.5706962414779401;
    msg.sentence.assign("JJVWSRWBBXYJDEGPFTPEJSDWPWZMUNKLEPRTVFOQVFORPOIMHWBEYRGALLCQXGUEJVHATQBJBLFLNEOXHTPHISHXIIKCBNPKABMCUKCUYWMVVRUFQFPAUYFTMXGN");
    msg.txtime = 0.01613896657390501;
    msg.modem_type.assign("SURPQLMIHDCTNTYWOANKMEFFPZIKTRETGUQQSQXROPQEPQWMFMVVEJHVWLAPSSRLDJKXSWBBARGNFZKJBU");
    msg.sys_src.assign("VWPWMXPCHQPQVBCFSDPGUTXTINERWLYDTHLUMWHSSXXNSSRNRLBEOCMAOBFDKAQIIGHYGDQPNIFZZYBFEBOKSOFDOTKHTZNEAFLXEQBTYDLWLPNOAVRJJVJKYUHJ");
    msg.seq = 51415U;
    msg.sys_dst.assign("YWHUXUJMLSBQKMAAQUIXIVSCEDSVWZVCTGTEDMCFLKMJGKRNMIULRRSFQ");
    msg.flags = 229U;
    const signed char tmp_msg_0[] = {50, 21, 51, 90, 99, -36, 116, 104, 104, 17, 9, 50, 27, -115, 4, 46, 57, -8, -16, -52, -64, -105, -92, -95, -44, -76, -27, -100, 61, -107, -86, 9, 78, 85, -51, 38, -43, -95, 3, 48, 91, -78, 6, -13, -102, 94, 105, -29, 66, 56, 65, 100, 97};
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
    msg.setTimeStamp(0.4276693708414816);
    msg.setSource(9587U);
    msg.setSourceEntity(217U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.9573784880968639;
    msg.lon = 0.5270861148195527;
    msg.depth = 0.22890542196648966;
    msg.sentence.assign("SKEEPORZKMFFFCDYFCGONPODRBGOIXAZXMVURCHYPMWYGCJLYVHJAQVXAVYUKZQDXIFKAESIXDLHUXGIGDFZLTPMQXWVZVPYEQAGAYTFGEZERSOSHKPNCRRUFAT");
    msg.txtime = 0.028761826919696865;
    msg.modem_type.assign("AXUASVSVJRPNBZJZIZVRMWEWPVLUQYLKDAYIUIQGOPFRBEVJBXZRFRKXIWCOANVYRMOGCPSCRETJT");
    msg.sys_src.assign("AFZOVGFIBYRMIPZANNMWLXXMDPBIHEGXLJWPRNUKIKGMQPGXNVUDCOWQWWHOJVIWADSQRNBXUSYDEAFYWSLVGOMEQKECRJXFVLKBVZZELBOZIFDLEKZCZEAKHPVKXRELJTIOSYAJYOFFCXLXWUTGIVFSNTEQQDZPYDHSANHRRRMZYSAQBKKPQMJOOUJEVTACQJKJUHTWDDBSVILGCMSHGIXJZUH");
    msg.seq = 18826U;
    msg.sys_dst.assign("HJXIXSZLNUQNVYQIPUTAPWZWVLJVYLWVQLDBOKEDVYHCOVPUYXTCARNISHNSFVSLTRUJFSJRUPVCOLTDAEQQERZRIXTEFBOWWSSKDMQFWGOGSHPCRWMEYFRAHRFJZBCKURCVZNCHAILGOWTXGBFSXZLFANJKJHOBMHUXIJDPGDQUEJKTXYXKNXZGMPOHIGMDEBIIUGYNBRKQHNPWMOZGT");
    msg.flags = 250U;
    const signed char tmp_msg_0[] = {106, 55, 104, 73, 98, -37, -128, -2, 4, 77, -5, -102, -17, 45, 17, 90, -24, 102, 64, 119, -20, -106, -64, -123, -100, 62, 44, 63, 2, 92, 26, -21, 76, -17, 116, -36, 124, -45, -77, 41, 19, 118, 62, 34, -124, -90, 52, 12, 20, -77, 51, -26, -124, -35, -104, 82, 55, -126, -35, 102, -118, -54, -13, 21, 98, -98, -66, -11, -70, -43, -102, -100, 55, 37, -6, 2, 18, 2, 1, -54, -84, 119, -23, -67, -19, -92, -79, 83, -115, 89, -44, 92, 90, 86, -29, 124, 95, 70, -115, -114, 74, -76, 60, 65, -126, 123, 61, -104, 50, 15, -119, -57, -67, 25, -42, -120, -30, 115, 40, 29, 56, -115, -28, -123, -125, 17, -68, 102, -118, 12, 14, -19, -2, -86, -47, 103, -104, 99, -10, 16, 53, -78, -44, -45, -40, 110, -93, 90, 56, -126, 3, -33, 11, -102, 107, 25, 71, 57, 118, -77, -79, -49, -58, 66, -2, 1, 59, 49, -96, -121, 124, -100, -88, -64, 29, -68, 103, -39, 97, -32, 77, 5, -38, -87, -121, -116, 98, 54, -76, -7, -28, 83, 20, -109, -32, 30, -3, 79, 18, 97, -108, 87, -58, -25, 50, 29, -72, 19, 50, -111, 41, 50, 13, 66, -121, -92, 47, -75, -128, -60, 110, -38, -95, -88, 57, -78, 38, -10, 10, -22, 20, -17, -1};
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
    msg.setTimeStamp(0.8907229788113096);
    msg.setSource(42156U);
    msg.setSourceEntity(142U);
    msg.setDestination(37823U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.2978069336778837;
    msg.lon = 0.5982429165343096;
    msg.depth = 0.532986798607994;
    msg.sentence.assign("MVIHUSJKBKJDWEUHEDKZRUBOEJWOTQXWLMPHCUNENMBMUPTIZPDVEL");
    msg.txtime = 0.3351736825996142;
    msg.modem_type.assign("RMPHFDFGXDZKSCLMEJYUQOYRPBVXWUDSAUIBKESEAJBTGVQATMEKZOUNJVCZTVJXXWUFOEDENQTAOXCKLQUMWVQLERRGIJBZINLMVWDSTIELPOTWXMUYFAZZAPTOIUBUPQHBRYNB");
    msg.sys_src.assign("EKTGWJLTOYIFOPATVAVIKLJQIDBXQLZGXFPEACCPNRDSNSKENEIZVIOZUMFSKMFUIMZTSYATZJUIYBLESWEKHXMRBDHNXYDMXCXNYPXJDNBDBORFHLPUCYZDIGVWIHRNKFGESWIKKUQWMGBXAADTJFZLZQPXRQHYNSZMUEEVFDQNUHOUWQFVZVAJWLYWTEQRGTCQBVR");
    msg.seq = 12889U;
    msg.sys_dst.assign("JVXIETGXDTLNSSWKRPFAQDNIZEINVLTYFXSSOYHLXZJJQCHQIRUWNXYELEIHPHLUQTXGFBTZWCGVCAFOBHEKUC");
    msg.flags = 116U;
    const signed char tmp_msg_0[] = {-114, -40, -75, -23, 81, 30, 64, -105, -51, 25, -108, 47, -68, 61, -30, -27, -105, -39, 81, 85, -33, 57, 124, 29, 70, 74, 69, -84, -97, -29, -46, 72, -87, -58, -73, 32, 77, 43, 33, 104, -63, -18, 27, 124, -43, 52, 77, 119, -124, -126, 102, 47, 87, -113, 14, -43, 101, 24, -21, 95, 105, -92, 3, -112, -44, 103, -104, 59, -119, 40, 94, 7, 88, 90, 49, 50, 36, 102, -95, -104, 40, -56, 118, 23, 101, 23, -86, -3, 55, -28, -122, -86, -60, 67, 115, -53, -109, 73, -3, -73, 7, 78, 70, -75, 97, 86, -3, -70, -77, 117, 30, -119, -117, 92, 63, 112, -44, -39, -111, 78, 3, -124, 76, 48, 83, 29, -109, 5, -23, -68, -26, 97, 36, 110, -21, 34, -45, 115, -64, -24, -100, -43, -96, -14, 25, -24, -3, -123, -2, 21, 119, 84, 106, 5, 60, 84, -97, -20, 52, -17, 80, -52, -22, -46, -26, -112, 114, -121, -23, -30, 10, -125, 51, -102, -109, -128, -32, 7, -110, -100, -48, 110, -84, 65, -69, 120, 86, -127, 91, -74, 44, -66, -117, 80, -84, 101, 84, -3, -61, 94, -76, 18, 86, 35, 121, 97, 105, -15, 75, -119, 76, 107, -109, -44, 103, 106, -105, 31, -50, 58, -2, 26, -88};
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
    msg.setTimeStamp(0.8937228308949043);
    msg.setSource(63450U);
    msg.setSourceEntity(132U);
    msg.setDestination(45895U);
    msg.setDestinationEntity(80U);
    msg.op = 120U;
    msg.system.assign("ISSDDLUICPSSINDOHSPONBCBPTQDCSOTGHGAKTDXZPURMK");
    msg.range = 0.4685923070975898;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.4690979920967563;
    tmp_msg_0.i = 0.20686628198965196;
    tmp_msg_0.d = 0.8463979270435097;
    tmp_msg_0.a = 0.3010819767135333;
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
    msg.setTimeStamp(0.6959553230128257);
    msg.setSource(58270U);
    msg.setSourceEntity(85U);
    msg.setDestination(25096U);
    msg.setDestinationEntity(98U);
    msg.op = 64U;
    msg.system.assign("IPGRUPBSKMUXFCWWMJLIAZXHHUUQGTKMVYTVGTLAHFZZRTKINDHUYZZVLETOKMPPIDAXCASROMKXCPFSMOAXSCWCVMBNTLRCSEUUSXNRNKZEOELFKZSRCGIQIDWCZAOQWJXFTVFGBVPWFLPJSBNJYACQQHZXBKNLNQTDLMCLFQIHDGDDHJKJE");
    msg.range = 0.08808457385227852;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("SBYIVIOIGNHOEFKREUCRDFGSUWCPPITSMZVEVHYYZQASDBZITNBKWNUAFLYJBGFCKISHASAFJKMQZFBTCJPKXIKRXZDRXVAHQUXGOWJNEJLZSINURTNSTMTRPQUORWMUZUFJQDDRTXOAMLCACULKBRZHVJGOOBEHDQMLPJOISLVTEOTYWNHCLNWUGHMIVEZGEBMRAKWQLAEDQXYQYCVBYPHXEGFGJSZXKHNFDNVPYPFYVW");
    tmp_msg_0.service_type = 226U;
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
    msg.setTimeStamp(0.3370113872942341);
    msg.setSource(64167U);
    msg.setSourceEntity(63U);
    msg.setDestination(53368U);
    msg.setDestinationEntity(6U);
    msg.op = 211U;
    msg.system.assign("FSTVSGQGBLRJWRTOHUKATECMOICUOOWLWJGUQWNFMMOZKGJYSHAFTNHIJKDUNLXCIOAZEQBQKEBBPYPFZHCNNKVWZSLZYHTMNAVXJHPDQLQXRZJVBVWMIUAITKUBYITIEUEERVTFLXIYBKAPGAGXJPPLWYMJHIWQXMKVFEWGQAZKLHRMFROHEOCJ");
    msg.range = 0.990217464545396;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 154U;
    tmp_msg_0.error.assign("QBNMLAAPWIESORHNTQHQUZKSPCJNFKIDADJFUTTOHJPPVYPJZLYSOJJTVQMZJGCBUMIOWEVGYDEEHCZHWUWNCHWJPTYYZSCXRSEPXI");
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
    msg.setTimeStamp(0.775982307144216);
    msg.setSource(50747U);
    msg.setSourceEntity(121U);
    msg.setDestination(23108U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.28884536540838146);
    msg.setSource(24799U);
    msg.setSourceEntity(33U);
    msg.setDestination(31321U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.22353665882991292);
    msg.setSource(49136U);
    msg.setSourceEntity(244U);
    msg.setDestination(49439U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.2403528961519994);
    msg.setSource(2202U);
    msg.setSourceEntity(127U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(253U);
    msg.list.assign("LLUADVYRZEBBVBIJEXKYYVBKDLPOXMTO");

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
    msg.setTimeStamp(0.7701285047997376);
    msg.setSource(63723U);
    msg.setSourceEntity(33U);
    msg.setDestination(59330U);
    msg.setDestinationEntity(160U);
    msg.list.assign("YGOJAPZCIQPOACDKPKSHHITWPTGSSVLKEJCLEXKNVHUVFEELDSOEMNKDAVGMHFYOCORIDKMFCZXBCMUYGQNLJEIQRBCNRMGDXUJGIJGNPRLWVLTYAZVJUXJTXMHNTPWLFLWBAUUYXK");

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
    msg.setTimeStamp(0.40378079572857073);
    msg.setSource(12408U);
    msg.setSourceEntity(86U);
    msg.setDestination(19738U);
    msg.setDestinationEntity(196U);
    msg.list.assign("KHGKYVVKVSRBVHEZJUTOVHEOINQAGUEGPLNOIMBQPSVMAAGFLMJHLTBLQCHGETOBCCGJAQMLWJAXCPMZDYZBZFYMLNJBZIRDIW");

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
    msg.setTimeStamp(0.9668215337456969);
    msg.setSource(23403U);
    msg.setSourceEntity(94U);
    msg.setDestination(59346U);
    msg.setDestinationEntity(116U);
    msg.peer.assign("HDRUFEBJLNZAGIYSCNUETHBQTZRWBTUABJCDFOLZKRUFSJRKYXJVPXCPDTBALVYOHPWZTHDCCMPNPNBKLGWKFYSNRQLVVOVUYAQJWTCEDVMGBFHBMXUQIZRPBMKQXDIOZFCWMGTFUKFZPSHIFGGQSPOSITSMNUZRYURAYTIOEMNKEXKLYOANLRNIPOQX");
    msg.rssi = 0.9275905226584996;
    msg.integrity = 27990U;

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
    msg.setTimeStamp(0.5871692031540516);
    msg.setSource(9602U);
    msg.setSourceEntity(37U);
    msg.setDestination(35035U);
    msg.setDestinationEntity(254U);
    msg.peer.assign("ASDIHXLQATRWXKBFJLRHQRVYJEEECMTLGENIZICVYVTATIXBATAVBBLOVYNOQFJBKYDZIIUDWYDRZDGBUHNXGGODMMWJTHUMZVTRZFBPPDFROOFWMSPJRMAKKKLGBPDLFMWSJOUOFILEIUEVMRHNHQDJPCAKXNKPKNCHAFJMZEWPZPGBUDQXHELCQCGVIXRPGSSNIYYAVQZYFHFJY");
    msg.rssi = 0.9793976445852929;
    msg.integrity = 45806U;

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
    msg.setTimeStamp(0.6888084810774725);
    msg.setSource(55684U);
    msg.setSourceEntity(150U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(167U);
    msg.peer.assign("FSAVOPRWXWNMRJKBOWGNRYBBARYN");
    msg.rssi = 0.3390246519847633;
    msg.integrity = 61315U;

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
    msg.setTimeStamp(0.9181352603660581);
    msg.setSource(12092U);
    msg.setSourceEntity(233U);
    msg.setDestination(64881U);
    msg.setDestinationEntity(234U);
    msg.req_id = 25308U;
    msg.destination.assign("XGGYJALKILTAQPDUJKRAJEIMFNYNGRVEYSFQYVKCWVMQQEOVZHYTCQNBIWIRZNHFFPXSSPPMOGVXSQRLHZDWLVGCLBRHAORCDDJQGWSUVYXMAYFBSFGUZCTISTPIOLPDTKOBYBJNSTAZNDJFWJKMOPLNRXTEHIKIEKJDRUOZVYDHJNMLFBRKMSAXRBWCBQVAGGBWEOWHPCCKXZXJYUKFGHETZHQXUXCNEOLMUTAZPIBQIOZTUEVMLAMSEDWUW");
    msg.timeout = 0.2336969151621634;
    msg.range = 0.17468792652219634;
    msg.type = 236U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 48U;
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
    msg.setTimeStamp(0.6054082359321237);
    msg.setSource(13916U);
    msg.setSourceEntity(231U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(122U);
    msg.req_id = 4926U;
    msg.destination.assign("WQTJANOCKZNESXGNAKTZENVFHFRLOMKUPPKTXJFSFRGDRPXRSJEOJDSSCJLYPVCRZVTLMXBHYWRYONSATYUCZQGIPAHDSDCJVSKQQBRAUKZVOJHFETDHVHNMRNNMWMDUCUCXIUPAQNQYFYKPDXCEIYSSQLUXDJKWUHXVTMLIVBIOTWPYAUZHQTVBBCJILROPGIAVZGQNODIHBMXUQYCOFGWMZKLGFBGXIOELGWLEEDZEMPMWIJ");
    msg.timeout = 0.1879780034909907;
    msg.range = 0.4527854053179933;
    msg.type = 21U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 846947533U;
    tmp_msg_0.state = 6U;
    tmp_msg_0.error.assign("SIMBUVRWJLFNZPPQCENCTCAJELFQUXKKOBFOLVCHNWTTYMUPYCEMTIAGLKQJNTFQXUSBOWSCEQKJYLHLHODZJCDAFNJQKWAJIGTYIBORRRGAKVIKEZUUTZQPAYDVWIOSLFSOMXDNAMGNIJPOWPGPYARHJQHVHRA");
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
    msg.setTimeStamp(0.5549974298033648);
    msg.setSource(26266U);
    msg.setSourceEntity(73U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(182U);
    msg.req_id = 48236U;
    msg.destination.assign("IXJNQVIWCPTBHIAYOMJAXBNSPUOXUWZHASTUQIAGUTCAPEYUJWPFGKMDYMHZRSNRQPGWRKXSZOWGNCDOAODINBQVLZHGLSKWLTFXWYLYQYMBGPTZLYVECJDGFUIFKPCUJKPYHWSMUXFMNSERVHILZTJJFB");
    msg.timeout = 0.9793658571358832;
    msg.range = 0.6382150820000895;
    msg.type = 172U;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.09178537511973339);
    msg.setSource(47643U);
    msg.setSourceEntity(150U);
    msg.setDestination(56894U);
    msg.setDestinationEntity(7U);
    msg.req_id = 35327U;
    msg.type = 115U;
    msg.status = 46U;
    msg.info.assign("IGITXCPUOTKZETRUGYRRTOPFSIVTDGCNAGEADRTEPLOAEDBADCLRKCGHITMXUOONCFDBBXGVZITFRDFEVFBPHZIZWOMKMANORUQLPUSGFPAUJWDBAZHNVYYLSFNSIXIKM");
    msg.range = 0.7760448434079851;

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
    msg.setTimeStamp(0.19136737983313135);
    msg.setSource(31365U);
    msg.setSourceEntity(206U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(2U);
    msg.req_id = 13106U;
    msg.type = 55U;
    msg.status = 60U;
    msg.info.assign("STFWRNCYITWBIPKHFSOGJYNTEKDCZOGOKTZLFEHEAOQXIDWQTMFMHQUIVEJFWATFJVRKUWBZBVKNCBLOMNJKBBNAGXZQPRQTXVJENYDQODRVYTCAGMKYURUYJWBPDFSMUAGRBGGXJQZNGHROLGSWEPIZXPPYMUUHWFM");
    msg.range = 0.39930328552709227;

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
    msg.setTimeStamp(0.3726998631086619);
    msg.setSource(64122U);
    msg.setSourceEntity(168U);
    msg.setDestination(50526U);
    msg.setDestinationEntity(11U);
    msg.req_id = 7679U;
    msg.type = 56U;
    msg.status = 14U;
    msg.info.assign("LWNKVKCSFJCKSHPHXCPSSGCEHMOVEWSOTQDWROVBKNZOIHORDJQNZXLIDPVPUAVEKWDEMQEFHHKBFGZYXQDIWHKJAAVXAHUFRIUJYFBYXUNISYJRTJTHIPNUFLMUGTQXAGFT");
    msg.range = 0.21387577059723784;

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
    msg.setTimeStamp(0.6348272121169648);
    msg.setSource(44795U);
    msg.setSourceEntity(249U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(223U);
    msg.value = -974;

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
    msg.setTimeStamp(0.5288008502618163);
    msg.setSource(26514U);
    msg.setSourceEntity(28U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(181U);
    msg.value = 25067;

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
    msg.setTimeStamp(0.06756084418868646);
    msg.setSource(33948U);
    msg.setSourceEntity(234U);
    msg.setDestination(33521U);
    msg.setDestinationEntity(214U);
    msg.value = -22348;

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
    msg.setTimeStamp(0.7110504639801243);
    msg.setSource(28082U);
    msg.setSourceEntity(220U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6113885137928293;

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
    msg.setTimeStamp(0.7801842226113584);
    msg.setSource(28221U);
    msg.setSourceEntity(93U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5503986405573402;

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
    msg.setTimeStamp(0.36700794224240785);
    msg.setSource(32387U);
    msg.setSourceEntity(199U);
    msg.setDestination(12334U);
    msg.setDestinationEntity(44U);
    msg.value = 0.2657003341792694;

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
    msg.setTimeStamp(0.7992560389851915);
    msg.setSource(23868U);
    msg.setSourceEntity(16U);
    msg.setDestination(58063U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7050753779564366;

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
    msg.setTimeStamp(0.5425618234614155);
    msg.setSource(30626U);
    msg.setSourceEntity(125U);
    msg.setDestination(4493U);
    msg.setDestinationEntity(209U);
    msg.value = 0.7608552466344356;

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
    msg.setTimeStamp(0.5701111865114616);
    msg.setSource(60851U);
    msg.setSourceEntity(190U);
    msg.setDestination(1670U);
    msg.setDestinationEntity(110U);
    msg.value = 0.6984962544468725;

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
    msg.setTimeStamp(0.68289591565872);
    msg.setSource(50632U);
    msg.setSourceEntity(203U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(169U);
    msg.validity = 54210U;
    msg.type = 175U;
    msg.utc_year = 32791U;
    msg.utc_month = 47U;
    msg.utc_day = 224U;
    msg.utc_time = 0.6914420355090551;
    msg.lat = 0.5046604738522152;
    msg.lon = 0.8597291780808034;
    msg.height = 0.6355381351136482;
    msg.satellites = 17U;
    msg.cog = 0.07690610061130987;
    msg.sog = 0.29559334015615457;
    msg.hdop = 0.01529228454417797;
    msg.vdop = 0.07132852438542836;
    msg.hacc = 0.945395513873859;
    msg.vacc = 0.311426972803476;

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
    msg.setTimeStamp(0.3887917024272063);
    msg.setSource(9096U);
    msg.setSourceEntity(89U);
    msg.setDestination(43645U);
    msg.setDestinationEntity(229U);
    msg.validity = 12047U;
    msg.type = 80U;
    msg.utc_year = 56657U;
    msg.utc_month = 63U;
    msg.utc_day = 49U;
    msg.utc_time = 0.2594644803657147;
    msg.lat = 0.42871167688946166;
    msg.lon = 0.3128661032274537;
    msg.height = 0.797798091240881;
    msg.satellites = 4U;
    msg.cog = 0.10245577845637421;
    msg.sog = 0.0712287145724203;
    msg.hdop = 0.3664418887735599;
    msg.vdop = 0.5586984580487093;
    msg.hacc = 0.9458076374567657;
    msg.vacc = 0.8933971604112751;

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
    msg.setTimeStamp(0.31576122164288645);
    msg.setSource(60554U);
    msg.setSourceEntity(20U);
    msg.setDestination(26142U);
    msg.setDestinationEntity(26U);
    msg.validity = 47666U;
    msg.type = 68U;
    msg.utc_year = 31241U;
    msg.utc_month = 42U;
    msg.utc_day = 237U;
    msg.utc_time = 0.2607528727672387;
    msg.lat = 0.9050179921771901;
    msg.lon = 0.9800707310895648;
    msg.height = 0.5300918000073729;
    msg.satellites = 16U;
    msg.cog = 0.36135476752992646;
    msg.sog = 0.6025774508910363;
    msg.hdop = 0.7841200899057515;
    msg.vdop = 0.7563883382858319;
    msg.hacc = 0.8926376783968958;
    msg.vacc = 0.15397208499055726;

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
    msg.setTimeStamp(0.3320347751546123);
    msg.setSource(13481U);
    msg.setSourceEntity(196U);
    msg.setDestination(25447U);
    msg.setDestinationEntity(143U);
    msg.time = 0.07573865185951412;
    msg.phi = 0.8358606701807086;
    msg.theta = 0.8743602200520896;
    msg.psi = 0.8239584393097167;
    msg.psi_magnetic = 0.9209815038493011;

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
    msg.setTimeStamp(0.5212670537346069);
    msg.setSource(22020U);
    msg.setSourceEntity(114U);
    msg.setDestination(48819U);
    msg.setDestinationEntity(214U);
    msg.time = 0.40200786293474056;
    msg.phi = 0.8830624268754158;
    msg.theta = 0.05692051234884776;
    msg.psi = 0.8464061281479021;
    msg.psi_magnetic = 0.7419173129889529;

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
    msg.setTimeStamp(0.7442554193078995);
    msg.setSource(34732U);
    msg.setSourceEntity(252U);
    msg.setDestination(3797U);
    msg.setDestinationEntity(139U);
    msg.time = 0.2748826540884608;
    msg.phi = 0.49467937292558006;
    msg.theta = 0.34517886365393524;
    msg.psi = 0.009488630697127243;
    msg.psi_magnetic = 0.4863679053065323;

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
    msg.setTimeStamp(0.6312881886447023);
    msg.setSource(32609U);
    msg.setSourceEntity(187U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(107U);
    msg.time = 0.9436642776619193;
    msg.x = 0.141846518950405;
    msg.y = 0.7872123466640979;
    msg.z = 0.031422199245399685;
    msg.timestep = 0.8417017105433882;

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
    msg.setTimeStamp(0.44530363789689653);
    msg.setSource(17946U);
    msg.setSourceEntity(122U);
    msg.setDestination(48778U);
    msg.setDestinationEntity(36U);
    msg.time = 0.8403480006167583;
    msg.x = 0.9996291268601841;
    msg.y = 0.6799826731591424;
    msg.z = 0.04388869573283016;
    msg.timestep = 0.11008016900938555;

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
    msg.setTimeStamp(0.10482723807577987);
    msg.setSource(64018U);
    msg.setSourceEntity(244U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(97U);
    msg.time = 0.6954291949012245;
    msg.x = 0.22691120484645955;
    msg.y = 0.8156209895322631;
    msg.z = 0.035392858501493096;
    msg.timestep = 0.07461500617937633;

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
    msg.setTimeStamp(0.8442598793489235);
    msg.setSource(22374U);
    msg.setSourceEntity(250U);
    msg.setDestination(30273U);
    msg.setDestinationEntity(148U);
    msg.time = 0.7638641287402174;
    msg.x = 0.9982084014909063;
    msg.y = 0.9338197758762861;
    msg.z = 0.9048333560309754;

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
    msg.setTimeStamp(0.7379572817511963);
    msg.setSource(31946U);
    msg.setSourceEntity(138U);
    msg.setDestination(11784U);
    msg.setDestinationEntity(140U);
    msg.time = 0.23792749204254504;
    msg.x = 0.12058179195400631;
    msg.y = 0.500168354811033;
    msg.z = 0.5186599749576607;

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
    msg.setTimeStamp(0.08337180539306788);
    msg.setSource(52994U);
    msg.setSourceEntity(25U);
    msg.setDestination(8130U);
    msg.setDestinationEntity(196U);
    msg.time = 0.5027532500712776;
    msg.x = 0.424944661693213;
    msg.y = 0.28832948170509964;
    msg.z = 0.06799315482720603;

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
    msg.setTimeStamp(0.6601524564837102);
    msg.setSource(59055U);
    msg.setSourceEntity(150U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(34U);
    msg.time = 0.6025886751461299;
    msg.x = 0.43847186394453364;
    msg.y = 0.7799449510921579;
    msg.z = 0.8844189445671589;

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
    msg.setTimeStamp(0.3103866474493834);
    msg.setSource(45757U);
    msg.setSourceEntity(208U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(194U);
    msg.time = 0.3036757022882218;
    msg.x = 0.4811069273815549;
    msg.y = 0.2691240726594183;
    msg.z = 0.2267315920021865;

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
    msg.setTimeStamp(0.5795502033106082);
    msg.setSource(4702U);
    msg.setSourceEntity(136U);
    msg.setDestination(42663U);
    msg.setDestinationEntity(64U);
    msg.time = 0.0810856580132866;
    msg.x = 0.051805499739370986;
    msg.y = 0.2774509410465702;
    msg.z = 0.39208839020500663;

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
    msg.setTimeStamp(0.7556304197887854);
    msg.setSource(25230U);
    msg.setSourceEntity(16U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(31U);
    msg.time = 0.035510062316827073;
    msg.x = 0.3059678404189662;
    msg.y = 0.056924801078475196;
    msg.z = 0.42678910214859445;

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
    msg.setTimeStamp(0.17066326299810275);
    msg.setSource(54155U);
    msg.setSourceEntity(240U);
    msg.setDestination(38757U);
    msg.setDestinationEntity(51U);
    msg.time = 0.0286934703152526;
    msg.x = 0.4892404745186607;
    msg.y = 0.41888017749880635;
    msg.z = 0.7906060522806342;

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
    msg.setTimeStamp(0.9651272592815408);
    msg.setSource(51896U);
    msg.setSourceEntity(17U);
    msg.setDestination(17923U);
    msg.setDestinationEntity(98U);
    msg.time = 0.727558929693079;
    msg.x = 0.1528311008141554;
    msg.y = 0.3543788468729637;
    msg.z = 0.6808196502635268;

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
    msg.setTimeStamp(0.12132734913016241);
    msg.setSource(45024U);
    msg.setSourceEntity(61U);
    msg.setDestination(42293U);
    msg.setDestinationEntity(71U);
    msg.validity = 52U;
    msg.x = 0.937717882424574;
    msg.y = 0.3921677934190948;
    msg.z = 0.9999665814218415;

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
    msg.setTimeStamp(0.1431865720590879);
    msg.setSource(38234U);
    msg.setSourceEntity(192U);
    msg.setDestination(48571U);
    msg.setDestinationEntity(99U);
    msg.validity = 47U;
    msg.x = 0.3920029589497257;
    msg.y = 0.7816622225033404;
    msg.z = 0.27527619171092954;

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
    msg.setTimeStamp(0.8160850457730233);
    msg.setSource(56400U);
    msg.setSourceEntity(79U);
    msg.setDestination(19619U);
    msg.setDestinationEntity(190U);
    msg.validity = 23U;
    msg.x = 0.22549027304537517;
    msg.y = 0.04410255712089717;
    msg.z = 0.9937061785821794;

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
    msg.setTimeStamp(0.916388819664184);
    msg.setSource(11693U);
    msg.setSourceEntity(148U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(39U);
    msg.validity = 244U;
    msg.x = 0.9251548198483387;
    msg.y = 0.004885792714926285;
    msg.z = 0.07863005579812166;

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
    msg.setTimeStamp(0.9109706246320859);
    msg.setSource(64551U);
    msg.setSourceEntity(151U);
    msg.setDestination(55165U);
    msg.setDestinationEntity(39U);
    msg.validity = 242U;
    msg.x = 0.04412144176589239;
    msg.y = 0.2180414562154619;
    msg.z = 0.537743260470495;

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
    msg.setTimeStamp(0.4388456166058028);
    msg.setSource(14010U);
    msg.setSourceEntity(98U);
    msg.setDestination(63107U);
    msg.setDestinationEntity(151U);
    msg.validity = 247U;
    msg.x = 0.15157877956552168;
    msg.y = 0.9025696880396737;
    msg.z = 0.9021549003975573;

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
    msg.setTimeStamp(0.29058619744283487);
    msg.setSource(23930U);
    msg.setSourceEntity(204U);
    msg.setDestination(15435U);
    msg.setDestinationEntity(229U);
    msg.time = 0.33550102991205466;
    msg.x = 0.9068661143236905;
    msg.y = 0.8732992831963025;
    msg.z = 0.702288380335859;

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
    msg.setTimeStamp(0.8086710248148522);
    msg.setSource(17234U);
    msg.setSourceEntity(22U);
    msg.setDestination(3345U);
    msg.setDestinationEntity(234U);
    msg.time = 0.4998069936710394;
    msg.x = 0.12319515950673288;
    msg.y = 0.08204909137540461;
    msg.z = 0.5464432977222501;

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
    msg.setTimeStamp(0.5214702228954697);
    msg.setSource(11255U);
    msg.setSourceEntity(112U);
    msg.setDestination(22474U);
    msg.setDestinationEntity(25U);
    msg.time = 0.7669657184925441;
    msg.x = 0.6626625220354038;
    msg.y = 0.032958318342091175;
    msg.z = 0.6377290665017671;

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
    msg.setTimeStamp(0.30114473400696806);
    msg.setSource(18359U);
    msg.setSourceEntity(240U);
    msg.setDestination(37138U);
    msg.setDestinationEntity(93U);
    msg.validity = 163U;
    msg.value = 0.8212120525014205;

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
    msg.setTimeStamp(0.5250201158087368);
    msg.setSource(31793U);
    msg.setSourceEntity(130U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(43U);
    msg.validity = 238U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.42769548190418494;
    tmp_msg_0.y = 0.4658276790585232;
    tmp_msg_0.z = 0.22095918340033782;
    tmp_msg_0.phi = 0.3009752291527199;
    tmp_msg_0.theta = 0.15834012769626793;
    tmp_msg_0.psi = 0.35619914802215114;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.11938935153043573;
    tmp_msg_1.beam_height = 0.20747947153748048;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4727983103753144;

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
    msg.setTimeStamp(0.47743374450469267);
    msg.setSource(33119U);
    msg.setSourceEntity(33U);
    msg.setDestination(59357U);
    msg.setDestinationEntity(122U);
    msg.validity = 163U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5003059586680202;
    tmp_msg_0.y = 0.22738192911943744;
    tmp_msg_0.z = 0.3347628465744973;
    tmp_msg_0.phi = 0.5698985566616034;
    tmp_msg_0.theta = 0.9081428485302123;
    tmp_msg_0.psi = 0.9332328323656987;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.13888528253700205;
    tmp_msg_1.beam_height = 0.710940331528979;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8963787456078314;

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
    msg.setTimeStamp(0.22526872579848278);
    msg.setSource(55954U);
    msg.setSourceEntity(79U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(122U);
    msg.value = 0.16545239967411007;

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
    msg.setTimeStamp(0.6906991442176464);
    msg.setSource(27841U);
    msg.setSourceEntity(186U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9428180895248397;

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
    msg.setTimeStamp(0.5151734481159161);
    msg.setSource(20231U);
    msg.setSourceEntity(143U);
    msg.setDestination(31687U);
    msg.setDestinationEntity(78U);
    msg.value = 0.4500444769683132;

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
    msg.setTimeStamp(0.8677017020396401);
    msg.setSource(20398U);
    msg.setSourceEntity(75U);
    msg.setDestination(59558U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9977697841183755;

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
    msg.setTimeStamp(0.7465062823127492);
    msg.setSource(20953U);
    msg.setSourceEntity(27U);
    msg.setDestination(62446U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5001744287188854;

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
    msg.setTimeStamp(0.5037200069068292);
    msg.setSource(29366U);
    msg.setSourceEntity(12U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(192U);
    msg.value = 0.09052590572020236;

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
    msg.setTimeStamp(0.5725615707544622);
    msg.setSource(30874U);
    msg.setSourceEntity(184U);
    msg.setDestination(10997U);
    msg.setDestinationEntity(166U);
    msg.value = 0.03026926196178037;

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
    msg.setTimeStamp(0.5385582309604844);
    msg.setSource(22174U);
    msg.setSourceEntity(148U);
    msg.setDestination(60434U);
    msg.setDestinationEntity(244U);
    msg.value = 0.6880182144405727;

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
    msg.setTimeStamp(0.6372879640531899);
    msg.setSource(54503U);
    msg.setSourceEntity(44U);
    msg.setDestination(19260U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9594895285667603;

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
    msg.setTimeStamp(0.012514899276195646);
    msg.setSource(55285U);
    msg.setSourceEntity(248U);
    msg.setDestination(65532U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9197229147617704;

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
    msg.setTimeStamp(0.6703017388267416);
    msg.setSource(34399U);
    msg.setSourceEntity(232U);
    msg.setDestination(54003U);
    msg.setDestinationEntity(124U);
    msg.value = 0.2603569886557403;

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
    msg.setTimeStamp(0.4092200388860985);
    msg.setSource(51355U);
    msg.setSourceEntity(93U);
    msg.setDestination(14701U);
    msg.setDestinationEntity(123U);
    msg.value = 0.541576123439146;

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
    msg.setTimeStamp(0.8750074800622264);
    msg.setSource(46046U);
    msg.setSourceEntity(179U);
    msg.setDestination(14706U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7638125689359941;

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
    msg.setTimeStamp(0.18559984730270163);
    msg.setSource(60825U);
    msg.setSourceEntity(148U);
    msg.setDestination(38206U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9199281409976264;

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
    msg.setTimeStamp(0.37475444366841304);
    msg.setSource(47340U);
    msg.setSourceEntity(6U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(195U);
    msg.value = 0.1398646843548612;

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
    msg.setTimeStamp(0.3135695271720218);
    msg.setSource(21294U);
    msg.setSourceEntity(68U);
    msg.setDestination(17575U);
    msg.setDestinationEntity(148U);
    msg.value = 0.4331920638460013;

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
    msg.setTimeStamp(0.26928682850108177);
    msg.setSource(18774U);
    msg.setSourceEntity(19U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(248U);
    msg.value = 0.821007935999372;

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
    msg.setTimeStamp(0.44156413008307716);
    msg.setSource(24461U);
    msg.setSourceEntity(166U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7071791367540311;

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
    msg.setTimeStamp(0.9272993139039647);
    msg.setSource(40924U);
    msg.setSourceEntity(112U);
    msg.setDestination(9463U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7387419146557409;

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
    msg.setTimeStamp(0.5368344878826634);
    msg.setSource(10341U);
    msg.setSourceEntity(107U);
    msg.setDestination(64824U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8368361283259682;

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
    msg.setTimeStamp(0.4211256336634934);
    msg.setSource(57024U);
    msg.setSourceEntity(72U);
    msg.setDestination(27847U);
    msg.setDestinationEntity(181U);
    msg.value = 0.816528388860622;

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
    msg.setTimeStamp(0.4765534038663687);
    msg.setSource(30250U);
    msg.setSourceEntity(31U);
    msg.setDestination(7344U);
    msg.setDestinationEntity(28U);
    msg.value = 0.41753191525070776;

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
    msg.setTimeStamp(0.6286123623411954);
    msg.setSource(22534U);
    msg.setSourceEntity(19U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9477496702647398;

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
    msg.setTimeStamp(0.3417903261129487);
    msg.setSource(322U);
    msg.setSourceEntity(130U);
    msg.setDestination(60705U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5263540286856008;

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
    msg.setTimeStamp(0.7590339278239397);
    msg.setSource(58844U);
    msg.setSourceEntity(87U);
    msg.setDestination(39101U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.6986693425188655;
    msg.speed = 0.9926723589560704;
    msg.turbulence = 0.3041851444302206;

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
    msg.setTimeStamp(0.18594303794342104);
    msg.setSource(55413U);
    msg.setSourceEntity(127U);
    msg.setDestination(35115U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.32538847855005726;
    msg.speed = 0.9897829613734119;
    msg.turbulence = 0.0006329304842287442;

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
    msg.setTimeStamp(0.591961338461208);
    msg.setSource(42354U);
    msg.setSourceEntity(100U);
    msg.setDestination(61477U);
    msg.setDestinationEntity(39U);
    msg.direction = 0.5988858008973281;
    msg.speed = 0.5440462981030488;
    msg.turbulence = 0.5543433031067884;

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
    msg.setTimeStamp(0.9488174670769108);
    msg.setSource(53699U);
    msg.setSourceEntity(174U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(246U);
    msg.value = 0.28257429462776484;

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
    msg.setTimeStamp(0.062116108689606264);
    msg.setSource(50483U);
    msg.setSourceEntity(161U);
    msg.setDestination(6140U);
    msg.setDestinationEntity(14U);
    msg.value = 0.8900342605027978;

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
    msg.setTimeStamp(0.7639476951172118);
    msg.setSource(30279U);
    msg.setSourceEntity(49U);
    msg.setDestination(12069U);
    msg.setDestinationEntity(196U);
    msg.value = 0.4429142417043771;

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
    msg.setTimeStamp(0.9996113168156368);
    msg.setSource(57275U);
    msg.setSourceEntity(93U);
    msg.setDestination(28718U);
    msg.setDestinationEntity(245U);
    msg.value.assign("RZAQFEMBQYUJIKAFDAWNZTPRWHQHCOBMEIPGELQXWAGTDHFECJYNFFQXIOKPKJDXUPDCWDZXLFMGYKSTHIZDOTG");

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
    msg.setTimeStamp(0.5966393220707945);
    msg.setSource(27992U);
    msg.setSourceEntity(76U);
    msg.setDestination(4841U);
    msg.setDestinationEntity(24U);
    msg.value.assign("OLYCTPWLYBXRQFSALEYBIBMUPSODKGKTPDCWMODOILPXUCCAWHGLRRIMMBSOUHAYBKEEMEBTGDJARZQGVANPUVNNBDHTCFFNEFOQXQWZEUCTHXJJWYZQKBVJCSIMZSTRC");

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
    msg.setTimeStamp(0.23617263868846006);
    msg.setSource(35308U);
    msg.setSourceEntity(254U);
    msg.setDestination(6000U);
    msg.setDestinationEntity(35U);
    msg.value.assign("UDIZYKBYSAXAUXDJLKRCUWWQIQRXAYGVHPCKOJTCPYDDZXSMKVYLTUMFERKEWXBKMBQPMWJZVGJOSRGMCGHTHJZLGMEIGFMZHOIDKYO");

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
    msg.setTimeStamp(0.4463167553620091);
    msg.setSource(21241U);
    msg.setSourceEntity(145U);
    msg.setDestination(418U);
    msg.setDestinationEntity(240U);
    const signed char tmp_msg_0[] = {-42, -98, 24, 14, 54, 10, 24, -121, -82, -57, 76, -98, 36, -124, -65, 28, -111, -107, -40, 76, 120, 59, -15, 29, 34, 88, 19, 76, -123, -62, -6, 73, -86, -118, -80, 79, 81, -68, 71, 110, -23, 5, 44, -67, -111, -25, -47, 26, -16, -56, -113, 4, 95, -76, -53, -54, 110, -15, 34, 87, -107, 104, 40, -20, -3, -110, 37, 63, -51, -51, 44, -108, 32, -35, 24, 107, -58, 112, -125, -36, -78, 121, -21, -118, 77, -113, -23, -89, 106, 42, -3, -30, -84, -55, 58, -59, -57, -63, -42, -121, 118, 22, 107, -106, 33, 97, -53, 97, 113, -98, -21, -42, -122, -1, -36, -110, -57, 13, -19, 44, 112, 94, -75, -112, -73, 45, 61, 73, -97, 99, -97, -58, -48, -21, 60, -87, 102, 104, -100, -99, -105, 108, -44, 12, -59, 29, -101, -18, -108, 49, -55, -49, 12, -94, 87, -69, 116, 121, -77, 4, -127, -30, 86, -56, -13, 26, -24, -62, 94, 89, 79, -36, 60, -32, -26, 46, -54, 97, -88, 57, 124, 109, -97, 114, 22, 1, 8, -12, -91, -53, 85};
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
    msg.setTimeStamp(0.22807537217970197);
    msg.setSource(41327U);
    msg.setSourceEntity(92U);
    msg.setDestination(46439U);
    msg.setDestinationEntity(219U);
    const signed char tmp_msg_0[] = {-5, 14, 20, 0, 113, 64, -14, 27, -6, 89, -105, -2, -126, 110, 32, 91, -86, -14, -123, -115, 13, -118, -28, 107, -54, 72, -100, 16, -18, -95, 34, -39, -72, -58, -6, 33, 77, 90, -85, 46, -64, 43, -39, 98, -116, -89, -26, 82, 63, 7, 25, 74, -109, 53, -104, 125, 116, 12, 36, 110, 19, -90, 99, 18, 60, -46, -20, 23};
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
    msg.setTimeStamp(0.7352098674261244);
    msg.setSource(37736U);
    msg.setSourceEntity(236U);
    msg.setDestination(18171U);
    msg.setDestinationEntity(57U);
    const signed char tmp_msg_0[] = {-73, 5, 92, -55, 40, -31, -70, 119, -35, -85, 87, 4, -92, -95, -54, -27, 104, 94, -120, 98, 120, -90, -74, 1, -37, -113, 122, -5, -51, -72, -125, -42, -47, -77, 17, -2, 122, 35, -59, -59, -72, -23, 10, -41, -127, 61, 65, -72, -20, -56, 1, -119, -9, -92, 53, 61, 120, -30, 72, -23, -2, 101, 105, -6, 97, 104, 89, -37, 87, -35, 20, 105, -72, 5, 55, -27, 112, -9, -73, -84, 16, 20, -108, 16, -60, -30, -7, -21, 2, 75, -79, 91, 57, -96, 28, -19, 54, -6, 101, -9, -128, -86, 52, 55, 121, -49, -31, 88, -83, 70, 95, 101, -39, -47, 26, 14, -37, -89, -101, 35, 97, 31, 122, -51, 120, -10, 23, 20};
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
    msg.setTimeStamp(0.11938094583738612);
    msg.setSource(58509U);
    msg.setSourceEntity(60U);
    msg.setDestination(34969U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8344034735655831;

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
    msg.setTimeStamp(0.3599825129199301);
    msg.setSource(7433U);
    msg.setSourceEntity(0U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9609187669768204;

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
    msg.setTimeStamp(0.33243063729893907);
    msg.setSource(45045U);
    msg.setSourceEntity(22U);
    msg.setDestination(65301U);
    msg.setDestinationEntity(44U);
    msg.value = 0.44178536714933747;

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
    msg.setTimeStamp(0.6505374061848144);
    msg.setSource(47236U);
    msg.setSourceEntity(103U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(181U);
    msg.type = 208U;
    msg.frequency = 3460590244U;
    msg.min_range = 25429U;
    msg.max_range = 7649U;
    msg.bits_per_point = 162U;
    msg.scale_factor = 0.6258170647301774;
    const signed char tmp_msg_0[] = {109, -43, 55, -74, 5, -127, 95, -7, -128, 28, -26, 86, -82, 37, -87, 4, 67, 27, -12, 109, -1, 99, 119, -55, -64, -113, 74, -83, 55, 59, 108, -127, 116, -29, 119, -10, -87, -34, 97, 51, 26, 8, 93, 86, -9, -101, 48, 44, -127, 64, -72, 14, 118, 124, 118, 57, -78, -97, 110, 44, 80, 24, -9, -92, 38, -50, -81, 118, 30, -33, -10, -18, 90, 102, 116, 102, -71, -66, -83, -124, -34, 51, -88, 126, 93, -19, 116, 109, 7, -89, 6, -30, 65, 36, -21, 90, -98, -99, -114, -65, 18, -87, -30, -95, -74, -126, -101, 46, -125, 13, -38, -124, 50, -5, -113, -38, -20, 7, 8, -40, 114, -86, -97, -103, -79, -82, -114, -127, -118, -23, -9, 31, 42, -55, -66, 48, 1, 69, -44, 47, -126, 40, -8, 52, -47, 58, -68, -5, -65, 41, 28, 89, -100, 103, -34, -33, 107, 94, -69, 76, -47, 126, 57, 29, -27, 76, -14, -68, 48, 126, 81, 36, -55, -107, 110, -120, -47, 122, 1, -87, -19, -2, -95, 28, 112, -80, 30, -69, -51, 32, 26, 112, 41, 19, -9, -86, 13, -101, 3, -61, 65, 44, 19, 33};
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
    msg.setTimeStamp(0.28466037417080026);
    msg.setSource(24306U);
    msg.setSourceEntity(63U);
    msg.setDestination(62588U);
    msg.setDestinationEntity(103U);
    msg.type = 100U;
    msg.frequency = 764817563U;
    msg.min_range = 8594U;
    msg.max_range = 31543U;
    msg.bits_per_point = 37U;
    msg.scale_factor = 0.9016778621805809;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9184300813631098;
    tmp_msg_0.beam_height = 0.7129931286256634;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {104, 84, -87, -50, 102, -34, -20, 3, -27, 11, 30, 81, 60, 92, 74, -61, 110, 94, -106, -116, 118, -59, 114, -42, 71, 122, 63, -97, 48, 62, 20, 109, 10, -101, -122, -114, -69, 110, 122, 86, 33, 2, -84, -123, -60, -99, 71, 96, 33, 121, 26, -125, 26, -88, 22, -22, -25, 58, -50, -11, -101, 12, -47, -31, 106, -40, -119, 80, -80, 108, 81, -120, 9, 96, -35, 106, 38, -65, 113, 87, -122, 80, -74, -66, 50, -65, -39, -96, -72, 103, -4, -35, 8, 67, -50, 20, 100, -84, -57, 9, 115, 48, -91, 62, 43, 78, 12, 20, 96, 4, 99, -121, -83, 28, 95, 20, 124, 25, -75, -99, 62, 76, -98, 0, -127, -77, 69, 45, 96, 116, 124, -110, -67, 40, -95, -47, -40, 102, -109, 60, -114, -90, -128, 120, -23, 61, 27, -71};
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
    msg.setTimeStamp(0.576700678129087);
    msg.setSource(20965U);
    msg.setSourceEntity(57U);
    msg.setDestination(39285U);
    msg.setDestinationEntity(114U);
    msg.type = 116U;
    msg.frequency = 3482967409U;
    msg.min_range = 10044U;
    msg.max_range = 63441U;
    msg.bits_per_point = 184U;
    msg.scale_factor = 0.7467345331198219;
    const signed char tmp_msg_0[] = {-78, -127, 96, -13, 95, 104, 47, -29, -65, 76, -97, -71, 107, -115, 71, 77, 34, 93, -60, -116, 52, 104, -119, -94, -106, -7, -125, -54, 69, -115, -38, -92, -19, -23, -61, 63, 21, -65, -11, 125, 87, -99, -7, -110, 95, 75, -30, -48, 89, 67, -41, -58, -49, -17, -69, -66, 33, -17, -119, 95, 53, 1, -28, -16, 123, 123, -39, 25, -83, -78, -8, 74, 2, 9, -71, 34, -60, 45, 10, 26, 50, -60, 117, 18, 86, -7, 63, -33, 69, -99, 27, 101, 78, 11, 31, -13, 51, -4, 22, 71, -5, -78, 33, 15, -23, -79, 21, 105, -49, 120, 116, 75, -45, 33, -94, -127, -12, -36, 125, 46, 79, 11, 87, 108, 30, 29, 30, 4, 122, -67, 5, -59, -117, -79, -32, -46, -97, -47, -5, 99, 55, -83, -80, -106, 25, 32, -82, -48, -92, -86, -106, -31, -87, -114, 95, 93, 35, 0, -30, -76, -65, 57, 116, -87, -48, -109, 59, 58, -93, 120, -101, 119, 99, -115, -12, 110, -55, -2, 24, -54, 114, -32, 88, 93, 25, -18, -99, 104, 33, -114, -63, 94, -27, 117};
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
    msg.setTimeStamp(0.17781299723985233);
    msg.setSource(21122U);
    msg.setSourceEntity(75U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.8409397668102316);
    msg.setSource(39604U);
    msg.setSourceEntity(159U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.749879845762329);
    msg.setSource(7041U);
    msg.setSourceEntity(155U);
    msg.setDestination(20289U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.9107636896594042);
    msg.setSource(36348U);
    msg.setSourceEntity(236U);
    msg.setDestination(33042U);
    msg.setDestinationEntity(200U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.08997584356755672);
    msg.setSource(19224U);
    msg.setSourceEntity(29U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(30U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.6705715571101272);
    msg.setSource(2329U);
    msg.setSourceEntity(231U);
    msg.setDestination(63689U);
    msg.setDestinationEntity(93U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.9725928142776196);
    msg.setSource(35933U);
    msg.setSourceEntity(16U);
    msg.setDestination(28440U);
    msg.setDestinationEntity(89U);
    msg.value = 0.5311518474407015;
    msg.confidence = 0.28191130037689915;
    msg.opmodes.assign("WSKJDGUYSHGTNEBJMMHSSOUVDWMZYMQCJ");

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
    msg.setTimeStamp(0.12618164004692722);
    msg.setSource(53923U);
    msg.setSourceEntity(117U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(218U);
    msg.value = 0.07351915473488702;
    msg.confidence = 0.9002536980480041;
    msg.opmodes.assign("WZYCERHQIEMXMQTCHRQEHVMEIMNDUDTOWCMBCKRVFITSJMOOPRAATJJOCZSOHJAEVZCBRYSOZOYDZVYFFBQGNGXNZEFAPLNBXPWMTHIBRIJOUGDXFQSEKFDCVPUKTMCSPZDUEUGYNDEMYDIKGGXBSPMIKLHLPTLKZAPYVQTBSCJARWVBQUNGZIEKIFYTNSQRWFJLIXAWFGKXXWNHBPLJYJNSOGAODURWLHWADRK");

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
    msg.setTimeStamp(0.10466758194612946);
    msg.setSource(31314U);
    msg.setSourceEntity(81U);
    msg.setDestination(39697U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3977463611023808;
    msg.confidence = 0.7747226069707964;
    msg.opmodes.assign("SFHNKBLCIHHVBMJXCMMOGVYALSSKDBTIOBVLNGJKXZALXSBFTNBNPEMJCVWARHRWCRUEUVFUQZKFTLZHUWCDENELZQMCKGSTPONFYUOSYFEOUEICWIVGJYIQXCATDESLLYGOHPMPKFNOUIKPSRDYXYSSNHKZMDKYHGRCUATDLE");

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
    msg.setTimeStamp(0.4733661251257104);
    msg.setSource(59509U);
    msg.setSourceEntity(226U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(58U);
    msg.itow = 3196040800U;
    msg.lat = 0.8736847069609235;
    msg.lon = 0.6688688714671748;
    msg.height_ell = 0.4206987575705704;
    msg.height_sea = 0.19083347932988093;
    msg.hacc = 0.3657176055431134;
    msg.vacc = 0.9084469422189285;
    msg.vel_n = 0.49413000268493035;
    msg.vel_e = 0.3129966971912673;
    msg.vel_d = 0.4607971347990072;
    msg.speed = 0.6128594552979322;
    msg.gspeed = 0.11613971570305959;
    msg.heading = 0.0015212239686591689;
    msg.sacc = 0.43948959234975526;
    msg.cacc = 0.7225217837829907;

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
    msg.setTimeStamp(0.9696774893937905);
    msg.setSource(44577U);
    msg.setSourceEntity(116U);
    msg.setDestination(23798U);
    msg.setDestinationEntity(62U);
    msg.itow = 236969146U;
    msg.lat = 0.17268837708927087;
    msg.lon = 0.6110452987400121;
    msg.height_ell = 0.9836825171407025;
    msg.height_sea = 0.666201052459021;
    msg.hacc = 0.39578044538643264;
    msg.vacc = 0.7488670592456299;
    msg.vel_n = 0.013941415860075468;
    msg.vel_e = 0.273981830253073;
    msg.vel_d = 0.2212543080530016;
    msg.speed = 0.9257987207549676;
    msg.gspeed = 0.9795687717174921;
    msg.heading = 0.30814109054177163;
    msg.sacc = 0.005454334925688253;
    msg.cacc = 0.43510101316353156;

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
    msg.setTimeStamp(0.8056358460203197);
    msg.setSource(3096U);
    msg.setSourceEntity(134U);
    msg.setDestination(11808U);
    msg.setDestinationEntity(126U);
    msg.itow = 2170343534U;
    msg.lat = 0.3007537373336171;
    msg.lon = 0.6524200159007839;
    msg.height_ell = 0.5215078509504626;
    msg.height_sea = 0.8560564929907657;
    msg.hacc = 0.09867015784147348;
    msg.vacc = 0.5493398420593927;
    msg.vel_n = 0.3284636034729439;
    msg.vel_e = 0.12597129916715633;
    msg.vel_d = 0.1954716825313918;
    msg.speed = 0.718689771843737;
    msg.gspeed = 0.3405920988385549;
    msg.heading = 0.12081316889965843;
    msg.sacc = 0.6728900528307615;
    msg.cacc = 0.27524011942196935;

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
    msg.setTimeStamp(0.9072687922605148);
    msg.setSource(44441U);
    msg.setSourceEntity(3U);
    msg.setDestination(16285U);
    msg.setDestinationEntity(121U);
    msg.id = 187U;
    msg.value = 0.9582140860001835;

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
    msg.setTimeStamp(0.2817958773108975);
    msg.setSource(49731U);
    msg.setSourceEntity(185U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(160U);
    msg.id = 152U;
    msg.value = 0.7233698638080998;

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
    msg.setTimeStamp(0.06481896612472104);
    msg.setSource(22594U);
    msg.setSourceEntity(129U);
    msg.setDestination(32746U);
    msg.setDestinationEntity(200U);
    msg.id = 229U;
    msg.value = 0.6384228792687227;

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
    msg.setTimeStamp(0.8424597561863667);
    msg.setSource(30105U);
    msg.setSourceEntity(140U);
    msg.setDestination(47288U);
    msg.setDestinationEntity(55U);
    msg.x = 0.35229620295451547;
    msg.y = 0.06976103475270656;
    msg.z = 0.0829210891638632;
    msg.phi = 0.14381881286661546;
    msg.theta = 0.21206773943716584;
    msg.psi = 0.793524238636139;

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
    msg.setTimeStamp(0.5094588332052916);
    msg.setSource(7238U);
    msg.setSourceEntity(87U);
    msg.setDestination(62420U);
    msg.setDestinationEntity(10U);
    msg.x = 0.052855872982642715;
    msg.y = 0.023038314353590827;
    msg.z = 0.19659833997862042;
    msg.phi = 0.8550853057239742;
    msg.theta = 0.6543939451225809;
    msg.psi = 0.6800656034281072;

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
    msg.setTimeStamp(0.12067838486442717);
    msg.setSource(5219U);
    msg.setSourceEntity(254U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(83U);
    msg.x = 0.06743929505610524;
    msg.y = 0.3930791661088888;
    msg.z = 0.13320523099855286;
    msg.phi = 0.5342162102560537;
    msg.theta = 0.48419422338359597;
    msg.psi = 0.6082454756717669;

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
    msg.setTimeStamp(0.10084822810438732);
    msg.setSource(30105U);
    msg.setSourceEntity(139U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.7005849956583663;
    msg.beam_height = 0.572562832695954;

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
    msg.setTimeStamp(0.005516770956867867);
    msg.setSource(38701U);
    msg.setSourceEntity(130U);
    msg.setDestination(51770U);
    msg.setDestinationEntity(223U);
    msg.beam_width = 0.5246989380865836;
    msg.beam_height = 0.45553900973888073;

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
    msg.setTimeStamp(0.3566867149833727);
    msg.setSource(59160U);
    msg.setSourceEntity(241U);
    msg.setDestination(1965U);
    msg.setDestinationEntity(39U);
    msg.beam_width = 0.04030044137561528;
    msg.beam_height = 0.31527988023722764;

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
    msg.setTimeStamp(0.5957731473340453);
    msg.setSource(42182U);
    msg.setSourceEntity(46U);
    msg.setDestination(44267U);
    msg.setDestinationEntity(204U);
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
    msg.setTimeStamp(0.7229608932285942);
    msg.setSource(62993U);
    msg.setSourceEntity(42U);
    msg.setDestination(62053U);
    msg.setDestinationEntity(109U);
    msg.sane = 234U;

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
    msg.setTimeStamp(0.4350503484782514);
    msg.setSource(19815U);
    msg.setSourceEntity(22U);
    msg.setDestination(62287U);
    msg.setDestinationEntity(139U);
    msg.sane = 126U;

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
    msg.setTimeStamp(0.27006816261452615);
    msg.setSource(48923U);
    msg.setSourceEntity(15U);
    msg.setDestination(38158U);
    msg.setDestinationEntity(1U);
    msg.value = 0.11402785295885254;

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
    msg.setTimeStamp(0.417939479299265);
    msg.setSource(5162U);
    msg.setSourceEntity(176U);
    msg.setDestination(28982U);
    msg.setDestinationEntity(202U);
    msg.value = 0.8395713175586932;

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
    msg.setTimeStamp(0.060156173765910426);
    msg.setSource(17057U);
    msg.setSourceEntity(66U);
    msg.setDestination(28370U);
    msg.setDestinationEntity(106U);
    msg.value = 0.6452203174806778;

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
    msg.setTimeStamp(0.019755165781953576);
    msg.setSource(54840U);
    msg.setSourceEntity(212U);
    msg.setDestination(22814U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8916471752783317;

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
    msg.setTimeStamp(0.3461702328466506);
    msg.setSource(47974U);
    msg.setSourceEntity(140U);
    msg.setDestination(27422U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7996569171369827;

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
    msg.setTimeStamp(0.3900280926656926);
    msg.setSource(35560U);
    msg.setSourceEntity(55U);
    msg.setDestination(8876U);
    msg.setDestinationEntity(95U);
    msg.value = 0.3523514172512494;

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
    msg.setTimeStamp(0.9195703937262696);
    msg.setSource(27047U);
    msg.setSourceEntity(221U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(199U);
    msg.value = 0.008214581721969427;

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
    msg.setTimeStamp(0.3177719987379737);
    msg.setSource(57499U);
    msg.setSourceEntity(57U);
    msg.setDestination(33999U);
    msg.setDestinationEntity(47U);
    msg.value = 0.7903508859999477;

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
    msg.setTimeStamp(0.18164940337477986);
    msg.setSource(11556U);
    msg.setSourceEntity(14U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(185U);
    msg.value = 0.3320750246829476;

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
    msg.setTimeStamp(0.19708579291723438);
    msg.setSource(36467U);
    msg.setSourceEntity(86U);
    msg.setDestination(29742U);
    msg.setDestinationEntity(81U);
    msg.value = 0.557436934149187;

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
    msg.setTimeStamp(0.02566699903071623);
    msg.setSource(26269U);
    msg.setSourceEntity(245U);
    msg.setDestination(42238U);
    msg.setDestinationEntity(235U);
    msg.value = 0.1000275603632712;

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
    msg.setTimeStamp(0.5436278501384125);
    msg.setSource(58516U);
    msg.setSourceEntity(94U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(183U);
    msg.value = 0.3941325816723029;

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
    msg.setTimeStamp(0.09572582493240722);
    msg.setSource(4534U);
    msg.setSourceEntity(25U);
    msg.setDestination(870U);
    msg.setDestinationEntity(196U);
    msg.value = 0.01082911129353592;

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
    msg.setTimeStamp(0.9073079521708746);
    msg.setSource(51224U);
    msg.setSourceEntity(122U);
    msg.setDestination(9848U);
    msg.setDestinationEntity(247U);
    msg.value = 0.37560079244871925;

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
    msg.setTimeStamp(0.13466694836184168);
    msg.setSource(26355U);
    msg.setSourceEntity(36U);
    msg.setDestination(20845U);
    msg.setDestinationEntity(2U);
    msg.value = 0.7809574243437183;

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
    msg.setTimeStamp(0.9744443763293126);
    msg.setSource(63409U);
    msg.setSourceEntity(99U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8551308132156984;

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
    msg.setTimeStamp(0.5476993090302695);
    msg.setSource(2071U);
    msg.setSourceEntity(135U);
    msg.setDestination(466U);
    msg.setDestinationEntity(98U);
    msg.value = 0.29624050310365824;

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
    msg.setTimeStamp(0.9217082784188557);
    msg.setSource(9369U);
    msg.setSourceEntity(45U);
    msg.setDestination(15439U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0861763488062196;

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
    msg.setTimeStamp(0.44427858277189347);
    msg.setSource(3598U);
    msg.setSourceEntity(226U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(163U);
    msg.value = 0.9997144608669571;

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
    msg.setTimeStamp(0.6097048549865041);
    msg.setSource(49180U);
    msg.setSourceEntity(159U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(239U);
    msg.value = 0.4849972873558389;

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
    msg.setTimeStamp(0.6911642577190367);
    msg.setSource(60444U);
    msg.setSourceEntity(6U);
    msg.setDestination(34403U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9911582451865179;

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
    msg.setTimeStamp(0.39550281866086945);
    msg.setSource(9677U);
    msg.setSourceEntity(240U);
    msg.setDestination(54991U);
    msg.setDestinationEntity(217U);
    msg.value = 0.757271222567025;

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
    msg.setTimeStamp(0.560112471950151);
    msg.setSource(17648U);
    msg.setSourceEntity(239U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8026179902864706;

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
    msg.setTimeStamp(0.21064182925968922);
    msg.setSource(39330U);
    msg.setSourceEntity(14U);
    msg.setDestination(8028U);
    msg.setDestinationEntity(46U);
    msg.value = 0.45336543665280993;

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
    msg.setTimeStamp(0.16718367166953618);
    msg.setSource(51534U);
    msg.setSourceEntity(7U);
    msg.setDestination(28488U);
    msg.setDestinationEntity(205U);
    msg.validity = 31019U;
    msg.type = 123U;
    msg.tow = 1751940982U;
    msg.base_lat = 0.7890608872055322;
    msg.base_lon = 0.44258843208495846;
    msg.base_height = 0.17432757989247427;
    msg.n = 0.5574075491339938;
    msg.e = 0.7721653566034624;
    msg.d = 0.1963497919468028;
    msg.v_n = 0.6731673101904185;
    msg.v_e = 0.5012681048084928;
    msg.v_d = 0.3139179641030799;
    msg.satellites = 87U;
    msg.iar_hyp = 28330U;
    msg.iar_ratio = 0.6044017716110199;

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
    msg.setTimeStamp(0.7318618817245346);
    msg.setSource(31493U);
    msg.setSourceEntity(204U);
    msg.setDestination(42139U);
    msg.setDestinationEntity(212U);
    msg.validity = 46490U;
    msg.type = 33U;
    msg.tow = 3178480281U;
    msg.base_lat = 0.8199060941971962;
    msg.base_lon = 0.03723723330690876;
    msg.base_height = 0.6481368345270198;
    msg.n = 0.8789264590712519;
    msg.e = 0.2158225982874875;
    msg.d = 0.4589255538266128;
    msg.v_n = 0.02175694035311193;
    msg.v_e = 0.8043711230981561;
    msg.v_d = 0.8255547279825847;
    msg.satellites = 184U;
    msg.iar_hyp = 5848U;
    msg.iar_ratio = 0.981826750174551;

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
    msg.setTimeStamp(0.8699539516387841);
    msg.setSource(53641U);
    msg.setSourceEntity(209U);
    msg.setDestination(15725U);
    msg.setDestinationEntity(228U);
    msg.validity = 53304U;
    msg.type = 84U;
    msg.tow = 4216593171U;
    msg.base_lat = 0.9228558969741014;
    msg.base_lon = 0.04803753024317914;
    msg.base_height = 0.2589609850771568;
    msg.n = 0.7017317920590522;
    msg.e = 0.04983656765859901;
    msg.d = 0.3468644212744345;
    msg.v_n = 0.43464254544318837;
    msg.v_e = 0.07764380867332765;
    msg.v_d = 0.962204053997338;
    msg.satellites = 90U;
    msg.iar_hyp = 65309U;
    msg.iar_ratio = 0.7187233248889653;

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
    msg.setTimeStamp(0.8586497577763923);
    msg.setSource(14653U);
    msg.setSourceEntity(139U);
    msg.setDestination(61197U);
    msg.setDestinationEntity(234U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3454512238544697;
    tmp_msg_0.lon = 0.1806561666111337;
    tmp_msg_0.height = 0.6105509680081528;
    tmp_msg_0.x = 0.9589665076134004;
    tmp_msg_0.y = 0.8749333927349224;
    tmp_msg_0.z = 0.22048995022100193;
    tmp_msg_0.phi = 0.9374673495069994;
    tmp_msg_0.theta = 0.3912040734824753;
    tmp_msg_0.psi = 0.3601941990039266;
    tmp_msg_0.u = 0.3283143325949891;
    tmp_msg_0.v = 0.10000850571257536;
    tmp_msg_0.w = 0.29851473646719184;
    tmp_msg_0.vx = 0.663845248721285;
    tmp_msg_0.vy = 0.5588634734016412;
    tmp_msg_0.vz = 0.29185800887029345;
    tmp_msg_0.p = 0.07855324700795685;
    tmp_msg_0.q = 0.8880572493009979;
    tmp_msg_0.r = 0.6773149264546396;
    tmp_msg_0.depth = 0.3879739210677884;
    tmp_msg_0.alt = 0.33044801438547533;
    msg.state.set(tmp_msg_0);
    msg.type = 142U;

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
    msg.setTimeStamp(0.2206588450628999);
    msg.setSource(42038U);
    msg.setSourceEntity(11U);
    msg.setDestination(14124U);
    msg.setDestinationEntity(186U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7778787751655878;
    tmp_msg_0.lon = 0.20369841441582137;
    tmp_msg_0.height = 0.17803397422502543;
    tmp_msg_0.x = 0.5104064924347411;
    tmp_msg_0.y = 0.14560243548546514;
    tmp_msg_0.z = 0.7051340820871024;
    tmp_msg_0.phi = 0.9333535873566081;
    tmp_msg_0.theta = 0.9652897405186175;
    tmp_msg_0.psi = 0.6556529776795735;
    tmp_msg_0.u = 0.8961398172358261;
    tmp_msg_0.v = 0.767388230491578;
    tmp_msg_0.w = 0.22393452705321992;
    tmp_msg_0.vx = 0.8531616306645423;
    tmp_msg_0.vy = 0.5724818009400371;
    tmp_msg_0.vz = 0.39643799362226384;
    tmp_msg_0.p = 0.6647852164302581;
    tmp_msg_0.q = 0.002723135618771244;
    tmp_msg_0.r = 0.30721103299915975;
    tmp_msg_0.depth = 0.9778956457794824;
    tmp_msg_0.alt = 0.3302986820256921;
    msg.state.set(tmp_msg_0);
    msg.type = 43U;

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
    msg.setTimeStamp(0.7636461219531276);
    msg.setSource(13875U);
    msg.setSourceEntity(63U);
    msg.setDestination(26730U);
    msg.setDestinationEntity(91U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.18708408720828518;
    tmp_msg_0.lon = 0.5717377939393753;
    tmp_msg_0.height = 0.13544161849414438;
    tmp_msg_0.x = 0.9909891089028982;
    tmp_msg_0.y = 0.549928482485042;
    tmp_msg_0.z = 0.5268968981447549;
    tmp_msg_0.phi = 0.2360720557214553;
    tmp_msg_0.theta = 0.22176668448323433;
    tmp_msg_0.psi = 0.7086835595331825;
    tmp_msg_0.u = 0.505796993754869;
    tmp_msg_0.v = 0.8181056064244602;
    tmp_msg_0.w = 0.8924597336143609;
    tmp_msg_0.vx = 0.009797569672160389;
    tmp_msg_0.vy = 0.0162979929075604;
    tmp_msg_0.vz = 0.027728324445199237;
    tmp_msg_0.p = 0.37031460054184295;
    tmp_msg_0.q = 0.5401732733172773;
    tmp_msg_0.r = 0.025396411600242086;
    tmp_msg_0.depth = 0.13731517777724345;
    tmp_msg_0.alt = 0.008356715629692757;
    msg.state.set(tmp_msg_0);
    msg.type = 219U;

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
    msg.setTimeStamp(0.7533311934026119);
    msg.setSource(17928U);
    msg.setSourceEntity(17U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(210U);
    msg.value = 0.3791304579646493;

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
    msg.setTimeStamp(0.656277907596565);
    msg.setSource(46495U);
    msg.setSourceEntity(79U);
    msg.setDestination(56491U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6635638714452773;

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
    msg.setTimeStamp(0.5970010419938442);
    msg.setSource(62212U);
    msg.setSourceEntity(181U);
    msg.setDestination(11343U);
    msg.setDestinationEntity(215U);
    msg.value = 0.66318871774188;

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
    msg.setTimeStamp(0.8339145206716577);
    msg.setSource(16769U);
    msg.setSourceEntity(18U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5841838780704967;

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
    msg.setTimeStamp(0.7782898310936023);
    msg.setSource(43844U);
    msg.setSourceEntity(252U);
    msg.setDestination(41491U);
    msg.setDestinationEntity(138U);
    msg.value = 0.15016355232336942;

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
    msg.setTimeStamp(0.4131117983635888);
    msg.setSource(15200U);
    msg.setSourceEntity(21U);
    msg.setDestination(2953U);
    msg.setDestinationEntity(36U);
    msg.value = 0.25304184850341416;

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
    msg.setTimeStamp(0.19701384744598482);
    msg.setSource(4757U);
    msg.setSourceEntity(151U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(179U);
    msg.value = 0.09696264554069889;

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
    msg.setTimeStamp(0.7082701898281737);
    msg.setSource(48438U);
    msg.setSourceEntity(39U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(194U);
    msg.value = 0.8542204156100017;

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
    msg.setTimeStamp(0.05730307205525231);
    msg.setSource(57811U);
    msg.setSourceEntity(242U);
    msg.setDestination(55285U);
    msg.setDestinationEntity(196U);
    msg.value = 0.7904471581962982;

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
    msg.setTimeStamp(0.8401528326216109);
    msg.setSource(48499U);
    msg.setSourceEntity(139U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(211U);
    msg.value = 0.8789615679014068;

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
    msg.setTimeStamp(0.49095096978027364);
    msg.setSource(56867U);
    msg.setSourceEntity(185U);
    msg.setDestination(62571U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2829609091940163;

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
    msg.setTimeStamp(0.49972939896969226);
    msg.setSource(38483U);
    msg.setSourceEntity(83U);
    msg.setDestination(30757U);
    msg.setDestinationEntity(195U);
    msg.value = 0.3194704918549963;

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
    msg.setTimeStamp(0.5549368826668225);
    msg.setSource(52168U);
    msg.setSourceEntity(92U);
    msg.setDestination(41881U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9547707833036863;

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
    msg.setTimeStamp(0.6996773427258798);
    msg.setSource(25762U);
    msg.setSourceEntity(3U);
    msg.setDestination(56062U);
    msg.setDestinationEntity(160U);
    msg.value = 0.177465231025265;

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
    msg.setTimeStamp(0.30023608634005816);
    msg.setSource(37893U);
    msg.setSourceEntity(153U);
    msg.setDestination(32415U);
    msg.setDestinationEntity(127U);
    msg.value = 0.4302688122055104;

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
    msg.setTimeStamp(0.6964601171830576);
    msg.setSource(24134U);
    msg.setSourceEntity(24U);
    msg.setDestination(62653U);
    msg.setDestinationEntity(78U);
    msg.id = 169U;
    msg.zoom = 88U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.5359332947329558);
    msg.setSource(2717U);
    msg.setSourceEntity(204U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(247U);
    msg.id = 152U;
    msg.zoom = 233U;
    msg.action = 63U;

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
    msg.setTimeStamp(0.3855239432072576);
    msg.setSource(55799U);
    msg.setSourceEntity(186U);
    msg.setDestination(26020U);
    msg.setDestinationEntity(145U);
    msg.id = 43U;
    msg.zoom = 217U;
    msg.action = 23U;

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
    msg.setTimeStamp(0.8898231363859324);
    msg.setSource(545U);
    msg.setSourceEntity(41U);
    msg.setDestination(263U);
    msg.setDestinationEntity(190U);
    msg.id = 116U;
    msg.value = 0.7914990373003243;

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
    msg.setTimeStamp(0.2463897850873542);
    msg.setSource(39462U);
    msg.setSourceEntity(119U);
    msg.setDestination(16082U);
    msg.setDestinationEntity(152U);
    msg.id = 214U;
    msg.value = 0.7687652089858948;

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
    msg.setTimeStamp(0.17915460378990267);
    msg.setSource(1991U);
    msg.setSourceEntity(166U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(138U);
    msg.id = 212U;
    msg.value = 0.982760041919541;

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
    msg.setTimeStamp(0.9712641339078735);
    msg.setSource(52664U);
    msg.setSourceEntity(52U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(225U);
    msg.id = 81U;
    msg.value = 0.06980620674959392;

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
    msg.setTimeStamp(0.7639501125493102);
    msg.setSource(14720U);
    msg.setSourceEntity(1U);
    msg.setDestination(1768U);
    msg.setDestinationEntity(14U);
    msg.id = 188U;
    msg.value = 0.6002228710279571;

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
    msg.setTimeStamp(0.023844132280118724);
    msg.setSource(36426U);
    msg.setSourceEntity(151U);
    msg.setDestination(37248U);
    msg.setDestinationEntity(178U);
    msg.id = 4U;
    msg.value = 0.4163997388771321;

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
    msg.setTimeStamp(0.36148240624952377);
    msg.setSource(29415U);
    msg.setSourceEntity(131U);
    msg.setDestination(41010U);
    msg.setDestinationEntity(192U);
    msg.id = 107U;
    msg.angle = 0.03303018251336143;

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
    msg.setTimeStamp(0.753583352498628);
    msg.setSource(11437U);
    msg.setSourceEntity(177U);
    msg.setDestination(50671U);
    msg.setDestinationEntity(77U);
    msg.id = 239U;
    msg.angle = 0.6226254783046237;

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
    msg.setTimeStamp(0.4269092432340378);
    msg.setSource(34022U);
    msg.setSourceEntity(59U);
    msg.setDestination(43470U);
    msg.setDestinationEntity(3U);
    msg.id = 137U;
    msg.angle = 0.27241651777777753;

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
    msg.setTimeStamp(0.1458367968912283);
    msg.setSource(51421U);
    msg.setSourceEntity(162U);
    msg.setDestination(5463U);
    msg.setDestinationEntity(214U);
    msg.op = 155U;
    msg.actions.assign("XPLSNFQSNFNLDCXTIISJLEGYJFEJFDMHUGAZRWGDNHFOXWPJOITGHJOBRDCRSTUZVNIPSWGKRXYEEMKTGZAMEHCPQUWSUKAVOZQYTGDVARBTMFPJUEIAEQXVYKAKRDLXZSNCJHFABCMBTSTIPWSCOMQNQTBWVNJAZNWTBQWMXMCBQBKIYLKYLRPXLHZZDPFAEXKHUVLBVQCWUYIO");

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
    msg.setTimeStamp(0.6360506089414851);
    msg.setSource(13724U);
    msg.setSourceEntity(80U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(39U);
    msg.op = 25U;
    msg.actions.assign("FGBYHAFIAVNQQVHPTNCMELPEIAPUCLKPQTRUQNTFDIBLXVWJYOZEKTQIIXSYAWKEWBCFOOBXUFIA");

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
    msg.setTimeStamp(0.7058661674257025);
    msg.setSource(56655U);
    msg.setSourceEntity(147U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(69U);
    msg.op = 56U;
    msg.actions.assign("FQHYPBHXTRLHXKJDCLSYFBINXBJNNDLJETINKEWPDOKQSGIGRSWWKBMFNCZMJYISPZZRUYVQGADGGFBIQUUFYGFFNZUIIHCCKXPTWBZEMFRUCCBEQWYZMEHAAONAHTIGDOPTLZELXWRVQQSKXUMRYSSVYNIBNOPLKTZGW");

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
    msg.setTimeStamp(0.9037287094550223);
    msg.setSource(55154U);
    msg.setSourceEntity(55U);
    msg.setDestination(10920U);
    msg.setDestinationEntity(178U);
    msg.actions.assign("FCDFOGSNVFVVVMJZMIHWRAEWEGNTNCVGGULEMNNOPLYHBIKSKSYFEXMDSDHXLVNLXZQJHEKLFCYTBHQSIQQXQVALAOGZP");

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
    msg.setTimeStamp(0.6439340818824623);
    msg.setSource(58053U);
    msg.setSourceEntity(7U);
    msg.setDestination(7136U);
    msg.setDestinationEntity(208U);
    msg.actions.assign("MLNNHNLBNSLRDIVRPUSOZGTCRKUKIVYKYLIDMVAPXIMPFVWAGXMIZAJEQQUGZTUNCHKXQQTBTWOVBHQVWAFNZZJLJVYZQHGECOZTPMKAOHMAJWQGGJKEIDHCHONOAHGONFJYIXJKVRDGFRSYUXSXYOYLLDISONRQPXBSYRDBIZFXFCUFPMUYWRBCEKUUBDSCBTAQCCCQLPXRYMZPITSTEJSEAKGFDKFPVWDGMFJHWAPTRVWBLXWUOBS");

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
    msg.setTimeStamp(0.19541987525055182);
    msg.setSource(17856U);
    msg.setSourceEntity(7U);
    msg.setDestination(9927U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("ZAWSLAZBBPZHYVRDFBUUTUUMXDEHVMIJDSTYXUJOOUGDBHCJKERHVUWLSSITOYZOYXWELMKWNAFGVNCYNPTZKRIRDMOLPTEIHJGJJZKCIFYWRRXATDGREHESCSWZOVTNKEAJPQWAIXQVKVAOJPNPHCQTGRBDQZKCQXYNNLEAQCCLXQUEBGCLSWYLVMLFEQSFMMMKWLQDPHFSPNFSDNKIO");

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
    msg.setTimeStamp(0.6520025524213725);
    msg.setSource(34947U);
    msg.setSourceEntity(123U);
    msg.setDestination(6139U);
    msg.setDestinationEntity(30U);
    msg.button = 198U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.3877701875371481);
    msg.setSource(36414U);
    msg.setSourceEntity(248U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(162U);
    msg.button = 226U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.03267783399763391);
    msg.setSource(12576U);
    msg.setSourceEntity(192U);
    msg.setDestination(29412U);
    msg.setDestinationEntity(47U);
    msg.button = 69U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.2476505684192608);
    msg.setSource(93U);
    msg.setSourceEntity(205U);
    msg.setDestination(52424U);
    msg.setDestinationEntity(72U);
    msg.op = 238U;
    msg.text.assign("OAJYYXXILHHQLDPDD");

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
    msg.setTimeStamp(0.6075885820021475);
    msg.setSource(15694U);
    msg.setSourceEntity(135U);
    msg.setDestination(25280U);
    msg.setDestinationEntity(143U);
    msg.op = 74U;
    msg.text.assign("OWGJKIQTNJKBCBHXJDUWVPHAFKFDDFPTEZWNOMWFWJQGROVRJTVXAAVNIOXPTGXLHGKOKEVUMUUJIQWIDCFSDPRNYVNMCPUIGINCHQKXBKZITHCOVCEUJBBYEYNTZTSWVELTZAIEUZMQLTQHKWEGZAS");

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
    msg.setTimeStamp(0.9862714227264457);
    msg.setSource(63030U);
    msg.setSourceEntity(6U);
    msg.setDestination(37855U);
    msg.setDestinationEntity(65U);
    msg.op = 228U;
    msg.text.assign("WFQIWUBEWOHCCTTGSAKJIWSVVTDVOPWELHRSXFLVCASIOR");

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
    msg.setTimeStamp(0.8001868214239032);
    msg.setSource(49623U);
    msg.setSourceEntity(174U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(211U);
    msg.op = 190U;
    msg.time_remain = 0.45633737294231236;
    msg.sched_time = 0.14692037282242387;

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
    msg.setTimeStamp(0.2525200704826195);
    msg.setSource(42885U);
    msg.setSourceEntity(232U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(201U);
    msg.op = 82U;
    msg.time_remain = 0.5865746244418734;
    msg.sched_time = 0.9909324615283417;

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
    msg.setTimeStamp(0.6889091782350999);
    msg.setSource(56090U);
    msg.setSourceEntity(184U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(26U);
    msg.op = 70U;
    msg.time_remain = 0.3423450911880259;
    msg.sched_time = 0.20048413087611727;

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
    msg.setTimeStamp(0.6994046471808705);
    msg.setSource(27527U);
    msg.setSourceEntity(238U);
    msg.setDestination(18407U);
    msg.setDestinationEntity(70U);
    msg.name.assign("PNOJYYTIDXQDAPJSGWHL");
    msg.op = 146U;
    msg.sched_time = 0.14297086745250032;

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
    msg.setTimeStamp(0.653785426201184);
    msg.setSource(7183U);
    msg.setSourceEntity(99U);
    msg.setDestination(6899U);
    msg.setDestinationEntity(157U);
    msg.name.assign("FKCSJRNSUVGLRWJDXGMXPKOBCWSHXFYERAMUMWNMDHKBUBGLJWNNCETTSAIGQLTXTHHPXBGCSFCWJDQEULCJZQGINNSISDPDATPMBVHZQIWARZVNMEKRTHVPTZGVYL");
    msg.op = 213U;
    msg.sched_time = 0.21838259551904016;

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
    msg.setTimeStamp(0.08710202945225032);
    msg.setSource(48198U);
    msg.setSourceEntity(32U);
    msg.setDestination(15340U);
    msg.setDestinationEntity(80U);
    msg.name.assign("ATUQJBTFIDQVLGSCJHJGK");
    msg.op = 81U;
    msg.sched_time = 0.7967447851272722;

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
    msg.setTimeStamp(0.7367169627976509);
    msg.setSource(10085U);
    msg.setSourceEntity(126U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.2747838848360591);
    msg.setSource(24217U);
    msg.setSourceEntity(238U);
    msg.setDestination(3859U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.7428820584045788);
    msg.setSource(36553U);
    msg.setSourceEntity(254U);
    msg.setDestination(63266U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.56647181084126);
    msg.setSource(60202U);
    msg.setSourceEntity(71U);
    msg.setDestination(22425U);
    msg.setDestinationEntity(33U);
    msg.name.assign("WHILIZMKDLJBIZFZQZQVMOARUJPTKYWOGLQWKXSBZYFXAUFAHWEQPTLNZHPXVPSCMBHFTOBKPSGAGGIB");
    msg.state = 148U;

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
    msg.setTimeStamp(0.6352813999438236);
    msg.setSource(21277U);
    msg.setSourceEntity(103U);
    msg.setDestination(51282U);
    msg.setDestinationEntity(16U);
    msg.name.assign("VGKHLBSNIYOXXRIKCUHBNWGXSXOMUHMBCVLCUZAFTKGWDUMHABYYOWXRLZPVAXDASEISUJLOYLLPEQWJMDYHEGKFQIVYLSUFZMPOENVCIXOSTWZWQNYUYRZMCJZVXEJOROHWIDFRIJQKEUPMRPQFJFDGJPIYKMEGEQTAWKWGLNNDANKXPBR");
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
    msg.setTimeStamp(0.2025375377373657);
    msg.setSource(57693U);
    msg.setSourceEntity(219U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FGXDDIPWEVZWRRYTVXTEUJLWPKYKAJOARCUDIMYGBTCAEUVQUNICHZXSRQCWLPSNZDHISBPSCWNPFERMNNNEHJZIQPHVYTFLYZXQKHAYAWFXKSRVOKJOJBNUNCZLJBJKIBDBPNGXSUEFLEDCFMYXSTHUAGCKNCOKOKHQFQBGUPGWOMLZI");
    msg.state = 176U;

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
    msg.setTimeStamp(0.3459741178230116);
    msg.setSource(48427U);
    msg.setSourceEntity(2U);
    msg.setDestination(64388U);
    msg.setDestinationEntity(67U);
    msg.name.assign("DEKWDRLVFRVSSPYTLWWYHOEFJBMPIDUBYVACOOGMFXUQGWWLHFKTJVEAQBAALNJXPDXINQYUJDBISMGHQEEJNFACRONZGPUTULIUNKLFRJWEQXYPCLHBRRDGGIRDZZTXYCUTLXUHWODHKVSFYXWJWNVCG");
    msg.value = 146U;

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
    msg.setTimeStamp(0.2852923743270157);
    msg.setSource(41383U);
    msg.setSourceEntity(215U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(40U);
    msg.name.assign("NLXZOJMTTKYLNBSXNKRZTDJEPSWMCFQSZQVCCIEXSZFMDKQXYOYHRAGUCNTJYBVQVUGVKGIBUHPWGAQVYZOPRGIZUXCJBDTSNOQTIBEZHRWTPWPPMFXYLROBFRVIBXRCFVNUWJFYGRJAMCKFJNOYYIZDBDIJDYISMSHWDDPFEGEUVXHKUKIHKSABZUTLLW");
    msg.value = 247U;

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
    msg.setTimeStamp(0.23318101567029603);
    msg.setSource(61450U);
    msg.setSourceEntity(219U);
    msg.setDestination(40331U);
    msg.setDestinationEntity(209U);
    msg.name.assign("ALWWPKRBRNTCUWWPTQKLWFNWGQRSIJKSUBAKVFZZUODEVHPDOIFGYMLVSZMXIKZCIOU");
    msg.value = 59U;

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
    msg.setTimeStamp(0.9076138057275898);
    msg.setSource(15755U);
    msg.setSourceEntity(133U);
    msg.setDestination(26763U);
    msg.setDestinationEntity(21U);
    msg.name.assign("QVWSRDGHMSBBUIYQKMBDRCSOZOLWSAVNFKGOZONXXYJTDFDIWBJMUNHZCHBNEMNLVQGHSTIYQ");

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
    msg.setTimeStamp(0.1727342895926598);
    msg.setSource(17523U);
    msg.setSourceEntity(193U);
    msg.setDestination(43148U);
    msg.setDestinationEntity(254U);
    msg.name.assign("POLRSSZYVORZJMUXZRJARC");

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
    msg.setTimeStamp(0.9304727511614964);
    msg.setSource(36944U);
    msg.setSourceEntity(205U);
    msg.setDestination(7206U);
    msg.setDestinationEntity(154U);
    msg.name.assign("JWOBPEFIRVIJXYDNCQLDOPCUJBCZKIQRFUAYIWMXEQRKARZZHKNHJVEBSPEGSKCGVRFWYAUJAXSZHCTVZXMTVWGYYWJEYMXQCQBHJCEIIQOVGBTFHLGMPRZWKSHRLCYNOHSOCSDLUTXYBNKUTXEDQXFRHONOULCVFQLOIPDFMNUKZHMMHTSGTODWEPWQIAPZXMDAWSAVTRPPKLFOMDBBAYAREW");

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
    msg.setTimeStamp(0.92170864842826);
    msg.setSource(5170U);
    msg.setSourceEntity(201U);
    msg.setDestination(7913U);
    msg.setDestinationEntity(151U);
    msg.name.assign("TMFHHVBKVPJARIAVMRNUHVMIYDXNCLI");
    msg.value = 153U;

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
    msg.setTimeStamp(0.08400008427214511);
    msg.setSource(48337U);
    msg.setSourceEntity(137U);
    msg.setDestination(41982U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YEUDICJHFJMSOUIPHLYSFFMNJROWGRQFEGQENYUHGJOXUBAGMXXDGMXRSTXTZSZVZCLZTFIIOMVEULHYDRO");
    msg.value = 142U;

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
    msg.setTimeStamp(0.7058101600600536);
    msg.setSource(56087U);
    msg.setSourceEntity(151U);
    msg.setDestination(15147U);
    msg.setDestinationEntity(80U);
    msg.name.assign("VSJMHICIGMXCQLIOYKLWNFMZQAIYHFGNTRRVHTXSZIKYQFEQZUJDASXDEAXWOTENYLEERJUUQYHCWNJXFFIYJLPGVPKWZMOOKMVZAXXRSSZAZHDTPBWPMBCVCDLENMCLBZUGASBSLJOIZFKATBFEOCYJTMBHKN");
    msg.value = 175U;

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
    msg.setTimeStamp(0.04216300391460581);
    msg.setSource(46389U);
    msg.setSourceEntity(152U);
    msg.setDestination(20952U);
    msg.setDestinationEntity(92U);
    msg.id = 33U;
    msg.period = 1669314410U;
    msg.duty_cycle = 943711344U;

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
    msg.setTimeStamp(0.5570737012781022);
    msg.setSource(58645U);
    msg.setSourceEntity(43U);
    msg.setDestination(20264U);
    msg.setDestinationEntity(47U);
    msg.id = 231U;
    msg.period = 4250804713U;
    msg.duty_cycle = 2858942026U;

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
    msg.setTimeStamp(0.9056061764364586);
    msg.setSource(20226U);
    msg.setSourceEntity(12U);
    msg.setDestination(63215U);
    msg.setDestinationEntity(156U);
    msg.id = 216U;
    msg.period = 2659522168U;
    msg.duty_cycle = 1835393746U;

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
    msg.setTimeStamp(0.34688387918131636);
    msg.setSource(19752U);
    msg.setSourceEntity(55U);
    msg.setDestination(40980U);
    msg.setDestinationEntity(145U);
    msg.id = 226U;
    msg.period = 3522987452U;
    msg.duty_cycle = 2695515137U;

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
    msg.setTimeStamp(0.2685549714104434);
    msg.setSource(30965U);
    msg.setSourceEntity(189U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(133U);
    msg.id = 112U;
    msg.period = 2521547285U;
    msg.duty_cycle = 2266746867U;

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
    msg.setTimeStamp(0.22120789696111154);
    msg.setSource(62403U);
    msg.setSourceEntity(37U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(14U);
    msg.id = 154U;
    msg.period = 3536189650U;
    msg.duty_cycle = 1152658845U;

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
    msg.setTimeStamp(0.014359576447985134);
    msg.setSource(44672U);
    msg.setSourceEntity(79U);
    msg.setDestination(31767U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.5410849357285177;
    msg.lon = 0.028342588112577283;
    msg.height = 0.8906935320988488;
    msg.x = 0.9455354061682094;
    msg.y = 0.9900696704650233;
    msg.z = 0.9486012534071446;
    msg.phi = 0.8984822666043116;
    msg.theta = 0.013232648475252518;
    msg.psi = 0.010450618531335443;
    msg.u = 0.44140062149099213;
    msg.v = 0.20914574996599156;
    msg.w = 0.1745496434377115;
    msg.vx = 0.7912152921934752;
    msg.vy = 0.4484853846625203;
    msg.vz = 0.4926082427709214;
    msg.p = 0.9041619123609638;
    msg.q = 0.5610820025969081;
    msg.r = 0.32767299416120543;
    msg.depth = 0.4978214824566365;
    msg.alt = 0.3556946607893632;

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
    msg.setTimeStamp(0.28267708994271);
    msg.setSource(49031U);
    msg.setSourceEntity(8U);
    msg.setDestination(34132U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.6984209830334763;
    msg.lon = 0.052293085410505924;
    msg.height = 0.560063968021143;
    msg.x = 0.5682446515516413;
    msg.y = 0.9335631215055938;
    msg.z = 0.5225542201581097;
    msg.phi = 0.6469361590276426;
    msg.theta = 0.13344778404005797;
    msg.psi = 0.31014510951266494;
    msg.u = 0.9848747689539094;
    msg.v = 0.9660532532734163;
    msg.w = 0.2436202725772042;
    msg.vx = 0.5880401011972773;
    msg.vy = 0.2528929913464203;
    msg.vz = 0.4590389654028424;
    msg.p = 0.3757636842512867;
    msg.q = 0.7096450074637362;
    msg.r = 0.32480486699114464;
    msg.depth = 0.08480267642447081;
    msg.alt = 0.7010821072123774;

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
    msg.setTimeStamp(0.245056003114154);
    msg.setSource(4453U);
    msg.setSourceEntity(231U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.734549703737733;
    msg.lon = 0.6791369526511709;
    msg.height = 0.5968597099130563;
    msg.x = 0.5195982778934289;
    msg.y = 0.7746808798119783;
    msg.z = 0.3128771508489492;
    msg.phi = 0.25089669561086325;
    msg.theta = 0.5384462769307531;
    msg.psi = 0.9801728336571842;
    msg.u = 0.46341502282972624;
    msg.v = 0.47057975311923217;
    msg.w = 0.7930517962951256;
    msg.vx = 0.16745849201200003;
    msg.vy = 0.3136099726713938;
    msg.vz = 0.5070791927880677;
    msg.p = 0.252283855156506;
    msg.q = 0.6228264386087877;
    msg.r = 0.1770466947131527;
    msg.depth = 0.07272603783494236;
    msg.alt = 0.1393112404580935;

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
    msg.setTimeStamp(0.5369579545926221);
    msg.setSource(50036U);
    msg.setSourceEntity(224U);
    msg.setDestination(31967U);
    msg.setDestinationEntity(221U);
    msg.x = 0.8837749172244628;
    msg.y = 0.8567992558950934;
    msg.z = 0.5231152910415815;

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
    msg.setTimeStamp(0.7005283520419895);
    msg.setSource(37265U);
    msg.setSourceEntity(210U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(34U);
    msg.x = 0.28045401310396045;
    msg.y = 0.4275837470929743;
    msg.z = 0.09047307941103322;

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
    msg.setTimeStamp(0.9995758539756778);
    msg.setSource(32894U);
    msg.setSourceEntity(165U);
    msg.setDestination(15494U);
    msg.setDestinationEntity(100U);
    msg.x = 0.47753560568156483;
    msg.y = 0.4830864307062207;
    msg.z = 0.776218278328936;

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
    msg.setTimeStamp(0.4105799936449547);
    msg.setSource(13833U);
    msg.setSourceEntity(7U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5595026931705288;

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
    msg.setTimeStamp(0.7558184692446528);
    msg.setSource(17911U);
    msg.setSourceEntity(223U);
    msg.setDestination(63918U);
    msg.setDestinationEntity(123U);
    msg.value = 0.22033423499451021;

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
    msg.setTimeStamp(0.2813813832141453);
    msg.setSource(14353U);
    msg.setSourceEntity(108U);
    msg.setDestination(27737U);
    msg.setDestinationEntity(177U);
    msg.value = 0.5443546071108438;

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
    msg.setTimeStamp(0.7628072698153476);
    msg.setSource(48137U);
    msg.setSourceEntity(214U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(39U);
    msg.value = 0.11485785722831543;

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
    msg.setTimeStamp(0.897857647118322);
    msg.setSource(20302U);
    msg.setSourceEntity(4U);
    msg.setDestination(21746U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7462083633234847;

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
    msg.setTimeStamp(0.5484747587928652);
    msg.setSource(15129U);
    msg.setSourceEntity(116U);
    msg.setDestination(63110U);
    msg.setDestinationEntity(7U);
    msg.value = 0.2078752303992465;

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
    msg.setTimeStamp(0.9238747745420666);
    msg.setSource(191U);
    msg.setSourceEntity(75U);
    msg.setDestination(37713U);
    msg.setDestinationEntity(19U);
    msg.x = 0.7615572727770886;
    msg.y = 0.299786853508076;
    msg.z = 0.4283057961494222;
    msg.phi = 0.2988921702331473;
    msg.theta = 0.3193277017340459;
    msg.psi = 0.2886292426894157;
    msg.p = 0.2847321525848303;
    msg.q = 0.330365434869509;
    msg.r = 0.8618050877957223;
    msg.u = 0.5464151962613585;
    msg.v = 0.06344700533543868;
    msg.w = 0.7526791254957146;
    msg.bias_psi = 0.5387692385697658;
    msg.bias_r = 0.7507069308848601;

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
    msg.setTimeStamp(0.9682949394544786);
    msg.setSource(45541U);
    msg.setSourceEntity(26U);
    msg.setDestination(48969U);
    msg.setDestinationEntity(53U);
    msg.x = 0.9443236421800116;
    msg.y = 0.1062907082847151;
    msg.z = 0.0791692815849605;
    msg.phi = 0.7602409235138943;
    msg.theta = 0.10756132745030655;
    msg.psi = 0.33216224016848506;
    msg.p = 0.6418676780025162;
    msg.q = 0.25077319494485795;
    msg.r = 0.35169965868866193;
    msg.u = 0.08542571749115802;
    msg.v = 0.36298216062191313;
    msg.w = 0.7059239221046874;
    msg.bias_psi = 0.47984710520581275;
    msg.bias_r = 0.8736893281199904;

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
    msg.setTimeStamp(0.8853191108211976);
    msg.setSource(26793U);
    msg.setSourceEntity(135U);
    msg.setDestination(13904U);
    msg.setDestinationEntity(8U);
    msg.x = 0.016465085231494148;
    msg.y = 0.5536666695544024;
    msg.z = 0.40749899797716704;
    msg.phi = 0.3756388576790053;
    msg.theta = 0.8445124038512842;
    msg.psi = 0.7734238402068421;
    msg.p = 0.3297190821384165;
    msg.q = 0.975757614275063;
    msg.r = 0.557710968377399;
    msg.u = 0.3048561895736702;
    msg.v = 0.14248150618287625;
    msg.w = 0.010032826868525024;
    msg.bias_psi = 0.2956026205691885;
    msg.bias_r = 0.5996131138072816;

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
    msg.setTimeStamp(0.18633066930329012);
    msg.setSource(41345U);
    msg.setSourceEntity(61U);
    msg.setDestination(61965U);
    msg.setDestinationEntity(243U);
    msg.bias_psi = 0.03264712907299372;
    msg.bias_r = 0.883019533243687;
    msg.cog = 0.6043973108186477;
    msg.cyaw = 0.9571615708406546;
    msg.lbl_rej_level = 0.11068517216943063;
    msg.gps_rej_level = 0.547186185516606;
    msg.custom_x = 0.48431241422024707;
    msg.custom_y = 0.4654189776645308;
    msg.custom_z = 0.3143532053541376;

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
    msg.setTimeStamp(0.3061997603837665);
    msg.setSource(45257U);
    msg.setSourceEntity(113U);
    msg.setDestination(959U);
    msg.setDestinationEntity(78U);
    msg.bias_psi = 0.2140785181145226;
    msg.bias_r = 0.31246551780788856;
    msg.cog = 0.14873103897336104;
    msg.cyaw = 0.5912441090000734;
    msg.lbl_rej_level = 0.5847171019759762;
    msg.gps_rej_level = 0.28867911829063553;
    msg.custom_x = 0.01188801148845875;
    msg.custom_y = 0.9731670642815513;
    msg.custom_z = 0.11749171683669646;

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
    msg.setTimeStamp(0.03512658693039794);
    msg.setSource(32048U);
    msg.setSourceEntity(148U);
    msg.setDestination(60997U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.4073633500784818;
    msg.bias_r = 0.9326440993310595;
    msg.cog = 0.9874164263212091;
    msg.cyaw = 0.6706488104368745;
    msg.lbl_rej_level = 0.8866768104406955;
    msg.gps_rej_level = 0.10351950326631354;
    msg.custom_x = 0.038832157606470186;
    msg.custom_y = 0.8511777843233982;
    msg.custom_z = 0.5237080629556818;

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
    msg.setTimeStamp(0.4720557890943997);
    msg.setSource(8571U);
    msg.setSourceEntity(63U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.2325549277952611;
    msg.reason = 141U;

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
    msg.setTimeStamp(0.7244476959755224);
    msg.setSource(36072U);
    msg.setSourceEntity(236U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.937212634012985;
    msg.reason = 181U;

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
    msg.setTimeStamp(0.6630433301239697);
    msg.setSource(63121U);
    msg.setSourceEntity(123U);
    msg.setDestination(44447U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.4741492563042706;
    msg.reason = 254U;

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
    msg.setTimeStamp(0.9084053220184327);
    msg.setSource(59103U);
    msg.setSourceEntity(60U);
    msg.setDestination(2302U);
    msg.setDestinationEntity(115U);
    msg.id = 210U;
    msg.range = 0.9188686282385075;
    msg.acceptance = 231U;

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
    msg.setTimeStamp(0.09627172448741461);
    msg.setSource(23537U);
    msg.setSourceEntity(30U);
    msg.setDestination(39582U);
    msg.setDestinationEntity(50U);
    msg.id = 23U;
    msg.range = 0.4093904552168691;
    msg.acceptance = 185U;

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
    msg.setTimeStamp(0.4489532590190921);
    msg.setSource(39901U);
    msg.setSourceEntity(198U);
    msg.setDestination(8301U);
    msg.setDestinationEntity(41U);
    msg.id = 95U;
    msg.range = 0.11638602435197953;
    msg.acceptance = 12U;

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
    msg.setTimeStamp(0.006217704588325934);
    msg.setSource(11526U);
    msg.setSourceEntity(198U);
    msg.setDestination(35179U);
    msg.setDestinationEntity(118U);
    msg.type = 79U;
    msg.reason = 93U;
    msg.value = 0.6356868486925399;
    msg.timestep = 0.8613038603821679;

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
    msg.setTimeStamp(0.7235168260318325);
    msg.setSource(11974U);
    msg.setSourceEntity(227U);
    msg.setDestination(37552U);
    msg.setDestinationEntity(149U);
    msg.type = 137U;
    msg.reason = 141U;
    msg.value = 0.45727613997625305;
    msg.timestep = 0.6626573782185;

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
    msg.setTimeStamp(0.1341882795140228);
    msg.setSource(45622U);
    msg.setSourceEntity(154U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(59U);
    msg.type = 1U;
    msg.reason = 80U;
    msg.value = 0.607384162029905;
    msg.timestep = 0.007061721623562667;

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
    msg.setTimeStamp(0.40806498276829484);
    msg.setSource(13245U);
    msg.setSourceEntity(158U);
    msg.setDestination(57801U);
    msg.setDestinationEntity(58U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WPMGGKRGQNXEAOWWYXQZUHFULIVHTIPHQNFQYQUESNMCTJXRGFOMWYFYKVWROKDLKUJMLYXNKJIHFTBXIRPFRXPCZWVSTVTUHUICBRDNLJHOSXRNWUGZAUVGVTHCMDBIOECNYMCDDMTZGBBSFSAVAENQH");
    tmp_msg_0.lat = 0.7382712390039062;
    tmp_msg_0.lon = 0.7550239429674901;
    tmp_msg_0.depth = 0.5083708674396394;
    tmp_msg_0.query_channel = 224U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 161U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.13790879469693829;
    msg.y = 0.4136471392997183;
    msg.var_x = 0.7074059451888508;
    msg.var_y = 0.46955395335309036;
    msg.distance = 0.12931813713243556;

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
    msg.setTimeStamp(0.1753569154021688);
    msg.setSource(14055U);
    msg.setSourceEntity(251U);
    msg.setDestination(43107U);
    msg.setDestinationEntity(181U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LBHWHTUIVIHFAMRYJQNABTKQSNQQCEEUZPWFTAZZELIDICIGLQDWHQHVSJUTSKCYMOYMXNVMCOFPRLESMYWOJRXDQUAGCREOPJYQVNPPBEYXYHQSFLPSSCBQHXNAOBRKMIDLSUKGZTBLVNHTUIUJLFGHEMGPYKCKWNPJDOGBWTIATXUKNWCSDWXXFWLGYOUJZTJVBRAZXFVRFEODZGPDAKYRBZEVRXVZJWJOSMIGMOLMIBN");
    tmp_msg_0.lat = 0.9855828645385211;
    tmp_msg_0.lon = 0.9222940536119821;
    tmp_msg_0.depth = 0.23439394900410404;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 183U;
    tmp_msg_0.transponder_delay = 180U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.28468121110695555;
    msg.y = 0.45310548310774024;
    msg.var_x = 0.259149266359201;
    msg.var_y = 0.6110009731094365;
    msg.distance = 0.009025512205363961;

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
    msg.setTimeStamp(0.4065858643817202);
    msg.setSource(38857U);
    msg.setSourceEntity(196U);
    msg.setDestination(15927U);
    msg.setDestinationEntity(8U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PRUGVPYSDDBLNJYTMT");
    tmp_msg_0.lat = 0.24180383480278944;
    tmp_msg_0.lon = 0.6002495794467693;
    tmp_msg_0.depth = 0.7015507561397696;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 163U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.31643150920958507;
    msg.y = 0.21794200593878987;
    msg.var_x = 0.14580463589362658;
    msg.var_y = 0.23936479606592098;
    msg.distance = 0.5125739661955246;

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
    msg.setTimeStamp(0.1705539506656154);
    msg.setSource(8071U);
    msg.setSourceEntity(58U);
    msg.setDestination(32273U);
    msg.setDestinationEntity(116U);
    msg.state = 129U;

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
    msg.setTimeStamp(0.4551693526501529);
    msg.setSource(28143U);
    msg.setSourceEntity(239U);
    msg.setDestination(34966U);
    msg.setDestinationEntity(254U);
    msg.state = 90U;

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
    msg.setTimeStamp(0.5357178716595783);
    msg.setSource(57284U);
    msg.setSourceEntity(8U);
    msg.setDestination(55704U);
    msg.setDestinationEntity(60U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.7292027445937714);
    msg.setSource(7104U);
    msg.setSourceEntity(121U);
    msg.setDestination(29546U);
    msg.setDestinationEntity(146U);
    msg.x = 0.034139619527472354;
    msg.y = 0.7981032965156654;
    msg.z = 0.060073488324621116;

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
    msg.setTimeStamp(0.7917362704529056);
    msg.setSource(12542U);
    msg.setSourceEntity(124U);
    msg.setDestination(32202U);
    msg.setDestinationEntity(132U);
    msg.x = 0.407660999782013;
    msg.y = 0.9575575990670497;
    msg.z = 0.9694385953874135;

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
    msg.setTimeStamp(0.8267322393184519);
    msg.setSource(34628U);
    msg.setSourceEntity(173U);
    msg.setDestination(8771U);
    msg.setDestinationEntity(253U);
    msg.x = 0.8483261783698267;
    msg.y = 0.0662827831315248;
    msg.z = 0.7782364225190577;

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
    msg.setTimeStamp(0.11049894940906324);
    msg.setSource(37598U);
    msg.setSourceEntity(122U);
    msg.setDestination(60811U);
    msg.setDestinationEntity(114U);
    msg.va = 0.7416293317944513;
    msg.aoa = 0.19130327103922473;
    msg.ssa = 0.3602215834276902;

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
    msg.setTimeStamp(0.7967417601425879);
    msg.setSource(64098U);
    msg.setSourceEntity(75U);
    msg.setDestination(51423U);
    msg.setDestinationEntity(128U);
    msg.va = 0.4545152435580554;
    msg.aoa = 0.1223384603960026;
    msg.ssa = 0.5551329309640441;

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
    msg.setTimeStamp(0.0790059331473969);
    msg.setSource(27045U);
    msg.setSourceEntity(113U);
    msg.setDestination(36543U);
    msg.setDestinationEntity(174U);
    msg.va = 0.8961545914918965;
    msg.aoa = 0.7961985103974405;
    msg.ssa = 0.5803179985087323;

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
    msg.setTimeStamp(0.5096990084057398);
    msg.setSource(40750U);
    msg.setSourceEntity(134U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(20U);
    msg.value = 0.8761859889605073;

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
    msg.setTimeStamp(0.17523635986424768);
    msg.setSource(44677U);
    msg.setSourceEntity(10U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(19U);
    msg.value = 0.09515193167640135;

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
    msg.setTimeStamp(0.6439519472156867);
    msg.setSource(52111U);
    msg.setSourceEntity(231U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7287632646853685;

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
    msg.setTimeStamp(0.7296617396726293);
    msg.setSource(43136U);
    msg.setSourceEntity(95U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(59U);
    msg.value = 0.39774985149630604;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.9339390476722137);
    msg.setSource(18579U);
    msg.setSourceEntity(162U);
    msg.setDestination(34437U);
    msg.setDestinationEntity(67U);
    msg.value = 0.26112226905032987;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.11821392609541836);
    msg.setSource(60550U);
    msg.setSourceEntity(207U);
    msg.setDestination(3406U);
    msg.setDestinationEntity(135U);
    msg.value = 0.7404246431169901;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.887402947460809);
    msg.setSource(3711U);
    msg.setSourceEntity(168U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3482639820835728;
    msg.speed_units = 17U;

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
    msg.setTimeStamp(0.14229426535250167);
    msg.setSource(11839U);
    msg.setSourceEntity(95U);
    msg.setDestination(25584U);
    msg.setDestinationEntity(117U);
    msg.value = 0.681440133153381;
    msg.speed_units = 106U;

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
    msg.setTimeStamp(0.9458703456789284);
    msg.setSource(26433U);
    msg.setSourceEntity(73U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8138451077981419;
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
    msg.setTimeStamp(0.34925448965681627);
    msg.setSource(3335U);
    msg.setSourceEntity(216U);
    msg.setDestination(21329U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8697354768520809;

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
    msg.setTimeStamp(0.49516172578472384);
    msg.setSource(11201U);
    msg.setSourceEntity(29U);
    msg.setDestination(18544U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7564190077079953;

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
    msg.setTimeStamp(0.2602589507104768);
    msg.setSource(40639U);
    msg.setSourceEntity(166U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(186U);
    msg.value = 0.14275089989827916;

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
    msg.setTimeStamp(0.36353271224926587);
    msg.setSource(11642U);
    msg.setSourceEntity(214U);
    msg.setDestination(26196U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6316182177642702;

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
    msg.setTimeStamp(0.5457919495248484);
    msg.setSource(43283U);
    msg.setSourceEntity(132U);
    msg.setDestination(62654U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7251021471472822;

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
    msg.setTimeStamp(0.7848760470033974);
    msg.setSource(52002U);
    msg.setSourceEntity(206U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(148U);
    msg.value = 0.33108757975367953;

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
    msg.setTimeStamp(0.038739509757193535);
    msg.setSource(14213U);
    msg.setSourceEntity(76U);
    msg.setDestination(19333U);
    msg.setDestinationEntity(96U);
    msg.value = 0.03570280286598582;

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
    msg.setTimeStamp(0.7435057525439613);
    msg.setSource(46157U);
    msg.setSourceEntity(64U);
    msg.setDestination(51536U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7419001986923331;

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
    msg.setTimeStamp(0.8156669433821724);
    msg.setSource(49769U);
    msg.setSourceEntity(239U);
    msg.setDestination(35854U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6919450156104381;

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
    msg.setTimeStamp(0.16751402345538968);
    msg.setSource(52512U);
    msg.setSourceEntity(252U);
    msg.setDestination(5479U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 237882997U;
    msg.start_lat = 0.10245406846133076;
    msg.start_lon = 0.6554325812409033;
    msg.start_z = 0.05998073193086029;
    msg.start_z_units = 166U;
    msg.end_lat = 0.8898225888004172;
    msg.end_lon = 0.7287911656600902;
    msg.end_z = 0.03717836184679568;
    msg.end_z_units = 252U;
    msg.speed = 0.7019132734608827;
    msg.speed_units = 128U;
    msg.lradius = 0.8260272313034638;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.755762274453194);
    msg.setSource(45238U);
    msg.setSourceEntity(172U);
    msg.setDestination(2214U);
    msg.setDestinationEntity(58U);
    msg.path_ref = 2439143753U;
    msg.start_lat = 0.10567643800981252;
    msg.start_lon = 0.4795460684303837;
    msg.start_z = 0.4639990293644326;
    msg.start_z_units = 84U;
    msg.end_lat = 0.524943804793879;
    msg.end_lon = 0.030014680629833368;
    msg.end_z = 0.49441942423881924;
    msg.end_z_units = 113U;
    msg.speed = 0.9877374426446713;
    msg.speed_units = 64U;
    msg.lradius = 0.860732765877346;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.9043374386155617);
    msg.setSource(14214U);
    msg.setSourceEntity(212U);
    msg.setDestination(14462U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 2629066580U;
    msg.start_lat = 0.6603879479856462;
    msg.start_lon = 0.7200060471783611;
    msg.start_z = 0.537265870498511;
    msg.start_z_units = 146U;
    msg.end_lat = 0.2531942563591104;
    msg.end_lon = 0.1868955075670269;
    msg.end_z = 0.5571524419931567;
    msg.end_z_units = 118U;
    msg.speed = 0.9081265451242272;
    msg.speed_units = 181U;
    msg.lradius = 0.8227874904653941;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.29814543214836187);
    msg.setSource(45095U);
    msg.setSourceEntity(1U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(226U);
    msg.x = 0.8405900203895598;
    msg.y = 0.7927886723552866;
    msg.z = 0.4439722461700175;
    msg.k = 0.6983502854202486;
    msg.m = 0.6647094554533213;
    msg.n = 0.48121070862234816;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.18459706321022784);
    msg.setSource(49652U);
    msg.setSourceEntity(62U);
    msg.setDestination(31700U);
    msg.setDestinationEntity(219U);
    msg.x = 0.1011099874091228;
    msg.y = 0.33509367572533255;
    msg.z = 0.8474520515956033;
    msg.k = 0.36069179669369644;
    msg.m = 0.636105915514807;
    msg.n = 0.356813860283566;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.897897364050363);
    msg.setSource(19357U);
    msg.setSourceEntity(112U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(254U);
    msg.x = 0.2183093269255202;
    msg.y = 0.17805026783437494;
    msg.z = 0.6029727537616749;
    msg.k = 0.506177316186257;
    msg.m = 0.30189212102089324;
    msg.n = 0.5386938919995462;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.5622126189445118);
    msg.setSource(21961U);
    msg.setSourceEntity(138U);
    msg.setDestination(19310U);
    msg.setDestinationEntity(61U);
    msg.value = 0.44105556298912907;

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
    msg.setTimeStamp(0.006362049967186922);
    msg.setSource(43482U);
    msg.setSourceEntity(191U);
    msg.setDestination(39263U);
    msg.setDestinationEntity(25U);
    msg.value = 0.11573886546006396;

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
    msg.setTimeStamp(0.7945243416685625);
    msg.setSource(31892U);
    msg.setSourceEntity(221U);
    msg.setDestination(38666U);
    msg.setDestinationEntity(22U);
    msg.value = 0.946274147817289;

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
    msg.setTimeStamp(0.9016937956232348);
    msg.setSource(11640U);
    msg.setSourceEntity(48U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(173U);
    msg.u = 0.7043242997854114;
    msg.v = 0.6618970964924997;
    msg.w = 0.2264429474051881;
    msg.p = 0.8752883240236425;
    msg.q = 0.4376681925347923;
    msg.r = 0.27107606721092403;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.5114323231770416);
    msg.setSource(45526U);
    msg.setSourceEntity(59U);
    msg.setDestination(36208U);
    msg.setDestinationEntity(133U);
    msg.u = 0.1434499235299277;
    msg.v = 0.128718128827775;
    msg.w = 0.22989035248298173;
    msg.p = 0.2227102399928702;
    msg.q = 0.8060780847202306;
    msg.r = 0.03382996684240913;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.7807028074924258);
    msg.setSource(45815U);
    msg.setSourceEntity(241U);
    msg.setDestination(55967U);
    msg.setDestinationEntity(217U);
    msg.u = 0.37656708237430336;
    msg.v = 0.6974120632684048;
    msg.w = 0.8652482558435522;
    msg.p = 0.16559896233497629;
    msg.q = 0.05150284386846282;
    msg.r = 0.6306359619215085;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.7221515174587776);
    msg.setSource(22613U);
    msg.setSourceEntity(90U);
    msg.setDestination(40227U);
    msg.setDestinationEntity(9U);
    msg.path_ref = 3697909227U;
    msg.start_lat = 0.352160359714601;
    msg.start_lon = 0.3299283317365428;
    msg.start_z = 0.25018295424079684;
    msg.start_z_units = 22U;
    msg.end_lat = 0.18143129412255476;
    msg.end_lon = 0.5612751715534764;
    msg.end_z = 0.3899924132135768;
    msg.end_z_units = 66U;
    msg.lradius = 0.8061134372757097;
    msg.flags = 48U;
    msg.x = 0.2589695026311343;
    msg.y = 0.31227676020059425;
    msg.z = 0.5870363629323927;
    msg.vx = 0.7356855275650512;
    msg.vy = 0.04961460957490793;
    msg.vz = 0.9806202315876993;
    msg.course_error = 0.7362278216103993;
    msg.eta = 28315U;

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
    msg.setTimeStamp(0.49562660221749455);
    msg.setSource(46186U);
    msg.setSourceEntity(229U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(194U);
    msg.path_ref = 3676047013U;
    msg.start_lat = 0.5305040805496406;
    msg.start_lon = 0.3564581548746376;
    msg.start_z = 0.3422344477523688;
    msg.start_z_units = 100U;
    msg.end_lat = 0.22746364012555353;
    msg.end_lon = 0.4797496609293901;
    msg.end_z = 0.0483375055540326;
    msg.end_z_units = 194U;
    msg.lradius = 0.8476403553554352;
    msg.flags = 49U;
    msg.x = 0.789831755135658;
    msg.y = 0.13463682643513142;
    msg.z = 0.5896450904701164;
    msg.vx = 0.09793860485983019;
    msg.vy = 0.7336969428726661;
    msg.vz = 0.3526340337069652;
    msg.course_error = 0.7301835918079589;
    msg.eta = 16610U;

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
    msg.setTimeStamp(0.42174097406477706);
    msg.setSource(520U);
    msg.setSourceEntity(99U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(203U);
    msg.path_ref = 516260819U;
    msg.start_lat = 0.3600773565689456;
    msg.start_lon = 0.443017509941507;
    msg.start_z = 0.5693441261267685;
    msg.start_z_units = 224U;
    msg.end_lat = 0.313721108166365;
    msg.end_lon = 0.2062676814004376;
    msg.end_z = 0.5065184672490269;
    msg.end_z_units = 55U;
    msg.lradius = 0.7109465098733323;
    msg.flags = 170U;
    msg.x = 0.792544890816799;
    msg.y = 0.7923496563829923;
    msg.z = 0.23966826031466348;
    msg.vx = 0.49822218004640695;
    msg.vy = 0.1749172067887853;
    msg.vz = 0.7662524145385833;
    msg.course_error = 0.2647318856304871;
    msg.eta = 23260U;

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
    msg.setTimeStamp(0.05823005809563497);
    msg.setSource(34779U);
    msg.setSourceEntity(40U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(71U);
    msg.k = 0.8033899932597558;
    msg.m = 0.1699281823674501;
    msg.n = 0.20301818515139314;

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
    msg.setTimeStamp(0.3045045398819012);
    msg.setSource(30968U);
    msg.setSourceEntity(243U);
    msg.setDestination(34908U);
    msg.setDestinationEntity(223U);
    msg.k = 0.10707002796942189;
    msg.m = 0.5462081768136234;
    msg.n = 0.8045096650144166;

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
    msg.setTimeStamp(0.7428763134956595);
    msg.setSource(23265U);
    msg.setSourceEntity(183U);
    msg.setDestination(43840U);
    msg.setDestinationEntity(185U);
    msg.k = 0.6146392654484537;
    msg.m = 0.9995442983395719;
    msg.n = 0.5905757572130517;

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
    msg.setTimeStamp(0.6205710094555297);
    msg.setSource(43009U);
    msg.setSourceEntity(111U);
    msg.setDestination(16080U);
    msg.setDestinationEntity(184U);
    msg.p = 0.9427073697007566;
    msg.i = 0.31192110510111093;
    msg.d = 0.613379673615865;
    msg.a = 0.673028711848574;

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
    msg.setTimeStamp(0.7668490959239758);
    msg.setSource(49258U);
    msg.setSourceEntity(190U);
    msg.setDestination(16819U);
    msg.setDestinationEntity(29U);
    msg.p = 0.5256976559955917;
    msg.i = 0.29966362445834505;
    msg.d = 0.7390528871443048;
    msg.a = 0.6134944610808687;

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
    msg.setTimeStamp(0.5744428940918429);
    msg.setSource(49713U);
    msg.setSourceEntity(225U);
    msg.setDestination(3504U);
    msg.setDestinationEntity(251U);
    msg.p = 0.8156083169023638;
    msg.i = 0.9895857695289331;
    msg.d = 0.614261132130023;
    msg.a = 0.31924195763070007;

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
    msg.setTimeStamp(0.5902749918231056);
    msg.setSource(52993U);
    msg.setSourceEntity(216U);
    msg.setDestination(10195U);
    msg.setDestinationEntity(35U);
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
    msg.setTimeStamp(0.2730871338497718);
    msg.setSource(61702U);
    msg.setSourceEntity(1U);
    msg.setDestination(38453U);
    msg.setDestinationEntity(250U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.6322666269770236);
    msg.setSource(63886U);
    msg.setSourceEntity(221U);
    msg.setDestination(39726U);
    msg.setDestinationEntity(76U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.2820949445067775);
    msg.setSource(47267U);
    msg.setSourceEntity(220U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(156U);
    msg.x = 0.8323296497460911;
    msg.y = 0.2805646446610601;
    msg.z = 0.7940170792848842;
    msg.vx = 0.44876511135179953;
    msg.vy = 0.5109944677441353;
    msg.vz = 0.4998116213910375;
    msg.ax = 0.3346213041286953;
    msg.ay = 0.9102333657670965;
    msg.az = 0.5169767864341058;
    msg.flags = 14637U;

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
    msg.setTimeStamp(0.44160642286780294);
    msg.setSource(9609U);
    msg.setSourceEntity(20U);
    msg.setDestination(22235U);
    msg.setDestinationEntity(53U);
    msg.x = 0.1145209945456539;
    msg.y = 0.8602693478563633;
    msg.z = 0.6152539354667592;
    msg.vx = 0.5622635337731251;
    msg.vy = 0.9587789128402039;
    msg.vz = 0.8999506797012385;
    msg.ax = 0.25427013463195325;
    msg.ay = 0.2869870772583355;
    msg.az = 0.9482782574976172;
    msg.flags = 61350U;

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
    msg.setTimeStamp(0.09451994654039098);
    msg.setSource(55361U);
    msg.setSourceEntity(89U);
    msg.setDestination(9399U);
    msg.setDestinationEntity(158U);
    msg.x = 0.27445752928043565;
    msg.y = 0.1426669416985371;
    msg.z = 0.710540307008137;
    msg.vx = 0.7567341670673877;
    msg.vy = 0.26196716708649126;
    msg.vz = 0.9376376800318725;
    msg.ax = 0.5033760741192718;
    msg.ay = 0.08294341854738696;
    msg.az = 0.7629955031540869;
    msg.flags = 47905U;

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
    msg.setTimeStamp(0.2822397855229324);
    msg.setSource(42131U);
    msg.setSourceEntity(202U);
    msg.setDestination(35459U);
    msg.setDestinationEntity(11U);
    msg.value = 0.43960487692105243;

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
    msg.setTimeStamp(0.5326889854738106);
    msg.setSource(30234U);
    msg.setSourceEntity(219U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7490336995753992;

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
    msg.setTimeStamp(0.37423015428121653);
    msg.setSource(8627U);
    msg.setSourceEntity(73U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8931839654010146;

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
    msg.setTimeStamp(0.5550254912726049);
    msg.setSource(3986U);
    msg.setSourceEntity(214U);
    msg.setDestination(29848U);
    msg.setDestinationEntity(71U);
    msg.timeout = 21858U;
    msg.lat = 0.9939528983291256;
    msg.lon = 0.3287542001412016;
    msg.z = 0.9216661955302473;
    msg.z_units = 48U;
    msg.speed = 0.8432060668123147;
    msg.speed_units = 20U;
    msg.roll = 0.6732774393958538;
    msg.pitch = 0.2538332336734078;
    msg.yaw = 0.34668471835714176;
    msg.custom.assign("LBBNQGLPHVHXZFNFCQBHFVOWYUEGUEMXIAVKJOUGYCUHZZQRFUQABZPGXCZGFRGXWITVSKOLEATWVGVHAHYJMMPFIUJTUOYICAPBNAIMNSRVD");

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
    msg.setTimeStamp(0.31583393105610713);
    msg.setSource(14337U);
    msg.setSourceEntity(134U);
    msg.setDestination(8808U);
    msg.setDestinationEntity(182U);
    msg.timeout = 19471U;
    msg.lat = 0.3470407018573025;
    msg.lon = 0.8401859585362447;
    msg.z = 0.9984389514355517;
    msg.z_units = 209U;
    msg.speed = 0.8551590558798339;
    msg.speed_units = 87U;
    msg.roll = 0.8825325548509324;
    msg.pitch = 0.876132534711428;
    msg.yaw = 0.8720685404835514;
    msg.custom.assign("HWGVSTXHLJJMFGLNFPFLRETCTLTOAIFGOZZOCMELKUEWGQKGVQXXAACLSZRVBCIDTRJHTYEFFMCUIJMYSCNXYYGFSIUBYDMBNZIUDYSQJWQXQKOZYVUVBZPZKWLIBSVXKKYLJSDDTGEIEBPQJLZWCPGPRXQYXODAXMHSQWUEVROHXRVFIPBOCSQEAKN");

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
    msg.setTimeStamp(0.2284963493717106);
    msg.setSource(56701U);
    msg.setSourceEntity(229U);
    msg.setDestination(23440U);
    msg.setDestinationEntity(47U);
    msg.timeout = 13045U;
    msg.lat = 0.007569616654035216;
    msg.lon = 0.6014325698079352;
    msg.z = 0.5227231607000871;
    msg.z_units = 33U;
    msg.speed = 0.5544786366138289;
    msg.speed_units = 137U;
    msg.roll = 0.697693760815866;
    msg.pitch = 0.5668603270494567;
    msg.yaw = 0.8981765038813462;
    msg.custom.assign("KYBMESVIGEOJP");

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
    msg.setTimeStamp(0.2114565792585037);
    msg.setSource(31874U);
    msg.setSourceEntity(172U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(140U);
    msg.timeout = 37298U;
    msg.lat = 0.7951699048442815;
    msg.lon = 0.2828227758068119;
    msg.z = 0.2221250415026681;
    msg.z_units = 122U;
    msg.speed = 0.06597223186702705;
    msg.speed_units = 231U;
    msg.duration = 1263U;
    msg.radius = 0.7190820960093444;
    msg.flags = 196U;
    msg.custom.assign("KSOUBCDCFQUKCCVQUNODLHEMLKGWSGGWPEDTKZOEHXALBDLMOOUXKZCDWQSANWSKBJB");

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
    msg.setTimeStamp(0.7220115905774611);
    msg.setSource(65442U);
    msg.setSourceEntity(92U);
    msg.setDestination(29205U);
    msg.setDestinationEntity(18U);
    msg.timeout = 13791U;
    msg.lat = 0.5423871891937763;
    msg.lon = 0.5766726426928054;
    msg.z = 0.5372796329361484;
    msg.z_units = 92U;
    msg.speed = 0.4918662479349505;
    msg.speed_units = 212U;
    msg.duration = 38683U;
    msg.radius = 0.146329472129065;
    msg.flags = 250U;
    msg.custom.assign("JXASAHETEYVOMLSSZSVSNKPJHFCQWBJELXOTHWWBCSLEFWFMKAICKGMFBPLDORNBRHYUJBJJAUBRCYAIZRGTWEXLCOTJXDDUXKQULGYVTMRNYEHDDOEMGQHNQMPXLVNZWXCNJCN");

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
    msg.setTimeStamp(0.5453718704942149);
    msg.setSource(48473U);
    msg.setSourceEntity(76U);
    msg.setDestination(55165U);
    msg.setDestinationEntity(164U);
    msg.timeout = 44874U;
    msg.lat = 0.5777585508393567;
    msg.lon = 0.4477798761616424;
    msg.z = 0.33595867875069074;
    msg.z_units = 160U;
    msg.speed = 0.9443432069350983;
    msg.speed_units = 137U;
    msg.duration = 11899U;
    msg.radius = 0.6337614328051447;
    msg.flags = 101U;
    msg.custom.assign("IEPPZFYKEJWXTASNHQAWZKKJNDCPTYJVVHR");

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
    msg.setTimeStamp(0.4259894993199661);
    msg.setSource(11686U);
    msg.setSourceEntity(50U);
    msg.setDestination(52319U);
    msg.setDestinationEntity(246U);
    msg.custom.assign("ZQAFYAVGTUSKXJLMCGNGFPCKWLSVTADRVHYXNQFJAMOMTSLHHBJNZVXLOOMB");

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
    msg.setTimeStamp(0.7741208777523609);
    msg.setSource(44795U);
    msg.setSourceEntity(154U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(68U);
    msg.custom.assign("MDUGLUVPLEEYQJMPBAFZPTTYSXXCTFBKQHNMISUJYBICUCTJKPZDKYGIYAIEILREHJMNYOALWSAYVMQHPALGEMUQBZCNGIOIDEWDFJTTRFSHEIHTSGVJNGV");

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
    msg.setTimeStamp(0.732774929202254);
    msg.setSource(52274U);
    msg.setSourceEntity(5U);
    msg.setDestination(40209U);
    msg.setDestinationEntity(206U);
    msg.custom.assign("JOATSNHPEYPRWBRDXTANLNSRMYBFVTJCFDDNZXBGIKHZIMZLAPWQKSCSJQSIOPMVHLMAPRZUVSGMJDRLDFROXYLYWLAHBXFPCKFGPLKXIOMEDOANTZBLEVLHIWCMZFEPUVIQJTWQIKACGJAWECUHNDFQGFKKAUJOLZTGBBBXXRTNYCUYHYBOPGSRKCQXQJUVMYFEYWGEEYDOITMFVGUOODKZTWNHTPIGVEEUCSNJQIAZRDQBN");

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
    msg.setTimeStamp(0.027657029762175545);
    msg.setSource(4333U);
    msg.setSourceEntity(14U);
    msg.setDestination(12081U);
    msg.setDestinationEntity(207U);
    msg.timeout = 52770U;
    msg.lat = 0.5433490633884425;
    msg.lon = 0.8297038932548991;
    msg.z = 0.46135573445247413;
    msg.z_units = 48U;
    msg.duration = 14149U;
    msg.speed = 0.1962652715847263;
    msg.speed_units = 151U;
    msg.type = 72U;
    msg.radius = 0.988707167141834;
    msg.length = 0.20017443715133942;
    msg.bearing = 0.23536231664808882;
    msg.direction = 201U;
    msg.custom.assign("TDYEEQSHXPMOTQMXNSJFXVCOCUUQLFCDPJRLGEHNIJCKSXHBRWMAPUAMJTUSDFWJSFMIWBBIJAQBIBNFAQZVRFYZKZICOBLIUKLKVARTPERSVZULYQOCLGCETBXSFGTZPAHOLMWPZUWHTZPDGHTMNFRYNCPQKVORGUE");

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
    msg.setTimeStamp(0.09243110684350442);
    msg.setSource(18748U);
    msg.setSourceEntity(129U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(158U);
    msg.timeout = 39486U;
    msg.lat = 0.7142921270992219;
    msg.lon = 0.05604094712459573;
    msg.z = 0.23842727214013348;
    msg.z_units = 186U;
    msg.duration = 42669U;
    msg.speed = 0.33604036719857777;
    msg.speed_units = 75U;
    msg.type = 30U;
    msg.radius = 0.8840595773101513;
    msg.length = 0.6001768726798117;
    msg.bearing = 0.5087813628394853;
    msg.direction = 121U;
    msg.custom.assign("IEEXLVJNIOAIJNWKERBALRWIKDYAVPKEUYUNLYANWQUAESFPCJAJZPXTRZYVGZPRFOGDQGUUTDZKFGGOVTEPXVTWMPTANUSWVSXBZMOCFYNDLCIHRTLUKLMXJZFHFFJNCZWBKZPCCPPWDJMDBQQHIGQYXECYNRXBDEDCJMVRPBKQLLQGWXFVJMFCVKMOQDXIRSDKQVXTCLISHSTUBIHUEBRTYTM");

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
    msg.setTimeStamp(0.35382887544112807);
    msg.setSource(31860U);
    msg.setSourceEntity(74U);
    msg.setDestination(46064U);
    msg.setDestinationEntity(204U);
    msg.timeout = 45119U;
    msg.lat = 0.8766556467856317;
    msg.lon = 0.31817435117336723;
    msg.z = 0.5459175332642455;
    msg.z_units = 185U;
    msg.duration = 12998U;
    msg.speed = 0.5067431768785303;
    msg.speed_units = 199U;
    msg.type = 141U;
    msg.radius = 0.5502848749898771;
    msg.length = 0.08191030470689598;
    msg.bearing = 0.3550550461975859;
    msg.direction = 74U;
    msg.custom.assign("ZYENUEVWNCJVXCGFPVGCSJQAQMFMUVHSWTBBZAINJDVAYNSQKWULWRGZLLDZNFNJUUSDGBTPSHXNHADKJIOFEWETERELRJWSBKYGXAYKMFRQMLJPDBTUQMOIJYKIIHXJTTWUSYNZPQLLMBQRIWKE");

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
    msg.setTimeStamp(0.06020191459323965);
    msg.setSource(28415U);
    msg.setSourceEntity(251U);
    msg.setDestination(42747U);
    msg.setDestinationEntity(15U);
    msg.duration = 18605U;
    msg.custom.assign("UUTOLCZKLITLTSNIGRZEODBRXDKKHBXCBMSMRCGKAYBYILLHZKWBQVBGIGEWLCJWXDJGUCBNJFOFIGUEHSYXUSRWTZEALQCSCWPQRQHGOEMBIYOPVPAMSXFTJRYVRVUAJDKANADYSPVIFJIEQZEFUONVDNDOFWRBRUPADNAAMKNPUPMHKDAZRJITKWWTHSWPGHQQNLGHFZVBIXMMYTNYGXEWCFXJXXCZEQJOFLVZCSSVHTMVPYTYKL");

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
    msg.setTimeStamp(0.3107871995668786);
    msg.setSource(36602U);
    msg.setSourceEntity(191U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(193U);
    msg.duration = 25320U;
    msg.custom.assign("VALYQSWQJWCBJYPKPMFSERHQSFNPRKUSKIVRAQIGCKYJNBOTIBZVYZFTGGOVNFRYMLHQGWXRXMSNHHEXFESFHKKGMLCYQMEIAZKCAYTUEEVJTIYZAFPZDWTIPURWPXMDZFIBTGDNPUEERLBXSVWZPUAUVDTDDJWMDROCGGLCDSONLSBHAKBBQQOHKPUTCEP");

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
    msg.setTimeStamp(0.3307900290486643);
    msg.setSource(50563U);
    msg.setSourceEntity(17U);
    msg.setDestination(19762U);
    msg.setDestinationEntity(17U);
    msg.duration = 12953U;
    msg.custom.assign("DMHADLGZDSOOZHQIAYXVEBLWLQIVSJXOAALDCAFJTAUJVHPJSCFUFUNUGVBQSWVHNKVNYWXIZBEMCUXWUGPOXTHTPTKIXYOSCQECVZEBYWVRAIIJKKGMVKESTOOYR");

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
    msg.setTimeStamp(0.10205646693777948);
    msg.setSource(9943U);
    msg.setSourceEntity(74U);
    msg.setDestination(53057U);
    msg.setDestinationEntity(161U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2743559595U;
    tmp_msg_0.start_lat = 0.1432049571546966;
    tmp_msg_0.start_lon = 0.30455819891670755;
    tmp_msg_0.start_z = 0.5418472087398511;
    tmp_msg_0.start_z_units = 31U;
    tmp_msg_0.end_lat = 0.20590401967484417;
    tmp_msg_0.end_lon = 0.5854791640255226;
    tmp_msg_0.end_z = 0.8247478761845675;
    tmp_msg_0.end_z_units = 151U;
    tmp_msg_0.speed = 0.14886604218841137;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.lradius = 0.8589626857826297;
    tmp_msg_0.flags = 58U;
    msg.control.set(tmp_msg_0);
    msg.duration = 48369U;
    msg.custom.assign("OCBXDSBTPITHXOHAVQGUNZKTXRTYODNGPTL");

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
    msg.setTimeStamp(0.3253421863121726);
    msg.setSource(8963U);
    msg.setSourceEntity(222U);
    msg.setDestination(56290U);
    msg.setDestinationEntity(76U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.05811185369973493;
    tmp_msg_0.z_units = 140U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21953U;
    msg.custom.assign("MUBVZDDYFRYIOLBHTDEYXUWQVLILOLBDONIFOHTKEJTQOTXWKEPGCWLWYMZSAOXBCNYSAXXSPDEDQBHRVBNZFWTATZXKRXRVJYHCDIFAYHKLOLW");

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
    msg.setTimeStamp(0.5304096441127588);
    msg.setSource(41154U);
    msg.setSourceEntity(139U);
    msg.setDestination(15429U);
    msg.setDestinationEntity(19U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 215027059U;
    tmp_msg_0.start_lat = 0.9187290416691761;
    tmp_msg_0.start_lon = 0.4065566301982988;
    tmp_msg_0.start_z = 0.5672122250256794;
    tmp_msg_0.start_z_units = 145U;
    tmp_msg_0.end_lat = 0.42736338466673895;
    tmp_msg_0.end_lon = 0.033367807775032565;
    tmp_msg_0.end_z = 0.014827907649561323;
    tmp_msg_0.end_z_units = 122U;
    tmp_msg_0.speed = 0.9676170866172599;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.lradius = 0.15643082896716043;
    tmp_msg_0.flags = 41U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25049U;
    msg.custom.assign("XCSYJWOJKRSBWMRUHNXVZDPQZMBEKUWSHYORNUBHCZLLOBWJBMNDUTLPTIVXZECHTIGOKPIUCANPGWWVEDYZXEAYQNIGJ");

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
    msg.setTimeStamp(0.1138814922285517);
    msg.setSource(27258U);
    msg.setSourceEntity(82U);
    msg.setDestination(33135U);
    msg.setDestinationEntity(13U);
    msg.timeout = 42199U;
    msg.lat = 0.13520835104406914;
    msg.lon = 0.6455575500642976;
    msg.z = 0.8617752568828629;
    msg.z_units = 60U;
    msg.speed = 0.2675356445287873;
    msg.speed_units = 74U;
    msg.bearing = 0.36074436218768235;
    msg.cross_angle = 0.8096783307699238;
    msg.width = 0.6207562421295288;
    msg.length = 0.7547424386377481;
    msg.hstep = 0.3651489726874805;
    msg.coff = 170U;
    msg.alternation = 74U;
    msg.flags = 233U;
    msg.custom.assign("SGGNZUXKDZFJUYXTYAZHGIUVESRQZXFMBBDDAKRKBWRWALGGBWTXVSEEQXIPOJHYQITXYKATUYLLVCNQKYSGKNVCINISQNWNAVFLBSUPDCKDCRMUBISLEFPOQTVCWYHMJEMSPTUQHBRBXXKOOPLG");

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
    msg.setTimeStamp(0.16934868580966722);
    msg.setSource(20749U);
    msg.setSourceEntity(33U);
    msg.setDestination(11544U);
    msg.setDestinationEntity(117U);
    msg.timeout = 43424U;
    msg.lat = 0.32636317223241773;
    msg.lon = 0.5542876772209082;
    msg.z = 0.9431038175857891;
    msg.z_units = 72U;
    msg.speed = 0.6013119392460412;
    msg.speed_units = 12U;
    msg.bearing = 0.5103541204236269;
    msg.cross_angle = 0.8366459116348902;
    msg.width = 0.01768456402027241;
    msg.length = 0.76044274305387;
    msg.hstep = 0.642098291043471;
    msg.coff = 111U;
    msg.alternation = 38U;
    msg.flags = 24U;
    msg.custom.assign("APNUMNOCEBTWFDYEHDFYPQBAWRLIWNOFPIHZUJUEZAQYPDTIIHQXCSCPXNHBLLGXTOSSBWKDVTIWSJFFJ");

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
    msg.setTimeStamp(0.6426918321597316);
    msg.setSource(27640U);
    msg.setSourceEntity(114U);
    msg.setDestination(21193U);
    msg.setDestinationEntity(136U);
    msg.timeout = 5824U;
    msg.lat = 0.9225049476298243;
    msg.lon = 0.013385435637716325;
    msg.z = 0.53055835327426;
    msg.z_units = 95U;
    msg.speed = 0.9798738151480345;
    msg.speed_units = 252U;
    msg.bearing = 0.054916997979120974;
    msg.cross_angle = 0.8204039977383858;
    msg.width = 0.7754905250089504;
    msg.length = 0.6791425100118695;
    msg.hstep = 0.3231819904983223;
    msg.coff = 67U;
    msg.alternation = 134U;
    msg.flags = 92U;
    msg.custom.assign("XKOVPQMEYXCZPQLIJXAURWUPGBPXYZLZKVSAMLOAYVEMPE");

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
    msg.setTimeStamp(0.2936408614686453);
    msg.setSource(16106U);
    msg.setSourceEntity(18U);
    msg.setDestination(36950U);
    msg.setDestinationEntity(166U);
    msg.timeout = 54043U;
    msg.lat = 0.9126248506470492;
    msg.lon = 0.3836781139928691;
    msg.z = 0.002333144121907771;
    msg.z_units = 130U;
    msg.speed = 0.2094025119536832;
    msg.speed_units = 120U;
    msg.custom.assign("GREOKGBFHWYHNORSSQDXVZYMGQAPIKBIIKYNTEUGKSLDNBVJAMLOPXVSCRNRLZYNPVKKCHWYWFXJIPYCPYPSVRCWWQOXVFZJCGWJAZKFISAMAXFDNUPUWUKAVHHNCJQABVGOQEEBTVOILXWXALEKTWRWIGTQTBQUNEEDMMLZBOTDCJZKRYIISRTPZJNYTHZALFOBHDUOMYEPHEBZZCDTTHDFSJGSPABIQFDUFLUMLHQRMFGDJXMXUN");

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
    msg.setTimeStamp(0.7179308997240201);
    msg.setSource(2151U);
    msg.setSourceEntity(233U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(187U);
    msg.timeout = 20481U;
    msg.lat = 0.8827123058488442;
    msg.lon = 0.301839921249594;
    msg.z = 0.33354307284275153;
    msg.z_units = 108U;
    msg.speed = 0.7539684937000352;
    msg.speed_units = 50U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9976483912608852;
    tmp_msg_0.y = 0.9749349888914509;
    tmp_msg_0.z = 0.6903617682484043;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FSXSFGFWHUALGNQJLHSDOTZMRIRRMBTITSYJJXGDFPZYZCKQIENYDNOZWUCRTLEWASRRPCDMBPWT");

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
    msg.setTimeStamp(0.20135250133069005);
    msg.setSource(12420U);
    msg.setSourceEntity(217U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(34U);
    msg.timeout = 17530U;
    msg.lat = 0.9940149469812131;
    msg.lon = 0.8996230149609152;
    msg.z = 0.9991796094306755;
    msg.z_units = 148U;
    msg.speed = 0.7489388189042215;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8364853778663551;
    tmp_msg_0.y = 0.15705948271177295;
    tmp_msg_0.z = 0.13204083695678714;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LFRTICYAHFMGFJHRFIBKFILQPZNOTECJYMKLQ");

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
    msg.setTimeStamp(0.8586718391571571);
    msg.setSource(18346U);
    msg.setSourceEntity(102U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(168U);
    msg.x = 0.039306568632345384;
    msg.y = 0.9686419823528525;
    msg.z = 0.9310560085361371;

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
    msg.setTimeStamp(0.46980308052047026);
    msg.setSource(60797U);
    msg.setSourceEntity(216U);
    msg.setDestination(6891U);
    msg.setDestinationEntity(140U);
    msg.x = 0.9079661395618017;
    msg.y = 0.4163089449840175;
    msg.z = 0.26604097219148215;

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
    msg.setTimeStamp(0.8831892758004917);
    msg.setSource(41900U);
    msg.setSourceEntity(160U);
    msg.setDestination(2195U);
    msg.setDestinationEntity(20U);
    msg.x = 0.734170692047656;
    msg.y = 0.6038899293029774;
    msg.z = 0.9589706647835062;

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
    msg.setTimeStamp(0.22882649904231445);
    msg.setSource(3662U);
    msg.setSourceEntity(126U);
    msg.setDestination(63791U);
    msg.setDestinationEntity(112U);
    msg.timeout = 29458U;
    msg.lat = 0.700137499406538;
    msg.lon = 0.288585574503359;
    msg.z = 0.10607602764007174;
    msg.z_units = 179U;
    msg.amplitude = 0.6881897301663391;
    msg.pitch = 0.7417391464824967;
    msg.speed = 0.6671621841423759;
    msg.speed_units = 118U;
    msg.custom.assign("URKOEVJVLTFIAWPQTXHNREGTWHZGNDXEOVIMDZYOYEDEBHXLPGUESCUIWQJBWIFJBIYENQYVYFRFLBTOLKDXBIQPCIQXPJHWKOXZVFLJZMCKSARPRQPWIGVLHBDCQUFVFACQGNWNCQINFYPNLLUAYDAMVOKRXHOEWRALPAIKKZAPDVTKBSGZDUZHDMJZYMMRTSUAEFHKSYOOCSDJTPNBMTNQSGCRUZUWBJGSMBHG");

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
    msg.setTimeStamp(0.4365194262069225);
    msg.setSource(4464U);
    msg.setSourceEntity(26U);
    msg.setDestination(5602U);
    msg.setDestinationEntity(57U);
    msg.timeout = 41U;
    msg.lat = 0.7484564334808902;
    msg.lon = 0.013813396798050381;
    msg.z = 0.19372184434167417;
    msg.z_units = 250U;
    msg.amplitude = 0.9967551807258328;
    msg.pitch = 0.35551914126709916;
    msg.speed = 0.1656587281796884;
    msg.speed_units = 231U;
    msg.custom.assign("EHIVFSJSZBKBQJQDVAJOHGPMBGNWSZXRMRORUOFIRGYMULHWXHLOPHDKQILDEBUVZXYBCHRBXLNWIOWPZYJNSZNARMJVHIEKBRBLABFAOZFTNTYIGSJCEQFXQZVWQMALUVMSLYTOQSPZWFUPPMCJ");

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
    msg.setTimeStamp(0.8578250572701233);
    msg.setSource(33649U);
    msg.setSourceEntity(178U);
    msg.setDestination(50959U);
    msg.setDestinationEntity(98U);
    msg.timeout = 61344U;
    msg.lat = 0.5721506685418544;
    msg.lon = 0.9925063510103079;
    msg.z = 0.9916977542323704;
    msg.z_units = 45U;
    msg.amplitude = 0.6321137885360593;
    msg.pitch = 0.5213211172823823;
    msg.speed = 0.20549987580967188;
    msg.speed_units = 190U;
    msg.custom.assign("PMRDEPDRKHCGUQIEIOIOYGSRTCWHWIFRZRYBUSFNNIUNUOXYHGSLOHVKHZPBVMC");

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
    msg.setTimeStamp(0.3844429573025341);
    msg.setSource(5404U);
    msg.setSourceEntity(191U);
    msg.setDestination(50475U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.3261172318983063);
    msg.setSource(47286U);
    msg.setSourceEntity(169U);
    msg.setDestination(6537U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.7072115637041546);
    msg.setSource(4189U);
    msg.setSourceEntity(82U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.01190159735848162);
    msg.setSource(47032U);
    msg.setSourceEntity(92U);
    msg.setDestination(44792U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.6244748105732931;
    msg.lon = 0.6113114757302487;
    msg.z = 0.6407817871313549;
    msg.z_units = 40U;
    msg.radius = 0.13201432690672188;
    msg.duration = 5211U;
    msg.speed = 0.8867990546965315;
    msg.speed_units = 155U;
    msg.custom.assign("NQFFSGKRQKZZDTMZXOJRTDBKRYQPWWIMJEAUXVYWZWPTUWVRTSFDDRQTLMXGOPKRVGSGAYMVYPMNNBJRJTNRELPVONMTEEEIFYESBIQHUASUCXBZELRPDQESLOFXCQILLHJNOAXQNSHCCFHVYTOPUJJZTXXPFKDCYZAZSVEBCCIUKBKOUWWGKXNAVPULUDYDMVGGDCHBBFQIGNMMUNWFJIWAKAOPCHLXBHIRQGJLHYZOIBAFSHHMGWO");

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
    msg.setTimeStamp(0.7318823424988855);
    msg.setSource(30218U);
    msg.setSourceEntity(175U);
    msg.setDestination(2794U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.26932636947329336;
    msg.lon = 0.8497818749552262;
    msg.z = 0.9849353711858667;
    msg.z_units = 229U;
    msg.radius = 0.3249193150975108;
    msg.duration = 19127U;
    msg.speed = 0.20787551227357537;
    msg.speed_units = 167U;
    msg.custom.assign("NJEQVUHVLSSCMAJOGYXCWNSIEDKFBYDFCZBBORVBVUGRKKTWLMJTLHVLIRIWGGQYOWAREPTNDZWBFRIPFBXGFVCFACJUXNJVVOTLNLRKWK");

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
    msg.setTimeStamp(0.43847266919626715);
    msg.setSource(64307U);
    msg.setSourceEntity(74U);
    msg.setDestination(31303U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.7581182840703095;
    msg.lon = 0.2452189968561035;
    msg.z = 0.2868169620665021;
    msg.z_units = 192U;
    msg.radius = 0.07207578242665547;
    msg.duration = 41399U;
    msg.speed = 0.22822274945509213;
    msg.speed_units = 97U;
    msg.custom.assign("HYDIBGCBSGCLSCBJAGYGCNGRZMQMABNHAOOPVSLHZBXRVJ");

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
    msg.setTimeStamp(0.587377701187245);
    msg.setSource(8338U);
    msg.setSourceEntity(171U);
    msg.setDestination(25268U);
    msg.setDestinationEntity(110U);
    msg.timeout = 5494U;
    msg.flags = 180U;
    msg.lat = 0.04035610081482155;
    msg.lon = 0.9635262918630384;
    msg.start_z = 0.6521652974245907;
    msg.start_z_units = 175U;
    msg.end_z = 0.1321404182990985;
    msg.end_z_units = 161U;
    msg.radius = 0.8981691630950139;
    msg.speed = 0.4615059781823032;
    msg.speed_units = 179U;
    msg.custom.assign("SGHVUSOBHSXCFQXPOWPOCBTPSBGVINTZBXYLZEQTZEANFFSOTVDZZZBCEJLRUDULTWKQIAGIALCEAHXMKUVJFLRMEHRREMKYWFGQALFMXNFTLRHPOMHDSJDVNLXSD");

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
    msg.setTimeStamp(0.4308023715987541);
    msg.setSource(15906U);
    msg.setSourceEntity(19U);
    msg.setDestination(42894U);
    msg.setDestinationEntity(244U);
    msg.timeout = 24706U;
    msg.flags = 30U;
    msg.lat = 0.7141566252147198;
    msg.lon = 0.21357955977088594;
    msg.start_z = 0.018967971213059487;
    msg.start_z_units = 238U;
    msg.end_z = 0.23444090430598452;
    msg.end_z_units = 229U;
    msg.radius = 0.07530887784703955;
    msg.speed = 0.0379448289672949;
    msg.speed_units = 38U;
    msg.custom.assign("OXVBZYHNWAHEWEYWAXKXRWUBSEQLPQPWMKXBIOGXNQXNEPDU");

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
    msg.setTimeStamp(0.9168277588020928);
    msg.setSource(17962U);
    msg.setSourceEntity(30U);
    msg.setDestination(34126U);
    msg.setDestinationEntity(213U);
    msg.timeout = 48880U;
    msg.flags = 72U;
    msg.lat = 0.02699430949121384;
    msg.lon = 0.3754555213498998;
    msg.start_z = 0.554841046206672;
    msg.start_z_units = 231U;
    msg.end_z = 0.41233662220076384;
    msg.end_z_units = 167U;
    msg.radius = 0.5626280146114772;
    msg.speed = 0.24299597976160214;
    msg.speed_units = 45U;
    msg.custom.assign("DSDHVMPIBHOFBJBSHBLAOSDQSCTNCOZJJBPTQMBYYRPCPEXJEQZTJHOMDFPURZISSTWMIHDMWEFOLZTMBZSYNZOAZLCDQGGWATNSKMNQFVUGYMVPTGTJXDQRENENPYKQIGWVNCVWNFWYHIGUAKNICVGZRQXXSRVOLYEKAAWIYWJFDJEOUFFEABXKSKFEZUHPUHWAQQLYRLLARLY");

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
    msg.setTimeStamp(0.08979394486954595);
    msg.setSource(34015U);
    msg.setSourceEntity(166U);
    msg.setDestination(276U);
    msg.setDestinationEntity(159U);
    msg.timeout = 16530U;
    msg.lat = 0.5615907726821203;
    msg.lon = 0.1548577813161296;
    msg.z = 0.9892773469015183;
    msg.z_units = 121U;
    msg.speed = 0.11346069415632432;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.816973203147857;
    tmp_msg_0.y = 0.34920671511537293;
    tmp_msg_0.z = 0.04514242897460918;
    tmp_msg_0.t = 0.026280802947772353;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TBRIYEPWJGNEFZUOLODLMRWUPKQRAPQDLQCGZJEZKZJMZOBPYSUNVHQ");

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
    msg.setTimeStamp(0.747872887358468);
    msg.setSource(14739U);
    msg.setSourceEntity(144U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(66U);
    msg.timeout = 17088U;
    msg.lat = 0.23900612856331316;
    msg.lon = 0.8647297653494599;
    msg.z = 0.11600734119190259;
    msg.z_units = 56U;
    msg.speed = 0.2753678964882966;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9131245534728542;
    tmp_msg_0.y = 0.043329762238942804;
    tmp_msg_0.z = 0.6391979046303053;
    tmp_msg_0.t = 0.48670048880440275;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YPQVFNWMYEDZQCOJBVDJAUXGBYZUDUSTPMOINJPZXBFCOAMNOXYFPKINNYZ");

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
    msg.setTimeStamp(0.26865298968200224);
    msg.setSource(28494U);
    msg.setSourceEntity(3U);
    msg.setDestination(11420U);
    msg.setDestinationEntity(249U);
    msg.timeout = 40249U;
    msg.lat = 0.7899505078505448;
    msg.lon = 0.5309651761359401;
    msg.z = 0.17509987960448492;
    msg.z_units = 5U;
    msg.speed = 0.02423463178183738;
    msg.speed_units = 240U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4156215250717472;
    tmp_msg_0.y = 0.24977510577007578;
    tmp_msg_0.z = 0.16019241794789074;
    tmp_msg_0.t = 0.5762628807922104;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BHGSIECVQFIAINAJHSEDPOGLEDIGKSKOLUJNDFCNUTSMURNZLTXGCZTKQYYZSJWBFWSLIDKQQZRAAPNFTJKZIGCUQUOVOKRWAMZSXEFKBENXOHTVTXXQBJXRZCKCPWCENNUMMYQYSFHVAOVRLFHIFCAWWVBEPHIBGABYSGVAPHNXNUILEQYDPXPEMPYWZOCLG");

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
    msg.setTimeStamp(0.8473694231217156);
    msg.setSource(46504U);
    msg.setSourceEntity(215U);
    msg.setDestination(38638U);
    msg.setDestinationEntity(8U);
    msg.x = 0.2507557908777991;
    msg.y = 0.7179591427948497;
    msg.z = 0.07025769601421339;
    msg.t = 0.5580595427919044;

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
    msg.setTimeStamp(0.5937111519867283);
    msg.setSource(2185U);
    msg.setSourceEntity(145U);
    msg.setDestination(49487U);
    msg.setDestinationEntity(1U);
    msg.x = 0.26602083936327003;
    msg.y = 0.31416927600763067;
    msg.z = 0.9176590262264704;
    msg.t = 0.5611682357716682;

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
    msg.setTimeStamp(0.7295610343509299);
    msg.setSource(54708U);
    msg.setSourceEntity(208U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(203U);
    msg.x = 0.9722298620385873;
    msg.y = 0.2803855683915486;
    msg.z = 0.7822029286719131;
    msg.t = 0.09094635354130243;

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
    msg.setTimeStamp(0.7062095190062637);
    msg.setSource(49672U);
    msg.setSourceEntity(119U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(222U);
    msg.timeout = 46210U;
    msg.name.assign("VVPWLPJNGFXNUFRZIUQRJLSJJMYZIAMIQNJJESPAFLHILXZPSXADUKAWZYECVBLVSMENYCWBZMFVFPHDBRALJFXXMXSZPGIVORKHSWTBHIYBUPRWCQOXYBUEHMVECOTUAFKNMNTTLMAYCQFRYPHSOETUACYZOSCXXQUGJMWMKRVWKZBAKDTNGJXDE");
    msg.custom.assign("BIRVJCSJLGFTEMNJPWTBVOLYRHURCIYCKIWPMUFXMLNKDSUDNIOSFWGJCNKBFADRKY");

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
    msg.setTimeStamp(0.7707790307469575);
    msg.setSource(41005U);
    msg.setSourceEntity(91U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(97U);
    msg.timeout = 35254U;
    msg.name.assign("KVWXPMMDRFUIPICIYGCTDLGFHHOOKLRFHCEEYYWOBFRKUZLVNVSMBTGBFBTRTLEHOECAANBNUSSEZNQTNUXZNPESHSDAMPLLXWQBJJDQLLIK");
    msg.custom.assign("JGJYQMSSLRFDZIJZDZAJZFPINHVTWOYBBUABWTWAQRYZHKPCCADIFSRGUJNSCXKBKPPMFYVKWIIIDPYRIWKVJDQXGXCUBRTKZFVUYTBQMFYOTOSQLTALAIEAHZUCPCHHYROSLWGNHDJKJHGDFVACPHDLXROUBXUEMDYWDLTLNQPEQZENFCNVNUPOTXOCZEOMONVJGBAGQENMXFHQCMIPSWVARMWBKLUOG");

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
    msg.setTimeStamp(0.20001132035714797);
    msg.setSource(12484U);
    msg.setSourceEntity(243U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(55U);
    msg.timeout = 41454U;
    msg.name.assign("QSTIYICUIGGGOYDRCLRWGSHSPAFZBDMRERXNWGHXHJXLWWZMEVNLGNKVOKKLBQWHTVMDBKPPYITSODLEEXQFBFIZ");
    msg.custom.assign("ZNYKSRWXNQDVHZCSLYZYDWQEZZVGZJJRTAIWNRJBVZKLEVFCAOLABXTTSEQQENPIXMEPYYFUKMRGMZQWRBARSJLUQPBERHDVKFQKAP");

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
    msg.setTimeStamp(0.7006649665898556);
    msg.setSource(62759U);
    msg.setSourceEntity(3U);
    msg.setDestination(56993U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.27153592024229034;
    msg.lon = 0.5891009628098711;
    msg.z = 0.20292522214577635;
    msg.z_units = 94U;
    msg.speed = 0.12698311106739868;
    msg.speed_units = 142U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44849U;
    tmp_msg_0.off_x = 0.7441844470615013;
    tmp_msg_0.off_y = 0.6061023966831908;
    tmp_msg_0.off_z = 0.913610608957127;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.042808797090245765;
    msg.custom.assign("AQRVCAXQIBJFOIISAHCHQWSUMDNDGQMKRCKOVBNHLQPZNXCOOLUBQEAJYBTZVJRWLCNMWCWADZPRCLGTLSXKJBFHUEIWFPRDFKGMGUKENWMJLTBLVDBCMSATCPGOEGXXYKSMMEHSZXLVYZUGIYMJZITIKDVJVYSIHYRPTZMZWNDBFUANYJQVDWTXAKYSEQZUJFIXEPJRHRRONF");

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
    msg.setTimeStamp(0.21669450783945865);
    msg.setSource(12256U);
    msg.setSourceEntity(131U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.8152619072515829;
    msg.lon = 0.30251607408710246;
    msg.z = 0.3007451421852193;
    msg.z_units = 160U;
    msg.speed = 0.686499396236914;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.019979935359782264;
    tmp_msg_0.y = 0.13744435004273015;
    tmp_msg_0.z = 0.9558305172687656;
    tmp_msg_0.t = 0.8209020863919614;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 45493U;
    tmp_msg_1.off_x = 0.31839083077169616;
    tmp_msg_1.off_y = 0.09811840937789429;
    tmp_msg_1.off_z = 0.8208220953439864;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.917491233306801;
    msg.custom.assign("LUDHRPGLAQWDIUDBESWPVJJRCVXGEVYCXSRNUVOHLMJNULKTIWNQBXJMGRSKXZTCRSICNONEARHWODXJFFZFQWHONAKNVBVYPGGWIDYGCIABYTMVZLFXLPPHEYRJSHVPHCXTJYQCHFWMAPQBVTXHPSKQSDWEYBGNSLYONFFOQZLPGEDBEUYLKBROFNKFSUMZGUSUJMMUXDFK");

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
    msg.setTimeStamp(0.3018923409365999);
    msg.setSource(14136U);
    msg.setSourceEntity(57U);
    msg.setDestination(63771U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.6929376935935592;
    msg.lon = 0.02994396864644866;
    msg.z = 0.6299477142159524;
    msg.z_units = 234U;
    msg.speed = 0.9606300367728845;
    msg.speed_units = 73U;
    msg.start_time = 0.21456705788595587;
    msg.custom.assign("IDDEJRHVEGUHGFMKIKJSZJLBVDECLDYTWOIYSANRTBFWXHYZQMQYMPBNOQEUKTKQWYVGQBHGRDRDEHAIABCSAXGLWLBMTNXVCJAIRMUWJJCWUWHDTWFBKWJKLSULMSQVIHXUTNBMWURRZAGZEOPQCVYDSFYYBTDNPNBFGTVGSUOJAEPESOXOIILVVUAECCAOXZIZCS");

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
    msg.setTimeStamp(0.04817940352497907);
    msg.setSource(45099U);
    msg.setSourceEntity(183U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(47U);
    msg.vid = 31158U;
    msg.off_x = 0.6583687737587176;
    msg.off_y = 0.33425083949785195;
    msg.off_z = 0.22534022452709968;

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
    msg.setTimeStamp(0.701012607041688);
    msg.setSource(11383U);
    msg.setSourceEntity(56U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(111U);
    msg.vid = 3183U;
    msg.off_x = 0.8188283194250667;
    msg.off_y = 0.39198737250082427;
    msg.off_z = 0.010591803571930236;

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
    msg.setTimeStamp(0.6979194270964284);
    msg.setSource(25285U);
    msg.setSourceEntity(50U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(108U);
    msg.vid = 44864U;
    msg.off_x = 0.567359493978928;
    msg.off_y = 0.3945261793967332;
    msg.off_z = 0.7914075563949419;

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
    msg.setTimeStamp(0.23151168221714968);
    msg.setSource(45952U);
    msg.setSourceEntity(203U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.6649608786677621);
    msg.setSource(27349U);
    msg.setSourceEntity(197U);
    msg.setDestination(14591U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.43317112410509884);
    msg.setSource(48897U);
    msg.setSourceEntity(210U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.9938685263890857);
    msg.setSource(34289U);
    msg.setSourceEntity(63U);
    msg.setDestination(11680U);
    msg.setDestinationEntity(68U);
    msg.mid = 1082U;

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
    msg.setTimeStamp(0.6080119620246608);
    msg.setSource(2788U);
    msg.setSourceEntity(104U);
    msg.setDestination(46493U);
    msg.setDestinationEntity(58U);
    msg.mid = 5443U;

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
    msg.setTimeStamp(0.43505941974951956);
    msg.setSource(35229U);
    msg.setSourceEntity(165U);
    msg.setDestination(24045U);
    msg.setDestinationEntity(149U);
    msg.mid = 42919U;

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
    msg.setTimeStamp(0.039164849386491896);
    msg.setSource(51944U);
    msg.setSourceEntity(1U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(197U);
    msg.state = 124U;
    msg.eta = 39970U;
    msg.info.assign("YOQRQVYPAMCLJOPYIQYPWRYXIGUXWKWBNLMEASIUJBZPPSMUWPSUJVNLFGRBITMJVNBTFRRVNMVIDCEHVFRZHGNEGKLEMTIEXVPZCFGEQC");

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
    msg.setTimeStamp(0.6055109108961249);
    msg.setSource(47362U);
    msg.setSourceEntity(139U);
    msg.setDestination(2075U);
    msg.setDestinationEntity(206U);
    msg.state = 47U;
    msg.eta = 40757U;
    msg.info.assign("WDCFBGVLPKVANRYVQSHIGAUQBNARNICMHSEXAAHSYTLXHUNBDGQGVWSDNHKXEMTLFQOSZZGPSMHIEWFZUCVIMYAVLLBJRQOEXHDVZMJVDTZXJPYBZXNOEKAGGBJNTMCEUWEOMIICWLKRKIRYPTFSCJFBFSCXSCYUFMPRTOLWKMYXOTJUMJZIVBYPNUDEUGROOHBYCKYEWCKPABPLDAJDXIUPHKPZQWQTQJGRQSUKDRIFZTDFNWGXW");

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
    msg.setTimeStamp(0.4190641553402221);
    msg.setSource(34949U);
    msg.setSourceEntity(194U);
    msg.setDestination(13759U);
    msg.setDestinationEntity(71U);
    msg.state = 129U;
    msg.eta = 30227U;
    msg.info.assign("FTOCLIYGMZOJDYKXKVQMXVSHFLHYACNCFVZEAOMOHJNBQSXROCNTCZQPYZAUVMEYLSQUNWYQBDJQIIUDDKOSYXECERAHMRKVXRTWEVPMAIESSWKCUIJA");

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
    msg.setTimeStamp(0.10310725685629152);
    msg.setSource(39600U);
    msg.setSourceEntity(79U);
    msg.setDestination(32975U);
    msg.setDestinationEntity(225U);
    msg.system = 30067U;
    msg.duration = 49148U;
    msg.speed = 0.6493708018641599;
    msg.speed_units = 117U;
    msg.x = 0.31759530751027776;
    msg.y = 0.2054573152908291;
    msg.z = 0.10154721974230518;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.7547591715794243);
    msg.setSource(22350U);
    msg.setSourceEntity(249U);
    msg.setDestination(29452U);
    msg.setDestinationEntity(125U);
    msg.system = 17551U;
    msg.duration = 16613U;
    msg.speed = 0.24277271838542847;
    msg.speed_units = 205U;
    msg.x = 0.23704360734048813;
    msg.y = 0.4357306898873352;
    msg.z = 0.6885100857286555;
    msg.z_units = 46U;

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
    msg.setTimeStamp(0.7511338881204824);
    msg.setSource(33557U);
    msg.setSourceEntity(144U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(153U);
    msg.system = 26928U;
    msg.duration = 50182U;
    msg.speed = 0.41898511120737925;
    msg.speed_units = 35U;
    msg.x = 0.8895571096092612;
    msg.y = 0.5694065206221626;
    msg.z = 0.8355655430631411;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.10517315450973974);
    msg.setSource(33945U);
    msg.setSourceEntity(215U);
    msg.setDestination(10708U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.5776850811579531;
    msg.lon = 0.9537545349049478;
    msg.speed = 0.6165403208104109;
    msg.speed_units = 6U;
    msg.duration = 38036U;
    msg.sys_a = 6597U;
    msg.sys_b = 9704U;
    msg.move_threshold = 0.8936718031453567;

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
    msg.setTimeStamp(0.5791850670034012);
    msg.setSource(45775U);
    msg.setSourceEntity(6U);
    msg.setDestination(22676U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.24973980658344808;
    msg.lon = 0.876006197672094;
    msg.speed = 0.5547647268723451;
    msg.speed_units = 203U;
    msg.duration = 35451U;
    msg.sys_a = 34591U;
    msg.sys_b = 42278U;
    msg.move_threshold = 0.21971430836460004;

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
    msg.setTimeStamp(0.002735748035740726);
    msg.setSource(22231U);
    msg.setSourceEntity(131U);
    msg.setDestination(28468U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.4641530858432048;
    msg.lon = 0.8178295686593464;
    msg.speed = 0.7370735908079851;
    msg.speed_units = 244U;
    msg.duration = 55855U;
    msg.sys_a = 22727U;
    msg.sys_b = 19248U;
    msg.move_threshold = 0.6142203931152779;

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
    msg.setTimeStamp(0.031160537815965617);
    msg.setSource(64481U);
    msg.setSourceEntity(168U);
    msg.setDestination(8525U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8985166682429749;
    msg.lon = 0.7466901491084273;
    msg.z = 0.4384962152960902;
    msg.z_units = 52U;
    msg.speed = 0.6444149073483444;
    msg.speed_units = 147U;
    msg.custom.assign("ZKURJOHMELZSTEIDKIJCCVICQGZSCEJUDFDJSDBRMQJNVRGHAGLTLIHVGTPJGUPNSVCRB");

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
    msg.setTimeStamp(0.2643537936670236);
    msg.setSource(40454U);
    msg.setSourceEntity(32U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.2315472055692268;
    msg.lon = 0.17026320142917772;
    msg.z = 0.2708853521114106;
    msg.z_units = 114U;
    msg.speed = 0.051831619479723035;
    msg.speed_units = 149U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1847169482322525;
    tmp_msg_0.lon = 0.10575187714537204;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CQNFAJCDNSJTFWRKWNVTGWVOPCVCDHNADZNFIIAHYOMXLGFEUBQONKLCEBMCBGWUZGVKHHXCYRBJUYPFHGROBFPUTIUSFRXIHDEORYAGRIMRECSDHPSKUCJPKFFMJELKMGXOLYZPQZJPYWEWGYZTJKOTZPUQTSVXZLREHUTHVRANOOJNLLSNGSQJKLBTBXDWTOVDEDEPQ");

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
    msg.setTimeStamp(0.5713377900588671);
    msg.setSource(47197U);
    msg.setSourceEntity(12U);
    msg.setDestination(43428U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.14250807227707585;
    msg.lon = 0.7523493187294431;
    msg.z = 0.1152294028495825;
    msg.z_units = 200U;
    msg.speed = 0.7450855538527061;
    msg.speed_units = 163U;
    msg.custom.assign("MSFQKVGOKPBROUVUYVLNXLMAQFFMTZXCXDQBGHAUYZA");

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
    msg.setTimeStamp(0.2678673013560052);
    msg.setSource(29004U);
    msg.setSourceEntity(118U);
    msg.setDestination(49701U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.40817547312293556;
    msg.lon = 0.532250080492712;

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
    msg.setTimeStamp(0.7481917633085295);
    msg.setSource(44617U);
    msg.setSourceEntity(151U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.6741318764402253;
    msg.lon = 0.4593652769057347;

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
    msg.setTimeStamp(0.5650683188714404);
    msg.setSource(7542U);
    msg.setSourceEntity(16U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.6326111362551353;
    msg.lon = 0.14416037711641405;

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
    msg.setTimeStamp(0.07113431094590594);
    msg.setSource(1470U);
    msg.setSourceEntity(241U);
    msg.setDestination(12703U);
    msg.setDestinationEntity(107U);
    msg.timeout = 17642U;
    msg.lat = 0.2648870245458297;
    msg.lon = 0.2092703582875839;
    msg.z = 0.7295693721444405;
    msg.z_units = 104U;
    msg.pitch = 0.8609612471046568;
    msg.amplitude = 0.25036027703047814;
    msg.duration = 21692U;
    msg.speed = 0.7615000775442838;
    msg.speed_units = 157U;
    msg.radius = 0.7619971587717821;
    msg.direction = 76U;
    msg.custom.assign("JBOYBOTSPZ");

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
    msg.setTimeStamp(0.898877907791388);
    msg.setSource(41253U);
    msg.setSourceEntity(128U);
    msg.setDestination(31462U);
    msg.setDestinationEntity(143U);
    msg.timeout = 64280U;
    msg.lat = 0.754693661378289;
    msg.lon = 0.571651365594637;
    msg.z = 0.6211544250093937;
    msg.z_units = 218U;
    msg.pitch = 0.8689591420947694;
    msg.amplitude = 0.250578148849945;
    msg.duration = 38112U;
    msg.speed = 0.11556791020408586;
    msg.speed_units = 83U;
    msg.radius = 0.6050847965316661;
    msg.direction = 18U;
    msg.custom.assign("RGQMLDASWUDEOGBWOWATCEKRMOKIHJNILPQQZNSZAZAYWGRFPNDBEZDFTAERHKRRPJCQAFIURLIMNZVPEGKBTBSUZXIGJMXNVYYWZBCKGHIRVLIVWWOSUYPIJETTTQNMOOKSYCYUZZJFCSUIVEXAEUHSDPSFEBCXPCVDIDJFQONXWZBKLJDCLMYPFVLLUHTKHGCBXNAURFLVYQHJFOMXTMOJYHEXAGGDA");

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
    msg.setTimeStamp(0.6760808178537304);
    msg.setSource(29756U);
    msg.setSourceEntity(37U);
    msg.setDestination(8752U);
    msg.setDestinationEntity(153U);
    msg.timeout = 21662U;
    msg.lat = 0.34854277715401205;
    msg.lon = 0.25419353672846057;
    msg.z = 0.114041598553134;
    msg.z_units = 115U;
    msg.pitch = 0.0757108811207271;
    msg.amplitude = 0.6643614219311367;
    msg.duration = 40329U;
    msg.speed = 0.6739270233568352;
    msg.speed_units = 44U;
    msg.radius = 0.028838854751262466;
    msg.direction = 162U;
    msg.custom.assign("ZGXPXHOOZKFLIPHZXJNURSAUXKDWKDIIBFJCGQBMNRVZUPMJVCULSOAEFHIFWZIBSOQAWQBMGYPVSKZYLSNUDTWMXAVVYWOQAVTOCRPABIFDGKXESRJKHFMYLGRYESLCEKJGCZN");

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
    msg.setTimeStamp(0.5716538522511403);
    msg.setSource(61319U);
    msg.setSourceEntity(9U);
    msg.setDestination(41330U);
    msg.setDestinationEntity(244U);
    msg.formation_name.assign("DTRWZZOAKOOE");
    msg.reference_frame = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53831U;
    tmp_msg_0.off_x = 0.641298630756582;
    tmp_msg_0.off_y = 0.48993711083236613;
    tmp_msg_0.off_z = 0.2805355104849281;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FPHHEVANKARCIZFFWPXQQMUBTRXXSDBFUFTZSLTLTQBCAFYGOQXFHTMJVLSGCVPONIYMCWYYMWHCAHEMLHSRHKXUXCWEIONBSGOVGURJSLCWDFRLIDYLJZ");

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
    msg.setTimeStamp(0.5912792894783976);
    msg.setSource(29961U);
    msg.setSourceEntity(240U);
    msg.setDestination(724U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("LQOWDRVZZCUPCJDIVPSTCVCD");
    msg.reference_frame = 34U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25784U;
    tmp_msg_0.off_x = 0.7516541188079615;
    tmp_msg_0.off_y = 0.21248458403240678;
    tmp_msg_0.off_z = 0.8758833086159559;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DNSTZLOYDBZVALOCCEFHFCJKEUZAUQKPNHUJTLATMLNSHVFKESVAUHZRZQQSISSOYSFYLUBLSCMGAUIWEWQEZQMEISYAUSWXCKYRUWHHEJVNOCJWGVLWFCRBVWCXMMABXRJXNBMJKGFPFKTNBPWDXTXUBDQWOYITGTQGZTTDGNROFKAPMOJFNHFHPVYPXDRBIRDYIOAVMPNLJOLOEZYCDQPLIVWVGGPKGDJ");

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
    msg.setTimeStamp(0.12578879981918956);
    msg.setSource(57323U);
    msg.setSourceEntity(157U);
    msg.setDestination(62846U);
    msg.setDestinationEntity(98U);
    msg.formation_name.assign("XPORWLQVRVUJGZOFZEKJCOMAPXCHIXPQLFWGMNPZIQBPOJDMVTDHVCGBTFGQWJZFMGQAUVEDZTS");
    msg.reference_frame = 141U;
    msg.custom.assign("IIYEHEFVDKQUORXXKTDNDSGZWLMFIYCZQWSYTUZYABTSJYQYQSSOCEBMOUJBLWWDLEULVLAJKPHBPNKKPBEFDELKYYTIXMITZNJXDTXFMLVMJSZGLHUBPVQGRVIUQERCG");

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
    msg.setTimeStamp(0.3589286049158432);
    msg.setSource(51414U);
    msg.setSourceEntity(62U);
    msg.setDestination(35345U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("AXQSHRXEWBKAUWPILSKYMONOAHDEFEQDKKUVIUHTYEBVVKFZGMMUYGMYTONPGIMSOWRTKEWFCCDVJHLCRVZOCJIRAJQPFQMUGLLOQXDRZDGAWANHTWCTABRGTNJSRNDDPENZAEHKMZPSYUHXJ");
    msg.formation_name.assign("NKOAAFKPDJWXYGLRZPX");
    msg.plan_id.assign("GGWCXEEFWVLTLSOMGWGJSOYOULXUBIZQDLNMISGOIHEPULFBMZDAWXBRWIDBQSYZZZXHNEJ");
    msg.description.assign("SIDQTWZJPHSVETUTWULJLLXJFMEYBWNMAIHJYSOIZWDKJSFMBLMGJMAFXANPHGTTKLQIJIRAQKFVMNAIEBOJQEDVGVHMIEQYNBCWSBQOXEAOGPCWSYVNFMLFKGNCKARLUAFIOVYQTPRPCUDWMXBUZSOPDFWPHQG");
    msg.leader_speed = 0.8893832027137183;
    msg.leader_bank_lim = 0.10925419984430118;
    msg.pos_sim_err_lim = 0.892155794241464;
    msg.pos_sim_err_wrn = 0.4960525443654443;
    msg.pos_sim_err_timeout = 40839U;
    msg.converg_max = 0.7654700382373395;
    msg.converg_timeout = 56105U;
    msg.comms_timeout = 55886U;
    msg.turb_lim = 0.6183477961486727;
    msg.custom.assign("MYEWUMPSIDIEHZYZCANQWRXTTMWLSEWVSBGKFJJPLXFHNXDEVXLRDNSNNEYEGIMWANCSDJPAIBYYBICJHRFJVQATTUARCTFYMIGKRFRCECB");

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
    msg.setTimeStamp(0.7544078589173504);
    msg.setSource(2119U);
    msg.setSourceEntity(169U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("MZCSKXINXOZPTJYGHHLRRMMVBWIJTHDDTZUETMIREVBBQFLWWQCUBBLUHHVRSQXNXYCGAPGTIFZHYLNNYRSCFOFRDQXBRLPJKUPTUXIYZKPJITQTKUWKAXGVJVEWUJPMIMGGRUNGZWCKQIGRFUIAFAKHBYWPELSEDLNSETBAEOSJCYCQEODOCLVAFYDKZEQVBZKRLFDTPNZ");
    msg.formation_name.assign("ENFUGUQBYIMXSEYELHBKWMGCIDAUXAPTLTYBDZMMTMPTJCNTBQRGCJRDUSBEDPXA");
    msg.plan_id.assign("QCUZMKRNKQVXZEAMIUZHSSCQTKVNOPHDLRBYKHZJRDLFFLGJYVULWPNDBTEIMHYUCYEVVKPQNONFQIWWRTXRKRVSHTLXWZWADMPPPO");
    msg.description.assign("WWAZMZXTUQZJPFMMRXTSTOHCDXKJAYQLNKSFIVQWPBAGDZDRFHDECGTYFEYDUXXVMVVTNODSHVCTPOBMQKESJVDGMNWAWVHNXJBULEEPWOJYRTEFUMNHHPFLHEYUFQPOYDJNCSKLLBKLSBIDNBPXZZG");
    msg.leader_speed = 0.5621615885410689;
    msg.leader_bank_lim = 0.32249775744554177;
    msg.pos_sim_err_lim = 0.7302824452147451;
    msg.pos_sim_err_wrn = 0.7183846885913904;
    msg.pos_sim_err_timeout = 45363U;
    msg.converg_max = 0.5700189305531482;
    msg.converg_timeout = 397U;
    msg.comms_timeout = 33377U;
    msg.turb_lim = 0.6032032690231588;
    msg.custom.assign("HIRXZCLFVEGCVYQNRJOIZOYDBOCVWRNUQAJCLDWIEVYNUXEXDBJLZRLDBMWMMAEYNASEISKXBJLORESMHXOPTDISLBCURUTCOFGPDJKMFHHSQHPSZVVROFHAQYKDUAGXINJHVXBAZGGWJWGDOKWZTFQBSXTBTGQXYQINQTEULJHTCFDWFUPJPFKBZBOKTAQYVWZZTHGMNPEYPNMRNUOXDMCGEZVKIKTFQPKPR");

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
    msg.setTimeStamp(0.6397047856420378);
    msg.setSource(30129U);
    msg.setSourceEntity(154U);
    msg.setDestination(45527U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("IOPDZVFUXXSOWVJICOEFDYUDDYLPLSZVJQMIQHNJHNKPZVXRGKXRJLHYJFSTFWCBGAOXLFCJHEANATECBEVIKGDTSKMFUHQFRRNMETWXTQBLILXVTSMFZPPZYVGYLADCJOQLUZSCQKKAHIIUH");
    msg.formation_name.assign("WGMWCZCINETMNRSBPYGETDMUGXDEPJIGQEUOZBPABDBQQWIXUOTGWCEFJMJOFMYNVVKMQQIXSBTSGFNRHYUREMUPSDCZEBWVVFSUHSQCDCJVYJ");
    msg.plan_id.assign("SMGNMOLQZAZNOFVHXXYRHEBUVFCSFAKUWNVWVZGDTYBPCQGGAKYOSOLWQHXXPOMJRLWGHEYXUXGGGCYUCADYJLIZUSLFTPQGTICIPMTPEUQAMBHNBOWZDRRHEFNQKRFFFVIVCXOZPZORDYDMKYGJLTQWSHJ");
    msg.description.assign("EOLDCUOBXYUVXDNAPTIGCTBOKWZECUVHUEBVPAITCDQDPBGUFRAWYQEARYSMRNDXKDQQFFHNYHGEQFCHBBYPEUSWBJKVSADERJKQYTPBFAYSKFPWKRSDHDFVGMAXKLNGLPMIQOGIMRLWUPWTHHGGJUVKSOACVYJXOZFWQOXFZIWZWBXRBMZIJJCCLNDLGOMMZMKIMZR");
    msg.leader_speed = 0.8073056995907418;
    msg.leader_bank_lim = 0.8346993019368211;
    msg.pos_sim_err_lim = 0.5019377677006627;
    msg.pos_sim_err_wrn = 0.18098844294881344;
    msg.pos_sim_err_timeout = 41744U;
    msg.converg_max = 0.773562083858713;
    msg.converg_timeout = 64925U;
    msg.comms_timeout = 3432U;
    msg.turb_lim = 0.9886400564384697;
    msg.custom.assign("PRQGMGSSZEHWMAJQBAVHNJFPGARRHZMRTOCBGMVLVSSXSTNWXZPANNHVDPXURQYDUNBPQJVGLKXYQOJACXAWTRKYGORPVKIKZNCHBRHWDKFEUPJXSZHXHLDEHVIRSFFIFDEYTNKGEJOFW");

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
    msg.setTimeStamp(0.8333727096213293);
    msg.setSource(50562U);
    msg.setSourceEntity(197U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(157U);
    msg.control_src = 34199U;
    msg.control_ent = 0U;
    msg.timeout = 0.49004131330936673;
    msg.loiter_radius = 0.6100605119600515;
    msg.altitude_interval = 0.613446050452318;

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
    msg.setTimeStamp(0.5248374430194388);
    msg.setSource(12388U);
    msg.setSourceEntity(163U);
    msg.setDestination(36125U);
    msg.setDestinationEntity(93U);
    msg.control_src = 43068U;
    msg.control_ent = 71U;
    msg.timeout = 0.13870384632021304;
    msg.loiter_radius = 0.49638392102620255;
    msg.altitude_interval = 0.5866371689171637;

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
    msg.setTimeStamp(0.3875201879444501);
    msg.setSource(44591U);
    msg.setSourceEntity(126U);
    msg.setDestination(2558U);
    msg.setDestinationEntity(123U);
    msg.control_src = 21720U;
    msg.control_ent = 98U;
    msg.timeout = 0.605460373483465;
    msg.loiter_radius = 0.11416029370319103;
    msg.altitude_interval = 0.27858352289986543;

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
    msg.setTimeStamp(0.7944089442402181);
    msg.setSource(31549U);
    msg.setSourceEntity(187U);
    msg.setDestination(32370U);
    msg.setDestinationEntity(114U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22212866141309362;
    tmp_msg_0.speed_units = 232U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2752064593801974;
    tmp_msg_1.z_units = 151U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7661186217302826;
    msg.lon = 0.6144865860568288;
    msg.radius = 0.46674837005779046;

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
    msg.setTimeStamp(0.1300643224236211);
    msg.setSource(58537U);
    msg.setSourceEntity(151U);
    msg.setDestination(63728U);
    msg.setDestinationEntity(169U);
    msg.flags = 98U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7032610954691179;
    tmp_msg_0.speed_units = 210U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.41040671680354013;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.13897093287086004;
    msg.lon = 0.17446646455459225;
    msg.radius = 0.5725242844286429;

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
    msg.setTimeStamp(0.056548360867752834);
    msg.setSource(27039U);
    msg.setSourceEntity(142U);
    msg.setDestination(47644U);
    msg.setDestinationEntity(40U);
    msg.flags = 219U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5573030816000184;
    tmp_msg_0.speed_units = 4U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1264599473012381;
    tmp_msg_1.z_units = 199U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3029209545721474;
    msg.lon = 0.9962723271735715;
    msg.radius = 0.5754177253026649;

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
    msg.setTimeStamp(0.35709600413961573);
    msg.setSource(48905U);
    msg.setSourceEntity(188U);
    msg.setDestination(7700U);
    msg.setDestinationEntity(53U);
    msg.control_src = 35227U;
    msg.control_ent = 17U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 108U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4084508041483902;
    tmp_tmp_msg_0_0.speed_units = 178U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5664732595239097;
    tmp_tmp_msg_0_1.z_units = 249U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9132626187467029;
    tmp_msg_0.lon = 0.3025488959290097;
    tmp_msg_0.radius = 0.9060022360604818;
    msg.reference.set(tmp_msg_0);
    msg.state = 184U;
    msg.proximity = 36U;

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
    msg.setTimeStamp(0.9414372799357312);
    msg.setSource(5286U);
    msg.setSourceEntity(49U);
    msg.setDestination(58656U);
    msg.setDestinationEntity(160U);
    msg.control_src = 2111U;
    msg.control_ent = 167U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.36406103316708815;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6941061425096938;
    tmp_tmp_msg_0_1.z_units = 158U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8956444271792516;
    tmp_msg_0.lon = 0.8478905236279517;
    tmp_msg_0.radius = 0.7468921799611479;
    msg.reference.set(tmp_msg_0);
    msg.state = 87U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.9664305422983399);
    msg.setSource(35781U);
    msg.setSourceEntity(125U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(190U);
    msg.control_src = 39493U;
    msg.control_ent = 31U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 106U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5455801603261319;
    tmp_tmp_msg_0_0.speed_units = 96U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6121850074465703;
    tmp_tmp_msg_0_1.z_units = 147U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.03116646126426792;
    tmp_msg_0.lon = 0.7385643258176714;
    tmp_msg_0.radius = 0.15881632007977764;
    msg.reference.set(tmp_msg_0);
    msg.state = 153U;
    msg.proximity = 78U;

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
    msg.setTimeStamp(0.38240528300857113);
    msg.setSource(8043U);
    msg.setSourceEntity(28U);
    msg.setDestination(35753U);
    msg.setDestinationEntity(164U);
    msg.ax_cmd = 0.2633113160552699;
    msg.ay_cmd = 0.07435336739643672;
    msg.az_cmd = 0.5749258066278512;
    msg.ax_des = 0.7209187897560831;
    msg.ay_des = 0.8221181025357296;
    msg.az_des = 0.7430545975598428;
    msg.virt_err_x = 0.5730920765297532;
    msg.virt_err_y = 0.7503004417474608;
    msg.virt_err_z = 0.5321165991063957;
    msg.surf_fdbk_x = 0.36074421612741847;
    msg.surf_fdbk_y = 0.7811613900722685;
    msg.surf_fdbk_z = 0.8473497205625257;
    msg.surf_unkn_x = 0.640892416483256;
    msg.surf_unkn_y = 0.34737219386289064;
    msg.surf_unkn_z = 0.5063620436305948;
    msg.ss_x = 0.11138199202216226;
    msg.ss_y = 0.34564101360129273;
    msg.ss_z = 0.920852140745663;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WODNFPGNQUIKNIBNVCQWVBJFIDFGJALLUYCWSNVZBOZRKABMVKDHVAQPUHKASUNJXCLHDVIJQYXWATRYDIDK");
    tmp_msg_0.dist = 0.44317521929069037;
    tmp_msg_0.err = 0.3287585730193586;
    tmp_msg_0.ctrl_imp = 0.6403899520087609;
    tmp_msg_0.rel_dir_x = 0.465110718143827;
    tmp_msg_0.rel_dir_y = 0.9829705862963096;
    tmp_msg_0.rel_dir_z = 0.5906385676013998;
    tmp_msg_0.err_x = 0.26255066332044596;
    tmp_msg_0.err_y = 0.34261262443071905;
    tmp_msg_0.err_z = 0.8706275619791222;
    tmp_msg_0.rf_err_x = 0.5466051565866197;
    tmp_msg_0.rf_err_y = 0.8740135910927079;
    tmp_msg_0.rf_err_z = 0.2006065424991459;
    tmp_msg_0.rf_err_vx = 0.5715113691607345;
    tmp_msg_0.rf_err_vy = 0.4969907427694663;
    tmp_msg_0.rf_err_vz = 0.7326412464974558;
    tmp_msg_0.ss_x = 0.2233248305158415;
    tmp_msg_0.ss_y = 0.08269279201744151;
    tmp_msg_0.ss_z = 0.48581072875722364;
    tmp_msg_0.virt_err_x = 0.9993916947625274;
    tmp_msg_0.virt_err_y = 0.06460378665593824;
    tmp_msg_0.virt_err_z = 0.4347423139590241;
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
    msg.setTimeStamp(0.5390399305631087);
    msg.setSource(21961U);
    msg.setSourceEntity(92U);
    msg.setDestination(32928U);
    msg.setDestinationEntity(143U);
    msg.ax_cmd = 0.20614491422551084;
    msg.ay_cmd = 0.1322477199623402;
    msg.az_cmd = 0.7241147487163689;
    msg.ax_des = 0.20196401860032354;
    msg.ay_des = 0.9743775924836142;
    msg.az_des = 0.8281519857628006;
    msg.virt_err_x = 0.5932727467267127;
    msg.virt_err_y = 0.9257317316660685;
    msg.virt_err_z = 0.5143244990879108;
    msg.surf_fdbk_x = 0.607387161676011;
    msg.surf_fdbk_y = 0.5645868150195248;
    msg.surf_fdbk_z = 0.6259601050981786;
    msg.surf_unkn_x = 0.5496975128982359;
    msg.surf_unkn_y = 0.14472726443079065;
    msg.surf_unkn_z = 0.821511974642665;
    msg.ss_x = 0.9495325367659704;
    msg.ss_y = 0.9130437688860107;
    msg.ss_z = 0.7788324398872492;

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
    msg.setTimeStamp(0.15146156741197925);
    msg.setSource(48982U);
    msg.setSourceEntity(130U);
    msg.setDestination(26086U);
    msg.setDestinationEntity(110U);
    msg.ax_cmd = 0.5953037139695574;
    msg.ay_cmd = 0.11235087817421308;
    msg.az_cmd = 0.5105480111478382;
    msg.ax_des = 0.2742588655803606;
    msg.ay_des = 0.06060916934046101;
    msg.az_des = 0.8067412983479719;
    msg.virt_err_x = 0.6569732342269964;
    msg.virt_err_y = 0.39714972422085026;
    msg.virt_err_z = 0.9853860315188354;
    msg.surf_fdbk_x = 0.33937157520862216;
    msg.surf_fdbk_y = 0.6523595684526077;
    msg.surf_fdbk_z = 0.8910886746183291;
    msg.surf_unkn_x = 0.840091394009791;
    msg.surf_unkn_y = 0.5428594763876242;
    msg.surf_unkn_z = 0.903835515411215;
    msg.ss_x = 0.8698048053448414;
    msg.ss_y = 0.6340939857446884;
    msg.ss_z = 0.6508167692621388;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZINRKHMHVXSODYZYJJMUWYFEQLHDCIDQUHQJTBRTAVPFGLPJSLYREPOSLGXMPFVLCK");
    tmp_msg_0.dist = 0.9269337988176124;
    tmp_msg_0.err = 0.8155080347328427;
    tmp_msg_0.ctrl_imp = 0.0844075727440321;
    tmp_msg_0.rel_dir_x = 0.15817388795660692;
    tmp_msg_0.rel_dir_y = 0.7961052507658425;
    tmp_msg_0.rel_dir_z = 0.2184492911058341;
    tmp_msg_0.err_x = 0.3225878779713178;
    tmp_msg_0.err_y = 0.8743444806920947;
    tmp_msg_0.err_z = 0.3988774908555288;
    tmp_msg_0.rf_err_x = 0.6003922787810069;
    tmp_msg_0.rf_err_y = 0.20503159420481076;
    tmp_msg_0.rf_err_z = 0.752411956202055;
    tmp_msg_0.rf_err_vx = 0.7463840590587419;
    tmp_msg_0.rf_err_vy = 0.41421576652306313;
    tmp_msg_0.rf_err_vz = 0.027020394854343932;
    tmp_msg_0.ss_x = 0.68369376119451;
    tmp_msg_0.ss_y = 0.22216489186010302;
    tmp_msg_0.ss_z = 0.9172893952401285;
    tmp_msg_0.virt_err_x = 0.4656661869546087;
    tmp_msg_0.virt_err_y = 0.8607388080949482;
    tmp_msg_0.virt_err_z = 0.13917218674430543;
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
    msg.setTimeStamp(0.1223803935690364);
    msg.setSource(48926U);
    msg.setSourceEntity(106U);
    msg.setDestination(4710U);
    msg.setDestinationEntity(175U);
    msg.s_id.assign("GGJPIVFTFRVBLPTMUHOGDFXWBEHMJDBZCGRLGTXOJSHLHDXPQGYEUXBAJKNJK");
    msg.dist = 0.3149618627118932;
    msg.err = 0.4585419322497344;
    msg.ctrl_imp = 0.6847138081463002;
    msg.rel_dir_x = 0.3524322212037845;
    msg.rel_dir_y = 0.1109963285717307;
    msg.rel_dir_z = 0.32860423097071156;
    msg.err_x = 0.6370901604503253;
    msg.err_y = 0.6530842499274796;
    msg.err_z = 0.5529224536173478;
    msg.rf_err_x = 0.28166090036575764;
    msg.rf_err_y = 0.2335522729356947;
    msg.rf_err_z = 0.422228895445793;
    msg.rf_err_vx = 0.5035565489735176;
    msg.rf_err_vy = 0.06974281291353457;
    msg.rf_err_vz = 0.01708242120270087;
    msg.ss_x = 0.11452242811202684;
    msg.ss_y = 0.9910354357325624;
    msg.ss_z = 0.16539036005357743;
    msg.virt_err_x = 0.8626623850231816;
    msg.virt_err_y = 0.8528021449023028;
    msg.virt_err_z = 0.8976181713814034;

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
    msg.setTimeStamp(0.1040468449562626);
    msg.setSource(49390U);
    msg.setSourceEntity(245U);
    msg.setDestination(39986U);
    msg.setDestinationEntity(30U);
    msg.s_id.assign("GSDPFKEWBHUQVCVNMACEWVNVSRIFWHMSZTZEJUFPYFQCYWQRZQGBJGRLGIGMOLGBQDNRBVSVCEDBYOKCHJA");
    msg.dist = 0.5969134326136628;
    msg.err = 0.2446008363941563;
    msg.ctrl_imp = 0.4980539694615659;
    msg.rel_dir_x = 0.07916166323492657;
    msg.rel_dir_y = 0.582557947634465;
    msg.rel_dir_z = 0.5586869692176875;
    msg.err_x = 0.3154647711933456;
    msg.err_y = 0.5384575098769779;
    msg.err_z = 0.8211791225556406;
    msg.rf_err_x = 0.3710292907859437;
    msg.rf_err_y = 0.434653411233913;
    msg.rf_err_z = 0.9285936356749791;
    msg.rf_err_vx = 0.9217177566565061;
    msg.rf_err_vy = 0.6741452621792123;
    msg.rf_err_vz = 0.882203676922644;
    msg.ss_x = 0.7250811420853854;
    msg.ss_y = 0.37344204394360747;
    msg.ss_z = 0.4278415480326112;
    msg.virt_err_x = 0.3158266050654255;
    msg.virt_err_y = 0.5443123252425249;
    msg.virt_err_z = 0.3010447218397445;

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
    msg.setTimeStamp(0.15504633163326242);
    msg.setSource(43428U);
    msg.setSourceEntity(48U);
    msg.setDestination(21385U);
    msg.setDestinationEntity(241U);
    msg.s_id.assign("OOTXVIRSNMJJHFGQQYNROKBRZZABIXYDNNBFWIUDUSXELSHHGOMXIQLOPHGZKSUAULLPTZLXCPAXYBVQQ");
    msg.dist = 0.3626701295802579;
    msg.err = 0.4953819354795045;
    msg.ctrl_imp = 0.9352391410229857;
    msg.rel_dir_x = 0.9240992016964369;
    msg.rel_dir_y = 0.5810834293169866;
    msg.rel_dir_z = 0.2667165607216968;
    msg.err_x = 0.8569707335339682;
    msg.err_y = 0.5591190084717333;
    msg.err_z = 0.7342260691437488;
    msg.rf_err_x = 0.8253028751170436;
    msg.rf_err_y = 0.292551678737631;
    msg.rf_err_z = 0.35433100611546287;
    msg.rf_err_vx = 0.9216625264975311;
    msg.rf_err_vy = 0.7243495811934351;
    msg.rf_err_vz = 0.9954753341988729;
    msg.ss_x = 0.4541175093309039;
    msg.ss_y = 0.6969818990803937;
    msg.ss_z = 0.6387600898033808;
    msg.virt_err_x = 0.7025804541042138;
    msg.virt_err_y = 0.5881951103349794;
    msg.virt_err_z = 0.09662647701850247;

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
    msg.setTimeStamp(0.8621670028351459);
    msg.setSource(59232U);
    msg.setSourceEntity(170U);
    msg.setDestination(64280U);
    msg.setDestinationEntity(68U);
    msg.timeout = 33168U;
    msg.rpm = 0.26076966995563533;
    msg.direction = 63U;
    msg.custom.assign("MHRMJWLOUAQNKLHPLYKDDQTYKHGUDRZJEVASCBGZFI");

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
    msg.setTimeStamp(0.40004032704038917);
    msg.setSource(42819U);
    msg.setSourceEntity(30U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(90U);
    msg.timeout = 17972U;
    msg.rpm = 0.22979535119714511;
    msg.direction = 74U;
    msg.custom.assign("HARQUWFMDVFUONDHGMHCCVMHJPNOXSAXTXWICJYKIESVRZDCYYALPQNTSKMYGW");

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
    msg.setTimeStamp(0.11779257006281507);
    msg.setSource(62319U);
    msg.setSourceEntity(101U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(38U);
    msg.timeout = 11762U;
    msg.rpm = 0.9140287879985557;
    msg.direction = 161U;
    msg.custom.assign("DQJKTDWQGSIJNENBOZLSVSXUKEITBSHKPFARBUYPYYKEMIJMBKOZRFCRGGFPAQFEQJTFTG");

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
    msg.setTimeStamp(0.5452904063636614);
    msg.setSource(9242U);
    msg.setSourceEntity(249U);
    msg.setDestination(47432U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("GIBLFCTEDHVJZCEFHSAPKBYFIQJTADLCNURDKHZKLOBXMDPDQYJAIMNGWUNWMEBIEROGJZUBINNMSBHUQCRNQZIADLWIUFCJDBHSWPHWQWXLBKGTXWIZCSYTLGPOOGVAJVHQMATXMJEQTXQHRSTITK");
    msg.type = 158U;
    msg.op = 23U;
    msg.group_name.assign("IKWTRLJYSBFRCZQJCELORWAVMPHSVECBGZLLUFWXEQYDUZJIILVDMJJMJRTSJVTOOFDFTQWYSAPDGBHXRIEVVOWEQKMXYUYZRLDIWOHUKXEGIMBNFUKQUPCNRHAWCNDHUSBWOLIOZXHQAGLFDZNGAGATIGEVNUQHPKQBG");
    msg.plan_id.assign("IDZHGWNQMGBVFDOKCLYQVPXNLVGMBUTSFVKPARKYLIYQZOXQFRECGRKQLRWWWLYWOKIMOAX");
    msg.description.assign("AZIYRXTQIOGFPVLINZLCLIQPURBGZKONISKRANOULTIGPESVOVSPIDLRIYURXADEYQVPNMMCNTHJUWJCMTPNGFYNKVOGZAKHJMICVUEASKMBJIKEVNWFXVMGWH");
    msg.reference_frame = 107U;
    msg.leader_bank_lim = 0.6821166455300808;
    msg.leader_speed_min = 0.6402820099135681;
    msg.leader_speed_max = 0.8222380693995591;
    msg.leader_alt_min = 0.8944759345684679;
    msg.leader_alt_max = 0.19535487580010447;
    msg.pos_sim_err_lim = 0.4687036427631388;
    msg.pos_sim_err_wrn = 0.3456703349704361;
    msg.pos_sim_err_timeout = 34186U;
    msg.converg_max = 0.5619816646358481;
    msg.converg_timeout = 38261U;
    msg.comms_timeout = 32777U;
    msg.turb_lim = 0.3592006536582991;
    msg.custom.assign("RQYTZNEZZJPFMCBODAVRBWWWJTEUIKUBSXNXATAVSLSSKEUMLPSNOAKHMGGFMHZRNVEEQVOXLPYNGFLUMZTOCQIPAWPRDHLXCWTDQRFIAOMNOFJBVFDIXRVKEWFJZRTLZMJGAFUVDKIIQPKRMLETUDBRNWBGXDVIVXCJEYJLYYAYSQEVTIQLYUSGC");

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
    msg.setTimeStamp(0.21406776099155478);
    msg.setSource(61151U);
    msg.setSourceEntity(20U);
    msg.setDestination(45464U);
    msg.setDestinationEntity(217U);
    msg.formation_name.assign("KQMSPQNAISKUJTSQKDZRGCWDYDVWHQAVVYATWONFULSYNPDTAVHXWSVESXUKGDHTDTJZYIGCPNGVRECWOSEIPOWQNJOALWINP");
    msg.type = 236U;
    msg.op = 249U;
    msg.group_name.assign("ULHHLWSYEGMLIDTSUSLCSXYLJXFVYXVMIDEDKBRZUMJCHDJHTNYJUICZJQSUZFINOPRRVHUCYKNLKCWPGWXDGWYGFTRTAQNBOBVFRYIHAGRDGTDJUYIFKZLTTTAEZCSWXN");
    msg.plan_id.assign("ZVOWQTNYFVUENZUWDABRRPNUWHIPPATSMTCHIFXWGDWTBKIYJJYOCTHFBPAGKXAQIJEHSZRPKSMOJSOGFXTPFXVKOWEJEKFAJBWRHXODNUUITYZFQMSUZJWFNYSMBQJYLAMBVMHHFDTUNPLQGBXILROZVQLKPXWOGCAYLQZVEOYXOVLEKRWYCNBJLDH");
    msg.description.assign("MBOTDZOFJAMQXGGMETONYRJMHFJBKCAJPFNTCJLHMUYTXVITSUYJGCAKQFVSYGAKCXUKBOIBXUVSVGNBZLCPWDPWNPRPQDWVND");
    msg.reference_frame = 183U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38510U;
    tmp_msg_0.off_x = 0.01868355565271318;
    tmp_msg_0.off_y = 0.42838066690422616;
    tmp_msg_0.off_z = 0.9468801452632731;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.23997467652546867;
    msg.leader_speed_min = 0.6994728860893884;
    msg.leader_speed_max = 0.7366758998726218;
    msg.leader_alt_min = 0.12456600389485828;
    msg.leader_alt_max = 0.7682537810972652;
    msg.pos_sim_err_lim = 0.12431128970975769;
    msg.pos_sim_err_wrn = 0.1670185045974285;
    msg.pos_sim_err_timeout = 5127U;
    msg.converg_max = 0.3357401591902872;
    msg.converg_timeout = 28970U;
    msg.comms_timeout = 28381U;
    msg.turb_lim = 0.9339759306913886;
    msg.custom.assign("XHTZUEIOONMRECQREDCJRIDCIUNCLUDHXSVDKAQMPGBBAYOIFUCDCSRSRTVQJXJYIMILXJAXQBWGADKZWMQXCVNZPJYYNHFLQEVIKWJJZMMGXRQKLRHFTSISBDKNRNEZLUQBHVIL");

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
    msg.setTimeStamp(0.2239387918874557);
    msg.setSource(23871U);
    msg.setSourceEntity(144U);
    msg.setDestination(8029U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("BWVOPXXWZHMHIDXZKVZWPVFQFMJLPJHFUNRCRVSHNEYJHJNPXXUFXB");
    msg.type = 219U;
    msg.op = 175U;
    msg.group_name.assign("ICMKDOCKISUFDYALMWSPQXBCLKYFLLGXMUKPIMIUBOIBJFRIMPCTDQPYHBBGQMOEEKBJCHQXHOCXDYWXUPNJUZTSALJMEKITQTECQBKOVAGAKVSHBRZDCDUWAVAEKWPZIMRNPSTJIETNLOHFVXEREDWIVYOWRTYXZOYXXLWPFDVSTHVSYLRYRVCJQSFUNFLBGMDTNWZGGSK");
    msg.plan_id.assign("XRGQJTUOCYENQYUWYYVDYDCMLICOAIXUXACNGNQPVPJSRNKKBWMSLWUDCGBQKZWLFRGFTQJKEZELTFMHLZLWEPCDJKFHONVRSHNAHAUEPCIGMMBUGHZMIPYIHBENZAWEITNKDRVXIHQDOGTFBURZQEYYIZ");
    msg.description.assign("ADGSEBXZWPQNGHRIRZXCLKXLWHBSJKHMQVPXNALESHLKMFCBOJNKREVYWYAQNSSFWRIHQYNRFGMYGOXSXMVIOIUDCFIDI");
    msg.reference_frame = 143U;
    msg.leader_bank_lim = 0.4898313268244777;
    msg.leader_speed_min = 0.8412076465690583;
    msg.leader_speed_max = 0.00261887150546114;
    msg.leader_alt_min = 0.8246053873269342;
    msg.leader_alt_max = 0.24651111717355012;
    msg.pos_sim_err_lim = 0.3121266052899532;
    msg.pos_sim_err_wrn = 0.08268558923969294;
    msg.pos_sim_err_timeout = 60069U;
    msg.converg_max = 0.5164338930147315;
    msg.converg_timeout = 35069U;
    msg.comms_timeout = 1496U;
    msg.turb_lim = 0.8740722614745912;
    msg.custom.assign("EWMQKTPXQHOFUCXMVBTHNSPNOBDGNVCRTJYLYJQSDZILUWUOBWHGQRDDAWPIGIBONZYTYZYFGRYLIIYIXEAIQFXYOXUXUGRPDCLLQEOHNL");

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
    msg.setTimeStamp(0.05361322933474322);
    msg.setSource(63285U);
    msg.setSourceEntity(110U);
    msg.setDestination(21131U);
    msg.setDestinationEntity(192U);
    msg.timeout = 42309U;
    msg.lat = 0.7831869540977142;
    msg.lon = 0.14768762437444882;
    msg.z = 0.013817081685687072;
    msg.z_units = 243U;
    msg.speed = 0.9406276695883901;
    msg.speed_units = 158U;
    msg.custom.assign("RQQKXDENGWCPJUFQIDDJFPTAHKPCV");

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
    msg.setTimeStamp(0.2799750446804242);
    msg.setSource(39819U);
    msg.setSourceEntity(7U);
    msg.setDestination(37189U);
    msg.setDestinationEntity(96U);
    msg.timeout = 30296U;
    msg.lat = 0.21430267244190615;
    msg.lon = 0.6073873229241914;
    msg.z = 0.2702175808805761;
    msg.z_units = 18U;
    msg.speed = 0.7174038600900065;
    msg.speed_units = 247U;
    msg.custom.assign("VPUSDWYFLYKJKFHXXDDZBXGKKOHNSBAUMLZEUMSXCPXHMJJNQJWVMKRZWJARPMAEBYBQSLVCYMNDJFWTCIBHDMGRTYPDIUOZFDQECOWFBEZPIWLHYIMZIAXGQCCNFFNQPZVHGSFIAVBGDUNHOZTLNETYRFHDEGCAOJQEVPCKCLSILJGTGEUKHYTUMWKWBEVOQPSPTJNAUZ");

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
    msg.setTimeStamp(0.531488796225078);
    msg.setSource(58922U);
    msg.setSourceEntity(38U);
    msg.setDestination(749U);
    msg.setDestinationEntity(59U);
    msg.timeout = 24439U;
    msg.lat = 0.961199872637664;
    msg.lon = 0.3719710514407777;
    msg.z = 0.7365822472405793;
    msg.z_units = 186U;
    msg.speed = 0.6660800674558627;
    msg.speed_units = 32U;
    msg.custom.assign("ZANKRLSWJGBELYSDBUYJMREXHWFBQTZIOLCLEWKVXAUARDEZPJROFEKMSJKAFAZNGUFOBRNGYHXNSQLBOHWHFQWROIWUTOHDFIITNXDHVQNGJMQVISMYCDGCOMGBSZJEHAPCGTCYKPRPJXXIDVZTIRKPPZIUJJXSDIVLYYZQVBCCBOAPTFVUAUTHMQBQ");

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
    msg.setTimeStamp(0.043677902031388216);
    msg.setSource(38491U);
    msg.setSourceEntity(63U);
    msg.setDestination(7039U);
    msg.setDestinationEntity(225U);
    msg.timeout = 44344U;
    msg.lat = 0.300095933374645;
    msg.lon = 0.6445955627719143;
    msg.z = 0.3084152665084262;
    msg.z_units = 144U;
    msg.speed = 0.5469864318350376;
    msg.speed_units = 92U;
    msg.custom.assign("HRDDBPNJILYTIWASDERBYRLBWVRXJEETQOJOHXTGXSNWVXFWK");

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
    msg.setTimeStamp(0.6384660268649106);
    msg.setSource(6218U);
    msg.setSourceEntity(57U);
    msg.setDestination(39794U);
    msg.setDestinationEntity(93U);
    msg.timeout = 38113U;
    msg.lat = 0.9809168389079287;
    msg.lon = 0.06912731222440471;
    msg.z = 0.3680564188573151;
    msg.z_units = 117U;
    msg.speed = 0.12381664828096528;
    msg.speed_units = 219U;
    msg.custom.assign("WPSNDYEDFBCYJSPFLOHINZXLIRJOPSTPEWINQJXXYFVSQDVTOMJUKPUYBGKYNYQFZEHVDAECHCHMZYTJDKLDGJWLUQAKGMYKGOLSBDTRGVCQBARGNXOVWOTBABNFMGHFCURLPXIWGECTCPQJZENFFSKAMOSQAOBSQRKI");

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
    msg.setTimeStamp(0.3050789018665341);
    msg.setSource(53440U);
    msg.setSourceEntity(174U);
    msg.setDestination(6960U);
    msg.setDestinationEntity(60U);
    msg.timeout = 46359U;
    msg.lat = 0.9680987343041526;
    msg.lon = 0.903294017458802;
    msg.z = 0.5252237595570796;
    msg.z_units = 145U;
    msg.speed = 0.21733280709954284;
    msg.speed_units = 146U;
    msg.custom.assign("YFFNBBOMLQKLVZDLFOEHTBUPWRXIEZAINPSRTIRWELOQZYBXJEBEGJOGYNAALAHWSUSZVNHQAHRBKDFRVDMBPXHDJZOYNJTTUFFVZQTDMJASGDFMHBQZGCHVXWTDRIJPZCRXLOJGWVQPSDPRQLXKNUVMGC");

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
    msg.setTimeStamp(0.04644843364360696);
    msg.setSource(38813U);
    msg.setSourceEntity(194U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.5642957632089319;
    msg.lat = 0.3742041454410523;
    msg.lon = 0.9336203590317562;
    msg.z = 0.9168555643136964;
    msg.z_units = 139U;
    msg.travel_z = 0.7645116143605252;
    msg.travel_z_units = 123U;
    msg.delayed = 70U;

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
    msg.setTimeStamp(0.7453981501244197);
    msg.setSource(65165U);
    msg.setSourceEntity(134U);
    msg.setDestination(41776U);
    msg.setDestinationEntity(152U);
    msg.arrival_time = 0.2240264943411756;
    msg.lat = 0.020880781767904755;
    msg.lon = 0.8011171053723174;
    msg.z = 0.4053926707353235;
    msg.z_units = 247U;
    msg.travel_z = 0.7568034661031564;
    msg.travel_z_units = 63U;
    msg.delayed = 198U;

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
    msg.setTimeStamp(0.16212056410565234);
    msg.setSource(61909U);
    msg.setSourceEntity(104U);
    msg.setDestination(1341U);
    msg.setDestinationEntity(151U);
    msg.arrival_time = 0.8819297072431941;
    msg.lat = 0.16253177246946515;
    msg.lon = 0.6904496562677428;
    msg.z = 0.186050200594144;
    msg.z_units = 201U;
    msg.travel_z = 0.1754420956995455;
    msg.travel_z_units = 140U;
    msg.delayed = 218U;

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
    msg.setTimeStamp(0.5062709823618151);
    msg.setSource(48289U);
    msg.setSourceEntity(247U);
    msg.setDestination(14300U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.5701890824798662;
    msg.lon = 0.5430127972550911;
    msg.z = 0.8496037172151446;
    msg.z_units = 253U;
    msg.speed = 0.17083156158792667;
    msg.speed_units = 132U;
    msg.bearing = 0.5250808537186437;
    msg.cross_angle = 0.8406393691191195;
    msg.width = 0.3339498203942829;
    msg.length = 0.699574987304174;
    msg.coff = 216U;
    msg.angaperture = 0.8973280891076016;
    msg.range = 19769U;
    msg.overlap = 244U;
    msg.flags = 143U;
    msg.custom.assign("NFMGJKJSPTXHMUIBKGVGLOUXHRATEYOHSZVBZJZSAFBDQXQEKUNDEXYUZSIAHAIEJJCGYBRGVHQXTHFLGPGHWLJCYXVMNYKOPZVRITPPODFLKFWIDDIZMQMMWUMYXKOIQCGJNVHATRTTWQLFPBSPWPUCDE");

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
    msg.setTimeStamp(0.5503193073879089);
    msg.setSource(48313U);
    msg.setSourceEntity(221U);
    msg.setDestination(56919U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.657787148393343;
    msg.lon = 0.7842151842818289;
    msg.z = 0.907088770127579;
    msg.z_units = 40U;
    msg.speed = 0.1505372983212354;
    msg.speed_units = 122U;
    msg.bearing = 0.454459861288095;
    msg.cross_angle = 0.9918632228605772;
    msg.width = 0.8336386554930126;
    msg.length = 0.08860718961100955;
    msg.coff = 111U;
    msg.angaperture = 0.35256037302643106;
    msg.range = 6411U;
    msg.overlap = 44U;
    msg.flags = 11U;
    msg.custom.assign("JMIPVWPHUUZMGTFCLETEBXTFEQUXELGBOMN");

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
    msg.setTimeStamp(0.7527284842036658);
    msg.setSource(65345U);
    msg.setSourceEntity(195U);
    msg.setDestination(37973U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.6616285983201428;
    msg.lon = 0.7184627420456271;
    msg.z = 0.653583635133557;
    msg.z_units = 52U;
    msg.speed = 0.7004180461458711;
    msg.speed_units = 58U;
    msg.bearing = 0.34014344939372343;
    msg.cross_angle = 0.8159594923394539;
    msg.width = 0.6328274625976857;
    msg.length = 0.9548050037936446;
    msg.coff = 117U;
    msg.angaperture = 0.30267348436282027;
    msg.range = 28163U;
    msg.overlap = 167U;
    msg.flags = 55U;
    msg.custom.assign("FZYQAXQKHHVRUOTYHHGOSJMIRHWSNUYEJXULEHWJZQLJGDEEXELLJWWJTIOQVQNDVBMPWYZPMFKCMSKDOJPAPKECKRRSDOVFZHGURAWMKQXMDBJYZIFWKAJRNTIBORCXKLSLUKFQLGNPTXAIWGNOSPQDVPCGJFBXZATTVGNGDSENRMUBBOVOHS");

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
    msg.setTimeStamp(0.604899369801353);
    msg.setSource(41268U);
    msg.setSourceEntity(214U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(182U);
    msg.timeout = 55133U;
    msg.lat = 0.8730208005814906;
    msg.lon = 0.7462769076687015;
    msg.z = 0.01327868196767934;
    msg.z_units = 166U;
    msg.speed = 0.42317723498584014;
    msg.speed_units = 90U;
    msg.syringe0 = 246U;
    msg.syringe1 = 167U;
    msg.syringe2 = 18U;
    msg.custom.assign("XOOZFWHEEEUOWIOSVPGXGWPLRBNJNBJFIVFMIABKHQWYMVSYSSLEZTQMIBJVSIUDMDRVBDWYYKRQGNZZUYFIPOLPGPMMNEEMKDWLASZWXNPMSADXUIBDWXOAJRCQLBTKZQIPQTECZCXCTFQHVRK");

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
    msg.setTimeStamp(0.5550482884638037);
    msg.setSource(2460U);
    msg.setSourceEntity(142U);
    msg.setDestination(52621U);
    msg.setDestinationEntity(86U);
    msg.timeout = 29622U;
    msg.lat = 0.9710608844279428;
    msg.lon = 0.2608946274270014;
    msg.z = 0.4867474437345628;
    msg.z_units = 196U;
    msg.speed = 0.8910202688840757;
    msg.speed_units = 246U;
    msg.syringe0 = 34U;
    msg.syringe1 = 130U;
    msg.syringe2 = 221U;
    msg.custom.assign("ELDYTAEHUMUQYJCZHBKGVZVIMHPOBNYZUSDDKVEJFQPXTAXCQOUFKGIGIWMTJRCXSNQXREAGEWOHZZOEPNISLZDBPWYCVGEAMXTYZKIMIUHHTHBFDTWQARJUTDRFJQCWEOKGKFQKAWFQREPPFEAMBISPIRAMYLTZJSUNRGOCLMUOJGGVVXNYBOLXYRVHKAMDNSTJNOCHZWMCPBNFWPKLSHYUJLZXBLLFRNRGVQXVDDUNFSWILV");

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
    msg.setTimeStamp(0.16881784104606734);
    msg.setSource(1053U);
    msg.setSourceEntity(31U);
    msg.setDestination(1291U);
    msg.setDestinationEntity(39U);
    msg.timeout = 34908U;
    msg.lat = 0.40383322826813906;
    msg.lon = 0.046788923120199666;
    msg.z = 0.6899024508790191;
    msg.z_units = 182U;
    msg.speed = 0.7007363150878834;
    msg.speed_units = 35U;
    msg.syringe0 = 121U;
    msg.syringe1 = 127U;
    msg.syringe2 = 253U;
    msg.custom.assign("FKNIQVUIQMMTRIWVAXUMFKRDIQQWOOTGFEQDRVITGKJYCYUVHMQJBZZUBHXZYJSITBFLA");

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
    msg.setTimeStamp(0.4027267513699563);
    msg.setSource(26265U);
    msg.setSourceEntity(210U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9228107228126365);
    msg.setSource(54280U);
    msg.setSourceEntity(86U);
    msg.setDestination(21554U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.6318619416672935);
    msg.setSource(28302U);
    msg.setSourceEntity(236U);
    msg.setDestination(20622U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.3709142311860256);
    msg.setSource(8246U);
    msg.setSourceEntity(91U);
    msg.setDestination(47707U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.7219417869279567;
    msg.lon = 0.02668291395552902;
    msg.z = 0.6176140171783235;
    msg.z_units = 225U;
    msg.speed = 0.5893121084669952;
    msg.speed_units = 204U;
    msg.takeoff_pitch = 0.2539605845015591;
    msg.custom.assign("GTAYKFAPBLFHUCPROQWPVKSUZRPPACGSSQWKNAVKROOLBTAIIMDHTNOCAJTOLCTOVDARDXEUJVECRNINHWUHBGMEQNNWPSXAORVEQCQXO");

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
    msg.setTimeStamp(0.8711269610790301);
    msg.setSource(44560U);
    msg.setSourceEntity(167U);
    msg.setDestination(64591U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.6936793081336854;
    msg.lon = 0.5930581440196959;
    msg.z = 0.8214653915616579;
    msg.z_units = 197U;
    msg.speed = 0.06819058404643752;
    msg.speed_units = 129U;
    msg.takeoff_pitch = 0.5272188282657063;
    msg.custom.assign("BPXXHJEUOPKCAWSIHRRBUHMGPTCJELEVRWQBGOWXUJGFHZBAVTYDNJWGFHCGTYJDLKYYSZFQGSOHMQSELGVNSOH");

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
    msg.setTimeStamp(0.36985795916131525);
    msg.setSource(26716U);
    msg.setSourceEntity(175U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.9743926123100075;
    msg.lon = 0.3904504216090694;
    msg.z = 0.8529512962521313;
    msg.z_units = 77U;
    msg.speed = 0.48015028618369604;
    msg.speed_units = 219U;
    msg.takeoff_pitch = 0.5253721049275138;
    msg.custom.assign("ZVATBENYXBGUAPXTRROLYOFSXJGAPHQHHQYSLDBMKOIICIITKWRLMCMURWQABCGHCUASSMPJJEAVRLDMQDNJIAUQFNWHCGOEZZBXYWUMDRVRULPHLYLQSKTQXCODEOVEEGVEITJNGBYSRHIOPBDVYUKVYKNPIFPVODJPWJUCRNKAPVXTCOZKFRGEKHMGEYXWDZMTNXBGWTFAYFK");

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
    msg.setTimeStamp(0.4660366934744635);
    msg.setSource(50424U);
    msg.setSourceEntity(33U);
    msg.setDestination(50272U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.6543287905038341;
    msg.lon = 0.3891203303585301;
    msg.z = 0.7734605659888404;
    msg.z_units = 42U;
    msg.speed = 0.8027873538794332;
    msg.speed_units = 62U;
    msg.abort_z = 0.9300981251049711;
    msg.bearing = 0.44298942181992407;
    msg.glide_slope = 237U;
    msg.glide_slope_alt = 0.7136556810029521;
    msg.custom.assign("OSAXWLOPIJSRMCAXZAFOBWSCPJHNGZEAJWINSKDQTDUAWEEZRNCXFSTICDGEKSPXBCHKYKFNGQIDNZMEBBRUACKGNVIYHPCRUULEWJKZRWYLSRQTAKTBMMWLMIBXTVEFBPFUXDIYJQUXP");

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
    msg.setTimeStamp(0.8739968107351854);
    msg.setSource(49900U);
    msg.setSourceEntity(75U);
    msg.setDestination(40341U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.47706603672343384;
    msg.lon = 0.6282227210456929;
    msg.z = 0.5968353060310636;
    msg.z_units = 253U;
    msg.speed = 0.1554888376714908;
    msg.speed_units = 8U;
    msg.abort_z = 0.18996974230258268;
    msg.bearing = 0.6139240201855466;
    msg.glide_slope = 151U;
    msg.glide_slope_alt = 0.6211922096406822;
    msg.custom.assign("KFNKKVSQRNCXXFDBVQBRXIRTDEPVKNYWFKSUQEEIOZJOXQCQJFIOEVGDTXZHTFRRLACTCARVDHNTOIMLSPJYBWHHCGBYHRQHGCC");

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
    msg.setTimeStamp(0.8882884269704227);
    msg.setSource(48873U);
    msg.setSourceEntity(254U);
    msg.setDestination(14553U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.6112676993774623;
    msg.lon = 0.382160214001694;
    msg.z = 0.9290083447460172;
    msg.z_units = 32U;
    msg.speed = 0.06482785791371692;
    msg.speed_units = 247U;
    msg.abort_z = 0.8928948892100708;
    msg.bearing = 0.43270188727068715;
    msg.glide_slope = 253U;
    msg.glide_slope_alt = 0.2648030950330603;
    msg.custom.assign("KPELMAAVHQIIRVTRDLAETYQGBGTFCUCNYOOPVCAHZIDJPGUMZAOXDSTVJTUWLVDLZXKYGXTPWCJDBRDEBVHWEJBTHOZNOQBGHNWEWLLRSWPQEMZFFJXJZCETXFJWADQALFUQYMNVFSRBJQNUAJNPMKIGXFIRBSCGWRBYHELCEGZRVAPFISUMSRPVKKYMIFTXNFGVXHCTNARKJYYDHIQNXUSPBSYOIOZLYEMKH");

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
    msg.setTimeStamp(0.9994652674005688);
    msg.setSource(31822U);
    msg.setSourceEntity(158U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.9028731708529503;
    msg.lon = 0.11990190379736132;
    msg.speed = 0.7440696567604131;
    msg.speed_units = 102U;
    msg.limits = 214U;
    msg.max_depth = 0.850436139612303;
    msg.min_alt = 0.40618156164377306;
    msg.time_limit = 0.5568666553656204;
    msg.controller.assign("HMSBBTSBUNOYGVKAOMIYWPGRUVOZOHNGVRGJXAKZUMMZQCLWOHTFKLRIDZENNPEORKOIAWAMLKREBKXGNCZAHSYRXIXH");
    msg.custom.assign("AYSTHNKSLWTTKWKJWTWJPXKLUPPOXBODOMVUFKYDLWGDRMHLWVLGIVYXSQNZQUCSHKEZAAIHXDQIMHCMTNVSGXTUXDEMYIGJQQFVZOCHJZINVGISHQJVPBDGJ");

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
    msg.setTimeStamp(0.11403315117332646);
    msg.setSource(22335U);
    msg.setSourceEntity(145U);
    msg.setDestination(59811U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.6830527662587794;
    msg.lon = 0.6816382047480711;
    msg.speed = 0.250423617368685;
    msg.speed_units = 242U;
    msg.limits = 28U;
    msg.max_depth = 0.1934752264538968;
    msg.min_alt = 0.26195010285895837;
    msg.time_limit = 0.3976526103075626;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2541210542315877;
    tmp_msg_0.lon = 0.6668222218318111;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IHOHJOCIRXBSAWNGAKAWGXBCVJMIYZSAYDJQWXFLSDWEJTQZIJGLFZNAQIQLPBSUFEETFGMBVBTZWBDCYTRIETKFDVCDAGNHLJYTDBSIMMKWGDPOPRDCNHTDOXRXZLZKHHPPZQLYUUSHKARKYNIRJWQNOCLTGYEOTVLMJXQZNEWJCONROUHPPPU");
    msg.custom.assign("MNGXVLUJGDNOZRYMTLTQQBLELSFDCRFZRKPOONPVNYDPTYKTPMSCGKPOXIDOSUAOSUIJEWILCMKMRQJSEMZCQEAGESAKNQVUNXDWBBWXOVGMQDFVWCWTHPLZDFVJYQBYLJXCNJWZXKSSKUIPHLKASTRIARRXIWATFHDPZZREJYWWAHDAEVYHFXXFPMBGYJKRGHYAQCVNNBHHLUOTCTZSIWBICFFBJPGGMOTCIFJUUERLDGOVZV");

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
    msg.setTimeStamp(0.6949185407857901);
    msg.setSource(52048U);
    msg.setSourceEntity(68U);
    msg.setDestination(49146U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.0830971429855547;
    msg.lon = 0.9923343052393203;
    msg.speed = 0.44671884230419145;
    msg.speed_units = 46U;
    msg.limits = 163U;
    msg.max_depth = 0.8855791247386003;
    msg.min_alt = 0.011656652266783252;
    msg.time_limit = 0.3878326256982383;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2649882948279175;
    tmp_msg_0.lon = 0.3486923002060225;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FTOGZIFIHEPEIHHGRQUAPLXHTRVIQSSIZPDDUBANLLTNPQBDFOUCFSKRATJUEBJLPHJSWYOBONHQJMTTUMYZBIVMAXCVOEXMBOKHOVPS");
    msg.custom.assign("JKEMSCOWBBQWDRCQQVRUDMSAKVZNZBMSGTGEWOSKNYUFZMWWFRTFCCUIVJPEPTQSIQJVLETHAFNCHOYGPERTSCNQOXVKI");

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
    msg.setTimeStamp(0.7982398411523567);
    msg.setSource(18961U);
    msg.setSourceEntity(102U);
    msg.setDestination(47887U);
    msg.setDestinationEntity(225U);
    msg.target.assign("ENRLIZNJKDGDTBBYLGJWIIMGGLKYPASPSHWYBQRAVGKRBURUBZNNPCVIWQJFTVRAUSSROIBUKHLEFMDTFJYNLJIZMQFPOXGNTYAXJXKDJXDQOHDWOZVNUXOZVLNVSBGAUPFXECALNGZORMDESWLQBWEYRMXBTJRLFPSEPHBCHZCTTCOCGIDKEPZDKUUSMQZAWCTVWJOKDQEWAQVUMIEOSKXHY");
    msg.max_speed = 0.6767050125067487;
    msg.speed_units = 67U;
    msg.lat = 0.776482514924834;
    msg.lon = 0.562868483744825;
    msg.z = 0.6835922282942469;
    msg.z_units = 209U;
    msg.custom.assign("YFPOYXJDKROOIGBJMFSRKBDDCWWPXOIXOGHRPQEKUIDNHTMXGFAZUDFH");

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
    msg.setTimeStamp(0.5485020776323294);
    msg.setSource(23586U);
    msg.setSourceEntity(203U);
    msg.setDestination(30705U);
    msg.setDestinationEntity(233U);
    msg.target.assign("GLKDIDJIDQBRYXCXLMLDSSNGAJZPIYTHYBRMEKWIFZFKUCJMDPSFLGEUDXPNSIUZRNFUYFLEUOXRHMAWKYFHOEMOIWQHMSRPFBGEOOOAEOFVTQSZNSZYNVIIHPBVRCWVCTUKXPTPOSUGRKVEOTDBVZJJWWQZTTXRBEVBZLQYYHMWTOZLCUKKQSMFPCBFMGHAEUXJGGNNQYRBDADLXKUCBLJWEVCSTHNRTZAGWAIPYAADKQNXMAHVCJJPXQLI");
    msg.max_speed = 0.12480526184965968;
    msg.speed_units = 222U;
    msg.lat = 0.28555015010069906;
    msg.lon = 0.9078053364347528;
    msg.z = 0.0568781653632251;
    msg.z_units = 109U;
    msg.custom.assign("RAWEKWOCVTQWFIRIDEXDBWQONULCAKHNNQIWRMAYGPJQEITBNZJJZSSTYEKXSMUBPUFGINBTKKHCMQGZYCTOFFAGROUVTZLLFJXHOHQUBHPJZLUHDBTDEAMXEPSRLWOFIRBQSYDLGJOFCXHDWMPTXMDVEGKWZNOZOOCXGBMRAIBKAWJGNUZPPSZWVHJKUDRUNLYINPCICPITYLPESFXVQFVLKRMSGADCMYCHAYEXVEJSZR");

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
    msg.setTimeStamp(0.25450378440328936);
    msg.setSource(32582U);
    msg.setSourceEntity(82U);
    msg.setDestination(61299U);
    msg.setDestinationEntity(3U);
    msg.target.assign("ZGIONHXFHOKTAWUCMDMVHSZJDXGSWAAQLTNINEQUWESEATBFPIAEZOKWPJUKLCRR");
    msg.max_speed = 0.9644108565626816;
    msg.speed_units = 103U;
    msg.lat = 0.1507941395039577;
    msg.lon = 0.6902854351335113;
    msg.z = 0.3950823709748269;
    msg.z_units = 37U;
    msg.custom.assign("QDREGTUKLAEJDVCXNNDZRZXINGMLGE");

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
    msg.setTimeStamp(0.8545519350856193);
    msg.setSource(4833U);
    msg.setSourceEntity(190U);
    msg.setDestination(36029U);
    msg.setDestinationEntity(163U);
    msg.timeout = 12625U;
    msg.lat = 0.8130456165253718;
    msg.lon = 0.12318261245839157;
    msg.speed = 0.42644532453693995;
    msg.speed_units = 144U;
    msg.custom.assign("QXFWHECEIQLDJYVJEFQTRQGJDSCHCDSBSRBJITOELPMTTXYHEX");

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
    msg.setTimeStamp(0.022805695348026345);
    msg.setSource(2399U);
    msg.setSourceEntity(135U);
    msg.setDestination(19478U);
    msg.setDestinationEntity(232U);
    msg.timeout = 1915U;
    msg.lat = 0.04480260385792989;
    msg.lon = 0.25042612897266825;
    msg.speed = 0.7071267908438202;
    msg.speed_units = 101U;
    msg.custom.assign("EDCHMEEUNKOSYALZNQLUVCGHPMLJKOJCDMREMZFJSAEVTQVXPIPLTRZSGELXUVMYJCVIVJVBGKTYFEBAQPCTHRYFMJKVJIXQFXOSINZYDIMD");

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
    msg.setTimeStamp(0.9144925677104871);
    msg.setSource(35023U);
    msg.setSourceEntity(118U);
    msg.setDestination(46201U);
    msg.setDestinationEntity(251U);
    msg.timeout = 27454U;
    msg.lat = 0.15011184615242756;
    msg.lon = 0.7651502096280541;
    msg.speed = 0.8473511100672074;
    msg.speed_units = 16U;
    msg.custom.assign("JAVGAAFNTLCAGCJIOAYNWTXCYCSTQREVXEXKDZAPLXYAOPWQFHKYMYGUMZFKMZVMCGDIZDRMDLFHGLWIEZGGYSLPBQBQONWMJYSMXRUMPTJFCTQGEUEVXARTXTYSNFABJDBPQLIIUVESEWHWCDLOK");

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
    msg.setTimeStamp(0.6932504672665932);
    msg.setSource(45011U);
    msg.setSourceEntity(144U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.16718679937035563;
    msg.lon = 0.2802106414753509;
    msg.z = 0.9814301242696539;
    msg.z_units = 40U;
    msg.radius = 0.9624726179683055;
    msg.duration = 33007U;
    msg.speed = 0.062373877583919324;
    msg.speed_units = 186U;
    msg.popup_period = 548U;
    msg.popup_duration = 48891U;
    msg.flags = 17U;
    msg.custom.assign("HKJEFWEGVBOXDHUCIQKOVNSYFSFPWIQQOLDTJMIVPOPDMLOKXQFLQUXCUGPKAIFEWDQHFHMZTTTWRBXCVIXUNYGZFEESWYHOFBOCZAZJDSNZPDSRKBEPGTXARYSGDSJMXNQRLFAPKMUUYTIJW");

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
    msg.setTimeStamp(0.3138621446902994);
    msg.setSource(781U);
    msg.setSourceEntity(11U);
    msg.setDestination(59283U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.8399044450478907;
    msg.lon = 0.5632954092969408;
    msg.z = 0.6464970230726395;
    msg.z_units = 135U;
    msg.radius = 0.12940290065601778;
    msg.duration = 34050U;
    msg.speed = 0.009575470376261386;
    msg.speed_units = 209U;
    msg.popup_period = 4383U;
    msg.popup_duration = 54168U;
    msg.flags = 117U;
    msg.custom.assign("CUDJDVXGEUWECCIEUEYXSUNBYSLIYNILMWIOCHTZVIXIYJBECMEFLPAYJSVOBWMGQZZKBQOSSJUMYZFSEBNCMAWIQUWJJFTHTVNAARLWCHWRMSSWHJLPLKQTOZMOQZBMOKXJDNWGGQNPPNQ");

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
    msg.setTimeStamp(0.7061029691886233);
    msg.setSource(449U);
    msg.setSourceEntity(66U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.4340430224841153;
    msg.lon = 0.7283267396801781;
    msg.z = 0.5962750885036012;
    msg.z_units = 177U;
    msg.radius = 0.2799770852671719;
    msg.duration = 48112U;
    msg.speed = 0.5197856850438985;
    msg.speed_units = 106U;
    msg.popup_period = 10033U;
    msg.popup_duration = 47143U;
    msg.flags = 59U;
    msg.custom.assign("OKXRRUSKQLXBUQEJMNRIHWMWMSLMQFEZJIIGBJFDMAFTSD");

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
    msg.setTimeStamp(0.4655851062085373);
    msg.setSource(41403U);
    msg.setSourceEntity(143U);
    msg.setDestination(34985U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.31392236462570056);
    msg.setSource(58132U);
    msg.setSourceEntity(202U);
    msg.setDestination(27799U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.1646913974776294);
    msg.setSource(39259U);
    msg.setSourceEntity(177U);
    msg.setDestination(39911U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.012144818550305803);
    msg.setSource(10593U);
    msg.setSourceEntity(232U);
    msg.setDestination(4327U);
    msg.setDestinationEntity(102U);
    msg.timeout = 14159U;
    msg.lat = 0.01244267491028872;
    msg.lon = 0.738856847175826;
    msg.z = 0.614584110597401;
    msg.z_units = 145U;
    msg.speed = 0.8368138854456192;
    msg.speed_units = 88U;
    msg.bearing = 0.7783354125855769;
    msg.width = 0.3742983581002436;
    msg.direction = 96U;
    msg.custom.assign("MMDTBLKFTOWEXWGVMSFVOGIPWUZLKDRIGJAXZDGWISXOINZASTFNNWCTXGYTXOJEFMNRMYXMPULDZPXZ");

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
    msg.setTimeStamp(0.38332629531491036);
    msg.setSource(13434U);
    msg.setSourceEntity(94U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(83U);
    msg.timeout = 37637U;
    msg.lat = 0.4444515807622541;
    msg.lon = 0.3433981307326591;
    msg.z = 0.5007906924414819;
    msg.z_units = 122U;
    msg.speed = 0.5367203749751729;
    msg.speed_units = 61U;
    msg.bearing = 0.3585357228104826;
    msg.width = 0.6252596277168682;
    msg.direction = 109U;
    msg.custom.assign("VNLMZGAHNALBWYFUUSVCFDRKJFMLZDXZHTEZJAXRPQKRMXQTHPRQEFIDGQMVWHRTGIQOBJMGEGIULUWJXPLVEEYVTICSXMNXRUBPIUICPHYFFDXBUZODCJMOALPNLZJETNNJIHUCSSDTFLYTVKLYGDBWOXUNTKMAZSFVMQOBAWGCBVSQSTFQXEIHBYEKSJRKOWZDOCLAGIHGFED");

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
    msg.setTimeStamp(0.1968790327369786);
    msg.setSource(59214U);
    msg.setSourceEntity(113U);
    msg.setDestination(9775U);
    msg.setDestinationEntity(122U);
    msg.timeout = 27488U;
    msg.lat = 0.8771442086728156;
    msg.lon = 0.6515859993374137;
    msg.z = 0.8307776667766804;
    msg.z_units = 136U;
    msg.speed = 0.25428021555078406;
    msg.speed_units = 192U;
    msg.bearing = 0.09901658270860725;
    msg.width = 0.44289823850673493;
    msg.direction = 122U;
    msg.custom.assign("TZKOLCCYIQBBIWRBJKYLDSAYKDVAHWQNLYVQSAPMLZAVLPC");

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
    msg.setTimeStamp(0.5923437766237858);
    msg.setSource(35293U);
    msg.setSourceEntity(140U);
    msg.setDestination(58922U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 216U;
    msg.error_count = 149U;
    msg.error_ents.assign("KAVDXMXAVQFMREGPKMOQNZGBOSABRNVNSXWSAIWOVAEHHYBUOTWLTQUVHYEUJUDXCCCIQLOHZLPCWXEMZCOBSXZCKICDNVBEVFJAHCILIAGYIMWLGHNWPJGZUWJMRHCBWJRHMRLTJNEWBXTYKSVGLRFNDGANGVQUFXKHOSFPULAQFIQJSOYIDUAOXJGIEUPZJFYFFQQKPPZJXBYKYTTTDFMZNURBRHSRTLPTZGBDQMDNDKT");
    msg.maneuver_type = 36001U;
    msg.maneuver_stime = 0.8151289845719545;
    msg.maneuver_eta = 60227U;
    msg.control_loops = 266102712U;
    msg.flags = 54U;
    msg.last_error.assign("HDOYZFVTZHXQAKSPVUTMFULBXHRENELMEVKDCOGNCFYIYHGXCWCSSYSWZEMMGAC");
    msg.last_error_time = 0.6352557530116395;

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
    msg.setTimeStamp(0.9020481619314769);
    msg.setSource(37195U);
    msg.setSourceEntity(31U);
    msg.setDestination(52404U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 233U;
    msg.error_count = 211U;
    msg.error_ents.assign("HCOUYXLYWYJHSIFHSBGKYNEFBQZPRWWFJLOERMBQVGTDKFNVVLAVGFSAJPBRVQCQIIMTYXIDODBZNYTXCPMWANSUICXLLQWPUPOCMZTXNEDWZETHTFCRBYZMDONIUEWYHZJMXNUYK");
    msg.maneuver_type = 36690U;
    msg.maneuver_stime = 0.382748963293736;
    msg.maneuver_eta = 22595U;
    msg.control_loops = 3864223032U;
    msg.flags = 23U;
    msg.last_error.assign("YWNCCEESRVBAKQZJICRWDAICZLYXYFCDIZAOCQLNJUEYLWZVJNOGDHSZUVPUHRSFGMAMTGRZNQRAKFBQXGPQLZLHGYBYEYTRHWCXFWNJUHBWOHOMUPUPQSFWTHSUNLXZMOSHBSKJDIWJRYEQATMHMTSFIGNKFGNOETSZGPGXXDLDFOVDPJIMFXBNIXXETYAUNRTLBZQOJKUPHEXDPBMCRLIVOWIVDKAPQCMEKJSTRBACFPVIMKLJOEAGK");
    msg.last_error_time = 0.8620575104756139;

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
    msg.setTimeStamp(0.13632585868323577);
    msg.setSource(2359U);
    msg.setSourceEntity(57U);
    msg.setDestination(19073U);
    msg.setDestinationEntity(140U);
    msg.op_mode = 59U;
    msg.error_count = 234U;
    msg.error_ents.assign("CVUUEKPISROXFQQAWOWLUOCHRRCNBSLTPJ");
    msg.maneuver_type = 35516U;
    msg.maneuver_stime = 0.05292498606103291;
    msg.maneuver_eta = 56761U;
    msg.control_loops = 141629522U;
    msg.flags = 83U;
    msg.last_error.assign("DGYGPBLQAGDQDTTIAAQICFWYHBVFRFZFKQHXNVLZEJYIOUAMWHWZPBVSPXXOBTQTTBUGCIPUXMGJUEWUVPLDPRHUERFOCOVHZEZOOVEJBNWZPUDMQYYHCNYQBDWLISWUBYCASIJPWCUPNDKONMK");
    msg.last_error_time = 0.8302191923256548;

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
    msg.setTimeStamp(0.16761568472882082);
    msg.setSource(14894U);
    msg.setSourceEntity(11U);
    msg.setDestination(21612U);
    msg.setDestinationEntity(160U);
    msg.type = 250U;
    msg.request_id = 7978U;
    msg.command = 220U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.8624472779301019;
    tmp_msg_0.lon = 0.47966970241746343;
    tmp_msg_0.z = 0.43087111671487055;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.speed = 0.8423681894434397;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.bearing = 0.7666685120346376;
    tmp_msg_0.cross_angle = 0.07820853766558933;
    tmp_msg_0.width = 0.21631087235865698;
    tmp_msg_0.length = 0.5532476368994921;
    tmp_msg_0.coff = 246U;
    tmp_msg_0.angaperture = 0.7785417330064744;
    tmp_msg_0.range = 34331U;
    tmp_msg_0.overlap = 45U;
    tmp_msg_0.flags = 33U;
    tmp_msg_0.custom.assign("RGNFOOEZEWTEDRSDNNFUKDUDJJJINRCEVLPBYGMUFODIMVUOHKETXGDBAGHUXPATBHJQWTTQSSPZDVZGXFYOZUKZCAOSNXBMMZTYYTNRHRQPKDCZCDFBNHWOVFVYUAZQLNYMCMSIPWBELQHLWJXMASSYHLQVCKYXGOMZRAZBFYKGPASCELXUUCXGDANVWXFETKMGOVHRKQOCLYWAJNIIBPIRBHQVXSWTRQGPFQJLA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38350U;
    msg.info.assign("OIICAGFNTULKNLBWQWUENDUGYQNQHDCWBEMXSDOLRQXSRWSLFHUZUVQDNKUTYEIUEWDEDGQUDLYKKPYMDMRPHVNONCHBJGWTCGKAUONJRABYSBTCEJYVTJVPRMRBOPQFMGHMDSACAYJCSXVKZROIYZCLXZLOOXBIIVBCZNMHSTTSOFPTAJMELFRZTMERFCZMKWIXOPDIWXGFYSJFNXUVWYKHKAAFIEVQGPGFSZAXEGVHLQIPWZRZJJPBAQVKT");

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
    msg.setTimeStamp(0.27837738595876327);
    msg.setSource(46467U);
    msg.setSourceEntity(23U);
    msg.setDestination(46462U);
    msg.setDestinationEntity(2U);
    msg.type = 58U;
    msg.request_id = 8857U;
    msg.command = 135U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("USHEZJKXYNEPKYZOFDLXARIHNDMBOQMWAFYFILBIPFWDGBEGRWQLVOOQPLMZLCAELONTVZCIVSIWULCWTYSUQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2797U;
    msg.info.assign("ZHVNGEQTKVLLSDWPCIHRDDLGWTLBIVBQGXXIEAKFKIBQYVDEJSGDGKLASGYPGUKSXOKLHUYBXWKZCFTUNUNJWWDVRBMYLVWPJVNCHLUAJNMFVITTJCVYAXSFTCQBUQEEBXHULOZQMYPTDXKCCMJWZYCLTOPXYRSQRHAHZOZOISN");

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
    msg.setTimeStamp(0.3975097297587018);
    msg.setSource(47616U);
    msg.setSourceEntity(8U);
    msg.setDestination(55972U);
    msg.setDestinationEntity(13U);
    msg.type = 227U;
    msg.request_id = 15201U;
    msg.command = 8U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 44190U;
    tmp_msg_0.lat = 0.05930612271211244;
    tmp_msg_0.lon = 0.6379817377572805;
    tmp_msg_0.z = 0.4891106205234875;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.duration = 6774U;
    tmp_msg_0.speed = 0.3738998689981755;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.type = 241U;
    tmp_msg_0.radius = 0.980551397259992;
    tmp_msg_0.length = 0.36541732077246436;
    tmp_msg_0.bearing = 0.46940862238314773;
    tmp_msg_0.direction = 172U;
    tmp_msg_0.custom.assign("MNXAJHANKZDHYQPSXRBTITONEAKBJDSOBGIHFLUHFVTGRKZIFKLTEFYNJTCUFGVYARWGNZSQOIMPCXUGCVCJSVZPWVEXMJQLAIQHUUWZPQBNYWSSDQTMVROMDJSKAKIKQFAXLMWDIVETOEXGZRBGRDAHULYFQEGYPNCVSYKIFYHPOOUWBXCZJE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27898U;
    msg.info.assign("WFESNKPZIMGZKWYMNIJNRLCDCKBFYADMJPCKWVGOSHGUNOZAYNJGOZDCDHZBHEZKRXLDWWBKIIQIPLTTYFZTGEALWTOYCOHFVQTLBYGNVAISAWJFCMSKMZCEGDVAQPJJWLIYXHEOIXUCQWOSTDYGLPLUMKVSXNUBVMFJHEVQAHJNACVCBQUXRFESRMROZBLXORFOAZYRYRHQMPTSIJNTDTPMGDWRBKFRPKQUEAEXLFUXPUBUQQVHBVSSDXEIJ");

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
    msg.setTimeStamp(0.12072798935949691);
    msg.setSource(12425U);
    msg.setSourceEntity(221U);
    msg.setDestination(35450U);
    msg.setDestinationEntity(150U);
    msg.command = 101U;
    msg.entities.assign("EXUVPNAFKDBGDDWASVKEKJHVVWOMS");

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
    msg.setTimeStamp(0.5189400607971015);
    msg.setSource(2644U);
    msg.setSourceEntity(22U);
    msg.setDestination(57995U);
    msg.setDestinationEntity(27U);
    msg.command = 12U;
    msg.entities.assign("PMCVIAZKTGFLI");

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
    msg.setTimeStamp(0.06551477963855767);
    msg.setSource(16481U);
    msg.setSourceEntity(150U);
    msg.setDestination(37086U);
    msg.setDestinationEntity(41U);
    msg.command = 92U;
    msg.entities.assign("RDXOCBXCYLBRHVTRVHPTQGZKBIBYSYMRWUBMKJNAWNRSCEWDWECZFNETILVMYLYVMEZZUGIAGYPOYGGSIPFZSPDXWYKFHKAVRUEGSETCWPVJBOWMQKLLUKFWOEJXPKODFZVNATCMYHYICWXUJDCXLITXSHAGHQPKQGWLXNMONXRFINSENHOMAFTQKKPJNAEBZAGLMRBRCUSQUDJIETQUFZSAGRPTZHVSAZJJXOHQFJDUDDOMDQTIVCPFVUQJL");

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
    msg.setTimeStamp(0.6832012676171559);
    msg.setSource(10444U);
    msg.setSourceEntity(192U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(71U);
    msg.mcount = 98U;
    msg.mnames.assign("ZXQSVRFGVEVYKTZIUHNWKXNMLIRXOYEGTOVMZIQBHGWUVUNIBRIWAEUILBHOITZWCTSVEEAYUJERJYNOGLLQUQETKFMJZJWNMNYUGHQPVDMBSBXGFKNDPBWWVCZTKQBWNCMXZPRAXCOWFEPYYKZIHADUIJSMQDHMSUGCFEKGATLKLCATHZMEPJRODPUAGXJDNYTFKOWBALPRLKHJRLFDFXCDOGYYCAPAXVOMSOPSDFSJQZBXSRCSLRQDQCHB");
    msg.ecount = 23U;
    msg.enames.assign("AFWDHUFRPSQRXWXTJWYLVCYKWMZSEXEVONFDTOKDMEHQQIDOQEYIKAHCAZAENNGCHXFDMOJNIPHQWJBRGNSZNUUYLRUMPZREUFOKBLBXMSTJGRDUPULBKDOMZNEEREYLFAHHJASJWTIYLVFUBLJHRMPCGZDSANMTIGYNZMWTNQPASYVXJYBRGVZUGQIMWCWIGHSVSEOPTZVRJOTASVB");
    msg.ccount = 90U;
    msg.cnames.assign("NJSOCSLICFWMZFTRLOKQAXOJDXJGYNZKJYDKUIJWYRMLZY");
    msg.last_error.assign("GGEPSSWHWIVOUOQVYCESMFPKDQEBNECQMR");
    msg.last_error_time = 0.9642111318982483;

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
    msg.setTimeStamp(0.7021006859984563);
    msg.setSource(59120U);
    msg.setSourceEntity(97U);
    msg.setDestination(51545U);
    msg.setDestinationEntity(251U);
    msg.mcount = 222U;
    msg.mnames.assign("TTVUOIVMLRZQUSUTWNHSVKXJAWXMFVXJGQLRMXWDYZOROMBGQBPEDFYMMEFMZJOXFCDCEVHZROWJBNTBYOLVAUDYAPZZUUXBCAKPGBCCLZYPEPSNFUSMHIIDPJTRDYQTLKKCTQNOHQPRSIESDXWDQINGWRYQUSPHLSGAQKECGKCHDJHILJHANTFWHVWUJBKMFRXAVQWETVAOSCEJKINBAZPFTXBIZVYKSDYAKFBYRNWCGZXLGIELILFOPGHE");
    msg.ecount = 218U;
    msg.enames.assign("FVWWNVDEKAJVSRVHHOPYRNCOFGCUHFLKHOYAAIAXBDJKMOODILQQZGXGZXEQMRZERBJZWCRDXLUIGAYUPUEKPYFSXOWWEOLYERKKISRTZFTFMHPOMNNRBGSWCRUYJNAQYWNTIKZMPCUXPLDSNDCLBYGMJPWIVINYXVXDVLIZPSKQZDMAGHMAVZCIQEMHFCNJQLJKKUOGUVBCTIHTSHMVPTUBQBEYDUXWDFOTTJBGBATGHZJ");
    msg.ccount = 90U;
    msg.cnames.assign("VMVTADMDECREIYNCWEVLFSPYPCLFYARRQWHISXUBNKIWJDUOBOMQFQDITALTFQQLWZPYKWABTDTGVRGKCWOFSDCOMUKWLGHDHMCYWGUEVMBRONMHMDPPPOIFZNQULQXTCVCYKJGNNJBZLKSJJSFJPZKNQYNIHWHZHGZBOEHYXYFZVGPEIIJDORRQXXAJAZDMSFV");
    msg.last_error.assign("OIZVBHHIWHWCUEVHSVYCKQYLYQAGJVQMSYIZEMQUTOBQZGRADNOXPLOQUHKLNIKTTHRXSZEJUUVBJIGYQMRNCSKMJRNFACSXXTOFFPWJIRWWWARKBWKHCMILZVJXFMNBAOLOUUQCPNGBJZHADKPTVMRPERWMMQMZHZDWTYLSOGBYQ");
    msg.last_error_time = 0.3440021208593954;

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
    msg.setTimeStamp(0.9045151258426877);
    msg.setSource(44215U);
    msg.setSourceEntity(163U);
    msg.setDestination(2072U);
    msg.setDestinationEntity(229U);
    msg.mcount = 161U;
    msg.mnames.assign("IFALRPCWTHLWKUFUJQSNNKOORXRKBPFIVNTQVNSTTYSULSGDWZWUBPU");
    msg.ecount = 62U;
    msg.enames.assign("RHWIPVJCQIZEPK");
    msg.ccount = 178U;
    msg.cnames.assign("NGLLIBEOQHZMYMXZZCIQFNBSJGCYELBDMPSXVZNFSDBMUASSRUWTRXQGRAKQYHMWBBTFNZXNFB");
    msg.last_error.assign("JGXBLHDEFOZPFZESNEJYTFDTJMLKVCFYNYUZDBTTSZBNXWQCTKVDJKEZSVKGCQQWAGOVGGSSVAHLKMGHXBBMYJQFHDHOKNSUCRVZESRHGEIOVCCVKWNIXMWHEPLPROSAXLZRAHPNUWTOWPFAUZWOMMSLJGQILPIDYXCQUWDYNDNUFUGADBOBBZXLTYEPUCCTVSVPYOIRYTFJHMIXMWJIIEKWPIPMLMKUNAEQRXRHYXGNKZQ");
    msg.last_error_time = 0.5477439178502461;

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
    msg.setTimeStamp(0.37018848896101386);
    msg.setSource(43234U);
    msg.setSourceEntity(139U);
    msg.setDestination(6687U);
    msg.setDestinationEntity(123U);
    msg.mask = 241U;
    msg.max_depth = 0.7318357229505477;
    msg.min_altitude = 0.45244773697186746;
    msg.max_altitude = 0.8700123299283836;
    msg.min_speed = 0.6510264522491896;
    msg.max_speed = 0.5008042895848153;
    msg.max_vrate = 0.7181149528849863;
    msg.lat = 0.7686156883471553;
    msg.lon = 0.520713157363273;
    msg.orientation = 0.3920667046785352;
    msg.width = 0.45634140868380246;
    msg.length = 0.3028189975491826;

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
    msg.setTimeStamp(0.32144927541185453);
    msg.setSource(47511U);
    msg.setSourceEntity(18U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(25U);
    msg.mask = 78U;
    msg.max_depth = 0.3465234391869426;
    msg.min_altitude = 0.36616397822353575;
    msg.max_altitude = 0.39359304352237057;
    msg.min_speed = 0.9195519698126337;
    msg.max_speed = 0.5503399692429706;
    msg.max_vrate = 0.798392503250366;
    msg.lat = 0.9040208496513182;
    msg.lon = 0.4464759645190255;
    msg.orientation = 0.9839034773435671;
    msg.width = 0.3028713423907905;
    msg.length = 0.536718220336971;

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
    msg.setTimeStamp(0.4173731286242359);
    msg.setSource(35726U);
    msg.setSourceEntity(123U);
    msg.setDestination(48351U);
    msg.setDestinationEntity(251U);
    msg.mask = 166U;
    msg.max_depth = 0.9274623761199402;
    msg.min_altitude = 0.9071789763317292;
    msg.max_altitude = 0.2558306852811184;
    msg.min_speed = 0.8864853300042507;
    msg.max_speed = 0.7507352213299954;
    msg.max_vrate = 0.2555886462288055;
    msg.lat = 0.89297423539799;
    msg.lon = 0.47618488240162093;
    msg.orientation = 0.7190177151466958;
    msg.width = 0.7791119725318052;
    msg.length = 0.6337383229691599;

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
    msg.setTimeStamp(0.5422438657030754);
    msg.setSource(43672U);
    msg.setSourceEntity(128U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.22300427079789842);
    msg.setSource(54009U);
    msg.setSourceEntity(159U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.31026910691396037);
    msg.setSource(49868U);
    msg.setSourceEntity(12U);
    msg.setDestination(45241U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.47407301969731763);
    msg.setSource(21353U);
    msg.setSourceEntity(131U);
    msg.setDestination(53782U);
    msg.setDestinationEntity(45U);
    msg.duration = 58480U;

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
    msg.setTimeStamp(0.3996445361433134);
    msg.setSource(3069U);
    msg.setSourceEntity(87U);
    msg.setDestination(64345U);
    msg.setDestinationEntity(1U);
    msg.duration = 20181U;

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
    msg.setTimeStamp(0.013319441917350128);
    msg.setSource(38701U);
    msg.setSourceEntity(63U);
    msg.setDestination(49031U);
    msg.setDestinationEntity(131U);
    msg.duration = 2754U;

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
    msg.setTimeStamp(0.2777347701474905);
    msg.setSource(32239U);
    msg.setSourceEntity(111U);
    msg.setDestination(39616U);
    msg.setDestinationEntity(175U);
    msg.enable = 119U;
    msg.mask = 1099907915U;
    msg.scope_ref = 3656257882U;

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
    msg.setTimeStamp(0.5404301642398173);
    msg.setSource(44843U);
    msg.setSourceEntity(203U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(186U);
    msg.enable = 84U;
    msg.mask = 3653784432U;
    msg.scope_ref = 4160240634U;

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
    msg.setTimeStamp(0.4647296842604415);
    msg.setSource(29612U);
    msg.setSourceEntity(156U);
    msg.setDestination(34638U);
    msg.setDestinationEntity(246U);
    msg.enable = 24U;
    msg.mask = 3583281857U;
    msg.scope_ref = 2699065755U;

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
    msg.setTimeStamp(0.33252443109897134);
    msg.setSource(27645U);
    msg.setSourceEntity(80U);
    msg.setDestination(17799U);
    msg.setDestinationEntity(99U);
    msg.medium = 210U;

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
    msg.setTimeStamp(0.9767828063489938);
    msg.setSource(15473U);
    msg.setSourceEntity(210U);
    msg.setDestination(8198U);
    msg.setDestinationEntity(39U);
    msg.medium = 5U;

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
    msg.setTimeStamp(0.9213006519627214);
    msg.setSource(18018U);
    msg.setSourceEntity(202U);
    msg.setDestination(5569U);
    msg.setDestinationEntity(137U);
    msg.medium = 121U;

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
    msg.setTimeStamp(0.48186307183689936);
    msg.setSource(44200U);
    msg.setSourceEntity(104U);
    msg.setDestination(21504U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7572632157792203;
    msg.type = 120U;

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
    msg.setTimeStamp(0.39897098667427866);
    msg.setSource(63277U);
    msg.setSourceEntity(208U);
    msg.setDestination(39702U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8488864385342747;
    msg.type = 89U;

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
    msg.setTimeStamp(0.7703947008709435);
    msg.setSource(24349U);
    msg.setSourceEntity(76U);
    msg.setDestination(53U);
    msg.setDestinationEntity(54U);
    msg.value = 0.4941589716594027;
    msg.type = 127U;

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
    msg.setTimeStamp(0.5368684009530514);
    msg.setSource(27757U);
    msg.setSourceEntity(194U);
    msg.setDestination(49443U);
    msg.setDestinationEntity(166U);
    msg.possimerr = 0.857987660565591;
    msg.converg = 0.7053466367010923;
    msg.turbulence = 0.3998494294984115;
    msg.possimmon = 135U;
    msg.commmon = 21U;
    msg.convergmon = 49U;

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
    msg.setTimeStamp(0.9885439430325559);
    msg.setSource(45825U);
    msg.setSourceEntity(9U);
    msg.setDestination(61308U);
    msg.setDestinationEntity(55U);
    msg.possimerr = 0.3163110664106663;
    msg.converg = 0.5773622033257786;
    msg.turbulence = 0.5931485327665322;
    msg.possimmon = 79U;
    msg.commmon = 80U;
    msg.convergmon = 2U;

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
    msg.setTimeStamp(0.5994308342233929);
    msg.setSource(31127U);
    msg.setSourceEntity(192U);
    msg.setDestination(18638U);
    msg.setDestinationEntity(98U);
    msg.possimerr = 0.04926889957165359;
    msg.converg = 0.9408128214244271;
    msg.turbulence = 0.9546463540521223;
    msg.possimmon = 229U;
    msg.commmon = 14U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.5824268763837572);
    msg.setSource(34016U);
    msg.setSourceEntity(62U);
    msg.setDestination(8282U);
    msg.setDestinationEntity(86U);
    msg.autonomy = 159U;
    msg.mode.assign("VADDRZJODYWHQXSOGWJVPKIIUAVBNRAGWOZUOQHUKKTCRJTVUHKBNSCLYZEJHKXQBQPLUCMSFDBFEHRODFLBHZOIYLTGDICTXERIAXYVXPRHHFEWRGQLXCKAMHWNAKLRQ");

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
    msg.setTimeStamp(0.7189750057008524);
    msg.setSource(8771U);
    msg.setSourceEntity(48U);
    msg.setDestination(8600U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 191U;
    msg.mode.assign("TPNWQNZIYICCQBFJLQAKHMAHTQFJTVDGYEBBCZDFEVZXLDNYQWOCYZMROFWGOEFMBTZOPEXGEUDJTEZAIKUBMACXLPUNVUNHRJZJBFQJSKNSRKHODDGRQLSAMZGUPEHUKHWOKUFQYMOLLDAPWDMTXCIXCYHNRSWBRVXMHNQGSVRYB");

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
    msg.setTimeStamp(0.7441928883992999);
    msg.setSource(1961U);
    msg.setSourceEntity(130U);
    msg.setDestination(30050U);
    msg.setDestinationEntity(85U);
    msg.autonomy = 7U;
    msg.mode.assign("NKZTCWOWKVDXDRMFLRSQXXMPPVYFMZMGSISODYMVQABMDNLAEGBLTQBBIRKLOFBTZ");

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
    msg.setTimeStamp(0.2656942851858902);
    msg.setSource(2583U);
    msg.setSourceEntity(42U);
    msg.setDestination(25943U);
    msg.setDestinationEntity(140U);
    msg.type = 252U;
    msg.op = 237U;
    msg.possimerr = 0.8482595573006766;
    msg.converg = 0.4502774682285692;
    msg.turbulence = 0.7378756383739401;
    msg.possimmon = 224U;
    msg.commmon = 121U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.4707482359987153);
    msg.setSource(5153U);
    msg.setSourceEntity(235U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(151U);
    msg.type = 124U;
    msg.op = 248U;
    msg.possimerr = 0.5304263493141278;
    msg.converg = 0.44207374560178936;
    msg.turbulence = 0.9971596643838146;
    msg.possimmon = 134U;
    msg.commmon = 145U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.44881459621686615);
    msg.setSource(2720U);
    msg.setSourceEntity(148U);
    msg.setDestination(2533U);
    msg.setDestinationEntity(20U);
    msg.type = 142U;
    msg.op = 47U;
    msg.possimerr = 0.4298390489170044;
    msg.converg = 0.5592403886326334;
    msg.turbulence = 0.7739175855489783;
    msg.possimmon = 243U;
    msg.commmon = 63U;
    msg.convergmon = 234U;

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
    msg.setTimeStamp(0.45619308827558136);
    msg.setSource(14857U);
    msg.setSourceEntity(193U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(1U);
    msg.op = 179U;
    msg.comm_interface = 83U;
    msg.period = 60869U;
    msg.sys_dst.assign("RLUQNCXEWPTGHLGPCVMFZHABKQJOY");

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
    msg.setTimeStamp(0.46346677938478964);
    msg.setSource(64512U);
    msg.setSourceEntity(206U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(226U);
    msg.op = 245U;
    msg.comm_interface = 125U;
    msg.period = 3205U;
    msg.sys_dst.assign("PHIDGQILLIEYQUUNUSCVTWMHZLQDEXJGZKRPTHVFCBTSWTNYEHIKXPKZAKSWABGDRFTZVICXSCNSADBDGXXRLCQCRYZZSMFWMJHUIBXFGEBRFXIMLKNADPIOUYIWALOSYSJWJBQMOROPZQVHEYYOLFXVTMZXCMENJUKT");

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
    msg.setTimeStamp(0.8847765546055653);
    msg.setSource(1128U);
    msg.setSourceEntity(172U);
    msg.setDestination(10927U);
    msg.setDestinationEntity(247U);
    msg.op = 184U;
    msg.comm_interface = 232U;
    msg.period = 7986U;
    msg.sys_dst.assign("SWUCJVDYTIEOJWYEJVWQCGFZNKACMXVUOYQRWYTBQXRMLFIWRLBNRTHDQMHCSLPRJZBCTPBFCDRMYSNJHETPNSSGQKOUHQDBO");

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
    msg.setTimeStamp(0.6627494490596959);
    msg.setSource(36815U);
    msg.setSourceEntity(2U);
    msg.setDestination(6199U);
    msg.setDestinationEntity(161U);
    msg.stime = 3430982461U;
    msg.latitude = 0.6714379234343301;
    msg.longitude = 0.6808567368171623;
    msg.altitude = 17688U;
    msg.depth = 59198U;
    msg.heading = 36520U;
    msg.speed = -25930;
    msg.fuel = 109;
    msg.exec_state = 18;
    msg.plan_checksum = 19230U;

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
    msg.setTimeStamp(0.47976053449105704);
    msg.setSource(13343U);
    msg.setSourceEntity(28U);
    msg.setDestination(1733U);
    msg.setDestinationEntity(241U);
    msg.stime = 511617700U;
    msg.latitude = 0.5984137139102451;
    msg.longitude = 0.41228303180825965;
    msg.altitude = 31212U;
    msg.depth = 6747U;
    msg.heading = 19732U;
    msg.speed = 23104;
    msg.fuel = -26;
    msg.exec_state = -39;
    msg.plan_checksum = 40304U;

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
    msg.setTimeStamp(0.24764529486016473);
    msg.setSource(56429U);
    msg.setSourceEntity(6U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(150U);
    msg.stime = 3146788517U;
    msg.latitude = 0.7812334484350058;
    msg.longitude = 0.0772290809777707;
    msg.altitude = 9548U;
    msg.depth = 52958U;
    msg.heading = 21221U;
    msg.speed = 11943;
    msg.fuel = -13;
    msg.exec_state = -69;
    msg.plan_checksum = 30707U;

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
    msg.setTimeStamp(0.7577075485172253);
    msg.setSource(27814U);
    msg.setSourceEntity(55U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(97U);
    msg.req_id = 13675U;
    msg.comm_mean = 0U;
    msg.destination.assign("AYZJZEPLRMCTDZKJWQVQDUWWJAOFHKKAVOPTOSHQGMIBBDHARPTYQBMWXEOOMFPBKHDYZNWJWUCJBDOXLUVFVIXBSHBFQJGGNFKTHEJMDBSLEMFNXGWKAKIZWEECUHYZGZKNTCGMMLJCHEUTEAEZSPOHNDDLROBR");
    msg.deadline = 0.025716778224021297;
    msg.range = 0.597282710159999;
    msg.data_mode = 250U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 5922U;
    tmp_msg_0.rpm = 0.8173558338345448;
    tmp_msg_0.direction = 42U;
    tmp_msg_0.custom.assign("DRIJLVXXGMYSYZZPCZAJABFMZWELUKUHGKSWWCBTMLXOYHDIQFHZGCKSSUPYARHGHCZAQERMKTPIBBILNDLEZPNJNUYECOBEMBJTZCKVNDOBVBJLRTXXVDAXWCFDEVQCQOAGPXNWGDRRXNQPFETYFJXQTUUZRKAMTUHOCGSLKJFQNYXGSMOIDR");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IYQDETFLRWWZQFLXPIZZTKCRFJKWYSBTCMOVBHRJWOZMESOYFFZQDDIMFHKAHPZYNXJIXVNBUDQGVXLNKLWEKCTCVJAYRRPEWVBZBCXCRAXECMSDNQWOBRHSLTHYNXGUBPLEFLEOGPJBHHQNLGALSZMVMTRDNUPUJSSKVZNJXDRDUOOAPKMGJTKVEGNXPCJQBFKSOIIHNPVGWUJGIFGGFUBMOYPKAYAHCXDUOTMEWSAZQTH");
    const signed char tmp_msg_1[] = {29, 115, 96, -78, 28, -78, -2, 19, 39, 28, 36, -103, 5, -15, 74, 70};
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
    msg.setTimeStamp(0.5866390178952116);
    msg.setSource(24927U);
    msg.setSourceEntity(71U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(19U);
    msg.req_id = 60536U;
    msg.comm_mean = 254U;
    msg.destination.assign("YOTDTVJLSZ");
    msg.deadline = 0.1278765187325499;
    msg.range = 0.35871272106709984;
    msg.data_mode = 91U;
    IMC::Heartbeat tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MDILFTXQXT");
    const signed char tmp_msg_1[] = {44, 21, 90, -1, 93, -25, 8, 42, 25, -16, -100, 84, -29, -118, 77, -13, 91, -125, -87, 81, 126, -87, 39, 101, 99, -77, -63, -27, 88, 66, 125, -62, -94, 53, 24, 109, 66, -53, 3, 35, 51, 39, -93, 121, 82, -20, -64, -63, 60, 43, 112, 39, -20, 124, 57, 94, 37, 34, 11, -8, -29, 42, 88, -2, 14, -70, -52, 114, 44};
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
    msg.setTimeStamp(0.06012244559101709);
    msg.setSource(29302U);
    msg.setSourceEntity(157U);
    msg.setDestination(6701U);
    msg.setDestinationEntity(64U);
    msg.req_id = 35119U;
    msg.comm_mean = 123U;
    msg.destination.assign("WKNHAIPARSRPIZMDFAXYUPQCPKAQXFJOEEEMRWIGZUYIWHWOILJVOQUXWZC");
    msg.deadline = 0.30994083378253945;
    msg.range = 0.45379432351216886;
    msg.data_mode = 78U;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2831909153U;
    tmp_msg_0.start_lat = 0.6827237188440608;
    tmp_msg_0.start_lon = 0.4371755851963699;
    tmp_msg_0.start_z = 0.4715155151995555;
    tmp_msg_0.start_z_units = 73U;
    tmp_msg_0.end_lat = 0.977866062845682;
    tmp_msg_0.end_lon = 0.22355522990437093;
    tmp_msg_0.end_z = 0.5887183741038455;
    tmp_msg_0.end_z_units = 63U;
    tmp_msg_0.lradius = 0.08190995004249246;
    tmp_msg_0.flags = 164U;
    tmp_msg_0.x = 0.36636324060086944;
    tmp_msg_0.y = 0.8060377430285994;
    tmp_msg_0.z = 0.4884148651696586;
    tmp_msg_0.vx = 0.82651314321376;
    tmp_msg_0.vy = 0.2948399265944637;
    tmp_msg_0.vz = 0.698508686699989;
    tmp_msg_0.course_error = 0.8236763494806933;
    tmp_msg_0.eta = 53080U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ADPKFOKWNANSYOELBORXWDJGZQKXPFLNYCLKWSIMDZMAXUIAIYBHQYGKWPPNWJHHZVGETCJTRLGZDVPTSNXMCOCNJUOXHRZMTYHARADJJBLTRBQLMKOUUSUZTXIXPXVILNEEVFFLVHWRSEYQGECHHBQZAFRJIUYMWMONSFCBK");
    const signed char tmp_msg_1[] = {85, 67, 113, -68, 94, -84, -70, -111, 82, -3, 123, -20, 52, -73, 78, 43, 92, -79, 85, -19, -14, -66, -103, 44, 93, 38, 93, 121, 126, 40, -33, 44, 125, 38, -54, -23, 64, -36, 81, 91, -21, -77, -20, 56, -102, -80, -29, -127, 7, 20, -46, 115, -27, 105, -19, 39, -111, 65, 98, -120, -128, -102, 20, 120, 28, -50, -29, -126, 45, 5, -105, 78, 70, -112, 84, -105, 113, -39, -73, 11, 106, -52, 24, 43, 119, 83, 49, -15, 76, 11, 118, 114, -59, 70, 69, 104, -124, 32};
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
    msg.setTimeStamp(0.7658629244514199);
    msg.setSource(17201U);
    msg.setSourceEntity(22U);
    msg.setDestination(17512U);
    msg.setDestinationEntity(136U);
    msg.req_id = 20790U;
    msg.status = 18U;
    msg.range = 0.8711604353057626;
    msg.info.assign("KRXLAOVDBLWYBVFFTSMQLAXRJCKFZPTIQUNAVZOPTNMPWAFTMMGQQMXQEWNPMJIBCCXSOSBBWHMIDEDJEPPNDUXTAHZZJRSJUAIVTFNYPLLKOYCIKFOFEZDISZIFKSUMSKMGPRGGLWDTGHRJCOORYJNRWIOPGLNUSWHBHUPFJZKIHURVXQGOXENZRCEBLBQDUAEBEXVLYGCDAVGCMYAFDKUXQSWQZWGEHCSAXYZNVYORDYK");

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
    msg.setTimeStamp(0.7908079017833347);
    msg.setSource(38978U);
    msg.setSourceEntity(101U);
    msg.setDestination(2485U);
    msg.setDestinationEntity(87U);
    msg.req_id = 12898U;
    msg.status = 218U;
    msg.range = 0.49908501348784573;
    msg.info.assign("IMVUPIFTVUQBQJILHCTPXRTRXRHONNZFLNSFFAQXKLWTZBBZGHQEVLXJYDPILEXTRGUWJCZPRPBKITDKFHRXEZYNACNXWNZAQRAQERXLBZMTVSQAGFDEMSVIAGEUDFDUAWJCEWCLOJ");

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
    msg.setTimeStamp(0.28027326400313535);
    msg.setSource(18463U);
    msg.setSourceEntity(54U);
    msg.setDestination(7759U);
    msg.setDestinationEntity(143U);
    msg.req_id = 39649U;
    msg.status = 37U;
    msg.range = 0.7493315440805887;
    msg.info.assign("DGJPJSLBBPIAAQEXNSMQMBDCCQMNJJUNFVJARGZCWMPLOITKGPKSEVHEFGUEKMMRWBXHKNCREUYFSOIHZOKRIFRKYTDWJWOJHQSOFYGMUCZLPVAXOGDEAXVBQMUACRYBBSCNBVTIVITEUWSTVDZFLXLYJFVHWPCFYIVQPQOGDHYDTJDERWWNKIUZZMNKGVLHXKZQXPFLAQZOXDIGEHMPUZAWXRHZJBOLXATRFNQPGWTUCSSCLSRUTDYHYK");

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
    msg.setTimeStamp(0.6482462464027066);
    msg.setSource(39626U);
    msg.setSourceEntity(195U);
    msg.setDestination(14291U);
    msg.setDestinationEntity(114U);
    msg.req_id = 50926U;
    msg.destination.assign("BOJQUFDFQRSVWTITTJFJJLAUYIPVOXERUMCVNTUMMLUBYQBSBIZFPYJISNERFCESUIHYWXCVRMXFZQKQYBGPZEZIDGZDAKDPXSWABLQADBMCIPNGGDAGLKSRMHVKHJWMWOLMMLYCHLCJZKUUETFHZWNNPH");
    msg.timeout = 0.00012471454691009853;
    msg.sms_text.assign("QMXNOPAORDTTZQCTBAKVCVDNCVWIYGLRFPSGSPXLJWRFFQDCZUGFVBMXYNVYBYDNWVSIUCHSLPEZOCQADQBGUNRBLVZACOLLPYLOLXHPSROHXNIUKDGJFUKWWEJFAKHTSZNEJWKECWUMTWTHRSIHIZQFODKJUANOMFBVSYHEKKYJMJZELMDXJIPBYIXQLQEUDWXNOESEVIHMZXKKQRFBTJBGPMPDGRTRQGNSAUJIGAATREPZAT");

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
    msg.setTimeStamp(0.5773718699639719);
    msg.setSource(34187U);
    msg.setSourceEntity(80U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(153U);
    msg.req_id = 18811U;
    msg.destination.assign("DFMOQWDFAKVHFOFBSXIEXAVYDVOSZGCWJITOEJVCIKVYFXHZDPEUIFCLUISNZUQJOBYWPTIPJUPBGAXKSQHNDNZGCTSKGRHFMRSGBNJVKELRWHOEUEKBLAGPPRSVGWTGDFGJCIYNXHRMHQPIAOKETQDWCSMZULQJDQARONMYNLKJTPAALZWCDSYAXQMZXQTBLBHHGOJJKEFVIRUQLBIXCB");
    msg.timeout = 0.5913287153674069;
    msg.sms_text.assign("UYXFEXMIIHCMVHGOASRJXLPVSTLMZIOQUQGVPHFDXNNDLAKKRCPGGADBDQOTIDMELZNRDOTRWLUGPEHJJBZNXOWWYRUOCKYVUGIEHZGQPEAJI");

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
    msg.setTimeStamp(0.7063091139702479);
    msg.setSource(14210U);
    msg.setSourceEntity(27U);
    msg.setDestination(21380U);
    msg.setDestinationEntity(143U);
    msg.req_id = 40926U;
    msg.destination.assign("MIFSHIKVXBVZYNHVEDWNJQYIPLSGRUJFOECTEMDSLRWXUVQKAEYKIQWRWJKUSZBQPMJFXNCMXZOFQAJEAKFRROKVTMCDNSYLMKJBCVLRZOBNBRNZTKCHXWOTLNUDHCTIJHFEAWFEHDLJYYNUAXJUIQDWGHUFPMPAZMGDZXOSNVDIBGWAPWAGSGYYVCSLZBDPHJLSFXBMRTATLGAVIHGYQCSYQGQUTTEZQVDXTUEMINOLOCPWBXZPORHEORUI");
    msg.timeout = 0.7777502447475427;
    msg.sms_text.assign("HEYKCUSSTWEZVWRMZVUXFMVOPXABKVNVSSFQWVLBASQIKKCABEYOAZOPLUOWMFSUJDSJNPVHIAQDSYCCKIFIWJNKLZYIENEHMGORZPVEKTHXUQQMHTCLDXQALYFYOJXDUICBMNSPFNCQTOHUEAYYMCEVBGRDOIHTPHLQFZTYTJBJWDGVTKHXUTMNWIJEKSPRLRJTBJUQKABXLZLBRGXCRMRZEXPGDWD");

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
    msg.setTimeStamp(0.8328191974402921);
    msg.setSource(26381U);
    msg.setSourceEntity(97U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(219U);
    msg.req_id = 23641U;
    msg.status = 88U;
    msg.info.assign("COWZRLABDZYFINHDLZAPYTFDADGXUFOZUHFEKQNSDRVMPUPRBJAITPWNRYOHLOBTPXVHUTYISEFIMNHAGOYCGFKIJNLOSKTIIRXKDGOYNPBMEKFCQKQXSFWYTGUIMMBWWMLBHZZUVNZKLEJDSTKUXVJSDBLCIMTWECRQMUYMJZBAZVDCGEJYEHNAUXXTMPJAQWCQFOOJCPEWGQCXRRDEKZWGQRTXNGHNJELPHKSVSXVUWGACYVPSIJBVVAHQBL");

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
    msg.setTimeStamp(0.6128590302572924);
    msg.setSource(38098U);
    msg.setSourceEntity(116U);
    msg.setDestination(29697U);
    msg.setDestinationEntity(40U);
    msg.req_id = 32976U;
    msg.status = 247U;
    msg.info.assign("TTVTUKOYESEMFZQHXJKEFYRCPIVSSQOCJULCMAIVHGZIBOFPOWYWDHDPOIETJVRRMVNMNABBYWBJAZIUUJAZMZGDFKQMZPRDDAQLMXCPWZIDJEQEAGKGFVYRYXQLSYTRPCZOBLELVBLDEKULFCTMUDNZNFOGSIJWWVTCWBAQNQSHXRHQSPHKHDHONGNRJLAONNCUKGFSMGRGXKXEHJNXSROKVWBLIITWPSY");

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
    msg.setTimeStamp(0.4320694310729706);
    msg.setSource(42075U);
    msg.setSourceEntity(159U);
    msg.setDestination(2584U);
    msg.setDestinationEntity(144U);
    msg.req_id = 43509U;
    msg.status = 8U;
    msg.info.assign("HLGZEVVBYKJENSQDTCUUQAXJFXKWRZEKYZCBATWGOZJOCMWTDPWNQIHCAESWDKGMUJIHSUESKTIVLEZDIOJALRZHMYROUSRNAUVPZXJUFZRFXNWEQVQKNBHDBWQIKIZYPPRPFDYBVASGLOWZGAE");

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
    msg.setTimeStamp(0.313122088854595);
    msg.setSource(5072U);
    msg.setSourceEntity(244U);
    msg.setDestination(43519U);
    msg.setDestinationEntity(103U);
    msg.state = 123U;

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
    msg.setTimeStamp(0.3009454008653726);
    msg.setSource(14809U);
    msg.setSourceEntity(95U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(92U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.9951863096625629);
    msg.setSource(16154U);
    msg.setSourceEntity(2U);
    msg.setDestination(57131U);
    msg.setDestinationEntity(150U);
    msg.state = 232U;

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
    msg.setTimeStamp(0.2359108802802372);
    msg.setSource(36779U);
    msg.setSourceEntity(128U);
    msg.setDestination(2832U);
    msg.setDestinationEntity(167U);
    msg.state = 14U;

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
    msg.setTimeStamp(0.8521031213095067);
    msg.setSource(7057U);
    msg.setSourceEntity(224U);
    msg.setDestination(40937U);
    msg.setDestinationEntity(221U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.9753703561355503);
    msg.setSource(48581U);
    msg.setSourceEntity(247U);
    msg.setDestination(26113U);
    msg.setDestinationEntity(207U);
    msg.state = 78U;

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
    msg.setTimeStamp(0.5056385236694411);
    msg.setSource(65174U);
    msg.setSourceEntity(239U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(153U);
    msg.req_id = 38472U;
    msg.destination.assign("ALBQWZDWIBMMAXTVYFMICQNHBLYZSUPFBJQQWFAIOCMVDUZTZXXZKSIMVICSYW");
    msg.timeout = 0.025468889839048048;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.43479694325926;
    tmp_msg_0.confidence = 0.6575000211987333;
    tmp_msg_0.opmodes.assign("OSOATCDIOXJUUAVGHEIDIWENVMHPYGKEVPMMTWRZEVLPHSRBMYBVMFNAYWJILJJDRNUJYOLJCKLFSKDTSLTGRSDWAWMBKTNKQUDFMPXNRZSXHQZROPIPBNPBZXKVBHHDUAQNPAGHHQESOUAXYTTLAWGHZFFIJDGRFZSPIWGVYWNYME");
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
    msg.setTimeStamp(0.2087739532303584);
    msg.setSource(37979U);
    msg.setSourceEntity(79U);
    msg.setDestination(34311U);
    msg.setDestinationEntity(153U);
    msg.req_id = 7854U;
    msg.destination.assign("VEVYVIPIKCIKOAZSYSB");
    msg.timeout = 0.7332041407549664;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.2786583314469797;
    tmp_msg_0.units = 225U;
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
    msg.setTimeStamp(0.4366006819822207);
    msg.setSource(42198U);
    msg.setSourceEntity(103U);
    msg.setDestination(61647U);
    msg.setDestinationEntity(29U);
    msg.req_id = 36322U;
    msg.destination.assign("XOVIUGKRSRQJNADBGIERHWKHXFMRPCMUTTGEVLMBXEISYBEBHDBEDFZHFAOKJVRWIGZGDUVASTTQNLJFL");
    msg.timeout = 0.2649815684566422;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 98U;
    tmp_msg_0.error.assign("BJJNIGFPOYHTFUKWCNNAQRPLUNXSJBZQNUOLFRQYZZGMQPGAZGRBEISCNTWJJSBATSVXLMSWPBEJDAGXDYBKPPANQHJVTMQXHXFCPVHVZWNFMYCULARISXXZLTXZJIUBDUQKMDVFIWRREOKEVDSEDMEPNGLHPKUVZOFKQTOIOHI");
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
    msg.setTimeStamp(0.4881472599261665);
    msg.setSource(44054U);
    msg.setSourceEntity(180U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(43U);
    msg.req_id = 5454U;
    msg.status = 245U;
    msg.info.assign("KKWPCRFHORDQZUJUDMMRFPSJSSTSCDJTADRYVVVPOTXHQESZZFVBDVHHSSAJRWMCGBJWOSLOOXUZJXXEADFRGTANJIKTWPHCFWNVALVWLNLCOYAEXLYGLGJPBKIDGMKTBBNEFNQULPEZCSDMUBTQKPTJNAORZGMCFYEIXNBRHIQNHFKGUGHAXQYCYUYMYFWPDHYXZOBQMIDBIRUXEEZGMNKY");

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
    msg.setTimeStamp(0.20439426623884993);
    msg.setSource(28607U);
    msg.setSourceEntity(29U);
    msg.setDestination(13852U);
    msg.setDestinationEntity(57U);
    msg.req_id = 51164U;
    msg.status = 209U;
    msg.info.assign("SEJSSVLMCOGBJEFQVLGXIJMFOKQPPLARXINOJTSBIUWCTTLKCEHMFKAUSHSKVWTWWDTIRPOLTFQMCFUYSVHNHABXSVPPPHBBBAMDULROUHBKQFEZOJNAPRRNTXKFXFINVWENEKTYJYUYNZCNDAXTYPZKQARQGRDFDCA");

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
    msg.setTimeStamp(0.5132496416892165);
    msg.setSource(15299U);
    msg.setSourceEntity(88U);
    msg.setDestination(12743U);
    msg.setDestinationEntity(30U);
    msg.req_id = 40060U;
    msg.status = 211U;
    msg.info.assign("JSXWHPSRNKCPNBWQAUDSTNQKEYKRIQMRHAURHWIFOGUGDYOPMXHVFOVNLBUVFPACCRYUVMSLMWCJOGAKEVELDQABCHPPEBOXROSHRZS");

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
    msg.setTimeStamp(0.28057664933035076);
    msg.setSource(8972U);
    msg.setSourceEntity(245U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(62U);
    msg.name.assign("SZZWEUVQQYQCGLHWTYRTIZHLBFZNNPXSIJWFFFDXOZILNMQJEOHFRUOXEDHORZTXEQCNQERUKDDFJAVVUKBHZMNAKMXYPCPMSOXSTYLVDJIOKTGFEBZRVLULTFMDXUVARKCEBXGIMCCPLLUNCUUFKUOPHTWOJNXWHI");
    msg.report_time = 0.9169117624039251;
    msg.medium = 62U;
    msg.lat = 0.9859046298588507;
    msg.lon = 0.04749585765882358;
    msg.depth = 0.007653495596859905;
    msg.alt = 0.6837935154971923;
    msg.sog = 0.3192448350774807;
    msg.cog = 0.2743682255581369;

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
    msg.setTimeStamp(0.6970073112552552);
    msg.setSource(44640U);
    msg.setSourceEntity(192U);
    msg.setDestination(33091U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FRQZUZCBSRXDDWNEPSMJFBLVKTMQQYXKPPUJDUICVYOEAGTXFLRZUSHOAGDYDCHXREWGKWJAHTFJNDTRUYKNEHWGBPTDJLGZKJXSMELFNEPPQBYVQXALIGCXMWMMHNAVEFUJZRQSHLHKXWLSNWUOYRLI");
    msg.report_time = 0.4189199451763316;
    msg.medium = 5U;
    msg.lat = 0.6690464991326467;
    msg.lon = 0.8836432911987772;
    msg.depth = 0.03200219605519572;
    msg.alt = 0.5134745319573139;
    msg.sog = 0.6404732660477072;
    msg.cog = 0.05491208738628606;

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
    msg.setTimeStamp(0.7902309099124911);
    msg.setSource(38925U);
    msg.setSourceEntity(147U);
    msg.setDestination(9006U);
    msg.setDestinationEntity(167U);
    msg.name.assign("OXWUYHWRZGNITJAQBHVBHCLEMXAWKFEKTXUXUKYXWPPHYANZGHPRWSOONSUMXCKKTCFFYBGCYPBKCJDTV");
    msg.report_time = 0.3505521675419272;
    msg.medium = 238U;
    msg.lat = 0.8590721821621033;
    msg.lon = 0.7838977339375698;
    msg.depth = 0.20719061273778983;
    msg.alt = 0.22438349851045336;
    msg.sog = 0.14635005853313587;
    msg.cog = 0.16063007961018616;

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
    msg.setTimeStamp(0.6656818129718686);
    msg.setSource(45312U);
    msg.setSourceEntity(163U);
    msg.setDestination(10099U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.1111288253898246);
    msg.setSource(50891U);
    msg.setSourceEntity(196U);
    msg.setDestination(40309U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.5781026745507882);
    msg.setSource(43460U);
    msg.setSourceEntity(175U);
    msg.setDestination(51763U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.49072444343199084);
    msg.setSource(13782U);
    msg.setSourceEntity(251U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("SDOOLWWOMUONFXAQCQYVMTFHLIQUBJRDQUSQRBEXQMHJNNDPEAFEYZBIPYEKYEPKMNWGUGKOC");
    msg.description.assign("OLEGHWIOGMJOPLNECKRKVFZHRBNTLRRWXONFOFZCHIKXXSDUZPUILYXIYSBBTUZYCJLVVFMJKABTGTUSFZYTAEVCMSMCSKYQVUBADBAUNHXOJBHEIRQIIXMZQMFMGJLWHSQZYNSEPFAMPGLJXOGBSHNXRVOZIPQWGINUTAJHDWGSYUUESQPEKYGWKYUODQ");
    msg.vnamespace.assign("TLDJAQSJHVGQRQHBINHUVFBNWJFPBECGUZKHXMMKOKLWYZOMTYCIMGMYRVEXCSNNGRUNDIXIAJOBPMZXZCVSMXCJOXDIGOGTBDCDWOPXNKJSNTATJWLENTYFQLHDZBEOUUKJATTRAOLFASRVXHLCTMZKVEEIAABOLDIWEETPIMYKUNQKBPRWUDPGWMQRFLDFICUUCXBPPGAHRVQFKIVFZWECQLPSSJJZDFOPSHGVYLGXYYUBZE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MAFBUSSCPADHGVAAEVWTBRZPYKHSSREDBKUODUCKCWJLSJLNZEFWXPHLFGOHAZRATJXEDZPDEYEBDQNMQMTLPDUBQKVDQRSFCMZWJREMNPYCOMYALIGNJFLILGWQVUJUYMFZPXNQIKHPGAGWUTYPUIZGVHCIGBBEZCXJWXINVXYEKWONJXXTIFUTVYUJRLYPOMBVZQWTIVVKNLHSFTRQGASCS");
    tmp_msg_0.value.assign("NWJOLAMNXPSLIXFBXFCALRTHBEMWUZVBXCBNSPCEWQQBQGQMAJACXUQHGFBWQCKLYHPNHFSYFDCBZSEVRFXGYQIOULMVGNGYWSDSOZPYXTLIVHKAEKLQPDVTJJGIJTFUZTOBJUJTAKVRTTDIRHMFWRIZHCIONIEVIBWSODEADJPUFZXKGJLKE");
    tmp_msg_0.type = 158U;
    tmp_msg_0.access = 122U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JAMBTOIPZYDDMRQAHQUYPNEHRKXRPFULQFCHXQYSMAHZNRDDJBKJVB");
    IMC::SetLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("ATQRRLMYANNGPJBUJVENCCGKYSFNHFDBDXTEMTCWGWRUYCNNLCDLUPKZNZHAKKNQQXLEEZKVSQEWHDBUAWOWBAVOIAPIYBFJPKBBISEKGKFDTZXPZGPBGYDTOEAXCTAWOUIUMDXJRLHMAFXSLYYSNOHZOHFGGZMQQACSJUQSWWQXPXFFIVUPSCHFTOLCXIRKVJDLJRRRROFTL");
    tmp_msg_1.value = 92U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredSpeed tmp_msg_2;
    tmp_msg_2.value = 0.6117743363515696;
    tmp_msg_2.speed_units = 77U;
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
    msg.setTimeStamp(0.6185231051605373);
    msg.setSource(60799U);
    msg.setSourceEntity(159U);
    msg.setDestination(13023U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("JRGVRPQHALSFBPUSQCKUMRDLLKRTJBZOIVCQRENVWHZCMUNQNPVBFIXYNITGORMNLAXRT");
    msg.description.assign("NOWWOWBCKPECDHCJSWGBGSOYJUVHJSVJKTYLULBQXUMPBTYTHLBOUCACDJPIIZSVSKYHQHMALRTOBXPNDNLNXSFEQZDCZTYZGQOIKZVBNJBHPMZWGKFQJEDIHKDZOPKOIIXFWURWLVMMXURUFDPRTDRVUAZFXFQHQBWZMCECJTBQMMXHSNNOKAYLAEGFYNXEHGKFSRGAQTDXLCLPPDILMRREVVKGXVVJYRFCZUPANTGSWFWINYA");
    msg.vnamespace.assign("WZXWDRWZGPPQGTCXTVMBDERCQRYVSVTPPTTNWRFJRLHUDILRIKQFELIDUUZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ESUBYBXEJLUIRQXXEANMGPWBWIPIKK");
    tmp_msg_0.value.assign("XWDBLDVVSGXZNUEZKPJFLKAJARHSYYFXSJSWMGRWROYNJNES");
    tmp_msg_0.type = 80U;
    tmp_msg_0.access = 86U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IMZSACHKGZZPVVT");
    IMC::LoggingControl tmp_msg_1;
    tmp_msg_1.op = 154U;
    tmp_msg_1.name.assign("KLWMTIGKFNJIHTQQZSSPFPFDXTUAYWEPRYZHZHQJHOTRWBKRGGONDGPWXVFTYUPZNFGCCELRUXEQAHBHSLUNMLDREECLNZARGOXBJVNBLTHYIHCJRSMTWCISVOIRPYDDXGEJDQBWVKMOXIASCUQEQUBLOXFVCOJ");
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
    msg.setTimeStamp(0.1425008718488422);
    msg.setSource(63630U);
    msg.setSourceEntity(249U);
    msg.setDestination(40691U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("WFFOASHMOSZGRWIJIMFSDGICVTTHNGLYLATHDZWCJNVKBLBNJOASQKXRVLSIKPAWGYDQVIAHNXCIXZJQRMOKOQMXHHAGMZPBNINPELKQJXXDLHUEOCWEXJ");
    msg.description.assign("JSVTUZZEHPAVGJHGFXTLZMDAFVONDXGZOPQOFHXDULPJLOAMEZBLBWRLEUDQMRBFWINKXCYUNGCFPXWXFFSHHOAECURIETHINVLSSXHWLXOPMKURGDRGADBVFKHGVJZEQELKTTYNGLQIDNFZAYJEOKIAJMKZRBVCBTQWJUHIROB");
    msg.vnamespace.assign("LQWGQEXAGKHYFELDAWIEDIUNMVYVVFDRAQPUSABJKVHLSTFWCXKGUICHBWMLOZSKSRAFXMZCFPDVYMYOTGTRK");
    msg.start_man_id.assign("LSEJZXTTHKDILQQYDAAYLLCJWJQKBSUARPWGNBSDUZILRPTADVLNDJMJKWKQQLYOAWLSNIHQARKFFUUXHMPUCCYBSUXIPDKNXIBMJEHCMWKUOMFOLVFTXBEQGEBJOWFRZYGWFEPIEYPTAZRWNCEZK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PYOBWHONCHACRD");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("GPFAOOAFTANSCZOGEQSVHWYZSNUOEMLLLNBRVZVLCGWFBQKGQCRNXOUOUUTUMEUPZHCFJVVFZSQLFECUKAGDTISYSYJNDJFMHQCNIDJLZVDFGXHJS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PNGKYYKFMXXMSJVJOYUQLMFUHJAEXBTSBWAEZJYZQCBXKRQWLGTRIFCUQWRHFOPTNUSRCCLIPXTDOGKRNOFZBVHMSADOGTQTGQCAWKBRPOKYOCJFJVLUSXGHAFMESPTIULHZTNWIJFSVMIYMYQWLLGNNOTYLMSFKZDIUEHDAN");
    tmp_msg_1.dest_man.assign("DFTRWPMQJKHICZWULSPDOWBJKNSZZMDLTWKHNGXIJNQYLECXXQKNSJONBVGVSRMOWOVEOQRLJAOSAACHMHMJPRQCUFHDNHLZGQHYVVNRVBYTFOHAIZRBURVTDNGCIBMCLUJCBKSPELTKDCVGKMTWGUYOHPZQQLGFPBYGSTSBIWDXFZFIUIDRDGVEMQALAKWDEBAUAPIJTTYZSTYJYUXGHZKRZPNFEFYESCORXEAXWI");
    tmp_msg_1.conditions.assign("WAYHZKPRVAPFZFZXTFXXIVBAFUCGD");
    IMC::GpioState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("ISTLSTDKNVTTQXIGOQSUDONURIE");
    tmp_tmp_msg_1_0.value = 210U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.35741937123759426);
    msg.setSource(26165U);
    msg.setSourceEntity(194U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("QXKVKDRIGJERDQVJPPHQBHJNLNYYQDBWKSDXTQFFRLZMQUZBEXFMEAJLZRGOGVRBMDSUAXCYGRSSOEIDSBCCKWVEAAPPUXHGMZLMJVUVCMUYTGLOIAZURHNAWPBFZRZWPIWTNNKGZWOR");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 38425U;
    tmp_msg_0.lat = 0.7199101256924458;
    tmp_msg_0.lon = 0.35381472962195026;
    tmp_msg_0.z = 0.2569216524390143;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.speed = 0.2911072034700998;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.syringe0 = 227U;
    tmp_msg_0.syringe1 = 69U;
    tmp_msg_0.syringe2 = 57U;
    tmp_msg_0.custom.assign("WTAKOQFAYTIHSXHLMIUTHIZDMSMUMRRHWIMPTDOMQKYBKDGEASBWPGLOULZNUJIVEFZQPJBZZGNUVBIHNETPVGSJCUOAQTARJDPERTXLFLRIKDOGSUTMQEWCVAJTVMBNCNPWXWCKSEUMOWEQOSBBFKYYVLHPCEA");
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
    msg.setTimeStamp(0.3139062518519904);
    msg.setSource(18438U);
    msg.setSourceEntity(95U);
    msg.setDestination(10529U);
    msg.setDestinationEntity(119U);
    msg.maneuver_id.assign("SRQCDDPFKMFXOEDNBVIELASYPGPZWVGDNFWXPQWDBFHQOBEQRPZUFJIASRJSWHQQSHUVVKVNJ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 50155U;
    tmp_msg_0.lat = 0.5193793889490516;
    tmp_msg_0.lon = 0.1248903863404579;
    tmp_msg_0.z = 0.38015202704582896;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.duration = 18315U;
    tmp_msg_0.speed = 0.6867067212938753;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.type = 46U;
    tmp_msg_0.radius = 0.19256658875644284;
    tmp_msg_0.length = 0.9480406873868183;
    tmp_msg_0.bearing = 0.6473545534621021;
    tmp_msg_0.direction = 174U;
    tmp_msg_0.custom.assign("XTOQUDXJDTMSWFBJEGETYDSUAJJPAPQQDQOXLVRQCPSPCYFGLZZAHZIFIVCSSAYHWVUDEIHWSSANWSBGLLPHNPEWQATJFQVKNZQAGXWMRHNZOKYWVNVKBYGOLXYDFKZERIBYMARHBKFXSFTDTUFXOIUEGGZMCIBVTBKRRKBQOCMUXHNEBPGBLEATKGOYPOFRDEOMNXXJLHJWMJUNKDJVKCUPVY");
    msg.data.set(tmp_msg_0);
    IMC::LogBookControl tmp_msg_1;
    tmp_msg_1.command = 73U;
    tmp_msg_1.htime = 0.7510158820165791;
    IMC::LogBookEntry tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 46U;
    tmp_tmp_msg_1_0.htime = 0.804349475630195;
    tmp_tmp_msg_1_0.context.assign("YPLRBWGDMPEMDXGTCIAQSELVWWHBKGHOQKDVWRRUESPUNAFVZVTUZXMGJGKEZLLYEDKURXJZINYAAOBKMKVFSFYSHIVCXMEGXDSNQNEVCJERPIIIJXLCUUCIFVRMJPTPKODAGEOKOUBAJ");
    tmp_tmp_msg_1_0.text.assign("WAHNTYPUWAWVLTBJDCZOIJEQZGPDNOJJNKYYCRAWXRGMHCGZCJCOQFFHPQVRQEOKBORHSLUHKRDSUEUVDMEEDMILMOFAVUCUIMFSYEZNKYWHATLDNVPUYMITXTBJPIQPNMVGLBQRAGXFBFTVQFLBOUWTMBSAXKXGCBAEEBXLDZYPZIHHKKAIWCMDOVTAGBFXDDFJKOTGNWHISQ");
    tmp_msg_1.msg.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.911635493740487);
    msg.setSource(24009U);
    msg.setSourceEntity(71U);
    msg.setDestination(37083U);
    msg.setDestinationEntity(176U);
    msg.maneuver_id.assign("CJMSLANGWYYMOHTZXUGAJUKSLUVGZSXTQXVMZCGNKVKMUZDLIWDQBDYGKPYDHAESRAMLTOWSUCTYIPXRBJATRKBPZBGPFBR");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 19520U;
    tmp_msg_0.lat = 0.636978755207256;
    tmp_msg_0.lon = 0.3832593911334722;
    tmp_msg_0.z = 0.2053701682471739;
    tmp_msg_0.z_units = 46U;
    tmp_msg_0.speed = 0.4821639383281505;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.bearing = 0.9958039417202208;
    tmp_msg_0.width = 0.14348407779844596;
    tmp_msg_0.direction = 200U;
    tmp_msg_0.custom.assign("WNHPSQFUZKQTMZFEARXSIRMXREHFUWUIUIBWAQHSGGLILQGQYADUPIIQBYVTZPOYBPRWKIOIBPSVCAXURSSVBPWDTWZSNVMTCFKIJPAYCCNHWRKYWJNKDBYTGFJKVTLYLVEPOJTSENXQXAXTR");
    msg.data.set(tmp_msg_0);
    IMC::AllocatedControlTorques tmp_msg_1;
    tmp_msg_1.k = 0.04008683860810014;
    tmp_msg_1.m = 0.8368839704594245;
    tmp_msg_1.n = 0.6676404502309233;
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
    msg.setTimeStamp(0.7737209761503662);
    msg.setSource(64894U);
    msg.setSourceEntity(33U);
    msg.setDestination(47621U);
    msg.setDestinationEntity(80U);
    msg.source_man.assign("NLDAFEKKAHIONPEFUYWCXSYZHOQJYANWDNDIHFEVSYXEAMBWUBLZMHERPOWBDGAWIVTYEJWCUDGCGVTDLCDKCAVLETZMTFQNDHPRFSRHBEIZHOPXHWCVITJAUFYMKMSROBRUKTVARLVLBTESXGDFWXYICNKUBLQNSIRHGUMQCZLTVKXFVCPOMMJTWQJNQJZQBAJLUGHZFPZBZYPIUIXQDEGBNYJMMLXOYFAOSSK");
    msg.dest_man.assign("FOCBGISPLTULHGOLYHRISTMCQFVJZTYDOXBMWXBHCYJOIVBPWDDOZIFVEYNJJDYKRPXUNRPOF");
    msg.conditions.assign("ZQUGBLACXUIFOEJPNZAQKRIHEORGJMNFPMWVXJKLRAZSIFW");

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
    msg.setTimeStamp(0.35732860810531986);
    msg.setSource(58318U);
    msg.setSourceEntity(156U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("ISZRADJADULHDGWIDHISJMQLRKXQPXYMXLWBFPHEBLVMHUASMGPLOMILREEKDWLDYRBPCVGWEFCTBZUCPXTHGVQ");
    msg.dest_man.assign("EYGUDMNNIDSVMIOJTPPDGWORFKFGQNTXTUELOUNRJGUFMRUZUGIPEPCKCHUVOKYWIDWFZBXVAQLFVNSTKOOHFRLWCWHNDEYQHNKOQAIRJWXFLRGXAELDCYGVQJAOOBWIBAPBGZKZAMYXWVJPEFSGMXLXZZVKUCDHHHYTMCLZBJBBDAQXTPTNFPSZYNIARDPFVISUGJCIZJBLMQLWKBMOYHASDECEPEJJMESKWCCLMQRNTYAHUTY");
    msg.conditions.assign("SAYOFZAGINMXHDLRGNQJRMBELDIVLTIUOHOFDOWBNOSPDHCYSWSGYLNYAPCYVLMFRRLQONVGEAHQUHKPPSWTIEUXVJOZICFGWMVKKVBIHXVCSAEUZUFKMSDKHWQEAXKRMGOVBQRXEJEFIBTPYXZFWGZUEZXIODOMILPIPLMQJVCFTSNZNDQCFDDLUNQQSTBSNXGYJTMGMCWPBREJJZYACUCJWNRHVKGQPWPEBHCFTRTDWKRZLUKXTAT");

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
    msg.setTimeStamp(0.9085609695305151);
    msg.setSource(34197U);
    msg.setSourceEntity(94U);
    msg.setDestination(60882U);
    msg.setDestinationEntity(134U);
    msg.source_man.assign("SZIJTPRCTTKTGOMPAVYDBVGQBLMUREVLQRFHIFUKSFMYWHUALPYQODYPLIDRAUGQLCQPKDZFPRXCVOMUSNIHIYZGAWDMJZBNYWBAFRTJZPBDQWZSEPSNKTZVQMPFVZKSOBLJSIOGVRDTOHLEUXYXWSWXCIAPF");
    msg.dest_man.assign("WZQMXVOBMVTBNITDLWUYCCPWZXGHZADETGLVQPYJOEUYSSFPHCCTVLJNEYNWGOKWHMGOMNMKINFZWODJKVAJRIKHKAKZXXTSCUSRVICIVZKMBKNDHRYCUFBHTIPAEXGBM");
    msg.conditions.assign("BFWFMCFXGVYFPUNGLDEBKRXXOHZSXBESBGQJKMPQLSUCPUNUSCXRCWHWZNIVJAOMSZVPMUAEZGZRAPJEOYCWNNLJJICUDRGIQVMCLBOHPLHKONRVYBTGFIOEWBOYRDTTYQMOIXTCBPIKZLQPSZVQNKSOHAJXMLIAGAWTAZMPYXJJCWUEWFITIFGGVDRQKQHPDLTFNGIWZEHKRMLADMJEYUEHY");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 48220U;
    tmp_msg_0.lat = 0.8787706407191027;
    tmp_msg_0.lon = 0.9373170517920861;
    tmp_msg_0.z = 0.34322703002625066;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.speed = 0.26616732291107115;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.custom.assign("MRGMLDDRPHMOQNBAEQBFTCSWNFUROXGFQDVKUMSEFYHVXOPAAWHBPTJKLDGQLPMQETXLYSWGAGJKWAISUIJTTZIZHCOGFQNWIJKCKZJLPRJRVYMIWCOFOKHWLOUXXDFMHFBJGZNTCCOIIDBZANDDKAXAQXWM");
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
    msg.setTimeStamp(0.2640437230114482);
    msg.setSource(64483U);
    msg.setSourceEntity(219U);
    msg.setDestination(61165U);
    msg.setDestinationEntity(224U);
    msg.command = 251U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WHKFGIQJZWCEHHQVLVSFNLDZKVBYVOSHUULLCXBRLFKSSBPKAZPJOQQIXRHTQHYMWGJAYBBCHXLGCDJRKUAOOLIDEFYWUYPZCCVGCDREANGDEEJEJYASBRIQJPXIUKNYNBBFOXUERFVJWONDDYMLZUYMXPTZDISYASMLFPPPVFEOGMQMVTFNCMXEJHTIHGAQQTFBDWUWSDOTAQUNORZKOMKUPKTTNVRIWZXHWI");
    tmp_msg_0.description.assign("UQHXNVFWPBCCNMMFFQQZDMJVHPEJKPHDNAS");
    tmp_msg_0.vnamespace.assign("RIYYXXZKBIDFEQLOPBJSTNRWHCHTDRNUKSEKMPJLGQPEHHDSDHMKRBVYNJIULUKOORHCKCEGNUUSNNOJNZFJLPGTPZBEYLMMXZAAWCTTHGTMEGVCIYQAAKJIMWWKBYPHWBMZHKQFNFGAFQYSETWYDKZITEAGXJIJUNVOCAMOXGELZSJDRPCQTBXSW");
    tmp_msg_0.start_man_id.assign("QALNFEEPARTSSSAXXEZHSPYYVIGXZUUTBGZBDQRWGAPVPOWDFQJHMCNCPCLZMJD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BBEGVJWECLLJDXCLBUKGNBOOBXWGSIPTMXZXRKHTDZRLBYCQLWARCJVQYUFVIVWZTDNUKNJYIIIXVDUCCAAONEVIZQGBJOQKDMTFSPFGAMXEELDSPEMQHJJCKPDSMRFQKWNYPXWZTONMATUQPYULTKUMFGRNYFHLHIDGNSETW");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 52256U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 125U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.2686536149523745;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.2363846151529464;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.5518757205374161;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vel = 0.384060280179478;
    tmp_tmp_tmp_msg_0_0_1.amp = 0.16189240652939985;
    tmp_tmp_tmp_msg_0_0_1.cor = 227U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::FormationParameters tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.formation_name.assign("KKULIKEPGSOSNONHNZYDLNIAOXKFOZMSHEFBFTGRJZDMXSFIZCDQXDJTARBTWPT");
    tmp_tmp_tmp_msg_0_0_2.reference_frame = 78U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("IZVFJJLZFECCKLFZPLIJNYFYGDXZJXGUZEVNFBWIBTAOPUDBXWTUMTCHPAUKKBQSKYNSYCRVLMQPVOHXDWLBGQONFOJDDSZUQTHWRUBCEHLONWPPQFVVMCKZGECAOCFUBPMLARSQIMSGYTGKMIUWJSBEJDXKPRA");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UJBEUGMJAFERNHSRPTORAZWXOFLTUAZULRGVDBDKYOIRQMEVAPHGCIELXOIOFWUJPGRMMBNWHNFDSNZBZTOYTNAOJI");
    tmp_tmp_msg_0_1.dest_man.assign("XXWOILYGVIENVXJMFVOSTZUNKABRDSEXJWWCMMPRSLMNXXSBHIZSLCPDEGAYDUKGFZHNJMSMUFKCFHKOMRWKZYCOAQHDPKJUFWMZVMYPJKGJXITZQHBLCEANRIYONKCFFYINEJOHVZDOTYRANPNUABU");
    tmp_tmp_msg_0_1.conditions.assign("UCLPFYDKWYYETJZRICNEWLOKDTTHZMVFHSWBQAXSEGJBZWBAAWRWKKNNLPFEQJSJMAILXKQMLADYOQVIOUVTUFVGPNKJODCSLXRPJVQMOPIGWXKTZBFFBCUTCLZJJIMTYLBGGURVMIHKRTILZ");
    IMC::RemoteSensorInfo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id.assign("HNLUKKVZRVLCQGOIMESCOARAHLPBWKRZPGUTQIXTVAEYTXVDEKJLFLNBWSTEHBYEBNJAKCSTXZUKJXBQCWPRNGBFKFUITMZDEMDIXGHHREZKVIFAFXCMYOGWQAQZJWADPBMPUOUFBPFRHQHVVGLCISXYLSJVIWJNAMPRMIUOCZNWEFDCHYRMYTOFQKUGNSTJXDJNPYJWHYSRWTGPLSDOOYEBDSTJNCWMPLQAODNXGXVHGLCZKARQIVBISQUDZM");
    tmp_tmp_tmp_msg_0_1_0.sensor_class.assign("FLIDAWXNUWZIIFJOBMUWRNPLCGNSUQD");
    tmp_tmp_tmp_msg_0_1_0.lat = 0.803674596175006;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5016534976913798;
    tmp_tmp_tmp_msg_0_1_0.alt = 0.4241131214605004;
    tmp_tmp_tmp_msg_0_1_0.heading = 0.42852021676500074;
    tmp_tmp_tmp_msg_0_1_0.data.assign("MCXNSZDHZRUJYJATNWFDIJIWSHRQIMZZTISHBVDOVBRCUJLFLKZGAATZKMFFUVNURBXNIYCODPGABARMPOYEYDJSXQWNYREWTQISFGGPBJOKCTGKKOQHTNQPLRFKPFWBWNCYPFJSWOAVLVGLSU");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Dislodge tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 43985U;
    tmp_tmp_msg_0_2.rpm = 0.2379448428491856;
    tmp_tmp_msg_0_2.direction = 33U;
    tmp_tmp_msg_0_2.custom.assign("ZHLHGQGEUAVMGXZIBTKLIDAHQRJSFXUEJOOBLZDVVKHMJGAFVUNBHEQSOXTDNSNJSBEKYJWBKBERRQPCDKMOKSKUOHOSNQBUGIJDRNVTFTUITFYLDPYWAAVFTELCYMVMLWNEHZXGWNWLPVMHCCNGJEFODNA");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SetEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("GXQTQOTAFKRIBFRWRATSFSZFAIJQLIVOZCYDHPPGGNVUGWEWJOXUCZBQHLNPYZQLXYDLFIHSYBJUKIMXDKISVANBDFWIYVNHPQIJZDMVVRWOJTBFCJXNNSMQVLXOCGXKMO");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.name.assign("NSLAVXWCFZJFOCEQNCQYAWTPTVKVTUBUWUAJAEAPSGICSPYOERHRJCJPLNBEMDUFUL");
    tmp_tmp_tmp_msg_0_3_0.value.assign("ESPYVAAFTGYGFZNCFGTVISAPQEKVMLCZPFDLRPODGEHMWCTPJZIKKOBTOGQUCXPIETIMEHLWZDCYNWTXDLXFRLGKDLVMCJEJQBQNXWEJOBQZYQRJBWQDMWKOQCDXVHYZFFTJVGLCJSXIHNABUHSCWAHWESKUMIICAZE");
    tmp_tmp_msg_0_3.params.push_back(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.7572410753975127);
    msg.setSource(57605U);
    msg.setSourceEntity(137U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(230U);
    msg.command = 67U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WLEUISHTUJIHMHTDPLFIYGZJCYBFDRHVITVOXERRXQBYOBEAZAPQIVOMREXZQWPGYQNIETCKLQYWAOPRMQBIDWZYMPLTCCGEQMWHASZUYRUJAAKANJRZGZJSVKXOSBFGXNSNVVDXFTHFWYYBOH");
    tmp_msg_0.description.assign("KEOSKIIBERDCSFXRVCZLGLFLHSAGCKFTJMMFUYTRTORVPJXJPOJBLXPAQAKXAHTKMIJVYQUDZZCGZNSTXGLEEAQNKMWFOGONBOLNHYLJVVSVPKAEAPHITWMXIKDYHLOBISSIVHOZSRGCWCIGZVEDFBVUQRUGYPXNZCHKWZQQIEDNWTYDCRWUXUFXBMNNFGSQFMZUPXCOPJYBUUTEYWSTKRDWWBLLDEJAPNNHHQMTYCHBZDQUVBMGJJMO");
    tmp_msg_0.vnamespace.assign("JKMUSGJXHVWQOMOYVXPVYYYJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KFNNTRIELZARKFHCOBWQDGFDOOJDZCYPDGAENGJVHPVSFGIESXOWJSTGIOYFHLLJTKJTSSGBCALMVPDTTHPIYKODBKUUWWJPBPYDHYVWWQCXDYXOENYHFUUHSRKAOESU");
    tmp_tmp_msg_0_0.value.assign("OSZNJPRAWSCLTZXRBYIJMFBBHOTCPDFFPSMKIHOUKVZZPWSINFVELNXQKEAAXQDDWGOQFECNWYYDFBSKLMNJKQLFHHNDRUQCZUAGHZBJEZIQBVOCARDJMIXOVGARLGBISRGCIUVTYWMJRXZXPGONZARIQVAYLEHHAYGMPXMKZDEUPTINYCTSTWLJKWBKREFOTWVPBMSYYGQTHMDBSVDWCLKWPSAEGUHLDIPLYFKE");
    tmp_tmp_msg_0_0.type = 156U;
    tmp_tmp_msg_0_0.access = 117U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JNSCPBXGJFFAEEAIFLXPYSIYPOFREOCTCEKFWPGMDAGBHNBR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ARZYUDFWRIBOVLMCGZXGRPIVQMLBLMOSWYIUSXMSQRXPNZRBZVNTUSCKCEQYWDTEEPDBJWALPYLNXXNHGVMDSFLVOEWPZLJONJHEXPSVAJFIOHDKAYBEQIQUIPUSBJABUVZOXARLRKXFDSDEJLWTSAECGPOHZYTGBUKQQMHQHFHDHWJTKW");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 19255U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.7905965277414284;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5122312021722377;
    tmp_tmp_tmp_msg_0_1_0.z = 0.4154394916525872;
    tmp_tmp_tmp_msg_0_1_0.z_units = 180U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.212766419982235;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 58U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.8190223968612664;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.4262642381273417;
    tmp_tmp_tmp_msg_0_1_0.width = 0.18063366544653237;
    tmp_tmp_tmp_msg_0_1_0.length = 0.02942945697142363;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.6115437252189339;
    tmp_tmp_tmp_msg_0_1_0.coff = 234U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 166U;
    tmp_tmp_tmp_msg_0_1_0.flags = 38U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UDQQXTFRAFOVWCPDNDHBBEKODW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ONWFTYQBMWIDWCRQSBTTYXPYMBZLBQJUMOIAUMOEDFRCTTUVLZLZWYOSMJNSSBWRQOEULOEZHLSRCJMNZLHUDZHJXRVGRRCOKCTKWVTQIGMSRKNWHGUZKQPFKNX");
    tmp_tmp_msg_0_2.dest_man.assign("JBLVMNXVEFNALFCYMVGKPQTCSDHIUBCYLYFHUUKRFDCDPPSHTGHJWOKVGNSXERNPXVXBURUCRCJSHYAGMMLTOFROBAMTSRMJTUEYWLIZWKDONSCTMRVERGGZYUTHNZQCIHLGPZKIQIOUWKLXIVWPCRBLDJXXWDSNHOKQSPMECZYKPFOGIYKTPNHWBAIBIFWLBDXDBHAIOEGAVS");
    tmp_tmp_msg_0_2.conditions.assign("PXUAZIDMJZHFSJAYQYKWOAPEU");
    IMC::CompressedHistory tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.base_lat = 0.8184772388677087;
    tmp_tmp_tmp_msg_0_2_0.base_lon = 0.9122510918309359;
    tmp_tmp_tmp_msg_0_2_0.base_time = 0.7313465538569637;
    const signed char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-21, -113, -74, 86, 109, 100, 123, -1, 103, 124, 5, -8, 31, 10, 100, 58, 92, -90, 12, 80, 52, -19, -66, 12, -101, 102, -70, -113, 46, -114, -32, 111, -29, 96, 102, 84, 19, 12, 76, -73, -60, -75, -51, -43, 10, 28, -70, -107, 6, -79, -32, 108, -119, -110, -53, -15, -45, -124, 114, -21, -66, -29, 27, -69, 113, 51, -31, -45, -66, 120, 32, 74, 96, 68, -78, -26, 67, 11, 1, -32, -94, -27, -3, -125, -58, 9, 75, -58, 28, -11, 29, 58, 65, -23, 82, -63, 56, 39, -122, -57, -113, -27, 83, 6, -40, 63, 86, 126, -38, 45, 80, 77, -22, -98, 51, 92, -42, 93, 96, -5, -58, -20, 109, -125, 62, -80, -106};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.22962964528772933);
    msg.setSource(31375U);
    msg.setSourceEntity(35U);
    msg.setDestination(48588U);
    msg.setDestinationEntity(146U);
    msg.command = 237U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SYIRNKBBDYOCXDXJATSZDZAROUFXTLKMUCJBNOSASKCXGYMHMNHXIQIFFZIQGVKYJSTAYWHMQRGJLWJZRIMSUELTLAGXEVGOUALVKURZLGXNBEVIHNVEFTWRKILAWNISQFQVIUWENHFPKEYDMFBZPFCRJPVDWPTHMFHPBKLJUNPDZFODKGVBQJYIYDMTQLCQZWMUOQQSDRWVZPOPG");
    tmp_msg_0.description.assign("RRZDOLRCFEAYUCWZLFXDCIPHFXTJPLYBNNTKKMYJREBRVCEHWBWUMYAGKIGMGVIJIWBTOAQVJQKHOOEOVQODJTYBVMAMIFMGZMPUKEAFASTXBLTWKYCILCRFE");
    tmp_msg_0.vnamespace.assign("JVNHGWZRHTXYEIAVOTUDPFGTJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HEOFAOYSWOWYTBZGQFQUVSJEQKCLCZDYXRDZYEOQKIPAXIDPIAFKMSDZTQEFOZVMCZEJVCRJELBOHCJTLBLFVISSIXRHGGKGBEVUPYGXKXKIBNCYNUYPMGFKMY");
    tmp_tmp_msg_0_0.value.assign("QUGSJWOWSCAPDDUCAPDDJYZNTCSZAWWQVPKFYQTHFELRNQOFTEIZYGBJSXKFQWHPDRRBXLVLEELRVQJOITKSCWTVOOKRQKCMTMIVHS");
    tmp_tmp_msg_0_0.type = 117U;
    tmp_tmp_msg_0_0.access = 43U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZHRTVVRQKEEPGZRHZUVJKIPWWHQCYYHKAMZEBBADXCONBFWOGLFBDMWCNXFQZNQSLUCJVOZZNYRJXOOAJMGEMTUX");
    IMC::GroupStreamVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.7144646981066055;
    tmp_tmp_msg_0_1.y = 0.15756534802086608;
    tmp_tmp_msg_0_1.z = 0.9614846015972857;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.8580489288144052;
    tmp_tmp_msg_0_2.y = 0.6563139597166753;
    tmp_tmp_msg_0_2.z = 0.12137308979497086;
    tmp_tmp_msg_0_2.k = 0.9289560852376775;
    tmp_tmp_msg_0_2.m = 0.46889124801855764;
    tmp_tmp_msg_0_2.n = 0.2867030691499267;
    tmp_tmp_msg_0_2.flags = 75U;
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
    msg.setTimeStamp(0.4127716944195512);
    msg.setSource(27048U);
    msg.setSourceEntity(11U);
    msg.setDestination(10178U);
    msg.setDestinationEntity(66U);
    msg.state = 244U;
    msg.plan_id.assign("FJUYAXTRLJWKXFNZYEBPGIROWJFTJZHUWRQAWDZMNLREMJCXBPRQWLNUCOZDKGRFGIWYPBBOPZSYCCGTXOYBKTIMHEBPENDSN");
    msg.comm_level = 76U;

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
    msg.setTimeStamp(0.49039674652761234);
    msg.setSource(28837U);
    msg.setSourceEntity(243U);
    msg.setDestination(43354U);
    msg.setDestinationEntity(133U);
    msg.state = 48U;
    msg.plan_id.assign("IVEYEGPNYCNJLHXXAADZMYHVLLHTYBGPR");
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
    msg.setTimeStamp(0.2887984858664914);
    msg.setSource(42841U);
    msg.setSourceEntity(101U);
    msg.setDestination(19204U);
    msg.setDestinationEntity(175U);
    msg.state = 79U;
    msg.plan_id.assign("ANZTZUSPSUGYOLLBKGKAFECQSWAZDBPYBUUWKGMVXRYNCUTATZHQPFKTNFPODVNLBDFJOSGKVWMIPJHXATCUYZEPOQPUEODHMLAQRHVBNGHJAMSIEBCLZQUTEHLBCKPCJVCSRPSIXNWEXYVXH");
    msg.comm_level = 128U;

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
    msg.setTimeStamp(0.18179233406247275);
    msg.setSource(49811U);
    msg.setSourceEntity(215U);
    msg.setDestination(11769U);
    msg.setDestinationEntity(111U);
    msg.type = 173U;
    msg.op = 69U;
    msg.request_id = 243U;
    msg.plan_id.assign("SDNZRTSNIXVECVXYXLVCZYKSYBZUCUVRQRRSFGUAQLGPTWOSPFRIZBYKZLZTHCEDLHNNIEQJPPIPNDBZSFMVIOXAGMWRTQBWXJZKPHKOUNWSLOTJIJKB");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 3573U;
    tmp_msg_0.lat = 0.14469682002276996;
    tmp_msg_0.lon = 0.33024680482583546;
    tmp_msg_0.z = 0.49883557266026335;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.speed = 0.5986671202478869;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.bearing = 0.04899616603101087;
    tmp_msg_0.cross_angle = 0.3497194970631997;
    tmp_msg_0.width = 0.2621917569579383;
    tmp_msg_0.length = 0.5491633880584444;
    tmp_msg_0.hstep = 0.8874629367701342;
    tmp_msg_0.coff = 138U;
    tmp_msg_0.alternation = 14U;
    tmp_msg_0.flags = 128U;
    tmp_msg_0.custom.assign("OGBTADPHPLZKGMXGWAQCEPRFCFUYJHXWELSSLFFZKCSGCFSGTYWHULJGLBMBYEXOOOEOZHBCUNPITSPYTSWMKNPVTBVVWWGDVOVRMERABBVBYARIBOWTUUMRILKNUDDICFQNIHEQMCDRJMJVLRGWYMAKPOXEHEMJZNHISCQWIPVYFZIKSQZSYQJHUWJXAZGKCDQHSDGINEUZJCPRUKQMOTAVZTXHXQRPZAAL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WUQETOZQODALVPZKPGPEZTCRCJHPBSZNFMZFPMZKEUNSVHSFHQKCVXXHFXPLABJQWBGYMVLLWODNSWNUTQYZPIGJLGORCMAMKCIUTKYPRCAGRCPAYYTEYNIVIYWSWCDXYHOVBNJIFXOKJTSBILDDXGIWWTAEJRRSJVAHMJSMPF");

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
    msg.setTimeStamp(0.6361209451445083);
    msg.setSource(56641U);
    msg.setSourceEntity(228U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(217U);
    msg.type = 192U;
    msg.op = 11U;
    msg.request_id = 36070U;
    msg.plan_id.assign("GLYNWXQDTAIIIGBAEOEKPNCUVWEQOOQMK");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("KUGMFYKXZFPRAGWDMKSELZNNITJUMGKGSAQZFZMCQBOBTJWNDBYYXGMJVTMJEIOVBRMHVQFNKCKCCUDXIYDOLONUZMLOASPGLLRCWPPEUEQRTVPPDRDUEXYAISNTGKDDWLNHLXYSCOSXCZNJVANSQTCBFUHG");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("CHYOSDKQUNHSTGJBPOKWWTRRDTQDZQDYEWBRZRLXVKIMCSAJVGGPWPDLMCCOAWTGGBFNRUFKMKFVPHSIZAPUVIQNHFXBQLDWDKXAHSAQIPYEOCJKBUGETFUQZXRHFGAWDTCJYMJPMXNJVQUNBFLCRZIZKTOJASJUBKIVZSMIJIMNLRYHEFPTFZXCYKMGQAXMAISTOHEUVGEBEXOHFEVYYYALZLXNWBWNLRLOUDOUWONRXTEPSZVPC");
    tmp_tmp_msg_0_0.sys_type = 243U;
    tmp_tmp_msg_0_0.owner = 5264U;
    tmp_tmp_msg_0_0.lat = 0.8530132721185348;
    tmp_tmp_msg_0_0.lon = 0.6561621279429296;
    tmp_tmp_msg_0_0.height = 0.7136555814072304;
    tmp_tmp_msg_0_0.services.assign("LMKBXEBDEVAZDUIQYOCHTXTDKYZUQOZBFUIFKJUORRPOKEMAJQIPWXLXSSFEFOIMFMYG");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CKRCFGNWLVMCYEGYZAOKQDBEFXBIDTFSYUJAWAIRQOSFKXYPDKKGQKWQQHJTMOBVIOHMTZGLBJDAZDBZUIAAUPVCOPYLLJCXKRECGGXJMLWHHNNOXUUQXYQIFYVDZFPAJPTMYIOHEELLRFGJPNVSGKMUDVWRHLPFXWSNHARSTEMWOZZSLBPWRDLUNCTIPNYXJQMSUDRXJXNR");

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
    msg.setTimeStamp(0.08344084733125112);
    msg.setSource(45223U);
    msg.setSourceEntity(183U);
    msg.setDestination(37604U);
    msg.setDestinationEntity(44U);
    msg.type = 125U;
    msg.op = 83U;
    msg.request_id = 12558U;
    msg.plan_id.assign("MAPZHNSEYVLHDPVQVNUBYITIZZKLKOFLMMRAXROUAB");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("GHXXISZRSSBFBDGLYOHOKOQUWICNSVUHRYTOJGFVUEMQYRSTOGFSDSTMRNVAOIPLBJLBVNYTNNXIRC");
    tmp_msg_0.timeout = 60480U;
    tmp_msg_0.contents.assign("DDXTRZEDVWGRKUVEVASOLFYXPVBWPUNFAOIJVIDKNWZLUVGJESTCJSKKBBPJDFRAQHNNWHOMEOXZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SXTPURNKKQHFVVFCVTDEDONYYYBRWZMBXPBAONMIURFAKAJZLXZSXOHUOBERHGWCOPXIRKVEXQWBTXLSQEDHMDAARHYPAQMETXCSWENPJKOHMIPGVKQYWNISJFULETOLDBJUZYGDMBOTOFGCEFMRPHKVCQZVMARNLIHADJYANWUVBGYZAGQIWWJWDQCSGIPYUICUZZBSVCJXCPSFGNQEJMBLIEKFNMHTLDSXOFLSTKT");

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
    msg.setTimeStamp(0.30560559096943674);
    msg.setSource(47779U);
    msg.setSourceEntity(130U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(83U);
    msg.plan_count = 10762U;
    msg.plan_size = 2498003434U;
    msg.change_time = 0.19162988053611807;
    msg.change_sid = 23540U;
    msg.change_sname.assign("LPLGMKQIHINLQKIVWARJSUOXDEUJIQNIJDEFXAAPURQW");
    const signed char tmp_msg_0[] = {31, -54, 12, 17, 80, -92, 62, -11, 120, 106, -95, 89, 86, -7, 88, -116, 55, 27, -82, -55, -85, -30, 16, 0, -101, -43, 72, 91, -32, -49, -40, -36, -1, 89, -46, 1, -16, -12, -37, -85, 47, 90, 25, 56, -102, -91, 18, 21, -81, -58, -52, 23, 62, -108, 118, -74, -20, -78, -101, 85, 89, 57, -48, 107, -87, 2, 105, -19, 0, 107, 8, -72, -104, 47, 110, 42, -113, -43, -36, 5, 124, -105, -4, -84, 76, -77, -37, 85, 38, 122, -42, 102, -39, 74, -72, 66, 72, -93, -5, 7, 94};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XTMVCNBZULGDNDIHRGFFXZXOOANUWBGVIORYNSPZRJHYMSUHTTTDTAJZKXGJFMGWLKGZPXXKNBDMAQEQRAWUOQPSCIYJYBFGRP");
    tmp_msg_1.plan_size = 2902U;
    tmp_msg_1.change_time = 0.8551850555430274;
    tmp_msg_1.change_sid = 54021U;
    tmp_msg_1.change_sname.assign("NJGWAYCQJPGBXFLZPUAEDGABECDKLFYJRCBSHWHPFLIBOR");
    const signed char tmp_tmp_msg_1_0[] = {-26, -20, -106, 17, -94, -39, 0, 27, 56, -85, 91, -39, -41, -112, -125, -128, 101, 41, -90, -42, -73, -11, -106, -120, 4, 35, -118, 56, 15, 57, -74, -39, -22, -3, 48, -80, -62, 126, -8, -20, 86, -124, 13, 112, -127, -48, 64, 58, 63, 116, 28, 84, -78, 22, -111, -40, 76, 40, 6, 66, -88, -8, -72, -38, 27, 98, -40, 2, 87, -26, 55, -102, -57, -11, -126, -44, -34, 27, 95, -112, 68, 48, -32, 57, -82, -95, -2, -46, 54, 48, -120, 22, -21, 35, 100, -93, 52, 89, -4, -125, -97, 123, -29, -71, -51, 109, 9, 111, 22, -112, -122, -82, 119, 95, -15, -98, -23, -82, 120, -127, 36, -92, 36, 56, -99, 87, -93, -84, 38, -20, 12, -72, 69, 86, 58};
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
    msg.setTimeStamp(0.7790519589201712);
    msg.setSource(58981U);
    msg.setSourceEntity(247U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(59U);
    msg.plan_count = 25599U;
    msg.plan_size = 3370765860U;
    msg.change_time = 0.1471553547761063;
    msg.change_sid = 55234U;
    msg.change_sname.assign("RVMOZXNXWESOONZKBNDSEGYKEZTBMNYEEPTLXTTCFRKOCVGHALIDMVFGLSUDPPQHWGLGQKSYSDIWKRDVGIQOJLCWYJBTWCBHPCIFXEHMPMYLYHFBMYEYCVXXMUERNPS");
    const signed char tmp_msg_0[] = {32, 122, -113, 112, 0, 60, -92, -119, -52, -50, 80, 33, 100, 13, -71, -23, -119, -4, 23, 53, -112, -94, 81, 22, -82, 49, -87, -49, 113, 119, 85, -127, -32, 35, 65, -93};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SGTZPOFUKGVVULIQRQPYJRXQTQZSFQSFGCSRPZOFPNIDZJHAOHFNEKSZNHCIYZWORXUVVJUBPGEYWXHTJCKGFADABKBOQDHDOYZGYXUKHFXHVXLMGRZWLJABVWCSCYFRDYYGFCPNIH");
    tmp_msg_1.plan_size = 42795U;
    tmp_msg_1.change_time = 0.22722447431111115;
    tmp_msg_1.change_sid = 18849U;
    tmp_msg_1.change_sname.assign("VMDRCJQNDIVOBGMPFXHPEFKLSSKPMGLVKPNXGZEOITYPHPKBUSLNFFEXXRSULJVYQMEEVSXBALFPUAUTWEDVZFYZRXUDOGGSLGFJYWNTCIOLKKEDJROTXFZQPABZEATVZUOZRSKSWYIUVRYGCHJXJCCKDNRJWH");
    const signed char tmp_tmp_msg_1_0[] = {-32, 105, -94, -115, 10, 64, -14, -68, -111, -48, 62, 49, 13, -87, 101, -83, -4, -69, 88, -19, -73, 37, 106, -120, 40, 13, 57, 26, 113, -12, 15, 30, 94, -46, -33, -54, 102, -124, -93, -68, -89, 36, -83, -26, 73, -12, -120, -123, 97, 22, 72, 117, 104, -78, 82, -65, 124, -2, -74, 115, 124, -65, 89, -4, 23, 30, -37, -83, -97, -15, -57, -96, -103, -50, -17, -97, 111, 83, -114, 76, 41, 33, -8, -115, -50, 50, 33, -84, -25, 109, -52, -84, 108, -1, -17, -118, -44, -1, -67, -63, -82, -55, 83, -28, -52, 39, 27, 43, 114, -54, 75, -72, -68, -121, 121, -84, 98, 103, 121, 79, -110, -45, -29, 23, 5, -93, 42, -25, 10, -18, -114, -24, 115, -111, 85, 59, 27, 68, 102, -107, 98, 63, 72, 97, -32, -23, -99, 34, -6, -19, 124, -59, 43, -24, -103, -122, 111, 117, -57, -42, 27, 9, -92, 1, 56, -42, 7, -28, 18, -67, -29, 92, 110, -25, 56, -30, -124, -36, -2, 112, 96, -73};
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
    msg.setTimeStamp(0.13152800615582183);
    msg.setSource(24782U);
    msg.setSourceEntity(168U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 7846U;
    msg.plan_size = 1412278610U;
    msg.change_time = 0.9603137404590373;
    msg.change_sid = 4733U;
    msg.change_sname.assign("OXSRKTPXVYLUOAOJRVAFZBCYEQFGMLGEG");
    const signed char tmp_msg_0[] = {-4, 105, 15, 75, -80, -79, -78, -56, 108, -128, -42, -84, 69, 36, 107, -117, 84, -74, -119, 59, 69, 7, -1, -86, 64, 39, -111, 15, -119, 54, 124, 25, -27, 9, -107, -106, -87, 12, 96, 80, 24, 86, -126, -71, -95, -29, -45, 16, -11, -20, -71, 26, -92, 123, -59, 47, -125, 29, -87, -29, -5, -48, 9, 53, 6, -25, -54, -39, 74, -25, 35, -63, 2, 14, 43, 34, -103, 115, 119, 113, 18, -128, -25, -53, 68, 23, -33, -59, -42, -103, 39, -121, 114, 61, -7, -101, 7, 31, 121, -85, -116, 111, 67, -37, -58, -10, -48, -57, -68, -59, -78, 36, 84, 67, -80, 87, 84, 57, 12, -18, 65, -97, 1, 94, -119, 84, 41, 9, -102, 64, 75, 34, 58, 121, -26, -124, -12, -126, 43, -91, 94, -105, 76, 32, -40, 118, -110, 62, -61, 24, 13, 51, -54, -99, 16, -56, 25, 126, 1, -24, -31, 17, -106, -74, 84, -64, -67, -40, -36, 100, -106, -124, -44, -115, -107, -20, 106, 108, 54, 62, 47, 62, -108, -124, -95, -84, 98, -46, 97, 66, -111, 21, -77, -47, 91, -38, -115, 90, 2, 106, -124, 101, 7, 106, -9, 37, 88, 123, -58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GFSDWDYZNPXZYSZSWDGFLZWEXWFGOHRTHKCRVHOHCZXIHOPIGUICLXJCTIKDHCYHPMNUKQDUAPLKRBQGJOLBTQOGOARKMLLTECMIZJVVOYTNCHEVGIEWSAOUHZEXICTNNQOWSJNYMKMJJPXPMYEGEDSXMKMRXEIMYLZREKQTWLACUQDGDFUQSXIKAQQJSNQPJZFPTOZALSHBUUEDBBPVWAUX");
    tmp_msg_1.plan_size = 24393U;
    tmp_msg_1.change_time = 0.5048391098070912;
    tmp_msg_1.change_sid = 43645U;
    tmp_msg_1.change_sname.assign("KAPQYEQRLDHDLPUOTCBRLVSAGORJSEFBYCWLJUFWGCSUOEFFTSPZXTIPTKWIFMNLMJJLDKFIDOENXQ");
    const signed char tmp_tmp_msg_1_0[] = {19, -94, 33, -1, -120, 102, 110, -87, -91, 92, 56, 62, 86, 80, 85, 52, 67, 0, 26, 76, 109, -52, -90, -58, -73, 19, -116, -55, 85, -84, -123, 59, -52, 78, -106, -76, -44, 26, 71, -58, -120, -46, -34, 86, 70};
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
    msg.setTimeStamp(0.7047721501108148);
    msg.setSource(60173U);
    msg.setSourceEntity(103U);
    msg.setDestination(43021U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("RVASOMDJDNMIFPHQZEQXAXDLQCZUIXVNQFDMIUOQRDHVROLFPYBPHKKZJMTBXBJZKSBENIKWFFACNAUIGWTBWWAAJSROTUBPMPUOLVXKNXXUXYGWJZAFVPONMGQUKVYKZRNIHJSLXBQLEYRCDEBLWFGVUGEPNVGKTDJD");
    msg.plan_size = 18011U;
    msg.change_time = 0.7135899058851631;
    msg.change_sid = 30986U;
    msg.change_sname.assign("JIZDTNUDCOZPNXMXTGODJBEVTYODEQKJAGZBTGKQFJEMHJRVDJOYPPRVINPSUPRDMHQLTCYLJSTLCOXNFHSKKGAYFADFHLCSQWUZGBFCEGQTUYSHBPAWBTQKXMMNZSEKBXQWAGFNXMOHJUCEGDZIIUVCWONVIIXRLZWNLLSWQNPKSMWEHYVHWFRASQBTKYIYFLRBPJ");
    const signed char tmp_msg_0[] = {-121, 108, -118, 112, -82, 72, -49, 42, -23, -117, 16, -71, 109, 53, -27, 29, 24, -49, -44, -112, 0, -44, 29, 27, -90, 51, 116, 121, -45, -109, -28, 111, -104, 108, 94, 86, 83, 12, 89, -9, -89, 11, -82, 17, 119, -18, 80, 35, 92, 126, 118, 57, 100, -6, 106, 18, -10, -86, 113, -69, 61, 71, -19, -27, -4, 106, 44, -113, -46, 20, -81, 51, 22, 59, -18, 110, 125, 52, 51, -21, -41, -74, -17, -104, -28, -36, -10, -103, 20, 27, -53, 76, 106, 23, -68, -53, 46, 101, -17, -117, -91, -125, -23, 73, -99, 106, -120, 63, 17, -67, 109, -108, 19, -63, -126, 55, 107, 83, 28, -70, -17, 13, -109, 84, 36, -106, -121, 4, 67, 6, -41, 107, -100, 73, 104, -4, -17, 25, 96, 18, -113, 82, 117, -95, -17, -16, 27, -87, -59, -75, -126, -98, 122, 80, -14, -88, -99, 33, 108, -87, 97, -112, 106, -86, -76, -51, -74, 58, -79, -80, -87, -107, 14, 105, -102, 77, 53, -94, -40, -59, -99, -103, 87, 78, 125, 23, -47, 22, -56, 114, -123, -105, -58, 59, 40, -69, 124, 65, -32, 59, 20, 57, 125, -65, 59, 118, -105, -3, 74, -76, -111, -10, -21, -63, -102, -124, -18, -84, -89, -84, -127, -112, 72, -25, -7, 57, 18, -64, -84, -124, 19, 99, 92, 21, 62, 56, -35, 59, 75, -123};
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
    msg.setTimeStamp(0.1182738059862718);
    msg.setSource(32751U);
    msg.setSourceEntity(251U);
    msg.setDestination(2777U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("VOROUXDMESIJGQWLKAGLPWXLYCNYRZSENINCYTOISOBWUJSWIWATRXDXMZLZAAYBVJFBBXZKWJOJXGGXZDKTDUKKEQULWDQIADKMTMBWIBGORZCSYHGFCZYNCODGTRRUJACOLNVRZTKSBCGFPQMOPZFIL");
    msg.plan_size = 37238U;
    msg.change_time = 0.17635345202668717;
    msg.change_sid = 29354U;
    msg.change_sname.assign("PFUAXLDOHHPQBOVYLXAVQJKJECIWATIEPHHELSSBAPCVVZMIGLZZJJGWYUGNYIGQRMPGLNLHCOKWSOZRQFVISOKAYJKMCMJWFCVDWDUQGTEJFRHTXCTKQGHBFSTYGOYZPPNABFZUKLIXLWUDXHHOPENENXNGXWBJNPAWCEYDLKKROMTEZEBITVXRUUUMFWLBVXMVRMDZBKRNTQMDBDCJRZDYQUCDSMXKOJAA");
    const signed char tmp_msg_0[] = {66, -74, -54, -34, -71, -82, -1, -111, 21, -53, 30, 97, 79, -60, -88, -11, -103, -78, -57, -6, -73, -61, 50, -113, -100, 98, -111, 77, -6, -46, -4, -110, -51, 30, -22, -82, 110, -4, -36, 118, 22, -111, -7, -70, -119, -91, 2, 16, 101, -18, -33, -86, -29, -23, -120, 74, -9, -123, 54, 80, -64, 10, -96, -103, 72, 58, 99, 52, -39, -9, -111, 59, 5, 81, 70, 58, -43, -39, 90, 115, -61, 95, 117, 87, -126, 15, -17, -8, 39, 44, 120, -103, 79, 103, 62, -82, 30, 44, 72, 25, -126, 79, 33, -4, -103, 12, -44, -52, 37, 83, -43, 75, -113, 10, -102, -19, 41, 40, -28, 72, 37, 68, 112, -124, -29, -93, -1, -107, -29, 15, 43, -28, -121, -30, 59, -22, 84, -89, 10, -116, -72, 25, -1, 111, -106, 122, 121, 31, 87, -3, 36, 43};
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
    msg.setTimeStamp(0.3073101696302316);
    msg.setSource(40120U);
    msg.setSourceEntity(248U);
    msg.setDestination(40812U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("HZHCMAYPIGHNITPBHDVORQ");
    msg.plan_size = 3154U;
    msg.change_time = 0.2328879038371715;
    msg.change_sid = 17274U;
    msg.change_sname.assign("LCLGRAXUQSPCWMPTPDYIWYSLIIZEORGHVCHAEGVMAFQSAUJHIAZKZOGAOTWFPMMDBZLIZTWMSDKXTUUYJYLYTNEKA");
    const signed char tmp_msg_0[] = {5, 102, -59, 126, -41, -61, 110, -64, -53, -124, -80, -124, 83, -119, -69};
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
    msg.setTimeStamp(0.10206687961233829);
    msg.setSource(25670U);
    msg.setSourceEntity(183U);
    msg.setDestination(43171U);
    msg.setDestinationEntity(117U);
    msg.type = 198U;
    msg.op = 232U;
    msg.request_id = 53381U;
    msg.plan_id.assign("ZCAYBRBLOQJFDUYZCOQQOTLNBTJEOVPKXEJIDEJWXRUAKURONVUEJVGGBULSRJWCJCABXGADDTIGKHEAMLALIHPSDKIYMHZNKICDYIVHOMYTITNZZAMPNQKJSLLNNSTEGCYFQZPVEVQCYHFWKHISYUMGLKIPRHUAMPXWQPHXWQQGUZFVZRFJSWNXLCEMTDOXUNAFLNZQS");
    msg.flags = 38324U;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 33383U;
    tmp_msg_0.x = 0.1700159864165054;
    tmp_msg_0.y = 0.3570079258088169;
    tmp_msg_0.z = 0.6441941774287928;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHJGJPSDWPYZSOMFVBNOKYGECNPBNKTWDRKPZVDLLAXSMCDUFZIRNGSNBVOWIGTQZUFEJEOGOXYUXJGNIBSOFWEYNIJVMZJVMCEKKHPKB");

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
    msg.setTimeStamp(0.6278292920797871);
    msg.setSource(4691U);
    msg.setSourceEntity(191U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(109U);
    msg.type = 88U;
    msg.op = 167U;
    msg.request_id = 34522U;
    msg.plan_id.assign("QTPMZQVFCIMJVIWIFNLEBWVWEDMHVQJFYEOJUDSKHLZOYTGMCDXLVGWZKWKYBSOHIYAJCHARXDNXBXCEJBKZJIPRLBACOGZSGGLCRRSSYTGMHAJHLQQENCENHZWXYPJGTCXPXAOIOFHFWRGQUFHLMRAKVNYAFBWHVCNBSKFTIDUTOWTVUUQDFNBSEABGYERIREMXOUYVSMTZKPUJZSLRM");
    msg.flags = 53331U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 195U;
    tmp_msg_0.op = 56U;
    tmp_msg_0.plan_id.assign("QCYQHIHRHOWHVQDDIHTPFQXVHCTZUKNPEDZIRDWDBOIIFUVZRLKBBFOMNKFQBJIELAONAJOGKIMCZUZUEWOTTSZCIPENFGFBCGREZSWOJWEPYCKLYCIXBAEGYDAFLPWXNJEFGLTUPCRXSPXUZMXQHMSYSPAQXSRMXUJKMFSWOKAGRLQQHOGVBAPCLDNORELWUGYRSUFGXBAVTMTCTYLVHKSWDKJVNSAJKVUYBNAMDLTWV");
    tmp_msg_0.params.assign("FTYKVJFYZRJYILXISCMDSUSERXVEQUTYBNKECNRMHJIBVDNEPXGVAFQQZIAKODPUZXLNUMMBPTSFOKTLGTFDZDAYFCUWLBOZPNELWZGOSRLCNHQZDHTTMGHKMBNZHYLUIBRISTYIRXCSWOGSECXUHGIYBFJOBRPGHWYNVPBWFTMGKAEHMCMEPOQQKQPMWVOTXKDPIEJIWQQDJOANRVNVWZRG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XKKYBDEPLTKBOSLMOVHAGLWONLRUUBYDQXUNMZPZGQIGCYEBUZQLFTUZPJFDZSWZCXXWGIILWEIZLIYGVBQKKKIJBHYRCJDBADPXVRJXLAFZJARHPCGCWMRXFVVHGVCDJMNAEMZVIAQSMGENEADGS");

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
    msg.setTimeStamp(0.4928284605672705);
    msg.setSource(13494U);
    msg.setSourceEntity(22U);
    msg.setDestination(3314U);
    msg.setDestinationEntity(220U);
    msg.type = 52U;
    msg.op = 70U;
    msg.request_id = 23550U;
    msg.plan_id.assign("RNRBMMEXGRZRKNJDVMUEYXFVNXOFOOBMCNJXQWSVZWFKBINSSQHDHEHXGKXCAWQZCPEJZJHOEAYGU");
    msg.flags = 585U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1264907745U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TJSYAJUMVQBUQGBMQIIDSDXPPYJBLWXVSJFOHEAWJRGJWBICZBTIGZHQHCPSXAUOFYYZTXMGTRUVQWKHXBVLKIYLZHDMEKUEEIHEOQMZEXGDONTMQRRXAFVFLCRRCUCAGZJMFADINNPYSMVZYFKOBHSPBIOFRVHNDSXBCFAMSNNXEJFDQGLIVKYRSQWRCGWHCPTOUKJFNWUGPTZLBKGKADCLYNLNXVWZRMTTOQEYLHDPEAKKJLVWCPTOSDA");

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
    msg.setTimeStamp(0.5051986148251361);
    msg.setSource(18826U);
    msg.setSourceEntity(65U);
    msg.setDestination(61006U);
    msg.setDestinationEntity(5U);
    msg.state = 127U;
    msg.plan_id.assign("YOFAOLOJHPWHRVLOKMTVSKAHYZYTLBZQBOWXMDJYAEBUQVGUXKUVVEGRHPVNIMZSGQCLZSSVJVPKXANFCLTEPAXZGSDWCENUKMJIVRTREYEM");
    msg.plan_eta = 1938084390;
    msg.plan_progress = 0.7815077823860479;
    msg.man_id.assign("QBYBOHIIRRJWAHETGIRYPBMJGYEISXXRZNIASUZRMCHQGCFGQCOWSDZWHULEFMOPVLMMXRWTFXVPXBPOZEHATHKXMSNGPSSPPIABFZJFJZVFXIOALCLANWCRVCZCDVGPKOBMHUAZVBHMWDTDQQJNWTHOQGNKGPNZVNWSYENDBYKUWATUBDJKHFMSDUERJYFCIOUQLZTERNKJBFNGIYL");
    msg.man_type = 3970U;
    msg.man_eta = -267561040;
    msg.last_outcome = 60U;

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
    msg.setTimeStamp(0.06696855260900059);
    msg.setSource(6870U);
    msg.setSourceEntity(218U);
    msg.setDestination(50576U);
    msg.setDestinationEntity(57U);
    msg.state = 127U;
    msg.plan_id.assign("DTOKRVGSHGEJAZYBFSYUXLWQPAVEKVQUFZEWPPYASDCNTIQVPRGETOBLWJLHAFBQXDFHCUMFLTAGICOBYCLPSOKVSZRYHQQWOQKKRGWPJPONGMHAVVUQWIESWLZIXZZRUFEMRMLKUYTPWOFQKZXRCREYDIGFZMICZDSXIHINYNJMPVEOCIOPUHAGFCXYMDXNUKTJCVBJTRXLAEBBGOBMRWQFJNWYGLZHSNSMKUTNJHASDJMBXNTJVTAKCDIDEN");
    msg.plan_eta = -2004672143;
    msg.plan_progress = 0.3790044049229365;
    msg.man_id.assign("AEFQHHPCJJXPBRFQHOBWAPAKOESQICUAFEGBOWKZMCLWMWIJBOLLRZOSNJZTIXDGOQHYQRNBVAGMLUESVKAMNRHTNDDPOXFLFYGJ");
    msg.man_type = 58U;
    msg.man_eta = -766153571;
    msg.last_outcome = 92U;

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
    msg.setTimeStamp(0.8450157395952933);
    msg.setSource(49260U);
    msg.setSourceEntity(199U);
    msg.setDestination(23381U);
    msg.setDestinationEntity(88U);
    msg.state = 112U;
    msg.plan_id.assign("EOLGCLDNZUMXYFDBYQVDZCVYUVBSXPMUMDCHQNMFGNUUOPSWASTVAFNOYAXHTKULHGSLBCJTXNZSLDAIDENAJDSTHKMANIGRTIFRACCQUGWNEKQRXFAWPJRGRAOZJOEP");
    msg.plan_eta = 1636079195;
    msg.plan_progress = 0.20482177032749405;
    msg.man_id.assign("SEBHAUUHKMHQOWWMRHYYFTGFJJANKRWUGBNJLAQAJNMDLYJLEPXCOIEVRRVBZMKMVKVCNGCFHXJDUBZTYBYZSFLYQQTWLRDPDGJODCEOEHXPWDEKTZMVOFSPPKEXGVQZTUZLTYZ");
    msg.man_type = 8036U;
    msg.man_eta = -1806508304;
    msg.last_outcome = 85U;

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
    msg.setTimeStamp(0.5855936233228464);
    msg.setSource(61726U);
    msg.setSourceEntity(78U);
    msg.setDestination(2541U);
    msg.setDestinationEntity(87U);
    msg.name.assign("AKRCUDAQZTWUOQGICQMFGQHMXISTFNNDLVCETFHIRCKSLVBTGPLZDIXCWXXEVVNPOJTALIYPDGMDAQDTORVQZCLZQGHMEQZYHUTZGNJKKEOPUNOJQBU");
    msg.value.assign("LYABTUYFGJDRPDQYSTNLJBKMQBPLTZBPZHYGJYDGUUJGDHVUCOTZGPLAYQTXMSEBSICNOEZMPAFBJXLDQLUMTDGYQQVGPVEXQKVVFKQJLXDHJBJFRWFEROGRFIPFRINENTFISYIWBCEPWTULIVXNHAXMWWLGMSCMZUHRACBXMIKNASNRACHVPDTEGZEXONHAHKMOUPTFMCKUVVKZJSEHWKIQWI");
    msg.type = 85U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.15030018721813487);
    msg.setSource(12449U);
    msg.setSourceEntity(218U);
    msg.setDestination(64003U);
    msg.setDestinationEntity(126U);
    msg.name.assign("KSBLZZQTOGAXLPLQIOGJSQCUQVBPRENILCRONLWQPQESGKEFIHXCZTVNPXTWPCDGARKNUZGEJFQFIMDOWMQNDYEKQGXRDUDCZ");
    msg.value.assign("LGTEXYEUCHMYXJRUNSXIOZNVNIBXYSFAEQEKYVKMIKBLBQXMQPYJNVQGGWETGLPSTOEUNAUWJVBSDEXLOIFGBKZRIPSNRVYAOAVUBRZQRRMWKCKQHIHPAOKBTDJUTDFABULTDOCCLWMNHMXUFHLQSELDXRWZSSKZSMHPNIIJWVUTWCARQNTMCPIZZSCCPAVLPRYDGZMDOGHJGTWZUHMYDTPFRWHEBDKZAKQOCCNXD");
    msg.type = 217U;
    msg.access = 23U;

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
    msg.setTimeStamp(0.5125637287043242);
    msg.setSource(53113U);
    msg.setSourceEntity(183U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(2U);
    msg.name.assign("HCACZOWTYWIHGRKUKZOTHYQFDNLVQHAKYPE");
    msg.value.assign("UUFOTELXLVANIYFTAEIHBCRZMWYROJQXQAHTKNKDLHOZITAJEMFPVALXBCQKSCUKWCSUYRNAYWVSBQNJVDVUVPVCBHUZCFMQDSUQFSOFZJOEZBKKEDZSHCLPTPIQTMXGDLJTZYFFDAOVSWRAQBZAKNWBMLGYYHPIRHNEGYSMHWXTPXGEMBOJUYLOGSBGIHRPVPDXZBLKPGGTIWPFRCDKWXQROYKNOLNEMEJVUIJHI");
    msg.type = 209U;
    msg.access = 91U;

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
    msg.setTimeStamp(0.99998813772239);
    msg.setSource(29456U);
    msg.setSourceEntity(187U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(129U);
    msg.cmd = 229U;
    msg.op = 231U;
    msg.plan_id.assign("EFPSUCIHAQATIGHXDCXXYPBFARVWQWIUHKWTDOZBDNXVOIMMYFMZQESEGBUPGUVOBXKCAFTEPHUJYLXWNHYPHPXZILJFULYCZNVPOXROJOKLIESUAGDJREDSUZROWMVTKQHAWNYBSLYYUOJAVOFWMMHTRUTNWAKCNCFVFDMJPQDGTTZERGBBVLSNFSBPRLSCKJMATPSZKBQYQVJDCIALQGWKSIHGDZFKGDKRMC");
    msg.params.assign("PWWZKLSVYSMSGKJEVHVIGNZJIPRHZPQOOQDAEZCMKSNKSJCFUUWUFDEIIHJEKTGEFLBSJLZTCHRYHYFAQWSQIYTXULNKWCPHAZNWNYNBXG");

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
    msg.setTimeStamp(0.6923009317524859);
    msg.setSource(35969U);
    msg.setSourceEntity(76U);
    msg.setDestination(39522U);
    msg.setDestinationEntity(143U);
    msg.cmd = 35U;
    msg.op = 249U;
    msg.plan_id.assign("IRDOBYPDGUEPIXLOMDAYEDCJLZSBCLOXSOAMGJTRZQEKPKWVAFIUUAHJJLMNXQXTETVFEVQMGHUWKAKVBAVFYXECHPPNUVGQFNYRPNULIBXELATGKLGCUSWJSNYFLZBGOVLVRMCCKQQRIDWPMDZJIFXHK");
    msg.params.assign("RNBBSMRCWTNVCCZSJKNIYUYALLJONKPLOLSYCDDSKAKYUZQUKLODWYDPUSQWYQNJDIMWTTUIXIHPKXIZYLNFLPEOZOCZVAEUIPFQQGVMDLJHCTTHTVVEXNTAZEAMBDYKROBIKVHNIMHTCUJOFGBEUGMEQCFUVDXJABSZZILRPHWFHPXWGJNCXSHCGRPRQEXQRGBPFAAFGVEOWGRDWGFJZMPDKBJMWMRBAOSMIHYZNLYBT");

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
    msg.setTimeStamp(0.236789282778192);
    msg.setSource(21610U);
    msg.setSourceEntity(149U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(77U);
    msg.cmd = 48U;
    msg.op = 37U;
    msg.plan_id.assign("IKADPDRPUQNZGNACVSVTCAOCFUUEAZMTOZHUCOQAWJOXNSHVFFTNQPGEADMBREXCRWYVUXNFQLJIPOHNNLRLBXO");
    msg.params.assign("LUVLKBWQJUXRSYWCMIHQLAETPSFWZVVDQQBEZXLFOHDCUPEAHYHUTAEKOZRTJRDZVFVGI");

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
    msg.setTimeStamp(0.5532494323842897);
    msg.setSource(31242U);
    msg.setSourceEntity(162U);
    msg.setDestination(6927U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("EKMMJNXJOHWDDGEWLNUTEMRGRWBNYZRIZTQDAMCLPRDJBPYKOTQYQAOSSXKSWQLAMHVPGJBIDIRPMJCUYJIOVLVWGIQPBCGEHGGBDCCDDKPYSQLXCVEOVTCDFHXMZNUUJKIUFXBPYUUZJRHO");
    msg.op = 218U;
    msg.lat = 0.6883154256089854;
    msg.lon = 0.9887650893619221;
    msg.height = 0.33791095663215165;
    msg.x = 0.95964471707725;
    msg.y = 0.5889299321015539;
    msg.z = 0.9302216968227749;
    msg.phi = 0.23038454395580366;
    msg.theta = 0.18175948389605234;
    msg.psi = 0.5937093741210806;
    msg.vx = 0.28188234896861253;
    msg.vy = 0.6284824610504438;
    msg.vz = 0.9967069786046309;
    msg.p = 0.270894526625049;
    msg.q = 0.7684834429304686;
    msg.r = 0.6721183090774375;
    msg.svx = 0.3211280974180094;
    msg.svy = 0.7585741826050911;
    msg.svz = 0.44398276460406616;

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
    msg.setTimeStamp(0.6080616703955002);
    msg.setSource(28812U);
    msg.setSourceEntity(239U);
    msg.setDestination(62025U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("JPGWFKBPNGGTURQHLABKSFJMRJGKJMOEXSQPWNLTPNZSPETJUYQUUVCTFUOINJNHXDEBDSRCSE");
    msg.op = 55U;
    msg.lat = 0.946587768725105;
    msg.lon = 0.7778019716724314;
    msg.height = 0.6744315527369288;
    msg.x = 0.09935355439734028;
    msg.y = 0.7428176074311769;
    msg.z = 0.40471775049148695;
    msg.phi = 0.2832503449834669;
    msg.theta = 0.7676235262513588;
    msg.psi = 0.6842591837515546;
    msg.vx = 0.81162451807431;
    msg.vy = 0.3106596928679305;
    msg.vz = 0.029506142720785666;
    msg.p = 0.9427060367354354;
    msg.q = 0.3309865271218979;
    msg.r = 0.6659827792348771;
    msg.svx = 0.39499998737117603;
    msg.svy = 0.12856383875893895;
    msg.svz = 0.8597322118067504;

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
    msg.setTimeStamp(0.6539916087660653);
    msg.setSource(64292U);
    msg.setSourceEntity(17U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(86U);
    msg.group_name.assign("KEFVLMXXQKNFOVPOPQTEGIRTYRNLUGEMINAZYDAGHGTZVJLHMGWUPBLKAGKCLUDXJUOZHHXGPIUGSWAAMRWTKLJSLVPIWZCDAZUMO");
    msg.op = 197U;
    msg.lat = 0.7202669615322971;
    msg.lon = 0.7301985038598396;
    msg.height = 0.783429611755865;
    msg.x = 0.6077982155130193;
    msg.y = 0.5633111511764781;
    msg.z = 0.4973662293455935;
    msg.phi = 0.45799224328123156;
    msg.theta = 0.02757746048392118;
    msg.psi = 0.9888120948564539;
    msg.vx = 0.3471847658995306;
    msg.vy = 0.6351043609899979;
    msg.vz = 0.9054529673885775;
    msg.p = 0.4730860622749339;
    msg.q = 0.37751867705822995;
    msg.r = 0.0508790840393899;
    msg.svx = 0.8504038186671842;
    msg.svy = 0.8368572618248874;
    msg.svz = 0.08592568826575708;

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
    msg.setTimeStamp(0.7267068375454734);
    msg.setSource(22867U);
    msg.setSourceEntity(195U);
    msg.setDestination(14655U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("QMPASFYYQMYDRXEJRCODYPKAKNVHILXXEMBLFKCSTAJZENAKSBANUVVIZRLRQNWVOAPWIQOCMFGVPLVKXDZXNZHHSVXHMPYXEQEEDUTBRPUUIZYMGDWBKTGFECATHOVSIGTNMGWSXJHTHLCWJQWEPAUZSWNRWGGIJFPZHGUXGLMTEXFSOCLZOCBUIFNJFJEBTLRATOQKMWDOKJJFODUSSPBCIDBPLRDINCIGYHLFUCN");
    msg.type = 26U;
    msg.properties = 146U;
    msg.durations.assign("LBBBYXTHFGSUYIVTCZELRXBGTDPLQSJKTXYNYEORWHLPIOTOQTYLGRDYSNMXBCIFNUSKMDP");
    msg.distances.assign("NDODKGVYGKTEXWHHMBMPAPYTILXWNASKYYZMTQAOVOMCWDPBEIPNJKMYXFJMQEXXWDLCHJTKYFTPSCRRBLSCURUGABFOIMQZQPUASJCYKCHEPEQGUZJEAZTBVMUZSXEJDHIFLTEGODBPOVHRSHGZSVCBEKVFFXUTLWFDNMIVNGLXFUAAOMWBOLVPBVRYOIWDWGRULJBJNXPKAHIJSSCIWFKZITUGGQRRQNAEUZQDLKI");
    msg.actions.assign("WKYWPVCDJURLUAFKMJQNWORLYSSVVWWZPBTJCMHQNHJYONEENXOSETBYOKJUZEIYLPWOEFBDYSJLVLPDQKROUANXWEOVSHNSIGDRDTPJMNHBAZFUZRXLGMTZGLPVXGZVFVPWYIHAGUOXKGQCAITACQVDKEYSFTMQJOGTMCRJBQKCXGFWIMOXIRZUNFB");
    msg.fuel.assign("JEDOTTBNAIERZZECRLMABPIDYXSPOONHVYVLMRNTMMBXZGWCWCITOSWOZBWTECNYIYSOGADRXUPPMMPCWHTHHKJGQBKUYFYUZNDQGFIEHUFNEDBVUQIMTXWCFMAGRZKPSEFIUFOHIUBGKZJDGVRPZXLUEDTJVDQJBWGJLEFCKMVSHASSQKVXHAQLRILFAFNGQDPKREXWCYJHPRA");

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
    msg.setTimeStamp(0.6768036767481771);
    msg.setSource(42655U);
    msg.setSourceEntity(91U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("HUMQXXBTMBTDRZWRAKGOCNZVEBACMPLGDAZNVGCZRQGIMKGYNPJPYAQDFZYODDPKWNHRAVEQBKJTYYAFHHRPVUJWCOWVHSEKRBEWITCUPKUSTHITTSKQVFPIHOSLSWXNLHJQZWLOTCLLRSYHCNYNEXOJJAXFXFSZWPYOYAJXI");
    msg.type = 8U;
    msg.properties = 168U;
    msg.durations.assign("ILMQQXWACVYMIBXWDEXDEJPCBXNQYALAMPSIJRFZHOIRFHNMPEARGNUVZKXBVOUKSWJUCBLUMBACWGKKFTVXGSOUVWDQHOCBMXXOZNZLZEOVLQOADEKLEFRMFBZGJYUBUFHNSEHVYGXDMCDJIOTWURYLZSSGDIROVPFIIAWQFBRQIGPELYTJYZSXRPCHNLCFSQEWCWNTGFSAJTRNKEDTCY");
    msg.distances.assign("OOOZFGOPHHLKZEFIIXXYAGWZYRTTACMGBQPEGJJZPMEQZOLLIRATTVBCHFJCFUTRVNBSMBSQUTDIUNYIKKRQOFUMPXXHKAJJOAHGNLIVUNWIEXQBMMRYGBWJAFUHHDXMJSGQHVQADBRDCDMEXLVKXBBM");
    msg.actions.assign("RZMVGUNFHHSDNJXIHTUVSIMKZMRMTWHWMKFYIFYJTXCZRQFPWDGQUEVAFPPTYQOOMEKWXYNQUBLZCVPFMIKTGAGBVLOPKFCHOZPVEDXUTNAVZHCNOSHVONQKLJSQKOYEGYCQRADAHSIEYNEBKWNCGXXSRTCERQYQHRWBLSMGCPNWDAAFOJBXNMCGQUXYJKTOCAFSUYWB");
    msg.fuel.assign("CENDNCNYIALJFHXVUHPPMRDYTLFPFXLPSTOWIYUAKUCRQEXOAYZSJEWGXQEIXUJDMBTSPVBXQOIBKEXMNTIBSCJKVSNANTPTKEYRDTFJTDEVLMEGAGWMZMSOIKVHALWPWBDCWASPDZULHUZFNMJWPCKQAVZLWSRJVCFMHOAHKYUINZRGQWBQBOLCBQGSIK");

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
    msg.setTimeStamp(0.49524329395932);
    msg.setSource(14887U);
    msg.setSourceEntity(38U);
    msg.setDestination(57990U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("XCGGFCDUHTHWGYFXYIFJIMTNOCUVJQ");
    msg.type = 158U;
    msg.properties = 173U;
    msg.durations.assign("DXYSEYVGTASVELAFIGIPNZTNOHFGHHLURRREBWCFJNNLGUYEXHBQKXWDNOVKILYVYLCQMOZTPRNTVADSCWMJKHNXPKDSOTQBGPTSYFOEDJMLFNUZMWYQBSBEHDABJZZPPQGUURFQYYJWFULXUNMAIJPZGHGJHWZCCQEOXMTUIXILRPCYAIWGTIQVFALZJVTFKLMCSODAHBJMEMKWVRTPXIOHFXSUWODADAKDECSRRBWBEKCPUJOZSCRIBQQX");
    msg.distances.assign("LOVEZQDHOAJZXHCDWYHENYQISKIKQXMATGQFZPEXBAAVMAJEKHLMYQJPUGWXXCXQSDBBKGXPNKYLRMXPFCWYITJDZSILPIRBCTCHRGYHPJQNHWTSKRVCBIVOXUYDGEBFDRTRCYNPJNCOSDUTONMNPZBGMWRQNVBOIZWMVSFHDLKNZPOBGAURFWYATDUUUMETSUFJON");
    msg.actions.assign("FENDOLECSUDICTIEQ");
    msg.fuel.assign("ZBWINSRXUUFRSXGBGCCHJDLLPFKNNIIMORFKTKNATXKGJVDMLFEQVRMKQDJVVHZTCYGSHUWIZCYZGQYAVEUQGQIRPZAZOYIEPPRNLOLOYEGZUKTAMBMRUOXEOHCKSETBYSTEBNJKZGJWEYVLMKJAWCIWQPQXWPWIRJRJDFUDHSSBTXDZAKFDYBWRGLOYOJFFDPEVABNFPOCNVHXJMXXUMVCTAHNBSOQQMLHSWWUEGCCYHUANPZTALDSIIXV");

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
    msg.setTimeStamp(0.45195587911895696);
    msg.setSource(14643U);
    msg.setSourceEntity(96U);
    msg.setDestination(26418U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.6735097506338487;
    msg.lon = 0.9183456388382;
    msg.depth = 0.9725861345340344;
    msg.roll = 0.80091026445912;
    msg.pitch = 0.1438756762703154;
    msg.yaw = 0.23592307576918736;
    msg.rcp_time = 0.6161066600869282;
    msg.sid.assign("FQBHJEJUZNGTOGWGAYLGQTHNRJPYAQXFQE");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.15035536166388475);
    msg.setSource(41788U);
    msg.setSourceEntity(153U);
    msg.setDestination(29776U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.8159937410685625;
    msg.lon = 0.6772311679623578;
    msg.depth = 0.25866072755103975;
    msg.roll = 0.6267846300468974;
    msg.pitch = 0.30310469176216115;
    msg.yaw = 0.33943569324873246;
    msg.rcp_time = 0.6843609732369882;
    msg.sid.assign("UFVBCLJJSSQKGHWBEBYFIXDIQKQWUKOXJZIYQBHNEGUFYKDIDNYPSSQTAILRPEJSKLEWOOOAZWOITRKDHWKPJXNHBYMAXKZEODWOORPVJWIHHTPDNBTGZCGXODUEMUASWLXHAAZCYZVUTPJLUNYEXYUFDKMTULQZHRQVEMXQGRRSGCTPEJBZCAFVXSSGEVPJTNRRZBHPAWNNMLBRC");
    msg.s_type = 206U;

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
    msg.setTimeStamp(0.7236142955381344);
    msg.setSource(17052U);
    msg.setSourceEntity(150U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.7916753187939759;
    msg.lon = 0.8500324182452149;
    msg.depth = 0.5452033716359234;
    msg.roll = 0.6152294196237771;
    msg.pitch = 0.7193359062792722;
    msg.yaw = 0.701290289147737;
    msg.rcp_time = 0.3815698270264076;
    msg.sid.assign("MDMAVYYVQQEVGKGGJIEDJSPUBWKTKAQWICHTQDORREFFADBAUJSSUSZYHVCPCTLKTDI");
    msg.s_type = 83U;

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
    msg.setTimeStamp(0.8468497411716177);
    msg.setSource(51612U);
    msg.setSourceEntity(241U);
    msg.setDestination(55115U);
    msg.setDestinationEntity(252U);
    msg.id.assign("CBTWVYSSQUNDPABAFAMUSLLEHQFJCFAVUEEQNYJWHCJPTXWZZHEKJRNQTOSWODSSGXPJIIYHO");
    msg.sensor_class.assign("LBKRJDPPRGZTVTNCBYQNRPZDXFQKNRRPRWJFNHUHFTDZNCPXXQID");
    msg.lat = 0.12087011548507887;
    msg.lon = 0.07830105855026481;
    msg.alt = 0.7369592877065619;
    msg.heading = 0.09240410636019591;
    msg.data.assign("BWSNNIQNLCGPIUDYBLMDYUGTPHXOFMAGPFHZYXZIJGRJLBWLDMTVDKTEEBHQYEJMRJEGXVURXVNRAZEHFYICTOHPAKTELTEWSJSWGJVDACAYCOZICNHKOGAKEHWWMRMRLCRPTUMDNIQUAVSJUROGXYBFIZSSLVQQSCYBBZTPIXIMNXJQQVLNVFOQZEXQSCHSPBUXRWHWKUONASFVFPJADKHFBUCTKXFKQZLMDANG");

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
    msg.setTimeStamp(0.0019064855284179894);
    msg.setSource(39259U);
    msg.setSourceEntity(130U);
    msg.setDestination(20685U);
    msg.setDestinationEntity(70U);
    msg.id.assign("NZXWIZINSWKNTDRYARXEESAKJLTHSLAHDUCFCJGUIYBFEVQAAMAMPLQGBXPRQVOBNXRVDPHWWIQZRZOOYLSAWMZVHKBJOGNQCITQBNHGWBTSELRJWXWHTMDYEDCCCNVMSYEVYKK");
    msg.sensor_class.assign("GIMISCXSTBRVTYKIHBHEDZBQSBLJSOAXAOBZWWKECHDDYQHJVGOLTEFVLBFZQLINGESDAZUMHRLUURYZJXRNMIQMORSYLFJPZTECDQQTMNOUOOCPVPNFVKXEHNRJVEIGEXEHDPKWGWWGCOUBPHYVQAAZACKKFFDCIBLAG");
    msg.lat = 0.3026894177454744;
    msg.lon = 0.041503377637654215;
    msg.alt = 0.5817152856424046;
    msg.heading = 0.06816301786952184;
    msg.data.assign("ZUFMRZBCGXLIAFQPSCMPBESWVNWGKOOVZHGVPFNGFRIUUYTIEYCWFJDRZHRYQRKXHLLCVUDXTSERXRQGDHXYIWZIUJMHHBQRKAHINEJEDZMALSMKAIWKSIVKQVDQJHRNHPFMAWG");

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
    msg.setTimeStamp(0.4892984330329103);
    msg.setSource(3989U);
    msg.setSourceEntity(209U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(21U);
    msg.id.assign("WLDRNCFIDAATPCXWXVRKGBVFBAYJBEIZPEERKTFLSOSGQXZDKODHBVSYHMJTKPSHZFJQTIXIUTCYMGZNLAPNWJUDEHYMOPZNVYXFMMKRXZBGUMJHXGOUJOK");
    msg.sensor_class.assign("IFGLXOJYABOMUMNFQPILBGMRFHMOHAMKFVNTXPTAIEOHVIQUJD");
    msg.lat = 0.7606543737220357;
    msg.lon = 0.01423487145803437;
    msg.alt = 0.5636191989173679;
    msg.heading = 0.5420485736867595;
    msg.data.assign("XFFXKIVMQSYQCUUHSTW");

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
    msg.setTimeStamp(0.5086339802792572);
    msg.setSource(22653U);
    msg.setSourceEntity(8U);
    msg.setDestination(54668U);
    msg.setDestinationEntity(16U);
    msg.id.assign("TBIDIGEASBKWYUNPTOWWALXVBMTVVE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QYFDGGXYREDIQBTBHRBORKGPOTGVVTJTBSSWHPVEOOPZRAMCXQIKLWUDCDEWICDMXUHYLJNJOEVUTQBZYPIAFQAOVRAFCKZ");
    tmp_msg_0.feature_type = 196U;
    tmp_msg_0.rgb_red = 78U;
    tmp_msg_0.rgb_green = 174U;
    tmp_msg_0.rgb_blue = 160U;
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
    msg.setTimeStamp(0.3717630549979958);
    msg.setSource(44573U);
    msg.setSourceEntity(30U);
    msg.setDestination(28U);
    msg.setDestinationEntity(129U);
    msg.id.assign("LLFXXBVKOSTMAAZSQXZM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GVTNQEZEHUGEJDVIABGNMANNHTACEAZYLZQVWETNILDFUSMCCDBRUEFRBZFBLJXMMPLIRSMJYVKWRWIYODFPPYSYRVNGKGEMKOZRXYFNFTEHDIOJBHCMCZAXITHQOWFKVXZRIGPTTVOSARWAOVVCDNJLXKEFUCNLJQSGUBOHTJDQRPTHBAMEZZXSGUDFHKKSXRNBJWGUPXCPUWQAFKZUQJBPGODIKYIYLKHLXSSU");
    tmp_msg_0.feature_type = 86U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 5U;
    tmp_msg_0.rgb_blue = 7U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6272070708188134;
    tmp_tmp_msg_0_0.lon = 0.6866412949142462;
    tmp_tmp_msg_0_0.alt = 0.2724390563099406;
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
    msg.setTimeStamp(0.0698249095787643);
    msg.setSource(28587U);
    msg.setSourceEntity(25U);
    msg.setDestination(52046U);
    msg.setDestinationEntity(62U);
    msg.id.assign("LKKSBUDIMRPAYCZXGSJJHDLMXTSWNKUDJZAABOOTPQHRLERMNFGCEULVQW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PYFHGAKTLGGKVNAREPOIEHGBOYZIHAXNTOCILDPSTJNNCHJOGJDWWYZUUZERXDBEISPVSWPCDMJQOTREMRSKFJIOKOZACJAJPBYCWIVSMJLELEVGSPXFBQFEQLZFMNXLMTYEOVDZGVMLDXHTBNRVSFIAYGKAOVKMTUH");
    tmp_msg_0.feature_type = 145U;
    tmp_msg_0.rgb_red = 41U;
    tmp_msg_0.rgb_green = 131U;
    tmp_msg_0.rgb_blue = 217U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.869779732992972;
    tmp_tmp_msg_0_0.lon = 0.03982812171570771;
    tmp_tmp_msg_0_0.alt = 0.0698880837380329;
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
    msg.setTimeStamp(0.46796692015497754);
    msg.setSource(25181U);
    msg.setSourceEntity(173U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(23U);
    msg.id.assign("UURNXTRWXNUTUFVPLTMYIJZHFPLGHDJHZHSNTOXVOKMXYCLMXCSJZBOQDYGMZAFFPCJVZIBMEVDRIVWKTWSQZWMAAOCLIYTBTKRHYUCLYKXYSQBDVWDEWXNUEQJKXCKEDJULG");
    msg.feature_type = 40U;
    msg.rgb_red = 146U;
    msg.rgb_green = 28U;
    msg.rgb_blue = 227U;

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
    msg.setTimeStamp(0.9948273246643701);
    msg.setSource(25681U);
    msg.setSourceEntity(62U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(39U);
    msg.id.assign("SOPLZAYYIBAZHIWMNRIRPLKLBRYHLCNOJVNOWSFX");
    msg.feature_type = 110U;
    msg.rgb_red = 30U;
    msg.rgb_green = 85U;
    msg.rgb_blue = 168U;

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
    msg.setTimeStamp(0.1471509564298238);
    msg.setSource(64300U);
    msg.setSourceEntity(57U);
    msg.setDestination(21223U);
    msg.setDestinationEntity(252U);
    msg.id.assign("MBTCZHAVYCQKLAOJGIXZYRTDCIXDBAJFWIYHAHEBPNCZVLZXUOEEVPUGQTQKOGSZTFYUMEWTZMNMBOMAHNJVMPBWRESJMCGEYKEAPKLSB");
    msg.feature_type = 49U;
    msg.rgb_red = 165U;
    msg.rgb_green = 183U;
    msg.rgb_blue = 169U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2379637854032559;
    tmp_msg_0.lon = 0.9127978858810076;
    tmp_msg_0.alt = 0.7214514535922829;
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
    msg.setTimeStamp(0.10900790111338376);
    msg.setSource(62809U);
    msg.setSourceEntity(115U);
    msg.setDestination(49633U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.5624798659678041;
    msg.lon = 0.5613586003113855;
    msg.alt = 0.8439187057833389;

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
    msg.setTimeStamp(0.7170259413547888);
    msg.setSource(54532U);
    msg.setSourceEntity(9U);
    msg.setDestination(32805U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.22283493349594763;
    msg.lon = 0.8646531410522438;
    msg.alt = 0.1888674084969112;

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
    msg.setTimeStamp(0.6533033766327462);
    msg.setSource(35892U);
    msg.setSourceEntity(226U);
    msg.setDestination(19519U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.9256016960118686;
    msg.lon = 0.4047214156342298;
    msg.alt = 0.4723671288775433;

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
    msg.setTimeStamp(0.8221062852315985);
    msg.setSource(48891U);
    msg.setSourceEntity(188U);
    msg.setDestination(838U);
    msg.setDestinationEntity(18U);
    msg.type = 201U;
    msg.id.assign("HTLLPHQHFYGNPNKDUCXYVDHGYSPIJBVLRMMUZIUCESGWOXTZRMLEPFAFAALDBXMEIKAZLABIQURRXFGRPHKVNOYAJRCSMZGRRCPWKVBOFSOABQTHXOEXUPDQWTXSXGNIEUDGPSOIOERMZABWVEVQMFBJYTKITXLCBVAKGUDNVZYHOGUWDFKJFYGLUYCYCJBVVJADUICNENZEKCBSWT");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.6711609424967617;
    tmp_msg_0.confidence = 0.5490508638014222;
    tmp_msg_0.opmodes.assign("OECYUBGOQHIQXNRXHLRQKQKMBSGXERRZOJWLMVMTWKNNAHNDRYFDDVXSGIYWGUEJASTCVUZNCZGRTJWXNFWPZLSBQFTCGJOYQZYMIUAPFJOYIHGSHAI");
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
    msg.setTimeStamp(0.737791020095564);
    msg.setSource(30956U);
    msg.setSourceEntity(116U);
    msg.setDestination(6833U);
    msg.setDestinationEntity(143U);
    msg.type = 56U;
    msg.id.assign("SGCHVCKXYRJPUHDEIEXDGUGXJLMKSKTQCNWPCALNRSPZHOTVJWKQEXBTDTAHDKFMZFNBNMUABIOFYQYVYBLFJCCGZMZZGQMBIKFNYZFLGIURYRDBANHPIUWKLBPQM");
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 4411U;
    tmp_msg_0.sys_dst.assign("TUDMEFVZCFKXKXAVQNDOWXWZLJUXDYCOHYPWVQWLWQRMDNCHDFREJWEPQVQATAMYGDLBEYQFIYLBRACLFRLANFINGKNAHKEPLJGLEYJXJVQRMVNKTMIBJBSRPANNWQVYTZRBRMCSJUYKACIWDXTBMUHVPXVLKIZMSSUEOBFGOEYUPDDSXBYIZUTZHZBTZGJFVEHKEXOUAGPIHUCXCRDPOPTGTNLSQPGISFMWCGZHZQISJORTIJSMKOOH");
    tmp_msg_0.timeout = 0.7624278899903071;
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
    msg.setTimeStamp(0.9985247712290802);
    msg.setSource(62391U);
    msg.setSourceEntity(103U);
    msg.setDestination(3022U);
    msg.setDestinationEntity(15U);
    msg.type = 176U;
    msg.id.assign("GCVSYWPUHPSFWDUCZKROCKTVIJZWMZGPBXSRNEPPZEBHEKRSDJHXQJIAOFSWQRJNKDNXLYOXKWGBHGRFQMXNXDUCBJDOVBWGPRLUKNGRJWOVILCDUKITMVSLAQZTCAHAPHVRNNYMTHZPTKQMMJYIUFCMFIXRIBVVSQAJMVLPDBUYPHYLZCGQVTOYLMCAYQTTZNDNUWFRLITH");
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 4075257957U;
    tmp_msg_0.latitude = 0.8873087983344982;
    tmp_msg_0.longitude = 0.06526411229769347;
    tmp_msg_0.altitude = 38538U;
    tmp_msg_0.depth = 12781U;
    tmp_msg_0.heading = 11763U;
    tmp_msg_0.speed = 19782;
    tmp_msg_0.fuel = 89;
    tmp_msg_0.exec_state = 107;
    tmp_msg_0.plan_checksum = 11151U;
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
    msg.setTimeStamp(0.5234821099096617);
    msg.setSource(46690U);
    msg.setSourceEntity(181U);
    msg.setDestination(52795U);
    msg.setDestinationEntity(234U);
    msg.localname.assign("YIVODENUHJLJKNMZZFIIXASVGYNHRNLWPEUPQIGCYTKJDATXUILBBMQMKKHOUEKCCHIGMQDMTJFFEASTVZGZQPSXHZWUBVKNCBYCYREDXRSXZYDALWCBAGYJYPODWWJOKZBTXSAQVNWIFPWOZANTYHEMWDIGFQRNXVRX");

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
    msg.setTimeStamp(0.6767973359996181);
    msg.setSource(60814U);
    msg.setSourceEntity(185U);
    msg.setDestination(8322U);
    msg.setDestinationEntity(175U);
    msg.localname.assign("JDYUXCBZGJCDOQUJEVYSAAIVLJGLJLYMVYNAISKNOPLBTEONHXZBBYENDIXPPKTMGUUVEOWRUCDTMEZSR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JAVXQXNKWQHDFGVMPAJOXZDAQBBNTHMKQBBJKLOJEQPTNFWXVRREWWDYIACMKOACHSRBRAYWBGQIAEPPHRQNBECBUZHDTFXGYMJWWTUNJQTLCGDPV");
    tmp_msg_0.sys_type = 42U;
    tmp_msg_0.owner = 8404U;
    tmp_msg_0.lat = 0.6254853785613508;
    tmp_msg_0.lon = 0.912573305726342;
    tmp_msg_0.height = 0.708928848230696;
    tmp_msg_0.services.assign("EQIWLSGFPSFCUSUOGBNKMVTI");
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
    msg.setTimeStamp(0.16266690093170355);
    msg.setSource(41748U);
    msg.setSourceEntity(238U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("UHYLPTELGCKSMHEEGTDPZLQL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TUEYXQOEANJQHVWLYUNRJLGLRMRZZJCMPWJOOUWMCEQSLOMDZXZDNCPWJGPFEHHOEGFBSWMMKPGHLVYFIVMEWSCFAUTILAABJZQCIWQJTFVQHDNSOTSOPBTSCYDLRJTKZDKUKVLQEPYNAXFOKAMSFUR");
    tmp_msg_0.sys_type = 215U;
    tmp_msg_0.owner = 35967U;
    tmp_msg_0.lat = 0.6780283302411532;
    tmp_msg_0.lon = 0.798575179268114;
    tmp_msg_0.height = 0.6585325149932629;
    tmp_msg_0.services.assign("WLHDWFWJNLFUGUKJUPXAOQMOKODDYLKQCJXWTRNSFTSUOHMEGHMIFAQWNXZYYTSGGWDXAXEEGWOIAJMYICWKPMBPDLVBECJSETETWYXOV");
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
    msg.setTimeStamp(0.5108125808992575);
    msg.setSource(48953U);
    msg.setSourceEntity(245U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("RSHOTLKAUDDZMOGMWCUPYCKZHFHEDMTVIZVQOUFVRTUGXONPQAHBEJTSSZJSNWCDLQPGAATVXOFYIWMVIDN");
    msg.predicate.assign("RLOIQLULYAVFUBPYKQCZPEMTKEOLUIDP");
    msg.attributes.assign("HVNHRYFMBXOJQXEZKFURMRKMEKAMPXNOYMKSWLGEQSBQYQJWDKONVDIZTSWLFVCRVUIPPZQHKILWDQXUXPSFEJDKHXSKUEQCUAGHCPZBBULLYJMZRCOEOZHZOOTTDFHMGWDLJLADNWWBIRICAASONEOVFTWSBNASFLYIFWTPECKRUNMAPTAHJIGZUGRFVNQGIZQNHN");

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
    msg.setTimeStamp(0.953794423166265);
    msg.setSource(19320U);
    msg.setSourceEntity(117U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("SGLWYEWPFHNUIRYRIVUFOOOCTXAUJWLVZWQLTBLIXRTCAPMZPCGXVVLOAGUNAMOZYPMFKGWTKPQVWCGKEXIBLNSNYKKGXLVOTC");
    msg.predicate.assign("TCLNYKEMQTRCCSVESVUAJJMRUKJKPVTXLJPUFTJWHQUILBKRRYAPLJZNGTTMZOMVIIQADDPAHUYMWNWFYQXEWQJNHQEXLIXGFFSSBNHPVHRYOOCOMSXGIZLATFIEIBGXNOSJLEFBGBDIDZJKRTAFDIOMDYOGXTAFKHNQOFDGLPPNMYOUCDLWWKZN");
    msg.attributes.assign("NHKJVMXBAGNZQZBMYLHVPDWVNWROITIUPOCCOKFTZJMQZQYAHOIGSEZSASQLZCMECUPFPOUVTJTNM");

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
    msg.setTimeStamp(0.1737597794327156);
    msg.setSource(49605U);
    msg.setSourceEntity(217U);
    msg.setDestination(46218U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("VKCNJAOMBRRSMBPVWRWJLLBMQFUUSVTAOFQZWJDJGKZCTIBNOHZHPOFSXIDYERWIDBKB");
    msg.predicate.assign("JROUAGFOMHUIDMBIYTWWJZKCGZRVFPDWKWNCUYSXDNJAAQEERJPCWFZHMACOXXINUNQFKZLEQEKYVCNWMIDRRSKQYMBXMVWKQSGDXLPPGXJDRTFSGUGRTWAHZBAZIYLSLNUBMNBVPEITNPHXNXVEMBDFLFVJCQJCICHEUZOEORXEMRQSFLADTLHXAYOPGWQTUJSQIKWIBBH");
    msg.attributes.assign("OSZVMRSEYTHYNTEQHLUVWDDNQASMRPOFQZGOPPZZLUVXTNRNYGDVFWCRCLCK");

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
    msg.setTimeStamp(0.5076038398482476);
    msg.setSource(33136U);
    msg.setSourceEntity(93U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(124U);
    msg.command = 187U;
    msg.goal_id.assign("JVVSETXKBLCMKWIJWRBEIXWAFQXZTMMIKIZGYMQXHRGHFOYQCSJXUTUVFMGA");
    msg.goal_xml.assign("JBBEOXLNYGWXRYGZKCCYYNYHHWLISHTOWAFKVRNXSMFRSELNSJXLGCSQOXWGRQHJFMBRHELYGAJPFKOEPNCUDAITD");

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
    msg.setTimeStamp(0.6344606931246883);
    msg.setSource(6109U);
    msg.setSourceEntity(34U);
    msg.setDestination(35502U);
    msg.setDestinationEntity(189U);
    msg.command = 17U;
    msg.goal_id.assign("FSGYJCUYMARSADINYEQIXRWUHSZRAVOALNDURDJIHFCHKCBATXFWPQKFFUCDHPIVXOZHJPZBYQUAPCMXBXYRIFOWKNAGCVUWYNAGLMLKGQTHEJNYDUM");
    msg.goal_xml.assign("RZDRITBCZHAXRXWYBSKP");

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
    msg.setTimeStamp(0.670935511426213);
    msg.setSource(158U);
    msg.setSourceEntity(61U);
    msg.setDestination(40670U);
    msg.setDestinationEntity(190U);
    msg.command = 39U;
    msg.goal_id.assign("YKCXBZEGMDVZVWCXSOJAFHGXPZDWQDTCLBEZOJNJHZPEAZLGAZUSPRPDDMPRYEOITBVXDRNWMERLPSCTHVVLAMIAMODLOIOZHKPFBIYNIFJCHXSSATSFVKMVGQQQKNKUMYURRINKNCQVGJYRNWTVATJFNGW");
    msg.goal_xml.assign("OGFIUPDSUOAQPRDUJQNSQTYUZIAZEIJTNKGLYWVOLWNVTYVRHUAHKFNGLALCSCBZKMBQXXMHMHXKEJOYDNOEJECHCAYV");

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
    msg.setTimeStamp(0.4486171632444026);
    msg.setSource(3216U);
    msg.setSourceEntity(9U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(82U);
    msg.op = 57U;
    msg.goal_id.assign("RUDTXSWKPYKAXWWRDHWVJVHXWXANTGARUITCHUODYDQAJVKYCOIYCLTOINHPBLHZGIQLPDASNBCFSWQXETBZGBOYITSGJAKXNQQSEVUEXOOLNRXEMZTTQSIGFIQDFCHXTCGBIRMKFKPZWZLYPYBLJCUSAINKLJEGBONDFCGHRLVDMOHXYGVAKUQAE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BZEBUTBQLMVNZTNZZYCIHWUVDELANMIHMEMMHEASCDJQPIKPLQGAD");
    tmp_msg_0.predicate.assign("CRAYXMRLVGEDCNQKEUYUBNCKVJRYBNCBLOBHHTYRFJMODOKPUSQSSGZBVDFTWRNUHHVEIKOGZXXVXMGWXTJVDRRXPWRGYFOSDWBENAKBKXNIFJDSGYDSAVIPZZCLGYFQAQIPZSILXCUWAJLLDHZHUKZOJUFTXHJAMROVZIAFGFEWMECECUQLERWMCKNZ");
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
    msg.setTimeStamp(0.9211137946910242);
    msg.setSource(42507U);
    msg.setSourceEntity(128U);
    msg.setDestination(8105U);
    msg.setDestinationEntity(57U);
    msg.op = 52U;
    msg.goal_id.assign("UVNOFKIXEY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NXKDLOBWWZOVMMIXDZZGFYTXLVAWZFSROZDALHCRQBLIAKITVYEJ");
    tmp_msg_0.predicate.assign("SLUDXCIFWBPLDMBZJTHMJOVDWKPCXOTSESQHOKSPQOHHTXHFQIBLEYYGTCRWFGEPRJUDLNETSRDYKAKNNHNWJXZMAIBYBSURGTCATOUCGEKFPUCURLQAANYFGGZLNHAZXWRFEXIAWWNHPJAIRKAEGDZOJOKFUYZJUN");
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
    msg.setTimeStamp(0.7573482482074435);
    msg.setSource(13374U);
    msg.setSourceEntity(32U);
    msg.setDestination(39762U);
    msg.setDestinationEntity(199U);
    msg.op = 60U;
    msg.goal_id.assign("ERHCGRCNCSPTRGLQKMQAVKMQYGOCATVBSDAFWASFSIUZKYGJBUPDJWZHNJOQFPFVJIHGOFOTIIMLTEKVUPLXZMCPZETPDLKFSTBODBEVUHYQZWLIUDXNXBBCFRXTDIZRQRYXPIECUFGVYEFTDIVAXDNMVYUIKWLYSPJNHWONJPMKKJRWUNHIAXTKLODALMZJWUQSZVUQXABEARGCOWANMCMZTGOHSE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MKOXIXYSGSQOBRYHUGKNDLVILVAMGQGQVQVZJAKFBHTAITWNEHTJZHXEOXCNRBYKNXITVLRQRKPDVHPHECZHDLUADLPZEOKOOSMJRFIYBUBPUHDEIKGTTVTENQWZCMECXMCWGQBSSEIXTZAVSIAVCAGLDFANLWNDIUGJSJWUDMFBDFCPSZNGWK");
    tmp_msg_0.predicate.assign("YVGAXLQELDCBXNOJTTXMPFXXTRSAVJRIJDQRRJUBEFSCYEKWZTDGADUPCQYZMFCRWGTWYVYNKLOKVTPRBFQYKPAXGZJIMLQBPZBKPGBRUJSWZNRMUNIOPLHMWKGSVTCFUTLQVYQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XTXZAVSWROUGTHVYPPHJPDSCYKOBCPEEQEZZYQLVSJIXMFAHUHWIRYEMJGABKFAUWLBCJVKCQQNTBFBBFQXMMFZGPULXNSPUIINESPZGQNGTN");
    tmp_tmp_msg_0_0.attr_type = 185U;
    tmp_tmp_msg_0_0.min.assign("WSKEPHXKBAUEHQAAMDMSVGXKSPWLHDQTJOAEYNHCJQRMGKHGUQHFTZCBBXBPWAYIDD");
    tmp_tmp_msg_0_0.max.assign("VDQFSPRINPZXCUJWBXFSGJTECFVWHIHKIVGLWRUBMKKYAQKFXBDIWRJFLKESAXQSMLCRUFZJLXNSRWFMCTMAMCOVUQNMTVBXQDNHNGETGYCMLZXJGDNIGYPYOKLMZTNCYAROREYIQNDUVEVEGJDLWYBYB");
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
    msg.setTimeStamp(0.06900019269942592);
    msg.setSource(1537U);
    msg.setSourceEntity(243U);
    msg.setDestination(43667U);
    msg.setDestinationEntity(8U);
    msg.name.assign("JYFHPTRNBBOTQHMKWFIQCIBSKENFKRIOSXQQESXDMUDLKDUEQCODJWAJHMLTBCVVNNFICOPFDTFOZOOZEXHGFTLASKKDJIR");
    msg.attr_type = 187U;
    msg.min.assign("ZVVKGYIDOSYXMAQ");
    msg.max.assign("ODHDFHKAVARECSEACPIJMUFWIWVGJAWWCVVFIUCYANMENYZSOGGZRA");

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
    msg.setTimeStamp(0.36428531339209613);
    msg.setSource(13494U);
    msg.setSourceEntity(87U);
    msg.setDestination(22013U);
    msg.setDestinationEntity(254U);
    msg.name.assign("EJPVLQWDNIBDKYJGNLEURFCDMESFZKMENTUGMFPQVFUTZUASIGSOD");
    msg.attr_type = 65U;
    msg.min.assign("SROQPICWMBSBXTXIBNTVEJWAMPPGFYYNHDIKDQXTVVFBKRZUUXAZCRUDNGSEIHCXFNJXYFPVBAIRETXTXHZCPFYSLEYAAOJTFYJQBPNVSIQGKWLABSNFJEGMERRHDCJVROSQDNITDOAUZLIPUUMZVMZJFKQQGLHCMECHYVQFNLWSLGATKLXGNLFZCABYOTICYVZLQ");
    msg.max.assign("LIAJMSKHDOGPJSXXKCHJBVVMMWVVIESDRVMUXNMSLHJWLVODFOGQTZNKRZQAHMIYNPEUHHNYIDJPIQGQNSITGYPATTYEVUPZLEBPSPXKGWBPAEDEZGZKWBLFJTXDUSAYSDLKKTVBILQAKRWCUOKUNRJVTUTTIFRNEFNAZXEZCYSECOCAZQILGYWWRHCBBIFQHZ");

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
    msg.setTimeStamp(0.3703763788077219);
    msg.setSource(16199U);
    msg.setSourceEntity(251U);
    msg.setDestination(36601U);
    msg.setDestinationEntity(158U);
    msg.name.assign("PLVGZCIBFWMUZFRSHKEOMHOGNYKBDLMXRYFWCDZQNDSGCGZQURBDJQVNTRRVXQOUSDIIHOOFKWKUPKJTYEJCOCIJVHQCHNHIGNZAPERTTRIFALLUMTSNMLXLBGAFMLDFWDAEOVCKYBUXXGXMN");
    msg.attr_type = 225U;
    msg.min.assign("YGSZJPITVPREXGYWLSXKPILVHQFKMVJBMZMQBGEZTHXYQYJTVQQUSWDDBAOEJDMFIVUCAIAHUNVBNBOSSYGSUPHCEELAEXBYITKHUZANMZDZXWCYVAXQRBXMQYYKWFOWKPNSCJPTPNTKNGJVIGFDSEBOIVQGNLIZBJJDZTPGAUFVITCROWLKUBHNKMNLOXFYCAQKCSZRHUMWCCLUMNGDFJFDOCJWLEXFRPTQLETPRRLHWRXHHDIRRAKOMWEGO");
    msg.max.assign("IICADHAMXXCYYDJRQMPJHEOKYVGXNZCKNNLSVKEDBTHBAWYLEHDLJONWNIAXSCWRNWUWXBMKFVCHKSYBSBBOMJBHZTEXRPQINPYALQLGYIQQOZPFVZFPGRFTEJKXHVQZVPTJSWOHMAGWMLIKEVEZUTNCTPOSFSLDLTDTVWYGNPXCRSFZSPFDAKDWEZUOLSJCGMUCJRUTXMKGHB");

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
    msg.setTimeStamp(0.8954163786687973);
    msg.setSource(51283U);
    msg.setSourceEntity(101U);
    msg.setDestination(60301U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("PHRTMBQZZFGTHMBWCBFUFMGNVINDSYIICLOVIHOITHUGCEUPDUKIKLXEALYTUXNZRGPFFSAIZPOPCK");
    msg.predicate.assign("QJBIJHBIYTSYQTYTEAHRSCOMJONBVAUXADUAEVZCJFXSAJEVPLDROIF");

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
    msg.setTimeStamp(0.18884143526729524);
    msg.setSource(27876U);
    msg.setSourceEntity(140U);
    msg.setDestination(8016U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("FPEBUHFEWZWXGADRACZLNPHSDYOVRGKQJZPSBHVNKNOWIGBIMQHQTTSDCONREIQYCPUELCUWKYOCBVGQRCXJJPGHYPVLKGUOIQZGNANHTPERHLLZVYRDTUKMUYXCUSWKZPFXFSJLYXBZHWIDLZAJRSWFIQEYSTDLKFBCOKTMQUASFNFRZONBAPUBMDJGLWVATTRJVHTONXMWXNEEHIGIAXMCSKIDVYVCXGZFRMSMYFEWTJOPI");
    msg.predicate.assign("VSLKBXMQCVRIRYVXWSHZDLYEFAPYGWAMSAHMPJEYEJPIMMBMMVCKWUNCPDSJOKGZQLTLBQGSBIIPORHSFOAUTQJUANEKXPHLPTLEKGECEWDXONWAZGQERWIXQIRFKZJGTUBYDYNOIPTLNJBEHZYWDYSHADDQVFOJFACUOFHNSO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BSRZPDHABIAOGJTEZKZPMZIGOSWVAQJGEJJOZQTEFALGSLQJBJNIQTKCACTTIGOWAFBYVNCTYDWIEOHUXFLZCFXUEMASNIQAX");
    tmp_msg_0.attr_type = 196U;
    tmp_msg_0.min.assign("BVJGGNWBQNZSHIYLNUWIGECUNQIOTMIRZCKIAVBPQNDHTEXDAKJPEQPFJTTLTJJTOODHBOIYECVIJDGPTDYWFCIFYSZXPZAEXLSQMRQKLFGCPDDDYMLYYKAPSNDQNOBKILVEWSNRXWHS");
    tmp_msg_0.max.assign("SEOFVBDHDTPICWYPPVPIQMCMDNVTSYSXMFLCOZHPXRSETCBVGWBOTQHNPIATSJHIBABNMJVLJLOWNAWHIJHMNOLQZCGQRRNTSYUKFJWGENXHBHAAOIUUERQQMEEMWZZKLQXLNVDXCGYAKCJFOZJADZKAZSGEIRLOEQTTYRMNJURUUJLLICDBOQUREBUDSK");
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
    msg.setTimeStamp(0.1359931652499513);
    msg.setSource(40895U);
    msg.setSourceEntity(18U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("UYYGLVWKOLNTMBEKOVIUQYKTRAZWNDZJXRRHQPLCAQANIJGEFBVGPKOMTAKXNEPWVCRPPISJFCFHMPXMQGQEQUJRCYMAOLASGFUUIMEPJVHY");
    msg.predicate.assign("BUJHEONBCGWFBNPKTWXWWHIWRWPRKPMQTUIDIEDMAUZJLRSOGWOJQYIHERASBETPZYNGHFTGHDCZBXITCDKDAAJSUMVZHXFUZCSEIUNSUKCSORIVAQGOGVBRAVXXFLEC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JFBXLQMJBTSHKGCQTANOIRITVLHNPKEDUHDTZIBRUVDVKWQWGTRBZGAALMNCIZIFAHWACRMO");
    tmp_msg_0.attr_type = 66U;
    tmp_msg_0.min.assign("QJTOBLYDIXQNYVEFFPRSBWO");
    tmp_msg_0.max.assign("CQJAAQVIHMSGROBURVCGUVKPMMDZHXBNYKZQGWXKRFJNGBCNNKXGIJUFEOMADCBUWDXEYWHVORLTFLADMENKBDVJWMGOBCTDPWVPELLHHISOXZFJOQFAVCPCTFSJXPJOLUZZYQBCBYHPIIJGMLIXPRJEHADTESVOGIOPQKKLURETTZFVOFQPAEZQYUWNASDLGFYIPYNWWAZDYX");
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
    msg.setTimeStamp(0.8252742112394071);
    msg.setSource(20336U);
    msg.setSourceEntity(32U);
    msg.setDestination(31239U);
    msg.setDestinationEntity(127U);
    msg.reactor.assign("JWNYEALVGQUOTKKYIJHBHDZFYPHTZPRGCGJWKMNBIDOCJASTIGRSKWULSFQTRFINQLPRNNYSNZFGEEQUDTLWHRBJXCYHXPAHXOXLZKIWDSDMVMEPDHJRBKIZQBCUHHXFFPGOARMOCFAZXYAVYUDZZEPWTQUNQUULVJXXOEPWCLMCDVBCHKOVUTAOKIAOLJEBBSKASRTFLJYXSIVUBAXOKSPF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YDHNUEBFIZSYHNMHJXFAAEPRODPWGXVMPWBAGYOSCBOWGZGUBMGSSHXUYTUQVCXIPLZFMBYGOURVBTCEUJPEXFOKKJIAWMXENNRVQABLZJVFQTCGXNUOIKZOWTRFDFNCOANTMADREVDCDZRBYQIJOQMZSVKJIILLPTZHNCLWMWEIDCTVLSNVHDUAKZQPRRNTSRAJUEIKGQYYYJESSKPHHIXHKQPEJT");
    tmp_msg_0.predicate.assign("MYQIEHBJNYOOUKXVRBMJSSQMWTXQTCLDFBDCKAAMWQOPRVKYEICITFMUSGJJBYXKLHUVSFGOFZWWGAPHURKUCJGTVUOELHSABNHWTPVIZWSUVXIBGLYTFXDILXZQCPOTPKGRNKNMTCSORGDMZVRNZXWLQRWQXNWFCYEBVKEYLZSNJYNDBAKIRCBVDAHSFM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KMSGSXOAVPKHNMWQOOAVTDNLDTYOCQXXWGZYCGQECOHYLRBERAFPAIGUEYKSVXFEPHRLGAFUBXIBULEFDJTAENQJNORKYJNCSRWTJHUOOTHBNVYZHSJBMXCZGFKWVRNLKYAIYRWUXSPQJDDMNDFPZTBIQSRBUEFKIVPYAFBVZVSXYOEMLRFCIL");
    tmp_tmp_msg_0_0.attr_type = 247U;
    tmp_tmp_msg_0_0.min.assign("ZLYFUODKJSJVSMBJHUZLZWCEIYWYBZYQCOVMRTRNNKNEGTJDNFHVXYLDHXXJCAGIRTURIUHSBQYIGQNLWSITDXEDAZPVFKLZAVMMPUXSJKHWRFCEQGFEWUPGAIP");
    tmp_tmp_msg_0_0.max.assign("RBKUGWCMUDMFXFHFERZHIJQIWVBEAPECVYJZXAGJDZLA");
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
    msg.setTimeStamp(0.36324727026316617);
    msg.setSource(15199U);
    msg.setSourceEntity(108U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(245U);
    msg.reactor.assign("BNKCDXTAQFJTHPXRNNYXBPUBSPDGRNJREEZCYEGWFXKZMIMQEZOORMFGBDJKTUKNDELWTEXHYVMRZOHJHKXOCUENIGXHCCFVNRFTJVFELFADGBJKLUSHLXVJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VHEXBXRCGZIDFJSMFRDFHSJYIQZODBWBATYITSFIGNTFWJZEVXNYCTUYDTGCEKVMALKSOSERPSDGOVLLCLULXPCRCMZAATANNYRWDGMGHMVZJFUWWZBWLENPJOSTJEEWJYXLMQAHQPNEEHXDIRRQHLXKTFPBCDBWPALJAXNBQUBVM");
    tmp_msg_0.predicate.assign("UWZVZZVGTHIIGATCUXPNQOUVKNKDFFXWQJYZVOTEUQNZWUXTVKAYFKJCEGFZUHQVJLJPQYJZFDBFNITRUJLBVEDLRANOELIYKRDOYSOGLIMBHWIODSDNLXMXWCUMYQQKKBRLPZWLJOIFQOIUTVHRAACZGPYXRPHYFIRAPTQJBGBAFGCCXEBHSOALPNHYNPHMWBVNMSSZBJSMPAYSGMDFRUEEGRW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UGPDCIBLMMYEXLTSTKGRAXFXSXKCNIDTNRZVEDFXILHBMRBVBYUPHUGILNHXJKWPFVYAZDOKJJVEWSDQOFCLEFGZEWJF");
    tmp_tmp_msg_0_0.attr_type = 1U;
    tmp_tmp_msg_0_0.min.assign("MGEONTEZRQMWUDRCLDISBAMOGDSYJFKXPAECOSDIZDVLWCPLUPKOIMVBQGSOYJZHYBHZAGWZFFNTJHIVLXVTBOIBKLUJTFADSGS");
    tmp_tmp_msg_0_0.max.assign("RWSPYAWBQYBTHAOCJUFFKPGXATLGKCOJUDKUJMPLEGVEPNPSJQOBVAOHFCNJQXNVHZHUDTWFJKXNVABFNKMWKLIUAKOGMERGDUTLOOMCLUYPUVLIAZYDHBKXVEQCSF");
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
    msg.setTimeStamp(0.47591982293007984);
    msg.setSource(42298U);
    msg.setSourceEntity(199U);
    msg.setDestination(52436U);
    msg.setDestinationEntity(12U);
    msg.reactor.assign("KOYTEMSLYZBSUVKNSYGPRIVRBENNEMYZYSZDCEBEOGDCKILMPFWBLHGAJRJVHCFAMGJZKJLGVIIFVL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ORBRDYRPPOVQXKZMVFXDJZIAABHZHPTBBMNFHNBSUUSREXBZWKAX");
    tmp_msg_0.predicate.assign("KTJQUJKBOHTRJCXENMBWPUORLUDLTVTDLHAGLWSYYBQIJOVTZB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DOCHDJMNPKEYKFPZYRNSUMNWOJBIJVUFRLGKPEWZAOGZNBGSIGXRPJVEABRYBPPNELOZQORIHDCBMQNVGMSDEAXYKPVMBEJVWDCXICAGESEZJTTDTIFTDJHUVLQXARMSTMSKIOUFQOHTSHDJLCCECYGIYZDEXXFDNAYMCRPMLFBQAHRBAUULVKTAFQGLJNKHFHSZPGWJY");
    tmp_tmp_msg_0_0.attr_type = 204U;
    tmp_tmp_msg_0_0.min.assign("LQELYPQMAGLUCKMZBWGJWTVTYLLLGJSRIKGUVBWYFHXVZJTZVFJAERAZCPRJGSEKBWXLRUDQQXTCUNHCVZVMKTDUBNOPUWOSIJSWHCSNMOYHBDXAWPVDMIAUKNPWMCVMKFTAZFSASOIYGXKRSHNLTYBQAQAHJPEPIQEUEOHHTCQDRHKRNOFGXPHUNCNODXMZXNBDTKFEGVREFLQRYOXZWIPDJWZOSVXEJFBJI");
    tmp_tmp_msg_0_0.max.assign("EKGPHKRVGPUMCWGWGCBPRKCMRMEZWUVATDOPXJUTEPVXRASNUQIYYDZIRGOHMSSPTICBLAZIDVTOXLRPAVEXDDNFQ");
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
    msg.setTimeStamp(0.40740951195392683);
    msg.setSource(48481U);
    msg.setSourceEntity(233U);
    msg.setDestination(39651U);
    msg.setDestinationEntity(30U);
    msg.topic.assign("ZWYBJGVCXDFEANZFENTVGAMCLGOTGURESQKSMEBJXYTDKAYKFZROTLTNQEBLYHPUMJKOQEDOZWAYOGPULWFLWFBJHZXMHIBDVMDNXLNXJWJKACQANRKFTHPTIHUSMAWJPSVLXFI");
    msg.data.assign("RZAPJHDAPEEMMNYRXHHLLRLTPKIYWEPOTJNDFOZCWBCOZKNVNBTGMGABIZBBGSVWFKEQFFGTCKRUIDNSKEPQIIGAOLBVOADJKSUGIUJZPJQSEDQJZVRAUMKGKHTLXSPTMUTBMSOSHXCCGULWIOEIPWVVJJQWWVRHNVOSXRRCWQEFNAEYYTYZZJIRGONXHSMISJYXHYKQDFAPYGTOLQBCZLDHRXAXYADCNCDHLTEXNFQULWUMQZUFDFYUWF");

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
    msg.setTimeStamp(0.7978733187623415);
    msg.setSource(53992U);
    msg.setSourceEntity(117U);
    msg.setDestination(31313U);
    msg.setDestinationEntity(250U);
    msg.topic.assign("PTSVMOKUINDOBQSIGJJABUSBVUDHCXCVQBRRGXAOMTLYVWGMJJWVZOUTJZKOTASPENCTAGTFHMCPKWXVBAHIDKRLKYZDJLQGEXNFZYNUOYIRCBNSEDFNDBZWMIOFNQYPQWFCTIRMBNWL");
    msg.data.assign("OLWPLOWSFSGAPBIIOHTZBKRGJJMAAUOCRUCADZBBZVLGGUQFKXHACCVZLMUXDVVQSZNDPOHRJOQGGXRWGUSNQFTYKFNPN");

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
    msg.setTimeStamp(0.7517005391594266);
    msg.setSource(26066U);
    msg.setSourceEntity(224U);
    msg.setDestination(20088U);
    msg.setDestinationEntity(164U);
    msg.topic.assign("WKLGRCPLUZSQSNANXPBDNVFZEIPNFZRPTHDJSACAJMZKVTEREAHOKSQWMJFDGZTEQAKQSLOMCRVDLSXBINQEYYIVIGTSFLHAMEJHOXSXLFYBTXPQZWFGNTHTKUDUOYXLEMZPOOQACIIIH");
    msg.data.assign("FOCDSFUGBQQTSJVZKXLDCYCJPXCYIXOUPUNNUAOMGHRFTQQTPHIRWYBXSXRIZVFUKLJWKNHEZYVTRLMQVZXXLGBKUYSGJADHOXBKRDLCZIBRAPONHPKMNCMMFOIAKWEGVREWZDWHBGQVUFYYOS");

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
    msg.setTimeStamp(0.23895861931846618);
    msg.setSource(48739U);
    msg.setSourceEntity(104U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(0U);
    msg.frameid = 195U;
    const signed char tmp_msg_0[] = {-67, -93, 53, -46, 60, 119, -66, -40, -44, 107, 56, -84, 118, -36, 59, 117, -121, 11, 69, -33, -37, 85, 120, 29, -77, 57, 12, 9, 73, -89, 80, -89, -38, 66, -86, -89, 9, 69, 92, -117, -26, -106, -11, 10, -56, 124, 100, -22, 33, -75, -108, 40, 10, 29, 38, 19, 55, 70, -39, -32, 25, -37, 35, -101, -128, -42, -45, -35, -13, -109, 56, -42, -89, -105, 111, 89, 89, -56, 52, 113, -11, 49, -40, 97, 111, -122, 15, -44, -61, 13, 51, 59, -27, 69, 97, -101, 68, -89, 48, -79, 118, 59, 82, -98, 19, -110, -42, 118, 82, -26, -66, 65, 79, -95};
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
    msg.setTimeStamp(0.018767970042940063);
    msg.setSource(56945U);
    msg.setSourceEntity(32U);
    msg.setDestination(28296U);
    msg.setDestinationEntity(10U);
    msg.frameid = 181U;
    const signed char tmp_msg_0[] = {-105, -47, 4, 37, -42, 44, -103, -32, -22, 66, -50, 74, -23, -5, -23, -109, -106, -13, 110, 77, 45, -70};
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
    msg.setTimeStamp(0.11861018566252923);
    msg.setSource(38809U);
    msg.setSourceEntity(114U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(232U);
    msg.frameid = 184U;
    const signed char tmp_msg_0[] = {40, -75, -86, 90, 117, -80, 69, -59, 81, -106, 86, 25, 104, -76, 126, 27, 24, -74, 33, 53, -105, -32, 18, 78, -38, -120, 83, 18, -5, 124, -26, 82, 60, 116, -22, -123, -52, 10, 76, -50, -43, -100, 39, -95, -86, 17, -120, 79, -23, 111, -93, 62, 56, -40, 26, 106, -77, 68, -64, -5, -11, 107, -56, 26, -78, 19, 89, -93, 1, 17, -46, -112, 40, -23, -55, -55, -17, 79, 94, 19, 0, -125, 51, 4, -101, 53, 101, -93, -102, 78, -44, -56, -68, -4, 45, -71, 73, 40, 56, -113, -66, -113, 1, -117, 98, -12, -16, 55, -25};
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
    msg.setTimeStamp(0.4769022041030233);
    msg.setSource(54360U);
    msg.setSourceEntity(192U);
    msg.setDestination(55542U);
    msg.setDestinationEntity(12U);
    msg.fps = 142U;
    msg.quality = 233U;
    msg.reps = 173U;
    msg.tsize = 246U;

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
    msg.setTimeStamp(0.9567152317459666);
    msg.setSource(2250U);
    msg.setSourceEntity(184U);
    msg.setDestination(19353U);
    msg.setDestinationEntity(52U);
    msg.fps = 121U;
    msg.quality = 92U;
    msg.reps = 249U;
    msg.tsize = 148U;

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
    msg.setTimeStamp(0.3882406795621922);
    msg.setSource(5449U);
    msg.setSourceEntity(214U);
    msg.setDestination(33749U);
    msg.setDestinationEntity(197U);
    msg.fps = 53U;
    msg.quality = 48U;
    msg.reps = 148U;
    msg.tsize = 2U;

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
    msg.setTimeStamp(0.08435365753917135);
    msg.setSource(47242U);
    msg.setSourceEntity(39U);
    msg.setDestination(63960U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.11551285308219894;
    msg.lon = 0.6439532166990601;
    msg.depth = 101U;
    msg.speed = 0.059432418237429396;
    msg.psi = 0.41832908652061707;

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
    msg.setTimeStamp(0.48949332266682766);
    msg.setSource(16800U);
    msg.setSourceEntity(100U);
    msg.setDestination(30321U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.5514212123416418;
    msg.lon = 0.04040208575302584;
    msg.depth = 7U;
    msg.speed = 0.61890830394929;
    msg.psi = 0.5036810452371054;

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
    msg.setTimeStamp(0.1312138913353691);
    msg.setSource(65249U);
    msg.setSourceEntity(95U);
    msg.setDestination(62172U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.4386371280977671;
    msg.lon = 0.32247008421096457;
    msg.depth = 65U;
    msg.speed = 0.608553652075625;
    msg.psi = 0.1638372179711013;

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
    msg.setTimeStamp(0.8116598604071935);
    msg.setSource(4013U);
    msg.setSourceEntity(10U);
    msg.setDestination(64165U);
    msg.setDestinationEntity(6U);
    msg.label.assign("ARHJXUAERKFHLIKWIVJRBDXTIY");
    msg.lat = 0.17797797055889786;
    msg.lon = 0.8100154268192131;
    msg.z = 0.7893130365783408;
    msg.z_units = 240U;
    msg.cog = 0.6310793115459977;
    msg.sog = 0.008421945752259297;

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
    msg.setTimeStamp(0.9747352947375726);
    msg.setSource(48105U);
    msg.setSourceEntity(203U);
    msg.setDestination(46488U);
    msg.setDestinationEntity(132U);
    msg.label.assign("FNLIIFCSNNJOOVZYJDOMBAZSPACGPBBJUIZEUERZNKAPBUGDZBOXMHDDTDTSLPSVTIGPVMLYWHSFLKVLQFNDCAWROQJAQWJROFJPAFMKTGBCWEJVJNKYIUBKEIFEMQMREXMQMYGTCYQWBVZCQTMLOIHXFBCRPXZPWZDNVYHSBKCZERJLGTRKXWUYIIHTNXUAHTWAIKYHWRZDUNHJDHATQXQWVXOGURCSKQUR");
    msg.lat = 0.3981006185910323;
    msg.lon = 0.7370117835808601;
    msg.z = 0.4650574274696143;
    msg.z_units = 100U;
    msg.cog = 0.924681084720111;
    msg.sog = 0.43280627450623277;

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
    msg.setTimeStamp(0.2552961337855316);
    msg.setSource(52084U);
    msg.setSourceEntity(94U);
    msg.setDestination(5141U);
    msg.setDestinationEntity(68U);
    msg.label.assign("KTUJQXLZBUPSJLCLRVEKXPMGNWJGKUEMONSUHWIFRZIAGGQVSWEOJBA");
    msg.lat = 0.2963131462815425;
    msg.lon = 0.6616525178302644;
    msg.z = 0.4472784026753912;
    msg.z_units = 149U;
    msg.cog = 0.7148647011287415;
    msg.sog = 0.9952598667402537;

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
    msg.setTimeStamp(0.14113114242098257);
    msg.setSource(35574U);
    msg.setSourceEntity(178U);
    msg.setDestination(16456U);
    msg.setDestinationEntity(193U);
    msg.name.assign("WSPAQJYPDGJMFJHPEIYZBSFTKOITEEAKNNJFBXSCGKTHIVPWRZNGUUNYYLMOJUJT");
    msg.value.assign("DICVCYESFOEQGEVRSPOMFQPHYEHTHSRNQKCJBMFBBZTUJYLKRUSODRLVWJXTNLTIDVCBPZ");

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
    msg.setTimeStamp(0.8101468133160316);
    msg.setSource(19845U);
    msg.setSourceEntity(237U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(251U);
    msg.name.assign("LQEAPYUWPBSFSYDIKYHWLZYEATQZGFOQPNDTKHZWUCWVORYSGBTBEMFPKXIPACSIDAIZFGWGVMZSJTFKQMZTEQORVWMMISKVWKPUXQFGLIPIRDERLALVUWUTNMTUYRQSNDVUKVVXIUHHIOJYFGXDETMHQXGPSTRFBOQCJJROPBXKDCIXNFHRACKHNMEZGKZYBOJVXBAXGENJCWLHRNDWYPEADJLUZOCLLSGJBSLTACMCUHVHEMCDZRONNXNYQJ");
    msg.value.assign("TDJQRVLUNKBMIPNBJAZRZDZEIYJNVDGPXWADGYLDNTUSVRUGWFKOBCMGCZFYKMEODUVJFINYMKMWFLLFQUEVOCFQBLRRNSWHZYTZTGWPTXQFZJKFWTXUHVRUYMAGLKMTPHQOBLHVWFNQBVOVJXTCIQGYZCBABCHEXHHNOPAXAERGSLJIAUTCRGPMIYKKHOJHWGUXNPBIT");

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
    msg.setTimeStamp(0.689320850063501);
    msg.setSource(17290U);
    msg.setSourceEntity(195U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(46U);
    msg.name.assign("CNRGZGMMOMDDYSXWEPOXVTZRFRWIJLEPRYJMBZKHXDLAUFMARLRZETOKGFWJBSQELLUIMFFYFQLWHQKZAGVLBQPRSXYAAJBIKOVDKLHDBKJGNRANQSODDNUGWBHUMTEHIXHNOJENMVWSAQIVQKIZXDIXTDMHKCVYRGIUXPCSAHWFPSNSJCYVKTCJEGQIYUQXCPYTUHYEVQBPBCOMJDFEWAUHFT");
    msg.value.assign("LCLEQNUXQRORBJJYPXEQMHROLEKPZJAIDXYHMXOISXBGEJWYQGLOXHFUODKZMXHHUEDMKUZJBPGXQPARCREZBMIWLIAJVETATUDGYNBZQMLSVZMYJCPVKNEIVPVLNLWAGIHCHWDXTWFTMSMRFFKCAWAGTZNPBDCUPHSR");

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
    msg.setTimeStamp(0.07668663938537512);
    msg.setSource(9412U);
    msg.setSourceEntity(126U);
    msg.setDestination(19154U);
    msg.setDestinationEntity(14U);
    msg.name.assign("FDVQZOEUXUMBEPEZUCVEDHTPYYVZGDWACBDRIJOKUGKEYLYJKRUOQMKYFSJUCXHLTGITHBBKDPNINLKOQRFZGNHMSEBYRVMGABZBZQSAVFIRHLMFOXMTQQXPKYAGHCIXCNPCNLDBWKGVYWSRSHXZDUOHDATMTBPXICOASPQI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EWBTGENCUXBYKSLZAHINFXMJOLMDHYPRSFOCVLCPCENJNVRIQAJQGFTRIAKTCX");
    tmp_msg_0.value.assign("ADHBGWRXCJRRTGCLZNMSQEQEROMKUNBFEJPEVHBUTKZMOCMWYMVVMBIREIFBCQPTQRUCGHHIXSKXXPBZSEAXLKORNCWYPGOTOZPYGALFDJNIDGZDSYFKCYLUQHIYBJIAQFVOXHZJSAUIHWVTAEIHLANCJZGZYFGXSZDYRULIQAVNVS");
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
    msg.setTimeStamp(0.6851499462043806);
    msg.setSource(58365U);
    msg.setSourceEntity(176U);
    msg.setDestination(31715U);
    msg.setDestinationEntity(138U);
    msg.name.assign("BFVKIGUJGUADPXNBHHZRKATSILVOZNZBCPNAWXIFEEQVORHLXJMJPMOIJNBJTYNETJUYZZUKZCSTVKMSQUTTAQYYOIPSULMKMLFBEUGGFWWDMMJRIOFZSLONXQXIYPDJOVYCSFCDOMVEXDAVQRXTQTYZJRGYMFHEDCCWHLLDFLHUKORWPYJRBAVWCTRIFALNWQGHLZDRSUEVAOSCQHPPXHEPHEGDSBBRAUWYPKIKBQVXNIKCTGWAFNC");

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
    msg.setTimeStamp(0.7800881072692963);
    msg.setSource(39014U);
    msg.setSourceEntity(53U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(206U);
    msg.name.assign("PWRBHLLPMCGWJMWBQDQRTVXQRCYOVH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GUTPLIIOZFTNCQNHARLMKHEHLPFGEDJHWSJYIZKCPKWWLVSLQHQMUGRBUVATJDQXSFLBGMWPJJVNNBF");
    tmp_msg_0.value.assign("XUSLCAXJLDSGIORVTNALKFRWOLYBHNOZXVMTZLEYQQTJBECCRDTJVEFNIHWRNDPAVWKBGIQVJKKFXXYYDRBSZQTEBCHUEIIFXHIYUBCSWSKZKFQMLGOZPXUGNNTMVGBNVLE");
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
    msg.setTimeStamp(0.3719005102292161);
    msg.setSource(30385U);
    msg.setSourceEntity(199U);
    msg.setDestination(7795U);
    msg.setDestinationEntity(154U);
    msg.name.assign("PKLULYZCCQBJIFQBXMPYMXFTWOIHIQIQMABKTNERHLGNNGLXNVDMYTRVEIOTTXVPGTDTGEHHFCLDBFOZWSUOSAKTYCMLLABGGFDFDMLQUWKNZCKNZWJLUAWPRKRYSUAYMQEFGTSFAKXSCMVVBHYGHJPOOYNUGZSDSJYCPKRUOIRXLZVRVZVJJOVNUOKWRVUBQCOMEDI");
    msg.visibility.assign("GEZHYFYDUBMTSJZGHGNKOVKZTHWBHUHLJSPKBMGWAJFZEJNDQPJRHIIZWOECGSNNIQQDLQFYMMQTOUAFUVPXGTV");
    msg.scope.assign("JEJESLRIKBQEYWARRUVYUZXBHNYRHJTJAIDJHYQZTOHICUFXWZNATEKPLKJMETWLOQYTBPXIIONUDSBESCXFMDXVOARDHE");

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
    msg.setTimeStamp(0.8042757558114669);
    msg.setSource(51182U);
    msg.setSourceEntity(169U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(232U);
    msg.name.assign("NLXYKCSAAYOUJZWYREVPVVQMEQGBQOVEUCKSNRUQFHLYJXULYNFDYGOMFJUHWMMMRMEBPZJDGLW");
    msg.visibility.assign("OWUHRZWNALXWPGSKRHBJFGOREHSKVVPJJPGGXAYOXCLZJFTDKSSZQTRBIZSCFNFWSUBIELOSNXBUDNKIBPJOBSFFEIGVFHJNJEYK");
    msg.scope.assign("KFQBYUZOTNPMMYPPBHYIFXJVLPFDUQLXJXGEVVGBARSNQYCKCTJVPXNDLBZVLOMCNRUBCRWXGEDAGEZFTBBNNWQLJTAXDMWCWSYBTHCVQWTWRIJSWGDUIBLJOCOEAVMSPWERTYAAKMGTVMFHREOAPMUUHQEODIVZMNFIYSXOKGOHFPSGQKMEISHUSKJAKSLDQIJQSXBANOCZX");

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
    msg.setTimeStamp(0.7511444003818479);
    msg.setSource(25136U);
    msg.setSourceEntity(15U);
    msg.setDestination(9983U);
    msg.setDestinationEntity(183U);
    msg.name.assign("THZNZFTOKODXYXFYBJQEVZYDZWPTKWQWVBBSCQMRQKVIOVRBAJEVZDMOPKRNSKARYBXYHAADJNZEML");
    msg.visibility.assign("MNJDDKRSULUBYVIWKYQJNVJYFAMDQOZTYTSWPSXXCFPGTBGHANOZHFCLUPPDIZRCCQQFWAOSSXZZQNNMMLPKESHTCIKELLGGECLWYPQUULPEEBNHAIULFLWTJGRWIXPKJYNJBNWOBGBXCRMKHOGJNIKBFYCBQRAVHOMIPTHTUVIWRDHVEMJOWKJRZZNVVZOGSLMSRDXAMJDAISGIGEEQAYTXHRDKTPBQOAHVFEYYTUSFEKVXF");
    msg.scope.assign("LPMETUDQGFSUTMWIHLYCMPLIPOLBRPPHXDLZZSOQXSKUABXZNMJANWRECJISIDWVKVJECZBHOONCTJXAZLWYAWMRDFDBGTUQDDBXUNLLYFOIBVQOAPRIRJBQYFSIGOYWFFNKGQUEUFBTCCAXYTPKHZUAHDRBNAYQFZCSIVXGRJJOULQYTX");

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
    msg.setTimeStamp(0.3710759543069556);
    msg.setSource(38060U);
    msg.setSourceEntity(115U);
    msg.setDestination(46935U);
    msg.setDestinationEntity(23U);
    msg.name.assign("RAWMYYSNMECWHIFMXZRUQUTKDOQLTZMVPSUZKAAEFSUQLGFGWXCVQTHAAABEOJTDGNPMLCKBGE");

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
    msg.setTimeStamp(0.5696970651329829);
    msg.setSource(25032U);
    msg.setSourceEntity(218U);
    msg.setDestination(24194U);
    msg.setDestinationEntity(44U);
    msg.name.assign("ROIMSDDEWMWXNZEIUIJHTOCJACHLPEUAVXABFMNJOMWUKCRNBCJWLVDCJLAXNKNDKBJDFHYQQJPGFGGXGXOKIYZWOBDLRISVCHKVVNBETHWGPPHFTTUWBHKVAAYIG");

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
    msg.setTimeStamp(0.01183625860698545);
    msg.setSource(46871U);
    msg.setSourceEntity(151U);
    msg.setDestination(340U);
    msg.setDestinationEntity(96U);
    msg.name.assign("OIXSQJOHAOTYKSWQUUNTASHGRMEEJNGDROQWKUNBACIFTKDHSFZYBLKTZILZLGCEDIVGLXPHUVGDBNWWULFOYYPDXSEDJVMCRXQOIVETLDTJZDCLSBCLOEADPTSIERGYALFXWWIAOFIYVTBKCN");

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
    msg.setTimeStamp(0.8900081642390172);
    msg.setSource(42925U);
    msg.setSourceEntity(99U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(169U);
    msg.name.assign("WQJRDABCRORYLHDAOXSFREMIVVLEPVHOYGXRWZHZJLBWCDUMHPUWNBZSGEYWQLWIKIBNPKBKOIDUCBTYUUHWUPZDTITOHFPEZDEXX");

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
    msg.setTimeStamp(0.8980076201351014);
    msg.setSource(13615U);
    msg.setSourceEntity(19U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(180U);
    msg.name.assign("VVMGLWEDHUWPBBETIYXCBCIOMECSWXEZUTFYYTKSHLFWCVRONPYKUVLJMJIXUTGPEKPPFQKLDBPJUPZHNIQVRXHZOOJHFKFKZURKTXFEPDYVPVHAFDJHDUMKADOGLOKWLZEWBGIIUXICQNZJPUTX");

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
    msg.setTimeStamp(0.6808474711653123);
    msg.setSource(2225U);
    msg.setSourceEntity(26U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CBJLEFUNVNWWDOQYHKSVRJXOAOJNNXTWTBMTLIYRJBIFPQDDMKPLSXDAMPXCNQTEXAZNZWXSWZTTKTZHDQCGD");

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
    msg.setTimeStamp(0.8657666367422162);
    msg.setSource(51041U);
    msg.setSourceEntity(53U);
    msg.setDestination(9079U);
    msg.setDestinationEntity(6U);
    msg.timeout = 2401573105U;

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
    msg.setTimeStamp(0.19912122632883977);
    msg.setSource(3956U);
    msg.setSourceEntity(89U);
    msg.setDestination(37591U);
    msg.setDestinationEntity(36U);
    msg.timeout = 3547158148U;

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
    msg.setTimeStamp(0.8539372723643301);
    msg.setSource(19406U);
    msg.setSourceEntity(238U);
    msg.setDestination(63436U);
    msg.setDestinationEntity(159U);
    msg.timeout = 2693824878U;

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
    msg.setTimeStamp(0.7012578302370193);
    msg.setSource(21920U);
    msg.setSourceEntity(41U);
    msg.setDestination(52500U);
    msg.setDestinationEntity(103U);
    msg.sessid = 995290453U;

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
    msg.setTimeStamp(0.5806992484265966);
    msg.setSource(21427U);
    msg.setSourceEntity(16U);
    msg.setDestination(2454U);
    msg.setDestinationEntity(208U);
    msg.sessid = 3382819034U;

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
    msg.setTimeStamp(0.907323881911149);
    msg.setSource(52677U);
    msg.setSourceEntity(3U);
    msg.setDestination(19126U);
    msg.setDestinationEntity(4U);
    msg.sessid = 2151642185U;

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
    msg.setTimeStamp(0.5089918587299703);
    msg.setSource(34928U);
    msg.setSourceEntity(32U);
    msg.setDestination(9799U);
    msg.setDestinationEntity(17U);
    msg.sessid = 1679556469U;
    msg.messages.assign("OBIOYOOYGQUGJKLVFROKKCLGSTSHCMDMCVZDTSMSGVPFWXISFKASHMJTWRAYBASTIQ");

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
    msg.setTimeStamp(0.9176250932115046);
    msg.setSource(28940U);
    msg.setSourceEntity(166U);
    msg.setDestination(22892U);
    msg.setDestinationEntity(227U);
    msg.sessid = 4183887247U;
    msg.messages.assign("FWSYTWOPATGJMUCZJWCZHFRXBNUNHCISNXREJADURLUDHQZARHOZPOKGUCDJFOTFOVFTIVCQSFRYVEWLXSDWXXQBCFEYKGGTAVENZOLBFTGZMJEVYXXBIADYBBCHILOTPQPGJBUZUEESWNAVNCDYKSTRKWLIQECMAIPLJPGMWHJDANMGSZBBYDVWMTEPSMNIQIKHVTPVQUZX");

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
    msg.setTimeStamp(0.6693725986955943);
    msg.setSource(23099U);
    msg.setSourceEntity(254U);
    msg.setDestination(27133U);
    msg.setDestinationEntity(130U);
    msg.sessid = 224154765U;
    msg.messages.assign("NGKTKWOCFOKCYXHUMXVTQOFWXNGCVZNOCVESWTJRIXYVXAHBHMYLPADQAQXLQCAJOLFCRHLFXKGWSPAELEKKDVUXYJAWBTTHOVZNSJURLBIYIMWDPBAZOPSGQTWOIFFWJRUZUMITSNNQFZRRDBPFJEVUMGPCWSIPLPTRPNYKGHESYDUQJUOHFCDIEHILLDEGNR");

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
    msg.setTimeStamp(0.4765191480331501);
    msg.setSource(57237U);
    msg.setSourceEntity(208U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(44U);
    msg.sessid = 2253505069U;

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
    msg.setTimeStamp(0.20331150763844796);
    msg.setSource(18219U);
    msg.setSourceEntity(126U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(59U);
    msg.sessid = 726310688U;

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
    msg.setTimeStamp(0.679733277367869);
    msg.setSource(64536U);
    msg.setSourceEntity(171U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(248U);
    msg.sessid = 741277032U;

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
    msg.setTimeStamp(0.8441337866379064);
    msg.setSource(8719U);
    msg.setSourceEntity(249U);
    msg.setDestination(11574U);
    msg.setDestinationEntity(120U);
    msg.sessid = 437149094U;
    msg.status = 49U;

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
    msg.setTimeStamp(0.07561418188589908);
    msg.setSource(9339U);
    msg.setSourceEntity(38U);
    msg.setDestination(15844U);
    msg.setDestinationEntity(204U);
    msg.sessid = 908580793U;
    msg.status = 150U;

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
    msg.setTimeStamp(0.11642395859673615);
    msg.setSource(55916U);
    msg.setSourceEntity(240U);
    msg.setDestination(57859U);
    msg.setDestinationEntity(33U);
    msg.sessid = 1928507109U;
    msg.status = 19U;

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
    msg.setTimeStamp(0.25889443339444396);
    msg.setSource(13687U);
    msg.setSourceEntity(137U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(145U);
    msg.name.assign("CYDVFCGGQMQVQGIJUYSECZRIGRCIGZXIKMDUXEWPZBVYWIEXWIBFDIRKKFVOYM");

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
    msg.setTimeStamp(0.7072303714928979);
    msg.setSource(9341U);
    msg.setSourceEntity(163U);
    msg.setDestination(41126U);
    msg.setDestinationEntity(233U);
    msg.name.assign("ZZURESPATNBVIQJMPUORVTAHWXAPNIKPTMRMSRKOCDSODWWZVMEKDRCNJTYUKSXZYAAJLDEEVAUZXZKEBARKKNGFYSXLJNCIIOOFDCMTLYYWSAVLYPBIFQXGJSZVNCJDHIKTCDEQWXIWMGLTWEGUWPEIMBRRQDRVLYSTZLZLJHB");

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
    msg.setTimeStamp(0.03157637213661402);
    msg.setSource(47481U);
    msg.setSourceEntity(198U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(118U);
    msg.name.assign("ECEMBOQNFCBCRVNXEODBAWVLAPRLBAHMURUHGPOLOUUDWDXKKMILGWTPXBCXJSNIHACFWRQNTVIMCVKVWJPTHNZBJKSJSJVFERMFLZJDDTGFKCYVFKWLA");

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
    msg.setTimeStamp(0.6167228725578732);
    msg.setSource(26751U);
    msg.setSourceEntity(5U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(215U);
    msg.name.assign("FVQLWRGSRQMFJZZEKEYVYMCMXIELBYKJVMIXUFZOGTMVWBLMEWGAYPVIPIRQOEQALPOPNSJQTNAXYTNBOIENOZIKZXAYNWJVOFBFARGLAYJZHQPNLLDDHGGBUHUXUFBGHY");

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
    msg.setTimeStamp(0.3536427045882815);
    msg.setSource(18426U);
    msg.setSourceEntity(210U);
    msg.setDestination(23444U);
    msg.setDestinationEntity(151U);
    msg.name.assign("WGYVRUPOXEUKCOFEWPCDFGGZMXKGVNEBVXQDQJBICSBNIEDRRRSVXOUXCAMWDCOVJZIKFYCPTMQGOEJJNLESLBSWPJYLNPJFXBADXCNCFHZTKVRTQZAMETEGWUHHEQHZISQVFKKTBUPCFWSGDCIYLSYJFPZGZJQVFANDAMDESALHANYTMBWRIOOKWTRZQLSAMBRLUTUXMOYBVTMWXNYQGIVNXHQBURSPTUAJYHPOKLNDJKUDHAH");

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
    msg.setTimeStamp(0.18223200081655277);
    msg.setSource(48426U);
    msg.setSourceEntity(150U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(216U);
    msg.name.assign("BBWECEWXGQMVUGJBZSEOZLTUVVYIUZEGNXSUKTRQAFIKCLSMDVPUVUXHPYXRYSZTVSXGFYXOBEPDZPVZHGLTZMPVBBUDTRXKDVUMHXDCRNHRNMFGSXDXNKOBNMMSLPCNEAQWZOJRRCMYLLIQEWYFOFHNVIIAHHLFQJQECBPCJONGJLRADYMRWEHTWRGKSFJIQYTPMZDONEZLSWQFYABOKFWJAODNIKCTCKJPJTGCBGAWUSDQIYOQLUAA");

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
    msg.setTimeStamp(0.9561143467486612);
    msg.setSource(32556U);
    msg.setSourceEntity(84U);
    msg.setDestination(55002U);
    msg.setDestinationEntity(70U);
    msg.type = 217U;
    msg.error.assign("TDJOMFOQXXFRXPGILWLNBAPJHXNGHNCGINPVWUIPLJCXSAEOCRBUZIUXEOEPRXRQCPYRHCSCPNGMVIAMYEZNPTHDQYBFUDIUAKWVFMZUVMRHTQTHBFGTOVROMSXXQDAJLABKZBDJVWQITEYQEOUZIJOAYWLRHGHEEMKVWAFCSJSKLPDZOEQUMPYBWJVKFDJWYTUWIHDBZSSFOKLTLKLDRQACFCQFKYGKSVDGUSNNZG");

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
    msg.setTimeStamp(0.2899551005180262);
    msg.setSource(53117U);
    msg.setSourceEntity(92U);
    msg.setDestination(33370U);
    msg.setDestinationEntity(7U);
    msg.type = 237U;
    msg.error.assign("OUDQGWYROFGUZVJPWGIBOMULEPQYFWINSUZHLLXKBMTUWZRRAIBEOCKODFAPEYNYBHEAFJTLTTMMDTBAZMEGJSKAPYBENTIMVFDBSYTLYRNIDGNDKBMHSNSACXTRWBRSJQLRZJLHEXJXFGFWKKZHXZGQUFQQREUBPDAVSLHLUOJTMGDNWIVVKXAEJWMCWVFNKZNYCPKJFCWXJGPQVCOYRAQV");

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
    msg.setTimeStamp(0.9429549303458278);
    msg.setSource(44828U);
    msg.setSourceEntity(41U);
    msg.setDestination(25265U);
    msg.setDestinationEntity(188U);
    msg.type = 22U;
    msg.error.assign("WZXJEJLYUGDURQXRSPYXFNQBRAKTMIAYVDFLJOFWPHFZRMXFTYGOSLWLTZVKZGXEQQGYYMCITUEISZPSHEVAOMHRDQHUDITSPONBIEMNEYACSEGVXVFGWLFXXWTBYVOSJKNDQDAUIFWGKBZAHPQNKAECL");

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
    msg.setTimeStamp(0.4554692715513474);
    msg.setSource(35347U);
    msg.setSourceEntity(188U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(164U);
    msg.seq = 25212U;
    msg.sys_dst.assign("FLDQQANDQKBHZNSPQPMUZUTIWYSCCWNFMINXMBVSPUEXKSCKBVOWPAXOGDYTWCIRKIRQLEHHVEJFBLSVDBUROQGBSEMBRZNUHKNWTPYBUQRDYHXZKGGZWCIGXPXHNZORWRJJWCTUYDZATJAVUCJESYBFUOJRATMEDNSDILHSYUFZATNPQLOEQ");
    msg.flags = 232U;
    const signed char tmp_msg_0[] = {32, -39, -5, -21, -93, -57, 93, -21, -14, -127, -118, 35, -25, -34, 100, -128, 13, 22, -121, 118, 84, 94, -116, 116, -67, 34, 64, -5, -35, -22, 62, 120, -121, -21, 10, -110, -52, 20, -48, -89, 51, 11, 94, 1, -112, -100, 111, 93, -39, -52, 78, 5, -71, 98, 122, -109, 39, -43, 79, 8, 39, 22, -89, 54, -18, -11, -113, 55, -107, -16, -34, -84, -19, -68, -120, -121, 21, 98, -68, 38, 18, 80, -48, -86, 83, 21, -125, -100, 1, 108, 47, -93, 10, 125, -33, 16, 78, 44, -43, 59, 107, -74, -5, -36, 117, -117, -107, -116, -101, 13, -43, -59, -28, 101, 114, -18, 109, 83, -73, -30, -52, -85, -119, 24, -52, 81, -47, -67, 97, 43, -24, -65, -5, 30, 85, -9, 114, -80, 83, 28, 119, 25, 23, 1, -101, 27, -37, 49, 124, 120, 123, 50, -88, 44, -2, -34, 18, -105, -108, 94, 22, 86, -39, -23, -110, -30, 76, 41, -53, 104, -57, -12, 82, -71, 63, -25, -76, 25, -44, -1, 55, 78, 112, 29, 104, 20, -116, 13, 67, -49, 101, -100, -67, -111, -108, 13, -80, 55, 49, 113, -72, 99, 37};
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
    msg.setTimeStamp(0.6996773806052025);
    msg.setSource(41809U);
    msg.setSourceEntity(71U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(217U);
    msg.seq = 10470U;
    msg.sys_dst.assign("KPWZHMQPZIEEBOWIPVZKJQASDTSTGVXVMOAYMJHCPMJEXVBRAAH");
    msg.flags = 121U;
    const signed char tmp_msg_0[] = {-59, 37, -104, -23, 16, 69, 116, 38, -114, -119, -109, 101, 126, 42, -58, 108, 126, -34, -102, -13, -95, 98, -25, -52, 120, 1, 87, 5, 92, 94, -102, 9, 41, 4, 85, -95, 76, 21, -101, -24, 85, -27, -93, 120, -40, -79, 117, -98, 19, -31, 106, 87, -104, -112, 74, -122, 20, -53, -47, 115, 43, -101, -36, 53, -42, 68, 87, -41, 61, -3, 10, -113, 109, -98, 11, 111, -4, 49, -81, 70, 118, -91, -60, 17, -54};
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
    msg.setTimeStamp(0.7544814909310252);
    msg.setSource(5741U);
    msg.setSourceEntity(195U);
    msg.setDestination(63137U);
    msg.setDestinationEntity(241U);
    msg.seq = 18174U;
    msg.sys_dst.assign("CFMAZXZYTNABBSZDCGWFHUEMAJKZYTMKLVHOFRZAOIGGFLZUZELKDXSXPGPMYBBFVBIRKRMOWMLYOTKIRLOBKILVWQYFLHSDFMJUWNMVCOOCQTKTDAZQJGCO");
    msg.flags = 179U;
    const signed char tmp_msg_0[] = {83, 3, -51, -18, -54, 50, -126, -49, 106, 28, -37, 95, 35, 125, 96, -8, -73, 45, -104, -90, 49, -33, 77, -78, -109, 32, 33, -117, 70, -48, -121, -80, 90, -109, 96, -66, -70, 84, 97, 126, 71, 19, 73, -4, -56, -120, 115, 10, -16, -90, 55, 50, 20, -82, 14, -62, 87, -86, 54, -48, -111, -18, 101, 45, 59, 45, -81, -38, -127, -74, 14, 126, 12, -103, -99, 99, -101, 43, 92, 93, -100, -12, 47, 121, 86, -6, 28, 30, -72, 83, -64, -64, -103, -47, -65, -62, 27, -13, -5, 112, 37, -114, 59, -4, -60, -14, -71, -70, 78};
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
    msg.setTimeStamp(0.2554663946796579);
    msg.setSource(20295U);
    msg.setSourceEntity(66U);
    msg.setDestination(29022U);
    msg.setDestinationEntity(226U);
    msg.sys_src.assign("MUGWGDCFHNMBCPNSUYZFZLYQQHXZELXHDAWLRQOLPJBUFYQURRMAIPWQFYRRKGYNBZOBBSVMFRBYWUWSYJCTMIISUNZTOMENPGQVEJITJSJGORVDHPHVZAEHWZLPSOWRAPKQNIXZBBCETHLHISMGBAOUGJVPQVTOTFIJVEDCGOFTLYDA");
    msg.sys_dst.assign("ULAFZSKLSAQASIMDRJNZTRHBGIPEKVKGLOFFPLOPBZWPGKDGAEENTGUQYGYYUCODVBLCTMLNHLZVYPTJCVUJSZEDHEHDKMXOPWRSHQTWCFZXWCQCHMXUTIXXICAYJBMBUIZUOYDMNXNTWJZYOVNJLGFSQCSPBYORESEPXWFNJUZGXRWTMWHDCQVQOAKHWXNROKGRDNTDNRLHQAKGQAPQJFERSMOFWVJEUKIXVUMZIBI");
    msg.flags = 40U;
    const signed char tmp_msg_0[] = {-71, 31, 1, 10, 23, 67, 40, -63, -110, 38, -69, -6, 7, -108, -86, -116, -90, 16, 90, -41, -11, -64, -39, 23, -88, 119, 7, 37, 114, -105, 109, 91, -64, 53, 46, 41, -25, 6, 110, 63, 94, 52, 117, 106, 66, 27, 82, -74, 94};
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
    msg.setTimeStamp(0.5686778316928004);
    msg.setSource(65045U);
    msg.setSourceEntity(172U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(146U);
    msg.sys_src.assign("BPHUHEHIYGXDCEWWRGFWHLVWHRHUOYQPZZVXMJAPOQVKQDITQXLSWLTXGROAVTZDBVPILWHGFUONEVZFAJPUSVFJMGIBNYLPUGKDXHUIDIWSOYMMFBPQPRQEKBHIDCAVRFDBKSEWZCXAOLQSATCCSIRFBYLJYTNGONJZDCGENAXISKKLAJUHUJWPMU");
    msg.sys_dst.assign("HMHVKUJHWORBSPXFEGDVSVNGTFVPFGLKCZXRHUCEMLLJBMKIGPVHGUQPLXEZJYJHZANWTNBMZAOQDCAWNGQXRYDTQOIDUC");
    msg.flags = 113U;
    const signed char tmp_msg_0[] = {-71, -21, 23, -106, 35, -80, -100, -44, 75, -19, -26, 51, 44, -110, 6, -31, 50, 37, 92, 5, 35, 26, -67, 46, 112, -86, 123, 13, -38, -30, -21, 50, -123, 100, 76, 102, 50, 20, -48, -72, 29, 74, 42, 32, -87, 9, 22, -99, 17, -12, -112};
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
    msg.setTimeStamp(0.3133773581214814);
    msg.setSource(61736U);
    msg.setSourceEntity(239U);
    msg.setDestination(8906U);
    msg.setDestinationEntity(237U);
    msg.sys_src.assign("VLSMNFTMBWNUXWCJNYNTGJNXQNSLCKQTADFYUHCB");
    msg.sys_dst.assign("BHKUBVNZEOQCHMBTUCPNSANZFVUEJHIVGGCTJHUMKJRDEWTPDIAGFOUVNYQVBTSRYRXUKUBMRRWMEASAXXXIGIEQFPBMLFNPYOQCMZIONPKKV");
    msg.flags = 78U;
    const signed char tmp_msg_0[] = {-64, 8, 108, 3, 82, 123, -41, -126, 9, -72, 77, -20, -86, 14, 70, 102, 98, 47, -47, -43, -24, 63, 62, -7, 53, 106, -28, -80, 111, -95, 109, -76, -77, 13, 81, 22, -63, -1, -8, 120, 0, 67, 9, -86, 77, 55, -115, -106, 17, -31, 123, 81, 51, -122, -94, -87, -16, 59, 95, 81, 48, -72, 40, -68, -124, -46, 6, -35, 40, 108, -96, -86, -90, -47, 60, -89, -82, 58, 0, -116, 5, -1, -23, -77, -7, 39, 83, 41, 48, -47, -40, 113, -72, -26, -25, -119, 77, 34, 32, -103, 12, -92, 84, 96, -10, -113, -98, -62, 23, -124, -67, -105, -113, 1, -73, -9, 38, -7, -38, 99, -108, -45, -65, 79, 103, 3, -123, 7, -111, -24, -38, 69, -120, -123, -18, -111, 68, -102, -38, -29, 124, -96, -15, 60, -49, -96, 78, 25, -1, 77, 112, -113, 118, 44, -62, -21, -75, -102, -84, 86, 46, 100, -13, -10, 13, 70, -30, 104, -111, -16, -83, 42, 49, -58, 36, -79, 40, 63, 1, 18, 84, -68, 89, -109, 40, 73, 102, -10, 126, -53, -45, -10, 27, -101, 80, -57, -14, 51, -4, -100, -67, 30, -96, -2, -53, -48, -26, 110, -19, 21, 43, -80, -38, -103, 72, -47, 6, 114, 121, -54, 53, -63, -116, -90, 112, -34, -30, -1, 1, -1, 62, -91, 33, -71, 28, 41, 44, -66};
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
    msg.setTimeStamp(0.8350371866050463);
    msg.setSource(58456U);
    msg.setSourceEntity(245U);
    msg.setDestination(14327U);
    msg.setDestinationEntity(221U);
    msg.seq = 60015U;
    msg.value = 27U;
    msg.error.assign("YIXTQTGJAPKESEQKGWASMFPKRKRRXF");

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
    msg.setTimeStamp(0.9450300898673728);
    msg.setSource(28791U);
    msg.setSourceEntity(93U);
    msg.setDestination(41868U);
    msg.setDestinationEntity(45U);
    msg.seq = 350U;
    msg.value = 34U;
    msg.error.assign("QVJWKOQUQYTQHUVDPCIXGXUSLZRSDGPJETBZHXUSYMFHGNLSVRYTTHBBUODUOEGKQEDFZINPNBHOTZKDWHRWIARAUGFGB");

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
    msg.setTimeStamp(0.8242358892451865);
    msg.setSource(27160U);
    msg.setSourceEntity(214U);
    msg.setDestination(9889U);
    msg.setDestinationEntity(85U);
    msg.seq = 33765U;
    msg.value = 71U;
    msg.error.assign("APJGBEYENHAWXDS");

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
    msg.setTimeStamp(0.5999857296336838);
    msg.setSource(45378U);
    msg.setSourceEntity(71U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(69U);
    msg.seq = 48582U;
    msg.sys.assign("ENKSRTWIQAWRRWCEMHYWMZL");
    msg.value = 0.3771790533262751;

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
    msg.setTimeStamp(0.34356830702258023);
    msg.setSource(49499U);
    msg.setSourceEntity(3U);
    msg.setDestination(4762U);
    msg.setDestinationEntity(236U);
    msg.seq = 24609U;
    msg.sys.assign("MWAFLVIUIZFDFMHMBJTVTZWYEODPTHDDSYOCNORVDJMKZQHUKEAWOINOVVRPFFYPBNWCWBSWZSPRMRCHXOGBSEJUKRODVQRSLNTEZGFWSBNHAWHRSXVANKEVDJZEILEGUGLNGMUYQZEPUYQBKFBIAGQFOPINBJBIPUSTXJJLLYRSQKZFQXCXCOLKVIGYLCJUHTBDAXAIAHCFNURZHXXGTDTAMXGMTQXDI");
    msg.value = 0.47598912494031986;

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
    msg.setTimeStamp(0.857536368790737);
    msg.setSource(7103U);
    msg.setSourceEntity(88U);
    msg.setDestination(34537U);
    msg.setDestinationEntity(3U);
    msg.seq = 14539U;
    msg.sys.assign("DSBVIKZZSFJ");
    msg.value = 0.36675990326556784;

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
    msg.setTimeStamp(0.14204679687722155);
    msg.setSource(863U);
    msg.setSourceEntity(22U);
    msg.setDestination(46344U);
    msg.setDestinationEntity(86U);
    msg.seq = 14063U;
    msg.sys_dst.assign("MGHJKVDVUSDSEHS");
    msg.timeout = 0.7589034438797729;

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
    msg.setTimeStamp(0.5082694836082294);
    msg.setSource(31917U);
    msg.setSourceEntity(133U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(144U);
    msg.seq = 35036U;
    msg.sys_dst.assign("IDUISGPKAIPJFDTZJYMNPOBTEHNDKMJMFCBEQTHFDQRQPVDSKJSLCRGVXUIEYOBUFYSCLQXZNTJPEXWYXXAXMUPHKMYKBZFDQCXAECKJJKIBBGJCYRSLOCXCDSGAQYRAUNHUGWLEDPRTTYOBMQJICFWFORZWFFY");
    msg.timeout = 0.8861250808401175;

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
    msg.setTimeStamp(0.24047808003931948);
    msg.setSource(60807U);
    msg.setSourceEntity(124U);
    msg.setDestination(756U);
    msg.setDestinationEntity(133U);
    msg.seq = 39980U;
    msg.sys_dst.assign("JNUZZROKDDLDTXFODNEHSZQCWAVMNFTJSYGZWOYVMPPYGICZXAIOMBBHQGMQMWPIXZPBJGFLFGMNKXFJQFHRADWRWKYSMEQROLPGIALBLIJBHMUMNRAVCQPBIPWJODERFCVXC");
    msg.timeout = 0.4363908049320383;

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
    msg.setTimeStamp(0.676542056471862);
    msg.setSource(5386U);
    msg.setSourceEntity(46U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(46U);
    msg.action = 253U;
    msg.longain = 0.7324153567646774;
    msg.latgain = 0.8031641733902138;
    msg.bondthick = 4055208330U;
    msg.leadgain = 0.9019227844476402;
    msg.deconflgain = 0.2575095812686945;

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
    msg.setTimeStamp(0.18700834834675983);
    msg.setSource(3802U);
    msg.setSourceEntity(38U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(169U);
    msg.action = 248U;
    msg.longain = 0.9187200579660326;
    msg.latgain = 0.2697742753256678;
    msg.bondthick = 3486143821U;
    msg.leadgain = 0.5327467227492132;
    msg.deconflgain = 0.22727087603478513;

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
    msg.setTimeStamp(0.6680623213874948);
    msg.setSource(48665U);
    msg.setSourceEntity(244U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(110U);
    msg.action = 247U;
    msg.longain = 0.6627998842521712;
    msg.latgain = 0.8184578230754398;
    msg.bondthick = 1540800199U;
    msg.leadgain = 0.42753584156763025;
    msg.deconflgain = 0.3891447705846841;

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
    msg.setTimeStamp(0.3584157068251589);
    msg.setSource(46048U);
    msg.setSourceEntity(89U);
    msg.setDestination(53326U);
    msg.setDestinationEntity(200U);
    msg.err_mean = 0.24687351171695027;
    msg.dist_min_abs = 0.0029564714964881444;
    msg.dist_min_mean = 0.13722632008929392;

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
    msg.setTimeStamp(0.740867050678743);
    msg.setSource(25288U);
    msg.setSourceEntity(153U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(244U);
    msg.err_mean = 0.5390803399236599;
    msg.dist_min_abs = 0.27035108210875447;
    msg.dist_min_mean = 0.1533942671900994;

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
    msg.setTimeStamp(0.7417870981551739);
    msg.setSource(5337U);
    msg.setSourceEntity(196U);
    msg.setDestination(62080U);
    msg.setDestinationEntity(54U);
    msg.err_mean = 0.05641752034578695;
    msg.dist_min_abs = 0.12400187535454976;
    msg.dist_min_mean = 0.5085249847349442;

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
    msg.setTimeStamp(0.9044923118981284);
    msg.setSource(764U);
    msg.setSourceEntity(165U);
    msg.setDestination(5614U);
    msg.setDestinationEntity(13U);
    msg.action = 79U;
    msg.lon_gain = 0.2123170486804169;
    msg.lat_gain = 0.4200054857641409;
    msg.bond_thick = 0.31671673367734;
    msg.lead_gain = 0.4209596669342244;
    msg.deconfl_gain = 0.27508444026319245;
    msg.accel_switch_gain = 0.8579181323891372;
    msg.safe_dist = 0.7388175128384793;
    msg.deconflict_offset = 0.43246737200974084;
    msg.accel_safe_margin = 0.5186916272518048;
    msg.accel_lim_x = 0.6915053690066009;

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
    msg.setTimeStamp(0.4982678164793436);
    msg.setSource(26618U);
    msg.setSourceEntity(26U);
    msg.setDestination(56716U);
    msg.setDestinationEntity(240U);
    msg.action = 13U;
    msg.lon_gain = 0.5709590685245438;
    msg.lat_gain = 0.23397622265009266;
    msg.bond_thick = 0.282646844536823;
    msg.lead_gain = 0.39297525131838684;
    msg.deconfl_gain = 0.9235132221953398;
    msg.accel_switch_gain = 0.13792066320831264;
    msg.safe_dist = 0.09716241497213884;
    msg.deconflict_offset = 0.9189071006476809;
    msg.accel_safe_margin = 0.709780643088961;
    msg.accel_lim_x = 0.6347967143728768;

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
    msg.setTimeStamp(0.2722138495372889);
    msg.setSource(61204U);
    msg.setSourceEntity(144U);
    msg.setDestination(6125U);
    msg.setDestinationEntity(60U);
    msg.action = 11U;
    msg.lon_gain = 0.8814090730086853;
    msg.lat_gain = 0.5027125260154595;
    msg.bond_thick = 0.11803249520808612;
    msg.lead_gain = 0.7431297058023304;
    msg.deconfl_gain = 0.9422533291234932;
    msg.accel_switch_gain = 0.03159139652863807;
    msg.safe_dist = 0.2711496483130956;
    msg.deconflict_offset = 0.7389350527494987;
    msg.accel_safe_margin = 0.5567340624523971;
    msg.accel_lim_x = 0.29099861736564825;

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
    msg.setTimeStamp(0.07666348673843093);
    msg.setSource(44997U);
    msg.setSourceEntity(170U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(102U);
    msg.type = 222U;
    msg.op = 52U;
    msg.err_mean = 0.4150610466999717;
    msg.dist_min_abs = 0.399682406288864;
    msg.dist_min_mean = 0.4077363225703723;
    msg.roll_rate_mean = 0.9229757908754697;
    msg.time = 0.7597515933896369;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 40U;
    tmp_msg_0.lon_gain = 0.6841319022691155;
    tmp_msg_0.lat_gain = 0.827195046376548;
    tmp_msg_0.bond_thick = 0.6630382891620369;
    tmp_msg_0.lead_gain = 0.4251240098770003;
    tmp_msg_0.deconfl_gain = 0.008901925440720215;
    tmp_msg_0.accel_switch_gain = 0.3107874641406482;
    tmp_msg_0.safe_dist = 0.8341474264879235;
    tmp_msg_0.deconflict_offset = 0.41062833726604486;
    tmp_msg_0.accel_safe_margin = 0.9704320820644344;
    tmp_msg_0.accel_lim_x = 0.19368814125737766;
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
    msg.setTimeStamp(0.6613546854183007);
    msg.setSource(53589U);
    msg.setSourceEntity(183U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(233U);
    msg.type = 171U;
    msg.op = 142U;
    msg.err_mean = 0.009065513783209633;
    msg.dist_min_abs = 0.9810032088387983;
    msg.dist_min_mean = 0.418529507693828;
    msg.roll_rate_mean = 0.13345912556686912;
    msg.time = 0.22827244936105506;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.3533223781752749;
    tmp_msg_0.lat_gain = 0.39788228897062106;
    tmp_msg_0.bond_thick = 0.5289429667106563;
    tmp_msg_0.lead_gain = 0.8795293432367829;
    tmp_msg_0.deconfl_gain = 0.2791449993132984;
    tmp_msg_0.accel_switch_gain = 0.6947102789604963;
    tmp_msg_0.safe_dist = 0.28504801969389204;
    tmp_msg_0.deconflict_offset = 0.7835075740770017;
    tmp_msg_0.accel_safe_margin = 0.5254324312330604;
    tmp_msg_0.accel_lim_x = 0.1773589814879286;
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
    msg.setTimeStamp(0.08055391700877057);
    msg.setSource(56346U);
    msg.setSourceEntity(168U);
    msg.setDestination(9366U);
    msg.setDestinationEntity(168U);
    msg.type = 238U;
    msg.op = 71U;
    msg.err_mean = 0.6229600432835919;
    msg.dist_min_abs = 0.981509628023555;
    msg.dist_min_mean = 0.5744231562918507;
    msg.roll_rate_mean = 0.3454248423497226;
    msg.time = 0.6539551786323757;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.5494990392325174;
    tmp_msg_0.lat_gain = 0.8335636581119226;
    tmp_msg_0.bond_thick = 0.4306256384078666;
    tmp_msg_0.lead_gain = 0.4955753918836562;
    tmp_msg_0.deconfl_gain = 0.5701895829391433;
    tmp_msg_0.accel_switch_gain = 0.24123527349988727;
    tmp_msg_0.safe_dist = 0.41202609442848226;
    tmp_msg_0.deconflict_offset = 0.39192110426407756;
    tmp_msg_0.accel_safe_margin = 0.6145937971335743;
    tmp_msg_0.accel_lim_x = 0.6587869510661234;
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
    msg.setTimeStamp(0.8659436347151672);
    msg.setSource(33070U);
    msg.setSourceEntity(223U);
    msg.setDestination(61237U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.6360173513884528;
    msg.lon = 0.9854406566104096;
    msg.eta = 3649236108U;
    msg.duration = 53960U;

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
    msg.setTimeStamp(0.9800567000984378);
    msg.setSource(59668U);
    msg.setSourceEntity(176U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.872071311934996;
    msg.lon = 0.16862009906598396;
    msg.eta = 271294061U;
    msg.duration = 57921U;

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
    msg.setTimeStamp(0.3315440418251173);
    msg.setSource(21129U);
    msg.setSourceEntity(12U);
    msg.setDestination(18820U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.8338903138303282;
    msg.lon = 0.24608715230592126;
    msg.eta = 1994214260U;
    msg.duration = 5138U;

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
    msg.setTimeStamp(0.7800683649663471);
    msg.setSource(22379U);
    msg.setSourceEntity(151U);
    msg.setDestination(36374U);
    msg.setDestinationEntity(183U);
    msg.plan_id = 37069U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.009446630582439441;
    tmp_msg_0.lon = 0.9108329389497788;
    tmp_msg_0.eta = 3092363844U;
    tmp_msg_0.duration = 59510U;
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
    msg.setTimeStamp(0.6786655864142617);
    msg.setSource(3789U);
    msg.setSourceEntity(141U);
    msg.setDestination(11941U);
    msg.setDestinationEntity(50U);
    msg.plan_id = 24389U;

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
    msg.setTimeStamp(0.7693580011438269);
    msg.setSource(55870U);
    msg.setSourceEntity(35U);
    msg.setDestination(41719U);
    msg.setDestinationEntity(67U);
    msg.plan_id = 11091U;

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
    msg.setTimeStamp(0.28997130289540163);
    msg.setSource(51636U);
    msg.setSourceEntity(67U);
    msg.setDestination(29455U);
    msg.setDestinationEntity(176U);
    msg.type = 205U;
    msg.command = 99U;
    msg.settings.assign("EHPCRJBFNWIUPXYDPVJDYIWXTEPICNLCAGHLBIRZTEAZDVLOWNHQGEGMJTKAWOIMNSVRXJKVGRALZPZTUYUOQBL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 58073U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.44005742936765313;
    tmp_tmp_msg_0_0.lon = 0.6706793602355363;
    tmp_tmp_msg_0_0.eta = 3363473964U;
    tmp_tmp_msg_0_0.duration = 63641U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SVJGAUEAADSYOETZGVQGGSVLGLURXJXSYCXCNBFYHHQQMXTXFQIUDGPMUOFWHKNGWIPLGZZNONHNGMTHTDCXEYCHYATLUZKEOITRWBOTXSAYOKVOFCFJEKRMOLYVQIYZJSCERKEAZPMKXLZFKGFLZBMJUINMUTUFFPHPJBZABJWSJLIRPCRNBJSVNOWTPBWMIVMRPWJYCOIQBWLQHRRDYACHLQK");

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
    msg.setTimeStamp(0.2623962288492421);
    msg.setSource(4943U);
    msg.setSourceEntity(147U);
    msg.setDestination(28214U);
    msg.setDestinationEntity(156U);
    msg.type = 121U;
    msg.command = 216U;
    msg.settings.assign("NASNNUVFGTZWAZKILMWGXULYGMMUFIOGYOQQXUQGGJBAMIRBWOQSLRVGWOOFRUPBGYRCNFNVMDMBPDUPSXLEHKCDJKABLAFKXIMAFKCHTQLRDKIPERKMTWHDAEPDPZDSLWAHSPWIFJCJXQYNBCWPTICTUNPZVACZSUKNETDBBQYMDYYZXZOSOESHJYJSHJNCLZEWMNFVIVJEOLFREXIPVBQZEHJIXGKHZBCYQVFXTJYUCT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 58624U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9275138295765124;
    tmp_tmp_msg_0_0.lon = 0.23509731561975988;
    tmp_tmp_msg_0_0.eta = 1652054798U;
    tmp_tmp_msg_0_0.duration = 13991U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MHOXHNNDUUFDUJNQTGPRCYGKFPKRYISEWFKINJSBIGAMKLLVNWVNUQUCFTRECDRQPLMBQORPXLXPYAUTJIHMFUCBOCASYAAPSTYBTOOZPWGCEYQKYNFSPLBHOGQPLVXGNPCJVOFOMJMOUHUFSEVBDILVBTZEKAZESC");

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
    msg.setTimeStamp(0.42737264444533873);
    msg.setSource(58863U);
    msg.setSourceEntity(48U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(52U);
    msg.type = 163U;
    msg.command = 233U;
    msg.settings.assign("YRPGGACEBOMPDZEPPVWGXJMQXOJYNYCAZTEQJMXQAEVIAFRTQLRRFWKSISSJIKKRJVZQVAYJKNETDXXRIDWPSMPYLMSETEHVDUYDTNOXEQICLHFZGDBYNWXRTTLUZKAOKFHSHLOHGCWQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 13057U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7831950814189702;
    tmp_tmp_msg_0_0.lon = 0.44388999989952693;
    tmp_tmp_msg_0_0.eta = 857401165U;
    tmp_tmp_msg_0_0.duration = 30023U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KPTANZGEWNEJSPDFPVYVGZZBVPFUVIQWKUNZDQWZLRQJQWEGGUCMEWIDJGLHKDTMIPFHOPEBJXOCVTCWLKWQNXKJMKFSVGHCBTOWXRMSEFKEEPYXBIRSGNXKRFZIYUUHLEUJPZCVOZATOYNPCNADQCSCYCGUA");

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
    msg.setTimeStamp(0.1921134187011232);
    msg.setSource(59983U);
    msg.setSourceEntity(56U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(162U);
    msg.state = 168U;
    msg.plan_id = 27907U;
    msg.wpt_id = 231U;
    msg.settings_chk = 59663U;

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
    msg.setTimeStamp(0.07238053278891221);
    msg.setSource(46412U);
    msg.setSourceEntity(85U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(39U);
    msg.state = 215U;
    msg.plan_id = 2467U;
    msg.wpt_id = 44U;
    msg.settings_chk = 10146U;

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
    msg.setTimeStamp(0.04059722589396719);
    msg.setSource(7824U);
    msg.setSourceEntity(45U);
    msg.setDestination(43891U);
    msg.setDestinationEntity(35U);
    msg.state = 206U;
    msg.plan_id = 41510U;
    msg.wpt_id = 51U;
    msg.settings_chk = 3308U;

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
    msg.setTimeStamp(0.7503373082627856);
    msg.setSource(25112U);
    msg.setSourceEntity(233U);
    msg.setDestination(7840U);
    msg.setDestinationEntity(245U);
    msg.uid = 11U;
    msg.frag_number = 200U;
    msg.num_frags = 18U;
    const signed char tmp_msg_0[] = {-45, 111, 114, -96, 55, 70, 112, -91, 98, -11, -61, -99, 20, -37, -68, 79, 31, 103, 115, 9, -121, 71, -28, 101, 20, -99, 92, 13, 51, 32, -78, 78, 48, -4, -98, 96, 62, -6, -110, -100, 52, 37, -4, -31, -7, -27, 34, 106, 94, -2, -60, 125, -24, -35, 118, -52, 32, 50, 35, -62, -102, -29, 85, 48, -45, -50, 30, 108, -41, 71, -99, -69, 119, -36, -118, 36, -118, 57, 6, -105, -71, -112, 68, -13, 38, -87, -14, 105, -83, -74, 34, 104, 16, 28, -93, 0, 124, -100, 96, 91, 39, 20, -95, 31, 113, -119, 53, -113, 19, -59, 3, -18, -7, 93, 23, -112, -46, -37, 1, -19, 42, 55, -36, -99, -23, 47, 104, 71, -96, 54, 39, -62, 94, -104, -11, 123, -121, -25, -3, -127, 10, -73, -6, 55, 111, -106, -55, 82, -72, 110, 22, -71, -43, -93, -109, -16, -9, 84, -60, 114, 34, -79, -128, -116, -75, -107, -103, -57, -125, 86, -17, -100, -67, 16, 15, 51, -50, 80, -59, 5, 98, -26, -67, 115, -13, -95, 103, 51, -78, 62, 10, -93, 67, -44, -99, -101, -114, 79, 110, 121, 36, 106, 109, -3, 44, -30, -41, 44, -113, -117, 94, -58, -50, -111, 17, 92, 106, -86, 6, 32, -128, 59, -17, 68, -25};
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
    msg.setTimeStamp(0.7620534116050149);
    msg.setSource(58866U);
    msg.setSourceEntity(1U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(54U);
    msg.uid = 186U;
    msg.frag_number = 241U;
    msg.num_frags = 7U;
    const signed char tmp_msg_0[] = {9, 40, -49, 118, -46, 87, -110, -20, -50, 47, -55, 101, 84, 41, 66, 28, -124, -107, 113, -28, 104, -28, 121, -21, 30, -16, 15, 103, -126, 15, 23, -34, 36, 81, -95, 36, -83, -46, 105, 68, 16, -45, -125, 9, -85, 125, -25, -86, -118, -124, -28, 28, 68, -18, -96, -36, 110, -54, -23, 66, 73, 3, -108, -17, -60, 126, -4, -96, -124, -121, 93, -98, 85, -3, -50, -14, 17, -49, 92, 112, 121, -44, -97, 119, 125, -118, 119, -93, 47, 56, -17, -98, 50, 80, 78, -39, -7, 57, 117, -42, -46, -122, -94, 80, 92, -48, -125, 22, -83, -30, -99, -18, -42, -48, -122, -81, -22, -46, -127, 39, -51, -16, 124, 92, 21, -15, 83, -122, 31, 13, 87, -53, 58, -71, 2, 68, 48, -17, 49, -123, -45, 93, 114, 25, -50, 86, -30, -66, 80, 123, 107, -105, -47, 32, 61, -121, -106, 73, 74, -88, -24, 99, -93, -44, 49, 1, 28, 105, 110, -15, 89, -32, 7, -60, 14, -7, -11, -48, -4, 10, -122, -88, 91, -62, -12, -38, -36, 1, -55, -126, 82, -55, -102, -91, 117, 109, -40, -123, 112, -38, 71, -68, -105, 31, 11, 20, 80, 17, -117, 12, 102};
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
    msg.setTimeStamp(0.19354027915016392);
    msg.setSource(12855U);
    msg.setSourceEntity(121U);
    msg.setDestination(35679U);
    msg.setDestinationEntity(157U);
    msg.uid = 157U;
    msg.frag_number = 3U;
    msg.num_frags = 180U;
    const signed char tmp_msg_0[] = {-13, -75, -118, 62, 72, -6, 117, -15, 114, -89, 87, -85, -77, -106, -107, -100, -6, -19, 62, -70, -90, -116, 68, -99, -123, -66, 87, -69, -35, 63, -46, -37, -76, 17, -63, -81, 82, -111, -87, 22, -51, 4, 105, 110, 60, -56, -118, 124, 34, -70, 124, 72, 53, 96, 42, 68, 43, 34, -100, 45, 82, -95, -102, -100, -63, -128, -108, -10, -26, 119, 46, 22, -64, 112, -58, -84, -5, 113, 78, 72, 112, -92, 17, -96, -103, 78, -13, 115, -92, 41, 13, -4, -105, 106, 30, -36, 35, -62, -4, -37, 44, 57, 64, 55, 62, 95, -25, 34, 27, -70, -86, -17, -75, -120, 26, -45, -62, 95, -89, 125, -1, 110, 95, -47, -8, -77, -69, -60, 8, -87, -82, 94, 96, -74, -46, -85, -48, -59, -10, -16, -41, 105, 90, -83, -80, -105, 68, -35};
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
    msg.setTimeStamp(0.5376043294712253);
    msg.setSource(12501U);
    msg.setSourceEntity(19U);
    msg.setDestination(28830U);
    msg.setDestinationEntity(34U);
    msg.content_type.assign("SGUYTWRPBPNID");
    const signed char tmp_msg_0[] = {-31, -53, -121, -98, 114, -77, -82, -45, -45, -45, 92, -64, 53, -40, -68};
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
    msg.setTimeStamp(0.7606192759042119);
    msg.setSource(14329U);
    msg.setSourceEntity(244U);
    msg.setDestination(34119U);
    msg.setDestinationEntity(119U);
    msg.content_type.assign("CLSZMMMXJIAYQDCHORGQNEGLISHLVLNCCYIZDJTMRUTXPZRMESLQKJYEQTZQJHJVOFUFIGANFBGUUSGMEPLSXUNZSRCBGIHNPGQGQABBEZHPWJFFDCWZWPNKVCYNUXYKKTKEUIWQXBBWWQKULZSVPETXSDWFKDTYXKQJRKDABVOAGVPCCNVBYPMNMMZORUOWLJYNDFGTFLPKIBOHFASEHVTZAOMLJ");
    const signed char tmp_msg_0[] = {-116, -6, 120, 23, -79, 84, -73, -81, 37, -6, -33, 12, 23, -28, 113, -60, -100, -29, -24, 26, -9, -13, 53, 105, -12, -30, -100, -111, -74, -35, 110, -25, 52, 5, 103, -125, 97, 55, 97, 107, -61, -105, -99, -56, -77, -98, 110, -61, -97, 123, -63, -15, 97, 9, -24, -15, 36, -25, 87, -114, -43, -57, -58, -61, -118, 47, -111, 92, -89, -53, -74, 78, -57, 98, 50, -6, 18, -112, 110, 90, 83, -20, -31, 66, 91, 16, 77, 57, -96, 15, 100, 24, 11, 116, -58, -84, -100, -123, -34, -65, 53, 89, -12, 22, 112, -65, -38, -18, -118, -112, 96, -29, -46, -121};
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
    msg.setTimeStamp(0.15513629349737956);
    msg.setSource(14518U);
    msg.setSourceEntity(56U);
    msg.setDestination(40969U);
    msg.setDestinationEntity(90U);
    msg.content_type.assign("WZKVDNDIOBLBTMEHILRXGTNAPYQWFSCMLDMIHCJECOIKPLSNVKYBXBUAB");
    const signed char tmp_msg_0[] = {-123, -107, 111, -103, 80, 123, 1, 17, -52, 106, -7, 120, 36, -80, -123, -59, -89, 124, 62, 5, -30, -61, -114, 126, -120, -38, 66, -99, 8, -72, 19, -14, -48, -127, -124, -42, -36, -104, -15, 44, 116, 106, -98, -6, -9, 34, 33, 63, -68, -102, -11, -67, -98, -96, -38, -28, -25, 18, -39, 100, -41, 104, 47, 4, 2, 32, 105, -54, -42, 3, -21, 104, 125, -109, -94, -80, -6, 112, 87, 62, 95, 21, 27, 19, 48, -19, -75, -98, -67, 52, 45, 14, 0, -49, -43, 32, 124, 126, 22, -54, -128, 15, 121, -60, 108, 46, -97, -36, -121, -117, 12, -119, -47, -120, -128, -25, 119, -59, 17, 23, 55, -16, -62, -61, -48, 17, -18, -100, 25, 62, -17, 5, 85, -91, 118, -122, 115, -111, 4, 50, 10, 8, 59, -18, -61, 25, -118, 11, 2, -77, -14, -29, -78, -24, -88, -89, 13, 116, 13, 87, 94, -1, 50, -45, 18, -15, -25, -69, 7, 61, -4, -71, -49, -44, 90, 90, -13, 75, -38, -3, -83, -104, -73, 59, -85, 43, -56, -28, -67, 51, -105, -125, 37, -66, -64, 41, 6, 37, -89, -89, -50, 109, -117, -68, -86, 55, 32, 80, -112, -75, -48, 103, -30, 33, -57, -7};
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
    msg.setTimeStamp(0.26197898120128005);
    msg.setSource(11369U);
    msg.setSourceEntity(230U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.5322443148596142);
    msg.setSource(31665U);
    msg.setSourceEntity(187U);
    msg.setDestination(39980U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.6720964151631089);
    msg.setSource(43531U);
    msg.setSourceEntity(14U);
    msg.setDestination(37315U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.9756986298323538);
    msg.setSource(49293U);
    msg.setSourceEntity(72U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(163U);
    msg.target = 59404U;
    msg.bearing = 0.5149104164654356;
    msg.elevation = 0.07991505022230272;

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
    msg.setTimeStamp(0.03483943090653929);
    msg.setSource(35847U);
    msg.setSourceEntity(253U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(21U);
    msg.target = 58337U;
    msg.bearing = 0.3279141199515868;
    msg.elevation = 0.6980015495387965;

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
    msg.setTimeStamp(0.9799957835236813);
    msg.setSource(17344U);
    msg.setSourceEntity(21U);
    msg.setDestination(65318U);
    msg.setDestinationEntity(107U);
    msg.target = 43559U;
    msg.bearing = 0.8165747279861473;
    msg.elevation = 0.8928401937064048;

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
    msg.setTimeStamp(0.47564424615477296);
    msg.setSource(20305U);
    msg.setSourceEntity(187U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(64U);
    msg.target = 54554U;
    msg.x = 0.3983840495359152;
    msg.y = 0.7448671481253585;
    msg.z = 0.04963730914507103;

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
    msg.setTimeStamp(0.9933836042331619);
    msg.setSource(40127U);
    msg.setSourceEntity(159U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(143U);
    msg.target = 6273U;
    msg.x = 0.1094606409452582;
    msg.y = 0.14084652557909105;
    msg.z = 0.013581920170652184;

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
    msg.setTimeStamp(0.3252299818494143);
    msg.setSource(6453U);
    msg.setSourceEntity(240U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(39U);
    msg.target = 9217U;
    msg.x = 0.5925950537009675;
    msg.y = 0.43171078802772644;
    msg.z = 0.062304952939768676;

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
    msg.setTimeStamp(0.1657028770021005);
    msg.setSource(65336U);
    msg.setSourceEntity(223U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(109U);
    msg.target = 49827U;
    msg.lat = 0.17602260811800385;
    msg.lon = 0.0034354933746814087;
    msg.z_units = 49U;
    msg.z = 0.5419800209486837;

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
    msg.setTimeStamp(0.10303048260857306);
    msg.setSource(63449U);
    msg.setSourceEntity(18U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(9U);
    msg.target = 29352U;
    msg.lat = 0.89384314698648;
    msg.lon = 0.8278221323408466;
    msg.z_units = 20U;
    msg.z = 0.2297568853513573;

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
    msg.setTimeStamp(0.7471357720023393);
    msg.setSource(58179U);
    msg.setSourceEntity(220U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(123U);
    msg.target = 25871U;
    msg.lat = 0.7139452749345547;
    msg.lon = 0.0018474693534964448;
    msg.z_units = 236U;
    msg.z = 0.6665080192527816;

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
    msg.setTimeStamp(0.31269692391787474);
    msg.setSource(43541U);
    msg.setSourceEntity(175U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(34U);
    msg.locale.assign("CUHJBGWBATIDZINFSLUHGMLYKVWXAJHANMXJCAGUPRVMMYLOYTQNSQRXDPGMGPCUSJUFSFWQQVDOEKNMDHXGTO");
    const signed char tmp_msg_0[] = {58, -76, 69, -104, 61, -95, -47, 101, -94, -15, 81, 104, 51, -128, -43, -79, -57, 70, -105, -111, -19, 88, -20, 114, 4, -58, 61, -85, -44, 122, 102, -98, 71, -102, -27, 121, -76, -6, 88, 54, 17, 55, -24, -46, -34, -61, -60, -80, 19, -78, 7, -51, -19, -20, 31, -30, -32, 118, -41, 1, -36, -85, -67, 102, -36, -109, 2, -39, 43, -28, -68, 92, 93, -36, 93, -51, -92, -5, -15, -103, 0, 124, 11, -97, 79, -110, -79, -51, -72, -16, -80, 8, -50, 35, -111, -113, -35, -14, 69, 78};
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
    msg.setTimeStamp(0.8555048378572377);
    msg.setSource(419U);
    msg.setSourceEntity(246U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(160U);
    msg.locale.assign("MRPMQJCUSLBTACDBFUX");
    const signed char tmp_msg_0[] = {-116, -24, 8, -117, -1, 21, -37, -64, -4, -102, 14, -105, -6, 7, 38, 75, 125, 114, -120, -45, -101, -19, 11, -121, -2, -7, 101, 102, 85, -70, -58, -59, -115, -114, -51, 114, 84, -112, -69, -55, 95, -43, 56, 36, 7, -42, -30, -17, 120, -36, -97, -72, -125, -49, -88, 84, 54, 42, 58, 29, -13, 83, 2, -116, 88, 28, 89, 98, 66, -48, 20, -1, 90, -67, 98, 71, -17, -100, -62, 109, 16, 16, 100, -121, 31, -107, -33, -45, 40, -37, 114, -34, -38, 46, 84, 121, -23, -24, -101, 113, 96, 47, 58, 62, 35, -29, -115, -9, 27, -36, -123, 46, -75, 69, 87, 33, 7, -1, -52, -63, -92, 7, -63, 113, 107, 40, -48, 79, 33, 38, 72, -32, -10, -15, -47, 67, -64, 122, 43, 54, 56, -104, 97, -115, -107, -6, -80, -10, -118, -123, 56, -100, 8, -128, 97, 85, -24, -105, -75, -25, -75, 93, 46, -74, 83, -34, -89, 59, 121, 122, 103, 53, -39, 44, -32, 19, -37, 5, -127, 111, -30, 101, -1, -58, 5, -114, 72, -104, 98, -71, -60, 121, 28, -74, 33, -73, 113, -116, -31, 85, 39, -65, -125, -79, 20, -116, 109, 116, -11, -117, -17, -118, 35, 74, 44, 37, -14, -13, -25, -70, 22, -53};
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
    msg.setTimeStamp(0.9897565155612363);
    msg.setSource(15905U);
    msg.setSourceEntity(29U);
    msg.setDestination(25623U);
    msg.setDestinationEntity(81U);
    msg.locale.assign("GKLHWSEPHUXHAVXVETCLPKPSETNKZYJARSIVOPQUFDLYSUFIMDZRGKKOEBFZGJRSEXGBMEFIBFOBNSNBHJPFIVWAMHPNBLIUHFHXXHAKZMIKOTFLDQDWWIUQJEGWLYIMNZCIBNPORUYOWSZETZOCGVAGEZDQDBWEW");
    const signed char tmp_msg_0[] = {118, 54, 52, 116, 8, 106, 32, 41, 93, -38, -48, 52, 78, 112, -112, -75, -128, -111, 79, 29, -128, 77, -115, -65, -18, -91, -96, 26, 80, 29, -5, 88, -55, 84, 88, 16, 58, -75, -16, -22, 84, 68, 36, 49, 2, -9, -48, -28, 23, -12, -5, 85, 31, 32, -76, 91, 59, 111, -6, -24, 75, -91, -95, -93, -90, -110, 6, 114, -118, 0, 68, -22, -63, 117, -5, -32, -52, -81, 36, 0, 72, -30, -43, -125, -21, -80, 31, 32, -73};
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
    msg.setTimeStamp(0.43579531576888175);
    msg.setSource(44304U);
    msg.setSourceEntity(181U);
    msg.setDestination(28538U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.7878944672198271);
    msg.setSource(5311U);
    msg.setSourceEntity(80U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.3907033695416712);
    msg.setSource(24694U);
    msg.setSourceEntity(25U);
    msg.setDestination(26434U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.726944513118125);
    msg.setSource(22704U);
    msg.setSourceEntity(202U);
    msg.setDestination(59405U);
    msg.setDestinationEntity(106U);
    msg.camid = 100U;
    msg.x = 19384U;
    msg.y = 43187U;

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
    msg.setTimeStamp(0.009924852155015929);
    msg.setSource(16110U);
    msg.setSourceEntity(82U);
    msg.setDestination(55300U);
    msg.setDestinationEntity(230U);
    msg.camid = 203U;
    msg.x = 28848U;
    msg.y = 31892U;

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
    msg.setTimeStamp(0.8761966207817737);
    msg.setSource(37517U);
    msg.setSourceEntity(231U);
    msg.setDestination(24981U);
    msg.setDestinationEntity(222U);
    msg.camid = 52U;
    msg.x = 12977U;
    msg.y = 48405U;

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
    msg.setTimeStamp(0.43951116164731674);
    msg.setSource(35439U);
    msg.setSourceEntity(219U);
    msg.setDestination(18554U);
    msg.setDestinationEntity(183U);
    msg.camid = 79U;
    msg.x = 62939U;
    msg.y = 36542U;

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
    msg.setTimeStamp(0.5291769959469079);
    msg.setSource(28732U);
    msg.setSourceEntity(8U);
    msg.setDestination(41496U);
    msg.setDestinationEntity(150U);
    msg.camid = 97U;
    msg.x = 16820U;
    msg.y = 7354U;

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
    msg.setTimeStamp(0.5705288139498698);
    msg.setSource(38911U);
    msg.setSourceEntity(230U);
    msg.setDestination(3152U);
    msg.setDestinationEntity(183U);
    msg.camid = 113U;
    msg.x = 51696U;
    msg.y = 3241U;

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
    msg.setTimeStamp(0.3232680942819355);
    msg.setSource(9010U);
    msg.setSourceEntity(67U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(180U);
    msg.tracking = 159U;
    msg.lat = 0.4296801560653637;
    msg.lon = 0.5131932372288844;
    msg.x = 0.9247614485390834;
    msg.y = 0.5169403533118905;
    msg.z = 0.19038456482085475;

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
    msg.setTimeStamp(0.5213206298459396);
    msg.setSource(52124U);
    msg.setSourceEntity(132U);
    msg.setDestination(3351U);
    msg.setDestinationEntity(159U);
    msg.tracking = 248U;
    msg.lat = 0.7518183410200595;
    msg.lon = 0.8637882539533084;
    msg.x = 0.9810182790942594;
    msg.y = 0.9654195003279705;
    msg.z = 0.8719550649633468;

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
    msg.setTimeStamp(0.565608972057239);
    msg.setSource(33915U);
    msg.setSourceEntity(222U);
    msg.setDestination(59372U);
    msg.setDestinationEntity(0U);
    msg.tracking = 66U;
    msg.lat = 0.3280014504441532;
    msg.lon = 0.8400035226269963;
    msg.x = 0.9731438506679339;
    msg.y = 0.5411254082283411;
    msg.z = 0.7416332873072295;

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
    msg.setTimeStamp(0.7808147806082282);
    msg.setSource(13697U);
    msg.setSourceEntity(108U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(240U);
    msg.target.assign("INOTQDIUZCYJPJZFFXNJE");
    msg.lbearing = 0.36506540986919067;
    msg.lelevation = 0.9208298121355066;
    msg.bearing = 0.09750422472167364;
    msg.elevation = 0.9333484630095661;
    msg.phi = 0.8142369927566113;
    msg.theta = 0.26697214505253586;
    msg.psi = 0.8524320534777002;
    msg.accuracy = 0.3220990667387298;

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
    msg.setTimeStamp(0.536686037187011);
    msg.setSource(62363U);
    msg.setSourceEntity(17U);
    msg.setDestination(23332U);
    msg.setDestinationEntity(66U);
    msg.target.assign("CKJUPAZXDFJZNLBPWRVMCPELNKEFTVSRVPU");
    msg.lbearing = 0.7400852702816852;
    msg.lelevation = 0.26174820155730816;
    msg.bearing = 0.368362803547694;
    msg.elevation = 0.2197753572847948;
    msg.phi = 0.9476987867284875;
    msg.theta = 0.5772465529251016;
    msg.psi = 0.006035412696553277;
    msg.accuracy = 0.5497805524378369;

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
    msg.setTimeStamp(0.08512583704591392);
    msg.setSource(22305U);
    msg.setSourceEntity(166U);
    msg.setDestination(62136U);
    msg.setDestinationEntity(230U);
    msg.target.assign("WHIRDBXGVFKQGNHATOFHPEYZYMOVLMTIJKLEUDABHKRVJCCCLWRYVGOQAISZYUVCMAEZIXIXQCSFYRERLKSEGMXSSOQAUVXFFPJCZLXVWVTQKGAQGDVFTVJSPLNELAXLOWSBOMJLPZFJFITSJXZBHEYYMNMTNNFMQNGYUIJCGBNDUNHOATIWOZRAHWGSKHPX");
    msg.lbearing = 0.03719781015147172;
    msg.lelevation = 0.22653730918111192;
    msg.bearing = 0.6462102989500532;
    msg.elevation = 0.13892554451935002;
    msg.phi = 0.10025235662042231;
    msg.theta = 0.15131862667230211;
    msg.psi = 0.9840911751981569;
    msg.accuracy = 0.5212011352107215;

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
    msg.setTimeStamp(0.24429139460933846);
    msg.setSource(14019U);
    msg.setSourceEntity(134U);
    msg.setDestination(36498U);
    msg.setDestinationEntity(13U);
    msg.target.assign("DDXFJKTIMNXPLYWKADXBFQNKRAFCUPVSHKDAVEHRYCXFHQHFXBDIMCOWAJJJUGBBISPWRMORJGVKPEUNOZPNVDLZYNUOWLOJS");
    msg.x = 0.053679927543131;
    msg.y = 0.29791983258415133;
    msg.z = 0.4688968048679867;
    msg.n = 0.9152484811759292;
    msg.e = 0.5541240211587858;
    msg.d = 0.696178166674094;
    msg.phi = 0.06690740255851879;
    msg.theta = 0.22833847385822226;
    msg.psi = 0.4014111983171649;
    msg.accuracy = 0.4613177122365797;

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
    msg.setTimeStamp(0.6042073970220746);
    msg.setSource(48002U);
    msg.setSourceEntity(164U);
    msg.setDestination(19226U);
    msg.setDestinationEntity(223U);
    msg.target.assign("CZQEJYPFOZTRDSCEUMEDYWURANWKTGUZNMSSFWRBVISEQCGGVIYJQMDRHQSKTAHWNIXBTSXZRMPPKANPYRKOABTOXCXMSHVUWKZSOFBAPHPPMYZGNCLIXEVVNNJZRIWVLTF");
    msg.x = 0.45177805529884374;
    msg.y = 0.4928424665910526;
    msg.z = 0.17746892380724577;
    msg.n = 0.36121658303146353;
    msg.e = 0.0371821737778969;
    msg.d = 0.15850073539084342;
    msg.phi = 0.4729443706537948;
    msg.theta = 0.7724469667844611;
    msg.psi = 0.1639194375948292;
    msg.accuracy = 0.8083449824489719;

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
    msg.setTimeStamp(0.6984452369462051);
    msg.setSource(35690U);
    msg.setSourceEntity(35U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(110U);
    msg.target.assign("QYIBVJUARWTXDJBQALZSAOWGXUCLSSLEFXFZZIBORUZKPZBCAOWEFLM");
    msg.x = 0.8785723731409597;
    msg.y = 0.5193105389811966;
    msg.z = 0.9873298833944797;
    msg.n = 0.7730078088197444;
    msg.e = 0.5079313966483661;
    msg.d = 0.764676016361177;
    msg.phi = 0.295481517955951;
    msg.theta = 0.14070779359145658;
    msg.psi = 0.5607520290797071;
    msg.accuracy = 0.7572017564891871;

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
    msg.setTimeStamp(0.8719215091144742);
    msg.setSource(8170U);
    msg.setSourceEntity(162U);
    msg.setDestination(25774U);
    msg.setDestinationEntity(81U);
    msg.target.assign("OPVQZRYFGWAWBEUZBKVOQDYMIQFLSSCDPLFEOBMSJVIMRPGPACYRGWZIHYUNLBKPTZYXUXWJDJFPSTKKYOVUNLNSKKCSNMIFAJVHKQJQHQEUDOKVMMNHRMWVCIMJ");
    msg.lat = 0.3882149593654961;
    msg.lon = 0.27716325564384403;
    msg.z_units = 175U;
    msg.z = 0.20237965750040432;
    msg.accuracy = 0.8406172652644402;

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
    msg.setTimeStamp(0.004246764299890904);
    msg.setSource(30627U);
    msg.setSourceEntity(191U);
    msg.setDestination(22838U);
    msg.setDestinationEntity(221U);
    msg.target.assign("PISUAQATJDXLHBMPLBMQXAUSJRFAUVMRKVNLXYXOKIQXGUZWEJMZKGKUTZNOVUTWYWYIJFTFUHTSSWCLCD");
    msg.lat = 0.6476209988742327;
    msg.lon = 0.7627059096617885;
    msg.z_units = 12U;
    msg.z = 0.11516693852422488;
    msg.accuracy = 0.7189122936284082;

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
    msg.setTimeStamp(0.26440971897162724);
    msg.setSource(34861U);
    msg.setSourceEntity(227U);
    msg.setDestination(14570U);
    msg.setDestinationEntity(16U);
    msg.target.assign("WXICSHWKBLBZIDRDRPEFILUFHCMAKPBUDYWMPLXYOTVMBQFRGGGQCRAAJLNOJXQZZMOAVLUIRPNXZSPSYVIPTLAMKJEQQGBROS");
    msg.lat = 0.02036742942412595;
    msg.lon = 0.538440303954884;
    msg.z_units = 126U;
    msg.z = 0.7843528124763685;
    msg.accuracy = 0.8986320403113361;

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
    msg.setTimeStamp(0.7685850888538674);
    msg.setSource(46559U);
    msg.setSourceEntity(80U);
    msg.setDestination(55586U);
    msg.setDestinationEntity(239U);
    msg.name.assign("JFFXFWHIQHMFAAUHUEPLLZZEZYADHJASADKMDWITIFCMNDPKDONOGBYGBUCHDSMPKXJJEVEOGZWPBHBMIXGTVNXVLPRDXFVZGINBTWGXYKTZUSYDACQGQBRVNEOZMVQQVLNKETY");
    msg.lat = 0.2953122121387288;
    msg.lon = 0.9024902780459158;
    msg.z = 0.7362924960286056;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.4304141536476126);
    msg.setSource(32800U);
    msg.setSourceEntity(162U);
    msg.setDestination(35406U);
    msg.setDestinationEntity(2U);
    msg.name.assign("JEKRAPXCHGRTAVIEGHEQGDJRJKXKVNWSQLNFVONMTNPYTLYIABKUSNLCPLSIAYZFIARFQYHIJEYBSQUAOIFTXXSUWHGLDNO");
    msg.lat = 0.022915491208077454;
    msg.lon = 0.8148010049074809;
    msg.z = 0.3495728342285185;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.4924427577332009);
    msg.setSource(10038U);
    msg.setSourceEntity(5U);
    msg.setDestination(23826U);
    msg.setDestinationEntity(203U);
    msg.name.assign("MJPNWWUEOQEJEOBZTQKAVXYKASNHIZOBAAXINPVLSGGENSRXGUOSGOXHLRAOCMQGWQZBLHDGWPERWEONGZKCKEJMRGUYXWXDILLVYCCSUQDTKBCFKRJRPIXAGTJKZILTWDBTBXBHYNQDHUCFLUQQZUVJFSFRPVLFWKRZIZNFVBAOTTVASHMEMVQPJWDMECJOOTDMQPDYPMDPDYIYUNYZ");
    msg.lat = 0.6325647297647284;
    msg.lon = 0.4591585948685183;
    msg.z = 0.8087947542284563;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.974295591368124);
    msg.setSource(55596U);
    msg.setSourceEntity(41U);
    msg.setDestination(1575U);
    msg.setDestinationEntity(136U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.7931738399956864);
    msg.setSource(10137U);
    msg.setSourceEntity(238U);
    msg.setDestination(38916U);
    msg.setDestinationEntity(137U);
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
    msg.setTimeStamp(0.4620931191757178);
    msg.setSource(32518U);
    msg.setSourceEntity(132U);
    msg.setDestination(50357U);
    msg.setDestinationEntity(92U);
    msg.op = 86U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MOSVYMDUDDAZLNGLXXYUBHPNGHGMQGVEHGYOINQZSXPVTWHEIRJWYPNFNKOIVEJIHEXWTVKUXZYLOJCBXBMPRAICBAXMWQRYLYFPRWKKFESLRKGGZSMMSGAQKDEHVBKKOTHQJNVBXIBPHIXULCPJWYAETICNQYJQJCBZGJLTCORDTEUFIZUOAVFLRNTVKBHWDTOPFFMCERJSVFQRRUDQWFJOZPAYATSZUSBKCIMZAQUCEDUCLFSWX");
    tmp_msg_0.lat = 0.23304570737867514;
    tmp_msg_0.lon = 0.13831125708210734;
    tmp_msg_0.z = 0.1382289647814936;
    tmp_msg_0.z_units = 230U;
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
    msg.setTimeStamp(0.03789391483678517);
    msg.setSource(48723U);
    msg.setSourceEntity(123U);
    msg.setDestination(59973U);
    msg.setDestinationEntity(221U);
    msg.value = 0.864337485878086;
    msg.type = 180U;

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
    msg.setTimeStamp(0.208027360969527);
    msg.setSource(16940U);
    msg.setSourceEntity(54U);
    msg.setDestination(56490U);
    msg.setDestinationEntity(0U);
    msg.value = 0.3794083645680718;
    msg.type = 236U;

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
    msg.setTimeStamp(0.690905737061432);
    msg.setSource(3749U);
    msg.setSourceEntity(133U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(6U);
    msg.value = 0.2903447382422223;
    msg.type = 247U;

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
    msg.setTimeStamp(0.9662457057976481);
    msg.setSource(51328U);
    msg.setSourceEntity(152U);
    msg.setDestination(46893U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3611059586496924;

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
    msg.setTimeStamp(0.4412951430416685);
    msg.setSource(58094U);
    msg.setSourceEntity(239U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5054545381466372;

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
    msg.setTimeStamp(0.8402070687726038);
    msg.setSource(65244U);
    msg.setSourceEntity(8U);
    msg.setDestination(18180U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7543231943969496;

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
    msg.setTimeStamp(0.014844085520918426);
    msg.setSource(14278U);
    msg.setSourceEntity(241U);
    msg.setDestination(9329U);
    msg.setDestinationEntity(77U);
    msg.timestamp_last_service = 0.027111421315500928;
    msg.time_next_service = 0.988926173444572;
    msg.time_motor_next_service = 0.15936269776458256;
    msg.time_idle_ground = 0.6933378558334674;
    msg.time_idle_air = 0.3217398311111451;
    msg.time_idle_water = 0.19568579705992895;
    msg.time_idle_underwater = 0.6200379609201744;
    msg.time_idle_unknown = 0.5161333583904746;
    msg.time_motor_ground = 0.6750388368859999;
    msg.time_motor_air = 0.4593457833104567;
    msg.time_motor_water = 0.991971262965292;
    msg.time_motor_underwater = 0.3179857745589256;
    msg.time_motor_unknown = 0.5803852779957595;
    msg.rpm_min = -16777;
    msg.rpm_max = 5134;
    msg.depth_max = 0.7242800045097019;

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
    msg.setTimeStamp(0.4746393985047852);
    msg.setSource(62734U);
    msg.setSourceEntity(4U);
    msg.setDestination(41726U);
    msg.setDestinationEntity(168U);
    msg.timestamp_last_service = 0.9182000586243693;
    msg.time_next_service = 0.6475447494403576;
    msg.time_motor_next_service = 0.3160065196429863;
    msg.time_idle_ground = 0.8683661357095607;
    msg.time_idle_air = 0.30812731649655456;
    msg.time_idle_water = 0.39713543774108506;
    msg.time_idle_underwater = 0.8444870432079833;
    msg.time_idle_unknown = 0.2224376450463127;
    msg.time_motor_ground = 0.06832160987258584;
    msg.time_motor_air = 0.5698970456238763;
    msg.time_motor_water = 0.6393330495259735;
    msg.time_motor_underwater = 0.649068728651042;
    msg.time_motor_unknown = 0.8157595593892094;
    msg.rpm_min = 26526;
    msg.rpm_max = -14294;
    msg.depth_max = 0.15506163837519593;

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
    msg.setTimeStamp(0.6053573680983032);
    msg.setSource(61213U);
    msg.setSourceEntity(52U);
    msg.setDestination(32772U);
    msg.setDestinationEntity(158U);
    msg.timestamp_last_service = 0.11258494325101187;
    msg.time_next_service = 0.6310521580980434;
    msg.time_motor_next_service = 0.8084551806750758;
    msg.time_idle_ground = 0.011141404033581881;
    msg.time_idle_air = 0.8506511927144956;
    msg.time_idle_water = 0.7911074066106292;
    msg.time_idle_underwater = 0.029603875730282447;
    msg.time_idle_unknown = 0.6978090283265339;
    msg.time_motor_ground = 0.5790373588961257;
    msg.time_motor_air = 0.8276783135859602;
    msg.time_motor_water = 0.4165534956441521;
    msg.time_motor_underwater = 0.09270642265435591;
    msg.time_motor_unknown = 0.9849779198970021;
    msg.rpm_min = -8693;
    msg.rpm_max = -1354;
    msg.depth_max = 0.8875005168530344;

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
    msg.setTimeStamp(0.043143883685926476);
    msg.setSource(61560U);
    msg.setSourceEntity(34U);
    msg.setDestination(24022U);
    msg.setDestinationEntity(243U);
    msg.severity = 225U;
    msg.text.assign("BAWDQIZHGKEUJVIYWRUEXPXCSKINJUTZRZNIVJZGDUVILOHACZITSESYMFBBYUDRCNFUJECTDKUQXMHPGNGCODTGYYGFMQTXHEQVBINHGPGYOHJBQOSCHMKWYHOVQIOOAVFWBVHMAMRFCFSXPXZYKWKSOPTDKWMVSLDZSAWKPGNRQLUFGJLEHPCRJNTLDBQRCZFKSLWC");

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
    msg.setTimeStamp(0.19842669682052327);
    msg.setSource(37328U);
    msg.setSourceEntity(80U);
    msg.setDestination(61379U);
    msg.setDestinationEntity(115U);
    msg.severity = 61U;
    msg.text.assign("KIDJNNZUEWSVJHGLQEDJDGFCMWXGOROFCPKIZOLGYIMDZIGCAEEKIAXGNTCCYZAVKFFMUCGWMTZWXKPBUUJMBCQADXYPMHWQLTO");

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
    msg.setTimeStamp(0.29349912406528744);
    msg.setSource(32503U);
    msg.setSourceEntity(28U);
    msg.setDestination(54975U);
    msg.setDestinationEntity(242U);
    msg.severity = 132U;
    msg.text.assign("STXOZJBDUQQNTRUECARGCBJCWNDFYVAHJYDUQEYHLCGZGHXLPSXHATOUPSWEQHQSVOVONEGIWTKRWYVVMLVRFXQWKWNXGTDDCTEGBMHXARLLMAZZHWHRSBDFPKLBKPKBPUODRRSMAJMLZE");

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
    msg.setTimeStamp(0.014810788270531061);
    msg.setSource(22310U);
    msg.setSourceEntity(187U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(175U);
    msg.channel = 118;
    msg.value = 672597926;
    msg.gain = 106U;

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
    msg.setTimeStamp(0.19439460416545584);
    msg.setSource(62705U);
    msg.setSourceEntity(62U);
    msg.setDestination(18660U);
    msg.setDestinationEntity(119U);
    msg.channel = -35;
    msg.value = 457537295;
    msg.gain = 192U;

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
    msg.setTimeStamp(0.7571147731324359);
    msg.setSource(39991U);
    msg.setSourceEntity(49U);
    msg.setDestination(21150U);
    msg.setDestinationEntity(13U);
    msg.channel = -28;
    msg.value = -265987103;
    msg.gain = 89U;

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
    msg.setTimeStamp(0.67081701438248);
    msg.setSource(19258U);
    msg.setSourceEntity(142U);
    msg.setDestination(64010U);
    msg.setDestinationEntity(33U);
    msg.ch01 = 0.3766908631764545;
    msg.ch02 = 0.4356810624495727;
    msg.ch03 = 0.31846137576806854;
    msg.ch04 = 0.272445903019208;
    msg.ch05 = 0.9145572589384942;
    msg.ch06 = 0.7790897797396149;
    msg.ch07 = 0.5495621703019872;
    msg.ch08 = 0.3109149912244158;
    msg.ch09 = 0.8820587678422159;
    msg.ch10 = 0.01037761864918485;
    msg.ch11 = 0.7116136100730539;
    msg.ch12 = 0.4810451560330743;
    msg.ch13 = 0.31862496980697885;
    msg.ch14 = 0.003054411290404291;
    msg.ch15 = 0.257432908506784;
    msg.ch16 = 0.29620684616401627;

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
    msg.setTimeStamp(0.2314045337191184);
    msg.setSource(45876U);
    msg.setSourceEntity(66U);
    msg.setDestination(13085U);
    msg.setDestinationEntity(252U);
    msg.ch01 = 0.8784988722228991;
    msg.ch02 = 0.7873729084219601;
    msg.ch03 = 0.7649539231133945;
    msg.ch04 = 0.6860425505487971;
    msg.ch05 = 0.6186418685165788;
    msg.ch06 = 0.43982094988216636;
    msg.ch07 = 0.31457957968129757;
    msg.ch08 = 0.32787515593358596;
    msg.ch09 = 0.7614129577159329;
    msg.ch10 = 0.5302258357019533;
    msg.ch11 = 0.4463651301551035;
    msg.ch12 = 0.010485300869045533;
    msg.ch13 = 0.29783431949533257;
    msg.ch14 = 0.18608499859750272;
    msg.ch15 = 0.8580720332965989;
    msg.ch16 = 0.17905795633863175;

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
    msg.setTimeStamp(0.7796724644242006);
    msg.setSource(46079U);
    msg.setSourceEntity(198U);
    msg.setDestination(2486U);
    msg.setDestinationEntity(48U);
    msg.ch01 = 0.8668574310378431;
    msg.ch02 = 0.08380388277941198;
    msg.ch03 = 0.05999046471053682;
    msg.ch04 = 0.18481487672880936;
    msg.ch05 = 0.7071435699609647;
    msg.ch06 = 0.3461412220866832;
    msg.ch07 = 0.7798165940477216;
    msg.ch08 = 0.4270936054143465;
    msg.ch09 = 0.8809723810241752;
    msg.ch10 = 0.5603179854434098;
    msg.ch11 = 0.9418055935246108;
    msg.ch12 = 0.17587717116157187;
    msg.ch13 = 0.12216820262345962;
    msg.ch14 = 0.9133875116072093;
    msg.ch15 = 0.09793516927374513;
    msg.ch16 = 0.6558620936694611;

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
    msg.setTimeStamp(0.28320898359205704);
    msg.setSource(63280U);
    msg.setSourceEntity(74U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(19U);
    msg.op = 134U;
    msg.lat = 0.9934700979315606;
    msg.lon = 0.4735095874844446;
    msg.height = 0.8863525565303235;
    msg.depth = 0.7518899881979207;
    msg.alt = 0.48637137892269056;

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
    msg.setTimeStamp(0.38329794780683835);
    msg.setSource(61263U);
    msg.setSourceEntity(188U);
    msg.setDestination(62766U);
    msg.setDestinationEntity(175U);
    msg.op = 109U;
    msg.lat = 0.854551790455945;
    msg.lon = 0.30061799592721705;
    msg.height = 0.31489760168821046;
    msg.depth = 0.9564511904385128;
    msg.alt = 0.5460067340630153;

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
    msg.setTimeStamp(0.876494966736741);
    msg.setSource(17477U);
    msg.setSourceEntity(3U);
    msg.setDestination(15179U);
    msg.setDestinationEntity(147U);
    msg.op = 173U;
    msg.lat = 0.5351988425401104;
    msg.lon = 0.4797960078608958;
    msg.height = 0.47591282309119853;
    msg.depth = 0.6162520909517681;
    msg.alt = 0.7969690337185238;

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
    msg.setTimeStamp(0.1156110203785109);
    msg.setSource(28475U);
    msg.setSourceEntity(76U);
    msg.setDestination(45999U);
    msg.setDestinationEntity(150U);
    msg.nbeams = 42U;
    msg.ncells = 22U;
    msg.coord_sys = 252U;

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
    msg.setTimeStamp(0.24308284356184462);
    msg.setSource(4206U);
    msg.setSourceEntity(205U);
    msg.setDestination(41633U);
    msg.setDestinationEntity(120U);
    msg.nbeams = 34U;
    msg.ncells = 6U;
    msg.coord_sys = 26U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.04470618236642132;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.1441838341908741;
    tmp_tmp_msg_0_0.amp = 0.02863318026851669;
    tmp_tmp_msg_0_0.cor = 139U;
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
    msg.setTimeStamp(0.21719499132617204);
    msg.setSource(23307U);
    msg.setSourceEntity(59U);
    msg.setDestination(63123U);
    msg.setDestinationEntity(221U);
    msg.nbeams = 134U;
    msg.ncells = 160U;
    msg.coord_sys = 135U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4254312471437688;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.635288741479595;
    tmp_tmp_msg_0_0.amp = 0.657470728230876;
    tmp_tmp_msg_0_0.cor = 229U;
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
    msg.setTimeStamp(0.2090950769712402);
    msg.setSource(4578U);
    msg.setSourceEntity(31U);
    msg.setDestination(37148U);
    msg.setDestinationEntity(202U);
    msg.cell_position = 0.5578211222437829;

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
    msg.setTimeStamp(0.6871998542929881);
    msg.setSource(1177U);
    msg.setSourceEntity(76U);
    msg.setDestination(64417U);
    msg.setDestinationEntity(61U);
    msg.cell_position = 0.06743150609594428;

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
    msg.setTimeStamp(0.5321944516415903);
    msg.setSource(19393U);
    msg.setSourceEntity(209U);
    msg.setDestination(31442U);
    msg.setDestinationEntity(93U);
    msg.cell_position = 0.37880119772342713;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.48782484011882943;
    tmp_msg_0.amp = 0.4889894314900106;
    tmp_msg_0.cor = 231U;
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
    msg.setTimeStamp(0.39508534623576275);
    msg.setSource(61935U);
    msg.setSourceEntity(206U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(48U);
    msg.vel = 0.4201864836007736;
    msg.amp = 0.11602122250302005;
    msg.cor = 149U;

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
    msg.setTimeStamp(0.23444406403744256);
    msg.setSource(11821U);
    msg.setSourceEntity(0U);
    msg.setDestination(35174U);
    msg.setDestinationEntity(51U);
    msg.vel = 0.011387918400907582;
    msg.amp = 0.6169411678039098;
    msg.cor = 116U;

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
    msg.setTimeStamp(0.2191987480028339);
    msg.setSource(29256U);
    msg.setSourceEntity(112U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(95U);
    msg.vel = 0.8254639135248366;
    msg.amp = 0.7143262574845959;
    msg.cor = 20U;

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
    msg.setTimeStamp(0.4252227713792647);
    msg.setSource(14828U);
    msg.setSourceEntity(108U);
    msg.setDestination(58519U);
    msg.setDestinationEntity(243U);
    msg.name.assign("VNJZMHXTWRTYPHJTLQFTDYIKPOJJCASQXQFMGFESFIOGKANJAXEMRPOSNDAVTXEEUJCPPALWYZSVOADCVUOMJSXLUBSWRSMLKSMIIYRBQIZWFUUWDCAUNWNZWMQVFHGPJGFK");
    msg.value = 153U;

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
    msg.setTimeStamp(0.06444178065414419);
    msg.setSource(25037U);
    msg.setSourceEntity(109U);
    msg.setDestination(8235U);
    msg.setDestinationEntity(72U);
    msg.name.assign("AWJUQCFITKRCYMGXWWDDOIFWJVZYGUONSQKTREIEUAWRGFCWYOIANLCJMGDORFTSHSYXQHYBSMLUXYFGZGBLPYONGEMZKXAAIMNQMTMIFKUKIVUGMTIUZSQPBDRBLDQVXLCEAGURWPAXFBADHZETVHFEDKXNOJNBQJRISTEAGHPNPVHKSCDMCSECBDVONPKCNQJFBLSHBWUJPOZVH");
    msg.value = 145U;

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
    msg.setTimeStamp(0.13523074697340043);
    msg.setSource(63683U);
    msg.setSourceEntity(148U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(55U);
    msg.name.assign("UCLAMORNHFFQBOCBJCNNPQSIAJVTIDUIGTVDZRVJNGXUZIIKCTMZUPECGEBZMZUTJAQBYRPALEUWXQHVJG");
    msg.value = 56U;

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
    msg.setTimeStamp(0.9338564731611342);
    msg.setSource(3906U);
    msg.setSourceEntity(142U);
    msg.setDestination(7207U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZJAVBOKTXNPYBTTFHTULOVMATNUOYITQCPJPIYOQNXRXFDMGZAASQNURYDZUMERREYCJOWVNJJRXSNMGPCFUJALLHJCEMKIRPIBVDYPNWSSKVZWOKFEHGIKULGLQKGXWJTFZBSDZSHLRWEOAUMLMQLXAGGNTBYYMEFFQRXBDSDYIJKCCNESAZHHK");

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
    msg.setTimeStamp(0.7143971612244723);
    msg.setSource(2201U);
    msg.setSourceEntity(91U);
    msg.setDestination(17537U);
    msg.setDestinationEntity(101U);
    msg.name.assign("ESEKSLHKVFBVGDRTJLVFBMLENCYNGWYRNWALPCGZMPBBNUOBWLGYGGIZABYWEUUEZKANSMKAZDQLWCNRDTDKZQRTROCDBAJVSJUECHIPMYDVGQYKQMLNRIMXIIISVZDUD");

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
    msg.setTimeStamp(0.9902693752182412);
    msg.setSource(29708U);
    msg.setSourceEntity(12U);
    msg.setDestination(49179U);
    msg.setDestinationEntity(19U);
    msg.name.assign("ZQSIZJHPDECTKHBGWMGVFPYSXBXBRSRMMWWCHOBRJALIQVKUNOVHASHUKJRBNOLEGQXZJIRW");

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
    msg.setTimeStamp(0.15021312605199633);
    msg.setSource(29599U);
    msg.setSourceEntity(143U);
    msg.setDestination(1500U);
    msg.setDestinationEntity(195U);
    msg.name.assign("YRQHSQTZFVIRRFNCOTMJXQUMFKOBNVALBATZHXYYNECISAPQMHTZBPVZEQGPINDOOWKFCBSANUGURPNWYKJWBLXHPGVLJFMWIDG");
    msg.value = 45U;

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
    msg.setTimeStamp(0.6224656755524464);
    msg.setSource(32107U);
    msg.setSourceEntity(228U);
    msg.setDestination(42312U);
    msg.setDestinationEntity(87U);
    msg.name.assign("HABHMGKIKTOXQHRLLMNZRJEUFJUOPXUNYOHBKD");
    msg.value = 122U;

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
    msg.setTimeStamp(0.4134016181706578);
    msg.setSource(7520U);
    msg.setSourceEntity(154U);
    msg.setDestination(16120U);
    msg.setDestinationEntity(34U);
    msg.name.assign("DCKQWABBGYSSSPIZONWSIJKKYZEMWIIELNQTQBQTULTXGTFNCHIWHGCTTPDRAHKFFAMCCIMLVYYOHVZQMXCFODBAVKDBDOMNWOZVSPDLYJCTBSHADPUREPQJNUORFUHWEFVIIRKWONMRECELMKZEGFYOYCPERQPFUAVLCXLHGJWEZBAYSGYFEIVXBLXKGKMQHDWSTNZXKZMNSNLJGRQJZVXUOVIHRRJUXJTLPUU");
    msg.value = 137U;

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
    msg.setTimeStamp(0.9099298830968232);
    msg.setSource(52870U);
    msg.setSourceEntity(203U);
    msg.setDestination(58927U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8661086553914126;

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
    msg.setTimeStamp(0.954008527825775);
    msg.setSource(14044U);
    msg.setSourceEntity(165U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(242U);
    msg.value = 0.39555984677712275;

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
    msg.setTimeStamp(0.4254919143469834);
    msg.setSource(13603U);
    msg.setSourceEntity(154U);
    msg.setDestination(21365U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7550021488336263;

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
    msg.setTimeStamp(0.27721875023585996);
    msg.setSource(41639U);
    msg.setSourceEntity(240U);
    msg.setDestination(39978U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6462953763335761;

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
    msg.setTimeStamp(0.8584708964895047);
    msg.setSource(14369U);
    msg.setSourceEntity(140U);
    msg.setDestination(57511U);
    msg.setDestinationEntity(133U);
    msg.value = 0.027340693258944393;

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
    msg.setTimeStamp(0.6919430933257332);
    msg.setSource(33673U);
    msg.setSourceEntity(172U);
    msg.setDestination(61181U);
    msg.setDestinationEntity(230U);
    msg.value = 0.283327701222282;

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
    msg.setTimeStamp(0.2624929432408799);
    msg.setSource(12264U);
    msg.setSourceEntity(107U);
    msg.setDestination(64111U);
    msg.setDestinationEntity(71U);
    msg.value = 0.38719078293376463;

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
    msg.setTimeStamp(0.10296144348192116);
    msg.setSource(58566U);
    msg.setSourceEntity(164U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(215U);
    msg.value = 0.563061898791681;

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
    msg.setTimeStamp(0.9800749515528916);
    msg.setSource(57217U);
    msg.setSourceEntity(240U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(49U);
    msg.value = 0.41170469289471623;

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
    msg.setTimeStamp(0.2114478123856658);
    msg.setSource(15669U);
    msg.setSourceEntity(176U);
    msg.setDestination(48072U);
    msg.setDestinationEntity(145U);
    msg.restriction = 71U;
    msg.reason.assign("FLSZULATAZTLQYQVJGBIEGKWXVAJSHHKNUMOSGPEHLEOWHQKSKZPQGLNDUPENORAUREOBXGXZVHGFPFKVKOASCBWYGCOEMRXKNWWTZZMEBYNBJDMJJCDHRXSYVSJNIUGTDFUIPOCWSXAQLIHFLBBTRJTWXVDCNZRWHQWCEVNPXFYXMNIIXBCTFJSZHYOYEMBUDDMGQMYUGKIJCLFSWRAVKVYQFDAEPVMJDRZIATAUDPTPMQRBR");

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
    msg.setTimeStamp(0.21401539159533534);
    msg.setSource(844U);
    msg.setSourceEntity(126U);
    msg.setDestination(34028U);
    msg.setDestinationEntity(201U);
    msg.restriction = 219U;
    msg.reason.assign("XLSPKLPBAZJFLUXSZNKFGTYMCSBGEGWANMMFPFCTELVRACMNEUFDJXOJVBQFXUKADZYUQJFWQUGEOMVPXVSTPUJGGTKYDRRQSDWILQBGOKLWTHDXVAYJOCVKNGRQMEDWRZKO");

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
    msg.setTimeStamp(0.47665960275960906);
    msg.setSource(22331U);
    msg.setSourceEntity(40U);
    msg.setDestination(63346U);
    msg.setDestinationEntity(145U);
    msg.restriction = 28U;
    msg.reason.assign("MFHXXTKREARMDMFAYYEWSAYHDCOLYZKGTCRXNNXYBYGAXUZCPDHXUUZMIVYLRGKJTIKBMSUFNFEELVNQTZZIQADNGJLLDTXMZGYAWOCEQDOIZFIGBSLYUJFLBVFQHMRPMDA");

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
    msg.setTimeStamp(0.8972333042864101);
    msg.setSource(62021U);
    msg.setSourceEntity(153U);
    msg.setDestination(34432U);
    msg.setDestinationEntity(21U);
    msg.param = 0.4627806537230842;
    msg.lat = 0.7821892970281903;
    msg.lon = 0.22870131845885;
    msg.z = 0.8381024395439257;
    msg.theta = 0.925454798422589;
    msg.psi = 0.465915365285667;

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
    msg.setTimeStamp(0.657995156061267);
    msg.setSource(22138U);
    msg.setSourceEntity(170U);
    msg.setDestination(45774U);
    msg.setDestinationEntity(197U);
    msg.param = 0.8266482780938904;
    msg.lat = 0.22277135684071214;
    msg.lon = 0.0678101257562016;
    msg.z = 0.5988175421015223;
    msg.theta = 0.3987183598701508;
    msg.psi = 0.120055027734281;

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
    msg.setTimeStamp(0.297014556155746);
    msg.setSource(43473U);
    msg.setSourceEntity(54U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(170U);
    msg.param = 0.33456427164832536;
    msg.lat = 0.2771486480793135;
    msg.lon = 0.8380149611220147;
    msg.z = 0.03876273043086487;
    msg.theta = 0.21700688512479904;
    msg.psi = 0.8161818750987354;

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

  return test.getReturnValue();
}
