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
// IMC XML MD5: 29f572aeb47905e5a14c6967638f6a58                            *
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
    msg.setTimeStamp(0.9196137678870512);
    msg.setSource(19234U);
    msg.setSourceEntity(227U);
    msg.setDestination(34217U);
    msg.setDestinationEntity(68U);
    msg.state = 129U;
    msg.flags = 211U;
    msg.description.assign("OCZDKTLHFMMLCZDPBKGOQBFPRDBCMLECZOLRJRWRHTJOIDPFPGSBJGLZZFUGMNJSWMWENAUWTISAEUJCAQTSSCOFXKXVBOPHEBAEPXYQWTRHJNUKYUIGUJQVJNIDOZNVFZMKTPSTCNMFRWCYILAMQTVNOLBVVJKHEFDZGHKHGIXGPQZDNLFRJRYGAFEQBRRDSCLUQXNCYEHWUYYUIWXVIU");

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
    msg.setTimeStamp(0.06144439295554427);
    msg.setSource(40309U);
    msg.setSourceEntity(253U);
    msg.setDestination(42796U);
    msg.setDestinationEntity(234U);
    msg.state = 215U;
    msg.flags = 59U;
    msg.description.assign("RFOWUUEBYGJZQWZRSAQKLGHVFWVNXGCFNCYEQBDPJTGTXODDPHXMKUJPEZYSGZAQUKGFYGHMYYPLSVSBBHQCPMLBQWLPJSPMINOIBKYRMDAJIUSYLAKBMKLMFQRIJFCHLZUBDXQSTZVRMHXNNRHTJJPNFHUNCOITCAOEODAGOOBWXHWAJAUYNZISOEMVLWSXRCDTALVTKHFRBVDCZYJQXIFVKUKRIOIEXAVTNZLEPWNWEGUQM");

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
    msg.setTimeStamp(0.6689767762912207);
    msg.setSource(1006U);
    msg.setSourceEntity(182U);
    msg.setDestination(60287U);
    msg.setDestinationEntity(12U);
    msg.state = 116U;
    msg.flags = 115U;
    msg.description.assign("FFNAZLWBIJRXNRXOKGEDMMRLZBPEHCJUKIPWFEVUYGFNNDDKECNTRUDUOSIECBYVBCRGLXTPRSPQHVTDOTEZ");

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
    msg.setTimeStamp(0.1044647412815386);
    msg.setSource(53300U);
    msg.setSourceEntity(18U);
    msg.setDestination(20895U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.3951408750747414);
    msg.setSource(36605U);
    msg.setSourceEntity(36U);
    msg.setDestination(19060U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.4812880575626869);
    msg.setSource(46459U);
    msg.setSourceEntity(55U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.7937221961888854);
    msg.setSource(27865U);
    msg.setSourceEntity(78U);
    msg.setDestination(63649U);
    msg.setDestinationEntity(223U);
    msg.id = 193U;
    msg.label.assign("PYWSAZSHDBXAGPLZTXFNYZWWBCIACIUDDVKSGEGZRHAUNXIKMMCNZUOQVKFLXKWTOASYNTSEWKRFHBHLHCQNUOOPJGZJVXHJJTBVRPJKLIRQQEFBULXWYUDTCHLJJEHQKIBBUZLTYYQQFGFDOCSAGYNGPMKZVMXJUUMXMFQRDYWVMHCOXVJOFEPGRLTYBOHDATRVISPORCGSMQPFPRLD");
    msg.component.assign("TYCEMRZATIKKAGENEKVOBC");
    msg.act_time = 47654U;
    msg.deact_time = 27688U;

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
    msg.setTimeStamp(0.4707508118137149);
    msg.setSource(42736U);
    msg.setSourceEntity(92U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(173U);
    msg.id = 204U;
    msg.label.assign("LAWYBTLWIPWWPHRFDQJHEJISHFNAQOKTUXQJFBKAFPYBMSISOOJPDJNTDPBLTVDWJTQZBBDKWHFELMCLXZOCARUDVSGUEMNCKUFMWEXJCLXUDKVOTVFADZKHCAOKEHECVVTJRNUPMNXBCHSZNQGGFYUGHEZVTIZPWIFMGPCHZILXHOBYC");
    msg.component.assign("ZJNHVCNWSAJOKTKULTYZIGMLMFGINXWEKURTYHOOZWEQZNEDTUOSWXPMVRXGXZQICNJKVXYHWTPVOOVMLFMJZOYBVACHPOULCPQAIBKXGEEHWTFIUPDQHENICWYQBTRNRDXPWBQUKDJWQQLFABYUQZGNYBPGRVNADWRDDILJYKSGSERODSLDBHMFCCTIGVPBOKEPUFYMIXZDCASMZ");
    msg.act_time = 26964U;
    msg.deact_time = 37437U;

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
    msg.setTimeStamp(0.3958540032504665);
    msg.setSource(28976U);
    msg.setSourceEntity(208U);
    msg.setDestination(60541U);
    msg.setDestinationEntity(169U);
    msg.id = 20U;
    msg.label.assign("DKQERKWAZWRHZMFSTPWMGMILOHUZXTJTKLOLNMWHVCLSA");
    msg.component.assign("VWXCAXHRENTWUHPVXJZHRNCAFTAEGSARHTQUWAECEBNOKQEUJJOKWJSVPRFNTVMMXXLCPYPCWXUIQQKBUOLELAOVUNPYRRYMFUDOAQSSMHFQIDDKYEJDBIXROVMCFTXIGYWBXEGLJVFPHGLYYGKNDEDMFACLLIZSTFWVJDZZYOIGZSUNBXMGBPLSTVQZJRMK");
    msg.act_time = 22965U;
    msg.deact_time = 34587U;

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
    msg.setTimeStamp(0.22252100727479585);
    msg.setSource(30181U);
    msg.setSourceEntity(66U);
    msg.setDestination(26954U);
    msg.setDestinationEntity(106U);
    msg.id = 177U;

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
    msg.setTimeStamp(0.1814431989996098);
    msg.setSource(60552U);
    msg.setSourceEntity(159U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(197U);
    msg.id = 7U;

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
    msg.setTimeStamp(0.887068645487685);
    msg.setSource(41858U);
    msg.setSourceEntity(187U);
    msg.setDestination(30713U);
    msg.setDestinationEntity(82U);
    msg.id = 116U;

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
    msg.setTimeStamp(0.35661389776005126);
    msg.setSource(25753U);
    msg.setSourceEntity(92U);
    msg.setDestination(38668U);
    msg.setDestinationEntity(245U);
    msg.op = 141U;
    msg.list.assign("FFQYUBALJMYCGPKVCYGUXLZIWIJWQRNHWCHDMNUSACPPGWDIZEXEQPJHGMZTFHUGTDAROTDUEMSKEAXRVBEGIFSEMDBOKFLDKWKNCJWRYHZBJRBBRJXORDQROSEOTQWNKPBIQNNFMOUILQUZODTETAMLLIFGUGYVSHVOPDYXKAVWJZEASCCIZMLOKSXNXGHBBPSZTJSVQLJOYYZYULPPCEGRTNHHMVCNLUDFMZIXSAAKCJHXTVVAXK");

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
    msg.setTimeStamp(0.3374819157121226);
    msg.setSource(41057U);
    msg.setSourceEntity(69U);
    msg.setDestination(23170U);
    msg.setDestinationEntity(218U);
    msg.op = 82U;
    msg.list.assign("WUGSVKQMCJLBLBWSYZLCPJAILRMRZQQNJDTGLOFPEAKYZMUNUMFOFFLJTAQIZOWYPXXHAUODELYPSGYKNBRKKRUVGWGBMSSIURZUTQGBIJYNNPFISTCMDBZTPDPVFNDPEACBQUWMRODXKVJIXTFWX");

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
    msg.setTimeStamp(0.7304882687078248);
    msg.setSource(33768U);
    msg.setSourceEntity(136U);
    msg.setDestination(16536U);
    msg.setDestinationEntity(178U);
    msg.op = 61U;
    msg.list.assign("ZFBUCQEJVQSFXOPHCLGVVMTOEKSRIQRHRSKADGXTGWZKEADBVCIUWFMSTUIJUYAEHNHWVSMXTPKDPLGKYSPGRNOWORPJMOXYKEEFUNDKILGZQRIYUCPRFJMBOTLEZWVAKKLXVLRBOZSNFYZPJIWCSTINRZDQYGBJIOATVAWBNTJLQAZBCZOVAHPYA");

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
    msg.setTimeStamp(0.46985198641622317);
    msg.setSource(28641U);
    msg.setSourceEntity(56U);
    msg.setDestination(58287U);
    msg.setDestinationEntity(90U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.04168507689839929);
    msg.setSource(52994U);
    msg.setSourceEntity(83U);
    msg.setDestination(43130U);
    msg.setDestinationEntity(168U);
    msg.value = 113U;

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
    msg.setTimeStamp(0.38349021255785576);
    msg.setSource(42628U);
    msg.setSourceEntity(117U);
    msg.setDestination(23551U);
    msg.setDestinationEntity(58U);
    msg.value = 203U;

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
    msg.setTimeStamp(0.8345360685486762);
    msg.setSource(41842U);
    msg.setSourceEntity(39U);
    msg.setDestination(25018U);
    msg.setDestinationEntity(171U);
    msg.consumer.assign("LJYBQJHPSAPLZTGFPLQCRZXRXKZEDHLSOVYCIKL");
    msg.message_id = 42283U;

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
    msg.setTimeStamp(0.5295807850722992);
    msg.setSource(45097U);
    msg.setSourceEntity(187U);
    msg.setDestination(61403U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("RNKVGWTKAKFJVMQTAJSHFQHWEHILKVMXNDBLCRZGHPUHGYZYBYUONDFHGMIGCYK");
    msg.message_id = 54510U;

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
    msg.setTimeStamp(0.8868896522525168);
    msg.setSource(30371U);
    msg.setSourceEntity(53U);
    msg.setDestination(34631U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("AHWYPWSNUWEJUFCSMZDHECLHSVKIVILBVPQJWOYLLNJTCXXMHFARLPDMXTSSFKORIPQBLGQRNAQNNTXEBJAKVMYYZGQJWTLHNVUSHZQMCHYYBDJPFKRRIMEVBNSGGDMADFEXLMJWTITZGZECWMOETMTOBLCIGPEOKARQHFPVF");
    msg.message_id = 34100U;

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
    msg.setTimeStamp(0.3678062812359202);
    msg.setSource(47748U);
    msg.setSourceEntity(33U);
    msg.setDestination(58407U);
    msg.setDestinationEntity(70U);
    msg.type = 190U;

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
    msg.setTimeStamp(0.8880824526577101);
    msg.setSource(53397U);
    msg.setSourceEntity(244U);
    msg.setDestination(60664U);
    msg.setDestinationEntity(156U);
    msg.type = 187U;

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
    msg.setTimeStamp(0.4989526599427052);
    msg.setSource(45187U);
    msg.setSourceEntity(52U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(129U);
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
    msg.setTimeStamp(0.04323340479401627);
    msg.setSource(1697U);
    msg.setSourceEntity(201U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(182U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.33825542838335143);
    msg.setSource(61501U);
    msg.setSourceEntity(50U);
    msg.setDestination(14935U);
    msg.setDestinationEntity(29U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.6652502656441356);
    msg.setSource(59538U);
    msg.setSourceEntity(193U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(225U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.8833926548633988);
    msg.setSource(27342U);
    msg.setSourceEntity(206U);
    msg.setDestination(31698U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 39U;
    msg.step_number = 209U;
    msg.step.assign("JSXWAIVHIPSTPBGJKGZTUTSFQABBKCQYCZRPEFLLWOMTDDMUMGLDBXNQBYMNRCEZFNVAQIUCNKLXXDUDXYLQRPGTITPDNKAVXZWHMIJQWWGZWGHSULLGPPCJKOEDNXJDUBRGYOZABRFEMPXHIAFVQINZJKRVUOCIECBLCROWPWWFNVYFOHENFYJTSSJTZEXFESRANHOYQVACKYUQLRTHSVMYBZQGVABPETLREIOOMHKKHMUSOYGFXWJKIAMHU");
    msg.flags = 220U;

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
    msg.setTimeStamp(0.7520367698904284);
    msg.setSource(55925U);
    msg.setSourceEntity(144U);
    msg.setDestination(12642U);
    msg.setDestinationEntity(205U);
    msg.total_steps = 5U;
    msg.step_number = 192U;
    msg.step.assign("TSICOYUOHOUVACINHHXMYGNFBUYELMSTLDKVIQTCQDAMVRPBHUZZEPQKZXWSPNNFPGGKXWKVBZLFVJBRJTGQCVPMNESCHQQIWWYBCJBQGFKDXDDXRJPDTBM");
    msg.flags = 217U;

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
    msg.setTimeStamp(0.28212755364750686);
    msg.setSource(13925U);
    msg.setSourceEntity(50U);
    msg.setDestination(31677U);
    msg.setDestinationEntity(116U);
    msg.total_steps = 28U;
    msg.step_number = 223U;
    msg.step.assign("NECPWXDINEZPNITDESGMFTMTOKPYVWBRGZLAFOWKBMPDHFUAULLVWUCRBEJWBYLGYGMFITFHKOFYBOEYCRRQDVDRQRJARXNZAUQIALVUFCJXHBGYIJGXHUEKRCKQHCIQHDSWMRDTQAMMKNVBJDJLEWZFZZPSYCNZZW");
    msg.flags = 138U;

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
    msg.setTimeStamp(0.23671384271736595);
    msg.setSource(20584U);
    msg.setSourceEntity(215U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(77U);
    msg.state = 61U;
    msg.error.assign("NBMEBVOVCJGNLRQFZWZDO");

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
    msg.setTimeStamp(0.7291295666121403);
    msg.setSource(42876U);
    msg.setSourceEntity(89U);
    msg.setDestination(1556U);
    msg.setDestinationEntity(137U);
    msg.state = 41U;
    msg.error.assign("KJSLRMVCVQAKXUZDPRUNPRVWXGOYIQEWLYGVQYIZXAWWSJOGGDUPQYBUBFFKZUENFHBSFBIBXLFXYJYBFPBSTSORHRTZQNLDDKOMXWGKNEIMKBRCQHUJYQFVQODYMKILMLEADAGVJOCGZBZEJCAJETXPFBXDLAAZHNFDSGITPOYHHNECXSSNZQOJHWQNPVCZCVFTKMATCRXWZLSTGHPMOLMVYADIURHETERWNVPNCULAM");

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
    msg.setTimeStamp(0.31498646399582664);
    msg.setSource(40995U);
    msg.setSourceEntity(215U);
    msg.setDestination(2926U);
    msg.setDestinationEntity(35U);
    msg.state = 13U;
    msg.error.assign("RZHZCANKHVJWWEQCHSTESVTYOOJIFFNCFIBSXSSXPENWNBVHLSHDPKQFDQVZYOUIFACIPV");

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
    msg.setTimeStamp(0.21215248490324268);
    msg.setSource(5574U);
    msg.setSourceEntity(131U);
    msg.setDestination(2630U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.4997320688324618);
    msg.setSource(8099U);
    msg.setSourceEntity(52U);
    msg.setDestination(42677U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.8707747327426115);
    msg.setSource(64137U);
    msg.setSourceEntity(218U);
    msg.setDestination(37809U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.9794784875189319);
    msg.setSource(22444U);
    msg.setSourceEntity(94U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(188U);
    msg.op = 104U;
    msg.speed_min = 0.6437804781889291;
    msg.speed_max = 0.33239848366541724;
    msg.long_accel = 0.062244234643191954;
    msg.alt_max_msl = 0.5094401608001222;
    msg.dive_fraction_max = 0.43962917797411394;
    msg.climb_fraction_max = 0.8865915160801671;
    msg.bank_max = 0.014149062287028391;
    msg.p_max = 0.03091897981462355;
    msg.pitch_min = 0.8879521379376606;
    msg.pitch_max = 0.9506365684410651;
    msg.q_max = 0.607583034755518;
    msg.g_min = 0.5662314797433791;
    msg.g_max = 0.7138897907086208;
    msg.g_lat_max = 0.12862264919070565;
    msg.rpm_min = 0.6355223704089816;
    msg.rpm_max = 0.34438711877707806;
    msg.rpm_rate_max = 0.8661004211713975;

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
    msg.setTimeStamp(0.8930122489009669);
    msg.setSource(21366U);
    msg.setSourceEntity(2U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(244U);
    msg.op = 94U;
    msg.speed_min = 0.9601814982770834;
    msg.speed_max = 0.48023430749900164;
    msg.long_accel = 0.9354589223263504;
    msg.alt_max_msl = 0.829574618561687;
    msg.dive_fraction_max = 0.8378417911338173;
    msg.climb_fraction_max = 0.8579364329588203;
    msg.bank_max = 0.3324186758749912;
    msg.p_max = 0.7436536976810464;
    msg.pitch_min = 0.7739429224763725;
    msg.pitch_max = 0.17277336683179234;
    msg.q_max = 0.6332703419793823;
    msg.g_min = 0.509555971452077;
    msg.g_max = 0.8931550469505452;
    msg.g_lat_max = 0.005023821293853592;
    msg.rpm_min = 0.6864260693624062;
    msg.rpm_max = 0.6214948746863794;
    msg.rpm_rate_max = 0.7829869697873049;

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
    msg.setTimeStamp(0.6868603209014916);
    msg.setSource(34820U);
    msg.setSourceEntity(8U);
    msg.setDestination(19365U);
    msg.setDestinationEntity(98U);
    msg.op = 116U;
    msg.speed_min = 0.6468810387626067;
    msg.speed_max = 0.7446834382018535;
    msg.long_accel = 0.9574752307019139;
    msg.alt_max_msl = 0.00064112180689746;
    msg.dive_fraction_max = 0.6947508365864117;
    msg.climb_fraction_max = 0.8739084651386199;
    msg.bank_max = 0.44073153258353603;
    msg.p_max = 0.43489131055104624;
    msg.pitch_min = 0.39998282015037323;
    msg.pitch_max = 0.3754289721919095;
    msg.q_max = 0.8711706803090622;
    msg.g_min = 0.00365477762508426;
    msg.g_max = 0.6528366819915543;
    msg.g_lat_max = 0.6164902160160961;
    msg.rpm_min = 0.4408541371564423;
    msg.rpm_max = 0.65703323770868;
    msg.rpm_rate_max = 0.5927235770274587;

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
    msg.setTimeStamp(0.2559335385436471);
    msg.setSource(14266U);
    msg.setSourceEntity(3U);
    msg.setDestination(29105U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.8644969141615894);
    msg.setSource(62071U);
    msg.setSourceEntity(115U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(98U);
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.18111185527701978;
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
    msg.setTimeStamp(0.7355402200528712);
    msg.setSource(36297U);
    msg.setSourceEntity(92U);
    msg.setDestination(50781U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.8960463229603103);
    msg.setSource(61821U);
    msg.setSourceEntity(70U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.5863362848021271;
    msg.lon = 0.19830425587343903;
    msg.height = 0.5167821601169175;
    msg.x = 0.28497181605471056;
    msg.y = 0.9126163126821765;
    msg.z = 0.6784143646091929;
    msg.phi = 0.9456822161728583;
    msg.theta = 0.6018816230168115;
    msg.psi = 0.6996926958436214;
    msg.u = 0.5203340874051965;
    msg.v = 0.44304524102744425;
    msg.w = 0.36725352636313957;
    msg.p = 0.3172146996374502;
    msg.q = 0.8707349715181958;
    msg.r = 0.23323775792290624;
    msg.svx = 0.5399363472261043;
    msg.svy = 0.8091348646092327;
    msg.svz = 0.539148345210919;

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
    msg.setTimeStamp(0.09925296570582753);
    msg.setSource(13651U);
    msg.setSourceEntity(222U);
    msg.setDestination(61896U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.7794186217529309;
    msg.lon = 0.9000122437904123;
    msg.height = 0.23996217013563026;
    msg.x = 0.5821753316178471;
    msg.y = 0.8904882790809516;
    msg.z = 0.8568004150316844;
    msg.phi = 0.7692489156362821;
    msg.theta = 0.7247878491080874;
    msg.psi = 0.7805628757112811;
    msg.u = 0.16569591399019967;
    msg.v = 0.6092787949921938;
    msg.w = 0.2295182058734221;
    msg.p = 0.01621286522608112;
    msg.q = 0.4287738653635451;
    msg.r = 0.1606194553096021;
    msg.svx = 0.8007118815142925;
    msg.svy = 0.7978824841882118;
    msg.svz = 0.637766469171239;

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
    msg.setTimeStamp(0.15032165884754423);
    msg.setSource(64088U);
    msg.setSourceEntity(89U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.3819760019624745;
    msg.lon = 0.8573800035015742;
    msg.height = 0.21064769835028907;
    msg.x = 0.4849238856885758;
    msg.y = 0.6409478052841653;
    msg.z = 0.2900829399925856;
    msg.phi = 0.0529239193977703;
    msg.theta = 0.5534196566335968;
    msg.psi = 0.5288336659719093;
    msg.u = 0.8097570713128824;
    msg.v = 0.5408675767852327;
    msg.w = 0.8443325140818603;
    msg.p = 0.1725177874829943;
    msg.q = 0.2712327012197957;
    msg.r = 0.7055641295276791;
    msg.svx = 0.1263020198094622;
    msg.svy = 0.4808981699257622;
    msg.svz = 0.2638935809606283;

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
    msg.setTimeStamp(0.09194679476530943);
    msg.setSource(64087U);
    msg.setSourceEntity(58U);
    msg.setDestination(30059U);
    msg.setDestinationEntity(141U);
    msg.op = 139U;
    msg.entities.assign("RIIHFLSEUVIBFUIQCTKMKUUVCMTFQSPXFPAGVNVMZORBYXHTCFCSMSCELQJUEFGKRNAWRAWKNFGHXUJPLYIAHMENTTCVDWZKKPWAVDMCDGYGBVTGSAQQXSEXVJQAYGXHTMDTZWYXGFJRPAZZKBPDAZJFRYOBBTCDGQLZQEFLDRIHJUSPEWTBNVQHNSOONQPOMZKDWIDMSNLOYYUWIEZKVRUSKYJNXIHE");

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
    msg.setTimeStamp(0.08796606708796251);
    msg.setSource(38523U);
    msg.setSourceEntity(250U);
    msg.setDestination(50471U);
    msg.setDestinationEntity(36U);
    msg.op = 37U;
    msg.entities.assign("DYGVFCTBELSNINVECDQFKDQRFOHJWTQASLFMQPBJDRQEBZJYIBYTDRIVFCAWOLJSKRTNNNCXOFAMGUKEHCKVYOGMCPGOUGFIKPJTLYZPYOAWANOVUSXUXSNFZEBTXZSLGCZUGMGHWHRKR");

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
    msg.setTimeStamp(0.8833118924303601);
    msg.setSource(21354U);
    msg.setSourceEntity(21U);
    msg.setDestination(7194U);
    msg.setDestinationEntity(203U);
    msg.op = 94U;
    msg.entities.assign("BGAJYCEEECBTWFQEPJMNJRZAFRSENZCJYYIEIPLIUTNOWSRVODAGFKUDVDJWMITMISHTN");

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
    msg.setTimeStamp(0.08002269602574719);
    msg.setSource(49723U);
    msg.setSourceEntity(121U);
    msg.setDestination(15565U);
    msg.setDestinationEntity(151U);
    msg.type = 181U;
    msg.speed = 6013U;
    const char tmp_msg_0[] = {5, 92, 45, 100, -93, 116, 81, 13, -82, 55, 15, -90, 7, -56, -106, -65, -40, 35, -102, 54, 105, 9, -84, 88, -50, 119, 50, -60, 29, -119, -43, -103, 13, -26, -2, 120, 51, 94, -118, -98, 60, -118, -99, 46, -122, -15, -8, -51, -29, -58, 102, -109, -57, 124, 6, 22, 48, 74, 9, 111, -106, 66, 74, 55, 103, 67, 55, 49, -15, 68, 1, 74, 117, 86, -52, -1, -32, 42, 62, 15, 72, 59, 33, 69, 48, 6, 91, -108, 71, 64, 103, -75, -117, -55, -50, 78, -87, 85, 104, 57, -124, 34, 80, -3, -74, -127, -7, -64, 25, 10, 85, -97, -103, 73, 36, -52, 104, -40, 68, -120, -6, -87, -56, -70, -42, -126, -47, 18, -121, -30, -39, 58, -70, 85, -79, -56, -19, -13, -37, 64, -127, -15, 6, -26, 119, 88};
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
    msg.setTimeStamp(0.08428388719122015);
    msg.setSource(9013U);
    msg.setSourceEntity(57U);
    msg.setDestination(32465U);
    msg.setDestinationEntity(161U);
    msg.type = 222U;
    msg.speed = 60502U;
    const char tmp_msg_0[] = {19, 9, 59, -103, 2, -113, 82, 106, 75, -114, 23, -37, 34, -88, -29, 73, -62, 18, -91, -65, 39, 55, 18, -85, -70, -77, 121, 47, -90, 43, 75, 114, -61, -110, 47, -90, -36, 24, -59, -53, -104, 115, 7, 109, 95, -54, 59, -124, 0, 76, 36, -114, -29, -125, 40, -89, 20, 0, 38, 61, 9, 66, 43, -2, 72, -84, 50, -50, 0, 72, 32, -21, -123, 124, 0, 102, 39, 113, -79, 110, 112, -61, 98, 77, 38, -31, 114, -14, -57, 11, 1, -110, -118, 109, -24, -127, -7, -115, -56, -109, 109, 91, -127, -35, -11, -22, -22, -41, 20, 39, 10, 113, -70, 43, -76, -61, 17, -106, -118, 69, 22, 87, -26, -38, -33, 51, 17, -102, 115, 91, -2, -17, -9, 95, -37, -54, 6, -90, -22, 31, -7, 91, -27, -99, 0, 79, -82, 21, 41, -64, -19, 38, -36, -41, 43, 18, -16, -17, 71, 78, -60, 98, 104, 59, 60, 13, 116, -2, 38, -108, 62, -54, -62, -58, 29, 114, -15, -60, 93, -43, -50, 94, 58, -18, 5, -103, -27, 52, -128, 120, -2, -3};
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
    msg.setTimeStamp(0.5191527912927265);
    msg.setSource(29775U);
    msg.setSourceEntity(169U);
    msg.setDestination(60724U);
    msg.setDestinationEntity(14U);
    msg.type = 184U;
    msg.speed = 46528U;
    const char tmp_msg_0[] = {-106, -35, 113, -62, -122, 22, -110, -62, 73, -96, 95, -51, 72, 69, -105, 42, -1, 47, -58, -62, -78, -11, 99, -91, -12, 25, 31, -110, 106, 126, -26, -66, 17, 115, -120, -10, -82, 45, -2, -4, 28, 7, 106, -80, -33, 16, 6, 13, -63, 93, -122, 73, 68, 51, 82, 106, 29, 105, 31, 51, -48, 24, -33, 89, 52, 17, 120, -41, -14, 115, 113, -2, 20, -43, 46, -68, 51, 25, -52, 47, -86, -58, -60, 24, -57, 106, -117, 0, -8, -44, 29, -80, 63, -10, 49, -48, 82, -24, 83, -80, 69, 34, 13, -124, 31, -96, -78, 35, -45, -28, -111, -106, 68, 37, 109, 72, -53, 114, 40, 84, -98, -56, -99, 117, -72, 67, 86, 26, 9, 119, 81, -116, -30, -49, 29, 115, -20, 89, -35, 76, 80, 70, 67, 89, 27, -91, -24, -33, -21, -35, -53, -124, -124, 79, 10, -41, -122, -34, 107, 47, 122, -70, 110, -31, 89, 65};
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
    msg.setTimeStamp(0.23637438752430728);
    msg.setSource(6109U);
    msg.setSourceEntity(11U);
    msg.setDestination(1250U);
    msg.setDestinationEntity(199U);
    msg.op = 24U;
    msg.tas2acc_pgain = 0.7114378708957533;
    msg.bank2p_pgain = 0.36281088310651965;

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
    msg.setTimeStamp(0.724054839926);
    msg.setSource(19559U);
    msg.setSourceEntity(24U);
    msg.setDestination(7559U);
    msg.setDestinationEntity(221U);
    msg.op = 102U;
    msg.tas2acc_pgain = 0.9581537932648007;
    msg.bank2p_pgain = 0.3023982283193276;

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
    msg.setTimeStamp(0.39592992998464416);
    msg.setSource(59047U);
    msg.setSourceEntity(208U);
    msg.setDestination(47356U);
    msg.setDestinationEntity(251U);
    msg.op = 107U;
    msg.tas2acc_pgain = 0.8642484704203499;
    msg.bank2p_pgain = 0.513656165648522;

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
    msg.setTimeStamp(0.8198551155172521);
    msg.setSource(9224U);
    msg.setSourceEntity(145U);
    msg.setDestination(16684U);
    msg.setDestinationEntity(211U);
    msg.available = 4160180616U;
    msg.value = 105U;

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
    msg.setTimeStamp(0.6884129314772639);
    msg.setSource(5649U);
    msg.setSourceEntity(102U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(152U);
    msg.available = 72593433U;
    msg.value = 221U;

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
    msg.setTimeStamp(0.6285660748397602);
    msg.setSource(18868U);
    msg.setSourceEntity(35U);
    msg.setDestination(63504U);
    msg.setDestinationEntity(218U);
    msg.available = 3730060368U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.22116747670493864);
    msg.setSource(26324U);
    msg.setSourceEntity(182U);
    msg.setDestination(51542U);
    msg.setDestinationEntity(160U);
    msg.op = 35U;
    msg.snapshot.assign("ZAMRWGHCTWLHCABUDVRSYKCFGVXXXTFKNBND");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 40081U;
    tmp_msg_0.control_ent = 187U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 98U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.45005385389669395;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 164U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.83071647725873;
    tmp_tmp_tmp_msg_0_0_1.z_units = 222U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.3001076147950915;
    tmp_tmp_msg_0_0.lon = 0.1511952414356128;
    tmp_tmp_msg_0_0.radius = 0.4161024105055182;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 128U;
    tmp_msg_0.proximity = 155U;
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
    msg.setTimeStamp(0.28956245747867904);
    msg.setSource(20264U);
    msg.setSourceEntity(142U);
    msg.setDestination(49144U);
    msg.setDestinationEntity(63U);
    msg.op = 162U;
    msg.snapshot.assign("TKZUNLIZTTPBIBQKYGNYSNXQNIDQJCRPPFECESMKXALPKOHXCCMSSCXETIMVVBWSRVZROELPWGMKJQHEAUNMAASWHYWEZTNVFHQORSGXGGXNLJNVYSFBETMPZMJKFDBEROZBKJLUZEFDKVYWAYUBFJHIPXQBCQLPBMRHXCQBQWDTLHUCKTUODRWGPXFF");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 199U;
    tmp_msg_0.error.assign("DOGRXJHVRBFTAFURNDPIVJGLCYTHNDNUSUPLFXOUOTIIPEVAHIWZZXPJCEMSXHX");
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
    msg.setTimeStamp(0.3148800368211271);
    msg.setSource(35824U);
    msg.setSourceEntity(78U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(68U);
    msg.op = 197U;
    msg.snapshot.assign("OPCDITDQTEXZXCNPNTEYXEIHRSRAUVFQYHYFCKWGBFJKMSNGPTMDJXTLESRBGQHOBUJKMLXZYSXVRDJRMPRWASGWLLFBESOUKIRMZPYWWURGBXDISYFCIZBDJUQO");
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JBRQGOFRTIJEQRYKKLDFAQFFZWBOCUGGGWSKFPKDFRLBCYRYOUQWMHYCHKSMWEXSRFXMYLJVYVDXAHNUOVTBJZQVXPJIOZOAAFNIPZYGTSHPESPRKQBSSKLTLLCZRPWEFVIUUTSKDMCLCWUDBLLHNGDVSWNKUZIPCJZDSTZHOFPXVVMVQROBTIIXNHDRQWMEYMQENXBAKNDGIEXGZUAOYUNWNIHXEQPDCYXMAPATBIJMJUTBEHOV");
    tmp_msg_0.lat = 0.8241994589311225;
    tmp_msg_0.lon = 0.004996287547528899;
    tmp_msg_0.z = 0.2836666025225191;
    tmp_msg_0.z_units = 239U;
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
    msg.setTimeStamp(0.2311926633537673);
    msg.setSource(31286U);
    msg.setSourceEntity(101U);
    msg.setDestination(42771U);
    msg.setDestinationEntity(226U);
    msg.op = 143U;
    msg.name.assign("MPMCEOGLOLTZLYGMHCGQTGPHHUEEQEHUEVYJAZHTBOWCSFKKRKEFWVAUWDPAVROYBXLISQMLWTZEZMZAQNCXYDCUGSXTVGGARBBYLIBANVRTKRKWY");

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
    msg.setTimeStamp(0.19837176650534416);
    msg.setSource(38578U);
    msg.setSourceEntity(143U);
    msg.setDestination(27810U);
    msg.setDestinationEntity(72U);
    msg.op = 33U;
    msg.name.assign("AVFTITVYWVYDIFMPJJJTUNFQQYBAZJVFRMQZHCUECFNUYQDULHMZDESOEOFBS");

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
    msg.setTimeStamp(0.7423810473771261);
    msg.setSource(56412U);
    msg.setSourceEntity(17U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(98U);
    msg.op = 6U;
    msg.name.assign("XSQCQQCHHXLIKEBGGWNMNNUFGVTBHQHLOHWQIVQSRTOVLWNIYLSRRYWBJFDBEKQBWSCJBZPTPJGWPHJWCYJXLSOAEKNLTTHBPBQNKRTPDUDBGRTUFQULFWVEKCGNZPAXMIUODPJHEVUMZGYCAXVVKRBAFYYURLFIRPCZVNETLZOETLXCNAXKXFEKVAPDHMWUMZZWOGRYIAFGXFDSDPUHZJJOETGIMSCKYURODCIYDKNIJMZ");

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
    msg.setTimeStamp(0.6590602247489271);
    msg.setSource(16630U);
    msg.setSourceEntity(5U);
    msg.setDestination(17181U);
    msg.setDestinationEntity(178U);
    msg.type = 145U;
    msg.htime = 0.4612003533914416;
    msg.context.assign("XRICRGAFDPAESTLFYGOIEDWSCSTBXARFVRDZCOXRNBQMEUQREUQGJNGLHMMDWYE");
    msg.text.assign("NGRLDUTCMSRQWHXEIIBAXXJTPJYSPOSXCXKMDBEUDCRIXDYOIJUVKTQZEADHSJGRTIIDAQJBW");

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
    msg.setTimeStamp(0.9694363467508154);
    msg.setSource(7685U);
    msg.setSourceEntity(165U);
    msg.setDestination(45237U);
    msg.setDestinationEntity(44U);
    msg.type = 149U;
    msg.htime = 0.8252794179937132;
    msg.context.assign("UCSYLLJYATNTARLLUJNSYSMOUBIFTFMRFHLXSBQLHIBNESNAHGXZKGIWWJRIPMOGJCMKODKCCMPIWOTGZLGZBJMQPTMUEEAKBTXVPYYNPKHHATEZDWNSVGRC");
    msg.text.assign("LKJCTMOVUGHDOVMHPUGBAWZFYFARLEEJBKQHRUDISNGYLEKZEESVKLIYTYKTZXSSPLLWUUGRYSQMEOQIOACOCNPGBHDWBI");

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
    msg.setTimeStamp(0.33102945908973447);
    msg.setSource(11008U);
    msg.setSourceEntity(84U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(143U);
    msg.type = 133U;
    msg.htime = 0.945676346006988;
    msg.context.assign("OPHYDXNZSFWITCIAPGBSOWPCDZKWZLCJDEOWEBGVLFXHFXZSFVEQXESRTFWMDQOQBKOAFLYMFOHFRKKXDKASGMMXKSPZGJIJIOLJUIGNNCHXBJCSMYGHIMTGTGEPVOYCHETNVUXIHCLSGAXZJCULAQERIQHMBUAURWQHWMYEIQTRVLYTKZS");
    msg.text.assign("OALANGSXBIOJNJHOBWZBPZNCYAFVTKAKFVVSFUAHQFVTYVNDVLRUIXYOUKAZCANGTKPXSAHTUODMXSWIEFBEMIFVJYRNHEZXQYWSCSGH");

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
    msg.setTimeStamp(0.813190248122826);
    msg.setSource(21064U);
    msg.setSourceEntity(88U);
    msg.setDestination(64062U);
    msg.setDestinationEntity(121U);
    msg.command = 159U;
    msg.htime = 0.4669868821186818;

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
    msg.setTimeStamp(0.6753052178206462);
    msg.setSource(49610U);
    msg.setSourceEntity(142U);
    msg.setDestination(29287U);
    msg.setDestinationEntity(83U);
    msg.command = 95U;
    msg.htime = 0.9260056139580003;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.htime = 0.788931715167185;
    tmp_msg_0.context.assign("IGSBHUWAVAVPCZCWHGASEPJODDAKOBULMNLHRJDSBMSEVEQQARFKLIYVGOQOPFNKIVMQEDZGGMLPNUPOCXKLJTJPZHGFWNSJLDZIMQKXAOYSEGYOQETCKFFXCCISZGEXXEXIZWZONUTWVUWMWDVRFUUJXJCCICTCGTDSNYHHBBQEFZDWUKRIMGVHKXQLLAZHXWOSPDYKYHQRQXWAATTNVVPRZTTHNMBFYJRRFMBRPYEYBLOARFSDYPU");
    tmp_msg_0.text.assign("GJIUKSJHGKNRBZZFLUOKUG");
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
    msg.setTimeStamp(0.2796572785273943);
    msg.setSource(15287U);
    msg.setSourceEntity(60U);
    msg.setDestination(26404U);
    msg.setDestinationEntity(179U);
    msg.command = 207U;
    msg.htime = 0.8421362259587184;

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
    msg.setTimeStamp(0.7757975885273689);
    msg.setSource(10396U);
    msg.setSourceEntity(157U);
    msg.setDestination(39549U);
    msg.setDestinationEntity(69U);
    msg.op = 225U;
    msg.file.assign("LEMKUHJBBEKTENCSBMZNUUHBFSCPAOGJYECDJVALTMJLSRFTDCSUZWEMWVYXIIFYGZRFRLAXQOPPFIOZRPEDTJVRSGQRNOTNCL");

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
    msg.setTimeStamp(0.7297869011150898);
    msg.setSource(59548U);
    msg.setSourceEntity(73U);
    msg.setDestination(65427U);
    msg.setDestinationEntity(74U);
    msg.op = 186U;
    msg.file.assign("TKOGNJNSVCDCLUQCRFYXXTZMYDASKDLXIZTQOBCKQSCQVRJFSWWMBWQGFZUGSEFUNMHYYNHCZKHOF");

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
    msg.setTimeStamp(0.13853666646079);
    msg.setSource(19500U);
    msg.setSourceEntity(113U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(173U);
    msg.op = 109U;
    msg.file.assign("NVOKPCTMTADYHAZXXZSZKNZPGFYUVBHXOKCTKVCQXLBNZMWUKOFYLTTPKODSPIWERFMYWHXLYFJJLEEUDAYGNARQIYUIRNFRMTCZBYCGBJIEGPHAVJGBVRXMAQBBQGIOKUHROOOCKMIPNHTIQLQECWEDSNRBCSKJUVHULJZXWDFSFXGPMNWBUOVGFCRFMECEJPQXLEIRBOJUHGWLRDTWGAWTVPVMDLHZSUJHNSQAISZL");

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
    msg.setTimeStamp(0.9987818012880904);
    msg.setSource(13874U);
    msg.setSourceEntity(243U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(232U);
    msg.op = 59U;
    msg.clock = 0.4702438556360249;
    msg.tz = -42;

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
    msg.setTimeStamp(0.40877349387979267);
    msg.setSource(63742U);
    msg.setSourceEntity(250U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(16U);
    msg.op = 114U;
    msg.clock = 0.3482486725716003;
    msg.tz = -97;

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
    msg.setTimeStamp(0.07014314805908262);
    msg.setSource(21010U);
    msg.setSourceEntity(45U);
    msg.setDestination(28072U);
    msg.setDestinationEntity(40U);
    msg.op = 167U;
    msg.clock = 0.41324326877477713;
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
    msg.setTimeStamp(0.3235722390234381);
    msg.setSource(54331U);
    msg.setSourceEntity(34U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(155U);
    msg.conductivity = 0.14892068552508586;
    msg.temperature = 0.19788277813716637;
    msg.depth = 0.47174551436749934;

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
    msg.setTimeStamp(0.06697764150213414);
    msg.setSource(47926U);
    msg.setSourceEntity(196U);
    msg.setDestination(34832U);
    msg.setDestinationEntity(135U);
    msg.conductivity = 0.8309849704284604;
    msg.temperature = 0.11945503670739199;
    msg.depth = 0.8396861627570709;

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
    msg.setTimeStamp(0.3114498072269114);
    msg.setSource(19058U);
    msg.setSourceEntity(254U);
    msg.setDestination(47399U);
    msg.setDestinationEntity(37U);
    msg.conductivity = 0.8267999593124338;
    msg.temperature = 0.7257453474764495;
    msg.depth = 0.044125686961907884;

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
    msg.setTimeStamp(0.7725709316490147);
    msg.setSource(36600U);
    msg.setSourceEntity(214U);
    msg.setDestination(1966U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.5999689376400178;
    msg.roll = 37048U;
    msg.pitch = 54352U;
    msg.yaw = 42997U;
    msg.speed = 26592;

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
    msg.setTimeStamp(0.6153599248399446);
    msg.setSource(42058U);
    msg.setSourceEntity(168U);
    msg.setDestination(5628U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.8438240950387688;
    msg.roll = 58646U;
    msg.pitch = 61891U;
    msg.yaw = 29039U;
    msg.speed = 10691;

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
    msg.setTimeStamp(0.17860346116856118);
    msg.setSource(28721U);
    msg.setSourceEntity(152U);
    msg.setDestination(43881U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.729262765044838;
    msg.roll = 4236U;
    msg.pitch = 62217U;
    msg.yaw = 17302U;
    msg.speed = -21229;

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
    msg.setTimeStamp(0.6886441895969334);
    msg.setSource(56500U);
    msg.setSourceEntity(232U);
    msg.setDestination(12341U);
    msg.setDestinationEntity(120U);
    msg.altitude = 0.9551346410060902;
    msg.width = 0.21106366488352957;
    msg.length = 0.73855275997123;
    msg.bearing = 0.7385188499966221;
    msg.pxl = 9514;
    msg.encoding = 55U;
    const char tmp_msg_0[] = {-81, 121, 1, 28, 91, -97, -3, -76, -104, 117, -69, 23, 38, -123, -36, 82, 5, 32, -111, 106, 111, 29, 67, 43, -5, 89, 86, 23, 97, 68, 125, -116, -96, 124, 71, 106, -113, 76, 48, 97, -122, -120, -115, 29, -105, -4, 38, 45, -47, 78, 84, -118, -95, 68, -18};
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
    msg.setTimeStamp(0.5359226841981535);
    msg.setSource(55852U);
    msg.setSourceEntity(135U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(218U);
    msg.altitude = 0.6855916392444342;
    msg.width = 0.7018627137002252;
    msg.length = 0.7992391878026452;
    msg.bearing = 0.678160222943289;
    msg.pxl = 25509;
    msg.encoding = 200U;
    const char tmp_msg_0[] = {-71, -127, 105, 27, -40, 21, 124, -28, -89, 11, 98, 40, -6, -31, -112, 75, -45, 113, -76, 100, 79, 24, 120, 12, -92, 66, 47, 69, 10, 33, 44, -73, 83, 105, -50, 100, 46, -31, 122, -19, -70, 12, -62, -62, -121, 121, 41, -36, -96, 105, 94, -89, 30, 41, 8};
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
    msg.setTimeStamp(0.7125649408877205);
    msg.setSource(65469U);
    msg.setSourceEntity(105U);
    msg.setDestination(18089U);
    msg.setDestinationEntity(198U);
    msg.altitude = 0.13699072884283037;
    msg.width = 0.25955519756849044;
    msg.length = 0.2554213378617003;
    msg.bearing = 0.6381709100073646;
    msg.pxl = -5640;
    msg.encoding = 82U;
    const char tmp_msg_0[] = {-122, -53, 82, 64, -85, -22, -29, -26, 40, -34, -66, -47, -57, 1, -2, -61, 71, 22, -41, 24, -26, 0, 39, -70, 117, 113, 33, 49, -38, -13, 67, -101, -30, -68, -101, 48, 117, -89, 66, 52, 89, 87, -85, 115, -88, 63, 32, -119, 97, 42, -117, 17, -7, 115, -25, -106, -88, -36, 34, -53, -17, -101, 53, 122, -7, 31, -122, 103, 90, 22, -19, -15, 65, 46, 42, -62, 64, -43, -52, 116, 56, 84, -80, -64, 47, -63, -102, -64, -57, -71, 74, 125, -113, 81, 115, -25, 115, -61, 94, -113, 95, 45, 87, 115, 59, -66, 86, 58, -40, 56, -49, 95, 45, -35, 126, -7, 32, 20, 29, -78, -58, -59, 106, -21, 18, -124, 122, -26, -61, -69, -65, 60, 62, -47, -70, -46, 82, -62, 97, 77, -22, -79, 124, -32, -52, 65, -92, -98, 42, 4, -68, 7, -16, 93, -7, 19, 25, -99, -128, 65, -48, 14, 22, -114, -87, 50, 14, -27, 56, 9, -74, -95, -16, -15, -96, -69, 19, -13, -6, -59, -19};
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
    msg.setTimeStamp(0.23729041832190623);
    msg.setSource(13559U);
    msg.setSourceEntity(3U);
    msg.setDestination(884U);
    msg.setDestinationEntity(160U);
    msg.text.assign("MNFATIOWUUSYYFCEDEATPMZJVERDPZPIYAALGJRTKYCNFUMRQJUSQIXFHRPZZIBQBSIHOJXZTBXZJDCRVMVVNZKRMWSIHIUQZLUNDFLAGORXADSUWGFMNST");
    msg.type = 54U;

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
    msg.setTimeStamp(0.14318955714171866);
    msg.setSource(9154U);
    msg.setSourceEntity(215U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(194U);
    msg.text.assign("UTMCRVDCRLPERBTGSVUPFOOMOVQCKLJTNMJOVUYJWKJEAHIZPZVKLSXISUCTNBCDGNAMYPLJRXKXERBSCFGEZOXAYHB");
    msg.type = 28U;

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
    msg.setTimeStamp(0.19052429607527677);
    msg.setSource(13484U);
    msg.setSourceEntity(64U);
    msg.setDestination(18908U);
    msg.setDestinationEntity(113U);
    msg.text.assign("RPMEHRKLYMVTDAJYZCLPDDSPBGCGMFDSTOFARPUFGCQMZTJJWELRCWBJWBQHNPGEWQUZIMDPIMSSHMKDJZKIICEXLBHBTFGKFSJQCNENTNDZZLWRTEYYTFPFDRZYLJUORCZXQVEUHKKOABXHQTBSWNWUYNUDNSKVVIZLUXSUMCGXRQGNCKIXQRIOOKLIPHFAAXKQPGDEVEUGYAOTVAFBNNSHIJBMWLXZPHXRBOO");
    msg.type = 21U;

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
    msg.setTimeStamp(0.48340921697650385);
    msg.setSource(15326U);
    msg.setSourceEntity(199U);
    msg.setDestination(5573U);
    msg.setDestinationEntity(187U);
    msg.parameter = 54U;
    msg.numsamples = 8U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 44678U;
    tmp_msg_0.avg = 0.8124679406388386;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8644035920444675;
    msg.lon = 0.877130577759444;

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
    msg.setTimeStamp(0.23431221423355475);
    msg.setSource(8709U);
    msg.setSourceEntity(13U);
    msg.setDestination(18650U);
    msg.setDestinationEntity(39U);
    msg.parameter = 88U;
    msg.numsamples = 97U;
    msg.lat = 0.5232712070279306;
    msg.lon = 0.05231206627466156;

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
    msg.setTimeStamp(0.7624338447328647);
    msg.setSource(45216U);
    msg.setSourceEntity(79U);
    msg.setDestination(28817U);
    msg.setDestinationEntity(65U);
    msg.parameter = 252U;
    msg.numsamples = 219U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34735U;
    tmp_msg_0.avg = 0.6769609658581749;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.683218942892492;
    msg.lon = 0.6991639117163149;

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
    msg.setTimeStamp(0.031678550593079224);
    msg.setSource(12690U);
    msg.setSourceEntity(38U);
    msg.setDestination(28781U);
    msg.setDestinationEntity(245U);
    msg.depth = 23813U;
    msg.avg = 0.8541513355796053;

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
    msg.setTimeStamp(0.8510635791826134);
    msg.setSource(209U);
    msg.setSourceEntity(149U);
    msg.setDestination(22982U);
    msg.setDestinationEntity(121U);
    msg.depth = 2610U;
    msg.avg = 0.23656199208481254;

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
    msg.setTimeStamp(0.4640727645124544);
    msg.setSource(56751U);
    msg.setSourceEntity(19U);
    msg.setDestination(64116U);
    msg.setDestinationEntity(137U);
    msg.depth = 17047U;
    msg.avg = 0.5492089427461398;

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
    msg.setTimeStamp(0.4715928360216166);
    msg.setSource(8480U);
    msg.setSourceEntity(39U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.14294599022781473);
    msg.setSource(12135U);
    msg.setSourceEntity(137U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.404553105677509);
    msg.setSource(50210U);
    msg.setSourceEntity(52U);
    msg.setDestination(29847U);
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
    msg.setTimeStamp(0.8350558635465944);
    msg.setSource(46214U);
    msg.setSourceEntity(83U);
    msg.setDestination(52072U);
    msg.setDestinationEntity(58U);
    msg.sys_name.assign("QVFYSXZFVXCUCRZTBBDZCRVRYCYNLMEYMOKSYHJZHDGXPQNJIBEKSHKGCGWRAMPTAUINNCKULWSOHTTSQBEDQOOAUFBSEENJDMMBIUXNILTDSWZPXVWHYKXGIETRMFPZHAOVLDGQNPGZFILXGAWVBPMMTWLKJXYAHUXNRQHGJMYUUVRFJUYRAJLBFOSECKWOFLRVMGOJLSWNOSOCJWPTKUFVQZIBBRHEVCYITDADQLTK");
    msg.sys_type = 2U;
    msg.owner = 4542U;
    msg.lat = 0.33041279182989136;
    msg.lon = 0.19187722629449633;
    msg.height = 0.06984334939060799;
    msg.services.assign("ALUNJQJELBBQXYGLCGACBZIZZREYNKDGTVSREPAKVFFGCCLZITRKBPQZDVRFENKJMNSOOEUBRDRZYAGHSPXMOWWQPFOXDKUUEBUHLUEFBXHCIPLVFORLSHSFKMXUAWNIXNADPGJVQYGZFWYIAMGIORSHTJISMDJTRWHPQFYBQXGJXSLWTISNOKMYD");

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
    msg.setTimeStamp(0.492491792887381);
    msg.setSource(58372U);
    msg.setSourceEntity(36U);
    msg.setDestination(13651U);
    msg.setDestinationEntity(109U);
    msg.sys_name.assign("RDHPYQPMEJANTVOETZPEAJIZXITOSRDMTUGGSUUBCYMCBHTFLICFCIJODRPXUMBDKNPGRJSHUQGLCX");
    msg.sys_type = 133U;
    msg.owner = 1222U;
    msg.lat = 0.3904036895939055;
    msg.lon = 0.1464460803559232;
    msg.height = 0.41744413682009074;
    msg.services.assign("NKKVDYCPONVHCTWHOZLPBBYDXXSZWMDJRGXLRQQZPKTTAZRINDMZHWFIZKFUKBNSCVNEVDURCJOGICQEZOHIWOGNLZMJPNPUIVQYEJUAHWHADEBQEWHLATOTFPTXTOZHBXSUGKJWTAYGGMMLYGUASJWJMTUFQXEVQTQBS");

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
    msg.setTimeStamp(0.5677075747026675);
    msg.setSource(57120U);
    msg.setSourceEntity(254U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(181U);
    msg.sys_name.assign("NXYLXCQHRUTUCXDKAXGYCRNKTSEMYODHQQEDVJACAKLBGGFIK");
    msg.sys_type = 57U;
    msg.owner = 53834U;
    msg.lat = 0.9929589481552225;
    msg.lon = 0.5707451704091273;
    msg.height = 0.6970551694156606;
    msg.services.assign("SDIPAZADFNETOYFHWCTTRVNOHXACPHGDPREVOQNPLKUUJBMTLFGLCZXOTQPNBKUWFIPUCUGGFYSRWCFIMBBWKOVAKBVQUFBDEWCXEVJNXQSZUEZMKIPDSQXJW");

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
    msg.setTimeStamp(0.3384891726680985);
    msg.setSource(26358U);
    msg.setSourceEntity(36U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(12U);
    msg.service.assign("ZLBOQLAVFLNOJMXFV");
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
    msg.setTimeStamp(0.6058922818346292);
    msg.setSource(15425U);
    msg.setSourceEntity(39U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(77U);
    msg.service.assign("WBRRWUASBATJCFYALKDDGUGMBYZZAXJPWZEQBFZJHAUYOEVUVEUQTTPUJRWVBBQDIQNSQFSGCVXXKMDWSSXYKIIHUVSHKOWENIK");
    msg.service_type = 180U;

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
    msg.setTimeStamp(0.06452333863360926);
    msg.setSource(48803U);
    msg.setSourceEntity(32U);
    msg.setDestination(23583U);
    msg.setDestinationEntity(39U);
    msg.service.assign("VNOYWOGPDEARGXNLQWWKSMUEJKVBHPOMGXYBPTFKJQDRAOFFPBZVRTXZPGZXSISDJLDCLBKVBNSCZNZHNEUPLOYHSMMONBJECMOWLZVCYCCFTYOWFQSHUCJAWYZIOYJA");
    msg.service_type = 3U;

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
    msg.setTimeStamp(0.9880368602111942);
    msg.setSource(59336U);
    msg.setSourceEntity(77U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(180U);
    msg.value = 0.04326119165486142;

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
    msg.setTimeStamp(0.9922875698920611);
    msg.setSource(65380U);
    msg.setSourceEntity(89U);
    msg.setDestination(13313U);
    msg.setDestinationEntity(83U);
    msg.value = 0.17294443882648602;

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
    msg.setTimeStamp(0.3732559423562831);
    msg.setSource(58860U);
    msg.setSourceEntity(128U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(88U);
    msg.value = 0.06014175965683233;

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
    msg.setTimeStamp(0.26857697951570714);
    msg.setSource(27297U);
    msg.setSourceEntity(54U);
    msg.setDestination(27723U);
    msg.setDestinationEntity(202U);
    msg.value = 0.850415183139344;

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
    msg.setTimeStamp(0.900053208598971);
    msg.setSource(41082U);
    msg.setSourceEntity(9U);
    msg.setDestination(1953U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7886811155213287;

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
    msg.setTimeStamp(0.572203936779478);
    msg.setSource(41995U);
    msg.setSourceEntity(24U);
    msg.setDestination(36643U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6235800645346111;

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
    msg.setTimeStamp(0.47403231717804883);
    msg.setSource(23209U);
    msg.setSourceEntity(104U);
    msg.setDestination(40832U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3099988391895172;

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
    msg.setTimeStamp(0.9948595775455901);
    msg.setSource(41936U);
    msg.setSourceEntity(250U);
    msg.setDestination(65097U);
    msg.setDestinationEntity(59U);
    msg.value = 0.20465232078285933;

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
    msg.setTimeStamp(0.705267850109236);
    msg.setSource(41052U);
    msg.setSourceEntity(222U);
    msg.setDestination(42753U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5157958078602723;

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
    msg.setTimeStamp(0.12603848635563653);
    msg.setSource(1918U);
    msg.setSourceEntity(85U);
    msg.setDestination(63478U);
    msg.setDestinationEntity(156U);
    msg.number.assign("HXWZILVJLXOJFXLLFMPBFNOXXZAVTHGXKEDOFNVOEYEMUMTPQBFIPORQCVWBP");
    msg.timeout = 7167U;
    msg.contents.assign("CPNGMSXZRYPJHVCFRVUWNZYQUYIVCKFPBXYANDIFBFNHMQWLZBQWATNFIPLZJQRRPB");

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
    msg.setTimeStamp(0.6195053041259412);
    msg.setSource(22504U);
    msg.setSourceEntity(241U);
    msg.setDestination(16002U);
    msg.setDestinationEntity(124U);
    msg.number.assign("TDTPWGJYNGTEKLWQHAIIWIJBSKZXOQREAGVELREJIBUWWHRDYFSEVVNINFDHAURISWIZMBDJMOFPLCQDIEOQAHTISYNKZJYYKQXRCNCXPXKDZHETBZNHSURDNKZCASVGZUVVOOFSUPKFVQRENYWMFCWLAAZJKFFJPUWIWQPCZOBXZBAJCQLDGVPUYBTHYTHBEELSRLHGRLNOHLOUXJPGCUL");
    msg.timeout = 52891U;
    msg.contents.assign("JEUWEWDYYXNYORZBNNDXWWVILIAFURQUSOMUSWXLPSOAUHCKHTTMZKKFGKZRLLLHCNPGAEINAJREDCFMSBYLQV");

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
    msg.setTimeStamp(0.3529717544048665);
    msg.setSource(20355U);
    msg.setSourceEntity(159U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(172U);
    msg.number.assign("EJMXYWTAZAFZRXOSDGLDLCEHGPBKSXEDNFFBMEOVSVQWHPJSAPLPNNJIROUHCJAQSZGRVNSGZEMMNNXEUFSBTLLGJYPPIJDBDCWKWVDCXUIVHCQFXNPHUICSVADHOMQKWDKDVYECGZKERZGTTHPXBW");
    msg.timeout = 59630U;
    msg.contents.assign("GIMZUPNNXOVOIPFECGURJCMLJNKZSBQHSACVXYJTDGOQVDDLBHKQHMBISIAOCVYPUZHRDXERFNQPZOJULQYXOIYJUNXSHIOJDYBQMFQGNAUAWEPW");

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
    msg.setTimeStamp(0.5104361979764224);
    msg.setSource(30350U);
    msg.setSourceEntity(191U);
    msg.setDestination(40194U);
    msg.setDestinationEntity(203U);
    msg.seq = 3333124530U;
    msg.destination.assign("XQFWIVKXIOEIXGBATTNPCQYKWSRRDMRNIKMEVSUILIZGOMZGXTJHZOJNXDDFVDUFAUCUBQHJDGTNBSMUPMNLHJKWMGLARYSZGRKZEFRTWZGRWIBOKPOKCGYQDECWVXPYHBFMBAMWFPSJJPXHRYBQTLLIGQJKQECLEWXSQOCXILYHNCWFDHNFAPCEZYEYTBUGWPFATVSQL");
    msg.timeout = 42498U;
    const char tmp_msg_0[] = {84, 77, 8, 20, -76, 80, 21, -73, -46, -123, -5, -85, 25, 83, 50, -46, -15, 97, -127, -90, 72, 9, -83, -31, -13, 97, 38, -54, 33, -64, 107, -8, 72, 93, 62, -56, 43, -88, 121, 99, -90, 64, 49, 23, 45, -64, -84, -100, 114, -92, 123, 63, 38, -37, 32, -41, 46, 60, -94, 126, 92, -35, 65, -79, -105, 79, -33, -66, 30, -29, -72, -14, 101, 60, -117, 33, 62, -58, -51, -13, 69, 122, -12, -66, 27, -85, -86, -22, 65, -120, 83, 83, -94, 46, 77, 6, 85, 23};
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
    msg.setTimeStamp(0.7550126464363378);
    msg.setSource(62371U);
    msg.setSourceEntity(64U);
    msg.setDestination(54192U);
    msg.setDestinationEntity(82U);
    msg.seq = 2063414425U;
    msg.destination.assign("FMUZQFMRZDPVSKFIIKXJMZLTMQMNFDLOHIKGHZKOETYGEGWKUBCOAAOSNY");
    msg.timeout = 51873U;
    const char tmp_msg_0[] = {-125, -4, 31, -16, 45, 91, 46, -94, -24, 124, 63, 114, 33, 119, 99, -27, -42, -23, 13, 8, -121, -53, 73, 111, 39, -119, -67, -82, 49, -18, 12, 66, 64, -81, 0, 94, -14, 104, -38, -10, -46, 126, 13, 110, -89, 10};
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
    msg.setTimeStamp(0.5235721590679414);
    msg.setSource(24259U);
    msg.setSourceEntity(43U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(125U);
    msg.seq = 4092713346U;
    msg.destination.assign("AMWSHOXVBVNVBTHOUQEGHZRLZAWVEZBYVVSOVTECKLTPPUUIGEOGITXKXAJDXAPACXSYGWJBRSJNWBDJHLOKACDKJOYYZNCPWNLDIWGCITVRBPTVAQMEZQBYYEUQINNCAT");
    msg.timeout = 23928U;
    const char tmp_msg_0[] = {6, -43, -45, -117, -7, -39, -119, 75, -115, -93, 39, -118, -108, 21, 77, 8, -61, 106, -21, 112, -62, -62, -68, 93, 80, -128, -61, -21, 101, -83, -82, -50, -2, 36, 105, 22, 65, -91, -53, 109, -66, -115, -47, 45, 33, 101, 56, 57, -91, -40, 12, 113, -33, 1, -40, -69, 114, 6, 18, 8, 42, 83, -107, 125, 120, 53, -2, -74, -74, 26, 82, 36, -74, -23, 52, -59, 18, -98, 39, 123, -102, 19, -71, -21, -56, 21, 59, -7, -2, -29, 85, -14, -115, -96, -11, -27, -8, -10, 80, -110, -37, -81, 10, 47, 59, 26, 112, -53, -18, 82, -28, 58, 59, 48, 30, -77, -64, 82, -71, 67, 50, 123, -95, -94, -84, -106, 20, -17, 11, -26, -3, -25, 28, -90, -56, 43, -81, 37, 12, 78, -13, -99, -9, 101, 66, -33, 111, 73, -82, -19, 114, -22, -127, -69, 51, -80, 107, 63, -36, 66, -102, 83, -107, -14, 5, -59, -27, 43, -97, -16, 103, -4, 75, 42, -8, -95, 118};
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
    msg.setTimeStamp(0.6907689791612824);
    msg.setSource(41327U);
    msg.setSourceEntity(27U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(159U);
    msg.source.assign("QEMLZEKYMHCZSLTGOGRQJHEXTDDCHILTUZWOJWOCFFGNNVKIMNTHJBRTROWRFHHAQMVWGWGNKPNSAUVLWVWYUSRXXXARRAFKPWYOMMBCAESQAOSCRCAQXUNXGKJKFRHOSMEHBJZLJBEDLLTNDPEESQFUKZXPXQPLIGQUYCGLABYHFEYAMTDKSNZVXKUVLOKIDIIJRIUOVJUYHZYBDUFJPNFDJMPVSATDPFTBXIVYBIQ");
    const char tmp_msg_0[] = {27, 54, 97, 73, 43, -22, 42, 85, -69, -35, 67, 112, -53, -114, 106, -86, 106, -11, -101, 10, -18, 20, -120, -78, -128, 35, -30, -56, -29, 45, 102, 83, 67, -109, 37, 37, 10};
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
    msg.setTimeStamp(0.5343827189256987);
    msg.setSource(49717U);
    msg.setSourceEntity(127U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(137U);
    msg.source.assign("HVIEDPEZFQOLTCKUTDCBC");
    const char tmp_msg_0[] = {-116, -31, -99, 25, -21, 48, 90, -105, 124, 70, -71, 12, -5, 91, -39, -16, -54, 114, 103, 89, 10, 14, 94, -68, -67, 101, -27, -79, -85, -58, -60, 31, 88, 27, 88, -90, -61, -9, -29, -102, 24, 23, -19, 12, 12, 96, 33, 76, 111, -94, -7, 25, -65, 6, 69, 86, 13, -49, -90, 106, -100, 84, -69, -7, -15, -80, 123, 13, 8, -63, -31, -99, -63, 39, -115, 92, -60, 81, -85, -119, 42, -46, 98, 94, -41, 0, -120, -81, 89, 66, -107, -88, 27, -63, 120, 7, -128, 104, 92, -33, -66, -102, -37, 3, -39};
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
    msg.setTimeStamp(0.10531476376455873);
    msg.setSource(17771U);
    msg.setSourceEntity(130U);
    msg.setDestination(18859U);
    msg.setDestinationEntity(238U);
    msg.source.assign("AALASKYEDDA");
    const char tmp_msg_0[] = {50, 65, 76, -65, 22, -92, 20, -16, 88, 34, -20, -103, -77, 99, -4, 28, -97, 0, -23, -93, 36, -68, 9, -31, -7, 37, -2, 70, 5, -33, -5, -4, 19, -92, -24, 40, -32, -48, -33, 60, 79, 112, 36, 106, -84, -10, 40, -59, -86, 51, 17, -123, -60, 105, 68, -71, -12, 74, 114, 80, -45, -66, 85, 80, -38, -10, 8, 104};
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
    msg.setTimeStamp(0.3956830413112946);
    msg.setSource(37578U);
    msg.setSourceEntity(242U);
    msg.setDestination(4051U);
    msg.setDestinationEntity(62U);
    msg.seq = 465948691U;
    msg.state = 155U;
    msg.error.assign("RBGKIWKENRUNWLGCTCSOBQTMWWEZTFJKZRXUJCBMYYSIBMWENQPVWBVMPCNFSTGXOXYVYNFODIMLRCGOCDFNJUWNROSMFVSOESAMZSVJNBMPKMUPIEYAAHRHJVGDONSQZVWLKZGKJJRYAAJXIGZHIXLXUDQUPEILAUWHYVZULXVBZKPTQKQRQPZIJALSTQTJCK");

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
    msg.setTimeStamp(0.781644684111697);
    msg.setSource(39726U);
    msg.setSourceEntity(39U);
    msg.setDestination(15664U);
    msg.setDestinationEntity(223U);
    msg.seq = 429325647U;
    msg.state = 45U;
    msg.error.assign("XMICEIROFEUBJKKRGMSZCFTPRZFUOFVZRIWGUGMTQGCFUSTTDSIDOAQBHHHSWNNPXAGADXBRGYTYFYDONGMXAOWSPMAVVQHHTRVLPTHSWDWOYWMVREBLPCQCGXUGJN");

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
    msg.setTimeStamp(0.2496092092229656);
    msg.setSource(64918U);
    msg.setSourceEntity(170U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(37U);
    msg.seq = 2514960313U;
    msg.state = 237U;
    msg.error.assign("YEITXZODPOQCDEMSEQYNUEBQLFWXOOCHUUEVDQBHUGTZIDARVPTXUECOURBWNNLMLDAWLBKXSLCFPZJRGMWPPYNJRFRIGJSUABSRAFRZYZKJFJINDWKIRVVPLITPNJLVOFRUXACHKYKZKNMCHMDXHYGCHJTPKABXHSXKJBPVMVUGSYVWWBQWGXLMKIAKSZMEWIJMOOAZIZEBGYMESQSCDTNRXEQZTDGFFTWTCYFBPOHCANLQUHJFOLHTVSQ");

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
    msg.setTimeStamp(0.46654236647870917);
    msg.setSource(40991U);
    msg.setSourceEntity(16U);
    msg.setDestination(62224U);
    msg.setDestinationEntity(201U);
    msg.origin.assign("BWGCAQBPENOZXCEJXQOIYIWEKVTJSEJKTKMFKEQBTJGAFAILOQAHMQXFNGTBTRXXDMGJLSETSRWWCIOKYKDOUSBRAJLRDMUIRFQCADKUEWRWZZPWZVFVNKVZMAYOWTHUSVZMGWGSMMBQLXXYPGYUNXNVKPSNNURFSSNKCWUBNOYSYHRPEBPZTQIDAVOCCHTGDAFPMFDXQOCTJPJNZHGROPEHYUBGCLDFEIYYDVCPFLJVHXHAIILIL");
    msg.text.assign("FARQQVNFTEUAOYFZNEBVBKMOULGKXXPYNGLHGZI");

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
    msg.setTimeStamp(0.4306055706996582);
    msg.setSource(58157U);
    msg.setSourceEntity(192U);
    msg.setDestination(41268U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("TRSAMWMOLYZOPKEXLOTRVSBIDUHDKMRMCRJKEOULFEYGEXUUCOJMEZIBDNPFJTCUYQPSCCTTWDUUYNSPXLWQJPHG");
    msg.text.assign("SHOTMDDPWNGTXLLUVUEKSIQE");

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
    msg.setTimeStamp(0.6470229368919481);
    msg.setSource(15573U);
    msg.setSourceEntity(1U);
    msg.setDestination(34235U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("RPUNYJXVITMRIUMNQDGBHAVYVZSHLRDWXYPJHSYYGTIXJLZWTZRZJKOOQGINOOFAQNJABYSXAESAOGWMCYNKZCJPXJFDGNIPVFFAJCDGMPT");
    msg.text.assign("HHRUCAOYPECSVLWRYTFZDEZBQUXSDKGKSJTTPXLUHMLDCENIUGFAMRBMOXZOKWFRBEHVGNXBBUEWYMRUVJTCGZLYCFYYPIZOEMIQSYXJHKPEALDTEULA");

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
    msg.setTimeStamp(0.16080620933205136);
    msg.setSource(58455U);
    msg.setSourceEntity(10U);
    msg.setDestination(38241U);
    msg.setDestinationEntity(91U);
    msg.origin.assign("YRCPNMXVNJTEYSOGTFRCCZCUSFUUIWZWQOXZDPAEOJLDYHOZRQKKLLDUEFSXXIWMTKDRYVLKCAUFIQDGBWH");
    msg.htime = 0.48653601240694455;
    msg.lat = 0.708634146451777;
    msg.lon = 0.8239693833022806;
    const char tmp_msg_0[] = {87, -112, -54, -43, -128, 17, -44, -60, -12, -65, 15, 18, 44, -104, -36, -45, -107, 122, -4, -97, -125, -89, 31, -25, 94, -78, 45, -38, -43, 126, 92, -88, 78, -90, 0, -64, -40, -30, -31, 2, -22, -44, 32, -125, 126, -36, -5, -45, -91, 12, -26, -6, 120, -26, 104, 58, -1, -121, 9, -98, -101, -113, -119, 121, -58, -92, -119, 85, -90, 24, 31, -92, -109, -37, 10, 10, -35, -63, -67, 109, -29, 65, 40, 6, -75, 98, -85, -100, 117, 25, 7, 99, -109, -1, 26, -27, 108, -80, 75, -54, 124, 122, -67, -111, 19, -19, 55, 14, -58, -128, -76, 22, -27, -54, 99, 3, -25, 118, 37, -63, -91, -94, 123, 3, 97, -93, 94, 49, 43, -58, -120, 117, 23, 20, 24, -59, -100, -75, -13, 108, 86, 42, -39, -109, 74, 7, -121, 124, -72, -126, 50, 86, -50, -20, -56, -34, 77, -126, -106, -121, 99, -31, -31, -20, 88, -59, 13, 45, -116, -85, -38, 55, -41, -49, -14, -41, 46, 87, 121, -97, 28};
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
    msg.setTimeStamp(0.32420241966498087);
    msg.setSource(24406U);
    msg.setSourceEntity(244U);
    msg.setDestination(4364U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("XUITUSPBWUPWWHVGLMLMLDAMFNEXPLTZEKMWQYEKMCCZKJGYOMNVHUUJXUWQZZUOHOHQLQYMTINSIKVPCSTEVWBQGRXCNVRTZFIK");
    msg.htime = 0.49493725755645945;
    msg.lat = 0.08867940851010958;
    msg.lon = 0.8286042278148017;
    const char tmp_msg_0[] = {-79, -117, -8, 61, -74, -102, -80, 114, 60, -94, 65, 76, -28, 46, 32, -56, 119, -5, 118, -38, 84, 122, 22, 46, -127, -31, 42, -89, 105, 94, 123, 74, -7, 48, -37, 93, 32, -13, 82, -126, 104, -28, 63, 122, 80, -35, 20, -16, 39, 11, -127, 52, -77, 20, 116, -117, 86, 94, -61, 69, 33, 33, 71, 99, 24, -30, -75, 105, 6, 117, -17, 56, 97, -114, -2, 31, 5, -101, -26, -80, -39, -64, 81, 19, -111, 34, -36, -22, 35, 45, 52, -11, -40, 120, 82, 54, -11, 11, 36, -79, 51, -12, 72, 40, -103, -24, -30, -65, 126, -10, 32, -42, -52, 5, 80, -19, 120, -65, 109, -21, -3, 61, 45, 8, 80, -30, 87, -86, -23, 64, 29, -28, 0, -70, 62, -51, -60, 16, -81, 52, -123, 67, -23, 63, 70, -29, -38, -18, -122, 46, -10, 19, -20, -96, 29, -28, 76, -55, 47, 2, -70, 1, -119, 95, 123, 31, -5, -88, -92, -86, -31, 115, 21, -12, -87, 89, 102, 8, -58, 31, -89, -12, 21};
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
    msg.setTimeStamp(0.8433171340321531);
    msg.setSource(33074U);
    msg.setSourceEntity(183U);
    msg.setDestination(7768U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("EYJKEMLKAZRPPOMJXKCQTVURJHIQWOMKFMWAWPNLLINSAWONXXKCSBLOEFGTHMRYABNQSVDSTYFGURJHDDQEFIGQYDXLLXSMAOPXQFMCIBUNNHYBKRTRGTVOOUXUUAQIUPKGNAJQROGZHDXJWWBLEFCOMRKYFVCSHJVRJWELVIXPQBTHHALYPSCNCSGELYPZVTWCEOUDNGVWDDCFGNITFFUBJZGZJSHQAIBZCBEAHWMY");
    msg.htime = 0.529953244409452;
    msg.lat = 0.3856120041006944;
    msg.lon = 0.5607650057889343;
    const char tmp_msg_0[] = {88, -34, -24, -11, -16, -64, 4, 45, -24, 68, 7, -96, 82, 30, -106, 53, 30, -75, -118, 21, -122, -115, -22, 122, -107, -57, -110, -73, 97, -27, 51, -97, -16, 41, 87, 16, 13, 85, 101, -60, 114, 125, 66, -56, 107, 14, 42, -15, -17, -30, 30, -121, 4, 89, -111, 117, -94, -5, -102, -24, 125, 17, 55, -18, 115, -20, 78, -26, -21, -79, -31, -26, -79, 121, -92, -63, -127, -32, -52, 86, -68, 103, 75, -10, 7, 58, 86, 73, 80, 29, 95, -75, -54, -126, 37, -91, -61, 100, 52, -61, 69, 79};
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
    msg.setTimeStamp(0.9490121974079264);
    msg.setSource(30674U);
    msg.setSourceEntity(116U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(246U);
    msg.req_id = 11359U;
    msg.ttl = 56006U;
    msg.destination.assign("KNZGNZZMZIJFNQKSTNXYMDAODRTPDCJTVKLDXWCGVUDKSIHHAWQUWBVEHRCGMKBKTLMRBXRRKXNHECXVWYBZFQQYPYOHR");
    const char tmp_msg_0[] = {-97, -55, 26, 120, -15, 85, 103, -74, 12, 111, 43, 17, -112, -16, 18, -47, -108, -97, -50, -96, -48, -117, 43, 62, 109, -117, -46, 40, 93, -80, 14, 61, -34, 42, 122, 16, -35, -96, 45, -122, 15, -51, 39, -44, 74, 76, 87, 79, 46, 39, -91, -93, -112, -62, 118, 66, 22, 73, -119, 92, -85, 39, 99, -65, -55, -78, -63, 104, 78, 5, -88, -65, 34, 83, 99, 37, 113, -110, -89, 12, 38, 125, 121, -23, -10, 28, 2, 55, -99, -46, -19, -82, -102, 10, -87, 93, 53, -87, -70, 78, -89, -39, 68, 122, 125, 45, 8, -115, -38, -79, 55, -59, 112, -100, 23, 112, -105, 102, -103, 103, 58, 68, -30, 115, 54, 51, -116, -107, -43, 125, -4, 65, 58, -32, -6, 64, 96, -67, -110, 72, 100, 19, -58, 49, -39, 79, 61, 31, -85, -105, 123, -85, -16, 16, 121, 49, 32, -13, 23, 40, 59, 0, -90, -33, -77, 9, 44, 93, 64, 122, 107, 74, 15, 125, 45, -71, 43, 98, 4, 64, -12, 27, 44, 126, -73, -102, 21, -64, 13, -64, -13, 38, 72, 30, 8, -69, -46, 55, -66, -86, -82, -73, -108, -29, -41, 40, -32, -25, 93, -123, -25, -114, -61, 112, -30, -72, 14, 12, -69, 52, -10};
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
    msg.setTimeStamp(0.8796406638092464);
    msg.setSource(12411U);
    msg.setSourceEntity(18U);
    msg.setDestination(64320U);
    msg.setDestinationEntity(150U);
    msg.req_id = 8594U;
    msg.ttl = 2715U;
    msg.destination.assign("BVEJDEFTMILJBJXOPACBAXXVKHHAGQXCZKDWWGZDNPGHRIJMNZMECFDCQZFJRRQLHFORUKJTGSXOYSDDCSBIPKHPYSJPEIOZEGFUNJJDTDORMTUWCIXFRANSYOEFSOPMGRMTYYUWFWZWVLISSGLNECUQXUACRVSMQJQTWCBIBULKOKH");
    const char tmp_msg_0[] = {112, -52, -1, 126, -97, 40, -115, 36, 67, 50, -75, 49, -31, -66, -99, 117, 86, 0, -113, -122, 82, -55, 12, -62, -19, 35, -102, 100, 50, 5, 67, -46, -18, 88, -78, 123, -93, 96, -16, 73, -61, -86, 71, -69, 69, 6, -16, -30, 17, -91, 38, -117, 47, 46, -65, -117, 60, 84, 114, 28, -17, -45, -121, 62, -23, -66, 45, 70, -82, 60, 37, 110, 68, 82, -73, -107, -77, -15, 69, -18, 98, -4, -115, -24, -83, 48, 39, -84, -115, -99, -9, -66, -126, 26, -109, -85, 111, 96, 52, -75, 66, 10, -83, 31, 2, 89, -1, -87, -9, -76, 119, -36, -13, -31, -34, 82, -79, -45, 0, 8, -40, -36, -68, 55, 67, -84, 85, 99, 98, 8, -104, 99, 66, -70, 16, 107, 65, 33, -16, 51, -88, -89, -96, 55, -25, -51, -39, 117, -15, 28, -78, 26, 1, 43, 93, 91, 123, -9, -50, 99, -76, -69, 74, -87, 105, 57, -42, -78, 47, 113, -22, -24, -117, 56, -35, 46};
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
    msg.setTimeStamp(0.5799875037871605);
    msg.setSource(13566U);
    msg.setSourceEntity(32U);
    msg.setDestination(2148U);
    msg.setDestinationEntity(65U);
    msg.req_id = 21000U;
    msg.ttl = 12908U;
    msg.destination.assign("TYJLPWZAECTPHKSVXSRJURMFTUKHDZNXLRLYYWYJRDJSSUWRPWVHYHVOFOYTECJTFVVQGGJKYRKVKLQCNZGZCHMUTNKNQSNECATUBMSMVDJYHQFHPQLRKWBBBRDTTXTPOPHBCWNSEAPWOFSIZYALXDKXECDMOANQZBAERNMYGACOUQDGMMBBCDOIAEERDEUBZPQFLDPEXWI");
    const char tmp_msg_0[] = {-91, 70, 43, 81, -30, -62, 33, -110, 88, -57, -40, 62, 103, 51, -45, 16, -49, -89, -38, -7, 121, -49, -112, 37, -113, 53, 16, -69, -117, 30, -83, -118, -97, 89, 80, -90, -85, 104, -48, -25, 65, 55, -68, 116, 41, -27, 112, -37, -78, 56, 56, -81, -66, 45, 32, -99, -23, -111, 17, 20, -58, -100, -53, 49, -52, -84, -117, 59, 38, 89, 90, -15, 8, 83, -3, 28, -112, 116, -64, -45, -8, -37, 38, 71, -5, -66, 90, -35, 79, -14, 32, 105, -44, 24, -17, -108, -109, -20, 16, 112, 116, -103, 42, 4, -16, 24, -68, 117, 11, -103, -67, -106, -36, 17, 46, -112, -84, -114, -3, -99, 123, 33, 28, 19, -68, -112, 58, 13, -114, -18, 71, 24};
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
    msg.setTimeStamp(0.1897172406961155);
    msg.setSource(35382U);
    msg.setSourceEntity(45U);
    msg.setDestination(36863U);
    msg.setDestinationEntity(135U);
    msg.req_id = 39413U;
    msg.status = 81U;
    msg.text.assign("WMZGROLXDVMOSUEDBFGHYURDYPXLFQQZOCGIVMBQLJRZIFPRJTMONHAJTDLLAWUXIEVLPLDROSACVWVVNWSQTIMWNNTLHUDKCXKECMYQXPXOMWJAYLEGPBNRFAEFBSKOVSJRDSBACBSQUNCJIMGTEQKAJPAHSUPSW");

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
    msg.setTimeStamp(0.6332114277119639);
    msg.setSource(59776U);
    msg.setSourceEntity(247U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(224U);
    msg.req_id = 47023U;
    msg.status = 18U;
    msg.text.assign("XRQKFXLLSITXGJIADTYRWJXEDGYAPQTKDQZCWHEPURIAHLIVJEOUSAMPTYNTQSDQDEPUFZJVVKMGNHIARHMUBRKUALVHGWJHZONWFXNXGISLWILMIKFCHMKFBZOHKZCMQZEEJDNWZZUGPTTTYCGLEMXRIYHDCNR");

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
    msg.setTimeStamp(0.8960799258006037);
    msg.setSource(65219U);
    msg.setSourceEntity(254U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(239U);
    msg.req_id = 16753U;
    msg.status = 131U;
    msg.text.assign("CFGLGABINODACVAQNZBXAJDYFVILCGNCDJCOXWHXKGAWWZLOTALZUEKSOIVMUCVPKEVORMNSFMQXMPNDUQPRRIAUEJIFIMGKUFDQESRPPUESORL");

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
    msg.setTimeStamp(0.7208235692234115);
    msg.setSource(11412U);
    msg.setSourceEntity(190U);
    msg.setDestination(16115U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("RFGHZIUDSIQJZOYYXYQVPTZATEIQXUWJRVUCWOTMMYBAMHFGOAXNJLQKTRKJTOKZQGFNWTAMUSTKZRWNXTHEGMXKSVIEEQQJRZEBKYUVUAUFXVCCWDBDIPRSDGSVHEMEHNOZEOBGKNYWWHPFWOVXTYIGGBNCJNZDWQHKRULPLDBFMQYTYIDELERPYRJLVHDJLKPBPDVWSZSCC");
    msg.links = 1849273848U;

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
    msg.setTimeStamp(0.7941304477820696);
    msg.setSource(17914U);
    msg.setSourceEntity(166U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("NVWHAIHQJQNBSUCTYATHDLHLXRKIEXCVGGBGLZISRAXHRFUWTANMBKRZDNMDYYILBBMMWIPFDUTGJWEOEKMYEEYQQCAXBVEADNSOFJRGOXUUSLENSZKUQOKJYFIVSJURCIOFJDRPODLXZZIQKTIBKG");
    msg.links = 1734956023U;

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
    msg.setTimeStamp(0.629941626224945);
    msg.setSource(48896U);
    msg.setSourceEntity(212U);
    msg.setDestination(39814U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("VGWUPXPDGVPTCSXFJXLJGVQKFIVRQZTIFNTCDMZVDNMTODMB");
    msg.links = 1513091886U;

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
    msg.setTimeStamp(0.02796281536448053);
    msg.setSource(59062U);
    msg.setSourceEntity(131U);
    msg.setDestination(60372U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("PKZCFVPCILCYMHEHFEQFWAXDLNHHYLQWEYQVZBCKXQBSNULBSBWGXDYNVXUJKRUGIBZRWIAELTCYMRQVQUTIIEDPFQHITNNUBRRGWMJYLMJKVQMYGUYPYJMUVXLRDHFPMARDPCNTBDQXINSLRFTMAOEEGQOSZZSBEODHAOWCJOWKOOGLEZXKNLHKUTAGHAOTSBNXPPKXJRSC");
    msg.action = 111U;
    msg.grouplist.assign("CCPLZJYHXNZHUIOJZJNKQJLKFBIVLIKHVPBXQXHOACWMFMUDLDIEFNGCNTVKKWOWRRUGCMPFNFLZWIURWXYODGEYAHQIWXRMJYSQXGWRVOAEFKMLBHRAJMPDULNRSEPNSFVCREHVDGXBKXVBWTFSPYHTPTWHKPLWGOJOOL");

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
    msg.setTimeStamp(0.6578734145378243);
    msg.setSource(63709U);
    msg.setSourceEntity(34U);
    msg.setDestination(39513U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("URRBTBNMUKIUNJQVHIQZTCXKABFDGPWLSEZKFYSBXTJURYUAMWNIKXLKVRBOQUXNXJJCFUQVRAGULBOCNXDLTMDNAGVFCEEDPPRLCGROTVJTFIHJISSIQMWZHOMYKVYOZHVGQLBUMZGFRFIBZFPJWEWBDEVCMEUKHQYETXSVKZRIQTSANKOYWADSGOPDLBHRWZZQNALCDGKLYMCSYCGOZWXMFAHYC");
    msg.action = 183U;
    msg.grouplist.assign("EDBHFYEGWZFKODYWNIPMMHBPFMXHORWGPPDSQRZQBWIKDQVLJSEISJBBVTSNJLXXYODDJLRNUPJJHZHVXSAQTHNLZWTVRTJIEYRNJTKBFZTTMQOFZQEQUPROBCGVRKACGQCGCAUVBYEHUWYCXIWIUUHGRXTPYSVIS");

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
    msg.setTimeStamp(0.5016302036806324);
    msg.setSource(60022U);
    msg.setSourceEntity(183U);
    msg.setDestination(16148U);
    msg.setDestinationEntity(160U);
    msg.groupname.assign("QHGOKACHPOKYADZETMLEJEDYZCHJXLLVSUBXDUTMQZLWWIRLSEZSUSAXZWIKOGDFUOOIFCPYXTJYLSJCGUUMKXRFVOFSCBTBMSGGIKGVNNPYJWUBQQJRKMFRIICAAZKICEXVRMAEMENPGRQHTLAXWPDHJ");
    msg.action = 25U;
    msg.grouplist.assign("NYZEIANHKOXMCKVDOXFSROXUAZILLMKFHYZQVLNCWUZSABFU");

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
    msg.setTimeStamp(0.6221985463646877);
    msg.setSource(37327U);
    msg.setSourceEntity(198U);
    msg.setDestination(61131U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6261371664564322;
    msg.sys_src = 61014U;

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
    msg.setTimeStamp(0.11524777918747608);
    msg.setSource(47550U);
    msg.setSourceEntity(231U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(253U);
    msg.value = 0.6900157383740047;
    msg.sys_src = 34014U;

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
    msg.setTimeStamp(0.11057179743422707);
    msg.setSource(1962U);
    msg.setSourceEntity(158U);
    msg.setDestination(19568U);
    msg.setDestinationEntity(219U);
    msg.value = 0.24192864413026827;
    msg.sys_src = 62229U;

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
    msg.setTimeStamp(0.7657334887710935);
    msg.setSource(39449U);
    msg.setSourceEntity(182U);
    msg.setDestination(12318U);
    msg.setDestinationEntity(2U);
    msg.value = 0.08392896675325723;
    msg.units = 84U;

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
    msg.setTimeStamp(0.7270979979064546);
    msg.setSource(57544U);
    msg.setSourceEntity(224U);
    msg.setDestination(31576U);
    msg.setDestinationEntity(108U);
    msg.value = 0.44650072498173077;
    msg.units = 109U;

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
    msg.setTimeStamp(0.3411020041947611);
    msg.setSource(26511U);
    msg.setSourceEntity(107U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(131U);
    msg.value = 0.16118786237070792;
    msg.units = 104U;

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
    msg.setTimeStamp(0.236319957380284);
    msg.setSource(36110U);
    msg.setSourceEntity(215U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(21U);
    msg.base_lat = 0.8074141892311612;
    msg.base_lon = 0.5596987705096358;
    msg.base_time = 0.7766985763868427;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 10409U;
    tmp_msg_0.priority = -30;
    tmp_msg_0.x = 30826;
    tmp_msg_0.y = -17829;
    tmp_msg_0.z = -23556;
    tmp_msg_0.t = 13653;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.3198281645311808;
    tmp_tmp_msg_0_0.y = 0.4539233064410165;
    tmp_tmp_msg_0_0.z = 0.7628511305564206;
    tmp_tmp_msg_0_0.phi = 0.2552671720401031;
    tmp_tmp_msg_0_0.theta = 0.7955252437510942;
    tmp_tmp_msg_0_0.psi = 0.8934861619521715;
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
    msg.setTimeStamp(0.4275405715491003);
    msg.setSource(1491U);
    msg.setSourceEntity(26U);
    msg.setDestination(7990U);
    msg.setDestinationEntity(57U);
    msg.base_lat = 0.10363832236192516;
    msg.base_lon = 0.3744059318470794;
    msg.base_time = 0.4575384577592094;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 26270U;
    tmp_msg_0.priority = 24;
    tmp_msg_0.x = 19274;
    tmp_msg_0.y = 13690;
    tmp_msg_0.z = 13136;
    tmp_msg_0.t = -2950;
    IMC::HistoricCTD tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.conductivity = 0.5408052275287573;
    tmp_tmp_msg_0_0.temperature = 0.9605101783866312;
    tmp_tmp_msg_0_0.depth = 0.6507541987960337;
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
    msg.setTimeStamp(0.011289693054470362);
    msg.setSource(49424U);
    msg.setSourceEntity(246U);
    msg.setDestination(42429U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.5611742934518416;
    msg.base_lon = 0.8963218664489093;
    msg.base_time = 0.7233957341676968;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 42312U;
    tmp_msg_0.destination = 37736U;
    tmp_msg_0.timeout = 0.05455097581176971;
    IMC::GetWorldCoordinates tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.tracking = 129U;
    tmp_tmp_msg_0_0.lat = 0.5257576001227522;
    tmp_tmp_msg_0_0.lon = 0.6691076939008724;
    tmp_tmp_msg_0_0.x = 0.6697724602896014;
    tmp_tmp_msg_0_0.y = 0.7253856451853089;
    tmp_tmp_msg_0_0.z = 0.8651639357219642;
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
    msg.setTimeStamp(0.3149557131073083);
    msg.setSource(61182U);
    msg.setSourceEntity(128U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(0U);
    msg.base_lat = 0.41377944706533354;
    msg.base_lon = 0.830609552458509;
    msg.base_time = 0.3803707036292642;
    const char tmp_msg_0[] = {88, 76, 58, 14, -128, 33, -30, -50, 62, 86, 108, -111, 74, -101, -119, -114, -8, 60, -50, -8, -60, 34, 99, -16, -26, -70, 9, -27, 96, 23, 51, -21, 59, 104, 105, 48, -109, -22, -74, -32, 45, 39, -67, 89, -45, 39, -123, -74, -118, 80, 68, 119, 50, 66, 34, 6, 99, -89, -21, -24, 112, 109, -59, -119, 107, 24, -117, -86, 51, -21, 94, -51, 117};
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
    msg.setTimeStamp(0.33451056838630067);
    msg.setSource(22938U);
    msg.setSourceEntity(187U);
    msg.setDestination(62861U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.40108738967725444;
    msg.base_lon = 0.6445850047866056;
    msg.base_time = 0.7872354113255718;
    const char tmp_msg_0[] = {4, 78, 108, 109, -73, -16, 46, -114, 15, -14, -34, 94, 62, -125, -115, 75, -121, 60, 47, -97, 37, -118, 8, -19, -38, -126, 70, 117, 43, -114, 68, 86, 95, -89, -29, 50, -23, -95, 28, -79, -78, 91, -6, 123, 19, 10, 37, -66, 89, 91, 70, -36, -40, 45, 47, 126, -33, 44, 41, -124, -10, 41, -112, -62, -46, 0, 56, -127, -33, -94, -77, -70, -125, 106, 41, 109, -25, 59, 97, 107, -26, -16, 6, 37, 121, -90, -114, 59, 69, 24, 40, 33, 75, -85, 79, -14, -35, -75, 88, 39, -66, -45, 83, -60, 26, -37, 65, -56, 18, -61, -24, -104, 113, -35, 70, 75, -36, -65, 23, 32, 3, -44, 6, -11, 37, 58, -56, 65, 95, -14, -120, -63, -25, -69, 38, 82, 17, -2, -79, 100, 23, -107, -47, -78, 112, 101, -93, -44, -14, -97, -22, -121, 35, -99, 21, -4, 25, 103, -48, -26, -68, -66, -63, -28, 60, -104, 40, 5, 44, 33, 72, 54, -20, 30, -33, -84, 119, -21, -76, -85, -86, 24, 14, 111, 95, 61, 71, -124, 17, -30, 69, -128, -101, -91, -75, -64, 52, 26, 8, -45, -86, -25, -23, -40, 122, -109, 3, -88, 80, -50, -113, -8, 110, -125, 68, -76, -43, -25, 90, -126, -109, -118, -64, 57, -43, 78, -9, 104, -91, 114, 87, 83, -122, -100, 6, -17, 103, -57, -97, 62, -89};
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
    msg.setTimeStamp(0.8861938868198818);
    msg.setSource(18150U);
    msg.setSourceEntity(235U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(7U);
    msg.base_lat = 0.5696706604397961;
    msg.base_lon = 0.47418765498773474;
    msg.base_time = 0.08240791104919865;
    const char tmp_msg_0[] = {-120, 7, -26, -20, 5, -121, -60, 22, -18, -125, 103, -120, 7, 8, -97, -53, -109, -18, -59, 62, -22, -126, -42, 27, 13, -40, 18, 59, 86, 27, 118, -103, -124, 59, -65, -58, -31, 67, 15, -80, 117, 39, -32, 42, 75, -106, 118, -72, 65, 39, -3, 24, 82, 28, -26, 101, 90, 46, -73, -107, 64, -10, -104, -55, 101, 87, 61, 53, -123, -2, -72, -116, 118, -75, -18, -50, -76, 3, 15, -88, -69, 87, -25, -106, -110, -2, -69, 69, 16, 108, -40, 44, 73, -34, -96, 124, 15, 124, -28, -101, 120, 119, -79, 37, -38, -53, 105, -60, -50, 33, 16, 76, -29, 103, -118, 39, -59, 112, -95, 44, 13, 113, -89, 42, -40, -61, -124, 18, -68, 23, 18, 0, 70, 89, 116, -100, 27, -20, 44, 6, -106, 12, -126, 116, 53, -24, -83, 19, 75, 37, -124, -36, -32, 21, -48, 92, -19, -102, -87, 45, -26, -26, 105, 38, 64, 50, 90, 126, -96, 14, -109, -62, -122, 7, -126, 80, 43, 94, 42, -20, 66, 119, 118, -117};
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
    msg.setTimeStamp(0.5701499251016168);
    msg.setSource(36180U);
    msg.setSourceEntity(205U);
    msg.setDestination(44272U);
    msg.setDestinationEntity(122U);
    msg.sys_id = 12002U;
    msg.priority = -117;
    msg.x = -6924;
    msg.y = 5341;
    msg.z = -25393;
    msg.t = -11426;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 90U;
    tmp_msg_0.list.assign("UQOJMHYKVJFABZNHYTYOFXNIPRXMFXOPWLWMBWDHWNRVUGUXJSUFSTASVKPFHHBZGVZEQTLTGIIAMXFMDLL");
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
    msg.setTimeStamp(0.30990597693509525);
    msg.setSource(47213U);
    msg.setSourceEntity(181U);
    msg.setDestination(54098U);
    msg.setDestinationEntity(135U);
    msg.sys_id = 11065U;
    msg.priority = -64;
    msg.x = 6777;
    msg.y = 17299;
    msg.z = 3266;
    msg.t = -20502;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 61427U;
    tmp_msg_0.lat = 0.05978926651898686;
    tmp_msg_0.lon = 0.5380502306227591;
    tmp_msg_0.z = 0.9424415921601986;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.speed = 0.5989949644170266;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.syringe0 = 10U;
    tmp_msg_0.syringe1 = 22U;
    tmp_msg_0.syringe2 = 51U;
    tmp_msg_0.custom.assign("GPKCRFJXKDLPNSXXVUCFUWBQUDYXXYDJZIIAK");
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
    msg.setTimeStamp(0.8853026616747052);
    msg.setSource(4567U);
    msg.setSourceEntity(91U);
    msg.setDestination(6739U);
    msg.setDestinationEntity(191U);
    msg.sys_id = 1576U;
    msg.priority = 63;
    msg.x = -11743;
    msg.y = -26007;
    msg.z = 10213;
    msg.t = -23582;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.37727116199701183;
    tmp_msg_0.lon = 0.2889347985969303;
    tmp_msg_0.speed = 0.6120686580505006;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.limits = 148U;
    tmp_msg_0.max_depth = 0.6103419997659296;
    tmp_msg_0.min_alt = 0.2970076623740878;
    tmp_msg_0.time_limit = 0.6635133078647251;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3413261523364082;
    tmp_tmp_msg_0_0.lon = 0.0007843613397575666;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("YHHJSUCRRLFPCETUFBGFVLDKMCDDAAJVKYBRMNNMUCFCXYBISRJDKTBIMUIZLKDSZHOFPOHCEVQPGHFDFWEWAQNHZCETHAQJVXJKGMDCKYRTYQHCSXYZOWAXTAWLXZPEBINUEVLDNLWIVULN");
    tmp_msg_0.custom.assign("YQWVHOZBOFONODRGDJNWCWJSPAYOZZAHVYWECSVMUUMYDWEBPKSBRLERHQPLXJD");
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
    msg.setTimeStamp(0.14222725929614477);
    msg.setSource(52904U);
    msg.setSourceEntity(58U);
    msg.setDestination(36931U);
    msg.setDestinationEntity(107U);
    msg.req_id = 63571U;
    msg.type = 5U;
    msg.max_size = 10421U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.2440821718587115;
    tmp_msg_0.base_lon = 0.7740563988402309;
    tmp_msg_0.base_time = 0.6273840269991978;
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
    msg.setTimeStamp(0.4220701526833439);
    msg.setSource(39837U);
    msg.setSourceEntity(25U);
    msg.setDestination(28112U);
    msg.setDestinationEntity(216U);
    msg.req_id = 62118U;
    msg.type = 198U;
    msg.max_size = 64559U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.289283341407099;
    tmp_msg_0.base_lon = 0.9813567320950627;
    tmp_msg_0.base_time = 0.45036272524015397;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 37467U;
    tmp_tmp_msg_0_0.priority = 59;
    tmp_tmp_msg_0_0.x = 19950;
    tmp_tmp_msg_0_0.y = 19978;
    tmp_tmp_msg_0_0.z = 14360;
    tmp_tmp_msg_0_0.t = -4380;
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.8044605566429649;
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
    msg.setTimeStamp(0.3936031753754208);
    msg.setSource(26755U);
    msg.setSourceEntity(225U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(75U);
    msg.req_id = 10997U;
    msg.type = 135U;
    msg.max_size = 28571U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7886546467601157;
    tmp_msg_0.base_lon = 0.6134765874290705;
    tmp_msg_0.base_time = 0.22117463466098075;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 43467U;
    tmp_tmp_msg_0_0.priority = 52;
    tmp_tmp_msg_0_0.x = 20449;
    tmp_tmp_msg_0_0.y = -27922;
    tmp_tmp_msg_0_0.z = -23708;
    tmp_tmp_msg_0_0.t = -3001;
    IMC::Brake tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 27U;
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
    msg.setTimeStamp(0.33258835986618507);
    msg.setSource(38394U);
    msg.setSourceEntity(131U);
    msg.setDestination(35484U);
    msg.setDestinationEntity(118U);
    msg.original_source = 63705U;
    msg.destination = 3142U;
    msg.timeout = 0.9151791054779993;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1127121455U;
    tmp_msg_0.destination.assign("WXETMSFLOZDELKRUGBNEAHZQYJDTUYCDHOIZWTRRDAYSOXRGDFKQVGLLOUKSJMVWQPQKRIXPI");
    tmp_msg_0.timeout = 62575U;
    const char tmp_tmp_msg_0_0[] = {-88, -58, 98, 78, 81, -124, 106, -112, 27, 13, -120, -28, 40, -27, 22, -57, 116, -21, -2, -87, -25, 70, 126, -53, 19, 12, 115, -80, 2, -27, -3, -49, -63, -57, -109, -95, -17, -4, 81, -62, -83, -50, -70, 33, 94, 0, -121, 18, -72, -91, -70, 12, -12, 92, 102, -94, -25, 60, 119, -23, 115, 65, 61, 0, 3, -35, 96, 106, -7, -74, -26, 27, 125, -105, 0, 80, -14, -19, -119, -99, -36, 109, 90, -82, 27, -106, 79, -43, -46, 6, -122, -30, 42, -33, -12, -93, 76, 7, -2, 9, 43, 12, -7, 89, 61, -67, -37, 98, 46, -38, -115, -56, 68, 115, 107, 25, -19, -55, 0, -77, 80, -46, 114, 56, 2, -76, -53, 102, 97, -14, 93, 9, -101, 18, 37, 61, -107, -2, -4, -7, 105, 39, 99, 97, 96, -87, -34, 92, -70, -61, -22, 1, -113, 71, -80, -118, -9, -56, -18, 126, 36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.22034581075700033);
    msg.setSource(26575U);
    msg.setSourceEntity(48U);
    msg.setDestination(50509U);
    msg.setDestinationEntity(222U);
    msg.original_source = 11652U;
    msg.destination = 53558U;
    msg.timeout = 0.2501282516693235;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 79U;
    tmp_msg_0.plan_id.assign("XUYDSRUMTACGKOGUKDJBIXGSKZVRCAKFICEHTFLIMBWGDDVWOEPBZOTMPXNRQBIQNHZFOVZJYEHNRCJAYVRWXYKADNWGCBWJENRQPTYYQKBEHQXTCMLWTPPLNUBNNFVARWNHJSBMESASDXCHMQJKJQVJ");
    tmp_msg_0.plan_eta = 784024288;
    tmp_msg_0.plan_progress = 0.3680919568852372;
    tmp_msg_0.man_id.assign("VVWKQDJEHRGKLQXQNOGXRBYASWRYGANBRNCFMTAMJSMPGFSUSMFECARMNVNONSLFPLUYZTDPHQRGDOVZXFUQWVYPDOIPYLTNIZMBCWIZHTYKALETQXDRZICJBHLWSBEDXENRVYVKWU");
    tmp_msg_0.man_type = 32127U;
    tmp_msg_0.man_eta = -1687085864;
    tmp_msg_0.last_outcome = 216U;
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
    msg.setTimeStamp(0.9258810566376399);
    msg.setSource(64396U);
    msg.setSourceEntity(13U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(58U);
    msg.original_source = 33320U;
    msg.destination = 22395U;
    msg.timeout = 0.8150611070860607;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WNUOFFTQEJZMWSDJSYEBPRCOYBFAKMTVFSAWLTPXUTKQIGIBXHVVXGIIHRXADKPMTKPYEQXCIKEWEZGJGJQKMPZWSNCSJLJHIWZQVNUZNRVELD");
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
    msg.setTimeStamp(0.5606203791915364);
    msg.setSource(60070U);
    msg.setSourceEntity(187U);
    msg.setDestination(41781U);
    msg.setDestinationEntity(188U);
    msg.type = 139U;
    msg.comm_interface = 62814U;
    msg.model = 12909U;
    msg.list.assign("CDSBSGMTJRLAVZBVVPRMTDCNXPUBQHHVUZJWUFIZQSOMYPQWWTIGFCEAYPYBKFTGZLSFVZJAIKNSWYQOMEXBEFNKHEYPLKCVQXHGGMOVXLWLXMWRSLBOLDCTYGQFKCNQGERNSHNASQIMIGHIZATSZGRSKERIXNDUFPKFGKIVJAHVPYZMXNCZWPF");

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
    msg.setTimeStamp(0.4838657785142806);
    msg.setSource(39659U);
    msg.setSourceEntity(119U);
    msg.setDestination(54455U);
    msg.setDestinationEntity(20U);
    msg.type = 136U;
    msg.comm_interface = 14887U;
    msg.model = 4793U;
    msg.list.assign("HTLOHXOZKOKLHWIPFWAWXQJGPKPKMIFQRKBZGPTNOHMCGZZNIQEDMTYASTHAWLSYWFGSPBJNTIEDCNAURZAOYOCYEGXZUUFJQITDTMAUHCGNYSCJISVSEIUJEEQBKFBPKQREPWVNJLCLRJZFHBZMSXBULTJLNSOAMLHCOIOJYXMRXNWYSWHVPYILVBAGYBQQACWZYEFCTXRRAZQPDXWKGFBBFXXDJSUDMVUOCVRTPGNDHVRKGMUEDNQVFMKVR");

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
    msg.setTimeStamp(0.23134243056840798);
    msg.setSource(42262U);
    msg.setSourceEntity(162U);
    msg.setDestination(38559U);
    msg.setDestinationEntity(123U);
    msg.type = 132U;
    msg.comm_interface = 53982U;
    msg.model = 27983U;
    msg.list.assign("KQMWEOYISYRRXHZELROBBTIBPVZWUQWIDQAFJSTPDAECCOMGMHUPLONEETCTVGHSVYFIMCRFKPGJKXRZIFXW");

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
    msg.setTimeStamp(0.776625532590955);
    msg.setSource(62603U);
    msg.setSourceEntity(212U);
    msg.setDestination(51316U);
    msg.setDestinationEntity(134U);
    msg.type = 179U;
    msg.req_id = 2290252148U;
    msg.ttl = 32869U;
    msg.code = 245U;
    msg.destination.assign("DIZQMXTORTNUEMFSEDBNLILKRBPXGJH");
    msg.source.assign("TUQMNOPBOWXJKJXBSILDIAXDCRJFHMKJWEFQADPLRLMHYUCLESRFRWEZFJYONLLBVTCZPXIOTVOXGUEVODTSJVKDOWITZLXWVULWBMMDBATHYWPYZJDSKMEIGCOZHBTGIQLHUCJZIAVQJ");
    msg.acknowledge = 242U;
    msg.status = 106U;
    const char tmp_msg_0[] = {-39, 27, -11, -69, -67, -47, 97, 26, -56, 49, -39, 33, 47, -44, -36, -68, 29, -55, -65, 79, -117, 99, 77, 14, 47, 58, 111, -16, -63, 17, -47, 13, 97, -11, -93, 43, -33, 60, 10, 49, 68, -11, 75, 32, -102, -64, -26, -83, 69, -56, 87, 77, 30, 20, 46, 80, -122, 32, 10, 108, -93, 52, 67, -98, 41, -83, 94, -78, 93, -11, -60, 16, 88, -10, -2, -10, -52, -97, -49, 126, 8, 107, 97, -95, -56, 2};
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
    msg.setTimeStamp(0.11314673858620328);
    msg.setSource(38554U);
    msg.setSourceEntity(57U);
    msg.setDestination(62438U);
    msg.setDestinationEntity(202U);
    msg.type = 138U;
    msg.req_id = 1696933473U;
    msg.ttl = 65522U;
    msg.code = 180U;
    msg.destination.assign("OISZWUOKGRVGMMVAKECVHULRJTMTGWIKYEKRIDTAXCQCTMWISGSMLENVVFNJSDTLYESHBOFPCGBWYQIYPPQNHTLDHZNBDJBDZCCUVCKHAXMLFAJYEZWPMHRFLFEUIRSKRVKJDGTXHFBKLRNPWFUZAUGURAONQDZYQPQYSOCKQXILMYHSNXHXFZETPDSEHJWICJ");
    msg.source.assign("PGOXNDUFQJIOGHDVZSAJEQDJDXNQYRMXAAPBKMZQVHVEZSCLMUSBQEXTCKJIUTHYMTBGEUWICUEYWYYQEDPSNHGVRCXUGJBOZIGMHSP");
    msg.acknowledge = 188U;
    msg.status = 251U;
    const char tmp_msg_0[] = {-34, -23, -57, 28, -69, 33, 19, -33, -126, -95, 97, 107, -30, 26, -26, 1, 100, 7, 97, -21, 26, 67, 73, -47, -7, 36, 118, 70, 85, -76, -35, 103, -117, 55, -4, 25, 70, 32, -111, -28, 63, 40, 48, 20, -111, 123, -15, -15, -64, -126, -37, -88, 23, -58, 82, -25, -80, 46, 81, -40, -23, -50, -39, 115, -43, -99, 68, -25, -51, 83, 97, -77, 38, 11, 106, 75, 15, 104, 117, -30, -8, 38, -127, -39, -87};
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
    msg.setTimeStamp(0.38358078155252273);
    msg.setSource(12580U);
    msg.setSourceEntity(254U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(30U);
    msg.type = 15U;
    msg.req_id = 1423781495U;
    msg.ttl = 578U;
    msg.code = 86U;
    msg.destination.assign("FEKDJPMRLYYNANZHXIVHGXTDWPXWOAGYNUOICHUIOXCWBTBTIYZKQMCZOQCFISFRKWSBHCPYVABVXMZJWEPPJKRWLRHEZUFNYSSSSLRMFIDKKFEDNFJTRMBYCCPAOXYQPVMTEOMXAIUTYAFCUOURWAKABXDVUGNDTOVHHEZRWJULWEGLXCKLJWJNITBSNJBBQNQRGEKHEUGQGFDVELZQISDZZMFSLTMHUMVDVLNIGLBVPAQPJR");
    msg.source.assign("XDIPTCGVVZLAZDUHQKYJGLGXXOHKWNJACNCADHZJUHEIQQAENQFOKUUFGONDTACTLCFWHRYTFHKIESYWHBKPZCJCECGIENLMMBSIRKUHGWWURVRTHPSRXCRSZOAMOIPLSZPBZQYXWJBOUYTMKQDEXSMYETMANXLVERJTNZBFXWSSGVLMCXFIYLJIJNRFKDNZWPIMGQTWBVFZ");
    msg.acknowledge = 50U;
    msg.status = 229U;
    const char tmp_msg_0[] = {46, -29, 2, 75, -100, -35, -42, -50, -76, -67, 15, 28, -96, -57, 60, 38, -113, 117, -101, -56, -45, -88, 124, 106, -57, -116, -99, -10, 75, 32, -49, 48, -124, 87, -75, -35, 99, -79, -108, -1, 96, 112, -30, 86, 92, -5, -122, 59, -69, 57, -25, 119, -110, 124, 78, -31, -113, -37, -13, 58, -111, 34, 120, -102, -34, -102, -52, 40, -31, -80, -4, -77, -115, 75, -62, -66, -8, 118, -46, 45, -84, 92, -50, 33, -18, -86, 2, -107, 85, 37, -89, -95, -9, 76, 67, 72, 53, 1, 34, -107, -38, -90, -62, 54, 101, 17, -68, -6, -108, 100, 50, -35, -108, -40, 65, 65, 54, 76, -95, -59, 114, -22, -60, -75, -18, 4, -95, 25, -123, -114, 89, -93, 53, -10, 34, 67, -50, 62, -58, 110, -55, -44, -126, 91, -17, 82, 109, 67, 86, 28, -83, 58, -127, -25, -49, -52, -65, 34, -61, 62, 103, -53, -55, -79, -53, 4, -93, -25, 79, -67, -101, -91, -103, 89, 70, 68, -98, -50, -83, 5, -38, 91, 68, 35, -117, -73, 110, 113, 45, 111, 85, 62, 119, 103, 20, -83, 97, 2, -115, -85, 35, 123, -39, -1, -99, -104, 52, -41, -55, 101, 87, -33, 15, 65, -79, -55, 118, -12, -17, -57, 6, 81, -69, -1, -1, 52, 122, 26, 44, -42, -97, 112, -40, 69, 102, -28, 72, 112, 90, -81, -24, 53, -39, -27, 25};
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
    msg.setTimeStamp(0.025376966880548912);
    msg.setSource(20375U);
    msg.setSourceEntity(102U);
    msg.setDestination(65082U);
    msg.setDestinationEntity(87U);
    msg.id = 203U;
    msg.range = 0.2593846399615988;

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
    msg.setTimeStamp(0.33917189640265044);
    msg.setSource(5948U);
    msg.setSourceEntity(109U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(183U);
    msg.id = 139U;
    msg.range = 0.12631626491032355;

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
    msg.setTimeStamp(0.18232735089500685);
    msg.setSource(1569U);
    msg.setSourceEntity(239U);
    msg.setDestination(8122U);
    msg.setDestinationEntity(216U);
    msg.id = 28U;
    msg.range = 0.2416064045689872;

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
    msg.setTimeStamp(0.5727565724017241);
    msg.setSource(61657U);
    msg.setSourceEntity(173U);
    msg.setDestination(20056U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("SEXRWNWBOJYVFNJCIPKNVRFQVGMZMUYUWECEIDFIYHYUNAFOFUMETOEZDVLSQQLCDLPMUCCTYDVAGOZPYFSJVJBZDFSRQLKBJYNPTADIGFMTWAUHBZKOLIRDIOQUPYKXVSVAXOEKCCTBYWNVGXNZGOJCVBXHBTHHBMCJSQFWSREXZBLIZPTNTRGOKRRQBSQZSMHETDPZKRDNXCHQJLUAWHXJIAMEXMSNGAQITGRDPOHWUFGKLHPAMJPEL");
    msg.lat = 0.5516981064329805;
    msg.lon = 0.45242091520212424;
    msg.depth = 0.15211869462961147;
    msg.query_channel = 2U;
    msg.reply_channel = 164U;
    msg.transponder_delay = 45U;

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
    msg.setTimeStamp(0.3134323334610295);
    msg.setSource(33901U);
    msg.setSourceEntity(159U);
    msg.setDestination(43792U);
    msg.setDestinationEntity(135U);
    msg.beacon.assign("AMVATJAWHGRFWEYGHCTUWGNXDIEYRHUFOBWITPOXLEAYNFTWJPUWLIOCFLTPRODYEPPVZORRDRILHMGDQQCJBZOTXXIADZKMDIBSWTVNKEFUBFRLCHHJIJNSJVKWSSXGYXKYRSFUMTIUEZYQNHXAADBJSVXDCQVNVPHBKMJDKLLPUUVLH");
    msg.lat = 0.7012232065829507;
    msg.lon = 0.7058689430428358;
    msg.depth = 0.8599906001641971;
    msg.query_channel = 134U;
    msg.reply_channel = 100U;
    msg.transponder_delay = 246U;

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
    msg.setTimeStamp(0.9818077005687512);
    msg.setSource(42319U);
    msg.setSourceEntity(246U);
    msg.setDestination(58700U);
    msg.setDestinationEntity(149U);
    msg.beacon.assign("LHSMZQHKQVRIDGISNOWGYDQTMCCEIBAPCYUBWKOAVPMHGSMDFTCGBXXNQIFTLLKPOXYQPCBZFVJSZDFXND");
    msg.lat = 0.8711218753826375;
    msg.lon = 0.21159809736993074;
    msg.depth = 0.15626007517605545;
    msg.query_channel = 142U;
    msg.reply_channel = 245U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.6586384337280444);
    msg.setSource(49956U);
    msg.setSourceEntity(111U);
    msg.setDestination(45762U);
    msg.setDestinationEntity(168U);
    msg.op = 35U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IWXOAVPIIFFAVPNHHTTJZLPBFCFZMUEHMXQOQZSEGNESSHSDXWOIEUBWFKVOCMBDGKNJCYCSXSGZFRYLQFRUKEEJXEKARYOVSIDCCKHFUTXTLVWUMLIDYGQWAQW");
    tmp_msg_0.lat = 0.8141432047649969;
    tmp_msg_0.lon = 0.9447551937630368;
    tmp_msg_0.depth = 0.8535443415689774;
    tmp_msg_0.query_channel = 13U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 109U;
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
    msg.setTimeStamp(0.8819141424063222);
    msg.setSource(57413U);
    msg.setSourceEntity(235U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(165U);
    msg.op = 34U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BWGXWEEGOHYNXSOETOIMGMHVHSQZHCRAHYTKLRCLAHNAJQUDRJCMRYQWVSSMR");
    tmp_msg_0.lat = 0.39140089800997;
    tmp_msg_0.lon = 0.4888317754460253;
    tmp_msg_0.depth = 0.105167267915668;
    tmp_msg_0.query_channel = 39U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 64U;
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
    msg.setTimeStamp(0.2677477207563548);
    msg.setSource(8247U);
    msg.setSourceEntity(123U);
    msg.setDestination(62476U);
    msg.setDestinationEntity(91U);
    msg.op = 140U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VYXYMPJEFFCUZUAOZOOUGYNFGNCPGEMZMGHPNOWATRBIYUARLJVTBNLACNVXWELERHVNNCEPCYJQKEVXBJDIGGFZOOJTNUKNTQFROHMKPULTAVBZTDTYVHAJSVRUAXIQRSBSLSGPYJASXHCPMBAWUZSILDIBBOJANVRMYHYSXQKMREKTKBWKCWJLDIQPKHDMZOQTLCZWSJWUFIFXCYSLEWKEIRGOHPXQDUTXZQLFKIREPFXFQDDDBVQWGS");
    tmp_msg_0.lat = 0.5336459832494642;
    tmp_msg_0.lon = 0.7820978509546969;
    tmp_msg_0.depth = 0.09862097551404114;
    tmp_msg_0.query_channel = 238U;
    tmp_msg_0.reply_channel = 212U;
    tmp_msg_0.transponder_delay = 226U;
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
    msg.setTimeStamp(0.7230745029350641);
    msg.setSource(8641U);
    msg.setSourceEntity(193U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(184U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("ZRIEDMGQLRGGREVHXUOJZFTMTEWMJYVHCAEAUOLAHVTXLGBINBCYJJSNUGKVKBOEIUAJXUWVZFOCMRHINDOBJSSWCDRDBPKRECGPZZQKYLILOAZKDBOSYFNBQJLZMTIHUMFMNBNTWSXSQWOFGKHJIXVMTFCTUTOHDEJPQRIPVNHZEQCPZK");
    tmp_msg_0.text.assign("AJKQSLDAHHQZCHOSXEFWYFLGKNUQJBTSTZRBJKDRZBCNXDRMYCAOJEJIEXUMWINEUTYOTPAJWHGKXVYSWMDWYT");
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
    msg.setTimeStamp(0.02304384420267236);
    msg.setSource(6499U);
    msg.setSourceEntity(254U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(23U);
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.8717632470548168;
    tmp_msg_0.temperature = 0.4365650772672153;
    tmp_msg_0.depth = 0.722413522842604;
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
    msg.setTimeStamp(0.8100511514034221);
    msg.setSource(26459U);
    msg.setSourceEntity(129U);
    msg.setDestination(24175U);
    msg.setDestinationEntity(215U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.longain = 0.8777160006061681;
    tmp_msg_0.latgain = 0.9166876852298063;
    tmp_msg_0.bondthick = 3600264199U;
    tmp_msg_0.leadgain = 0.5585934833532219;
    tmp_msg_0.deconflgain = 0.9697116056100595;
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
    msg.setTimeStamp(0.11446306541841667);
    msg.setSource(23682U);
    msg.setSourceEntity(69U);
    msg.setDestination(64408U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.7193691319890178;
    msg.lon = 0.8751703108286373;
    msg.depth = 0.16123276712168755;
    msg.sentence.assign("IYSAQFRBPOHTSTGMOYFZYIDTQHLSIKCALENRQOYBHXVHVGDYECPFGEBMRKWTUBKXGSIXPXEJNKTKFIZQGXNGGPLVZEBTECDUNZSAZADUKBXVPZWUSLRXOWKMDVJJULDMUAGOCORWEUCUHIVSJOPBWCGQJTMJBYIEOWDTRD");
    msg.txtime = 0.8093415067947047;
    msg.modem_type.assign("KXSDYQRYGZIUZACKXYJCXFUDAQJQTLTRJQPJLPBBEMJPHQQZBOEVMLRICAZNLBUALWBPSGDGHKOKGKOTWXUIIOEKFWTTWENGFNOHEXOJGSSYTDTOGHXEHMFENIVISXJJSTRQNDTZ");
    msg.sys_src.assign("PXPHYDECLUKIGSBXOTQJKCUUZPTBOTLOMSMVYAFARNOVKSGHYWRWRRKZQMVVYHEAVCFVXZUDSGPXEUZKNQJFNXGOFILNRUORGLFHDDQUWNBVYKXGZPDD");
    msg.seq = 30518U;
    msg.sys_dst.assign("TEYWURPQBSMHIDHGMGEDTIJQWGECYOGKYLCZOTVHMNVDXOCIHPNHWHASKHGYSOSSUDKHGZBTEPLYXPVKCIKSFKLBHMAQQJNAVXENBRPOAWJTQPKMYMCOJFCIGEFBZRAQYWVQQIZFENXLFTMPSCARKEXROLTPLAMUXRCRMYDWIPVNXZFFBWXUFEZULLFSDWRNXUPAGTGLWCJVB");
    msg.flags = 133U;
    const char tmp_msg_0[] = {-79, -37, -1, 59, 98, 98, 126, 60, -68, 86, 52, -3, -49, 73, -36, 17, 109, -121, 19, -30, 51, 13, 41, 49, -40, -2, -3, -48, -10, -92, 124, 101, -35};
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
    msg.setTimeStamp(0.9742879611640761);
    msg.setSource(275U);
    msg.setSourceEntity(85U);
    msg.setDestination(4071U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.3567471836475443;
    msg.lon = 0.6962782296672213;
    msg.depth = 0.01447807491978692;
    msg.sentence.assign("NJYHFXEPROJGBKVDGVYMAUWUQQJAAAMSMISZZUIMBVXPPWIKKSNEMSEEQXABFVECL");
    msg.txtime = 0.44811399119300754;
    msg.modem_type.assign("TLYLBTEQFRYNSWCBOLQOWKCIFNNYCZEGCBKKDBHYJHCZSZNAFUJSLRDHJITYNJMQPTSJMGUPRGGJWQNVI");
    msg.sys_src.assign("APCFVPIOKJPHDUCPHZSIDUFLXZKCWAYJNUIMUSXNOEDNYXAGVFRWQCMBSGGNIUYVQREVMMAZHNHYBGGZWJEFVKGDFKMRCIUCONLFMRXWVELYKBJSYAKQAUNTXDNULWQSHPKSCQVLSCEMRPXQBVTLQZLXEWQISOMGCMTIWWJPDBYXQBKDELXJOOVNFRJHORPRTSXZYH");
    msg.seq = 251U;
    msg.sys_dst.assign("CNJIBGBFQYHTTKNHMUTFWVZLJGRWACJDXQXJCOLMTSGPBZFUNORLSTYAJZGUACSDFLJYTSFOVLAPOYVMBECDXQBMOXKWVYXGCAEUSIJKRBIIFPDQQIMWUNYHNMYFQREOCLHPRGIBWAXRSNKVFMDZJHNZZXCKAQGRPHOSUVAUJEPEETFOZVSUENOQGTQDXYPIBUHRGXHWIEAYARZSKBHWPDLTO");
    msg.flags = 74U;
    const char tmp_msg_0[] = {83, 113, 26, -17, 124, -26, 101, 123, -89, -116, 6, -74, -31, 57, -82, 3, 97, 41, 64, -108};
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
    msg.setTimeStamp(0.24001669789843427);
    msg.setSource(41257U);
    msg.setSourceEntity(28U);
    msg.setDestination(34490U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.6487886423362602;
    msg.lon = 0.6163885122302647;
    msg.depth = 0.8686145076172854;
    msg.sentence.assign("QGOJAJPRACIRHFYVLIWLJSZSAXUHXPWLFIAEHGEMJZJEBJCVPVHGABOBFGPKEUESCTCZXKNQGCPFPHMVUZYMCGUPTZMIALBMUOMRVPDOOVSUKNHSXMORYKNCDLLYKDUIWDSSQAIHMJYDYWNXUNWCSXZENBVERRNOBYNMRVTFSQXWGTLXQVROFPZMDYKTOZDBLQNQRDKBZANULBIUCKJFH");
    msg.txtime = 0.9906389739681173;
    msg.modem_type.assign("LGKNRQXXYH");
    msg.sys_src.assign("CXQJDAHRDWFDYQSCRNYVNHIKNLESQIRZCYHUTLGZIHDTPGTOPSTLRITFSXFRHNQNPUSJFFXAQTIJRFXKHUNEXQWMOSJRPDKCKHMBLSBIAMWDAPSMBLJERYTKLJIVZWOAPXQZAXUVSUMOGVTVYE");
    msg.seq = 61097U;
    msg.sys_dst.assign("ZHXTWXUYPTNLLVLSZJOWFAZIDTVRJOUWNWQPRMFNHLRWGTWGFIZMUJWGSJQPKGJEDZHNUGSZEXHGOR");
    msg.flags = 206U;
    const char tmp_msg_0[] = {-25, 84, -60, -121, 0, 6, 15, 40, 118, 83, -65, 110, 64, -51, -6, 61, 107, -65, 70, 67, 55, -34, 29, -123, -84, 105, 119, 124, -25, -62, 63, -61, -112, -38, 91, 108, -19, 81, -113, 119, 89, 80, -94, -70, -3, -82, 32, 42, 18, -7, 99, -110, 7, -41, -8, 55, -103, 9, 103, 72, 88, 87, -34, -109, -46, -87, -124, -73, -53, 14, -7, -95, -124, 13, 109, 84, -54, 54, -48, -25, -44, -80, -64, -35, -88, 27, -112, 27, 26, 112, 59, -31, 4, 1, 78, -23, -88, -57, -109, 92, -97, -57, -36, 100, -36, 51, 25, 4, 53, 78, -8, -79, 26, -97, 67, -81, -119, 81, -65, -124, 19, -51, -96, 52, -119, 68, 11, 79, 22, 22, 19, 61, -58, 107, -85, 91, 73, 18, 22, 20, -82, -6, 65, -59, -45, 44, -102, 61, -9, 72, 33, -105, -23, 124, 104, -68, -83, -93, -52, -105, 107, -85, -18, 66, 39, -22, 107, 126, -17, 58, -96, 97, -94, -24, -117, -17, 25, 94, -114, 26, -91, 76, 11, -100, -26, -118, 43, 71, -51, -62, -70, -69, -127, -59, 99, -10, -46, 30, 13, -13, 31, -52, -100, 73, 106, -75, -115, -72, -45, -118, -33, -120, 41, -37, 29, -121, -85, 71, -18, 78, -65, 71, 102, -42, 13, -105, -60, 91, 109, 80, -15, -22, -71, 70, -65, 84, 16, 28, 4, 76, -85, 54, 8, -56, -69, -28, 13, -32, -68, 103, -113, -113, 25};
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
    msg.setTimeStamp(0.3481862983440106);
    msg.setSource(9662U);
    msg.setSourceEntity(210U);
    msg.setDestination(7431U);
    msg.setDestinationEntity(55U);
    msg.op = 149U;
    msg.system.assign("WCYNNHVMDECPWTKTIZXBYUBKCXUYULFVKDJXDIHHWPZROZDCSXUQEVZGWTPZXRSWHCJFAFQBZKYIQLAAGZESNQUOLBVTVIAJFLKMWQDGBZBGC");
    msg.range = 0.6354508614220954;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("TPHCSBIXKRENHMJFSFBVYKHPQUGPVJCKTLQLFSUGWWCLOLPEDYJLTOCMVTZDCVPUXAZGISTYWHGRZGYVEFMZZKOYSUPBWRRAQZOVXPNGIPCWAFURXYJENJDSWTCKHCMNCGBRDYKWSYOLDRBOUSIHLAQKMMVMHOEA");
    tmp_msg_0.timeout = 64031U;
    tmp_msg_0.contents.assign("MEJEYLCGRXMTNQOMBNCGMTPXHUJFHAJEWHGEFLGQYHYDFRBSQPOOWCIOJZOLMBHZOLAIYERPYZAFXI");
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
    msg.setTimeStamp(0.9291559058311952);
    msg.setSource(45951U);
    msg.setSourceEntity(30U);
    msg.setDestination(61215U);
    msg.setDestinationEntity(247U);
    msg.op = 189U;
    msg.system.assign("VCVECESXLYWDZRGMYEFZXIQTEAJCWIPCJGSQNMXLGYLQJDGRPUSYNHVJKSFCRIAJCNPCBZZJMDPPEBNIGOECTVTQIJJFWOHVYKXBSOLSWSAVQYGMCFFEBFZYDJGXWLAHOZRMYFRXIKUIQVWRTETBTOERLMXHSPFKRKMTOUBUBNLSQWWNMGKHYPRDKVALZONAYQASFD");
    msg.range = 0.4108832297575663;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 62U;
    tmp_msg_0.numsamples = 32U;
    tmp_msg_0.lat = 0.21742572221232348;
    tmp_msg_0.lon = 0.28432000726382545;
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
    msg.setTimeStamp(0.8581248100983442);
    msg.setSource(5559U);
    msg.setSourceEntity(136U);
    msg.setDestination(27865U);
    msg.setDestinationEntity(153U);
    msg.op = 107U;
    msg.system.assign("YWCUKJFSLKYHCKQFGVNASXLEBDKPLLBYSPBTSJGTDNLEQJWUZDXTEJNJYFYWRDIRWDTJGOGCGCNIRQMHWJKTELQUNXUHIWMNNFAEPVMSADAXCMAQBWLIRVPVJXRASVQCEZHDOUCTONUTAIGXKMAJSGQWHTLWMOGOUXNKZQOFOVZXJHRNWYKRYGZYFVBPDPQZFYCHDSMZ");
    msg.range = 0.775935881000119;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.10677229005749833;
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
    msg.setTimeStamp(0.9133836616668798);
    msg.setSource(65175U);
    msg.setSourceEntity(19U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.7719754002752915);
    msg.setSource(2851U);
    msg.setSourceEntity(97U);
    msg.setDestination(38495U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.9191812698050894);
    msg.setSource(36584U);
    msg.setSourceEntity(32U);
    msg.setDestination(10690U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.18121559959496347);
    msg.setSource(42723U);
    msg.setSourceEntity(217U);
    msg.setDestination(40983U);
    msg.setDestinationEntity(200U);
    msg.list.assign("XWAWCQSRBXRXHJUXHQKOTOCPRNMXTEIAZZFJODHURLSPWMPQCPRQNVFJFBDEATWYVWFOIAHLGWDNBVYFGFBBGDMVMAEDJGNTHPGGXRNIEIAYNVIEGOOLMKVZVFFHZA");

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
    msg.setTimeStamp(0.8429742381123037);
    msg.setSource(30106U);
    msg.setSourceEntity(222U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(128U);
    msg.list.assign("QHXOPKPSATCGSAEGVBAAOPUGT");

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
    msg.setTimeStamp(0.838319049212227);
    msg.setSource(5329U);
    msg.setSourceEntity(171U);
    msg.setDestination(34878U);
    msg.setDestinationEntity(65U);
    msg.list.assign("DEAUDTPUCMWXOTCCUNPQWYJKUQHVFLFRDZIFQJHJNEPNDMOAAJYIFSJGRCRKIUZHYTXOCWXPRRWSAOCYTQUIKYLSIEHDWDZFEBTBWPIXQGVNHCFGKLBEOQYUFKSDRGBWJGAGCGRKBVYVYSLJNBPMNFMEISZMORTAZKGNPASTZYFSKLVPZVBHZCFBDWQREDYGUIVMOEMKWLEOLPKXWHZMVNSQT");

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
    msg.setTimeStamp(0.9103210054242517);
    msg.setSource(2620U);
    msg.setSourceEntity(130U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(251U);
    msg.peer.assign("EAXBRYRUCXSZXDUPROIGODNSUANFBLJPJHGZVWNOSMHQTZSOGDDNHHVKQQEJJZOPJYUZRNLXWXQ");
    msg.rssi = 0.9038706004021141;
    msg.integrity = 39599U;

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
    msg.setTimeStamp(0.13752857910628613);
    msg.setSource(10370U);
    msg.setSourceEntity(219U);
    msg.setDestination(42562U);
    msg.setDestinationEntity(83U);
    msg.peer.assign("ZAXTUYELPWRTGUJHUXB");
    msg.rssi = 0.24240025586610614;
    msg.integrity = 10806U;

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
    msg.setTimeStamp(0.2848977124060562);
    msg.setSource(18661U);
    msg.setSourceEntity(215U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(32U);
    msg.peer.assign("MVEWLOHKCHLJIKGZCPDQRZFVJLWDWR");
    msg.rssi = 0.9119592902753337;
    msg.integrity = 55002U;

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
    msg.setTimeStamp(0.28713308947076743);
    msg.setSource(54618U);
    msg.setSourceEntity(94U);
    msg.setDestination(20961U);
    msg.setDestinationEntity(65U);
    msg.req_id = 41682U;
    msg.destination.assign("SZWFRXSXMIZWGGPAGZYIVJWBHZFGDGCPORSYKIAOCPKPFYOYFCDTLUNBURNTQHLBKMYZNTMKUSELKOTQILKJBJDXQQRXRPWFEEQBGBLPQSZEAHZVWORDLKEEGPYAWHDCVKXMNJ");
    msg.timeout = 0.9715460336894854;
    msg.range = 0.9784834680340625;
    msg.type = 42U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.20464427497288373;
    tmp_msg_0.lon = 0.9710578650112945;
    tmp_msg_0.depth = 21U;
    tmp_msg_0.speed = 0.15536279008664167;
    tmp_msg_0.psi = 0.41462157865393356;
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
    msg.setTimeStamp(0.2678048162036766);
    msg.setSource(37744U);
    msg.setSourceEntity(20U);
    msg.setDestination(37584U);
    msg.setDestinationEntity(212U);
    msg.req_id = 46112U;
    msg.destination.assign("KWAVYNMBQKSAKWRZXPUFGYCZBWJRGGYYAKDLIYIPRKLTEHNCNILFJOSHNOOGQIZXCLGCHWQUTQLEGEZRMLPPGFMXYQEPWWXNFEZIX");
    msg.timeout = 0.5225337680818555;
    msg.range = 0.7667213868941513;
    msg.type = 153U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 60216U;
    tmp_msg_0.type = 91U;
    tmp_msg_0.utc_year = 17797U;
    tmp_msg_0.utc_month = 225U;
    tmp_msg_0.utc_day = 246U;
    tmp_msg_0.utc_time = 0.039243150388289516;
    tmp_msg_0.lat = 0.358598503640561;
    tmp_msg_0.lon = 0.4626091063208957;
    tmp_msg_0.height = 0.39432651030352983;
    tmp_msg_0.satellites = 61U;
    tmp_msg_0.cog = 0.8636606280534128;
    tmp_msg_0.sog = 0.420524888790233;
    tmp_msg_0.hdop = 0.3491599032083057;
    tmp_msg_0.vdop = 0.9175788401429602;
    tmp_msg_0.hacc = 0.934722252501699;
    tmp_msg_0.vacc = 0.7399826056705902;
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
    msg.setTimeStamp(0.16922635820731036);
    msg.setSource(27243U);
    msg.setSourceEntity(109U);
    msg.setDestination(27118U);
    msg.setDestinationEntity(174U);
    msg.req_id = 11891U;
    msg.destination.assign("WJSURNPCWDVYDFKLRYYUVSQKRYXYFCQTZMLGRWLXGKQWDZYNQGBYOVANYMFBIEKENXCXTRAOMLAEAUAXHIOGJNDOCFTVWPSHVUOUWZIXTZMFXKIWTDRTCXJIDGZQJNALCGOOBSDZCJVHPZSJHDVBULMTUQBUHLHRYLEAFHJGEOGWXCMBQSNJUSKTQEPAIAPZESRBOPPZFIHIQXCWMEBRDSFAIHTEJNPVVISJDGPLRGYMKOCKBMHBZ");
    msg.timeout = 0.5625547796698079;
    msg.range = 0.746060721869296;
    msg.type = 61U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8875777139654049;
    tmp_msg_0.beam_height = 0.9390632198879284;
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
    msg.setTimeStamp(0.04356391538059923);
    msg.setSource(54006U);
    msg.setSourceEntity(210U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(125U);
    msg.req_id = 51324U;
    msg.type = 230U;
    msg.status = 207U;
    msg.info.assign("NVUYIUWVQRAWUMLHRFPJPGDCMHYWRFWBKORCNCGHSFDUYUWOKSLRFHINASIGTVFOFRXDGQMFCXCSXZJUATRZAZKULTDBETQZOWBKLHYKXVYHKUOMEJPWMQJYIIGEANRNEUJNUOJNXTAXKNDTROKBQHCFLCBPWCFJXIYBJQQSZPRGKLSPBTMGIAGXCQQFCALVDZSTDYTD");
    msg.range = 0.45215427790447227;

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
    msg.setTimeStamp(0.4671853796755322);
    msg.setSource(9540U);
    msg.setSourceEntity(127U);
    msg.setDestination(37486U);
    msg.setDestinationEntity(2U);
    msg.req_id = 4016U;
    msg.type = 210U;
    msg.status = 39U;
    msg.info.assign("TNRFRQEGSNIOXWSJGWMBVSKYCQGEOOSYWHGCZRYODKWULZIMHRXCTZCWDBAQAYVNAOQTKELXWOCJCLFJRIPBFHLEMUTYZEZPIGEVPZJGNYAJCVKRAJVDIOHEUQHWTJAXOFABGBIXIBBJRKTMYESQJVMPMXDHXOQPWKBHBNMDNADRTUYPUKUGXSFLLMHPVCFTHCXZMPNFWGDDSSIYVLQPWYNXEQBLRHAAIVESCJGZUSLUZKVZTLNRUFODKNU");
    msg.range = 0.21455133006611926;

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
    msg.setTimeStamp(0.8001793694265484);
    msg.setSource(43658U);
    msg.setSourceEntity(4U);
    msg.setDestination(16671U);
    msg.setDestinationEntity(110U);
    msg.req_id = 16319U;
    msg.type = 157U;
    msg.status = 2U;
    msg.info.assign("KQAFXFWYXPMTYKGSUJIMGGFTMBVETIHUEFQIGLQRZCNGMIACTZPDSSSBZTXCXRNHIHCZOWSKJGHRWDUNRNPEBSZABVOPWXCHELOWVDZDCVFWQZDLNRONSYBIPXMDYFYXKYFWDJWEQSJYYRSPLRKYQKNXFNKCBNDCGHIMQHTIRATXOKFEAJNFORVSRPGUVUUMVLWAHJTDYQQPJBWEMLLQHEHEGVALJUMAOLUOPCOUGVZIE");
    msg.range = 0.55726882005823;

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
    msg.setTimeStamp(0.8943994507307478);
    msg.setSource(11460U);
    msg.setSourceEntity(178U);
    msg.setDestination(54321U);
    msg.setDestinationEntity(103U);
    msg.value = 29851;

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
    msg.setTimeStamp(0.6443350361489913);
    msg.setSource(1010U);
    msg.setSourceEntity(126U);
    msg.setDestination(51472U);
    msg.setDestinationEntity(201U);
    msg.value = -23806;

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
    msg.setTimeStamp(0.5852107150998158);
    msg.setSource(62269U);
    msg.setSourceEntity(112U);
    msg.setDestination(16480U);
    msg.setDestinationEntity(80U);
    msg.value = 25612;

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
    msg.setTimeStamp(0.5801160208037425);
    msg.setSource(51500U);
    msg.setSourceEntity(147U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(111U);
    msg.value = 0.45594076878074774;

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
    msg.setTimeStamp(0.3481406592754738);
    msg.setSource(33022U);
    msg.setSourceEntity(244U);
    msg.setDestination(37182U);
    msg.setDestinationEntity(205U);
    msg.value = 0.752300100467684;

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
    msg.setTimeStamp(0.6826863893929483);
    msg.setSource(59055U);
    msg.setSourceEntity(22U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(57U);
    msg.value = 0.427405111900483;

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
    msg.setTimeStamp(0.45659902475159564);
    msg.setSource(65237U);
    msg.setSourceEntity(169U);
    msg.setDestination(34788U);
    msg.setDestinationEntity(208U);
    msg.value = 0.7581299980073172;

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
    msg.setTimeStamp(0.0034816133640854785);
    msg.setSource(14874U);
    msg.setSourceEntity(153U);
    msg.setDestination(27150U);
    msg.setDestinationEntity(196U);
    msg.value = 0.25791729540160213;

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
    msg.setTimeStamp(0.8275845694071208);
    msg.setSource(41620U);
    msg.setSourceEntity(16U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(106U);
    msg.value = 0.106450786920405;

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
    msg.setTimeStamp(0.6866032981941931);
    msg.setSource(62749U);
    msg.setSourceEntity(159U);
    msg.setDestination(59295U);
    msg.setDestinationEntity(112U);
    msg.validity = 15863U;
    msg.type = 170U;
    msg.utc_year = 63653U;
    msg.utc_month = 189U;
    msg.utc_day = 212U;
    msg.utc_time = 0.31859285319875474;
    msg.lat = 0.9429626961683869;
    msg.lon = 0.21347083138681977;
    msg.height = 0.5640898152748522;
    msg.satellites = 226U;
    msg.cog = 0.7043973874216454;
    msg.sog = 0.6048866224210737;
    msg.hdop = 0.7976964472999859;
    msg.vdop = 0.744132132943509;
    msg.hacc = 0.07288746275290969;
    msg.vacc = 0.05086709528681388;

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
    msg.setTimeStamp(0.9167347923940009);
    msg.setSource(58796U);
    msg.setSourceEntity(111U);
    msg.setDestination(63720U);
    msg.setDestinationEntity(26U);
    msg.validity = 23310U;
    msg.type = 246U;
    msg.utc_year = 43107U;
    msg.utc_month = 244U;
    msg.utc_day = 145U;
    msg.utc_time = 0.3983252620673793;
    msg.lat = 0.9955595114793064;
    msg.lon = 0.6368131169857929;
    msg.height = 0.5067581498559601;
    msg.satellites = 101U;
    msg.cog = 0.4131536626858002;
    msg.sog = 0.42798365742601774;
    msg.hdop = 0.5785934243145162;
    msg.vdop = 0.3050262799543527;
    msg.hacc = 0.4692801089337165;
    msg.vacc = 0.23533513065782852;

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
    msg.setTimeStamp(0.5496336169069697);
    msg.setSource(60125U);
    msg.setSourceEntity(240U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(212U);
    msg.validity = 38667U;
    msg.type = 226U;
    msg.utc_year = 28081U;
    msg.utc_month = 150U;
    msg.utc_day = 102U;
    msg.utc_time = 0.19404192533516484;
    msg.lat = 0.41403181351430574;
    msg.lon = 0.27129135917947655;
    msg.height = 0.5711572108140298;
    msg.satellites = 119U;
    msg.cog = 0.022898008947337956;
    msg.sog = 0.4470825454740035;
    msg.hdop = 0.46789069517263693;
    msg.vdop = 0.7202077379662912;
    msg.hacc = 0.9852825464437327;
    msg.vacc = 0.18176281374932868;

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
    msg.setTimeStamp(0.18171961832994177);
    msg.setSource(10434U);
    msg.setSourceEntity(117U);
    msg.setDestination(41324U);
    msg.setDestinationEntity(184U);
    msg.time = 0.11977145199319383;
    msg.phi = 0.4444116401163044;
    msg.theta = 0.4647404619452191;
    msg.psi = 0.7185971949961065;
    msg.psi_magnetic = 0.5467755417990544;

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
    msg.setTimeStamp(0.013754141353544136);
    msg.setSource(3000U);
    msg.setSourceEntity(80U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(242U);
    msg.time = 0.739707464048798;
    msg.phi = 0.21933563086181274;
    msg.theta = 0.030982832439921948;
    msg.psi = 0.7321169341706243;
    msg.psi_magnetic = 0.4736728742575449;

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
    msg.setTimeStamp(0.6293865942199623);
    msg.setSource(23245U);
    msg.setSourceEntity(75U);
    msg.setDestination(30519U);
    msg.setDestinationEntity(254U);
    msg.time = 0.3447787537149395;
    msg.phi = 0.9194150690392199;
    msg.theta = 0.6387500965575719;
    msg.psi = 0.9324973697017904;
    msg.psi_magnetic = 0.5836568594632969;

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
    msg.setTimeStamp(0.7177426892414381);
    msg.setSource(50599U);
    msg.setSourceEntity(11U);
    msg.setDestination(1523U);
    msg.setDestinationEntity(151U);
    msg.time = 0.3209941891649126;
    msg.x = 0.1662360684501556;
    msg.y = 0.7640086024649255;
    msg.z = 0.7738110508192392;
    msg.timestep = 0.36527785344370856;

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
    msg.setTimeStamp(0.9145131087924059);
    msg.setSource(35917U);
    msg.setSourceEntity(107U);
    msg.setDestination(16486U);
    msg.setDestinationEntity(102U);
    msg.time = 0.4591033745616495;
    msg.x = 0.04352722178276969;
    msg.y = 0.13278158950304253;
    msg.z = 0.6760358090967424;
    msg.timestep = 0.851102768607543;

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
    msg.setTimeStamp(0.9304594831269385);
    msg.setSource(48838U);
    msg.setSourceEntity(177U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(20U);
    msg.time = 0.032658026480660296;
    msg.x = 0.38810460704489136;
    msg.y = 0.3670826040859736;
    msg.z = 0.17775090773993174;
    msg.timestep = 0.5242044361250223;

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
    msg.setTimeStamp(0.8417783132661472);
    msg.setSource(58491U);
    msg.setSourceEntity(201U);
    msg.setDestination(35643U);
    msg.setDestinationEntity(101U);
    msg.time = 0.4007830641607242;
    msg.x = 0.674943481568373;
    msg.y = 0.3819000508191769;
    msg.z = 0.96232268431368;

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
    msg.setTimeStamp(0.6228485470851476);
    msg.setSource(48838U);
    msg.setSourceEntity(100U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(196U);
    msg.time = 0.5864534903167867;
    msg.x = 0.5075983145148439;
    msg.y = 0.13936293612464146;
    msg.z = 0.6360352027453853;

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
    msg.setTimeStamp(0.6696045231529584);
    msg.setSource(24068U);
    msg.setSourceEntity(71U);
    msg.setDestination(36046U);
    msg.setDestinationEntity(5U);
    msg.time = 0.8915153438706123;
    msg.x = 0.017579876962573127;
    msg.y = 0.35865238299341407;
    msg.z = 0.26957705419159594;

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
    msg.setTimeStamp(0.2932789512817171);
    msg.setSource(62859U);
    msg.setSourceEntity(100U);
    msg.setDestination(23136U);
    msg.setDestinationEntity(26U);
    msg.time = 0.6871001988125439;
    msg.x = 0.9986660350776013;
    msg.y = 0.2293032894796988;
    msg.z = 0.6989080690057631;

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
    msg.setTimeStamp(0.7675066208757056);
    msg.setSource(59527U);
    msg.setSourceEntity(128U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(136U);
    msg.time = 0.7516195322800038;
    msg.x = 0.5797770730971042;
    msg.y = 0.9395964141273078;
    msg.z = 0.24716326849789438;

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
    msg.setTimeStamp(0.7504238814301118);
    msg.setSource(43378U);
    msg.setSourceEntity(204U);
    msg.setDestination(65340U);
    msg.setDestinationEntity(149U);
    msg.time = 0.6427913042232887;
    msg.x = 0.7182277811375309;
    msg.y = 0.146273460939923;
    msg.z = 0.9909495753024011;

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
    msg.setTimeStamp(0.18188937550024142);
    msg.setSource(53075U);
    msg.setSourceEntity(51U);
    msg.setDestination(54918U);
    msg.setDestinationEntity(253U);
    msg.time = 0.04879193332444831;
    msg.x = 0.4486935784754179;
    msg.y = 0.22139865986890073;
    msg.z = 0.25108395087373003;

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
    msg.setTimeStamp(0.5281881445014125);
    msg.setSource(29478U);
    msg.setSourceEntity(54U);
    msg.setDestination(28562U);
    msg.setDestinationEntity(216U);
    msg.time = 0.9784660586862899;
    msg.x = 0.798992896525359;
    msg.y = 0.7977585708767546;
    msg.z = 0.5161632304817242;

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
    msg.setTimeStamp(0.6043054680782202);
    msg.setSource(43353U);
    msg.setSourceEntity(83U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(105U);
    msg.time = 0.5316188565655956;
    msg.x = 0.678223928676807;
    msg.y = 0.7238230386070937;
    msg.z = 0.27659595645376167;

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
    msg.setTimeStamp(0.6562045509812893);
    msg.setSource(3392U);
    msg.setSourceEntity(72U);
    msg.setDestination(21414U);
    msg.setDestinationEntity(12U);
    msg.validity = 218U;
    msg.x = 0.2774752690774208;
    msg.y = 0.7654910014211624;
    msg.z = 0.0546380952897918;

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
    msg.setTimeStamp(0.5903868092967874);
    msg.setSource(61626U);
    msg.setSourceEntity(206U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(252U);
    msg.validity = 182U;
    msg.x = 0.9611079814616523;
    msg.y = 0.7883745370361427;
    msg.z = 0.6230966352466932;

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
    msg.setTimeStamp(0.45547521671704594);
    msg.setSource(48754U);
    msg.setSourceEntity(246U);
    msg.setDestination(18819U);
    msg.setDestinationEntity(37U);
    msg.validity = 33U;
    msg.x = 0.48451645565924273;
    msg.y = 0.2643846106829769;
    msg.z = 0.5577804930483494;

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
    msg.setTimeStamp(0.01700451718776752);
    msg.setSource(40461U);
    msg.setSourceEntity(99U);
    msg.setDestination(62065U);
    msg.setDestinationEntity(141U);
    msg.validity = 189U;
    msg.x = 0.7302471496525252;
    msg.y = 0.9818017590227872;
    msg.z = 0.14049136923525074;

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
    msg.setTimeStamp(0.8079977708128153);
    msg.setSource(20231U);
    msg.setSourceEntity(89U);
    msg.setDestination(8765U);
    msg.setDestinationEntity(149U);
    msg.validity = 131U;
    msg.x = 0.6551698269816436;
    msg.y = 0.5331572987699621;
    msg.z = 0.010185821995558952;

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
    msg.setTimeStamp(0.5418874944995546);
    msg.setSource(1715U);
    msg.setSourceEntity(209U);
    msg.setDestination(15897U);
    msg.setDestinationEntity(58U);
    msg.validity = 187U;
    msg.x = 0.8796897711561498;
    msg.y = 0.1817077663004677;
    msg.z = 0.3126691113305684;

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
    msg.setTimeStamp(0.35499475533671354);
    msg.setSource(2914U);
    msg.setSourceEntity(252U);
    msg.setDestination(213U);
    msg.setDestinationEntity(122U);
    msg.time = 0.21683343887223128;
    msg.x = 0.4856636256844993;
    msg.y = 0.9486660198365652;
    msg.z = 0.5304752754921346;

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
    msg.setTimeStamp(0.7213012272920979);
    msg.setSource(43898U);
    msg.setSourceEntity(38U);
    msg.setDestination(4982U);
    msg.setDestinationEntity(184U);
    msg.time = 0.44792261824501756;
    msg.x = 0.2330344218552377;
    msg.y = 0.2133128210603834;
    msg.z = 0.5395122836114326;

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
    msg.setTimeStamp(0.5584570777696081);
    msg.setSource(48257U);
    msg.setSourceEntity(82U);
    msg.setDestination(3875U);
    msg.setDestinationEntity(15U);
    msg.time = 0.38469028281071593;
    msg.x = 0.8092196534721616;
    msg.y = 0.6212676433729382;
    msg.z = 0.34318957030842434;

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
    msg.setTimeStamp(0.35956937567484837);
    msg.setSource(38270U);
    msg.setSourceEntity(60U);
    msg.setDestination(27051U);
    msg.setDestinationEntity(200U);
    msg.validity = 136U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4358720471412151;
    tmp_msg_0.y = 0.10007962053140629;
    tmp_msg_0.z = 0.2723694679696639;
    tmp_msg_0.phi = 0.5620735716311236;
    tmp_msg_0.theta = 0.6689571029311852;
    tmp_msg_0.psi = 0.9445593362610153;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9250392510394885;
    tmp_msg_1.beam_height = 0.6080085167960025;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.46713340936990033;

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
    msg.setTimeStamp(0.9665119421727494);
    msg.setSource(26863U);
    msg.setSourceEntity(110U);
    msg.setDestination(8282U);
    msg.setDestinationEntity(113U);
    msg.validity = 40U;
    msg.value = 0.6552740406306627;

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
    msg.setTimeStamp(0.7446174525505688);
    msg.setSource(50792U);
    msg.setSourceEntity(70U);
    msg.setDestination(35412U);
    msg.setDestinationEntity(12U);
    msg.validity = 154U;
    msg.value = 0.6832289434286171;

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
    msg.setTimeStamp(0.7290742078109658);
    msg.setSource(2155U);
    msg.setSourceEntity(42U);
    msg.setDestination(59015U);
    msg.setDestinationEntity(64U);
    msg.value = 0.009448980743074209;

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
    msg.setTimeStamp(0.0031301080561630945);
    msg.setSource(33382U);
    msg.setSourceEntity(159U);
    msg.setDestination(23760U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5594532351115252;

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
    msg.setTimeStamp(0.28291525388737204);
    msg.setSource(50077U);
    msg.setSourceEntity(146U);
    msg.setDestination(50065U);
    msg.setDestinationEntity(195U);
    msg.value = 0.18107461951054593;

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
    msg.setTimeStamp(0.26636219040401876);
    msg.setSource(61809U);
    msg.setSourceEntity(149U);
    msg.setDestination(7437U);
    msg.setDestinationEntity(81U);
    msg.value = 0.37961459025535405;

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
    msg.setTimeStamp(0.52493349604107);
    msg.setSource(20534U);
    msg.setSourceEntity(235U);
    msg.setDestination(58619U);
    msg.setDestinationEntity(216U);
    msg.value = 0.14837612953679313;

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
    msg.setTimeStamp(0.9943508396221236);
    msg.setSource(2523U);
    msg.setSourceEntity(121U);
    msg.setDestination(37011U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8912474532430271;

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
    msg.setTimeStamp(0.35678151512979905);
    msg.setSource(54711U);
    msg.setSourceEntity(254U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6243350273420105;

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
    msg.setTimeStamp(0.025875008995704163);
    msg.setSource(12697U);
    msg.setSourceEntity(231U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8654635128790261;

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
    msg.setTimeStamp(0.8783648861273784);
    msg.setSource(16099U);
    msg.setSourceEntity(30U);
    msg.setDestination(21484U);
    msg.setDestinationEntity(176U);
    msg.value = 0.00518241558277055;

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
    msg.setTimeStamp(0.874009812728483);
    msg.setSource(24059U);
    msg.setSourceEntity(235U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(63U);
    msg.value = 0.9875150372601496;

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
    msg.setTimeStamp(0.1496433492018192);
    msg.setSource(35369U);
    msg.setSourceEntity(151U);
    msg.setDestination(23691U);
    msg.setDestinationEntity(71U);
    msg.value = 0.36916336129204963;

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
    msg.setTimeStamp(0.2794726770386038);
    msg.setSource(13210U);
    msg.setSourceEntity(132U);
    msg.setDestination(63320U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8160348359621656;

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
    msg.setTimeStamp(0.25117406893284333);
    msg.setSource(56588U);
    msg.setSourceEntity(144U);
    msg.setDestination(546U);
    msg.setDestinationEntity(16U);
    msg.value = 0.4642406822132574;

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
    msg.setTimeStamp(0.1134510697824469);
    msg.setSource(15617U);
    msg.setSourceEntity(217U);
    msg.setDestination(58614U);
    msg.setDestinationEntity(14U);
    msg.value = 0.009895268142063984;

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
    msg.setTimeStamp(0.8509862729675629);
    msg.setSource(54306U);
    msg.setSourceEntity(7U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(122U);
    msg.value = 0.26149758156710956;

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
    msg.setTimeStamp(0.45545690351372214);
    msg.setSource(18931U);
    msg.setSourceEntity(177U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(106U);
    msg.value = 0.1423983238601575;

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
    msg.setTimeStamp(0.5290946924771252);
    msg.setSource(58512U);
    msg.setSourceEntity(236U);
    msg.setDestination(22426U);
    msg.setDestinationEntity(18U);
    msg.value = 0.16848663250451645;

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
    msg.setTimeStamp(0.6881422992431074);
    msg.setSource(61033U);
    msg.setSourceEntity(240U);
    msg.setDestination(48471U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9461194050392011;

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
    msg.setTimeStamp(0.18032399400948285);
    msg.setSource(17031U);
    msg.setSourceEntity(80U);
    msg.setDestination(5428U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5766509043677678;

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
    msg.setTimeStamp(0.3631369176774365);
    msg.setSource(39129U);
    msg.setSourceEntity(112U);
    msg.setDestination(11386U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6653683590558304;

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
    msg.setTimeStamp(0.6354551089310908);
    msg.setSource(7594U);
    msg.setSourceEntity(162U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(243U);
    msg.value = 0.30444282393674615;

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
    msg.setTimeStamp(0.15970942572139468);
    msg.setSource(36595U);
    msg.setSourceEntity(0U);
    msg.setDestination(53480U);
    msg.setDestinationEntity(115U);
    msg.value = 0.46220946753048586;

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
    msg.setTimeStamp(0.5142943739581382);
    msg.setSource(12752U);
    msg.setSourceEntity(69U);
    msg.setDestination(59956U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0003394344691208806;

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
    msg.setTimeStamp(0.3493683464523736);
    msg.setSource(1824U);
    msg.setSourceEntity(178U);
    msg.setDestination(45214U);
    msg.setDestinationEntity(154U);
    msg.value = 0.9639734714942918;

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
    msg.setTimeStamp(0.06554037710654026);
    msg.setSource(60269U);
    msg.setSourceEntity(108U);
    msg.setDestination(5722U);
    msg.setDestinationEntity(88U);
    msg.direction = 0.8918891604055388;
    msg.speed = 0.8384871904056442;
    msg.turbulence = 0.4321769476848385;

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
    msg.setTimeStamp(0.881583736986785);
    msg.setSource(42374U);
    msg.setSourceEntity(193U);
    msg.setDestination(63792U);
    msg.setDestinationEntity(38U);
    msg.direction = 0.40748181705131414;
    msg.speed = 0.07459246869150149;
    msg.turbulence = 0.2898263739439011;

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
    msg.setTimeStamp(0.049957328344655716);
    msg.setSource(45911U);
    msg.setSourceEntity(67U);
    msg.setDestination(28008U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.4211147267241043;
    msg.speed = 0.2635497495849898;
    msg.turbulence = 0.47951591340452715;

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
    msg.setTimeStamp(0.9412962205731894);
    msg.setSource(4455U);
    msg.setSourceEntity(239U);
    msg.setDestination(59390U);
    msg.setDestinationEntity(98U);
    msg.value = 0.9979807422142973;

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
    msg.setTimeStamp(0.8118155986362193);
    msg.setSource(34923U);
    msg.setSourceEntity(40U);
    msg.setDestination(59693U);
    msg.setDestinationEntity(73U);
    msg.value = 0.623677339161788;

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
    msg.setTimeStamp(0.4173192304073654);
    msg.setSource(22216U);
    msg.setSourceEntity(38U);
    msg.setDestination(19932U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6871301133097808;

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
    msg.setTimeStamp(0.011916790502619512);
    msg.setSource(13074U);
    msg.setSourceEntity(90U);
    msg.setDestination(17726U);
    msg.setDestinationEntity(133U);
    msg.value.assign("KAMRMBWOWXCTYHZABIJHWZDWPPYDMRBNKDXBTQMSKISUEHSPOPMURGLQHTEXRULACVTXLKMMDG");

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
    msg.setTimeStamp(0.7870096443043119);
    msg.setSource(28130U);
    msg.setSourceEntity(108U);
    msg.setDestination(7568U);
    msg.setDestinationEntity(18U);
    msg.value.assign("DSBTOUQBGZIJGWKLCKPLQUHOJDKFMMIYJSYOMZCKTXOLSKXRRVTCXPWSQB");

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
    msg.setTimeStamp(0.7687720728438072);
    msg.setSource(47462U);
    msg.setSourceEntity(84U);
    msg.setDestination(32441U);
    msg.setDestinationEntity(51U);
    msg.value.assign("FOMSZEEUIUDHXOOALSPWZIVGLUKXILKDTCRMQNDMCMARAEBTGXEKQDAZVFRNJWVVVTMLVWRBK");

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
    msg.setTimeStamp(0.15967843279418104);
    msg.setSource(5032U);
    msg.setSourceEntity(215U);
    msg.setDestination(7013U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {74, -60, -36, -12, -42, -92, -20, -12, 83, -99, 28, 15, 55, 108, 2, 35, 85, -21, -101, -41, -39, 76, 9, 5, -22, -93, 56, 36, 73, -98, 2, 28, -116, 103, 117, -36, -125, -84, -15, 46, 50, 111, 122, -106, 103, 73, 36, -52, 7, 30, -18, 40, 87, 62, 32, 69, 105, -18, -61, 69, -115, 94, 50, -11, 28, -22, -66, 95, 55, 66, 116, -104, 102, 31, 74, -92, 58, -17, 119, -25, -122, -113, 48, -69, 85, 16, 114, 77, 79, 23, -125, -110, -80, 92, 54, -113, -30, -113, -111, 112, 103, -67, 20, 108, -38, -64, -100, 116, -117, -21, 47, -17, -91, 92, -26, -3, -113, -42, 25, 53, 34, -97, -96, -62, -61, -9, -75, -99, -78, 94, -49, -76, 114};
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
    msg.setTimeStamp(0.4789094066749844);
    msg.setSource(46189U);
    msg.setSourceEntity(107U);
    msg.setDestination(56399U);
    msg.setDestinationEntity(205U);
    const char tmp_msg_0[] = {-6, -27, 102, -12, -30, -36, 104, 41, 38, -44, -42, -28, 64, 41, 97, -2, 44, -48, -103, -22, -94, 43, 87, -50, -68, 52, -83, -33, 65, 22, 74, 38, 43, -119, 53, 124, -13, -89, 56, -55, -101, 48, -81, -89, 100, -108, -4, -125, 15, 16, -123, -46, -75, -90, -122, 42, 109, 52, -70, 99, -101, 70, 84, 29, -117, -39, -86, 51, 32, -27, -110, 10, 98, 114, 111, 11, 119, 2, -39, 2, -84, 56, -78, -85, -39, 35, 43, 84, 16, 107};
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
    msg.setTimeStamp(0.606268229405126);
    msg.setSource(39873U);
    msg.setSourceEntity(40U);
    msg.setDestination(23349U);
    msg.setDestinationEntity(212U);
    const char tmp_msg_0[] = {102, -50, 0, -37, -71, 102, -56, -28, 103, 73, 69, -88, 114, -56, 22, -7, 17, -121, -52, -108, -83, -109, 76, -60, -32, 10, 50, -9, -116, 107, 6, -65, -17, 105, -43, 69, 7, -16, 19, 28, -78, 100, -57, -48, -93, -6, -82, -69, -128, 45, 114, 77, -64, -31, -16, -112, 4, -79, 120, 65, 66, 37, 20, 41, -17, -83, -93, -53, 102, -39, -78, -23, 111, 9, 7, 47, -44, -29, -38, -110, 18, -50, -78, 62, -120, -94, 2, 11, -102, -127, -31, 96, 64, 81, 76, 25, 47, 52, -96, 115, 1, 85, 18, 97, -128, 73, -84, -56, 47, 7, 94, -116, 62, -43, 82, 115, -114, -38, 47, -30, -3, 94, 125, 123, 52, -102, 84, 56, -107};
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
    msg.setTimeStamp(0.42249202817014575);
    msg.setSource(45284U);
    msg.setSourceEntity(101U);
    msg.setDestination(29995U);
    msg.setDestinationEntity(102U);
    msg.value = 0.48551858000215975;

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
    msg.setTimeStamp(0.7394494733398133);
    msg.setSource(11976U);
    msg.setSourceEntity(246U);
    msg.setDestination(58522U);
    msg.setDestinationEntity(223U);
    msg.value = 0.7921057926750573;

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
    msg.setTimeStamp(0.13452306327598784);
    msg.setSource(16569U);
    msg.setSourceEntity(254U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(179U);
    msg.value = 0.2932354759095661;

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
    msg.setTimeStamp(0.6719425412289841);
    msg.setSource(12579U);
    msg.setSourceEntity(144U);
    msg.setDestination(4799U);
    msg.setDestinationEntity(168U);
    msg.type = 54U;
    msg.frequency = 1138336176U;
    msg.min_range = 26719U;
    msg.max_range = 61966U;
    msg.bits_per_point = 5U;
    msg.scale_factor = 0.6909359437367066;
    const char tmp_msg_0[] = {125, 12, -29, -17, 24, 48, -1, -123, -122, -49, 62, -56, 108, 87, -21, -113, -80, -119, 34, 60, -39, 67, -96, -24, -114, 7, 93, 90, -83, 115, -4, 66, 20, -20, 43, 90, 62, -70, -90, 67, -49, 24, 35, 78, 61, 99, -21, -62, 85, 111, -9, 126, -39, -51, 72, 19, -48, -28, -127, 98, 95, 49, 35, -94, -112, 122, -116, -21, 19, -112, 7};
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
    msg.setTimeStamp(0.8874295703336975);
    msg.setSource(3104U);
    msg.setSourceEntity(36U);
    msg.setDestination(28912U);
    msg.setDestinationEntity(133U);
    msg.type = 104U;
    msg.frequency = 4121030850U;
    msg.min_range = 23533U;
    msg.max_range = 55697U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.7144656941943763;
    const char tmp_msg_0[] = {-16, 123, -77, 16, -82, 107, -80, -68, 38, -84, -35, 63, 68, 46, 99, 40, 62, -8, -87, 96, -19, -77, 54, 17, 82, -56, -44, 76, -128, -126, 66, -107, -99, -54, 96, 44, -39, -107, -44, 2, 74, 12, -82, 117, -33, -4, -112, -56, -84, 87, -89, -19, 25, -59, -118, 55, 112, -97, -15, 57, -100, 96, -46, -100, 45, -102, -82, 125, -96, -78, 30, 6, 65, -42, 100, 114, -62, -118, -120, -52, -4, -105, -45, 95, 21, 80, -115, -119, -90, 102, -19, -47, 122, -11, 64, 87, 31, -37, 80, -126, 47, -88, 24, -82, 88, -117, 9, 48, 5, 114, 122, -14, 77, -128, -22, 26, -31, 51, -98, -75, 99, 90};
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
    msg.setTimeStamp(0.28584983582166357);
    msg.setSource(56537U);
    msg.setSourceEntity(57U);
    msg.setDestination(13850U);
    msg.setDestinationEntity(176U);
    msg.type = 212U;
    msg.frequency = 3957341728U;
    msg.min_range = 24251U;
    msg.max_range = 32420U;
    msg.bits_per_point = 128U;
    msg.scale_factor = 0.19037020344005184;
    const char tmp_msg_0[] = {-43, 123, -44, 87, -83, -76, 33, 0, -73, 42, -128, -90, 26, -24, -34, -75, -87, 36, -27, 91, 61, 49, -89, -55, 121, -119, 96, -41, 122, 45, 35, 21, -63, 2, 3, -33, 27, 48, 1, -8, 100, 120, -8, -15, -89, -70, 20, 106, 44, 15, -24, 103, 79, 81, 19, -15, 6, -66, 80, 55, 75, -44, 25, 88, 93, 28, 91, 15, 118, -69, 54, 69, 18, 63, -124, -3, 66, 85, 111, -106, 96, 16, 112, -108, 67, 54, 13, -122, -28, 93, 48, 53, -53, 83, 1, 96, 30, -78, -44, -81, -114, -100, -80, -12, -103, 80, 81, 91, 59, -127, 102, 52, 13, 84, 51, -72, 8, -23, -111, -12, 34, -112, -73, 70, 119, 69, 78, -23, -108, -70, -89, -76, 111, 73, 77, 76, -121, -36, 67, 64, -121, -79, -54, 34, -80, 50, 112, -17, 117, -31, -84, 114, -87, 96, 47, -107, 53, -46, 26, -49, -73, 4, -96, 20, -6, 28, 25, -126, -40, -50, -49, 28, 38, -9, -90, -86, 91, -87, -19, 46, 11, -81, 25, -67, 37, -25, 33, -96, 32, 28, -44, 42, -102, -11, -98, -105, -79, -52, 124, -71, -5, -63, 13, -12};
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
    msg.setTimeStamp(0.3304149700154645);
    msg.setSource(47794U);
    msg.setSourceEntity(194U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.8277762389639329);
    msg.setSource(997U);
    msg.setSourceEntity(79U);
    msg.setDestination(7585U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9644337486422521);
    msg.setSource(13530U);
    msg.setSourceEntity(73U);
    msg.setDestination(43461U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.01713519699725763);
    msg.setSource(63515U);
    msg.setSourceEntity(62U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(252U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.9621635052792186);
    msg.setSource(28584U);
    msg.setSourceEntity(30U);
    msg.setDestination(42133U);
    msg.setDestinationEntity(114U);
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
    msg.setTimeStamp(0.593097000488122);
    msg.setSource(50158U);
    msg.setSourceEntity(94U);
    msg.setDestination(29322U);
    msg.setDestinationEntity(173U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.9741662072688053);
    msg.setSource(26571U);
    msg.setSourceEntity(94U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6899533354039457;
    msg.confidence = 0.8983185002875312;
    msg.opmodes.assign("WAEZIWSNQSFIOVSGBPRGQITZEUPYMQFQDXVALZAYHDDHPFDXKDCCIXQZWXHJYVLTNGMGBGEXMVKIINLUUULAECCLBYMJCSFSTNAHBGJGHV");

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
    msg.setTimeStamp(0.5531376254491795);
    msg.setSource(13342U);
    msg.setSourceEntity(24U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7362785876897185;
    msg.confidence = 0.7588650688919925;
    msg.opmodes.assign("GOFFLNSAJVLYGDJVIWQHJHOLJCGMQPUUZXYCQRVHZKPLVLJ");

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
    msg.setTimeStamp(0.08138898816480689);
    msg.setSource(10375U);
    msg.setSourceEntity(130U);
    msg.setDestination(18099U);
    msg.setDestinationEntity(154U);
    msg.value = 0.16748682644474167;
    msg.confidence = 0.04076289648137621;
    msg.opmodes.assign("TKNYGWPLOMQOVCOPBSQVGAPWCURZVYJKZR");

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
    msg.setTimeStamp(0.9924873718399158);
    msg.setSource(19623U);
    msg.setSourceEntity(81U);
    msg.setDestination(32430U);
    msg.setDestinationEntity(185U);
    msg.itow = 450412715U;
    msg.lat = 0.5226453864401785;
    msg.lon = 0.1612379736866395;
    msg.height_ell = 0.9680510041597614;
    msg.height_sea = 0.27343405986435265;
    msg.hacc = 0.8809237475707942;
    msg.vacc = 0.8879459427725972;
    msg.vel_n = 0.09097742985122892;
    msg.vel_e = 0.9293404778510785;
    msg.vel_d = 0.7312635749953307;
    msg.speed = 0.7779438785616523;
    msg.gspeed = 0.4460430824591449;
    msg.heading = 0.08120866289796091;
    msg.sacc = 0.308053172045599;
    msg.cacc = 0.8746235884985695;

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
    msg.setTimeStamp(0.9565032059267755);
    msg.setSource(54338U);
    msg.setSourceEntity(91U);
    msg.setDestination(21530U);
    msg.setDestinationEntity(13U);
    msg.itow = 3010388186U;
    msg.lat = 0.839298651785886;
    msg.lon = 0.0023178953570011096;
    msg.height_ell = 0.3582372451064858;
    msg.height_sea = 0.8270248957740539;
    msg.hacc = 0.5116553979838021;
    msg.vacc = 0.2769648859540441;
    msg.vel_n = 0.8486104148529648;
    msg.vel_e = 0.190673421757521;
    msg.vel_d = 0.3245453353085299;
    msg.speed = 0.9690794488427323;
    msg.gspeed = 0.8710909615016319;
    msg.heading = 0.905216488217479;
    msg.sacc = 0.2199757644208855;
    msg.cacc = 0.8288155416157811;

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
    msg.setTimeStamp(0.7739295113085708);
    msg.setSource(63331U);
    msg.setSourceEntity(21U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(184U);
    msg.itow = 1972421686U;
    msg.lat = 0.42797519582340515;
    msg.lon = 0.5169228305284201;
    msg.height_ell = 0.7839722438745659;
    msg.height_sea = 0.900331323523081;
    msg.hacc = 0.7194813112933511;
    msg.vacc = 0.49658152383237275;
    msg.vel_n = 0.9043415194657444;
    msg.vel_e = 0.5948872685719824;
    msg.vel_d = 0.10769484220429626;
    msg.speed = 0.4918242095036559;
    msg.gspeed = 0.8217068286005942;
    msg.heading = 0.19610171720598046;
    msg.sacc = 0.30613524866817243;
    msg.cacc = 0.8171820019865431;

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
    msg.setTimeStamp(0.4639569890095926);
    msg.setSource(32916U);
    msg.setSourceEntity(166U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(179U);
    msg.id = 71U;
    msg.value = 0.6947151072304194;

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
    msg.setTimeStamp(0.14638402954467677);
    msg.setSource(35077U);
    msg.setSourceEntity(155U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(107U);
    msg.id = 184U;
    msg.value = 0.3728202078513475;

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
    msg.setTimeStamp(0.012035818411635257);
    msg.setSource(32542U);
    msg.setSourceEntity(245U);
    msg.setDestination(58543U);
    msg.setDestinationEntity(234U);
    msg.id = 94U;
    msg.value = 0.17796997005780735;

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
    msg.setTimeStamp(0.5379358179876448);
    msg.setSource(52644U);
    msg.setSourceEntity(156U);
    msg.setDestination(15564U);
    msg.setDestinationEntity(14U);
    msg.x = 0.5235291902167204;
    msg.y = 0.2958000277145886;
    msg.z = 0.6471988830089034;
    msg.phi = 0.34361348392610436;
    msg.theta = 0.2435873775037024;
    msg.psi = 0.09737271511910328;

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
    msg.setTimeStamp(0.9802419642025555);
    msg.setSource(23474U);
    msg.setSourceEntity(251U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(157U);
    msg.x = 0.5117007781095219;
    msg.y = 0.5600642818786973;
    msg.z = 0.8179896006268312;
    msg.phi = 0.5063843544391446;
    msg.theta = 0.657465017645589;
    msg.psi = 0.9520667974249325;

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
    msg.setTimeStamp(0.5661704484639386);
    msg.setSource(6004U);
    msg.setSourceEntity(96U);
    msg.setDestination(52563U);
    msg.setDestinationEntity(127U);
    msg.x = 0.5809028362018994;
    msg.y = 0.13380862381827785;
    msg.z = 0.33522300092962964;
    msg.phi = 0.9625157237982127;
    msg.theta = 0.7957906732506307;
    msg.psi = 0.4076413155311731;

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
    msg.setTimeStamp(0.8121564341926109);
    msg.setSource(40442U);
    msg.setSourceEntity(171U);
    msg.setDestination(32688U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.9690404637333405;
    msg.beam_height = 0.6043042629248327;

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
    msg.setTimeStamp(0.19126134836969466);
    msg.setSource(19507U);
    msg.setSourceEntity(194U);
    msg.setDestination(54357U);
    msg.setDestinationEntity(197U);
    msg.beam_width = 0.32401833931943724;
    msg.beam_height = 0.7512544403941063;

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
    msg.setTimeStamp(0.4345016247340209);
    msg.setSource(12992U);
    msg.setSourceEntity(82U);
    msg.setDestination(55578U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.658579118931082;
    msg.beam_height = 0.6664020019684508;

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
    msg.setTimeStamp(0.02553899427616546);
    msg.setSource(65506U);
    msg.setSourceEntity(103U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(100U);
    msg.sane = 8U;

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
    msg.setTimeStamp(0.8026901822444004);
    msg.setSource(9058U);
    msg.setSourceEntity(250U);
    msg.setDestination(44321U);
    msg.setDestinationEntity(194U);
    msg.sane = 46U;

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
    msg.setTimeStamp(0.8731490065659571);
    msg.setSource(19018U);
    msg.setSourceEntity(251U);
    msg.setDestination(51436U);
    msg.setDestinationEntity(154U);
    msg.sane = 74U;

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
    msg.setTimeStamp(0.8681543133430102);
    msg.setSource(18888U);
    msg.setSourceEntity(132U);
    msg.setDestination(26523U);
    msg.setDestinationEntity(178U);
    msg.value = 0.9003204579150366;

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
    msg.setTimeStamp(0.31069081085207706);
    msg.setSource(29265U);
    msg.setSourceEntity(209U);
    msg.setDestination(15188U);
    msg.setDestinationEntity(195U);
    msg.value = 0.08158832090386303;

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
    msg.setTimeStamp(0.7385677677612851);
    msg.setSource(20986U);
    msg.setSourceEntity(10U);
    msg.setDestination(15452U);
    msg.setDestinationEntity(90U);
    msg.value = 0.8445204253605831;

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
    msg.setTimeStamp(0.1457164274761119);
    msg.setSource(63417U);
    msg.setSourceEntity(75U);
    msg.setDestination(31569U);
    msg.setDestinationEntity(242U);
    msg.value = 0.14121678481694822;

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
    msg.setTimeStamp(0.5190633499225507);
    msg.setSource(3624U);
    msg.setSourceEntity(141U);
    msg.setDestination(16857U);
    msg.setDestinationEntity(161U);
    msg.value = 0.47077747108478785;

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
    msg.setTimeStamp(0.6260964994663203);
    msg.setSource(58948U);
    msg.setSourceEntity(174U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(222U);
    msg.value = 0.43499355974536413;

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
    msg.setTimeStamp(0.22071273321051188);
    msg.setSource(53835U);
    msg.setSourceEntity(218U);
    msg.setDestination(31894U);
    msg.setDestinationEntity(120U);
    msg.value = 0.010556641113390608;

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
    msg.setTimeStamp(0.9504982595517645);
    msg.setSource(36438U);
    msg.setSourceEntity(217U);
    msg.setDestination(45974U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7199019584191338;

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
    msg.setTimeStamp(0.8793768075990809);
    msg.setSource(41002U);
    msg.setSourceEntity(64U);
    msg.setDestination(20973U);
    msg.setDestinationEntity(76U);
    msg.value = 0.22505493686004352;

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
    msg.setTimeStamp(0.38950788991988095);
    msg.setSource(38856U);
    msg.setSourceEntity(192U);
    msg.setDestination(467U);
    msg.setDestinationEntity(244U);
    msg.value = 0.164126333202259;

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
    msg.setTimeStamp(0.1412319359164116);
    msg.setSource(7323U);
    msg.setSourceEntity(254U);
    msg.setDestination(22268U);
    msg.setDestinationEntity(108U);
    msg.value = 0.573082554310083;

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
    msg.setTimeStamp(0.18522824164361018);
    msg.setSource(29076U);
    msg.setSourceEntity(183U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(120U);
    msg.value = 0.5830809414777087;

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
    msg.setTimeStamp(0.2285879830669082);
    msg.setSource(9456U);
    msg.setSourceEntity(134U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(2U);
    msg.value = 0.2752037166763597;

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
    msg.setTimeStamp(0.7723964850760152);
    msg.setSource(63420U);
    msg.setSourceEntity(147U);
    msg.setDestination(18611U);
    msg.setDestinationEntity(202U);
    msg.value = 0.7745862406738729;

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
    msg.setTimeStamp(0.5037987580827319);
    msg.setSource(24038U);
    msg.setSourceEntity(101U);
    msg.setDestination(40580U);
    msg.setDestinationEntity(41U);
    msg.value = 0.3953331167777223;

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
    msg.setTimeStamp(0.5000204481828926);
    msg.setSource(2265U);
    msg.setSourceEntity(38U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(30U);
    msg.value = 0.06404447899743249;

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
    msg.setTimeStamp(0.613500232319092);
    msg.setSource(46332U);
    msg.setSourceEntity(233U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(158U);
    msg.value = 0.4989002761743144;

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
    msg.setTimeStamp(0.4824433023685001);
    msg.setSource(28401U);
    msg.setSourceEntity(191U);
    msg.setDestination(34890U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5824771993975529;

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
    msg.setTimeStamp(0.46512999440024405);
    msg.setSource(19794U);
    msg.setSourceEntity(99U);
    msg.setDestination(1015U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8063716699079654;

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
    msg.setTimeStamp(0.3199172260156429);
    msg.setSource(1795U);
    msg.setSourceEntity(220U);
    msg.setDestination(20353U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0725704733489525;

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
    msg.setTimeStamp(0.6419990427461822);
    msg.setSource(32665U);
    msg.setSourceEntity(110U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(207U);
    msg.value = 0.1258743163799917;

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
    msg.setTimeStamp(0.9466471386183659);
    msg.setSource(35403U);
    msg.setSourceEntity(208U);
    msg.setDestination(20966U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5228317279953014;

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
    msg.setTimeStamp(0.5106089587249644);
    msg.setSource(51688U);
    msg.setSourceEntity(96U);
    msg.setDestination(12377U);
    msg.setDestinationEntity(216U);
    msg.value = 0.05715856012377196;

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
    msg.setTimeStamp(0.6966235912544857);
    msg.setSource(30298U);
    msg.setSourceEntity(248U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7917849561083116;

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
    msg.setTimeStamp(0.707352783092997);
    msg.setSource(57189U);
    msg.setSourceEntity(248U);
    msg.setDestination(4064U);
    msg.setDestinationEntity(150U);
    msg.validity = 63112U;
    msg.type = 33U;
    msg.tow = 4228560654U;
    msg.base_lat = 0.525998540369546;
    msg.base_lon = 0.9186712903493254;
    msg.base_height = 0.6376489742603509;
    msg.n = 0.7119106934892828;
    msg.e = 0.7996039389073784;
    msg.d = 0.5772297769486415;
    msg.v_n = 0.340109304594578;
    msg.v_e = 0.3827372770782492;
    msg.v_d = 0.8418798525074095;
    msg.satellites = 214U;
    msg.iar_hyp = 40702U;
    msg.iar_ratio = 0.8134475439250408;

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
    msg.setTimeStamp(0.9643535233157731);
    msg.setSource(49309U);
    msg.setSourceEntity(211U);
    msg.setDestination(22476U);
    msg.setDestinationEntity(75U);
    msg.validity = 61446U;
    msg.type = 222U;
    msg.tow = 1030701912U;
    msg.base_lat = 0.12624321966894336;
    msg.base_lon = 0.41104817807573313;
    msg.base_height = 0.9770715144824683;
    msg.n = 0.3026308766704515;
    msg.e = 0.024161593494124167;
    msg.d = 0.03847308714277797;
    msg.v_n = 0.10378169457979258;
    msg.v_e = 0.9677912002221416;
    msg.v_d = 0.449922792791407;
    msg.satellites = 156U;
    msg.iar_hyp = 88U;
    msg.iar_ratio = 0.9406039697922283;

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
    msg.setTimeStamp(0.9228763835339764);
    msg.setSource(47734U);
    msg.setSourceEntity(211U);
    msg.setDestination(1813U);
    msg.setDestinationEntity(85U);
    msg.validity = 13377U;
    msg.type = 231U;
    msg.tow = 3072180774U;
    msg.base_lat = 0.35315735469885123;
    msg.base_lon = 0.33422197088008;
    msg.base_height = 0.23639771682425603;
    msg.n = 0.04490584779914786;
    msg.e = 0.6068822908960878;
    msg.d = 0.2716341988895349;
    msg.v_n = 0.06361862021479048;
    msg.v_e = 0.2835215893863954;
    msg.v_d = 0.9590632258345997;
    msg.satellites = 171U;
    msg.iar_hyp = 46801U;
    msg.iar_ratio = 0.4410028248939798;

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
    msg.setTimeStamp(0.770813692664728);
    msg.setSource(23651U);
    msg.setSourceEntity(108U);
    msg.setDestination(48877U);
    msg.setDestinationEntity(252U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8850080652177436;
    tmp_msg_0.lon = 0.9402886328255255;
    tmp_msg_0.height = 0.27145322964395613;
    tmp_msg_0.x = 0.5897854882372848;
    tmp_msg_0.y = 0.5970191444859184;
    tmp_msg_0.z = 0.8600248728217416;
    tmp_msg_0.phi = 0.7325184292469769;
    tmp_msg_0.theta = 0.13163367870603904;
    tmp_msg_0.psi = 0.4325841682344287;
    tmp_msg_0.u = 0.668530560705045;
    tmp_msg_0.v = 0.2492267558573169;
    tmp_msg_0.w = 0.8738682717976658;
    tmp_msg_0.vx = 0.9288265657513105;
    tmp_msg_0.vy = 0.648430922914116;
    tmp_msg_0.vz = 0.885788563227724;
    tmp_msg_0.p = 0.75206755652587;
    tmp_msg_0.q = 0.4825653013000597;
    tmp_msg_0.r = 0.00879765537638788;
    tmp_msg_0.depth = 0.758549928097608;
    tmp_msg_0.alt = 0.5256710580722286;
    msg.state.set(tmp_msg_0);
    msg.type = 166U;

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
    msg.setTimeStamp(0.12431255862455448);
    msg.setSource(54620U);
    msg.setSourceEntity(172U);
    msg.setDestination(42486U);
    msg.setDestinationEntity(209U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.993479604077973;
    tmp_msg_0.lon = 0.5588182545771267;
    tmp_msg_0.height = 0.7791840521043774;
    tmp_msg_0.x = 0.3762655717455512;
    tmp_msg_0.y = 0.5652424263488048;
    tmp_msg_0.z = 0.020692175193150808;
    tmp_msg_0.phi = 0.8438394693860674;
    tmp_msg_0.theta = 0.1405692900045331;
    tmp_msg_0.psi = 0.14563199073066868;
    tmp_msg_0.u = 0.5938644981900651;
    tmp_msg_0.v = 0.8625205237971079;
    tmp_msg_0.w = 0.30423210535314704;
    tmp_msg_0.vx = 0.28995680863656115;
    tmp_msg_0.vy = 0.39153646941770714;
    tmp_msg_0.vz = 0.32505068967868556;
    tmp_msg_0.p = 0.1393040866350873;
    tmp_msg_0.q = 0.5197944238336515;
    tmp_msg_0.r = 0.8652463185560197;
    tmp_msg_0.depth = 0.5921919278839971;
    tmp_msg_0.alt = 0.12880503573018987;
    msg.state.set(tmp_msg_0);
    msg.type = 232U;

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
    msg.setTimeStamp(0.4512985389395354);
    msg.setSource(12310U);
    msg.setSourceEntity(43U);
    msg.setDestination(56475U);
    msg.setDestinationEntity(229U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.42732775408803936;
    tmp_msg_0.lon = 0.5065769894568001;
    tmp_msg_0.height = 0.9180606805991722;
    tmp_msg_0.x = 0.24191570694528974;
    tmp_msg_0.y = 0.9081219869826829;
    tmp_msg_0.z = 0.5290097078582421;
    tmp_msg_0.phi = 0.4662853735997199;
    tmp_msg_0.theta = 0.5110824074840599;
    tmp_msg_0.psi = 0.36162425457154;
    tmp_msg_0.u = 0.3814417774079044;
    tmp_msg_0.v = 0.26557699202703644;
    tmp_msg_0.w = 0.9015460018908684;
    tmp_msg_0.vx = 0.7439485975870185;
    tmp_msg_0.vy = 0.1118845335634785;
    tmp_msg_0.vz = 0.20074362835898196;
    tmp_msg_0.p = 0.36024369917316534;
    tmp_msg_0.q = 0.3596514658419532;
    tmp_msg_0.r = 0.7549592502771276;
    tmp_msg_0.depth = 0.6152379751446583;
    tmp_msg_0.alt = 0.3803327545604569;
    msg.state.set(tmp_msg_0);
    msg.type = 72U;

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
    msg.setTimeStamp(0.49090655522771964);
    msg.setSource(49338U);
    msg.setSourceEntity(34U);
    msg.setDestination(29464U);
    msg.setDestinationEntity(164U);
    msg.value = 0.17361282482933538;

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
    msg.setTimeStamp(0.49780360733303075);
    msg.setSource(27322U);
    msg.setSourceEntity(65U);
    msg.setDestination(9213U);
    msg.setDestinationEntity(33U);
    msg.value = 0.004940697106759262;

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
    msg.setTimeStamp(0.36332855374903705);
    msg.setSource(30274U);
    msg.setSourceEntity(163U);
    msg.setDestination(48453U);
    msg.setDestinationEntity(99U);
    msg.value = 0.9184181741170542;

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
    msg.setTimeStamp(0.46257914758371854);
    msg.setSource(13469U);
    msg.setSourceEntity(245U);
    msg.setDestination(21457U);
    msg.setDestinationEntity(0U);
    msg.value = 0.562921952897101;

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
    msg.setTimeStamp(0.9945329782264004);
    msg.setSource(6566U);
    msg.setSourceEntity(240U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(149U);
    msg.value = 0.4234746078887993;

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
    msg.setTimeStamp(0.18646385847840852);
    msg.setSource(11022U);
    msg.setSourceEntity(239U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(208U);
    msg.value = 0.5725011174343965;

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
    msg.setTimeStamp(0.9265743312837259);
    msg.setSource(29809U);
    msg.setSourceEntity(203U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(142U);
    msg.value = 0.4606052630901033;

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
    msg.setTimeStamp(0.6554108874467754);
    msg.setSource(35864U);
    msg.setSourceEntity(116U);
    msg.setDestination(3448U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6070858814657076;

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
    msg.setTimeStamp(0.7398345410558623);
    msg.setSource(37777U);
    msg.setSourceEntity(14U);
    msg.setDestination(47138U);
    msg.setDestinationEntity(201U);
    msg.value = 0.16797758486025116;

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
    msg.setTimeStamp(0.7913523799653737);
    msg.setSource(34615U);
    msg.setSourceEntity(156U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9807754647052154;

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
    msg.setTimeStamp(0.9309655900152197);
    msg.setSource(11150U);
    msg.setSourceEntity(108U);
    msg.setDestination(22853U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8839370505429316;

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
    msg.setTimeStamp(0.15161431317379281);
    msg.setSource(61056U);
    msg.setSourceEntity(36U);
    msg.setDestination(45791U);
    msg.setDestinationEntity(235U);
    msg.value = 0.04237504396511049;

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
    msg.setTimeStamp(0.9342125957610277);
    msg.setSource(43355U);
    msg.setSourceEntity(105U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(144U);
    msg.value = 0.22005791962767085;

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
    msg.setTimeStamp(0.7067593977944073);
    msg.setSource(36067U);
    msg.setSourceEntity(73U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9552671858096957;

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
    msg.setTimeStamp(0.6885027017826608);
    msg.setSource(30306U);
    msg.setSourceEntity(204U);
    msg.setDestination(29289U);
    msg.setDestinationEntity(150U);
    msg.value = 0.08261940875781737;

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
    msg.setTimeStamp(0.8146844098144463);
    msg.setSource(61242U);
    msg.setSourceEntity(234U);
    msg.setDestination(50454U);
    msg.setDestinationEntity(52U);
    msg.id = 90U;
    msg.zoom = 117U;
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
    msg.setTimeStamp(0.9267860831305196);
    msg.setSource(35868U);
    msg.setSourceEntity(219U);
    msg.setDestination(64492U);
    msg.setDestinationEntity(229U);
    msg.id = 131U;
    msg.zoom = 21U;
    msg.action = 31U;

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
    msg.setTimeStamp(0.6678329162776785);
    msg.setSource(23832U);
    msg.setSourceEntity(23U);
    msg.setDestination(13092U);
    msg.setDestinationEntity(159U);
    msg.id = 140U;
    msg.zoom = 25U;
    msg.action = 46U;

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
    msg.setTimeStamp(0.2681238956372137);
    msg.setSource(22091U);
    msg.setSourceEntity(244U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(21U);
    msg.id = 59U;
    msg.value = 0.2939148943708765;

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
    msg.setTimeStamp(0.07532071049681222);
    msg.setSource(47442U);
    msg.setSourceEntity(145U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(11U);
    msg.id = 234U;
    msg.value = 0.13713200058239594;

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
    msg.setTimeStamp(0.5954215858898935);
    msg.setSource(32368U);
    msg.setSourceEntity(239U);
    msg.setDestination(21071U);
    msg.setDestinationEntity(68U);
    msg.id = 135U;
    msg.value = 0.43481936860218495;

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
    msg.setTimeStamp(0.3704225776973107);
    msg.setSource(54381U);
    msg.setSourceEntity(73U);
    msg.setDestination(45671U);
    msg.setDestinationEntity(10U);
    msg.id = 81U;
    msg.value = 0.6668012938062909;

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
    msg.setTimeStamp(0.5719768332600057);
    msg.setSource(19891U);
    msg.setSourceEntity(185U);
    msg.setDestination(21010U);
    msg.setDestinationEntity(172U);
    msg.id = 38U;
    msg.value = 0.7331633681441037;

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
    msg.setTimeStamp(0.0098200046859519);
    msg.setSource(7182U);
    msg.setSourceEntity(147U);
    msg.setDestination(64261U);
    msg.setDestinationEntity(243U);
    msg.id = 141U;
    msg.value = 0.5770148327879545;

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
    msg.setTimeStamp(0.5075861242573086);
    msg.setSource(17724U);
    msg.setSourceEntity(194U);
    msg.setDestination(34495U);
    msg.setDestinationEntity(221U);
    msg.id = 181U;
    msg.angle = 0.9741766596171739;

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
    msg.setTimeStamp(0.7050188751363715);
    msg.setSource(17101U);
    msg.setSourceEntity(82U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(18U);
    msg.id = 153U;
    msg.angle = 0.018369662160956368;

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
    msg.setTimeStamp(0.5557856272084958);
    msg.setSource(16390U);
    msg.setSourceEntity(210U);
    msg.setDestination(58971U);
    msg.setDestinationEntity(34U);
    msg.id = 178U;
    msg.angle = 0.32596498754535597;

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
    msg.setTimeStamp(0.02585895356722645);
    msg.setSource(24848U);
    msg.setSourceEntity(174U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(97U);
    msg.op = 144U;
    msg.actions.assign("ECWXZIGUOELDCOZSYLQFECDBMHENDWAQXRXMBBTGFGRLZRNQIQVYCRWHMYWPTJIVMWKNQKREJMBHROCERFUYTXVAGJBRPWETOMTVDPRUTRLPHKOAAMKYGVQXVZKFWDAUYAXPTXSCGSCSXIHHHSAJFSTLQEUDUULFZZLPYILNMAZSIIOZGQDJHDHYVYWHJKLPPEQNFNCKGC");

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
    msg.setTimeStamp(0.16549947374728835);
    msg.setSource(64145U);
    msg.setSourceEntity(234U);
    msg.setDestination(37980U);
    msg.setDestinationEntity(176U);
    msg.op = 53U;
    msg.actions.assign("VXHQWKQDZAJTGJFPRQOOLDMJXUPOLCANXEOWUBPVTCPFBHXBQWXFCBEHLNWMQFBSDBPFUJZXFGZNQNUZMCMIDJOHGVAYDBJZKEPDAZUKOFNSNVMJNYURUKZTSHQKWTHLDAEIYVPXFIGYYMEGNHOSSGQBMETGFKWRSROSVVANDCEPDNIRWZGVCYWSXEWIYWGLQYKRHJROUUIIPIARR");

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
    msg.setTimeStamp(0.05594621506356634);
    msg.setSource(29936U);
    msg.setSourceEntity(238U);
    msg.setDestination(52660U);
    msg.setDestinationEntity(11U);
    msg.op = 189U;
    msg.actions.assign("LKIMLBUNKVXVETATOJBEWLKYVWHHCDZWUUBDUGHLRMWFDJXZZBMBCZSIOYYIT");

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
    msg.setTimeStamp(0.7258204347711744);
    msg.setSource(35385U);
    msg.setSourceEntity(231U);
    msg.setDestination(59976U);
    msg.setDestinationEntity(248U);
    msg.actions.assign("VDZTWSIDXCFKNUZCLVCWUMJBCWQDFPVWVZUISJKBOBCAOHYCYSULNMEOGGFRHOLDDNHLZFOWPWAWFOWCRXSZOAQXGTPAXBYGBJJACRKAJMZPLLHAQRCIEJZDTEVRQPPXYFGUNKEDKTXYNQFQDTMMSLMVETOSNJPBJHBIVK");

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
    msg.setTimeStamp(0.3326684172590847);
    msg.setSource(34897U);
    msg.setSourceEntity(6U);
    msg.setDestination(13853U);
    msg.setDestinationEntity(59U);
    msg.actions.assign("QAOYITVUWOELBIKIZEQILWSUVZMTFOYPCIHHJSQRRJKTHUDGQRFKGJQKHCKUVRMLUJUPUCHFMFVVVWMDSGENYCMHMNEOBEENKBBMLRDEEOIJDFGMYWLXGAGZZVUYNEBMXCWSHKYIRNOQPJAZFSTPXBXHOVNAXBLCWGVXVAZSTACBALABPNDTRJJUZHIRGWQGJYMRYINLQFF");

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
    msg.setTimeStamp(0.24599185497192189);
    msg.setSource(60637U);
    msg.setSourceEntity(59U);
    msg.setDestination(51634U);
    msg.setDestinationEntity(145U);
    msg.actions.assign("KTAHQESKFEPGGHFEKIWXUXVCSMMBRCAXRSNZTPXFHWLVRTJXLNSGFCWOCFHRFYVROTUJMVCLNNQHLJZAPIDLEIQSEGBAGLWPHBAPKRNZCFQHDQJLGPPSLXXLUZPEZTUOIOJVSABWXOJJHADTLBWMNRHOMIVBOKIRGKMBJWQUXXDRYNCZBYQVFCVYDUYPSKZNZEIDDTYGVPEWBTGMEN");

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
    msg.setTimeStamp(0.06734734274961207);
    msg.setSource(23640U);
    msg.setSourceEntity(8U);
    msg.setDestination(29008U);
    msg.setDestinationEntity(4U);
    msg.button = 43U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.4192180864099705);
    msg.setSource(39510U);
    msg.setSourceEntity(242U);
    msg.setDestination(6622U);
    msg.setDestinationEntity(172U);
    msg.button = 43U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.09847520632609708);
    msg.setSource(16739U);
    msg.setSourceEntity(194U);
    msg.setDestination(17375U);
    msg.setDestinationEntity(160U);
    msg.button = 22U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.249874807437504);
    msg.setSource(39506U);
    msg.setSourceEntity(117U);
    msg.setDestination(10489U);
    msg.setDestinationEntity(59U);
    msg.op = 19U;
    msg.text.assign("TGMZTYBJVSNFQXSQIDBUEBEQNACECNKVHBKIULBOIPNIOIJBOSKJIKNMBPOXRWQLHZDIHFLQZUQDGJCUEIMXJCESGWKWVAUWCUFEGAVKOMDZZBOIHJMXGYGUWYVTUAZPNKXTMFJOQOHEWFPPYEGDYST");

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
    msg.setTimeStamp(0.8273824024759013);
    msg.setSource(37265U);
    msg.setSourceEntity(28U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(7U);
    msg.op = 182U;
    msg.text.assign("RUDZATQGAGRMNUBOSEJYLUKHXGMOEGBPEOQAPMXGKPYFAQYLCVSFDITPNHJGDBLVUGMBFRAHXDJHZAPIPBESFTTUGDXOIQCJFNNWZZNPIWQRWTSCCQWCNZQSOVDQHXMUZRHVVRTNOTAURGVNVIJ");

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
    msg.setTimeStamp(0.7113037418566482);
    msg.setSource(36733U);
    msg.setSourceEntity(203U);
    msg.setDestination(52660U);
    msg.setDestinationEntity(163U);
    msg.op = 248U;
    msg.text.assign("HHKDXOBYALJWEXEXGLRFMUJDBZEOURCFLKJECGQQKQUIQPWZZXODSUGVHMINFCPZJZKTVZTWZGTOYVGFCMJOVEHVYZHLYWLPNTEIBUPMNXIHSTPIOTNOEPCMLPLYSQRCVGJXYSDFFCIJFSRBWKBBRBUROZXTQHKBNAMMLUITHGSNQRDNUXSQPNWFJEXYRKNNBXKPDYFLTWPAHVEAFIMUBGRRQCW");

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
    msg.setTimeStamp(0.5157093226684161);
    msg.setSource(6245U);
    msg.setSourceEntity(160U);
    msg.setDestination(19099U);
    msg.setDestinationEntity(144U);
    msg.op = 138U;
    msg.time_remain = 0.21192446029445167;
    msg.sched_time = 0.17136512629871803;

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
    msg.setTimeStamp(0.59639089212586);
    msg.setSource(25925U);
    msg.setSourceEntity(226U);
    msg.setDestination(31186U);
    msg.setDestinationEntity(129U);
    msg.op = 172U;
    msg.time_remain = 0.19546460116782838;
    msg.sched_time = 0.1413454039623876;

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
    msg.setTimeStamp(0.4366701790263474);
    msg.setSource(32989U);
    msg.setSourceEntity(218U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(2U);
    msg.op = 168U;
    msg.time_remain = 0.28937214754894836;
    msg.sched_time = 0.9783057531109963;

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
    msg.setTimeStamp(0.755544696852546);
    msg.setSource(61470U);
    msg.setSourceEntity(178U);
    msg.setDestination(5571U);
    msg.setDestinationEntity(176U);
    msg.name.assign("JMNIXVUJVZWCBIMTGFXMXFRBBDFFEUJWTKYRSOVTIQIQOGOZXHKITFAXREWXBMWEQDSBLGCRYCPNYTCAPGWINQSDKAOWDKFQYOOSDTMLEPELHZJSIWUI");
    msg.op = 30U;
    msg.sched_time = 0.601785419784726;

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
    msg.setTimeStamp(0.8259281879620776);
    msg.setSource(44704U);
    msg.setSourceEntity(94U);
    msg.setDestination(42895U);
    msg.setDestinationEntity(158U);
    msg.name.assign("ASPTNFHXLPXOLZEFNCWWYZTHMAYCOIELRFFCVRRU");
    msg.op = 113U;
    msg.sched_time = 0.45125125824233125;

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
    msg.setTimeStamp(0.10005793252662887);
    msg.setSource(29989U);
    msg.setSourceEntity(219U);
    msg.setDestination(51061U);
    msg.setDestinationEntity(202U);
    msg.name.assign("KALUWJKXVBPDAYSHIKGOAOWULKPKHGDITJNQSBVACQFKURLBMUABTIZZSFFRRTQTZPOZNSBGARIRWFWHXCUMMCAGLEEBNYECPAEXVNFZWSEOYUFJMDQETLVGUYOYDXCGH");
    msg.op = 30U;
    msg.sched_time = 0.0788723261311508;

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
    msg.setTimeStamp(0.9391685703748969);
    msg.setSource(2687U);
    msg.setSourceEntity(28U);
    msg.setDestination(10296U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.5784876440407766);
    msg.setSource(39332U);
    msg.setSourceEntity(246U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.6413199004007156);
    msg.setSource(24242U);
    msg.setSourceEntity(219U);
    msg.setDestination(20077U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.7249221715983941);
    msg.setSource(19229U);
    msg.setSourceEntity(214U);
    msg.setDestination(31296U);
    msg.setDestinationEntity(143U);
    msg.name.assign("HGZFKSAGCW");
    msg.state = 92U;

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
    msg.setTimeStamp(0.42191869352952716);
    msg.setSource(45687U);
    msg.setSourceEntity(70U);
    msg.setDestination(6283U);
    msg.setDestinationEntity(115U);
    msg.name.assign("MWJQSJQQXFDGABNJFYWBCCZXCNBFUIZNLJDIXHPDVLCJBLGEYJKSHXEGFOEUXNHVUNROPRIVKADOEYHZHTPOLFWKJR");
    msg.state = 10U;

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
    msg.setTimeStamp(0.6648220574340561);
    msg.setSource(36172U);
    msg.setSourceEntity(42U);
    msg.setDestination(41595U);
    msg.setDestinationEntity(104U);
    msg.name.assign("EYVGINDLKHYCWXHICNKZFVUNZSMNLXANGHGDJBZZYBGEMHXGBDAIDIEFVALBFSEANLECMOCRZVEUK");
    msg.state = 211U;

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
    msg.setTimeStamp(0.31990253378584166);
    msg.setSource(45712U);
    msg.setSourceEntity(6U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(180U);
    msg.name.assign("FTZEKRYBTWYPQVHXAOLIIKJKGMUGVELESNKKLYTCIIMFTASUOCEQUYFGFUSVJLVZWBRSGTIAOXTABQXSMHMUYGPCGWATFRRAOASNXNIVFVWJZPBECPUHISPMKYMCJDPXDOUSYLHRKKFTQZANOWAVZJCSZXBCXVEEDYWQNJBFZRSVJNICJWPLWHKQHRDPNXLVDOMBEEIKTFN");
    msg.value = 156U;

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
    msg.setTimeStamp(0.6403614613291317);
    msg.setSource(11267U);
    msg.setSourceEntity(37U);
    msg.setDestination(60851U);
    msg.setDestinationEntity(15U);
    msg.name.assign("QAICIJQZJEEUYIAZFQIEKCHYUTERQLUPSIVJPRDIYUNGBMBALAGWPVLXILDMMLBAXOZOBTRFVBHUICCVRAYOFFRPQTMOIYTUZBKSOXNXGGNVHASTCZNEFYDZLZTBPJZNXXDGHORVCJBMCWOQZKMRBHQSTFGPPUHWJWVMAPTWSMDEPIRSHZJWJUCLFXKNLJSHRTAGADKCWQENYSXMDLOFUSKEHCEYQFDKPOVSKYETQGNUMGWNFG");
    msg.value = 26U;

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
    msg.setTimeStamp(0.8362959213847352);
    msg.setSource(29524U);
    msg.setSourceEntity(198U);
    msg.setDestination(20121U);
    msg.setDestinationEntity(234U);
    msg.name.assign("XYHYQEZRPDIDQPEEGPIVFREWSZYYUVDLFJRSVPSDBWJNQMBZBYHNNEULYPLOWTLWCKBIKXANVAIOVBKSPVCIWIUYTKH");
    msg.value = 36U;

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
    msg.setTimeStamp(0.22638066835374338);
    msg.setSource(56186U);
    msg.setSourceEntity(185U);
    msg.setDestination(65486U);
    msg.setDestinationEntity(58U);
    msg.name.assign("UMGQYTXQUBPOCVPWFTNIGRCXRBWQPLKAFINBLBOOXBNWYYYDVPGKMFFKQDUMDXRRCLYJVLDNKLWMVCDZKSYYKJHAWXKJUEIXFLIXJJGXPSZWGAOXSBKENONIHSRUFTELSMTFZSKMCLDEOCGNABSQCQMBVDWHQGVINYOVTVWRPPZAPZLPAQVYNJGFENTSLERZRGXODEWZTCUAUJFITIAT");

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
    msg.setTimeStamp(0.19944023160630064);
    msg.setSource(41453U);
    msg.setSourceEntity(252U);
    msg.setDestination(44802U);
    msg.setDestinationEntity(91U);
    msg.name.assign("HWJQQCJGSFVTYTEVTHOJXXNMMBQSYXHLEIDLLOCUIQGSRJNLZDGBNHKTMKKHUANFDRPPVXFTTOOUSPPQWBVUPZQYLDQSFJNOEYMEFHRLOEZAAPCEBFNSWGLUDKHGMPPZIHQKDNZKMHVOZAXJWXIUVPBYSAMOSCMYBKRTRJVCGGYJJXFKBVCGBRHCTUKIMWZEANNSZIAXARUGPZBYRASDTFQD");

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
    msg.setTimeStamp(0.038429374551934514);
    msg.setSource(45463U);
    msg.setSourceEntity(129U);
    msg.setDestination(37965U);
    msg.setDestinationEntity(41U);
    msg.name.assign("BZCZWPCLXAOKUVARUDDMIWYANQWLFMMMZCFOXTECGCUCROSGIMZRMTWLLRZSHFTREDIAGZANIPSVHAJSHGEZSPWCYNDJRHJXLVFMYTGYVJUKPJJZTMEEXHKNJVSTBGOFGOPPXQNTKLLKBBYZUHNRQQVXUABXQASUYAWXREQNEMDPUSLXYBFBBQBVDIOI");

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
    msg.setTimeStamp(0.4496309036097672);
    msg.setSource(16179U);
    msg.setSourceEntity(61U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(53U);
    msg.name.assign("PTBJMZZIWQIOBQVPGGXFSXGUFNAILDHVLHZQKGPZSKEOKRSWLYZCIEBOBHURLBJFXHRTPBUIWBORAXJGQSSJYGEDQRGGABKBDKMHTCROULTZNYLHFNILCREUWKIADXC");
    msg.value = 93U;

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
    msg.setTimeStamp(0.8879488345492501);
    msg.setSource(26407U);
    msg.setSourceEntity(104U);
    msg.setDestination(31264U);
    msg.setDestinationEntity(181U);
    msg.name.assign("FAWXLMTTCEKOIDTLXZDZYKYUUMBRSVGDMHPJWXVDJSDGAPYUXKZPYLZASDQGRGOWLUHLFPPYJXKSTVQGXOWQCHLYJBEZFFNNSVWAIPROFWHINJJXAECXWVJIUIIZGSWUTTNKGLOMWQEBVWNOAAFQEMKGKJZJVBNYCSNQROLAKIRUKQXSFGYRQOXZMRAOVVJHYKDFDRICVNRQHGHBICTHBPYFPHBIZCNECMRNLUTLDOU");
    msg.value = 28U;

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
    msg.setTimeStamp(0.84393686778239);
    msg.setSource(56864U);
    msg.setSourceEntity(16U);
    msg.setDestination(37830U);
    msg.setDestinationEntity(103U);
    msg.name.assign("IBAJSELNBTOURIJPDWAEVKFRQHVBDOQQLKURRMYSJOFAVXXWOCLNKZSHTIPTNNHAUETSYHYDVIMBESMJVMYGFOJEMZYHTEXTIDDITRBWTSAZQQMGJILVWJZYRPCUKZPKRUUZNFQDHPKXPCSFGSIJPFQZAWVBYNZCAWNVNYMDWQBUSGEYLYCEUGXBOPTCBOULJARFXGXCFMEDZGDW");
    msg.value = 54U;

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
    msg.setTimeStamp(0.6289501719942587);
    msg.setSource(11082U);
    msg.setSourceEntity(227U);
    msg.setDestination(65347U);
    msg.setDestinationEntity(134U);
    msg.id = 185U;
    msg.period = 1493923161U;
    msg.duty_cycle = 2153579880U;

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
    msg.setTimeStamp(0.4605149333603138);
    msg.setSource(13337U);
    msg.setSourceEntity(247U);
    msg.setDestination(22793U);
    msg.setDestinationEntity(74U);
    msg.id = 86U;
    msg.period = 3974770717U;
    msg.duty_cycle = 3390461174U;

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
    msg.setTimeStamp(0.7883318845878666);
    msg.setSource(35460U);
    msg.setSourceEntity(30U);
    msg.setDestination(2201U);
    msg.setDestinationEntity(164U);
    msg.id = 139U;
    msg.period = 4060674923U;
    msg.duty_cycle = 3741621969U;

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
    msg.setTimeStamp(0.15432950122992273);
    msg.setSource(60734U);
    msg.setSourceEntity(177U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(229U);
    msg.id = 250U;
    msg.period = 3046761012U;
    msg.duty_cycle = 3575272386U;

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
    msg.setTimeStamp(0.7778890081590778);
    msg.setSource(24528U);
    msg.setSourceEntity(43U);
    msg.setDestination(8576U);
    msg.setDestinationEntity(123U);
    msg.id = 55U;
    msg.period = 560327408U;
    msg.duty_cycle = 1234574686U;

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
    msg.setTimeStamp(0.6756493591402208);
    msg.setSource(1462U);
    msg.setSourceEntity(145U);
    msg.setDestination(2142U);
    msg.setDestinationEntity(53U);
    msg.id = 168U;
    msg.period = 4024733911U;
    msg.duty_cycle = 4235064920U;

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
    msg.setTimeStamp(0.3667758461387073);
    msg.setSource(29296U);
    msg.setSourceEntity(95U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.3762334683538546;
    msg.lon = 0.767712073086638;
    msg.height = 0.9616085623727121;
    msg.x = 0.2959979842251973;
    msg.y = 0.9797004254847833;
    msg.z = 0.058047726283459444;
    msg.phi = 0.9507974024403807;
    msg.theta = 0.3443066654154412;
    msg.psi = 0.42456083665609223;
    msg.u = 0.6659571818172132;
    msg.v = 0.8251495008756051;
    msg.w = 0.2465394136117648;
    msg.vx = 0.9728078092755059;
    msg.vy = 0.829475147930208;
    msg.vz = 0.341690438193458;
    msg.p = 0.9808241432277628;
    msg.q = 0.5043263139886772;
    msg.r = 0.14408061508438796;
    msg.depth = 0.5147326953679748;
    msg.alt = 0.7050460838587745;

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
    msg.setTimeStamp(0.7011648842566964);
    msg.setSource(55062U);
    msg.setSourceEntity(176U);
    msg.setDestination(30398U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.6145952203921032;
    msg.lon = 0.771222051896127;
    msg.height = 0.6542469732969911;
    msg.x = 0.4133938036191299;
    msg.y = 0.15303898228762214;
    msg.z = 0.130775817232483;
    msg.phi = 0.8296032633997588;
    msg.theta = 0.028232873706783845;
    msg.psi = 0.14639960688151055;
    msg.u = 0.8262864877916454;
    msg.v = 0.8428505843018086;
    msg.w = 0.6600640120212998;
    msg.vx = 0.8643974278803243;
    msg.vy = 0.6627794935832557;
    msg.vz = 0.5438368374139829;
    msg.p = 0.3359647527548225;
    msg.q = 0.15053409086325042;
    msg.r = 0.638249833392572;
    msg.depth = 0.4577458508748743;
    msg.alt = 0.0737814826289549;

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
    msg.setTimeStamp(0.8710731463964541);
    msg.setSource(47759U);
    msg.setSourceEntity(65U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6643578521789765;
    msg.lon = 0.8537889701836435;
    msg.height = 0.511955360582762;
    msg.x = 0.015508102172682392;
    msg.y = 0.5438914251379262;
    msg.z = 0.8701836433687152;
    msg.phi = 0.5551784274172258;
    msg.theta = 0.1827876173898788;
    msg.psi = 0.7474440595705732;
    msg.u = 0.8179441012858776;
    msg.v = 0.3173783792071886;
    msg.w = 0.42844837207792985;
    msg.vx = 0.1471655519156626;
    msg.vy = 0.6049315745557986;
    msg.vz = 0.6442379483398503;
    msg.p = 0.693270357322804;
    msg.q = 0.44625741498166605;
    msg.r = 0.8963373361684651;
    msg.depth = 0.7039547204098893;
    msg.alt = 0.7494462602236104;

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
    msg.setTimeStamp(0.5717750337831418);
    msg.setSource(58851U);
    msg.setSourceEntity(7U);
    msg.setDestination(25248U);
    msg.setDestinationEntity(237U);
    msg.x = 0.45919058967325577;
    msg.y = 0.5589455658067556;
    msg.z = 0.6399851000771472;

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
    msg.setTimeStamp(0.4425947971979757);
    msg.setSource(57623U);
    msg.setSourceEntity(79U);
    msg.setDestination(55888U);
    msg.setDestinationEntity(158U);
    msg.x = 0.7732734377371209;
    msg.y = 0.16027516577394163;
    msg.z = 0.9922006976947914;

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
    msg.setTimeStamp(0.2720874521672699);
    msg.setSource(10579U);
    msg.setSourceEntity(50U);
    msg.setDestination(57107U);
    msg.setDestinationEntity(211U);
    msg.x = 0.6961995814367962;
    msg.y = 0.26258725561310203;
    msg.z = 0.1544038480263995;

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
    msg.setTimeStamp(0.16974978202342994);
    msg.setSource(55529U);
    msg.setSourceEntity(229U);
    msg.setDestination(62031U);
    msg.setDestinationEntity(38U);
    msg.value = 0.6483021499399034;

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
    msg.setTimeStamp(0.3374324104334442);
    msg.setSource(22447U);
    msg.setSourceEntity(245U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7299494677307469;

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
    msg.setTimeStamp(0.24732417240023707);
    msg.setSource(34808U);
    msg.setSourceEntity(203U);
    msg.setDestination(38876U);
    msg.setDestinationEntity(6U);
    msg.value = 0.9686546957779023;

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
    msg.setTimeStamp(0.3308806188316006);
    msg.setSource(38273U);
    msg.setSourceEntity(194U);
    msg.setDestination(325U);
    msg.setDestinationEntity(7U);
    msg.value = 0.15637435425753266;

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
    msg.setTimeStamp(0.6591828094688812);
    msg.setSource(26295U);
    msg.setSourceEntity(102U);
    msg.setDestination(24729U);
    msg.setDestinationEntity(66U);
    msg.value = 0.08377078679961236;

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
    msg.setTimeStamp(0.9068359345943819);
    msg.setSource(34345U);
    msg.setSourceEntity(115U);
    msg.setDestination(39263U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9744882781653619;

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
    msg.setTimeStamp(0.9666532018056315);
    msg.setSource(8035U);
    msg.setSourceEntity(139U);
    msg.setDestination(22571U);
    msg.setDestinationEntity(79U);
    msg.x = 0.6893385349656037;
    msg.y = 0.2426657713586473;
    msg.z = 0.6028618857773288;
    msg.phi = 0.7227103901002337;
    msg.theta = 0.8408005861542748;
    msg.psi = 0.6204850620417353;
    msg.p = 0.11623010974223047;
    msg.q = 0.03237202750013968;
    msg.r = 0.7742373549091115;
    msg.u = 0.9130414003829552;
    msg.v = 0.030104359161916228;
    msg.w = 0.5076182375124524;
    msg.bias_psi = 0.9760172612095254;
    msg.bias_r = 0.2000064293308409;

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
    msg.setTimeStamp(0.9867574719521295);
    msg.setSource(19110U);
    msg.setSourceEntity(226U);
    msg.setDestination(48307U);
    msg.setDestinationEntity(71U);
    msg.x = 0.5877483137993266;
    msg.y = 0.7916019057287057;
    msg.z = 0.05856810472871088;
    msg.phi = 0.3967012093104222;
    msg.theta = 0.6111529602331253;
    msg.psi = 0.7626027654486794;
    msg.p = 0.2090436679201061;
    msg.q = 0.4780916829382429;
    msg.r = 0.765516168403246;
    msg.u = 0.08474345233844938;
    msg.v = 0.727803831776549;
    msg.w = 0.22493239532191622;
    msg.bias_psi = 0.6084802445824088;
    msg.bias_r = 0.4349672437341173;

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
    msg.setTimeStamp(0.05862175192846919);
    msg.setSource(47365U);
    msg.setSourceEntity(238U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(180U);
    msg.x = 0.9663590344641653;
    msg.y = 0.023340150841155594;
    msg.z = 0.8953345823718615;
    msg.phi = 0.31393905854636395;
    msg.theta = 0.4457691760468756;
    msg.psi = 0.36375514649472585;
    msg.p = 0.13052941010490404;
    msg.q = 0.5114249215643899;
    msg.r = 0.010897305949521763;
    msg.u = 0.704051672497901;
    msg.v = 0.23489644150862254;
    msg.w = 0.9338107958342896;
    msg.bias_psi = 0.7204181540189154;
    msg.bias_r = 0.6175465985229831;

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
    msg.setTimeStamp(0.6350822588208569);
    msg.setSource(56453U);
    msg.setSourceEntity(94U);
    msg.setDestination(61905U);
    msg.setDestinationEntity(10U);
    msg.bias_psi = 0.6906866113075718;
    msg.bias_r = 0.531447376832972;
    msg.cog = 0.33057251748680105;
    msg.cyaw = 0.5061257926934041;
    msg.lbl_rej_level = 0.5988126729040136;
    msg.gps_rej_level = 0.08275947818523255;
    msg.custom_x = 0.22899778807925164;
    msg.custom_y = 0.25496132793311843;
    msg.custom_z = 0.5658660223953618;

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
    msg.setTimeStamp(0.32647444384648594);
    msg.setSource(63619U);
    msg.setSourceEntity(198U);
    msg.setDestination(44687U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.1685917348308278;
    msg.bias_r = 0.9020942780215572;
    msg.cog = 0.2255412989911766;
    msg.cyaw = 0.736731928762207;
    msg.lbl_rej_level = 0.9703401724329292;
    msg.gps_rej_level = 0.8451495902203678;
    msg.custom_x = 0.12982146402115768;
    msg.custom_y = 0.5978156005677259;
    msg.custom_z = 0.21211156653630603;

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
    msg.setTimeStamp(0.2878909774882118);
    msg.setSource(5768U);
    msg.setSourceEntity(182U);
    msg.setDestination(14559U);
    msg.setDestinationEntity(15U);
    msg.bias_psi = 0.6284610624371874;
    msg.bias_r = 0.03273749912107615;
    msg.cog = 0.3156292919270617;
    msg.cyaw = 0.9244700573343567;
    msg.lbl_rej_level = 0.29350588419067614;
    msg.gps_rej_level = 0.18535480778888613;
    msg.custom_x = 0.015047791531374033;
    msg.custom_y = 0.2019293616738338;
    msg.custom_z = 0.3693620032774175;

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
    msg.setTimeStamp(0.3802371855496556);
    msg.setSource(29455U);
    msg.setSourceEntity(226U);
    msg.setDestination(58699U);
    msg.setDestinationEntity(37U);
    msg.utc_time = 0.5262152527942531;
    msg.reason = 171U;

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
    msg.setTimeStamp(0.026989327465040236);
    msg.setSource(65059U);
    msg.setSourceEntity(192U);
    msg.setDestination(61770U);
    msg.setDestinationEntity(185U);
    msg.utc_time = 0.46234063789460456;
    msg.reason = 200U;

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
    msg.setTimeStamp(0.19816411925073074);
    msg.setSource(30268U);
    msg.setSourceEntity(144U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(245U);
    msg.utc_time = 0.8093401751420254;
    msg.reason = 163U;

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
    msg.setTimeStamp(0.05100678723828034);
    msg.setSource(34034U);
    msg.setSourceEntity(86U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(99U);
    msg.id = 230U;
    msg.range = 0.11829748283877484;
    msg.acceptance = 1U;

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
    msg.setTimeStamp(0.3146192089872465);
    msg.setSource(15233U);
    msg.setSourceEntity(165U);
    msg.setDestination(62575U);
    msg.setDestinationEntity(96U);
    msg.id = 113U;
    msg.range = 0.7258525545013764;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.9649274527109543);
    msg.setSource(53483U);
    msg.setSourceEntity(119U);
    msg.setDestination(55247U);
    msg.setDestinationEntity(227U);
    msg.id = 100U;
    msg.range = 0.8348724883843331;
    msg.acceptance = 145U;

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
    msg.setTimeStamp(0.003520923843015278);
    msg.setSource(42512U);
    msg.setSourceEntity(58U);
    msg.setDestination(11396U);
    msg.setDestinationEntity(130U);
    msg.type = 116U;
    msg.reason = 2U;
    msg.value = 0.3010005290368437;
    msg.timestep = 0.6612080234969696;

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
    msg.setTimeStamp(0.3162378036120571);
    msg.setSource(40242U);
    msg.setSourceEntity(112U);
    msg.setDestination(8795U);
    msg.setDestinationEntity(31U);
    msg.type = 214U;
    msg.reason = 98U;
    msg.value = 0.87185692390224;
    msg.timestep = 0.022659944611652993;

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
    msg.setTimeStamp(0.6036139280590822);
    msg.setSource(41917U);
    msg.setSourceEntity(135U);
    msg.setDestination(39693U);
    msg.setDestinationEntity(72U);
    msg.type = 124U;
    msg.reason = 45U;
    msg.value = 0.06941328142121239;
    msg.timestep = 0.16742970056130746;

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
    msg.setTimeStamp(0.7109931746603401);
    msg.setSource(4260U);
    msg.setSourceEntity(158U);
    msg.setDestination(14962U);
    msg.setDestinationEntity(126U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VNNUQZJWYIQSMKNWMBFPLBNHEZCHPBCVYQLVNARWGWRTKLXUBIPRRVSKKZTSDSIASUFPORZKPBFLLVMATUBHVMDNTMEYGECREZHJDOKJLYXLYIUCUAOGLZWZCDVYRYIITJTQLCXMGSROYJQKEIIIBOZFJNAGRFASZKEHXQFMNWBPXIHTXLQVJBEXVMUCTFWGJSQGOTUAWQJHXXRPUPEACMUOTPFYWDSKZD");
    tmp_msg_0.lat = 0.15945579137409738;
    tmp_msg_0.lon = 0.9913474171840099;
    tmp_msg_0.depth = 0.1559767782444097;
    tmp_msg_0.query_channel = 94U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 139U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2632053351265311;
    msg.y = 0.8705664588097762;
    msg.var_x = 0.9008700495150967;
    msg.var_y = 0.6525262963695209;
    msg.distance = 0.9705460152412322;

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
    msg.setTimeStamp(0.4256875560700061);
    msg.setSource(50460U);
    msg.setSourceEntity(7U);
    msg.setDestination(57156U);
    msg.setDestinationEntity(125U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JAXGVSKZCMABWLAPXCDVHPQXEPLZQOUO");
    tmp_msg_0.lat = 0.7198250926138501;
    tmp_msg_0.lon = 0.34084097910509503;
    tmp_msg_0.depth = 0.7255346973182822;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 99U;
    tmp_msg_0.transponder_delay = 110U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4416019557527341;
    msg.y = 0.9646540745375393;
    msg.var_x = 0.6387675347457495;
    msg.var_y = 0.9013338572993822;
    msg.distance = 0.37757260336862064;

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
    msg.setTimeStamp(0.6120778976709779);
    msg.setSource(55309U);
    msg.setSourceEntity(233U);
    msg.setDestination(55008U);
    msg.setDestinationEntity(53U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AMFJQGIQUTTNYSBFOPAZHLKZWALIMMNRVYLYPOGFXUSYUWTXCFLLBDGAKLBWJWVOSRERANCFBFDCBVPWCZQWLJYDPJOOLQYIJFX");
    tmp_msg_0.lat = 0.4806782959885002;
    tmp_msg_0.lon = 0.8074827781112999;
    tmp_msg_0.depth = 0.9547977692586017;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 18U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2813290921483117;
    msg.y = 0.6555545415605344;
    msg.var_x = 0.9091428396134883;
    msg.var_y = 0.21991930576185503;
    msg.distance = 0.789395273981287;

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
    msg.setTimeStamp(0.4954227277391401);
    msg.setSource(25434U);
    msg.setSourceEntity(162U);
    msg.setDestination(54090U);
    msg.setDestinationEntity(152U);
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
    msg.setTimeStamp(0.23591785062642745);
    msg.setSource(16312U);
    msg.setSourceEntity(134U);
    msg.setDestination(15697U);
    msg.setDestinationEntity(221U);
    msg.state = 237U;

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
    msg.setTimeStamp(0.3169808122772523);
    msg.setSource(61466U);
    msg.setSourceEntity(199U);
    msg.setDestination(8380U);
    msg.setDestinationEntity(67U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.6254252887204802);
    msg.setSource(38689U);
    msg.setSourceEntity(191U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(227U);
    msg.x = 0.3260839122573116;
    msg.y = 0.9074451436813628;
    msg.z = 0.7613081104501178;

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
    msg.setTimeStamp(0.9661564613768899);
    msg.setSource(18046U);
    msg.setSourceEntity(241U);
    msg.setDestination(9770U);
    msg.setDestinationEntity(96U);
    msg.x = 0.7030092030423217;
    msg.y = 0.6778921598679352;
    msg.z = 0.9157855597553499;

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
    msg.setTimeStamp(0.324161767323213);
    msg.setSource(52540U);
    msg.setSourceEntity(15U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(167U);
    msg.x = 0.8617991233564828;
    msg.y = 0.767974485340639;
    msg.z = 0.36952733298903817;

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
    msg.setTimeStamp(0.5973921335722222);
    msg.setSource(64892U);
    msg.setSourceEntity(52U);
    msg.setDestination(46091U);
    msg.setDestinationEntity(206U);
    msg.va = 0.2072441610549839;
    msg.aoa = 0.6197146673003545;
    msg.ssa = 0.8674775402820923;

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
    msg.setTimeStamp(0.8607261329396823);
    msg.setSource(59254U);
    msg.setSourceEntity(29U);
    msg.setDestination(14005U);
    msg.setDestinationEntity(81U);
    msg.va = 0.6565646770931017;
    msg.aoa = 0.6974495463251525;
    msg.ssa = 0.7217059436204034;

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
    msg.setTimeStamp(0.9484181073598469);
    msg.setSource(52429U);
    msg.setSourceEntity(58U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(178U);
    msg.va = 0.11813658511593084;
    msg.aoa = 0.30348132389319304;
    msg.ssa = 0.22638469056147892;

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
    msg.setTimeStamp(0.5279571684062649);
    msg.setSource(50792U);
    msg.setSourceEntity(179U);
    msg.setDestination(42128U);
    msg.setDestinationEntity(247U);
    msg.value = 0.8748120604775694;

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
    msg.setTimeStamp(0.8659164356270264);
    msg.setSource(47400U);
    msg.setSourceEntity(91U);
    msg.setDestination(60730U);
    msg.setDestinationEntity(210U);
    msg.value = 0.693880746992126;

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
    msg.setTimeStamp(0.6555424947250466);
    msg.setSource(23137U);
    msg.setSourceEntity(161U);
    msg.setDestination(6324U);
    msg.setDestinationEntity(232U);
    msg.value = 0.9328641125564031;

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
    msg.setTimeStamp(0.22790029760462382);
    msg.setSource(63448U);
    msg.setSourceEntity(6U);
    msg.setDestination(15578U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5352249206415761;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.37855137530368144);
    msg.setSource(50267U);
    msg.setSourceEntity(173U);
    msg.setDestination(1434U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7738291074667883;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.26065015303591377);
    msg.setSource(64129U);
    msg.setSourceEntity(230U);
    msg.setDestination(9822U);
    msg.setDestinationEntity(83U);
    msg.value = 0.3220498646125426;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.40035698170875966);
    msg.setSource(58395U);
    msg.setSourceEntity(207U);
    msg.setDestination(30233U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4654848890077593;
    msg.speed_units = 91U;

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
    msg.setTimeStamp(0.4413179863330785);
    msg.setSource(50503U);
    msg.setSourceEntity(124U);
    msg.setDestination(24052U);
    msg.setDestinationEntity(94U);
    msg.value = 0.6834047951007939;
    msg.speed_units = 171U;

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
    msg.setTimeStamp(0.45278033150113206);
    msg.setSource(30683U);
    msg.setSourceEntity(20U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2991397889815307;
    msg.speed_units = 112U;

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
    msg.setTimeStamp(0.5330092259797042);
    msg.setSource(25048U);
    msg.setSourceEntity(117U);
    msg.setDestination(13489U);
    msg.setDestinationEntity(170U);
    msg.value = 0.00938388227758169;

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
    msg.setTimeStamp(0.8601392033075925);
    msg.setSource(6286U);
    msg.setSourceEntity(108U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9186520545912689;

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
    msg.setTimeStamp(0.3791255706583503);
    msg.setSource(62587U);
    msg.setSourceEntity(96U);
    msg.setDestination(23528U);
    msg.setDestinationEntity(236U);
    msg.value = 0.029659625892286212;

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
    msg.setTimeStamp(0.8265389077483978);
    msg.setSource(53117U);
    msg.setSourceEntity(28U);
    msg.setDestination(29962U);
    msg.setDestinationEntity(234U);
    msg.value = 0.17288295261989095;

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
    msg.setTimeStamp(0.4368700454547423);
    msg.setSource(57758U);
    msg.setSourceEntity(24U);
    msg.setDestination(14729U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9733196956298215;

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
    msg.setTimeStamp(0.28982505347329124);
    msg.setSource(17779U);
    msg.setSourceEntity(1U);
    msg.setDestination(25228U);
    msg.setDestinationEntity(45U);
    msg.value = 0.30194492137040885;

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
    msg.setTimeStamp(0.9353957278537237);
    msg.setSource(28674U);
    msg.setSourceEntity(11U);
    msg.setDestination(36319U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7181386221288171;

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
    msg.setTimeStamp(0.3492606025594944);
    msg.setSource(15031U);
    msg.setSourceEntity(15U);
    msg.setDestination(36873U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4631264481535611;

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
    msg.setTimeStamp(0.6719793053483882);
    msg.setSource(38987U);
    msg.setSourceEntity(188U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(197U);
    msg.value = 0.9515954962011337;

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
    msg.setTimeStamp(0.3674757417357476);
    msg.setSource(63822U);
    msg.setSourceEntity(78U);
    msg.setDestination(36198U);
    msg.setDestinationEntity(42U);
    msg.path_ref = 4207371965U;
    msg.start_lat = 0.8063615189531821;
    msg.start_lon = 0.2807236214291915;
    msg.start_z = 0.08808681116931139;
    msg.start_z_units = 152U;
    msg.end_lat = 0.13130633258598734;
    msg.end_lon = 0.29772821415905826;
    msg.end_z = 0.24001538008983236;
    msg.end_z_units = 123U;
    msg.speed = 0.7634964853252842;
    msg.speed_units = 134U;
    msg.lradius = 0.47612413758238425;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.43851077321771037);
    msg.setSource(43908U);
    msg.setSourceEntity(177U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(100U);
    msg.path_ref = 3015505331U;
    msg.start_lat = 0.824831222306775;
    msg.start_lon = 0.5203021820884278;
    msg.start_z = 0.48831105766015626;
    msg.start_z_units = 150U;
    msg.end_lat = 0.621167098390794;
    msg.end_lon = 0.6400222354898064;
    msg.end_z = 0.20566231879223607;
    msg.end_z_units = 92U;
    msg.speed = 0.6187574142604928;
    msg.speed_units = 14U;
    msg.lradius = 0.5134275079541369;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.27721143730547304);
    msg.setSource(37329U);
    msg.setSourceEntity(54U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 3510553033U;
    msg.start_lat = 0.05209184704057701;
    msg.start_lon = 0.29267007386182087;
    msg.start_z = 0.046342189914106435;
    msg.start_z_units = 219U;
    msg.end_lat = 0.5685968315831387;
    msg.end_lon = 0.04598152967443947;
    msg.end_z = 0.31743397412050145;
    msg.end_z_units = 128U;
    msg.speed = 0.11500208744407037;
    msg.speed_units = 100U;
    msg.lradius = 0.341477887000766;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.8796610174329245);
    msg.setSource(58805U);
    msg.setSourceEntity(60U);
    msg.setDestination(51476U);
    msg.setDestinationEntity(44U);
    msg.x = 0.38022537559297964;
    msg.y = 0.482669707269188;
    msg.z = 0.6718271066295652;
    msg.k = 0.9673391992403088;
    msg.m = 0.12988485084201906;
    msg.n = 0.6712382930269629;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.6946007510843456);
    msg.setSource(53074U);
    msg.setSourceEntity(213U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(54U);
    msg.x = 0.2491584162250583;
    msg.y = 0.3155260767288831;
    msg.z = 0.5032413768442983;
    msg.k = 0.49069528149846176;
    msg.m = 0.3390175141745848;
    msg.n = 0.7413067817190174;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.6824128534744781);
    msg.setSource(24503U);
    msg.setSourceEntity(212U);
    msg.setDestination(26094U);
    msg.setDestinationEntity(166U);
    msg.x = 0.029852319292538287;
    msg.y = 0.6995832776032715;
    msg.z = 0.8178612280493096;
    msg.k = 0.8771425755300217;
    msg.m = 0.19614587642730952;
    msg.n = 0.617616113578518;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.3577321056411692);
    msg.setSource(62274U);
    msg.setSourceEntity(235U);
    msg.setDestination(35523U);
    msg.setDestinationEntity(118U);
    msg.value = 0.25081297516889933;

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
    msg.setTimeStamp(0.9356518989755169);
    msg.setSource(45362U);
    msg.setSourceEntity(67U);
    msg.setDestination(36120U);
    msg.setDestinationEntity(62U);
    msg.value = 0.4567661922603484;

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
    msg.setTimeStamp(0.029184080736174955);
    msg.setSource(20418U);
    msg.setSourceEntity(236U);
    msg.setDestination(34633U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6523451677722755;

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
    msg.setTimeStamp(0.48969208805181197);
    msg.setSource(41072U);
    msg.setSourceEntity(211U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(86U);
    msg.u = 0.7924273720788821;
    msg.v = 0.8471964935927117;
    msg.w = 0.2626231037067924;
    msg.p = 0.7851094041769625;
    msg.q = 0.3427830810039636;
    msg.r = 0.5557902828878369;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.47781670428453493);
    msg.setSource(15836U);
    msg.setSourceEntity(243U);
    msg.setDestination(2581U);
    msg.setDestinationEntity(242U);
    msg.u = 0.09985155251152122;
    msg.v = 0.37545485271112555;
    msg.w = 0.3998241252207003;
    msg.p = 0.42619585667938287;
    msg.q = 0.1625865757468382;
    msg.r = 0.12778622639898962;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.21114090153234044);
    msg.setSource(56090U);
    msg.setSourceEntity(150U);
    msg.setDestination(25299U);
    msg.setDestinationEntity(208U);
    msg.u = 0.4216064882151147;
    msg.v = 0.04033722773798687;
    msg.w = 0.7579004857873056;
    msg.p = 0.15355755037337193;
    msg.q = 0.965460808118783;
    msg.r = 0.9644399496352243;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.7593227313057578);
    msg.setSource(49038U);
    msg.setSourceEntity(51U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 1033657727U;
    msg.start_lat = 0.5606612535966301;
    msg.start_lon = 0.5419357160338044;
    msg.start_z = 0.9534810608312049;
    msg.start_z_units = 114U;
    msg.end_lat = 0.29115890855201576;
    msg.end_lon = 0.9808334412587781;
    msg.end_z = 0.10726208987226726;
    msg.end_z_units = 114U;
    msg.lradius = 0.32510945969278904;
    msg.flags = 220U;
    msg.x = 0.8087916867426882;
    msg.y = 0.31920346771831754;
    msg.z = 0.09244151751766339;
    msg.vx = 0.28173503218761553;
    msg.vy = 0.7862029570745682;
    msg.vz = 0.8099632492116468;
    msg.course_error = 0.21840482484475132;
    msg.eta = 47492U;

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
    msg.setTimeStamp(0.861170402788777);
    msg.setSource(49247U);
    msg.setSourceEntity(236U);
    msg.setDestination(48204U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 37594220U;
    msg.start_lat = 0.595824847822374;
    msg.start_lon = 0.5379265141583864;
    msg.start_z = 0.3127057846744521;
    msg.start_z_units = 43U;
    msg.end_lat = 0.5211924119514577;
    msg.end_lon = 0.12555055751712774;
    msg.end_z = 0.09961701284990665;
    msg.end_z_units = 64U;
    msg.lradius = 0.8598541882616144;
    msg.flags = 71U;
    msg.x = 0.3291836825751142;
    msg.y = 0.4696575516074383;
    msg.z = 0.14006791028089982;
    msg.vx = 0.007485000414579335;
    msg.vy = 0.39130802577944257;
    msg.vz = 0.6269550094953008;
    msg.course_error = 0.9177176613869445;
    msg.eta = 40070U;

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
    msg.setTimeStamp(0.0595632455604842);
    msg.setSource(36711U);
    msg.setSourceEntity(6U);
    msg.setDestination(46140U);
    msg.setDestinationEntity(204U);
    msg.path_ref = 2745029785U;
    msg.start_lat = 0.3972614090040598;
    msg.start_lon = 0.7582112006110447;
    msg.start_z = 0.9420268183701408;
    msg.start_z_units = 112U;
    msg.end_lat = 0.3876605371154298;
    msg.end_lon = 0.3157975290631039;
    msg.end_z = 0.7662174540242245;
    msg.end_z_units = 158U;
    msg.lradius = 0.8228041721915206;
    msg.flags = 219U;
    msg.x = 0.5828372530433612;
    msg.y = 0.6300739425356077;
    msg.z = 0.9808969976996381;
    msg.vx = 0.7378492027521997;
    msg.vy = 0.5251935466288534;
    msg.vz = 0.6187294968703487;
    msg.course_error = 0.8437418975667985;
    msg.eta = 18213U;

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
    msg.setTimeStamp(0.982102767980463);
    msg.setSource(15866U);
    msg.setSourceEntity(16U);
    msg.setDestination(45740U);
    msg.setDestinationEntity(159U);
    msg.k = 0.18910999402899864;
    msg.m = 0.23081138203719342;
    msg.n = 0.13934961501573273;

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
    msg.setTimeStamp(0.2805854621568793);
    msg.setSource(3832U);
    msg.setSourceEntity(180U);
    msg.setDestination(27095U);
    msg.setDestinationEntity(135U);
    msg.k = 0.9823554708750402;
    msg.m = 0.2756996643123344;
    msg.n = 0.13069573982350724;

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
    msg.setTimeStamp(0.8249843364879414);
    msg.setSource(54847U);
    msg.setSourceEntity(198U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(229U);
    msg.k = 0.9234759774381346;
    msg.m = 0.6926896356113116;
    msg.n = 0.023838787339791945;

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
    msg.setTimeStamp(0.008287380711570869);
    msg.setSource(38738U);
    msg.setSourceEntity(26U);
    msg.setDestination(14065U);
    msg.setDestinationEntity(143U);
    msg.p = 0.0461428695724071;
    msg.i = 0.1597803648751378;
    msg.d = 0.463443224414802;
    msg.a = 0.7247322698505679;

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
    msg.setTimeStamp(0.7821039250338903);
    msg.setSource(34849U);
    msg.setSourceEntity(4U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(53U);
    msg.p = 0.49760043430721945;
    msg.i = 0.9649667496269029;
    msg.d = 0.1790738828856535;
    msg.a = 0.6630251934296718;

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
    msg.setTimeStamp(0.49906483199507923);
    msg.setSource(27094U);
    msg.setSourceEntity(247U);
    msg.setDestination(54337U);
    msg.setDestinationEntity(11U);
    msg.p = 0.4043752733406971;
    msg.i = 0.8236919709209763;
    msg.d = 0.7906022689871055;
    msg.a = 0.15630705167842585;

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
    msg.setTimeStamp(0.5471547659605205);
    msg.setSource(43581U);
    msg.setSourceEntity(207U);
    msg.setDestination(4123U);
    msg.setDestinationEntity(114U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.8370421233133737);
    msg.setSource(26814U);
    msg.setSourceEntity(222U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(174U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.14985009051218767);
    msg.setSource(57822U);
    msg.setSourceEntity(48U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(249U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.7715147548896473);
    msg.setSource(16867U);
    msg.setSourceEntity(63U);
    msg.setDestination(2344U);
    msg.setDestinationEntity(143U);
    msg.x = 0.021584743944928042;
    msg.y = 0.8926383099463433;
    msg.z = 0.7713204532619279;
    msg.vx = 0.24471153181347705;
    msg.vy = 0.5939016489709761;
    msg.vz = 0.6089281828529313;
    msg.ax = 0.13978113952489646;
    msg.ay = 0.7289926556719073;
    msg.az = 0.2619805586124275;
    msg.flags = 21418U;

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
    msg.setTimeStamp(0.6269837220300755);
    msg.setSource(33850U);
    msg.setSourceEntity(232U);
    msg.setDestination(57431U);
    msg.setDestinationEntity(78U);
    msg.x = 0.3424289170073588;
    msg.y = 0.8746158966181061;
    msg.z = 0.36378065434574447;
    msg.vx = 0.026761456400153927;
    msg.vy = 0.6829502414924621;
    msg.vz = 0.3244228916840378;
    msg.ax = 0.38801309843751974;
    msg.ay = 0.8002824387637085;
    msg.az = 0.83977861604878;
    msg.flags = 63541U;

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
    msg.setTimeStamp(0.3501343777069059);
    msg.setSource(52620U);
    msg.setSourceEntity(142U);
    msg.setDestination(48673U);
    msg.setDestinationEntity(46U);
    msg.x = 0.1846221427555379;
    msg.y = 0.22254954042961816;
    msg.z = 0.7834051979713795;
    msg.vx = 0.2990596957375399;
    msg.vy = 0.43632185882799523;
    msg.vz = 0.6645346372028037;
    msg.ax = 0.38934585982067893;
    msg.ay = 0.7246185508148462;
    msg.az = 0.7134222221538541;
    msg.flags = 4686U;

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
    msg.setTimeStamp(0.862693286395428);
    msg.setSource(38554U);
    msg.setSourceEntity(232U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(108U);
    msg.value = 0.03321981364445192;

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
    msg.setTimeStamp(0.3656613324153595);
    msg.setSource(64884U);
    msg.setSourceEntity(210U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(103U);
    msg.value = 0.47723916000055633;

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
    msg.setTimeStamp(0.5953790955651064);
    msg.setSource(47391U);
    msg.setSourceEntity(251U);
    msg.setDestination(63190U);
    msg.setDestinationEntity(130U);
    msg.value = 0.667678620642128;

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
    msg.setTimeStamp(0.7857340015282526);
    msg.setSource(3592U);
    msg.setSourceEntity(245U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(69U);
    msg.timeout = 3938U;
    msg.lat = 0.17665111276292278;
    msg.lon = 0.33251313588026676;
    msg.z = 0.31791106288447013;
    msg.z_units = 204U;
    msg.speed = 0.4094600013211337;
    msg.speed_units = 22U;
    msg.roll = 0.6416928790020286;
    msg.pitch = 0.025640404014137252;
    msg.yaw = 0.5503046658932229;
    msg.custom.assign("BLAHSDCVDPIYQNEEFXAJLBTUAPSPHNEAKPXASOGEMAHDWZDPVLMLGCVEGZCHOFVTQLJFYNFWIXRCBTDVXMHBBBIRMMGQUDNRMIMURRGLCORALYQDUNZTUGHYSVZPHXLWRJNXCZSIFWNKTKZNOCKPGWSEJFOAFLYVTKAEKU");

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
    msg.setTimeStamp(0.7111110589946176);
    msg.setSource(11232U);
    msg.setSourceEntity(75U);
    msg.setDestination(5483U);
    msg.setDestinationEntity(202U);
    msg.timeout = 59473U;
    msg.lat = 0.32643579135100664;
    msg.lon = 0.5170019483420547;
    msg.z = 0.6575660808819616;
    msg.z_units = 163U;
    msg.speed = 0.9504726788721265;
    msg.speed_units = 101U;
    msg.roll = 0.8960549008665879;
    msg.pitch = 0.7984809819830351;
    msg.yaw = 0.6985341276921593;
    msg.custom.assign("QULHXXNLSIYAPDMTDVEGTDIMNALJSAHSQAHROMKTTXTLRJLBGLKVLVQETAPPTEKCHHGRMDSOIQYFATBFGCHYKSFVUOBRETYEJQEGVPWIDRZXQABKNYNMJUGKKCWVNFZSPBZQVPARMZFGEECPTJVCWUJVWCZMXXJPLCYNNCM");

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
    msg.setTimeStamp(0.6807741364448571);
    msg.setSource(64792U);
    msg.setSourceEntity(91U);
    msg.setDestination(17573U);
    msg.setDestinationEntity(248U);
    msg.timeout = 46305U;
    msg.lat = 0.5406586956554036;
    msg.lon = 0.9250301465119902;
    msg.z = 0.30287508832346266;
    msg.z_units = 174U;
    msg.speed = 0.12627877480765737;
    msg.speed_units = 67U;
    msg.roll = 0.3735692476280551;
    msg.pitch = 0.5339621343060248;
    msg.yaw = 0.5600627435895054;
    msg.custom.assign("OVKGNJZABYKISVZJDTUMIUFMBSYCAGKJFJBJNXQCXXLGLTOKPZBDRYRXVSZCJRKDDUSTCTHWVMKEEGUDOUXYRVCWWPICMRUQWNHVFGNSOLGLFQCXURAPFSVYV");

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
    msg.setTimeStamp(0.9026298310850797);
    msg.setSource(32267U);
    msg.setSourceEntity(78U);
    msg.setDestination(11014U);
    msg.setDestinationEntity(170U);
    msg.timeout = 17826U;
    msg.lat = 0.39873913093655666;
    msg.lon = 0.6011822682409937;
    msg.z = 0.051654321572541684;
    msg.z_units = 165U;
    msg.speed = 0.8774866980217252;
    msg.speed_units = 17U;
    msg.duration = 52774U;
    msg.radius = 0.951655648885628;
    msg.flags = 91U;
    msg.custom.assign("KQEYRZLLMCSIHPNNYPAYFGTJYBFLSZTNUDPGBJFZMLCYAIPJULQRNLEAQDTVHETLXJWKCVWGDFUFHPKPM");

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
    msg.setTimeStamp(0.32328490416182465);
    msg.setSource(36359U);
    msg.setSourceEntity(93U);
    msg.setDestination(28304U);
    msg.setDestinationEntity(167U);
    msg.timeout = 55936U;
    msg.lat = 0.42858654975053845;
    msg.lon = 0.03685791080404066;
    msg.z = 0.567754217124424;
    msg.z_units = 154U;
    msg.speed = 0.3319298705007059;
    msg.speed_units = 107U;
    msg.duration = 11908U;
    msg.radius = 0.09038269283261091;
    msg.flags = 37U;
    msg.custom.assign("NMXZOKQZPMOBHIPDDTCSBCUZXIVOHGDBUAHZUMOCFIENLVECGJPRQCUUUDGHAJHECKQDIQDRZEOJDYSEBSKMKXIGYBLLDNYEHVWTDMVASEIOVFOAVYMEIAVFQWMRYNNNLHUQUWSSMJZPLBZRALSKLTKTDCJNWWVAOOPCLWZX");

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
    msg.setTimeStamp(0.5758705885987578);
    msg.setSource(9259U);
    msg.setSourceEntity(49U);
    msg.setDestination(25889U);
    msg.setDestinationEntity(199U);
    msg.timeout = 28030U;
    msg.lat = 0.21445262885858474;
    msg.lon = 0.23261586462849737;
    msg.z = 0.001924055845808459;
    msg.z_units = 161U;
    msg.speed = 0.4287987509144252;
    msg.speed_units = 247U;
    msg.duration = 9233U;
    msg.radius = 0.61843195657863;
    msg.flags = 198U;
    msg.custom.assign("UDFIWNJCEFHDRZLEMYXRWVFUIAKMDDNKIFVIEGQNQRTCSOTHPMCTETUKWKSRZLMHADWOJJYYZDNAXABICFAONZLTEMQVBONHELPKOQRRXGXXBPBPSTDFMFCSTHFIWIKXUKVXAADPTQLGHNFMJZSJKDMBUIVKGTRHBWGYPSCXLVGIZEPPXAKOOWRSYEGLH");

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
    msg.setTimeStamp(0.7024638428019213);
    msg.setSource(6334U);
    msg.setSourceEntity(147U);
    msg.setDestination(27783U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("SJTPIRMRXROHYVQTEW");

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
    msg.setTimeStamp(0.4795505028390984);
    msg.setSource(12645U);
    msg.setSourceEntity(138U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(117U);
    msg.custom.assign("RQAYLOVJKXDITERAAFYDWHKLNVCQATXBJQKHTBERCRNUEXRLYAGSLTVAAVPCGP");

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
    msg.setTimeStamp(0.13168457941502454);
    msg.setSource(32121U);
    msg.setSourceEntity(90U);
    msg.setDestination(10296U);
    msg.setDestinationEntity(214U);
    msg.custom.assign("VBICSFKZYFSXTKADGIWFTMCAUPUJBMWZZQLOHJQGASRKYTWYQHPTUGDUSUPJVNAYHZYUWBMCXFLORVMJTDADEXVZZXKQZGCDDBBOOWOLNYPFHGHWSVBJENKMMLOIPQNLWXPTLSAJQDNOBRIPFAGRASJKSQHGFYWIBXLPCXEXQCKYWPVMFEVBJSTDD");

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
    msg.setTimeStamp(0.980540764533209);
    msg.setSource(19317U);
    msg.setSourceEntity(195U);
    msg.setDestination(33534U);
    msg.setDestinationEntity(74U);
    msg.timeout = 53995U;
    msg.lat = 0.5646361536819211;
    msg.lon = 0.6747783152365527;
    msg.z = 0.5393845009270879;
    msg.z_units = 121U;
    msg.duration = 12912U;
    msg.speed = 0.20161538205175122;
    msg.speed_units = 35U;
    msg.type = 205U;
    msg.radius = 0.8071031612083194;
    msg.length = 0.7160424133523333;
    msg.bearing = 0.34838295278240516;
    msg.direction = 143U;
    msg.custom.assign("VRNIFGGMMCIAXBJXGWDZNOTBESGPSJQZASLPBMKATDJGUFEZUTZQQPQYKBUJQSGOVYCBDPULKXXDVPLBWTYOPLPTJJKVCWROQMIKIHQLURZXDBFHTRCAEFA");

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
    msg.setTimeStamp(0.598242409623103);
    msg.setSource(46132U);
    msg.setSourceEntity(37U);
    msg.setDestination(63935U);
    msg.setDestinationEntity(69U);
    msg.timeout = 49114U;
    msg.lat = 0.9728534174888637;
    msg.lon = 0.6938237858764962;
    msg.z = 0.07861699525007071;
    msg.z_units = 90U;
    msg.duration = 52795U;
    msg.speed = 0.2327967674667426;
    msg.speed_units = 48U;
    msg.type = 17U;
    msg.radius = 0.5954714128875173;
    msg.length = 0.018195807157076582;
    msg.bearing = 0.5907407132121147;
    msg.direction = 244U;
    msg.custom.assign("ZDRGBCMJGVGOHUOEKGEGDEVLQNRMOPIOLFBVUFNPCQMZRWLXWKWKBYLTLGFKLIATSBRXQRCJQQUUFAQPGYDASPTTJTFNYWCSUINSOYQSYCDKTAEMFMNIVJGIJPXEZOCLKTSYDZFYZMTRJMBHRZNHBYVZHEUZX");

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
    msg.setTimeStamp(0.3134077856361771);
    msg.setSource(24290U);
    msg.setSourceEntity(192U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(68U);
    msg.timeout = 47055U;
    msg.lat = 0.9366159224191767;
    msg.lon = 0.6489845014008756;
    msg.z = 0.9805995855406777;
    msg.z_units = 164U;
    msg.duration = 48768U;
    msg.speed = 0.461033967940098;
    msg.speed_units = 146U;
    msg.type = 31U;
    msg.radius = 0.9417357777353784;
    msg.length = 0.7153972809710449;
    msg.bearing = 0.37387405280032426;
    msg.direction = 40U;
    msg.custom.assign("KZHZHTCXDGVQDWARFNUQSEYQOHKKTSPJCLMSLYAAHIWUFJKBQYNFJFBWXAJIDYYCTNDTTCLZIGTOQVZLXBG");

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
    msg.setTimeStamp(0.9262848133555983);
    msg.setSource(14365U);
    msg.setSourceEntity(161U);
    msg.setDestination(18800U);
    msg.setDestinationEntity(234U);
    msg.duration = 54548U;
    msg.custom.assign("ZPLQIRUASBESVYBELGZDQCWWIUE");

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
    msg.setTimeStamp(0.7474250058190808);
    msg.setSource(26623U);
    msg.setSourceEntity(118U);
    msg.setDestination(22198U);
    msg.setDestinationEntity(246U);
    msg.duration = 26252U;
    msg.custom.assign("UXSYGOZNEMIGNURBMDFOTXZCNRYIWWBVHAGYSYUDGAILZADIDCCHVDDHCQXLIFPQJVREPGQMPJZVXRQUAFSOMTLGSHZCEFSWTPHOLKBPVWKTNBKUANNGEGTLWAWSTPJPPEARHCIBWYMPTLOYVKNBVKEUIRQZUJSECKRYHOFJRZZRPMOKDARLBXBQJMEGOGYMTQJNZVKYCVKWUUJCTQQFHOIXOIXXIFNABTSHELVFCYMDEJLUZSHKBDSJ");

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
    msg.setTimeStamp(0.6717627831858901);
    msg.setSource(42691U);
    msg.setSourceEntity(253U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(38U);
    msg.duration = 48843U;
    msg.custom.assign("CDFPCOAAGJDUMBVDBSWNNLAOXRWFFLWVEUBHDSIQWRLJQSNOODYCJHTCPXZKMKCWLHUGZBQZNLVGDJKAIQXAFKAXZZSH");

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
    msg.setTimeStamp(0.547358563246996);
    msg.setSource(36676U);
    msg.setSourceEntity(22U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(60U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6667873543291131;
    msg.control.set(tmp_msg_0);
    msg.duration = 61092U;
    msg.custom.assign("BDIGFRHOMLICWWVANJAVEWZESFMPZJAHCMQUGPNDOPNHBTXDTKYQGYJJKKNUUOWVSLHMKDPATNOPIMLXJKTCBXVAUHZBNIGQUCESTHHBPEAWLJEXLBFPGCYSFUQWK");

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
    msg.setTimeStamp(0.46178325749573834);
    msg.setSource(11091U);
    msg.setSourceEntity(112U);
    msg.setDestination(17982U);
    msg.setDestinationEntity(7U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1424003489U;
    tmp_msg_0.start_lat = 0.10616583906560162;
    tmp_msg_0.start_lon = 0.58920760490119;
    tmp_msg_0.start_z = 0.31825383144355557;
    tmp_msg_0.start_z_units = 79U;
    tmp_msg_0.end_lat = 0.522222260150305;
    tmp_msg_0.end_lon = 0.5270411117687285;
    tmp_msg_0.end_z = 0.5364677282212604;
    tmp_msg_0.end_z_units = 141U;
    tmp_msg_0.speed = 0.9301908679960362;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.lradius = 0.9637190067450236;
    tmp_msg_0.flags = 55U;
    msg.control.set(tmp_msg_0);
    msg.duration = 41971U;
    msg.custom.assign("TYPMYNSDSJEIEABWGCXJPRCGHKPSWFPEYTFRWNUHVCHSWCOTTONKDDIRQA");

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
    msg.setTimeStamp(0.8985411916883858);
    msg.setSource(36354U);
    msg.setSourceEntity(152U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(145U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1596162820U;
    tmp_msg_0.start_lat = 0.9413498013571425;
    tmp_msg_0.start_lon = 0.7927780775993885;
    tmp_msg_0.start_z = 0.9798198149434867;
    tmp_msg_0.start_z_units = 26U;
    tmp_msg_0.end_lat = 0.4402100888833339;
    tmp_msg_0.end_lon = 0.741013730181873;
    tmp_msg_0.end_z = 0.9080191399225118;
    tmp_msg_0.end_z_units = 55U;
    tmp_msg_0.speed = 0.39975019358600516;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.lradius = 0.6365319559630319;
    tmp_msg_0.flags = 161U;
    msg.control.set(tmp_msg_0);
    msg.duration = 36212U;
    msg.custom.assign("FLFCTHWCLCSPAKKBVX");

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
    msg.setTimeStamp(0.4060205010025486);
    msg.setSource(28982U);
    msg.setSourceEntity(193U);
    msg.setDestination(19332U);
    msg.setDestinationEntity(214U);
    msg.timeout = 1117U;
    msg.lat = 0.47651396637112575;
    msg.lon = 0.6393818696786221;
    msg.z = 0.004545219030541725;
    msg.z_units = 74U;
    msg.speed = 0.9098483539618792;
    msg.speed_units = 151U;
    msg.bearing = 0.8669181493278492;
    msg.cross_angle = 0.4436080657605982;
    msg.width = 0.565873728660936;
    msg.length = 0.46741485951264317;
    msg.hstep = 0.41917315812879896;
    msg.coff = 8U;
    msg.alternation = 207U;
    msg.flags = 54U;
    msg.custom.assign("RQQWBIYHIHKPFTWCCMQJACKZAUGRMCIJARVFMHOYMOVFWVWRKNFRTESVACEWGKEEDJDOPMZDLGDPEOMH");

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
    msg.setTimeStamp(0.0366753825263616);
    msg.setSource(59644U);
    msg.setSourceEntity(184U);
    msg.setDestination(9802U);
    msg.setDestinationEntity(181U);
    msg.timeout = 53981U;
    msg.lat = 0.013364064901407291;
    msg.lon = 0.8010817947000352;
    msg.z = 0.2444363922492555;
    msg.z_units = 201U;
    msg.speed = 0.755829697294541;
    msg.speed_units = 130U;
    msg.bearing = 0.8753413760718346;
    msg.cross_angle = 0.2497121113203309;
    msg.width = 0.8032212208463094;
    msg.length = 0.7956789704102274;
    msg.hstep = 0.8266183356268563;
    msg.coff = 76U;
    msg.alternation = 216U;
    msg.flags = 143U;
    msg.custom.assign("KWERCQZVSTVERHQWCXUZAMCVWICXO");

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
    msg.setTimeStamp(0.566013736533794);
    msg.setSource(11986U);
    msg.setSourceEntity(131U);
    msg.setDestination(16793U);
    msg.setDestinationEntity(106U);
    msg.timeout = 64285U;
    msg.lat = 0.5425638300373082;
    msg.lon = 0.2866775694598158;
    msg.z = 0.13818232320499724;
    msg.z_units = 33U;
    msg.speed = 0.0342789141880675;
    msg.speed_units = 66U;
    msg.bearing = 0.24694248113595552;
    msg.cross_angle = 0.9495257157195188;
    msg.width = 0.31768968781539175;
    msg.length = 0.33369044627501476;
    msg.hstep = 0.4499107022194657;
    msg.coff = 107U;
    msg.alternation = 113U;
    msg.flags = 39U;
    msg.custom.assign("MOJEBVVKAWKJLZCAWMNXDOJTFTRKLTDKLYYETDXYDOHOVUYERFBJDSDVTPJOILYKWBJQGCMMIVBYOKQMPFRVFAFNEZVLRKBGOSRESABCRCMFQZIP");

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
    msg.setTimeStamp(0.19025551415132802);
    msg.setSource(10513U);
    msg.setSourceEntity(125U);
    msg.setDestination(53170U);
    msg.setDestinationEntity(232U);
    msg.timeout = 16464U;
    msg.lat = 0.6569910669730333;
    msg.lon = 0.13155484818187413;
    msg.z = 0.08533903766531792;
    msg.z_units = 192U;
    msg.speed = 0.4347840829150742;
    msg.speed_units = 18U;
    msg.custom.assign("IDRHVUKALUVCAHVOKUIMSGUENWFQBLDLVRSRPMTHBNWNOBNWHECNHYCIDWYKKSXAXPVZZHJUQSAWBDGMOYEETHGIJZAKFCXYGKLWQATKJVGTWYXC");

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
    msg.setTimeStamp(0.026215522834138638);
    msg.setSource(52642U);
    msg.setSourceEntity(35U);
    msg.setDestination(27269U);
    msg.setDestinationEntity(62U);
    msg.timeout = 21857U;
    msg.lat = 0.8046716198145569;
    msg.lon = 0.8307032867228092;
    msg.z = 0.7236933548715689;
    msg.z_units = 34U;
    msg.speed = 0.652612527802648;
    msg.speed_units = 119U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.27850579061393577;
    tmp_msg_0.y = 0.21755995599373368;
    tmp_msg_0.z = 0.05759501934749689;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QUDWAQLITJXBCMYRVBYLB");

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
    msg.setTimeStamp(0.829463689162164);
    msg.setSource(33784U);
    msg.setSourceEntity(142U);
    msg.setDestination(21987U);
    msg.setDestinationEntity(166U);
    msg.timeout = 60341U;
    msg.lat = 0.6932843793276937;
    msg.lon = 0.5244260724156354;
    msg.z = 0.7199532047529469;
    msg.z_units = 196U;
    msg.speed = 0.9617808364411122;
    msg.speed_units = 114U;
    msg.custom.assign("YWLNQEAVZWCYXSCHKBTFERZVKGLLXQSVVVZWZWFIHHRNIERTWZEUROQCA");

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
    msg.setTimeStamp(0.20424899188156986);
    msg.setSource(3696U);
    msg.setSourceEntity(226U);
    msg.setDestination(57301U);
    msg.setDestinationEntity(71U);
    msg.x = 0.23837351327978917;
    msg.y = 0.7585321539507965;
    msg.z = 0.20912748594868902;

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
    msg.setTimeStamp(0.7615230595394988);
    msg.setSource(31293U);
    msg.setSourceEntity(213U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(153U);
    msg.x = 0.4985027558318662;
    msg.y = 0.5362679092160245;
    msg.z = 0.04883588731616306;

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
    msg.setTimeStamp(0.35605403750662856);
    msg.setSource(35773U);
    msg.setSourceEntity(86U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(42U);
    msg.x = 0.9166119015588492;
    msg.y = 0.5151548568404265;
    msg.z = 0.2150445098184096;

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
    msg.setTimeStamp(0.9155598921397139);
    msg.setSource(35964U);
    msg.setSourceEntity(205U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(245U);
    msg.timeout = 13289U;
    msg.lat = 0.058972541391705935;
    msg.lon = 0.7340388699576744;
    msg.z = 0.13120438902068265;
    msg.z_units = 153U;
    msg.amplitude = 0.9433486102838744;
    msg.pitch = 0.9437094843373127;
    msg.speed = 0.17369533812445037;
    msg.speed_units = 150U;
    msg.custom.assign("OERTCDKVSKVZPLJOSKWCXFHCEXVDIOACMDRVRXSQUUMNWAMDBRCCFQY");

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
    msg.setTimeStamp(0.111987167775222);
    msg.setSource(28496U);
    msg.setSourceEntity(16U);
    msg.setDestination(16032U);
    msg.setDestinationEntity(100U);
    msg.timeout = 60315U;
    msg.lat = 0.5639158938513565;
    msg.lon = 0.06834670402634424;
    msg.z = 0.7972506164887443;
    msg.z_units = 184U;
    msg.amplitude = 0.7871680875212566;
    msg.pitch = 0.3631910172459729;
    msg.speed = 0.6501946275022986;
    msg.speed_units = 225U;
    msg.custom.assign("AWUGGJRXELAJWXEJJDCKJOKDJYNGNWTKLDECLQXONPNMJQTBXSYBWBSQVRZAIGPYMCTAMFPHKHOIECPFNBITDFXBRVNFYLVIXNMKNATOXXHKPYCFY");

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
    msg.setTimeStamp(0.4074127347449529);
    msg.setSource(6615U);
    msg.setSourceEntity(204U);
    msg.setDestination(23608U);
    msg.setDestinationEntity(136U);
    msg.timeout = 59305U;
    msg.lat = 0.5777118115741962;
    msg.lon = 0.5867052190473595;
    msg.z = 0.3701321935239351;
    msg.z_units = 51U;
    msg.amplitude = 0.23434116370671543;
    msg.pitch = 0.10312216228913762;
    msg.speed = 0.4987258186770719;
    msg.speed_units = 125U;
    msg.custom.assign("ICPOQCNVEIIISCTUKRFGBTJEGUUWOQAPIRNSMADZRCHXFPPWQMIAKOGZOCRWSCMYYMQHIGFVKVLLXDXHUBAZVSXWTMPGMCWINUDXLYDUCXKRYWBZQXKVSUQPHEJJRLTBGSLQSBEBKMEOKJJUNMJPRSD");

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
    msg.setTimeStamp(0.9840196404946363);
    msg.setSource(8705U);
    msg.setSourceEntity(88U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.94693377440689);
    msg.setSource(61226U);
    msg.setSourceEntity(165U);
    msg.setDestination(38130U);
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
    msg.setTimeStamp(0.4308164860324811);
    msg.setSource(10859U);
    msg.setSourceEntity(140U);
    msg.setDestination(9183U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.2361289814512222);
    msg.setSource(24866U);
    msg.setSourceEntity(214U);
    msg.setDestination(56179U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.5591122129426488;
    msg.lon = 0.39833981268884144;
    msg.z = 0.788775725499153;
    msg.z_units = 232U;
    msg.radius = 0.8204315412526433;
    msg.duration = 50761U;
    msg.speed = 0.920424565258644;
    msg.speed_units = 35U;
    msg.custom.assign("GUXXOLEMYHJDUTWEPOHBZARAYFXHZDONVEQRURNICWWFQCSGUTVYAICIPOBEUQLGZNVALTKEBJJBMDVTVTSKJKKMYXDCUAOYWEUFISFGZTIGQIHALRECEIMTSLGORPAYGCNGFCQYFPMOFZXIWNEIFTRHKVPSMXKRLTVGJECDRDQFOWKJAVMZDMZYJVRLKMQSWNCJZIXPZBNQHLHBMOBFTQASVDBSYNPZPLXPUXSHDYPSORNUWJQHHWWCUBAGK");

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
    msg.setTimeStamp(0.2818915018811695);
    msg.setSource(60133U);
    msg.setSourceEntity(79U);
    msg.setDestination(37612U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.5943219785223953;
    msg.lon = 0.5736221271602424;
    msg.z = 0.3502518038023218;
    msg.z_units = 245U;
    msg.radius = 0.012084250281726994;
    msg.duration = 44291U;
    msg.speed = 0.04884116116261095;
    msg.speed_units = 2U;
    msg.custom.assign("POFIEHUFFVOXRWFATGBXTRODZXKFENFHMYZRBBSIZAHCUFMZOXAJHEMJKTVXNYGGZPEWXHICPTCQUKQAUHHHQEZVPLYCOZBTLVEQJSQTLRSDBRXCOMONTIYLVRLNMPOAIULHWVJTKIFYGVJETLSPMWYBSYUINIBGQNCQIMCXGNSRUBCAJPLLFVWRSPVDZ");

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
    msg.setTimeStamp(0.5391341871377567);
    msg.setSource(47247U);
    msg.setSourceEntity(214U);
    msg.setDestination(64716U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.351698679349732;
    msg.lon = 0.3668384389472422;
    msg.z = 0.6578673459935744;
    msg.z_units = 87U;
    msg.radius = 0.661851047768019;
    msg.duration = 53696U;
    msg.speed = 0.8783312316216573;
    msg.speed_units = 102U;
    msg.custom.assign("PWVEFXFGPYEUBSKUGFTEVAXOJRPNGTHQVEKWWTWDFUOYQSHYQYRRJJIXEEDLVKUDNSUBNRVOHMFGGQTJFXCQCRXYKVOEKHCBQERLCAONKUGQZMIGFKLBIMHYHZPTMJLEBBZIUDOATSTWTMPASIAULWBCVCGCTLALGPJIUJIAVSAAPYQKZLFKWVXJHYTZDOQHMCJUPOXHZMDFOQNXDDRMJSLWAZF");

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
    msg.setTimeStamp(0.4533952688502195);
    msg.setSource(9115U);
    msg.setSourceEntity(207U);
    msg.setDestination(60788U);
    msg.setDestinationEntity(128U);
    msg.timeout = 28010U;
    msg.flags = 25U;
    msg.lat = 0.6229825488219122;
    msg.lon = 0.2746701115976665;
    msg.start_z = 0.8064861523395173;
    msg.start_z_units = 240U;
    msg.end_z = 0.3364918589426049;
    msg.end_z_units = 160U;
    msg.radius = 0.25771689426494204;
    msg.speed = 0.7144664635642065;
    msg.speed_units = 164U;
    msg.custom.assign("EFHMCDINWOOVJYOBCPJAENMTVTGIQSFEPZWBLMKIQOZRIQOYQGBJUDMELAXZDRYDFIVQSDSMBUNKDTTQCA");

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
    msg.setTimeStamp(0.21253758434483927);
    msg.setSource(24778U);
    msg.setSourceEntity(10U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(24U);
    msg.timeout = 1190U;
    msg.flags = 141U;
    msg.lat = 0.8978367579739911;
    msg.lon = 0.15568082794591354;
    msg.start_z = 0.08552098592093549;
    msg.start_z_units = 191U;
    msg.end_z = 0.6677910037849107;
    msg.end_z_units = 26U;
    msg.radius = 0.7894834664757284;
    msg.speed = 0.42661571982994584;
    msg.speed_units = 118U;
    msg.custom.assign("JZTRHBLYXQZSRPKCDOKMZTGDYOXVXQSVXGFBXPIFTRMZOCTQJYEXERGANFTDVQXDSBNUIWLCBGPNALBLERWEPUNCQROFFEFVWRBVWLUFDIRPMSVSKJLHUOYIKGUUPZZXWIEDQCPCJWIJGAIISYPHSKYTYCRNAAHFKFGKQQUONJAGWTMJCZVOFLALDMNBSYMPWZSDNWHHKKMXBAHALBQVHUMVLXUGTEMATVEZHDJMICSONOOTUJK");

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
    msg.setTimeStamp(0.45254998324352635);
    msg.setSource(32390U);
    msg.setSourceEntity(203U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(119U);
    msg.timeout = 44585U;
    msg.flags = 232U;
    msg.lat = 0.35183083741465926;
    msg.lon = 0.6619712538384357;
    msg.start_z = 0.7770617511064541;
    msg.start_z_units = 32U;
    msg.end_z = 0.6402182844141235;
    msg.end_z_units = 209U;
    msg.radius = 0.7197448567455214;
    msg.speed = 0.8237360123588228;
    msg.speed_units = 102U;
    msg.custom.assign("NDIBKOFOQTOOAXVRVZDGKFIYNCELSLVPMQKTBXSWJGHPATLYSCMAZHEPNZBGUQZRWUVKSKPADMJCJXNZIVJAZBEHURUNGZRWTHDOTQXZCTQSGDVIMYMZFLCUUNYTXSQJBLQPKNAYEPGFHBPIOVWKWHHAHXEFOCWLYQRBYUDJDDECAQWZUGCGULWIFIXITMBOSTKWLJAPQUTMMJRXSBFLMFHRIRXFSCEEWNHKVXBLEYVMFGR");

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
    msg.setTimeStamp(0.5032718522085478);
    msg.setSource(547U);
    msg.setSourceEntity(12U);
    msg.setDestination(22090U);
    msg.setDestinationEntity(184U);
    msg.timeout = 7939U;
    msg.lat = 0.8289907815487343;
    msg.lon = 0.2596671727564668;
    msg.z = 0.8237689046910177;
    msg.z_units = 243U;
    msg.speed = 0.5971925275292629;
    msg.speed_units = 108U;
    msg.custom.assign("EPYOZGUYQRJKDUHEAGZVNSIJBBOLNHABP");

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
    msg.setTimeStamp(0.7987042290770437);
    msg.setSource(61580U);
    msg.setSourceEntity(239U);
    msg.setDestination(28879U);
    msg.setDestinationEntity(176U);
    msg.timeout = 45919U;
    msg.lat = 0.6756383921642047;
    msg.lon = 0.04548526743432535;
    msg.z = 0.19049445393041942;
    msg.z_units = 14U;
    msg.speed = 0.06817812863684924;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4275523113600924;
    tmp_msg_0.y = 0.8215477228310832;
    tmp_msg_0.z = 0.20469448819102865;
    tmp_msg_0.t = 0.9193240828460756;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LJFQNKIYJPKESZDXOIGCOSAFZJAVEMPMZCQHUQQPIWLVLJVPQHYMQNUQEWCMHKXORCTKOQUFUVUNGFCKJBBIAUPDWSGILEFCRMJBXUZKXNZWALUITBBNBWUBRTYGNZVKVTHNTONRHZEXPKCDGGFJTNPTAQHYLHMLWEJEEXRLFXCWGDROWDCURIRYGHYGYEHMKDBDAXVXCVIOWRLVPKSZ");

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
    msg.setTimeStamp(0.2684211480759182);
    msg.setSource(51804U);
    msg.setSourceEntity(20U);
    msg.setDestination(42479U);
    msg.setDestinationEntity(78U);
    msg.timeout = 24435U;
    msg.lat = 0.34635960175681324;
    msg.lon = 0.13923716251938234;
    msg.z = 0.36309786479278505;
    msg.z_units = 118U;
    msg.speed = 0.6115044308783694;
    msg.speed_units = 98U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2932843155089022;
    tmp_msg_0.y = 0.45108997732155065;
    tmp_msg_0.z = 0.29360691266436667;
    tmp_msg_0.t = 0.1534136308975338;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBCFQSFVTYTIESJAGRHUIPYLPGLFCNVWDSCURFTVJYJGWCMJQCPHJEQGGTBSACJNHMAWNKSZPKPEALQEPDCUMXFUYSXUGTHMOWPGBPTZWWOALFKXBEYDUMOOHXKKOYFZQXIARUDJYNNLAHRZTIHBAFEMLEIHPZZADXMQSWVNHDRXVZUDCEXQ");

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
    msg.setTimeStamp(0.058356064667328233);
    msg.setSource(54120U);
    msg.setSourceEntity(207U);
    msg.setDestination(64753U);
    msg.setDestinationEntity(158U);
    msg.x = 0.7892204033398238;
    msg.y = 0.6368205186897751;
    msg.z = 0.4588448230248666;
    msg.t = 0.06406757464651891;

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
    msg.setTimeStamp(0.5061521423470366);
    msg.setSource(5385U);
    msg.setSourceEntity(88U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(185U);
    msg.x = 0.1821496185719773;
    msg.y = 0.49185478206325484;
    msg.z = 0.17278604749534177;
    msg.t = 0.8226326190543175;

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
    msg.setTimeStamp(0.17546867503712305);
    msg.setSource(53851U);
    msg.setSourceEntity(165U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(182U);
    msg.x = 0.2045105824320329;
    msg.y = 0.5043513284098536;
    msg.z = 0.9437687707216245;
    msg.t = 0.3086849767083083;

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
    msg.setTimeStamp(0.9928206000447166);
    msg.setSource(8296U);
    msg.setSourceEntity(180U);
    msg.setDestination(2006U);
    msg.setDestinationEntity(221U);
    msg.timeout = 56644U;
    msg.name.assign("GKWLOTILSQROFACZEJLUUKYYFUJSYXYXYAGJZKZVHR");
    msg.custom.assign("YCNCZDVBXREJPRJCBRQACPTKGFYEZMHNZOQSCYNVTBRDXEHOBNYTMETWHODXLDCSJAUGACYOSZWGIUGEAJIBKKHVRWMTPGXUGNXMKOIZZWFQJHNZSEEMLQRLIUDWLOFWAFILRKKXHQYOHHXLGCEPQVLBH");

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
    msg.setTimeStamp(0.4662311856891478);
    msg.setSource(25122U);
    msg.setSourceEntity(39U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(29U);
    msg.timeout = 21178U;
    msg.name.assign("FYJSFPVFKJERGYYSOQDQZAMPINPPRVLXOEPPJYMOMMHJCHHFJBGTZOWGCKBVVSKPEUDDRXJANWSVIXFLYTYXVNQMUPGXJBIQDGKCCILMBROEQKKMZNAPVBBGZSLMWDZQTNCCDNNZBOWIGKYRUTWLPTEGOLXCVJTSMQQZIGUCXZRNDARFLAVEDUUWAQRAF");
    msg.custom.assign("LMOYQEXXGROMFYHIHJAWTTPBPGHNDNMUSWTXJQWEASDQWGCVKRRULPPVTLZZLHZSJOCR");

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
    msg.setTimeStamp(0.7497440258607796);
    msg.setSource(48983U);
    msg.setSourceEntity(71U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(250U);
    msg.timeout = 23943U;
    msg.name.assign("EWVFHDQHQBGLYRRLLZNGFMDWCSMXFTOHFIFMTMAJQNAWDZWFPRKSNDYWJVLTMKCPCTAMAUERDSUBIZVZYPVZOCCGQJQKYYCVUGQCOHEDIWPUSVVUWEYXVGBYPBSYGSJLAHKAJMXWFGUJOXPZIDOKEYAKTQCKHLDJRJNEDNINIIUO");
    msg.custom.assign("IHUCSAKSFCLXPRUHJFQNZDAFAZUCN");

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
    msg.setTimeStamp(0.4622654274504403);
    msg.setSource(22240U);
    msg.setSourceEntity(230U);
    msg.setDestination(62517U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.783756391563303;
    msg.lon = 0.7913065199642408;
    msg.z = 0.2047462966810092;
    msg.z_units = 22U;
    msg.speed = 0.4359173130376245;
    msg.speed_units = 144U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.054680178129415835;
    tmp_msg_0.y = 0.29239440814773776;
    tmp_msg_0.z = 0.37544824620009654;
    tmp_msg_0.t = 0.11486168800840824;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 41121U;
    tmp_msg_1.off_x = 0.13575372236683714;
    tmp_msg_1.off_y = 0.9410296639740844;
    tmp_msg_1.off_z = 0.700768562880135;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5291507863500495;
    msg.custom.assign("FGFAGHRRZSDJYNCXWITVJQAWNKAYVEUOLXQRRVXJSMOYAAHAACILQPXASEKFAZKEYKIXUPDEZPUYDBDFMUTOTXNIGWSPSAOXYELNIWOQHLHOWRMBFZUXYEOHTWPNGQIUGNEEOCLLJEVHYVRPGOIVMFTUNQUJBUKYSKPZEBQMTSDWLWZOWCJDCDCWCCBKNHBMTLTDZJIGSICGLRXPFVMHZXMDSKKUFNZM");

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
    msg.setTimeStamp(0.6554608770430996);
    msg.setSource(61739U);
    msg.setSourceEntity(117U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.7261109495522101;
    msg.lon = 0.8761700854020328;
    msg.z = 0.1236401515475184;
    msg.z_units = 164U;
    msg.speed = 0.7143777659524237;
    msg.speed_units = 228U;
    msg.start_time = 0.513936519022122;
    msg.custom.assign("LLHTNKOXECJNTINEEULHYEXBIRUHZZUQWEBOSJRJGZEFVYSDQKHDUYDFRGXTRWKPUOCNRUPMVFLTITHKOJGWVHKPDAFGJMWAHMQKYZMCILRORIBLXAZPSASJXNYEVIYCWPNOBRQVJFWMTYAUKJVLFKSVNWYFAHSIH");

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
    msg.setTimeStamp(0.6962748305193692);
    msg.setSource(4573U);
    msg.setSourceEntity(64U);
    msg.setDestination(2072U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.139967362841943;
    msg.lon = 0.7325887142090693;
    msg.z = 0.4853918271986234;
    msg.z_units = 22U;
    msg.speed = 0.9414715305596155;
    msg.speed_units = 6U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7943520704996991;
    tmp_msg_0.y = 0.9607525257685153;
    tmp_msg_0.z = 0.08094757599754376;
    tmp_msg_0.t = 0.6329003022419462;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 28304U;
    tmp_msg_1.off_x = 0.8997740683070914;
    tmp_msg_1.off_y = 0.8216789129631653;
    tmp_msg_1.off_z = 0.8522545753186785;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7645265197816917;
    msg.custom.assign("RIOLPTHDVOKIUTJCVDEIWZPNBHHEFYGPFAQJBYKMACBYSEGEAIDDVSRNWBLDHRTLDSRHNLWXJFGTIJYOBZQLKSCKHXUXYWFVBXKPVYGVYBDBSPOHFOSMLNQDZK");

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
    msg.setTimeStamp(0.028747004331880266);
    msg.setSource(1238U);
    msg.setSourceEntity(200U);
    msg.setDestination(52586U);
    msg.setDestinationEntity(99U);
    msg.vid = 39924U;
    msg.off_x = 0.4834156657257762;
    msg.off_y = 0.29053648140386856;
    msg.off_z = 0.8614127327817084;

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
    msg.setTimeStamp(0.6345308190493797);
    msg.setSource(8978U);
    msg.setSourceEntity(18U);
    msg.setDestination(2166U);
    msg.setDestinationEntity(221U);
    msg.vid = 45013U;
    msg.off_x = 0.903937876497338;
    msg.off_y = 0.41761728896999917;
    msg.off_z = 0.656333976223427;

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
    msg.setTimeStamp(0.441170061614244);
    msg.setSource(319U);
    msg.setSourceEntity(68U);
    msg.setDestination(35688U);
    msg.setDestinationEntity(182U);
    msg.vid = 20399U;
    msg.off_x = 0.19081404615626707;
    msg.off_y = 0.6748691590741075;
    msg.off_z = 0.0011263472409155373;

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
    msg.setTimeStamp(0.07580294536321919);
    msg.setSource(52838U);
    msg.setSourceEntity(232U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.6794744490629522);
    msg.setSource(8805U);
    msg.setSourceEntity(97U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.7939942633940476);
    msg.setSource(57846U);
    msg.setSourceEntity(164U);
    msg.setDestination(18450U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.8635504637416456);
    msg.setSource(34763U);
    msg.setSourceEntity(129U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(165U);
    msg.mid = 119U;

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
    msg.setTimeStamp(0.11797767565631812);
    msg.setSource(11041U);
    msg.setSourceEntity(183U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(80U);
    msg.mid = 1214U;

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
    msg.setTimeStamp(0.7990490906252304);
    msg.setSource(42669U);
    msg.setSourceEntity(131U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(164U);
    msg.mid = 52629U;

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
    msg.setTimeStamp(0.2683452906486413);
    msg.setSource(11570U);
    msg.setSourceEntity(130U);
    msg.setDestination(3387U);
    msg.setDestinationEntity(3U);
    msg.state = 229U;
    msg.eta = 29091U;
    msg.info.assign("IJEYXDAZGJIUNXTFJLIBKSDSJUVXKIEREDMKOTLFOKQLVXYLHTHTHOWCWRSZBURLZQPZKQCWXNHBSVSNUGXIXHGGDBKGRFFVCNYMRWIMTCXSF");

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
    msg.setTimeStamp(0.43488324664343936);
    msg.setSource(34288U);
    msg.setSourceEntity(92U);
    msg.setDestination(59619U);
    msg.setDestinationEntity(36U);
    msg.state = 162U;
    msg.eta = 5140U;
    msg.info.assign("RQWUFFKMIDAEJNAOJVKILIJIEOQPUYSRGGFOHDVEKTJZADUCZSVNGBUWRUWPCECBSOGFVOOPGQFFLYZBRPTNCDKMESDCHWGMTIUVXXLAQKBBUAHEBDVDVLKKPTJLXBHQQXMLWSUANGPOTWXNMQIPBDYIRHKTQNVXGXRNSFEMHJFOFECRSWOVUAXAXSWY");

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
    msg.setTimeStamp(0.2110177535892006);
    msg.setSource(46270U);
    msg.setSourceEntity(208U);
    msg.setDestination(38542U);
    msg.setDestinationEntity(136U);
    msg.state = 192U;
    msg.eta = 49872U;
    msg.info.assign("VCFELUICKALKXZVPMYMTDGBBQNJJETUCSCKWIRWVAQFRWOHGWPAADUKMXQOVZMCHOXVVQXZOCNLMHOBCXJOKRHUNOLDPTJFYANHNISSOXBUBRRKSBRGZTJUIRZDAEQWZOLMFAPAIFJKGAXIGGYYITTW");

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
    msg.setTimeStamp(0.1765012025349596);
    msg.setSource(33004U);
    msg.setSourceEntity(245U);
    msg.setDestination(44977U);
    msg.setDestinationEntity(73U);
    msg.system = 41458U;
    msg.duration = 14451U;
    msg.speed = 0.30710450679284695;
    msg.speed_units = 61U;
    msg.x = 0.7328201022970382;
    msg.y = 0.10031032008896601;
    msg.z = 0.004698564549269313;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.5215457472997864);
    msg.setSource(45116U);
    msg.setSourceEntity(75U);
    msg.setDestination(3602U);
    msg.setDestinationEntity(204U);
    msg.system = 17608U;
    msg.duration = 62483U;
    msg.speed = 0.015663813777580637;
    msg.speed_units = 10U;
    msg.x = 0.9665538619981746;
    msg.y = 0.6448020399559312;
    msg.z = 0.46167690268728956;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.5944167812014473);
    msg.setSource(36646U);
    msg.setSourceEntity(198U);
    msg.setDestination(14651U);
    msg.setDestinationEntity(20U);
    msg.system = 3609U;
    msg.duration = 53850U;
    msg.speed = 0.705451532668327;
    msg.speed_units = 191U;
    msg.x = 0.5922790785287733;
    msg.y = 0.0820905746710825;
    msg.z = 0.06358594685538332;
    msg.z_units = 216U;

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
    msg.setTimeStamp(0.9025616190487559);
    msg.setSource(46583U);
    msg.setSourceEntity(5U);
    msg.setDestination(61579U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.01469916581449593;
    msg.lon = 0.16095181933409308;
    msg.speed = 0.6055072966221687;
    msg.speed_units = 210U;
    msg.duration = 42446U;
    msg.sys_a = 33189U;
    msg.sys_b = 51163U;
    msg.move_threshold = 0.906026474652623;

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
    msg.setTimeStamp(0.7459470104868453);
    msg.setSource(54256U);
    msg.setSourceEntity(24U);
    msg.setDestination(59474U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.8664232810878867;
    msg.lon = 0.0826911290289446;
    msg.speed = 0.37198041895518486;
    msg.speed_units = 22U;
    msg.duration = 44511U;
    msg.sys_a = 16068U;
    msg.sys_b = 5998U;
    msg.move_threshold = 0.39911311806333294;

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
    msg.setTimeStamp(0.16266053930160607);
    msg.setSource(47862U);
    msg.setSourceEntity(24U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6263566931385267;
    msg.lon = 0.5984280754734921;
    msg.speed = 0.2691142985063395;
    msg.speed_units = 148U;
    msg.duration = 19144U;
    msg.sys_a = 58408U;
    msg.sys_b = 18220U;
    msg.move_threshold = 0.13901189120161372;

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
    msg.setTimeStamp(0.8817194935428384);
    msg.setSource(16911U);
    msg.setSourceEntity(124U);
    msg.setDestination(48257U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.7863968613627575;
    msg.lon = 0.9369364844182175;
    msg.z = 0.7510971321352766;
    msg.z_units = 231U;
    msg.speed = 0.6761557645678657;
    msg.speed_units = 148U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7162981855417903;
    tmp_msg_0.lon = 0.5004276271090423;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WLPUTXXGDZKRQVYPBGDRHTNMCVXHBRTUQZZVK");

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
    msg.setTimeStamp(0.37303163023266206);
    msg.setSource(35848U);
    msg.setSourceEntity(112U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.9734283180105618;
    msg.lon = 0.5460708394965155;
    msg.z = 0.7939601232528813;
    msg.z_units = 63U;
    msg.speed = 0.6776403044632138;
    msg.speed_units = 62U;
    msg.custom.assign("EIFQSBQECAPCWZJWNKRRXSCXEQZCGMAGBTNOSMNSHTLRPXHAYMUYACFIZCJQWQ");

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
    msg.setTimeStamp(0.9163989122615697);
    msg.setSource(37535U);
    msg.setSourceEntity(135U);
    msg.setDestination(11186U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.6806738177898124;
    msg.lon = 0.9905926803534099;
    msg.z = 0.40176659772302015;
    msg.z_units = 181U;
    msg.speed = 0.7016075675420965;
    msg.speed_units = 72U;
    msg.custom.assign("HDDUMLCOELLSQXREMZKDVFUUBACOVRJGOQBNRSEYOXGNNWQETGCBXTZWQTLQJUVFFJRHTXPUCMPJTZNEJANYFZQOHYLPGKHDCVEYSFKZBKYNMFEVVVNGSZWTPSIHYPHOQAAWHAMHXKMBAMJUDHPXXNIASSOIWXPYDWYCMTBRVV");

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
    msg.setTimeStamp(0.15667766452813958);
    msg.setSource(35654U);
    msg.setSourceEntity(61U);
    msg.setDestination(45871U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.15739420647311608;
    msg.lon = 0.5358959150540737;

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
    msg.setTimeStamp(0.39429056843584875);
    msg.setSource(30001U);
    msg.setSourceEntity(151U);
    msg.setDestination(29677U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.19035503423078282;
    msg.lon = 0.9406913933466785;

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
    msg.setTimeStamp(0.7313092349481702);
    msg.setSource(374U);
    msg.setSourceEntity(224U);
    msg.setDestination(20450U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.6065494716037325;
    msg.lon = 0.6454524878823062;

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
    msg.setTimeStamp(0.9691993620393614);
    msg.setSource(61807U);
    msg.setSourceEntity(126U);
    msg.setDestination(55823U);
    msg.setDestinationEntity(72U);
    msg.timeout = 61424U;
    msg.lat = 0.0461557879963862;
    msg.lon = 0.2550689147972889;
    msg.z = 0.8976637841536113;
    msg.z_units = 250U;
    msg.pitch = 0.06208351851711291;
    msg.amplitude = 0.4987224762075708;
    msg.duration = 520U;
    msg.speed = 0.8531714841094826;
    msg.speed_units = 70U;
    msg.radius = 0.043047383685208884;
    msg.direction = 33U;
    msg.custom.assign("OSJKYBYXVYRALAGROYDNUVUQEKQLFFSSYXPKZTGQFHHPZPXBKBVZODBCOGIZYAJQRXGCJCERSHEFAMZEWNQDKKPIOSZIRWMPJSOMWX");

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
    msg.setTimeStamp(0.9929261795917433);
    msg.setSource(8445U);
    msg.setSourceEntity(184U);
    msg.setDestination(47255U);
    msg.setDestinationEntity(35U);
    msg.timeout = 7351U;
    msg.lat = 0.5967650640277288;
    msg.lon = 0.7373805385954221;
    msg.z = 0.3430697476744229;
    msg.z_units = 99U;
    msg.pitch = 0.3914844656002623;
    msg.amplitude = 0.34267517178172435;
    msg.duration = 8791U;
    msg.speed = 0.01790375406904121;
    msg.speed_units = 10U;
    msg.radius = 0.16918159583680437;
    msg.direction = 73U;
    msg.custom.assign("YHWSBEXDVXREHQFASCUFGLRVYANWUTNQAZLWZPHXRGTKBTLQMBZWKLXJJAXSYCJIPPBEFWLERGACBOOHNQDAGPPSJPMWMVMXTQIYTZFPIFIKGQYOKVTUMUJBYERQZMCLLPMWYHIWAODFBMDDTNEKRGWULFVJOIEUZJNCUDBATVKIONCXXZXVFHVYJYVGWKQNCZMOJFPHNBSZZMPSDEDLHQSXVNSRHQIK");

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
    msg.setTimeStamp(0.12111268924671237);
    msg.setSource(15754U);
    msg.setSourceEntity(144U);
    msg.setDestination(15897U);
    msg.setDestinationEntity(247U);
    msg.timeout = 33553U;
    msg.lat = 0.10143694842364315;
    msg.lon = 0.16694153155690228;
    msg.z = 0.37538086545291804;
    msg.z_units = 238U;
    msg.pitch = 0.639583286123156;
    msg.amplitude = 0.36828960487467377;
    msg.duration = 15427U;
    msg.speed = 0.6789775368302661;
    msg.speed_units = 29U;
    msg.radius = 0.39335901931847883;
    msg.direction = 17U;
    msg.custom.assign("VLAXNVYEMBSMWZULBLOBTYGZQXKWTZYGIHXUBEKKWIANORDUVDWOHXCAPCUXPUWJQDONMJGMIYZSGMFNCTCWYCBGUNDFJQMTTPDULDNSXSRAVCRPFABOHJNIQVPOL");

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
    msg.setTimeStamp(0.9789117850759624);
    msg.setSource(35575U);
    msg.setSourceEntity(98U);
    msg.setDestination(15516U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("TWAWAOTCCFLCROIZSNYJNLXRHAFPXABMLBGNFYELHZTZMBHPCUZCZKVGDXPRWYJXSDZXKVHMNVJODKVTEZXYEWEQSUJQUHYQHZBBCSSNBGYYROAILVDWGPSZOMCVRUODSAPKWQLOQUBUMGGQARIKVFRNKEEIXVKDKLCWIBXXYNTYHRRDYMUUTDQJ");
    msg.reference_frame = 164U;
    msg.custom.assign("BFHNUZXLOLQBLDUMNGGHYOMTAFJDJCRABIJTIDPYDXNJCSNOPXWBLWVONRXSKFLHGSUYKJBDCWYZWACFFSGKIXBJFBDLSCZVAIRQIJFZRYVKHLHHFTPSACVEIIXIHZTZLIBYAQFNRECXUXZUEMVVGVNYKCDUZQUPLMCUJTYSERFEKNUWWCVEMWGMWSQOHDGQXUHHMAEXMMESRRPAPAKPPGWKYAEWQRZOGKTITKDOOSMRQTTYTVB");

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
    msg.setTimeStamp(0.03482926123396635);
    msg.setSource(4752U);
    msg.setSourceEntity(128U);
    msg.setDestination(59800U);
    msg.setDestinationEntity(181U);
    msg.formation_name.assign("QSVHQEOVLDBEXASITWZMVYMNYQGTTWBJWRAOEZHTONAJNGKFALLMUUBYIOVXOGHVHRGGHACVRPMFUEYKSLCUYLHUJJNJRBCLVXZNPAKZBTIDKIPOMEKMRKAQLBIEXXIAXNLAERYJQTMZBWSWHQEPNOJPBXOPLCMQPRWNDUUQCZGDFDCRGJPJTXCPDZSSKKKFNTVUGCIKNFWMYZQDRCYDWHXPHGSTIEIUBAFFQGZZSFYJBSXCR");
    msg.reference_frame = 127U;
    msg.custom.assign("IHEYRUJIBEDQCYTNVWEQPPRBZWVXQELHKAUDMBHUANJXJOFPPHLFRSSAQFEWSTLDGRDOTANZYSQECSTMHKIVIMFDA");

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
    msg.setTimeStamp(0.8713284378427341);
    msg.setSource(36846U);
    msg.setSourceEntity(189U);
    msg.setDestination(40138U);
    msg.setDestinationEntity(202U);
    msg.formation_name.assign("HOSKBHOTFDIOTLHHYYEAPWNQCMLLNECQCEEBEOVSFEBCXDQPLKKQZSJOLEXEPKYRMFJXZXPDKYGTDZSJRWABFADLTVGSTHGNICFMHIJPXZSANBZXWIZQJZZNMOIXAAQGSGZCTAWQHXKVVUOJGUPLFIWBCRKBCNRWRVTVRUYMAAVESYIGMHOIDWDXSW");
    msg.reference_frame = 7U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59134U;
    tmp_msg_0.off_x = 0.045855619245687596;
    tmp_msg_0.off_y = 0.0009897548529745892;
    tmp_msg_0.off_z = 0.9432709904630961;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EPHUYDSYQPRMOTOSMQBJEGPFZWVHBHGWWUHNYEIOAQFCAJRFLVUMKRIWARXWXLT");

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
    msg.setTimeStamp(0.25841286906270766);
    msg.setSource(34116U);
    msg.setSourceEntity(79U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("YALSRVCRVPWRMZMECHWCICHEGGSTEKCJYWEKBDKPMFNGQFPOOFTBQTEZLVTNNIUSOVKFGJCUERFBFHTZUGYPCNXEXNHYLMMTQQRDLBSOARPHULHJPNXWNKUCLDFFHVXQSNZLRSPAQPDIMDZBQAMXWKQDQBIPXKSVIYKOGXGRYGHKWQWIUDAJFUASBJVUCDM");
    msg.formation_name.assign("UIYGFHHATYKGTQXLFSGEWJFDOWULSMOFTFCPJZCHGRA");
    msg.plan_id.assign("AUVDIELYLYMMSRGDIZJAKZEGTBUAFNXXFZFPKGOIWMRUTTXWWGZARBSMWOTWXOESYMYAFSVMCCLSTYGAKPDMOEMBCBULHBBVFIZWWEHVYTFQDLZJOERDTHMEVGKUAMSJJFFWQXXHRWNJTLCNPNUVKNPHJCTPYIJKNQLPQONYUOBQVZBFIICVAEKJGUCSVCSDVSIQJDAJKDZHXKPROYFHCKCIRODQYSQGHUBWGIXPHNEXRPQBHOZLULPRL");
    msg.description.assign("IUTUICFXFNLGRVXGEWIBCYBHZIRSQHYCIXRTEADSGOLSCNRJPPPHBDBPJAJPLEHZORKJWIGSGRKUMZKXQGVXYFDERVBWNPDHWIYMZNLYVWQUTFTXYAWFOJPQCEVKCWLBAQVFSAXETLMYMMHUJDQEVMOKOROJPEFUZZFQNVGQAGRAOTUSODFJYEILTZFJGMYBZIAPVZXW");
    msg.leader_speed = 0.14870149934721433;
    msg.leader_bank_lim = 0.9202415716492989;
    msg.pos_sim_err_lim = 0.691337677587357;
    msg.pos_sim_err_wrn = 0.6356317547063626;
    msg.pos_sim_err_timeout = 7638U;
    msg.converg_max = 0.6980502997629985;
    msg.converg_timeout = 65379U;
    msg.comms_timeout = 46121U;
    msg.turb_lim = 0.4129556989178984;
    msg.custom.assign("PKVSCYAXBAWGPMVKUQMXFCQHGRIGTIEMZPSFOSXZKNSVONQZXZYYXJGKATIANHERMYPMDDTNPEFILHSWEWHQXYMLFOGRPZZJGFTXTJEJUVDLOF");

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
    msg.setTimeStamp(0.7328047773097558);
    msg.setSource(61513U);
    msg.setSourceEntity(100U);
    msg.setDestination(59940U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("JZYONBCKOCQPHMAYIEDBJBPQXFVSNSFGJMILKAIWYEIYOYACPYALLVWRMYSUPISZGHYMUBNZFKG");
    msg.formation_name.assign("NQPAZLKTUWRWMZYXPMNGXDJNFOCRTCNRGVTKHAYDSYXRGVUCMEZDWBTRSLVDKQFROWVBMKQNZMWGUIZWTGKHLJCWGQAKVOOBJUFCIFUDFZHVUTVYPYPEORCXRHYUZKRNDCATELFPOBXEEIDJAZNTUVKYGHJMHXYDEJEXJVZEDAPMOYPSQKAJQQILPUZOSNIDRXBBMWSPHNJXGSMQYWFHFEHBKCBCSLOLIFIGUESQAFAVM");
    msg.plan_id.assign("RWOHPMUBWJJKNIFRFVUGTHSRFANDOVMLFQLIXQURXPYDWJDZGCGOUGKQZTIBWHEFVIKEXWGJUGFUXTOACYEOMYVHIYEDYHSWPBXOIAEMJLJSCWXRPEAHUBMQUZPZAOLKJZPBBTOFFTH");
    msg.description.assign("HMRSPPFEZXVMXPWSKFWJWCXGBJLYFLXXPGKZCLYRSZBDDKKCENLJYTZWDMOEBIVLHMBXNZYPWQOJZGUODAXJHUSGIGGPOWYSVNNMYTQNUZUAPMOLGFANJSWEFQRHDTOHHLUCZHJZHLVLTYORTQWUXUDCKJRTOINDNRVMIIZVBBPEAHEKTYIWDYQAAIICXMFRWBMJCQMNCKSQFDVAFFXKSALSECQFNATIESEGGOARUCRUETYRJKVBVKGOBHVPDT");
    msg.leader_speed = 0.0021957463535416943;
    msg.leader_bank_lim = 0.7579843861124606;
    msg.pos_sim_err_lim = 0.38437845005372984;
    msg.pos_sim_err_wrn = 0.33516458829250306;
    msg.pos_sim_err_timeout = 54005U;
    msg.converg_max = 0.2280238561030622;
    msg.converg_timeout = 30929U;
    msg.comms_timeout = 13972U;
    msg.turb_lim = 0.5992634325051798;
    msg.custom.assign("OKUBYPXBNJFXZECRSADESHKMYGMSDOVXUAKHYKLGWRWCDNPCQERVYIK");

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
    msg.setTimeStamp(0.0652461026391139);
    msg.setSource(3977U);
    msg.setSourceEntity(9U);
    msg.setDestination(52665U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("DDMUYPBPWAUPESXRB");
    msg.formation_name.assign("WTDYURXQGNDGDSPRSABIR");
    msg.plan_id.assign("KXCPPKYGEZXETTHWLLEOIHIWQOACJNIWYLULJNSVDVNCWATUIQSRTFJJOSPQGWIPYVPEGZGRQKIKFRVEPGUVBBWZQKKDVIHUCBZXRMXBXFMOPXHWCNAJUKTRYTFVNZRKOJMUUIBRSDTFVISGNJATHDOKSLEMAQDMQDALZBOPXWDBLYQNDXFCGNJHBHDUTBEURZOVEDYHQNGGYYCOMMSETHFZJWYZFGXAVNAFCPMLMXBWMCUJCZSHYRFE");
    msg.description.assign("FIWXYUANKLYLMZGHFCIQWQJEMUBILIDVKCFRRZXHCXSDGKRSMATBSSQCTYOWHMIUHPCGKOKTDN");
    msg.leader_speed = 0.7407357025736496;
    msg.leader_bank_lim = 0.8575377588040299;
    msg.pos_sim_err_lim = 0.4695558089276336;
    msg.pos_sim_err_wrn = 0.5191575053357627;
    msg.pos_sim_err_timeout = 45787U;
    msg.converg_max = 0.17880744961557615;
    msg.converg_timeout = 29182U;
    msg.comms_timeout = 18683U;
    msg.turb_lim = 0.4828822027553553;
    msg.custom.assign("KERHVJULGKNBNKKAOIPQNYTZRRALBQNDZMLLMLZCUXENPYFSAGGTDC");

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
    msg.setTimeStamp(0.2133223274994882);
    msg.setSource(55906U);
    msg.setSourceEntity(177U);
    msg.setDestination(51309U);
    msg.setDestinationEntity(22U);
    msg.control_src = 29604U;
    msg.control_ent = 247U;
    msg.timeout = 0.41488418888117673;
    msg.loiter_radius = 0.4783035303600941;
    msg.altitude_interval = 0.49637096202322206;

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
    msg.setTimeStamp(0.6023075565650801);
    msg.setSource(18786U);
    msg.setSourceEntity(3U);
    msg.setDestination(22025U);
    msg.setDestinationEntity(144U);
    msg.control_src = 22915U;
    msg.control_ent = 247U;
    msg.timeout = 0.579748118931541;
    msg.loiter_radius = 0.6923702762632591;
    msg.altitude_interval = 0.7010962915208109;

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
    msg.setTimeStamp(0.36367238047877426);
    msg.setSource(6066U);
    msg.setSourceEntity(228U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(100U);
    msg.control_src = 56859U;
    msg.control_ent = 210U;
    msg.timeout = 0.18890818959319622;
    msg.loiter_radius = 0.8037451647312897;
    msg.altitude_interval = 0.46311095445833295;

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
    msg.setTimeStamp(0.7086886745838936);
    msg.setSource(5430U);
    msg.setSourceEntity(84U);
    msg.setDestination(1404U);
    msg.setDestinationEntity(2U);
    msg.flags = 191U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.35143027302325835;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6793432453278093;
    tmp_msg_1.z_units = 149U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2752946864862025;
    msg.lon = 0.3146644146572142;
    msg.radius = 0.6011172766955999;

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
    msg.setTimeStamp(0.18629103876665276);
    msg.setSource(24237U);
    msg.setSourceEntity(73U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(141U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5287049798359856;
    tmp_msg_0.speed_units = 203U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.020310643169268006;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5959329957073558;
    msg.lon = 0.8569553919103949;
    msg.radius = 0.5195642023180808;

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
    msg.setTimeStamp(0.2017028051209553);
    msg.setSource(45056U);
    msg.setSourceEntity(8U);
    msg.setDestination(62065U);
    msg.setDestinationEntity(185U);
    msg.flags = 56U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9562335237688291;
    tmp_msg_0.speed_units = 22U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.31147769142725223;
    tmp_msg_1.z_units = 2U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43475776910753805;
    msg.lon = 0.07113790322613223;
    msg.radius = 0.13512984506865855;

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
    msg.setTimeStamp(0.4126903346975058);
    msg.setSource(25511U);
    msg.setSourceEntity(248U);
    msg.setDestination(4285U);
    msg.setDestinationEntity(95U);
    msg.control_src = 23741U;
    msg.control_ent = 139U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 203U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5880593910374817;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.32959758412110074;
    tmp_tmp_msg_0_1.z_units = 210U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6403624307403029;
    tmp_msg_0.lon = 0.01642190631993945;
    tmp_msg_0.radius = 0.06267134382407002;
    msg.reference.set(tmp_msg_0);
    msg.state = 184U;
    msg.proximity = 195U;

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
    msg.setTimeStamp(0.8003899639812176);
    msg.setSource(24243U);
    msg.setSourceEntity(209U);
    msg.setDestination(61140U);
    msg.setDestinationEntity(56U);
    msg.control_src = 40897U;
    msg.control_ent = 26U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 244U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.08209831531954204;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.16220446122552612;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.059817464819010735;
    tmp_msg_0.lon = 0.5892092454132989;
    tmp_msg_0.radius = 0.12643606940716723;
    msg.reference.set(tmp_msg_0);
    msg.state = 164U;
    msg.proximity = 160U;

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
    msg.setTimeStamp(0.2892975445009046);
    msg.setSource(19573U);
    msg.setSourceEntity(65U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(53U);
    msg.control_src = 16335U;
    msg.control_ent = 219U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 145U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8748681850221086;
    tmp_tmp_msg_0_0.speed_units = 207U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3390411933959864;
    tmp_tmp_msg_0_1.z_units = 205U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.23147200186266548;
    tmp_msg_0.lon = 0.24685929852734834;
    tmp_msg_0.radius = 0.589926672674385;
    msg.reference.set(tmp_msg_0);
    msg.state = 251U;
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
    msg.setTimeStamp(0.33149739277108203);
    msg.setSource(15255U);
    msg.setSourceEntity(69U);
    msg.setDestination(58946U);
    msg.setDestinationEntity(203U);
    msg.ax_cmd = 0.4865251831574573;
    msg.ay_cmd = 0.9149565028084952;
    msg.az_cmd = 0.6885224622169654;
    msg.ax_des = 0.9282825279797763;
    msg.ay_des = 0.9733493284909285;
    msg.az_des = 0.03104998082376953;
    msg.virt_err_x = 0.4815726299926064;
    msg.virt_err_y = 0.6181283190763951;
    msg.virt_err_z = 0.8250016310187315;
    msg.surf_fdbk_x = 0.014723921862763834;
    msg.surf_fdbk_y = 0.6159656657922535;
    msg.surf_fdbk_z = 0.3850450542180307;
    msg.surf_unkn_x = 0.5380885801739258;
    msg.surf_unkn_y = 0.9431718623989593;
    msg.surf_unkn_z = 0.7862939548903962;
    msg.ss_x = 0.4275017092993967;
    msg.ss_y = 0.033829386763621794;
    msg.ss_z = 0.8229461957229559;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GTZTGKKYPJTWKHJSZBFNYA");
    tmp_msg_0.dist = 0.23296520120160902;
    tmp_msg_0.err = 0.4295417443280566;
    tmp_msg_0.ctrl_imp = 0.935257199778527;
    tmp_msg_0.rel_dir_x = 0.813974750227373;
    tmp_msg_0.rel_dir_y = 0.8737739621931426;
    tmp_msg_0.rel_dir_z = 0.5384006373011874;
    tmp_msg_0.err_x = 0.5098938746872365;
    tmp_msg_0.err_y = 0.6087699359785417;
    tmp_msg_0.err_z = 0.5932166470057971;
    tmp_msg_0.rf_err_x = 0.36640108677203287;
    tmp_msg_0.rf_err_y = 0.13881803033411566;
    tmp_msg_0.rf_err_z = 0.4916949707286704;
    tmp_msg_0.rf_err_vx = 0.9839901887592355;
    tmp_msg_0.rf_err_vy = 0.077564596633103;
    tmp_msg_0.rf_err_vz = 0.8708188719425555;
    tmp_msg_0.ss_x = 0.9485387577947302;
    tmp_msg_0.ss_y = 0.5991354604341003;
    tmp_msg_0.ss_z = 0.5999439937565667;
    tmp_msg_0.virt_err_x = 0.13065880663861906;
    tmp_msg_0.virt_err_y = 0.8856983847558759;
    tmp_msg_0.virt_err_z = 0.5751561500109705;
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
    msg.setTimeStamp(0.07275516856364617);
    msg.setSource(44210U);
    msg.setSourceEntity(160U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(205U);
    msg.ax_cmd = 0.45565447557537186;
    msg.ay_cmd = 0.4603461280674057;
    msg.az_cmd = 0.8582201383458258;
    msg.ax_des = 0.5614795758966741;
    msg.ay_des = 0.7147153869047643;
    msg.az_des = 0.9573289226004216;
    msg.virt_err_x = 0.10459331681096096;
    msg.virt_err_y = 0.9460028464094085;
    msg.virt_err_z = 0.9353122082478821;
    msg.surf_fdbk_x = 0.9657928462189483;
    msg.surf_fdbk_y = 0.7587813352575776;
    msg.surf_fdbk_z = 0.7336317301924111;
    msg.surf_unkn_x = 0.7163888510092302;
    msg.surf_unkn_y = 0.8335952803797668;
    msg.surf_unkn_z = 0.24633756668732265;
    msg.ss_x = 0.16583166373347302;
    msg.ss_y = 0.07186495568161988;
    msg.ss_z = 0.422762997543213;

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
    msg.setTimeStamp(0.6938337601548971);
    msg.setSource(76U);
    msg.setSourceEntity(57U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(96U);
    msg.ax_cmd = 0.01173517988658046;
    msg.ay_cmd = 0.5469875439434179;
    msg.az_cmd = 0.7322543436189074;
    msg.ax_des = 0.7806944508129161;
    msg.ay_des = 0.9690678973458658;
    msg.az_des = 0.712804480006568;
    msg.virt_err_x = 0.7245113706294468;
    msg.virt_err_y = 0.22207205284443876;
    msg.virt_err_z = 0.11125932184500864;
    msg.surf_fdbk_x = 0.3772981542913828;
    msg.surf_fdbk_y = 0.9152711674158444;
    msg.surf_fdbk_z = 0.5795904315691754;
    msg.surf_unkn_x = 0.660301872763498;
    msg.surf_unkn_y = 0.7455891961645718;
    msg.surf_unkn_z = 0.7277822415353651;
    msg.ss_x = 0.4983003564130032;
    msg.ss_y = 0.8374821049414403;
    msg.ss_z = 0.035373348848086295;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YNRDCGOODCOTDWCYTUPTQIFIULMJGRADSBHFDDENVZLAJOLLXKQKLGRUGDLRBLIYBFISZBEOVATOWQAJPHUYBKXAPXWZEGMAGNJFMJHNUARMWURZSFDBUXFACQZICOHKOINQIDHJOWSYLLQOIEYMWKCKXFEBJIRNPRMVKSEYCBTVPXEIVSFNDMZRCANWLHVBGSTWAQQZHZXVXPUMTFGZSWJQPZPYMKCTHVQBHTNUKVRJE");
    tmp_msg_0.dist = 0.03071832410291886;
    tmp_msg_0.err = 0.9943151764906258;
    tmp_msg_0.ctrl_imp = 0.602993830593369;
    tmp_msg_0.rel_dir_x = 0.5892749968533849;
    tmp_msg_0.rel_dir_y = 0.20890985401123996;
    tmp_msg_0.rel_dir_z = 0.5101388878733943;
    tmp_msg_0.err_x = 0.3505692402200591;
    tmp_msg_0.err_y = 0.6870059488863394;
    tmp_msg_0.err_z = 0.001746617674642792;
    tmp_msg_0.rf_err_x = 0.8561928248152071;
    tmp_msg_0.rf_err_y = 0.13709887758529804;
    tmp_msg_0.rf_err_z = 0.44518695429971933;
    tmp_msg_0.rf_err_vx = 0.6129570862898663;
    tmp_msg_0.rf_err_vy = 0.8706221574349254;
    tmp_msg_0.rf_err_vz = 0.6917207358720338;
    tmp_msg_0.ss_x = 0.9517475680820204;
    tmp_msg_0.ss_y = 0.9557343171811142;
    tmp_msg_0.ss_z = 0.8786819485659342;
    tmp_msg_0.virt_err_x = 0.2751829513161427;
    tmp_msg_0.virt_err_y = 0.9415440691873512;
    tmp_msg_0.virt_err_z = 0.7572526783700576;
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
    msg.setTimeStamp(0.7534137232656077);
    msg.setSource(8183U);
    msg.setSourceEntity(240U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(136U);
    msg.s_id.assign("OHPMPSJOSXZZAQPYIEDOPCCNQWMGXJMWQAYEJIKWXBLFRJFVHBGWZQLIIVBEHAATLZXFHZCJDKKBHYKJDDUPEJOYACTJNDDYNT");
    msg.dist = 0.9130761484678657;
    msg.err = 0.015182372365435737;
    msg.ctrl_imp = 0.439413191355674;
    msg.rel_dir_x = 0.8984782937645687;
    msg.rel_dir_y = 0.432613647618426;
    msg.rel_dir_z = 0.3324632022411761;
    msg.err_x = 0.6464827844336394;
    msg.err_y = 0.6946488585962683;
    msg.err_z = 0.0693698372823256;
    msg.rf_err_x = 0.7678952337969498;
    msg.rf_err_y = 0.09158455123400688;
    msg.rf_err_z = 0.5636703998332998;
    msg.rf_err_vx = 0.9778743276229865;
    msg.rf_err_vy = 0.2303916003331843;
    msg.rf_err_vz = 0.7186386917094122;
    msg.ss_x = 0.11342788078239685;
    msg.ss_y = 0.5641090323002685;
    msg.ss_z = 0.21598013365204716;
    msg.virt_err_x = 0.474499351096228;
    msg.virt_err_y = 0.515149999886713;
    msg.virt_err_z = 0.7284040795424754;

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
    msg.setTimeStamp(0.3705338995461809);
    msg.setSource(34300U);
    msg.setSourceEntity(5U);
    msg.setDestination(64547U);
    msg.setDestinationEntity(30U);
    msg.s_id.assign("RJZAMTSBOXQBFF");
    msg.dist = 0.4962832580241999;
    msg.err = 0.13660446013774463;
    msg.ctrl_imp = 0.6100864398710288;
    msg.rel_dir_x = 0.8220468518143196;
    msg.rel_dir_y = 0.4474503179838881;
    msg.rel_dir_z = 0.2794211517236175;
    msg.err_x = 0.016396750439683028;
    msg.err_y = 0.37993498982912;
    msg.err_z = 0.04605926838108154;
    msg.rf_err_x = 0.6860081203617436;
    msg.rf_err_y = 0.10930718340831014;
    msg.rf_err_z = 0.36722621064603966;
    msg.rf_err_vx = 0.3556250432805812;
    msg.rf_err_vy = 0.6527764881399282;
    msg.rf_err_vz = 0.9595012512541754;
    msg.ss_x = 0.11049580229668532;
    msg.ss_y = 0.7374672746038732;
    msg.ss_z = 0.5710080071817311;
    msg.virt_err_x = 0.16321107872183027;
    msg.virt_err_y = 0.32936289161841936;
    msg.virt_err_z = 0.9508720414641032;

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
    msg.setTimeStamp(0.7124438043609441);
    msg.setSource(55886U);
    msg.setSourceEntity(243U);
    msg.setDestination(35098U);
    msg.setDestinationEntity(219U);
    msg.s_id.assign("XOPOEEJKVJWNUCHQOKERNXVMXDCCZRYHF");
    msg.dist = 0.7354912723678904;
    msg.err = 0.2620370172813822;
    msg.ctrl_imp = 0.22225251996542783;
    msg.rel_dir_x = 0.6195940626682191;
    msg.rel_dir_y = 0.35185774007706516;
    msg.rel_dir_z = 0.6843540350431757;
    msg.err_x = 0.037506450869370656;
    msg.err_y = 0.4142606568774573;
    msg.err_z = 0.0757784265672653;
    msg.rf_err_x = 0.29276651353622585;
    msg.rf_err_y = 0.7809843788731516;
    msg.rf_err_z = 0.6842789946382237;
    msg.rf_err_vx = 0.4800879695386093;
    msg.rf_err_vy = 0.28605806078701923;
    msg.rf_err_vz = 0.7803086330334966;
    msg.ss_x = 0.8240927966482328;
    msg.ss_y = 0.34806074997649195;
    msg.ss_z = 0.1423847329486283;
    msg.virt_err_x = 0.4022507538403246;
    msg.virt_err_y = 0.8970599047084902;
    msg.virt_err_z = 0.5097545831974961;

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
    msg.setTimeStamp(0.26657524766754614);
    msg.setSource(36532U);
    msg.setSourceEntity(208U);
    msg.setDestination(27999U);
    msg.setDestinationEntity(188U);
    msg.timeout = 10878U;
    msg.rpm = 0.8736230409314358;
    msg.direction = 209U;
    msg.custom.assign("HYRMMBDASIFFQXWQGMRGYTYNTDEPOIVPPBYVSEDLGWSQQUNBLKLHYUMJSPGXZDLBQEYVYHINWAQZTVYVILJZHNCLCMQEFYSKSNKXLKDAKKUPFXMMBVTEZWMWWUOLCTBJOIOMUHLCROFAPFZWUORGJRNIPCFTIDENSVAUUKBHZDGSANJHECZJDXGBATJGXTRGESDO");

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
    msg.setTimeStamp(0.17523209669332007);
    msg.setSource(7885U);
    msg.setSourceEntity(22U);
    msg.setDestination(41198U);
    msg.setDestinationEntity(31U);
    msg.timeout = 13473U;
    msg.rpm = 0.4256828982356242;
    msg.direction = 156U;
    msg.custom.assign("PPOJQOBOEHKOMYQACUWASHGYNHMYVRJUMSNFBIKLVIPIECOMUKAFCEEDALVJTAXIMXTCTRWZDADIUSVUOOFVSJSRXRJNWEPGQRBDDOFXKKZXTTQYEYWABLIGGUIHZCVTIDNBFYHWKBBMWBSKV");

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
    msg.setTimeStamp(0.04183243244247836);
    msg.setSource(35951U);
    msg.setSourceEntity(128U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(252U);
    msg.timeout = 43437U;
    msg.rpm = 0.5501617316365316;
    msg.direction = 87U;
    msg.custom.assign("PIUGLIXERECMXFLFCYOXQZCXSHCESPEKYEFWZBO");

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
    msg.setTimeStamp(0.040867465946668236);
    msg.setSource(51471U);
    msg.setSourceEntity(200U);
    msg.setDestination(6284U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("KVFIPHNGYDBSSLUCJHAO");
    msg.type = 148U;
    msg.op = 201U;
    msg.group_name.assign("OHHKBZRETEVKZXGXBQWBWLFMZTPUQSRKBVWCNJCHICMXVQEKLWLORCXAGLLSBLAQQTTOAFDNNQRBNOVWVFMPXJWVYDAPIWLRXJGTCRGUEJRRODZHGHTBSINGKFUVKOWUZFIMUPDJCEU");
    msg.plan_id.assign("ACCEMPWFRDXOODISRUTCBAVBLRYQDKZQPWVRVSLLUKBAJMNECHJCIWOIOPLQEDNJFDNEBTTIEEAMFVANMJQNPQKGCGLJYNQUXWXTPSSOZXTGIOUIKSSBZRSGHYPVTTFUAQOVF");
    msg.description.assign("TXPNHKMXQTHGNVZTNMXTVRNVAQRCFCLPPARZLEJJKGUEZZWUHPWTZYFJOQRLMXAROYMXHEOKOQOYGOKEVCEJTBFWTNSDRFMANNYNHBLN");
    msg.reference_frame = 203U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27223U;
    tmp_msg_0.off_x = 0.6383957292881829;
    tmp_msg_0.off_y = 0.46663512532998475;
    tmp_msg_0.off_z = 0.48791294791619744;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6762001108598197;
    msg.leader_speed_min = 0.28655318501821647;
    msg.leader_speed_max = 0.9816290828801019;
    msg.leader_alt_min = 0.6539091244188084;
    msg.leader_alt_max = 0.625637066877704;
    msg.pos_sim_err_lim = 0.903727219959153;
    msg.pos_sim_err_wrn = 0.4652971003291835;
    msg.pos_sim_err_timeout = 16134U;
    msg.converg_max = 0.8959748317641798;
    msg.converg_timeout = 31275U;
    msg.comms_timeout = 51212U;
    msg.turb_lim = 0.3007914505491175;
    msg.custom.assign("WHVLBMTDOTIBNLLBHWRXTYQFAPUKXYBSFSXACJFLMMKCDOZFLDGWJDEUUVEIHAUCCCQCKZWXPZXMYRTZNHHJHGPVYQBVZUIRIPJEMEOUWPQQVIWLCXGNWTFFUPPCOUIJZOTEUNJWKYDYIGEJZQJQVTZHSFGVYAYSMCSOLNBXKDCXGSEANRKOKRNOAKPOGIOAXEHJJGFNFTMUMBRZGEXMQDISYL");

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
    msg.setTimeStamp(0.9430871298677548);
    msg.setSource(28015U);
    msg.setSourceEntity(110U);
    msg.setDestination(14624U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("RRSEUUGPXNMNUWYMFTVPVLWIPZDGDVPBQWPINIC");
    msg.type = 18U;
    msg.op = 244U;
    msg.group_name.assign("VCNOSKYMAQGCKZMEBHFQJCAHYYROPERIYCTKSMFTIABRBVORWHDIAKDNOFZHETUJUQMXGUOVVQOZDHEULQLHDCYNBHXSYJMFEFWWYNFJWMSJITGUZATXLGDXNGSIJFVDCGQJXAINZOPMRIKWFPUISKTGGCDVJVLWXRXJBBOPCNKLVHVMAUQLWWUNBIZQRMALYPNDMLSRPWPWNXPYFKXODLCYEFEDPEZUKBSEHLIRZUEJGATSBB");
    msg.plan_id.assign("JSHCBBCQAZQHQUJQKBVQJKNXVPYMGYVEFDAZTJHKCRWOPDEFMAHRWNXPEUUFLGIYEWDOTKOAWWTSSALNMZHTUWSFZGYCIXJLWBFHGCRJANMVKSRCYOQMELRTHXARPCOLUIHRHJXERADIYVUBMIQFQOWIENSBZLBPPTLBPTTDIFVOXOSNXUNVJDSZOKZCCZTE");
    msg.description.assign("XPRJXVDHFEVSIUGTHXDXCURXZJMSQPHZNPCV");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32677U;
    tmp_msg_0.off_x = 0.23405218965522578;
    tmp_msg_0.off_y = 0.3714381207518793;
    tmp_msg_0.off_z = 0.4162350485712135;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2767432213246396;
    msg.leader_speed_min = 0.5053671377577518;
    msg.leader_speed_max = 0.4504195376573551;
    msg.leader_alt_min = 0.7280664063634109;
    msg.leader_alt_max = 0.07342706976780866;
    msg.pos_sim_err_lim = 0.6733535353260204;
    msg.pos_sim_err_wrn = 0.18014758769605854;
    msg.pos_sim_err_timeout = 43449U;
    msg.converg_max = 0.46264856451981795;
    msg.converg_timeout = 20762U;
    msg.comms_timeout = 25396U;
    msg.turb_lim = 0.2699846621019577;
    msg.custom.assign("SNCHTJLXRRABPOMLOGZLCZSIJLTNENJNFIPYSICCEGWKSHVDCIYGQHPRFQZIZGLPDMKBAOGVDXSXOXARNQDMKRUMGOVMXQURJWMSGHYVBCBTWOBNDQWYLUUHFCGPLSYDODPYETTBHQFWYGBBVTDUCWEPAVDXKFJFRABONAUAFQETGSJKKKPNFRTTP");

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
    msg.setTimeStamp(0.30062308658636216);
    msg.setSource(2449U);
    msg.setSourceEntity(175U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("IAOZHGGCQVBPYSRRVYBPPYR");
    msg.type = 78U;
    msg.op = 156U;
    msg.group_name.assign("FZINTLQAJIPTZMJDVHLJXUVCVZQNXAWRYCASIMGZKRBKHPREQWWFKLZUQQDXJSKPCIHYETRKNFEXUENUBPQTY");
    msg.plan_id.assign("ZNZIXBPMGPEHQBTPHSRQDJJFZKEABBUODTROSMHKCCUXPNGLYZXFNYJQVXDEMWIFECLOEAPEOSULAPHSVJBKNDPAITCXVYRESFQHXVTOVZRWCCUWMLZDBJFCSGIMSVFRQOYKVPYRWNIGTIRYWDXSEJVXZWOGIMTGINQROSTKEOBDWJJNRNFHAAEFVZLC");
    msg.description.assign("TFHHOQEBLEIKJQWVJFSDURGUDGTIVQCNLYRWIOBNHCTIAOLNWUVZOLIDHRFJWUUUHJYVKACCQKRWJ");
    msg.reference_frame = 52U;
    msg.leader_bank_lim = 0.9352819131497031;
    msg.leader_speed_min = 0.8550751963924824;
    msg.leader_speed_max = 0.4872896562718678;
    msg.leader_alt_min = 0.5884585846415716;
    msg.leader_alt_max = 0.47715099080832535;
    msg.pos_sim_err_lim = 0.531145152505552;
    msg.pos_sim_err_wrn = 0.6148278549011595;
    msg.pos_sim_err_timeout = 44229U;
    msg.converg_max = 0.8466443004864078;
    msg.converg_timeout = 35483U;
    msg.comms_timeout = 45213U;
    msg.turb_lim = 0.14509179922584403;
    msg.custom.assign("OWCEJPCJZDXWGUGEFTTENLYBLREEOWQWFCIXKUMTDHIZYUSGOBHIVGGPWLCFKTHUWDAPPAMSHUPAPHGUUKLKHJETZYZPLTWIEZRNXVAFMZXGQMPVCNXSOIRAOZEJSYKTJABLUINUAOJBQVIBRNSHMN");

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
    msg.setTimeStamp(0.31434023404054534);
    msg.setSource(29022U);
    msg.setSourceEntity(212U);
    msg.setDestination(42849U);
    msg.setDestinationEntity(200U);
    msg.timeout = 45964U;
    msg.lat = 0.24988451415436252;
    msg.lon = 0.41319261109582217;
    msg.z = 0.12802798151033135;
    msg.z_units = 13U;
    msg.speed = 0.046121130612841066;
    msg.speed_units = 95U;
    msg.custom.assign("YETFSHBTKKDMBIOCNSBUFCRATA");

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
    msg.setTimeStamp(0.5834297775681709);
    msg.setSource(24017U);
    msg.setSourceEntity(245U);
    msg.setDestination(38438U);
    msg.setDestinationEntity(130U);
    msg.timeout = 25441U;
    msg.lat = 0.25069807800993715;
    msg.lon = 0.7610639274889901;
    msg.z = 0.3718601275260811;
    msg.z_units = 84U;
    msg.speed = 0.10630900424689527;
    msg.speed_units = 217U;
    msg.custom.assign("XCYBTLPKHIUZYQOJVPUEQK");

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
    msg.setTimeStamp(0.6312789643813898);
    msg.setSource(18914U);
    msg.setSourceEntity(219U);
    msg.setDestination(65454U);
    msg.setDestinationEntity(34U);
    msg.timeout = 30404U;
    msg.lat = 0.08382400746077845;
    msg.lon = 0.8200882804648942;
    msg.z = 0.8506050796052849;
    msg.z_units = 201U;
    msg.speed = 0.77240141372281;
    msg.speed_units = 59U;
    msg.custom.assign("GDYZJXQTPRASAETYECFXITOWKPWRA");

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
    msg.setTimeStamp(0.10534690552798731);
    msg.setSource(30768U);
    msg.setSourceEntity(4U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(203U);
    msg.timeout = 33109U;
    msg.lat = 0.33021391272529843;
    msg.lon = 0.4774637609398774;
    msg.z = 0.3215100486386685;
    msg.z_units = 200U;
    msg.speed = 0.7544070288162847;
    msg.speed_units = 3U;
    msg.custom.assign("ESLXYTIWTIBCFINJRJMSFAEJSAMXEZGCAWPODOYDMUCMXQUVSOKMHQCQWHPMKSKZYGHUIQSELIZEQWXMGBQUGCLYAXSLEBPRBNSDHVWNGJGWLRZDBTHGHFCSVFNKURHGGRBCDKPPTKKCWLDBJFQPZXOKTZUUPV");

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
    msg.setTimeStamp(0.2426999724322546);
    msg.setSource(19620U);
    msg.setSourceEntity(91U);
    msg.setDestination(10343U);
    msg.setDestinationEntity(162U);
    msg.timeout = 29879U;
    msg.lat = 0.2187611034584671;
    msg.lon = 0.11440408261618495;
    msg.z = 0.5636488955126092;
    msg.z_units = 77U;
    msg.speed = 0.204088903590112;
    msg.speed_units = 189U;
    msg.custom.assign("KWTPWDPQLEMGCFPVOKFEIRDSOUHDBVCIRYCUHJNAZEORKHYJVSQRIE");

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
    msg.setTimeStamp(0.16417870419204916);
    msg.setSource(56465U);
    msg.setSourceEntity(232U);
    msg.setDestination(61066U);
    msg.setDestinationEntity(178U);
    msg.timeout = 40231U;
    msg.lat = 0.21441237042871664;
    msg.lon = 0.481575171962876;
    msg.z = 0.9878599052428845;
    msg.z_units = 196U;
    msg.speed = 0.42659093834649664;
    msg.speed_units = 17U;
    msg.custom.assign("OMENSRKDZFYLUZGNVDXCTBXUEYDWQIQEAVCKPJXZFJDYLQXNUHSXIXQHTLNEERTWSEFOAUSZEBKMKDLUJJH");

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
    msg.setTimeStamp(0.2839208194580234);
    msg.setSource(23795U);
    msg.setSourceEntity(210U);
    msg.setDestination(41348U);
    msg.setDestinationEntity(7U);
    msg.arrival_time = 0.3950384288032125;
    msg.lat = 0.4607628316035598;
    msg.lon = 0.3514847495398149;
    msg.z = 0.002408778086678054;
    msg.z_units = 209U;
    msg.travel_z = 0.6343549568167678;
    msg.travel_z_units = 199U;
    msg.delayed = 148U;

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
    msg.setTimeStamp(0.17078241285616858);
    msg.setSource(19710U);
    msg.setSourceEntity(104U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(189U);
    msg.arrival_time = 0.04341730984964165;
    msg.lat = 0.5775498450669556;
    msg.lon = 0.6444685516031704;
    msg.z = 0.1764964887501771;
    msg.z_units = 18U;
    msg.travel_z = 0.0036757997319054603;
    msg.travel_z_units = 167U;
    msg.delayed = 224U;

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
    msg.setTimeStamp(0.19444641996062795);
    msg.setSource(51689U);
    msg.setSourceEntity(207U);
    msg.setDestination(5247U);
    msg.setDestinationEntity(218U);
    msg.arrival_time = 0.3508230543089762;
    msg.lat = 0.4270931266703154;
    msg.lon = 0.11940072338436158;
    msg.z = 0.874017887205956;
    msg.z_units = 63U;
    msg.travel_z = 0.4070219703005846;
    msg.travel_z_units = 47U;
    msg.delayed = 52U;

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
    msg.setTimeStamp(0.9073484484217081);
    msg.setSource(32727U);
    msg.setSourceEntity(72U);
    msg.setDestination(13043U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.9076422497961045;
    msg.lon = 0.05729243023777464;
    msg.z = 0.5204172038272764;
    msg.z_units = 64U;
    msg.speed = 0.5061220200963855;
    msg.speed_units = 115U;
    msg.bearing = 0.8756549615167989;
    msg.cross_angle = 0.6684787742711824;
    msg.width = 0.012259035395769557;
    msg.length = 0.0876621799909646;
    msg.coff = 126U;
    msg.angaperture = 0.029047228181342755;
    msg.range = 61945U;
    msg.overlap = 206U;
    msg.flags = 205U;
    msg.custom.assign("RARVFXZLETIJSPRTEUQYGKTJDSYBHHXMPTVZWQMOPXRCBLTF");

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
    msg.setTimeStamp(0.20245972156426217);
    msg.setSource(1908U);
    msg.setSourceEntity(114U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.36167005687725584;
    msg.lon = 0.5151398653182364;
    msg.z = 0.8255981667526631;
    msg.z_units = 109U;
    msg.speed = 0.4706847205692707;
    msg.speed_units = 249U;
    msg.bearing = 0.28851862299890463;
    msg.cross_angle = 0.42619410078880926;
    msg.width = 0.14683481332919857;
    msg.length = 0.3577880777407564;
    msg.coff = 133U;
    msg.angaperture = 0.8098808807101028;
    msg.range = 35384U;
    msg.overlap = 81U;
    msg.flags = 38U;
    msg.custom.assign("NMMCSODCZSTKXXLSQNUIWZEYKJMGWVFRSXRZDPDCGJKIZUJQNAOZJJOSPCVEBFCOGBHTPPDVKHDERPVTTTHKMQRGBGAJGEDHDIVJUGFBIJEYXWLEWSIEQTANZCFEDUACYKHVCPSLYQOLGDJOCPYYOBFMWYVCXMIFIWRHQQBAVBFOTHGAEKSMUZRWUZVURBKHLLFQNDNXKABGFRNIQZBVMLHEYOWRKRAPXJTIPITSWPMLNSYZXNHF");

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
    msg.setTimeStamp(0.5746505775554794);
    msg.setSource(20366U);
    msg.setSourceEntity(46U);
    msg.setDestination(18168U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.9864298555118236;
    msg.lon = 0.1946671532751908;
    msg.z = 0.2088152632309639;
    msg.z_units = 185U;
    msg.speed = 0.8843087887472976;
    msg.speed_units = 85U;
    msg.bearing = 0.37702545932236;
    msg.cross_angle = 0.44742796033039667;
    msg.width = 0.5180395507997883;
    msg.length = 0.862239036119769;
    msg.coff = 163U;
    msg.angaperture = 0.12233554813031466;
    msg.range = 58968U;
    msg.overlap = 203U;
    msg.flags = 254U;
    msg.custom.assign("ACQGBYEYBRWYATBWXBWTMDNSPHAZOSGHJEQKHQOAQSTCEXMDPSYHDBMPGWSOUIVQCJPXQDSKAPDMJIGKJLEYTZRBZFYSHUOCXEIOIUOAKHNFHIDUJNZMPQKGHPTWCVVXFCJLMFVYJQCWINQNJRZVMRTLRQDUERAEKTSCKHNIBXDFZOUFLZAZGOLIBEOCKHWALMFJYJEDFDGMLGVPWFIANUSUTUXVLCTXFRNVOZN");

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
    msg.setTimeStamp(0.8091590532515879);
    msg.setSource(65199U);
    msg.setSourceEntity(39U);
    msg.setDestination(35169U);
    msg.setDestinationEntity(4U);
    msg.timeout = 39874U;
    msg.lat = 0.5709220561742653;
    msg.lon = 0.3609166070766028;
    msg.z = 0.06607295850771444;
    msg.z_units = 168U;
    msg.speed = 0.4496372036661832;
    msg.speed_units = 220U;
    msg.syringe0 = 150U;
    msg.syringe1 = 92U;
    msg.syringe2 = 180U;
    msg.custom.assign("IBBBNEHKJSNHXSOCPKTSNVIMABOPPWTYGKTKBOPIUQMSDUJKZDUOUYNJHGEGKAAQXMGYUVQPTCSQRXWQJSYEACBYZIXDHIHWQMFBIHODWEJBFCQGFGQERMYIZLEEU");

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
    msg.setTimeStamp(0.8325545365386595);
    msg.setSource(48304U);
    msg.setSourceEntity(169U);
    msg.setDestination(60249U);
    msg.setDestinationEntity(147U);
    msg.timeout = 46147U;
    msg.lat = 0.5068460984746815;
    msg.lon = 0.46170519649748387;
    msg.z = 0.4757266320603972;
    msg.z_units = 155U;
    msg.speed = 0.10085398663264278;
    msg.speed_units = 68U;
    msg.syringe0 = 28U;
    msg.syringe1 = 237U;
    msg.syringe2 = 226U;
    msg.custom.assign("YDRRIIGMQHCFTFJAJSKBERXAPSVIACLYJGDBEUAKMPHEFKCILLBGZCOZQBLONADNWMUULQUPKIZTRDHUOCQQCYXVZIJJAJWTUEKALF");

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
    msg.setTimeStamp(0.08562960870116165);
    msg.setSource(62175U);
    msg.setSourceEntity(149U);
    msg.setDestination(61320U);
    msg.setDestinationEntity(32U);
    msg.timeout = 58470U;
    msg.lat = 0.576384884335442;
    msg.lon = 0.5807636858903905;
    msg.z = 0.5950896165964716;
    msg.z_units = 84U;
    msg.speed = 0.3746836215321745;
    msg.speed_units = 13U;
    msg.syringe0 = 4U;
    msg.syringe1 = 52U;
    msg.syringe2 = 0U;
    msg.custom.assign("NWMOUOJKBEJXBEZXFKWRGFKDZDSOKQTJEKHAMKTVOGZQESNMYUHBEGCSSVUHESJFCASIOGSIXRXQMLNRWJCLBXFDZYOTAJFLIAUJFTRPNPYLRPQBZWWNWHFNWNRMAVDAQANTAQGVBWTINWMSPYYHCBTXOFAPOVIGTDYKZRLMHLVEPXICDPYUKCGDVZFZYIIGVLNUJPZYQCHLA");

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
    msg.setTimeStamp(0.8121922091875761);
    msg.setSource(3884U);
    msg.setSourceEntity(249U);
    msg.setDestination(34925U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.09530347061905264);
    msg.setSource(39483U);
    msg.setSourceEntity(143U);
    msg.setDestination(62219U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.6307525796336666);
    msg.setSource(39426U);
    msg.setSourceEntity(168U);
    msg.setDestination(1394U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.7359420439461027);
    msg.setSource(29659U);
    msg.setSourceEntity(43U);
    msg.setDestination(16042U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.40977793427385223;
    msg.lon = 0.3492074780053981;
    msg.z = 0.23586463115581646;
    msg.z_units = 96U;
    msg.speed = 0.32924091143684064;
    msg.speed_units = 247U;
    msg.takeoff_pitch = 0.9868253022172667;
    msg.custom.assign("HFLOMUSHXKCHHNZWNWBBWTSYJEFFSVPNCWTFPBTOYODQNFCMCLZSZLKWMEREUQOIKGBNEIAFMJGVXNVTUAYELIRSIBHADXPVRTDUAAPIBKSDJGRPRXHZVPGRHDGNJ");

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
    msg.setTimeStamp(0.3543188691309115);
    msg.setSource(50199U);
    msg.setSourceEntity(177U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.626868466350577;
    msg.lon = 0.882686620045089;
    msg.z = 0.20969604004560527;
    msg.z_units = 63U;
    msg.speed = 0.00280035279348545;
    msg.speed_units = 44U;
    msg.takeoff_pitch = 0.2856965103090112;
    msg.custom.assign("XJWRGFXVKFSJDIRZOQOCAQBCDAEATKLOUOHLSVRXESBXTYVZGPPONBJDBIJKNNHDKRMWRNFLUJHUTECQFXNCSSFDQQZXOWKUAHYBEKQJFGQARXLOMTYF");

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
    msg.setTimeStamp(0.5311845412204992);
    msg.setSource(40534U);
    msg.setSourceEntity(39U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.03839731353854425;
    msg.lon = 0.2676158824936279;
    msg.z = 0.5352406847157339;
    msg.z_units = 131U;
    msg.speed = 0.4068380465389929;
    msg.speed_units = 17U;
    msg.takeoff_pitch = 0.12664546852126746;
    msg.custom.assign("KJUNVJQPXWOEINOFWDSBTBBVOJZNIETW");

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
    msg.setTimeStamp(0.7947374222036051);
    msg.setSource(7193U);
    msg.setSourceEntity(70U);
    msg.setDestination(4847U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.10045643652959457;
    msg.lon = 0.4779509665803042;
    msg.z = 0.648345606155682;
    msg.z_units = 195U;
    msg.speed = 0.611270520203431;
    msg.speed_units = 232U;
    msg.abort_z = 0.4011624322364048;
    msg.bearing = 0.46306876060426505;
    msg.glide_slope = 192U;
    msg.glide_slope_alt = 0.5930212971310788;
    msg.custom.assign("OCLVUKVFSZKCUZPPDSFODKHTIPDWRILSHBHCQGOEGSKJXQPCKGXGLJQVNRBAYXMGECLQGPGDEYBIBHEJYWCUFESXFEDOHBRZNFQKBCRTAVMAQURUDTRWOPHJFBGWBIZWYIGEPPCDFQINCOXXNMVZKWBENYMUEZLWKEMASWJJSHOTGIOYPYNVRAMXNR");

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
    msg.setTimeStamp(0.022218706628686302);
    msg.setSource(48064U);
    msg.setSourceEntity(144U);
    msg.setDestination(57044U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.02903836757120526;
    msg.lon = 0.6746414870082865;
    msg.z = 0.994597544917876;
    msg.z_units = 195U;
    msg.speed = 0.930047585658943;
    msg.speed_units = 16U;
    msg.abort_z = 0.5290551957207011;
    msg.bearing = 0.7805842229189666;
    msg.glide_slope = 172U;
    msg.glide_slope_alt = 0.9890483148060037;
    msg.custom.assign("QZGHIVSRBXZLEODWTLGAECIBKDYVFQICBXFYBSDIILTVSNYUBMQOWKZDKQVPNCQMXLPNLKEZAPWFJZRJNXIVGWQPTRORHCKRTRPJYRHNYEAGZUZDBOEWJGXQOUGQDPWSBCOLAMAUMXMCSCIUVDEZGAYOUFFPMHUFLSJKWPRDOJJHIYNWBBYNKHZVPHWTCUEA");

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
    msg.setTimeStamp(0.30233491303381277);
    msg.setSource(46178U);
    msg.setSourceEntity(126U);
    msg.setDestination(26741U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.6671667483236331;
    msg.lon = 0.23325157931819607;
    msg.z = 0.875364780839727;
    msg.z_units = 228U;
    msg.speed = 0.009192195458226471;
    msg.speed_units = 209U;
    msg.abort_z = 0.9753061152129854;
    msg.bearing = 0.32461280130024206;
    msg.glide_slope = 49U;
    msg.glide_slope_alt = 0.14615827231243128;
    msg.custom.assign("BXWRFZACGIWVXONONTDDQWQRBIBGPAWWGSBUAPRARQBTKUMFUEZNNXZYRJZSUOGUXLIEBAXLAKJFRTVQKMHDBHPTWPGXCEIOMGKSSYDLDDKXELMPQJYKTLIYPCLHVCWOQPNQHCHCNTFQCRXBH");

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
    msg.setTimeStamp(0.9947391474422612);
    msg.setSource(22573U);
    msg.setSourceEntity(71U);
    msg.setDestination(59223U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.5117013677402988;
    msg.lon = 0.0224619666869994;
    msg.speed = 0.7977502685892571;
    msg.speed_units = 33U;
    msg.limits = 43U;
    msg.max_depth = 0.17183381067693748;
    msg.min_alt = 0.6752020886311777;
    msg.time_limit = 0.1506926205422483;
    msg.controller.assign("FSMYAZNRKBSQRMZRDKFXEWUSFHOCDBXSRXAUVVHMF");
    msg.custom.assign("PHUYLOARMQOYJCSDTTQHWFURUROHIRCLGDYDMMENSKYKVFZMOYZEAVSGPTKAZFLGFZHXDVQOTRQWIGPESPWUMSDFSQNATGPKAGMLOPNMNXUWASBRHDVAQBVZZKJJXNHILEWNLNFVSVCXJRBCLNJJIQPUCOPKIYKWHGYTFAJXYSGJVEUUPDCXMJIEWCTDHGLRETRIHUPMBZLWJMBXRVDBKAXZTXKOFWB");

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
    msg.setTimeStamp(0.6284258517561081);
    msg.setSource(6768U);
    msg.setSourceEntity(253U);
    msg.setDestination(64220U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.7855211794196055;
    msg.lon = 0.6309364736439768;
    msg.speed = 0.6524038572819765;
    msg.speed_units = 140U;
    msg.limits = 181U;
    msg.max_depth = 0.2545160306940861;
    msg.min_alt = 0.12933170259324211;
    msg.time_limit = 0.06386761913253136;
    msg.controller.assign("VHRTLDJWELEWBITSHBQAZPDTGUFXZOOQIZZQBCNSCZLV");
    msg.custom.assign("UXTBTZKELALJCVXKUKSJYHQDHBJJDXDPWKIRWNMPDIOREHWPLMLFHSBMEEMMRSSJVBCIJUIGFLFWTUPCWUYSFGTUYVAQXTNYIBEBKAFVZFQQLVRPLBIJPNBKGXGYAWAXCMAQIWDOIAUJSVEZTPZNZUWNWCGXMHPZQTFZHVCI");

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
    msg.setTimeStamp(0.510750627482079);
    msg.setSource(3315U);
    msg.setSourceEntity(130U);
    msg.setDestination(61920U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.3357989171008161;
    msg.lon = 0.7562633604546863;
    msg.speed = 0.46102401603301124;
    msg.speed_units = 81U;
    msg.limits = 129U;
    msg.max_depth = 0.3806900423318611;
    msg.min_alt = 0.6496319206486719;
    msg.time_limit = 0.21387254347588125;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.774530672756571;
    tmp_msg_0.lon = 0.08544515585638379;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ILKRTJAPFCQPUPJFLVRNTCAXMCLMVDJEMBENQULOMTJWEQRXISRNGXDFWTVPSXPTFUEMYKCLHMFDOOCHOVLNBOCKZALUMHHPYZOBJRCTSMYKXTDVHEJQWBPGZSRLKZNGSJXVYPIDWCAPLGAOHFXKYSEBDKGOBUDUGKDIQBCYATSQKTEWAJLGZRSZSHFKRDGEHZZQGIQWYIBQMAYIZWIXN");
    msg.custom.assign("OPJPKSXSMUJULZOYFQIBEBVHRLXHKGFPAAOXNETMWMNDNCYYFFOQVHRHUTSFDEKLWVIODILKSGYRQRGBCFEUGVAELBBCMQTPNNQNLRWTCCDSSTGOGMFIFHYTDPBLQWIJXYPFJWKTUXZWNOMUDGBUVQZERMQHYPQCGAECIXTIBNJKXAOMGDBBAH");

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
    msg.setTimeStamp(0.22573203234640793);
    msg.setSource(53985U);
    msg.setSourceEntity(173U);
    msg.setDestination(927U);
    msg.setDestinationEntity(21U);
    msg.target.assign("SMAKMPDTLYBJGWMZDAFPNUOUFSUPHQHSBGHAZDQVJWQIVGLWMBPVSBQCHKTTAEKODXEZPFCRTHJUEECICAMUXTXFRLOIYNKWPAARFPBZWXWDGNOYVTTOILRKILQJFNQXZEDVJYWXSCDZRSCWOMVXNJWBFZHQIUIXPG");
    msg.max_speed = 0.9856264392619202;
    msg.speed_units = 80U;
    msg.lat = 0.8782318000004015;
    msg.lon = 0.35027565354922285;
    msg.z = 0.12818849049870484;
    msg.z_units = 24U;
    msg.custom.assign("OONWYSLFIMBUOSZRK");

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
    msg.setTimeStamp(0.4162175806642192);
    msg.setSource(15471U);
    msg.setSourceEntity(121U);
    msg.setDestination(14181U);
    msg.setDestinationEntity(149U);
    msg.target.assign("HTODPSLQMJUMYAAMIXUWRIJICGGJCMSUYIVHPUQLSLJZZNNBSENQLZJFWNCQSYGROBCIULYZSMVKSZJBEXCJWRRGSUZIGOBWVHRLKOTLUGKVLVVABCVDRUKQIYYGWQXCTUHEBETRKVJPTFZMXXD");
    msg.max_speed = 0.25317994191956494;
    msg.speed_units = 111U;
    msg.lat = 0.49510515617294615;
    msg.lon = 0.13344220580732002;
    msg.z = 0.29020100553801653;
    msg.z_units = 136U;
    msg.custom.assign("FPTEEHLUOVMAGMOWDFAIFPCZSPJPJFDEQQGQZCOZBYMTOQTGTYSDIZKNWXCLJMPMZIUHJLFLRSNGAHPCDZQFDXGTVYRVUICXAOVMMZCRAPDGBYNXPXQLRYYEXHNGJHWHJUXVWKHCBECYIJULKOEOBHHYDIOOBAWZMNXNFITWCQRTVZTWAXVSDVNLIKQSBGXKSKUARS");

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
    msg.setTimeStamp(0.12313058976669444);
    msg.setSource(37316U);
    msg.setSourceEntity(147U);
    msg.setDestination(21413U);
    msg.setDestinationEntity(206U);
    msg.target.assign("LAMTJRNGSRRPVKCSTAKQPOSYCKOXMNEKWKZLAHH");
    msg.max_speed = 0.5710844550170084;
    msg.speed_units = 43U;
    msg.lat = 0.8342070540839559;
    msg.lon = 0.012351954062722603;
    msg.z = 0.5213214891619962;
    msg.z_units = 50U;
    msg.custom.assign("VCAFTBDXTUMPBGDBRCRFMYUEZPWZHQCDLRVSKOPSDKITIVJYSPJKDGLEMHQJQAHDQFETTWDFAGNHJNTFKAPOAIUQNIKVEVXOSCCEYPOEVWNKLYTWCYRXJBUMUHVNHXCMZJBGTWYLNBKBIODGMCJKOQTWABINRVANAKPSEOMWFRKZUBLLCYXAVIXEHEXZPHSJJOIRZQUYRQGPZHELISNTHZFGOCWZFSFXNFBYGUVAUDZ");

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
    msg.setTimeStamp(0.9151663491270225);
    msg.setSource(46396U);
    msg.setSourceEntity(157U);
    msg.setDestination(60473U);
    msg.setDestinationEntity(121U);
    msg.timeout = 34888U;
    msg.lat = 0.45003388607861416;
    msg.lon = 0.36841239068410037;
    msg.speed = 0.9702634694102668;
    msg.speed_units = 180U;
    msg.custom.assign("ZFVIBULJVFKSZQROGHEBTAAEVRTSBPMNDYCXCWPDQTSGHMZMOJCJARCAHUXFROQILRFJEGHDTQYQISPPPIQZEBTCSFNC");

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
    msg.setTimeStamp(0.7700521043420621);
    msg.setSource(61876U);
    msg.setSourceEntity(112U);
    msg.setDestination(59910U);
    msg.setDestinationEntity(122U);
    msg.timeout = 15311U;
    msg.lat = 0.7219163364300469;
    msg.lon = 0.869158805018873;
    msg.speed = 0.6630811181808126;
    msg.speed_units = 146U;
    msg.custom.assign("LJHFXXETYHZTGDBTOKKNJOBMRLISZOXODSDHFFBPJGABJJSRNVZEJEHNTMLZVIOZQGBSFRRAKFXBQZALIBHIOTKCUWO");

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
    msg.setTimeStamp(0.26585255651677464);
    msg.setSource(23580U);
    msg.setSourceEntity(186U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(170U);
    msg.timeout = 40383U;
    msg.lat = 0.049690198632393656;
    msg.lon = 0.6779157819710617;
    msg.speed = 0.5471113689211772;
    msg.speed_units = 74U;
    msg.custom.assign("QPTFFZVZZMYBZVADPWUCBAALMJYXSGJBVVCWYHBCFYWQHEKBPSAIPSLMISXGFGFBYJQUAJXLCGDKWUTMRMTDTEURXTLPJVRWZXKOSSWBDOLMVG");

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
    msg.setTimeStamp(0.9348842525430288);
    msg.setSource(46808U);
    msg.setSourceEntity(135U);
    msg.setDestination(54442U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.7170931443387327;
    msg.lon = 0.12910296623524364;
    msg.z = 0.8518267515621691;
    msg.z_units = 9U;
    msg.radius = 0.6984442076177179;
    msg.duration = 29240U;
    msg.speed = 0.41723678539670717;
    msg.speed_units = 125U;
    msg.popup_period = 28978U;
    msg.popup_duration = 7153U;
    msg.flags = 225U;
    msg.custom.assign("VLZLQMYJEJCGFNUJHIZSEHWNBVVEBPRXANDSKWPYVZONFTNCQYGYSZORQWNQKXLWKODAGWCPPOAUHWMLIBBUTTODLCYLMYLMFSEAGIXLZDCVREJAXRIVKSMADCJXEOGOUFHPSVHSWJIHUVZQEPSQBPAIBXYINHRFNJKRTRHUFGQZRPSMDOYQQIEWDEGMGTOTWTCATBJ");

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
    msg.setTimeStamp(0.5946382552147671);
    msg.setSource(60983U);
    msg.setSourceEntity(84U);
    msg.setDestination(39432U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.40403605279231003;
    msg.lon = 0.8310540942218506;
    msg.z = 0.612026662724048;
    msg.z_units = 89U;
    msg.radius = 0.6604697975749264;
    msg.duration = 191U;
    msg.speed = 0.5889902026933854;
    msg.speed_units = 31U;
    msg.popup_period = 13142U;
    msg.popup_duration = 43133U;
    msg.flags = 243U;
    msg.custom.assign("PJOCEFJKXM");

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
    msg.setTimeStamp(0.7722740299089202);
    msg.setSource(7851U);
    msg.setSourceEntity(253U);
    msg.setDestination(10371U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.005584898624228951;
    msg.lon = 0.4627414849356968;
    msg.z = 0.006142345583820208;
    msg.z_units = 42U;
    msg.radius = 0.579421528576861;
    msg.duration = 52783U;
    msg.speed = 0.2859918518220661;
    msg.speed_units = 117U;
    msg.popup_period = 5629U;
    msg.popup_duration = 60102U;
    msg.flags = 125U;
    msg.custom.assign("PBBNWAHODMPEXUVXKNZGMPCABHKZHYCNLRPNQSAHSEGSFLTMFFFXSQURKATETWZYTNFIYBVWBBGORYPZCPVJYENBZHVXENDVSYRPXWEEVGLZRLLGKEWYJLIMUUSVBCETDNCHBVOUZHLPGJQJZIOFSTVKOATOWMYARDCDSXLEQRWUIQQNDKTMGDWXIUTIGFYQJUFMVIYDGJR");

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
    msg.setTimeStamp(0.07149339167143354);
    msg.setSource(45619U);
    msg.setSourceEntity(6U);
    msg.setDestination(45562U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.660772351003057);
    msg.setSource(62959U);
    msg.setSourceEntity(13U);
    msg.setDestination(17096U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.2793222534095572);
    msg.setSource(35371U);
    msg.setSourceEntity(50U);
    msg.setDestination(12295U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.13067354952107213);
    msg.setSource(7120U);
    msg.setSourceEntity(74U);
    msg.setDestination(53287U);
    msg.setDestinationEntity(215U);
    msg.timeout = 7641U;
    msg.lat = 0.28412584734727153;
    msg.lon = 0.21931774630608103;
    msg.z = 0.8298982994626909;
    msg.z_units = 54U;
    msg.speed = 0.6538082196420595;
    msg.speed_units = 44U;
    msg.bearing = 0.864774449472876;
    msg.width = 0.3839228808011521;
    msg.direction = 254U;
    msg.custom.assign("WPDADYLOBBQXXGZEIGWWCKGWXCSYJZKZULAEXTLTDZWTVUNQRFHJCEQANISSQGXUKXUVXEJYJMIWQGHJSWOSLJFBTKRINGPXUIIVUYMKYMLCLBDJMRCMNCTFZPROAAFGYOLZDKPEJJBNZDGWYDKKFBYGLAOFRVHVMBQMMCJHXHUOTBOZAH");

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
    msg.setTimeStamp(0.8494626847089081);
    msg.setSource(56453U);
    msg.setSourceEntity(253U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(56U);
    msg.timeout = 43330U;
    msg.lat = 0.9705646102301398;
    msg.lon = 0.0755957829055236;
    msg.z = 0.8625967873383706;
    msg.z_units = 250U;
    msg.speed = 0.0328694418120562;
    msg.speed_units = 111U;
    msg.bearing = 0.31192849782911813;
    msg.width = 0.17807043919920507;
    msg.direction = 20U;
    msg.custom.assign("FLNRQLTAAWCDODDNKJWYYUKGGOOSBPSRIOTHGTLIFFJJSLQXALGQCOWEBYFWMCIFPKCCOSRLSIWIHUGQCMZJKFFHTVFXGDSKBBUZVNMXNRTCVZFHXWPWRZEUEQHTDYXXYROYMKKHPDPNBCZEEDUMGOFLITREPHATGESNAIPVRJMSTJISUMZJWXQYVMLVVQYBTINVPAGEQUAPXHABXEZCOWZZUONXIDJQARQVBGLNJMLHEYW");

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
    msg.setTimeStamp(0.6613073388432298);
    msg.setSource(19180U);
    msg.setSourceEntity(125U);
    msg.setDestination(52397U);
    msg.setDestinationEntity(48U);
    msg.timeout = 61445U;
    msg.lat = 0.9726906804008137;
    msg.lon = 0.3871594406294582;
    msg.z = 0.5431982715889504;
    msg.z_units = 111U;
    msg.speed = 0.31967165672936726;
    msg.speed_units = 73U;
    msg.bearing = 0.8119485308747367;
    msg.width = 0.9010362572829463;
    msg.direction = 59U;
    msg.custom.assign("TNRZSUJPRFSQBPPONKDGEYHZPNOTRXXQJMFFKXBWKOEBIUVWONKNJCGAAVIGBABQBHIHFILMZHLUFUSZZFFKXFCCELMWZMLOQYWHJQQRTNBJYXBYUGEOURGQJIXCFRSJQGWZCGVLIYKAYPDPJLDCNCKVSOVDWQSNPNLBDHYFHTDPMHEDSVCUVOEKUTHNMXTUDIWZ");

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
    msg.setTimeStamp(0.13249854856538779);
    msg.setSource(5322U);
    msg.setSourceEntity(4U);
    msg.setDestination(60778U);
    msg.setDestinationEntity(168U);
    msg.op_mode = 155U;
    msg.error_count = 184U;
    msg.error_ents.assign("FYVKZCTCTXYHDRCMYHYDMJWNMOWALNNRFIIXFNEPSQQSZFMDTNALTSUUBWZEVTFTEASBDLMHFKYPOVOCQRPKASOEUAZZUCEKQYJIEIKOGRBUTMBMODNNILWIUUHFGKGAZHWPVIQYBPGIGVPVJXSJEQDGYLXDBURQCCZAVQGPHVDHEJQJUXXOHKICPBGJORFPYJLENLKX");
    msg.maneuver_type = 32376U;
    msg.maneuver_stime = 0.7452291663178524;
    msg.maneuver_eta = 39929U;
    msg.control_loops = 2223055626U;
    msg.flags = 25U;
    msg.last_error.assign("LKKKBUOFSOUJJCQECMUSWMEVGUMYLX");
    msg.last_error_time = 0.9472603197630634;

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
    msg.setTimeStamp(0.6513631281506302);
    msg.setSource(14946U);
    msg.setSourceEntity(37U);
    msg.setDestination(13459U);
    msg.setDestinationEntity(122U);
    msg.op_mode = 110U;
    msg.error_count = 18U;
    msg.error_ents.assign("SAWBKTBKNCKLNHGTYCYPQYKCSYQJQFLEXVXFJICRPZQPTWGKSEWDSLZREVMHTCDY");
    msg.maneuver_type = 21429U;
    msg.maneuver_stime = 0.2880937738256487;
    msg.maneuver_eta = 3937U;
    msg.control_loops = 2281138861U;
    msg.flags = 248U;
    msg.last_error.assign("HQXOXXRUSZFSKRKAJTYRRPHGTJWCOREREOKPUFAIKEILTILOYXROMSNGYNQUCMBSPJMEBDLNTAKUEDCHEZGENVWTGHBXUKBZCQXYYOXWQDVVJFULIGHSPFCSTDQLBJOPSCYVKFMJWQGTPSNRAOCHNLGQHZNPLWKMUASVDWZCWRJMUDDDRAWBAUFBBITVYEZKIJHYPAZJQBMDWKOINTAXP");
    msg.last_error_time = 0.8628967741624167;

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
    msg.setTimeStamp(0.8838400705555847);
    msg.setSource(5254U);
    msg.setSourceEntity(26U);
    msg.setDestination(22749U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 110U;
    msg.error_count = 180U;
    msg.error_ents.assign("XZUCNVFIADQKSTBRDJAHDTPRRSAHEPTJGQKUJNJXLGMEYX");
    msg.maneuver_type = 22027U;
    msg.maneuver_stime = 0.31836078491025543;
    msg.maneuver_eta = 15657U;
    msg.control_loops = 3845038934U;
    msg.flags = 108U;
    msg.last_error.assign("BYQOHYJTAFMEYVJXYIMDJNNJZXRXMQNTXBOONFIVYLBCBJNOUWUWTSCBNLACQYSEUWXNUVKFMCFLWMVHKCMJIKTSPEKJUDBPORGHASAPAWGSUYUMEKWPZMDRLHTHBTOQAHZKELQTBGFSOSSLUHXIPXLPRURAPQVCOKWGFZEYRDLIIMHTGJAABWDRKKVIRDBZOPVXJGEXVSFNGEQYVZMQGDPFVDLCTJLZDIGEYHRZWUDCPFRGFNZ");
    msg.last_error_time = 0.06223577917967826;

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
    msg.setTimeStamp(0.09847472887219155);
    msg.setSource(3012U);
    msg.setSourceEntity(92U);
    msg.setDestination(61967U);
    msg.setDestinationEntity(61U);
    msg.type = 44U;
    msg.request_id = 47728U;
    msg.command = 169U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.7800757101436495;
    tmp_msg_0.lon = 0.1960316442423643;
    tmp_msg_0.speed = 0.4034409194328208;
    tmp_msg_0.speed_units = 109U;
    tmp_msg_0.duration = 11710U;
    tmp_msg_0.sys_a = 59596U;
    tmp_msg_0.sys_b = 49868U;
    tmp_msg_0.move_threshold = 0.08991028874564622;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33751U;
    msg.info.assign("EUKIVXVBNKYIYVTEYZIVMLFYQNRPXKFZWJG");

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
    msg.setTimeStamp(0.45097236295210397);
    msg.setSource(17008U);
    msg.setSourceEntity(136U);
    msg.setDestination(50863U);
    msg.setDestinationEntity(130U);
    msg.type = 110U;
    msg.request_id = 38754U;
    msg.command = 221U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.47851809495874587;
    tmp_msg_0.lon = 0.932660929826487;
    tmp_msg_0.z = 0.6902072136963706;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.radius = 0.7261578225835276;
    tmp_msg_0.duration = 37459U;
    tmp_msg_0.speed = 0.21030970230288837;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.custom.assign("WCUMBDVZDFSPSYCTGOFCMOEDFLZQNJIRTPUWNRTRQSGKHLPYRCDWUZLHMEAEUODREBJWNGMEZLMBWIVCGGTPLOUBYJXDZESZSYRGNFFAZVPQFPGAATBS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34978U;
    msg.info.assign("WCFZSMOVKJOLYPLASMFQPLWECTVOQUOHKDRARSHAYDKFYOLHWQIDVCLYBHTMIGJTBDOTCQEAOWEMGXCDIXYXBBJFGZESMUIHAYGINCOSLMUZAZWUFZCTVIHCGOCRXRJZENRDEVXWHMDBVKQNSPKEVRARUFBAEU");

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
    msg.setTimeStamp(0.3105516342072313);
    msg.setSource(21379U);
    msg.setSourceEntity(122U);
    msg.setDestination(20921U);
    msg.setDestinationEntity(253U);
    msg.type = 229U;
    msg.request_id = 14743U;
    msg.command = 252U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 4718U;
    tmp_msg_0.name.assign("LQUJRQKZTWMHCAXKVJBZORADCQXPAVLSRGHJYFHNSMJSUBSDKOOIWVRZQYGCLIGAIMDJXVDXJWXRSWMTYPUKNUQDEENPVVHKBBAFEFFDVWWBOYEEBWZQDICKT");
    tmp_msg_0.custom.assign("KJZEBTSNZBVDEIWGLQMBRETSJJJLLRQEIWNYMYCUZWYXYEXNQGMCIALZYGOFSEBCSGXOGTQOFUDJGMRYFNAPDMWPHKPWZAKDDQMWRWUUAVXXBRDGBHPFOCD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53663U;
    msg.info.assign("OAZLIUUUAZCGKLRSCWWJOENFUKXQCUKAUUWCRTGRAAKXKCBIFFPRCBPYZRESMYBPDWMDKMIGWXENDPGWBRMUXZBBLGDHZDRENSNCLPSIHHFANODQBIATETCDSOTYZVOYLVJVVMQWFHCIQHDJPTSQSJFEFSYAFDLVOGGLQTQGJVTKPERVTIBOERQZHOXJHXKXZHIGYYOCUONASWLMEGMNTMJMYYVNQJFPI");

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
    msg.setTimeStamp(0.7805051584173287);
    msg.setSource(58314U);
    msg.setSourceEntity(62U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(60U);
    msg.command = 245U;
    msg.entities.assign("XDYELVEQGYDTASTAHKZILQVIKWEQLNKFHQOJJKVPRKSQYGDOOXOINGXONSOYOHHTTBVMZEXKNFWIUPQEZNJBTVJWPPUCWWGMCZGXWMILOCDRYUJXSFUGHDFRFABLYAKHPCURLILNFBKBUMWHLRPQMIXGAVHFWCISXEHXDME");

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
    msg.setTimeStamp(0.9316429870327048);
    msg.setSource(61515U);
    msg.setSourceEntity(132U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(39U);
    msg.command = 17U;
    msg.entities.assign("XZKMDLNMPQRFWZNIZIDXWRPKLQVEHFWJPNEJDOBOZDZTFTWQEOJSOKAVPBLYYFEYCLBUANKNFOUVLJRHRTOUAYEKRBMGGOEGQRCQITNYFVNTMEWIAAEPYZVYRDNQLGIIHNXOSBRALCXWYAHHHYSTCSQBABZOVUK");

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
    msg.setTimeStamp(0.6595485969887043);
    msg.setSource(52669U);
    msg.setSourceEntity(104U);
    msg.setDestination(51886U);
    msg.setDestinationEntity(99U);
    msg.command = 15U;
    msg.entities.assign("YKTXVHAORPQRUZSKYXCUBUDWG");

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
    msg.setTimeStamp(0.22151351655007423);
    msg.setSource(57665U);
    msg.setSourceEntity(144U);
    msg.setDestination(17253U);
    msg.setDestinationEntity(122U);
    msg.mcount = 82U;
    msg.mnames.assign("SODWFVMHRYXIKCZJTSOGRRIXQGSYWGESSQXKOFXDGKLNTFJBFGHZUJAABPZCUFZBWVXANXMDLLVYYFSLHPCPKJYARGTKIHHHLKQTWMOWAJNNEQMYNLCPYOBOVGPECPXBITIRTBLXZXDJUCJNRECQRVQWNNOYSKPQVHFUILFZZJEPPDQSNZMWZWDALWJSUOZUYDIHYRUROKAQKAVVEGHIGLJSI");
    msg.ecount = 113U;
    msg.enames.assign("JMNZSSFAADAZDGMSMEEKOAJPEVOHRXEFXPJUDBWBTKAIKJUIOGIEPYDMEBW");
    msg.ccount = 73U;
    msg.cnames.assign("ONJZEZBLVKQUADFMP");
    msg.last_error.assign("VJCVDRUHPWXQTKIMYQJLFUZMMQJNVFGXSIHHZYSMJWXZSNCXOEJUXNLOIZAWNWKIYDEJT");
    msg.last_error_time = 0.4985896585063979;

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
    msg.setTimeStamp(0.9554235649254028);
    msg.setSource(16839U);
    msg.setSourceEntity(107U);
    msg.setDestination(4331U);
    msg.setDestinationEntity(203U);
    msg.mcount = 99U;
    msg.mnames.assign("DUPEFTMRZEEOWOBXFQDSFFJCSJKPXKSUCJJCQTFXEHSGAVPRHCVLALWYYXSEHGGKOLQIKREITRDOIYXCPIZIAURPWLQUSWREWUKZNYIKBDXCEAVZNXVCYDZTAQODBGNHVHOZUTZASBBFWRKB");
    msg.ecount = 43U;
    msg.enames.assign("IZANXVSCMGODWVSINDUZIIIKXGQYFZYYERNJACHIFWEILARPLCEQHRTGBGLXGQCKGQHVTVQPWBLJAVTRZQWJIDMGQUYCKIYAMBKEXRUMPZWWYCOXOGCARFHHBQKOPJMJDEWWUKIENFUPUPJLMXTLCKFFXHDUTRSRVASRFFRZMXHJHVLZDJOCBNHKTJUDWKEOASVPBEYNDMXNNKLYEDSGDYYZZSWOESHBNCFQLBLBPPSTSXBOO");
    msg.ccount = 64U;
    msg.cnames.assign("AIBUGWGSBKWKKAIXLHTCCRYDDFMFEMVYOHRCAPUOLYZLOQQGCSPEKNQXXWZWTOOALJZYEFGSZCATTDJIXLBNUOQMZKREYQGKUEFSLXZEGIJGJNXAEHCHUW");
    msg.last_error.assign("OAQDEPFVASMEOZRPFENPILZIPCROORYTGSMZGBZDQAFMIJTPCZMSUAHGJLLD");
    msg.last_error_time = 0.5037619166018354;

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
    msg.setTimeStamp(0.04073702191221695);
    msg.setSource(9902U);
    msg.setSourceEntity(119U);
    msg.setDestination(46159U);
    msg.setDestinationEntity(152U);
    msg.mcount = 191U;
    msg.mnames.assign("DZRFJDSDMPSBTHMNCSJTBSQMQTAUXWEHWLVOKQJHUZJTYXQBOXZHPCBIYPMUXCGOIFLACNWRKFUGYRTAPQPQVDNVEISCEDLKMOQGLRIQUEUVRZCREQJUBYHZXTDZPVQIRVGRJAZBHKSWTGATMNKVWPAKYAFXNOLLJZFSUKEKDIZOHRCWGANMKWWGFMMTDLOGFFTOCBDSANXXHLBGCMBVVOJFLUXWPSJHN");
    msg.ecount = 159U;
    msg.enames.assign("WSAWHVDZSZKZCJKGELOUZPKRGFDSHBZJAIGNAWMHLHRNGTSDQHPXMKOYVXUGXYVCVITXBYGZHSGIBETVLIKRUCCIKMHF");
    msg.ccount = 175U;
    msg.cnames.assign("ARGSIZOGEPZLEPVJCSRGTSWHXHPDBWKAUPXEYCPIFXDEYGMXESVYKBWLVCCYNAUZLFCZTJGTIYQKQNPHXNEMBRQZMXYTRRIMFDDOPBGSFSKRVEZPNHAWAXVHCHGHFMOFNTZUMFMNRDARKMFWBTNLUIJOIJYYGKJEQITDNIJQAPVCWCWWSWKUXOHSZRJMDBKTQLOVFSJGHQITOUHSQYLRAUXQBXG");
    msg.last_error.assign("XFVHWMHSYTEKZOVTWPRXJBRLBUHAVSPWRJJQOXHDREZQFWTKNOOAWIHXVGVCINGFERUKYQFUMRQDJZNAYULYRNSSBVYMITELBWTNIHMGJDTCKXKLZWDEIXLGNKMADAPJOZPLOZUHSMQBIGNBLDUAYGJCQSPALDQAVECSDRFHECTASGUIZXIMJDRSDNYWZPIVSHTFNTEEGJWPCKPJZACMBFCIPBGOEFYXVQFZOMUHVWYKGUXOLCMKCR");
    msg.last_error_time = 0.5290291056765258;

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
    msg.setTimeStamp(0.43723636766649787);
    msg.setSource(64391U);
    msg.setSourceEntity(212U);
    msg.setDestination(11794U);
    msg.setDestinationEntity(189U);
    msg.mask = 151U;
    msg.max_depth = 0.5328568053294499;
    msg.min_altitude = 0.5235577401981502;
    msg.max_altitude = 0.6424423051528121;
    msg.min_speed = 0.6284942100685557;
    msg.max_speed = 0.059787799911019124;
    msg.max_vrate = 0.8688376977818719;
    msg.lat = 0.5795204579402095;
    msg.lon = 0.1487632054852266;
    msg.orientation = 0.7032132140294584;
    msg.width = 0.37594495314472354;
    msg.length = 0.5677363320036743;

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
    msg.setTimeStamp(0.2806550686057323);
    msg.setSource(9222U);
    msg.setSourceEntity(186U);
    msg.setDestination(11479U);
    msg.setDestinationEntity(124U);
    msg.mask = 214U;
    msg.max_depth = 0.9096221293096338;
    msg.min_altitude = 0.3276998787872174;
    msg.max_altitude = 0.10670818259632786;
    msg.min_speed = 0.7917860180654785;
    msg.max_speed = 0.9277631803231505;
    msg.max_vrate = 0.17370062316171164;
    msg.lat = 0.5508126772773161;
    msg.lon = 0.7396175872896333;
    msg.orientation = 0.7114299745299573;
    msg.width = 0.6428145113843288;
    msg.length = 0.7580029459019602;

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
    msg.setTimeStamp(0.5728055894384173);
    msg.setSource(32096U);
    msg.setSourceEntity(112U);
    msg.setDestination(63261U);
    msg.setDestinationEntity(236U);
    msg.mask = 128U;
    msg.max_depth = 0.3254436862527136;
    msg.min_altitude = 0.9417879373976598;
    msg.max_altitude = 0.08741723891088582;
    msg.min_speed = 0.08090661170190472;
    msg.max_speed = 0.2736933656702176;
    msg.max_vrate = 0.16963558559825864;
    msg.lat = 0.5025921243070453;
    msg.lon = 0.46851566468876615;
    msg.orientation = 0.5271474844101688;
    msg.width = 0.3800458942872774;
    msg.length = 0.3903928077340011;

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
    msg.setTimeStamp(0.26671370749390344);
    msg.setSource(64610U);
    msg.setSourceEntity(95U);
    msg.setDestination(28083U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.6874160719093724);
    msg.setSource(19644U);
    msg.setSourceEntity(207U);
    msg.setDestination(23803U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.5932622883635277);
    msg.setSource(2361U);
    msg.setSourceEntity(137U);
    msg.setDestination(37197U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.5680714766649154);
    msg.setSource(56491U);
    msg.setSourceEntity(0U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(138U);
    msg.duration = 36561U;

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
    msg.setTimeStamp(0.8013589090971207);
    msg.setSource(8038U);
    msg.setSourceEntity(210U);
    msg.setDestination(41210U);
    msg.setDestinationEntity(172U);
    msg.duration = 20087U;

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
    msg.setTimeStamp(0.7874939807636704);
    msg.setSource(16928U);
    msg.setSourceEntity(21U);
    msg.setDestination(18769U);
    msg.setDestinationEntity(237U);
    msg.duration = 40470U;

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
    msg.setTimeStamp(0.1148988468876958);
    msg.setSource(14133U);
    msg.setSourceEntity(14U);
    msg.setDestination(61199U);
    msg.setDestinationEntity(242U);
    msg.enable = 143U;
    msg.mask = 3953221676U;
    msg.scope_ref = 3772299842U;

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
    msg.setTimeStamp(0.011338919735985553);
    msg.setSource(50909U);
    msg.setSourceEntity(107U);
    msg.setDestination(33676U);
    msg.setDestinationEntity(246U);
    msg.enable = 49U;
    msg.mask = 3834009210U;
    msg.scope_ref = 1731923710U;

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
    msg.setTimeStamp(0.8152680770440597);
    msg.setSource(64075U);
    msg.setSourceEntity(54U);
    msg.setDestination(57177U);
    msg.setDestinationEntity(145U);
    msg.enable = 25U;
    msg.mask = 3698445786U;
    msg.scope_ref = 2719196466U;

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
    msg.setTimeStamp(0.30317018485132685);
    msg.setSource(49454U);
    msg.setSourceEntity(217U);
    msg.setDestination(8099U);
    msg.setDestinationEntity(121U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.3943968917074788);
    msg.setSource(45060U);
    msg.setSourceEntity(83U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(226U);
    msg.medium = 104U;

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
    msg.setTimeStamp(0.9263635843913248);
    msg.setSource(29724U);
    msg.setSourceEntity(16U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(54U);
    msg.medium = 86U;

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
    msg.setTimeStamp(0.9814856590617783);
    msg.setSource(6354U);
    msg.setSourceEntity(80U);
    msg.setDestination(32121U);
    msg.setDestinationEntity(136U);
    msg.value = 0.8005621843412732;
    msg.type = 133U;

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
    msg.setTimeStamp(0.7300562570139806);
    msg.setSource(12658U);
    msg.setSourceEntity(54U);
    msg.setDestination(64740U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7903052690006913;
    msg.type = 17U;

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
    msg.setTimeStamp(0.7635607239271568);
    msg.setSource(57842U);
    msg.setSourceEntity(180U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(253U);
    msg.value = 0.06726629444754562;
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
    msg.setTimeStamp(0.5843313918716941);
    msg.setSource(60081U);
    msg.setSourceEntity(41U);
    msg.setDestination(19164U);
    msg.setDestinationEntity(17U);
    msg.possimerr = 0.07190635642162957;
    msg.converg = 0.8007971787175615;
    msg.turbulence = 0.06936475256670038;
    msg.possimmon = 150U;
    msg.commmon = 197U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.8364811731326927);
    msg.setSource(50658U);
    msg.setSourceEntity(174U);
    msg.setDestination(19069U);
    msg.setDestinationEntity(46U);
    msg.possimerr = 0.23375175872230225;
    msg.converg = 0.09670350411286444;
    msg.turbulence = 0.8955363772375078;
    msg.possimmon = 37U;
    msg.commmon = 94U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.2293197294048095);
    msg.setSource(6848U);
    msg.setSourceEntity(176U);
    msg.setDestination(14192U);
    msg.setDestinationEntity(246U);
    msg.possimerr = 0.8275950406854495;
    msg.converg = 0.16237117524474787;
    msg.turbulence = 0.6693447207726834;
    msg.possimmon = 126U;
    msg.commmon = 217U;
    msg.convergmon = 252U;

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
    msg.setTimeStamp(0.63706515147482);
    msg.setSource(27737U);
    msg.setSourceEntity(17U);
    msg.setDestination(53772U);
    msg.setDestinationEntity(109U);
    msg.autonomy = 62U;
    msg.mode.assign("MTKEUOQUZKHYRFERRHXTYWIJPCXNVMQUIFXRVJUPZCOHMDVAOVOLJILHTFXLKTIDTAJYELGHNZOAOYYZLQSLPFVWWYNBCBOQVIDWNTLWCJMBHTHUJOKWAMYZXLAEAKIZIQLESPFDWBSPCEJHNOQVJUFHJGRXSBEQUPDGCIVDSQFYZARGNGZCGKWUCBENKGZDBKCOBSFAMXTMMMIAESYAVDUEHSRWQMFPPPXRSRXZPNQG");

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
    msg.setTimeStamp(0.9420764026228273);
    msg.setSource(25106U);
    msg.setSourceEntity(26U);
    msg.setDestination(8801U);
    msg.setDestinationEntity(4U);
    msg.autonomy = 187U;
    msg.mode.assign("QXMSFJSBTDMTKRENHVUJFL");

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
    msg.setTimeStamp(0.7265356861135975);
    msg.setSource(4229U);
    msg.setSourceEntity(95U);
    msg.setDestination(34893U);
    msg.setDestinationEntity(90U);
    msg.autonomy = 134U;
    msg.mode.assign("HYZZDQDTMRKLNLCNOUGTWMRCUEFGRVXHSHTKPOATJAXLKYEEILGLKJGQPUVTJXASETMMDCORYQJNOSJNSRFPXIWYFZRJIRZVKWVCXRTGMTFGOZKIKWUQEZPCUBXZYEQXNSPEAZMEHPIOYVBXLBVF");

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
    msg.setTimeStamp(0.39811594649984094);
    msg.setSource(2030U);
    msg.setSourceEntity(139U);
    msg.setDestination(23780U);
    msg.setDestinationEntity(102U);
    msg.type = 234U;
    msg.op = 112U;
    msg.possimerr = 0.94919867026068;
    msg.converg = 0.8802124944065082;
    msg.turbulence = 0.2877164887582183;
    msg.possimmon = 147U;
    msg.commmon = 78U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.2096437957045444);
    msg.setSource(63537U);
    msg.setSourceEntity(22U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(46U);
    msg.type = 238U;
    msg.op = 121U;
    msg.possimerr = 0.2243877219446584;
    msg.converg = 0.8594598018168507;
    msg.turbulence = 0.3429935035567424;
    msg.possimmon = 84U;
    msg.commmon = 73U;
    msg.convergmon = 86U;

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
    msg.setTimeStamp(0.8707993443839821);
    msg.setSource(64703U);
    msg.setSourceEntity(165U);
    msg.setDestination(45349U);
    msg.setDestinationEntity(130U);
    msg.type = 103U;
    msg.op = 94U;
    msg.possimerr = 0.805685691049696;
    msg.converg = 0.5155757714067172;
    msg.turbulence = 0.24104663127352954;
    msg.possimmon = 7U;
    msg.commmon = 209U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.11762872614195907);
    msg.setSource(38960U);
    msg.setSourceEntity(76U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(152U);
    msg.op = 126U;
    msg.comm_interface = 50U;
    msg.period = 28761U;
    msg.sys_dst.assign("GMWETEIRNGSMLLVSOFCPUHNJPQJQJEUVMSVIYZVLTUCAUSTVTVPYIETXUUPMJYIHNXK");

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
    msg.setTimeStamp(0.8336250387186389);
    msg.setSource(20291U);
    msg.setSourceEntity(2U);
    msg.setDestination(62732U);
    msg.setDestinationEntity(10U);
    msg.op = 119U;
    msg.comm_interface = 250U;
    msg.period = 63724U;
    msg.sys_dst.assign("MRXJJZZUBEEWXSRAHGDGPLNVDTPKIYCWLVCQPCHODEKSEDIFLSGBXSEWPQUUXYYJOBZPHMGTSMJIBPHRINQCCHUVLMANLDCFKJTMKZTLOISJVQCNIUCUMZFYDWNWONGYFWSQATZWXJWFNMARXERDOFZBKVTFMBFMTEBTXDZPESKWVNUKSOJNIBVRDGAGGVOOXDCYFQQUPIXTWQVFLKBAHJNHAMYLIKQPYZQGCHARGLU");

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
    msg.setTimeStamp(0.961376185877187);
    msg.setSource(63172U);
    msg.setSourceEntity(199U);
    msg.setDestination(53717U);
    msg.setDestinationEntity(198U);
    msg.op = 233U;
    msg.comm_interface = 120U;
    msg.period = 31370U;
    msg.sys_dst.assign("TNCMJVZQEBKXJKFXXBPNGWVUGPTTDIIFJLEAMPTVVQTRGTTHXMGSFKYUOQZWSCDQEQVLAHNHVRPEEJILSQYOKSPALFFJSMMJOSZWWBGPJXGYDAMUUYCOZIXGLKZEVNMUIWPXSFNSDVQIPRDZLUFHBSCHFDBUYE");

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
    msg.setTimeStamp(0.5081336023902558);
    msg.setSource(35407U);
    msg.setSourceEntity(196U);
    msg.setDestination(31612U);
    msg.setDestinationEntity(118U);
    msg.stime = 2086726655U;
    msg.latitude = 0.011645440773594862;
    msg.longitude = 0.31333245127138865;
    msg.altitude = 36268U;
    msg.depth = 38468U;
    msg.heading = 17922U;
    msg.speed = -17106;
    msg.fuel = -66;
    msg.exec_state = -74;
    msg.plan_checksum = 45830U;

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
    msg.setTimeStamp(0.9898255888864411);
    msg.setSource(3262U);
    msg.setSourceEntity(58U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(130U);
    msg.stime = 1364466036U;
    msg.latitude = 0.9968156560249384;
    msg.longitude = 0.2658470165211867;
    msg.altitude = 18239U;
    msg.depth = 23577U;
    msg.heading = 61737U;
    msg.speed = -20534;
    msg.fuel = 59;
    msg.exec_state = -82;
    msg.plan_checksum = 50354U;

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
    msg.setTimeStamp(0.6859863229699174);
    msg.setSource(28103U);
    msg.setSourceEntity(252U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(206U);
    msg.stime = 1860555141U;
    msg.latitude = 0.3649771872385287;
    msg.longitude = 0.14607432581377222;
    msg.altitude = 13210U;
    msg.depth = 53278U;
    msg.heading = 9075U;
    msg.speed = -7859;
    msg.fuel = 33;
    msg.exec_state = -127;
    msg.plan_checksum = 53242U;

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
    msg.setTimeStamp(0.7106518409717152);
    msg.setSource(11248U);
    msg.setSourceEntity(251U);
    msg.setDestination(46206U);
    msg.setDestinationEntity(164U);
    msg.req_id = 15323U;
    msg.comm_mean = 117U;
    msg.destination.assign("CGLVZDQOUSPZFCVLFZFUWNHWCXYDHNIGYAQTRXSREVHTRIFHZWDGNXLJKMCOVRSYMQRVPMXXPVNWESBTTCNIYELYMUZKOYOTHSCBDIYABHICYYLVNTMWBDRHMJUXPCXGACTJDQPAEKFUIBRULRGANKQKQBEUJRHEIHAJPLKAQGZPNSOTBKSRWEMOKCVBUJOQEFOOLVJPLIXEZJMAIUDZUDITSGQDAZAVBWPBQDXMG");
    msg.deadline = 0.19765282727610467;
    msg.range = 0.08852620903539954;
    msg.data_mode = 232U;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 4046869367U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YSWTVUZQQCAJTRQPQIRKFEZOIHZIAXDPGNNMPEDUNKCHBMRTUXLDBULRSVMGEDABRJVMZCCLGHYSPVFGDMISJQWDOBLEPTVOCUSIBILKVOKGQZLFHCGYJAKZEIDJNJVKZNYNXBAKYFYOZFGPGMUMXCQGUQWNAXAUINYMHPOQXWPRKZTYTHFHFWHSAYEH");
    const char tmp_msg_1[] = {12, 23, -47, 116, 72, -3, -116, 50, 12, -4, 36, 86, -59, -121, -64, -6, -127, -75, 70, -116, -74, -76, 32, 101, 90, 42, 88, 9, -108, -32, 121, 2, 0, 38, 1, 117, -82, -23, -122, -114, -42, -6, 12, 20, 39, 61, -48, 49, 21, -73, -22, -62, 101, 63, -42, 30, -49, -10, -78, 17, 97, -97, 79, 29, 36, -71, 15, -101, -52, -84, 83, 17, -128, -75, -53, -96, 16, -31, -91, -98, -56, 116, -2, 80, -66, -34, 28, 17, -3, 119, -3, 102, 15, 20, 99, 5, -7, 32, -24, 6, -112, -94, 61, -22, 122, 83, -34, -61, -57, -70, -1, 75, -114, -118, -74, -40, 14, -45, 51, -72, -67, 72, -108, 49, -28, -13, 90, -42, 92, -105, 28, -80, -92, 38, -100, 3, -51, 60, 79, -110, 34, -11, 47, -96, 9, -126, 83, 125, -74, -30, -46, 72, -85, -36, 37, -28, 86, 21, 54, 118, -40, -27, -99, 50, 41, -15, -49};
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
    msg.setTimeStamp(0.12058010131070929);
    msg.setSource(29442U);
    msg.setSourceEntity(125U);
    msg.setDestination(45221U);
    msg.setDestinationEntity(163U);
    msg.req_id = 50819U;
    msg.comm_mean = 69U;
    msg.destination.assign("DTTCYEJPBBIASICSZIERMNDFZROPMDCQVHYMMUUJINOYNRMQO");
    msg.deadline = 0.1616339989931319;
    msg.range = 0.49997060055089426;
    msg.data_mode = 147U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.41561609569750746;
    tmp_msg_0.lon = 0.19044280010971015;
    tmp_msg_0.speed = 0.45466129620795925;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.duration = 29242U;
    tmp_msg_0.sys_a = 12342U;
    tmp_msg_0.sys_b = 47401U;
    tmp_msg_0.move_threshold = 0.7313765286332384;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DSHJJOWGLELNEDBXGSJOODKVJVGANANSRAAVLQHJNOZZGWPRZDNYUTVUIGXIFKPYYKCDOBKPVZNBBWVVELDXPTQZWIBWPLFUCSNULQFPGOTYRWRMIQFRJBJAKUBPDCZGPOGYSATVZFQQLHIEVRHZLOEIBULSMXMCSTIBSGKHQLWCAFACXSCIE");
    const char tmp_msg_1[] = {-79, 76, 93, -45, -112, -99, -38, -57, -48, 28, 101, 108, -6, -2, -20};
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
    msg.setTimeStamp(0.9249598468373278);
    msg.setSource(20977U);
    msg.setSourceEntity(233U);
    msg.setDestination(3096U);
    msg.setDestinationEntity(26U);
    msg.req_id = 51116U;
    msg.comm_mean = 153U;
    msg.destination.assign("OGCUFQOGMBYN");
    msg.deadline = 0.14072790579199634;
    msg.range = 0.08446165859133248;
    msg.data_mode = 225U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.67277518925958;
    tmp_msg_0.lat = 0.6771698636397756;
    tmp_msg_0.lon = 0.4088132190655078;
    tmp_msg_0.z = 0.7746203440764216;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.travel_z = 0.8114281064390824;
    tmp_msg_0.travel_z_units = 41U;
    tmp_msg_0.delayed = 117U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HBYMXGJQDAUYGLCJWEBAIUXJKMNGORQXMVMXHP");
    const char tmp_msg_1[] = {54, -50, -32, -86, 16, -72, -97, 48, -44, -58, 96, 20, 31, 43, 35, 41, -51, 102, -98, -3, 12, -68, 11, -22, 17, -63, 71, 51, -101, 88, -53, -84, -98, -48, -57, 2, -61, -82, -127, -106, 9, -101, -103, 114, 19, 37, 10, -33, -59, 50, -122, -70, -106, 60, 105, -73, -15, -12, 102, -100, 24, -94, 86, -59, -92, -57, 27, -66, -38, -89, 93, 67, -15, -100, 31, -61, -37, -63, -107, 45, -73, -124, -88, -117, -118, 72, 76, 118, -75, -109, 65, 55, 43, 62, -10, 58, 77, -10, -94, -107, -108, 84, -93, -22, 88, -111, 5, -77, 73, -19, -23, 91, 97, -34, 24, 77, 31, 74, -122, -126, -56, -69, 83, 90, 28, 92, 119, 121, -128, -40, -81, -122};
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
    msg.setTimeStamp(0.8180341808866674);
    msg.setSource(16587U);
    msg.setSourceEntity(204U);
    msg.setDestination(8734U);
    msg.setDestinationEntity(16U);
    msg.req_id = 3102U;
    msg.status = 83U;
    msg.range = 0.3771284755633547;
    msg.info.assign("PKUCDVXILDBHBXDILVTWIZCSLEJYINJMKHDRKDUENBTXAZAFLHDZPWQJNLRUZMYQUJCOFGTJKBQESLFLOVHVPZBCPOYRWWRHRSUTFKUCGT");

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
    msg.setTimeStamp(0.4477609014929864);
    msg.setSource(28634U);
    msg.setSourceEntity(73U);
    msg.setDestination(27817U);
    msg.setDestinationEntity(43U);
    msg.req_id = 3105U;
    msg.status = 161U;
    msg.range = 0.09608681011956166;
    msg.info.assign("HXBDYTQDKMTRPABYTWMHCVQRSLXPQTAAJQBSNXNDVVOPQUNYJWAVXSFJVZMUIEJWLEAIOMRUWZRKBKEWAHMBFFPHLSYCGBQBOPKPGFKAJHJAGOEHIENNCTZUQOQOODCEDNFGOXIMZPTLZMBYNWENITSAXEJZNWIYEPATGCRHPRVKDVGFSUPLIUVWEXLZFOOCZTHYKBGIWCDHYGLRDXLGRIVMYSFRGR");

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
    msg.setTimeStamp(0.39841532696461746);
    msg.setSource(35952U);
    msg.setSourceEntity(45U);
    msg.setDestination(51896U);
    msg.setDestinationEntity(161U);
    msg.req_id = 21U;
    msg.status = 115U;
    msg.range = 0.8079990059835355;
    msg.info.assign("SIGTKGKXULCHNMTWIRROEAPNNCBNPCQMGEJREVFBCHIBHDSONVHXPVJPMUGPEEZOJSXLTLTMJGIOQDAVZGSYGJGZBSECWBNWXUTFMHLBSKAINKDRIKQCKVJOQJALAXCAJNWOZIQYRLBBZEHCEZZVPMZFFKRIXTFVQDITPDDAUVTNDYQUFDGAHWVWYFWJDWSEOQCUKTAXRZOBDLUKHS");

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
    msg.setTimeStamp(0.4736156499035111);
    msg.setSource(5944U);
    msg.setSourceEntity(119U);
    msg.setDestination(1162U);
    msg.setDestinationEntity(7U);
    msg.req_id = 40000U;
    msg.destination.assign("NIITONSJHVFFSHPGVYQVKPPQPPOYCLGZTRKNPYDZNEBRKCIZDLFEFSGNWQAFWQZBXAYNCMUPELXPSIACAVLJUFAFSBWLQBKAIEYDMUHLOSWVUKWCHTXDMYMXXXPNOTXBLHTRJGHATNEIAUXMVEGVSBUCHIZITHQNNLJMJQAKMZKFYWCQDQGRQKREHMKGDLSOYURCEPJOODKVWDVBZIOGJUWRGJWEBIEJORXJFUZMCBVYTSLRZBDRMDXFUO");
    msg.timeout = 0.8821718902418072;
    msg.sms_text.assign("GDBQXLDMXBCTRMQCBFKIRBEPUUNCAKZVOXPJRQWAVSHLTONSAZBXSEJOGKDILBXYXUVUGADCCJJNFZKOCATNMJTFLSMCPUMMNLEYBNFJGSSHRTLFTBOIDMQICRXAYPU");

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
    msg.setTimeStamp(0.5094866367154897);
    msg.setSource(13789U);
    msg.setSourceEntity(28U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(112U);
    msg.req_id = 17639U;
    msg.destination.assign("PUFCMEVHSXKWJQYNRDSCJDEVZNZIDZTQYZAODVHRXKGTLCTICRZPIGRYDGUDIEPGXXAJIXUXXKMCPYAWQQAOGBNJSHUFHONOSWKWIQJVUDBSLPQUT");
    msg.timeout = 0.05289367213191731;
    msg.sms_text.assign("UQKWPSJYTCWGJGAYBBOPRMZGETLEHRVYLBWIMSIMRAHYKHOCFFGCTOMYNQZQDNDBRWTUTLCDJWMEXMYUNULMAOLSPVQZFODJBRBFVMUWECVIPHPRZHCPEDATXZCPJDEHKONXXFKFIYULZIGUXWKQPWHNAQXGJSKVAOINGNUIQCOUEZCBXTRKBYVG");

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
    msg.setTimeStamp(0.13659143798868867);
    msg.setSource(28019U);
    msg.setSourceEntity(218U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(62U);
    msg.req_id = 45828U;
    msg.destination.assign("CQJUVZZTUBOVLQSEXFCGNUAJRCQBZWTFTQXHFTCSBMSPDIALJQXRNNDUCYUANUYAIPKJVKGGNMWHGWRHDPHMQOUZZTJJUGPMLWVFYBPABXXEZSJHAOQSGQYJTROKEOBAQLMXMHAGHYBILDKRCEDPJZDFVPKZRFDNWNDINTRIVEGMQYHOKUXCLBISCKCVLH");
    msg.timeout = 0.12515975411195412;
    msg.sms_text.assign("DAYPTVXATRCXKBTAUQRGMBZHYMDGLSWVVKPIVOBSESSROUZJUUTJVGAP");

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
    msg.setTimeStamp(0.599259680720094);
    msg.setSource(27395U);
    msg.setSourceEntity(95U);
    msg.setDestination(6212U);
    msg.setDestinationEntity(37U);
    msg.req_id = 37582U;
    msg.status = 193U;
    msg.info.assign("JZWASMJSAAIIJMMAMEQNBJRXGWCTLBGXRFGCVRQBRXSKQGPZLUQOPDWPIYOAJMQPOXLUTZQZUKHPEEICXOFDVCHGTVYLJDKIEXVTSXBI");

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
    msg.setTimeStamp(0.613902060445566);
    msg.setSource(35067U);
    msg.setSourceEntity(149U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(71U);
    msg.req_id = 9603U;
    msg.status = 198U;
    msg.info.assign("CHJQXMSMLMGMDEXQKYWBBBYESCNOVQVLJHAJJLDBEHWMCHTYVROEDTOTRGVZXNBDFOIIIIDTNKVSVQOAGPICUQOCXVSOUVWLLRUSKDHSRNJGFBMDPUZSQR");

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
    msg.setTimeStamp(0.21786077586094588);
    msg.setSource(25255U);
    msg.setSourceEntity(104U);
    msg.setDestination(7747U);
    msg.setDestinationEntity(57U);
    msg.req_id = 12235U;
    msg.status = 27U;
    msg.info.assign("ETUWDBAXAGTBHSDOMOFNLQDQSNREZHOBHDKVHPNYZSNMWGWLNRUWIOZJHGYVQNVZBMLVTKCZZRYJZPOGAGZYRYEYFYJTOJPQVFPJXWDHARMSOBMJPLFISLKUENMLDHWTSSXMTJLOBQTVXBGYWMJLQUGVCXDKLRJ");

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
    msg.setTimeStamp(0.4306789283178708);
    msg.setSource(24706U);
    msg.setSourceEntity(239U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(193U);
    msg.state = 112U;

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
    msg.setTimeStamp(0.4753699078527853);
    msg.setSource(34608U);
    msg.setSourceEntity(93U);
    msg.setDestination(25398U);
    msg.setDestinationEntity(32U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.6034542919770708);
    msg.setSource(41087U);
    msg.setSourceEntity(21U);
    msg.setDestination(12322U);
    msg.setDestinationEntity(245U);
    msg.state = 87U;

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
    msg.setTimeStamp(0.1536542870257246);
    msg.setSource(14781U);
    msg.setSourceEntity(11U);
    msg.setDestination(53730U);
    msg.setDestinationEntity(251U);
    msg.state = 132U;

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
    msg.setTimeStamp(0.2120578192159025);
    msg.setSource(45648U);
    msg.setSourceEntity(148U);
    msg.setDestination(14359U);
    msg.setDestinationEntity(229U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.3171979666254283);
    msg.setSource(44514U);
    msg.setSourceEntity(10U);
    msg.setDestination(55879U);
    msg.setDestinationEntity(66U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.8866684302191028);
    msg.setSource(36384U);
    msg.setSourceEntity(13U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(227U);
    msg.req_id = 58213U;
    msg.destination.assign("ZMAJMZQGEAIXXZMFKZFUYLPPUJFRBYESPLAVPDVUFGJBXWDMFSYWXUIBGWFWKSEMVCCASCMJQN");
    msg.timeout = 0.6277985927836472;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 854296062U;
    tmp_msg_0.lat = 0.5149859836080781;
    tmp_msg_0.lon = 0.4412758929389552;
    tmp_msg_0.height_ell = 0.5109368359642247;
    tmp_msg_0.height_sea = 0.5231794627440952;
    tmp_msg_0.hacc = 0.1532731863935859;
    tmp_msg_0.vacc = 0.11732597394793676;
    tmp_msg_0.vel_n = 0.14572684021606053;
    tmp_msg_0.vel_e = 0.12187522022680386;
    tmp_msg_0.vel_d = 0.25954252168345526;
    tmp_msg_0.speed = 0.17304938746563814;
    tmp_msg_0.gspeed = 0.5305963918215826;
    tmp_msg_0.heading = 0.40845529075854903;
    tmp_msg_0.sacc = 0.3793435429549119;
    tmp_msg_0.cacc = 0.17319467494434693;
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
    msg.setTimeStamp(0.31573268028015744);
    msg.setSource(64618U);
    msg.setSourceEntity(58U);
    msg.setDestination(57541U);
    msg.setDestinationEntity(40U);
    msg.req_id = 34642U;
    msg.destination.assign("LBMVIYRMWGVMXOXXSFGJYZCIAENKEJCKNZDSIPWDRVEVSDDAWUDUQFVYGGYLUDHRQBAQEVLVQBNHHBWLGFFOQCCKNQINALNYUDGFCPGAPHOZOLFT");
    msg.timeout = 0.6483228215358775;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 10350U;
    tmp_msg_0.type = 189U;
    tmp_msg_0.status = 69U;
    tmp_msg_0.info.assign("UTEVTJGLODCVASGECKSLPOVYKFDFJKHCCPSFPRXWBYDDWRYUXODLSSQGUIRDEIXGYTZVEIOKKORBAMJTAIMM");
    tmp_msg_0.range = 0.8771224477729919;
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
    msg.setTimeStamp(0.16597015727143172);
    msg.setSource(18942U);
    msg.setSourceEntity(213U);
    msg.setDestination(5598U);
    msg.setDestinationEntity(102U);
    msg.req_id = 22748U;
    msg.destination.assign("BTROGWNNSKRHJPQDZHCPVAJDCCGCDCYKZAWFGURFSCXIHOWKYLJFURIENVFOYZVUSVTQGERTEPLYMHOJAEMIOUUHLWTQBMUXRQFOI");
    msg.timeout = 0.11486706711803696;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 130U;
    tmp_msg_0.label.assign("JPSXDZUTSQAXVNTXZKBCAAHKGFJJJPEYAUNVQICPZFRIHDMULMSPCXQWFIYLBHODGSYMBZIVKCJB");
    tmp_msg_0.component.assign("HIMBOWJFMWTDVVGOVGQRZARJBCQXVGUWBDUKVFNEIFFQFISLXZHIQBPXYAKZOGPOXPBNUUKAYDUTBQTPDENNCPDVKRYMYZYMREWVETMBCHCIREYFXHQLJMTWQOEHRQZLEGCBIXSJZAWSRBGWMJZASMTPGCYFNWAKPMUSZLDPNTIRYAVYUKNHAGFJWECFLZYOSHLZIOOSTQEUHJOC");
    tmp_msg_0.act_time = 55528U;
    tmp_msg_0.deact_time = 56512U;
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
    msg.setTimeStamp(0.19326251879763123);
    msg.setSource(26394U);
    msg.setSourceEntity(32U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(84U);
    msg.req_id = 55304U;
    msg.status = 111U;
    msg.info.assign("LEWDTLOUJPLHMFRFKWNOHFEXCAVBNEENDPWOOXLFNWGBFZQRCNGHOLXZVIJTYOMHPCOACSYVKRZKFUPGPDZEUSVEAQFIQVAHDDYZQGYNAMHMMXBSGREUJZXEITLVSFQIXIUTLTLHJXVRWZSCSCZFQHPKDBLPSTZYIPTREWUNBMNQRMASRJNRBP");

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
    msg.setTimeStamp(0.59546917693826);
    msg.setSource(48900U);
    msg.setSourceEntity(195U);
    msg.setDestination(15645U);
    msg.setDestinationEntity(201U);
    msg.req_id = 59477U;
    msg.status = 15U;
    msg.info.assign("EADJFEWZOGIVAYCFXAEYTTJWDSYHQTQLBGUAAKEBGDRVNAXON");

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
    msg.setTimeStamp(0.3689860730909372);
    msg.setSource(56068U);
    msg.setSourceEntity(48U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(35U);
    msg.req_id = 29698U;
    msg.status = 67U;
    msg.info.assign("YXNXQYIGNVTGACNGMQXZIQURLALPFTNKRFATGOATDHKLLCRHCBGFSDUZXJORBIZTUHCEKKDEKMEFVREPKBWJYMVZGSBJNDGHJYEQWCUWKJPHIPNXEQUMIHDLSJRKBDTRWINEYKWONDAYZSEXMHXS");

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
    msg.setTimeStamp(0.4886307635968359);
    msg.setSource(34010U);
    msg.setSourceEntity(230U);
    msg.setDestination(14396U);
    msg.setDestinationEntity(73U);
    msg.name.assign("NWDSIBADRDGWJUUQLASMBXZQCYDKDSQRRKFOAKIGUFUVEUJCXIARFANGLVVCYWUOKNLHYQBNNXCGFDWMNDPDVTXCDGWEIJISFPKILZXSVHSTXAPBYKEHFTOGTGCGOOCGPLUZSFMXLQYUWHAPYVMJMNSFQVXEOQMJZNLKEEOBJWHQPNZCHHUWAYJQSHZVKCMEXLWYOXZJQEAKMBD");
    msg.report_time = 0.24754485959924477;
    msg.medium = 67U;
    msg.lat = 0.24731918387832252;
    msg.lon = 0.7340716106602453;
    msg.depth = 0.5221408336522013;
    msg.alt = 0.34114776464268803;
    msg.sog = 0.874267745380485;
    msg.cog = 0.6486405326438502;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.2923972214257352;
    tmp_msg_0.lon = 0.1509790696284411;
    tmp_msg_0.z = 0.3755085921543614;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.speed = 0.3213310946369172;
    tmp_msg_0.speed_units = 77U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3127720867091258;
    tmp_tmp_msg_0_0.lon = 0.8514942333576974;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LFFLDKENBZCJAPGWNSWIEVABEVZDODWTOXBCENJKYJPIQTREMETOXPSGSXRNHGXWPEAAVXQYLSUGQRWO");
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
    msg.setTimeStamp(0.7251996390136752);
    msg.setSource(59052U);
    msg.setSourceEntity(13U);
    msg.setDestination(13976U);
    msg.setDestinationEntity(239U);
    msg.name.assign("YRAHHLOGOUAYFQRBDOXWTXTLGDIOAOPKTOHHMRZCHIFBDROZXEKXTNMWKBYWSICXURJJBYFXLMCMAB");
    msg.report_time = 0.2588767612377212;
    msg.medium = 173U;
    msg.lat = 0.5054792537881149;
    msg.lon = 0.8403554283211802;
    msg.depth = 0.713998748513931;
    msg.alt = 0.5042980591614923;
    msg.sog = 0.6393228398440278;
    msg.cog = 0.22978253538117355;

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
    msg.setTimeStamp(0.588652752264831);
    msg.setSource(19668U);
    msg.setSourceEntity(33U);
    msg.setDestination(51697U);
    msg.setDestinationEntity(211U);
    msg.name.assign("UUGAONPWWON");
    msg.report_time = 0.4826350195956054;
    msg.medium = 79U;
    msg.lat = 0.7492618265877179;
    msg.lon = 0.9465620295490996;
    msg.depth = 0.6713034061492156;
    msg.alt = 0.7831742456145261;
    msg.sog = 0.870729463813921;
    msg.cog = 0.9714097509297184;

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
    msg.setTimeStamp(0.4922250724592673);
    msg.setSource(40294U);
    msg.setSourceEntity(190U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.46305781863372053);
    msg.setSource(51676U);
    msg.setSourceEntity(141U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.023342814977171722);
    msg.setSource(43063U);
    msg.setSourceEntity(150U);
    msg.setDestination(1414U);
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
    msg.setTimeStamp(0.6565507199994469);
    msg.setSource(12200U);
    msg.setSourceEntity(237U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("PZOIHZDFMLKDWEPRGYZFWABASMYHORASLGGQUYFFVMNJEF");
    msg.description.assign("BTBFBKYHOEKAJPNCAWQGYWETRVZSURRDJYVGOUQNSHVJNTZFDQXOCC");
    msg.vnamespace.assign("EZFOMYONGWCHSNTJORHTN");
    msg.start_man_id.assign("IITBOSYUCREWWFNFBOKCKXCFMTRGDYJFSGTXJQKDIDZHVYIATDOEHHWZWNPSLDZPMPVHPUROXFMNOTIMWABCKGEWCYTOANSIRIGLGYMYEHLTFXAMAWPFSJYQUFXAVWVPPRJQJUNCNCEKQDGNSGCJNBQMDZOZLBXXVLUSKJEDHPVOELVACLVJTRDKUWUBEAITAFLVYZSIQLQGRBR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GWRFALNIDUUYL");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 26500U;
    tmp_tmp_msg_0_0.lat = 0.12455960897935092;
    tmp_tmp_msg_0_0.lon = 0.14499325652792194;
    tmp_tmp_msg_0_0.z = 0.06817969093553788;
    tmp_tmp_msg_0_0.z_units = 7U;
    tmp_tmp_msg_0_0.duration = 55997U;
    tmp_tmp_msg_0_0.speed = 0.979599272743967;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_tmp_msg_0_0.type = 188U;
    tmp_tmp_msg_0_0.radius = 0.8303561943283829;
    tmp_tmp_msg_0_0.length = 0.1742811106487896;
    tmp_tmp_msg_0_0.bearing = 0.18247482133418114;
    tmp_tmp_msg_0_0.direction = 229U;
    tmp_tmp_msg_0_0.custom.assign("DLCKTQNEDVNHDKTAZCCGSF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FormationEval tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.err_mean = 0.25809344879935825;
    tmp_tmp_msg_0_1.dist_min_abs = 0.30481292994450826;
    tmp_tmp_msg_0_1.dist_min_mean = 0.6568725045442847;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::GpsFix tmp_msg_1;
    tmp_msg_1.validity = 37064U;
    tmp_msg_1.type = 94U;
    tmp_msg_1.utc_year = 9383U;
    tmp_msg_1.utc_month = 91U;
    tmp_msg_1.utc_day = 242U;
    tmp_msg_1.utc_time = 0.03692714383959117;
    tmp_msg_1.lat = 0.575539577846295;
    tmp_msg_1.lon = 0.3041249854410434;
    tmp_msg_1.height = 0.5277533150842815;
    tmp_msg_1.satellites = 127U;
    tmp_msg_1.cog = 0.9345314253990531;
    tmp_msg_1.sog = 0.14455866853852928;
    tmp_msg_1.hdop = 0.7887020154400591;
    tmp_msg_1.vdop = 0.41157714206805207;
    tmp_msg_1.hacc = 0.07984022625055831;
    tmp_msg_1.vacc = 0.03538881575482522;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3248517792358292);
    msg.setSource(20684U);
    msg.setSourceEntity(80U);
    msg.setDestination(36604U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("UGJXBKXQUFXOPYBNJRELQNFCGMUEKZRCAMRJOCFABMQAAHGKPMOULSZBRZVZNMUEOYWCFGQSGKCLHOMTKGFRSOOTJAHGIVESXNQYLHDSXUBNFPSZRARGVGXFBNFACIVZLTXVJYIWQTWEJIUSSVWAUDIKDDJXQVPTTTLLTLREIWWHIMSBDWYHJHASNTRABEDTKIBIGPUDWZOK");
    msg.description.assign("CTYHPOVBLSYXUMXTRL");
    msg.vnamespace.assign("XWORNGKVPPIDNGMMOAEKCDNBHHQGSQCFNWMBEJULWJGODQFUQONJTZAVHYVVJDVCXVCEOAPTIRPZTCVHVJTDUYNRCGDBPKPMYMXRSKNAIFTYNALHSHRWKBHXUAGHRJLFZIZDQZLNEACSUSJWPEKGCPALOMXFK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TNXJOFALWYVRIRCPQNSMUIGITJSXKVYJSUZDEVUWDOTYQKMRVOPHGOWYKPWXYEXDDSGDKNUQVJLLXPHQJZZWLPHXKDPHPZCKFUDZYMEOARHEBGYYGNAOVZHJEAZLFMFCCTGRTOLIQNCNEFQWEALBSHMYGUTSBBFQNOBMCUUUF");
    tmp_msg_0.value.assign("NYQWRXZQNESHWLVKZCGAGNXOLKEGOPRDCQKCCDZCHTLKYEMXCEFXQILHMC");
    tmp_msg_0.type = 91U;
    tmp_msg_0.access = 92U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BYRUEQYQCOQJDSGIJEPLTQITOWSJEJGRLBODAXRIXZELOHEVHOTMW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SYZWIYKGWOJVOQCTGOCYRHHYSHWTZUMSKTGBDFMBQMRWGEDHWPZLUDPBHSXKCXGPCCXUMEPFJJMRTCFZOIKAROKEVXSNQUATYPUFJGFAOGNNRLPFBYRUKSHFAXMDDISPCMRIUQEAUJKQHGDDZOLANCLXBHOLHJY");
    tmp_msg_1.dest_man.assign("JSSEWWTLNGWYPPYLCSDABRTLBUXOXSWCASSDZICQKXILJZGJPWXJTVIGFRWPFMMNKEFHOTVJGEUDIUCRHEYVCCFXDEKLVHQJYRASXOQEARQFZBVJURWHXNKNGFNCZKTBPSCQCBBIAMUDLHBWTKK");
    tmp_msg_1.conditions.assign("WENWILKDFQFASPRMURTSOFNMTBQTNVUOLSEGMNUKGHITYCXYYJKEFUPVTJEBWQGMPAFXWVUKURWXMNXAGCAZVARWYBLXUDRSLXBRCJVHUEOPQFCRHZVOIZHHJJCTHJNJEPICDCOCKGLNGKLSANVMMXXONPBSWMZQRODIGOZVWIZFDSBYVDCWBEQLMTLJXABQIAGIYTGDFNOYSPED");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9226593803388641);
    msg.setSource(54879U);
    msg.setSourceEntity(55U);
    msg.setDestination(9857U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("PDBVYLCQFLFETEPGNMEDHCCQDBEZOHZJRIXTMDESJXLHMMUZQQMRLTMRSJAVJCAJPCINMUXTEOLXBREQASYWXPZDZGWOKKJFVOXSPGKTJDLUANQSBIHIVYXIRSHINUNSKUNWFBPWOJWAFGNKTUFAOOWPVDVAOQPIIWFXNAKGJOOURVKSHPCLQDUZCABGQKNLTMCYHBTVYRCXBWRBEG");
    msg.description.assign("SRBKSIBPKIXHOGVBSCDMUEEVCCVITGDXLPONYNSHFQJAQENNRRXAUPJUOQYFFCDLSTWBZQLHPBEXIFDEDILON");
    msg.vnamespace.assign("LGHZJEYJRWQUBWTSMODJAGEMAXLSZCDFGJECZZEYYGVPFFWJCUXOIYJGMYWRIROOSXRCEUFIDHQVYVPBZVCPPMCAUJPNNABAYXQTMUGIZXFHIFMOAQKCPNVDLVBDLQBQXTSRZUWLDEEBHKHIGRHJIDBADFSDKISRMAKLTNZPNMZVLNMWOTRFAXQLYPVTOBEORTKIKXCSVUC");
    msg.start_man_id.assign("MDBMUGHTIQFQMSBCVONZKUXDVERZIVFTXJNVWOPPUMRSFXAJWRVYQIMOKMDHBHSOPALAWRTLYHKSVKLFBWCOGEBLYCHBORJQEEKCLWTJAYPQFGPXBRTJPT");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.7017866364538434;
    tmp_msg_0.temperature = 0.1531871938133057;
    tmp_msg_0.depth = 0.7426936716766013;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::FormCtrlParam tmp_msg_1;
    tmp_msg_1.action = 57U;
    tmp_msg_1.longain = 0.9207940482716729;
    tmp_msg_1.latgain = 0.427381935619337;
    tmp_msg_1.bondthick = 946224471U;
    tmp_msg_1.leadgain = 0.15572669424996832;
    tmp_msg_1.deconflgain = 0.7899846907556;
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
    msg.setTimeStamp(0.3909091701949987);
    msg.setSource(29765U);
    msg.setSourceEntity(187U);
    msg.setDestination(28122U);
    msg.setDestinationEntity(138U);
    msg.maneuver_id.assign("UQITAVBLJSLCXYNYWQCFNTRLTJVXAAUETQQBAOMYBLOFSJZJAZKBCUPDPJYCIBTZRVNOZTZSNDJPNASYEURINWZESERFNCQMHAKUWHWTKHBRIXRKYEDPAUFYXDKCZOWMAVHJLQAUXXGOSHXIIYOXMCYGOXEJPVBVSTIZIGMKGOHPOKV");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("LOYOISNPPEMPSUJPCBWZQNJGLXQWNMGZGZVTLBKEZTPKPSLMESAYNIFBUIOZLYSKAFXQZYPWXAVEBZSOJKPCXVELAGWZKXFNTBUCAUGHTDHBWCKWGOIJSRAMNAIUJHDYJPRYHGOMZQTHRIVBBZTGXVHRUUNDDFEMGMCDQKVWFAKQJOKIYORHLEWSVXTMWQXWRAMH");
    tmp_msg_0.formation_name.assign("FEOSFWFFMOMLUVXACYFGVMACSODWEVHIZHNAVZIICKYNRGZPLBLICPNRWLQHVXNBVSNUUVSQQFJJDCGQCGZFPBNJPCMBJECIQEEDKASHSTWJSUGYOTYYYBCKQILTTPHQYWUXBYOUVKUBAFJOQLERWAGMBUYJTXZHUEAKSIERVYMQJXEWRNQDTITGOXIAG");
    tmp_msg_0.plan_id.assign("MKEYMPDABGWFEUBWWNWTBMDNBMYAYACGJPKOITFRKYKFJTMFJGWOOCSLIBEHPWXGNZQEQWOGDRISAGFWZYZ");
    tmp_msg_0.description.assign("QXSQNHFZREPVWVZUWIKUNSCSMQGTUPVVLEZUKDHNUWDSMIGBUKGXNTPMWASDYOHYKJTMFAQYAIIGFGFAQXOEQFRYCQBCUUXUNNCSEIYHLLPROQHVEWJJCBAYKOJWBWGZOEEXVIKAAPXLMIAKTNOXLPXGFCHPYVMKYHPTCNWFOJADJPBLLBCZJJRMUXBKBVMZILDYDBETGWRQMDIOAZRQJTRPKZFSSVG");
    tmp_msg_0.leader_speed = 0.10438624794293494;
    tmp_msg_0.leader_bank_lim = 0.07096780976719663;
    tmp_msg_0.pos_sim_err_lim = 0.9396178901083101;
    tmp_msg_0.pos_sim_err_wrn = 0.5200594358816896;
    tmp_msg_0.pos_sim_err_timeout = 4961U;
    tmp_msg_0.converg_max = 0.9092383313734478;
    tmp_msg_0.converg_timeout = 2124U;
    tmp_msg_0.comms_timeout = 20581U;
    tmp_msg_0.turb_lim = 0.18429791972336818;
    tmp_msg_0.custom.assign("LRQJBMFEVXJTLBXPEIQANCTGQNYNOSTBOLWQDGLPXHIVNGPNCEUWGPKXZVREQXBBBCIMUSHDKDARIPJSETKZQPZXLEOJKWXIMNINKWHZVVXIOMTUTGBSHYVCRLATAJLUDQYVWAZFJWMDDCFRBWZPYFSTUNCHKLOZRCEACOHAASQNVHFRGUCUJYGWUPACSYGTI");
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
    msg.setTimeStamp(0.2147965179316721);
    msg.setSource(18465U);
    msg.setSourceEntity(91U);
    msg.setDestination(19467U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("ABYZSYCWNNJIITFCNYBMOCTGZSXRLSKFVGEFUJQNDUWOYXEGTCZGLYXPYHBRXECUOMAUAHRSGERBREYXWBEAATHVPJEMWJMZDEFFRWUZLFNHOLVDXNJJKODTYKDJATJVGZQMORPJCXPLZGYLVBQVQVCPZICZGIANBBSJCWADINKFDGULTUQINXH");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.3765157757722708;
    tmp_msg_0.lon = 0.13931713010263658;
    tmp_msg_0.z = 0.9078512957209424;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.2215383311592728;
    tmp_msg_0.speed_units = 119U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 55658U;
    tmp_tmp_msg_0_0.off_x = 0.014697516409329925;
    tmp_tmp_msg_0_0.off_y = 0.4891323437059816;
    tmp_tmp_msg_0_0.off_z = 0.7817968183853025;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.3344219660761504;
    tmp_msg_0.custom.assign("NWNGVRRUJKFJIUGHBNMTSOENBQJKWEFOYDJIISJPVQQBBQBUTNECTYPAYXRMFWYNNDEXYZJIKQCZOSWXZZYPCLCFKLSVOVGIFFGVZTKOROXHRTWWCERUPISIMABOYFLUSTMPJGGDTMFWAZTJHAHAXBLITQJUGPDPERKPFCCVJDMAMNQMRLEWVVKEDGSHRYAXHRNZEXOWAVNUMMPLAYUXE");
    msg.data.set(tmp_msg_0);
    IMC::LoggingControl tmp_msg_1;
    tmp_msg_1.op = 40U;
    tmp_msg_1.name.assign("EAPYKFVSKDIWBFVYUWFDOHMTRWJLCIFPTYNHUKGYCSWZORQORAXLXPUJIESDSULVQOGTHNMUXGRGJDEBLXDVLCHSAAGLKJOCIFDNIJVWIBUHWFXMMYYPRTMGRTZOVTDNACGNSBQGLMTQQXYBZIDCIHQLOAJFJMYEHAXMM");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ExtendedRSSI tmp_msg_2;
    tmp_msg_2.value = 0.38449050050177;
    tmp_msg_2.units = 126U;
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
    msg.setTimeStamp(0.8757885002919593);
    msg.setSource(44536U);
    msg.setSourceEntity(107U);
    msg.setDestination(38620U);
    msg.setDestinationEntity(96U);
    msg.maneuver_id.assign("WDANLJLPXIBZNLKNPVOSCNDEHMGXSHMDYWXOUZOESXVCCFJFVTOGROVALSFRTMJGFUBCFIVDYONJIKMIHWBBPKLUDURKKDBQKTWVFJDVTUNGQMZ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.8573297423115331;
    tmp_msg_0.lon = 0.2477562374456298;
    tmp_msg_0.z = 0.8187371859419867;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.7528890613537286;
    tmp_msg_0.speed_units = 143U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.40545727336797466;
    tmp_tmp_msg_0_0.y = 0.5943271001259394;
    tmp_tmp_msg_0_0.z = 0.9152728267049846;
    tmp_tmp_msg_0_0.t = 0.0284710729623332;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.27243694280850916;
    tmp_msg_0.custom.assign("ZGPWKRGMDPELBOMBJAWFLHOIMRGCGFEAQKQPELIXLCURUOCMNWSBMMAYDBGBYVFKTPGWPZNQDZRUNTWOSGJFLZCEAW");
    msg.data.set(tmp_msg_0);
    IMC::DissolvedOxygen tmp_msg_1;
    tmp_msg_1.value = 0.7136299347456435;
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
    msg.setTimeStamp(0.06370405607857854);
    msg.setSource(50843U);
    msg.setSourceEntity(121U);
    msg.setDestination(53799U);
    msg.setDestinationEntity(205U);
    msg.source_man.assign("AHIKEWZFWJVLIYPKRNWSNCEPVKTSGRHVVVIGNTBAETXGPMXHXVOKFKSMRZCBXQABTQUAXZRTMNILSWABPGCJQMFYPLINYVCKJSJDPUGNHHDWYZEYDCQOOWEOTJEITDZPXJDBDMYIHAVZXBEHGCUBKLIJUUCZVNGVJRORDGOYWWOQFP");
    msg.dest_man.assign("DPDSICNUIWKLLPDMYISNXGFPQOKHKZKVYQQATKLNLTSPICZJEGGUKJBMFANHHPAPFVSZKCEWIDMMUFARLPFEXITYISPUOWEEYBTXSFLLJJVVMWGMBXMCSZGUOEDYKWDCLYMPHUHFMDQNVCWGGVBCJVRUNTYFOSR");
    msg.conditions.assign("XNVWZQMCOKEFOLBDNGFQDQTJEUFC");

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
    msg.setTimeStamp(0.4890178593802236);
    msg.setSource(46451U);
    msg.setSourceEntity(154U);
    msg.setDestination(20895U);
    msg.setDestinationEntity(73U);
    msg.source_man.assign("TOOMXFBOZPTJGYZZGSXVEFHTFJTSDQVUWJWHHAJOACUPAQSAGHPRRSMFCAMYLPGYNTIICNCBDMKZOKEMFOIVATACWFHMRYQBQLDXEXNWNYNUWSNLNHLVPEZFXDIZVTVFNNKECUOULMOWYZGGSGXGBJBDIQJYJWJOEIFJVRYVRSKQLURLKPIJDDXSDCGCKPTHARRKKPWMWEWHDDVBTOYQLQBIGAUUPNLCVABSYSZLTKIBBU");
    msg.dest_man.assign("UULPRYTMKJIPWGFMUQMOVABIQSWVNDYSCNUAPYSOUNJTDAWCRSOLWYZIBMNXMIGAWFEWDAVXYSLHDEIVYOLWCKNZIWHVVMZXEJEVMJNXQTOBTCLNLKIUFDZQVTBCDAFZJUNQYHQLRDOACZKQYMPMYZQSCREHFUBOPBPRHGXPLYGKFFFZIJCZDDVGEWSHXJRDTXG");
    msg.conditions.assign("PBPVRZYENS");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 172U;
    tmp_msg_0.eta = 2117U;
    tmp_msg_0.info.assign("JWAWIUIFXXNXHGQBNHWVIDXMFUTXTPKOBVQDSLYFYSZUYMZXFME");
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
    msg.setTimeStamp(0.12921631967545588);
    msg.setSource(1143U);
    msg.setSourceEntity(162U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(225U);
    msg.source_man.assign("XXVUNVIFLDQGRJKRHAPNE");
    msg.dest_man.assign("HRTDGIDGCZWDUDFJEMXOAZPOILNVRFOUKLCROGIZGQHBUPYJOCJMOVWURIGLIDTYJJCQAOWTMSVGLNYKRUMZYFDJQBCHIEMZPKEYMWABDWNOEXKPIKTRFWVLTGPFVRFSEUOYDAAOXLYQSXJQLAFRQXNEJNHXBTPLBAHWQEMCZYJDTQJKBHDIHAUVRT");
    msg.conditions.assign("VWNILFYJZMDUZRHOFKLPNOPHQSEJVKNPBFUATVYYZHPPKTMKLYCTWXOSLACHWMVXIO");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.7046722540269168;
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
    msg.setTimeStamp(0.10723973355354854);
    msg.setSource(61996U);
    msg.setSourceEntity(89U);
    msg.setDestination(59105U);
    msg.setDestinationEntity(236U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CMADWCGGSOSDUMQRRSKLYERCXBUJYJVKWNKHTHCFIRZN");
    tmp_msg_0.description.assign("PMACURRRGXMKGTBTZQFDNXHOAVOARIAXZJNMMNIWLXHRWYVSKVBOMPTJLSWBAKDIZOOOTQQHHLISFUZXCBXAGYTNHRZZKJBJQYPFDFEYZHUJFVLRPNHSLEDQWPMNJBSXQIPQFWDUGU");
    tmp_msg_0.vnamespace.assign("ZLFNLFXBMVO");
    tmp_msg_0.start_man_id.assign("BNCKXGCOOTVLADXUBWTKLINWRTGKMTVHYHVFWUCARCMEILXNVZKIMJKJHNHYGMZAUFVDODQJBYXHSSUKKDLSFTKEQSJGFEVGSCSPZWBFTBKRLWFJIDAIYKPXLUIHYAQXZDXYPFJQCNLNUHZROTBFSGHSZOYOZMPEQCCYOCOBEUSVLE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZBXNXMDTJBGURGTVANURTEALFKBGMOVGZRTBPBOVUKPPGXACFPKSVWDNRWRECRQVZQDLCWFJNHKVIQZ");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 48214U;
    tmp_tmp_tmp_msg_0_0_0.flags = 226U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3420856431660316;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.17521821597864518;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.42797280543376703;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 94U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.05975687556192455;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 60U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.10398176194666697;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.35314639215790855;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 59U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EFNPMUWINFDYBNWLPZCOZRRKLW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FormationEvaluation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 18U;
    tmp_tmp_tmp_msg_0_0_1.op = 249U;
    tmp_tmp_tmp_msg_0_0_1.err_mean = 0.8223114797202841;
    tmp_tmp_tmp_msg_0_0_1.dist_min_abs = 0.609235984208116;
    tmp_tmp_tmp_msg_0_0_1.dist_min_mean = 0.5645926485833449;
    tmp_tmp_tmp_msg_0_0_1.roll_rate_mean = 0.08895578542500993;
    tmp_tmp_tmp_msg_0_0_1.time = 0.2435138379095475;
    IMC::FormationControlParams tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.action = 1U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon_gain = 0.8948913684349034;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat_gain = 0.4848172859193516;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.bond_thick = 0.3063615297590686;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lead_gain = 0.12182659275535812;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.deconfl_gain = 0.5980147790354035;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.accel_switch_gain = 0.36239176082037994;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.safe_dist = 0.3612186175389821;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.deconflict_offset = 0.02322124052240182;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.accel_safe_margin = 0.9944935004780473;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.accel_lim_x = 0.18472208934941936;
    tmp_tmp_tmp_msg_0_0_1.controlparams.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::UsblModem tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("RIPZCUGXNLJFZKVRHTQLXSOIZXOMTFGYQHGAWIBDYIRXMABSOOXQSWWVYXSPVHOTGZHOA");
    tmp_tmp_tmp_msg_0_0_2.lat = 0.8753282793895084;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.8649629073711863;
    tmp_tmp_tmp_msg_0_0_2.z = 0.05653979927571673;
    tmp_tmp_tmp_msg_0_0_2.z_units = 63U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YYZCFMFBHGXZFQLUZIXQCUFKYXBOLHOVAEHPEDQZOZDUBPRRSSHVPTMSQWKGMISWLTJSSFZQAGGRUYKTIHCUIAHGNCPNDVVLJJIYFYZUCANHXJXMGKDJHHEOVXGTFMRWPPZIENFIDKEWDMLVEBUZWIKDBBNLZAXNYNVJPORKANKUPEJJWXQRMGYOJUMARWG");
    tmp_tmp_msg_0_1.dest_man.assign("OWPKRCJNGYQEHUFFGEKRXZQSGOLDQCYNIPNIYCIIJVUSTLKTUOPJIFIRQEAXDOESCNXDQEYPKFJZTWQGALBSOBGVZMREJMJVUZRCHLEWZJMKAXCOAN");
    tmp_tmp_msg_0_1.conditions.assign("LZPHGKHPOIXXCHKHSYCZPUZXJUEXRQUJPXCNODTWANZWSNBQRNQEJTJLBMSWZXLLEEYHWFAXOWDGYSCISJDQWLEFUMEASKFUJUPQKHFLXQKVBQVCSQAMNCILBRPCDROQOGZJOBTUYIDNVBFRZMLPIGGKF");
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.k = 0.41598426636158936;
    tmp_tmp_tmp_msg_0_1_0.m = 0.7593896523672709;
    tmp_tmp_tmp_msg_0_1_0.n = 0.6096780774147849;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAnglesDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.060435390231999286;
    tmp_tmp_msg_0_2.x = 0.9451065343597579;
    tmp_tmp_msg_0_2.y = 0.17411782182619762;
    tmp_tmp_msg_0_2.z = 0.34136184575647377;
    tmp_tmp_msg_0_2.timestep = 0.6439170413967765;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::CacheControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 208U;
    tmp_tmp_msg_0_3.snapshot.assign("ZTLAQRLIYWWWEAMJLESZIKETXUWMGXJPNUIIWQVHJMCABJPTYRHAUZ");
    IMC::LblConfig tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.op = 18U;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_3_0_0;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.beacon.assign("ZWIKRGQGNUKBIQNHAHYPLJKDAREYOEHOUPRJBVHKNKAUEFVXUPYAMKACZQAIJQEDYCESZDLEMYIQBTRIFFTZECHQCNEXIGYSHICNMAVJOOGCODAJTVTQXDDIDLPPJOYXZSPCBZWEFCRZWNXGRABDHPNYZWTMVVHNUXVPWBWROMISKMLFFNUGCXFQY");
    tmp_tmp_tmp_tmp_msg_0_3_0_0.lat = 0.3547341711681785;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.lon = 0.9593935693544029;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.depth = 0.7524699891007258;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.query_channel = 213U;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.reply_channel = 228U;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.transponder_delay = 208U;
    tmp_tmp_tmp_msg_0_3_0.beacons.push_back(tmp_tmp_tmp_tmp_msg_0_3_0_0);
    tmp_tmp_msg_0_3.message.set(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.3497170391814973);
    msg.setSource(57290U);
    msg.setSourceEntity(100U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(244U);
    msg.command = 123U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VVRQJFIZMWGKFKJBHXGCXOJGNVNMYOHZQWFRVTRMPVLUPBSCLYGGUSNJKMOCXRLAKWZNIXNSYZBGIJEYAHTBZSD");
    tmp_msg_0.description.assign("CDNRNEBFRUJGMUGUEFICMGYIFUXMJTEMCMGLHMVXEAKPELMOXVASQIIYAQLZQLSAPBZKAYWRAFOWBIYVEALXDCCFODNHDBVPKHJVHNLTBEALGZFTKIHRXZOQYGTLWWJWCBOYRRPMFUWTWSOUVLLUSAJTXFRQTBEKGKYUPSGHC");
    tmp_msg_0.vnamespace.assign("RXQSWZCMJWUEFVAYICAGMVDGSDCJENKPKMKDVTEBGVLLOZJQQRPXXJVTLZKMXVRTYZLKCDOBRHKBUBRXAMGJZRSJRUFDQYNOIOOWTBFELFZFNOINVUNESAIHDDCGIYWNXTNGDQIFFSLPCELOYHFUCNBPOXXCCTVIJMXPTSHPIPQYZPZLAPJGAAEUNGT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZVXWKPSBRVZACAEISLXZFSKACKJJMFHPLREOCYMFENHVWFNOXIQFVBCPBPYDYLJPNRILQIGWXBNODAFSMRRXGOXZYQQSWSHOKVFKOAGBBMWKDIYNDJBTGIHWTAAXMQGRPZWNUJXSTBLVUYGWHQZNFVOJKTEDLUGSHJCBTTUPCCSHJDDLYBDXZCCMPUICNFWVATIGXFWUAPEHUVYQMZQTEKRQMHEOAUREKOQURLNIKHZIPEGMTVJJYEYTDZGMR");
    tmp_tmp_msg_0_0.value.assign("ONEVLRYJSPDAZADGIHLIANVGLJOWECOXHMFZUQMGKHDRBFVHVXKZBTUXZEZPCXAPTDWXNYRWQO");
    tmp_tmp_msg_0_0.type = 216U;
    tmp_tmp_msg_0_0.access = 151U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FQDPVAQSNKBRGDFZWDVHKVABLQBWXJFLPBDAAETTPQWKKUNXMCPQBZIZAEBXWFOLLLOUFMVCFYEJISNTSTXIYYSCPBINRDPTVQHCCYGSWLODAXEUWAZTBHCHBMNWUXICNFJWZGORJXDCAOEUSKGBYGJJMTRVULVSR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GEDQLFAEASDSOFBGNLDIYVDACAFVVYLTYOWQNQQIXGCJMTVEKSUMHUGNHABYWPRVCZCZCOAOFJVKERJWWIUJJLLXQIDRPXHXWNIOWKMRGEEZLYKESZJYUUTNXXBHOGKSGQILJDKUCBMMMJSCTWAQOPSUPAQTXIYRECHNVZTGXGIJHYOLTHTIKBATPXAFRRSGMPOZBCFDNNXHPDJPBWIFWQVYQHTRBMDPFLUDEKCUMBRVZMSKZUKSFBNZF");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 43269U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.09575606276394344;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.24083294460790272;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9082619870992642;
    tmp_tmp_tmp_msg_0_1_0.z_units = 46U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.6081330888207322;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.4204455512142109;
    tmp_tmp_tmp_msg_0_1_0.duration = 11741U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6834004649143564;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 31U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.3474846388210855;
    tmp_tmp_tmp_msg_0_1_0.direction = 110U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HGRRIGHMNLKOPTBPGYZINRXUZCHEJHNASWKLYWNMBQTAGBREFIPCTJSBPDLBYCLCNZXJVZSXDTVHDPSLUBFWEPMWMDKPCNKHUELYORJMUAXUFOLIOKGQSZQRXCESTJVTRIQGDXVBYXDWMYOXENAKIVZVZUTZCKAEDHDGSJWLNYFORSHHOQVTFKFCNDISUNRKTMZAVWMWFYFBDFTPVQUPEJSGXIJLEWAQPOQMAROYGQJICYFAUZVJLQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::HistoricSample tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.sys_id = 14804U;
    tmp_tmp_tmp_msg_0_1_1.priority = -27;
    tmp_tmp_tmp_msg_0_1_1.x = -21622;
    tmp_tmp_tmp_msg_0_1_1.y = 18309;
    tmp_tmp_tmp_msg_0_1_1.z = -1907;
    tmp_tmp_tmp_msg_0_1_1.t = -7809;
    IMC::CustomManeuver tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.timeout = 52910U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.name.assign("IWZDDJPVEVXITSXMPYGAHTVQYHKGMMRGFYTTPKWIIPXESSMQUWOZIGQYJXDCSCYGRXZUHKRSTLOZWSJKLSRCDJNBYPAULMIOIYNHQGCYJEGPMLCWTVVBNVJFFDNLKDQBNBPKELWHALOPFLUBKOQCMDKKJOHGUCRJOFTXPFU");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.custom.assign("TNGHFOHQDNJTPRFDUTTLEBXPLFRFFPGSKCETVHLATIPCZMDBWNZXJXYIVRSTZTNQVZGPEOCACQOIDNXYMYFE");
    tmp_tmp_tmp_msg_0_1_1.sample.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::MagneticField tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.time = 0.23838633392406128;
    tmp_tmp_tmp_msg_0_1_2.x = 0.42738829104483;
    tmp_tmp_tmp_msg_0_1_2.y = 0.17406537919854093;
    tmp_tmp_tmp_msg_0_1_2.z = 0.37213634682643715;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WRLPQZCNJEMNBHBKATGOVSIDVECFCYGBRETUWPQQWFSJBBDJMCWLHYVDCXRDRDAXNCNNBIDTDPXVCOPVLBDKKTJVVJGSCUBFIEZRYILSHUUSGWSGNPYMAGORHMDXWIAVKUMOKTUKIAXZPZYLZYLAQFHJMUTKMMGYKIXQVTOU");
    tmp_tmp_msg_0_2.dest_man.assign("BMYFHFNBEENQOKDWEJBWMHWFCFITFGIYEOZRQPHUJDINUURACVQVPHJHWZBZAHBTYWKBGNRSKXSKZBJGSLDQJHPYAZUYVCQCLEVEIYXKALLUJNCMRGLPPLKVRCQRYMBXWEABIUVXJNVPTMJPOY");
    tmp_tmp_msg_0_2.conditions.assign("UTLYIPOUKLHMLYZHTEALSCFESOTPNFBTLSCBEJXRVKHCKGEUTKJLDZADYNWEVAIVKTYLIPZNLVXPVKWFAGVRXRTSNZIEFHCKEWOOXZZSMPEXBODWIHMUCFAB");
    IMC::AcousticLink tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.peer.assign("TEQUPURXSQSSFZJVPHREVGLCSQBAUBSSIXLOZKGCLLUBDLWXKFHNUMNIIAXAZGKOSHTEMWBENJYHXOIVFRJTTGYDUYSFRDAZFIKAJZITQDQLWMYMQCVVPWVCKSGROBERWVMJWWNPVBECNDJYRQXGPGOEVYDOXUYOJGMBIRNXPAUENCZPGKACZNPBYQJHVEJFIZTXTKFDW");
    tmp_tmp_tmp_msg_0_2_0.rssi = 0.6097688867592689;
    tmp_tmp_tmp_msg_0_2_0.integrity = 54243U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SmsRx tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.source.assign("VBYEXQEUOPAQRLOJOGKIFDFMBCKYVNBYGQTKXAHHDIUMFTPGWALMPYUFKSSVNQYSHIDKDQEHXMEWVHAPRIXFFBSEKPCYLNBRLTQGOSIGBKLLTUOZZSBPSLFDVZKQCXJZDIRYZZNVOCMJNMVLZTPXCEHLWNGGFIQJWUJXDWMMDUVEKIIROPHROFOJ");
    const char tmp_tmp_tmp_msg_0_3_0[] = {106, 120, -36, 25, -77, 72, -29, -29, -43, -63, -87, 4, 100, -100, 110, -99, 54, -3, -89, -90, -19, -46, -115, -89, 123, -20, 79, -45, 62, 106, -83, -41, 7, -44, 34, -56, 75, -94, -47, -86, -100, -9, 122, 23, 68, 82, -127, 44, 20, -62, -98, -83, -10, 126, -101, 77, -38, -77, -37, -106, 71, -24, -128, 4, -70, -18, 123, -98, -61, -40, -52, 111, -4, -4, -59, 82, 91, -75, 80, 92, -58, -14, -89, 39, -93, -37, -16, -34, 39, -39, -71, -93, -65, -25, -63, -100, 62, -7, -71, 24, -118, -117, -40, -91, -85, -89, 75, 121, -105, -20, -119, -23, -63, 109, -2, 49, 56, -104, 19, 87, 68, -95, 37, 123, -48, 87, -17, 31, -11, 46, -4, 41, -103, -79, 81, -1, -18, -88, -49, -26, 79, 81, -16, -103, -33, -105, -34, -4, -11, 72, -93};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::PathControlState tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.path_ref = 584659240U;
    tmp_tmp_msg_0_4.start_lat = 0.623969651198021;
    tmp_tmp_msg_0_4.start_lon = 0.04497613406383627;
    tmp_tmp_msg_0_4.start_z = 0.10857822688181884;
    tmp_tmp_msg_0_4.start_z_units = 249U;
    tmp_tmp_msg_0_4.end_lat = 0.14651712552241436;
    tmp_tmp_msg_0_4.end_lon = 0.2089707878772511;
    tmp_tmp_msg_0_4.end_z = 0.34157277375731343;
    tmp_tmp_msg_0_4.end_z_units = 159U;
    tmp_tmp_msg_0_4.lradius = 0.773355101380778;
    tmp_tmp_msg_0_4.flags = 93U;
    tmp_tmp_msg_0_4.x = 0.9262823545117017;
    tmp_tmp_msg_0_4.y = 0.8137500775171881;
    tmp_tmp_msg_0_4.z = 0.10156141188717982;
    tmp_tmp_msg_0_4.vx = 0.43781765517095095;
    tmp_tmp_msg_0_4.vy = 0.9116513937487315;
    tmp_tmp_msg_0_4.vz = 0.4638484374692228;
    tmp_tmp_msg_0_4.course_error = 0.3798320022402314;
    tmp_tmp_msg_0_4.eta = 7075U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.31218427867647736);
    msg.setSource(61290U);
    msg.setSourceEntity(249U);
    msg.setDestination(46384U);
    msg.setDestinationEntity(20U);
    msg.command = 203U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ESPKIFZTWLILRIAQ");
    tmp_msg_0.description.assign("ZLQOIWIOBPRFHPUKTRASIANHKYSZCONREKEZPBSSVSGMOBPQLMOPXFGUMVNEVYPFCTFXZXBJHMXFJRVKBLYTRCDALTJFXWWNMYZUCRXNWAKKIQTWVRPENGKGTEDRZKAFJWJGWCYMQSHVIKNDVZYNDKPTLERJMVIUBGICTSVPFUCUAJJXHCWMYXEOZNY");
    tmp_msg_0.vnamespace.assign("CVSWAJAIRNLELVXBZCTZWCDRONHQKBPBXPMXNJAMCWGBAFLJAQITZYUPKVMRGMTACGKNJMYZNTTWDZQOAIFGDEVUZESYUTLGPSBOTKJCKFYXQQYHP");
    tmp_msg_0.start_man_id.assign("IJKJRUTWFHEFOTIHUKHERCBQQMOXWGIILXMPVQYLYCIIIEHPSFAZOMKCGAYLXMAGINZNZVRMXCLPSTSTSBJUXFACABNKJWOZYQCSSNDPRZHPGYUGHGQVFOFHSWYVBENZDEWDZWTXHXBHGUEJGVERVBATCFBQPUJLAVSPORYBCXKDDBTJLJMDORMKAEFSRJMKVCUN");
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
    msg.setTimeStamp(0.8171653216718421);
    msg.setSource(65332U);
    msg.setSourceEntity(231U);
    msg.setDestination(20191U);
    msg.setDestinationEntity(164U);
    msg.state = 218U;
    msg.plan_id.assign("ALUBSHRSVXYPRGTBFXFIGYPUZXHJNFORDBAOVWNWCNZLCYLMMLKMIVORXZTKZRWKLOGYPUCLPJAOYUFRYDSZHGDMZXKKJOEEEAAJATTLPVZQWNWMXFKCANBIQUDLUDMRHEUBTOQTHDCSESCWWJVTPIOQUJCKDGPDHXQVNFXCTHWGCTGNRBQBAIGABXNKBJQLBIPVYSZJDYRVIYFIUIEJHASREHNGMPJH");
    msg.comm_level = 196U;

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
    msg.setTimeStamp(0.7146694388288243);
    msg.setSource(234U);
    msg.setSourceEntity(137U);
    msg.setDestination(3260U);
    msg.setDestinationEntity(58U);
    msg.state = 244U;
    msg.plan_id.assign("LWWOXXRBAWUQNWMGQZMGCYRIFMQOLAD");
    msg.comm_level = 142U;

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
    msg.setTimeStamp(0.3233550812912386);
    msg.setSource(51485U);
    msg.setSourceEntity(200U);
    msg.setDestination(58585U);
    msg.setDestinationEntity(107U);
    msg.state = 82U;
    msg.plan_id.assign("YZSNFDVAHKXSOTVHIJUAIETSEZZAHKLDEAWMNCDLGZPYJFKZWFFVMSTOXDMLHCWPWLROOJQNZLGGYKMVHACXPCQERRKCRKNPZEUIXNCNVBGRPBYVJHZJRXWKBIWWWNPLKISOECDUNHULMIIIVFTCBGQEDAROJQTUTXWVHYMRBJDAXOLDFYUSDGVHAUMLYZFEZXTLSNOUBTFPGRHXOYUVCBSMPGDNOQJQYUIAPPTJAKEBBTFXGQRWJCQQM");
    msg.comm_level = 70U;

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
    msg.setTimeStamp(0.4045177810790693);
    msg.setSource(32307U);
    msg.setSourceEntity(20U);
    msg.setDestination(19293U);
    msg.setDestinationEntity(202U);
    msg.type = 82U;
    msg.op = 57U;
    msg.request_id = 15331U;
    msg.plan_id.assign("MNUDUNYAUSHFTBKHZBSNGLFYCEJXHUAIZEBIKQZRRJPWMGSCPSFXAMXBQFOPOXDZO");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("KAMFPFYOQQZOUBLPXIBAYEZFKCYOGBSNFJGHNTRVCPSDWWKWRDUSJAODXOSRLCGAUHECDUBHTMJEFNNKXBJZQYZZGUHTNHFPEXXKXFHYIVQLFBNYAPVVDQTKQOJCVIWZMBOTIPIRZQYMEBYAHPDSENJCAKUDRGWWKMQOGHPRKDSLVXSSUWIJMJAUREF");
    tmp_msg_0.predicate.assign("HFCDMSQNKIWUXTMXMSWQOUSFBSFBYZSAQAGIIVPKRKNIADSQCUDEMUTHGUNELHPOUEXVMAUBSEXRIOJNBDJQYTHYENTZOYOQFTZDKXJPLCFPGGHFWJYJRNKUEPGDCKJRLAHXYDNGKPOVBLDOAKHJEOVICWQNFMVDMIBHQUYIWZIRY");
    tmp_msg_0.attributes.assign("ZXRHCWYKVIMHYGOJLEYJACAIPRDXBANQZZMRATQIKNBTUPDZNLDYKLIYIBSTWULVHEACTZFGUKTLUSMGPMJRNGQOVSERBSEJMPCANGSSFLEBKYMJINUOZQLYVFHAEAVGEAFHQVNCUTFHGMRIXDDEUWIKOXLCZSBRIPFAUCFQXRKMWKSBOHGOKWXJLHXYODQSJNVDPVRTVSZJQJUPPBWLWXNBFCGDHEFWDENZTGWYTOXZWIOBVPYMQPMUFCO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FPPESBHSPKRFQCNMJDWXXGZETGPZRRXBWUDZBGHFULEAMVLSJDVNSFYWXCHSAIYNQZVVQBJEKBJPDBERHKSATJOMNLGLOPMNBNZKTUWZXQWVVKYIXGWXCMCQBIKBSVMGGHELYHOJOPNFSQBKRYPKTRYNTUMZOUAVQDTATLGUYZHFMDCUFINSDQWXQOALUJVCNIATFJYCUOIOSWCRHXITPEGKILPZ");

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
    msg.setTimeStamp(0.059403295070317164);
    msg.setSource(12104U);
    msg.setSourceEntity(22U);
    msg.setDestination(14126U);
    msg.setDestinationEntity(165U);
    msg.type = 101U;
    msg.op = 113U;
    msg.request_id = 27250U;
    msg.plan_id.assign("AGPLJZQOXYOVXGTYXRKFLSAYDDAUFRRBUHIWJIZKWLHBCMZYLSKAUKNVWCKVTKPTEAGPSSHDQMVSIHCENOSCWOMXKCESPEVUGETUFNPVYOUOZFDIKNFPEJXPRQNTDLRBDJMWJFTRQSIVCRIEQITUJBZYBAQJLEGSPGPLCHORTJAULSMOAQHTX");
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 5683U;
    tmp_msg_0.sys_dst.assign("HIJXCROSSGOKPVONETEZZSZNIUBUTKOFGGTDBX");
    tmp_msg_0.timeout = 0.59951041595188;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AUBDVKUPGATDELNBGJBXTDHVWHHOCTCTYYKFLSSTHQWLGVSDFWIGJRXLWIVZGJPAIWEHDKYONHZLNJCZTXPCMZZEJUSUSXCVENDNFPQMAAAUDWFWCGFTYQRTH");

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
    msg.setTimeStamp(0.8276421959869664);
    msg.setSource(48044U);
    msg.setSourceEntity(37U);
    msg.setDestination(61198U);
    msg.setDestinationEntity(11U);
    msg.type = 53U;
    msg.op = 93U;
    msg.request_id = 18338U;
    msg.plan_id.assign("LNCAQERSIE");
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("GUQLUVJMQPIZKHYXRSMFTOGDHRERJZVYRWKTSRYUFWKEW");
    tmp_msg_0.type = 89U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VINQAWIKNBNAZMEWKLZWZHPCDVEDHQXXRKMCSHPOSULBMBYSJTHFYTGXBIGXKLCKDYGQYRIXTDQOZXFROIBGANEQDAERRKKFMCJLNUJOUMBZHIVEPSRUCZHDR");

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
    msg.setTimeStamp(0.9224672281381527);
    msg.setSource(48539U);
    msg.setSourceEntity(108U);
    msg.setDestination(11208U);
    msg.setDestinationEntity(131U);
    msg.plan_count = 33441U;
    msg.plan_size = 1317582256U;
    msg.change_time = 0.6935451594374972;
    msg.change_sid = 48325U;
    msg.change_sname.assign("WMSWVQHJGRQVONLLPQWUIQDVNKXHBUWPOATTLPOGREURAAFSQBKPKMEZSJZOPITYSDHSKLNLXRJYWNJRCMAIZHADZKTIJEFAJTCGEYGCJUOPODEWLDLIDIYZVTUHXBYBJCSANWXXMUSJGNHVFWNVEKIQNLEFOBXFXYAVZCPMQHDUDNCRJPHFRGLEYXVCUDVHROQZPAMFE");
    const char tmp_msg_0[] = {-6, -33, 28, -83, 44, 25, 73, -36, 97, 66, -59, 12, -11, 57, -74, -119, -42, 33, -31, 77, 47};
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
    msg.setTimeStamp(0.2043742482428662);
    msg.setSource(14936U);
    msg.setSourceEntity(33U);
    msg.setDestination(9632U);
    msg.setDestinationEntity(119U);
    msg.plan_count = 65438U;
    msg.plan_size = 1016606581U;
    msg.change_time = 0.10679784308559803;
    msg.change_sid = 3500U;
    msg.change_sname.assign("VGBTRWPHCMYLJORHXQWSXQIIDTOFILSOOKGFMHJXYNPFYAORBKCVHEEHIKMICZOQFHLRDNKMSEUQCRJPTRZRLBQETMJMXKZPHYEOOYSAPTNBNGVPBXQGCKUMJJAWPATDQSKMKUNERXVHUZXFWHNNI");
    const char tmp_msg_0[] = {14, 108, -47, 91, -91, -52, 83, -119, 84, -85, 29, 84, -94, 87, 25, -34, -78, -89, -48, 48, 119};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SJAHOPHTMCJKMUSDPCKULOAIUMLVRHYFUHXRTQSQUTZHISMIANRCPJPTBFFYGJREUAKZZWVAYWTZLQHWHGIIDOODNXRFQVOOWJBABFECXNKUDXLELIJEGJKKSTJDDKJWKEVUXNONVREGBIRIWQLNVCDN");
    tmp_msg_1.plan_size = 52086U;
    tmp_msg_1.change_time = 0.33888853003064423;
    tmp_msg_1.change_sid = 31275U;
    tmp_msg_1.change_sname.assign("IXSNMYRSDZBABOQVLAZNEVFWYCTTCMTLOSRUAGZMXJNFLWEWRHHZEURWPFVHLFMJQYOPWDNXSOFDKLFJBQDKENIDUUYFWYQRACWACMSGBZYHPKDGAHTVUGXMDSEZWMOWHRXDHJIUCCHIGPBQJJXTXMFBJRGUSZILBTECYQSQFURACXEKIIPICEWGAITHBVZRNXUYUGSLLMNVZATKODPJLEYDPXKGKYZOKBCLKBAIFVTMSNJVPHNPVTJQGQPVR");
    const char tmp_tmp_msg_1_0[] = {-116, 89, 112, -118, -124, 76, -107, -40, -55, 82, 6, -42, 53, 97, 15, 34, -10, 64, 4, 115, -23, 62, -124, -64, -28, -47, 76, 79};
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
    msg.setTimeStamp(0.2101533909522303);
    msg.setSource(11431U);
    msg.setSourceEntity(21U);
    msg.setDestination(51712U);
    msg.setDestinationEntity(123U);
    msg.plan_count = 61879U;
    msg.plan_size = 4056883303U;
    msg.change_time = 0.7742009955534366;
    msg.change_sid = 36450U;
    msg.change_sname.assign("GGLJHXHRQMTBSGZVDZPHMMLZEIEZYFTUMICFCJVNGDAOQNKKBWRJTKHXDJHLEATDDIQAHORVCKMXUUEXRLBGRNYRUSQAVBRBWOXMHYYKMCWGTZELNGCDOTUINTBBDRIDJFKNHUOUODPLIVKSWFRIUU");
    const char tmp_msg_0[] = {112, -89, 89, -103, 71, 69, 10, 116, -102, -28, 100, -23, 84, 101, -49, -126, -110, -32, 117, -61, 69, -57, 64, -51, 78, -67, -66, 44, 32, 47, 6, -64, 106, 124, -42, 56, -30, -99, -62, -2, -83, 29, 30, -54, -127, -87, 38, 115, 121, -50, 108, 28, -90, 7, -64, -15, 8, 47, -65, 104, -89, 73, -97, -114, -119, 22, 97, -21, 80, 102, -103, -40, -40, -121, 123, -29, 98, 90, 107, -3, -31, 11, -33, -81, 105, -89, -92, 85, -126, 120, 92, -102};
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
    msg.setTimeStamp(0.20105162405086063);
    msg.setSource(65035U);
    msg.setSourceEntity(196U);
    msg.setDestination(27982U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("QKDPABXZAGHNCCYSZJEBTAVKRGVPUOIPJAYXZWVEPOKOXEEMWVLHKNFCDDJIEBXYMPUDLEKMNMSRHAPYJUTHBNWBPDIKVILFJGMYAUCJLJWOWUHXZHFNKB");
    msg.plan_size = 62241U;
    msg.change_time = 0.381304124978066;
    msg.change_sid = 54557U;
    msg.change_sname.assign("RSHFZFARTEHROPTDZBZGVMCQQXPGNMMJFMJPCJUUMWYDYQCKAXKSAEDULWLBQYJWSXGPTCKQBRWJLAWQVYXCOKOP");
    const char tmp_msg_0[] = {95, 1, -56, 124, -28, 29, -118, 71, 59, -78, 10, -70, -1, 117, 48, 94, -100, -109, 32, 69, 27, 62, -92, 94, 30, -125, 48, -29, -57, 82, 14, 72, 103, 91, 20, -19, -17, 60, 22, -90, 39, -77, 105, -87, -105, -27, 73, -38, 64, -78, -9, -102, -56, -99, -17, 99, 122, -38, -2, -122, -68, 104, -98, 55, 83, -53, -88, 71, -88, 2, -46, 27, 76, -119, 32, -109, 80, -19, -121, 25, 90, -60, -114, -108, 66, -92, 53, 21, 69, -52, 57, 22, 45, 95, 35, 48, 123, 8, 103, -103, -46, -13, -110, 64, 12, 43, -47, -48, -82, 99, 14, -92, 25, 42, -113, 31, -88, -60, 17, 29, -103, 16, 25, -6, -98, 0, 7, -128, 32, -90, 111, 10, 86, -40, -111, -74, 108, -92, -23, 103, -27, -48, -27, -42, 92, 97, -10, -39, -86, -17, -64, -60, -88, -104, 6, 105, 107, 119, 47, 70, -77, -62, -85, 32, 27, -12, 52, 11, 14, 24, -2, -56, -7, -67, -21, -28, 109, -86, -34, -23, -68, -23, 5, 115, -98, 84, 81, 18};
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
    msg.setTimeStamp(0.5234354615324511);
    msg.setSource(37600U);
    msg.setSourceEntity(57U);
    msg.setDestination(6682U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("ROGNFRQLWLBFVMPSXOGOOEIKAFHNOVUSCKDUURKLNWBBWFLEITVLPENFARXEZKWBOVVUCMOLJHWNJPUSCPGBJYODCRAJYMVWYYMLZAAKJETGQCDSTOXMWRTLKYQOTZFZBPJSMJJDEZDWPXBXETTSRBSHIWPUVLYKRZEKUKUAGHNXQATXVXEDHMIPZAYFMUHI");
    msg.plan_size = 17714U;
    msg.change_time = 0.5557825820700376;
    msg.change_sid = 54758U;
    msg.change_sname.assign("MCZQAOZHONDMEAACLHXCMMNSVCLZGKOBOIYHPUWORWNGLDCCHDQYJGKHQYLYYFKKCBZEIQIIJUVDPG");
    const char tmp_msg_0[] = {99, -77, -62, -12, -105, -46, -88, -76, 55, 62, -57, -52, 54, -16, 95, 21, 17, 54, -31, -26, -41, 91, -69, 11, 117, 110, -122, 36, 51, 24, -48, -3, 110, 48, -9, -1, -85, -67, -78, -94, -98, -118, -21, 13, 109, 122, 109, -88, -91, -112, 103, 73, 98, -24, -83, 106, 126, 72, -43, 73, -95, -8, -51, -76, 97, 51, 74, 86, 94, 46, 98, -19, -121, -89, -50, -11, -126, -115, 6, 123, -87};
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
    msg.setTimeStamp(0.17352123021008203);
    msg.setSource(17802U);
    msg.setSourceEntity(224U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("CFMLOBAISCNWYVGILBYJSAHKEZRFPNTVYMTYVIJAUQNBFAXPNVJTQFAXLXFYVOHHTEZLRLKXEWARADOGNZISPURUONOFBBSFXLJXEYCKREBTLEWWIVDXZSKEDUOKKKQPMMCJVDXJAGQMNSS");
    msg.plan_size = 12654U;
    msg.change_time = 0.3048303903478766;
    msg.change_sid = 60659U;
    msg.change_sname.assign("GWUJYNQSRFRWIZFEUGVULHPUEXHTCETEZBXTOAAKFDUQOMPFTKZWTARSIYGGRXDRSOKVGVXENYKCPNNISYMBSYOTQZJIFEWAFCOOUBHIKICEUQBLCMBSDRJAMCZCXYPGBQNDPVNLZNYMXQJHGCXLBLDJIQWHTJXCGPQLGSFD");
    const char tmp_msg_0[] = {16, -112, -20, 29, 47, -8, -71, -14, 125, -75, -117, -51, -98, 95, -128, -75, -112, -27, -64, 57, -18, -96, -105, 73, -119, -27, 123, 15, 105, 100, 117, 118, -65, 41, 17, 5, -19, -17, 58, -95, -47, -36, 123, 28, 46, -36, -11, -21, 30, -13, 107, 86, -61, -104, -54, -7, -127, -24, -2, -18, 83, -7, -49, -95, -111, 51, -75, -56, -88, -121, 124, -20, 121, 91, 99, 17, 34, 5, 8, -128, -67, 81, 62, 82, -37, -11, -94, -62, -30, -45, 77, -40, 50, 93, -108};
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
    msg.setTimeStamp(0.8294886390845176);
    msg.setSource(51031U);
    msg.setSourceEntity(205U);
    msg.setDestination(60941U);
    msg.setDestinationEntity(242U);
    msg.type = 192U;
    msg.op = 189U;
    msg.request_id = 16819U;
    msg.plan_id.assign("BTYQEDPRVUWFUZHLDIKLVHZHVLGXBPYYACGQQFEHEGUBOEUXPHTLAKKKQONHHWZWUOJVRKBNGPNDDWJJSRLXIEIVDCZKXCMMHNTBDYCBISJOQUBSRGCPPRNDAAYTUFKSOMCNCMTXJZOXIDEAXMBRM");
    msg.flags = 52406U;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.7515047525310512;
    tmp_msg_0.phi = 0.34439321772500076;
    tmp_msg_0.theta = 0.7251582069375115;
    tmp_msg_0.psi = 0.7206923894341555;
    tmp_msg_0.psi_magnetic = 0.7973586828634074;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TKPGDSSWSGJYBCJ");

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
    msg.setTimeStamp(0.7601751456527119);
    msg.setSource(56215U);
    msg.setSourceEntity(253U);
    msg.setDestination(23395U);
    msg.setDestinationEntity(144U);
    msg.type = 45U;
    msg.op = 142U;
    msg.request_id = 15502U;
    msg.plan_id.assign("CPSINAKJPAEOCOLXMTVOIWIPWIXUCEGYOTBYLWGSWDNDRGIQVGKYYXEYFRABTWBXRJCCGWNXMTZQKQWLDQSYFZMHOBQOSZDNHLBEPGNSOHHEPQJRJFXRMGSFFLSGTTOVAVJAWRQNNWQJYPPVUFQYLGLTBRAZUKHDNKMSHYNBDFVFDPERARJCLXNZUBKCPCUAKDXJQHZAMDSKTISLZEGLYUIFPBTDMEUXCTJJCIHEZBVEHOKHW");
    msg.flags = 41109U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 245U;
    tmp_msg_0.speed_min = 0.4107629955500658;
    tmp_msg_0.speed_max = 0.8004135696346253;
    tmp_msg_0.long_accel = 0.7789475130556782;
    tmp_msg_0.alt_max_msl = 0.8385042503777124;
    tmp_msg_0.dive_fraction_max = 0.8845754176612705;
    tmp_msg_0.climb_fraction_max = 0.40549261786809343;
    tmp_msg_0.bank_max = 0.05458631870808228;
    tmp_msg_0.p_max = 0.30248195594116567;
    tmp_msg_0.pitch_min = 0.9289105236733026;
    tmp_msg_0.pitch_max = 0.6768106440269592;
    tmp_msg_0.q_max = 0.8741677441221543;
    tmp_msg_0.g_min = 0.7902005782175445;
    tmp_msg_0.g_max = 0.9237372854992173;
    tmp_msg_0.g_lat_max = 0.9248570820082936;
    tmp_msg_0.rpm_min = 0.6915664816307866;
    tmp_msg_0.rpm_max = 0.1788237334810442;
    tmp_msg_0.rpm_rate_max = 0.8583244692673622;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SSTOFVTCJTOYZBDSYNJLFWPNWVZHIUAEDKAPONWBPDWCOIPGSGKOXWZAAHDMLKAFEUGKMUUIGXMWGBSMRYBLASVUMSCENZKOBAQDXRTQRBFTCQDQSZFLJYZBYVLJKPHNROTJDYPKY");

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
    msg.setTimeStamp(0.30640423435559816);
    msg.setSource(53313U);
    msg.setSourceEntity(40U);
    msg.setDestination(22747U);
    msg.setDestinationEntity(90U);
    msg.type = 170U;
    msg.op = 116U;
    msg.request_id = 42234U;
    msg.plan_id.assign("XABSWQCKNIGQGMTKLJRWCESZOISRWAQYGFVRUMDVNEVEQDRYJCUZKPXDXDVUWPTEHIMFHTRNFZOWNMYLIEULJUVFDLGHISHKNEYNTPHPCAUSBJHNMXBPRKDDLQWTKJJKQOQTBZZRUZYZCFCLPMTGLCWBGPYOQOQDDHXPLJMQCSWGVOSIICKAFLOZI");
    msg.flags = 32848U;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 72U;
    tmp_msg_0.range = 0.8515232257679417;
    tmp_msg_0.acceptance = 238U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QAOIFOXPREXPNTBCLSMSOZUEAFBIDLPKIWKNONJVWXKUOYHIFBTHVMNZQENQZCASZQVJJZVYDARUQUGLHRZBEEDTHONFLFHBQGXFYKOUBRRDWWWMBBCNJSUHGRJYADGSYSMVPPPHNLDXRYSGEDUQRTWSILXAVZHGWYIXWQHDWAWIUFTNPXGEALACPKXOFCKEJZXCRLKSKNAVZJVVMFMKYBPQBMOJMDEJGYI");

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
    msg.setTimeStamp(0.06526963625807713);
    msg.setSource(58317U);
    msg.setSourceEntity(56U);
    msg.setDestination(12931U);
    msg.setDestinationEntity(181U);
    msg.state = 143U;
    msg.plan_id.assign("PCCBUNHKCHLGXMXYSLIZUFEDMRHWCOZSNUGGJXSMEGWGRBVWPLLUXKKCXOJJJNYWRATWGFMWPMMHRCPKNUYNGEVTFJQPEANAJQRRTMAETFAFLXOAZBZPTYWEIURAWFSEQVHHJVIEYIOKSWHZBPXZFTBOYFEYGLNSKQBVVBADMJNOXUUDDJMIGCPUDPTMHTXSYALZIRQQKKSCPTDQSJCZLORTUQIOWFHDRONAVVIHYLVIXNVFOGEDYBDDCKZ");
    msg.plan_eta = -2089647200;
    msg.plan_progress = 0.3171100435066164;
    msg.man_id.assign("JEJTKPQFLHLUSMHYQOCGDNIOFKOWQETSCGRMVGLKCAKSHOCMUWFPJKPOATRLJISWOHCVGGYAZMJLXVLXLVQTTCVNBIDDYRZKBENDVCHHWJQLPGIQUGEYMBRJZENSDPRDXAOVOPPBUEAWIJXEZIIZBCHFRUMZFBFZUWNLTMYZYLOXTKMRERGYXTPZAUNNN");
    msg.man_type = 7928U;
    msg.man_eta = -713389880;
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
    msg.setTimeStamp(0.27014413744270993);
    msg.setSource(14219U);
    msg.setSourceEntity(0U);
    msg.setDestination(35214U);
    msg.setDestinationEntity(165U);
    msg.state = 112U;
    msg.plan_id.assign("FXNDRZAYSSXFGDISOFJFNUWLENGZRJHXIQPZWKJFDAWVTXICUMWZNGSLKMIVGYFQTHPVBARGHXZKDHWLOEA");
    msg.plan_eta = 692520519;
    msg.plan_progress = 0.7986117874247857;
    msg.man_id.assign("UTIDYZSUVVQKQCNFHSPTOOQJIBXCWEVHARSCOWGJTHWJFFOUTYCGAVFIFGGNDVSBFQPGXISZBZEKPABSYZPEMBLPJDAMTTKJYGNOFLKTSGDDELAPMLMFWOAVCBLRUQNFEO");
    msg.man_type = 17521U;
    msg.man_eta = -1127467397;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.6909980575980861);
    msg.setSource(20752U);
    msg.setSourceEntity(84U);
    msg.setDestination(28468U);
    msg.setDestinationEntity(228U);
    msg.state = 170U;
    msg.plan_id.assign("UZKWCICAAUWVJJZTTZLCSMVDOL");
    msg.plan_eta = -605074985;
    msg.plan_progress = 0.7223850848558874;
    msg.man_id.assign("OZZQOMPTQRHQCEALWXAGRXOEXGOCOPFIMRMZZJAJMWVTYVSXVMGDDCHFLVMHXETWDAFMZCWQBQXKYYUIQHCUMJHESUDFURTNBXHUWKVNGYLANAFYKVKZHBLRFPNIJVIAXDCFONUGYKQHEEOXILFGRULGEQTAWOVECKZJPFJDLRLNLOPSTTIWBNNUHYKSEAJRSRHARZOSDTLBQVNWYZIWYKPXTMSSZUVJBPN");
    msg.man_type = 59729U;
    msg.man_eta = -1157259129;
    msg.last_outcome = 0U;

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
    msg.setTimeStamp(0.7096035218712038);
    msg.setSource(5583U);
    msg.setSourceEntity(142U);
    msg.setDestination(55591U);
    msg.setDestinationEntity(238U);
    msg.name.assign("OHCGXBONGXUEHIJZZLJOCXEAQEZYRLMJRXLQVKOOGTCYZMUHSLNFXNWPCFJELITLZPYVDOQUIJMBQYZQGUQSNFMEFEOQLRPRVZZEQIJLARWCWRJDAXDUNSUZWBLGFQTGOTCITD");
    msg.value.assign("DMQINFYABCVCEMZKTMJVYQAKKJXCMBHNXYQDTZCRTZJURYAJGMZJLPHPKMWVRTICENLGFYQQYEKFPSTYVUQBMZEIWMGUPLHMZUNNXOAXHJNRXXWVAOCKCLKEWDCBGHDLGTNNJQCWLTRKP");
    msg.type = 27U;
    msg.access = 212U;

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
    msg.setTimeStamp(0.7929119834909777);
    msg.setSource(61264U);
    msg.setSourceEntity(75U);
    msg.setDestination(44458U);
    msg.setDestinationEntity(207U);
    msg.name.assign("QMXFQPDDNHTXEVGNMNYALAKMIGBLBGQOFZKMHPNFFWQKYAVOJHPDODSAIQFSHYBROHHGCVCPXDCJPQWIEGLVWZKRURTBZMGBWHNOBUSMXUUEVIINJSACYFTJNXZTQHRCPAOTIPUMVCSEZTTESBYRLWSSWLOMWCKAJRJEVWGELNEYIDCBUUXNPXHJPUDSJYDOKTQKTVQEVZBRZLMMQKGSRLZXKVAUJ");
    msg.value.assign("IOHQYZLBYJIETCZPFJUVVNEDONIXUFK");
    msg.type = 143U;
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
    msg.setTimeStamp(0.14091556550011386);
    msg.setSource(17083U);
    msg.setSourceEntity(135U);
    msg.setDestination(33558U);
    msg.setDestinationEntity(15U);
    msg.name.assign("FYJIMDBGAEZYOHBAJLDNDJXDOJFFNJLLBGXZLEXFOINPTZEPUOZLMVCEUIKCDUVDCRPWHKKFSCNORINYPLMYXSUAQYHPXNCSTXKNAT");
    msg.value.assign("RITYVDPSTXWORQGDPYISXEWWNFJFLGFSAVMYOEBSINQYMKRNDBYEHBMSQMGFRTHUZOBSRPETJXYOOCYZLIHKIXKUGZWRIEOV");
    msg.type = 147U;
    msg.access = 174U;

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
    msg.setTimeStamp(0.30720824048699824);
    msg.setSource(51268U);
    msg.setSourceEntity(22U);
    msg.setDestination(60020U);
    msg.setDestinationEntity(214U);
    msg.cmd = 243U;
    msg.op = 56U;
    msg.plan_id.assign("ZTMDVPFJTLBLQCT");
    msg.params.assign("FURRGNVBZNRQHTIYORWINJXKGMWTOODFRCXCYFBEYUYXIRVDPPRGLDCAAEEKSEVFKHLUTQASDSGWQEHAJVAKAJNSLXPJIAPZNASPYIXTMSLMWHZYBUDLMQJLCOZYOQJBUINIQVVDWRUNZGKAHGONCVESJEWCQXKIHQDGMJYSOVTTUPFSWZANHTQOEMKGSUWRFWMCFMCLMKWBELZPBCDVFTURX");

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
    msg.setTimeStamp(0.11047269096644097);
    msg.setSource(29224U);
    msg.setSourceEntity(99U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(249U);
    msg.cmd = 79U;
    msg.op = 63U;
    msg.plan_id.assign("HVLZKIPKMUYLQBRRVBUHMPNMNDXWFXYHYKTJZSFCSPSINIAMMPETXHYQBABCUCRUGJFYYGLWLAQPBWGRGSJOKDNKSSOZCSWVLBGGCSJDWMAKJNCZPUZOOUIJIQVRQZTTOHRKIOGNDRJBMWZLTNLGQT");
    msg.params.assign("MAANWKSVQCSEIRETHYTSDKZTSJVCCWPINVOUZOXVQLQCHZREHXMORFFZUKSRKNULS");

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
    msg.setTimeStamp(0.37149409760362395);
    msg.setSource(16964U);
    msg.setSourceEntity(66U);
    msg.setDestination(37403U);
    msg.setDestinationEntity(243U);
    msg.cmd = 15U;
    msg.op = 175U;
    msg.plan_id.assign("SRVOUVYUKCTWMYQMTTEZIJWGMXDJYXTNJDNFLKALSEOXUTEBWOWDTGPTQKFKRAQOXFBJBHOIAFABVIAPVK");
    msg.params.assign("ECRMWWLYOKAUKHYWTPOOVLPEGEIDKDQGWYCEGCQIHRBBGBZCBFSSSHRXAWUYARJZQRJFUMNKSZTXSIZNCVSABVZQGGHXFVUMOPWKZXEVMJXNZVYVPSQBPDLYLNPBQTZPIMAMFHFYTFCNDEKCYTIWAUMNXSIHVZLWUQLWKUONOEJHTDHLSXOZVAQIRREBRGIOUDLRQWSNNJFDXOFXXFCPILOCIGRBQTFTAM");

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
    msg.setTimeStamp(0.880652054492132);
    msg.setSource(56106U);
    msg.setSourceEntity(103U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("IQXPEOTOYLXIHAHIVOJYOQXJTSVMLODOSCPVNHJYMLDZXDCWZQTNCHBAWWFTRAPVEEUWTMPCKYZXVUKCNTMRNMHRYSQAHMSOOUGQNQLYJFLEBIKOYKRFWRMTN");
    msg.op = 102U;
    msg.lat = 0.9508352663132701;
    msg.lon = 0.08958618494457482;
    msg.height = 0.1579912627331871;
    msg.x = 0.901377737784058;
    msg.y = 0.36559651727434905;
    msg.z = 0.839010758940561;
    msg.phi = 0.2853567438540502;
    msg.theta = 0.9608321480597671;
    msg.psi = 0.7954022280769801;
    msg.vx = 0.8496676638408461;
    msg.vy = 0.6944417369778481;
    msg.vz = 0.9172794719099577;
    msg.p = 0.5483936266862407;
    msg.q = 0.0012436643061236596;
    msg.r = 0.7446733952244206;
    msg.svx = 0.7885539838023665;
    msg.svy = 0.8606409373680703;
    msg.svz = 0.256514049980726;

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
    msg.setTimeStamp(0.40865476563032777);
    msg.setSource(11743U);
    msg.setSourceEntity(24U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("QKPJQQLOCTZENRIAREUXOQPVJCJCMKSAGJHTYUWQAXCDDHSUMVUEMEMTQWJEZQMPNLDRXYASBLVSDIHCCWPFXGECLPGLJNVBYIKZNSKBFOSNRZBFYFTFZRXVBYA");
    msg.op = 128U;
    msg.lat = 0.3732933484036004;
    msg.lon = 0.47958406366654194;
    msg.height = 0.78701947739264;
    msg.x = 0.017715030537222343;
    msg.y = 0.7380590679874526;
    msg.z = 0.16779157663587863;
    msg.phi = 0.36371203414242936;
    msg.theta = 0.7803009120314313;
    msg.psi = 0.5199674058264093;
    msg.vx = 0.7064694200625501;
    msg.vy = 0.9413773928222322;
    msg.vz = 0.5841567041861907;
    msg.p = 0.8579396272319832;
    msg.q = 0.3072268935037762;
    msg.r = 0.029799005518124533;
    msg.svx = 0.8491771401414797;
    msg.svy = 0.41586391779650844;
    msg.svz = 0.7314630893764105;

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
    msg.setTimeStamp(0.27098871554590054);
    msg.setSource(38428U);
    msg.setSourceEntity(134U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("GGVBUUSFDCLDYSWXQIMXFTLTMPFG");
    msg.op = 93U;
    msg.lat = 0.4620156990218005;
    msg.lon = 0.09829095924512621;
    msg.height = 0.08563910197603397;
    msg.x = 0.7370736908924606;
    msg.y = 0.6811293330826769;
    msg.z = 0.8915971144372986;
    msg.phi = 0.02921770519462541;
    msg.theta = 0.32669763548787445;
    msg.psi = 0.8104333767159012;
    msg.vx = 0.033241414464818875;
    msg.vy = 0.13716587243801914;
    msg.vz = 0.9972520420903032;
    msg.p = 0.3470980088518668;
    msg.q = 0.6593281826255631;
    msg.r = 0.12261299547578874;
    msg.svx = 0.056058182245454335;
    msg.svy = 0.2864802414001375;
    msg.svz = 0.5904868175876179;

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
    msg.setTimeStamp(0.20829382814277142);
    msg.setSource(1635U);
    msg.setSourceEntity(87U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("TPXNBAQNGHZCABZRZUUIPJVMMQTKHIPOUDOSSNGOEHODKWWNQLRCCNHEWCXMQVQLAZMQGPNGYUREIWHDFFFVVKX");
    msg.type = 64U;
    msg.properties = 156U;
    msg.durations.assign("CLXWCBKMGFERIOP");
    msg.distances.assign("TXPJTRSIUGGYGGTQAMLAWKZKCMVPHSASUWYHRTXQMOYCWRNBEEXKHWEDBFMEXTUWLQNGUHHNYHKASJZJFCSDPVESWKZRQCQAJLPAVQZNFSDJXODWPGHDZVHBYUFGGVZSGZLVITZIPFYVRFDCVMODMZEELABXYLIFBCRHVFWXMOSPCVKUKQPRATMYOEGYBICBZBDKRIIILOJXDFEMWNNXOJATJHULCNKICW");
    msg.actions.assign("RHXLWCKSAOYGGSYFKXYAXFWDESRZMVTVSPEQOXAJDEOHJCPRAMBRVHMPIMUIEOSFDNIKUZYNDMXHJXPZUGJDQZSOELDQILKMFZTBLTMYEUUNJAQJWNOQMETIQNQUKWCVOBNGLDLPXGTBHJFQABWNANRMTCWREUKAQDCOIGNOHGVYTUZEFBPWHJSZTSRJIGVIVKZWBAGLFMIFUCXHVFXRYGWPENALPZLDYVB");
    msg.fuel.assign("ZBWNYJYYHRGWSXJTCNTOPTRTVJRSUDANWJRIXJOQQZWCOMPSSKCAWNEANLYXHXQHTKLWWPFUZEUOLDIYXULRMDNQN");

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
    msg.setTimeStamp(0.9385509792721658);
    msg.setSource(60109U);
    msg.setSourceEntity(160U);
    msg.setDestination(34289U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("OPUHRXAOFDTCMTBLJVYIHMWKROHHRNTCHRYVXCBBCWWHNZURTKDHAWX");
    msg.type = 247U;
    msg.properties = 220U;
    msg.durations.assign("TYRFURQGUIJYSPQFITLFEFHTH");
    msg.distances.assign("YSCCXBABEDJWYXPPWGJPRHVKDJUAMQTFQMDEURMQCBQPJLHGNIWRXHMATOROTGBYONWRGOXAYVHQZCTDHRAMFXCLLVPSWNFYZJSVILHTMKNTDCHLHFNQEDDKLFSBVKOWRPESOJCPPIZUVXDCMNSGJKKXIVFVYEBSVYICPJFERNTSKNVSZUIBAENMOXIBOJQQUFLOGGDWUXZRILLRWKGFKBMZQEWYPTTIZCFKYJHBDAOGALMGXQY");
    msg.actions.assign("SEIUIVWBQGSCAMDTPHDDNJFMGTAPUUVFPGJVLBKSNNCIYKHVGWUTXUKRFRCOKLIRMERJWFQOAQALNXZGLWRWTLPHPFOMSJPHKXBDZKNTYSKPFHZITKCWGCOZPUQWAFLTJTFMRYPBDMCVZCVNRLZMJRKBHFCXTBVIOIXSEMEUELJEAYITIYQFYNPYZBDJQSNWEYQLSHMYG");
    msg.fuel.assign("NQIYNUIRHHAUXHFLUJSFCRHLDCHYTVJOGEGXAKRFQBTXMMNWPQJMAEFJBPXLRELNMOMUORVBIKLWJDBUCZSEVEXWTTVTKXLEIUICYBSBXYRYBFNGAACFTHRZMZKDVJLVJXG");

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
    msg.setTimeStamp(0.48493781384592527);
    msg.setSource(54897U);
    msg.setSourceEntity(181U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("PITXVTVGYJWPYBMVDELDCZRGCJTHIJRZPIYLVSIKUQLFRDUESRNXKFOQAKOQWPFWBUEAPFKFZPUEYAEDMMGVVBBBYFMSSXEGCAXLSNOSIOKOXNAJYWFSELTBCAYQJJQPNKYTLCUUBQIGWH");
    msg.type = 205U;
    msg.properties = 185U;
    msg.durations.assign("VGZMSHOXPEJLDFAUMDYHCVCQXWIOFIIQBNLJEHSBZBXXALBAPBTRXUQKLYZWCWYZAYMYLMFPDCEKMUUEGOISGAGKDIEIRCWDJBEOZKZRJHRTSVCBUDPOJXORJRODWWPZAAEPDJNRTTGUKQG");
    msg.distances.assign("LCHVFYGYNIKZBIGXQAIMRBLMMPOJXRBCPKFBCKPFILANVENCEMNSJUEVEQZNFRELDPEXZZHPQIHJTGCJILUQRJMFHLRVGQQGYAJRSGFYKSXQLFKOTDYSHNUCYOVPTLAYWXYDHDOEXKARNXGZBDTZWRVDLMWUKQYHNDDWKIOMPKJSAAOUBJZZRMOUWACPAXDSBWUQOOIJGGETTUBBSNFWTNJCIMEYQHEXPO");
    msg.actions.assign("YTJNDNACSU");
    msg.fuel.assign("XRHVNYXGPRBIVHYIZNW");

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
    msg.setTimeStamp(0.8557920872089164);
    msg.setSource(62161U);
    msg.setSourceEntity(60U);
    msg.setDestination(56281U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.8345735419847102;
    msg.lon = 0.6139844091628451;
    msg.depth = 0.18437793181133955;
    msg.roll = 0.7275817800170101;
    msg.pitch = 0.27617694281270233;
    msg.yaw = 0.18921399597889277;
    msg.rcp_time = 0.3388499471539711;
    msg.sid.assign("PQYQYKVLJYZHQTYUZYXBZJYGJBOCTIMPUHVARKLDEAPELNPRNPUKGZEXTMNIIRMIZHRFRWNSTUXQMEGHWTUOBVSCVKAARJQCNAEUJIXBOFZWUXFPSYFVVNBTCAMTSLVQOSLBPMGFKXXSLHIRPJYNOOTDWISCOWRIAZHHMMQSA");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.30134353917940104);
    msg.setSource(45761U);
    msg.setSourceEntity(208U);
    msg.setDestination(48883U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.9226913161428081;
    msg.lon = 0.8302370831366316;
    msg.depth = 0.08261855837046506;
    msg.roll = 0.03711015931114714;
    msg.pitch = 0.6575066356974054;
    msg.yaw = 0.2769203372408813;
    msg.rcp_time = 0.5559831523540186;
    msg.sid.assign("DDMEYDAHJSRKDJIUVZDDGXECTPPIPJVRQUZCPHYJYTVIVGGCALNKLCKDFNRFHRUARGSHVGWEXWBQUMCZTMLEHWGGOFHQXPFSQERSNBYOOWOXJSSJQC");
    msg.s_type = 69U;

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
    msg.setTimeStamp(0.7880262166835259);
    msg.setSource(51601U);
    msg.setSourceEntity(47U);
    msg.setDestination(22523U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.5819519330632024;
    msg.lon = 0.9774026240941658;
    msg.depth = 0.20650516192665547;
    msg.roll = 0.33319168825642864;
    msg.pitch = 0.8216828280377451;
    msg.yaw = 0.5832471455558699;
    msg.rcp_time = 0.6762287521714894;
    msg.sid.assign("ADYWLVNATNTSQOPRNGJOJURXFCFYFSNBVZSHOHXGLWTHWUXUVGJPIEROIBEEZCLYAUBKPWIYBFAJHSNMQLKDGNMNLFRAWQTKFVKFJIRCUNOKXOBCLFXDRAFPCWYQAXYEJJRXWVTQMCDTMPWFHCEMQRUOKMEQSVVZVHKIIGJSBPKHOEZYRSDRZHZDHGEPAUXQDBLVYIGGUPAOSBCLYHETTZMZPWLJSBCIEZDNMUWGKBMXDQQJLKTGMPIIUXYOAS");
    msg.s_type = 216U;

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
    msg.setTimeStamp(0.40237513678142944);
    msg.setSource(55127U);
    msg.setSourceEntity(112U);
    msg.setDestination(56037U);
    msg.setDestinationEntity(228U);
    msg.id.assign("LRMBFUKUQNLYCKDAOJFCSVFJUKAPJZHLOXLTIKPAWOIEMGGMYIVFOXYSFMJTNVMQGXHXNOKRCNWBVDWRVZTRKGEEUIQFJQAKRJCWPRMYRIDRBMNSQTLNBFEGC");
    msg.sensor_class.assign("RONLMOEIVNOAKESFYFWWSBMIQLBUQJXDBYPJWWGKNLYWKUMVBIXQEEZCVYFKQUVBZDSGHZINAEMZTKVXDNIT");
    msg.lat = 0.914518532142595;
    msg.lon = 0.44314880311456406;
    msg.alt = 0.5519243920329846;
    msg.heading = 0.3420303239637972;
    msg.data.assign("GXZWCDTIHQUDW");

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
    msg.setTimeStamp(0.8920375624177359);
    msg.setSource(47238U);
    msg.setSourceEntity(60U);
    msg.setDestination(31968U);
    msg.setDestinationEntity(53U);
    msg.id.assign("DCSBDGJGFMASVOYHHMYQBNUUGLEDWLOZUTXYHJLFWIHGKCTBUENBDMCTLPAQZNPUPBOKQAJXWFYDTKGJCIKBEMCRWVUIJXVFMKQVBOGIPCEGZLMVVEJYYFSBFWRMWNOVHAVZKZRCDMVTRSUOXOOKZDFRRPNWNJGSLZLNWGQENTHTQFDARLXCF");
    msg.sensor_class.assign("VYMGCYZXMSLPOBVYUSXXMKENWSX");
    msg.lat = 0.12033224890454852;
    msg.lon = 0.18333287700463596;
    msg.alt = 0.9467103780609541;
    msg.heading = 0.6554149930867496;
    msg.data.assign("YNTJFAXESXSFFIQUXWWCYOIYRFDZYUAPQPOGG");

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
    msg.setTimeStamp(0.8863441178793137);
    msg.setSource(26403U);
    msg.setSourceEntity(42U);
    msg.setDestination(51104U);
    msg.setDestinationEntity(148U);
    msg.id.assign("TJRTAEPSTNZIAQDARKIVNWLWOKYXJOLNKH");
    msg.sensor_class.assign("GXCFUKBJMCLVKUYMKOZASDWBMUYHBINJOUOSSVBUDXBEFKLEVOLUIJJGAMVVKIWOIEHHXGOMGTWRYYFPPMZKNSGWQZRQIAYTTHFYXGTZGSESQRIULKMHBYTPEPJQYWXBVFSPLQF");
    msg.lat = 0.4652911743999686;
    msg.lon = 0.7220658276140067;
    msg.alt = 0.5568289193831939;
    msg.heading = 0.5261635273623183;
    msg.data.assign("FGTQQXFKPDSLHWPFOCZSVNIODMPEUZQMZJCECRDDAGGVBAYJSTHHFDXQVJMRKZIJPQLNUZQNYTAFPZCCYMGISVGTVDKCKYTVJMSBUSHAPDZEWMEETKHUNRNXLKFYDXBYRDFMBBEXUZY");

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
    msg.setTimeStamp(0.513179953482276);
    msg.setSource(50602U);
    msg.setSourceEntity(6U);
    msg.setDestination(22674U);
    msg.setDestinationEntity(98U);
    msg.id.assign("TCKIGZNCBQKMBWZMNHWIDIHEPKWOBQQYEFNVYFLSNGBLGHIPIKUTTAKBOHTWCTLQVGIXUZJMRIHVPMJCPPMSSEFANBMAOJIVXSBRONRMZRPGFUREDCPSQHDJYCULOUVVQHEXXAFATLTHXLLALNFPQOEONCGYJHZQVGJCTRXRACSNFLMYFXKJEOOGATDDWJTUWMERZKLIWRNVASHZKRWKXDKYBZBVXEUFZBQEYUDGXDOSMCFYVJQZUS");

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
    msg.setTimeStamp(0.04181352995121168);
    msg.setSource(61068U);
    msg.setSourceEntity(50U);
    msg.setDestination(3744U);
    msg.setDestinationEntity(175U);
    msg.id.assign("LKXLDGOKHKNMLLIDWSAPEEDQKKPOLAOVZFHFRNBSCRJWQPJLWGKQQOAGVWENMFAENCZNJHERWXHTKCPCVSHBOJYPBPHMHISWXZTYCCFSTDUTAHFDQVYTRMIVTQCKUFLQJIVTXRZXKYVXBSGUSDSUOQOFYZGYCIYBJREFUQDPMZMTXHOYGNMUFJJIEACEQLVWRZJNJENBMSBUIGXP");

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
    msg.setTimeStamp(0.671825448167635);
    msg.setSource(5714U);
    msg.setSourceEntity(104U);
    msg.setDestination(65383U);
    msg.setDestinationEntity(230U);
    msg.id.assign("RJPRUZBWFOEMKTFCRLXEGIIFKGVWJCWJNSMFCTMHDBVEJMSLAYCTAXDQDDYHVQNNYANSUWEWKYBVSLKZOTNOOTAZTKRVUIPUOZXSXGILLNASXUDQOBOEWHERRUOSASYZJFJPBDBIVCXEYJEPGTIDCNQYBVZKUZXVLMLMOQFBYWEGSTPKTRQGPQOLMTUNCN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SHZTECOFJASPSLOQRZMNJSHQUYAXQLDRZYOJRDKHFNAGMAINBQPEYPQLXUCHZUIMVKEYVTNNOYNWCWQDHUBXKCRGBMEWKVCTVMMMFVUGPJJZJWWLBTAXWKQSFRATJDUDDLAFKDYVVOGKXGAHIVTXGIBNBOPCJIZYEHPSISSOBFZIYXHROSSNCDLLXGRFQWFLCQYEMIDMEJXMRBDWTIWIETZQNTOGUFATPPR");
    tmp_msg_0.feature_type = 243U;
    tmp_msg_0.rgb_red = 23U;
    tmp_msg_0.rgb_green = 50U;
    tmp_msg_0.rgb_blue = 13U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0015221922615596961;
    tmp_tmp_msg_0_0.lon = 0.31319767340970384;
    tmp_tmp_msg_0_0.alt = 0.2807192546321089;
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
    msg.setTimeStamp(0.5066505831160465);
    msg.setSource(58928U);
    msg.setSourceEntity(207U);
    msg.setDestination(24278U);
    msg.setDestinationEntity(196U);
    msg.id.assign("AVLEULOLCOIGNFQKOQRJVFJPLHREIDDFJXUJXARUNAHXQIHBAYUAMWZKNNKBXASUCSGZMDVXIPVWBRMTNGNRKGBZIUZUZDZPEEOXBDGTNLSEMZHJMSWQFLXPBSFNOJWQVOESHNVTMDUHLDPEFGBSIC");
    msg.feature_type = 49U;
    msg.rgb_red = 171U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 133U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.42951880250149665;
    tmp_msg_0.lon = 0.1829633999000414;
    tmp_msg_0.alt = 0.9618268297469258;
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
    msg.setTimeStamp(0.3786368381464096);
    msg.setSource(23459U);
    msg.setSourceEntity(31U);
    msg.setDestination(7834U);
    msg.setDestinationEntity(60U);
    msg.id.assign("WVGLSBMZIWZHTAXIJFPQBTSJBTNILQNJUEA");
    msg.feature_type = 188U;
    msg.rgb_red = 150U;
    msg.rgb_green = 243U;
    msg.rgb_blue = 169U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4343860155934258;
    tmp_msg_0.lon = 0.024516886255282366;
    tmp_msg_0.alt = 0.2842534337638861;
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
    msg.setTimeStamp(0.4277088662945667);
    msg.setSource(28820U);
    msg.setSourceEntity(72U);
    msg.setDestination(46141U);
    msg.setDestinationEntity(195U);
    msg.id.assign("VLLPYAQMFYOTKIZGOYVXQT");
    msg.feature_type = 243U;
    msg.rgb_red = 184U;
    msg.rgb_green = 93U;
    msg.rgb_blue = 102U;

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
    msg.setTimeStamp(0.322170186538036);
    msg.setSource(43833U);
    msg.setSourceEntity(117U);
    msg.setDestination(31792U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.47922125608955524;
    msg.lon = 0.2984412280121398;
    msg.alt = 0.18382856092028332;

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
    msg.setTimeStamp(0.5737151855551358);
    msg.setSource(55909U);
    msg.setSourceEntity(116U);
    msg.setDestination(18220U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.7327496833951913;
    msg.lon = 0.16430417724558877;
    msg.alt = 0.8514330894715506;

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
    msg.setTimeStamp(0.1907550433106453);
    msg.setSource(28602U);
    msg.setSourceEntity(28U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.4003406655353682;
    msg.lon = 0.26536637081068204;
    msg.alt = 0.9513361174572559;

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
    msg.setTimeStamp(0.9415398951762525);
    msg.setSource(11753U);
    msg.setSourceEntity(47U);
    msg.setDestination(60746U);
    msg.setDestinationEntity(16U);
    msg.type = 195U;
    msg.id.assign("SPAISHQIZMYLQAAYKUCPNWNEYDFCAIBVEAGBPRLTQDCSSCLGVYGOSXZJKYUBSR");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.09385230451191995;
    tmp_msg_0.lon = 0.2899010641284637;
    tmp_msg_0.height = 0.045550797809901455;
    tmp_msg_0.x = 0.3475515305962018;
    tmp_msg_0.y = 0.22917308459257046;
    tmp_msg_0.z = 0.22494515153658357;
    tmp_msg_0.phi = 0.36735561851205456;
    tmp_msg_0.theta = 0.18065763816705527;
    tmp_msg_0.psi = 0.6183669804563918;
    tmp_msg_0.u = 0.952418282466682;
    tmp_msg_0.v = 0.6721234516903853;
    tmp_msg_0.w = 0.3451602139758131;
    tmp_msg_0.p = 0.3425471836109716;
    tmp_msg_0.q = 0.0928899121581479;
    tmp_msg_0.r = 0.5854947970495272;
    tmp_msg_0.svx = 0.31858566696764246;
    tmp_msg_0.svy = 0.283892869048999;
    tmp_msg_0.svz = 0.8627798353839476;
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
    msg.setTimeStamp(0.47849221507832695);
    msg.setSource(18856U);
    msg.setSourceEntity(9U);
    msg.setDestination(59813U);
    msg.setDestinationEntity(5U);
    msg.type = 143U;
    msg.id.assign("SMNCBGOJULYBRFFYOZBDRUNAHDPVEOEKWQCGJRXXLZTQMKCHIFATAHJQFJFFAANVXEMJEFDRHVWFXJKKIIKWTE");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7747356133892798;
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
    msg.setTimeStamp(0.26577890240152346);
    msg.setSource(26199U);
    msg.setSourceEntity(168U);
    msg.setDestination(50684U);
    msg.setDestinationEntity(35U);
    msg.type = 169U;
    msg.id.assign("QZETLVBOBKOYMCWNOMGKXHDIOZALOCARNLTEMFJSLDEKUQWXSKMQJABURFWCIYVXZSJUWDEINVODNDTFTCH");
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 20U;
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
    msg.setTimeStamp(0.5282557343316815);
    msg.setSource(50640U);
    msg.setSourceEntity(61U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(78U);
    msg.localname.assign("GBUKJJKRTDJBAHDGDPGTFEXEGNTOQQDCMZONPRRAYYSYGLRGFEFTVWJEWDESZMSIHHOKQLTAHUWNVLZNXCOKVTZESQMVM");

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
    msg.setTimeStamp(0.7869607337552197);
    msg.setSource(51309U);
    msg.setSourceEntity(240U);
    msg.setDestination(14766U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("EYIJHISOWCLBPOVYXTGQYUALKDSQEAXMVTODWBOMNV");

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
    msg.setTimeStamp(0.2767712291520419);
    msg.setSource(15838U);
    msg.setSourceEntity(217U);
    msg.setDestination(33755U);
    msg.setDestinationEntity(116U);
    msg.localname.assign("NWWJDLYSHJWMHKQCYUQOCOGLKDDBKSJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CCGHUYNTGNUJSIOGDORRFVDPSMXDORLBKFBBCNMUCRAKHQZMXRSTARKDPGXEFZZVPWPQYAQIMTLVSPHMLTYFJVYYJULLWDDWEEJNUAFCJPVVEANESNQLGXWLGSXYENLZYPHETLGZBKRZXOWUXTNATPHEKENOWRBIUGPKWVHAFEJBGWIQIWSYKQMFQOMTCOHHYCOFSKIBACUKCF");
    tmp_msg_0.sys_type = 0U;
    tmp_msg_0.owner = 51024U;
    tmp_msg_0.lat = 0.9986116759148748;
    tmp_msg_0.lon = 0.2921128535825931;
    tmp_msg_0.height = 0.6096213117446853;
    tmp_msg_0.services.assign("HRASEQNAWTGNNLIRVPVJOJQRSHUHOWLYOEJUSTROKWRQEIDZWXQYPUFMMIEFOFMQFWTTMFECPMABSCGSICQZDWANBOFYMPJWFEZHZTFOILUUBZHTUKK");
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
    msg.setTimeStamp(0.7049802586943984);
    msg.setSource(33051U);
    msg.setSourceEntity(205U);
    msg.setDestination(8411U);
    msg.setDestinationEntity(189U);
    msg.timeline.assign("WPJTDXQNGMUWALJCDDUEJWBYDRYTEBLOBCSJTHHNFZLHZMVQZRPPIGWOMDOEZRCVURKOWIXSOXVLXEEIFQQTPDQMANOUZNVNUVYJYZHYBBHXKFGZHSAGZKHSCBAAVGVTFKSDCIYVDONKEUUAWBBQNSLERWISDMPDWGPSAKBXRFWCETFZPLYGZJRSPUAKCRNKULCYOQGIFHTNKPIMYWFUJMCLFXOISKQTIGEIN");
    msg.predicate.assign("KGOIBZGWBBWLZSWQUNAIMKOWCAYMWXVHDTMDULFJMCMEFPSXTNNIKTYVJQDLSXRZEPJGDXBVWAHFRVYFRBOXQCUHNNOBZIAFOHVKWRYUZRETAPAZTXNLDSEOPVLAJCEIIKHKCTCHSJCZFQGJNPTYNULWWJVYTVMDUBJRUD");
    msg.attributes.assign("XHGQFEIRQJSQEYVQJACTQDCQDQNWVYTWKEVGMNYZWYNUEBKHVIWMJRPWLRFPVKPFFHPNXUUZQZHBPRT");

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
    msg.setTimeStamp(0.8096536867993893);
    msg.setSource(46570U);
    msg.setSourceEntity(4U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("ZDPHGQIITNHDOGOVDSBOOPALZSSGHNYAEOHATNZRWCNQWVEVGAELJGRJQUCBKGXWYJQWOMBSRWYBRXRQBZNOURTDXYSUFLAIWMAOCEIZRHYKDBDHMKXBSLTAYLFTKSZIEVDMGCLMFTLJVMQFUKMOL");
    msg.predicate.assign("RTZLDJJHPSTXUATEEUKIWWINWVOIQCABYJXFLFUBVBFCHPRXMOJYKVVGIKFFPPSFCRLRXABXZNFLBVKTOQAAQQ");
    msg.attributes.assign("IYECIWHSMOMDJDJHMNDDZYBKTHSFXKVKBRGKGWHVQWSTZRPKCMXPQPAYEXJKAIJAFZJKPYJKQVJECGFWTCZLCSYKRWSCYAOVMHDPGXYNXRHBAOLSOGVBHR");

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
    msg.setTimeStamp(0.019725465017613297);
    msg.setSource(10314U);
    msg.setSourceEntity(223U);
    msg.setDestination(17974U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("IHQPURZZNLAAHJEEITOJDAZOGSXSIEBEHZNMUKRJBGQTAVKXPFYZWGWXMMAOANLSQYYYCTUYFGVQDQSFXTBVRTRCTNETJVQFPVNHKDFFXAYJAQGWSDUMIHQGSMJVJPOWJXBCUUPKAUVIPICIXWZGVMZHLENEBPINOROXDLGEMRBLNPNFLGCRBUFKTDUPGZJKDFWSPJHCQULNHKLWXRBCHOFBIXTKLECWSBCWOYOYCMVE");
    msg.predicate.assign("NVPMWMPSVWGQSBNIBJAKHSNQACLNJSWZEJISCPAYEJHZETRU");
    msg.attributes.assign("PZCTHBACQPFIKFMFHLKBKHMJWOYNXIXNUYQSDZRMXJVSULPUWVRHPGBYKSESQZJLONTSYOLHJLFZGEMNBBXETGDJDNJFTMOPHSVIXWFCPTCMYWDH");

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
    msg.setTimeStamp(0.43485090057292763);
    msg.setSource(62753U);
    msg.setSourceEntity(200U);
    msg.setDestination(31634U);
    msg.setDestinationEntity(53U);
    msg.command = 196U;
    msg.goal_id.assign("MEXRAULFSNTGJSKXQLOOMNQQLUXHYPETBZMZBQKRYCKURDEPYVDAVCZUUKHQGLYVPAISRYOLTABHBMVXHH");
    msg.goal_xml.assign("MVOLNMJVJMISXPDBUGOCABTDMDSCHBKHPWCFKKFFAOCRDGZEHLWOYRPYPXKKSFCYXDPZTULEYYTWMABGZRQGWIPPOQZLPAHNNNMTAUALFYZOGZD");

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
    msg.setTimeStamp(0.2575442672347502);
    msg.setSource(25277U);
    msg.setSourceEntity(17U);
    msg.setDestination(50693U);
    msg.setDestinationEntity(17U);
    msg.command = 51U;
    msg.goal_id.assign("MQPZCRBXCGDJZSFHGVSDRYYHUALVIFKVEWEBEQOAUGVWNIMOPHJAVQODRSWRKPSXUMHLJYPWXAYMOACOQOQAUWNMCYVPNZFONWCDQFYRBJWYPCDGFDREHXSLSRPKYMTHZJKZPBLOSXNBVLIOUAYCBNVQFTLSRJQDPGMTVJZXFYGBFGIIFNOCKJRGLLZTMQMUETIMCNEZSJJDERPAKKHUXXNEVHLGZQDEWEKUZFDBITHCNTKTBXU");
    msg.goal_xml.assign("BIHRNXYBCWPTBUNPFWLSSYXPPROCAUSGSDIVVAKTBJJHCGSPOIFUFDUUWPJALKHESZZKMRCUOQVQPQKQESBNCQELYBGBVTEIHDJYTGVNEFWQOOWTGRLYYSXMVDNIMNHZAIHHQLMLJMZAZKXLWJLGXCHMTDVXXRSUCWJMWARDTUQPOVGNJYHA");

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
    msg.setTimeStamp(0.8893904851468136);
    msg.setSource(1148U);
    msg.setSourceEntity(130U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(142U);
    msg.command = 93U;
    msg.goal_id.assign("KZJTURSPEOAYJFIFXBQWWFAMPTWQHSSVNORIFYUDRTGZZEIYDOYVTIKSBKOGCLECRSWCGDUBWDDVSXUVEKGKFBOPRDEJORPHVGN");
    msg.goal_xml.assign("RRHSFAWEXBRBYLKASWFGMKDFEFQXKLOASARQ");

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
    msg.setTimeStamp(0.24189100628781413);
    msg.setSource(52741U);
    msg.setSourceEntity(119U);
    msg.setDestination(27358U);
    msg.setDestinationEntity(92U);
    msg.op = 55U;
    msg.goal_id.assign("TWXMWQHXLZCCHMDYHCWNBJVBPSWSIHMKLHPQSCXEHTXBHOYOSVUFBPKTWPUPAUNNUANUDOAAMWVUCWVXNCJFDUGWUTPGTPLDGXRZHJOFFGJVYZVZLSSYULJTSGIYJGYPZOLXDDBQFKMHKRHIIWEMKQIARFZCQUGOBEOABLFSEKZCTBWYNEAEJDFFSXVRETKQYYIOVZERPNEIPTASJKRMRDDVIZQRGIOKYLCNBFMIQNLTLZREGMXCD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HZODEQPMLHLTTMEPMGYDBQ");
    tmp_msg_0.predicate.assign("EMRCTZDHAH");
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
    msg.setTimeStamp(0.2357428958556692);
    msg.setSource(16887U);
    msg.setSourceEntity(249U);
    msg.setDestination(27947U);
    msg.setDestinationEntity(164U);
    msg.op = 107U;
    msg.goal_id.assign("HWMOQOFKXHJGLGVAOFCIOAZVCDIRAUHKTGTCMMKAJKVNCPSILDAFAKQM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DXCYDXJKCXPZMLGGQVESXEYHWGGHWKJDKCAUKLUYEGTAUPBURQMMANNYBROEKZWBIJTWMYYLBOQFWOOOYJDHFKFPCFISBOPFNBJFWZRLAHFNET");
    tmp_msg_0.predicate.assign("FYKPCNONRZPOFYEOBQKFBHVJQDMZEBFVCAZZHNIBUIVWSXXCQIYQALTXNFLDIFALFKTRFJBJWCZUZDRXRMWBSWHRSVJAYQHUIAPYGVGPWBXUFWTAOXPHLLIGNRTYKQMXLTCGJEMLIDAUCUSYJWIMJMFROKYSUSMGCNCPGBVCJUXEKTMWSHARAEPENVZOSURHPONMDTDXHENDZQODWEGNUOTPKXI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LVGPFEVOVOBNEIDJJYQITMKUGWARZLIWTNXJFTZPRZIQNHJGEXDPYVLCHWTQRQDZAXGRKYUAEDMPWMZXRBSJFRTRWUXUOTELPJADZCFIHPBUKBJUYPFTHFEODEWQCHEIYQRVRCKKYSVVCZXGTPHHVXLCDJCMNEZACOYRNNSSSIOONNASVBWFBBSL");
    tmp_tmp_msg_0_0.attr_type = 75U;
    tmp_tmp_msg_0_0.min.assign("OBRHTHEYCNONWDOYGUCIVBYQCYEJVSRHTNTQXFUBWFJAJPSFZGYLDWZKGSUFFAVWBUYVJPDXAFBAAYMPLATUTBRUHOYCMQOFDIESLLTLYXMOWGZQVXXPJNZCOKQSBPMLICBXREZQKSGLRMZZMTLVKHZSBUJGMHPKIIQTOGIJKSEGQCVIISFDDUUO");
    tmp_tmp_msg_0_0.max.assign("NHYGTOOSTSJSDFQSPZTZBIZHEYQAFFGLOPAMJUHQKVCYLWJTGKGQSURKOLZBJBMPRCGXYGMVIADDGUOKUEJHYQXRQQFWSPIVMZVPUTPDEBZEKFIGDTVCPUXWLGXONVWUIQXVYEQZNVOWSOMLFM");
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
    msg.setTimeStamp(0.29978205246854106);
    msg.setSource(52970U);
    msg.setSourceEntity(153U);
    msg.setDestination(872U);
    msg.setDestinationEntity(239U);
    msg.op = 168U;
    msg.goal_id.assign("TURJBZYTWVPWBDCUKSPYOJYXDITKTOY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EOYNIJPLVPDQFSCYKXVVOFKBCVKAJXSAATQUSXSQIDPCUGOSHQBYTAMFZDWRMANCSELPTSQISRLHFGMVXUHVOISPVGJMYQNJMAMXUEWCGIJNDGECLGNIMMFXWYUJBPWZNFRJHJPZVROZTTIZIHDAOODDPARWYISWXKKWXUUKPWFGCLBZQYFZZBGEJBTEUDERLRATWWHHR");
    tmp_msg_0.predicate.assign("AZEFGSUUEZNCQATWKNDBCNOJJYNNFKNHWYAVWURLHYBVTVCLMYOTOMQLVPCNZVGHEOMTGKROLUPBJFMFDSWUPIALSIZMYDIGIXWRNDKHWYBRVQWAPQBJOOTN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EXTAGJBZLEHNTCALAORJKQSUACNCGWMEWJEKNOIKSKCSIBKQUDDDVQCZLHMGPIDNRFUSFBFLRRVAMKJLQOPJBARFGRIVXTOLHOIFLZVHURTDWNRIJZEPYFGQMAMTZBYIHKTVWKKYOFGHWMIMMQ");
    tmp_tmp_msg_0_0.attr_type = 122U;
    tmp_tmp_msg_0_0.min.assign("UPUZUALTWGTXDESKRJTLJPSFAICYXUQXDWSNHZBDULDHXXFWTZWQYJEYXKTGOBQRNEZKNCGVNYJSDNPFSPTBBSKAIVVHYOPHDLIOFWKWANXZSUXQGHMRUCPMMGJWDGGTJEMAGRRLCNOIEAJNQTYOYFFOMMNJYCHGQLKJHZXLEXVZIRJIGQHCLAIRCIFKMCPUVVSHLKFUUOEWD");
    tmp_tmp_msg_0_0.max.assign("PAEYVHHNRTQTBBCIJVCMAHFWFVNGOOSIMNQGQRRHJMZLWBYFEXCVXZAPOIHP");
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
    msg.setTimeStamp(0.3298190430691831);
    msg.setSource(56297U);
    msg.setSourceEntity(65U);
    msg.setDestination(15666U);
    msg.setDestinationEntity(52U);
    msg.name.assign("EPVHUTYQSNCARXJKMWDFXVYPGRXVXKMKNQSLRACHUKSMSYJYCCQVIWVUEZZTCHONENISMBGBOOBBDQLWJRGVIWPNDOGUIGMNEVBQZJTCAWKAPGH");
    msg.attr_type = 175U;
    msg.min.assign("JHEBAAXFDAEYGHOOQZUIRKEZPQLHXRCVRAEIOFWHNPWKTPLZCEZIJZBRXWPJAKVGWPRGZXYWO");
    msg.max.assign("HXJAXGMKWUISGQIPQYWUZCGZDLVQTFLGKDOHOMZAMTXMFERHQQGCCQPGFPAAUVJEVWWCUHMRSPPJFZMHKSJFZOHWDIFJSEBDXDYSQDBCECUKEPNYMXOONSAEKVLAKRNTEWRPLZCNUJBKZOQJGFIPN");

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
    msg.setTimeStamp(0.030905866499084444);
    msg.setSource(11097U);
    msg.setSourceEntity(146U);
    msg.setDestination(42814U);
    msg.setDestinationEntity(16U);
    msg.name.assign("NAXYPLLOLFVTEWEVHHXSDUCJMIT");
    msg.attr_type = 82U;
    msg.min.assign("LPHDBBIUEYAHOECDFUYKHLVWMNSGYJPBGCIETFEANLSMOMRGSKIMYQYHPVREVAGXWLPCXZSAOHCGNEOF");
    msg.max.assign("BQJETNHLMEGWOTHRESJJBKXLWIHCVBLGCQVEPVLXKZJNNGWVQKITMDLSYXKUDNKQLJDYYDOQASSBILXFAXWSRNWFBIFZCAUIFXBZJORYEUHPZDCRBTCXYJVPOHDX");

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
    msg.setTimeStamp(0.4253897125569376);
    msg.setSource(8550U);
    msg.setSourceEntity(134U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(200U);
    msg.name.assign("XXFIHRNOZRX");
    msg.attr_type = 10U;
    msg.min.assign("GZXXPNHYHNJRYNCQWAFHVOXYZHVXQDLGSETENPRHRKSDPIOBAIIAKYWV");
    msg.max.assign("INDGLBGTCOONMEKOYPSKTEAYNBHAMFADBGXAGSNNLFEGXIMINJQHSZBIFZJEVSBEPSXBQTZZQUIYLJVCEOEFHTWPLRCODBMOPYQIQ");

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
    msg.setTimeStamp(0.9311550906888763);
    msg.setSource(25293U);
    msg.setSourceEntity(205U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(132U);
    msg.timeline.assign("KFRATGWZWUBAHELDBPQGNFWCIELHYVYZZMVIXIRPNAIPDCAUABYSTQTYTYRVFP");
    msg.predicate.assign("OVOXJVICMHNTRGGQOKVDMWKOXIHCBXPNIFAEULLTBUZJKWCBQEEFZIGJXVDCEOFYASBGMWEWX");

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
    msg.setTimeStamp(0.5195171010077447);
    msg.setSource(44289U);
    msg.setSourceEntity(75U);
    msg.setDestination(8179U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("JPRGDVAPTEPXGOYSBEEYQPQVDZVBMBKIOZ");
    msg.predicate.assign("XIAEWRJCDQZPYPAHCZXHOZBVSSAGFUVRZKVBOHRVPDDBOFHZJFLFYYVILILGHCTRTANGDBSYWNWPPABSUMTCDYDFMXJZBMGVDHWKGURON");

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
    msg.setTimeStamp(0.1593175138451819);
    msg.setSource(5874U);
    msg.setSourceEntity(201U);
    msg.setDestination(38934U);
    msg.setDestinationEntity(245U);
    msg.timeline.assign("QUYSCBVOMZUMERVAPPKBFYUBSVMWBRHSVTPNKATHOEHAHVJFNCAMQDYIHGFBDPRYVRMBBAFIRKIIHQSXXDKMLEYKCXVUKFTYGNKTNEYXTJLOOOSQO");
    msg.predicate.assign("JEUJIWWICWDXPNHRMZTFKNYDYHBVFGXBPTDLCGFQZESWLQKUBXTRFVNKHDZQKGFXCEUIGLJDULMAAVMYDQMHNBHYWJOSNFVPVEOSRCPZSALORHXTCUXHGUHCBHIJYDVTLNTGXENVKHMYLRITR");

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
    msg.setTimeStamp(0.8671042355597331);
    msg.setSource(62608U);
    msg.setSourceEntity(232U);
    msg.setDestination(30685U);
    msg.setDestinationEntity(71U);
    msg.reactor.assign("BPSTQMKSLJHNCFYWNBSEYRDIHCXFXVNLBAMAIOOBKFNURB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TMBTBEQDZLHNEUJITRARDHDOVYOZNRKOSNDGYBBBWTKIEJKQQZKFUUCZCXVMSBHSVIYNMVAXLPGYMHLNYWUJSGXRXGHQWQIPVTSYNLVUGHWALQRJTEFTPPRRQLHZBKKKAMGOIGXDJPASCSNHVPIITDFGFAEHEYKMAOIACENCP");
    tmp_msg_0.predicate.assign("GDYLWNXXHALKBSMKGISRDTCQVPVWMRDGSSLCUGCEVALEJXCSNZRZIQLJMRIMKXARYTYNJNCFHHBPMOYMGKQQCIDWXNOMUDXTPVIGWUDLJZVIPTTSWRJMBCEUTHPWUJAEZDAKPYNYELFSXCQLYFBWTHKYBAMBSCFJETLOLCBFWIHFQRQTAOGNEVZFZPGHAOPDOZYYOHAIXOMPWKZKHURIPXFG");
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
    msg.setTimeStamp(0.2337288476031989);
    msg.setSource(40145U);
    msg.setSourceEntity(229U);
    msg.setDestination(38872U);
    msg.setDestinationEntity(38U);
    msg.reactor.assign("MOIFMJDPHTQJXUAJAWTFHOSLMCWFHFMKXXVKQKQXYYPTMFRLTNCNNAQFHPLCEQELNFGXCIMGBBWBYQETZXBYGDKFDBVYZWLWEVBEWMZKTJALWHLGVCHQYRYNBJJUGRLBUGSAMRVJPOKHZHSSPSOOIBRHAOPQTSVGIOUZSUEQCAICFZYRKUEXGQKAJZURKNWNGODIDXSMKBYPVIVCRCSDDJLRFONUZLZVZ");

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
    msg.setTimeStamp(0.8646438406743434);
    msg.setSource(29460U);
    msg.setSourceEntity(5U);
    msg.setDestination(43152U);
    msg.setDestinationEntity(228U);
    msg.reactor.assign("LXKQSFFYWVDACRCTEUCFBGPIITOYREPTUEPZJZQPOJULLANVURBUTVKKSDPMYJUMWZNDYAYZTCJKMNGBGQGIAIIKDFVYWLTOKWQAGHVWXHO");

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
    msg.setTimeStamp(0.9897587709745225);
    msg.setSource(31660U);
    msg.setSourceEntity(53U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(149U);
    msg.topic.assign("HAPRZKQMOPVLQLRWLAEXPHVTIFECUHXIEJVNYFIGSRTMZTGWCEJNAKIVDABFXYXDYQTTLHPUCLGZVLZOAAZYXSBQZFCW");
    msg.data.assign("MZRASKRUIMIMHAIETRQFEXFJBUMSRXBNJZIDMGTHDSMGLLOEVIABUYLHVODNKCWKNYTQHXYACEBNOXVPLFPMQWERGFQUIYEETNLBUWABNKFWDFCJNVJGPZSVMKWQLDYLFPVTYRRIPOJQDPYPKPOQJGQCTEZDDNCXYGJXTKILOSCBFXBCSDWVZCAUVOFEHUOAQTIZHYOGSAXSLSUEPRCJXHKGZRDBPABKVOVT");

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
    msg.setTimeStamp(0.15632057241330266);
    msg.setSource(3246U);
    msg.setSourceEntity(97U);
    msg.setDestination(62260U);
    msg.setDestinationEntity(128U);
    msg.topic.assign("JKITSLDISYQKNKYJNYMFGQ");
    msg.data.assign("AAQXRLEXOXGPLHKZDLWJLMKKCLFKCAYDICZMFDEUURLPXVBHXZICYQNPRVIOVRCJNOPZGTXIUTMIPHQWASJVFCJHTVJQLRQWEGYNSZJEEYNKNJBDUWYLAKEHLAWTEYMWNTRUWGBSRK");

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
    msg.setTimeStamp(0.23757424523830517);
    msg.setSource(44100U);
    msg.setSourceEntity(223U);
    msg.setDestination(15288U);
    msg.setDestinationEntity(89U);
    msg.topic.assign("YAUZUXHCJWRXALRJVKDSINETWWBTUZOFBMZRBFVLIWZYGFNKRHDJNUYACUOSQXAKHHSPRZVENXZAYBYIJKUCNQQCDYMHAMVPKVEBETDMVBGXMQCOEWQQTMJSDFPRMJORIF");
    msg.data.assign("AHFNGFAWPBWBPPOMQAIJEVQELBPHDJMRVTLGUZEREOWSNVRTCMELNQHZZRTTXWTJNSZGHMNKZFPBRBSCHBUIQCLWGDEXSPDUVAYVCHQKXHJBIRIVCGMVWGYIBCIJAA");

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
    msg.setTimeStamp(0.6680004051883152);
    msg.setSource(33948U);
    msg.setSourceEntity(48U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(140U);
    msg.frameid = 200U;
    const char tmp_msg_0[] = {-93, 30, 111, -94, -109, -117, -79, -127, 18, 100, -95, -75, -107, -10, 119, 87, 49, -91, -45, 44, 3, -59, -18, -75, -38, 22, 88, -94, 49, -90, -14, 40, -109, -54, 49, -102, -103, 115, 40, 83, -20, -122, -21, -45, 29, -87, -50, -99, -109, 1, -15, 79, 111, -66, -60, 4, -92, -50, 29, -126, 5, 1, -26, -69, -81, -117, 105, 74, 76, 106, 91, -26, 42, 26, 68, 3, -10, 116, 8, -16, -5, -118, 50, -10, -91, 74, -41, 32, 112, -46, 94, 52, 36, -41, 107, 34, -16, 16, -58, -107, -54, -110, -61, -9, 77, -30, -44, 100, -47, -18, -26, -63, -118, -52, -21, 23, 114, 109, -8, 0, 80, -54, 71, -100, 120, 49, 109, 5, -17, 6, 33, 73, -48, -117, 98, 82, 90, 24, 87, -99, 84, 97, -25, 39, -37, -101, -73, 86, -31, -7, 99, 54, -14, -120, 19, 107, 93, -80, -35, 31, 24, -101, -65, -27, -92, 12, 102, 72, 126, 120, -109, 88, -102, -84, -60, -103, 31, 101, -33, 73, -65, 67, 75, -48, -96, -94, 3, 120, -9, -100, -53, 54, -120, 48, 59, -82, 75, -114, -55, -30, -21, -47, -37, 9, 105, 60, 46};
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
    msg.setTimeStamp(0.9892530374980311);
    msg.setSource(1339U);
    msg.setSourceEntity(207U);
    msg.setDestination(10855U);
    msg.setDestinationEntity(35U);
    msg.frameid = 123U;
    const char tmp_msg_0[] = {-34, -113, 97, 93, -18, 42, -49, -76, 42, 60, 98, 105, 111, 46, 45, -68, 110, 87, -121, 125, -37, 92, -121, 64, 120, -105, 112, -9, 36, 22, 23, -54, 112, 87, -53, 76, 97, 108, 54, -62, 34, 72, -86, 9, -6, 67, 13, 117, -21, -26, -106, 71, 61, -49, -39, -83, -93, -75, 85, 103, -121, -109, 92, -18, 45, 12, 22, 19, -116, 27, -35, -59, -19, 30, 108, 90, -2, -58, 14, -60, -43, 24, -86, -68, -30, -2, 66, 85, 41, -91, -68, 30, -122, 85, 75, 12, -10, -7, -34};
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
    msg.setTimeStamp(0.4093899515691285);
    msg.setSource(39081U);
    msg.setSourceEntity(102U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(125U);
    msg.frameid = 198U;
    const char tmp_msg_0[] = {52, -53, 14, 88, 115, -72, -4, -73, -119, -7, 55, -40, -53, -125, 97, -21, 43, 106, 41, 19, 26, 118, 6, -25, 81, 29, 4, 4, -83, 94, -48, -108, -118, 1, 22, 69, -64, -51, 82, 75, 117, 107, 106, -49, 15, -77, -84, -74, 60, 15, -77, -18, -121, -113, 70, 68, -87, 61, 76, -30, 56, 118, 43, -125, -14, -16, -60, -35, -78, 8, -10, 18, 67, -46, -94, -48, 105, 8, -56, -109, 87, -84, 48, -36, -82, 30, -128, -8, 114, 9, -98, 64, 106, 37, -114, 103, -82, 83, -62, -46, -79, -78, 29, 38, -10, -107, -49, -24, 102, 124, -31, 43, -106, -45, -120, -32, 63, -81, 115, -75, -66, 15, -89, -77, 112, 62, -120, -19, 17, 54};
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
    msg.setTimeStamp(0.2906871741212901);
    msg.setSource(26387U);
    msg.setSourceEntity(86U);
    msg.setDestination(1048U);
    msg.setDestinationEntity(69U);
    msg.fps = 197U;
    msg.quality = 8U;
    msg.reps = 95U;
    msg.tsize = 41U;

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
    msg.setTimeStamp(0.5148774066262757);
    msg.setSource(5073U);
    msg.setSourceEntity(235U);
    msg.setDestination(65322U);
    msg.setDestinationEntity(188U);
    msg.fps = 2U;
    msg.quality = 245U;
    msg.reps = 143U;
    msg.tsize = 185U;

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
    msg.setTimeStamp(0.12694189021704494);
    msg.setSource(35370U);
    msg.setSourceEntity(168U);
    msg.setDestination(58216U);
    msg.setDestinationEntity(238U);
    msg.fps = 213U;
    msg.quality = 137U;
    msg.reps = 39U;
    msg.tsize = 46U;

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
    msg.setTimeStamp(0.5259555673251912);
    msg.setSource(43848U);
    msg.setSourceEntity(225U);
    msg.setDestination(29879U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.5324768722829918;
    msg.lon = 0.565307004623734;
    msg.depth = 218U;
    msg.speed = 0.2670773480652707;
    msg.psi = 0.9836610479209004;

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
    msg.setTimeStamp(0.3637008999236674);
    msg.setSource(32184U);
    msg.setSourceEntity(114U);
    msg.setDestination(17158U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.42057687960509704;
    msg.lon = 0.10286756289940657;
    msg.depth = 133U;
    msg.speed = 0.7058529156337617;
    msg.psi = 0.8111082874832718;

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
    msg.setTimeStamp(0.9669068071231158);
    msg.setSource(35585U);
    msg.setSourceEntity(78U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.3649701874896524;
    msg.lon = 0.7751651104527849;
    msg.depth = 7U;
    msg.speed = 0.9980404171471264;
    msg.psi = 0.9740641702770001;

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
    msg.setTimeStamp(0.6341446553042994);
    msg.setSource(9022U);
    msg.setSourceEntity(213U);
    msg.setDestination(4537U);
    msg.setDestinationEntity(96U);
    msg.label.assign("TRWIADHIUMKYRPIQGIGSRNCVDCBCRBXZLUMAATKGQETWFTRLUXBKDIJGCSWXPXVDXUHCBBUBENCELHTBOEJLNMIXYAGMNWHBDUJOSOZRFVUKQVAAZPNVCLZHEQBLWMKNSYJGALHLFVZTYIOPKGWSWDRWFYFIMUVOBSJLQZQUVTKJFSMSTERFXJFENNZKCAMWYGHXPQPWZVPYRJJSEOVTQMOLNCSPPHFJYX");
    msg.lat = 0.24824721205605504;
    msg.lon = 0.14365940154794876;
    msg.z = 0.05987515753090711;
    msg.z_units = 241U;
    msg.cog = 0.1154614948281697;
    msg.sog = 0.5319050287825936;

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
    msg.setTimeStamp(0.6275876352150676);
    msg.setSource(30206U);
    msg.setSourceEntity(248U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(154U);
    msg.label.assign("VDFOEDZPBZLESXBSOSKUWODLWZSRKPUTE");
    msg.lat = 0.6966902717100522;
    msg.lon = 0.42330675195013;
    msg.z = 0.8872133169602471;
    msg.z_units = 199U;
    msg.cog = 0.807149336473686;
    msg.sog = 0.29163196283439985;

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
    msg.setTimeStamp(0.7431912499950863);
    msg.setSource(43179U);
    msg.setSourceEntity(84U);
    msg.setDestination(26177U);
    msg.setDestinationEntity(108U);
    msg.label.assign("EVNZHMMPGBCIAEVSRZBKVFUJECDZEPDXOLFEEYEPTBLFPGDEHLHGGHXOXEVHSZXWRRIRIVTNIUKZZGKHHVTDLBIMIHSDCO");
    msg.lat = 0.07920611608816408;
    msg.lon = 0.08880067373363387;
    msg.z = 0.5139224894797589;
    msg.z_units = 138U;
    msg.cog = 0.82498500783529;
    msg.sog = 0.5965087562329208;

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
    msg.setTimeStamp(0.8967864818623678);
    msg.setSource(34965U);
    msg.setSourceEntity(195U);
    msg.setDestination(44876U);
    msg.setDestinationEntity(177U);
    msg.name.assign("CDXWJUCYNLOZCEQX");
    msg.value.assign("UIFISSBHFEZLHANVHQGEFHJPKAEIQPOYMZMHJWJFSLMFYTDABXPMAJNZCKOCGBTTJPUGNEOUDENQEBUNVJOTZWIXXBZCIXTIUMGUERQJJLTWLFAVBCKKKKNNLGWFAUZWIBYRESDPHMLTAOPMBCRSPYY");

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
    msg.setTimeStamp(0.987028472387042);
    msg.setSource(6117U);
    msg.setSourceEntity(183U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(202U);
    msg.name.assign("UYRQYUBUAHDIIUBLHDKPIKAXZJPCVWRWHSMVVNFDGWZRAXUAFNTQFCREEEKDTYARYIOENWSQNREJFCEJDRQORVGVPILFOYMKBGJPXKYHTFTSLRMNMLYQQQMJSEZJZDLAHKEOQMBDHLVOPZUZKFFJJGWABMMAVCGOIXNSLPYTTGYNBLZAJGXVSWXULPCFWZZTOGCFBWNUQOHDDEKIXTMBZXYINBHIBTTOCULMEVXNCC");
    msg.value.assign("OWKZFKYSREVJRNPIFIGOEKLEYHZYOGDTWYZTIXGFRSRXVKKZCFNKJEMMANHBMKUHUGJIQOWZQDHLNZJTRWHPFCQPLWSWVZFRLFBN");

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
    msg.setTimeStamp(0.9350613918065407);
    msg.setSource(32264U);
    msg.setSourceEntity(130U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(151U);
    msg.name.assign("DYMQXKWTORTKLNGMOLBTOCBUFUPAZGCJNBUCJOISNNCGYFXIEPQYFWRUUAGWKVXDQZVKOGMVLZWVDDKNPDVXPJBHSIAQJCRCOSXLJEFOHHKNATLE");
    msg.value.assign("LWJEGUNSNQBPCYZJIJNMGIPXCXLRVXAOTVZFYRGDTWYFKUQZBFFMPCUSHESH");

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
    msg.setTimeStamp(0.9732167890654437);
    msg.setSource(12884U);
    msg.setSourceEntity(221U);
    msg.setDestination(50738U);
    msg.setDestinationEntity(148U);
    msg.name.assign("DPXCXHAERYJKGVGQSLHNCBBUBWYNJXFHZTUILNHVMORALFFNGNTKGTJGDAGQERUPPMXVHIERIQAMTTDOUKNKDXWHJSVWBJEUIPCVYYVYEZPDWXNZMMWESOTUMVCNFPZAOQRGRCISYHKKYVGKPIUQWDCTBFAQSWASSZRVUYMZVYLBJJAEOOYBXSLAUPZIGJWOXEQHFZCDLMMUG");

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
    msg.setTimeStamp(0.431779006266635);
    msg.setSource(36017U);
    msg.setSourceEntity(49U);
    msg.setDestination(13687U);
    msg.setDestinationEntity(9U);
    msg.name.assign("CZJVYXVOAYXBJPQMOGSCZJIOTHSTPKGDATCKUJERSUWEIWSLTQQIQOASLFVINNRHMURRWKY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TWRUWBQAODKSZGASYIXZPPYQVTXSBEONBMAZFPDJNHTUVSUGJUBCNRZKBTVJHUHBNTFMT");
    tmp_msg_0.value.assign("WAMMLMSDOWEFGKYACBVDRAKSMGUFFTTHLONIPHWZDGNURMRTPOJRIYNRSSNZRSGJEQJZJVCLVDHUUTINVRWRLQPXYYPRLOYXEEWFKSCCKCXDEUAQKXOQXGXVPREQPMHIDSHGHXJDJBDFTXPCYINZXLJIGPFTIGFPUZKHQLVMGTELIADZUFBAACNMTHNUSFWCDOKTVQFJYBSNBYUZIBWBAJSOHWXEKTGLOQBHWBZZ");
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
    msg.setTimeStamp(0.6329947779112917);
    msg.setSource(37034U);
    msg.setSourceEntity(140U);
    msg.setDestination(16880U);
    msg.setDestinationEntity(252U);
    msg.name.assign("LVNWYRXZUGAFKXFJOESKSWEVCDPPDBAUGUHTJQNOBTWLMEDVCAMLTBRYDEKPGMCVNRYCZQJGSMHABZZUWKBRPZSCPINRTZLOKBKRDGBYGUQVFXJKOIMILYVTXITZRJBGFKXEFATBFYMDCWSQPNSFGTOAEHJXERHMDZGSEPHWQCNQIEJTFHVQBWWHDUJANKZHEOVOMASOUNHHNGLRYQDU");

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
    msg.setTimeStamp(0.5943223739247852);
    msg.setSource(51766U);
    msg.setSourceEntity(91U);
    msg.setDestination(51915U);
    msg.setDestinationEntity(183U);
    msg.name.assign("JNEDSDNDKNYVUKSXGGCPODEQLIIJORHQPBPHBGRHHMFLKXVHRVDUIWTBARZEQITTJZNYIKFPIBWASQVFWUHLZAOXSTIIXSBU");
    msg.visibility.assign("PMBBFZPPMQQXFCREIJAMKRBSHMBNYDNQVOSHALYTVJDBRZMZTWYIJNRFKUZKCIHHIOAUCLVEEOYGGSISUVROKQXLKIGNSXTDVPDYDULYNAOTPCAYDIHWMJPYSMZCBCQJTWUFFHFPPNEGHYZXFAVRRGQZGWHQZLVFCEVRZMALXOIFBXXHOWRGJGUUPGSBVFZDLTJEYEAOXLXKMWQJWKDPGWTQNTDOLEEANAQKWEJCKBVTSIISOKUTUCBW");
    msg.scope.assign("TQUHTTXKGURRFFEYPCMGNVQLSROZRFTGNXBSRAUBFCVYPEAHWLLEDNENJRICSLPVMCKZAKYVQCRXQCWYIAYASIERISIPNSQOSHBGMYZVAGSFHCTIHTJHWAWIGECJMGMXWZZK");

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
    msg.setTimeStamp(0.8625930721293437);
    msg.setSource(5446U);
    msg.setSourceEntity(184U);
    msg.setDestination(60760U);
    msg.setDestinationEntity(155U);
    msg.name.assign("LGWLHZVNLJRCMFMQDPAGMEALUUXOQVEKPATJTRBYNQKZJBTLDWEBRFPXXOJCSRLRQYV");
    msg.visibility.assign("JTALDUYOCQETRLUUCVPMPJADLFHNYIOSUIIODJYKBQDZXLQMNVZMSKCGRXWZMRBYVAAJPDZXAKABIHGAZDIERIHBCLOTEVRCQUWPEKTDITGQJHSCVHLZFOSZELILRUUZQRNBXRGQPNKQKKSEXYREAWWCQTKXBBWGCYFOVTYZFBULVEPOJWBXIGNUHMCYKDYQFP");
    msg.scope.assign("TEHFFATNMMMRZROSYNZBSJHFJNGPQKHMAFGHGYFGPVXIQDJJUGVAXTOHWVQAYFNCJLHJKXEQWPLKEBOBVSNRTRJPLIXONHHPSDLWBOSMCSJGIXVVDXZDCUTVWBCRXMNEDPZAYCRBKTYSEZWKIDKXBMSYAPCYEWGCLCDYCVZLFNZHWKOFUUUOOBGTEJLUVZQMZTARANLQIEIBILQPUQUJAGILZVPURNKDRATYFKDUKWDQQOHCWXSSIPMRITEEWF");

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
    msg.setTimeStamp(0.19750172296533497);
    msg.setSource(4742U);
    msg.setSourceEntity(223U);
    msg.setDestination(49755U);
    msg.setDestinationEntity(147U);
    msg.name.assign("TLOFTMIPAWCSNDJPUYOORVVLLKGVPKIYEAJSATVAFZTMGNYFNNDCOAQVFZDWPPEWJMDBZOLHQJDTYLHCJOBECFYATUOINQXUGZSXTMXERAYIPJTNTDVHSHYKHYWNAXCSQVSGFZRBOAPNZLDEGQMXCXSWJIPOUVEBVXXRSHBFUJDQHLBEGDMCREQQNZSWBDBCLKKUFKWURJFKCLPBTIWOBIRWZQXZ");
    msg.visibility.assign("KWRGSVYNJIALDCGDJXQIDCVYPHJXFHVDXHELORKTOTWKNQQEFRYXUCNKYZOCAPVTLBIMOBMXNSWBQDVJBNAQMIBCEMORKNESOEFRXRKWUUVVSIGXQSD");
    msg.scope.assign("XUAGINHRFEODTJMAROKJLEYGCYZXQKWKWSEUMKWFVQIZLXAVZLIMCFKVVFEUVZOQUVHUOPFCYXNIGOXLYJCGRFUXTEULOHWPSKIGQZONNFVLBLJMHVPPFNBXTIYEZMXPQEPAWJBTNTOHCZULWBRHYDAQTCNZKDDRBDBXYFKZCDEYNUVSNEHDGIJQAGAHHXJTCCGQAWRRHDDITBLGPBVNUISOPSKYWRDRLGQKSYSTOMREJBFWJTSIMAPMPC");

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
    msg.setTimeStamp(0.6578889112298424);
    msg.setSource(29099U);
    msg.setSourceEntity(0U);
    msg.setDestination(26595U);
    msg.setDestinationEntity(69U);
    msg.name.assign("VTXHBKEHEXNWTRBKWUJRSSYNBOZVAAOQFZQZOTKNEMHFLWGOWQCBQAUYLUATICSOZZCMESPOIVQBMCYLGKFPXWDVPWGULGMEVSHRNDJKXNDHRKJTFFDTXNDNEYAIIOMBMYSEURVDSZGGGZAZNJFRCOUICYPBCGFBTHIHPLYIQMRLRHOUJV");

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
    msg.setTimeStamp(0.968053281587949);
    msg.setSource(30555U);
    msg.setSourceEntity(153U);
    msg.setDestination(52486U);
    msg.setDestinationEntity(251U);
    msg.name.assign("YKMUXGICTZGCZATOVRWXEUWWGOFCSIKEGUNHEJHPURTUDXDIMONHTGIAKFFDAMVWYLPD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PITXTQEVIHOJQTOXMFWBDQDSSGKSBFCXMRZFBQCHHFTDWHXIEBLDWWIYWNZKPLJNANSEMYMHKNVPRUDYMJANTFXVMCGVYLBECQGCOTQVCSHOYUJTIEFWLQUHCAYNRVOENWZRBLJRURWNOPXLGYFPVDIXZBVKSWZDODVUBQZJBGTDKHBSFSKGTLZECHOJJFRULPPXDRYUNPVQCCAUPZALJRHYSMKYMPEAFKRMAEGQAXOOAMGZZGLESIGK");
    tmp_msg_0.value.assign("UKMYBGMMQFVWNMKWBAOEMCQSSCRHXFOWVIPAAEQVNGZUTCEJVUPLHKFIPQZYKSDTJXQWKMGEZAGFAMXKDSVFPYUHTHRNGESNDICEUTMVPHLRLMNENYAFBP");
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
    msg.setTimeStamp(0.2693207352523662);
    msg.setSource(6808U);
    msg.setSourceEntity(149U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(181U);
    msg.name.assign("OIPIKJHONGLZSWFVPCDFMQFIHCPAIEDMNEDUIIGMTYMUYCPZMMGESNCAEDSRRLFWBYQUDMUDADVIAXMNUYBHXLPLRWXJYTEDLRNSQRBNTHOGBUQEXWKVACBZHPBVEQOAZRWFYKIVHNUGWWSGPUWTEXLNJTJYNSXAZKVSXAJYXTKRLCBGOZPOHRQFCXJBKRPVBCZQQSFKDFZVERAYTCUSULWJLQMHGITBOFNSHKOO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AVBEZAPTQDURBMVSHZXFMKITLGYCSQJOKYCOTPMFTEOOJZZVGCMQDUZAEFNWGHIHIHFQKQPHDJNUGELKTQPRMDZWRHZWAHLGUDOLXPBGCXJKRQIGJLJNFCEBBWJLNSOUDTQTEARKREWPDCAFFBTHYWBZBAUSNNLLTDANLUNJWZNPQXXR");
    tmp_msg_0.value.assign("OHVWFKRTYYFNSGVWZSEJFSJRZIYUCMKXRUPMQTZCLKHRIUEPTPABHOANAVFEINUSAMUXWFNTKZDEIKDXUXGSGRVCQIHZLPVXADTJEILQLNGSXDKAONNFLSKMDVMTESZMRQGVNJICCPBHGBYOKFHPIPGTXLBKERDAQDLBVQECOBVMTLFRELYEBOZCWWRJUJDYWXD");
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
    msg.setTimeStamp(0.6156081347499673);
    msg.setSource(62113U);
    msg.setSourceEntity(198U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(48U);
    msg.name.assign("ZZWIHKLGTRUMMMJJIKNYINXPVFECRRCLIGZTUURAWJAZPPRQVVFUPYDIBBLCGLFCIXMAFUNSYKWAHIOZKMJHBFOXRUKUGZHMZOQQVODYPFBGSOQUJQJEDWYLQMGWCDSPOMESEDATXDBJXVXHQNBWAO");

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
    msg.setTimeStamp(0.20319791509652296);
    msg.setSource(35702U);
    msg.setSourceEntity(56U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(91U);
    msg.name.assign("MZPKCXICOZVHPMZMJNZFKTQSJEKTLJFYUGNWCDLLAKGFBZGPWBDPDQTVWQUZYWYITKSFZXWYKSAQNJPUVOAURGGOSPPTVREOLRGISHWOLIUDTPQGJXQSFYXHUQWUJBNODMEHDYLHN");

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
    msg.setTimeStamp(0.8730080490228798);
    msg.setSource(55634U);
    msg.setSourceEntity(242U);
    msg.setDestination(44861U);
    msg.setDestinationEntity(66U);
    msg.name.assign("KMNOPWDJMPUVPZECBPVWAATSXYAHPOHCIWEVDUYOQCQSKCZABSHWVHYIXESALWWDQXV");

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
    msg.setTimeStamp(0.7218855273317066);
    msg.setSource(5288U);
    msg.setSourceEntity(54U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(253U);
    msg.timeout = 2360574384U;

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
    msg.setTimeStamp(0.4683919759552716);
    msg.setSource(5662U);
    msg.setSourceEntity(166U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(224U);
    msg.timeout = 2708568565U;

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
    msg.setTimeStamp(0.48824014194895493);
    msg.setSource(55622U);
    msg.setSourceEntity(145U);
    msg.setDestination(34610U);
    msg.setDestinationEntity(218U);
    msg.timeout = 2025600054U;

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
    msg.setTimeStamp(0.4718458492307702);
    msg.setSource(59123U);
    msg.setSourceEntity(98U);
    msg.setDestination(33324U);
    msg.setDestinationEntity(155U);
    msg.sessid = 4103292684U;

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
    msg.setTimeStamp(0.7084769932807861);
    msg.setSource(39434U);
    msg.setSourceEntity(183U);
    msg.setDestination(771U);
    msg.setDestinationEntity(160U);
    msg.sessid = 3336352179U;

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
    msg.setTimeStamp(0.25100805792369707);
    msg.setSource(51033U);
    msg.setSourceEntity(251U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(14U);
    msg.sessid = 1001855973U;

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
    msg.setTimeStamp(0.6808954111769101);
    msg.setSource(50433U);
    msg.setSourceEntity(112U);
    msg.setDestination(28074U);
    msg.setDestinationEntity(96U);
    msg.sessid = 1797902576U;
    msg.messages.assign("EEGTKOOMYOZUJBBVKPPFYZPATPQAXOFQWLXTNOIGYPXUUQJIEPYEDMIGMWEQWIHNVCMOKRYHHWGNKMLBRGRVBUHLSD");

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
    msg.setTimeStamp(0.7638873310966119);
    msg.setSource(59864U);
    msg.setSourceEntity(212U);
    msg.setDestination(10783U);
    msg.setDestinationEntity(44U);
    msg.sessid = 2950408813U;
    msg.messages.assign("UDNULHRMOWALBSYPQTMHWIRRIVMPVKOBYDOEADRWACTQNMDTHRFAFXZLOIUIKFGOCUGVZPDZAPBQTNWYKSDRLCUXHEXRLGBSZDYQBPHQIFQQZIOSICLFFAKJJZWPSETNHJBSXKKGLEKNNAUWPHYIPRWTJEX");

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
    msg.setTimeStamp(0.7867475075655147);
    msg.setSource(9428U);
    msg.setSourceEntity(252U);
    msg.setDestination(59821U);
    msg.setDestinationEntity(116U);
    msg.sessid = 505982440U;
    msg.messages.assign("FRCWAADZRMKDGQLPFABHOFYPZTAGPRUBXNPKKWHFDETGMHYPRVUKROMDKISIMYXPLVUPBEKMYACBXFFPIHWAMSCZOSUGOKHJJOGRICDBIJTUNJXZQFIGCBNRUGOYNKUMVFBZTODOYLLQUEERADTIWCRWJQGVKLEVBNYQTESJQVYPSMELATSWMCLIVDKITBVSZXHHLWOASNUWXXDRLJVVLNJN");

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
    msg.setTimeStamp(0.08476639083296156);
    msg.setSource(18333U);
    msg.setSourceEntity(140U);
    msg.setDestination(9289U);
    msg.setDestinationEntity(245U);
    msg.sessid = 1870949900U;

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
    msg.setTimeStamp(0.5373853716627726);
    msg.setSource(59081U);
    msg.setSourceEntity(44U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(125U);
    msg.sessid = 2853355130U;

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
    msg.setTimeStamp(0.5099148779791741);
    msg.setSource(52144U);
    msg.setSourceEntity(242U);
    msg.setDestination(45602U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1213666748U;

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
    msg.setTimeStamp(0.622606984496013);
    msg.setSource(34831U);
    msg.setSourceEntity(223U);
    msg.setDestination(53713U);
    msg.setDestinationEntity(14U);
    msg.sessid = 259991563U;
    msg.status = 203U;

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
    msg.setTimeStamp(0.8849177761279878);
    msg.setSource(56436U);
    msg.setSourceEntity(228U);
    msg.setDestination(93U);
    msg.setDestinationEntity(115U);
    msg.sessid = 130168339U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.04358797946592363);
    msg.setSource(65021U);
    msg.setSourceEntity(12U);
    msg.setDestination(40125U);
    msg.setDestinationEntity(90U);
    msg.sessid = 4021897155U;
    msg.status = 172U;

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
    msg.setTimeStamp(0.8564919630862116);
    msg.setSource(20226U);
    msg.setSourceEntity(221U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(61U);
    msg.name.assign("NGVSFZRSFELWBKEYSSTMRYKEQVVBCCWXDMNLEWTIJTQFNMAMWFTBEYBPZMPIPZIXMSTASZDGHXQXJGTKQKYAFLIBISJCNJNRZAKERWDUYJJQZMHOSIGDXVIBLAOOWYMARSQPLKAKQUUHCHOYEACLEQXHMP");

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
    msg.setTimeStamp(0.42813198766023164);
    msg.setSource(33195U);
    msg.setSourceEntity(46U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(102U);
    msg.name.assign("UTYJIXQWTGUOLMSXJZJYYZOQFGCUVOUVPDHEBXEKTATWPLRIOFCASHHIFXGVVUDEWMILFHMGDUQTKFVNJXKCRXU");

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
    msg.setTimeStamp(0.989821432000267);
    msg.setSource(8538U);
    msg.setSourceEntity(52U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(132U);
    msg.name.assign("DOJWKTUFXEBGSDZUZFKYTYLEASDIDV");

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
    msg.setTimeStamp(0.5838442083444751);
    msg.setSource(61717U);
    msg.setSourceEntity(30U);
    msg.setDestination(13596U);
    msg.setDestinationEntity(240U);
    msg.name.assign("HIFYQEWIRZUUGTSCFTKPDNASGXKWXCIQHFMBBTGLJUPDASDKLMECNRYCBOGLPQJUSTEWLGJHCXDCXTKLXNYPSBSUNWWMKDIEDPRNQTNGTAOEFYDYZORVARKDSIUCFQEWXBNVUOZNPTPMFYVQERVHZUAKTYUEZGJHBQGHPMWIJVAVPVFEMMKOKTQIXZARBOHAMHYU");

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
    msg.setTimeStamp(0.2807603645246183);
    msg.setSource(47283U);
    msg.setSourceEntity(9U);
    msg.setDestination(46199U);
    msg.setDestinationEntity(110U);
    msg.name.assign("BYFYHKFBKOUCEZSMPBPKPTMWPSUOLIVURZBYEECJWMVGZDKZVTIIXJGRBSEFMGVHVJCNCVHEYPLQCDFPDAHQQ");

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
    msg.setTimeStamp(0.331396992854464);
    msg.setSource(24768U);
    msg.setSourceEntity(177U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(135U);
    msg.name.assign("PGKJVARCZBBLKFPDFXJMSPMVIVJVQXMUMLFNZHKNYGERGCPUKMKXIDWWRZHLMJUX");

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
    msg.setTimeStamp(0.3940055719787934);
    msg.setSource(59045U);
    msg.setSourceEntity(39U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(169U);
    msg.type = 100U;
    msg.error.assign("VAATJBDSQKXJSZYWYOHRQNXVBSQKPHWLXVPYPDZARAONQWMPFGMZOCXFHUTHYMIBCJLXEPFKSRPLJLMUGVHEIPSSVGCSIENHGUMZSWTLYIIETDGJBTQDMLDNDESQPQBRZVFVEEWWI");

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
    msg.setTimeStamp(0.44352903194285964);
    msg.setSource(63415U);
    msg.setSourceEntity(42U);
    msg.setDestination(40940U);
    msg.setDestinationEntity(157U);
    msg.type = 146U;
    msg.error.assign("AMTRLXYGZNUCSTWDMZBTNJPCLKXTYJV");

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
    msg.setTimeStamp(0.934673241983924);
    msg.setSource(28914U);
    msg.setSourceEntity(129U);
    msg.setDestination(46368U);
    msg.setDestinationEntity(25U);
    msg.type = 8U;
    msg.error.assign("DGYGZUWGIVUVJHMKFVQUUJWVADLTPZMZCGOCAEJUPNHYTFEZICWFULKYIFVXHGNLBEBBKFTDONQMPZIXVBZGDJRIMJJATGIERQACKQQPGOABMXBEMUHLIMHCTMTKLOSSKTYSESOWXPFOIWHRTLHPNVJYYORTCAECBDDZXVMABSOIYFWYWLNCRYDNLCZGRKOWFNSPQVNSTXOSAXEHJRLIKRSUUEFPQNXPPQCBJURZKXFQRDWZAJBHNYLW");

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
    msg.setTimeStamp(0.17160364974185538);
    msg.setSource(63572U);
    msg.setSourceEntity(186U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(201U);
    msg.seq = 10803U;
    msg.sys_dst.assign("AJEUKDEILIQKVXQLXHYUWXLYWHPWMCBNRIOVIGSEVDVZFDHBDPDEJKPNVSXZDMMYAIOCMRBBKPNSUESPGRPTULMFPGGNFNSXUHVHBGRSLGUGEHKBKOWZCFTZMJCHTYDOYAQFYKYDAYRZIAVKJBCUXHITZUWHNSQMAWWJ");
    msg.flags = 68U;
    const char tmp_msg_0[] = {-15, 9, -97, 20, 8, 15, 113, -69, -38, -19, 99, 10, 56, -28, 99, 125, -98, -123, -24, -86, 13, -1, 89, 125, 3, 38, 72, -1, 75, -66, 103, -37, 51, -78, -67, -94, 34, -68, -116, 14, 41, 60, 121, -105, -17, -101, 102, 56, -121, 10, 111, -95, -39, 107, -28, 7, -72, 15, 109, 123, 115, 91, 15, -46, 101, -48, -77, -108, -126, 125, -40, 94, 63, 61, 100, 77, -18, 45, 57, 61, 64, -28, -76, 44, 117, 77, -65, -22, -22, -108, -34, 121, 37, -44, -8, 48, -47, -69, -83, -44, -31, 86, -35, -54, 13, 61, -14, 52, -24, -65, 91, -88, 15, -14, 112, 81, -116, 8, 49, 83, -26, 34, -91, 12, 123, 59, -120, 101, -72, 112};
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
    msg.setTimeStamp(0.9688855987928231);
    msg.setSource(25813U);
    msg.setSourceEntity(237U);
    msg.setDestination(34244U);
    msg.setDestinationEntity(208U);
    msg.seq = 57966U;
    msg.sys_dst.assign("CDPLSHHNZQJGHVWRPTVXVUYIVSOCYSOFWWXHDUSOPRQVZWIZGUABGUABOQDNQWEVALNPKLWLXGIFTWDFQMEJHXSJFEUFAINPYOSXXRZPCMEJWIGTGLIKKYTMVXAMRKMBTTOZRCZRAEPGMEGBDTTNSQBZDENMBXHUIJCDSAHOTKMPRLYFTLYAVVRDXSZNIZUFUR");
    msg.flags = 41U;
    const char tmp_msg_0[] = {7, -79, 2, 45, -67, -74, 86, -9, 89, 24, 34, 84, 24, -48, -81, -31, -66};
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
    msg.setTimeStamp(0.15565190907738347);
    msg.setSource(34828U);
    msg.setSourceEntity(188U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(67U);
    msg.seq = 21473U;
    msg.sys_dst.assign("IKZTUKEAOZENLMUCMUUOHOKVCNABBAFSTQVFKWQEXURSBHJDVCIYTWIVZNSPDJSUAGHVMSYBZLLPELVVRCHFHQUJRZKQ");
    msg.flags = 172U;
    const char tmp_msg_0[] = {13, -65, -100, 2, -1, 61, -93, -98, -6, -112, 10, -64, -81, -127, -10, 116, -61, -96, 91, 97, -115, -42, 63, -66, -126, -60, -37, 69, -9, 26, -4, -105, 7, -94, 83, -34, 6, -66, 23, -86, -43, 28, -71, -39, 73, 120, -44, -124, 108, 104, -70, -92, -74, -69, -39, -114, 63, 25, -93, 36, -2, 116, 109, -33, 70, -75, 9, 106, -65, 71, 55, 2, -68, 111, 125, -20, 0, 3, -26, 6, -66, 124, 15, -128, -114, 58, -91, 8, -40, 57, 11, 11, -31, 58, 81, -75, -77, 124, 122, -83, 90, -128, 11, -120, 71, -116, -37, -5, -9, 68, -16, 40, 124, -111, -15, 59, 23, 49, 42, -24, -68, -72, -58, -118, -40, -93, 49, -31, -88, -7, -120, 29, -57, 54, -44, -78, 62, 62, 112, -4, 117, -67, 60, -101, 102, -106, 109, -55, 77, 80, -66, -89, 90, -2, -40, -37, 21, 86, 21, -60, 70, 10, 48, 5, -26, 115, 45, 17, 64, -57, -57, 90, -64, -90, 47, -122, -27, -53, 56, 29, 27};
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
    msg.setTimeStamp(0.1619948013673268);
    msg.setSource(21918U);
    msg.setSourceEntity(178U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(190U);
    msg.sys_src.assign("AUWYYJKYCPZCEORIEMQCHMZKTIUDVCIGIVOAMNFPRTHMEXWXNHNDVPABWJKBYBQNJTUYIFUQZDMLSRGBVZCGKSUQUPWVLQOVGLPBKICLTORZQVPJYMDYABETSDWRGFHSXLXKQKNAODFXSBVOMFVICCRAKSEPYADZTAHLHQDWMOOPBQWRJL");
    msg.sys_dst.assign("TRMZCJSLVANUWKDJQTQKQLICZRSPJJPEEAHGFPFRJWLHMBPSFZOCKNIBNUFZBSSFRJUEDOTNUTLXDCOUYZMSYSXNAGBBENUWHFDHIXDDOXTVSZQDKDCVRQWLGJPXMUAYAKHVTYKWPNGGBHTKCYLVRGPVKXCWHMNMXPLZHB");
    msg.flags = 30U;
    const char tmp_msg_0[] = {-24, 32, -60, -55, 94, 56, 92, 15, 41, 63, -91, 90, 25, -24, 73, -125, 123, 68, 122, 82, -16, -126, 37, -66, 74, 119, 72, 30, 56, -107, -29, -10, 10, 93, 44, -74, -94, 8, -45, -32, 31, -91, 124, -49, 126, -11, 21, 83, 41, -96, -111, 3, 46, 126, -23, 12, 112, 51, 15, -108, 70, -16, -42, 2, -124, 101, 108, -4, -77, 50, 8, -29, 44, 121, 95, -29, -3, -62, -19, -126, 22, 91, 59, 46, 39, 82, 118, 93, -13, -56, -58, 46, 17, 5, 85, -24, 65, 7, 70, -6, -35, 89, -43, 53, -38, -3, 123, 50, -3, 33, -36, -11, -63, -89, -15, 89, 126, -10, -107, -92, -111, -128, -71, -121, 95, 110, 23, -35, -68, 2, -115, -91, -59, 119, 96, -92, 25, -86, 77, 12, 61, 29, 125, -53, -68, 103, 2, 104, -97, -87, 36, 55, -73, 46, -25, 12, 8, 118, -44, -101, 69, -5, 0, 57, -91, 44, 49, 67, 104, 124, 65, -53, -10, 92, 40, 98, -48, -6, 2, 47, 42, 126, -73, -77, -102, -57, 92, -8, 96, 49, 83, -52, 59, -123, 37, -2, 23, 25, 32, -28, 110, -20, -33, 80, 3, -18, -92, -14, -3, -85, 71, 2, -93, 122, -16, -45, 54, 104, -128, 60, 4, -72, -87, -88, 51, 73, 86, -17, -64, 72, 87, -46, 115, 78, -9, -76, -39};
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
    msg.setTimeStamp(0.5874572505262045);
    msg.setSource(58948U);
    msg.setSourceEntity(6U);
    msg.setDestination(11202U);
    msg.setDestinationEntity(235U);
    msg.sys_src.assign("UGUCXMEAHRINHRXWKWJFNVKSWBMYCAARVFOQKUNPLZTXAUSTKKWOVKDHVJSMKSAREPLCJCLZTYNVHBEHEMYMQDIPTFSRLXBBSQPXRIMYMQGGBZFGIYLPTSPFHDWHYJFIADBAOIBLX");
    msg.sys_dst.assign("ASMXTZYMOOSCEVHBJGASOSMPGNZHUQLWMPZVJILWDAXWLIHAYJYRKXUBQJRXPDMRMEIHCBJKTZPRDSTDUEWQNDHCLWFKFVMJZVHSSDNCJTAVUTUVQQNONVKYYBGAMQAEVFOIOEMFPNKHRATEMRYCBJGDXLRY");
    msg.flags = 30U;
    const char tmp_msg_0[] = {-128, -30, 32, -71, -82, -83, -21, -50, 56, -20, -74, -113, -12, 34, -94, 97, 89, -63, 114, 75, 9, -26, 95, 101, -58, 75, 102, 2, -77, 96, -72, 97, -84, 123, -98, -1, -46, 30, -101, 5, -81, -56, 116, -12, 67};
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
    msg.setTimeStamp(0.6140344115527573);
    msg.setSource(47767U);
    msg.setSourceEntity(69U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(21U);
    msg.sys_src.assign("GAGZDLPKCDZWTDJMQJUVZQPEQHDQUPUDJQWWYEKATPBJRTPSRZJOMQEIVYWQYNXVDFIOVNCFVNEMDCILZCPVKGHFBGAANLLRDZXHYTJVBRNRZYISOKCAISBXRFNPWBUXLGFAJFMSUGLVLHSYBGRTMCCQKYSILGRKHAGWKHAHMALOILNWHBNNRUDSDECOTSBZMPYJFKVZWUKORUETFNMETTHHXBOCB");
    msg.sys_dst.assign("KLQKXKSZCNNPDCAYGELAITVJVWTXUCMGRGHOIIFOYZDMNNGIIBEMXARCHOFMYYAYGJTZSCUPBXQUJJFXUOXYBZUTBEPKZHRCMRBDUVPJMJHSLKZGYDGQTTUHVDLZWHKTPGDNWQAWMLYSOMDKARV");
    msg.flags = 168U;
    const char tmp_msg_0[] = {54, -9, 99, 100, -115, 30, -80, 90, 75, 31, 55, -110, -122, -33, -10, -14, 102, -4, -47, -29, 54, -86, 32, -60, -76, -10, 63, -115, 5, -72, -39, -75, 113, -128, -45, 31, 104, 95, -20, 113, 8, 65, -84, 38, -41, 71, 107, 123, -76, -30, -4, 21, -2, 19, 40, -77, 97, -94, 6, 13, 45, 103, -5, -75, -46, -127, -49, -63, 88, -42, 102, -72, -38, 30, -89, 105, -113, -105, 16};
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
    msg.setTimeStamp(0.4517810170838549);
    msg.setSource(12300U);
    msg.setSourceEntity(68U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(200U);
    msg.seq = 47437U;
    msg.value = 130U;
    msg.error.assign("RMJFWHVNWBUSZYEITHVFOAKZZUXTKRNYIQOEUGOQFEYBLEYYXIWGIMHSFJGHKSJJVYRPX");

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
    msg.setTimeStamp(0.030432838137965934);
    msg.setSource(13037U);
    msg.setSourceEntity(168U);
    msg.setDestination(693U);
    msg.setDestinationEntity(97U);
    msg.seq = 54111U;
    msg.value = 97U;
    msg.error.assign("THSEDBARMFCJ");

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
    msg.setTimeStamp(0.07973298944994622);
    msg.setSource(21913U);
    msg.setSourceEntity(194U);
    msg.setDestination(13826U);
    msg.setDestinationEntity(144U);
    msg.seq = 42436U;
    msg.value = 30U;
    msg.error.assign("OEVSANNWKJXUPOSPCSMDFCJWCNJHYQRUMPBSTOQURLZYIHKOJDAIAZKEJVNUSWEXJTRVMVVDAFFFGWMCFOSTYVAHNPBLCEEUQXMYEBSYMMZAUSBOSSZCWKLHRBHTKXTGDWHYXLZKGLHXDXLO");

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
    msg.setTimeStamp(0.030929384726335996);
    msg.setSource(30536U);
    msg.setSourceEntity(68U);
    msg.setDestination(22698U);
    msg.setDestinationEntity(39U);
    msg.seq = 10354U;
    msg.sys.assign("YWEGNEXYXJRKIGPSFSLKCEJCIRDPEOXMJHQYMVTPFSIHBCLGNKWLAIFNWHBTTHGXRBBQMVQTNUBPIXOYCKYHOSUZTDQXRKJMKAWLSQGFWVDWIIWECACRAIXLCYRDUUGZSGTEWOJYVGRYUQZVVUTRDVEDHNFQ");
    msg.value = 0.7732361497505271;

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
    msg.setTimeStamp(0.10675629826939093);
    msg.setSource(7644U);
    msg.setSourceEntity(121U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(82U);
    msg.seq = 41321U;
    msg.sys.assign("SMIRPSTNPTOCOMHZJJVVDFQIIHHBNDCRPPYLUWHKEXGWZJTFECXUAJHCUL");
    msg.value = 0.3881727506830829;

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
    msg.setTimeStamp(0.46450481435380164);
    msg.setSource(48188U);
    msg.setSourceEntity(94U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(203U);
    msg.seq = 42076U;
    msg.sys.assign("UXYYJACAFHHYQKBJOJAUKQRFIWCASVUVYVAFIJJPBJRMPEYLHRMKNLAIGTSOZTBQYHRCMZEPYIPONXZGAVGHSHVRMQXMZURDUGWUIVLBSGKMQAXSOIFIQCSFWTXMTFOOONEEECHRDZPEEXVJHDERBICFSKBZLUUQNQNEJKVGVTOBWLXYXAFCTGZDJZNPSKZDCPLRMTBDYUWPBKCYOWWPZIFMDGE");
    msg.value = 0.15306724159777563;

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
    msg.setTimeStamp(0.9668058741899461);
    msg.setSource(36070U);
    msg.setSourceEntity(45U);
    msg.setDestination(15370U);
    msg.setDestinationEntity(48U);
    msg.seq = 6483U;
    msg.sys_dst.assign("JIPUQFSSSRUFTMFQOLIREWOZXEHTUHNZPPBFKYVQSHEDAFOXZBCELUGLVTXWDJGUPLMDNSWPSFIHJIYZNQZBCEZUNPSBDNNXTRVDQWJNHGNTAKOGCYXZTTXJCMFEOYLBHCRDKXSQPBKYKMFTWLBDTRDIPVQIVU");
    msg.timeout = 0.9047504824483639;

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
    msg.setTimeStamp(0.6675672402950129);
    msg.setSource(36758U);
    msg.setSourceEntity(24U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(158U);
    msg.seq = 11424U;
    msg.sys_dst.assign("GGYYAQFUCXEIKBIUMFHHTWOG");
    msg.timeout = 0.10303899152121632;

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
    msg.setTimeStamp(0.40535022021688993);
    msg.setSource(40653U);
    msg.setSourceEntity(144U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(37U);
    msg.seq = 2533U;
    msg.sys_dst.assign("FMTMHBLHVDSEEDJFCXEQMFRUZGVJGPNAQZDXESJLYIFIBLIUVOFSCYQJOXVKZWTNVPNBZNNRYYBZKZPGLWHAVGQVBQGVXNAYOBMGVRQRDJCJTAXRMCLGHXDODEAKWNTPETNAVPOFAUQGUCHUCDSTATKMHWWSNWMUWYHBSRDULTSEZJKYCPUXIOZFHRCSDHQCPIAIOKMUWWUYJFGHPORIGITKZML");
    msg.timeout = 0.20533031396214252;

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
    msg.setTimeStamp(0.8193604110426653);
    msg.setSource(63795U);
    msg.setSourceEntity(227U);
    msg.setDestination(11632U);
    msg.setDestinationEntity(180U);
    msg.action = 102U;
    msg.longain = 0.19287388831726582;
    msg.latgain = 0.36782260629018226;
    msg.bondthick = 3407335260U;
    msg.leadgain = 0.7876379933271077;
    msg.deconflgain = 0.3784095330958779;

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
    msg.setTimeStamp(0.8533625140500153);
    msg.setSource(36023U);
    msg.setSourceEntity(108U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(171U);
    msg.action = 67U;
    msg.longain = 0.962018944282878;
    msg.latgain = 0.6504955839974184;
    msg.bondthick = 1121013581U;
    msg.leadgain = 0.4697100006022552;
    msg.deconflgain = 0.4927682772005646;

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
    msg.setTimeStamp(0.7298356706511455);
    msg.setSource(30686U);
    msg.setSourceEntity(48U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(22U);
    msg.action = 11U;
    msg.longain = 0.000529924779776425;
    msg.latgain = 0.8303694942150047;
    msg.bondthick = 521777362U;
    msg.leadgain = 0.37046189487479053;
    msg.deconflgain = 0.23908756911932916;

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
    msg.setTimeStamp(0.9012221432121911);
    msg.setSource(9267U);
    msg.setSourceEntity(190U);
    msg.setDestination(62868U);
    msg.setDestinationEntity(142U);
    msg.err_mean = 0.693816434208799;
    msg.dist_min_abs = 0.7050325452019759;
    msg.dist_min_mean = 0.6631517876268102;

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
    msg.setTimeStamp(0.23918330622776884);
    msg.setSource(57712U);
    msg.setSourceEntity(0U);
    msg.setDestination(60298U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.01343019727230832;
    msg.dist_min_abs = 0.02882748315922279;
    msg.dist_min_mean = 0.42635434444476117;

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
    msg.setTimeStamp(0.3840640651392707);
    msg.setSource(65231U);
    msg.setSourceEntity(24U);
    msg.setDestination(60664U);
    msg.setDestinationEntity(6U);
    msg.err_mean = 0.5266292621780432;
    msg.dist_min_abs = 0.5791148814109577;
    msg.dist_min_mean = 0.3543489900752472;

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
    msg.setTimeStamp(0.49911595970790634);
    msg.setSource(57548U);
    msg.setSourceEntity(132U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(12U);
    msg.action = 127U;
    msg.lon_gain = 0.48329391083810547;
    msg.lat_gain = 0.8868427213518807;
    msg.bond_thick = 0.1496868792133459;
    msg.lead_gain = 0.6564343229771297;
    msg.deconfl_gain = 0.48086868034015573;
    msg.accel_switch_gain = 0.29566877585987916;
    msg.safe_dist = 0.881527529745442;
    msg.deconflict_offset = 0.030506972443448688;
    msg.accel_safe_margin = 0.9154537259476629;
    msg.accel_lim_x = 0.3929254095766418;

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
    msg.setTimeStamp(0.020403939385813974);
    msg.setSource(44403U);
    msg.setSourceEntity(79U);
    msg.setDestination(26857U);
    msg.setDestinationEntity(102U);
    msg.action = 40U;
    msg.lon_gain = 0.03189157235049056;
    msg.lat_gain = 0.9635433276937281;
    msg.bond_thick = 0.24407699007549444;
    msg.lead_gain = 0.7357149441626046;
    msg.deconfl_gain = 0.1826937134483929;
    msg.accel_switch_gain = 0.9745802603619369;
    msg.safe_dist = 0.20733993112686866;
    msg.deconflict_offset = 0.19963349578902378;
    msg.accel_safe_margin = 0.2810815117874579;
    msg.accel_lim_x = 0.7357912276937145;

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
    msg.setTimeStamp(0.39757454289079597);
    msg.setSource(47811U);
    msg.setSourceEntity(1U);
    msg.setDestination(23389U);
    msg.setDestinationEntity(67U);
    msg.action = 32U;
    msg.lon_gain = 0.8324117866654734;
    msg.lat_gain = 0.7428607058869094;
    msg.bond_thick = 0.9214224722070847;
    msg.lead_gain = 0.503045498736711;
    msg.deconfl_gain = 0.13208149523739698;
    msg.accel_switch_gain = 0.8222001702986488;
    msg.safe_dist = 0.7116693633017197;
    msg.deconflict_offset = 0.8356540412345412;
    msg.accel_safe_margin = 0.042651361086946116;
    msg.accel_lim_x = 0.6442573875057988;

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
    msg.setTimeStamp(0.2601207702032684);
    msg.setSource(24951U);
    msg.setSourceEntity(210U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(197U);
    msg.type = 123U;
    msg.op = 116U;
    msg.err_mean = 0.8126758077413958;
    msg.dist_min_abs = 0.5165257215633556;
    msg.dist_min_mean = 0.4273555546726715;
    msg.roll_rate_mean = 0.45577430576400024;
    msg.time = 0.3735914161360864;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.16520491293342687;
    tmp_msg_0.lat_gain = 0.07415290058835378;
    tmp_msg_0.bond_thick = 0.2365965522685164;
    tmp_msg_0.lead_gain = 0.17075946880113502;
    tmp_msg_0.deconfl_gain = 0.24871167752461953;
    tmp_msg_0.accel_switch_gain = 0.3711085957786736;
    tmp_msg_0.safe_dist = 0.8229275473417603;
    tmp_msg_0.deconflict_offset = 0.32110655281865297;
    tmp_msg_0.accel_safe_margin = 0.6869340889937386;
    tmp_msg_0.accel_lim_x = 0.32593851581477284;
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
    msg.setTimeStamp(0.4184865884255504);
    msg.setSource(1770U);
    msg.setSourceEntity(204U);
    msg.setDestination(26863U);
    msg.setDestinationEntity(77U);
    msg.type = 192U;
    msg.op = 35U;
    msg.err_mean = 0.6124789473557858;
    msg.dist_min_abs = 0.6542715600498636;
    msg.dist_min_mean = 0.18342691858092097;
    msg.roll_rate_mean = 0.7553026071418106;
    msg.time = 0.30991896042016187;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.lon_gain = 0.41000967189622395;
    tmp_msg_0.lat_gain = 0.7747048759368448;
    tmp_msg_0.bond_thick = 0.6325432036321231;
    tmp_msg_0.lead_gain = 0.10071339107783128;
    tmp_msg_0.deconfl_gain = 0.04118892563914067;
    tmp_msg_0.accel_switch_gain = 0.7821070704127244;
    tmp_msg_0.safe_dist = 0.460513523939065;
    tmp_msg_0.deconflict_offset = 0.42495305260039684;
    tmp_msg_0.accel_safe_margin = 0.6469511147965505;
    tmp_msg_0.accel_lim_x = 0.8161325939649651;
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
    msg.setTimeStamp(0.29705732264492113);
    msg.setSource(4462U);
    msg.setSourceEntity(157U);
    msg.setDestination(21261U);
    msg.setDestinationEntity(42U);
    msg.type = 217U;
    msg.op = 34U;
    msg.err_mean = 0.2630111934099374;
    msg.dist_min_abs = 0.8403661752194934;
    msg.dist_min_mean = 0.8609439180384914;
    msg.roll_rate_mean = 0.6852467383893452;
    msg.time = 0.053438485628484855;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 230U;
    tmp_msg_0.lon_gain = 0.23152015546598204;
    tmp_msg_0.lat_gain = 0.6695712741322718;
    tmp_msg_0.bond_thick = 0.31257325464704877;
    tmp_msg_0.lead_gain = 0.6877739541638856;
    tmp_msg_0.deconfl_gain = 0.8771961972895523;
    tmp_msg_0.accel_switch_gain = 0.22845168624486256;
    tmp_msg_0.safe_dist = 0.5993460224943152;
    tmp_msg_0.deconflict_offset = 0.8449820634647639;
    tmp_msg_0.accel_safe_margin = 0.8883322412588925;
    tmp_msg_0.accel_lim_x = 0.463472521306439;
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
    msg.setTimeStamp(0.759554549143714);
    msg.setSource(39845U);
    msg.setSourceEntity(139U);
    msg.setDestination(48652U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.7662159520276937;
    msg.lon = 0.23176083805373937;
    msg.eta = 1388529141U;
    msg.duration = 9495U;

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
    msg.setTimeStamp(0.25613152405341977);
    msg.setSource(8612U);
    msg.setSourceEntity(122U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.9410228666881778;
    msg.lon = 0.37845604223273854;
    msg.eta = 127661547U;
    msg.duration = 21494U;

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
    msg.setTimeStamp(0.30150674160417756);
    msg.setSource(3973U);
    msg.setSourceEntity(42U);
    msg.setDestination(2353U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.37917796032449025;
    msg.lon = 0.7724260594881771;
    msg.eta = 4184859256U;
    msg.duration = 46567U;

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
    msg.setTimeStamp(0.9817330379298403);
    msg.setSource(64789U);
    msg.setSourceEntity(77U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(114U);
    msg.plan_id = 50160U;

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
    msg.setTimeStamp(0.5901129820258125);
    msg.setSource(40238U);
    msg.setSourceEntity(130U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(105U);
    msg.plan_id = 15940U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.20067594729872895;
    tmp_msg_0.lon = 0.7308753046200217;
    tmp_msg_0.eta = 4006948902U;
    tmp_msg_0.duration = 54516U;
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
    msg.setTimeStamp(0.42881014357434244);
    msg.setSource(11038U);
    msg.setSourceEntity(69U);
    msg.setDestination(25266U);
    msg.setDestinationEntity(91U);
    msg.plan_id = 17575U;

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
    msg.setTimeStamp(0.9910965051373799);
    msg.setSource(34593U);
    msg.setSourceEntity(52U);
    msg.setDestination(41142U);
    msg.setDestinationEntity(137U);
    msg.type = 23U;
    msg.command = 200U;
    msg.settings.assign("VFMIYTBQKDNIGZOTC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21337U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MYQMBZZZZYASYXBAWJVFCPKKAEFCNZTAUTOHGJERDPAGPNERUGOXLQLZBD");

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
    msg.setTimeStamp(0.5323626818196856);
    msg.setSource(34259U);
    msg.setSourceEntity(29U);
    msg.setDestination(45754U);
    msg.setDestinationEntity(240U);
    msg.type = 150U;
    msg.command = 97U;
    msg.settings.assign("TAVDTSURFCGTMHMYILSUFPOXPQYUDYDBEKEKLZJNGAANQPNKJOISLFEB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 38632U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XKVPEAEOHKOOWTGJRHFPEKWALAUXOFXSOSJNGWYYVGDRBDMXXPQOJLZDVUOACYQAIJTZLMJUIYBRISHQTVURLLYATDQPUTXWIDMVZBGJVHOMTIERQNHINMMSKJWFPGGSSGVBCRQNFQFGRAWYCYNWIMCVUKAFZFZTSFSEGXWLOJKKACQNJYDJNUDBUVDKCRBUVBHE");

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
    msg.setTimeStamp(0.7712108877927829);
    msg.setSource(50934U);
    msg.setSourceEntity(76U);
    msg.setDestination(3680U);
    msg.setDestinationEntity(141U);
    msg.type = 214U;
    msg.command = 92U;
    msg.settings.assign("OPTGTNQRWNQKLDCSHWBORKDRVFZJZCPAEMDZVTSCDEGQRJOIFCHMUGPAHYMZECHSUGBUJSEGQSHNJPRQQUKXDTMUAIWVOLRITLIYVEYSBVYLFBHAXWGFNKRUTJLGEMXZIEFBPPNMNVJOWLQDQWSDAZEXLLFKAGKKMVDPC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12354U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ERQQGTLTYQFAVDKIRMAGJTGGZIHVGGOQMRUYYCRYLUXFPGTIPIJICNQHANUCPZFIDROFSTBJLIWXWURVDNAYLBEFSUSBNKLOVOWMKKDUPIVTSYJNSBHCGANDWBHOUXRNUKHBPKVMHMQHWDWWFBYEEW");

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
    msg.setTimeStamp(0.26355957233217353);
    msg.setSource(8756U);
    msg.setSourceEntity(56U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(189U);
    msg.state = 41U;
    msg.plan_id = 25031U;
    msg.wpt_id = 135U;
    msg.settings_chk = 42797U;

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
    msg.setTimeStamp(0.5876792873191584);
    msg.setSource(53485U);
    msg.setSourceEntity(155U);
    msg.setDestination(8137U);
    msg.setDestinationEntity(74U);
    msg.state = 85U;
    msg.plan_id = 3469U;
    msg.wpt_id = 33U;
    msg.settings_chk = 62998U;

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
    msg.setTimeStamp(0.10478782004023346);
    msg.setSource(51800U);
    msg.setSourceEntity(152U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(31U);
    msg.state = 62U;
    msg.plan_id = 18018U;
    msg.wpt_id = 127U;
    msg.settings_chk = 49479U;

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
    msg.setTimeStamp(0.7311455713742264);
    msg.setSource(6640U);
    msg.setSourceEntity(139U);
    msg.setDestination(14276U);
    msg.setDestinationEntity(91U);
    msg.uid = 69U;
    msg.frag_number = 212U;
    msg.num_frags = 39U;
    const char tmp_msg_0[] = {-115, -89, -25, -128, 87, -121, 44, 107, -4, 79, 48, -50, 96, 111, 124, 7, -35, -11, -101, 47, -49, 24, 47, 14, -30, 21, -64, 117, -62, 68, -91, 1, 121, 70, 116, 66};
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
    msg.setTimeStamp(0.1694805665179272);
    msg.setSource(31609U);
    msg.setSourceEntity(218U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(25U);
    msg.uid = 3U;
    msg.frag_number = 77U;
    msg.num_frags = 184U;
    const char tmp_msg_0[] = {97, -35, 22, -39, 58, -78, -77, -67, -24, 5, 57, 106, 48, -107, 73, -71, 71, -43, -105, 80, 114, -116, -2, 5, 104, 30, -12, -25, -5, -7, 2, 115, -75, -72, 111, -106, -40, 86, -114, -128, 58, 126, -9, -23, -45, -35, -98, 48, -123, 49, -53, 90, -2, -3, -116, 22, -50, 55, 8, 22, -87, -108, 109, -44, 4, -52, -98, 99, -40, -83, 90, 103, 2, -40, -42, -68, 2, -46, 36, 81, 56, -6, -34, -100, 78, -38, 59, -8, -38, -67, 47, -38, 39, 75, -93, 104, -26, -94, -4, -72, -85, -38, -17, 118, 15, 25, -96, -14, 27, -42, 48, 21, -61, 10, 33, -16, -103, -91, -93, 8, -7, 64, 9, 91, 15, -110, -103, 11, -37, -29, 9, -119, 89, -57, 26, -75, 70, -80, -106, 97, 83, 51, 67, 103, -41, -104, -128, -25, 99, -108, -6, 28, 120, 53, -43, 94, 105, 32, 110, -126, 60, 12, 92, 72, 17, -20, -97, -110, 79, 126, -40, 123, -120, -30, -61, 23, -25, 15, 120, -71, -72, -13, 81, -18, -27, -110, 79, -58, 113, 61, 119, -62, 1, -61, 98, 38, -103, -17, 123, -82, 3, -25, 115, -55, 2, 56, 122, 118, 14, -52, 68, -30, 45};
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
    msg.setTimeStamp(0.7278465041531851);
    msg.setSource(32501U);
    msg.setSourceEntity(97U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(183U);
    msg.uid = 224U;
    msg.frag_number = 126U;
    msg.num_frags = 172U;
    const char tmp_msg_0[] = {-104, 72, -98, -92, -1, 81, 113, -14, -56, -94, 48, -120, 66, 79, -74, 97, -85, -50, 72, -126, -4, 43, -62, -5, -33, -62, -98, -99, 52, 120, 68, 71, 25, 70, -32, -82, 104, 50, 9, 31, -23, -11, -94, -88, -81, -57, 3, -97, -47, -55, -63, -115, -23, -63, -27, 74, -4, -104, 32, 108, -54, 47};
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
    msg.setTimeStamp(0.7256321490586157);
    msg.setSource(47665U);
    msg.setSourceEntity(48U);
    msg.setDestination(59737U);
    msg.setDestinationEntity(133U);
    msg.content_type.assign("XNUIWXRPMAEJFMBRCFPMBEXZITVWDLKMPYUIPASZUTNUAOURXWTLSEPEMLUUGGBYAQEXDLYCDPITKJITXHDKLVXAKWLFSGRBVNMSHTFOCRNBCQRRISCUDGEYKWYWEZHAHCSJBWJKKIQLUXMOUGLKQNFFNDR");
    const char tmp_msg_0[] = {-27, 30, 78, 119, 123, 47, -96, -106, 59, 31, 75, 95, -68, -4, -17, -51, -37, 18, -126, -67, 30, -69, -104, -75, 90, 57, -76, 21, 2, -15, -11, -108, 42, -110, 48, -7, -105, -34, 25, -7, -94, 102, 11, 18, 46, -50, -34, 17, 122, 102, -55, 98, 109, -64, -56, -30, -105, 19, 126, -12, -63, 95, 0, 103, -99, -112, 92, -116, -109, 84, -10, 65, 85, 124, -123, -61, -21, 60, 57, 103, 51, 33, 34, 51, -60, -106, -74, -105, -91, -7};
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
    msg.setTimeStamp(0.9986327465971434);
    msg.setSource(55944U);
    msg.setSourceEntity(196U);
    msg.setDestination(51628U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("GKVYBMZHGNSIVTZKYGMUVVIMXIROPFTRBFOILNJKRRWRROBAJWLNFWCNOZNXBTZVMESEDGKTQSVAHUKFMQCEHPGGBDCVMEEUQQIKOUOEAOBDO");
    const char tmp_msg_0[] = {-25, 90, -27, 12, 27, 31, 40, 32, -105, 59, 125, -70, 107, 76, 69, 60, -51, 32, -44, 64, 16, -106, -84, 24, 86, -61, -38, 99, -111, 114, 62, -32, 27, -56, -47, -93, 80, -47, -48, 24, 21, 110, 67, -116, -106, 77};
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
    msg.setTimeStamp(0.07913292670255279);
    msg.setSource(63904U);
    msg.setSourceEntity(164U);
    msg.setDestination(40332U);
    msg.setDestinationEntity(17U);
    msg.content_type.assign("UBITKCBNYXQXLHVWKXCLXFFSFBQXMZSFLQDMHPNKHUMZDISBJWBVKJMPSVCNRUGN");
    const char tmp_msg_0[] = {27, -8, 91, -5, 57, 112, -12, 80, 3, -47, 80, 0, 13, 82, 84, 44, -41, 90, 116, 18, 59, 67, -61, -97, -8, 5, -49, 3, 81, 20, -74, 97, 43, 67, 13, 23, -64, -6, -93, -75, -120, -93, -121, -81, 111, -102, -25, 5, -55, -68, 18, -54, 112, -108, -75, -38, 125, -32, 18, 65, -63, -115, -37, -16, 119, -24, -13, 86, 82, 12, 77, -53, -84, 110, -2, -21, -6, -22, 1, 24, -43, -17, 123, -3, 29, -21, -89, 29, 89, -58, 7, 90, 2, -64, 65, 64, -14, 107, 110, 43, -95, 89, -65, -113, -62, -25, -52, 45, 58, 3, -68, 86, -71, 37};
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
    msg.setTimeStamp(0.4510967546636627);
    msg.setSource(30160U);
    msg.setSourceEntity(71U);
    msg.setDestination(8999U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.5612315100790926);
    msg.setSource(3320U);
    msg.setSourceEntity(79U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.8842236951647062);
    msg.setSource(61407U);
    msg.setSourceEntity(212U);
    msg.setDestination(8547U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.6099053292010147);
    msg.setSource(27820U);
    msg.setSourceEntity(35U);
    msg.setDestination(13357U);
    msg.setDestinationEntity(84U);
    msg.target = 7294U;
    msg.bearing = 0.8711788865313138;
    msg.elevation = 0.603699543964188;

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
    msg.setTimeStamp(0.36054523302347063);
    msg.setSource(56394U);
    msg.setSourceEntity(45U);
    msg.setDestination(10954U);
    msg.setDestinationEntity(215U);
    msg.target = 44575U;
    msg.bearing = 0.24574477417221385;
    msg.elevation = 0.21545580540902565;

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
    msg.setTimeStamp(0.9728130098782274);
    msg.setSource(61828U);
    msg.setSourceEntity(92U);
    msg.setDestination(35057U);
    msg.setDestinationEntity(71U);
    msg.target = 21428U;
    msg.bearing = 0.6324411076566583;
    msg.elevation = 0.423787854436004;

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
    msg.setTimeStamp(0.3513145301138826);
    msg.setSource(25403U);
    msg.setSourceEntity(81U);
    msg.setDestination(33821U);
    msg.setDestinationEntity(211U);
    msg.target = 12209U;
    msg.x = 0.45132959484229496;
    msg.y = 0.18447534587343706;
    msg.z = 0.9008701485869168;

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
    msg.setTimeStamp(0.08386175818634622);
    msg.setSource(9819U);
    msg.setSourceEntity(47U);
    msg.setDestination(32229U);
    msg.setDestinationEntity(129U);
    msg.target = 36464U;
    msg.x = 0.7713424866793722;
    msg.y = 0.6803595280751569;
    msg.z = 0.12453644241231421;

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
    msg.setTimeStamp(0.6971140908471098);
    msg.setSource(64905U);
    msg.setSourceEntity(8U);
    msg.setDestination(64547U);
    msg.setDestinationEntity(118U);
    msg.target = 28600U;
    msg.x = 0.6733406618460567;
    msg.y = 0.8012527647637615;
    msg.z = 0.11651388752865888;

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
    msg.setTimeStamp(0.4796898022603183);
    msg.setSource(59208U);
    msg.setSourceEntity(81U);
    msg.setDestination(25229U);
    msg.setDestinationEntity(244U);
    msg.target = 43747U;
    msg.lat = 0.06760658478244796;
    msg.lon = 0.6595226164758514;
    msg.z_units = 63U;
    msg.z = 0.3229692724060491;

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
    msg.setTimeStamp(0.9440183869424702);
    msg.setSource(38630U);
    msg.setSourceEntity(144U);
    msg.setDestination(31698U);
    msg.setDestinationEntity(217U);
    msg.target = 22590U;
    msg.lat = 0.7711250194363417;
    msg.lon = 0.37406696065239875;
    msg.z_units = 78U;
    msg.z = 0.473818211467099;

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
    msg.setTimeStamp(0.9216204948592884);
    msg.setSource(65239U);
    msg.setSourceEntity(34U);
    msg.setDestination(59667U);
    msg.setDestinationEntity(142U);
    msg.target = 38720U;
    msg.lat = 0.276454814164409;
    msg.lon = 0.37456248273579096;
    msg.z_units = 250U;
    msg.z = 0.7560777340311451;

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
    msg.setTimeStamp(0.37449138323428166);
    msg.setSource(23307U);
    msg.setSourceEntity(153U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(198U);
    msg.locale.assign("JNLFXPCEMNRLTIECEDEDWPAVYQVWLWQHCNDLTMWHIOOUNKGFIDPJJOTMPHBXXLBMJVYGYAIUFIVTUOZKWJBJVZEGMHTWMCHIHYUQRHLXYCABYSIYEVGEBJGDJNAUKDTBVLVBPEZODX");
    const char tmp_msg_0[] = {102, -12, 114, 11, 124, 112, -81, 69, 74, -69, -104, 57, -76, -120, 59, -12, -39, 109, -61, 40, 77, 119, -46, 46, 124, -105, 101, 64, -81, -2, 55, 92, -28, 87, 66, 125, 111, 64, 65, -105, 124, 26, 104, -79, -116, -102, -112, -51, 125, 68, -107, 122, 120, 11, 62, 102, 112, -47, -122, 5, -118, 38, -15, -97, 41, -116, 55, -27, -106, -104, 57, 10, 18, 64, 36, 82, 84, -15, 98, 6, 105, 45, 5, 0, 126, -60, 123, -9, 93, -23, 45, -53, 71, -59, -113, 79, 81, -68, -45, 115, -55, -115, 25, -23, -57, -26, 99, 82, -46, -100, 60, 89, 122, -70, 103, -115, -122, 76, -59, -111, -93, -3, -89, -11, 58, -92, -91, 24, -62, 113, -94, 98, -98, -43, -37, 17, -128, -102, -77, -16, 118, 125, -86, 12, -79, 61, -121, 95, -27, -92, -75, -35, -29, 105, -105, -49, 46, -42, 3, 104, 117, -112, -117, 121, 55, 101, 52, 54, -36, 119, -121, 1, -27, 110, 116, -82, -56, -59, -107, -98, -91, 109, -113, 31, -115, -92, 8, -107, -40, 118, -29, -56, 41, 75, 31, 45, -67, 98, -127, -24, 76, -78, 14, 67, 68, 60, 21, -111, -65, -67, -90, -102, 9, 88, 66, 81, 124, -70, -37, -23, -5, -126, -78, 111, -61, 70, 122, -115, 57};
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
    msg.setTimeStamp(0.3468285454871566);
    msg.setSource(20965U);
    msg.setSourceEntity(117U);
    msg.setDestination(59058U);
    msg.setDestinationEntity(148U);
    msg.locale.assign("MOTSMALIIOUBBJKBKCBEGMYVINYZGTWEHPMJPPYZXMGWADUCYBFVSTPFZJAXLTRKRJNEDLFFFMNZPXQOVTKYGOCORHENIGXJHAQICZSDUAXHQSYBSKPPHVCFLXODQVFAJQHRDWVPAWDXTRPBADHVNXUGJAQGNGSZLQCVBXCQ");
    const char tmp_msg_0[] = {81, -117, -38, -116, -73, -59, -54, 91, -45, -29, -47, 56, 40, -59, -105, -38, -19, 59, -21, 29, -111, 69, 92, -84, -87, 42, 18, 58, 125, -83, -15, -64, 122, 81, 28, 39, 85, -69, 92, 24, 69, 36, -66, 44, 34, -105, -68, 44, 20, -73, 10, 77, 24, -73, 121, -111, 68, 20, 17, 100, -11, -97, -98, -39, 77, 50, 86, 59, 9, -81, -25, 25, -106, 60, -41, -109, 111, -110, -44, 100};
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
    msg.setTimeStamp(0.7875344932958214);
    msg.setSource(43184U);
    msg.setSourceEntity(175U);
    msg.setDestination(16780U);
    msg.setDestinationEntity(209U);
    msg.locale.assign("JVXVOHQRHGVJJXGDPODZHICPQMKFHTEAAQAHHRZIPSTQYWBIVZIUBAZMQXLLTJFAYNBXWFDQIONNMLAEYLCMEURCZNKVFPCQCAWSDUVSILDPUXTQGNZDUNQGUZOYKEPGJSKXJPAYHSPNDMBYURNFCWLIRWPVRROBTITKZKCFEXXSAGTTPFNEEKAGESCKOTVUYGBZBR");
    const char tmp_msg_0[] = {-95, -44, -90, 1, -111, -26, 89, -43, 75, 55, -45, 50, 95, -47, 69, -27, 49, 48, -32, -124, -67, 73, 84, 50, -98, 20, 88, 32, 47, -12, 35, -44, 126, -114, 126, 61, -53, -50, -44, 57, 56, -50, -114, -81, -121, 3, 57, -108, 47, 19, -97, -41, 123, 101, 107, 51, -126, 59, -63, -22, -83, 96, 79, -37, -59, 109, 71, -15, 33, 119, -88, -105, -5, 114, 31, 111, -23, 58, -63, -56, -12, -106, -124, -50, -68, -90, 15, 53, 88, -31, -29, -114, 56, 116, 90, 98, -64, -126, 113, -75, -68, -70, 54, -21, -101, -11, 69, -99, 90, 54, 66, -15, -10, -89, -1, -56, 7, -47, 115, 43, 71, -47, 32, -2, -81, -110, 28, -65, -56, -92, -93, -62, -78, 37, -76, -92, -76, -20, -80, -88, -39, -64, -9, 43, -13, -24, -96, -89, 44, -63, -71, 36, 107, 37, -68, -53, -37, 80, 119, 113, -123, 52, -65, -107, 16, -33, -55, 13, -64, 92, -5, 69, 87, 17, 9, 21, -108, 37, -17, -59, -41, -52, -73, 125, -3, -6, 93, 58, -99, 67, -46, -120};
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
    msg.setTimeStamp(0.7558612448671005);
    msg.setSource(20383U);
    msg.setSourceEntity(102U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.2817543172479011);
    msg.setSource(5751U);
    msg.setSourceEntity(84U);
    msg.setDestination(10104U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.9427792608041505);
    msg.setSource(35056U);
    msg.setSourceEntity(80U);
    msg.setDestination(825U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.369340271896313);
    msg.setSource(49599U);
    msg.setSourceEntity(194U);
    msg.setDestination(62657U);
    msg.setDestinationEntity(16U);
    msg.camid = 191U;
    msg.x = 6077U;
    msg.y = 29894U;

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
    msg.setTimeStamp(0.3001856887092672);
    msg.setSource(56873U);
    msg.setSourceEntity(77U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(57U);
    msg.camid = 91U;
    msg.x = 51943U;
    msg.y = 48735U;

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
    msg.setTimeStamp(0.8641177083536041);
    msg.setSource(22401U);
    msg.setSourceEntity(19U);
    msg.setDestination(38607U);
    msg.setDestinationEntity(136U);
    msg.camid = 21U;
    msg.x = 33059U;
    msg.y = 10872U;

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
    msg.setTimeStamp(0.6355028598191923);
    msg.setSource(43586U);
    msg.setSourceEntity(13U);
    msg.setDestination(56011U);
    msg.setDestinationEntity(239U);
    msg.camid = 47U;
    msg.x = 36706U;
    msg.y = 20279U;

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
    msg.setTimeStamp(0.752637741058935);
    msg.setSource(34035U);
    msg.setSourceEntity(144U);
    msg.setDestination(15484U);
    msg.setDestinationEntity(72U);
    msg.camid = 116U;
    msg.x = 65274U;
    msg.y = 35950U;

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
    msg.setTimeStamp(0.24147302474643118);
    msg.setSource(23316U);
    msg.setSourceEntity(205U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(100U);
    msg.camid = 134U;
    msg.x = 23933U;
    msg.y = 55274U;

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
    msg.setTimeStamp(0.28846594784828616);
    msg.setSource(22137U);
    msg.setSourceEntity(103U);
    msg.setDestination(17372U);
    msg.setDestinationEntity(222U);
    msg.tracking = 26U;
    msg.lat = 0.991612770510076;
    msg.lon = 0.9662976680701671;
    msg.x = 0.6401669205168329;
    msg.y = 0.29054789011444226;
    msg.z = 0.2576301405579563;

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
    msg.setTimeStamp(0.7618910303169468);
    msg.setSource(12649U);
    msg.setSourceEntity(146U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(54U);
    msg.tracking = 134U;
    msg.lat = 0.9544688554286798;
    msg.lon = 0.19189671074504;
    msg.x = 0.7049302636824251;
    msg.y = 0.37889263920095917;
    msg.z = 0.4105269336793773;

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
    msg.setTimeStamp(0.16331319227448526);
    msg.setSource(20519U);
    msg.setSourceEntity(12U);
    msg.setDestination(58459U);
    msg.setDestinationEntity(83U);
    msg.tracking = 102U;
    msg.lat = 0.9518147368311655;
    msg.lon = 0.10636808314916968;
    msg.x = 0.7140793637673017;
    msg.y = 0.7333468457260799;
    msg.z = 0.7138389399948994;

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
    msg.setTimeStamp(0.5525090813350647);
    msg.setSource(41832U);
    msg.setSourceEntity(116U);
    msg.setDestination(64392U);
    msg.setDestinationEntity(159U);
    msg.target.assign("WNYWZHRDNHXVMPSIMULJPDRWKEFCAZMWYGGABJADLDPXYPBXHSJHGCGMRJEZUXVFEFQIDUNYZQWFVBPYIWVHYGXSOUOYYZWIJIBSFKMJHUSCJTAOKZXQXQJEVIHAETLVZRBCHLE");
    msg.lbearing = 0.35537787875042814;
    msg.lelevation = 0.9353181802475968;
    msg.bearing = 0.09538817446259984;
    msg.elevation = 0.8800187070551316;
    msg.phi = 0.6512394604171138;
    msg.theta = 0.07141970013073062;
    msg.psi = 0.7363967121786866;
    msg.accuracy = 0.8637429879593365;

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
    msg.setTimeStamp(0.921907497696726);
    msg.setSource(24673U);
    msg.setSourceEntity(6U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(69U);
    msg.target.assign("BPUYATLJJTGZJLESSZWERNYRUZVCDYEVUAUPKQHNHHNTSTMXSICBEAFHGRDLROJDOJCHPQZPMODKCNGEJSNDGCDWRZIYMDRRNKF");
    msg.lbearing = 0.797041071337052;
    msg.lelevation = 0.3510890743281164;
    msg.bearing = 0.5945406472124097;
    msg.elevation = 0.13203357760914525;
    msg.phi = 0.9988205839662734;
    msg.theta = 0.06341048073555;
    msg.psi = 0.6018883252166585;
    msg.accuracy = 0.07022860690419763;

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
    msg.setTimeStamp(0.4034422663808357);
    msg.setSource(42806U);
    msg.setSourceEntity(180U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(104U);
    msg.target.assign("USTDTPYBWAXMHENYJMKTANDUZDKEXVGQGZBWBGKBPFDHAASKXQT");
    msg.lbearing = 0.07001356900714784;
    msg.lelevation = 0.580885673410886;
    msg.bearing = 0.9577283269690455;
    msg.elevation = 0.49997536812606436;
    msg.phi = 0.375985961431319;
    msg.theta = 0.43231130242734106;
    msg.psi = 0.6267071512173121;
    msg.accuracy = 0.5641015269292834;

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
    msg.setTimeStamp(0.23505530891719306);
    msg.setSource(47010U);
    msg.setSourceEntity(216U);
    msg.setDestination(36703U);
    msg.setDestinationEntity(77U);
    msg.target.assign("SRIYVTGKVVJTJLUGAMTPTMRNKPKLCIYVYCWIBTNZJNCVXQZXEQJMPUANPWSAWGKZZNFFDRPYDKWKQBWFCKNHLBAQZJIKIREUWBNMLPECVPDQGZVVECAWDBCGTEFOHPOEUUT");
    msg.x = 0.742039231555333;
    msg.y = 0.7246974364786677;
    msg.z = 0.7211180842471024;
    msg.n = 0.2511205763274419;
    msg.e = 0.1337467970674111;
    msg.d = 0.6109744987389562;
    msg.phi = 0.445972336351505;
    msg.theta = 0.7606339276468296;
    msg.psi = 0.4796919452779358;
    msg.accuracy = 0.8019013323733861;

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
    msg.setTimeStamp(0.5958676989338488);
    msg.setSource(26302U);
    msg.setSourceEntity(183U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(41U);
    msg.target.assign("EXBHRHPIOYQEVUZIMQAFGQCSWGAWFPOD");
    msg.x = 0.06708553179566157;
    msg.y = 0.3184235109298379;
    msg.z = 0.4127832049405018;
    msg.n = 0.0026058445297637567;
    msg.e = 0.7390143806512333;
    msg.d = 0.35050458967179465;
    msg.phi = 0.6551796725636213;
    msg.theta = 0.9386554236287089;
    msg.psi = 0.36820588673823085;
    msg.accuracy = 0.92980361858304;

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
    msg.setTimeStamp(0.5865189762484116);
    msg.setSource(17053U);
    msg.setSourceEntity(152U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(101U);
    msg.target.assign("RIIEODPEVSDKHQAHACSOUBVDZXIFWHFJPYNICOMRXZHBTSOHUDRXFFYGXRHKWGLWEYLUTELNJBEZCVRWOZJVFTFRQZRCGFQWAKTGWZISLZPBKUYOGMIHAVVBIESQPXVUWVSATMCNEHWPXKYCSALLPXKDSLBQBYUVZMNGMYLSXIPHLNJJMRMMOMDQUZEDUAOANTPNYNKYTUFBLDBCWGTQJWDEC");
    msg.x = 0.3610449422462648;
    msg.y = 0.3636275868490454;
    msg.z = 0.44305361995811066;
    msg.n = 0.6500708454157431;
    msg.e = 0.42080981730046696;
    msg.d = 0.03055389532693298;
    msg.phi = 0.37658042399897473;
    msg.theta = 0.09395642886513456;
    msg.psi = 0.3546080225260664;
    msg.accuracy = 0.2012381720396551;

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
    msg.setTimeStamp(0.6176275861331681);
    msg.setSource(42532U);
    msg.setSourceEntity(153U);
    msg.setDestination(28694U);
    msg.setDestinationEntity(149U);
    msg.target.assign("CILUAWUMYHEXLLGZOYRJPRDQNWVPVKNADWGHSVQLMJTCLRGTKRIJNOCHMUGCFPRUJHXGTVJUBPJYTASVEHJSPTXZOJSTFW");
    msg.lat = 0.7681894682676799;
    msg.lon = 0.781867299132983;
    msg.z_units = 5U;
    msg.z = 0.3605121588659078;
    msg.accuracy = 0.82017194610812;

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
    msg.setTimeStamp(0.1479056226523815);
    msg.setSource(29500U);
    msg.setSourceEntity(230U);
    msg.setDestination(23680U);
    msg.setDestinationEntity(189U);
    msg.target.assign("HERKOIXHUDHIRXRQBINSBWQGMZJDAGAXVKOHINQTDTWATYPXELWAGFNGEMSLPOVZYSCTZCECUXBYVRMFLCXALPZTIKKDHMBNUPJKEAVJOFHQSCWFGPZCLASQGLRGKZSKE");
    msg.lat = 0.4748327270503654;
    msg.lon = 0.947285544243817;
    msg.z_units = 4U;
    msg.z = 0.8609329585546135;
    msg.accuracy = 0.4787316305715209;

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
    msg.setTimeStamp(0.4797039919488538);
    msg.setSource(13785U);
    msg.setSourceEntity(177U);
    msg.setDestination(21537U);
    msg.setDestinationEntity(245U);
    msg.target.assign("YCXZQBRDRAPCTHMFUVOLCYYJWYEOXUDANOASUFCCSEAMILBK");
    msg.lat = 0.00454453129120691;
    msg.lon = 0.10952951875895478;
    msg.z_units = 25U;
    msg.z = 0.9736581448887393;
    msg.accuracy = 0.115084051668085;

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
    msg.setTimeStamp(0.6657700496698875);
    msg.setSource(27918U);
    msg.setSourceEntity(203U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(199U);
    msg.name.assign("TYOQVEVHHTZBNIGWEMTBDEBUWPJQXCBPLFLPZFONGJBIMEACBZQDRWGECVYPACCXWTQMDSGZRPIHTJBMXGUJKLJYYTVPQOVNWAFNIEQDAVLZVRDNSMGSUBURNHUGVTQJYERSOOHGGYIDCAEJXDZIUQRJOFUHFINCLIPSRRZONYHBUDCKDXPKWLAKQLMFOKHSGXWAWLOTUHNNFLAAQEJRFMZSKILRXWFC");
    msg.lat = 0.3855171758029927;
    msg.lon = 0.660228260416438;
    msg.z = 0.4224755765370364;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.8955963299413976);
    msg.setSource(60500U);
    msg.setSourceEntity(16U);
    msg.setDestination(41449U);
    msg.setDestinationEntity(209U);
    msg.name.assign("HBNVWASGECIPZVQYWUTFDMIWVLERTQWCDRMZZTNMEDZHEQCLYCJFGRISSXQPMHVDETKUPIDCYPVNLURJFEXFFWBXQQTNLIJNWYKVLSRUNLXKCTHLMIMKPAZOKFTPWKIVBOBBUOAGXOZRSPNGCMSAPYRUICNYYRTWAWGHWDDJLPDVQYASRBHO");
    msg.lat = 0.02419328742825222;
    msg.lon = 0.7079462457999783;
    msg.z = 0.8634927806294624;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.8941618212153584);
    msg.setSource(16181U);
    msg.setSourceEntity(8U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(112U);
    msg.name.assign("VIHTELTNZOWSYYDMIUGCZHNADRKWPFIJQGSTXGJUSJRHUOZTMDRYIGLEDYNBFCLHZYGQQLZFWQSNDLCFERMATXERMASHRKEPSIZBCWVNGTVKPPCWIWLXP");
    msg.lat = 0.7340803960732201;
    msg.lon = 0.2594953756227769;
    msg.z = 0.02653764368181255;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.3879580637620177);
    msg.setSource(23549U);
    msg.setSourceEntity(173U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(13U);
    msg.op = 19U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QJVZHBVDZZNPIXWJLNQSHVHMMANMBLVHAXXSGDIIDCWNAPFBDKKWEGVASUKGJZJGNFOLBDORNRECORWOCDCEWCIRFIDKGXWAZIAGEHLSRMGDTSTGLWWCXKUYGFATIUYYHQHKZDZGBKEOAIHFDOPAETFBKVJKMHPLRQTCYFNYCCSENR");
    tmp_msg_0.lat = 0.9495824373316887;
    tmp_msg_0.lon = 0.27551905972880886;
    tmp_msg_0.z = 0.2604240852007844;
    tmp_msg_0.z_units = 107U;
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
    msg.setTimeStamp(0.3548833159334931);
    msg.setSource(6848U);
    msg.setSourceEntity(121U);
    msg.setDestination(54226U);
    msg.setDestinationEntity(214U);
    msg.op = 166U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GRFCJOFKAZKMPCUMITZKODGWJPHBTGLXAWASCZCISUCLCXTOBDJUHHRCKMBVBOPVMAZIXXDNSFDOXMMWQFFZSLDKOENLZHSMQVLWVKFBFNBAEYVERYEADIEHPTXYDGLIRBUNEHXUYULPVRNQEPNQCQJLVTGQCZIMXWZPWVEJHFGBJRADOPIKJJHATWBXDHRRVVWGTRZSQYEMLNTQYLBNOIQAEH");
    tmp_msg_0.lat = 0.36045422747416467;
    tmp_msg_0.lon = 0.06581575022355568;
    tmp_msg_0.z = 0.9720354633385033;
    tmp_msg_0.z_units = 48U;
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
    msg.setTimeStamp(0.2127607576586692);
    msg.setSource(21269U);
    msg.setSourceEntity(20U);
    msg.setDestination(31561U);
    msg.setDestinationEntity(170U);
    msg.op = 193U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QEJKMERBJIXSRJTHYJQIDRRSFNWAJYHECZREUASUNHZXVUYWIBWWSKEZOWHIWTBYDXFCWNOHQRXGPECTDQBCOYGQQZNSBRPYJGZGVTGTTXOLBKMPQACHWQZAJABEUMSZMHGSSOOGCIVYFFCNDZEXHHAKLFTUYKKUPMACGPSYVRXTLKLODALVWATRMQOFKVFNYRAFJIUIDJQKPLEILIIVKT");
    tmp_msg_0.lat = 0.9301675128646252;
    tmp_msg_0.lon = 0.24994312951761544;
    tmp_msg_0.z = 0.4723270163242088;
    tmp_msg_0.z_units = 126U;
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
    msg.setTimeStamp(0.9259689380538184);
    msg.setSource(55108U);
    msg.setSourceEntity(212U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(102U);
    msg.value = 0.11103397614363864;
    msg.type = 75U;

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
    msg.setTimeStamp(0.4567772472643079);
    msg.setSource(65043U);
    msg.setSourceEntity(80U);
    msg.setDestination(6334U);
    msg.setDestinationEntity(218U);
    msg.value = 0.8758516062173615;
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
    msg.setTimeStamp(0.6746178706971068);
    msg.setSource(13353U);
    msg.setSourceEntity(0U);
    msg.setDestination(57006U);
    msg.setDestinationEntity(190U);
    msg.value = 0.017084565219233294;
    msg.type = 246U;

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
    msg.setTimeStamp(0.6398457548822734);
    msg.setSource(53957U);
    msg.setSourceEntity(133U);
    msg.setDestination(15694U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8033621513345458;

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
    msg.setTimeStamp(0.3380694176397162);
    msg.setSource(17925U);
    msg.setSourceEntity(19U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(222U);
    msg.value = 0.37781889447004247;

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
    msg.setTimeStamp(0.387194246820753);
    msg.setSource(4362U);
    msg.setSourceEntity(53U);
    msg.setDestination(41992U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5729424659381872;

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
    msg.setTimeStamp(0.019856152864106913);
    msg.setSource(64886U);
    msg.setSourceEntity(185U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(34U);
    msg.timestamp_last_service = 0.8763794549211047;
    msg.time_next_service = 0.26933744043176444;
    msg.time_motor_next_service = 0.796034326373663;
    msg.time_idle_ground = 0.37523478580020786;
    msg.time_idle_air = 0.6469566833560724;
    msg.time_idle_water = 0.1218983142749831;
    msg.time_idle_underwater = 0.1807455413514798;
    msg.time_idle_unknown = 0.26660537537174855;
    msg.time_motor_ground = 0.22729608112699484;
    msg.time_motor_air = 0.11970823141497722;
    msg.time_motor_water = 0.9439191165608021;
    msg.time_motor_underwater = 0.23626186934632887;
    msg.time_motor_unknown = 0.11696641933560392;
    msg.rpm_min = -22740;
    msg.rpm_max = -9145;
    msg.depth_max = 0.13125350292575966;

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
    msg.setTimeStamp(0.6951647463230725);
    msg.setSource(26968U);
    msg.setSourceEntity(99U);
    msg.setDestination(4934U);
    msg.setDestinationEntity(9U);
    msg.timestamp_last_service = 0.4902006987720361;
    msg.time_next_service = 0.25712582223851976;
    msg.time_motor_next_service = 0.07293883359805531;
    msg.time_idle_ground = 0.7317743378203153;
    msg.time_idle_air = 0.5208270650127602;
    msg.time_idle_water = 0.43917382458233856;
    msg.time_idle_underwater = 0.4251821940645837;
    msg.time_idle_unknown = 0.2653121242329529;
    msg.time_motor_ground = 0.6905357030274614;
    msg.time_motor_air = 0.08320503151530034;
    msg.time_motor_water = 0.4903404941479651;
    msg.time_motor_underwater = 0.3112215908233035;
    msg.time_motor_unknown = 0.3894505961016359;
    msg.rpm_min = -24635;
    msg.rpm_max = 12694;
    msg.depth_max = 0.5054390890267114;

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
    msg.setTimeStamp(0.33778319630779685);
    msg.setSource(32009U);
    msg.setSourceEntity(98U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(151U);
    msg.timestamp_last_service = 0.9813201001621491;
    msg.time_next_service = 0.5033644833362485;
    msg.time_motor_next_service = 0.6413803511144315;
    msg.time_idle_ground = 0.2008795890207603;
    msg.time_idle_air = 0.27735758439449965;
    msg.time_idle_water = 0.1304457064282991;
    msg.time_idle_underwater = 0.011447459215768507;
    msg.time_idle_unknown = 0.6544128179503167;
    msg.time_motor_ground = 0.03186510591537106;
    msg.time_motor_air = 0.024248304098707374;
    msg.time_motor_water = 0.7968339928043818;
    msg.time_motor_underwater = 0.4501897267363645;
    msg.time_motor_unknown = 0.13639342256190623;
    msg.rpm_min = -8452;
    msg.rpm_max = -246;
    msg.depth_max = 0.651996320040457;

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
    msg.setTimeStamp(0.44190938454436);
    msg.setSource(51912U);
    msg.setSourceEntity(2U);
    msg.setDestination(56490U);
    msg.setDestinationEntity(237U);
    msg.severity = 233U;
    msg.text.assign("HBRGLUAQOSFAGEUAAGOAUDCZYBQISDNPFFNOTZXGCIUMNLQNVSDZYBUYSCWPLJTGRSZPTUXPTSRHOCJKECJXEOGXMYIVUSZFGJWVVLQRQHDRRDZJDTPWAPICOXWOYETDEFKLNKHNYMFRQVNSVUEHJDYPLEQKCKGNIOQTHTLGCLMVUYIVVMQMTWALEBPINRBEIOBXBXMJQZHXKMFMWZAXJZRBUFCRLEVKTZAIFKCYOBYXHWWHSMFGDI");

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
    msg.setTimeStamp(0.4989246147334562);
    msg.setSource(770U);
    msg.setSourceEntity(211U);
    msg.setDestination(7339U);
    msg.setDestinationEntity(103U);
    msg.severity = 48U;
    msg.text.assign("QJOZIZXLDIGCTBLWV");

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
    msg.setTimeStamp(0.8438541036705018);
    msg.setSource(59571U);
    msg.setSourceEntity(234U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(104U);
    msg.severity = 49U;
    msg.text.assign("XBIGAGYZFEQGWIOBMPXOMLCQRECUGPVPKOTPMMFSMJSEQUIEJHIGHRKHTCBQGDNWZGBRMAESVQCOCDIZZOWXEACYTADCITIZLJHRQLYUWDHGVJSBDCKJBPVZNANNLSVVHODEONWNRAPTBCVXDZHP");

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
    msg.setTimeStamp(0.08358684643356318);
    msg.setSource(15125U);
    msg.setSourceEntity(234U);
    msg.setDestination(49564U);
    msg.setDestinationEntity(39U);
    msg.channel = 53;
    msg.value = 251807004;
    msg.gain = 11U;

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
    msg.setTimeStamp(0.6411424671773006);
    msg.setSource(27624U);
    msg.setSourceEntity(90U);
    msg.setDestination(61238U);
    msg.setDestinationEntity(253U);
    msg.channel = -83;
    msg.value = -1287816281;
    msg.gain = 202U;

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
    msg.setTimeStamp(0.34897565769694305);
    msg.setSource(2763U);
    msg.setSourceEntity(16U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(125U);
    msg.channel = 49;
    msg.value = 1719653724;
    msg.gain = 232U;

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
    msg.setTimeStamp(0.985462522797277);
    msg.setSource(5760U);
    msg.setSourceEntity(80U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(111U);
    msg.ch01 = 0.695442109728452;
    msg.ch02 = 0.28294324564471585;
    msg.ch03 = 0.41186091764338684;
    msg.ch04 = 0.7837426835997539;
    msg.ch05 = 0.5596064150391664;
    msg.ch06 = 0.7796496436094632;
    msg.ch07 = 0.6164568207861142;
    msg.ch08 = 0.22432635401347512;
    msg.ch09 = 0.47735676132850036;
    msg.ch10 = 0.4840092120673172;
    msg.ch11 = 0.6137840139584634;
    msg.ch12 = 0.36448899574726046;
    msg.ch13 = 0.4328255849800291;
    msg.ch14 = 0.6513328521961083;
    msg.ch15 = 0.998677415685626;
    msg.ch16 = 0.5297423725333833;

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
    msg.setTimeStamp(0.4587357403300655);
    msg.setSource(24951U);
    msg.setSourceEntity(75U);
    msg.setDestination(936U);
    msg.setDestinationEntity(144U);
    msg.ch01 = 0.31502175373038244;
    msg.ch02 = 0.9932724076093637;
    msg.ch03 = 0.42081675379588557;
    msg.ch04 = 0.11663684038040212;
    msg.ch05 = 0.4598275441030296;
    msg.ch06 = 0.08276687462116972;
    msg.ch07 = 0.8029818463725177;
    msg.ch08 = 0.5883842315665868;
    msg.ch09 = 0.8204579833084988;
    msg.ch10 = 0.8051431770004257;
    msg.ch11 = 0.5978354264773221;
    msg.ch12 = 0.5023098028805976;
    msg.ch13 = 0.08479008411518751;
    msg.ch14 = 0.13821860578722422;
    msg.ch15 = 0.46558399267089123;
    msg.ch16 = 0.9081094749202318;

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
    msg.setTimeStamp(0.030381573676155682);
    msg.setSource(31858U);
    msg.setSourceEntity(112U);
    msg.setDestination(39622U);
    msg.setDestinationEntity(189U);
    msg.ch01 = 0.33067711556667534;
    msg.ch02 = 0.5184060419998358;
    msg.ch03 = 0.7986857721613516;
    msg.ch04 = 0.772938516129757;
    msg.ch05 = 0.25412413201582273;
    msg.ch06 = 0.3016957469229563;
    msg.ch07 = 0.5538166947603417;
    msg.ch08 = 0.9998953821861787;
    msg.ch09 = 0.04937100567798247;
    msg.ch10 = 0.17351670053012702;
    msg.ch11 = 0.7772861417296282;
    msg.ch12 = 0.424549960255193;
    msg.ch13 = 0.4116364091361914;
    msg.ch14 = 0.9937645237291663;
    msg.ch15 = 0.6348060132763534;
    msg.ch16 = 0.00083233177810349;

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
    msg.setTimeStamp(0.09210404581822151);
    msg.setSource(49615U);
    msg.setSourceEntity(120U);
    msg.setDestination(11870U);
    msg.setDestinationEntity(55U);
    msg.op = 24U;
    msg.lat = 0.114365310693745;
    msg.lon = 0.192146823051484;
    msg.height = 0.7226658137545333;
    msg.depth = 0.24723185978138507;
    msg.alt = 0.20180301465105777;

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
    msg.setTimeStamp(0.5442053074592847);
    msg.setSource(1672U);
    msg.setSourceEntity(240U);
    msg.setDestination(205U);
    msg.setDestinationEntity(221U);
    msg.op = 111U;
    msg.lat = 0.774454180571207;
    msg.lon = 0.7381122661918789;
    msg.height = 0.41314446711924957;
    msg.depth = 0.4286074553256273;
    msg.alt = 0.3735726565572456;

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
    msg.setTimeStamp(0.4041029376320938);
    msg.setSource(12564U);
    msg.setSourceEntity(61U);
    msg.setDestination(26061U);
    msg.setDestinationEntity(132U);
    msg.op = 26U;
    msg.lat = 0.9890354939659168;
    msg.lon = 0.6035802791857928;
    msg.height = 0.6834434996786808;
    msg.depth = 0.6286647670199687;
    msg.alt = 0.9317766772857855;

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
    msg.setTimeStamp(0.35394654144181703);
    msg.setSource(2335U);
    msg.setSourceEntity(19U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(69U);
    msg.nbeams = 10U;
    msg.ncells = 21U;
    msg.coord_sys = 5U;

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
    msg.setTimeStamp(0.6498405880274556);
    msg.setSource(42730U);
    msg.setSourceEntity(134U);
    msg.setDestination(8494U);
    msg.setDestinationEntity(79U);
    msg.nbeams = 132U;
    msg.ncells = 213U;
    msg.coord_sys = 35U;

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
    msg.setTimeStamp(0.662310439907346);
    msg.setSource(54463U);
    msg.setSourceEntity(194U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(224U);
    msg.nbeams = 11U;
    msg.ncells = 78U;
    msg.coord_sys = 146U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.08537539006102235;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.4273671507543193;
    tmp_tmp_msg_0_0.amp = 0.4120175781909018;
    tmp_tmp_msg_0_0.cor = 236U;
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
    msg.setTimeStamp(0.3773542901278958);
    msg.setSource(33198U);
    msg.setSourceEntity(190U);
    msg.setDestination(21538U);
    msg.setDestinationEntity(2U);
    msg.cell_position = 0.7550114985772332;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.03085332164485588;
    tmp_msg_0.amp = 0.31494726565113274;
    tmp_msg_0.cor = 222U;
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
    msg.setTimeStamp(0.6595054608676553);
    msg.setSource(45467U);
    msg.setSourceEntity(211U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(150U);
    msg.cell_position = 0.004706763435619488;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.41359880740511856;
    tmp_msg_0.amp = 0.9532142514018268;
    tmp_msg_0.cor = 248U;
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
    msg.setTimeStamp(0.5743558337174183);
    msg.setSource(32613U);
    msg.setSourceEntity(211U);
    msg.setDestination(55722U);
    msg.setDestinationEntity(126U);
    msg.cell_position = 0.05227195063435519;

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
    msg.setTimeStamp(0.5548623116608823);
    msg.setSource(9738U);
    msg.setSourceEntity(78U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(245U);
    msg.vel = 0.5404041446542651;
    msg.amp = 0.8445572942578644;
    msg.cor = 205U;

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
    msg.setTimeStamp(0.1526577052103799);
    msg.setSource(59743U);
    msg.setSourceEntity(40U);
    msg.setDestination(45026U);
    msg.setDestinationEntity(202U);
    msg.vel = 0.7403136390546498;
    msg.amp = 0.9003039618189415;
    msg.cor = 0U;

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
    msg.setTimeStamp(0.2969843063389991);
    msg.setSource(58665U);
    msg.setSourceEntity(122U);
    msg.setDestination(9394U);
    msg.setDestinationEntity(91U);
    msg.vel = 0.1700373885338019;
    msg.amp = 0.08091996687905734;
    msg.cor = 59U;

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
    msg.setTimeStamp(0.7614484196272833);
    msg.setSource(57905U);
    msg.setSourceEntity(89U);
    msg.setDestination(19173U);
    msg.setDestinationEntity(93U);
    msg.name.assign("HRJMXNEBPIOTJAPZGEEMKQVHUWKLFKHRNRVNERGKQTJDGDNB");
    msg.value = 55U;

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
    msg.setTimeStamp(0.317740402305399);
    msg.setSource(12733U);
    msg.setSourceEntity(88U);
    msg.setDestination(41165U);
    msg.setDestinationEntity(104U);
    msg.name.assign("SCTMLRUXXHPWQFEYH");
    msg.value = 68U;

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
    msg.setTimeStamp(0.2451368332499646);
    msg.setSource(37379U);
    msg.setSourceEntity(213U);
    msg.setDestination(38537U);
    msg.setDestinationEntity(153U);
    msg.name.assign("KFNSPWSONEMZYIKTBLVFUAMPCFFBNNGXHPSQHNDIXMFEKGTHHIDVG");
    msg.value = 135U;

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
    msg.setTimeStamp(0.4221340930233144);
    msg.setSource(6015U);
    msg.setSourceEntity(252U);
    msg.setDestination(26562U);
    msg.setDestinationEntity(225U);
    msg.name.assign("VOVEENECRMTBFHSKNAHHSGMPSNDYDSDHGZRSQHIBGGKOEBSVMXOBNSYGXCAPREWHOUTLHWZEUFSHXZDGXENRUEPPWQXXORCAOKPGFZNRVSNMPV");

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
    msg.setTimeStamp(0.5466940560732976);
    msg.setSource(39378U);
    msg.setSourceEntity(169U);
    msg.setDestination(10277U);
    msg.setDestinationEntity(155U);
    msg.name.assign("WJEIPEXTCYLPEDZXQIOHYCCXOLFGHDFWNMZOOADOVYAGOZHQQXJREBPTNRAGTFXQRZYMRSUBKEKJQYWQSTDSUTPKZGGGBHZQVIWTSBYLUVQROUCYRJYYSPLLAIVUUKVNDUTNRCJZNUTJYGDKWUMFUROMREIBFGHPCHBASLVIPPEDJZENVFDPPVSHZXXVWKDMQAOFNTXCKNSASDFEAKSZLIMLQIOTBK");

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
    msg.setTimeStamp(0.71564209194498);
    msg.setSource(17119U);
    msg.setSourceEntity(122U);
    msg.setDestination(26348U);
    msg.setDestinationEntity(86U);
    msg.name.assign("JNTOHGSQDXJXBOZHYMLQKRMQNMWRTSDDYMCGPFIWSYMEEPZUBS");

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
    msg.setTimeStamp(0.523070307744116);
    msg.setSource(52155U);
    msg.setSourceEntity(241U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(149U);
    msg.name.assign("NCDZWCGDUBVAIRRPAEVFCWIZATDHOSIWRKZPVYRZIMGPMGXGEBSEOWHUHPQLKWQTSBRCEXLLONLTXABHFBAZWHXELNJUJOVHNGFNQBZEFGSYTWHPLRUSKDIFDKYDJGNGQAHLOVRPVDWTUJAQBPIJWTPEQUBCJYYCBVMFXOMXRJFZPKNXFCZFMKEYLQCBXUZY");
    msg.value = 90U;

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
    msg.setTimeStamp(0.38592967970067016);
    msg.setSource(17412U);
    msg.setSourceEntity(112U);
    msg.setDestination(37523U);
    msg.setDestinationEntity(31U);
    msg.name.assign("NPOMRIMBYUCFFODSZOFARCWVDBU");
    msg.value = 28U;

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
    msg.setTimeStamp(0.6164895069565073);
    msg.setSource(48755U);
    msg.setSourceEntity(177U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(227U);
    msg.name.assign("WJVYWABNDOROWEGZCQSZPHFXSRNBLPFOMGDAPVBCSLFLLYVGCXKEEOJIAXTWOJZQVHCMMBCTQWE");
    msg.value = 187U;

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
    msg.setTimeStamp(0.3150497697314515);
    msg.setSource(37518U);
    msg.setSourceEntity(211U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(100U);
    msg.value = 0.1872667202416568;

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
    msg.setTimeStamp(0.6533635098406306);
    msg.setSource(16382U);
    msg.setSourceEntity(45U);
    msg.setDestination(10248U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5573259985184088;

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
    msg.setTimeStamp(0.4017325186602828);
    msg.setSource(2626U);
    msg.setSourceEntity(91U);
    msg.setDestination(58440U);
    msg.setDestinationEntity(135U);
    msg.value = 0.12052943823886542;

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
    msg.setTimeStamp(0.46726628277004656);
    msg.setSource(29747U);
    msg.setSourceEntity(84U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2117286812584751;

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
    msg.setTimeStamp(0.8764310697477764);
    msg.setSource(47859U);
    msg.setSourceEntity(240U);
    msg.setDestination(53552U);
    msg.setDestinationEntity(117U);
    msg.value = 0.32711664893046255;

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
    msg.setTimeStamp(0.8529355563869429);
    msg.setSource(50582U);
    msg.setSourceEntity(248U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(169U);
    msg.value = 0.8313876563950255;

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
    msg.setTimeStamp(0.8019714192638822);
    msg.setSource(61440U);
    msg.setSourceEntity(11U);
    msg.setDestination(13325U);
    msg.setDestinationEntity(154U);
    msg.value = 0.3227505065310129;

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
    msg.setTimeStamp(0.4456697252290621);
    msg.setSource(1338U);
    msg.setSourceEntity(12U);
    msg.setDestination(5585U);
    msg.setDestinationEntity(14U);
    msg.value = 0.39702746999303284;

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
    msg.setTimeStamp(0.659149306372935);
    msg.setSource(60739U);
    msg.setSourceEntity(154U);
    msg.setDestination(27165U);
    msg.setDestinationEntity(66U);
    msg.value = 0.10293341124075328;

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
    msg.setTimeStamp(0.8353427090329899);
    msg.setSource(56862U);
    msg.setSourceEntity(28U);
    msg.setDestination(31117U);
    msg.setDestinationEntity(32U);
    msg.restriction = 154U;
    msg.reason.assign("HJSTRJTZHQNOZTEHVODJPFTPTEHSNVEVZHBONMRWALPIDWBPXOHCBGJUSZIFGGBACERWGZJYXMUXRJUMZXCPHEMICGYFAKVFPIVYCQDLEEXOXVYLBIBRTDKPJWAIHUZYLBENQPUQQZMWWYAASUFDMTFCFKFCJVDOXAXNDLOQCVHLHRKIAQKGPTEOOSVYIKXECOGFXMRNGLJRWV");

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
    msg.setTimeStamp(0.42662553951373106);
    msg.setSource(13489U);
    msg.setSourceEntity(253U);
    msg.setDestination(53276U);
    msg.setDestinationEntity(233U);
    msg.restriction = 154U;
    msg.reason.assign("WMWQVTOGKVRZQIYKDMDCRILLJRXZMCMIBODTDVRABUNXTUWZEVNCUFBKEXITOCPWXGLUNCHABENABKFTJWDVJOPFASPVLFQSMRSMYTSZULHKOYDMXVSQJHD");

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
    msg.setTimeStamp(0.6050363561039945);
    msg.setSource(24742U);
    msg.setSourceEntity(159U);
    msg.setDestination(61684U);
    msg.setDestinationEntity(23U);
    msg.restriction = 102U;
    msg.reason.assign("TVAKLGVANPKLXRGELXPFMFOLVIBRGPMRCISDXIMIJZEFSNDJNKTODASQEAXZDEGWXNSTOSPCALHJYQQNMCIZZDUWJQIMQHWQPCUVOZVHFLYDTEELRUXKSLXJHUMKOAPDVGFINYVFHUMESJB");

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
    msg.setTimeStamp(0.9331963253536331);
    msg.setSource(3273U);
    msg.setSourceEntity(176U);
    msg.setDestination(18598U);
    msg.setDestinationEntity(130U);
    msg.path_param = 0.4157509495384014;
    msg.lat = 0.5144579797971318;
    msg.lon = 0.2837409554730145;
    msg.z = 0.2939573524522171;
    msg.r_f = 0.5252892133179956;
    msg.p = 0.6393104184613997;

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
    msg.setTimeStamp(0.5603311675742669);
    msg.setSource(52150U);
    msg.setSourceEntity(13U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(6U);
    msg.path_param = 0.3334025002616938;
    msg.lat = 0.1738084039062162;
    msg.lon = 0.6124268533515864;
    msg.z = 0.02064393524877961;
    msg.r_f = 0.9926912504675787;
    msg.p = 0.799623236777658;

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
    msg.setTimeStamp(0.6246009277658683);
    msg.setSource(42574U);
    msg.setSourceEntity(94U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(160U);
    msg.path_param = 0.48582671851348136;
    msg.lat = 0.7052290362387909;
    msg.lon = 0.8355702470328128;
    msg.z = 0.06506249945179277;
    msg.r_f = 0.9659023091969671;
    msg.p = 0.22504773577850445;

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
    msg.setTimeStamp(0.0025242530736525604);
    msg.setSource(23695U);
    msg.setSourceEntity(84U);
    msg.setDestination(63904U);
    msg.setDestinationEntity(251U);
    msg.path_param = 0.9363918984675351;
    msg.x = 0.7239041238074709;
    msg.y = 0.2151211381040945;
    msg.z = 0.7380372933254178;
    msg.r_f = 0.5247308294298105;
    msg.p = 0.6725660923969647;

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
    msg.setTimeStamp(0.7819981137687843);
    msg.setSource(37740U);
    msg.setSourceEntity(42U);
    msg.setDestination(54514U);
    msg.setDestinationEntity(209U);
    msg.path_param = 0.680610846495244;
    msg.x = 0.9348448372261062;
    msg.y = 0.6410773075226759;
    msg.z = 0.09610457183947574;
    msg.r_f = 0.26425122091117736;
    msg.p = 0.8148527130944883;

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
    msg.setTimeStamp(0.9613604283317334);
    msg.setSource(24337U);
    msg.setSourceEntity(52U);
    msg.setDestination(254U);
    msg.setDestinationEntity(61U);
    msg.path_param = 0.3372937582476815;
    msg.x = 0.49034490413458554;
    msg.y = 0.5723409874848083;
    msg.z = 0.17990399868738516;
    msg.r_f = 0.13487077651763735;
    msg.p = 0.273813147222021;

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
    msg.setTimeStamp(0.013859209385102766);
    msg.setSource(7862U);
    msg.setSourceEntity(147U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(225U);
    msg.op = 101U;
    msg.experiment = 253U;
    msg.obstacle = 180U;
    msg.delay = 0.6470488979478893;

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
    msg.setTimeStamp(0.8098198978952901);
    msg.setSource(20268U);
    msg.setSourceEntity(6U);
    msg.setDestination(45912U);
    msg.setDestinationEntity(31U);
    msg.op = 42U;
    msg.experiment = 59U;
    msg.obstacle = 242U;
    msg.delay = 0.03185626341876835;

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
    msg.setTimeStamp(0.5547036470731946);
    msg.setSource(18204U);
    msg.setSourceEntity(248U);
    msg.setDestination(13U);
    msg.setDestinationEntity(151U);
    msg.op = 218U;
    msg.experiment = 85U;
    msg.obstacle = 101U;
    msg.delay = 0.8250598804429432;

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
    msg.setTimeStamp(0.649882068721276);
    msg.setSource(59076U);
    msg.setSourceEntity(108U);
    msg.setDestination(2832U);
    msg.setDestinationEntity(180U);
    msg.ellipse_path_lat = 0.03593653606047553;
    msg.ellipse_path_lon = 0.29709972653449745;
    msg.ellipse_path_z = 0.8302419446678603;
    msg.ellipse_path_a = 0.35295778104988307;
    msg.ellipse_path_b = 0.6235470002487254;
    msg.ellipse_path_c = 0.37243888686800086;
    msg.ellipse_path_clockwise = 82U;
    msg.ellipse_path_psi = 0.8237682084438874;
    msg.ellipse_path_z_freq = 0.938600256765694;
    msg.ellipse_path_phi0 = 0.5531760125706826;
    msg.ellipse_path_z_phi0 = 0.5493258108753692;
    msg.waypoint_path_lat = 0.182413580081489;
    msg.waypoint_path_lon = 0.6216766856593274;
    msg.waypoint_path_x.assign("MFPLADOXNSHFMTAHNEYYVGSKRSTHGIFKXYIURLLFFZUDJXGWDZRQPAZGANPIYSICCJPQAQDUOAUIIPHWXUJGNIZTSUTKGAEUFYMMYPWBRZPYQWQVDHREHTPBEOKACFMDWBPKJTXDQTDCHKJN");
    msg.waypoint_path_y.assign("PUZDPBARGJMJFLVGTADTVHPGLDTIYIMHYXFQEYQPWNPSZAWNYEHNYZAYAKUCVLBXQRELJPWETRWHUURJRYEBFQZWRNQVSROHWQSTKBKTNUDSMCLJSUCTHOTNMFO");
    msg.waypoint_path_z.assign("VAJPOITDZQOHSWLMCJVEDPJNZVWYLSKPHAHVRXPEGTIEJHTUMDUWIPOEYDYJWPQYUKWNOGEESITBBRFMPBSMRZZFOEFEBVKKHMMCFANPLVJUCXMIGTVYGGLNXNQQOHNZRYWBMEMSQDWYHBRXQRCSXLODQDVSCFKFFFTORBGQZLWSSDCAANXUUNVLGBGIHNKXAMTXLUKFUGJRASLNIDRVPJCCCXOA");
    msg.waypoint_radius = 0.23043233030043975;
    msg.los_lookahead = 0.13622139492936158;
    msg.los_speed = 0.5277537452141811;
    msg.los_gain = 0.768826668792164;
    msg.los_adaptive = 163U;
    msg.form_x = 0.3724258178509746;
    msg.form_y = 0.2513059001772252;
    msg.form_z = 0.7787874720268847;
    msg.form_max_speed = 0.7009965406755042;
    msg.form_gain = 0.7733545912865057;
    msg.oa_radius = 0.6873374024845119;
    msg.oa_cone = 0.7502378954787209;
    msg.oa_hysteresis = 0.6503493840985194;
    msg.obs_lat = 0.8267705449410758;
    msg.obs_lon = 0.6587014093042209;
    msg.obs_x.assign("JYBTEKALTBFXDQPNASHUQKDDVPVDJCCPWDLMHYGQZCXIMVFMLTRQJDXFPLVUVYONGUNPEIFZILBJXSXGRSPIQZPOXSPTIOEMEOAZZKQCVEFHEGQYWYWRZWVKOEDHFXIGYMBGRWHGGKGKVVYXTIDNIEZFSUKWWJTRQMUJBJLCAETHZAHLSLKYMRCIPUTUYRNBMDFIMBAWWAHXNASFZ");
    msg.obs_y.assign("BXXRMNBQXGRXERETGUDAFMAMKXYAIPDYVKGNTGBVTJMSFATYZYWDIZBNQEKMIPHOVEADOUDXTCVNIEZUOXEZAMGISBJKNNLHFLNZQJLSUZUATPPQLVZLIXJPFWUHGLVMKBQLVBOLEQCSNXODFWUKKSRCUPQCWBUCFBVYPKMTWJAYEHZWHDBFSOLTDJKGJIRIEIMHMWZJCKRUCEDOWDHFSTJWPPCCQRAXYYSQYHRFSGRILT");
    msg.obs_vx.assign("LYLCXZORFTQKZBUAHZHMACRPCJEWDCOLIFSSEMDODAAVNUPYWBMWYVIXCINJWRBBCOWINXRZVMDVKKRTJCMHMKAATANTSICGBWUOXKKHYEIIDWRQRZRGHZPLMLNSDYXQAMFZPGFQXXSHTHXGBKEZLGOUNDTQFYKJMWCEQSVGFJCJQBUUIGEJLOTKFUVP");
    msg.obs_vy.assign("KHDKEANPGXFFUSTLJFKHBXUDJIWPAMMDUVFBGTZCZGSEWIVCLVRNJKPNILMYRCUZHDEXQBTRNQMNZFUMBORZOWGQDARXINVJSQLHGFWXJOXDUNBJOOLFEIK");

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
    msg.setTimeStamp(0.274497077518852);
    msg.setSource(14883U);
    msg.setSourceEntity(208U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(144U);
    msg.ellipse_path_lat = 0.6349849072107006;
    msg.ellipse_path_lon = 0.4944691070250641;
    msg.ellipse_path_z = 0.8266309904208793;
    msg.ellipse_path_a = 0.5703267402505389;
    msg.ellipse_path_b = 0.2904036374126976;
    msg.ellipse_path_c = 0.838063220956632;
    msg.ellipse_path_clockwise = 202U;
    msg.ellipse_path_psi = 0.34016583497975084;
    msg.ellipse_path_z_freq = 0.556270003304503;
    msg.ellipse_path_phi0 = 0.882333927768049;
    msg.ellipse_path_z_phi0 = 0.5399774839534173;
    msg.waypoint_path_lat = 0.4778283630204433;
    msg.waypoint_path_lon = 0.9936181849269629;
    msg.waypoint_path_x.assign("CUGXTBLAQXYWVURMODILBIUIBHSJEHEKSJYTZVRHRPDDWFNLNHMKYDGRXYVNPCYXROZAGLZLZAKVMZAPMAOSUHAWVPVZKAMDQQANFPITSNOCYRTFKSWXHOCEUSNJDBFXDGSFJNCCCLOJOSWXPPOVGOHGAJBQLHMTJKPIXTQIFBDUKWEIJCUEZMNNSVBMCQKYBTTGVGEIGPLPQIVEREUIXZWWDYQBREMSCDNJUAYZWFZQL");
    msg.waypoint_path_y.assign("NYQYTENYFHBEOVDUBSHWDTZUQNCXKGRJEHTODORVFIMBYPIGXQJWVPWLVQTTUKSPCTOMXWAHJMOGNELRZSBRJLXKOAMBTXDDSIAZHNMDQYFTADFBGEFTXHHHVJIFUQLLRJOMSGOCMRVYKQPIWZQJZAGKVYAULPCGQGACSYORUWZCEVLCUNIEXXFHEZAVPMSBESJKJPUGNIYSNXMIZWLUKD");
    msg.waypoint_path_z.assign("CNWJBMAMLYVRASQFSFLGVTSVLCIAWTPBCWMBRFNAFTFYBNLMPLIESWXLYKRYZPVRXKXUCZASOKIWPQWMPCUENGKTOYTXMEQJEQDRCLEDGYZKXGZHOYJVKDKFHJVXWOXQGKBMTJDJSTSYHHPEVTRZEVIHYKDUDQ");
    msg.waypoint_radius = 0.5559161472300226;
    msg.los_lookahead = 0.44560808315130873;
    msg.los_speed = 0.9524121762641728;
    msg.los_gain = 0.618503953133489;
    msg.los_adaptive = 120U;
    msg.form_x = 0.5260785520143402;
    msg.form_y = 0.4845534812799466;
    msg.form_z = 0.27159456244735525;
    msg.form_max_speed = 0.5920614008730034;
    msg.form_gain = 0.38988069194688846;
    msg.oa_radius = 0.8243036080680066;
    msg.oa_cone = 0.6201389177764675;
    msg.oa_hysteresis = 0.9636131603048601;
    msg.obs_lat = 0.6612290046965684;
    msg.obs_lon = 0.7494642412117173;
    msg.obs_x.assign("DMSUGWVZXJDHAZKPHLMJBCUPIFULNOZFRZNJBZAYLUGZGTTHFNTOYSLSWUNCZUYCVAHRHBIVWAEQNKMKZXUVOCJOAWPXSJWBSIRFYMTGBKMKPBCDOQKSZDASYSBPVHDXXHYUISJCIJVYKEGGSAABMMYTMEPFVXMPXFYIQCLTNHEVKQQRJGRWONDDNGGTJQRKVLPCXJWEKOFFZNDQOLTRUTC");
    msg.obs_y.assign("KLBSTXRRMVOMONZDSRHAIGNSYBFCOYOEMASZWACNTMXXVCGEUZEFOQPIGDJ");
    msg.obs_vx.assign("AGUNHIFSVCIEVMSQZISHONTXULKMMGOGNCRUORJONRUMWFGDJJKGKVZJDRNQWQAIRQKJWWBIYXVQXFSWXTVAWKLDUODXGBOEAVARERBYHXPGKYHXHPUKTYIFITMUUVLNZDPQFALJQ");
    msg.obs_vy.assign("OXWADVZNFWFEBNEKTTRKPGJKGQBMZSESUTNBZMIAXMWCOFSIOWPZPRVIGUJIQHDHHCLNPOZHYEFWQOZTCLRPRJZNYKZXYIEAVBMYFGJRQYRRJETKMMDNRVECOXDKYQNXYIKGKEUSQIQVXMDSFPSGLAXYTLNWBHOGBSCUOJZPLSICDPQUFCIAWOMEWDAQTSXJAUGZTTUBHVIGRQDYLNXUBOXAKFAVRHFMDK");

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
    msg.setTimeStamp(0.24830486698828202);
    msg.setSource(439U);
    msg.setSourceEntity(124U);
    msg.setDestination(39544U);
    msg.setDestinationEntity(82U);
    msg.ellipse_path_lat = 0.8844518046729144;
    msg.ellipse_path_lon = 0.7159521134715163;
    msg.ellipse_path_z = 0.2939079978941356;
    msg.ellipse_path_a = 0.28888218493011786;
    msg.ellipse_path_b = 0.9856929192438717;
    msg.ellipse_path_c = 0.8289774336633997;
    msg.ellipse_path_clockwise = 40U;
    msg.ellipse_path_psi = 0.9500042558948862;
    msg.ellipse_path_z_freq = 0.04383926733786958;
    msg.ellipse_path_phi0 = 0.9198239812099783;
    msg.ellipse_path_z_phi0 = 0.20101431164192984;
    msg.waypoint_path_lat = 0.9957427977578941;
    msg.waypoint_path_lon = 0.45589623986013394;
    msg.waypoint_path_x.assign("PNASKMVMNAEJQBBGRYRWYXSCUTBEXXWRSKAWAZXOJBCGCBERQGGXYIYLCYNDOZMEZVMOPIVVKHPXHIETRNJUQFSLJUJBKYHDYVMYSKLTOIBHJEAFDPKPIYZHUMFGJTEJJDHATUHVDUYTTRSWNVZOWLGERZEOHFRMXDBFLMZZUKAQSUANQTITKZQEUIPZLVOFKRF");
    msg.waypoint_path_y.assign("QUZXYAZNQRBWWLOBOYPCK");
    msg.waypoint_path_z.assign("RAJCLAKGVSGXNECVNAMBUWDWSNYJXQPFWRIVVSXWKZZRTBUBJKSMJUURFFEGXNNAFWCRDPXOCI");
    msg.waypoint_radius = 0.8310974891546027;
    msg.los_lookahead = 0.6933920885359524;
    msg.los_speed = 0.6857380086440048;
    msg.los_gain = 0.35609245551640856;
    msg.los_adaptive = 19U;
    msg.form_x = 0.5042980148034356;
    msg.form_y = 0.6507420406354375;
    msg.form_z = 0.6125050373730888;
    msg.form_max_speed = 0.8903000528957684;
    msg.form_gain = 0.6512391414090061;
    msg.oa_radius = 0.09280121388593932;
    msg.oa_cone = 0.10879720502331869;
    msg.oa_hysteresis = 0.35039626442426086;
    msg.obs_lat = 0.6885501603084317;
    msg.obs_lon = 0.05899208951601598;
    msg.obs_x.assign("YPYHPXVBTXWLITPRQGPVNUYNGMFRAUKTQFAVSPBDAYGKSNREUFWQBTOZYVPKHIQCTJ");
    msg.obs_y.assign("AAHIVAHPEKMNPIZHOEFUYUOLDZCFBAYQKYXXMEQBKKXWKGVOTPBWEQJVRGQJKPJRGSDRDZIROMHPJULEPQHHXKJNONYFIEASKLFTZGCQAKLLRXKDVPSZANCYRMMXETQQVOFTBVLDHMALADFNYOSMSUXSLTVNTWFTRZRICSUMIRUZGUHBTXTLWYYPCXVYHWDSOWGEFNVWFNJU");
    msg.obs_vx.assign("VCVVVOTHYDHXYTSLFNMB");
    msg.obs_vy.assign("INMLOKQCGRODYIMSPJTXOONUXKPWYIVQCWVIRAAKZGJHHYEWEFADEBZCLSTNTGZHSBBTUJYBNLQDIVVGEDMITXMUZBZERWFYAHEUDLELREAJGZLODHDSHPIYFTRRTSCVPXANNKQSUNWQCGOBMMLJDMLBTZWPOUFTXJQZABIHPVJDXCKSLQXXMPAMUYVUI");

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
    msg.setTimeStamp(0.2715028661348806);
    msg.setSource(34375U);
    msg.setSourceEntity(238U);
    msg.setDestination(41671U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.4769332663692182);
    msg.setSource(21816U);
    msg.setSourceEntity(31U);
    msg.setDestination(5569U);
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
    msg.setTimeStamp(0.3428299068054279);
    msg.setSource(34511U);
    msg.setSourceEntity(204U);
    msg.setDestination(42896U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.06559092475240214);
    msg.setSource(23975U);
    msg.setSourceEntity(239U);
    msg.setDestination(51261U);
    msg.setDestinationEntity(90U);
    msg.system = 45098U;
    msg.offset = 0.024137725479403405;

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
    msg.setTimeStamp(0.8781356770213353);
    msg.setSource(16492U);
    msg.setSourceEntity(115U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(253U);
    msg.system = 64514U;
    msg.offset = 0.6246365904421504;

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
    msg.setTimeStamp(0.9588981413125155);
    msg.setSource(15423U);
    msg.setSourceEntity(179U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(72U);
    msg.system = 61898U;
    msg.offset = 0.20879890289160452;

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
    msg.setTimeStamp(0.8739727827034229);
    msg.setSource(9181U);
    msg.setSourceEntity(210U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(28U);
    msg.op = 101U;
    msg.id = 812U;

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
    msg.setTimeStamp(0.07773045347044927);
    msg.setSource(24919U);
    msg.setSourceEntity(231U);
    msg.setDestination(53302U);
    msg.setDestinationEntity(83U);
    msg.op = 111U;
    msg.id = 15325U;

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
    msg.setTimeStamp(0.9695967938278652);
    msg.setSource(36434U);
    msg.setSourceEntity(254U);
    msg.setDestination(33960U);
    msg.setDestinationEntity(244U);
    msg.op = 9U;
    msg.id = 24317U;

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
