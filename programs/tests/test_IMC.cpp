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
// IMC XML MD5: 70dadb3410c39c92824c33e3fe3eb09e                            *
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
    msg.setTimeStamp(0.17426283860198966);
    msg.setSource(11778U);
    msg.setSourceEntity(214U);
    msg.setDestination(11727U);
    msg.setDestinationEntity(100U);
    msg.state = 115U;
    msg.flags = 19U;
    msg.description.assign("ZVKXJXGIPLSWPTUONGYDM");

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
    msg.setTimeStamp(0.6323338464724247);
    msg.setSource(5675U);
    msg.setSourceEntity(194U);
    msg.setDestination(1609U);
    msg.setDestinationEntity(148U);
    msg.state = 214U;
    msg.flags = 162U;
    msg.description.assign("MAQQYDBDFFGWRZDPREKCKHLQUJEDNNZRXOAMKIYVRPPKFRBCOSWVXQZAFOFTTZCZKVXNTYTAVZXXEQQJLAWJVEYOHIZJGGMGTMQDILTTXHWIAOOTEKBNQPUSHSGYQESXYYMOZVMR");

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
    msg.setTimeStamp(0.11469459997227371);
    msg.setSource(57652U);
    msg.setSourceEntity(205U);
    msg.setDestination(5401U);
    msg.setDestinationEntity(13U);
    msg.state = 172U;
    msg.flags = 130U;
    msg.description.assign("DYVOTIRLXMVDFFSIUCFDGTIOKLPQIOWNMWFHZYSYUIXJHPKBDHYRCOUJNVQZLQGECVPBHLZRRSZGQGONSMHZPFTZSYMLPNYDXMAOTWNHEJJTUTJHXYUBBKKWNEKERHQBJFFCWTXKXFUYQCMAKVUQONEIDVEMGJIKRGVAUHLMPGNUNLPMDZCLFSBDDAROTVA");

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
    msg.setTimeStamp(0.6940695697593732);
    msg.setSource(47942U);
    msg.setSourceEntity(61U);
    msg.setDestination(26735U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.6736111518054073);
    msg.setSource(24005U);
    msg.setSourceEntity(135U);
    msg.setDestination(5617U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.7691241739818214);
    msg.setSource(16486U);
    msg.setSourceEntity(177U);
    msg.setDestination(6084U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.7183381585265798);
    msg.setSource(58518U);
    msg.setSourceEntity(148U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(103U);
    msg.id = 38U;
    msg.label.assign("ASUKSYNKEFXQEWKVPPWGENBMKCIGYVEIILIVMKVBUTUQZKWGYXVGSVCJBOSILDRBHDHUVZDOACJLZYVDKSCPPAAFRQWWYPLNOPUPSKXTCJSSZQBHEMEHJIYJNJORARWSDZJYOFTXNFDZRHTLMWBBWOBMFCCFNIXRQSGTARUMLZGHZIHGTUCWKLMOYFCZTFJRUNHOXWEEDVENDBQRCXKLPLBGXAPXMYLGUPQDNAQTYQAJHXRTJFG");
    msg.component.assign("CRQMCTENKWQFMSGOPSULAQZDVAAJJKZHSBMNSXZOMMIGJUNVFTIKRINJBDCSSTEKRQAUTFMPCCGDNFCPAWWOYNPBIDFXKZHBNDZHCAETXQGRWIPEZTPYRKBZVDOGBULXQOGQMRBVEQIRLCJVOVSRVIHXUYSANAYREYHGDYUKJPEXSLXMDELLBJQYGSLOWWUKFGYOUFAZMXVOTHXITHOTFIUJPLWXYCLDPBVLFND");
    msg.act_time = 50712U;
    msg.deact_time = 7419U;

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
    msg.setTimeStamp(0.830696855207261);
    msg.setSource(37652U);
    msg.setSourceEntity(207U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(249U);
    msg.id = 247U;
    msg.label.assign("PNNPDFEAWBJNERZFAQBRNVTSAULUKYDWFROWGQTBKOLSZURSNEGSOCQMPTFOFCGUWBTCYHRXZAJJHIFMQUJLFGRBPXYILMWLRPTSXIIHMDQURFYZAKGXEMCGYPMIMTMGJKBRSMEHDERKVTHKCXWZIYNQAQPXBVVSDYWYZUXDPOLZOLONVQPKNTGHWOUECQVIUYDKJDVCONEEDHVBIIOAKGNZXEKFACZWSQX");
    msg.component.assign("YMUWQZXNRILRLIKSHLNYMPIEQRCCVGZTTVXQHXKJKUKLCBDFSAAGIJHFZASPMVJLDFNDULDUVJJIFXRQRCEEOTJVRVJFXQBGLVBGYWCKWSZENUUYHVNWPWXQPRJUTSPTKYSATAZFVYBHGQVWNITGELANGCHGZMNCKYN");
    msg.act_time = 12078U;
    msg.deact_time = 20228U;

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
    msg.setTimeStamp(0.21128749270259417);
    msg.setSource(21459U);
    msg.setSourceEntity(186U);
    msg.setDestination(52208U);
    msg.setDestinationEntity(47U);
    msg.id = 52U;
    msg.label.assign("DYMQZTNBUKWCMJFUBILAQLYAAMVRQWEVDIRUROYHGBPFKWUFXUFTOEXXCCNMBSIIVILBEOHKARVRXZHTHBESUBPLTPLMOMHFFIGWKVCFONMOPPEVYNJDWVFVYBQWBCJGKGJGECWJETNMRYTFIQPKNEXOSAXHGOAILYGKLDUWMZPASLQUNQFNSCC");
    msg.component.assign("OXDOQYNBOZSZSVKXHEMGKMFLVNNLFNRDXJUTFDEDADOSMDKWSLKALYTYVCDWQUREFKTMHUCPTKQHSGZEXYZPQWJCUMWGJHJULUCRPELJKWACSMVVZGIOYKTOFAQOPPPUFGAWFIQVYGNX");
    msg.act_time = 55933U;
    msg.deact_time = 35581U;

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
    msg.setTimeStamp(0.03668352340643921);
    msg.setSource(46081U);
    msg.setSourceEntity(107U);
    msg.setDestination(26067U);
    msg.setDestinationEntity(9U);
    msg.id = 117U;

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
    msg.setTimeStamp(0.501333056131565);
    msg.setSource(40209U);
    msg.setSourceEntity(22U);
    msg.setDestination(22620U);
    msg.setDestinationEntity(9U);
    msg.id = 210U;

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
    msg.setTimeStamp(0.6441767078555103);
    msg.setSource(52704U);
    msg.setSourceEntity(135U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(25U);
    msg.id = 179U;

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
    msg.setTimeStamp(0.18473286623848384);
    msg.setSource(59684U);
    msg.setSourceEntity(150U);
    msg.setDestination(14740U);
    msg.setDestinationEntity(10U);
    msg.op = 159U;
    msg.list.assign("NKGRGBVHATEOTSWPANDLQNRTUMLUVWFQDCOONXODYYMIRFYVEMUNXQXPDKXIHHQOXPMFAWNZPHFTQLGXSBORLJJRMSMMVCMNOERSAYKBCYLJQEGUDSZKPDWULUAWUKQHWIXSAZPCXHVPGDEHSENGPCZBKAHJIOSYJFNFSTJCEDVVRXICVBAFUZ");

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
    msg.setTimeStamp(0.592451734907453);
    msg.setSource(52958U);
    msg.setSourceEntity(22U);
    msg.setDestination(41787U);
    msg.setDestinationEntity(27U);
    msg.op = 222U;
    msg.list.assign("PSWTQBBKEXZIDOMORIABMXEZTNWTHRZPNVPHANFWWITRLNVCHTYSXOZEXNGALFSQVEYTIKKUGQWEKUUJOQBWRCOMRELHZQKFYTPVDIAMFHFMYIISSXAUGKEHIKHLGQMJCRNVCOBWJYYRCMDKDNRWDXRPDJTGAOLBBDLUVJCSAMSUBSIPCZGWVFCMNJMQJWEA");

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
    msg.setTimeStamp(0.9023436617003882);
    msg.setSource(30973U);
    msg.setSourceEntity(33U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(170U);
    msg.op = 222U;
    msg.list.assign("KGJHWLUXNIZEGTGKARVHOHMTZYXYZFYALQBKBUCAPQOPUMDPYJTAJCDXOQONTGPPWHRMCGVGRDSWSSUZLNADWYSZFZCYJFRAEISIELNGYCCSEIKIWJFNYHKXOXRIQMYETIPDISACHJJJFHNXBRUNQWMRQRBZOUSICRNFWJDVVOVMALVPNZOLHVO");

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
    msg.setTimeStamp(0.031320577468953004);
    msg.setSource(54735U);
    msg.setSourceEntity(132U);
    msg.setDestination(47374U);
    msg.setDestinationEntity(189U);
    msg.value = 58U;

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
    msg.setTimeStamp(0.16613869198565567);
    msg.setSource(20188U);
    msg.setSourceEntity(16U);
    msg.setDestination(8988U);
    msg.setDestinationEntity(205U);
    msg.value = 24U;

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
    msg.setTimeStamp(0.5726548195071711);
    msg.setSource(27499U);
    msg.setSourceEntity(147U);
    msg.setDestination(18665U);
    msg.setDestinationEntity(138U);
    msg.value = 11U;

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
    msg.setTimeStamp(0.14749277010396578);
    msg.setSource(23145U);
    msg.setSourceEntity(131U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(71U);
    msg.consumer.assign("MJKPKPGJGLOCVCRMATJBCVDOMLYAQEMSDPPAXNDFVGYLQSNIBIWHDKZTW");
    msg.message_id = 63783U;

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
    msg.setTimeStamp(0.41828263106459995);
    msg.setSource(19334U);
    msg.setSourceEntity(177U);
    msg.setDestination(60501U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("JJJIPBEYQSIYGRSUUYHLHWKTDFRHHNLLOOYOACZBFRIAAYMDGPDHWPNKUDDUJXMSKVFDYCESKTZEEOAKZMCNFCRPDCBCJIRTQQPZGA");
    msg.message_id = 18101U;

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
    msg.setTimeStamp(0.4182775173321417);
    msg.setSource(53169U);
    msg.setSourceEntity(100U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(41U);
    msg.consumer.assign("BGEAOICQTXHXYYZCNBRFHQHRUTTSLPFYAYLCEBPEQBOBZZIHSDFKMUZEQBVQWVRFWRGLZGODSHWJZAJIXOMGWXRPJKBOLPTUISJSOBKEGZCKCVVXQWUIANNYHJPMKFLUGPTXHTOBDWMALYESJQMNCCODBVKVTDHSOMKRRFXJXYWLGTLVMHLUMNLDYRYNGSQTIICCFJNZSEYWNVVPAXZUOHWDPTKMMFAN");
    msg.message_id = 23349U;

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
    msg.setTimeStamp(0.20851718894725668);
    msg.setSource(61826U);
    msg.setSourceEntity(21U);
    msg.setDestination(48452U);
    msg.setDestinationEntity(244U);
    msg.type = 13U;

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
    msg.setTimeStamp(0.450557102537665);
    msg.setSource(44466U);
    msg.setSourceEntity(144U);
    msg.setDestination(48328U);
    msg.setDestinationEntity(153U);
    msg.type = 70U;

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
    msg.setTimeStamp(0.2908150078565943);
    msg.setSource(31892U);
    msg.setSourceEntity(143U);
    msg.setDestination(23727U);
    msg.setDestinationEntity(29U);
    msg.type = 52U;

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
    msg.setTimeStamp(0.6811682324205377);
    msg.setSource(31656U);
    msg.setSourceEntity(159U);
    msg.setDestination(35975U);
    msg.setDestinationEntity(236U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.01631287844272622);
    msg.setSource(2957U);
    msg.setSourceEntity(150U);
    msg.setDestination(1818U);
    msg.setDestinationEntity(232U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.4390665442336139);
    msg.setSource(35208U);
    msg.setSourceEntity(116U);
    msg.setDestination(51147U);
    msg.setDestinationEntity(220U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.20691535591022847);
    msg.setSource(12428U);
    msg.setSourceEntity(223U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(88U);
    msg.total_steps = 174U;
    msg.step_number = 59U;
    msg.step.assign("XFDCNJNGSGZDFOPTJYVJUKEJYONRYRQDXMJILOOCJQFMV");
    msg.flags = 56U;

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
    msg.setTimeStamp(0.9833966099394804);
    msg.setSource(55332U);
    msg.setSourceEntity(103U);
    msg.setDestination(35034U);
    msg.setDestinationEntity(29U);
    msg.total_steps = 135U;
    msg.step_number = 63U;
    msg.step.assign("BCGWOGEASFQKXCZTZGMMDTTZRFNGPHDUEQDWKHRXYVSAAKXUFAGFPHSMVAHUBBEOEQIWNOVNTTMKQGCFYQBWSYPHNGDMSRFYIDWHJOBIMSBAHRJOGXULKKLLXLQURIKTRNJXIJEZMLONYPWUDSTBWMLSTVOYC");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.6523995204042377);
    msg.setSource(42311U);
    msg.setSourceEntity(109U);
    msg.setDestination(19585U);
    msg.setDestinationEntity(175U);
    msg.total_steps = 197U;
    msg.step_number = 229U;
    msg.step.assign("QHXIOHOSYYGQQFODCTPEYAMPNJOPZYHPZRADAABNDCDOATTJIBOXNURVHXUSFHUWXWPCMDSJOZQUWGMJTGMGOSSCNDXMAMETNZ");
    msg.flags = 22U;

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
    msg.setTimeStamp(0.13799392003849342);
    msg.setSource(14493U);
    msg.setSourceEntity(37U);
    msg.setDestination(37510U);
    msg.setDestinationEntity(117U);
    msg.state = 239U;
    msg.error.assign("GFWTAJODTERIXIYSPIRKLEDBJWTZQCHKWKHLMX");

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
    msg.setTimeStamp(0.8325443427624458);
    msg.setSource(50017U);
    msg.setSourceEntity(30U);
    msg.setDestination(50227U);
    msg.setDestinationEntity(56U);
    msg.state = 62U;
    msg.error.assign("HYFVAYCAYTNJBTTWZMSSWFSCKLVEEIPUDXOGUJMQTXYYPJEJFRBKDFSOXBLJUBYELXUBFHVMXJCKJQDNRUHJBTHOTRRSQAUDGWQYCHCZVTXFHURTIXWLHITMOPBZKVFZLJNDQCQIGMCPIUQVYENMPBCANCGHKOPLUEWYMRZQLDKAWEXRNRKFKBWFEASNZGZVEOYQMDDAPOHVKXOSZGDXWLMAIOSEDKCJBUIOTNNVIPGAILRAWM");

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
    msg.setTimeStamp(0.9166694429857022);
    msg.setSource(27516U);
    msg.setSourceEntity(252U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(44U);
    msg.state = 5U;
    msg.error.assign("YDOTOXLTHCPCMTHMKKIOGZQWNPZTZFEJQWNXNFPFTJPHDYUJBALBPIFALDLXYSIHANUWOZASICMJYIBSIHVWQDVERXYJCSCIVUTPKODIUGLFSCFZOEYMSCXEGRYVRMWR");

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
    msg.setTimeStamp(0.917523448191639);
    msg.setSource(51197U);
    msg.setSourceEntity(227U);
    msg.setDestination(9570U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.4648068790149814);
    msg.setSource(3554U);
    msg.setSourceEntity(232U);
    msg.setDestination(19291U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.0917531550048738);
    msg.setSource(1468U);
    msg.setSourceEntity(171U);
    msg.setDestination(58242U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.33388434314094095);
    msg.setSource(56100U);
    msg.setSourceEntity(229U);
    msg.setDestination(35108U);
    msg.setDestinationEntity(96U);
    msg.op = 230U;
    msg.speed_min = 0.10154180136902358;
    msg.speed_max = 0.6152345428579538;
    msg.long_accel = 0.8851839107722614;
    msg.alt_max_msl = 0.7601731764608312;
    msg.dive_fraction_max = 0.6389316977779189;
    msg.climb_fraction_max = 0.21735251037559633;
    msg.bank_max = 0.7632259450483498;
    msg.p_max = 0.8595147096401894;
    msg.pitch_min = 0.4970657341789665;
    msg.pitch_max = 0.3453414290733432;
    msg.q_max = 0.8384061513791592;
    msg.g_min = 0.48366950197752057;
    msg.g_max = 0.4605713362633951;
    msg.g_lat_max = 0.13896966552906742;
    msg.rpm_min = 0.6604179486531393;
    msg.rpm_max = 0.7086997406929384;
    msg.rpm_rate_max = 0.8985461606835385;

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
    msg.setTimeStamp(0.9869519091949892);
    msg.setSource(55788U);
    msg.setSourceEntity(104U);
    msg.setDestination(30301U);
    msg.setDestinationEntity(84U);
    msg.op = 78U;
    msg.speed_min = 0.6521782927099733;
    msg.speed_max = 0.28476811604621466;
    msg.long_accel = 0.8176598431219488;
    msg.alt_max_msl = 0.5128120324715181;
    msg.dive_fraction_max = 0.6087058429580747;
    msg.climb_fraction_max = 0.9788556980337285;
    msg.bank_max = 0.6322142705942256;
    msg.p_max = 0.8999862345224077;
    msg.pitch_min = 0.5258001714608148;
    msg.pitch_max = 0.608304760069974;
    msg.q_max = 0.41800894515956255;
    msg.g_min = 0.8751176898964691;
    msg.g_max = 0.5183886200056216;
    msg.g_lat_max = 0.6349856924211418;
    msg.rpm_min = 0.2979395656786914;
    msg.rpm_max = 0.6882399089332584;
    msg.rpm_rate_max = 0.38967682934778447;

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
    msg.setTimeStamp(0.012380767538977322);
    msg.setSource(54691U);
    msg.setSourceEntity(144U);
    msg.setDestination(56920U);
    msg.setDestinationEntity(174U);
    msg.op = 7U;
    msg.speed_min = 0.15632585463842374;
    msg.speed_max = 0.03240984575907935;
    msg.long_accel = 0.19519986254036825;
    msg.alt_max_msl = 0.45202116292051875;
    msg.dive_fraction_max = 0.9206949325588626;
    msg.climb_fraction_max = 0.5116100592547628;
    msg.bank_max = 0.4595969782954694;
    msg.p_max = 0.8088954551069542;
    msg.pitch_min = 0.5225123565614122;
    msg.pitch_max = 0.6426377740986999;
    msg.q_max = 0.5761730654905531;
    msg.g_min = 0.8558717780842043;
    msg.g_max = 0.11147557549741383;
    msg.g_lat_max = 0.8588912341621551;
    msg.rpm_min = 0.05146301028593303;
    msg.rpm_max = 0.545570840853412;
    msg.rpm_rate_max = 0.9249646577838632;

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
    msg.setTimeStamp(0.08834591559183691);
    msg.setSource(49845U);
    msg.setSourceEntity(212U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.4367436131887644);
    msg.setSource(6876U);
    msg.setSourceEntity(123U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.9640801942940758);
    msg.setSource(24777U);
    msg.setSourceEntity(43U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(131U);
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 4163158295U;
    tmp_msg_0.lat = 0.8875643859338502;
    tmp_msg_0.lon = 0.033237693877825714;
    tmp_msg_0.height_ell = 0.7460087588707262;
    tmp_msg_0.height_sea = 0.7909542762021343;
    tmp_msg_0.hacc = 0.4297676406577021;
    tmp_msg_0.vacc = 0.4141122959168204;
    tmp_msg_0.vel_n = 0.7814954421489977;
    tmp_msg_0.vel_e = 0.360472083516705;
    tmp_msg_0.vel_d = 0.3570557650013829;
    tmp_msg_0.speed = 0.3001572954227184;
    tmp_msg_0.gspeed = 0.8469012112147221;
    tmp_msg_0.heading = 0.8713155369954813;
    tmp_msg_0.sacc = 0.4366148060441216;
    tmp_msg_0.cacc = 0.00993357573495579;
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
    msg.setTimeStamp(0.6657237654045957);
    msg.setSource(60078U);
    msg.setSourceEntity(26U);
    msg.setDestination(52821U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.0172829443200192;
    msg.lon = 0.9901490459784245;
    msg.height = 0.8546035776963312;
    msg.x = 0.8176736156784672;
    msg.y = 0.6139820501010003;
    msg.z = 0.6027861997171556;
    msg.phi = 0.23496561207778066;
    msg.theta = 0.19558595584751226;
    msg.psi = 0.5500730448739499;
    msg.u = 0.665889078608304;
    msg.v = 0.9006713469162013;
    msg.w = 0.15253092645085942;
    msg.p = 0.7594563331374637;
    msg.q = 0.24007231312890964;
    msg.r = 0.6777917291327047;
    msg.svx = 0.9789989610893741;
    msg.svy = 0.9762021628629044;
    msg.svz = 0.05159127995373047;

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
    msg.setTimeStamp(0.013782165741270891);
    msg.setSource(30959U);
    msg.setSourceEntity(193U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.8620964960867975;
    msg.lon = 0.22321007490639433;
    msg.height = 0.2152525105904496;
    msg.x = 0.3275243434206355;
    msg.y = 0.5915193023521309;
    msg.z = 0.22836220661523632;
    msg.phi = 0.5261103652698262;
    msg.theta = 0.9401192138277601;
    msg.psi = 0.03755047336091821;
    msg.u = 0.3743451833364888;
    msg.v = 0.10061016414105928;
    msg.w = 0.3858405658936329;
    msg.p = 0.1705182720599736;
    msg.q = 0.879376219189023;
    msg.r = 0.05538537475149341;
    msg.svx = 0.6220694044173957;
    msg.svy = 0.8467863547618332;
    msg.svz = 0.7137664923471002;

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
    msg.setTimeStamp(0.38068009090164623);
    msg.setSource(26410U);
    msg.setSourceEntity(225U);
    msg.setDestination(7129U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.3792735547161251;
    msg.lon = 0.6396580779551236;
    msg.height = 0.5838877204365214;
    msg.x = 0.983417044658316;
    msg.y = 0.8503633501347795;
    msg.z = 0.17077559206198067;
    msg.phi = 0.30964425398351114;
    msg.theta = 0.60142465364501;
    msg.psi = 0.05913078731168131;
    msg.u = 0.6939827629719617;
    msg.v = 0.22409731570214353;
    msg.w = 0.2557983222867529;
    msg.p = 0.4820537202808802;
    msg.q = 0.8189935066178802;
    msg.r = 0.5783854594941891;
    msg.svx = 0.5929338921157177;
    msg.svy = 0.13554691438462374;
    msg.svz = 0.32337302334553375;

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
    msg.setTimeStamp(0.4323022332440415);
    msg.setSource(43242U);
    msg.setSourceEntity(46U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(45U);
    msg.op = 173U;
    msg.entities.assign("WEKGNFAJWMPXIMRLBKRLJZKNTPTSINMCDHWQSZL");

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
    msg.setTimeStamp(0.6398917199666826);
    msg.setSource(63321U);
    msg.setSourceEntity(88U);
    msg.setDestination(62999U);
    msg.setDestinationEntity(14U);
    msg.op = 238U;
    msg.entities.assign("FMEYZSNLYBKEPEFRVFDNZQITEVHQIDJSJMJJVHGTGTWFHZDQABMONEMAXIRTXNVFKDMAPZYFXRLTOGONVMIMOPYZJRB");

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
    msg.setTimeStamp(0.7615050714061349);
    msg.setSource(37033U);
    msg.setSourceEntity(88U);
    msg.setDestination(61708U);
    msg.setDestinationEntity(54U);
    msg.op = 3U;
    msg.entities.assign("ZVKIBCHAOFXOXLBPGEHCMHNWLKYGGZKCCCFIGGLWFZWUYUWUJTQSCMWJCUWRDTOJEIPBQDRRFURDKORXUZWVCGTMLHFBOGYHINQUNZYRSSTBPH");

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
    msg.setTimeStamp(0.7803046977232401);
    msg.setSource(28476U);
    msg.setSourceEntity(120U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(170U);
    msg.type = 68U;
    msg.speed = 11222U;
    const char tmp_msg_0[] = {-111, 119, 68, 11, -68, 123, -21, 117, 109, -30, -52, 107, 94, 54, 116};
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
    msg.setTimeStamp(0.871243548096844);
    msg.setSource(34954U);
    msg.setSourceEntity(122U);
    msg.setDestination(19487U);
    msg.setDestinationEntity(69U);
    msg.type = 10U;
    msg.speed = 63640U;
    const char tmp_msg_0[] = {102, 78, 38, 37, 56, -19, 87, 3, -16, 64, -62, -20, -118, 107, -48, -79, 79, 85, -20, -87, -77, -95, -21, 94, -61, 59, 15, 73, 6, 31, 13, -108, 23, 63, 116, 79, -98, 121, 108, 24, -38, 104, 96, 46, -5, -125, 28, -50, 91, 64, -94, -27, 59};
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
    msg.setTimeStamp(0.16559277975828546);
    msg.setSource(18569U);
    msg.setSourceEntity(184U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(190U);
    msg.type = 24U;
    msg.speed = 43713U;
    const char tmp_msg_0[] = {93, 123, 65, -64, 1, 97, -86, 41, -78, 27, 1, 0, -81, 119, 79, 31, -44, 35, 32, -105, -26, 8, -34, -12, -115, 12, -114, -47, 122, -122, -119, 62, 100, 92, -37, 39, 11, -18, 118, 74, -64, 59, -109, 42, 15, -36, -4, 50, -26, -4, 104, 68, -38, 81, 28, -10, 64, 19, -8, -48, 33, 56, -58, 32, 89, 43, 3, 54, 63, -42, 60, -4, 0, -90, -11, -95, -118, -69, 18, -95, 68, 117, 118, -40, 52, 61, -78, 37, -102, -118, -128, -94, -84, -39, 47, -68, -58, 42, 91, 96, -71, -81, -11, -60, 86, 38, 79, -5, -62, -90, -6, -113, 122, 13, 64, 55, -17, 32, 120, -68, 116, -21, -69, -80, -115, -117, -28, 69, -123, -14, 37, -43, -125, 12, 117, -94, -44, 97, 75, 59, -93, 41, 85, -80, -38, -80, -32, -74, -3, 21, 77, 81, -32, -45, 64, -51, 89, 52, -108, -89, -69, 17, 114, -30, -65, -98, 18, -93, 96, -35, 96, 121, 7, 77, -65, 97, -119, 67, 33};
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
    msg.setTimeStamp(0.26792359892504836);
    msg.setSource(47024U);
    msg.setSourceEntity(76U);
    msg.setDestination(27352U);
    msg.setDestinationEntity(55U);
    msg.op = 49U;
    msg.tas2acc_pgain = 0.23348641518953694;
    msg.bank2p_pgain = 0.19221135066474537;

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
    msg.setTimeStamp(0.5530924811012452);
    msg.setSource(30682U);
    msg.setSourceEntity(12U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(101U);
    msg.op = 11U;
    msg.tas2acc_pgain = 0.05236716118461515;
    msg.bank2p_pgain = 0.15029194853412942;

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
    msg.setTimeStamp(0.7094506686389681);
    msg.setSource(37943U);
    msg.setSourceEntity(48U);
    msg.setDestination(19740U);
    msg.setDestinationEntity(153U);
    msg.op = 252U;
    msg.tas2acc_pgain = 0.4939947593516034;
    msg.bank2p_pgain = 0.8113658971726885;

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
    msg.setTimeStamp(0.6216391949669685);
    msg.setSource(30429U);
    msg.setSourceEntity(241U);
    msg.setDestination(54333U);
    msg.setDestinationEntity(225U);
    msg.available = 1579205911U;
    msg.value = 101U;

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
    msg.setTimeStamp(0.91845960689245);
    msg.setSource(58998U);
    msg.setSourceEntity(197U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(171U);
    msg.available = 2088265093U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.14280705831990403);
    msg.setSource(42163U);
    msg.setSourceEntity(92U);
    msg.setDestination(34537U);
    msg.setDestinationEntity(233U);
    msg.available = 3180339285U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.21445941355987086);
    msg.setSource(39748U);
    msg.setSourceEntity(49U);
    msg.setDestination(45913U);
    msg.setDestinationEntity(12U);
    msg.op = 113U;
    msg.snapshot.assign("XAZWOVKFPVNBXNKWELMGUYFSNJAMDWQTBNYSUSFEDVUVADEPCBWTBQTUSBAXIVYFFWMWMPXDMES");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.3457435137079041;
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
    msg.setTimeStamp(0.6405866067541457);
    msg.setSource(48635U);
    msg.setSourceEntity(169U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(123U);
    msg.op = 122U;
    msg.snapshot.assign("IPEPTXSYOUGYFRJOZJEJJAAURQDIDQUKAHSCCQKVKXRIVUCLKOZHENHTBGRMMAEFSFVMWBFJFYBZQPYSNTXFQDCSBSWZNVSAWNMYMGGRJHOBNOQIXIPDASGTYMVPQMQWZUBNMRVFCHTFFCKUJCODYGLVNHZDGDJJVWWXLMGKODHFBEIKCWOPBHQEMY");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.61746754230277;
    tmp_msg_0.bias_r = 0.9826713278672343;
    tmp_msg_0.cog = 0.048419048822809785;
    tmp_msg_0.cyaw = 0.6066081735111571;
    tmp_msg_0.lbl_rej_level = 0.8283679949929104;
    tmp_msg_0.gps_rej_level = 0.4847579910227975;
    tmp_msg_0.custom_x = 0.8141691660154412;
    tmp_msg_0.custom_y = 0.28885394578769363;
    tmp_msg_0.custom_z = 0.7754149677152252;
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
    msg.setTimeStamp(0.12136945654537645);
    msg.setSource(4606U);
    msg.setSourceEntity(14U);
    msg.setDestination(36280U);
    msg.setDestinationEntity(151U);
    msg.op = 184U;
    msg.snapshot.assign("PBZLPZRLASWIMAFLNROQJIJEHMULHHZRAQYHGJUKBRFPCQCXCWSFPUNCONUBGQTDOVVZTWEDSUVNYZXYVCRCQYLFWESNMQLJBTBPYBOISIZDEBBZVTHXAJRYQEOKWDWEBZPXKNFCFGDDYKWJWRHGYBXEHKHOKWFXXDMKMSGLPNQFNROKUGTTACKPJ");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 61062U;
    tmp_msg_0.lat = 0.5326445572430095;
    tmp_msg_0.lon = 0.8425470020758701;
    tmp_msg_0.speed = 0.8314485378237874;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.custom.assign("SXFKIHMPCKDDBITLGWQWQXPSENURZENJJRLUGSNGHOQGWBVMXNJZBQKENWBVTRPCMYGUCPISAWXPNFBAROSTYEPB");
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
    msg.setTimeStamp(0.09888013821361707);
    msg.setSource(7285U);
    msg.setSourceEntity(179U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(242U);
    msg.op = 106U;
    msg.name.assign("NLTBNXAVNGLXSAVFDZBTJFQKSPQXRHYZPBNFJYUNYFVKOFYCEPRKRBUUDEEMSJPDZMWCDTBHKKVCBBZRLHCELLMIXIWTBECMAOGDAOHKZFGEINOQXVJZQZGHRYFMEVMBZQDTGUZLGSXADUFITULHXYEDPUCYIORCAPJHHUKWKPGQWTIJLAOESQWAURKSWTEYDDFJKMZGIGRUGNYVMVPTIQNIJXXSNHCXTNMOPQYSCWVIBCWFPOJRLSWVAM");

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
    msg.setTimeStamp(0.9148511672062989);
    msg.setSource(59366U);
    msg.setSourceEntity(146U);
    msg.setDestination(4040U);
    msg.setDestinationEntity(235U);
    msg.op = 136U;
    msg.name.assign("QXQIYCFITFOVXHPKUPJSECPMOXXZKUBLWJLTSETLNJJLKNBAKGRDYDIGOPMOFCRBXVJRAKSM");

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
    msg.setTimeStamp(0.31003623246889744);
    msg.setSource(14261U);
    msg.setSourceEntity(187U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(73U);
    msg.op = 253U;
    msg.name.assign("YZQSFHPXQSUIOQLEIROCOGDDMBPPTPQUNGQUILJJRSAAUTFMFDBAUIZWYSXOVYWGAPVYFVOBMHDGPTRCVBJBICJKRPILRKHKMRAKMCXAOBXEVQJXWSELZJFSUHGGGMZWTXKIFSVLXZQVOONNBDXFAZEATZRYUPYJIHOJLVQBZEXVMWEYPMEEDSKHGWLQLAYDUDFGZCJHWNLHGAUHKTSNNNNQTJDRFCERWWTSNYCMTKCYBTH");

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
    msg.setTimeStamp(0.5944153386551605);
    msg.setSource(38337U);
    msg.setSourceEntity(19U);
    msg.setDestination(34900U);
    msg.setDestinationEntity(93U);
    msg.type = 81U;
    msg.htime = 0.497013908066931;
    msg.context.assign("JDLGZRENACERAPOSMLVKZYJVTPAOFGIOAHDISKELUDKKRVUSQLEMMIFMQBJPJEYTTYEXDIDBWCPVYRMPSTHTBRRCHBZCYZGOKFYAENUWQPMCNUTSQUVUDHTCANYOGKUVWAPVJLZIURFIHOGXOAZVNBNXXJDL");
    msg.text.assign("AJGLYHTFJTQVSMFPOYLKRIKMTXXGENCBNCCZRAZPYEOUWGKDMLTXTKUKQAS");

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
    msg.setTimeStamp(0.4350496058745471);
    msg.setSource(56636U);
    msg.setSourceEntity(196U);
    msg.setDestination(16131U);
    msg.setDestinationEntity(146U);
    msg.type = 25U;
    msg.htime = 0.6619575408440311;
    msg.context.assign("BOJCLAWLWDJHZFQAMICLPWCRFZAWYPGITNIYKJPUMNRZXOEOKHUQTVQSROVBUCOHXLDIDBEBRUBOKYJENQVYERMDHVLMKWDHEQESXISSYACIMRHVXKTQQGWGDSPZRHPUSA");
    msg.text.assign("DMHRPTEHIPHAFKMAFWKFVJWBG");

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
    msg.setTimeStamp(0.4030697434537569);
    msg.setSource(59204U);
    msg.setSourceEntity(63U);
    msg.setDestination(1040U);
    msg.setDestinationEntity(210U);
    msg.type = 111U;
    msg.htime = 0.923770358956402;
    msg.context.assign("PXJOORBDQEADUBCMYRYUCVJGPPRUBWLTLTKUWDAEQIYQOGLNHJIVPSJUMNLCLQYIAKSMUCOLVKZMXLRIWONUXOVWVBEFMRCENHAZXCJXAFIVSYDTEEBEBJMXWDVDZQYPFACNHVZLZYHGZNGYESFJDKPHRQBQQDISZMQDFKCXDMKUJTTGSLWEHHTOLIBSZSJMITNEFFPPFON");
    msg.text.assign("CXNRAQOYLJJKVTUHOGVVZTBKUZRSPXIQZSFVDAHXBXKEKIRGUNGXDDRYMDYYWQDMFPTFZLDNATKCVZLTUIQESUJXSSJYNGSHLFOAOXCNWIQQWPYQXLEONEPAWKGZVI");

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
    msg.setTimeStamp(0.9662634066403654);
    msg.setSource(39496U);
    msg.setSourceEntity(236U);
    msg.setDestination(46647U);
    msg.setDestinationEntity(164U);
    msg.command = 239U;
    msg.htime = 0.5089088586206946;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 213U;
    tmp_msg_0.htime = 0.6588847087737324;
    tmp_msg_0.context.assign("CBBAYTUWDZQYNYLJFWYBSUHOCWZRIMUPGRLHMOGHCEIEGITZIIQCBARH");
    tmp_msg_0.text.assign("VTJFCGISJLYIMGPUPMAPVHCREZVWMEVNIUICJSKDMUTIOGAZKOWKSRXXXCERBXJVMWPQLFOEGJBATASUFZOZPCPUWHWQLPDKOSWSMLGQLADINJQKELMAUGIXTGRMSQNACEPMKTYVUKHBWYKYBZHHISVAUHCYVDEXASBFCNZLBQTJWQTNKXYDVNOQLOHGRDHBHHYENVYFFFJTRRDFXUJCBBQ");
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
    msg.setTimeStamp(0.07347992515718171);
    msg.setSource(48174U);
    msg.setSourceEntity(139U);
    msg.setDestination(719U);
    msg.setDestinationEntity(181U);
    msg.command = 254U;
    msg.htime = 0.14560922112948105;

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
    msg.setTimeStamp(0.3874985290466627);
    msg.setSource(27404U);
    msg.setSourceEntity(23U);
    msg.setDestination(2976U);
    msg.setDestinationEntity(30U);
    msg.command = 80U;
    msg.htime = 0.6862335529683616;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 195U;
    tmp_msg_0.htime = 0.6894301118811798;
    tmp_msg_0.context.assign("IBWIHTJZAJQNUFASGYTMCWCWKYCLKTQJBHCKKOFNLIRSSLKBBOWUQJTPMYBZSPWPQRFBJEESQZNQZTILGXFWOGVUIEEYDDGEKJABUFMRHZPAGLFXOMLAXUEANYWUTREMERCSPAWUJHOAKRVDOVSSNNNGCMDMYHMXHTGVZXVHYKXFYGPWHODGROIVYNMNQSFIIAVTBOVPQLUMRZCCGTUUBDQJZOJV");
    tmp_msg_0.text.assign("AVJNYCEELBPQLOYFDBGWXOGSTFMRUQLOSRNCVSEKFQRTHKMGNGBCPTEWAQGLLYGVXBPZAXLVSPYIOQWPXJQMDHBJQKFHSGNZXKAKYBCXITMUHOOYPIDRADOOBWUPOPZNHUFCEHJGMZLIBVWYWFBPSDUKRESITFSDTVFXQJCJDNECZGAIJHDZIVCZUHOZNMRLRWHWJTTEIZYXECAMDWLSRANBUMEKQVNRYFSVYJJCMQXLKKAVUUKF");
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
    msg.setTimeStamp(0.23461946744545337);
    msg.setSource(7667U);
    msg.setSourceEntity(49U);
    msg.setDestination(61523U);
    msg.setDestinationEntity(174U);
    msg.op = 160U;
    msg.file.assign("IQHVFXXLBMAGCCVJJNHILQFFLQRAMMCLEPOVVCJBRNVMEQSWDTTZWFYFUUWOWUSZWZYPRXVOAUKFNUVDJURHQBELFGKQEKIKRELYGCKDZKAGSBAZGIPKTBOWHJXWOZQTLTAGTPCNJGSJNBNWBQHZPAM");

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
    msg.setTimeStamp(0.31352896486392356);
    msg.setSource(51467U);
    msg.setSourceEntity(143U);
    msg.setDestination(5399U);
    msg.setDestinationEntity(135U);
    msg.op = 101U;
    msg.file.assign("YFSRNUKVYSNKLTEFXJERAQLUIWQORAJFLCUYWUCTQDDCSAEMSYBVIMBVQSDDRTZMSREKWGZPTFKXHBVZHDJCEJKGWNNRUDHMIUYPKXPWMPZIJIXMEQFDKFSNXVPHVUGOTDZXMGOFAJHQVBPYGFPJFWE");

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
    msg.setTimeStamp(0.7535931090351786);
    msg.setSource(11312U);
    msg.setSourceEntity(107U);
    msg.setDestination(16348U);
    msg.setDestinationEntity(101U);
    msg.op = 174U;
    msg.file.assign("MYHDLCAVZQBLINQYXYFNFXPEKVOIHWPFKCCLZXSLOVSGXZUOAQZCTDTHNSIVFPOZFUNONCMIOPJESTWCMQKPMNFDLRKBYCTBVOAUSRJLSGPUNZKYYUMNGPCRIEKL");

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
    msg.setTimeStamp(0.2341144170508772);
    msg.setSource(20818U);
    msg.setSourceEntity(16U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(184U);
    msg.op = 33U;
    msg.clock = 0.3797542691224065;
    msg.tz = -28;

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
    msg.setTimeStamp(0.44218722822579537);
    msg.setSource(37422U);
    msg.setSourceEntity(65U);
    msg.setDestination(49517U);
    msg.setDestinationEntity(33U);
    msg.op = 38U;
    msg.clock = 0.5879815571314118;
    msg.tz = -33;

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
    msg.setTimeStamp(0.7146098585556133);
    msg.setSource(29364U);
    msg.setSourceEntity(101U);
    msg.setDestination(27106U);
    msg.setDestinationEntity(17U);
    msg.op = 70U;
    msg.clock = 0.18847976332790384;
    msg.tz = -14;

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
    msg.setTimeStamp(0.20861129863168992);
    msg.setSource(12831U);
    msg.setSourceEntity(64U);
    msg.setDestination(40199U);
    msg.setDestinationEntity(3U);
    msg.conductivity = 0.9706042302862654;
    msg.temperature = 0.8198026008603392;
    msg.depth = 0.6006213724261374;

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
    msg.setTimeStamp(0.14661065672831464);
    msg.setSource(48911U);
    msg.setSourceEntity(69U);
    msg.setDestination(16023U);
    msg.setDestinationEntity(117U);
    msg.conductivity = 0.3096153985347355;
    msg.temperature = 0.855768238652347;
    msg.depth = 0.27910972172746473;

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
    msg.setTimeStamp(0.696287872766977);
    msg.setSource(32015U);
    msg.setSourceEntity(192U);
    msg.setDestination(19432U);
    msg.setDestinationEntity(229U);
    msg.conductivity = 0.13456576265966746;
    msg.temperature = 0.09458713063019542;
    msg.depth = 0.6972617104585316;

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
    msg.setTimeStamp(0.8437960985787797);
    msg.setSource(9020U);
    msg.setSourceEntity(240U);
    msg.setDestination(7779U);
    msg.setDestinationEntity(233U);
    msg.altitude = 0.7696449661151793;
    msg.roll = 12960U;
    msg.pitch = 58064U;
    msg.yaw = 23447U;
    msg.speed = -11498;

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
    msg.setTimeStamp(0.8571989539250885);
    msg.setSource(62892U);
    msg.setSourceEntity(162U);
    msg.setDestination(27877U);
    msg.setDestinationEntity(22U);
    msg.altitude = 0.6053742220573101;
    msg.roll = 39302U;
    msg.pitch = 65202U;
    msg.yaw = 17905U;
    msg.speed = -11544;

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
    msg.setTimeStamp(0.06586863121644426);
    msg.setSource(51124U);
    msg.setSourceEntity(96U);
    msg.setDestination(27740U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.8741943983222976;
    msg.roll = 19377U;
    msg.pitch = 12785U;
    msg.yaw = 6315U;
    msg.speed = 15903;

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
    msg.setTimeStamp(0.8409751118910392);
    msg.setSource(51221U);
    msg.setSourceEntity(71U);
    msg.setDestination(369U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.4341616471415841;
    msg.width = 0.2341092506164787;
    msg.length = 0.8906465960792918;
    msg.bearing = 0.5046754367820774;
    msg.pxl = 17831;
    msg.encoding = 119U;
    const char tmp_msg_0[] = {67, 89, -79, 14, -17, -77, -110, 26, -11, 17, -13, 25, 32, 8, -119, -1, 0, 95, 0, -111, 92, 65, -100, -125, 57};
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
    msg.setTimeStamp(0.019373010111951805);
    msg.setSource(18474U);
    msg.setSourceEntity(88U);
    msg.setDestination(11184U);
    msg.setDestinationEntity(117U);
    msg.altitude = 0.6639452479538965;
    msg.width = 0.3298317505854025;
    msg.length = 0.505887153634435;
    msg.bearing = 0.5162907499638654;
    msg.pxl = 9972;
    msg.encoding = 19U;
    const char tmp_msg_0[] = {-118, 4, -109, 124, 42, 5, 59, 16, -95, 95, 5, -125, -90, 66, 54, 110, 6, -74, -105, -41, 61, 9, -46, -104, 126, -113, 68, -84, -44, -112, -87, -22, -31, 19, -25, -78, -55, -59, 71, 4, -34, 34, -22, 97, 46, 74, 36, 113, 109, 102, -96, 110, -31, -73, 14, 86, 62, 41, 84, 118, 14, 72, -82, -111, 53, -116, -4, -128, -67, 35, -22, 121, 7, 96, 71, -53, -113, -23, -20, 119, 122, -48, 44, 59, -1, 125, -9, -111, -74, 6, -37, 52, -51, -98, 55, -65, 51, -16, -66, 118, 107, -105, -97, 124, 117, 102, -34, -116, -77, -103, -20, 43, -113, 5, 15, -107, -85, 54, -111, 121, -97, -121, 90, 33, 122, -61, -26, 56, -77, 125, 62, -88, -5, 46, 9, 74, 94, 80, -51, 115, 48, 78, 101, 122, 110, 55, 41, 96, 51, 77, -29, 116, -28, 0, 65, -111, -57, 103, -110, 122, 75, 5, 12, -62, -33, -48, -37, -67, -24, 61, -47, 22, -58, -51, 51, 79, -90, 95, 40, 24, -44, -122, -103, -65, -109, 11, 33, 120, -28, 104, 81, 37, 51, 93, -67, -25, 101, 54, -104, 0, 88, 47, -55, 97, -32, 40, -78, -28, 106, -128, 38, 49, 86, 14, 8, 105, 71, 104, -36, -30, 58, -24, -79, 85, -85, 3, -67, 101, 3, 9, 11, 10, 61, 2, -2, 2, 52, 12, -18, 6, 111, -83, 105, 96, 59, -107, 75, -39, -36};
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
    msg.setTimeStamp(0.7980365572740314);
    msg.setSource(58650U);
    msg.setSourceEntity(126U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(14U);
    msg.altitude = 0.6277303126813429;
    msg.width = 0.4893600529976927;
    msg.length = 0.3860922244746767;
    msg.bearing = 0.14568293792946618;
    msg.pxl = 12291;
    msg.encoding = 241U;
    const char tmp_msg_0[] = {-5, -53, -109, 122, 33, -98, 43, 25, -109, 5, -83, 121, 11, 123, -71, 119, 70, 50, -32, 104, 57, 82, -118, -112, 108, 94, -60, -90, 121, -103, 67, -32, 77, 60, 68, 33, -49, 1, -31, -44, 62, -24, 74, -51, 98, -110, 84, 115, 84, 123, -75, 31, 0, -122};
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
    msg.setTimeStamp(0.37973400842344684);
    msg.setSource(28935U);
    msg.setSourceEntity(1U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(226U);
    msg.text.assign("XYUOMYLNKSLZAGFECALUGOIAESTTQYXEMJVRATKZIUQIMMRUNVKLOHSGVVDWZJKNLBWGUPCQHPJIHKFJHDQTFLBUBDTSCRQCNFZJCAHSOTEGPGNYUJFRVXCIVPYOGHIIOGZDNVDHBCXZWCVPIMDKXUEAQBCXESEXYANWPPIQXSZWAJGLZJFDMRNPVKNRTFZMWMKTRMJHHAPULHDJPRWYEDLBOKZBROYVSGXUQKXSWBIOEWFSDQ");
    msg.type = 40U;

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
    msg.setTimeStamp(0.7596317764065634);
    msg.setSource(40212U);
    msg.setSourceEntity(59U);
    msg.setDestination(7190U);
    msg.setDestinationEntity(71U);
    msg.text.assign("YJGBENJRLWTNOJXQQIDIOXPSBWHOIURAMZAXJYNPRHJNWVVNWGSASRSNKEDIGBQXQTWYNBLDBEDLOGZCFFXKUVMURNTPLYOYRHKGIEIFBUYQGZKZCMOQYJZVFR");
    msg.type = 115U;

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
    msg.setTimeStamp(0.5040138353391322);
    msg.setSource(48600U);
    msg.setSourceEntity(155U);
    msg.setDestination(55095U);
    msg.setDestinationEntity(190U);
    msg.text.assign("PBEWXQNTDDBGADHRKCPQORDFJQWJSPPJKSWWDCVCYXHCHIOXMSTULHONJUMLIQQJBHZMTHNGHOLGODBJWMVVQFXEGEEUGIUYACRN");
    msg.type = 41U;

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
    msg.setTimeStamp(0.6338085028339453);
    msg.setSource(5010U);
    msg.setSourceEntity(244U);
    msg.setDestination(50828U);
    msg.setDestinationEntity(11U);
    msg.parameter = 211U;
    msg.numsamples = 0U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 903U;
    tmp_msg_0.avg = 0.24568800655169154;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.506786778730644;
    msg.lon = 0.4198243650022365;

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
    msg.setTimeStamp(0.2893290059088408);
    msg.setSource(14977U);
    msg.setSourceEntity(166U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(77U);
    msg.parameter = 247U;
    msg.numsamples = 107U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 46935U;
    tmp_msg_0.avg = 0.36944347948058975;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8155407973534198;
    msg.lon = 0.34522425908376075;

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
    msg.setTimeStamp(0.20343266580576425);
    msg.setSource(61377U);
    msg.setSourceEntity(87U);
    msg.setDestination(65097U);
    msg.setDestinationEntity(180U);
    msg.parameter = 154U;
    msg.numsamples = 112U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 11715U;
    tmp_msg_0.avg = 0.7632704495757782;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.684667786342373;
    msg.lon = 0.8082022330037715;

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
    msg.setTimeStamp(0.4884975442341215);
    msg.setSource(26642U);
    msg.setSourceEntity(23U);
    msg.setDestination(34509U);
    msg.setDestinationEntity(153U);
    msg.depth = 1760U;
    msg.avg = 0.8036535069757856;

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
    msg.setTimeStamp(0.4190618021845537);
    msg.setSource(59911U);
    msg.setSourceEntity(142U);
    msg.setDestination(26116U);
    msg.setDestinationEntity(220U);
    msg.depth = 53186U;
    msg.avg = 0.5520427054298975;

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
    msg.setTimeStamp(0.3334332281152601);
    msg.setSource(40229U);
    msg.setSourceEntity(38U);
    msg.setDestination(62022U);
    msg.setDestinationEntity(169U);
    msg.depth = 61374U;
    msg.avg = 0.6935232634944628;

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
    msg.setTimeStamp(0.3728066409241637);
    msg.setSource(20161U);
    msg.setSourceEntity(108U);
    msg.setDestination(15127U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8562119584028922);
    msg.setSource(54162U);
    msg.setSourceEntity(39U);
    msg.setDestination(11955U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9435857407436894);
    msg.setSource(15418U);
    msg.setSourceEntity(118U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.9615368685536504);
    msg.setSource(20031U);
    msg.setSourceEntity(12U);
    msg.setDestination(37551U);
    msg.setDestinationEntity(148U);
    msg.sys_name.assign("TFGKJQSSWWSVUHTFUPALBBNJISYNXEDRBFKUPLFOBZIREMKPMNBFYZIUPGTYQSMCJWMONWGGAVQAWQBFEJRLRZHKWMDUBRXZYHCCAIZSIDDLWZVIDAXDMMGQWSRNCIGDYSCBBELYJQQXOGTQTKICXXCAQAXFRJLBHVFNZWAYOUKOXDOXTZDHPCEHKWZUINHVESZENMOFOYCRRKGXGQMGLHJUPKAUJEPHPOCVNTOPVYRVPTVLTIEAYTKFVSH");
    msg.sys_type = 70U;
    msg.owner = 61872U;
    msg.lat = 0.050134739623011626;
    msg.lon = 0.03659026799966003;
    msg.height = 0.48967323705085486;
    msg.services.assign("RKYIPVIGXLRHZDUIXLPEJPWQNMIWKFUSMUZMSLJKZCTZJBEOGKYHNWTGWUJCZZQBFPQLQQXVSDFMLJUEEDGGRWNAOOHAQVGCNHKUYNTEOREBSDPNOYXCZLQRBVVDUHCLMPWNEVROFDHYGNRAKYTTPXOVASDPLAFJFWJQABOIVXAAARWKQUBPVFYSRMHXJLLSUCTOYVDHGEBAZJTRDQMYC");

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
    msg.setTimeStamp(0.2193275209538359);
    msg.setSource(45809U);
    msg.setSourceEntity(126U);
    msg.setDestination(55228U);
    msg.setDestinationEntity(161U);
    msg.sys_name.assign("MWATMDXNAJMSJCCZRPUAEXNHGJGQPCDBSVPWJCXEXIUZGZNDEZNTYOLMQGLYVSXGFWIBXSPFFKHTBFUCSWPINZKIHTMDVUEIPHROFICHOUDJOUBLMARFRFYPAFDEYGDYLZXQEOQUDHVMXBGMKOQ");
    msg.sys_type = 209U;
    msg.owner = 3886U;
    msg.lat = 0.328703688057731;
    msg.lon = 0.713235668213213;
    msg.height = 0.7056371084227571;
    msg.services.assign("CZTMXBQNVKHDJYWXYLRTGAABRPXDREVQGMZWTZLHZPPQWHMVNTLMGQPMWNFYFMINBDJLEFJTUUTYPGKZCHEZUSLQVMJCVVNWAUYGRUDFZLYQOCJKPLCOKWMJYXYCUHNHMFGMTREVERIIAOSBHXIPSANBELOCWIVFISNDIWQBBOVA");

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
    msg.setTimeStamp(0.33817438400868194);
    msg.setSource(30555U);
    msg.setSourceEntity(184U);
    msg.setDestination(10085U);
    msg.setDestinationEntity(241U);
    msg.sys_name.assign("ERRBPEIMZNPDZGLMAMQSNJVKMFIDOBZZZELTSDKRHUDHJQATIGFTNUJXJWJZCHWKLNJQVGCSOJOADSXUGYXFIFIQVNOLBWQSRDOTRQKOHQTMGSCSWKBCEZOKCKHQAPBIRRLXEBUTXNFPHPROYWGVZINTILLFYXIXMLKDFDU");
    msg.sys_type = 53U;
    msg.owner = 4237U;
    msg.lat = 0.39462596345126666;
    msg.lon = 0.8877649571541217;
    msg.height = 0.8698451989876211;
    msg.services.assign("YTRXUQRHAAWJMVSPRSBTZXMBOUQOFHQBTKXVFNXJLVTABRPBZDYCYXNFHLQLDUJESKTZDYAOZAREHCBZUZXNNPGHSAMILRSPGRCLLWQWLYDKJNPJDITM");

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
    msg.setTimeStamp(0.2849759186125108);
    msg.setSource(52524U);
    msg.setSourceEntity(115U);
    msg.setDestination(10814U);
    msg.setDestinationEntity(39U);
    msg.service.assign("OLWYPOGOHJPOZQQFKQAIPSOYRHGUJZWDPBBZKDNKFLKCEVVYGTCRKXQCIUQSLMIJHASK");
    msg.service_type = 87U;

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
    msg.setTimeStamp(0.1131412227976214);
    msg.setSource(39419U);
    msg.setSourceEntity(191U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(202U);
    msg.service.assign("XUAHAVWPYLCGPEDFLZPMIVXZGSLBPCAFQQRSHQCZSBEXMRFMADUPKNGWMFMCHZFITOOKBKGKHZQNMEAFJIBOVGCBKLUYBPRXPTSEJGVCUYDSBUCHZDVFCQNTTM");
    msg.service_type = 175U;

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
    msg.setTimeStamp(0.5343044198685853);
    msg.setSource(16759U);
    msg.setSourceEntity(121U);
    msg.setDestination(33766U);
    msg.setDestinationEntity(243U);
    msg.service.assign("HHXMBPFMWSGXMXNKYKDIPEXTJMAWMGEVGREWMNCZIZNROFHVBQFKGVTGNMGVOASXLREREWUCBIQHUJVSYPQRYVENMAETQYLVIWCDKXGTFKWBFYDFJUJ");
    msg.service_type = 45U;

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
    msg.setTimeStamp(0.3079663654162106);
    msg.setSource(13633U);
    msg.setSourceEntity(188U);
    msg.setDestination(55506U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5293635336808343;

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
    msg.setTimeStamp(0.6236128483760889);
    msg.setSource(64737U);
    msg.setSourceEntity(215U);
    msg.setDestination(63361U);
    msg.setDestinationEntity(33U);
    msg.value = 0.09838286426926834;

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
    msg.setTimeStamp(0.7127707478536053);
    msg.setSource(49661U);
    msg.setSourceEntity(184U);
    msg.setDestination(61565U);
    msg.setDestinationEntity(13U);
    msg.value = 0.4085457765815673;

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
    msg.setTimeStamp(0.6016345966210765);
    msg.setSource(42682U);
    msg.setSourceEntity(141U);
    msg.setDestination(62168U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9782308552655465;

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
    msg.setTimeStamp(0.9249801358309591);
    msg.setSource(62993U);
    msg.setSourceEntity(141U);
    msg.setDestination(30977U);
    msg.setDestinationEntity(243U);
    msg.value = 0.34923570763414513;

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
    msg.setTimeStamp(0.11756315449422627);
    msg.setSource(12457U);
    msg.setSourceEntity(98U);
    msg.setDestination(52700U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5551513587600571;

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
    msg.setTimeStamp(0.9734166736398934);
    msg.setSource(34592U);
    msg.setSourceEntity(76U);
    msg.setDestination(30292U);
    msg.setDestinationEntity(235U);
    msg.value = 0.866201499050524;

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
    msg.setTimeStamp(0.5963639535389932);
    msg.setSource(63683U);
    msg.setSourceEntity(194U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(27U);
    msg.value = 0.1388832557146491;

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
    msg.setTimeStamp(0.7655851972575426);
    msg.setSource(20158U);
    msg.setSourceEntity(218U);
    msg.setDestination(57563U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6824475198533689;

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
    msg.setTimeStamp(0.4605240691709508);
    msg.setSource(53355U);
    msg.setSourceEntity(40U);
    msg.setDestination(61420U);
    msg.setDestinationEntity(118U);
    msg.number.assign("ZADTMISFTQTTBKCUJWXHDVRJWNFJHLOEYIBBMH");
    msg.timeout = 6380U;
    msg.contents.assign("ANFVJMXGGCYPCPWZJFJBVNQLTWUIXCPAKAFXWOCHOUPUDQMLW");

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
    msg.setTimeStamp(0.6265033586336174);
    msg.setSource(2304U);
    msg.setSourceEntity(47U);
    msg.setDestination(53005U);
    msg.setDestinationEntity(24U);
    msg.number.assign("ZVTLUKFLJGGQDGRMVMFGPWEQMLXHHJXUKEXTQKOXGIDJFXYCKSYCSQNBMPWPIZHIPYSORFYACHHWYCATESGLWLNWUYRVIMNSOTLEXMSEGUAKYOVLAFDBPIJGREHJQVIUWPOWUIJAZTMDNONEMTDKCOFBQRISVVBEQMDZRDSBZVQOTQPVBZVRJBNZKKEWXJUR");
    msg.timeout = 38054U;
    msg.contents.assign("HUJUAHKGOWVCPINNVWOHIZJNLJLOEOZFDVIMMSTWKZNEKDYELNXKFFZMERCFCIJUPICWEXXPPKQCIJODHDJHYMTCLZCDSTJENRDKSBXEBULSUAYLFEGNOGFSABHXQ");

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
    msg.setTimeStamp(0.7035532447399152);
    msg.setSource(48106U);
    msg.setSourceEntity(143U);
    msg.setDestination(51474U);
    msg.setDestinationEntity(226U);
    msg.number.assign("FCQHTMGVMEGOEGQDLK");
    msg.timeout = 61649U;
    msg.contents.assign("HOJTIUXQRLGTKGKKDIHLWFQYSEVUHIIOSUAIFUNUSZABYOQADOKPPULIDYWKET");

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
    msg.setTimeStamp(0.958219237377549);
    msg.setSource(23549U);
    msg.setSourceEntity(128U);
    msg.setDestination(50909U);
    msg.setDestinationEntity(199U);
    msg.seq = 4059758712U;
    msg.destination.assign("ZAMLUUUXNHGDQBTXFJWSVRRZSVYWHKVFYKAVZAUJLXPKEXKCERFOYKGCJCRWOUGEIQPPDKTITZMZETDCSWOOOWIXCXHETDTHFWLRKERFAGHNYWNJXLBOMQLMYQNDJETQJWZAFFRZQHBMVIUTDNIKDWNTDYNGAFOFDMVHAOUPBXZIBXOGUDGJZHZYEALSOTNFNYLEPJGPCBYMMQQRQEIPIGVMCSUVARMIVCSPYBPUSPSCVCBBHXKQIGNLASJKH");
    msg.timeout = 57064U;
    const char tmp_msg_0[] = {37, 38, 45, 64, -48, -50, 97, -94, 90, -63, -112, 21, 0, -41, -104, 113, 125, 83, 10, 113, -93, -69, -57, -58, -30, -70, 2, 71, -90, 39, -117, -28, 99, 90, 84, -9, -63, -125, -84, 12, -66, -95, -55, -128, 48, -106, -9, 73, -124, -118, 42, -54, -5, -102, -121, 77, 53, 60, -42, 77, 50, 14, 62, -119, -81, 63, 26, 113, -6, 115, 95, -121, 27, -41, -96, -53, 25, 63, -16, 122, -82, 55, 121, 126, -20, 19, -47, 114, -30, 15, -21, 116, 27, -15, -66, 35, -50, -87, -20, 109, 3, 4, -92, -72, 84, 3, -81, 100, 11, 54, -55, 109, -54, 54, -79, 93, -19, 124, 95, 21, 14, 40, 8, 81, -9, 75, 77, 93, 100, 22};
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
    msg.setTimeStamp(0.9623376245502854);
    msg.setSource(54838U);
    msg.setSourceEntity(150U);
    msg.setDestination(60278U);
    msg.setDestinationEntity(132U);
    msg.seq = 3655621868U;
    msg.destination.assign("BNYQKFKAZONSDKHYPNTTUZDZPLFKEHBUHXYCQZANSOHGHCLZRCDBWYESSFFRPTXQPQTUDUPOPSELCJITAUDQJDPKPKZEWUSAWCOYZJSVOROCALXXBWFIVRDCPIGBOMNGNTBFGYIXKWWAJWVXJTYFMZYU");
    msg.timeout = 29025U;
    const char tmp_msg_0[] = {12, 85, 16, -115, -110, -61, 18, 5, -84, -58, -112, -13, 102, -118, -45, 15, -66, -71, -93, -117, -128, -41, 65, 87, 25, -40, 48, -35, -122, -101, -98, -18, -114, 87, -73, 77, -54, -74, -87, 17, 34, -81, 74, -25, -124, 73, -3, -70, -24, 48, 96, -63, 75, -117, 68, -33, 39, -7, 49, -48, 103, 23, 0, 27, 10, 97, 109, -53, -30, 103, -1, 67, -3, -15, 32, -3, 23, 26, 1, 22, 17, -85, -47, 107, -36, -86, -108, 77, -115, 19, -58, -36, -121, 2, 48, -24, -115, 43, 121, 0, 126, 17, 27, -42, -125, 1, 32, -88, -54, 53, -15, -66, 80, 40, -64, -59, -80, 116, -81, 9, -75, 51, -118, 9, -93, 112, 49, -96, 42, -79, -4, 55, 115, -98, 54, 47, -36, 108, -62, 99, 60, 57, 42, -96, -48, 98, 98, -2, 87, 86, 68, 125, 111, -76, 99, 74, -117, 71, 98, -5, 111, 126, 59, 36, -106, -106, 72, 6, 118, -20, 100, -3, -20, 1, -74, -122, 92, 18, -33, -107, 48, 104, 84, -15, 75, 27, 14, 42, 10, -69, -9, 40, 75, 115, 26, 79, 112, 123, -86, 88, 104, -62, 64, 0};
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
    msg.setTimeStamp(0.8663374620415751);
    msg.setSource(8598U);
    msg.setSourceEntity(235U);
    msg.setDestination(52758U);
    msg.setDestinationEntity(19U);
    msg.seq = 15055892U;
    msg.destination.assign("QJXKHQHUZMXOZJPKDLTTZQQBCEBMJUOIXKHFLLAZOGKHJRNPMDIYHSPPUIFNUMNPWDZRABBCHEYFSCOCDYC");
    msg.timeout = 30104U;
    const char tmp_msg_0[] = {76, -108, -29, 34, 62, 2, 76, 71, -31, 41, 81};
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
    msg.setTimeStamp(0.6287217903419815);
    msg.setSource(31150U);
    msg.setSourceEntity(223U);
    msg.setDestination(55066U);
    msg.setDestinationEntity(131U);
    msg.source.assign("EEGQQEDTSTYZMQKSZQUQOFASBCZLVXRLDFNVRDAYSAKPGBBPLFPGIODMEXCCFEAEUMDWEIFTTISUEMRBNZRHXZWNUKIWPYXQLWXKWYJFVUWHBEQWDZBGWROCACGVKAGMWHCHOOLQORPHIWFCLYMYVGSOKENFJYRZISJZJDTILNJ");
    const char tmp_msg_0[] = {83, -86, 102, 62, 118, 67, 100, -16, -101, -26, 26, -60, 74, -47, -12, -8, 112, 52, 64, 123, 66, 45, 71, 75, 110, -93, 125, -120, 64, 28, -29, 68, -64, -120, -28, 36, -45, 85, 76, -41, 89, -95, -50, -97, 48, -97, -116, 99, -33, -12, 76, -8, 112, 35, -128, 65, 96, -80, -14, 63, 19, -119, -83, -45, 123, 4, 106, 21, 27, -98, -25, -21, 64, 63, -68, 11, -42, 44, -108, -100, 109, -111, 29, -16, -9, 116, -31, 65, 46, -83, 27, 19, 1, -15, 44, -70, -99, 75, 52, 18, -116, 58, -79, -72, 101, 18, -6, 52, 75, -8, 74, 20, 73, -53, 12, -49, -50, -105, -18, -96, 98, 91, -119, -41, 107, 28, -10, 7, 44, -64, -32, 8, -125, 10, -46, -87, 29, 49, -33, -51, -59, 15, 110, 44, 16, 45, 106, 81, 48};
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
    msg.setTimeStamp(0.3196722137935323);
    msg.setSource(34798U);
    msg.setSourceEntity(68U);
    msg.setDestination(54671U);
    msg.setDestinationEntity(223U);
    msg.source.assign("PDVVDLJLSYZEWMQLBQAWQUZPOGTWHIPXTFNFMHVTGOKERAZ");
    const char tmp_msg_0[] = {-86, -95, -22, -71, 32, 25, -52, 38, 106, 47, 62, -25, 51, 121, -18, -117, 72, -125, 107, 60, 74, -110, 60, -25, -63, -81, 69, -77, -112, -65, -75, -10, -74, 69, -87, 16, 6, 111, 60, 47, 119, 0, 74, 125, -27, 75, 64, 21, 116, 89, -92, -51, 46, -94, -58, 67, -13, 33, 64, -42, -62, -98, 30, -77, 16, 99, 51, 72, 24, -115, 104, 73, 9, -43, 45, 28, -53, 19, 41, 35, -32, 27, 88, -35, -93, -65, 67, 25, -50, -123, 16, 52, -88, 11, -8, -99, 44, -5, -6, 94, -60, -122, 20, -57, -28, -80, -56, -39, -50, -60, 88, 51, -8, -54, -83, 52, -23, 58, 116, 32, -14, -22, -4, 50, -75, -73, 54, 106, 103, 44, 47, 26, -73, 117, 8, -75, -80, -124, 37, 53, 56, 28, 105, 31, 43, 3, -46, 53, -119, -2, -41, -94, -7, -72, 98, -10, 82, -43, 20, 123, -111, 103, 93, -53, 27, -18, -76, 102, -24, -97, 85, 53, -106, -57, -79, -7, -109, -119, -71, 17, 88, 48, -13, -99, 113, -64, 121, 97, 25, -37, 99, 67, 23, -128, -36, -15, 64, -87};
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
    msg.setTimeStamp(0.3251262909254695);
    msg.setSource(7363U);
    msg.setSourceEntity(228U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(253U);
    msg.source.assign("FPYUIDJOPDFMFBEICYFDDNSTSPXCLQKKQJSHOZHXOTVDCNWRIIEFTBCGNANZANHIMERVWBQKJEDEYYSSQPZWYFKYRQKOZYCTEXLKGRLLRVSBYWGOICKPJZLGCMBBDUSKUZAPACJTHULLHOIEWGVVEMRXXSTTZHDOBNATGEOWZDUFMJYJHAZMGWWZWXNSVOEVANPQVIBSKVFRJJGWYNUQBINCGHUUHMABXXMKLAAFQFRGR");
    const char tmp_msg_0[] = {-39, 30, 33, -37, -55, 16, -93, -93, -117, 93, 73, 91, -101, 47, 33, -23, -116, 80};
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
    msg.setTimeStamp(0.768253484653072);
    msg.setSource(4679U);
    msg.setSourceEntity(142U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(95U);
    msg.seq = 3539909295U;
    msg.state = 104U;
    msg.error.assign("QVJMBQOCOTSJWRMSGMNOSEPHSJCFPEEXBWNOBEXHJRKHKAXUSUHEZFYNDADEPGIWYXNXVWYGWLFCVRJGIUACLEVODMHTBIRYAPJCSIBYMRTQCYNGBZGFIXZDQYPXZ");

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
    msg.setTimeStamp(0.18442392296315335);
    msg.setSource(62862U);
    msg.setSourceEntity(241U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(154U);
    msg.seq = 798962799U;
    msg.state = 82U;
    msg.error.assign("AYAKMSSCMDREAIOWDUTTKHHXRDBQKRVGITPLXXGTPSUPQFLYZNSANICBHTBMPTBHAMCVCISMVXZR");

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
    msg.setTimeStamp(0.9080342857535949);
    msg.setSource(24249U);
    msg.setSourceEntity(24U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(219U);
    msg.seq = 4149302860U;
    msg.state = 28U;
    msg.error.assign("AZASBHERFHFYICNVJDTGQAETJZODKLHDUTLHZYUIXQYRZJPYGNEYTKJULVBPTHMNXIEJREQLANMKVGGDYKPMUUEPAMIFERTBKBXWILVXDKLSFWTFWBRJPCKFNDMXNVUZSPOBCDCVIUXETBFSBLWSIEDAQTGHSXXDNWWJSAHAWSOLQKIRNUMVUQHOZCCILUGO");

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
    msg.setTimeStamp(0.5432914696409402);
    msg.setSource(36544U);
    msg.setSourceEntity(71U);
    msg.setDestination(55006U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("IEZCARXKFVTWCNMNMCEVUSAHL");
    msg.text.assign("PDGSUKWJBEITFVBPLLBRUOCGZQYMNUOSJCRWHTTZFKIOGYTKXEYAOCMCYTDDXPCHVHNYTOZISIEHXLVASTYPKSMDJGZYFPMOACVNNDPNPIMPYKEEXJBVERNQZTVKEHIFUNBDABQHWWVIDRXJNLMBWCFJICLJRLQZQXHYZVUGKOZQSJAMGDRNFKSXXNAWFSOBVWUEAXIKHQSAVDAFLRGGULELGQBGFYEJZUMMKUCMJULOHWI");

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
    msg.setTimeStamp(0.9427447360163823);
    msg.setSource(55114U);
    msg.setSourceEntity(107U);
    msg.setDestination(223U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("OPYBMTBUVOLUVUFQVOCDHAHEMXYNPQNQZKWJPCEBGLPQYXMSVFOIWNZZHYKFYYSGDWXINMKQRCPBJXCBKALELAVLSGLJIHDJDTVRLJVNPMNCZIJKANFBNBPGARYOHRIGLSRJOXISKUUXHQDNDZWWHIRIVFCGTJMVQXXXWUSYTQFPGOABZNQRUCJEKHVWHYGWMRKZFEGTERTFSECUUDZMASZDFHSC");
    msg.text.assign("AYNOCOAJIDNNKOFZUSQGKFOMINICFEIXXQFQEHCYSPBTKCRUTUBLXIZHNUPRDPISEZTQSFANXENWXIEJKGRVVMQ");

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
    msg.setTimeStamp(0.9065012030386437);
    msg.setSource(32648U);
    msg.setSourceEntity(177U);
    msg.setDestination(16065U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("KMGQZZRCYIOUKRKNFAYZLAGVIRWHLTYNBCEIHARQXOWMKKDMGYXRAXBSZQQTYORUBGWHTEXCVAQCVFSUJXHHWVZCXSDUSBSDXJGPUSZHXIOILRVGDMLXFNSPLCPYBEPIVTPDCVCTGKUORUBCEPJYKTOBMAENSJTMYKWWRQNLNTQNGOCKTPEQLFF");
    msg.text.assign("WUAZWTKOUGGAMVXCYUZRLYJOZZTWACQBPFAQHLIRQISEKQOASLMIZGFFSDXQOFIFLYJKUINIABIBNBYWSAKPIILHYDORVJGZLTPCEHV");

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
    msg.setTimeStamp(0.07699054010854267);
    msg.setSource(9668U);
    msg.setSourceEntity(60U);
    msg.setDestination(3514U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("OPHHPSSJVBVKPLTWUHRLIXTRFMFXOXZMUPJTJUKYFIFIUSMVNRWQNQUPLLQYZAKUNDGTOLFKECHYWGOEAGDYOTZRWEXZBGKDZEWNVEEUDGBJYKDRVOKHVYAMBAIJDPRRRZEDJWPIOGFISQCSOXCRBFTIAPSMLTLJXKFBXYCELMNBCKTQYSHWWQHUSZAXLQUXRNJPBGNAEOYZQCIGWAMCAHQZZYVCTTNMIMWKV");
    msg.htime = 0.1600918499668451;
    msg.lat = 0.6781008744627252;
    msg.lon = 0.09798946939478181;
    const char tmp_msg_0[] = {-102, -120, 67, -20, -19, -126, 116, 75, 82, -58, -99, 88, -127, -14, 112, 57, -91, 64, 1, -18, 36, 0, -125, -30, 55, -42, 116, -66, -41};
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
    msg.setTimeStamp(0.35092982031701225);
    msg.setSource(23802U);
    msg.setSourceEntity(48U);
    msg.setDestination(21459U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("FQTXHZBYEPLHUONVQCMJMFVEPGKDVPNRFKYXTAGHLKTJEPDWSDRWRMYMPTOJDERAYHJCRVXZDJDFGTSKFKIYPHCLKBAUBXMUTRAXNFESOEHKDNAZHSKHRYUTEGWYFORCHVIGWGPIRJIENPCEIQTYLBXPCWZSZOUYDQSCLOMFNTXNMOZOWAQLDWLZCQFNLCJUISAIVJIBMIMKOSQQVEBISPMGQDWY");
    msg.htime = 0.167307721206719;
    msg.lat = 0.21659060227141036;
    msg.lon = 0.14617435208752183;
    const char tmp_msg_0[] = {-41, 85, -104, 88, -95, 51, 115, -112, -114, 121, -60, -10, 30, 90, 14, -96, -48, -64, -78, 126, -22, -80, 48, -75, -6, -117, -44, 110, -82, -113, -28, -126, -91, -116, -41, -2, -73, 27, -118, -24, -114, -107, -41, -86, -3, 25, 116, 47, -94, -18, 50, -11, 49, 72, -34, -121, -9, 58, 83, 98, -64, 6, 82, -112, -104, -38, -55, 50, -84, -44, 18, -115, 102, -59, -41, -13, -88, -8, -40, -87, 29, -1, -49, -15, -82, 83, 72, 67, -126, 63, -96, -22, 50, -57, -63, -14, 102, -123, -35, 45, -40, 30, 5, 77, 23, -113, 53, 21, 94, 119, -70, -22, -6, 24, -83, 22, 86, 81, 107, -101, -1, 82, 65, -107, -41, -111, -60, 71, 30, -30, -21, -75, -18, 15, -99, 69, 39, 90, -25, -101, -63, 44, 11, 41, -96, 72, -46, -91, 125, -84, 63, 58, -103, -109, -98, -46, -40, 52, 74, 120, -66, -49, -38, 41, 87, -106, -5, -105, 13, -64, 15, 106, -69, 71, 113, 38, 91, 59, -46, -114};
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
    msg.setTimeStamp(0.4652745831719902);
    msg.setSource(12674U);
    msg.setSourceEntity(14U);
    msg.setDestination(9200U);
    msg.setDestinationEntity(140U);
    msg.origin.assign("MXYHBOGXUINTQXJXEZUVPVSFANZNATDHMVARWAFIAJOLIBNIVPYTOWUYVEVXRLDKKAPZZQZLAKWIKJOPJOCUEWCNRDDMPFLROTHUQJAQVLQQCYMTUVWYHGSYHQQWGNESOTTEGAUJFZK");
    msg.htime = 0.29324586413386167;
    msg.lat = 0.9746797296267373;
    msg.lon = 0.12923579916232364;
    const char tmp_msg_0[] = {54, -106, 50, 99, 35, 25, -42, -15, 18, 84, 14, 19, -1, -36, -21, -31, -1, 56, 14, 76, -83, 15, -124, 22, 104, -114, 85, 70, -68, -18, -70, 102, -36, 0, 108, -111, 84, -74, 3, -70, -100, -84, -36, -31, 49, 103, 61, 91, -25, 61, -93, -35, -11, 76, 63, -24, -116, -50, 118, 11, -16, -67, 78, -8, -78, -66, 120, 120, -111, 68, -30, 126, 104, 33, -114, 83, 84, -44, 51, -108, -78, 106, 47, 117, -5, -3, -32, -57, -75, -92, -35, -78, -8, -70, -124, -74, -112, -121, -44, 81, 30, 124, 114, 109, -110, 30, 97, -112, -117, 26, 126, 16, 46, 113, 85, -45, 35, -63, -47, -19, -93, -109, 21, -126, 88, 18, 120, -25, 35, 82, -86, -49, -58, 32, 43, 117, -23, 43, 23, 3, -47, 38, -114, -22, 126, -85, 56, -16, -4, -120, -18, -63, 121, -111, -8, 118, 41, -74, 32, 50, 14, -66, 70, 72, -96, 109, 21, 96, 63, -67, 11, -103, 52, 74, 111, -38, 124, -102, -72, -66, -48};
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
    msg.setTimeStamp(0.5684680967706779);
    msg.setSource(53038U);
    msg.setSourceEntity(184U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(14U);
    msg.req_id = 40508U;
    msg.ttl = 61083U;
    msg.destination.assign("UBWYOSANMQFHUJRQDDLBQPZPFRUJJRV");
    const char tmp_msg_0[] = {25, 52, 46, 48, -18, 103, -90, 124, 15, 12, -58, 9, -23, 60, -22, 8, -58, -48, -92, -18, -118, -122, 94, -91, 93, -30, -27};
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
    msg.setTimeStamp(0.2394940772835067);
    msg.setSource(32178U);
    msg.setSourceEntity(92U);
    msg.setDestination(56863U);
    msg.setDestinationEntity(133U);
    msg.req_id = 19917U;
    msg.ttl = 41102U;
    msg.destination.assign("RCUKAECYAVCFVPFRXSHPUWTLIPIWBAIWOULYVGQLFPSQGCGMHZNGEKJNHJRCIDKOQVLYAHIBOOYZTYXBOFDWQQPELZOWDUAHFYHRDZNCXJWZUDEWKHVHNQLRYATAXEXBGNDQHFMKSSRZPZLVZJLVFTDNEDCIVYBIEADL");
    const char tmp_msg_0[] = {-27, 99, 34, 10, -77, 90, 53, -32, 39, 39, -52, 18, 43, 3, 92, -10, 54, 50, 55, 104, 101, -7, -113, -110, -78, -51, -99, -50, 50, 109, 60, -61, -67, -75, 125, 103, 92, 79, 63, 43, -23, 65, -29, -7, -94, 25, -103, 33, 95, -69, 85, -99, 113, 51, 14, 20, 105, 49, -98, -82, 107, 118, -103, 19, -72, 89, 35, -5, -22, -67, -54, -6, -79, 10, -65, 121, -94, -84, 111, 42, 11, 50, -83, -44, -107, -79, 109, 44, 66, 58, 4, -76, 91, -56, -48, -115, 15, 14, -6, 3, 90, 39, 104, -15, -50, 34, -113, -120, 63, 94, -36, 61, -9, -77, -8, 62, 116, -62, -105, 6, 102, -78, -41, 59, 125, -68, -57, 95, -115, 108, -82, 28, 7, 126, -34, -4, 119, 39, 122, 110, 31, 78, -61, 25, 34, 118, -23, 0, 40, 76, -18, -19, -119, -76, -32, -106, 113, -122, -108, -37, -117, -58, -92, -30, -20};
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
    msg.setTimeStamp(0.15945626738517238);
    msg.setSource(56279U);
    msg.setSourceEntity(246U);
    msg.setDestination(38463U);
    msg.setDestinationEntity(209U);
    msg.req_id = 34419U;
    msg.ttl = 13265U;
    msg.destination.assign("GMRVKLXZWGRGSNHZJBICZZKRCRVJKCUJTSPNZNOSQQVEELKKEQSVKSAYNOMTYUWACEIZLKQJSLLQJXVUIPSLNRTTIZNOWGMOBJYDCAFAYDUPDHIEIBBYXSCMXBTCYAHABWUXDXHCYDFHZWWRPJMNWBEWLPGIRWNTFBTDUOTDBHVVJMPQDDXPGUFTWDAEOOQ");
    const char tmp_msg_0[] = {45, -28, 112, 24, -40, -117, -3, 57, -75, 35, -3, 42, 13, 1, -123, -106, -44, -104, 37, -26, 40, 77, 3, -58, 17, -54, -68, 64, -109, -42, -85, -29, 14, 87, 124, -59, -14, -86, -37, 106, 91, -61, 25, -42, 47, 88, 53, -127, 112, 82, 66, -123, 7, 64, -117, 56, -90, -46, -106, -126, 29, -4, -100, 91, 115, 20, -26, -51, -127, -103, -6, 2, 73, -87, -55, 60, 45, 63, 92, -1, -76, -108, -69, -19, -41, 77, -74, 31, 52, -55, 108, 35, -7, 108, 26, -2, -74, -9, 94, -123, 4, 76, 103, -94, -14, 72, 34, -126, -104, -37, -99, -62, 6};
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
    msg.setTimeStamp(0.9187127041958248);
    msg.setSource(42660U);
    msg.setSourceEntity(11U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(134U);
    msg.req_id = 8802U;
    msg.status = 251U;
    msg.text.assign("RRDDMUQNDJVUNATXTAUKHLMNIZPTHPBOOSAGUCSJQVKCUUFDFEJGSVCXLBIICHSWXOMEZTYZJKSANFIEWZFEDWYSOQHIPYVCATBKMDGNXHUYYGOBXMJRZLINZWTMBUSTEOHGLPTZQUGWMQXVLFKENPQYLVF");

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
    msg.setTimeStamp(0.092779133648902);
    msg.setSource(5850U);
    msg.setSourceEntity(27U);
    msg.setDestination(37492U);
    msg.setDestinationEntity(79U);
    msg.req_id = 49741U;
    msg.status = 87U;
    msg.text.assign("IJUQRZMWOVUTWLRNTYEUGBFBSGAMHFYEAHSGVC");

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
    msg.setTimeStamp(0.9558212363333778);
    msg.setSource(30401U);
    msg.setSourceEntity(13U);
    msg.setDestination(12573U);
    msg.setDestinationEntity(103U);
    msg.req_id = 34665U;
    msg.status = 90U;
    msg.text.assign("GIVBGACUPJWJFOQLLATELTZVPENIJKIFJVCFPHGFGMAXPM");

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
    msg.setTimeStamp(0.5914849988599996);
    msg.setSource(63031U);
    msg.setSourceEntity(218U);
    msg.setDestination(57558U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("QWBYYXRXDNPAUGCVLEETHKNXRUXUQEXELVFJUILHQXKDSSPNTYGAIBUXUDOMNGKSFRKJQXAESHJGHRRQOYUWGIJQQABPNRJLWNYSLSBVHXJTZITANUKZASOHDLRMTOTSMVUGYPCZDDLI");
    msg.links = 2804883451U;

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
    msg.setTimeStamp(0.6160628985437512);
    msg.setSource(60546U);
    msg.setSourceEntity(217U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("RBAJLXIPPITAQLJCFQKYVRETXICOJEIOUOHRQSDVHOGXCOMYUKWKXPCQQQEMBSTRBLN");
    msg.links = 1516066926U;

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
    msg.setTimeStamp(0.8356961654262169);
    msg.setSource(21430U);
    msg.setSourceEntity(194U);
    msg.setDestination(10876U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("IXIUCLUXQWCOQABMDFSHLHZDZESAUZKYRFSOOJOZCBKHNKVOUXKARZJZRXNOQEFOIYCQYTRJPETCTHQQGDJEIPBPKIGWJAZGAWKHXGLWDCMAFBFKOHQTWJEAVBTTEYIPHSCKFPSUFUVVRDLTQYSWHSFRPYSLEOMP");
    msg.links = 2646268327U;

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
    msg.setTimeStamp(0.26976400496701114);
    msg.setSource(15780U);
    msg.setSourceEntity(97U);
    msg.setDestination(6950U);
    msg.setDestinationEntity(47U);
    msg.groupname.assign("HHOMXERLDWTXWMUMQGHXSIJULXERNPDWTAAXPKSCTCVTZDCQMGXFZZLDPYUJNUTPJRWYRXBQUTEVMUGNCKTLJVQHJFMARSMDVE");
    msg.action = 36U;
    msg.grouplist.assign("JQKPKYPCBNSRLCGDCMDIUASHCCFQO");

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
    msg.setTimeStamp(0.6298880867798029);
    msg.setSource(28203U);
    msg.setSourceEntity(211U);
    msg.setDestination(22399U);
    msg.setDestinationEntity(17U);
    msg.groupname.assign("OPSDHWANZPAQPATCEDRXUQCUUMFQJQLLDTDJBZNVUBRBPJNZGUDCLXDVOMNKRBHAOITJSNEFSFTMFODRFUVAJRNSYMLYAWSCEYSXDQITGGKKXGNPMLHQCOLEYVTCVOCOZRJBHOPWJNMVZVZGRFQSOEBWLEANUYLXTBJQDTRHZMIIIEVYXWMJSIGHRIFECXHDEXLICWOIGWSGFPQ");
    msg.action = 199U;
    msg.grouplist.assign("QLFQNVGPHNMKRTXXZJVXCIAEZERGZASDVYZJDPEEXDVWZGBJZTSQVOHXZCWAKYIGFEDJFNDUVPNBBCCSTSUHWOTGEWPILVEKANOGLMJNKATXIGHTNNQRHRBFMKYFMIWYGYLWIFFNVQOTOZHEOTUDMSCHCBOWTVJUHRQPFJRQUIDYQXUYIVRYYACXKDIMSCHUPPKW");

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
    msg.setTimeStamp(0.1550548021875725);
    msg.setSource(59055U);
    msg.setSourceEntity(67U);
    msg.setDestination(58323U);
    msg.setDestinationEntity(99U);
    msg.groupname.assign("FMQUSTRQDJCXVZLRTIWYNMQOIBFYLDKIKALVUTEDQVWPMITZOCGTZYOZRPLTVXZNLRCSNKMEIFPFXMWTJAJDCCAUHKXTHAHGGHCGGCWKDJAVCIYBBHRQUCHZPUWLVIPOEBJTXPFAPKOJVSYSUOXNQAVNSJPWNLKFRAY");
    msg.action = 61U;
    msg.grouplist.assign("FRLJEENEAQHZPZXUGGRTVHKPDCARLRVXOUMOSSXOLZINBBBCEGGQWOTJYEQHBWYCOCUPYYTGHUBAI");

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
    msg.setTimeStamp(0.603725274698717);
    msg.setSource(59757U);
    msg.setSourceEntity(18U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(128U);
    msg.value = 0.29740611331988565;
    msg.sys_src = 33597U;

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
    msg.setTimeStamp(0.24028023514387253);
    msg.setSource(9137U);
    msg.setSourceEntity(195U);
    msg.setDestination(22727U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9742652995042783;
    msg.sys_src = 53231U;

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
    msg.setTimeStamp(0.2874806593274061);
    msg.setSource(38823U);
    msg.setSourceEntity(89U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9403153927187324;
    msg.sys_src = 34659U;

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
    msg.setTimeStamp(0.41527261320484576);
    msg.setSource(56529U);
    msg.setSourceEntity(11U);
    msg.setDestination(52460U);
    msg.setDestinationEntity(65U);
    msg.value = 0.09675889828275397;
    msg.units = 217U;

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
    msg.setTimeStamp(0.8979734915918351);
    msg.setSource(56784U);
    msg.setSourceEntity(226U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4972577585846536;
    msg.units = 141U;

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
    msg.setTimeStamp(0.15091328891835942);
    msg.setSource(17864U);
    msg.setSourceEntity(249U);
    msg.setDestination(64309U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8248614090804439;
    msg.units = 189U;

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
    msg.setTimeStamp(0.28382549315714367);
    msg.setSource(33941U);
    msg.setSourceEntity(61U);
    msg.setDestination(35697U);
    msg.setDestinationEntity(144U);
    msg.base_lat = 0.6586440323515032;
    msg.base_lon = 0.5527777426150204;
    msg.base_time = 0.5589309969536498;

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
    msg.setTimeStamp(0.7869747142059643);
    msg.setSource(47628U);
    msg.setSourceEntity(106U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.18860725432520653;
    msg.base_lon = 0.13599708501881846;
    msg.base_time = 0.5015142703302724;

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
    msg.setTimeStamp(0.39534130575373305);
    msg.setSource(10005U);
    msg.setSourceEntity(8U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.6676098547213027;
    msg.base_lon = 0.8456893818394203;
    msg.base_time = 0.35618242975926295;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 52459U;
    tmp_msg_0.priority = -34;
    tmp_msg_0.x = -14237;
    tmp_msg_0.y = 30852;
    tmp_msg_0.z = 14276;
    tmp_msg_0.t = 30241;
    IMC::SessionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 805721760U;
    tmp_tmp_msg_0_0.status = 91U;
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
    msg.setTimeStamp(0.6157706057664114);
    msg.setSource(8756U);
    msg.setSourceEntity(199U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.6605421562232936;
    msg.base_lon = 0.7323739720918333;
    msg.base_time = 0.7868654457369382;
    const char tmp_msg_0[] = {-104, -87, 48, 88, 82, -112, 120, -52, -91, 123, 3, -83, -29, -122, 18, -100, -117, 79, 55, 16, -37, 125, 42, -1, -92, 71, 116, 34, 45, -53, 123, 124, 31, 80, -127, -126, -63, -76, 83, -57, -16, 47, 70, 61, -69, -14, 66, -66, -62, 100, -79, 109, 85, 126, 70, -15, -8, -37, 54, 79, -92, -114, 61, 0, 23, 70, -127, 26, 9, 38, 121, 34, 46, 18, 73, -103, -85, -66, 75, -85, -3, -115, 16, -36, -119, -50, -52, 10, 50, 98, -101, 11, -4, 31, 89, 114, 15, 11, 116, 68, -75, -74, -57, -7, 92, -45, 20, 39, 72, 30, 68, 33, 79, 89, -81, -7, 117, -114, -16, 39, -49, -69, 111, 66, 104, 6, -38, -114, -66, -48, 12, -95, 78, -101, 29, 47, 102, -88, 124, 4, 74, 19, 114, -45, -120, 75, 78, -69, -54, 16, -63, -126, 124, -74, 10, 119, -19, -73, 57, 122, -102, -113, -52, -66, -94, -36, -6, -45, 19, -43, -81, -26, -16, 75, 51, 12, 78, 55, -60, 110, -115, 12, -32, -57, -77, -85, -48, 87, 67, -75, -109};
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
    msg.setTimeStamp(0.8378136032510686);
    msg.setSource(43764U);
    msg.setSourceEntity(63U);
    msg.setDestination(56927U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.1996081776672235;
    msg.base_lon = 0.16144842034476803;
    msg.base_time = 0.6534287150027724;
    const char tmp_msg_0[] = {27, -21, -7, -112, 72, 47, 4, -58, 68, -71, -25, -42, -115, 123, 97, 80, 24, -62, 67, -76, -18, -94, -44, -58, -6, -36, -36, 30, 39, -58, -76, -9, 36, -113, 40, -56, 6, 47, 20, -126, 96, 104, -78, 0, 17, 82, 107, 110, 43, 90, -33, 50, -104, -29, 67, -9, 54, -117, -67, -7, 111, -38, 45, 73, 90, 53, 11, -63, -70, -104, -62, 12, -86, -114, 47, 9, 40, -65, -42, 34, 34, 59, -55, -78, 31, 16, 18};
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
    msg.setTimeStamp(0.907702132869068);
    msg.setSource(35417U);
    msg.setSourceEntity(166U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(180U);
    msg.base_lat = 0.18488359803956644;
    msg.base_lon = 0.23745243544371952;
    msg.base_time = 0.41246135939807105;
    const char tmp_msg_0[] = {-127, 119, 19, 94, -122, 95, -2, 115, -63, 33, 85, -70, 116, -52, -94, -52, 20, 90, 92, -98, -64, 98, 11, -41, 63, -47, -45, -61, -6, 89, 1, 72, 39, -88, -80, -109, -10, 40, 121, -77, -97, 76, 84, -51, 122, 79, 62, 111, -25, 23, -22, 67, -92, -89, -70, 112, -77, 116, 108, -72, 13, 3, 87, -28, -83, 51, 41, -125, -17, -111, -84, 39, 75, 32, -103, 80, -6, -41, 11, -120, 15, -69, -115, -110, 116, 95, 10, 59, 42, 57, 36, -98, 4, -75, 101, -27, -44, 124, -7, -6, 117, -55, 26, -109, 9, -33, 85, -16, -5, -16, 70, -58, -20, -4, 42, 97, -97, -13, 33, -127, 94, -38, -105, 91, -7, 48, -109, 73, 76, -11, -85, 63, -68, -54, 122, 28, 105, -31, 120, -29, 8, 64, 31, 4, -78};
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
    msg.setTimeStamp(0.7762079621008291);
    msg.setSource(64670U);
    msg.setSourceEntity(58U);
    msg.setDestination(43813U);
    msg.setDestinationEntity(64U);
    msg.sys_id = 60739U;
    msg.priority = 81;
    msg.x = -9872;
    msg.y = 3180;
    msg.z = 31109;
    msg.t = 29465;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("AABXKSDCWWDPEJKNUFLCBJYUBSZYSPKXDJTDUTZFTZWCRCVURGYHCMWWDHEBNPXJLOEZBRVJLUZEAEMGJOSIVGPRIVPXDHDONAGBDQITXGSKWEULQFMBEQPOSXECXMFYVTHDATNMJQIRYJEGAKHOFCRVLFRALWSKQKZVQJFTELWKQCMGOCIZGDWOONPKIZPITUIBAQLFRUL");
    tmp_msg_0.value = 12U;
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
    msg.setTimeStamp(0.21906023582201617);
    msg.setSource(62324U);
    msg.setSourceEntity(145U);
    msg.setDestination(54154U);
    msg.setDestinationEntity(158U);
    msg.sys_id = 52324U;
    msg.priority = 25;
    msg.x = -16203;
    msg.y = -15998;
    msg.z = -24008;
    msg.t = -27952;
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.06553389298359824;
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
    msg.setTimeStamp(0.08292907184159248);
    msg.setSource(59900U);
    msg.setSourceEntity(89U);
    msg.setDestination(42105U);
    msg.setDestinationEntity(50U);
    msg.sys_id = 12900U;
    msg.priority = 38;
    msg.x = -3743;
    msg.y = -479;
    msg.z = -19870;
    msg.t = -20724;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.8723455973183553;
    tmp_msg_0.time_next_service = 0.14087472547640045;
    tmp_msg_0.time_motor_next_service = 0.5717707132370995;
    tmp_msg_0.time_idle_ground = 0.4879594376211799;
    tmp_msg_0.time_idle_air = 0.9654248027184129;
    tmp_msg_0.time_idle_water = 0.7755919716294055;
    tmp_msg_0.time_idle_underwater = 0.12943157073828337;
    tmp_msg_0.time_idle_unknown = 0.9375063966010407;
    tmp_msg_0.time_motor_ground = 0.38578956414994625;
    tmp_msg_0.time_motor_air = 0.2608406551619957;
    tmp_msg_0.time_motor_water = 0.31608307656107437;
    tmp_msg_0.time_motor_underwater = 0.559802480327531;
    tmp_msg_0.time_motor_unknown = 0.387198943844997;
    tmp_msg_0.rpm_min = -24676;
    tmp_msg_0.rpm_max = 21800;
    tmp_msg_0.depth_max = 0.8030344272451772;
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
    msg.setTimeStamp(0.7396549238344697);
    msg.setSource(24237U);
    msg.setSourceEntity(28U);
    msg.setDestination(61032U);
    msg.setDestinationEntity(187U);
    msg.req_id = 3719U;
    msg.type = 43U;
    msg.max_size = 60695U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6008726181138025;
    tmp_msg_0.base_lon = 0.40812689794699186;
    tmp_msg_0.base_time = 0.00881035463121338;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 9509U;
    tmp_tmp_msg_0_0.destination = 53822U;
    tmp_tmp_msg_0_0.timeout = 0.6859716520627686;
    IMC::LedBrightness tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("KEUMCJYGENQRVVJSATRUENXCIRRRXKBNASURWKDNBAMUTUPBIJIYAARJCINUYVYODRLKSHNMCSSXWCWPIGXHSQOYQAMDONZOOXGAVOLWLMCLKDGPOSJAYUHZUEZQVDUEN");
    tmp_tmp_tmp_msg_0_0_0.value = 132U;
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
    msg.setTimeStamp(0.8435652266798577);
    msg.setSource(64725U);
    msg.setSourceEntity(108U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(87U);
    msg.req_id = 31949U;
    msg.type = 64U;
    msg.max_size = 47223U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.43918552050619475;
    tmp_msg_0.base_lon = 0.703821894245029;
    tmp_msg_0.base_time = 0.21069329935010372;
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
    msg.setTimeStamp(0.4153564369121523);
    msg.setSource(23056U);
    msg.setSourceEntity(171U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(54U);
    msg.req_id = 53106U;
    msg.type = 177U;
    msg.max_size = 5892U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.2553414113769875;
    tmp_msg_0.base_lon = 0.5762049479876035;
    tmp_msg_0.base_time = 0.10127084566720201;
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
    msg.setTimeStamp(0.5267772786726562);
    msg.setSource(26520U);
    msg.setSourceEntity(248U);
    msg.setDestination(17178U);
    msg.setDestinationEntity(0U);
    msg.original_source = 43920U;
    msg.destination = 51447U;
    msg.timeout = 0.43555725534218404;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.9092269681527727;
    tmp_msg_0.ay_cmd = 0.4562903886703632;
    tmp_msg_0.az_cmd = 0.7934306335841934;
    tmp_msg_0.ax_des = 0.06309586329236527;
    tmp_msg_0.ay_des = 0.6731463298696378;
    tmp_msg_0.az_des = 0.7328003743993297;
    tmp_msg_0.virt_err_x = 0.8382272825853083;
    tmp_msg_0.virt_err_y = 0.747739800726902;
    tmp_msg_0.virt_err_z = 0.03129600597439608;
    tmp_msg_0.surf_fdbk_x = 0.7422508721763565;
    tmp_msg_0.surf_fdbk_y = 0.7756628317195611;
    tmp_msg_0.surf_fdbk_z = 0.42063122489907;
    tmp_msg_0.surf_unkn_x = 0.9362579026022951;
    tmp_msg_0.surf_unkn_y = 0.45991341545478737;
    tmp_msg_0.surf_unkn_z = 0.7397045055188508;
    tmp_msg_0.ss_x = 0.0053788072623250915;
    tmp_msg_0.ss_y = 0.7973364562673942;
    tmp_msg_0.ss_z = 0.162666388151941;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("ECVWMEBZUJEFXQWZNOEKVAKRNKPOFXHRQWNGQNRSXTLAIRCFSXPRYJAGOVUXHFCBPLKIDZPLJDVMBGFDVHINXUDFOPWZWHQZLSDBLMVCYUCJIXTZOECGXHNQDDQWYNYOBIAWNZTJYABUFIKKUTTGYCWYEGHIESEBLYPYVOLRMDUBRKXAKTOHHFORMSRKJXMUWPHJLGVVHUCFEISEQ");
    tmp_tmp_msg_0_0.dist = 0.6536652784347772;
    tmp_tmp_msg_0_0.err = 0.8113125299446252;
    tmp_tmp_msg_0_0.ctrl_imp = 0.895792392360222;
    tmp_tmp_msg_0_0.rel_dir_x = 0.5077149395965148;
    tmp_tmp_msg_0_0.rel_dir_y = 0.025129822959874537;
    tmp_tmp_msg_0_0.rel_dir_z = 0.8761472488222296;
    tmp_tmp_msg_0_0.err_x = 0.4396711685677803;
    tmp_tmp_msg_0_0.err_y = 0.8155784470355978;
    tmp_tmp_msg_0_0.err_z = 0.2514031530299169;
    tmp_tmp_msg_0_0.rf_err_x = 0.9249261160528897;
    tmp_tmp_msg_0_0.rf_err_y = 0.2051298514407377;
    tmp_tmp_msg_0_0.rf_err_z = 0.8274663599505764;
    tmp_tmp_msg_0_0.rf_err_vx = 0.34518768090333996;
    tmp_tmp_msg_0_0.rf_err_vy = 0.1405587911802192;
    tmp_tmp_msg_0_0.rf_err_vz = 0.016542357696464283;
    tmp_tmp_msg_0_0.ss_x = 0.39917058566708796;
    tmp_tmp_msg_0_0.ss_y = 0.7971005968636867;
    tmp_tmp_msg_0_0.ss_z = 0.4328173366685586;
    tmp_tmp_msg_0_0.virt_err_x = 0.06531296759659178;
    tmp_tmp_msg_0_0.virt_err_y = 0.20997855057366155;
    tmp_tmp_msg_0_0.virt_err_z = 0.42989217416363223;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2638826517968561);
    msg.setSource(48798U);
    msg.setSourceEntity(195U);
    msg.setDestination(14088U);
    msg.setDestinationEntity(173U);
    msg.original_source = 33883U;
    msg.destination = 65324U;
    msg.timeout = 0.9660882563878861;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 25266;
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
    msg.setTimeStamp(0.4728870425451317);
    msg.setSource(9459U);
    msg.setSourceEntity(167U);
    msg.setDestination(56421U);
    msg.setDestinationEntity(117U);
    msg.original_source = 41946U;
    msg.destination = 38913U;
    msg.timeout = 0.008652528150365768;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("OFPXQZCILFLBVPMGYJZCIUAXDPZJBVLGUAJQFWHITVZTYDKWHAANOSNERCFNLHPXYCENYXOWRQSVIWGRPOXU");
    tmp_msg_0.value = 121U;
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
    msg.setTimeStamp(0.33290821395170367);
    msg.setSource(51401U);
    msg.setSourceEntity(235U);
    msg.setDestination(64448U);
    msg.setDestinationEntity(177U);
    msg.type = 157U;
    msg.comm_interface = 49978U;
    msg.model = 3723U;
    msg.list.assign("OSWHALKXUNIMFFCQDSITFMWWGROKXPJRUPPIBWSOMJWMVZTZHOYFTEGDSWPVJBHKTHLUTOIGPODKJWCVMJECSISZVTMYZHAUVXTKXAPQNMUZQOMNPKRGXYMCFOIAJTIDJHKLUYYQRCFOADRRFEWGKBSIAQRNGFUHVAEXVGBLCLQVBNLLCNJHZRSBUZAYZRYXLGVEBWELGDUYZEDDHMVNCJPYEKLITKZQXBWRBQNNSHJCISUDPDQ");

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
    msg.setTimeStamp(0.9743352076744375);
    msg.setSource(15975U);
    msg.setSourceEntity(166U);
    msg.setDestination(15075U);
    msg.setDestinationEntity(139U);
    msg.type = 88U;
    msg.comm_interface = 4887U;
    msg.model = 59849U;
    msg.list.assign("MVVAVIVZMNTPSRBMXZRDOIQPJPJ");

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
    msg.setTimeStamp(0.2666977709126931);
    msg.setSource(48784U);
    msg.setSourceEntity(221U);
    msg.setDestination(11563U);
    msg.setDestinationEntity(192U);
    msg.type = 242U;
    msg.comm_interface = 1403U;
    msg.model = 7243U;
    msg.list.assign("OLUKIXFGNBGMBDEPTXPNUCLRVHCYKWMWTNFJCNHEBPOTTDKGAJVMONBSHLMBVYPMSWEQXZWCZJRZLLRBFNOIIRRDIDUZOYDBYKJWVFLGVQJCGKZEBYOUJEZEHRSXCTYZMAFPRQGSTRPQSQJVNNOTDYPVECQWHAVKALFFIAG");

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
    msg.setTimeStamp(0.7391069567433721);
    msg.setSource(32731U);
    msg.setSourceEntity(216U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(193U);
    msg.type = 139U;
    msg.req_id = 2316282539U;
    msg.ttl = 6933U;
    msg.code = 31U;
    msg.destination.assign("SUFBOMSKESZBGKYAFRGJTWCEOHUQZJGKCFXWPZHDYJPYLCDNXMNNWUQZQEFKIMLHLLHJEUEKXMPVVMJHXWCUEGA");
    msg.source.assign("XHSYASPBXCIDUOGGRJQPQAWXIYCBYLMJJALUXITFQLSYKQWQPGVSYEBFYONHAULSHJYAFPDVKEEBTAZDQSNPEDDHGDKVIHBOCWLMSQKJGNUVZGFRAXOCEEWCJMTIUMZDUNWILRUTZVAXZ");
    msg.acknowledge = 205U;
    msg.status = 128U;
    const char tmp_msg_0[] = {91, -41, 114, 72, 83, -98, -86, -112, 89, 15, 6, 81, -125, -21, -25, 119, 90, -62, -16, 35, -41, 76, 99, -126, 19, 85, 101, 55, 65, -54, -15, 96, -76, -77, 6, -52, -45, 66, -60, 51, -57, 16, 57, 67, -76, -97, 11, 37, 41, -68, -120, 66, -21, -111, -52, 81, -109, -19, -43, -55, 106, 59, 53, -124, 40, -11, -107, 87, -52, -50, -83, 69, -112, -107, -89, 91};
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
    msg.setTimeStamp(0.49031610716444696);
    msg.setSource(32746U);
    msg.setSourceEntity(101U);
    msg.setDestination(13360U);
    msg.setDestinationEntity(150U);
    msg.type = 57U;
    msg.req_id = 2163171041U;
    msg.ttl = 16674U;
    msg.code = 169U;
    msg.destination.assign("DXXEPBVYDVHS");
    msg.source.assign("JNFVMKHYHWGQQBKTUZGGNRNIWTVRLYHLEAEIIJDUWKWQBCXSEPSHICQREXDSNPVCKHIRVBOOKONUFTPDMWVCSNAEPJWWTSRSVAQV");
    msg.acknowledge = 171U;
    msg.status = 254U;
    const char tmp_msg_0[] = {21, 115, 122, -13, -57, -50, 75, 115, 116, 31, -67, -97, -21, 10, -24, 19, 80, 27, -71, -12, -113, -20, 85, 58, 125, -96, -38, -116, -55, -9, -48, -107, -19, -121, -79, -19, 76, 19, -85, -20, 58, -126, 121, 54, 45, -18, 25, -81, -104, -114, -21, 31, -2, 124, -125, 115, 94, -123, -7, -8, 50, 50, 82, -79, 35, -88, 3, 82, 91, -51, 61, -31, -56, 101, -36, -75, 23, -88, 19, 11, -67, 96, 110, -101, -98, -101, 107, 20, 4, 36, 12, 44, 60, 70, 36, -42, 50, 118, 19, 97, 55, 24, -56, 63, 19, 37, -109, 5, -15, -12, -95, -70, -93, 98, -92, 57, -19, -111, 53, -35, -64, 37, -108, 69, 62, 66, 107, -105, -59, -110, 113, -110, -118, 9, 104, 28, 68, 67, 29, 35, -115, -22, 71, 76, -62, -77, -82, -8, -33, 106, 24, -38, 63, 106, -98, -26, 11, 34, 56, -105, 78, -84, -119, -116, -11, -47, -21, -107, 95, 10, 124, 73, 62, 100, -10, -61, 87, 98, -4, -75, 57, -65, 21, -33, 53, 66, 38, 31, 78, 19, 81, 71, 31, -58, -53, -78, -99, 95, -14, -44, -46, 126, -19, 39, 42, 76, 34, 41};
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
    msg.setTimeStamp(0.35600028442248344);
    msg.setSource(51569U);
    msg.setSourceEntity(106U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(1U);
    msg.type = 194U;
    msg.req_id = 2431045028U;
    msg.ttl = 28514U;
    msg.code = 126U;
    msg.destination.assign("ZNNTZDTHPTEUEWPBBHSAVLESSAQVTWZPJHBIQYCMXGEGWWFFRLHUXNZKIHEGHFYGYMWSBVRXSRIHQICGJDKIYYCEQKQPPKVUGPTGJNIDARBLUOQOYAATKWTWMDRZLDIJ");
    msg.source.assign("LTAPCZJVBMLEYHSWXJYQIGIAWDEZGGABXUILHASFOTNAQKIYQPRAUPCYGFYWXIDJJKVULTSLSOZQEKWZIDOFOMGQMGVYTDOEWMHTLAPYPOGVDEFJNVBONIZKMNNDUTTRKQMPJDRXFQUGUQACBKTTHBRVXQHYLGSD");
    msg.acknowledge = 27U;
    msg.status = 195U;
    const char tmp_msg_0[] = {-10, -10, 106, 121, -7, -35, -102, 17, 11, 75, 2, 53, 81, -42, 47, 50, -71, -71, 121, -119, 64, -64, 0, 90, -3, 123, -101, -123, 57, 121, 33, -123, 91, 52, 91, 22, 107, 118, -116, 23, 67, -101, -105, -128, 90, -108, 53, 22, -52, -123, 122, 7, -66, -99, 3, -33, -74, 91, 8, 124, 59, -21, -55, -45, 94, -110, -26, -102, -2, -120, -66, 85, 22, 88, -109, 11, -75, -106, -42, 100, 46, -26, 78, 56, -34, 21, 36, 1, 105, -46, -26, 26, -8, 100, -86, 33, 124, -26, -86, 32, 38, 27, 29, -63, 85, -60, -82, 63, -9, 23, 105, -92, 22, 119, 69, -82, -19, -85, 73, 12, 110, -79, 25};
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
    msg.setTimeStamp(0.5617684089978496);
    msg.setSource(51237U);
    msg.setSourceEntity(44U);
    msg.setDestination(11843U);
    msg.setDestinationEntity(93U);
    msg.id = 22U;
    msg.range = 0.5631678942585603;

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
    msg.setTimeStamp(0.5926032118666429);
    msg.setSource(13016U);
    msg.setSourceEntity(109U);
    msg.setDestination(2410U);
    msg.setDestinationEntity(159U);
    msg.id = 202U;
    msg.range = 0.16924620371710475;

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
    msg.setTimeStamp(0.7920708687156621);
    msg.setSource(50667U);
    msg.setSourceEntity(176U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(241U);
    msg.id = 200U;
    msg.range = 0.31474853125975266;

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
    msg.setTimeStamp(0.4076530204051725);
    msg.setSource(48746U);
    msg.setSourceEntity(94U);
    msg.setDestination(63099U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("QZBEISSCBNYACHOYMCFEGHWTLXEJUYCGXQBWDZVKLGIJTPSLZSTRNDOLORIDNPFIHARJRLCEMXRDACNPPVVFABYO");
    msg.lat = 0.6719328683705339;
    msg.lon = 0.3633464955851282;
    msg.depth = 0.43341774856438253;
    msg.query_channel = 83U;
    msg.reply_channel = 176U;
    msg.transponder_delay = 252U;

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
    msg.setTimeStamp(0.8491443538768483);
    msg.setSource(20331U);
    msg.setSourceEntity(110U);
    msg.setDestination(27868U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("NBAYAWJRKXFKPINWQFRDILFIBAUEEPEBSXNJDAODHJBTHPXHESKDGTLCDZBORKLEVTPYRAMBSQUCOYSXMEGGXOTIUMYVUQXKUPALCSVOCPNSLYNJWOMLKEMTJUR");
    msg.lat = 0.44464954474721075;
    msg.lon = 0.971066552471004;
    msg.depth = 0.8340955318889691;
    msg.query_channel = 148U;
    msg.reply_channel = 239U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.6131172112025679);
    msg.setSource(52491U);
    msg.setSourceEntity(49U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(129U);
    msg.beacon.assign("ZNCTWMWTZKXAFRICLSMFKRGSZZYTKDPGPDSYRLOLUOUIEWRQZWDZHMVFEMFFURQVDUMSJOILEKRAWMA");
    msg.lat = 0.5940576755878705;
    msg.lon = 0.11686903556699535;
    msg.depth = 0.10568938806207151;
    msg.query_channel = 147U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 109U;

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
    msg.setTimeStamp(0.6071884544905798);
    msg.setSource(2248U);
    msg.setSourceEntity(162U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(233U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.6342340122019513);
    msg.setSource(19965U);
    msg.setSourceEntity(30U);
    msg.setDestination(50769U);
    msg.setDestinationEntity(176U);
    msg.op = 118U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GSMKZZTQURDVLSRHGFTBVQVLWIYPNJCPUAFQJZEXWUTMPVKYEOOJCPMSSNVTIWDADWNAFIDZQGESABETCQHULAWVHCEOEZXEQKPQPWONKTNZYAMRRMLHDQNXTLFXAHTMEIKLWXGUSUJBIKKFOYZBSVSDOOZRCJSGSICBHEQRZDRTLWBJJXUPFBDHHZJDGGHNNYM");
    tmp_msg_0.lat = 0.16375771040261056;
    tmp_msg_0.lon = 0.8741914366296243;
    tmp_msg_0.depth = 0.3927857059518598;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 67U;
    tmp_msg_0.transponder_delay = 130U;
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
    msg.setTimeStamp(0.3524638160295237);
    msg.setSource(53870U);
    msg.setSourceEntity(29U);
    msg.setDestination(63325U);
    msg.setDestinationEntity(33U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.3913624528924916);
    msg.setSource(15536U);
    msg.setSourceEntity(213U);
    msg.setDestination(808U);
    msg.setDestinationEntity(20U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 24976U;
    tmp_msg_0.lat = 0.6772709164616496;
    tmp_msg_0.lon = 0.010878923101575455;
    tmp_msg_0.z = 0.8940741575409153;
    tmp_msg_0.z_units = 253U;
    tmp_msg_0.duration = 65418U;
    tmp_msg_0.speed = 0.09200444270663188;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.type = 239U;
    tmp_msg_0.radius = 0.5395696176076898;
    tmp_msg_0.length = 0.2717131688424168;
    tmp_msg_0.bearing = 0.8009743095236442;
    tmp_msg_0.direction = 53U;
    tmp_msg_0.custom.assign("AQAAGSCCPSDZHQHYTWPRXXAKMEIIREYZUIEXNUMKQSRJWLQGRFYMJUDHNPMJMLDZNCFGIJZBXCFKLPMLPXLUSVVNQNWOTYFUUTDIVJDBNSELVKVDPACZWZPWOOMGFIBHZXQBYUSPFMEWFDJEOAAGHWQEPRMTHTKMLRCVLWOIANWXBEAXGBTZCKHRLKRTEBDQBCOJPHJUSHDVKILIFGSKINCAVJFGXOYQYYGB");
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
    msg.setTimeStamp(0.39716170505201587);
    msg.setSource(40438U);
    msg.setSourceEntity(9U);
    msg.setDestination(34522U);
    msg.setDestinationEntity(28U);
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 78U;
    tmp_msg_0.frag_number = 223U;
    tmp_msg_0.num_frags = 254U;
    const char tmp_tmp_msg_0_0[] = {1, -127, -17, -46, 95, -41, -78, -50, -114, -104, 99, -28, 120, 60, -107, 56, -74, -93, -108, -22, 65, -62, -116, -69, -86, -10, -6, -75, 16, 41, 44, 35, 12, -39, 1, -39, -110, 66, 9, -51, -63, 102, -109, -59, -14, 69, 21, 17, -107, -63, 37, -43, 39, -121, -116, 12, 119, 5, -42, -100, -12, 97, -42, -124, -34, 60, 38, -39, -65, -3, -115, 108, -46, -16, 107, -13, -64, 88, -26, 37, -99, 81, -115, -97, -3, -59, -50, 118, 17, -13, 100, -8, -64, 26, -93, 24, 90, 85, 9, -91, 11, -89, 3, 55, 104, -111, 121, -39, 27, -123, 31, 119, -104, -84, 35, -33, 20, -79, 120, -46, -74, -94, 10, -128, -71, 53, -16, -77, -40, 71, -122, -35, 54, -81, 35, -19, 102, -89, 52, -115, 103, -80, 52, -59, 84, 16, 66, -27, 16, 119, 80, 100, -57, 4, 48, -75, -114, 46, -7, 5, 64, -94, -20};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5482017316690382);
    msg.setSource(18889U);
    msg.setSourceEntity(212U);
    msg.setDestination(49065U);
    msg.setDestinationEntity(81U);
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.9198268517923115;
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
    msg.setTimeStamp(0.26601018960009826);
    msg.setSource(47222U);
    msg.setSourceEntity(17U);
    msg.setDestination(39238U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.665587174879658;
    msg.lon = 0.7942970373919284;
    msg.depth = 0.246350656266198;
    msg.sentence.assign("GOMJEEJWPEVGQBGIQBSFIWCEUNFXUYHAIMYXZISDNHPYTLRZOHYPNIAKBVGKWZUJMXESSIQXWAEJJFRLWBLG");
    msg.txtime = 0.3340499485270071;
    msg.modem_type.assign("CNTFMLZGST");
    msg.sys_src.assign("NZALSBSMJTFGDTIEMJFDZKNBVZBUIFQVDDHERWHNOMZHAZKAGVXUNAYGCPHASWD");
    msg.seq = 27237U;
    msg.sys_dst.assign("PLJEWCCPGNQOIBECZIUGNLOH");
    msg.flags = 43U;
    const char tmp_msg_0[] = {44, -94, 75, -26, -39, 6, 15, 14, -50, 70, 108, -103, -16, -18, 53, -6, 38, 123, 9, 66, 17, 55, -60, 27, 84, -95, -31, -19, 53, -10, 19, -125, -30, 117, 48, -14, -75, -9, -61, -18, -21, 56, 9, 80, -76, -69, 82, 31, -96, -113, 8, 50, -109, -64, -11, -73, 62, 10, -49, 27, 92, -22, 34, -56, -91, -127, 70, 25, 84, -32, -4, -92, 43, 82, 86, 105, -21, -101, -66, 63};
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
    msg.setTimeStamp(0.5506591872615424);
    msg.setSource(61939U);
    msg.setSourceEntity(224U);
    msg.setDestination(36744U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.5553698625517887;
    msg.lon = 0.29576695662779673;
    msg.depth = 0.24632124534763233;
    msg.sentence.assign("BKFJETQYHOCREXABNVFQVRHVNTZZCYSWHDHXFINNWTHRXKJMANLALVIYUIEANVPHIZBWYLDNTKKJEGGSLKCBCLSDOXFYSZFDMHXORQDCOJQBJAXIFSCYRKJIUAZETBCRJMUCWWFAPABVHJRLSWTCUIZQGIPUEZTMZFTPKWRWABOOOPDSBBHPFGLQVGJYXU");
    msg.txtime = 0.20863215921012657;
    msg.modem_type.assign("DWAHYLKGEJUBQDPCHVIPYSOSKJRQUUBTZGEYYNPLWEOGJVDXFQTXQCUOATKJPEZBNYIFCCGUGNEMXWK");
    msg.sys_src.assign("CAPFRKTSQBZNDLRRSNMFLVVKVMMEWXBGNRREVEOWSCPCKIQBNTHZEEHAUDHQWJIFVKOJMTGPXZCBLOMGLWUPXLAFQFMJBGVQYEXDTOTQXWXD");
    msg.seq = 41493U;
    msg.sys_dst.assign("PUGBAGSLBJBRJIIGSRUGZLUADNXDAWMXLTIRUFUZZKUXYFVAFFINRQWTOTSSCZUEWYBURMZJXRIXDEOFQMWQSCVYDFOLYGQYXEVVIGYJKWGVPTTYVAAVLNZLSAJPPOZHCJQIPBDMEXCRLPPRVOTEFNKLMKQCBMXOJNFCHCAGXDMHRYTWTYNAKVLNM");
    msg.flags = 165U;
    const char tmp_msg_0[] = {-8, 111, 99, -77, 59, -21, 59, 118, -49, -29, -27, 71, -13, -60, -69, 81, 31, -23, 66, 75, 9, 39, 86, -1, 33, -118, -30, 49, 76, -30, 31, 106, -27, 47, -120, -103, 69, -120, 83, 54, -117, -56, 51, 111, -52, 71, 58, 47, -9, 42, 71, 62, -3, 53, 46, -30, 116, 21, 90, -25, 92, 47, -55, 64, 43, 75, 39, 66, -128, 77, 16, 38, -112, -23, -93, -74, 0, 39, -55, -91, 15, -100, 68, 76, 113, 26, 57, 76, -42, -88, 103, -103, -42, 3, 76, -18, 100, -111, -67, -39, 56, -49, -43, 94, -76, -14, -44, 69, 3, 67, -41, 77, -110, -38, 1, 120, -5, 50, -17, -119};
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
    msg.setTimeStamp(0.06770509272013592);
    msg.setSource(320U);
    msg.setSourceEntity(181U);
    msg.setDestination(497U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.19069005774630077;
    msg.lon = 0.11996307361498082;
    msg.depth = 0.4255657786377084;
    msg.sentence.assign("ZQXJNFQPHHJFWMRCDMLZKXEIQHKDNLHOIKCRVSHWHNYZRYZOYWJHGOGIXLT");
    msg.txtime = 0.8162097993240817;
    msg.modem_type.assign("BDUTCFQYGQEITGLQAKPDUAYUYSJKOSKIXQOTLHZINXQFADRJPPXSFRWLHKG");
    msg.sys_src.assign("KADFPYLBBEMMMZZJWOFJBVYHDBUIGTXIIEXLOSCJUZBAGKGCMZWJCIKVWWTTSFZZJJWNONKLEPSORFGTLJVSNYPNNLLNRAHKSQMWSYRECFXFDXKSQCVUJKDHQCPRTOAMONJCTLAPBZVQWSGTGDZVUNHPDPUUECAWPUXBRUQEPQKZRHHHIMQHTDVGYYCXAWRKLUVYSBXYWSVMROAOEMXQAMTAIVEHXYIGN");
    msg.seq = 12375U;
    msg.sys_dst.assign("KLUIBVIERTDLRJKMICBWFXIJJDAMSGCUDYOKQNJWWGYNVLCHEENPSMPNUMWTOFFNPJHCBYBDCGQFZLBOEARSPQERFNOSGEQGMAZLMHGZLDZIBUYHDIWSMRKVOYBPTXNLVIMUJZFACGDBGUVAUPXNLSFQVEZWXXWKPZOCSVTCMTEOYOPGEWDHFLAHRIDUPSWBWSEAALGHXZQJKZZXVTYCTHYYRHTFUANHDPRM");
    msg.flags = 214U;
    const char tmp_msg_0[] = {10, -74, -28, -108, 55, -47, -85, -6, -57, 27, 34, -71, 35, -23, -31, 17, -58, -121, 50, -114, -62, -86, -77, 56, 28, 25, -78, 42, -1, 109, 9, 100, -29, -32, -99, 112, 23, -63, -128, -70, -15, -56, -80, -32, 97, -49, -128, 98, -3, -99, 77, 101, 43, -88, -3, -40, -27, 114, 8, 69, 28, -16, 10, 112, -48, -40, -21, -38, -37, -105, -106, -42, -112, -31, -61, 21, -89, -75, -110, 14, 77, 22, -85, -68, -39, 124, -121, -107, 126, -2, 28, -84, -25, -81, -75, 102, -37, 42, 89, -9, 24, -99, 27, -81, 39, 115, 86, -2, 67, 84, 51, 17, 47, -7, 2, 28, 62, -1, 123, -88, 27, 60, -91, -104, -57, -30, -89, 44, -44, -43, -90, 76, 26, 100, 100, -13, -91, 78, 95, 120, 20, 48, 57, 65, -106, -7, -65, 75, -25, -20, -4, 23, -125, 59, 41, -89, -87, -6, -49, 108, 30, 77, 50, -103, 119, -37, -107, 6, 82, 43, 19, 22, -23, 96, 62, -26, -119, 50, 104, -55, -79, 106, 126, 103, 105, 45, 103, -48, -74, -93, 8, -122, 71, -16, 90, 58, 106, -88, -99, 82, -128, 31, 91, 106, -77, 73, -115, 8, 75, -97, 114, 55, 21, 94, 82, 9, -75, 2, -28, 86, -100, 83, -31, -88, 107, 55, 104, 17, 105, 61, -102, -58, 122, -71, 22, 122, -64, -58, -30, -98};
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
    msg.setTimeStamp(0.3421068387030416);
    msg.setSource(31587U);
    msg.setSourceEntity(74U);
    msg.setDestination(56779U);
    msg.setDestinationEntity(37U);
    msg.op = 108U;
    msg.system.assign("RRTSWXLUYUYKRTJGQONMXWFPVGTZONALXBDEFMQFNI");
    msg.range = 0.772412104399988;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("LOLSIULKFZYEOQOGFAGPSYCMNXRICXQTBQORYWQJVUAZXTLQWWJZERYWPMAMZQFABLMHKGFUXJJNEHTCETMIECJDFXPDSICNGHOBAKNLMOXSNWSUMXDVBOLCMRCPUSZKTEBESVVFKNIGUSBBPAHVDNTFUPYQOPTWUUODNBDRWSKYZK");
    tmp_msg_0.sensor_class.assign("YBEOYGKJKMOJVDDNXUCDTIGEGYWMQSWDXTXAKTHCHVILDYNRZKCSXAHZAZTFLQDNBAIUMXUKBPFCFNZTGRRIDHBOPQWFWXGPIIUOUYCPGCLISCZIZKDEYZBHUOTQNDMNRRLZJLEVMMVXYSQNSHYGRLRFKBGXPUAWMOHAULHFELVNLZJMBCEVWJTSPNORQGGPMNFJJMSTPQVBAJUKECIYZWVWPQUJXASBDQ");
    tmp_msg_0.lat = 0.9666072348345318;
    tmp_msg_0.lon = 0.5192008978764986;
    tmp_msg_0.alt = 0.3932284256115468;
    tmp_msg_0.heading = 0.1165391271832471;
    tmp_msg_0.data.assign("TQQKHRSXXQPJEOYUPCSWKRZKFPEDURGERNYDWNBQTNBTUXAFOBXMVZOAFJOSPVQVTGRZAORDUZCWAAERWYJJGULVCPGJTMBLPSUCXFIETVQLXZMZJVWGXVPXKOGVMUFTBAYANIIHQNWQFJLPBZFH");
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
    msg.setTimeStamp(0.8721973503816056);
    msg.setSource(51189U);
    msg.setSourceEntity(212U);
    msg.setDestination(11759U);
    msg.setDestinationEntity(8U);
    msg.op = 138U;
    msg.system.assign("FCITMIXIERWUCHWQNWOCHYANYULQAGJZWYJXHUWI");
    msg.range = 0.6499556580634612;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 26920U;
    tmp_msg_0.flags = 155U;
    tmp_msg_0.lat = 0.19171454659574827;
    tmp_msg_0.lon = 0.8830828274003127;
    tmp_msg_0.start_z = 0.6691749225181758;
    tmp_msg_0.start_z_units = 124U;
    tmp_msg_0.end_z = 0.28722494477993643;
    tmp_msg_0.end_z_units = 239U;
    tmp_msg_0.radius = 0.8683976931993028;
    tmp_msg_0.speed = 0.5553980312346387;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.custom.assign("YYOESPBUXCEEXVEXYJNZCGFXZOACZKQTEKIAQVVDBTADHJZLPNQBWQDYJBGTTLFRWJSBTIQAUYLZLHGFQUCKFUWWIOKGEHOPKYMWJSOYTHJRWBOSEZLNCKEZEVTVHSBLUTOUCREOJQRVUMNFLZJXMDWRAMKMGIVBBWSYAGXUHQAX");
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
    msg.setTimeStamp(0.5990590104848359);
    msg.setSource(39058U);
    msg.setSourceEntity(53U);
    msg.setDestination(49825U);
    msg.setDestinationEntity(16U);
    msg.op = 176U;
    msg.system.assign("PRAOOGOOUJWOBFZQRGQNTSXDIXTYTCNSSCPFUNFEPDFNKDVWLDZGKELMKTHJLNTLHJWHZSFWAMUQZNFIYARME");
    msg.range = 0.7207767346960722;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 35178U;
    tmp_msg_0.status = 5U;
    tmp_msg_0.info.assign("TTQEDUBHKFAAPUXGHBLZFDVAZGOREYCGILZGWPGEFVDTEL");
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
    msg.setTimeStamp(0.13874138441482553);
    msg.setSource(52949U);
    msg.setSourceEntity(34U);
    msg.setDestination(17488U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.6481292360295138);
    msg.setSource(58696U);
    msg.setSourceEntity(228U);
    msg.setDestination(20957U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.9028669833938069);
    msg.setSource(22095U);
    msg.setSourceEntity(120U);
    msg.setDestination(49526U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.7532692978330101);
    msg.setSource(41622U);
    msg.setSourceEntity(209U);
    msg.setDestination(63207U);
    msg.setDestinationEntity(141U);
    msg.list.assign("HRJMDZCGXEPYCYWKPJLBYKNIBSGCQQBOEOTVVUORMMDEQSVTAKQCSZIRKLQMOWEAFLYOQNUIFHMJRBRABKSJLCYYWARDFDELPWOSXIVTNVRHTVKOUJMBLATQETRCNPYZCYMIXPJHWXHPDYDQDXGUBNKOLVNZDRLGPUVQHFNIJZZITCWN");

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
    msg.setTimeStamp(0.29009475825994235);
    msg.setSource(23135U);
    msg.setSourceEntity(118U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(246U);
    msg.list.assign("VLJLXFHOHSBIWZNTBZMHLFFCXMQDDDJKSHAJOIGARQXPNBHNMBCRBSEOWBMUEOXSPPHCJMCZFFQSORIYGOLAVPXWNQSCSCQLIRUYTKEPIYMWAVREKHTQFLGWZJRUGKYEGKBZQGDPKZMFN");

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
    msg.setTimeStamp(0.6649545590311968);
    msg.setSource(54621U);
    msg.setSourceEntity(34U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(3U);
    msg.list.assign("RMSMEWSJARPAVJUAXQDDRYDBUEBQPBYJOYZGTJXECGWBXHSTYMOHJHIUZGPHPNSBQKVOPIUONZZCTQFACWFWKUANGSWSWZLDBFEALKHXTZJOTIDMCKDVQIIKORLKHCJFCQWEEKEOZFRNPRQUGFVKXLZNDSMMLECUCSTHFXPGMJGNPZWGNIMDARMBYARGYCOYLMZTSQFXYVYFKINQOBIEXHWJYVRXERBNPHUATTIVGDPVVNQAI");

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
    msg.setTimeStamp(0.6544141282864672);
    msg.setSource(36814U);
    msg.setSourceEntity(130U);
    msg.setDestination(24952U);
    msg.setDestinationEntity(120U);
    msg.peer.assign("QQEYIYYTTRMIIGJZOBMPSLNWPRONUZAWSVRICRWNAUBYFOKQYUEUXMPWTBVGIXVYMDEJYTHSLPNVXQKCXFMZMHFOMXRFWTXGASEOUXWUEMBAVNPPASBHGCQAQOCFQDPWZLVRBZYYHMECOWKDKUSIEKZHLBDEERHSGJJAZTPFQZTORQNDBPVSXLZQGJWALRBIFWDJHIXKPGJJJYAJVNVKGTUCUIKASECCDGFLGDRNBNMULNSDXLCZ");
    msg.rssi = 0.8591568865118504;
    msg.integrity = 21246U;

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
    msg.setTimeStamp(0.7275661343138001);
    msg.setSource(57940U);
    msg.setSourceEntity(249U);
    msg.setDestination(31492U);
    msg.setDestinationEntity(137U);
    msg.peer.assign("FULBQAYRREPCZTKUYVRZEDGIEQGNNAXFWNSWZTHQPIWSBQDVSVKOSCDUVHNWZEMSFAFEXHCWJOQGWDHPVVTMIBJYYTAKKXWRF");
    msg.rssi = 0.6657884912892088;
    msg.integrity = 38922U;

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
    msg.setTimeStamp(0.5435712381682052);
    msg.setSource(6698U);
    msg.setSourceEntity(68U);
    msg.setDestination(64542U);
    msg.setDestinationEntity(34U);
    msg.peer.assign("UWCOPYROIUKHRUAZQLPRPDPNJTIJENXYFHAWBEGVGXVZOOZLUPIIWTHMRNSSSTXUJMBOLGBNABKYAQUIPTLSHCVQZYMSVUCBEWBOKSOPJQVAQRNKXTHGVWKBQUXRDHWLKTGFCFXFWSXLAQGZVIFGYVMFXKCWAZGTROPMZFTKMCNNDTQY");
    msg.rssi = 0.6670477366587912;
    msg.integrity = 8420U;

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
    msg.setTimeStamp(0.9973240101293631);
    msg.setSource(55512U);
    msg.setSourceEntity(56U);
    msg.setDestination(32575U);
    msg.setDestinationEntity(53U);
    msg.req_id = 55833U;
    msg.destination.assign("BAGGXEVWGFIUQOIRQRBHJOJDAAWDRPYCCDPOQQXVHAQTABSLAEMKRTHCRITPWPJJYBJGIWCROTCTTHYCXOZWIENHLMPSLZOYAXLCFGZ");
    msg.timeout = 0.8212576809639341;
    msg.range = 0.2805819234834084;
    msg.type = 16U;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 116U;
    tmp_msg_0.ncells = 224U;
    tmp_msg_0.coord_sys = 94U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.300199540874992;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.5282177518439872;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.33859180985425796;
    tmp_tmp_tmp_msg_0_0_0.cor = 128U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5788168302858103);
    msg.setSource(30907U);
    msg.setSourceEntity(252U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(14U);
    msg.req_id = 55857U;
    msg.destination.assign("UMTPJTREBLNKBUWZZKWGCHNKMEZGMQLHMBVTVAMYXFIKUCWPHXLPLNQNYFDJNHKXJSEJDVROREDNBCFDACMOHJSAHICTIYSJPUOZQSABGILYKBPQMPESBAZBVPCEROWWMGIYNUUYNDFFWEAHPTLJVJKFRGUGQXSUA");
    msg.timeout = 0.07487945084756453;
    msg.range = 0.7019284217779638;
    msg.type = 239U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 51U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("DINXLULJVGDCPPGBMXHWDEEDBJLDSSGVAHIYULCERRGXHHOGULNKHSNZSTOGOKISUWCPPEFMJILKWKMKMQXNOHVTNWPWRTVAFAFUREPFQBRJXLEJEBKZAIKJDYHOYLCYCQFMNUMGNVHRDADNMZVDQZWXQTXSWBUQZQUTSWSOJYBHAYJWZTYFAOCREILSYZ");
    tmp_tmp_msg_0_0.lat = 0.4828434565564709;
    tmp_tmp_msg_0_0.lon = 0.6654675438149449;
    tmp_tmp_msg_0_0.depth = 0.5476906973055145;
    tmp_tmp_msg_0_0.query_channel = 16U;
    tmp_tmp_msg_0_0.reply_channel = 178U;
    tmp_tmp_msg_0_0.transponder_delay = 181U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.44945767613053145);
    msg.setSource(46376U);
    msg.setSourceEntity(177U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(171U);
    msg.req_id = 29194U;
    msg.destination.assign("QDXYKXARMUIRWOVPUJGAZCEKSGVMLOUICXFOANNSHBZZTUNPIJUYZKRAVATVOGMBBVPFGKDNXTUTEMNCIBVQSMEZWPOXYAWKPWMUELHFHAZKCDTSZPDQAFGRDBWXSXDCVYOIBPRFWXYQUKEBGHUXQMKNQSPLEZIIGSGRNVFGETDD");
    msg.timeout = 0.47560342712465997;
    msg.range = 0.24226679935867856;
    msg.type = 234U;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OWRVBIITCBWYFHYCLROCEVRISUSMXLJMMUQQHAZIYVIWSHPSBFJXPNLGUAVGQGPSJSAYIOPXSNPJZUZFPFKUTGFFXBNDWFC");
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
    msg.setTimeStamp(0.7306780066567613);
    msg.setSource(46486U);
    msg.setSourceEntity(144U);
    msg.setDestination(21199U);
    msg.setDestinationEntity(32U);
    msg.req_id = 14583U;
    msg.type = 114U;
    msg.status = 61U;
    msg.info.assign("AYCQVWEQJLPIL");
    msg.range = 0.6897834603746255;

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
    msg.setTimeStamp(0.26528343155171175);
    msg.setSource(57776U);
    msg.setSourceEntity(84U);
    msg.setDestination(26388U);
    msg.setDestinationEntity(59U);
    msg.req_id = 34321U;
    msg.type = 112U;
    msg.status = 252U;
    msg.info.assign("XKNLARYXSKGQWGYHJGAXOXWTTGBDJKJVMQNHD");
    msg.range = 0.09557061762216301;

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
    msg.setTimeStamp(0.5477596812976446);
    msg.setSource(8604U);
    msg.setSourceEntity(83U);
    msg.setDestination(63240U);
    msg.setDestinationEntity(191U);
    msg.req_id = 23038U;
    msg.type = 164U;
    msg.status = 234U;
    msg.info.assign("ITDCMLFRXVTCWGOXVEUUZIZZODXONSSGQUJVGGOIVXUYOGXYSUBMNSGWCHEKTCNDTELMXUYSEQGWJLVBHBFYJCKIASXLDTAMWZAORPQKDVDLWRESKPSHVABKNXWMOXTDONJAHQEQYEGLQAQNRIGKJUTHWNMVCZSJQYEBTBICLDTMJWQNHPIGUHXDFHCDPUKCPBMBYRIWMPTZBLFRHSLPKREAPRPAKEVAFFFOZJBVAHWRINNF");
    msg.range = 0.41365973111108156;

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
    msg.setTimeStamp(0.33220914280784897);
    msg.setSource(17621U);
    msg.setSourceEntity(162U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(135U);
    msg.value = 29137;

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
    msg.setTimeStamp(0.9391657178790634);
    msg.setSource(34922U);
    msg.setSourceEntity(205U);
    msg.setDestination(42767U);
    msg.setDestinationEntity(218U);
    msg.value = -471;

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
    msg.setTimeStamp(0.7866195269198051);
    msg.setSource(28237U);
    msg.setSourceEntity(191U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(12U);
    msg.value = -32646;

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
    msg.setTimeStamp(0.9451584882563833);
    msg.setSource(23570U);
    msg.setSourceEntity(254U);
    msg.setDestination(5956U);
    msg.setDestinationEntity(83U);
    msg.value = 0.48991015022131423;

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
    msg.setTimeStamp(0.7929867952884292);
    msg.setSource(59623U);
    msg.setSourceEntity(252U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(69U);
    msg.value = 0.4962514379509544;

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
    msg.setTimeStamp(0.3458432065224938);
    msg.setSource(41597U);
    msg.setSourceEntity(224U);
    msg.setDestination(14344U);
    msg.setDestinationEntity(153U);
    msg.value = 0.5307169588911603;

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
    msg.setTimeStamp(0.6062495282707857);
    msg.setSource(40913U);
    msg.setSourceEntity(14U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(46U);
    msg.value = 0.13799706434371029;

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
    msg.setTimeStamp(0.9834774229052317);
    msg.setSource(17685U);
    msg.setSourceEntity(65U);
    msg.setDestination(23378U);
    msg.setDestinationEntity(73U);
    msg.value = 0.3570192611745021;

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
    msg.setTimeStamp(0.6358787002945143);
    msg.setSource(6084U);
    msg.setSourceEntity(211U);
    msg.setDestination(19040U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8839095741264767;

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
    msg.setTimeStamp(0.791825135527711);
    msg.setSource(4524U);
    msg.setSourceEntity(156U);
    msg.setDestination(9132U);
    msg.setDestinationEntity(115U);
    msg.validity = 14539U;
    msg.type = 157U;
    msg.utc_year = 14830U;
    msg.utc_month = 139U;
    msg.utc_day = 179U;
    msg.utc_time = 0.4596040205833489;
    msg.lat = 0.9354559219207251;
    msg.lon = 0.9773339148104894;
    msg.height = 0.9708495110500671;
    msg.satellites = 11U;
    msg.cog = 0.23462720671613024;
    msg.sog = 0.0649588372622133;
    msg.hdop = 0.24195558105939519;
    msg.vdop = 0.6284113991244656;
    msg.hacc = 0.3546839351771667;
    msg.vacc = 0.9700529582073367;

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
    msg.setTimeStamp(0.7641305218976867);
    msg.setSource(6698U);
    msg.setSourceEntity(123U);
    msg.setDestination(54413U);
    msg.setDestinationEntity(58U);
    msg.validity = 59997U;
    msg.type = 8U;
    msg.utc_year = 6588U;
    msg.utc_month = 163U;
    msg.utc_day = 104U;
    msg.utc_time = 0.6293621950674658;
    msg.lat = 0.055898300021983593;
    msg.lon = 0.8417812237744573;
    msg.height = 0.6180123229525439;
    msg.satellites = 216U;
    msg.cog = 0.13392338304178109;
    msg.sog = 0.9286755393657513;
    msg.hdop = 0.3658644302224373;
    msg.vdop = 0.7367924664365868;
    msg.hacc = 0.4000276375255406;
    msg.vacc = 0.48886184433413193;

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
    msg.setTimeStamp(0.648332697645995);
    msg.setSource(59721U);
    msg.setSourceEntity(167U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(191U);
    msg.validity = 34791U;
    msg.type = 29U;
    msg.utc_year = 1630U;
    msg.utc_month = 58U;
    msg.utc_day = 2U;
    msg.utc_time = 0.277428030322983;
    msg.lat = 0.4497802731704321;
    msg.lon = 0.6083459473472524;
    msg.height = 0.5134465990249711;
    msg.satellites = 164U;
    msg.cog = 0.26739063807413266;
    msg.sog = 0.47368763960273796;
    msg.hdop = 0.8947209698094195;
    msg.vdop = 0.5104355792864402;
    msg.hacc = 0.009340662488846574;
    msg.vacc = 0.012883776846308037;

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
    msg.setTimeStamp(0.21858823099760405);
    msg.setSource(26617U);
    msg.setSourceEntity(254U);
    msg.setDestination(3554U);
    msg.setDestinationEntity(68U);
    msg.time = 0.7516348737278281;
    msg.phi = 0.030127582056321378;
    msg.theta = 0.23363729630842078;
    msg.psi = 0.5772450497131301;
    msg.psi_magnetic = 0.9030501246798948;

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
    msg.setTimeStamp(0.32998289246704504);
    msg.setSource(51871U);
    msg.setSourceEntity(241U);
    msg.setDestination(54298U);
    msg.setDestinationEntity(122U);
    msg.time = 0.1960576579967872;
    msg.phi = 0.25838669017313254;
    msg.theta = 0.8980631198497181;
    msg.psi = 0.6101272598098361;
    msg.psi_magnetic = 0.6544731011768183;

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
    msg.setTimeStamp(0.38859532470643454);
    msg.setSource(37109U);
    msg.setSourceEntity(121U);
    msg.setDestination(12049U);
    msg.setDestinationEntity(167U);
    msg.time = 0.39426336681672347;
    msg.phi = 0.13819860627166192;
    msg.theta = 0.8859838412269242;
    msg.psi = 0.4141984621962018;
    msg.psi_magnetic = 0.8734517010646837;

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
    msg.setTimeStamp(0.7675502476574517);
    msg.setSource(56595U);
    msg.setSourceEntity(153U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(192U);
    msg.time = 0.5688096019748118;
    msg.x = 0.10770130498253905;
    msg.y = 0.8927182312539614;
    msg.z = 0.9167752467867121;
    msg.timestep = 0.6988976845675765;

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
    msg.setTimeStamp(0.48986944966313806);
    msg.setSource(25740U);
    msg.setSourceEntity(154U);
    msg.setDestination(41568U);
    msg.setDestinationEntity(112U);
    msg.time = 0.020592218127517548;
    msg.x = 0.796384349672646;
    msg.y = 0.2350125145707398;
    msg.z = 0.7964224349553115;
    msg.timestep = 0.06743228540252155;

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
    msg.setTimeStamp(0.7298224532293304);
    msg.setSource(55118U);
    msg.setSourceEntity(142U);
    msg.setDestination(20095U);
    msg.setDestinationEntity(243U);
    msg.time = 0.6890652110349534;
    msg.x = 0.33103584020338894;
    msg.y = 0.49495548866102945;
    msg.z = 0.2463206155059513;
    msg.timestep = 0.5034200665869181;

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
    msg.setTimeStamp(0.3753176901126364);
    msg.setSource(13550U);
    msg.setSourceEntity(6U);
    msg.setDestination(46991U);
    msg.setDestinationEntity(103U);
    msg.time = 0.07535298540661839;
    msg.x = 0.1007629970409174;
    msg.y = 0.8960989502542037;
    msg.z = 0.9594607960688137;

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
    msg.setTimeStamp(0.5675960848660059);
    msg.setSource(15377U);
    msg.setSourceEntity(158U);
    msg.setDestination(55347U);
    msg.setDestinationEntity(153U);
    msg.time = 0.06028746084256076;
    msg.x = 0.8241640463591492;
    msg.y = 0.14151863954891053;
    msg.z = 0.8825809568304298;

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
    msg.setTimeStamp(0.5038314177694311);
    msg.setSource(43209U);
    msg.setSourceEntity(118U);
    msg.setDestination(59930U);
    msg.setDestinationEntity(39U);
    msg.time = 0.04541555486479687;
    msg.x = 0.5721545061900063;
    msg.y = 0.8984038572245738;
    msg.z = 0.630083013248609;

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
    msg.setTimeStamp(0.3662846583369136);
    msg.setSource(7573U);
    msg.setSourceEntity(58U);
    msg.setDestination(14436U);
    msg.setDestinationEntity(197U);
    msg.time = 0.7728383985344944;
    msg.x = 0.18143557738199112;
    msg.y = 0.319077042097884;
    msg.z = 0.7674316336727692;

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
    msg.setTimeStamp(0.2535358671224617);
    msg.setSource(11597U);
    msg.setSourceEntity(159U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(159U);
    msg.time = 0.3063178337901309;
    msg.x = 0.1474026418626866;
    msg.y = 0.0842471383752934;
    msg.z = 0.7980831544931599;

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
    msg.setTimeStamp(0.872387801356972);
    msg.setSource(28900U);
    msg.setSourceEntity(249U);
    msg.setDestination(33587U);
    msg.setDestinationEntity(9U);
    msg.time = 0.841545926280009;
    msg.x = 0.3219557770700464;
    msg.y = 0.12314448739112471;
    msg.z = 0.5981320464992778;

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
    msg.setTimeStamp(0.6339369225669205);
    msg.setSource(11289U);
    msg.setSourceEntity(47U);
    msg.setDestination(61275U);
    msg.setDestinationEntity(161U);
    msg.time = 0.37551079846731283;
    msg.x = 0.06703238015609181;
    msg.y = 0.888755009576582;
    msg.z = 0.2062118831597719;

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
    msg.setTimeStamp(0.500150261865055);
    msg.setSource(40283U);
    msg.setSourceEntity(202U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(196U);
    msg.time = 0.37278964176437457;
    msg.x = 0.9690440446287891;
    msg.y = 0.43670814330556784;
    msg.z = 0.9065055451182702;

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
    msg.setTimeStamp(0.07200136220200226);
    msg.setSource(15935U);
    msg.setSourceEntity(136U);
    msg.setDestination(24700U);
    msg.setDestinationEntity(245U);
    msg.time = 0.6847092972798522;
    msg.x = 0.11526938729580272;
    msg.y = 0.4875390462041782;
    msg.z = 0.34953674047497385;

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
    msg.setTimeStamp(0.08973888025597054);
    msg.setSource(62458U);
    msg.setSourceEntity(248U);
    msg.setDestination(62553U);
    msg.setDestinationEntity(158U);
    msg.validity = 24U;
    msg.x = 0.021375397478316738;
    msg.y = 0.023854743030604975;
    msg.z = 0.7549715455101462;

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
    msg.setTimeStamp(0.8222184888345446);
    msg.setSource(17169U);
    msg.setSourceEntity(233U);
    msg.setDestination(18455U);
    msg.setDestinationEntity(139U);
    msg.validity = 19U;
    msg.x = 0.061006287086771915;
    msg.y = 0.351706717861894;
    msg.z = 0.41322417604614736;

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
    msg.setTimeStamp(0.15391091066085538);
    msg.setSource(61889U);
    msg.setSourceEntity(243U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(50U);
    msg.validity = 9U;
    msg.x = 0.7017958568514289;
    msg.y = 0.930281653014905;
    msg.z = 0.8475002058105812;

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
    msg.setTimeStamp(0.8394198017999793);
    msg.setSource(11194U);
    msg.setSourceEntity(153U);
    msg.setDestination(7872U);
    msg.setDestinationEntity(56U);
    msg.validity = 93U;
    msg.x = 0.28482812727445084;
    msg.y = 0.5160766552782544;
    msg.z = 0.5951007668368464;

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
    msg.setTimeStamp(0.2742337515501053);
    msg.setSource(6312U);
    msg.setSourceEntity(162U);
    msg.setDestination(65019U);
    msg.setDestinationEntity(236U);
    msg.validity = 51U;
    msg.x = 0.6381373936436034;
    msg.y = 0.05506249677857844;
    msg.z = 0.23862145521218625;

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
    msg.setTimeStamp(0.7955743239342215);
    msg.setSource(60878U);
    msg.setSourceEntity(13U);
    msg.setDestination(44344U);
    msg.setDestinationEntity(43U);
    msg.validity = 44U;
    msg.x = 0.6185874139921217;
    msg.y = 0.5051450581702804;
    msg.z = 0.4726807956905269;

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
    msg.setTimeStamp(0.6450944133011018);
    msg.setSource(15184U);
    msg.setSourceEntity(165U);
    msg.setDestination(52989U);
    msg.setDestinationEntity(110U);
    msg.time = 0.6365476864665942;
    msg.x = 0.5441233997724729;
    msg.y = 0.6567387272362302;
    msg.z = 0.9788255028407479;

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
    msg.setTimeStamp(0.4553051201508933);
    msg.setSource(40827U);
    msg.setSourceEntity(245U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(48U);
    msg.time = 0.2816243497757578;
    msg.x = 0.6923727539718645;
    msg.y = 0.6138448720019738;
    msg.z = 0.8751344525899122;

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
    msg.setTimeStamp(0.5918940211975);
    msg.setSource(34125U);
    msg.setSourceEntity(112U);
    msg.setDestination(53331U);
    msg.setDestinationEntity(87U);
    msg.time = 0.3325443705661846;
    msg.x = 0.5209344032861679;
    msg.y = 0.32484967305767;
    msg.z = 0.2405893010191823;

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
    msg.setTimeStamp(0.09713859578528694);
    msg.setSource(29214U);
    msg.setSourceEntity(115U);
    msg.setDestination(42329U);
    msg.setDestinationEntity(238U);
    msg.validity = 221U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9136173884921258;
    tmp_msg_0.beam_height = 0.13656035144323464;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4106570618531087;

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
    msg.setTimeStamp(0.9514854862676037);
    msg.setSource(10434U);
    msg.setSourceEntity(167U);
    msg.setDestination(41743U);
    msg.setDestinationEntity(183U);
    msg.validity = 121U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5944569294705035;
    tmp_msg_0.y = 0.26205249477996506;
    tmp_msg_0.z = 0.20889275065054091;
    tmp_msg_0.phi = 0.2753802667213262;
    tmp_msg_0.theta = 0.36644080071949126;
    tmp_msg_0.psi = 0.9152079187633487;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.970717306752384;
    tmp_msg_1.beam_height = 0.5240441631468454;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6951579433606679;

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
    msg.setTimeStamp(0.8294223513801564);
    msg.setSource(7131U);
    msg.setSourceEntity(5U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(14U);
    msg.validity = 143U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.279090353841126;
    tmp_msg_0.y = 0.6894622727185679;
    tmp_msg_0.z = 0.4302967971956041;
    tmp_msg_0.phi = 0.9245996284252986;
    tmp_msg_0.theta = 0.17723375763792037;
    tmp_msg_0.psi = 0.7347784234644708;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.021992238007640497;
    tmp_msg_1.beam_height = 0.9510192868685228;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6062251535908971;

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
    msg.setTimeStamp(0.8349195858403292);
    msg.setSource(8259U);
    msg.setSourceEntity(166U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(241U);
    msg.value = 0.6080312597271019;

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
    msg.setTimeStamp(0.9192915688500642);
    msg.setSource(55379U);
    msg.setSourceEntity(45U);
    msg.setDestination(62916U);
    msg.setDestinationEntity(97U);
    msg.value = 0.45053999883722895;

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
    msg.setTimeStamp(0.20261544077893345);
    msg.setSource(46613U);
    msg.setSourceEntity(181U);
    msg.setDestination(3556U);
    msg.setDestinationEntity(8U);
    msg.value = 0.001233703419128207;

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
    msg.setTimeStamp(0.39669979936972644);
    msg.setSource(41361U);
    msg.setSourceEntity(111U);
    msg.setDestination(7492U);
    msg.setDestinationEntity(178U);
    msg.value = 0.3641483596861973;

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
    msg.setTimeStamp(0.422161212879298);
    msg.setSource(44775U);
    msg.setSourceEntity(118U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(39U);
    msg.value = 0.2251111051873661;

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
    msg.setTimeStamp(0.6882100857089744);
    msg.setSource(39983U);
    msg.setSourceEntity(146U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(240U);
    msg.value = 0.37007616155454204;

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
    msg.setTimeStamp(0.36417770235873237);
    msg.setSource(24289U);
    msg.setSourceEntity(0U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(243U);
    msg.value = 0.39546857651309597;

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
    msg.setTimeStamp(0.25660292501000503);
    msg.setSource(22768U);
    msg.setSourceEntity(94U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(108U);
    msg.value = 0.17075444251242533;

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
    msg.setTimeStamp(0.984632261132551);
    msg.setSource(893U);
    msg.setSourceEntity(252U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(163U);
    msg.value = 0.667393161950301;

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
    msg.setTimeStamp(0.7394504283901593);
    msg.setSource(8026U);
    msg.setSourceEntity(188U);
    msg.setDestination(22079U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8891936619488033;

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
    msg.setTimeStamp(0.8906721505466219);
    msg.setSource(809U);
    msg.setSourceEntity(249U);
    msg.setDestination(64883U);
    msg.setDestinationEntity(220U);
    msg.value = 0.468843071809647;

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
    msg.setTimeStamp(0.06423389714815353);
    msg.setSource(21567U);
    msg.setSourceEntity(90U);
    msg.setDestination(46972U);
    msg.setDestinationEntity(206U);
    msg.value = 0.05314360048940203;

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
    msg.setTimeStamp(0.9454317833475419);
    msg.setSource(51218U);
    msg.setSourceEntity(47U);
    msg.setDestination(9431U);
    msg.setDestinationEntity(8U);
    msg.value = 0.2952650674154639;

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
    msg.setTimeStamp(0.44299620551440666);
    msg.setSource(45066U);
    msg.setSourceEntity(155U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(33U);
    msg.value = 0.5221172900867672;

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
    msg.setTimeStamp(0.2571410171275289);
    msg.setSource(31813U);
    msg.setSourceEntity(185U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0667515142677445;

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
    msg.setTimeStamp(0.5250462859724923);
    msg.setSource(55185U);
    msg.setSourceEntity(195U);
    msg.setDestination(32095U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9851541120283552;

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
    msg.setTimeStamp(0.4648546103094653);
    msg.setSource(64134U);
    msg.setSourceEntity(164U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8663954317263849;

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
    msg.setTimeStamp(0.5203026688841742);
    msg.setSource(16791U);
    msg.setSourceEntity(102U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(171U);
    msg.value = 0.28077932648877746;

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
    msg.setTimeStamp(0.6114934612048479);
    msg.setSource(33056U);
    msg.setSourceEntity(101U);
    msg.setDestination(60651U);
    msg.setDestinationEntity(106U);
    msg.value = 0.32758401863910713;

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
    msg.setTimeStamp(0.48232477542979746);
    msg.setSource(40281U);
    msg.setSourceEntity(221U);
    msg.setDestination(1299U);
    msg.setDestinationEntity(82U);
    msg.value = 0.4476563619553049;

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
    msg.setTimeStamp(0.8845756393443059);
    msg.setSource(31533U);
    msg.setSourceEntity(137U);
    msg.setDestination(50678U);
    msg.setDestinationEntity(195U);
    msg.value = 0.5052320935748481;

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
    msg.setTimeStamp(0.3888901388708421);
    msg.setSource(29388U);
    msg.setSourceEntity(33U);
    msg.setDestination(19034U);
    msg.setDestinationEntity(191U);
    msg.value = 0.289757944070409;

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
    msg.setTimeStamp(0.8799987757815142);
    msg.setSource(29273U);
    msg.setSourceEntity(25U);
    msg.setDestination(53271U);
    msg.setDestinationEntity(104U);
    msg.value = 0.1972922865921385;

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
    msg.setTimeStamp(0.17076344305334445);
    msg.setSource(19395U);
    msg.setSourceEntity(154U);
    msg.setDestination(25464U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8946034810940339;

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
    msg.setTimeStamp(0.6830660077453652);
    msg.setSource(33002U);
    msg.setSourceEntity(71U);
    msg.setDestination(17915U);
    msg.setDestinationEntity(218U);
    msg.direction = 0.4279107654016687;
    msg.speed = 0.14867078825897884;
    msg.turbulence = 0.7469967235469676;

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
    msg.setTimeStamp(0.22024001698003193);
    msg.setSource(5706U);
    msg.setSourceEntity(199U);
    msg.setDestination(29821U);
    msg.setDestinationEntity(32U);
    msg.direction = 0.3266057221530849;
    msg.speed = 0.25897347490636113;
    msg.turbulence = 0.7913811134866411;

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
    msg.setTimeStamp(0.38060462068090783);
    msg.setSource(55030U);
    msg.setSourceEntity(147U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(42U);
    msg.direction = 0.6909026241210059;
    msg.speed = 0.5124812842018641;
    msg.turbulence = 0.9056184644356762;

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
    msg.setTimeStamp(0.4897395679384663);
    msg.setSource(51139U);
    msg.setSourceEntity(98U);
    msg.setDestination(19456U);
    msg.setDestinationEntity(133U);
    msg.value = 0.2968913946738442;

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
    msg.setTimeStamp(0.6448701360971717);
    msg.setSource(45781U);
    msg.setSourceEntity(216U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(214U);
    msg.value = 0.15857989181906418;

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
    msg.setTimeStamp(0.4916881064613654);
    msg.setSource(38182U);
    msg.setSourceEntity(206U);
    msg.setDestination(4979U);
    msg.setDestinationEntity(76U);
    msg.value = 0.22563692927075651;

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
    msg.setTimeStamp(0.49921328260183806);
    msg.setSource(28267U);
    msg.setSourceEntity(139U);
    msg.setDestination(53806U);
    msg.setDestinationEntity(91U);
    msg.value.assign("IRQFNWAYJKZOFEKWFYADBTLRLNGEXDWLBGQMFGHXLHFMACXUIOQSCUVVJPBOVUYLTOATQEFLNUJRGHQGSKBQJK");

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
    msg.setTimeStamp(0.1272590211405359);
    msg.setSource(64990U);
    msg.setSourceEntity(87U);
    msg.setDestination(256U);
    msg.setDestinationEntity(217U);
    msg.value.assign("ACPEBQFHILTLAMGBMIYNKHNQMXMJXXLOYBDWPIFFUPXYDIDELCEPZERXEBWAVNXLBYOYILKZ");

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
    msg.setTimeStamp(0.14385306542870446);
    msg.setSource(57682U);
    msg.setSourceEntity(164U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(216U);
    msg.value.assign("XDSYHFUEMEHVXZBVWNIJYBGYKVBDJDPRGOEWKTPYHYWFGDUIQGSOHSIISFNTTEZOVMONKTSQCTWVPZEQULQWXIECLKSYZLXMLYKMJSCITFQIDLBACZLOCDDBSANGVFLUZWHTZXJVDGKFHUAAJMMOJBJGRMLBIHNCZRTNPOGRVNPVUAAKYQQR");

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
    msg.setTimeStamp(0.06830918833826627);
    msg.setSource(49475U);
    msg.setSourceEntity(113U);
    msg.setDestination(36186U);
    msg.setDestinationEntity(191U);
    const char tmp_msg_0[] = {-48, -71, 105, -72, -36, -28, 2, 111, 5, 80, -78, -83, -91, -125, -99, 2, -51, 92, -28, 102, 6, -5, -9, -61, -2, 77, -116, -127, 72, 30, -32, -122, 43, 49, -44, 68, -125, -80, 52, -31, -15, 19, 31, 37, 110, -78, 8, -7};
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
    msg.setTimeStamp(0.36044243323301206);
    msg.setSource(12115U);
    msg.setSourceEntity(165U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(172U);
    const char tmp_msg_0[] = {25, -85, -78, -59, 112, 108, 56, -95, -51, -100, -101, -2, -37, -90, -34, 64, -80, -39, -43, -32, -25, 64, -48, -11, -107, -42, 26, 9, -38, 45, 15, -1, -23, -41, -90, -36, -60, 8, 115, -15, 97, -94, -58, 45, 19, -35, -91, -55, -10, -19, -64, 115, -12, -123, 17, -93, 90, 91, 108, 46, 62, -16, 32, 21, 19, 20, -73, 123, -97, -51, -90, -65, 102, 63, -59, -47, -100, -64, 29, -56, -84, 120, -48, 22, 110, -50, -1, -72, -95, 66, -31, -10, 74, 22, 108, 102, -37, -100, 88, -87, 18, -33, 96, -50, 72, 2, -98, -74, -89, 62, -87, 46};
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
    msg.setTimeStamp(0.9061607629711069);
    msg.setSource(49274U);
    msg.setSourceEntity(227U);
    msg.setDestination(62974U);
    msg.setDestinationEntity(127U);
    const char tmp_msg_0[] = {83, 30, 98, 34, -30, 40, -84, -118, 81, -127, 15, -100, 47, 36, 33, -70, 61, -8, -17, 70, 108, -103, 51, 111, 32, 68, 73, -104, -5, -126, -74, -18, 46, -116, 87, 58, -96, -58, 25, 118, 51, -19, 122, 94, 83, 1, 25, -118, -56, -93, -95, -99, 14, -113, 125, 22, 3, 100, -46, -5, -101, 79, 66, 54, -31, -20, -52, -45, 14, -10, 125, 103, -60, -118, -87, 126, 34, 89, -53, -44, -81, 67, -126, -109, 1, 84, -33, -74, -108, -104, -32, 9, 66, -90, -102, 111, -107, 66, 104, -53, -125, -108, 53, 11, 10, -121, 110, -60, 109, 56, -74, 60, -103, 122, -91, 67, -45, -10, 18, -60, -16, 84, -91, -19, -51, -84, 93, -125, -63, -76, 45, 61, -12, -92, -80, 126, -107, -54, 10, 44, 100, 18, 123, 41, -79, -30, -105, -94, -80, 95, -10, 85, -66, 126, 125, 89, -25, 62, -84, 49, -77, 26, -60, -43, 102, 116, -97, -26, 96, 110, -4, -21, 110, 66, -20, -35, 109, -87, -78, 3, -123, -73, -76, 20, 60, -86, 107, 19, 111, -100, -111, 12, 55, -96, -72, 73, -57, -16, -23, -128, -17, 63, 123, -128, -89, 103, -101, 98, 37, 40, 76, -3, -95, -97, 51, 68, -105, 119, -22, 55, 34, 88, 63, -71, 119, 70, 24, 30, -30, 110, -73, 42, 114, -3, 68, -107, -40, -107, -107, -103, 1, -40, -63, 65, 80, 100, 10};
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
    msg.setTimeStamp(0.33362228954797146);
    msg.setSource(58693U);
    msg.setSourceEntity(100U);
    msg.setDestination(5737U);
    msg.setDestinationEntity(199U);
    msg.value = 0.3672748025574839;

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
    msg.setTimeStamp(0.7448703868204192);
    msg.setSource(43565U);
    msg.setSourceEntity(16U);
    msg.setDestination(4356U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9306109987764538;

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
    msg.setTimeStamp(0.4073953714646773);
    msg.setSource(54269U);
    msg.setSourceEntity(71U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(139U);
    msg.value = 0.36599632424345896;

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
    msg.setTimeStamp(0.4300366350030673);
    msg.setSource(26544U);
    msg.setSourceEntity(79U);
    msg.setDestination(17792U);
    msg.setDestinationEntity(164U);
    msg.type = 48U;
    msg.frequency = 3124478151U;
    msg.min_range = 3398U;
    msg.max_range = 8867U;
    msg.bits_per_point = 53U;
    msg.scale_factor = 0.7760060984454699;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.43902892485575873;
    tmp_msg_0.beam_height = 0.5506651151844949;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-18, -72, 23, 21, -101, 80, 85, 64, -94, 21, 80, -57, -81, 115, 33, 47, 36, -7, 106, 29, 75, -77, 51, 66, 32, 126, -91, -82, 84, -110, -107, 16, 89, -127, 125, -67, -98, 126, 2, -76, 103, 7, 28, -38, -60, -8, -42, -100, -98, -113, -125, 92, -72, 42, 7, 84, -24, 57, 66, -61, -46, -39, 45, 82, -45, -42, 86, 62, -18, 63, 72, -4, -99, 31, 60, -125, -50, -88, 46, -68, 28, -32, -1, 108, 24, -40, 109, 43, 67, -52, -126, 110, 45, -16, -50, 56, 100, 2, 29, 122, 65, 54, -37, 57, 4, -49, -42, -74, -83, 93, 31, -119, -29, -41, -58, 81, 45, -18, -78, -56, -54, 47, 109, 79, 44, -5, 86, -53, 33, 29, 4, -23, -115, -12, -34, 76, -35, 70, -68, -85, 75, 99, -99, 13, -76, 108, 119, 123, 125, -106, 83, -109, 35, 96, -89, -23, 18, -54, 9, 34, -107, 35, -107, -96, -126, -2, -102, -90};
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
    msg.setTimeStamp(0.8165340046110596);
    msg.setSource(40379U);
    msg.setSourceEntity(195U);
    msg.setDestination(11072U);
    msg.setDestinationEntity(81U);
    msg.type = 42U;
    msg.frequency = 473242732U;
    msg.min_range = 47168U;
    msg.max_range = 43404U;
    msg.bits_per_point = 189U;
    msg.scale_factor = 0.0718044808537045;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7276700086043058;
    tmp_msg_0.beam_height = 0.050534456886981105;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {95, 79, -45, -117, 5, 66, -12, 40, 25, -18, -102, 61, 67, -7, -82, -5, 24, 97, -9, 27, 46, -124, -69, -58, 102, 92, 104, 76, -76, 64, 106, 111, 32, -14, -80, -102, 77, 32, 46, -16, 14, -65, 72, 88, 61, 113, -55, 93, -42, 119, 7, 77, 71, -80, -12, -93, 103, -52, -84, -115, -7, 34, -120, 61, -57, 47, 66, 84, -6, 123, 31, 93, -95, -86, 113, 101, -58, -41, 69, -58, -9, 118, 75, 117, -16, 94, 108, -64, -16, -35, 37, 68, -60, -3, -46, 96, 62, 35, 53, -20, 114, 80, -38, -52, -30, 1, 18, -70, 113, -73, 115, -30, -26, 18, 17, -99, -39, -31, -2, -55, -42, 76, 82, 84, 67, -70, -25, 78, -7, 84, 118, -9, 7, -126, 94, 125, 25, 119, -77, 47, 97, -31, -55, -30, -122, -72, -35, 103, 10, -7, 83, -40, 83, -44, 124, 20, -108, -4, 16, 109, -86, -78, -84, -42, -91, -117, -15, -74, 22, -101, -19, 122, -34, -101, 51, -29, -89, -6, 90, -94, 47, -96, 8, 31, -10, 46, -116};
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
    msg.setTimeStamp(0.1883348331340695);
    msg.setSource(14976U);
    msg.setSourceEntity(148U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(122U);
    msg.type = 115U;
    msg.frequency = 3344536258U;
    msg.min_range = 9516U;
    msg.max_range = 24576U;
    msg.bits_per_point = 34U;
    msg.scale_factor = 0.18696487882715562;
    const char tmp_msg_0[] = {92, 86, 14, 120, 123, -76, -11, -41, -16, 5, -19, 103, -13, 99, 53, -89, -124, 109, 9, 40, -5, -7, 52, -65, 99, -127, 99, 109};
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
    msg.setTimeStamp(0.8934123186771883);
    msg.setSource(14266U);
    msg.setSourceEntity(82U);
    msg.setDestination(15444U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.41947257066071897);
    msg.setSource(11025U);
    msg.setSourceEntity(167U);
    msg.setDestination(1136U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.6955285924852938);
    msg.setSource(40812U);
    msg.setSourceEntity(65U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.11717006204295755);
    msg.setSource(880U);
    msg.setSourceEntity(146U);
    msg.setDestination(40135U);
    msg.setDestinationEntity(99U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.23754980100648138);
    msg.setSource(33863U);
    msg.setSourceEntity(159U);
    msg.setDestination(3168U);
    msg.setDestinationEntity(236U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.43003502285215267);
    msg.setSource(594U);
    msg.setSourceEntity(243U);
    msg.setDestination(24421U);
    msg.setDestinationEntity(208U);
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
    msg.setTimeStamp(0.1062109263687323);
    msg.setSource(30246U);
    msg.setSourceEntity(39U);
    msg.setDestination(26076U);
    msg.setDestinationEntity(229U);
    msg.value = 0.19169404751670616;
    msg.confidence = 0.8626908801902428;
    msg.opmodes.assign("SXGPAFMBMNAMHPYINVIDSVYLXQHTZCLPCZRJCYVKAVWCHBLGILFQMUYICHFEWWPJJNJLVYZEJLAMVMSRXNGVGHBFRKMFKKYBCLOGEOWTMSDPCUIYQAAQNDSDJTPSQCFUWHDRGAHQKPTNDWRFNVDXOBZVTLOFBNKZUXZONHSEMYZJYDKFSBTJGQIMGUTGEAILBTOCQZTCUETXEKDODQFVERUUHJPAAESRWXJIOBUIWROS");

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
    msg.setTimeStamp(0.6678644266864655);
    msg.setSource(23980U);
    msg.setSourceEntity(102U);
    msg.setDestination(64508U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5887236386564071;
    msg.confidence = 0.4255117644843184;
    msg.opmodes.assign("YDMMIHKVKUIGCYJNXEAVHSMKZDTPOLBMXANLLLVJMNRYYEGOLTCFBAFHOTVXXCJODFWPBZRQPYVPDGGNRDKJDYT");

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
    msg.setTimeStamp(0.8629738514535625);
    msg.setSource(17437U);
    msg.setSourceEntity(5U);
    msg.setDestination(53246U);
    msg.setDestinationEntity(28U);
    msg.value = 0.945636851676098;
    msg.confidence = 0.6558464131191516;
    msg.opmodes.assign("ARQLKUXUZHKDNTXBZUTCZELLLLOLSTHBHJKYMSQZIDMNIJETLNTEUOETMVRIPQKIAVPCGVVJQWGCMLYVARPZXSLXETWFCAWIPHPPAUZVMHWHZKDKRWFFIYDOGNGNWWYUJPJSGPDKMOMWJHYQEF");

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
    msg.setTimeStamp(0.622661777835022);
    msg.setSource(30775U);
    msg.setSourceEntity(113U);
    msg.setDestination(61894U);
    msg.setDestinationEntity(6U);
    msg.itow = 2544116246U;
    msg.lat = 0.5692997428216577;
    msg.lon = 0.3078123586077275;
    msg.height_ell = 0.09154297147524604;
    msg.height_sea = 0.5520853974258869;
    msg.hacc = 0.22615399701586847;
    msg.vacc = 0.4454524950621567;
    msg.vel_n = 0.6631857092764245;
    msg.vel_e = 0.7862891807149364;
    msg.vel_d = 0.8955218817307917;
    msg.speed = 0.4756502139063937;
    msg.gspeed = 0.8929044717451138;
    msg.heading = 0.4759381366717108;
    msg.sacc = 0.4186906378656392;
    msg.cacc = 0.8398954126324029;

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
    msg.setTimeStamp(0.9064063827563452);
    msg.setSource(38178U);
    msg.setSourceEntity(189U);
    msg.setDestination(61740U);
    msg.setDestinationEntity(246U);
    msg.itow = 13057485U;
    msg.lat = 0.23317707807155696;
    msg.lon = 0.18210272731773547;
    msg.height_ell = 0.3100034617089702;
    msg.height_sea = 0.8951075395409632;
    msg.hacc = 0.814915424888581;
    msg.vacc = 0.4833364244286297;
    msg.vel_n = 0.5525073941626271;
    msg.vel_e = 0.48574679299737733;
    msg.vel_d = 0.8868801969144399;
    msg.speed = 0.21792878029816054;
    msg.gspeed = 0.7043869681018381;
    msg.heading = 0.9278478666182667;
    msg.sacc = 0.6711168992084555;
    msg.cacc = 0.8887193392041663;

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
    msg.setTimeStamp(0.5544022357978617);
    msg.setSource(27584U);
    msg.setSourceEntity(135U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(185U);
    msg.itow = 3682789729U;
    msg.lat = 0.8641651942353447;
    msg.lon = 0.4480932612531052;
    msg.height_ell = 0.8997116215262534;
    msg.height_sea = 0.4275861561785258;
    msg.hacc = 0.130082835035628;
    msg.vacc = 0.6202384728988407;
    msg.vel_n = 0.029160356748609284;
    msg.vel_e = 0.2748980613345431;
    msg.vel_d = 0.56824293123836;
    msg.speed = 0.20424919041547906;
    msg.gspeed = 0.5510354145561495;
    msg.heading = 0.4014149744488975;
    msg.sacc = 0.20169153874960388;
    msg.cacc = 0.8273619860267021;

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
    msg.setTimeStamp(0.5038882197634653);
    msg.setSource(62164U);
    msg.setSourceEntity(147U);
    msg.setDestination(12391U);
    msg.setDestinationEntity(242U);
    msg.id = 209U;
    msg.value = 0.12828211368060738;

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
    msg.setTimeStamp(0.831233521165243);
    msg.setSource(24493U);
    msg.setSourceEntity(125U);
    msg.setDestination(53903U);
    msg.setDestinationEntity(39U);
    msg.id = 197U;
    msg.value = 0.18003871342547084;

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
    msg.setTimeStamp(0.8685378617350662);
    msg.setSource(19165U);
    msg.setSourceEntity(175U);
    msg.setDestination(14269U);
    msg.setDestinationEntity(107U);
    msg.id = 128U;
    msg.value = 0.46145386146665135;

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
    msg.setTimeStamp(0.24128824240032598);
    msg.setSource(23103U);
    msg.setSourceEntity(54U);
    msg.setDestination(2194U);
    msg.setDestinationEntity(192U);
    msg.x = 0.4832360241029421;
    msg.y = 0.6112335027519317;
    msg.z = 0.23231076559870045;
    msg.phi = 0.15794318773222582;
    msg.theta = 0.4645581358569719;
    msg.psi = 0.10105450967600049;

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
    msg.setTimeStamp(0.21628293124675158);
    msg.setSource(31979U);
    msg.setSourceEntity(14U);
    msg.setDestination(27432U);
    msg.setDestinationEntity(235U);
    msg.x = 0.765971003120798;
    msg.y = 0.3457975495441086;
    msg.z = 0.12863991110420359;
    msg.phi = 0.502806242054876;
    msg.theta = 0.2726395772627065;
    msg.psi = 0.22966922215165708;

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
    msg.setTimeStamp(0.5997156147541788);
    msg.setSource(31779U);
    msg.setSourceEntity(101U);
    msg.setDestination(57703U);
    msg.setDestinationEntity(157U);
    msg.x = 0.9231441904089954;
    msg.y = 0.10820111019703393;
    msg.z = 0.473132739651839;
    msg.phi = 0.5300999131461851;
    msg.theta = 0.8280092269493761;
    msg.psi = 0.4228375472820347;

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
    msg.setTimeStamp(0.18399378421660928);
    msg.setSource(40922U);
    msg.setSourceEntity(49U);
    msg.setDestination(37398U);
    msg.setDestinationEntity(126U);
    msg.beam_width = 0.5375998159526844;
    msg.beam_height = 0.42932183153361847;

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
    msg.setTimeStamp(0.2613334837987654);
    msg.setSource(41371U);
    msg.setSourceEntity(131U);
    msg.setDestination(40960U);
    msg.setDestinationEntity(156U);
    msg.beam_width = 0.9894121462334695;
    msg.beam_height = 0.15999683035925427;

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
    msg.setTimeStamp(0.5839674200022507);
    msg.setSource(17223U);
    msg.setSourceEntity(208U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.37133445475184357;
    msg.beam_height = 0.7448077196314629;

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
    msg.setTimeStamp(0.6618486549131977);
    msg.setSource(3922U);
    msg.setSourceEntity(184U);
    msg.setDestination(36146U);
    msg.setDestinationEntity(33U);
    msg.sane = 96U;

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
    msg.setTimeStamp(0.7203801956073366);
    msg.setSource(15371U);
    msg.setSourceEntity(155U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(79U);
    msg.sane = 151U;

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
    msg.setTimeStamp(0.7265257282105201);
    msg.setSource(62976U);
    msg.setSourceEntity(183U);
    msg.setDestination(38847U);
    msg.setDestinationEntity(187U);
    msg.sane = 132U;

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
    msg.setTimeStamp(0.7122999609073238);
    msg.setSource(14763U);
    msg.setSourceEntity(37U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(6U);
    msg.value = 0.9128755458237949;

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
    msg.setTimeStamp(0.60523217553917);
    msg.setSource(59118U);
    msg.setSourceEntity(109U);
    msg.setDestination(38626U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4742915320542802;

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
    msg.setTimeStamp(0.7449520465741166);
    msg.setSource(49444U);
    msg.setSourceEntity(152U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5159371492353538;

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
    msg.setTimeStamp(0.17882702264914185);
    msg.setSource(49435U);
    msg.setSourceEntity(235U);
    msg.setDestination(56452U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9280186024784632;

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
    msg.setTimeStamp(0.3200703527150337);
    msg.setSource(28317U);
    msg.setSourceEntity(44U);
    msg.setDestination(5488U);
    msg.setDestinationEntity(130U);
    msg.value = 0.41339104392582515;

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
    msg.setTimeStamp(0.11550559367415825);
    msg.setSource(2888U);
    msg.setSourceEntity(145U);
    msg.setDestination(45715U);
    msg.setDestinationEntity(160U);
    msg.value = 0.3588430650702822;

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
    msg.setTimeStamp(0.6837842601309964);
    msg.setSource(48168U);
    msg.setSourceEntity(131U);
    msg.setDestination(5297U);
    msg.setDestinationEntity(203U);
    msg.value = 0.05585012110410137;

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
    msg.setTimeStamp(0.9634954305109416);
    msg.setSource(6220U);
    msg.setSourceEntity(29U);
    msg.setDestination(1888U);
    msg.setDestinationEntity(216U);
    msg.value = 0.004391584355663891;

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
    msg.setTimeStamp(0.9237167656223079);
    msg.setSource(45968U);
    msg.setSourceEntity(218U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(128U);
    msg.value = 0.22805694397372056;

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
    msg.setTimeStamp(0.5591407195590935);
    msg.setSource(47751U);
    msg.setSourceEntity(223U);
    msg.setDestination(12972U);
    msg.setDestinationEntity(145U);
    msg.value = 0.01275685236066404;

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
    msg.setTimeStamp(0.8537990640639567);
    msg.setSource(64934U);
    msg.setSourceEntity(203U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(61U);
    msg.value = 0.15446248654265382;

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
    msg.setTimeStamp(0.9218681782202137);
    msg.setSource(41605U);
    msg.setSourceEntity(141U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(2U);
    msg.value = 0.8280759182353384;

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
    msg.setTimeStamp(0.8827024726563882);
    msg.setSource(43501U);
    msg.setSourceEntity(20U);
    msg.setDestination(41398U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6393722559321855;

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
    msg.setTimeStamp(0.21954667988505172);
    msg.setSource(61938U);
    msg.setSourceEntity(130U);
    msg.setDestination(52514U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7098894758186384;

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
    msg.setTimeStamp(0.9946102181101989);
    msg.setSource(55001U);
    msg.setSourceEntity(29U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7891215749340944;

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
    msg.setTimeStamp(0.23619582299150543);
    msg.setSource(11010U);
    msg.setSourceEntity(127U);
    msg.setDestination(41066U);
    msg.setDestinationEntity(44U);
    msg.value = 0.9646503060091524;

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
    msg.setTimeStamp(0.8264984964438956);
    msg.setSource(11371U);
    msg.setSourceEntity(227U);
    msg.setDestination(11233U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3560808828660008;

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
    msg.setTimeStamp(0.2259744458785875);
    msg.setSource(23078U);
    msg.setSourceEntity(251U);
    msg.setDestination(51091U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2795332775294863;

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
    msg.setTimeStamp(0.8978166056818829);
    msg.setSource(21365U);
    msg.setSourceEntity(150U);
    msg.setDestination(46709U);
    msg.setDestinationEntity(112U);
    msg.value = 0.807334030548689;

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
    msg.setTimeStamp(0.9591095569299458);
    msg.setSource(32425U);
    msg.setSourceEntity(59U);
    msg.setDestination(59169U);
    msg.setDestinationEntity(9U);
    msg.value = 0.7777753970442615;

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
    msg.setTimeStamp(0.06952100009001716);
    msg.setSource(35226U);
    msg.setSourceEntity(28U);
    msg.setDestination(11899U);
    msg.setDestinationEntity(199U);
    msg.value = 0.3675978152102358;

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
    msg.setTimeStamp(0.735940621968341);
    msg.setSource(31536U);
    msg.setSourceEntity(85U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6558514697960003;

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
    msg.setTimeStamp(0.997102626027106);
    msg.setSource(42218U);
    msg.setSourceEntity(135U);
    msg.setDestination(1008U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5412549553862653;

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
    msg.setTimeStamp(0.048550672955084195);
    msg.setSource(48941U);
    msg.setSourceEntity(64U);
    msg.setDestination(12954U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8388870530214507;

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
    msg.setTimeStamp(0.12570778505972235);
    msg.setSource(55271U);
    msg.setSourceEntity(229U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(199U);
    msg.validity = 13630U;
    msg.type = 159U;
    msg.tow = 2784656409U;
    msg.base_lat = 0.3489751246074255;
    msg.base_lon = 0.29471272349174393;
    msg.base_height = 0.7783121517285049;
    msg.n = 0.621286720885723;
    msg.e = 0.9747011280564513;
    msg.d = 0.7473483349583386;
    msg.v_n = 0.8978668931687364;
    msg.v_e = 0.10399076759755943;
    msg.v_d = 0.8393650112371771;
    msg.satellites = 54U;
    msg.iar_hyp = 16201U;
    msg.iar_ratio = 0.6818496794936055;

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
    msg.setTimeStamp(0.691396421895885);
    msg.setSource(3614U);
    msg.setSourceEntity(13U);
    msg.setDestination(7028U);
    msg.setDestinationEntity(22U);
    msg.validity = 51089U;
    msg.type = 240U;
    msg.tow = 1133535421U;
    msg.base_lat = 0.4846777858467137;
    msg.base_lon = 0.49439921200172454;
    msg.base_height = 0.4371352526634942;
    msg.n = 0.8288887730848151;
    msg.e = 0.7418535163890945;
    msg.d = 0.3164888272585865;
    msg.v_n = 0.38445444105852566;
    msg.v_e = 0.18212413072166467;
    msg.v_d = 0.20056657147000756;
    msg.satellites = 82U;
    msg.iar_hyp = 9973U;
    msg.iar_ratio = 0.17404198026503837;

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
    msg.setTimeStamp(0.6287173056199785);
    msg.setSource(13039U);
    msg.setSourceEntity(236U);
    msg.setDestination(40009U);
    msg.setDestinationEntity(152U);
    msg.validity = 50319U;
    msg.type = 112U;
    msg.tow = 310406950U;
    msg.base_lat = 0.29753334525026454;
    msg.base_lon = 0.4862420791116503;
    msg.base_height = 0.9871873462502766;
    msg.n = 0.06039121081376986;
    msg.e = 0.16847887507656;
    msg.d = 0.004579314885348573;
    msg.v_n = 0.6670578602735777;
    msg.v_e = 0.7996426131255457;
    msg.v_d = 0.7885716978949738;
    msg.satellites = 74U;
    msg.iar_hyp = 14363U;
    msg.iar_ratio = 0.07648126789626686;

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
    msg.setTimeStamp(0.6063449287504109);
    msg.setSource(56674U);
    msg.setSourceEntity(24U);
    msg.setDestination(805U);
    msg.setDestinationEntity(84U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6943777197148979;
    tmp_msg_0.lon = 0.28554989917109663;
    tmp_msg_0.height = 0.19199813578396407;
    tmp_msg_0.x = 0.5987139213357471;
    tmp_msg_0.y = 0.2672643898089627;
    tmp_msg_0.z = 0.39982755111873103;
    tmp_msg_0.phi = 0.19874680831619163;
    tmp_msg_0.theta = 0.6609456408148657;
    tmp_msg_0.psi = 0.24757389834462606;
    tmp_msg_0.u = 0.628409612945;
    tmp_msg_0.v = 0.46212074122831537;
    tmp_msg_0.w = 0.8979416074127226;
    tmp_msg_0.vx = 0.47400894050292564;
    tmp_msg_0.vy = 0.6215225438324075;
    tmp_msg_0.vz = 0.10932597785284326;
    tmp_msg_0.p = 0.7617620300376179;
    tmp_msg_0.q = 0.2797972378077064;
    tmp_msg_0.r = 0.794646580502398;
    tmp_msg_0.depth = 0.7904786413233675;
    tmp_msg_0.alt = 0.5298623947480066;
    msg.state.set(tmp_msg_0);
    msg.type = 179U;

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
    msg.setTimeStamp(0.7697860259483729);
    msg.setSource(60435U);
    msg.setSourceEntity(204U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(16U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5716963241268238;
    tmp_msg_0.lon = 0.21576964276127686;
    tmp_msg_0.height = 0.24801921605297705;
    tmp_msg_0.x = 0.5423851382780572;
    tmp_msg_0.y = 0.9404296447541785;
    tmp_msg_0.z = 0.08780053193214354;
    tmp_msg_0.phi = 0.4117819960372594;
    tmp_msg_0.theta = 0.24968800158579585;
    tmp_msg_0.psi = 0.7626138542532158;
    tmp_msg_0.u = 0.8976592379583553;
    tmp_msg_0.v = 0.5821834125212049;
    tmp_msg_0.w = 0.09820657811029299;
    tmp_msg_0.vx = 0.6818197947847863;
    tmp_msg_0.vy = 0.8113678266627843;
    tmp_msg_0.vz = 0.917581029109714;
    tmp_msg_0.p = 0.6442589202143147;
    tmp_msg_0.q = 0.10976417671580252;
    tmp_msg_0.r = 0.2977764954953461;
    tmp_msg_0.depth = 0.5248493265853966;
    tmp_msg_0.alt = 0.9573511305022888;
    msg.state.set(tmp_msg_0);
    msg.type = 228U;

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
    msg.setTimeStamp(0.6323049790805461);
    msg.setSource(43715U);
    msg.setSourceEntity(32U);
    msg.setDestination(1564U);
    msg.setDestinationEntity(206U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.006854720124275349;
    tmp_msg_0.lon = 0.399819399854044;
    tmp_msg_0.height = 0.95988030488286;
    tmp_msg_0.x = 0.42766392524204266;
    tmp_msg_0.y = 0.14946743130001805;
    tmp_msg_0.z = 0.8008958796228551;
    tmp_msg_0.phi = 0.38719779748531435;
    tmp_msg_0.theta = 0.9184053005534915;
    tmp_msg_0.psi = 0.8215123446095753;
    tmp_msg_0.u = 0.9289091110783958;
    tmp_msg_0.v = 0.0982738228064175;
    tmp_msg_0.w = 0.9504581832454144;
    tmp_msg_0.vx = 0.7358594237677184;
    tmp_msg_0.vy = 0.4706820652946143;
    tmp_msg_0.vz = 0.4289190910519223;
    tmp_msg_0.p = 0.6569702192728823;
    tmp_msg_0.q = 0.7063411829974662;
    tmp_msg_0.r = 0.7215775231147813;
    tmp_msg_0.depth = 0.6231040609468169;
    tmp_msg_0.alt = 0.6307554117656375;
    msg.state.set(tmp_msg_0);
    msg.type = 105U;

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
    msg.setTimeStamp(0.8029972778212362);
    msg.setSource(63176U);
    msg.setSourceEntity(55U);
    msg.setDestination(18676U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6808032475415723;

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
    msg.setTimeStamp(0.43419494107805856);
    msg.setSource(56344U);
    msg.setSourceEntity(8U);
    msg.setDestination(14304U);
    msg.setDestinationEntity(57U);
    msg.value = 0.2931913436994873;

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
    msg.setTimeStamp(0.02142876956189621);
    msg.setSource(20621U);
    msg.setSourceEntity(166U);
    msg.setDestination(2970U);
    msg.setDestinationEntity(66U);
    msg.value = 0.87579590143967;

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
    msg.setTimeStamp(0.34431946827074356);
    msg.setSource(10125U);
    msg.setSourceEntity(64U);
    msg.setDestination(49525U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6953273760015413;

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
    msg.setTimeStamp(0.41211406777476667);
    msg.setSource(21321U);
    msg.setSourceEntity(100U);
    msg.setDestination(43011U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8542355406570842;

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
    msg.setTimeStamp(0.4647795999528579);
    msg.setSource(53194U);
    msg.setSourceEntity(31U);
    msg.setDestination(3094U);
    msg.setDestinationEntity(17U);
    msg.value = 0.010798110692332163;

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
    msg.setTimeStamp(0.8211998764552845);
    msg.setSource(2156U);
    msg.setSourceEntity(54U);
    msg.setDestination(13426U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9269591268185479;

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
    msg.setTimeStamp(0.5999242149700639);
    msg.setSource(6200U);
    msg.setSourceEntity(234U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7069060373488222;

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
    msg.setTimeStamp(0.028277914493674894);
    msg.setSource(54446U);
    msg.setSourceEntity(101U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(178U);
    msg.value = 0.16831252750524006;

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
    msg.setTimeStamp(0.015311781517112877);
    msg.setSource(14770U);
    msg.setSourceEntity(51U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6663158809683045;

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
    msg.setTimeStamp(0.06438007953933134);
    msg.setSource(63799U);
    msg.setSourceEntity(52U);
    msg.setDestination(34296U);
    msg.setDestinationEntity(250U);
    msg.value = 0.17662171401816806;

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
    msg.setTimeStamp(0.8700967670943859);
    msg.setSource(42445U);
    msg.setSourceEntity(249U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(229U);
    msg.value = 0.5995430772741225;

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
    msg.setTimeStamp(0.6112928705391792);
    msg.setSource(64242U);
    msg.setSourceEntity(37U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(128U);
    msg.value = 0.7839803544876334;

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
    msg.setTimeStamp(0.05693195978633414);
    msg.setSource(7616U);
    msg.setSourceEntity(147U);
    msg.setDestination(17037U);
    msg.setDestinationEntity(14U);
    msg.value = 0.38411374376570284;

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
    msg.setTimeStamp(0.0839523475104238);
    msg.setSource(44711U);
    msg.setSourceEntity(192U);
    msg.setDestination(20432U);
    msg.setDestinationEntity(80U);
    msg.value = 0.40171585331143755;

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
    msg.setTimeStamp(0.3167531401065573);
    msg.setSource(24218U);
    msg.setSourceEntity(228U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(142U);
    msg.id = 163U;
    msg.zoom = 99U;
    msg.action = 201U;

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
    msg.setTimeStamp(0.08741384774593997);
    msg.setSource(64320U);
    msg.setSourceEntity(2U);
    msg.setDestination(57441U);
    msg.setDestinationEntity(81U);
    msg.id = 77U;
    msg.zoom = 6U;
    msg.action = 140U;

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
    msg.setTimeStamp(0.19244570317264498);
    msg.setSource(3432U);
    msg.setSourceEntity(119U);
    msg.setDestination(32006U);
    msg.setDestinationEntity(236U);
    msg.id = 37U;
    msg.zoom = 147U;
    msg.action = 56U;

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
    msg.setTimeStamp(0.5514716970158329);
    msg.setSource(52326U);
    msg.setSourceEntity(72U);
    msg.setDestination(53601U);
    msg.setDestinationEntity(13U);
    msg.id = 15U;
    msg.value = 0.8113275902311495;

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
    msg.setTimeStamp(0.9587187817085161);
    msg.setSource(1855U);
    msg.setSourceEntity(124U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(32U);
    msg.id = 194U;
    msg.value = 0.6834108134491484;

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
    msg.setTimeStamp(0.10679132644060152);
    msg.setSource(62688U);
    msg.setSourceEntity(110U);
    msg.setDestination(60540U);
    msg.setDestinationEntity(81U);
    msg.id = 19U;
    msg.value = 0.3645159985986164;

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
    msg.setTimeStamp(0.3199855159929097);
    msg.setSource(4078U);
    msg.setSourceEntity(191U);
    msg.setDestination(26860U);
    msg.setDestinationEntity(180U);
    msg.id = 161U;
    msg.value = 0.5783656852495125;

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
    msg.setTimeStamp(0.733416867824479);
    msg.setSource(34200U);
    msg.setSourceEntity(248U);
    msg.setDestination(30680U);
    msg.setDestinationEntity(201U);
    msg.id = 24U;
    msg.value = 0.37651368561847376;

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
    msg.setTimeStamp(0.7282002741394393);
    msg.setSource(3169U);
    msg.setSourceEntity(240U);
    msg.setDestination(22841U);
    msg.setDestinationEntity(211U);
    msg.id = 251U;
    msg.value = 0.36377127175107826;

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
    msg.setTimeStamp(0.9613371944351903);
    msg.setSource(54076U);
    msg.setSourceEntity(141U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(46U);
    msg.id = 102U;
    msg.angle = 0.4032654291657475;

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
    msg.setTimeStamp(0.8058882479882271);
    msg.setSource(39565U);
    msg.setSourceEntity(13U);
    msg.setDestination(8576U);
    msg.setDestinationEntity(53U);
    msg.id = 83U;
    msg.angle = 0.26223762811236384;

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
    msg.setTimeStamp(0.44067006795039043);
    msg.setSource(43921U);
    msg.setSourceEntity(126U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(99U);
    msg.id = 192U;
    msg.angle = 0.06811446581446823;

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
    msg.setTimeStamp(0.1416989505741565);
    msg.setSource(60544U);
    msg.setSourceEntity(227U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(135U);
    msg.op = 68U;
    msg.actions.assign("CPYBDHGFLORKRPPVMG");

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
    msg.setTimeStamp(0.8009600719842647);
    msg.setSource(54975U);
    msg.setSourceEntity(210U);
    msg.setDestination(50625U);
    msg.setDestinationEntity(74U);
    msg.op = 204U;
    msg.actions.assign("ZXGMPFRBQMKSTACRCTOOLVTNPN");

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
    msg.setTimeStamp(0.7643519820968381);
    msg.setSource(23985U);
    msg.setSourceEntity(126U);
    msg.setDestination(51923U);
    msg.setDestinationEntity(123U);
    msg.op = 96U;
    msg.actions.assign("WTXDAMHECONKLHFDZAYUYRVNDTXMUXBJSNJKDETEOLZIA");

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
    msg.setTimeStamp(0.9288845420589936);
    msg.setSource(60280U);
    msg.setSourceEntity(43U);
    msg.setDestination(51942U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("YMMKPSGYDVIKEQADFOFFJUDLJXFZXREKOVLNMVDFQOTSOWSYMHGHMPWITPQXHJWVWLZSNXCMJJLNWKGYOZMWLVVHDBBNPLEIPNGAZQRCOBKEOBZSHJHFSCGGICJVQAAOTAISMQJUXXCSMDYDYUFRTLRIBZLKTAUQPJXLFEVQCZBTAKGFI");

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
    msg.setTimeStamp(0.41618438017111015);
    msg.setSource(29237U);
    msg.setSourceEntity(209U);
    msg.setDestination(15681U);
    msg.setDestinationEntity(213U);
    msg.actions.assign("FUFQEGCZLIJHWCREBDGCIDQPLQVACARTPJGMYCCSGJFKIACTEVSMWMSSXEJXYDTLEQIDUGRSGVWNRXZQXAIDRURNNMTQMQBUYYJQTKHHVDRBJEFXZIRXRKBJABJBUHBSWOMWOFWPVNNAPUGKCEHEGTTSHFNSNKHFMFTFKDGCODQWHHNBPPKMZONZJAKZLXZONCIEIHXYSRQYBTLVOZBZWPTFVGUPXWLKMZDMOAWUSYLYXLKJY");

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
    msg.setTimeStamp(0.25006455951781237);
    msg.setSource(47307U);
    msg.setSourceEntity(219U);
    msg.setDestination(53031U);
    msg.setDestinationEntity(6U);
    msg.actions.assign("XWRETRKZBVANLLUAOZJBOBLURKMPCFAWFZLPJDIHPQMRIUZZAJNQMEXDQYQUWTWPGBQFLBWIQOVUXEKHMFDYCCHNFYKPOBOMTRTIZ");

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
    msg.setTimeStamp(0.8852450684206299);
    msg.setSource(60771U);
    msg.setSourceEntity(227U);
    msg.setDestination(19304U);
    msg.setDestinationEntity(83U);
    msg.button = 241U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.7508124982704631);
    msg.setSource(30422U);
    msg.setSourceEntity(115U);
    msg.setDestination(34925U);
    msg.setDestinationEntity(79U);
    msg.button = 195U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.9591237817653909);
    msg.setSource(41335U);
    msg.setSourceEntity(99U);
    msg.setDestination(58488U);
    msg.setDestinationEntity(62U);
    msg.button = 148U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.9877806024936523);
    msg.setSource(64802U);
    msg.setSourceEntity(165U);
    msg.setDestination(55289U);
    msg.setDestinationEntity(236U);
    msg.op = 34U;
    msg.text.assign("BNZZQXUIHBZNASMGPRTAHTGK");

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
    msg.setTimeStamp(0.33141735343908074);
    msg.setSource(47329U);
    msg.setSourceEntity(87U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(12U);
    msg.op = 59U;
    msg.text.assign("RMMZUWNTDOSNRPBCXQOPWOHSCTOQXGTDWFKYJOAKMISTLSBYZCRSQHEFVKEJTLLVEVGLSGUJHNVNJSGJGYGENGGXHIADLWBCACWOEKVGKMTUTYXRDTYBHW");

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
    msg.setTimeStamp(0.1546995123447107);
    msg.setSource(31754U);
    msg.setSourceEntity(33U);
    msg.setDestination(40873U);
    msg.setDestinationEntity(22U);
    msg.op = 133U;
    msg.text.assign("EDEFVVCIQQWLVTFIFCUJRVPNAKTACPKTLTFZSBQWOQNDZUJ");

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
    msg.setTimeStamp(0.48586785770106733);
    msg.setSource(3531U);
    msg.setSourceEntity(13U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(66U);
    msg.op = 156U;
    msg.time_remain = 0.9903100592906252;
    msg.sched_time = 0.14999075068062306;

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
    msg.setTimeStamp(0.138047408861262);
    msg.setSource(54073U);
    msg.setSourceEntity(39U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(241U);
    msg.op = 240U;
    msg.time_remain = 0.08502773445899237;
    msg.sched_time = 0.8683437384355479;

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
    msg.setTimeStamp(0.225224661340942);
    msg.setSource(58019U);
    msg.setSourceEntity(177U);
    msg.setDestination(4843U);
    msg.setDestinationEntity(172U);
    msg.op = 159U;
    msg.time_remain = 0.2797253201405736;
    msg.sched_time = 0.5752176453185158;

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
    msg.setTimeStamp(0.32105280502660594);
    msg.setSource(5855U);
    msg.setSourceEntity(49U);
    msg.setDestination(14516U);
    msg.setDestinationEntity(34U);
    msg.name.assign("NPFDSTSWGVNZVCLTUUQHAFGCPMXRRIGJBZKUXMCZQESYZOJENXADESBBWJRCHRWTBAKPDUJOFVXWKZETRIQHDVNFJRZJBDUNXPXVYFVNQUMCMMLNMLLEXKPQDAVFYOLBNSFWZXDJGELOGETTWOKYYACNSORCSFRGZIBCACKLHQSKTLDYOUMIIEKGHMZLIDXQVKHWEQHMIJDCPIAHYSFRSOWWFITJWMUOBLPVVT");
    msg.op = 88U;
    msg.sched_time = 0.44495669642171864;

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
    msg.setTimeStamp(0.1605550561775555);
    msg.setSource(44044U);
    msg.setSourceEntity(95U);
    msg.setDestination(16102U);
    msg.setDestinationEntity(181U);
    msg.name.assign("VWOQKICQNFHTUATXIFMNTTTHAUUZLJUOAEEXDCFOIKUXOUKBOHCBYRKSNUSASVLYTAZNPWZXOJMMQZIZTDCPLXFBBWEEIJIVVFMBRYDDDAFVWEXMJXVWEKHNXEHKXIPBRCMQVGYJLQMLTAGKBMZVWSZTVALRRIRYHUBEGQVQHRSNLWFYOGXLSWGDZGQCFBHJSUYOSSFDCQYPRCDPJWIRMCCKUPDGYPH");
    msg.op = 238U;
    msg.sched_time = 0.7771342422979278;

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
    msg.setTimeStamp(0.02507043725610114);
    msg.setSource(15963U);
    msg.setSourceEntity(222U);
    msg.setDestination(57796U);
    msg.setDestinationEntity(104U);
    msg.name.assign("WQSANZRPFJBNMNGAFPTZQOYSCVWJMXSXKRWRMWQBLCKYNDGMBIVVZZIUUJHXGMEILBJOOMLCOADALFZGRKUZSLVFDBKRYEHANBJKOISUXVAWHYZEFVZXHICXIPRAXHMDDHLYUVGXJWBPZSEJKTCPPYHCDJVIECSUBWHWUFKPTXQUJVLNQKQOEUY");
    msg.op = 165U;
    msg.sched_time = 0.4872032921322973;

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
    msg.setTimeStamp(0.16357336798234823);
    msg.setSource(17061U);
    msg.setSourceEntity(14U);
    msg.setDestination(32352U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.31633555669942137);
    msg.setSource(16478U);
    msg.setSourceEntity(61U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.4724224928077607);
    msg.setSource(22165U);
    msg.setSourceEntity(219U);
    msg.setDestination(60563U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.7584265745855094);
    msg.setSource(63704U);
    msg.setSourceEntity(218U);
    msg.setDestination(2466U);
    msg.setDestinationEntity(31U);
    msg.name.assign("VTUJIWDDMQQUWVWSORQFKJKCGIAZXSRZNWPHTFAGWTKJJMXTHCSJQUTDPDCDMSYVHGWPXOERHSXHODMEZMPQHOWPKDRTRQQUNNIIPXUPQWLKY");
    msg.state = 144U;

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
    msg.setTimeStamp(0.36415540841003136);
    msg.setSource(4031U);
    msg.setSourceEntity(83U);
    msg.setDestination(3895U);
    msg.setDestinationEntity(250U);
    msg.name.assign("FOUBMBQPAJMMLVNJNERTJZINGTLJVZFTHJHESKWSL");
    msg.state = 216U;

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
    msg.setTimeStamp(0.1059550061949811);
    msg.setSource(34429U);
    msg.setSourceEntity(135U);
    msg.setDestination(3051U);
    msg.setDestinationEntity(78U);
    msg.name.assign("HMPDNSRSRKPIPGXUXNSTFZGCRDVIILETPHZBDFYFJNCUIPESDUCYKXQKBKRPTNCBSAXUAWVFKBJGJLOMTVRQNMIEDWJWGNBHUTFUAILJKDOBLPYJRMWHTYWNZIOOAGPKOAQPFLOBFPXMXEHEDJUDORZWASXEUTCRNHYJSJHZNQVLJWRXMOYKCATYFLQYQLTMGCMADGHQVVZGSEVBBIZVDCKWQXEVYULQGSCIBSLVYTMAIFENGRQHXU");
    msg.state = 46U;

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
    msg.setTimeStamp(0.5137982515711667);
    msg.setSource(7858U);
    msg.setSourceEntity(51U);
    msg.setDestination(21092U);
    msg.setDestinationEntity(123U);
    msg.name.assign("OVEPQGTWKXIVDLKKMEJKTBUNNIMRVVQBXHSRAFRUKWILEAU");
    msg.value = 119U;

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
    msg.setTimeStamp(0.14683238656932784);
    msg.setSource(28065U);
    msg.setSourceEntity(172U);
    msg.setDestination(52871U);
    msg.setDestinationEntity(231U);
    msg.name.assign("SOBVZTZUXULAECSXISZHRBYMQNNKQURITNAWCAMIRJJHUMCQZDKXGHMOVGXDYIMKQJFXHNPBJPTGOAVBFIEJUWISUFCTUYLEHMTDJJOIRYYLEJGOHLNGNOVUKKEQBXWRFTNMKYD");
    msg.value = 14U;

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
    msg.setTimeStamp(0.5854792660656724);
    msg.setSource(13451U);
    msg.setSourceEntity(254U);
    msg.setDestination(3325U);
    msg.setDestinationEntity(50U);
    msg.name.assign("PUJJZPMCWEAZKYWGSIREVLJJNUAYMMVTASNIEVDUBTIPBETCFQPYQDYMJNUIWJZQOAJFTXFDHCKWILQHSRMESBVTOBXHYXSWQVGNFZYOGNIUXZYTZNPCCHRUXJHQBGTGZNCGWPCMFTSLRQLQMYHFSCQXPDRXGULXIZBVIIEKCJB");
    msg.value = 41U;

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
    msg.setTimeStamp(0.9244107406452106);
    msg.setSource(56517U);
    msg.setSourceEntity(35U);
    msg.setDestination(13276U);
    msg.setDestinationEntity(131U);
    msg.name.assign("ZSNXWCVQLCJFHOJTWAKGNRRRUIJDLDFRZPABZXLCUHCEZHNNENBIQCTKLOFMYQSZOIINXCPPUCMFCGEHTADFPMYUGSNTLKGUQJLJUVBIXBOXAVTILDUASKGWQOSKRPDNZLPEICMUSFJEIBWKETPQOHMBXDEPUTNCJHQBMVYVWFGRHETPEPRMOHOVGRNBSFWVYWMSXLVVGXKGDYKVBAHYAR");

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
    msg.setTimeStamp(0.6584005004290581);
    msg.setSource(21248U);
    msg.setSourceEntity(5U);
    msg.setDestination(23027U);
    msg.setDestinationEntity(141U);
    msg.name.assign("MQBMJTPTYOWSXUHOMNNCPWKALQADFHDBGJWKYHBPABRXTNEQMTIPLARARYJVRXGRCUGNSKHRGQJVDPSSIHNLRBZBWRXSNIZERCRBDKZVTNOWKYMGAQQODGHEKVXIYIFSLLIXUFEWCZHDXDXJOGNZPDQNTO");

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
    msg.setTimeStamp(0.8622567284826992);
    msg.setSource(13901U);
    msg.setSourceEntity(188U);
    msg.setDestination(29800U);
    msg.setDestinationEntity(36U);
    msg.name.assign("XCQIOIBFJOVFTDMYYAYFSSSRMDVILFYDILIGIJDNSBMQIPZTS");

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
    msg.setTimeStamp(0.20280580814487859);
    msg.setSource(33129U);
    msg.setSourceEntity(85U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(169U);
    msg.name.assign("QLYUZSIGWLHQFJIFFILSROCSJETMXEEEIXDAUNOBKAIHHMVXTNUZPOHGGNCMJQPHZKRRRXPEBOXOCBCYFUATDNAWCKNRRCEMYQTAEFWDYCNASXKIHBQMTRHHPMKTWGBXZUDWKGTLU");
    msg.value = 61U;

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
    msg.setTimeStamp(0.09468097169388079);
    msg.setSource(43887U);
    msg.setSourceEntity(80U);
    msg.setDestination(4446U);
    msg.setDestinationEntity(249U);
    msg.name.assign("GHSODRFHIRLVDBYKQTBCKKRGQAMWVAIQHCRTBMKSACXZJTXQOYGUYEJMMVDBSLWZBSZMSONNOJPTYEMEVVMFAULZEAUNYOJEERCUGTVFCTITJFUFHTJXZDKNEFLRWFONDOQLPNDHYMEIWGAQPHTSLBCXNSWVVADNTJYGKZMPCQVPHHVIXRKIWJDY");
    msg.value = 208U;

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
    msg.setTimeStamp(0.18373485924096056);
    msg.setSource(34254U);
    msg.setSourceEntity(17U);
    msg.setDestination(43160U);
    msg.setDestinationEntity(239U);
    msg.name.assign("RKFLRZSAEHRJMZXINMKOJSITXHFBVIUQRHJAC");
    msg.value = 57U;

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
    msg.setTimeStamp(0.2907849915293529);
    msg.setSource(61130U);
    msg.setSourceEntity(200U);
    msg.setDestination(8766U);
    msg.setDestinationEntity(46U);
    msg.id = 28U;
    msg.period = 3301778705U;
    msg.duty_cycle = 48374216U;

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
    msg.setTimeStamp(0.6844049756820542);
    msg.setSource(8879U);
    msg.setSourceEntity(124U);
    msg.setDestination(53056U);
    msg.setDestinationEntity(151U);
    msg.id = 145U;
    msg.period = 506075535U;
    msg.duty_cycle = 597235530U;

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
    msg.setTimeStamp(0.7892239926771901);
    msg.setSource(36082U);
    msg.setSourceEntity(17U);
    msg.setDestination(25820U);
    msg.setDestinationEntity(178U);
    msg.id = 0U;
    msg.period = 1222243634U;
    msg.duty_cycle = 2145548386U;

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
    msg.setTimeStamp(0.2594476536888445);
    msg.setSource(43669U);
    msg.setSourceEntity(133U);
    msg.setDestination(12384U);
    msg.setDestinationEntity(240U);
    msg.id = 50U;
    msg.period = 3213420875U;
    msg.duty_cycle = 421353406U;

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
    msg.setTimeStamp(0.198743392533841);
    msg.setSource(64982U);
    msg.setSourceEntity(244U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(82U);
    msg.id = 48U;
    msg.period = 2377091899U;
    msg.duty_cycle = 2213460516U;

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
    msg.setTimeStamp(0.6850686928420937);
    msg.setSource(9586U);
    msg.setSourceEntity(115U);
    msg.setDestination(32438U);
    msg.setDestinationEntity(85U);
    msg.id = 141U;
    msg.period = 1593558712U;
    msg.duty_cycle = 1706022279U;

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
    msg.setTimeStamp(0.47531663258224055);
    msg.setSource(19001U);
    msg.setSourceEntity(137U);
    msg.setDestination(38822U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.12444467163248107;
    msg.lon = 0.890327938157175;
    msg.height = 0.4320271034145874;
    msg.x = 0.21934967603805333;
    msg.y = 0.6464668348661096;
    msg.z = 0.7795099534939585;
    msg.phi = 0.835534642085982;
    msg.theta = 0.192587064715821;
    msg.psi = 0.5333704851977032;
    msg.u = 0.14561919124589473;
    msg.v = 0.711302195324636;
    msg.w = 0.674527142432608;
    msg.vx = 0.9538153022398146;
    msg.vy = 0.260919868595721;
    msg.vz = 0.4218039519516248;
    msg.p = 0.6132577881605901;
    msg.q = 0.5786684484067481;
    msg.r = 0.1408421643722385;
    msg.depth = 0.23868249971218336;
    msg.alt = 0.5807177621118671;

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
    msg.setTimeStamp(0.5322493944407457);
    msg.setSource(31011U);
    msg.setSourceEntity(188U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.9852667578950389;
    msg.lon = 0.41735827035712514;
    msg.height = 0.3853995865687345;
    msg.x = 0.08064141845776263;
    msg.y = 0.4181385817195289;
    msg.z = 0.7533985597746958;
    msg.phi = 0.05676254448861162;
    msg.theta = 0.2513923171150759;
    msg.psi = 0.6361054782259526;
    msg.u = 0.06533896925189131;
    msg.v = 0.13785592108483657;
    msg.w = 0.878727909871559;
    msg.vx = 0.3561945391999245;
    msg.vy = 0.27717568661179715;
    msg.vz = 0.09736706847383192;
    msg.p = 0.23541546095685628;
    msg.q = 0.8719720314044156;
    msg.r = 0.15887570176013155;
    msg.depth = 0.09334955801719635;
    msg.alt = 0.8422910159858837;

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
    msg.setTimeStamp(0.8716072109598143);
    msg.setSource(26351U);
    msg.setSourceEntity(3U);
    msg.setDestination(31491U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.17148025222413343;
    msg.lon = 0.9612677773921647;
    msg.height = 0.18195359988809434;
    msg.x = 0.0793146951674949;
    msg.y = 0.37211347497361824;
    msg.z = 0.062498822149442024;
    msg.phi = 0.9449014612068609;
    msg.theta = 0.6683819884015072;
    msg.psi = 0.9321494338887714;
    msg.u = 0.26844874234158655;
    msg.v = 0.043817198580779704;
    msg.w = 0.8181437972007791;
    msg.vx = 0.3265710352268295;
    msg.vy = 0.1458836290832618;
    msg.vz = 0.927627552216648;
    msg.p = 0.24386102075555338;
    msg.q = 0.5511858854360469;
    msg.r = 0.44016213865866227;
    msg.depth = 0.46599368263581875;
    msg.alt = 0.5083320538188464;

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
    msg.setTimeStamp(0.4626964396691119);
    msg.setSource(42554U);
    msg.setSourceEntity(156U);
    msg.setDestination(28168U);
    msg.setDestinationEntity(102U);
    msg.x = 0.1023815323263274;
    msg.y = 0.45889351951010093;
    msg.z = 0.9258086950510427;

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
    msg.setTimeStamp(0.39676232195717);
    msg.setSource(47461U);
    msg.setSourceEntity(69U);
    msg.setDestination(57919U);
    msg.setDestinationEntity(251U);
    msg.x = 0.7758790472497469;
    msg.y = 0.7773056164766574;
    msg.z = 0.9400260899106629;

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
    msg.setTimeStamp(0.755859325355676);
    msg.setSource(61795U);
    msg.setSourceEntity(118U);
    msg.setDestination(51106U);
    msg.setDestinationEntity(225U);
    msg.x = 0.017797187442914253;
    msg.y = 0.3047021052259157;
    msg.z = 0.44130056053577005;

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
    msg.setTimeStamp(0.5912768944808807);
    msg.setSource(54836U);
    msg.setSourceEntity(55U);
    msg.setDestination(53813U);
    msg.setDestinationEntity(46U);
    msg.value = 0.7741097836536462;

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
    msg.setTimeStamp(0.7583892780783319);
    msg.setSource(4297U);
    msg.setSourceEntity(229U);
    msg.setDestination(61115U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8586993182273149;

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
    msg.setTimeStamp(0.22055539530735968);
    msg.setSource(19785U);
    msg.setSourceEntity(114U);
    msg.setDestination(22689U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8953268702470593;

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
    msg.setTimeStamp(0.3680983938039525);
    msg.setSource(8301U);
    msg.setSourceEntity(212U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5893525061709081;

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
    msg.setTimeStamp(0.4080876252022966);
    msg.setSource(52345U);
    msg.setSourceEntity(28U);
    msg.setDestination(4807U);
    msg.setDestinationEntity(107U);
    msg.value = 0.6805738625738753;

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
    msg.setTimeStamp(0.3991161613922646);
    msg.setSource(15477U);
    msg.setSourceEntity(151U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(64U);
    msg.value = 0.1293294350170876;

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
    msg.setTimeStamp(0.9176653183656379);
    msg.setSource(25479U);
    msg.setSourceEntity(126U);
    msg.setDestination(18210U);
    msg.setDestinationEntity(53U);
    msg.x = 0.29426615051575744;
    msg.y = 0.6251428652217906;
    msg.z = 0.9040979548584361;
    msg.phi = 0.1264171644051696;
    msg.theta = 0.7152978544201901;
    msg.psi = 0.952201777123389;
    msg.p = 0.023742426542318174;
    msg.q = 0.23188780709497736;
    msg.r = 0.5832518405527853;
    msg.u = 0.7475599191504083;
    msg.v = 0.10174367924286443;
    msg.w = 0.47871032018979287;
    msg.bias_psi = 0.950420632533113;
    msg.bias_r = 0.9035952647634424;

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
    msg.setTimeStamp(0.9542538070805446);
    msg.setSource(49174U);
    msg.setSourceEntity(186U);
    msg.setDestination(43797U);
    msg.setDestinationEntity(71U);
    msg.x = 0.6035427447044975;
    msg.y = 0.28944375090594565;
    msg.z = 0.5890543489097357;
    msg.phi = 0.6723417958348135;
    msg.theta = 0.6961698064714261;
    msg.psi = 0.6298916207965355;
    msg.p = 0.846603645343912;
    msg.q = 0.5487737202724702;
    msg.r = 0.9137518982407162;
    msg.u = 0.4995563464898035;
    msg.v = 0.40967294776030316;
    msg.w = 0.6019026723877207;
    msg.bias_psi = 0.8525990286580706;
    msg.bias_r = 0.7196184132272893;

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
    msg.setTimeStamp(0.9737557717648985);
    msg.setSource(29022U);
    msg.setSourceEntity(243U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(11U);
    msg.x = 0.4766256855544774;
    msg.y = 0.9124353390725195;
    msg.z = 0.16874816846228036;
    msg.phi = 0.18156930160805018;
    msg.theta = 0.06412360881826717;
    msg.psi = 0.5495795181549954;
    msg.p = 0.6010829616898393;
    msg.q = 0.39897137048227027;
    msg.r = 0.4752117508895538;
    msg.u = 0.2032542992277946;
    msg.v = 0.6668736523265418;
    msg.w = 0.7044284729959768;
    msg.bias_psi = 0.33642461086786324;
    msg.bias_r = 0.6132169113399998;

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
    msg.setTimeStamp(0.24584306136708378);
    msg.setSource(26027U);
    msg.setSourceEntity(54U);
    msg.setDestination(25896U);
    msg.setDestinationEntity(248U);
    msg.bias_psi = 0.47265223597200934;
    msg.bias_r = 0.3184241458496555;
    msg.cog = 0.07312399413013038;
    msg.cyaw = 0.9655746331831044;
    msg.lbl_rej_level = 0.34133990687730575;
    msg.gps_rej_level = 0.8786126741724022;
    msg.custom_x = 0.6229837521496708;
    msg.custom_y = 0.5003645427919341;
    msg.custom_z = 0.3816783918710942;

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
    msg.setTimeStamp(0.9970103968896548);
    msg.setSource(48520U);
    msg.setSourceEntity(80U);
    msg.setDestination(38701U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.7536886488148261;
    msg.bias_r = 0.8441987657895627;
    msg.cog = 0.4918409178720592;
    msg.cyaw = 0.32520006471326257;
    msg.lbl_rej_level = 0.10033598049257952;
    msg.gps_rej_level = 0.6030656956234869;
    msg.custom_x = 0.612541556953079;
    msg.custom_y = 0.9555738923326575;
    msg.custom_z = 0.974164595349559;

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
    msg.setTimeStamp(0.9292289812818627);
    msg.setSource(32587U);
    msg.setSourceEntity(11U);
    msg.setDestination(49414U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.48373242261636196;
    msg.bias_r = 0.8839436082426604;
    msg.cog = 0.21538949491859283;
    msg.cyaw = 0.34489613346842296;
    msg.lbl_rej_level = 0.4021912907527142;
    msg.gps_rej_level = 0.763262233018976;
    msg.custom_x = 0.4854811397585874;
    msg.custom_y = 0.543527466489791;
    msg.custom_z = 0.41842648658261816;

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
    msg.setTimeStamp(0.3137901581463056);
    msg.setSource(64625U);
    msg.setSourceEntity(166U);
    msg.setDestination(5237U);
    msg.setDestinationEntity(94U);
    msg.utc_time = 0.14441912991825046;
    msg.reason = 105U;

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
    msg.setTimeStamp(0.5015938153255294);
    msg.setSource(10801U);
    msg.setSourceEntity(86U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.6452489966156941;
    msg.reason = 133U;

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
    msg.setTimeStamp(0.3710944558953445);
    msg.setSource(63933U);
    msg.setSourceEntity(52U);
    msg.setDestination(4894U);
    msg.setDestinationEntity(85U);
    msg.utc_time = 0.45256219822416954;
    msg.reason = 118U;

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
    msg.setTimeStamp(0.48220908901936355);
    msg.setSource(3521U);
    msg.setSourceEntity(88U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(62U);
    msg.id = 43U;
    msg.range = 0.39975774258561003;
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
    msg.setTimeStamp(0.16708398765429533);
    msg.setSource(14430U);
    msg.setSourceEntity(43U);
    msg.setDestination(36387U);
    msg.setDestinationEntity(161U);
    msg.id = 40U;
    msg.range = 0.32513041378434193;
    msg.acceptance = 175U;

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
    msg.setTimeStamp(0.9886219902560914);
    msg.setSource(48008U);
    msg.setSourceEntity(20U);
    msg.setDestination(23375U);
    msg.setDestinationEntity(138U);
    msg.id = 28U;
    msg.range = 0.07212441096572197;
    msg.acceptance = 177U;

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
    msg.setTimeStamp(0.032070198384528736);
    msg.setSource(37385U);
    msg.setSourceEntity(63U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(150U);
    msg.type = 160U;
    msg.reason = 217U;
    msg.value = 0.30284229883936464;
    msg.timestep = 0.03421587046158703;

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
    msg.setTimeStamp(0.5277689585476303);
    msg.setSource(14467U);
    msg.setSourceEntity(99U);
    msg.setDestination(2573U);
    msg.setDestinationEntity(220U);
    msg.type = 91U;
    msg.reason = 252U;
    msg.value = 0.8916104849382911;
    msg.timestep = 0.5266614492657885;

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
    msg.setTimeStamp(0.687840631898661);
    msg.setSource(1073U);
    msg.setSourceEntity(36U);
    msg.setDestination(10828U);
    msg.setDestinationEntity(177U);
    msg.type = 126U;
    msg.reason = 230U;
    msg.value = 0.2676408960903087;
    msg.timestep = 0.2419745094248763;

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
    msg.setTimeStamp(0.7590191068662021);
    msg.setSource(42960U);
    msg.setSourceEntity(95U);
    msg.setDestination(11781U);
    msg.setDestinationEntity(246U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EBDVUPGQIAFYELHRBGUZEXZENKQOWWSLDPODTAOILGXNCNUJBDKXITPKWZHMLCWCPWHYRLQFYJXOADVXOQHVTVRUVROOBAHRFDTYMALOSFSVUHKNIMRXAS");
    tmp_msg_0.lat = 0.8215479558845061;
    tmp_msg_0.lon = 0.11555792083726857;
    tmp_msg_0.depth = 0.753073235377309;
    tmp_msg_0.query_channel = 195U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.08311273485619208;
    msg.y = 0.6397019638904998;
    msg.var_x = 0.5493124114209639;
    msg.var_y = 0.7863877933436042;
    msg.distance = 0.1963546515359007;

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
    msg.setTimeStamp(0.4671837073779982);
    msg.setSource(60504U);
    msg.setSourceEntity(51U);
    msg.setDestination(1546U);
    msg.setDestinationEntity(193U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IPTTIPMOMZTOIUULGCFUMOXQSJWPGPGVEAHDHNNMASVLFHKPFDRVSBGDJKTYBO");
    tmp_msg_0.lat = 0.5239494925396531;
    tmp_msg_0.lon = 0.504557347322657;
    tmp_msg_0.depth = 0.311383833989735;
    tmp_msg_0.query_channel = 49U;
    tmp_msg_0.reply_channel = 7U;
    tmp_msg_0.transponder_delay = 29U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3665875185495153;
    msg.y = 0.6990529908529376;
    msg.var_x = 0.1068824314925273;
    msg.var_y = 0.747960938596009;
    msg.distance = 0.06679946894272903;

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
    msg.setTimeStamp(0.6992476526644844);
    msg.setSource(18559U);
    msg.setSourceEntity(194U);
    msg.setDestination(56774U);
    msg.setDestinationEntity(207U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MOFFWDDUQONBFKSICBWNSJTKXCBKICPLZATAATRJWMMUDLVEHHQRXKYNQOLZPGBSUSTGTDJXYVP");
    tmp_msg_0.lat = 0.5856997305377406;
    tmp_msg_0.lon = 0.10479067234864015;
    tmp_msg_0.depth = 0.40523487233795763;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 27U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6584593132858895;
    msg.y = 0.2795877514894034;
    msg.var_x = 0.24741185213459405;
    msg.var_y = 0.012137025370679178;
    msg.distance = 0.7374967401603144;

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
    msg.setTimeStamp(0.43700707981581177);
    msg.setSource(37458U);
    msg.setSourceEntity(115U);
    msg.setDestination(27869U);
    msg.setDestinationEntity(156U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.45694123594893377);
    msg.setSource(20149U);
    msg.setSourceEntity(77U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(57U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.6037698995532276);
    msg.setSource(51481U);
    msg.setSourceEntity(121U);
    msg.setDestination(47499U);
    msg.setDestinationEntity(21U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.7440023820615653);
    msg.setSource(51686U);
    msg.setSourceEntity(211U);
    msg.setDestination(544U);
    msg.setDestinationEntity(83U);
    msg.x = 0.40730308097456513;
    msg.y = 0.043192146854344915;
    msg.z = 0.42032604900745596;

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
    msg.setTimeStamp(0.10354296070456404);
    msg.setSource(35057U);
    msg.setSourceEntity(232U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(187U);
    msg.x = 0.9006185953976413;
    msg.y = 0.020366782268618877;
    msg.z = 0.011580712547029859;

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
    msg.setTimeStamp(0.2062694962947733);
    msg.setSource(6917U);
    msg.setSourceEntity(245U);
    msg.setDestination(54253U);
    msg.setDestinationEntity(138U);
    msg.x = 0.8544150756812942;
    msg.y = 0.376406528389867;
    msg.z = 0.8308579918119501;

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
    msg.setTimeStamp(0.36354148576648027);
    msg.setSource(26093U);
    msg.setSourceEntity(220U);
    msg.setDestination(19501U);
    msg.setDestinationEntity(122U);
    msg.va = 0.7263275686572536;
    msg.aoa = 0.1544476918919253;
    msg.ssa = 0.30389832011057605;

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
    msg.setTimeStamp(0.23572217689926867);
    msg.setSource(12824U);
    msg.setSourceEntity(239U);
    msg.setDestination(23433U);
    msg.setDestinationEntity(55U);
    msg.va = 0.584086059244629;
    msg.aoa = 0.7066177967727443;
    msg.ssa = 0.8779599482094582;

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
    msg.setTimeStamp(0.32719451095467855);
    msg.setSource(4286U);
    msg.setSourceEntity(73U);
    msg.setDestination(33101U);
    msg.setDestinationEntity(148U);
    msg.va = 0.38557023212294506;
    msg.aoa = 0.28855563847666454;
    msg.ssa = 0.2474851110495333;

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
    msg.setTimeStamp(0.2909119957343397);
    msg.setSource(19966U);
    msg.setSourceEntity(95U);
    msg.setDestination(34147U);
    msg.setDestinationEntity(22U);
    msg.value = 0.11209823445198386;

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
    msg.setTimeStamp(0.5176653621458878);
    msg.setSource(56860U);
    msg.setSourceEntity(125U);
    msg.setDestination(33761U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7283413990052916;

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
    msg.setTimeStamp(0.38942992948653654);
    msg.setSource(2144U);
    msg.setSourceEntity(95U);
    msg.setDestination(20161U);
    msg.setDestinationEntity(218U);
    msg.value = 0.8670746932402894;

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
    msg.setTimeStamp(0.9432027087844372);
    msg.setSource(26018U);
    msg.setSourceEntity(0U);
    msg.setDestination(64893U);
    msg.setDestinationEntity(98U);
    msg.value = 0.7995753824127638;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.8750573510687083);
    msg.setSource(37792U);
    msg.setSourceEntity(166U);
    msg.setDestination(50634U);
    msg.setDestinationEntity(66U);
    msg.value = 0.11560933300826048;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.3221079788524174);
    msg.setSource(1274U);
    msg.setSourceEntity(12U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8427971699094248;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.43992590998436165);
    msg.setSource(18961U);
    msg.setSourceEntity(66U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(215U);
    msg.value = 0.4517337021648117;
    msg.speed_units = 212U;

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
    msg.setTimeStamp(0.96367983719989);
    msg.setSource(2117U);
    msg.setSourceEntity(225U);
    msg.setDestination(48881U);
    msg.setDestinationEntity(215U);
    msg.value = 0.6438489476988286;
    msg.speed_units = 149U;

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
    msg.setTimeStamp(0.7429986646903156);
    msg.setSource(15549U);
    msg.setSourceEntity(81U);
    msg.setDestination(35589U);
    msg.setDestinationEntity(98U);
    msg.value = 0.11730643073625557;
    msg.speed_units = 42U;

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
    msg.setTimeStamp(0.5022979390837552);
    msg.setSource(20258U);
    msg.setSourceEntity(41U);
    msg.setDestination(41212U);
    msg.setDestinationEntity(147U);
    msg.value = 0.7955051086516792;

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
    msg.setTimeStamp(0.10735861871261687);
    msg.setSource(85U);
    msg.setSourceEntity(36U);
    msg.setDestination(52172U);
    msg.setDestinationEntity(240U);
    msg.value = 0.2884946045449971;

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
    msg.setTimeStamp(0.1800519375383891);
    msg.setSource(19536U);
    msg.setSourceEntity(37U);
    msg.setDestination(4497U);
    msg.setDestinationEntity(100U);
    msg.value = 0.05373558118470789;

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
    msg.setTimeStamp(0.4710454368932093);
    msg.setSource(63876U);
    msg.setSourceEntity(225U);
    msg.setDestination(25453U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7203499910030641;

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
    msg.setTimeStamp(0.7359636743104286);
    msg.setSource(47044U);
    msg.setSourceEntity(71U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5146488054395649;

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
    msg.setTimeStamp(0.17458900970594438);
    msg.setSource(33264U);
    msg.setSourceEntity(240U);
    msg.setDestination(29651U);
    msg.setDestinationEntity(130U);
    msg.value = 0.282940283787688;

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
    msg.setTimeStamp(0.5586444822591812);
    msg.setSource(1794U);
    msg.setSourceEntity(214U);
    msg.setDestination(16595U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5617413607057802;

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
    msg.setTimeStamp(0.7221619275667505);
    msg.setSource(57403U);
    msg.setSourceEntity(12U);
    msg.setDestination(44786U);
    msg.setDestinationEntity(66U);
    msg.value = 0.21392750216162493;

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
    msg.setTimeStamp(0.38511538017887204);
    msg.setSource(15115U);
    msg.setSourceEntity(58U);
    msg.setDestination(294U);
    msg.setDestinationEntity(129U);
    msg.value = 0.3454378707252984;

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
    msg.setTimeStamp(0.29590974840427564);
    msg.setSource(37319U);
    msg.setSourceEntity(127U);
    msg.setDestination(50396U);
    msg.setDestinationEntity(203U);
    msg.path_ref = 3667349052U;
    msg.start_lat = 0.3627881816332824;
    msg.start_lon = 0.7813415913181135;
    msg.start_z = 0.24813908678536933;
    msg.start_z_units = 163U;
    msg.end_lat = 0.5394134486311281;
    msg.end_lon = 0.4907876954724546;
    msg.end_z = 0.27499015095404455;
    msg.end_z_units = 46U;
    msg.speed = 0.5870261014928179;
    msg.speed_units = 140U;
    msg.lradius = 0.0647346955581849;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.6291425297074766);
    msg.setSource(59004U);
    msg.setSourceEntity(109U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 2958239853U;
    msg.start_lat = 0.3030327574722962;
    msg.start_lon = 0.8932268373720639;
    msg.start_z = 0.3125083238403876;
    msg.start_z_units = 235U;
    msg.end_lat = 0.21704191527379624;
    msg.end_lon = 0.5924919527913854;
    msg.end_z = 0.6118877145039596;
    msg.end_z_units = 20U;
    msg.speed = 0.5176082009871451;
    msg.speed_units = 51U;
    msg.lradius = 0.5601757711263295;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.44976565668648605);
    msg.setSource(6795U);
    msg.setSourceEntity(200U);
    msg.setDestination(8393U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 825291787U;
    msg.start_lat = 0.14403099324315116;
    msg.start_lon = 0.49792094357821104;
    msg.start_z = 0.5689051461787429;
    msg.start_z_units = 180U;
    msg.end_lat = 0.16749505949821752;
    msg.end_lon = 0.6805241406163682;
    msg.end_z = 0.7621534994097046;
    msg.end_z_units = 114U;
    msg.speed = 0.3869879313540058;
    msg.speed_units = 222U;
    msg.lradius = 0.38354797727212886;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.321854861772936);
    msg.setSource(27485U);
    msg.setSourceEntity(8U);
    msg.setDestination(17259U);
    msg.setDestinationEntity(36U);
    msg.x = 0.1751913773417222;
    msg.y = 0.814339439289938;
    msg.z = 0.053243576546498916;
    msg.k = 0.2815381657574265;
    msg.m = 0.5144015856688993;
    msg.n = 0.9099203101589326;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.7430318546710357);
    msg.setSource(55658U);
    msg.setSourceEntity(76U);
    msg.setDestination(37268U);
    msg.setDestinationEntity(154U);
    msg.x = 0.9841369876625411;
    msg.y = 0.19929914987790864;
    msg.z = 0.45536429727413297;
    msg.k = 0.8591327421943709;
    msg.m = 0.16826796449988846;
    msg.n = 0.12104060831841623;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.31769255728627943);
    msg.setSource(10455U);
    msg.setSourceEntity(166U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(154U);
    msg.x = 0.7989115219459405;
    msg.y = 0.6514740879691178;
    msg.z = 0.6478669908647945;
    msg.k = 0.8541921452605165;
    msg.m = 0.023227984897738252;
    msg.n = 0.7052380155399048;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.05367160402506099);
    msg.setSource(12508U);
    msg.setSourceEntity(224U);
    msg.setDestination(717U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7348899008137842;

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
    msg.setTimeStamp(0.5998569208475599);
    msg.setSource(4303U);
    msg.setSourceEntity(61U);
    msg.setDestination(49064U);
    msg.setDestinationEntity(30U);
    msg.value = 0.22393516551684423;

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
    msg.setTimeStamp(0.12123545273250824);
    msg.setSource(58240U);
    msg.setSourceEntity(99U);
    msg.setDestination(8254U);
    msg.setDestinationEntity(107U);
    msg.value = 0.8221084772039531;

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
    msg.setTimeStamp(0.8517065543737165);
    msg.setSource(57085U);
    msg.setSourceEntity(13U);
    msg.setDestination(16124U);
    msg.setDestinationEntity(153U);
    msg.u = 0.6869588745888779;
    msg.v = 0.6268284881374815;
    msg.w = 0.564903775489691;
    msg.p = 0.7209363700924906;
    msg.q = 0.40294943804317407;
    msg.r = 0.25694177844025823;
    msg.flags = 251U;

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
    msg.setTimeStamp(0.6207869364273874);
    msg.setSource(45866U);
    msg.setSourceEntity(194U);
    msg.setDestination(54211U);
    msg.setDestinationEntity(252U);
    msg.u = 0.8249251446568224;
    msg.v = 0.7675705221319884;
    msg.w = 0.39394545503946343;
    msg.p = 0.7129118479357627;
    msg.q = 0.17257907531971184;
    msg.r = 0.5340640073260856;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.41138446769896697);
    msg.setSource(26451U);
    msg.setSourceEntity(36U);
    msg.setDestination(44127U);
    msg.setDestinationEntity(39U);
    msg.u = 0.36190166641821664;
    msg.v = 0.9504422340127451;
    msg.w = 0.6616552943178666;
    msg.p = 0.6716291436871247;
    msg.q = 0.8869146807123237;
    msg.r = 0.9579421670973013;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.991333806968472);
    msg.setSource(41077U);
    msg.setSourceEntity(236U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 1065128386U;
    msg.start_lat = 0.9328116729741861;
    msg.start_lon = 0.9286923566144643;
    msg.start_z = 0.9948071127425396;
    msg.start_z_units = 61U;
    msg.end_lat = 0.8301393373725395;
    msg.end_lon = 0.6297084537796153;
    msg.end_z = 0.7994415912176429;
    msg.end_z_units = 11U;
    msg.lradius = 0.16296182973317552;
    msg.flags = 253U;
    msg.x = 0.4544675379253129;
    msg.y = 0.3173463713465986;
    msg.z = 0.3611176607643173;
    msg.vx = 0.39479093584356606;
    msg.vy = 0.01753734255622441;
    msg.vz = 0.5922174047830385;
    msg.course_error = 0.7127868650859988;
    msg.eta = 8453U;

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
    msg.setTimeStamp(0.03483316755167709);
    msg.setSource(52227U);
    msg.setSourceEntity(143U);
    msg.setDestination(51050U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 1619544198U;
    msg.start_lat = 0.5502513116301361;
    msg.start_lon = 0.417005425744453;
    msg.start_z = 0.4299903159736005;
    msg.start_z_units = 185U;
    msg.end_lat = 0.5022076483905964;
    msg.end_lon = 0.6321551259141704;
    msg.end_z = 0.32364561896779687;
    msg.end_z_units = 6U;
    msg.lradius = 0.7684178104994265;
    msg.flags = 138U;
    msg.x = 0.9074076779767702;
    msg.y = 0.8301188781330172;
    msg.z = 0.8018651374938973;
    msg.vx = 0.9160841055737906;
    msg.vy = 0.4882017265025227;
    msg.vz = 0.07724303595250415;
    msg.course_error = 0.12630305340197068;
    msg.eta = 64770U;

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
    msg.setTimeStamp(0.5633293273391196);
    msg.setSource(16580U);
    msg.setSourceEntity(209U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 3491082038U;
    msg.start_lat = 0.3278796655238204;
    msg.start_lon = 0.7375236388196594;
    msg.start_z = 0.8514354111704245;
    msg.start_z_units = 152U;
    msg.end_lat = 0.25744420626779474;
    msg.end_lon = 0.6923464886250091;
    msg.end_z = 0.18936600429128403;
    msg.end_z_units = 63U;
    msg.lradius = 0.939896315752674;
    msg.flags = 184U;
    msg.x = 0.16239406587067917;
    msg.y = 0.8499377769376826;
    msg.z = 0.9954909241668329;
    msg.vx = 0.57217152847764;
    msg.vy = 0.6441014447052688;
    msg.vz = 0.6126277262140302;
    msg.course_error = 0.8605352029223906;
    msg.eta = 43123U;

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
    msg.setTimeStamp(0.4357350066050377);
    msg.setSource(44187U);
    msg.setSourceEntity(175U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(58U);
    msg.k = 0.84128624263388;
    msg.m = 0.7240610486903196;
    msg.n = 0.0164761646822974;

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
    msg.setTimeStamp(0.4269160528243455);
    msg.setSource(28946U);
    msg.setSourceEntity(158U);
    msg.setDestination(1316U);
    msg.setDestinationEntity(208U);
    msg.k = 0.8572190648360817;
    msg.m = 0.8016826496069147;
    msg.n = 0.05542807807448702;

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
    msg.setTimeStamp(0.17691809764476585);
    msg.setSource(44238U);
    msg.setSourceEntity(153U);
    msg.setDestination(16056U);
    msg.setDestinationEntity(124U);
    msg.k = 0.5290132764197768;
    msg.m = 0.9112252554713623;
    msg.n = 0.13152204517560095;

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
    msg.setTimeStamp(0.19466116580365878);
    msg.setSource(56913U);
    msg.setSourceEntity(81U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(213U);
    msg.p = 0.025685535402285575;
    msg.i = 0.21350408456849856;
    msg.d = 0.05503307745491903;
    msg.a = 0.8990931041220176;

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
    msg.setTimeStamp(0.12031988533915183);
    msg.setSource(17031U);
    msg.setSourceEntity(148U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(101U);
    msg.p = 0.33978528068940805;
    msg.i = 0.7296456344414937;
    msg.d = 0.7257204409456447;
    msg.a = 0.7174101098109559;

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
    msg.setTimeStamp(0.4699493349847068);
    msg.setSource(15983U);
    msg.setSourceEntity(40U);
    msg.setDestination(8388U);
    msg.setDestinationEntity(189U);
    msg.p = 0.460162022001106;
    msg.i = 0.9097705017495749;
    msg.d = 0.5267386759442545;
    msg.a = 0.7198693779931169;

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
    msg.setTimeStamp(0.9152978978450009);
    msg.setSource(12420U);
    msg.setSourceEntity(93U);
    msg.setDestination(5658U);
    msg.setDestinationEntity(150U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.9826415241839852);
    msg.setSource(1982U);
    msg.setSourceEntity(102U);
    msg.setDestination(49718U);
    msg.setDestinationEntity(136U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.4754672808453648);
    msg.setSource(61922U);
    msg.setSourceEntity(241U);
    msg.setDestination(49303U);
    msg.setDestinationEntity(184U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.29184929525686254);
    msg.setSource(38002U);
    msg.setSourceEntity(132U);
    msg.setDestination(45541U);
    msg.setDestinationEntity(65U);
    msg.x = 0.6666805294173563;
    msg.y = 0.829348181760611;
    msg.z = 0.874480810853454;
    msg.vx = 0.7881250956885636;
    msg.vy = 0.5791896753324105;
    msg.vz = 0.23759159511360495;
    msg.ax = 0.22726602631768233;
    msg.ay = 0.9478708068714369;
    msg.az = 0.6636322232965638;
    msg.flags = 64962U;

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
    msg.setTimeStamp(0.720579494078917);
    msg.setSource(15394U);
    msg.setSourceEntity(238U);
    msg.setDestination(54375U);
    msg.setDestinationEntity(208U);
    msg.x = 0.3083277913590221;
    msg.y = 0.28790684885030504;
    msg.z = 0.46284297844254296;
    msg.vx = 0.22740433592934173;
    msg.vy = 0.39401805817996216;
    msg.vz = 0.6052301877512449;
    msg.ax = 0.09778511140594626;
    msg.ay = 0.8935892369070375;
    msg.az = 0.822290893201182;
    msg.flags = 57542U;

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
    msg.setTimeStamp(0.23324555296244187);
    msg.setSource(34390U);
    msg.setSourceEntity(81U);
    msg.setDestination(25783U);
    msg.setDestinationEntity(62U);
    msg.x = 0.15322820962199324;
    msg.y = 0.31550476834504826;
    msg.z = 0.9961387633148762;
    msg.vx = 0.9287118876428402;
    msg.vy = 0.5286732214361892;
    msg.vz = 0.684317579675752;
    msg.ax = 0.36524047578247054;
    msg.ay = 0.21651051428739587;
    msg.az = 0.5524842052007779;
    msg.flags = 28431U;

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
    msg.setTimeStamp(0.4049484943115209);
    msg.setSource(52471U);
    msg.setSourceEntity(113U);
    msg.setDestination(931U);
    msg.setDestinationEntity(232U);
    msg.value = 0.013411790166714788;

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
    msg.setTimeStamp(0.5911141470568229);
    msg.setSource(15258U);
    msg.setSourceEntity(20U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(139U);
    msg.value = 0.20234758710605094;

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
    msg.setTimeStamp(0.449883104859059);
    msg.setSource(31220U);
    msg.setSourceEntity(86U);
    msg.setDestination(23456U);
    msg.setDestinationEntity(55U);
    msg.value = 0.9849887720757937;

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
    msg.setTimeStamp(0.8358397658839642);
    msg.setSource(18340U);
    msg.setSourceEntity(148U);
    msg.setDestination(7250U);
    msg.setDestinationEntity(144U);
    msg.timeout = 65352U;
    msg.lat = 0.9214530958640804;
    msg.lon = 0.9742523125446817;
    msg.z = 0.9931224199141011;
    msg.z_units = 17U;
    msg.speed = 0.9299821765852905;
    msg.speed_units = 139U;
    msg.roll = 0.049230034523632504;
    msg.pitch = 0.9725783474873015;
    msg.yaw = 0.24467256602935605;
    msg.custom.assign("NEGRAUACOMWQFDWVVDJLTXIIZCHLDWYKFVXAZAZIFWWCPEGMMWBRGSNMYMNEOBZOZDTDOCNTOCGKHQBGKUFXYRWRSSKCXNDPCVPQOIRWYUMZYWNPZVFKGQTKKJHOFRCYHSEYDZJVVULQLCEHAPOWITOJHQUSMUUHDTQBGOKFYXAIIJJTRLIUVHXNEHFSLQZLDXMCFTYXADBKPMNFSBQIJGEGPEJNMBQPRIRSLKJUAB");

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
    msg.setTimeStamp(0.521364151960243);
    msg.setSource(55205U);
    msg.setSourceEntity(5U);
    msg.setDestination(26556U);
    msg.setDestinationEntity(88U);
    msg.timeout = 51303U;
    msg.lat = 0.3365937765749566;
    msg.lon = 0.8707659251500616;
    msg.z = 0.6504082412200529;
    msg.z_units = 179U;
    msg.speed = 0.8729547519020278;
    msg.speed_units = 197U;
    msg.roll = 0.3514841556833632;
    msg.pitch = 0.5469804722718733;
    msg.yaw = 0.22656102231310427;
    msg.custom.assign("NAJNLXZKPMVJHWWWEGCKRTSNOVTEACFNPUOKGDLODBJOGSABOPCMRHUXDTIPYSGXCNGCQAVRXYVXCGCRLFHQZFDKDJSNRTFSIPMQSPNRXQQJYUQECHTQNZGFODYBFWVDZIWQMHEAVHBMFDE");

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
    msg.setTimeStamp(0.34595522908281073);
    msg.setSource(24208U);
    msg.setSourceEntity(81U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(236U);
    msg.timeout = 6876U;
    msg.lat = 0.0380920082359798;
    msg.lon = 0.5844672051996452;
    msg.z = 0.9467646172881623;
    msg.z_units = 187U;
    msg.speed = 0.2948613549941258;
    msg.speed_units = 244U;
    msg.roll = 0.39887741207688676;
    msg.pitch = 0.275876327793961;
    msg.yaw = 0.40984190145081956;
    msg.custom.assign("PSSFDHYGAUVYUKSIZMBWOPLYLVVARQCXBYECRJUTBNEQYKIVUAWRRNACQHWXYJDTJXXQCDZKZZBVQOPOOFGMQSSTXZBLBFGLWXHJFXOSHPGIFWBUHTVNSGA");

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
    msg.setTimeStamp(0.09363422755887019);
    msg.setSource(12802U);
    msg.setSourceEntity(121U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(107U);
    msg.timeout = 38137U;
    msg.lat = 0.3476880004644156;
    msg.lon = 0.23049394647733645;
    msg.z = 0.8321713646037429;
    msg.z_units = 3U;
    msg.speed = 0.7646376486921496;
    msg.speed_units = 74U;
    msg.duration = 33650U;
    msg.radius = 0.9042077987324806;
    msg.flags = 203U;
    msg.custom.assign("DFMRKJAHDULVYVQOUFSKNLKZXFWKDKTBFMBAETXXUVACNJXPFLLBDXAZSLLXUTJQWRBRWDOBNXMDEYRGNWDVVZVIITITJQFGUSIP");

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
    msg.setTimeStamp(0.06873354497188378);
    msg.setSource(38540U);
    msg.setSourceEntity(107U);
    msg.setDestination(54444U);
    msg.setDestinationEntity(47U);
    msg.timeout = 12396U;
    msg.lat = 0.6587581701030518;
    msg.lon = 0.5972273004317312;
    msg.z = 0.8061336994001778;
    msg.z_units = 198U;
    msg.speed = 0.33619506004001143;
    msg.speed_units = 237U;
    msg.duration = 36093U;
    msg.radius = 0.7528753912237452;
    msg.flags = 225U;
    msg.custom.assign("SAIYUVZYZDQQJWJEVAACBNVSISLGSKGCBPYFZBBLKYXYZCOTYYFZNJCHRGXEHMXCRTLRDNES");

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
    msg.setTimeStamp(0.2943129404695586);
    msg.setSource(3099U);
    msg.setSourceEntity(36U);
    msg.setDestination(46088U);
    msg.setDestinationEntity(37U);
    msg.timeout = 53067U;
    msg.lat = 0.7459663469228328;
    msg.lon = 0.050626572038562134;
    msg.z = 0.6930610793801455;
    msg.z_units = 242U;
    msg.speed = 0.5310158186904219;
    msg.speed_units = 59U;
    msg.duration = 20795U;
    msg.radius = 0.8679634753258874;
    msg.flags = 240U;
    msg.custom.assign("CFZGRBCSALLOMDZJYRUNQMZBNOEVRXEYVXVJETUWQCGSRGUZFEIUQWYO");

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
    msg.setTimeStamp(0.9750231942711989);
    msg.setSource(50857U);
    msg.setSourceEntity(170U);
    msg.setDestination(15555U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("HBVQWJDCZLRNTWWCJAWAZVSFXUAHENGMOLJAORJQMIFRJSUHBPCBKHQTFPBONTAVNXIZGGWSQHGDVMFRNCHLKSTHJXWUPKMCDJLCZMIBQOBYFRFMBGQIKXKCLSDYAWZOEMJNYSMVLPMRSSJYYTQP");

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
    msg.setTimeStamp(0.4985004552581742);
    msg.setSource(34735U);
    msg.setSourceEntity(224U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(6U);
    msg.custom.assign("YKTAYEUFRXCMBJDPFGMPZWOOJMVKVRGY");

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
    msg.setTimeStamp(0.9311177140878552);
    msg.setSource(6110U);
    msg.setSourceEntity(68U);
    msg.setDestination(47412U);
    msg.setDestinationEntity(220U);
    msg.custom.assign("MPFZCHGYSKBZKFTDHTNQYWARZJDLMQMZJSVPVDNHRWLLGXPUEWHPGKOJIEQUOIQBHTFUNWAVTNK");

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
    msg.setTimeStamp(0.06857584931597993);
    msg.setSource(34822U);
    msg.setSourceEntity(51U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(147U);
    msg.timeout = 41769U;
    msg.lat = 0.14369482667363132;
    msg.lon = 0.662209760960632;
    msg.z = 0.4847650146612058;
    msg.z_units = 206U;
    msg.duration = 44432U;
    msg.speed = 0.23530565497487332;
    msg.speed_units = 190U;
    msg.type = 47U;
    msg.radius = 0.781852216571724;
    msg.length = 0.4975837153264129;
    msg.bearing = 0.06157570973008053;
    msg.direction = 196U;
    msg.custom.assign("SJTTHIGVCGJOFOAILPZGOBBRMWUZLCTRYXLQTCGTRBDMDOEGSUBZWQQMENJTVHZCZABFJJHVIBIEQLMTYGNHYSHRYRWHMMTUNYKOIYEQPBCKKBHNLYJJDSUGQFUJPDZORXVNTGVIWMUXFWFFLZMQIDKXWXLIWFSILCVWRVAFRUSNKQHEEUPKHWLNKNFAYPPYJXDZKBGPCODYBZVXDGUUHXPVZCSXEDAAQALKPKEAPCTODRAIS");

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
    msg.setTimeStamp(0.4710879973417622);
    msg.setSource(57900U);
    msg.setSourceEntity(105U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(90U);
    msg.timeout = 15585U;
    msg.lat = 0.8145665820876082;
    msg.lon = 0.6421466156771171;
    msg.z = 0.5205098306040016;
    msg.z_units = 172U;
    msg.duration = 56645U;
    msg.speed = 0.36646657816792727;
    msg.speed_units = 49U;
    msg.type = 9U;
    msg.radius = 0.01755334150662058;
    msg.length = 0.029306162912503875;
    msg.bearing = 0.4229312738051556;
    msg.direction = 176U;
    msg.custom.assign("BPXXJPAFTKEFZQDCKSUAUNEIJKJGOEJCJWBRNLLVVDHYUSAXOWPZWUEIBFGPRJRIVXTZYULSKKICVOVVNWDFOMGEXUMXKYHJXKCDTUDAYPYOHGDPHHVLXJAKBIIQMDSEGFSZYWGQECNPIQHNFOUECOQYVQMDQFBANUBPNNIAMBZKZKXITZTLSSLECOMFSWRMNCYRESWQSBWQMCBRWITUHGZGPDAHRLQJOYLDVPGWJHFTCHAVTTABMZOMLN");

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
    msg.setTimeStamp(0.4376247835983965);
    msg.setSource(54635U);
    msg.setSourceEntity(123U);
    msg.setDestination(63024U);
    msg.setDestinationEntity(75U);
    msg.timeout = 32363U;
    msg.lat = 0.14209392101420948;
    msg.lon = 0.8302608141326709;
    msg.z = 0.4182429695412826;
    msg.z_units = 167U;
    msg.duration = 50660U;
    msg.speed = 0.6031209586300357;
    msg.speed_units = 133U;
    msg.type = 20U;
    msg.radius = 0.026049038279159054;
    msg.length = 0.7860192566238415;
    msg.bearing = 0.5343501115944091;
    msg.direction = 19U;
    msg.custom.assign("PKIGGOUQGUXQMQDXUZIMMXISWBLHCRQHGHSTOBLROVNJPSCDVADFTFKCPLMIRHWURZNZVUDNATPGEXICYZRBQPTWVETHHNZJJGMSEJUMPIANAGPSVJJJLTXYVCOSTILKFDSOOWWBISIEZFQJOHXFYUQETHVLJVCFY");

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
    msg.setTimeStamp(0.1217264395856893);
    msg.setSource(2464U);
    msg.setSourceEntity(192U);
    msg.setDestination(45038U);
    msg.setDestinationEntity(157U);
    msg.duration = 21706U;
    msg.custom.assign("PEFSJEGBCOGLHJYCDKBPZFWKKLNAVYSVMANITHZRWJNIXDTCLVAQYOZJJZGZCPEMGBWVCPVQSEHEHQUURINQEXFJT");

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
    msg.setTimeStamp(0.3129345847286715);
    msg.setSource(15735U);
    msg.setSourceEntity(148U);
    msg.setDestination(30748U);
    msg.setDestinationEntity(122U);
    msg.duration = 12348U;
    msg.custom.assign("LAJKAZVIFXOXCQDJGXMRLDLUCGFZRMJIMKIGSTDCQOAJIKZUPRBDOZBHDNQOWWISXTMDVPYHPQWBNPKWTNPEOYBYEIAIGHECXIZLVEMCGGOIUYLEKTKFCNRDCPQRJNFQAHPSSHSUHMBDJUTBAAOGW");

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
    msg.setTimeStamp(0.11402784296566071);
    msg.setSource(23585U);
    msg.setSourceEntity(193U);
    msg.setDestination(902U);
    msg.setDestinationEntity(185U);
    msg.duration = 35174U;
    msg.custom.assign("SZZGWRXSQNTNXQBFLTOHCWCBLDGKYEJZINAPOWJMPRGTZWHTUXCVXFRARPOOYSJDUWCDVCVYNFYUZKWPDIAVKBMBZJECYIVREKFDEMVWTGWLAZJKLSBZQTBODSJDAIXAKCLGPFUPOQBUHQEIUSSFFKCUCPUMWGJRHRHYEXODLEMGMIPKJOXZVBLXRQQQEXTTIGTMPPXFGMSN");

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
    msg.setTimeStamp(0.750271334101547);
    msg.setSource(30151U);
    msg.setSourceEntity(198U);
    msg.setDestination(54757U);
    msg.setDestinationEntity(101U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.129786869977788;
    tmp_msg_0.speed_units = 32U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42413U;
    msg.custom.assign("YXPLMHYHFKGLFFWDUHQOHDDWWVUEQSIQREQGPTJBCXXZNPYAMCKWCXTUUFDIKMKLMFVOYZNJSHGSALZECARPSTRBCTUEJZDXEROMDCMHDZJSGKXIWQJBSETEA");

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
    msg.setTimeStamp(0.11781481181965359);
    msg.setSource(40529U);
    msg.setSourceEntity(72U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(154U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5271814534780884;
    msg.control.set(tmp_msg_0);
    msg.duration = 28109U;
    msg.custom.assign("GFXWQHZFMNMUDPVABYZWHTSOEIGHSQCJNUFJGRBMPRRDAELJQSCQQUZJUEFLCXIICHQVXTWDFFWUPVFBKTJSXOESSTGXIAKZECWRKATKKRKDYVVGGZIFKXKADFTMRPVYNPDTSOMBBSILNYDUUFENDTANYRXXPIMYPRMVHWEBIM");

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
    msg.setTimeStamp(0.9431451726508701);
    msg.setSource(22599U);
    msg.setSourceEntity(188U);
    msg.setDestination(38591U);
    msg.setDestinationEntity(61U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.22343200350558134;
    msg.control.set(tmp_msg_0);
    msg.duration = 43645U;
    msg.custom.assign("DQMDTUOFFNIYVATLDWIPFKZQPYCBTQAGBJUJKCQKVFBPRLFEVOUCAGFXMLWHSARAYZNKRGGGISEQSTNPXSSZATLPLKTQOWCMRPJFZBQITFYNBAHJVXDMMJWGODBBUZHVCYEONUVYPMSOGPBKIASBQXVDLONEFXINTOCCVPEWZLXMRYIXJTCKRATELEGWOLBMKIVUMZHRZRUYKD");

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
    msg.setTimeStamp(0.48145560947006294);
    msg.setSource(57597U);
    msg.setSourceEntity(103U);
    msg.setDestination(49418U);
    msg.setDestinationEntity(122U);
    msg.timeout = 58040U;
    msg.lat = 0.3455046268657016;
    msg.lon = 0.7487649642587639;
    msg.z = 0.41852650719289064;
    msg.z_units = 154U;
    msg.speed = 0.8514538844395803;
    msg.speed_units = 233U;
    msg.bearing = 0.9275803222432173;
    msg.cross_angle = 0.9651819370091064;
    msg.width = 0.1291908588393964;
    msg.length = 0.6850948667051677;
    msg.hstep = 0.37240379513575617;
    msg.coff = 114U;
    msg.alternation = 67U;
    msg.flags = 154U;
    msg.custom.assign("AIPYWPKJZFAELMWNDQHDRLRQAMRJDMLTDVU");

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
    msg.setTimeStamp(0.6368005834090739);
    msg.setSource(42666U);
    msg.setSourceEntity(214U);
    msg.setDestination(54336U);
    msg.setDestinationEntity(146U);
    msg.timeout = 15430U;
    msg.lat = 0.9187018411909238;
    msg.lon = 0.8907363622673851;
    msg.z = 0.4300161157360547;
    msg.z_units = 217U;
    msg.speed = 0.1501110020416897;
    msg.speed_units = 182U;
    msg.bearing = 0.6295658888577292;
    msg.cross_angle = 0.5227305887517492;
    msg.width = 0.8372150844611256;
    msg.length = 0.8150276763209894;
    msg.hstep = 0.42429292539081576;
    msg.coff = 62U;
    msg.alternation = 88U;
    msg.flags = 194U;
    msg.custom.assign("MERTUDZDUXSXVXVEDBVJERKAOMRUAHXPMWGJAAGMRKAAMRNFCWYKUTLOIIWLBCNTCDMJIJAVYFRTUPQWYTNQFBZSCDPHKFQHQGVQTDQIOLFRGKFXRCPKVFGS");

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
    msg.setTimeStamp(0.8958513746789445);
    msg.setSource(65414U);
    msg.setSourceEntity(76U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(232U);
    msg.timeout = 63443U;
    msg.lat = 0.9791139690304878;
    msg.lon = 0.895488502556051;
    msg.z = 0.22655604232168758;
    msg.z_units = 193U;
    msg.speed = 0.4635065450922622;
    msg.speed_units = 10U;
    msg.bearing = 0.12660449002227836;
    msg.cross_angle = 0.6056256404907087;
    msg.width = 0.5083090640756002;
    msg.length = 0.5136798225266533;
    msg.hstep = 0.03817957002215566;
    msg.coff = 96U;
    msg.alternation = 202U;
    msg.flags = 56U;
    msg.custom.assign("JCDZCGCHWIXLCNRSUDTWSOZJXXQTCRMAMLNSHCDDWKAVVIHOZLYLVFDEBSSAYRIUKFRMYRWIPFPMWTXNCSMXGIIJOHDYJFXFYZBZTAQR");

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
    msg.setTimeStamp(0.6910213804351124);
    msg.setSource(58282U);
    msg.setSourceEntity(55U);
    msg.setDestination(8063U);
    msg.setDestinationEntity(191U);
    msg.timeout = 46090U;
    msg.lat = 0.20938794523750037;
    msg.lon = 0.6899411842522941;
    msg.z = 0.9827918119333191;
    msg.z_units = 72U;
    msg.speed = 0.3161912139295572;
    msg.speed_units = 36U;
    msg.custom.assign("BJQXWYVRPIYCMHMOZFVGRWWI");

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
    msg.setTimeStamp(0.9045618268778418);
    msg.setSource(39241U);
    msg.setSourceEntity(13U);
    msg.setDestination(13505U);
    msg.setDestinationEntity(207U);
    msg.timeout = 59016U;
    msg.lat = 0.7104370441339186;
    msg.lon = 0.6562308592904523;
    msg.z = 0.0072595205365793;
    msg.z_units = 121U;
    msg.speed = 0.924333472069508;
    msg.speed_units = 189U;
    msg.custom.assign("UEJBZMKTJHUVZTZLMKAKTEFHDZKBYLBTWCUOSXTIQAPARHBMSKRPXMFEJUHWCDRWEKHKFPDCGCVZNFFNIGKNVQACVDYSFN");

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
    msg.setTimeStamp(0.49674264763926035);
    msg.setSource(59071U);
    msg.setSourceEntity(195U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(96U);
    msg.timeout = 44472U;
    msg.lat = 0.25036986263493266;
    msg.lon = 0.6039665974665054;
    msg.z = 0.10181982126137712;
    msg.z_units = 97U;
    msg.speed = 0.2905734325658301;
    msg.speed_units = 13U;
    msg.custom.assign("GOWRMIMEGKIWKGARTWUZACMGXJZFSVCVZXNVEBNQSHLCAYAFODAXSOPXJUKOWFRHWLBBCYQJYHEINWZTZEMZDYTGOSSHUVVIPFVMMODWPAHYGRFNYGVQEJMPKQRBPROHUKQJINTP");

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
    msg.setTimeStamp(0.5035136917890825);
    msg.setSource(60074U);
    msg.setSourceEntity(104U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(122U);
    msg.x = 0.041065893468008374;
    msg.y = 0.6507349919811802;
    msg.z = 0.5256543150122883;

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
    msg.setTimeStamp(0.7133318600840233);
    msg.setSource(62669U);
    msg.setSourceEntity(253U);
    msg.setDestination(28733U);
    msg.setDestinationEntity(10U);
    msg.x = 0.8362092857889207;
    msg.y = 0.6399266263976362;
    msg.z = 0.47833168678455684;

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
    msg.setTimeStamp(0.14622203288035007);
    msg.setSource(40955U);
    msg.setSourceEntity(90U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(248U);
    msg.x = 0.35488654878227854;
    msg.y = 0.08193372920109832;
    msg.z = 0.41372557852045744;

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
    msg.setTimeStamp(0.016017034398234542);
    msg.setSource(17583U);
    msg.setSourceEntity(177U);
    msg.setDestination(12123U);
    msg.setDestinationEntity(151U);
    msg.timeout = 30928U;
    msg.lat = 0.5961651181835098;
    msg.lon = 0.12108788169204243;
    msg.z = 0.6725459854984785;
    msg.z_units = 69U;
    msg.amplitude = 0.05310929110266771;
    msg.pitch = 0.8718143129839612;
    msg.speed = 0.9696878164786298;
    msg.speed_units = 77U;
    msg.custom.assign("SXOUBTJIZSHYETZNEADUGVICOPEPLLLXTYRCPRTIEPZCDCCFJAQDQNVLFLYQROHVGOIFWLXTXVIZAVJDWGVCASDQQIMTZWOSMMORLFRGWZMDIZ");

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
    msg.setTimeStamp(0.1690443171113698);
    msg.setSource(24803U);
    msg.setSourceEntity(66U);
    msg.setDestination(58288U);
    msg.setDestinationEntity(39U);
    msg.timeout = 10197U;
    msg.lat = 0.6621814824073736;
    msg.lon = 0.9340224444129921;
    msg.z = 0.04702977136218667;
    msg.z_units = 195U;
    msg.amplitude = 0.24607790672960628;
    msg.pitch = 0.1866197725354668;
    msg.speed = 0.5346383551383116;
    msg.speed_units = 102U;
    msg.custom.assign("FWTKQFRWGEDMSDQCTNQRKUADEJHAZLSOJHYOWUCKOZCAGZGCWFKYYDVOQGUKRSVJHMKXXTMLFPVEOZBNRGLERNBXLGRLPJCQAQIHGQYUOWHCAVNEVRTWHPCMWJDZVIWCZPAURNENCLIMYAMGTTLXBXUOTEDIUQILHPEUBSZYNXEBPXZRDDPBFHDXFNPSGJYBBLPFAAYIMYWSXQKIZKCVJHNOMWJTDVLTEBUZXIIPFYKMKVFOQSFBJ");

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
    msg.setTimeStamp(0.22242016700112643);
    msg.setSource(64126U);
    msg.setSourceEntity(226U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(209U);
    msg.timeout = 530U;
    msg.lat = 0.6241269486674327;
    msg.lon = 0.589756962076573;
    msg.z = 0.686212157483555;
    msg.z_units = 107U;
    msg.amplitude = 0.5546451790231978;
    msg.pitch = 0.14133253557312087;
    msg.speed = 0.3570804377952763;
    msg.speed_units = 14U;
    msg.custom.assign("IMXHOVFOWYOMBFZVRCUWZLBBRMKVFTKSCVARDPIWKTYRLDQUXOMVONHCJFOAUWFNKNGMGXEHIGWRTJOQZXGEGHVWIPHEAOPISTMSLHWHIVTXLBTRQMEFAJYXYBMKANPN");

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
    msg.setTimeStamp(0.514184665961486);
    msg.setSource(30348U);
    msg.setSourceEntity(164U);
    msg.setDestination(25345U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.6102483233894382);
    msg.setSource(15464U);
    msg.setSourceEntity(69U);
    msg.setDestination(46235U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.8707242801878092);
    msg.setSource(29615U);
    msg.setSourceEntity(27U);
    msg.setDestination(2022U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.7285977862486679);
    msg.setSource(65287U);
    msg.setSourceEntity(80U);
    msg.setDestination(24532U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.1391147311070512;
    msg.lon = 0.12131719708653532;
    msg.z = 0.40263048226607856;
    msg.z_units = 232U;
    msg.radius = 0.9745963371393344;
    msg.duration = 11783U;
    msg.speed = 0.461575931521204;
    msg.speed_units = 218U;
    msg.custom.assign("PDRGJIZENPLHNCLNUDSNHGXBHBSKJYNVABYOVXNFSAISLQEYUDRCWHGBVVZJVSZEXQZXRXYBWOQGDWARBUOHKNINHTUCAHIJFFEETWMWJBFYCBQETUXBQTUADT");

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
    msg.setTimeStamp(0.9926793556651068);
    msg.setSource(7448U);
    msg.setSourceEntity(239U);
    msg.setDestination(4823U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.7270740086185252;
    msg.lon = 0.016712709245009005;
    msg.z = 0.17312353859604324;
    msg.z_units = 106U;
    msg.radius = 0.9039115673316717;
    msg.duration = 51004U;
    msg.speed = 0.9421046407797042;
    msg.speed_units = 246U;
    msg.custom.assign("DSZIXZTSMNDBABASXVLXVUUHPKOMLLZWWNCILKQPNENLEYUMEDOWOHUPGXEGSJVVPOWTEIDLFYNGXKKXDRLEFYJDPQMZJICYDNYCRTRROGAMOMZTOVIFAVPRAAQDDKUAKFHZWWJVBBHBEDJBIJHRCGUACPJFYZA");

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
    msg.setTimeStamp(0.41789299080600806);
    msg.setSource(57702U);
    msg.setSourceEntity(117U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.30493048975053505;
    msg.lon = 0.8521444081140221;
    msg.z = 0.8501516033127926;
    msg.z_units = 48U;
    msg.radius = 0.821257909717169;
    msg.duration = 58293U;
    msg.speed = 0.6417815633136982;
    msg.speed_units = 252U;
    msg.custom.assign("EVXTNJDAMZKPYPLZUDGBCJFHKHDJBJMSOPCHSWRNHCYYGMIEFTLOJSBYZZSLTYYXPXVDWZAMWEZQIYGRPFPI");

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
    msg.setTimeStamp(0.3201670120846546);
    msg.setSource(3542U);
    msg.setSourceEntity(66U);
    msg.setDestination(8509U);
    msg.setDestinationEntity(109U);
    msg.timeout = 53693U;
    msg.flags = 180U;
    msg.lat = 0.26993099078633165;
    msg.lon = 0.26101975508901243;
    msg.start_z = 0.4541646960064374;
    msg.start_z_units = 203U;
    msg.end_z = 0.3713816737223018;
    msg.end_z_units = 181U;
    msg.radius = 0.8598761278888926;
    msg.speed = 0.8837968403413408;
    msg.speed_units = 6U;
    msg.custom.assign("FUAKXLXXMRZOLBFXKRIRHDQMTDJSWIIFWUOEUGCPFBGJJPGYGSFLAJWZKVMCQTNEKPEGIFM");

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
    msg.setTimeStamp(0.04530211138030271);
    msg.setSource(19316U);
    msg.setSourceEntity(47U);
    msg.setDestination(7895U);
    msg.setDestinationEntity(134U);
    msg.timeout = 34508U;
    msg.flags = 47U;
    msg.lat = 0.4206978946973392;
    msg.lon = 0.6860480913015751;
    msg.start_z = 0.31190105653228417;
    msg.start_z_units = 57U;
    msg.end_z = 0.23620570157576093;
    msg.end_z_units = 241U;
    msg.radius = 0.5744699036868314;
    msg.speed = 0.8184376097021051;
    msg.speed_units = 204U;
    msg.custom.assign("QWADOOGIVDMHCNERZXIYBZRKUSAQLRZPEZHBSUJGNGVKLREPAAQFITRPVIUVIJKLLHXFCPAYIXJIBPBFUVQUTMCSLPFMOCCYYLUBEMCMDAORZWWOMRMWIDOXSYSJQUPCNWKUKJBCHBLUMNDBZBTGIOTJTFAODEARZXPJXQSMFFGTFLKCDVLQZGKYCESONWHKBENAYXJJ");

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
    msg.setTimeStamp(0.8336084272650084);
    msg.setSource(29167U);
    msg.setSourceEntity(175U);
    msg.setDestination(36962U);
    msg.setDestinationEntity(113U);
    msg.timeout = 49960U;
    msg.flags = 134U;
    msg.lat = 0.185337405191778;
    msg.lon = 0.8247853571707349;
    msg.start_z = 0.0814219899446964;
    msg.start_z_units = 13U;
    msg.end_z = 0.9695182123149341;
    msg.end_z_units = 98U;
    msg.radius = 0.6661997006382909;
    msg.speed = 0.4593829202693446;
    msg.speed_units = 88U;
    msg.custom.assign("DIWUWIJRNAPORRZQDKKHLQRRJQZKZAZMOIESVJMXYODRVCQTSXLEXFUPHUPHNEAGQLEOWWSIVJXHORTUDPSOTWQVFYJNUNSLWNPXXKGMCHGBFTPMHNVOTGKECZDRQ");

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
    msg.setTimeStamp(0.5826691001872344);
    msg.setSource(65117U);
    msg.setSourceEntity(55U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(15U);
    msg.timeout = 56475U;
    msg.lat = 0.5545639421050574;
    msg.lon = 0.11067280373557886;
    msg.z = 0.4541523835344111;
    msg.z_units = 27U;
    msg.speed = 0.5370510491803031;
    msg.speed_units = 95U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3228774495387067;
    tmp_msg_0.y = 0.26579350052267703;
    tmp_msg_0.z = 0.3298252979178078;
    tmp_msg_0.t = 0.5752858207415624;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NZBMNUTYUBMGEIIYAHGHZPCKSIWZVNWGPETREPKXIUHJLLPUPLQESEXSOLZUJPIMXQYPXCMQDEULCSEVNZAACNWTNZZVAZASVHQRNWXRPFQOXOLBABHLIETRGGLQSWIGQFWYUIOMYFXWQZMBKODDVMMMVFPYOHXNTZWJRXTOKSAUMSRFGDECJDBQRA");

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
    msg.setTimeStamp(0.17633206480326413);
    msg.setSource(9635U);
    msg.setSourceEntity(220U);
    msg.setDestination(59024U);
    msg.setDestinationEntity(209U);
    msg.timeout = 36304U;
    msg.lat = 0.8034692036211911;
    msg.lon = 0.5248283292965872;
    msg.z = 0.7295846437225376;
    msg.z_units = 109U;
    msg.speed = 0.16252111399882663;
    msg.speed_units = 126U;
    msg.custom.assign("HLHCBVOKNPHHEEOTDKTNOUUVNQJIFJZASUVLEETPNMRJKIBXKXMAPBWDYKBWUAQCFYBKANCAWHOYGSTLRUZBHGTZPJDWMYIAYQLKWMXRORVM");

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
    msg.setTimeStamp(0.8112268802525423);
    msg.setSource(37634U);
    msg.setSourceEntity(25U);
    msg.setDestination(10712U);
    msg.setDestinationEntity(209U);
    msg.timeout = 41180U;
    msg.lat = 0.19115489741632374;
    msg.lon = 0.9597437529361403;
    msg.z = 0.8315904995646048;
    msg.z_units = 97U;
    msg.speed = 0.4097764620280876;
    msg.speed_units = 110U;
    msg.custom.assign("ZGOBZEEXAFGLMNZRSSSIYZMXQYSHCVNSYZYVLRZGFQJLRUQAPIOUNEJFGEMNCPNYBYFSCJJAPLEIDBHXEB");

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
    msg.setTimeStamp(0.8257607795131781);
    msg.setSource(56385U);
    msg.setSourceEntity(75U);
    msg.setDestination(11232U);
    msg.setDestinationEntity(249U);
    msg.x = 0.40037654253669797;
    msg.y = 0.24071971294602057;
    msg.z = 0.32223579084592313;
    msg.t = 0.12024618092643835;

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
    msg.setTimeStamp(0.5533115205929217);
    msg.setSource(47796U);
    msg.setSourceEntity(128U);
    msg.setDestination(64137U);
    msg.setDestinationEntity(132U);
    msg.x = 0.4202645141333059;
    msg.y = 0.9768244586954185;
    msg.z = 0.5495629466586923;
    msg.t = 0.9181115553046615;

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
    msg.setTimeStamp(0.142514355623798);
    msg.setSource(43836U);
    msg.setSourceEntity(212U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(193U);
    msg.x = 0.522170712662427;
    msg.y = 0.8118343138781768;
    msg.z = 0.26082776868102575;
    msg.t = 0.7593101541692975;

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
    msg.setTimeStamp(0.2076114302396198);
    msg.setSource(62359U);
    msg.setSourceEntity(241U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(132U);
    msg.timeout = 34166U;
    msg.name.assign("HYILDBTWZGLUMAILMPOEGWA");
    msg.custom.assign("HOTSPTJPUMQXGJISNLMDACSEVCSDCQKGGJWIHTASTWIERRBVSIGYVLNALHZGPZJDYAAQBMVZCWYRXOTONRVROXSZGXFJKDIQLJKZNBIXMAQCAZKEDZMYCYIKXLQPPKNZKUF");

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
    msg.setTimeStamp(0.9615721210687623);
    msg.setSource(42268U);
    msg.setSourceEntity(4U);
    msg.setDestination(25657U);
    msg.setDestinationEntity(227U);
    msg.timeout = 63700U;
    msg.name.assign("HONQNMEOVIBNFHTGOQASDVHCKDYSURSAIKRSPJOQFXKRQROHHNCPLGBPCOZYYGERTZXEBFJLIGPDOAPJCYXUNVQWADXJJDAXKXTKQEBPDVNCYSUEKKHFTGODDUCQZWLTXWHHUAIGZGJMUHFBZYXMPXNGCJSEIRSTPLMVWVLZJDIQTL");
    msg.custom.assign("NSCQEYVGRCKWPQHAYA");

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
    msg.setTimeStamp(0.5402666520218458);
    msg.setSource(3736U);
    msg.setSourceEntity(224U);
    msg.setDestination(27888U);
    msg.setDestinationEntity(36U);
    msg.timeout = 50561U;
    msg.name.assign("YUMKRDWAZABXUEIRYHAVBPSPNUZOIZROCAXUCCTJKJKIWBBQDLMFHEEDTVEBUTAYFXRWAXQHZJNZKHPLIEWLJGCIOVEKGLOBPGPRPJZEBLQN");
    msg.custom.assign("ODIAWTMXMWVEMCJXGHYGWSREUIZSDBSAGVGGYQWPCGEJQZZLNXIMNDMQLLRIYXQQQVEZCUZNAJNIGREXCUUPQFPKKDKJLGEBAOPBEWJYCYPHQNINLBLXQOSELJJFSIOAIHHJPRDMSLIKTYOHZPMETKAKHVRBJTCDZTPWHVOAZNKYNTLTR");

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
    msg.setTimeStamp(0.6934976806358952);
    msg.setSource(39025U);
    msg.setSourceEntity(135U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.4475630085738833;
    msg.lon = 0.6508917350263368;
    msg.z = 0.03983784075587582;
    msg.z_units = 94U;
    msg.speed = 0.49303698685371655;
    msg.speed_units = 108U;
    msg.start_time = 0.8730548874417641;
    msg.custom.assign("YVQBSHBSJWQDJGYFXJJDLYDNMSUFXRGHCKNTORRVUGLLOLBSIKUAUQOIUHKGBQXWBCALMYRRQNGOPMAWOLZNTEVPDSICGZXXQCOCWEHPRPRFYQNCXZKKQAKRBWUMXLEIKZYTLSJPFTZADBPNMFFMZCTKYS");

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
    msg.setTimeStamp(0.4106622144238127);
    msg.setSource(29104U);
    msg.setSourceEntity(27U);
    msg.setDestination(33387U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.2361922371074584;
    msg.lon = 0.8647528600541582;
    msg.z = 0.2797426836099286;
    msg.z_units = 174U;
    msg.speed = 5.92620159124424e-05;
    msg.speed_units = 225U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.32851284262816727;
    tmp_msg_0.y = 0.7538037885964596;
    tmp_msg_0.z = 0.5748874526251843;
    tmp_msg_0.t = 0.8192906336470417;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7091378177221592;
    msg.custom.assign("ZXGWNDEYHSA");

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
    msg.setTimeStamp(0.12379636583620612);
    msg.setSource(28219U);
    msg.setSourceEntity(130U);
    msg.setDestination(21387U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.8389518023970655;
    msg.lon = 0.033926177084261155;
    msg.z = 0.6830316356855839;
    msg.z_units = 112U;
    msg.speed = 0.17621858824605474;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.31613597658910086;
    tmp_msg_0.y = 0.5949881868827082;
    tmp_msg_0.z = 0.8726954671524507;
    tmp_msg_0.t = 0.3389761847374396;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5667140701959501;
    msg.custom.assign("KFXOFHWKDPAQROTZRSURJASZFVLLEQWMCBSEOZQPHEXHIADQAHJVWEGNBMMJVWPLCRKECYSJUXOZTHBYIXGPPGMUOIMHKWOKVECXPGTRZWVFJJMRWIGFQSSNKCDZFBJGFZCVKNWIXJUD");

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
    msg.setTimeStamp(0.7642104162056467);
    msg.setSource(18193U);
    msg.setSourceEntity(97U);
    msg.setDestination(60452U);
    msg.setDestinationEntity(248U);
    msg.vid = 34012U;
    msg.off_x = 0.11583102303627879;
    msg.off_y = 0.2984550764617383;
    msg.off_z = 0.12908517196489355;

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
    msg.setTimeStamp(0.798025035585114);
    msg.setSource(14919U);
    msg.setSourceEntity(223U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(7U);
    msg.vid = 7664U;
    msg.off_x = 0.10738008735382032;
    msg.off_y = 0.06870725630501662;
    msg.off_z = 0.06496499374168696;

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
    msg.setTimeStamp(0.33371618922881596);
    msg.setSource(51847U);
    msg.setSourceEntity(128U);
    msg.setDestination(49854U);
    msg.setDestinationEntity(39U);
    msg.vid = 18029U;
    msg.off_x = 0.15013467416108117;
    msg.off_y = 0.8675985530562051;
    msg.off_z = 0.5245372031662008;

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
    msg.setTimeStamp(0.6504088202945416);
    msg.setSource(11435U);
    msg.setSourceEntity(21U);
    msg.setDestination(53723U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.9329068564408495);
    msg.setSource(59413U);
    msg.setSourceEntity(251U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.7147212610637458);
    msg.setSource(28338U);
    msg.setSourceEntity(245U);
    msg.setDestination(25364U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.828622495781267);
    msg.setSource(17098U);
    msg.setSourceEntity(151U);
    msg.setDestination(47425U);
    msg.setDestinationEntity(6U);
    msg.mid = 36029U;

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
    msg.setTimeStamp(0.8271226079109567);
    msg.setSource(17981U);
    msg.setSourceEntity(146U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(111U);
    msg.mid = 31738U;

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
    msg.setTimeStamp(0.8445558580684277);
    msg.setSource(55435U);
    msg.setSourceEntity(236U);
    msg.setDestination(54859U);
    msg.setDestinationEntity(205U);
    msg.mid = 34837U;

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
    msg.setTimeStamp(0.6703650540450415);
    msg.setSource(30751U);
    msg.setSourceEntity(26U);
    msg.setDestination(40371U);
    msg.setDestinationEntity(208U);
    msg.state = 121U;
    msg.eta = 19369U;
    msg.info.assign("MJITHLHIMRILLSNDPKVZKQQECLJOEKKTVPTAPZOVLEATAOUKZXUZGVNXTFTQDRWWMYJGTOOMBMSCAGRMRHTBDZVOSVRDQJBHARVQSZZGDWUPLENXTGDNISJPXYERYSFWYSM");

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
    msg.setTimeStamp(0.19452785158824215);
    msg.setSource(53793U);
    msg.setSourceEntity(18U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(221U);
    msg.state = 184U;
    msg.eta = 5776U;
    msg.info.assign("PQMSXCJXAEULZOTPKSINDNEHHQEEAASIUBKFHWQQXFLNUCDM");

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
    msg.setTimeStamp(0.2787665341888985);
    msg.setSource(50829U);
    msg.setSourceEntity(69U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(12U);
    msg.state = 141U;
    msg.eta = 47542U;
    msg.info.assign("POKBKMRYXYNJKIFSABZTZAYYQXRZOGENQWGLGAFXKSZOUWEFENFJVIDPQXMXZADNLQKCSUVDVPJIZVVBWEIQRRBLAKJXYUZADUCFWANTNGOICAWEIOPYXUUTVLUELIRDBEVCMJGHHM");

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
    msg.setTimeStamp(0.35336435334544447);
    msg.setSource(55538U);
    msg.setSourceEntity(140U);
    msg.setDestination(2640U);
    msg.setDestinationEntity(108U);
    msg.system = 64258U;
    msg.duration = 30787U;
    msg.speed = 0.7490068054769268;
    msg.speed_units = 100U;
    msg.x = 0.9637993414551238;
    msg.y = 0.09594212856756767;
    msg.z = 0.8530025625821257;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.13665698680221272);
    msg.setSource(46664U);
    msg.setSourceEntity(99U);
    msg.setDestination(1864U);
    msg.setDestinationEntity(202U);
    msg.system = 22248U;
    msg.duration = 34746U;
    msg.speed = 0.8653591161440861;
    msg.speed_units = 89U;
    msg.x = 0.3096733592532387;
    msg.y = 0.6883347955404111;
    msg.z = 0.8792434062524864;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.0507375266589577);
    msg.setSource(38259U);
    msg.setSourceEntity(71U);
    msg.setDestination(46877U);
    msg.setDestinationEntity(34U);
    msg.system = 18886U;
    msg.duration = 17027U;
    msg.speed = 0.6222365524732827;
    msg.speed_units = 236U;
    msg.x = 0.22863609823702447;
    msg.y = 0.4732647980367073;
    msg.z = 0.40713841401632866;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.9958159126855136);
    msg.setSource(41395U);
    msg.setSourceEntity(190U);
    msg.setDestination(35280U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.9970842112331316;
    msg.lon = 0.5866312283713193;
    msg.speed = 0.87565287814901;
    msg.speed_units = 115U;
    msg.duration = 37260U;
    msg.sys_a = 37526U;
    msg.sys_b = 45307U;
    msg.move_threshold = 0.16922336657913806;

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
    msg.setTimeStamp(0.4575538434528216);
    msg.setSource(546U);
    msg.setSourceEntity(101U);
    msg.setDestination(50882U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.9152830968012192;
    msg.lon = 0.22407129982223706;
    msg.speed = 0.916153598812837;
    msg.speed_units = 209U;
    msg.duration = 11111U;
    msg.sys_a = 34507U;
    msg.sys_b = 27033U;
    msg.move_threshold = 0.6225893231131219;

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
    msg.setTimeStamp(0.9665657905811759);
    msg.setSource(11511U);
    msg.setSourceEntity(70U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.8361191650200466;
    msg.lon = 0.9892293380990048;
    msg.speed = 0.9299949610865277;
    msg.speed_units = 94U;
    msg.duration = 20591U;
    msg.sys_a = 64032U;
    msg.sys_b = 4432U;
    msg.move_threshold = 0.21503527150191926;

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
    msg.setTimeStamp(0.3555872113468961);
    msg.setSource(25660U);
    msg.setSourceEntity(25U);
    msg.setDestination(7830U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.6692633024803075;
    msg.lon = 0.3687232561803341;
    msg.z = 0.12844600011190033;
    msg.z_units = 170U;
    msg.speed = 0.2644036914462975;
    msg.speed_units = 195U;
    msg.custom.assign("UOKLTQAMGBBAMDZFLI");

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
    msg.setTimeStamp(0.8216018986024739);
    msg.setSource(17875U);
    msg.setSourceEntity(92U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.3368909654596305;
    msg.lon = 0.6631136772106382;
    msg.z = 0.6887900342070177;
    msg.z_units = 200U;
    msg.speed = 0.06219041557678684;
    msg.speed_units = 132U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.367490325522418;
    tmp_msg_0.lon = 0.60446642738664;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UZQFPOXHZVJRIZMCZHORWKAUYFFTGWDPGFFJTYOQSQSEZMMKJFVAXDBCEJOJATRBIEBUXKGPLPMRABWGNXAZEVZZHTLHQXYCVGIRVKMGVSMMDRFITHXODLKEDVFQIRWISIECJDADUMQJGLLCOPIJFL");

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
    msg.setTimeStamp(0.1042806478809093);
    msg.setSource(7936U);
    msg.setSourceEntity(47U);
    msg.setDestination(19423U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.7268130888603697;
    msg.lon = 0.21619294069883888;
    msg.z = 0.23482051224221867;
    msg.z_units = 228U;
    msg.speed = 0.9752693300284855;
    msg.speed_units = 140U;
    msg.custom.assign("TCSWIPYNRWNQVUULFEQLXNOBIKFHLDIJFKEACQWZDNHCMHLMWRTKN");

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
    msg.setTimeStamp(0.46428470312797576);
    msg.setSource(39495U);
    msg.setSourceEntity(218U);
    msg.setDestination(12256U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.742079557061762;
    msg.lon = 0.14501144325206783;

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
    msg.setTimeStamp(0.7886511466704355);
    msg.setSource(142U);
    msg.setSourceEntity(41U);
    msg.setDestination(54869U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.7181952344202888;
    msg.lon = 0.03500610295601558;

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
    msg.setTimeStamp(0.38073355505408946);
    msg.setSource(12938U);
    msg.setSourceEntity(4U);
    msg.setDestination(40410U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.4599715719675469;
    msg.lon = 0.1942250125545234;

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
    msg.setTimeStamp(0.7275634381955126);
    msg.setSource(53018U);
    msg.setSourceEntity(58U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(237U);
    msg.timeout = 3872U;
    msg.lat = 0.6376181168665497;
    msg.lon = 0.5346238778060637;
    msg.z = 0.794899575676673;
    msg.z_units = 219U;
    msg.pitch = 0.8697141965799116;
    msg.amplitude = 0.9012966629027811;
    msg.duration = 2602U;
    msg.speed = 0.9829611736776701;
    msg.speed_units = 115U;
    msg.radius = 0.8426123015412278;
    msg.direction = 177U;
    msg.custom.assign("WICQSQMXMMUOPQQAORERHSFIYTTUQAQXHZHYLOYWAFNPJUEZJKSKFDHXTRBBSBAPZWDLDZCABHKVYOSPNGGUWFECIOVLPNAXSOTXEMLXQZHMVGVINCLEEXTAJNSNIKTJPLTFCUXFYIUPKKHSXCGBZGSEQKPYYYHVTGGEWVZROKPQMDNVZBJBZLCLBVMUNIJAYFJKCUGNOGWRMDWDYRAFAETWVBBXPJDLJVIMCOIRFKFHQURDRDWD");

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
    msg.setTimeStamp(0.5104020585496976);
    msg.setSource(1943U);
    msg.setSourceEntity(234U);
    msg.setDestination(26317U);
    msg.setDestinationEntity(136U);
    msg.timeout = 62294U;
    msg.lat = 0.6390236677466605;
    msg.lon = 0.4374858553281862;
    msg.z = 0.3145463083261456;
    msg.z_units = 173U;
    msg.pitch = 0.7738035814590852;
    msg.amplitude = 0.12107233218986657;
    msg.duration = 48950U;
    msg.speed = 0.8477651867099127;
    msg.speed_units = 72U;
    msg.radius = 0.2127080332825082;
    msg.direction = 22U;
    msg.custom.assign("FYDDCPNNECLWCSDKGZUXGICWPWOEGRHAAJLFFVIHXRWTVTLMDRUVEPMOURTGHTRIUYGHQPIHNLRQKRJYVMMXSKOFVLNUNRDDKNUAJMKAPVBXAIMTGSWVEEDVBUZXLCEWSXBQOS");

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
    msg.setTimeStamp(0.5263266740914646);
    msg.setSource(27350U);
    msg.setSourceEntity(226U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(71U);
    msg.timeout = 39471U;
    msg.lat = 0.43166092198222406;
    msg.lon = 0.42050317319621944;
    msg.z = 0.5272044578757729;
    msg.z_units = 127U;
    msg.pitch = 0.4673831521663995;
    msg.amplitude = 0.930317351703558;
    msg.duration = 4421U;
    msg.speed = 0.20435474313182078;
    msg.speed_units = 39U;
    msg.radius = 0.09653127035246412;
    msg.direction = 56U;
    msg.custom.assign("SNHBWULSQFNFKMHWKRWNWXVIIODXBWDDLEYINXUTATPYEZNGUSIRPGZQIATKWMETMHJBEUCHYSVPOUKVAGVBDARSQTLYCZEILVMKBMBXRHYJJQKSIQZKTNXLIRCCQFGXHGVXMCYUQETBOVCNZEOQDFBDCOFLAJWLXDOLMTROYHAROSIFZNWVGTHAVRJRAQSZFMUPKKYHJCAMPZYDPXEJPGNPSJUEZVN");

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
    msg.setTimeStamp(0.8921581466329908);
    msg.setSource(10479U);
    msg.setSourceEntity(186U);
    msg.setDestination(64247U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("JJQLKHTWSVHGNOYCFCBRZZSKOJLCVEWEBJEKTXYFYXGLHQEJHYSEPVGPDLTISYRRHWSGOOYQUUVPALJECZNWLMPPSLWTNEKZJNVSBAEDAQWBIDN");
    msg.reference_frame = 149U;
    msg.custom.assign("ZOPUUTFGNJFVVNGRRCCNIWBJEMDBVXDGRCCOFQRQAHPIZROBUIADOXBJYTZXWENQCSXJGYDAAGHNZVEVOLZLPSMSBAMNFKBVTLDLEDLZLF");

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
    msg.setTimeStamp(0.5294950848640488);
    msg.setSource(42053U);
    msg.setSourceEntity(137U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("CCKSYFDRMALWIUEPZBDISWMKYEDMAPBKJQHVTHCDKAWJLVDVEMEIPTLRVEXRVCFKSQQEGSBDCUAMUKBDGSDHYRNMANHIRTCBLZZNJOVQIQLDUZEHGJYXPKVTQUOUVQZFKPBLROSNFOAITQEFYIUYAPZXHWXVGPHNGBCGZWPOX");
    msg.reference_frame = 195U;
    msg.custom.assign("HIGDNCDWPLEVNWHAQSKVSLDBMUFFVBTVLNHDSWJRCYZXGJEABFFHHROCFDPZNPXAZNUWUCORZTVOGNLTKDPBFSXIARJJIDRZQYJECUGYMTUAMZHETWQBXVFMKQCMJDKEZUOCYGGQI");

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
    msg.setTimeStamp(0.7504362687223026);
    msg.setSource(22902U);
    msg.setSourceEntity(234U);
    msg.setDestination(38275U);
    msg.setDestinationEntity(144U);
    msg.formation_name.assign("OUKLUPYLUBNXENSVNZQTMVWOCTIZBTDQMELZVUEQMVGFUOTJBGIRCAATGVMOMTAICQJNMQZYRYYCKKAUKSJUWOCGIYPSDQTGFQVRHELAFAEPBRHETZYWZQJGXSBSJYGBXRVRRBDHRPSSQHSWXQKLKNXBPZVOTIGMLHLDEOEPNXIUJCYNYPIWFEFOLJOTWCWCNXRVAFHSZXVWMGIGSONPDDBZFMFBJZHUADDHAKCPLDKFALKHKPWXJWRFDNIM");
    msg.reference_frame = 240U;
    msg.custom.assign("IVWBPSFQCDDZYKZHKTRLNJVQZZDAJIECOGXBAANOXTMPQUVLXQMYACEIGESGJNQHTWACLGAEKDILFHRFFUBTRQJSETDFKYFCMJVVILNZZIH");

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
    msg.setTimeStamp(0.9950835441537659);
    msg.setSource(11591U);
    msg.setSourceEntity(231U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("NXTEMIICNWSBVEVUOKDMUSNFBDAEALNTJZDQWOHQZRJXCYJDQBULPVAZHYMXENGHOFUJPRFPBCKXQOGBWPRVIWLGQNPOFFQWEYAGTEODMFYLCKPGHRCNYSGMLCHUMHVILPLQGNTFCCCJUXFZJUGOMIZQRTSQJWKZSISAOTXXVAAIVLDJYYLBDOBUNMRTRFTWYSHKHJPGJPIEKIKVRKOMXKVTZUBMWYLDPWEYIHNUBQTVDEZASRERAGBXXZH");
    msg.formation_name.assign("QXAFDUZEFXEJYSVLTVAYLFAWXBIOPFUHGYJAGEUKKQGFROIOZZERCTDOJPNSDCIJOAWPRRWADFRJDMMNGIOVKIVURTMGHHYBJQJSAZAWOJNBMSPTPXEGHAZAUXBQRBVCCKZQKLIMWTPYUS");
    msg.plan_id.assign("EYUTGCORHXLXUHTHNWVOMQBXIJRDFAIQYSVVTIKKUDPMXLOXIEBLLNGXTULKYAYWGBPFGWBPCFXMRLDXBDTSSKYFZHCDAHUEHENHUGZQRPFRNEZJOUCMRNRSIURZVDEEUTXPJLSDQOTNIZPBKFKMPINOVNMEHAIAYZJWJJKLWC");
    msg.description.assign("IBCFBWVJLLBHLALJSIWOXJRBZYUKFOPMDHUTXQSWFIKNUHKBWDGUJLPKYCJVFTXDMPDOAKYCGOFVLEWGKVZQKDZEAAYFRFMDIELLTUQXODG");
    msg.leader_speed = 0.0810743621997938;
    msg.leader_bank_lim = 0.3566508614691377;
    msg.pos_sim_err_lim = 0.4821769624821304;
    msg.pos_sim_err_wrn = 0.024889341954939748;
    msg.pos_sim_err_timeout = 1283U;
    msg.converg_max = 0.20260109910772228;
    msg.converg_timeout = 29638U;
    msg.comms_timeout = 11918U;
    msg.turb_lim = 0.29167183774862415;
    msg.custom.assign("XKEBRPMPYXIVGHMJXRGGRVCOTXSCQDELEXPDORFQMDYSBIZCHYNILLJJMTPDQIRSWGVAAOZEPTYRTGDMSHACEZUXCKWSQCPXCWBNZSBUXGPDDXGUWWKZJUOMOKFOJENDCYUCLTQLVWEQVDUDHZHHZNJWLFYBLSFHTMHEMFRJNPFTAABIBBTFNKANGIIL");

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
    msg.setTimeStamp(0.07523093598714248);
    msg.setSource(11725U);
    msg.setSourceEntity(87U);
    msg.setDestination(43936U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("RMOGPBFEFVPXKLANDPATVQEYBVZSISZDFXBCPDQIGHFKALTUMNOSDGYVWWEPJAHOTIIJZBINRKRSWEVCDWQDIYIUCGGQYMBCUCYWMXFXAPQBNCUSGNBKWJXMFCAEIATHBAUJGYLWFEJNTSGTPPHSOKKFSAJMCCEHVRWZZQMLRVGXJZLJOYMY");
    msg.formation_name.assign("RGBXCQWCCWGIDFFHNBDHKNUNKWRZEQYFLUDWT");
    msg.plan_id.assign("VMTYECPOQNPPMJISBXOCBUDKACJZHIWTMOOAKNFRLDXHKYOBTCL");
    msg.description.assign("IWQYPMGHZZZSLLTKGBDOKXSABMTESAGVOOBRDFQGZVXNDZHGG");
    msg.leader_speed = 0.01862514344521482;
    msg.leader_bank_lim = 0.5923262558949451;
    msg.pos_sim_err_lim = 0.1816245589805896;
    msg.pos_sim_err_wrn = 0.8650894616167639;
    msg.pos_sim_err_timeout = 41598U;
    msg.converg_max = 0.7126762476721819;
    msg.converg_timeout = 40973U;
    msg.comms_timeout = 37107U;
    msg.turb_lim = 0.28139341967708786;
    msg.custom.assign("VTQLRXWHEMFTFUAKXHNQVWATFSUQJUYCMIXYQTLMITDNSVTLJWELMMCIIYLPEQNBDMEIIBLGROEAVRUXXYKYLFTFSDHDZXHWCDJCHJBPDPKOXRDXHGBWNKXEBYHIIAZORCRGAFPVYHQZUZXZSJLKSPWKLFSOZDEJHANUCPEPEUAPJTYOTUQGKJOCIBZWMOGVIBGRGNUSYFWOPZRD");

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
    msg.setTimeStamp(0.5133513011200797);
    msg.setSource(8563U);
    msg.setSourceEntity(40U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(40U);
    msg.group_name.assign("YFNEEYXHTPMBYGGWXAEPBYXUTWJFLDZCGQLPNQDDICQIKZSRHXFIGCRNMTRLDHKZFWHANIHFEVJSLWFXVPFRBQRQOTUOQEXMZVINBYMVSNAVMULYFHARYYIXJCWPAUKEUQWMSTZOBHMJCCTLSRJLNOKRWBMZOBTMGTADWQXIOOBSPUZPQLIVGCAAYKGFWKEFCZUDNJJWGVARPUNV");
    msg.formation_name.assign("NOXBXLPCKLWCQCLYZOMBPNBCWQGUFIDAPFNJOPRVWTHRARGMNS");
    msg.plan_id.assign("WINQBZQIWZKXAOKORVUUCEKBGNFEOSAIYFBPGUBPIVOMWYXJTDTOGNUEFCNLVRTNYPZLEGARLOJXBQSGDNLFDPJWIQABRGVHEEIOKTCFA");
    msg.description.assign("NSQUKXABDODBSAZHPNVHVIFYPEJWEEKOCSMNJJCFPWQSCGIPJYFXTLCALAQHMLROATCHIXJRFYDTUYBZDAYSNRPKNMZQDUXEQNFZXMBWITKWCVJHERMKMYSDVZQRVFTIBGWTCLEUHGQDKTZFO");
    msg.leader_speed = 0.7870927843640205;
    msg.leader_bank_lim = 0.8996596055409226;
    msg.pos_sim_err_lim = 0.9208357506842989;
    msg.pos_sim_err_wrn = 0.7302243794097566;
    msg.pos_sim_err_timeout = 55806U;
    msg.converg_max = 0.5488544013230512;
    msg.converg_timeout = 24080U;
    msg.comms_timeout = 36505U;
    msg.turb_lim = 0.0638519986255307;
    msg.custom.assign("YHVOWCSZXGHSSMOXBRNGBYWIVFKOVTCLIFCIZYL");

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
    msg.setTimeStamp(0.4726389264836718);
    msg.setSource(44212U);
    msg.setSourceEntity(28U);
    msg.setDestination(25946U);
    msg.setDestinationEntity(95U);
    msg.control_src = 62078U;
    msg.control_ent = 218U;
    msg.timeout = 0.5821228173983547;
    msg.loiter_radius = 0.9120984995683569;
    msg.altitude_interval = 0.8160682660491491;

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
    msg.setTimeStamp(0.6538297085222616);
    msg.setSource(48439U);
    msg.setSourceEntity(180U);
    msg.setDestination(8228U);
    msg.setDestinationEntity(12U);
    msg.control_src = 41272U;
    msg.control_ent = 144U;
    msg.timeout = 0.2847354990268559;
    msg.loiter_radius = 0.36453230277867243;
    msg.altitude_interval = 0.25013807177828473;

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
    msg.setTimeStamp(0.5308913242480632);
    msg.setSource(40891U);
    msg.setSourceEntity(150U);
    msg.setDestination(50683U);
    msg.setDestinationEntity(210U);
    msg.control_src = 42547U;
    msg.control_ent = 5U;
    msg.timeout = 0.3525372598987967;
    msg.loiter_radius = 0.5364369134786834;
    msg.altitude_interval = 0.17306648902537558;

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
    msg.setTimeStamp(0.6574081356002982);
    msg.setSource(26649U);
    msg.setSourceEntity(191U);
    msg.setDestination(39240U);
    msg.setDestinationEntity(34U);
    msg.flags = 70U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4503354131136106;
    tmp_msg_0.speed_units = 57U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3392194839905712;
    tmp_msg_1.z_units = 104U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6264256882231974;
    msg.lon = 0.4374586747409267;
    msg.radius = 0.9149446192397412;

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
    msg.setTimeStamp(0.44530964465766654);
    msg.setSource(6093U);
    msg.setSourceEntity(80U);
    msg.setDestination(4749U);
    msg.setDestinationEntity(22U);
    msg.flags = 61U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.16223885797033377;
    tmp_msg_0.speed_units = 101U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.12071375724050304;
    tmp_msg_1.z_units = 63U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.24224151186831533;
    msg.lon = 0.792737680479881;
    msg.radius = 0.2769335493704158;

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
    msg.setTimeStamp(0.11261961028983403);
    msg.setSource(31390U);
    msg.setSourceEntity(102U);
    msg.setDestination(40759U);
    msg.setDestinationEntity(206U);
    msg.flags = 19U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2295946682415625;
    tmp_msg_0.speed_units = 230U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3999199229339174;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7834675138615176;
    msg.lon = 0.31977844209212913;
    msg.radius = 0.8674944677421168;

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
    msg.setTimeStamp(0.9029299349211768);
    msg.setSource(17070U);
    msg.setSourceEntity(101U);
    msg.setDestination(7908U);
    msg.setDestinationEntity(239U);
    msg.control_src = 41182U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 41U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5706344284137715;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.559814607615812;
    tmp_tmp_msg_0_1.z_units = 30U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2982915138842559;
    tmp_msg_0.lon = 0.16475727951075558;
    tmp_msg_0.radius = 0.28505470638869035;
    msg.reference.set(tmp_msg_0);
    msg.state = 146U;
    msg.proximity = 242U;

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
    msg.setTimeStamp(0.39164996683952924);
    msg.setSource(1690U);
    msg.setSourceEntity(137U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(33U);
    msg.control_src = 8443U;
    msg.control_ent = 177U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 235U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.476472666804438;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5999485829382863;
    tmp_tmp_msg_0_1.z_units = 88U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10669060114388251;
    tmp_msg_0.lon = 0.9593600996143401;
    tmp_msg_0.radius = 0.04793554611759898;
    msg.reference.set(tmp_msg_0);
    msg.state = 140U;
    msg.proximity = 67U;

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
    msg.setTimeStamp(0.6543240774324426);
    msg.setSource(51465U);
    msg.setSourceEntity(13U);
    msg.setDestination(44927U);
    msg.setDestinationEntity(202U);
    msg.control_src = 6807U;
    msg.control_ent = 200U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 94U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7252053687413902;
    tmp_tmp_msg_0_0.speed_units = 223U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.39161058564504236;
    tmp_tmp_msg_0_1.z_units = 150U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2803736541587061;
    tmp_msg_0.lon = 0.13895489508375625;
    tmp_msg_0.radius = 0.2704311111286013;
    msg.reference.set(tmp_msg_0);
    msg.state = 94U;
    msg.proximity = 217U;

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
    msg.setTimeStamp(0.4310396614454973);
    msg.setSource(60851U);
    msg.setSourceEntity(19U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(185U);
    msg.ax_cmd = 0.16498809711733597;
    msg.ay_cmd = 0.8898481143618062;
    msg.az_cmd = 0.5958551688250625;
    msg.ax_des = 0.6891998775979595;
    msg.ay_des = 0.448662331780597;
    msg.az_des = 0.783229041769859;
    msg.virt_err_x = 0.4872692700011846;
    msg.virt_err_y = 0.9859129538232109;
    msg.virt_err_z = 0.9687810472045925;
    msg.surf_fdbk_x = 0.37885722430384394;
    msg.surf_fdbk_y = 0.9860456903518942;
    msg.surf_fdbk_z = 0.16944884368426738;
    msg.surf_unkn_x = 0.7129852645935658;
    msg.surf_unkn_y = 0.3067626240573119;
    msg.surf_unkn_z = 0.14082727955464236;
    msg.ss_x = 0.4536092632633606;
    msg.ss_y = 0.3054951449598472;
    msg.ss_z = 0.3705902127101498;

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
    msg.setTimeStamp(0.5814102991795443);
    msg.setSource(6703U);
    msg.setSourceEntity(197U);
    msg.setDestination(3977U);
    msg.setDestinationEntity(128U);
    msg.ax_cmd = 0.07116159309441061;
    msg.ay_cmd = 0.5554871561901563;
    msg.az_cmd = 0.19983280704699757;
    msg.ax_des = 0.6401368794136969;
    msg.ay_des = 0.007371052852347404;
    msg.az_des = 0.9553991429740792;
    msg.virt_err_x = 0.7905085336903032;
    msg.virt_err_y = 0.04206842262837318;
    msg.virt_err_z = 0.665706144271031;
    msg.surf_fdbk_x = 0.774299300403922;
    msg.surf_fdbk_y = 0.5687110856951079;
    msg.surf_fdbk_z = 0.034155721131242545;
    msg.surf_unkn_x = 0.04706513186910399;
    msg.surf_unkn_y = 0.8331749800759146;
    msg.surf_unkn_z = 0.30811862359294706;
    msg.ss_x = 0.04157520201982112;
    msg.ss_y = 0.7588333660696426;
    msg.ss_z = 0.465937740465469;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("THQHZEPIJRKWIUAYXYSRSWKWCHYMLGDXHLVAMZFEQMAEWACUJNYTPJADSGVMEBJDWJQQUTEZHDXMPQYKBIAGFJQVMOXPITNZEKXPRGXIOTGCVYLFJVUHRNCZMGAOIKQDEFDYVLBMDRVKEPCIMFBKMLSUHCONRBYSNZRWBGGSCYXBSBWTXLJIKOBGZLDWFOUPQYSPPCHNAXHNFVEOSUW");
    tmp_msg_0.dist = 0.8268561748711366;
    tmp_msg_0.err = 0.03337953678615657;
    tmp_msg_0.ctrl_imp = 0.19017630688729137;
    tmp_msg_0.rel_dir_x = 0.16150888679633135;
    tmp_msg_0.rel_dir_y = 0.25052940565362836;
    tmp_msg_0.rel_dir_z = 0.16392551560611723;
    tmp_msg_0.err_x = 0.8003376199419647;
    tmp_msg_0.err_y = 0.2941002523543368;
    tmp_msg_0.err_z = 0.5483650613193826;
    tmp_msg_0.rf_err_x = 0.2517252811195002;
    tmp_msg_0.rf_err_y = 0.5939124219959226;
    tmp_msg_0.rf_err_z = 0.7504988310018235;
    tmp_msg_0.rf_err_vx = 0.9955960173174394;
    tmp_msg_0.rf_err_vy = 0.8886318609183769;
    tmp_msg_0.rf_err_vz = 0.9262779450896671;
    tmp_msg_0.ss_x = 0.24974872717819685;
    tmp_msg_0.ss_y = 0.3799575941877935;
    tmp_msg_0.ss_z = 0.6116780262990947;
    tmp_msg_0.virt_err_x = 0.7985434487539121;
    tmp_msg_0.virt_err_y = 0.17738248176799198;
    tmp_msg_0.virt_err_z = 0.15664850505214434;
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
    msg.setTimeStamp(0.902775862964666);
    msg.setSource(59147U);
    msg.setSourceEntity(38U);
    msg.setDestination(29810U);
    msg.setDestinationEntity(144U);
    msg.ax_cmd = 0.010982731615610364;
    msg.ay_cmd = 0.5592215509341183;
    msg.az_cmd = 0.7819391596875045;
    msg.ax_des = 0.905186749124348;
    msg.ay_des = 0.40933096504133715;
    msg.az_des = 0.35058793696803325;
    msg.virt_err_x = 0.01101434111316113;
    msg.virt_err_y = 0.41631953243652453;
    msg.virt_err_z = 0.36610580214664645;
    msg.surf_fdbk_x = 0.5183801270482139;
    msg.surf_fdbk_y = 0.16300057870122608;
    msg.surf_fdbk_z = 0.5395705308011687;
    msg.surf_unkn_x = 0.8714919119064574;
    msg.surf_unkn_y = 0.8410464064711632;
    msg.surf_unkn_z = 0.560727863836311;
    msg.ss_x = 0.08088724918188006;
    msg.ss_y = 0.5257684737343388;
    msg.ss_z = 0.48843572473265695;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DTJPZMEDEJHSOQOAQNGWUWAEHICJWORIRSGFDZKMUZQPQABIXBHGMNXSPRFWFXLFJTJLUQDSBFSBVUWVFCZGOXWQPIYDBVXFBMKGHKLJHRESUKZSYPIFSITEIRVSMYNMLWVGWUNDNCEXQNPGZAYKQZCAGZEUIBOYXJJ");
    tmp_msg_0.dist = 0.11055784670828206;
    tmp_msg_0.err = 0.1185907634396508;
    tmp_msg_0.ctrl_imp = 0.5797580271225231;
    tmp_msg_0.rel_dir_x = 0.7362452295097424;
    tmp_msg_0.rel_dir_y = 0.011702880085846967;
    tmp_msg_0.rel_dir_z = 0.9106271577341161;
    tmp_msg_0.err_x = 0.7802419412749606;
    tmp_msg_0.err_y = 0.16761113065010547;
    tmp_msg_0.err_z = 0.39190701784832405;
    tmp_msg_0.rf_err_x = 0.8501296433240124;
    tmp_msg_0.rf_err_y = 0.0035624990733420514;
    tmp_msg_0.rf_err_z = 0.4909359419156183;
    tmp_msg_0.rf_err_vx = 0.37532820509215037;
    tmp_msg_0.rf_err_vy = 0.6872082712004056;
    tmp_msg_0.rf_err_vz = 0.11349557530808896;
    tmp_msg_0.ss_x = 0.10466936111005776;
    tmp_msg_0.ss_y = 0.5217420761193052;
    tmp_msg_0.ss_z = 0.027026757363079468;
    tmp_msg_0.virt_err_x = 0.7907846168488428;
    tmp_msg_0.virt_err_y = 0.32251007073817195;
    tmp_msg_0.virt_err_z = 0.1361812221141674;
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
    msg.setTimeStamp(0.20478560945950275);
    msg.setSource(4892U);
    msg.setSourceEntity(118U);
    msg.setDestination(52011U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("EMQCEPIAHWCKMOZXXDOZEZLDQHPBCVVFPWQNSIQRFPAWOVGVLGOWHVDKVBCYZOHPCVINKWRIWYEOGRTOHXVZJYLNUGUYMQNHEMNSSSMDCLNBYFQYTJVTFYMTHWDKMUUQWDXIJKJAJWKTJTRORAAXRLUXKEZDMUCEEOA");
    msg.dist = 0.5695042531085402;
    msg.err = 0.391358152004356;
    msg.ctrl_imp = 0.7254077750527929;
    msg.rel_dir_x = 0.021597134054482492;
    msg.rel_dir_y = 0.7806535126808345;
    msg.rel_dir_z = 0.62881707995966;
    msg.err_x = 0.030684265580888104;
    msg.err_y = 0.027221664708678484;
    msg.err_z = 0.02476861900585825;
    msg.rf_err_x = 0.2891754086976741;
    msg.rf_err_y = 0.054289310953326564;
    msg.rf_err_z = 0.03950099296448539;
    msg.rf_err_vx = 0.5964169414335508;
    msg.rf_err_vy = 0.4076359625097913;
    msg.rf_err_vz = 0.35109953811481465;
    msg.ss_x = 0.65309724675578;
    msg.ss_y = 0.9036349392822141;
    msg.ss_z = 0.5048473083687882;
    msg.virt_err_x = 0.06331679781053934;
    msg.virt_err_y = 0.9319348465908122;
    msg.virt_err_z = 0.32131663016682066;

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
    msg.setTimeStamp(0.7016224328446132);
    msg.setSource(24629U);
    msg.setSourceEntity(120U);
    msg.setDestination(20165U);
    msg.setDestinationEntity(206U);
    msg.s_id.assign("HERJQZNVOUZZCUWGARQUIEDIBSXJGCSNKWMLQRKDXEWYNZIHBYCFVIQEDWUN");
    msg.dist = 0.29050047305328297;
    msg.err = 0.952523904955169;
    msg.ctrl_imp = 0.09420991990151462;
    msg.rel_dir_x = 0.6588241523837526;
    msg.rel_dir_y = 0.8711970765535036;
    msg.rel_dir_z = 0.3498311943790601;
    msg.err_x = 0.9022866239377129;
    msg.err_y = 0.41546434357470874;
    msg.err_z = 0.21061420025337996;
    msg.rf_err_x = 0.39453884869937117;
    msg.rf_err_y = 0.6341378070472602;
    msg.rf_err_z = 0.25482353810219227;
    msg.rf_err_vx = 0.05290829481123627;
    msg.rf_err_vy = 0.3003934722364555;
    msg.rf_err_vz = 0.5086960319654644;
    msg.ss_x = 0.8705862411967266;
    msg.ss_y = 0.8144382588186505;
    msg.ss_z = 0.7024443525366386;
    msg.virt_err_x = 0.27158888460068886;
    msg.virt_err_y = 0.5177309484114085;
    msg.virt_err_z = 0.41422483547323197;

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
    msg.setTimeStamp(0.04252807502539846);
    msg.setSource(46628U);
    msg.setSourceEntity(110U);
    msg.setDestination(17226U);
    msg.setDestinationEntity(249U);
    msg.s_id.assign("XQJLTAQFKEMJNBADCJYKNXCNJJSKIKRAFWIDFOVZNGLLRYBHXJIBGOCBDGTWSNFAKIBMTZOLNRWYXSUAORHZOMPKPRAHCFUMFVQGHTMERSSJBGEPIHIWCWTDGKCVBNILXTPIDXRLCENCSFKAMFELYZGQUKAPJTOYDAVXVWEUDTPHZLYQKBNSPJYFUISDSUBGAXMVTZJ");
    msg.dist = 0.12979805732813887;
    msg.err = 0.07353554467876189;
    msg.ctrl_imp = 0.09411111866669675;
    msg.rel_dir_x = 0.2764479135562329;
    msg.rel_dir_y = 0.33744662745216825;
    msg.rel_dir_z = 0.7039437515477862;
    msg.err_x = 0.2659319834762245;
    msg.err_y = 0.8701545806432555;
    msg.err_z = 0.06881698426198157;
    msg.rf_err_x = 0.08885783750726373;
    msg.rf_err_y = 0.6904470579097465;
    msg.rf_err_z = 0.9055997312008649;
    msg.rf_err_vx = 0.9343699919761965;
    msg.rf_err_vy = 0.33667255320881784;
    msg.rf_err_vz = 0.33229547817511906;
    msg.ss_x = 0.5192057377110587;
    msg.ss_y = 0.2156229021407452;
    msg.ss_z = 0.09882588973701167;
    msg.virt_err_x = 0.5782061940388596;
    msg.virt_err_y = 0.7503715102459987;
    msg.virt_err_z = 0.34386479982044116;

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
    msg.setTimeStamp(0.5639631656709985);
    msg.setSource(22251U);
    msg.setSourceEntity(189U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(13U);
    msg.timeout = 8775U;
    msg.rpm = 0.16829918085297868;
    msg.direction = 220U;
    msg.custom.assign("ZVWXBQQFFTJOQKSBJYYDGVDNHBZBQMHTFEKIEQQMINSUFCXTJUIIPDZOYXJKUXPCKMRYAEBUEFEKOQHDRRVAADCNYIGAUPPVGMYNBRULYJCLNHZHZJXXLMWCIMVZLISPCAWGOEGFKANSSCSRDHSJRZNGZWJNLDOOFRVRZQMAWSXEUZPCUSTVDPCPDKKRVPGEAQTWLXYHETF");

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
    msg.setTimeStamp(0.37142261705545254);
    msg.setSource(61936U);
    msg.setSourceEntity(222U);
    msg.setDestination(30803U);
    msg.setDestinationEntity(13U);
    msg.timeout = 41601U;
    msg.rpm = 0.480967365255886;
    msg.direction = 5U;
    msg.custom.assign("YXTSJEJKQWXRIPNTKVAWYTLZHNUZKXJIMALXGUTODOALSYOHBHRZWZQQDGVZBIZLCJBPTNCQWMBGYJBHBLROPHFHGAJWLEEFSNVWQQESYFNRQVDUZCCESSSKRUGMREBKULPCFICEVJLDIXNNQXCWIHOVBXUKTSFAVWGMVKMDFWYVXUDDNYOZRRFUTTEMPGPRFRGDMBMVMAQBUKGEQHISKNYLSUEPHJLGZAHDTIXYCAJFIMOOFY");

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
    msg.setTimeStamp(0.9027270393853758);
    msg.setSource(36408U);
    msg.setSourceEntity(213U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(117U);
    msg.timeout = 13463U;
    msg.rpm = 0.15978518152838006;
    msg.direction = 39U;
    msg.custom.assign("GVDWLKDOFXCKNIRASHJNXNCVWSJXYDSUEIYQAVDMMALTENOHVRTWKLYSSKUBYPXEBNHOBLTJWCZZCXXPAUAGDFZYMHIYNAYTXUJEKACPJPDWBGQVTQKZETGMZOC");

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
    msg.setTimeStamp(0.09575609466457025);
    msg.setSource(29183U);
    msg.setSourceEntity(69U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("ZZESZLPLJKIJVZGQRAASEYNUAUJRVZHZUKLSYRALYJVHWRFUBUHQJUUPVFQTNGOCYFXYZQQHBKNLTRGDGEADKBMIBVDPEHJSCEONTOKNWKWGOVIYYXPFWOIJYGPMLITRMBNWPPSTYVQJNBZJXCEIFCUXCAMCTPOVAXIBTTXELNVCHEBBLWMARGGNDMUPDKEIKSRLOWXZJXVPGRDCAUFLIF");
    msg.type = 35U;
    msg.op = 3U;
    msg.group_name.assign("RNRZLVRGKKYAWVCQISYRFSUIEAHXVZPNKZKDWOLQTLKEEOFJXPJOFGFFPHYPMDFIWJB");
    msg.plan_id.assign("FKORHUNMVDJURFZVJSROHODQSWEOKWMQKWTAESITSNNCAOVGGX");
    msg.description.assign("LMYHNRXOMZWNUNTQZWLXRXZRUQZFVHYDJEFAECPATMSDGGMAMQUNWGJHCSFWKLZJYLYXZZESFQUUPUALKUTIOIOSBCADTDDNGYJVWCGDUJWVBMQEMOFYIWKHMXKCANDBZNKEGFTBKFIRBVRLBKYNTPMTVPYPVBHCQPFPLKPNIHVSVTXIGYILBXHUABMWSAZPTPNODJRSQUJRHESDOOQJAOIGGCRKCGRIFRY");
    msg.reference_frame = 196U;
    msg.leader_bank_lim = 0.9214729644724582;
    msg.leader_speed_min = 0.7110823550620394;
    msg.leader_speed_max = 0.42371369257593705;
    msg.leader_alt_min = 0.9476940280443908;
    msg.leader_alt_max = 0.01497700676204583;
    msg.pos_sim_err_lim = 0.3506777843710296;
    msg.pos_sim_err_wrn = 0.9120085749654104;
    msg.pos_sim_err_timeout = 17448U;
    msg.converg_max = 0.5775428766783017;
    msg.converg_timeout = 34976U;
    msg.comms_timeout = 65381U;
    msg.turb_lim = 0.6640898397048527;
    msg.custom.assign("COTZWGLWXAWAXITFDBAKZWBKJJVYOOXIBCXYIVHJDKCSYPRWEPFIYGTZFVDHMNNRRDBVBZBI");

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
    msg.setTimeStamp(0.6011581683479708);
    msg.setSource(6426U);
    msg.setSourceEntity(196U);
    msg.setDestination(57044U);
    msg.setDestinationEntity(202U);
    msg.formation_name.assign("KCCZMJWXLEFJYNRNOXLY");
    msg.type = 190U;
    msg.op = 156U;
    msg.group_name.assign("FUBSCNGUGZBSJBQOPBRFTLCGXPJDTZSVPKDRHNINZOLOXWSOAIKINOUEYOCRUEFSVLCUXFGMNUXPZXRAAKWMWPGHYDTKHNRJLDQD");
    msg.plan_id.assign("MKCPGCSXCLVGNONVCHCHDDHWNQEDWBMYTBGYCJQSCK");
    msg.description.assign("PIGHMNPMETMDCMFVEONSPOWRBELVYRUKTAHLFKXXWWSPJXIVWFXTCORDKMFRDBBVHWUXRUXICEAYVQACOLGBVGEYPHZKEGMYOYBHZZJGIPMPUIPRFYNINSMZJHOJCWVLPDVHVLDCCTAQOEGHQBAQ");
    msg.reference_frame = 99U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10718U;
    tmp_msg_0.off_x = 0.7465991447689326;
    tmp_msg_0.off_y = 0.6666275262060186;
    tmp_msg_0.off_z = 0.07562282171524282;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.10178999452723114;
    msg.leader_speed_min = 0.37087533572502174;
    msg.leader_speed_max = 0.3432694902848301;
    msg.leader_alt_min = 0.834013147927028;
    msg.leader_alt_max = 0.013373109938547567;
    msg.pos_sim_err_lim = 0.6232463566082158;
    msg.pos_sim_err_wrn = 0.1755077991364905;
    msg.pos_sim_err_timeout = 13306U;
    msg.converg_max = 0.45365547252296257;
    msg.converg_timeout = 3063U;
    msg.comms_timeout = 55041U;
    msg.turb_lim = 0.0004154804359818298;
    msg.custom.assign("PMFVOYIAIXECZFCMGRUSNYMIWLQDGBVYHWTJJNRKYXESLEROIRLNAGTHBJKFDUOQLNWTJSJKFDDQNQXEGKVHCAMSWZOAJUCOUCWEUWRBYMLYKVTCRQZBBRFFXCPOGXYBLTDHHXFAQVEYNLMFKELWZQBVDHOFPISTJKPUUGITMQGSUCVBYODIXJXVGPSSQGWRVHAXIEGJRJCTZA");

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
    msg.setTimeStamp(0.7896076605542779);
    msg.setSource(15251U);
    msg.setSourceEntity(38U);
    msg.setDestination(53924U);
    msg.setDestinationEntity(60U);
    msg.formation_name.assign("DAXUSHXXPROYYPQBTLCWMMUJMKNWTQBRSNYQTHZIAZIGJPKOOFYACPOGRUHPZNZEWOCTIAURMFJERIRVPDEVJIQLVWNJIUFDCZQQDDAMKUHNJBGNYNGSWMVIQNLKFOLFSGKOBOIKBHDTDFWPETUTFAJFAVBXGCELESEWDSGIBAGKHISLMQHCPYVMPXWPUASGYJWHDUDYTMXCGNQUBYVFZQK");
    msg.type = 166U;
    msg.op = 66U;
    msg.group_name.assign("PVSVTGWAWXWZSKTWAUMAHJGBEDBCMKALEZRCTIHYCRKIIUUFZQ");
    msg.plan_id.assign("GXTNZKIXZBMRAVWRZCPRWKFKGHWRFSFYLHUCZYXWYHDCJQEXJDKYBRLCOVQPSYAAMKPGCXIMBTIICQNPXDHPIQTADBLDERQBJPAIGUVBUSOKFRTBPMFVJU");
    msg.description.assign("AXPNMMEJLUGZNEPRTZNCDIGQPYWBIVEGRCM");
    msg.reference_frame = 146U;
    msg.leader_bank_lim = 0.4820198736716247;
    msg.leader_speed_min = 0.8590918688292265;
    msg.leader_speed_max = 0.11151867477884003;
    msg.leader_alt_min = 0.7251601261980464;
    msg.leader_alt_max = 0.06765490105803817;
    msg.pos_sim_err_lim = 0.1863687439225008;
    msg.pos_sim_err_wrn = 0.9920283824921781;
    msg.pos_sim_err_timeout = 38313U;
    msg.converg_max = 0.19877277708249086;
    msg.converg_timeout = 53365U;
    msg.comms_timeout = 26075U;
    msg.turb_lim = 0.7591363922864085;
    msg.custom.assign("GMTKYGEZCBCKUMPQKQKEDWTTXSXRDDTLOXHRBBAJTKTVPWAUVDFZFEMMWCOISCTEPZLZGBWPJLOFWZEEHBLSWCWNNYKVUHUSKXIINHKJIDIERJZWGUWRGNSSQNRFXMBAVRBDGJFNMCJRJQWLIGATYYRZVDFXJTMYOV");

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
    msg.setTimeStamp(0.12087404939028801);
    msg.setSource(11651U);
    msg.setSourceEntity(30U);
    msg.setDestination(52585U);
    msg.setDestinationEntity(229U);
    msg.timeout = 12680U;
    msg.lat = 0.619484029690012;
    msg.lon = 0.8241568354371648;
    msg.z = 0.755667909265569;
    msg.z_units = 45U;
    msg.speed = 0.4746157869194376;
    msg.speed_units = 5U;
    msg.custom.assign("ARVBTJTPCECCBKRIRLGOMXMYRCDZRHKIJSFSSJUSXVIKNXZNQJUEWSXDPYUHPHGDAGPUBBGCLBUFBKHBXZKKJOYDFNGTCXOJPMZAQMLGOTAVJZDUOGGKMYITFFTHTEPNYXQONBUQWCCYQNYDSPJUNLWVEGOCZFIQDSBDFEELAKFVRFJUPYLQOWZWHVTWHIRZAUZJ");

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
    msg.setTimeStamp(0.9410543579574834);
    msg.setSource(26761U);
    msg.setSourceEntity(38U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(133U);
    msg.timeout = 61200U;
    msg.lat = 0.9402478085811318;
    msg.lon = 0.4245267200901496;
    msg.z = 0.7136140535043788;
    msg.z_units = 214U;
    msg.speed = 0.6665107935537679;
    msg.speed_units = 65U;
    msg.custom.assign("RXJSLADHPWDYCQNL");

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
    msg.setTimeStamp(0.2517173302242014);
    msg.setSource(65164U);
    msg.setSourceEntity(253U);
    msg.setDestination(62499U);
    msg.setDestinationEntity(247U);
    msg.timeout = 15118U;
    msg.lat = 0.5946545307081113;
    msg.lon = 0.4405420629770035;
    msg.z = 0.6857415558697703;
    msg.z_units = 178U;
    msg.speed = 0.012709772077959647;
    msg.speed_units = 23U;
    msg.custom.assign("YXEOHUEPSGQRZWJLNUIYARZPSDNDHVTIHSQJHHQCUCYWAWSYLXNYSMD");

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
    msg.setTimeStamp(0.5048752680274249);
    msg.setSource(3654U);
    msg.setSourceEntity(82U);
    msg.setDestination(22843U);
    msg.setDestinationEntity(65U);
    msg.timeout = 63329U;
    msg.lat = 0.6230878738722545;
    msg.lon = 0.1066471427821819;
    msg.z = 0.40684099860040634;
    msg.z_units = 142U;
    msg.speed = 0.9822371338251663;
    msg.speed_units = 63U;
    msg.custom.assign("XDKULETMJQKBBMAHYSAGSBIHPRDGJGCGDMFFUOQFVOMXQOTWVMMJBQIZKSVWJLGXBGI");

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
    msg.setTimeStamp(0.7868175724291587);
    msg.setSource(6935U);
    msg.setSourceEntity(146U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(114U);
    msg.timeout = 7284U;
    msg.lat = 0.2838873145740838;
    msg.lon = 0.8153678689861729;
    msg.z = 0.25662333700660434;
    msg.z_units = 181U;
    msg.speed = 0.18794140623713707;
    msg.speed_units = 48U;
    msg.custom.assign("SKVHSHYLEXEGUTBWNPWJMKLJWYIEMNTOCUNFVVPHXDLUXSJKCZUA");

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
    msg.setTimeStamp(0.6339873294108376);
    msg.setSource(63872U);
    msg.setSourceEntity(231U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(31U);
    msg.timeout = 47801U;
    msg.lat = 0.43674773993997207;
    msg.lon = 0.5094712562135553;
    msg.z = 0.18386751785585198;
    msg.z_units = 246U;
    msg.speed = 0.39805021779101724;
    msg.speed_units = 69U;
    msg.custom.assign("HTTLQZVDXJKMKZNNCYTLQIPPZBSJVKVPUMORRSXUJPRRPCSQXVXTQTOZVUOZAVDJMORCELVWGEBSZXYUHYJQFQMQFDXVEGIKIYENBCBYHOWXISOIXCUKTWZDBCHSEGMLGTOKGMQEZUJYDOIMLACRJSZBYRGNWSRJHMXGUKATF");

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
    msg.setTimeStamp(0.57422963599566);
    msg.setSource(23022U);
    msg.setSourceEntity(224U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(254U);
    msg.arrival_time = 0.44834709577137943;
    msg.lat = 0.14497181740119036;
    msg.lon = 0.8028104712664081;
    msg.z = 0.3838842479769292;
    msg.z_units = 253U;
    msg.travel_z = 0.6649044548802404;
    msg.travel_z_units = 163U;
    msg.delayed = 235U;

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
    msg.setTimeStamp(0.4024074321550223);
    msg.setSource(53834U);
    msg.setSourceEntity(17U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(133U);
    msg.arrival_time = 0.2694090078138841;
    msg.lat = 0.8732289948462527;
    msg.lon = 0.4610357990751148;
    msg.z = 0.6932418052125296;
    msg.z_units = 40U;
    msg.travel_z = 0.6963372147830632;
    msg.travel_z_units = 248U;
    msg.delayed = 124U;

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
    msg.setTimeStamp(0.44037245519881474);
    msg.setSource(3671U);
    msg.setSourceEntity(155U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(200U);
    msg.arrival_time = 0.6012434305586379;
    msg.lat = 0.8179332270411975;
    msg.lon = 0.29987596686261686;
    msg.z = 0.24768046440836178;
    msg.z_units = 14U;
    msg.travel_z = 0.6676931881988787;
    msg.travel_z_units = 70U;
    msg.delayed = 137U;

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
    msg.setTimeStamp(0.28642684555402864);
    msg.setSource(18214U);
    msg.setSourceEntity(196U);
    msg.setDestination(21772U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.008860472875020675;
    msg.lon = 0.9830465638253203;
    msg.z = 0.12323772000340727;
    msg.z_units = 48U;
    msg.speed = 0.7778559140911044;
    msg.speed_units = 176U;
    msg.bearing = 0.8112056319323171;
    msg.cross_angle = 0.8524836945002437;
    msg.width = 0.9366884627264677;
    msg.length = 0.09718528609168253;
    msg.coff = 49U;
    msg.angaperture = 0.12371860560580705;
    msg.range = 46364U;
    msg.overlap = 118U;
    msg.flags = 130U;
    msg.custom.assign("TNNFBTFQMSDQAXBMVGJAULZNHBAODCYZUWISXJNRZGPTERSRCXGMCJFSZCHLNSOOOXTAUZPUXBDBRHHEQHAHSOVUZGCZCMKWWWAVJKYNGHPMHDESBCKIKQMYJDVPMYRIPDQFVTXAGCOEELITETJLCYRIZEPTUIPAEEQNSDKOSZ");

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
    msg.setTimeStamp(0.4993397375728642);
    msg.setSource(6738U);
    msg.setSourceEntity(4U);
    msg.setDestination(25182U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.0426840851322714;
    msg.lon = 0.3558790157000776;
    msg.z = 0.7128054227266679;
    msg.z_units = 38U;
    msg.speed = 0.09594800838209594;
    msg.speed_units = 136U;
    msg.bearing = 0.7831122698643;
    msg.cross_angle = 0.924753476449193;
    msg.width = 0.11407521134849274;
    msg.length = 0.07531533111554778;
    msg.coff = 84U;
    msg.angaperture = 0.1746733631157409;
    msg.range = 19856U;
    msg.overlap = 148U;
    msg.flags = 171U;
    msg.custom.assign("WFYVNXMFUERBVSTQVDULRNPIQDFSHYQBQGVZITPMKWMXAMULVNEXQCFFPRYLENHIBTVAHFSTHOGBJCJXUUJSMDBSLNKEEZDCUNIWHUFHEGIVOOLBGWDDCGXZEQMJNAJ");

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
    msg.setTimeStamp(0.7606481929188278);
    msg.setSource(3445U);
    msg.setSourceEntity(103U);
    msg.setDestination(10315U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.5081826940813275;
    msg.lon = 0.8715086381084957;
    msg.z = 0.1151665455286559;
    msg.z_units = 254U;
    msg.speed = 0.180845233797142;
    msg.speed_units = 49U;
    msg.bearing = 0.7685809724312292;
    msg.cross_angle = 0.9719805561624598;
    msg.width = 0.19805409890411563;
    msg.length = 0.8251854906282053;
    msg.coff = 210U;
    msg.angaperture = 0.8074677684162344;
    msg.range = 31469U;
    msg.overlap = 231U;
    msg.flags = 191U;
    msg.custom.assign("SZCKDPASRSISSGFCVAOOVVAEXNIRCITVBFDKYTAWOZKMLUWMYYWCMBGFIHXPJJJTXZPXENUQHNMWHJHBYXJHOANZEJSRXLPBOOTNKOIDKATZDFRNFANMQHPEXEQWGHLZAIUBKDGVUEGPCVDVSTHJOKUV");

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
    msg.setTimeStamp(0.8072103854067474);
    msg.setSource(3758U);
    msg.setSourceEntity(38U);
    msg.setDestination(62839U);
    msg.setDestinationEntity(41U);
    msg.timeout = 64362U;
    msg.lat = 0.5736741947784888;
    msg.lon = 0.33799336807501323;
    msg.z = 0.6861225447502359;
    msg.z_units = 183U;
    msg.speed = 0.052952820851352;
    msg.speed_units = 2U;
    msg.syringe0 = 58U;
    msg.syringe1 = 144U;
    msg.syringe2 = 155U;
    msg.custom.assign("RGAQNRYRYGMNLIUQPWZKYFQHMMWQDWHAOJBBKSYZPNNIHSDCEDWLUFCCFVUEKHVFSQYZTVLJMATIHBKUBCGWSKNKOTOMLXWHHFVUQBYUVP");

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
    msg.setTimeStamp(0.05780186538228593);
    msg.setSource(3266U);
    msg.setSourceEntity(97U);
    msg.setDestination(43315U);
    msg.setDestinationEntity(96U);
    msg.timeout = 46797U;
    msg.lat = 0.517073394673493;
    msg.lon = 0.6058095788684265;
    msg.z = 0.06884866586796223;
    msg.z_units = 166U;
    msg.speed = 0.5395939413798149;
    msg.speed_units = 49U;
    msg.syringe0 = 121U;
    msg.syringe1 = 152U;
    msg.syringe2 = 47U;
    msg.custom.assign("NVBYDWJKCJJFAOEMDICVGHHVQASOALZUCAWWGS");

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
    msg.setTimeStamp(0.19823502875810473);
    msg.setSource(3571U);
    msg.setSourceEntity(40U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(170U);
    msg.timeout = 40960U;
    msg.lat = 0.5371095369598983;
    msg.lon = 0.2187968561142173;
    msg.z = 0.5175416695951032;
    msg.z_units = 138U;
    msg.speed = 0.6435571422805244;
    msg.speed_units = 35U;
    msg.syringe0 = 251U;
    msg.syringe1 = 59U;
    msg.syringe2 = 242U;
    msg.custom.assign("ZKGLVJFABPUBOXALNCFNJTSTLRSBTOHFSZEJAWBGBXPLREDRYQONYWSNMPGWAVOFAFZXXIBUHLHSJJJLRHFUHHWKBWTSIYUKKKTDEPGKYYQEIPMTWBVTDVQIVKGERKENXVZXYWSHFOFUOCXOQMNVMAITYYAGWMBISVJEKUJD");

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
    msg.setTimeStamp(0.2983847595299066);
    msg.setSource(53606U);
    msg.setSourceEntity(99U);
    msg.setDestination(25684U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.8493960648066783);
    msg.setSource(42165U);
    msg.setSourceEntity(219U);
    msg.setDestination(52504U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.6529889476172437);
    msg.setSource(60579U);
    msg.setSourceEntity(193U);
    msg.setDestination(8457U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.4568938937226973);
    msg.setSource(22460U);
    msg.setSourceEntity(98U);
    msg.setDestination(64131U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.7531861368379532;
    msg.lon = 0.3614946074960119;
    msg.z = 0.8426249307211534;
    msg.z_units = 106U;
    msg.speed = 0.04389115391109388;
    msg.speed_units = 24U;
    msg.takeoff_pitch = 0.7237425865469388;
    msg.custom.assign("WBDERFZZKSKXMOZGKNAFWMGVBEPUDSOQPJIOQKDABGRGFPVJKETSTYEISXCYQTBFZRLXWFBLSJWRLUAEDRVJQTOBQVWKUUCHAPYCLLPRNTYGDNTHHZASVWWIQXCIATGHPNMDGMQUFCKXWHZYDUJBIIARHKHYMYUIXCNUTCATSSKJVCEBTZLJOCODL");

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
    msg.setTimeStamp(0.13591113718321624);
    msg.setSource(42299U);
    msg.setSourceEntity(115U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.4583530794448929;
    msg.lon = 0.28304281799014286;
    msg.z = 0.5607238661244452;
    msg.z_units = 29U;
    msg.speed = 0.09522764939552719;
    msg.speed_units = 47U;
    msg.takeoff_pitch = 0.24680700212798956;
    msg.custom.assign("KWFCDEZFKKPXDMGUAXHXGODDTCPCUURQPZXZJRIRHTVPPYNLFLBLHKMIWKVGHHMGQMUPQQYMIHCQYFK");

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
    msg.setTimeStamp(0.504231132188535);
    msg.setSource(24199U);
    msg.setSourceEntity(19U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.40548641273357744;
    msg.lon = 0.9075195292108064;
    msg.z = 0.7965831492207026;
    msg.z_units = 60U;
    msg.speed = 0.8353785307494416;
    msg.speed_units = 151U;
    msg.takeoff_pitch = 0.1731690834608256;
    msg.custom.assign("DVULOXRNZVMIAMYRFRIWXZJAXZYRMGWTWHQBLAZKWKUUFZJFVEYHMQSWBJKGAPXQCAEORXPRTLOODYGPCQDGBPHMAPPGGDUGTELNKZUFNSATCIZYBKWLXEKCSDTMNTSITPFHIFJDNNMXE");

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
    msg.setTimeStamp(0.7746707175939493);
    msg.setSource(19231U);
    msg.setSourceEntity(134U);
    msg.setDestination(12472U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.6189413042831893;
    msg.lon = 0.2779026160782345;
    msg.z = 0.5196426339643306;
    msg.z_units = 242U;
    msg.speed = 0.828532040678007;
    msg.speed_units = 227U;
    msg.abort_z = 0.03318642329293264;
    msg.bearing = 0.5397952529891559;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.5711306887363029;
    msg.custom.assign("KASJIZXBUYZNNBJCYEBGFGCMNHQTZWMTKNRVODXYISRDPYPNHVACHPKSOWYBPSVONYBFDQHKPXBGKNFPSMPYJDTRWZQPGSUVHBIFFIUHUYFWVJRSOCQMEWRQRWDKXQPLLAAGRZETFGDJLBUUXLZWXLJGSJEAKKEEVXPCZONRMARBHWUGMFMTYFDAQIUVTFCTLQVLBQIYJALOIAITIXADWJUCGGDECHJZKNSNLOOHTCHRWCTV");

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
    msg.setTimeStamp(0.7470730815775648);
    msg.setSource(11445U);
    msg.setSourceEntity(6U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.6776937360238838;
    msg.lon = 0.4821014027343139;
    msg.z = 0.37024997939120763;
    msg.z_units = 215U;
    msg.speed = 0.8930144645227309;
    msg.speed_units = 44U;
    msg.abort_z = 0.7870909305023114;
    msg.bearing = 0.9132439491881572;
    msg.glide_slope = 134U;
    msg.glide_slope_alt = 0.09592634432549918;
    msg.custom.assign("JAOEORJCJKVHYRANJKBBQ");

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
    msg.setTimeStamp(0.6792551389393569);
    msg.setSource(63881U);
    msg.setSourceEntity(47U);
    msg.setDestination(42308U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.47853038452116436;
    msg.lon = 0.9809788882292343;
    msg.z = 0.6719188013432337;
    msg.z_units = 56U;
    msg.speed = 0.9392646820406526;
    msg.speed_units = 88U;
    msg.abort_z = 0.7305227786819121;
    msg.bearing = 0.9889901746283545;
    msg.glide_slope = 133U;
    msg.glide_slope_alt = 0.324983155395146;
    msg.custom.assign("KQUGHTPNFVPBXBOVOCZQIUXGLAEKROLKNTVHWKGZZYPMLGEDPIUCMCXENQRRJBHFEYWOUSPSPCMQDNDXJBMEOISRQIKFNUVVXNFDADTENQZCDRGHKNYGJMWWUASYOCXPVWOLTAOYXRBYJKSZMEIPDXBHFYHSSHIMWRGFMIEVGCSMDYEFZLNXLLYJYRCOQIGRZJFBMUJFWLBITUHXAVSFZQBKVIPCAE");

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
    msg.setTimeStamp(0.2816022705067026);
    msg.setSource(15282U);
    msg.setSourceEntity(71U);
    msg.setDestination(64386U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.2807786715817928;
    msg.lon = 0.9548096639780841;
    msg.speed = 0.4708125456788437;
    msg.speed_units = 229U;
    msg.limits = 161U;
    msg.max_depth = 0.8983979048018857;
    msg.min_alt = 0.33708141586115514;
    msg.time_limit = 0.7405809843285242;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8508950670417537;
    tmp_msg_0.lon = 0.5697597589798302;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WRALWKJNBYSUVCTJVMFNVLCVPENLYQTHIXJGQOQIHGUDNRECUUINRJXSSABRTYSBPQEMCAXHAODPKYCNGSJPFQDVYKLITDZIWGXIUNSCFAWEN");
    msg.custom.assign("CQQJKGDHWFTDZIPNSEKVUPUUAZLSFWJJNOHSFCRJHWJYVUXRPCSTRKCZKLZKRHJUGFHMHBHXGPTXQYILBYJYARNMNXLELQJNPOXXJOOKUNBMSCGWJLGOPVRAOQYWDVSBMIEFLQVUGEBNATVLIZTSIOMQIYHHKMUSADMIZBIHEPEWTACGGFGKZCCSRNBGTMAVFTPBMXLAUBKFQYDCNYZUVPWYOALVCEBRVMDISZTDQDPNFORIOEAKZWTFQXEX");

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
    msg.setTimeStamp(0.8860166803339049);
    msg.setSource(32841U);
    msg.setSourceEntity(129U);
    msg.setDestination(16774U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.5877304583028089;
    msg.lon = 0.7570866808641642;
    msg.speed = 0.9027721765926344;
    msg.speed_units = 227U;
    msg.limits = 145U;
    msg.max_depth = 0.5103883642812745;
    msg.min_alt = 0.17895444964085094;
    msg.time_limit = 0.7564146054811867;
    msg.controller.assign("UHRRWBMFOQGDTKGZHDECLHPXKKIMUPCJDLZCRFLWXIOXKXXYORVFQBPWJWDSVKVHASLGYXGBCNFJQDECMBDDTPVUXXNUPAKBSHVLPOABHFJUQFAPOVNTAJH");
    msg.custom.assign("SWLWANNEVISGYINOWHQJHBWFTAKJDDIQDYBSRFVHPHBVANTJKWMFXAPAPIITXZUKSEWLG");

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
    msg.setTimeStamp(0.4366186648774394);
    msg.setSource(52533U);
    msg.setSourceEntity(141U);
    msg.setDestination(5494U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.36991582065358686;
    msg.lon = 0.40436516601581485;
    msg.speed = 0.8252945857940049;
    msg.speed_units = 50U;
    msg.limits = 140U;
    msg.max_depth = 0.4972579252157934;
    msg.min_alt = 0.6152648090537765;
    msg.time_limit = 0.45770193013603266;
    msg.controller.assign("XJIHLOAAOFZYJJPTYAALLFXMKLAUDFKVSKNUREYIHDABGNWTFPZTXPSUHMZZPPWYBJTGNDGXQJYCCZJHISIDOWMWSONTLPLWCBNZJEZXKFRHHRNUHQQXRSGWCNQUBVDQJGIKGODFAUVOHPEWLIRXMOABCQBXCOHSSBIWUKTYRANVKQYKEDMYWVLGMQPQGZRGYTZWEFJMIPVEHURYUFQVFBXBCONVTTEIJBEEMSOMDACSKLIGXSKCMTVRDF");
    msg.custom.assign("TGGTSAEHZDGLFRWDEPMYSYQZCZNFQUNSEVPAWLMBQBZOFSVGUMZCARBYGXUHWFPIXLABXXOIIWTTVHLGYNUYUNRKIM");

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
    msg.setTimeStamp(0.6141338414721214);
    msg.setSource(22315U);
    msg.setSourceEntity(52U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(74U);
    msg.target.assign("PBZVHGVCOSWGYZWNJCPNKRPAQDMIGKEHQOYWTLVDVUSIYUOGJTQMKBNJKBWOVNOSPYVUPAGROKLJSEHVDUSAHWPXDTUQERLMYFQOJILBOHMKJJIEHPNERKADNECDBFUXUANXHUFQVLMLHBIIPCVSEBZCRFXOQJGSLLYTDTHENODZNIMSLWFZBFZJQKNYXXSFDCUTUQRXTHIAWDRVW");
    msg.max_speed = 0.7520028504539693;
    msg.speed_units = 175U;
    msg.lat = 0.6828517408165545;
    msg.lon = 0.5844181037354803;
    msg.z = 0.9049802802892718;
    msg.z_units = 240U;
    msg.custom.assign("EKHSOYPNVRGMQEAREOISZGLQG");

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
    msg.setTimeStamp(0.04113065539389138);
    msg.setSource(35385U);
    msg.setSourceEntity(55U);
    msg.setDestination(14950U);
    msg.setDestinationEntity(96U);
    msg.target.assign("XMPMUPNDDQTMUJWSOQVYNMLONKWFADMIESYSUPVTGINRVPXMEWOVUUCQLHBHFTGFMSEXEUZTLLQJODTFOBVONIEOKMWRIJXXRSRSXWDPBQUFERUCIGAJGYDCXHTRBRLUPSPRNAFFSKITHGZOBDLOZUJTKZBYNADYRHHIWVRYCXJXLQMCFQCGBVYNQAGOXLGDCKZJHHTT");
    msg.max_speed = 0.2643068108086113;
    msg.speed_units = 2U;
    msg.lat = 0.17033477413806908;
    msg.lon = 0.9690094130666194;
    msg.z = 0.38746713897642204;
    msg.z_units = 151U;
    msg.custom.assign("HTDGJUVJBEWYAFVGLKZQHASTAAXEDFRXAQDIGAIDMUCPMXWRQOMVPWQZOZRKTBMNTCGZWHRILTXUFJBLLLVDIODHYISROZJPSDYZHRCCLGTOHYMQHBMPEAHUEINSERBFGIBCIGTWCUNQBSKRCPNUAWYSNTFSUMAKDLRILTKYUNOPQKBFVZWNPOYIQUJGZDXQHNTXSCZLXFWAXJRFCXJJEKEPEJSOKFYJEWBVYVMMNMLOXPCPHGKSW");

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
    msg.setTimeStamp(0.9417444145081729);
    msg.setSource(46489U);
    msg.setSourceEntity(16U);
    msg.setDestination(14636U);
    msg.setDestinationEntity(114U);
    msg.target.assign("XMHEMCYZCUDBYPFVZQPFHIMOMSAWUNPTLSSZGNQPVERKIBDTVKDZCXR");
    msg.max_speed = 0.37980118609759395;
    msg.speed_units = 97U;
    msg.lat = 0.32037323835070264;
    msg.lon = 0.5367138443776313;
    msg.z = 0.4452360106750325;
    msg.z_units = 241U;
    msg.custom.assign("FHLUIIPDCWNDKVOCZHTYCXLQYYJEWDUYEJUXFFOJN");

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
    msg.setTimeStamp(0.3122140967317173);
    msg.setSource(28803U);
    msg.setSourceEntity(44U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(7U);
    msg.timeout = 25135U;
    msg.lat = 0.7299798048070992;
    msg.lon = 0.2233523372918932;
    msg.speed = 0.9216633210235865;
    msg.speed_units = 199U;
    msg.custom.assign("DMOORJWIJGFMOJNSBFIKYWXLHGLDAAIKDPTMXCIHLDHULEGEB");

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
    msg.setTimeStamp(0.7995698444665618);
    msg.setSource(46932U);
    msg.setSourceEntity(215U);
    msg.setDestination(27781U);
    msg.setDestinationEntity(243U);
    msg.timeout = 47341U;
    msg.lat = 0.9218932966717894;
    msg.lon = 0.4201841491445064;
    msg.speed = 0.9617641177387185;
    msg.speed_units = 205U;
    msg.custom.assign("DCHANAMZTVHMJQNVAWPTWWUIJGEAQQWLQVENCDFVIMIKURYECGJSEOFQJYDDKPCQGKLHPUZFSMGLYBOXSNXXBDMTQRLVROZNOBRCTIGSQNPQSBHNTEAFHCCBLUPLZUZIHMXISRWYXMNWYIKOWKBDMHDBMNVAGXUSGRBIPOYTROSEZZYOCPHJXKJZUTLNBBVJWFKPJCPXTICLXZJHMSGWROAALEZYRFKTVXJSUAEE");

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
    msg.setTimeStamp(0.8631657332216871);
    msg.setSource(33910U);
    msg.setSourceEntity(252U);
    msg.setDestination(13667U);
    msg.setDestinationEntity(50U);
    msg.timeout = 26277U;
    msg.lat = 0.2798603561946694;
    msg.lon = 0.7309268128856139;
    msg.speed = 0.7978326613092352;
    msg.speed_units = 42U;
    msg.custom.assign("BIMSDJCSQOIFIMVDZMVNCMMFNUYLDGGYSMUGMBUOHOJNHPQJOHLUTRBKJXUTRQZHDZVXDKFKJNUFNIBZQKVCCCPWPIKEEUMZWPFIVILOGPVJEZAGZFKIVSWLSAMQRRCEBWWKCTTYYOJKZYBFTWBEI");

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
    msg.setTimeStamp(0.9197313860369066);
    msg.setSource(43270U);
    msg.setSourceEntity(250U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.5200152679070126;
    msg.lon = 0.7792047809729813;
    msg.z = 0.3834628657959479;
    msg.z_units = 199U;
    msg.radius = 0.7852722550560807;
    msg.duration = 3654U;
    msg.speed = 0.550044777194651;
    msg.speed_units = 152U;
    msg.popup_period = 60145U;
    msg.popup_duration = 15824U;
    msg.flags = 86U;
    msg.custom.assign("DRFQQFSLMIODGYJPLXKRCXKBMHUDSPDZIPCXYLDVIJBWBYOVJOQLMAQXTXIMHRILUYPDALHWHGEECHOCELBTPDNAMCRYSAEBXTWWWLDNYFFHJKAQVRNFZOSMGEAVSATVVZTWOKOBFCECIXQUPTZGRPVMNUOQEHMBWYTWCXXZETNUAVJTGBKIFIYBMFLSDGUYURIVCVKGJOSYAAHQJKLQPZNZEKNZMDWWRKFURFZJNRGCTNSKZQSJIS");

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
    msg.setTimeStamp(0.4466856962390767);
    msg.setSource(63106U);
    msg.setSourceEntity(23U);
    msg.setDestination(11747U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.30292638669960403;
    msg.lon = 0.612831475339844;
    msg.z = 0.3110831526826391;
    msg.z_units = 63U;
    msg.radius = 0.5131206224395619;
    msg.duration = 294U;
    msg.speed = 0.08151703526287857;
    msg.speed_units = 82U;
    msg.popup_period = 17170U;
    msg.popup_duration = 46680U;
    msg.flags = 229U;
    msg.custom.assign("DSGCXJPMOBERMDJSGDNYYNUWDGVKTJANZENRIVKERBKCNSLWFIVYLJBAGNIZFXHKTWQFOMOFTUZQMSUPRHTH");

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
    msg.setTimeStamp(0.26603095883926176);
    msg.setSource(20487U);
    msg.setSourceEntity(104U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.41981363326811394;
    msg.lon = 0.09775236458533743;
    msg.z = 0.21315055395490845;
    msg.z_units = 148U;
    msg.radius = 0.6934499690894145;
    msg.duration = 27680U;
    msg.speed = 0.76831493268064;
    msg.speed_units = 231U;
    msg.popup_period = 25048U;
    msg.popup_duration = 25049U;
    msg.flags = 205U;
    msg.custom.assign("XAHIMTZTUCKQDDKUENPSVPIINTZBDEAZKYBNXWCTOCEYDYPARWVYZYREGBDHFOIWWSGMRGXRNWSUSTPQWBBOLJVYCSHCPNAEAPBFXMBPSOLJQEUVTGLMUCUYHIDPHSZXKJZLWJIFMNMVMAFKZTMVAFCLEHZOMDFNJLUOVXIDRVNZQSKNIHROEQXFAVKDCJWLFEGPBJMGYYTHQGQSGBFWCLZJAOJXURUUWVHQLI");

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
    msg.setTimeStamp(0.5161709189706716);
    msg.setSource(36351U);
    msg.setSourceEntity(24U);
    msg.setDestination(45615U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.5473750929254065);
    msg.setSource(38210U);
    msg.setSourceEntity(2U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.4912607742459518);
    msg.setSource(1868U);
    msg.setSourceEntity(86U);
    msg.setDestination(48990U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.6924346020828658);
    msg.setSource(53509U);
    msg.setSourceEntity(142U);
    msg.setDestination(17723U);
    msg.setDestinationEntity(52U);
    msg.timeout = 51702U;
    msg.lat = 0.9802076047077029;
    msg.lon = 0.18207246250747677;
    msg.z = 0.11448509916503302;
    msg.z_units = 11U;
    msg.speed = 0.9987802133047443;
    msg.speed_units = 177U;
    msg.bearing = 0.9234671605008936;
    msg.width = 0.56858753299394;
    msg.direction = 135U;
    msg.custom.assign("EEFRCYXTVMGRKMYRJLGOJSYSWXZOPNDHMHDYSLSFUVXNDPNAFTMLTAKKAJCUAMLQTUGDPFASJQDVBYIEXTAHBCNYDZJHZGAYLWNEZSTNWJHXEEORMYVXULQOANYGNKOLGHQQVXQYVEKWUSIKBOUPWCPPQDPFWSCVTVIAQMZVHQKZXPMUSBMFZJIBOJRRCQWBPUHLRZPIJSZCWDMOFWRCFOUEIKZUOEKCXTLKXTJBGNLBBGGHTEVIDIHRIIDGWR");

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
    msg.setTimeStamp(0.4382943283435291);
    msg.setSource(962U);
    msg.setSourceEntity(247U);
    msg.setDestination(19886U);
    msg.setDestinationEntity(148U);
    msg.timeout = 10875U;
    msg.lat = 0.23509212541129865;
    msg.lon = 0.5244531767138517;
    msg.z = 0.7808577518499986;
    msg.z_units = 45U;
    msg.speed = 0.9664598955715172;
    msg.speed_units = 73U;
    msg.bearing = 0.11544032567875084;
    msg.width = 0.0936529766460219;
    msg.direction = 124U;
    msg.custom.assign("MABRWATTNWDPTZROJUXIRQUZECDGSYLHQGFRWCPWIOUASDZVNFPSEIQIBGNFOAHWABGYDCCANFXTESIILGCOHBKRTVCMKVMGXNVNFBEOLWHBCJFMJFMKPRFXRRDPXTUVFBUSYJULKNOYQPVPYGZKQEEPEZHTLHLITRDWGVYXCNB");

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
    msg.setTimeStamp(0.5565996292473098);
    msg.setSource(47774U);
    msg.setSourceEntity(201U);
    msg.setDestination(44435U);
    msg.setDestinationEntity(191U);
    msg.timeout = 1301U;
    msg.lat = 0.47174272284227337;
    msg.lon = 0.36869009932036567;
    msg.z = 0.9585507583052626;
    msg.z_units = 48U;
    msg.speed = 0.601738041620955;
    msg.speed_units = 222U;
    msg.bearing = 0.5457048127562947;
    msg.width = 0.7089525429325823;
    msg.direction = 126U;
    msg.custom.assign("KIJMPTAYOAQSEIUJSFZIGLWBNHDGWIXXVVBLSFWSO");

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
    msg.setTimeStamp(0.7144221375317303);
    msg.setSource(61409U);
    msg.setSourceEntity(48U);
    msg.setDestination(55706U);
    msg.setDestinationEntity(6U);
    msg.op_mode = 236U;
    msg.error_count = 166U;
    msg.error_ents.assign("NVYBIJXKJQFUEMGZGZJQHVAKXACWHDNMVVYVWCINPKSHPTPQSBKOGYAESQWAQLYAPTBRACURKTSSFQJZIIPIPUUGYVTGWIJFRCOHWKESYUWTXXXRBDOHFPZDFDNVDEIOTYVOKUWLMMSSKRERDEZAOZTCAPJKQWARSFCKTNFBWJHEULM");
    msg.maneuver_type = 35965U;
    msg.maneuver_stime = 0.45050645061158623;
    msg.maneuver_eta = 52645U;
    msg.control_loops = 464878788U;
    msg.flags = 133U;
    msg.last_error.assign("ZUQDXLJBZCDPSUIZQYUXAXCIJSWVXSXUGPEFRAIBMINGURCWXHTIRUD");
    msg.last_error_time = 0.9045280963008953;

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
    msg.setTimeStamp(0.2535080158927141);
    msg.setSource(20561U);
    msg.setSourceEntity(89U);
    msg.setDestination(26339U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 131U;
    msg.error_count = 6U;
    msg.error_ents.assign("GQCQTIBGTPHPTOVRBRRFFWSPOCPQKWJLTGCPTDHIZZOVUKENLBYYXHGDACPRFMVFXXSEJUHOBNYYAAYOIUGDVKGAFUMYXFCQCHDWJIZYESNZFWRPMKNENHXQVIHGEQDTUBHNHEBAARWNZUKDURPBOJYOATLQENMKJLLWDOTMVFSVXZJCMKAP");
    msg.maneuver_type = 4486U;
    msg.maneuver_stime = 0.3303656741540423;
    msg.maneuver_eta = 46746U;
    msg.control_loops = 1050119584U;
    msg.flags = 177U;
    msg.last_error.assign("MWEMTBSNWTMRWCZZLWGLPJIWULOXZXYPAIFEFCKPFKEKYIJHIOGLMBQHEDDKVGOULFDJAKIZVBEBGPWSTAWCPFZFSDPQRIJNLNMCKNXFNTHTRGJADXYEKOHUESDPDQEVSYRJUVBXZLVCQHTQUFRUVEHVPABYWUFOUHICWUGRDSVZLGVRZWJYIAUQARREQTNCKZNMAMBVBOQQNDSYNCTOXQSNFYTXJSXMOXKPRHIOLHPZLIHGSYCO");
    msg.last_error_time = 0.24968665004801405;

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
    msg.setTimeStamp(0.3008621864766945);
    msg.setSource(14942U);
    msg.setSourceEntity(113U);
    msg.setDestination(39907U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 170U;
    msg.error_count = 85U;
    msg.error_ents.assign("KSJNLSMKSKRBBTRVLKLPADIAEKUWWVXCOQVRWWCSQMDHFOONINPIDPSWUQEWCBTUGZRDBXAHZHZMFPRZMYYNKTKDGPTAMCHZBKMLFJJPXDNAYVLCRHSQGONUITAVSLHNFYCFQPULBIBSVXOGGYEODTGWSRUVRHBTPNCERAGEEEOBWXWFHIMXIAXFZYDFAMEXQZUQYPKSHUIXVVGHYFRJJTLCOJMDVEIJLAQBQYCTQMCWG");
    msg.maneuver_type = 28614U;
    msg.maneuver_stime = 0.16723532344660907;
    msg.maneuver_eta = 48348U;
    msg.control_loops = 290904428U;
    msg.flags = 2U;
    msg.last_error.assign("QXULPTUOGWHT");
    msg.last_error_time = 0.04100613328377156;

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
    msg.setTimeStamp(0.8080584650952786);
    msg.setSource(41386U);
    msg.setSourceEntity(127U);
    msg.setDestination(10418U);
    msg.setDestinationEntity(224U);
    msg.type = 119U;
    msg.request_id = 61571U;
    msg.command = 41U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.11138734179093246;
    tmp_msg_0.lon = 0.07940447510552573;
    tmp_msg_0.z = 0.3264980814473102;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.radius = 0.33006930107802757;
    tmp_msg_0.duration = 65250U;
    tmp_msg_0.speed = 0.6615180426212363;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.popup_period = 24549U;
    tmp_msg_0.popup_duration = 220U;
    tmp_msg_0.flags = 115U;
    tmp_msg_0.custom.assign("TTTLIRRUXKOOFKOGDFKVQBPSNEGWYJUUSVOSFVEJUQQBWQCNS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1519U;
    msg.info.assign("UCDXFNWDLKWFXENRZHINRVFHONZUTNOVZNMKFXITOLYYYLDWLBXCHJYLYGOGTFFRMKZOVDRYRKGERPISDETPSGSGHJMOLCWJQUNTMWTJGYWBJMLXNOSGFCAVVVBLDIUPSGXLPHAIURQQYMIIMFYTQVJXCKBVBGHNDEZCQKABDPMRDUNHXJQTVOSZJFCSLWIAEBSARAKETFCUA");

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
    msg.setTimeStamp(0.5772436342982146);
    msg.setSource(19175U);
    msg.setSourceEntity(22U);
    msg.setDestination(50101U);
    msg.setDestinationEntity(197U);
    msg.type = 246U;
    msg.request_id = 17321U;
    msg.command = 233U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 26605U;
    tmp_msg_0.name.assign("CYUHRSTGEWVNNAXBIBWUOJRLKRZYCMKLVGRVXJUIKSXKZUKNOJMHOXXIPQBGRSNQNNBDXHGQIYZZZRFCUXNGZHHLBHYWDTJDWMENQFQECMZYOZOCODDEMYEQSFRMSITCFGJOAFLAJJV");
    tmp_msg_0.custom.assign("RPWAEZLRYMNXJPSLHNFMB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57611U;
    msg.info.assign("UDRVIBRHPAHJELRTCSWAUZBTXZJBVFBWAXQ");

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
    msg.setTimeStamp(0.175138725803747);
    msg.setSource(13821U);
    msg.setSourceEntity(88U);
    msg.setDestination(27708U);
    msg.setDestinationEntity(47U);
    msg.type = 191U;
    msg.request_id = 53854U;
    msg.command = 28U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.026276190099622454;
    tmp_msg_0.lon = 0.8763039062708777;
    tmp_msg_0.speed = 0.33707224428951266;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.duration = 4804U;
    tmp_msg_0.sys_a = 60695U;
    tmp_msg_0.sys_b = 57003U;
    tmp_msg_0.move_threshold = 0.3990374380789521;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19405U;
    msg.info.assign("KBKBNHDZXINYSIWTFPYPJOCSDAKZHLMAHNGHOCFGHSQQGZIFKBEOIKDTPJDRDPVJOFQELNITTBZRWLENCPUUXRNNACPFLXOARWJAUVAU");

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
    msg.setTimeStamp(0.8070099086626659);
    msg.setSource(2400U);
    msg.setSourceEntity(47U);
    msg.setDestination(23443U);
    msg.setDestinationEntity(41U);
    msg.command = 91U;
    msg.entities.assign("TOIOADYLUWFZVLBMQTNZZKQRCSLSPFZLROESKUZARRNKFOIBMAWNVYQQZHNSGUHOGRJSHMNSAHDLJDLMKMNDJMPXUWMKJGEWKFNTBYGEJNAWOVBVKPFBEFJCEUWTYSDSVCXCXFQVIPAYYVYXIBAFQECAZUJMHWCEPTUNZVHIQLKDDHDFOEWKOIUMUXTZJYSRBXEHLUTHWKTGEBFRXCYPICBROBXLCTJGVXIDLQQQGO");

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
    msg.setTimeStamp(0.8112459989090599);
    msg.setSource(51735U);
    msg.setSourceEntity(110U);
    msg.setDestination(35140U);
    msg.setDestinationEntity(170U);
    msg.command = 152U;
    msg.entities.assign("KVNUSFNQMZWDMHVRPNQYWYVKOCSTEYPFJANWFFTWNJVAJMLRWVBMEXODOCRVLUCUUSCISBNFRRUQEIDCUXGPQONFTLGZJBELBXKKZHDZQXDNBAYTAJQTSFEAYGWRRDAMQCGJOZUMZHEXCRLQPIERVLWDDKHJTWLYIYSJCIQMBXPGKWKFHB");

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
    msg.setTimeStamp(0.12609040222216505);
    msg.setSource(22396U);
    msg.setSourceEntity(65U);
    msg.setDestination(18804U);
    msg.setDestinationEntity(228U);
    msg.command = 186U;
    msg.entities.assign("GVALQGKHXRAWTSPALYNVHDZFOC");

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
    msg.setTimeStamp(0.0165261750077893);
    msg.setSource(12561U);
    msg.setSourceEntity(89U);
    msg.setDestination(10984U);
    msg.setDestinationEntity(159U);
    msg.mcount = 18U;
    msg.mnames.assign("KWEEWEEPJMPUFBFEJQGIHWXRBXILYRUQSOJQPQMFYPXZYAUNHVAEEMJRBNLGDNSQKGCXGBXIVVDUSTFGAGUZIDPYAFGCKOBVAHMJPLHKWSKRYELADVEXNXOQITSXCZWBULTRWTORILTRBJCQLIILKSVJSCOWHGAJHKSKFHUHFZYDNWBMPLPUPZCZANJWTDXRMFFNUHGGDKLZFYWTQCTMOITNQHNRAEPDYT");
    msg.ecount = 200U;
    msg.enames.assign("LMKPSUFYQMURHPFUTSEITMUNFBFCXAMGWHIURLUJESHNSVDIXXCBWOKYMHDANCCWFZYMKNPEXCRFZBDYXJTPHJADGSFIQQJBUPRCFWMIERGTYPNVZWQVVABZSVBYMFAZUMUAXYNTGDHPGQLTZ");
    msg.ccount = 147U;
    msg.cnames.assign("MDTYTGPAZUMIWZZMDCGFGPVWSWQTPXRIMMUYCQZELJFYNWREMPXZUHRB");
    msg.last_error.assign("UKEUXNQMLYRIUUFTZKLEIYSTYGAQHEKNWGRDRFLTXGEOCGPYJOSHAHODEKFSJQBJTDDMSHPBKSWBOEDLNGXVEAZNGPQWVDGZVMWPBYCTYLFRXVXVBQGDHYYDXJOSFYCTXWIWPEKCWSOIIJWABBHNUTHENUXVISSOFOACFCHORKKFTZXJILACMMNSLEAURRPLIPWHAMTJBPVQLDZCRBQQVNIFYNZVPFQTRMPVMZJGJNAIODUCMBJUG");
    msg.last_error_time = 0.5164973490708424;

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
    msg.setTimeStamp(0.9637390203885736);
    msg.setSource(36748U);
    msg.setSourceEntity(142U);
    msg.setDestination(62120U);
    msg.setDestinationEntity(92U);
    msg.mcount = 234U;
    msg.mnames.assign("NWQIXNLBCZTZSZXGNVFARSFZHGHVTRXJSOUBCBXPPDJNFEDYAELQSKPPQQKRULCWWYQS");
    msg.ecount = 144U;
    msg.enames.assign("GSEQZWLRNCIOABJXLFHXBSPJFYKBWAOVSEWFCILPOFYEHLBPVOWGTZTWFETS");
    msg.ccount = 54U;
    msg.cnames.assign("YSGHYKZBAVQBGOWYLQWAUZFRBTFEBSJNPJYMGEOODHVIUXVAWMSDUIZQKNACPEKRJTKHJIUBDXPQUGVMCWZSJPALMNZOBHUMQFYM");
    msg.last_error.assign("WPXXQWECVUHVVKDUMKMMSHDOFTQSDVXQIPUFOLQMYEERENKQFDTTGJIRHMURBSIIVJRHCMWZLSYQDAKURBQGIMASHBYJHPRKKODLAIOUNWIPWBGTHONGBZSZSYNOCTVIPBCAXYZPTIOEWXTHMGYDZCHEMMKZXNCVVXVBU");
    msg.last_error_time = 0.22452979807119633;

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
    msg.setTimeStamp(0.7384307166842496);
    msg.setSource(34271U);
    msg.setSourceEntity(50U);
    msg.setDestination(30717U);
    msg.setDestinationEntity(186U);
    msg.mcount = 196U;
    msg.mnames.assign("XAMCMHJHBZLJLSHWLAITOTQZTUJYKONGVCQGRBCFAAUSTVVJSAFZLHVJPBNNDYVEZXLRYUFSPGCUFLKNQDWPGXKGJWCLPVDMQIMBEDORKSEMRBGZYGISUDMYIRPNLWANCHYOSEHQRBOVFCOKUQEOXYWCTDLRZVAEPXOECIWQJPSFITVGOOVXGJXKTIKQGZBPFXRWBDYHANKNYWTRBZDSTHNAJSNAUEMQZUIFXHKH");
    msg.ecount = 35U;
    msg.enames.assign("DRVLUKEPNNZOGUMIXPUKFJXCMHMSRXHHCWQXAYVHCCIBLUZFVLLDUPMEGXRTZSRCVKWSNMJRVRTFECASJMQHJWSBVQLKTPPJHYTQZHGEPHXKYSB");
    msg.ccount = 17U;
    msg.cnames.assign("RUOVVQSJQYHOUYKTXSUWCN");
    msg.last_error.assign("ZGYBQOKPQHUGJOHYGJKELHNZOJZMWGECRGJUKIOIZVSIWGYABJP");
    msg.last_error_time = 0.49368174633225936;

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
    msg.setTimeStamp(0.058580334516791566);
    msg.setSource(15319U);
    msg.setSourceEntity(204U);
    msg.setDestination(16143U);
    msg.setDestinationEntity(114U);
    msg.mask = 141U;
    msg.max_depth = 0.04883055472929054;
    msg.min_altitude = 0.9853538249881666;
    msg.max_altitude = 0.96726640109708;
    msg.min_speed = 0.9135288196987836;
    msg.max_speed = 0.5968357863688766;
    msg.max_vrate = 0.7070637695041557;
    msg.lat = 0.833942957731502;
    msg.lon = 0.039857608936700206;
    msg.orientation = 0.9652491824660528;
    msg.width = 0.43181257838009157;
    msg.length = 0.43743408360510105;

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
    msg.setTimeStamp(0.6546188822307522);
    msg.setSource(6968U);
    msg.setSourceEntity(29U);
    msg.setDestination(54252U);
    msg.setDestinationEntity(47U);
    msg.mask = 116U;
    msg.max_depth = 0.6607751291849262;
    msg.min_altitude = 0.4042021449332679;
    msg.max_altitude = 0.1965225051066659;
    msg.min_speed = 0.9585646835115799;
    msg.max_speed = 0.7493701275765428;
    msg.max_vrate = 0.9800588909731288;
    msg.lat = 0.2537867329321176;
    msg.lon = 0.10483221492416661;
    msg.orientation = 0.7008382246911892;
    msg.width = 0.6909893580555658;
    msg.length = 0.5041427680033154;

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
    msg.setTimeStamp(0.15447526361215613);
    msg.setSource(64456U);
    msg.setSourceEntity(63U);
    msg.setDestination(45782U);
    msg.setDestinationEntity(172U);
    msg.mask = 167U;
    msg.max_depth = 0.4829060447616744;
    msg.min_altitude = 0.11571114290048523;
    msg.max_altitude = 0.8288049416509367;
    msg.min_speed = 0.2418926636009079;
    msg.max_speed = 0.4265675813369463;
    msg.max_vrate = 0.020755034555847485;
    msg.lat = 0.4022179149795643;
    msg.lon = 0.7294856014896602;
    msg.orientation = 0.14014666025878186;
    msg.width = 0.559081344463958;
    msg.length = 0.8460480394415507;

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
    msg.setTimeStamp(0.7913117647137021);
    msg.setSource(45391U);
    msg.setSourceEntity(209U);
    msg.setDestination(4386U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.7651835873283652);
    msg.setSource(15778U);
    msg.setSourceEntity(97U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.10524236167361323);
    msg.setSource(58614U);
    msg.setSourceEntity(86U);
    msg.setDestination(50521U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.24729437256155073);
    msg.setSource(23862U);
    msg.setSourceEntity(27U);
    msg.setDestination(30468U);
    msg.setDestinationEntity(248U);
    msg.duration = 4019U;

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
    msg.setTimeStamp(0.8421293839947915);
    msg.setSource(7369U);
    msg.setSourceEntity(180U);
    msg.setDestination(38879U);
    msg.setDestinationEntity(77U);
    msg.duration = 62971U;

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
    msg.setTimeStamp(0.5589295245820536);
    msg.setSource(35706U);
    msg.setSourceEntity(101U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(254U);
    msg.duration = 63708U;

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
    msg.setTimeStamp(0.13856526850782291);
    msg.setSource(17768U);
    msg.setSourceEntity(56U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(164U);
    msg.enable = 105U;
    msg.mask = 3851188660U;
    msg.scope_ref = 2781697038U;

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
    msg.setTimeStamp(0.0015575028614845943);
    msg.setSource(53383U);
    msg.setSourceEntity(252U);
    msg.setDestination(44764U);
    msg.setDestinationEntity(36U);
    msg.enable = 6U;
    msg.mask = 1111686609U;
    msg.scope_ref = 3620214205U;

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
    msg.setTimeStamp(0.8402463398533504);
    msg.setSource(57624U);
    msg.setSourceEntity(103U);
    msg.setDestination(7475U);
    msg.setDestinationEntity(196U);
    msg.enable = 99U;
    msg.mask = 3830665036U;
    msg.scope_ref = 770462289U;

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
    msg.setTimeStamp(0.11116363974691978);
    msg.setSource(50564U);
    msg.setSourceEntity(78U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(68U);
    msg.medium = 9U;

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
    msg.setTimeStamp(0.6011321036662782);
    msg.setSource(11972U);
    msg.setSourceEntity(157U);
    msg.setDestination(18195U);
    msg.setDestinationEntity(216U);
    msg.medium = 164U;

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
    msg.setTimeStamp(0.594109830368844);
    msg.setSource(24946U);
    msg.setSourceEntity(238U);
    msg.setDestination(28849U);
    msg.setDestinationEntity(101U);
    msg.medium = 84U;

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
    msg.setTimeStamp(0.025997207431726177);
    msg.setSource(1543U);
    msg.setSourceEntity(2U);
    msg.setDestination(59715U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8050150432728591;
    msg.type = 94U;

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
    msg.setTimeStamp(0.06636805930115841);
    msg.setSource(65488U);
    msg.setSourceEntity(146U);
    msg.setDestination(57943U);
    msg.setDestinationEntity(223U);
    msg.value = 0.2803741278261388;
    msg.type = 36U;

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
    msg.setTimeStamp(0.8930557878103839);
    msg.setSource(26552U);
    msg.setSourceEntity(14U);
    msg.setDestination(25344U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5460775681296458;
    msg.type = 114U;

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
    msg.setTimeStamp(0.5357161163035353);
    msg.setSource(18942U);
    msg.setSourceEntity(92U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(221U);
    msg.possimerr = 0.6277814004405249;
    msg.converg = 0.4652380792911699;
    msg.turbulence = 0.8944191175085531;
    msg.possimmon = 94U;
    msg.commmon = 88U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.9312871347411884);
    msg.setSource(3898U);
    msg.setSourceEntity(152U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(11U);
    msg.possimerr = 0.8988632220408572;
    msg.converg = 0.5487794015896028;
    msg.turbulence = 0.7612286495507313;
    msg.possimmon = 182U;
    msg.commmon = 55U;
    msg.convergmon = 31U;

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
    msg.setTimeStamp(0.2389303708857834);
    msg.setSource(30751U);
    msg.setSourceEntity(129U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.49044303842066983;
    msg.converg = 0.13581869605076147;
    msg.turbulence = 0.7340227912041893;
    msg.possimmon = 232U;
    msg.commmon = 66U;
    msg.convergmon = 121U;

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
    msg.setTimeStamp(0.30872957462957695);
    msg.setSource(31469U);
    msg.setSourceEntity(105U);
    msg.setDestination(24909U);
    msg.setDestinationEntity(213U);
    msg.autonomy = 40U;
    msg.mode.assign("VRKBAVOMDKQHXZUWXKHFHDZWFDVHSZEMSTDLLVLBSEBIRPYWZPCCBRJPOYLYWNGYLVCCRTZHSEUTEAQOXCESWGXJSTQXCIGKIPZRUKGRYELFNEIYBJMNJVXCIBTWEMFBFATTTVEUAJMIRPDHYFCAXFUKBJGGOTKPPWJMPDRRLFUJUQIDPIFZBHMTODUFAYRWSXHKSNBWDQJIQOKPACHWVLKHUOXONQLOMUOGZVNJN");

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
    msg.setTimeStamp(0.6782708371393459);
    msg.setSource(55532U);
    msg.setSourceEntity(58U);
    msg.setDestination(43876U);
    msg.setDestinationEntity(168U);
    msg.autonomy = 128U;
    msg.mode.assign("OFWVNRFVKXKOUCTIHUTGWIAYBYDYCEOYRFDVKENRPXPGQNFMUVOJUVRLPJCVQSNAESRFRYESWNQDCZVYXDTIOBCDHEZSIXKIAKCQYKJXLXNPSLAHPIAQMFFMXERHOJBHHLUOWZSDYQDPVLECTBGMSIPSRYZPXDWRQUGLIHTMOHMQEWMVLZLDJMFOJI");

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
    msg.setTimeStamp(0.16358555172764233);
    msg.setSource(7623U);
    msg.setSourceEntity(21U);
    msg.setDestination(42641U);
    msg.setDestinationEntity(115U);
    msg.autonomy = 211U;
    msg.mode.assign("HGBTMOPTDZNWJQELJIOUKEXXHKYPOSSBJIQAGZIMHCHHGQVLOOBHJPGTBCNLGRNEENBRAYLDHGXMWYS");

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
    msg.setTimeStamp(0.19481370507958862);
    msg.setSource(19588U);
    msg.setSourceEntity(173U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(96U);
    msg.type = 46U;
    msg.op = 55U;
    msg.possimerr = 0.30080221952226216;
    msg.converg = 0.8300264699653332;
    msg.turbulence = 0.7069998859006308;
    msg.possimmon = 168U;
    msg.commmon = 203U;
    msg.convergmon = 232U;

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
    msg.setTimeStamp(0.2728784164097352);
    msg.setSource(16287U);
    msg.setSourceEntity(106U);
    msg.setDestination(29578U);
    msg.setDestinationEntity(93U);
    msg.type = 193U;
    msg.op = 75U;
    msg.possimerr = 0.441022449092361;
    msg.converg = 0.831693110447396;
    msg.turbulence = 0.4724801707089127;
    msg.possimmon = 108U;
    msg.commmon = 78U;
    msg.convergmon = 11U;

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
    msg.setTimeStamp(0.9892429438750124);
    msg.setSource(24769U);
    msg.setSourceEntity(3U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(68U);
    msg.type = 106U;
    msg.op = 172U;
    msg.possimerr = 0.26688623896478203;
    msg.converg = 0.4432912461046651;
    msg.turbulence = 0.8180436884654635;
    msg.possimmon = 165U;
    msg.commmon = 16U;
    msg.convergmon = 211U;

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
    msg.setTimeStamp(0.9012575638629527);
    msg.setSource(35651U);
    msg.setSourceEntity(20U);
    msg.setDestination(12978U);
    msg.setDestinationEntity(58U);
    msg.op = 232U;
    msg.comm_interface = 49U;
    msg.period = 6665U;
    msg.sys_dst.assign("NNLYGLZIDVQIPJKTKHRVXUCWTBDKRTBARPCJSNJUVABMYQOUJMWGHPWFVMKNWQLUGTBMEKJEFMWSKPTZRAGEYDUIVEFDKTUROMPHBPXQXXOEITWDBAZZUXCSMNBSKAHKLCZJJVFEX");

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
    msg.setTimeStamp(0.0073171665382466555);
    msg.setSource(57265U);
    msg.setSourceEntity(194U);
    msg.setDestination(24492U);
    msg.setDestinationEntity(91U);
    msg.op = 201U;
    msg.comm_interface = 220U;
    msg.period = 61729U;
    msg.sys_dst.assign("YXWTPRXKKCVGEGNPLSPQQARWTYKCHADFEPMUBVLKCNLMDKPOTQJFRZLZWVVPLJYDDHUKAYYZYQDOURWUFJJRKKQWAIHQPVASCGLQKTHMXNOBMVVUACFIZOIJDMHQGFAEBFEBIAVSHFXSGIFRHESJEXPYONVPLEJTSWYHTIGYSFQFCOWZRTXOR");

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
    msg.setTimeStamp(0.9194277030897462);
    msg.setSource(17171U);
    msg.setSourceEntity(12U);
    msg.setDestination(17541U);
    msg.setDestinationEntity(217U);
    msg.op = 161U;
    msg.comm_interface = 103U;
    msg.period = 52116U;
    msg.sys_dst.assign("SNMWXNSWTBZQNYHBMLESZRCNSJDVFWEZXPPGCYRTENCWBURLOEPWSIXJZVDGZUYMAOGREIRTXRFCGSWSJTTUHXCQEBMAVJARAQLKBOGRTOROLCKDSGLFMGIRPBDQXVQIEFCVNIIADKHAEADWFHMDHUPKZXJGIFGIQNSCKTBFUSHMTXAJJYKYQVIFGZENWC");

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
    msg.setTimeStamp(0.8524306898172415);
    msg.setSource(20115U);
    msg.setSourceEntity(60U);
    msg.setDestination(46507U);
    msg.setDestinationEntity(88U);
    msg.stime = 1638934599U;
    msg.latitude = 0.5705614655585874;
    msg.longitude = 0.40940623730483716;
    msg.altitude = 9508U;
    msg.depth = 35660U;
    msg.heading = 13272U;
    msg.speed = -29639;
    msg.fuel = -108;
    msg.exec_state = -88;
    msg.plan_checksum = 29039U;

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
    msg.setTimeStamp(0.8587901284601439);
    msg.setSource(64157U);
    msg.setSourceEntity(152U);
    msg.setDestination(55416U);
    msg.setDestinationEntity(139U);
    msg.stime = 4072104136U;
    msg.latitude = 0.496001099939541;
    msg.longitude = 0.8204550626138646;
    msg.altitude = 7187U;
    msg.depth = 51091U;
    msg.heading = 17664U;
    msg.speed = 32162;
    msg.fuel = 17;
    msg.exec_state = 111;
    msg.plan_checksum = 24124U;

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
    msg.setTimeStamp(0.4950301597920562);
    msg.setSource(38959U);
    msg.setSourceEntity(136U);
    msg.setDestination(20718U);
    msg.setDestinationEntity(24U);
    msg.stime = 557053861U;
    msg.latitude = 0.5251859620226471;
    msg.longitude = 0.5659359668875146;
    msg.altitude = 51767U;
    msg.depth = 14791U;
    msg.heading = 33302U;
    msg.speed = -20636;
    msg.fuel = 64;
    msg.exec_state = -39;
    msg.plan_checksum = 21492U;

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
    msg.setTimeStamp(0.5152291558546425);
    msg.setSource(46395U);
    msg.setSourceEntity(185U);
    msg.setDestination(54400U);
    msg.setDestinationEntity(14U);
    msg.req_id = 55917U;
    msg.comm_mean = 176U;
    msg.destination.assign("ZGFGIEBADSLHKTWGBRVSSWWTZXSFKFDRRMMROIXXIUSMNZUWFXIVANZKTAKOEFGEALIWWIIUYRYFBSTRMBUMNDQOBPNRPVORDQXZKQGLHFLEEDMYSGVOQJXLENPUEBQOYZXHOCIVNQIFCGXLJWCHPLACUZMKT");
    msg.deadline = 0.3040698508680064;
    msg.range = 0.91798864802969;
    msg.data_mode = 51U;
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.3347174100849387;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LWOSLANJJGHKACDWMSJYBEEXEVSNXHAHOXLCWWFNNWLIJOVUAPMMGTKRZJESDTMRJLEOFVHSADZTNPIZCAMFIQGGNZUTMYIYCMBPBBLPSLZHVPOVNQAWMLOUYDCHWUJQHAIMIEJU");
    const char tmp_msg_1[] = {3, -112, -116, -110, 30, -96, 2, -1, 121, 55, -98, -100, 22, 101, 108, -29, 110, 103, 117, 4, -11, -31, -126, 20, 101, -53, -57, -89, 124, 59, -79, 83, 52, -86, 51, 62, 42, 83, 64, -60, -32, -53, 54, 113, -54, -40, 38, 112, -36, 82, 83, -117, -3, -63, -128, 59, -119, 5, -124, -100, 19, -93, 4, 110, -52, 62, -26, 23, 26, 113, 40, 59, 23, -54, -45, 114, -13};
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
    msg.setTimeStamp(0.11664906847827528);
    msg.setSource(35077U);
    msg.setSourceEntity(166U);
    msg.setDestination(51400U);
    msg.setDestinationEntity(30U);
    msg.req_id = 44713U;
    msg.comm_mean = 101U;
    msg.destination.assign("GBECSLLSWUEFAMWIXNDERKVJHKFIBPVGWOCFGORVHIGSPPDEVASRCJORZZUMXXSUWQILWNLOYTUUATGXNKZHNQBOQIPMEVOWYWDEHACMMHQPASXDETHFJCLURZCFLMCTPKJNPSDBVWSXTRYKZGYVHBJIQMPWVKGIBBANAKHOQDQOALHNKJXXKTPFRYZGMEJCTTVQKYAZJMUHXSROC");
    msg.deadline = 0.3012410975646038;
    msg.range = 0.1952795940465445;
    msg.data_mode = 241U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("UDWLVJZEQEORSJZTAZLNOLHMUWIV");
    tmp_msg_0.predicate.assign("EMMOEKGARJANTSWPLJBHZUOJBJXHGPTOJKWPQWJZBXFYSMDKLRIKZAAHTWYUTJWIYRDYQVTSROJSPVMTOEEBOGJHFIVWOFCCFHKKCLKOTZSPTAVRVTTWDNAEZLCAQWUJUUGYRMSZMIQWPGVDFONGVGCYXFPISGFMQQKQSDNLCQMXFPLYNBYBUIESCXVMKLFHGEINEGQBSAAUCXDEANEPZILZPHZVBLHDX");
    tmp_msg_0.attributes.assign("RFOWGPJHJESYRQENIFKLADWFUNWQOCMOPJSLAJTUBYCCGFXKBOIDUUJLAVQSZUWGYXGFRVKLZOJPZHWMLYJMGBYQVCDOGBIVZIXENTYHYVKPIYPTGRCOKJZZZXVTSDEBNMUXAKDQQEAMXDHIHRCMFPADDLYSHBPMXGQMGONSTSUYACCQIRDVGHZHAMXLBEEPTUFLWEHBWBXSNAREIPPRWKVRSTOCLKNNCO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LONQZGMKQUGVKBWFKACAFBXCNZKWFSNJDLELDHJFXDEWINCIPNHTOQPQZWJMWIBUBUTMDRHVREWYHECGRTPIZGPJRRSGBOGVTUJZGKBWAHSJPTSAARAKPDXQPGXLRTTZMORSFHPFKWGUFI");
    const char tmp_msg_1[] = {47, 100, 42, 78, 72, 5, -3, -58, 16, 85, -114, 42, -25, 76, -33, 62, 46, 108, 86, 112, 64, -68, 104, 123, -20, -16, -106, -90, -80, 72, 50, 72, 7, 114, 115, -12, 28, 6, -44, 29, 115, 5, 36, -83, 18, 47, 125, 40, -123, 53, 57, -61, -125, 105, -120, 114, -56, 126, -40, 0, 4, -34, -112, -128, -2, -97, 97, 74, -105, 60, -16, 1, -28, -86, -41, 122, 92, -39, 19, -9, 72, -76, -75, 77, -89, 69, 42, -70, 123, -66, 34, 7, -91, -32, 123, 24, 62, 10, 27, -116, -84, 27, 69, -22, 88, 78, 104, -105, -77, 65, 108, 89, 30, 106, -9, 31, -54, -112, 70, 79, -89, 112, 54, 91, -120, 38, -65, -70, 92, 49, 85, 116, -87};
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
    msg.setTimeStamp(0.41394101139999717);
    msg.setSource(56983U);
    msg.setSourceEntity(125U);
    msg.setDestination(57842U);
    msg.setDestinationEntity(160U);
    msg.req_id = 42585U;
    msg.comm_mean = 195U;
    msg.destination.assign("DCRHOOVWWNEKGKHUYXSQIEEMDQIYCQUPDKEJQQLKTBGWRJKGROTHTGKOCFOMVWRRXULWTQZFNSITFMMZOVSASVYYQJXPPPLANEUDNLJXJKPAUNIDJZDFKXXLLPRSTIZESTBLHIEWPGJFHISJHGGABTPCMZYBMBANHCOFNUFCGCOCZBBRAYDBZMCVEUUXLDWUOLVPIBAWOKESL");
    msg.deadline = 0.4607532240840566;
    msg.range = 0.4466487934508915;
    msg.data_mode = 116U;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65019U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FBUQWBMCDLOWBGGQWRHMHQQCZHTTNENHMTEAULQBVFJESWVIZBEKNPVOKTOVWQPYAEBRTWXNGDNZMEQDHADPROFMZAMZSCIBNEXRDYLUISGLFJTXDRSUITWNJJUITCKDGZYQPJJPYXXICJOUHOVWRFHZCRYXGLLUMCIVAVDAFZFNSALTPNSHDFP");
    const char tmp_msg_1[] = {-48, -106, -60, -6, 88, 12, 43, 97, 104, 73, -113, 28, 106, -42, -104, 98, 120, 108, -25, -115, -10, -123, 76, -122, -11, -5, 101, 57, -36, 52, -11, -77, 56, 48, 37, 20, 7, 63, 44, -93, 23, -108, 23, -80, 24, -101, 30, 56, -26, -54, -5, 33, 72, 29, 80, 55, 19, -80, 11, -100, -119, 73, 76, 120, 121, 79, -80, 115, 52, -93, 87, -37, -69, 47, -11, -108, -104, 74, 4, -67, 72, 46, 49, -99, 119, -116, -7, 18, -2, 50, -69, -42, 113, 101, -116, 69, -5, -102, -122, -112, 119, 68, 55, 85, 1, 10, -125, -120, 126, -101, 49, 29, 68, 70, 37, -9, -29, -108, 102, 84, 106, 75, -71, 60, -46, -38, -35, -3, 97, -80, 26, 119, 62, -43, -55, 11, -75, -8, 103, -11, 55, -16, 34, 75, 126, -100, 76, -27, 114, 84, 99, 100, 77, -106, -107, -14, 7, -20, 57, 101, -114, 3, -82, 70, -37, -37, -106, 125, 98, -75, -31, 117, -50, -18, -33, 23, -20, -123, 104, -102, -97, 31, -68, -116, -111, 1, 80, -8, -16, -100, 31, -114, 126, 0, 77, -48, 38, 54};
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
    msg.setTimeStamp(0.1350327152238998);
    msg.setSource(54944U);
    msg.setSourceEntity(35U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(9U);
    msg.req_id = 59890U;
    msg.status = 254U;
    msg.range = 0.8357620845085504;
    msg.info.assign("MZWNYZHATDBCLAXFYVNTCQZSFHPCNSUAERGAVZKQJCAOHYGLGTCETYOHGHUDCRYDPGZILPXZUDVMYWYDXVOIQOBKQMRLXPHKRTEIEFWPKQUEBYFOBUJVAPKWLQODQIRNLDBXTSDVLMWRFINOEFBWCJUPQNTWFQMUAFGJ");

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
    msg.setTimeStamp(0.8424778652218426);
    msg.setSource(50731U);
    msg.setSourceEntity(75U);
    msg.setDestination(29577U);
    msg.setDestinationEntity(164U);
    msg.req_id = 5555U;
    msg.status = 168U;
    msg.range = 0.9366994823432709;
    msg.info.assign("UJQUWMHDHDKKWJVMEYYXJSFPGTNSGZDNCPDSWCRFVIRFFOKXKISWQDHYTLCZMITWEAILZXHUJDGZNTGYVVDEKLBJOHIUELVPHLYLPCQHGZGFVQMTLXGTMIFOBBPBXWYQRMIYGNPUBHUFSQFMEOZRBGGJSKBENOIRLLDRKJXUZKYC");

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
    msg.setTimeStamp(0.351097290211532);
    msg.setSource(3300U);
    msg.setSourceEntity(207U);
    msg.setDestination(25563U);
    msg.setDestinationEntity(0U);
    msg.req_id = 8517U;
    msg.status = 251U;
    msg.range = 0.6918978413961177;
    msg.info.assign("IBAKJIYAHSOATEUXEOGDUAFCI");

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
    msg.setTimeStamp(0.9716684032388268);
    msg.setSource(31498U);
    msg.setSourceEntity(11U);
    msg.setDestination(4662U);
    msg.setDestinationEntity(72U);
    msg.req_id = 44850U;
    msg.destination.assign("BZTASFRIJODBZKSMYVDOPAZVTNOJSBXWNQFBHCDXHYNOQYCTEHYCUQJBQNEDKCZKVUMWESEKDHYJCRDORTWMTXNBOENFWPSAJGPNGQKYAOXMNIALCYCKFEFHELRHVJMSR");
    msg.timeout = 0.9522612064271258;
    msg.sms_text.assign("XAEWOQRNKEJJFWAKGGOTJXDSFYXMVHQUQGAWGSITJSXNBTLYEVAHNFTRRCCPVTSLLYQTGDFGQORXMDYIIAJDCWPTBFADEXSYKRZQYWMIUHNHOSLBECOLUJKDMHIVIQDCBWDXPKSGDAPKJZOFKNNZIMMZBXLERPPTLTPFZIVVHUMZGCRKVFCXGZDHLGMOWBPVNYCHHSJNRNPQOIOHANRWZFBSAEBUQVYPJSZKUEZMJUCBQUYUBCYLRTWVF");

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
    msg.setTimeStamp(0.34805225293147224);
    msg.setSource(9256U);
    msg.setSourceEntity(152U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(197U);
    msg.req_id = 52888U;
    msg.destination.assign("VFMKHYBTWCPJKWTEQGBWRTVMNAWSKUVBPJFQYNVNDKYUDTDAPQJNCGIPZYFRLDWAXAPXNJGGIUUHSOYJWHBTS");
    msg.timeout = 0.5807781828106996;
    msg.sms_text.assign("YCHGKGKXBBIHFAECCXYATSNFQOPNRXDNWWYYMWDADKQJKFTPLBMZXPXEZLFUJVDIISMIIWQHZXQTNNVCPVXTUBFZVEFOSIGJRBDLUYPRRDTBGQJUVY");

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
    msg.setTimeStamp(0.0007487350450819941);
    msg.setSource(52159U);
    msg.setSourceEntity(190U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(224U);
    msg.req_id = 49848U;
    msg.destination.assign("VFIGHEPZSWNYSBDAPGHSGLBJIQJVRZNMHALVCRKPTLCASRJWILLPXTGJSWOTEUIGVUQQRQXWGCOXHSRFNJYVCWCXDTIPLTWWDMBZKXZJUJUXYHARFNEXWARCKPGYARGCKDBXJIOVZJXGJKIAYBYKMFBONBTKSQLPMPYMFZXAFQVMUSVZRKTZHHNZUZEUSBDQCMFNEHMQNREIETLWDHAEUOTWLAODPYCKQOUFTMSVG");
    msg.timeout = 0.7420998467563323;
    msg.sms_text.assign("RWDNFQLRKTAFCSLXJWBREKHLKEJLXTONAWTBXQYTZDIOPWUHLDGTQIYMRDOJMCMKZLWSMLQJUFWEHCGUHODFTSAVPJQXKJBASD");

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
    msg.setTimeStamp(0.6410068642824935);
    msg.setSource(50977U);
    msg.setSourceEntity(84U);
    msg.setDestination(38716U);
    msg.setDestinationEntity(4U);
    msg.req_id = 30964U;
    msg.status = 150U;
    msg.info.assign("WQLNYDUAITAQIUHMZDFBDHXVORXOLXKNVSFSYQWOSGQFXOZBUGPZYGCZANXTOPPQVPLCTUARKDCGHONSBJLWCMCRNQXQSWMDSJAJGESZEIGCEMYFTLSKVMEUQBITMIGNDZJORYZXHTSCNEKVYEPRGIEPXDYW");

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
    msg.setTimeStamp(0.25060615926659136);
    msg.setSource(22129U);
    msg.setSourceEntity(221U);
    msg.setDestination(52995U);
    msg.setDestinationEntity(203U);
    msg.req_id = 46604U;
    msg.status = 202U;
    msg.info.assign("BIZJXSWHACLVIBBAPDTFFWUOJBEBIUDRFMWPLMGEHDHLHAMLSHPYDPLTZXURAJUMVNRGEYKZEQWPXYIKZTGGLFRUAOYHQSTMDOQSTQYWYBVKOTNPSLNWANZNQPTNJSZBNKDACKOQJRMJNYDFJIXUGWKQVXPNOSCYYHIZEVUJGMFCRFPGHITBRKXDOIWHKIEF");

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
    msg.setTimeStamp(0.613441145021815);
    msg.setSource(39660U);
    msg.setSourceEntity(139U);
    msg.setDestination(41200U);
    msg.setDestinationEntity(104U);
    msg.req_id = 1935U;
    msg.status = 151U;
    msg.info.assign("YTJRGMIZDJKBXPMSCBGOZLJOPSRPYVQXKD");

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
    msg.setTimeStamp(0.7714230415578162);
    msg.setSource(52661U);
    msg.setSourceEntity(8U);
    msg.setDestination(12466U);
    msg.setDestinationEntity(212U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.14932297213116263);
    msg.setSource(55159U);
    msg.setSourceEntity(240U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(166U);
    msg.state = 128U;

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
    msg.setTimeStamp(0.8944434371108848);
    msg.setSource(42971U);
    msg.setSourceEntity(135U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(143U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.18853079301335018);
    msg.setSource(16523U);
    msg.setSourceEntity(66U);
    msg.setDestination(23586U);
    msg.setDestinationEntity(84U);
    msg.state = 18U;

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
    msg.setTimeStamp(0.3600918199249171);
    msg.setSource(27175U);
    msg.setSourceEntity(193U);
    msg.setDestination(29647U);
    msg.setDestinationEntity(72U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.786770188893462);
    msg.setSource(34910U);
    msg.setSourceEntity(165U);
    msg.setDestination(38606U);
    msg.setDestinationEntity(99U);
    msg.state = 46U;

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
    msg.setTimeStamp(0.8975939932252864);
    msg.setSource(20233U);
    msg.setSourceEntity(79U);
    msg.setDestination(44932U);
    msg.setDestinationEntity(63U);
    msg.req_id = 12837U;
    msg.destination.assign("KIIBZHMOFNZEVUHQGYHTNAHRMWVUJRWNSZCQTHGFVEMNZQMTGBQRKIXBATMIFNPIXXPHIXAFSLHFSUVZOAWLWBORXVKSCNPWGROQGMSZKEYKPOZDYNGNWGVBBFLTPQVMDPWAYDBRCSEJZDCYRDPACAYRLJKECOIDNHXGXUFAZEJIGJDEVEYMUYCSYPKDMKOVL");
    msg.timeout = 0.4447218241483454;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.request_id = 2295U;
    tmp_msg_0.command = 19U;
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3322614201770686;
    tmp_tmp_msg_0_0.lon = 0.7192864366366981;
    tmp_tmp_msg_0_0.z = 0.5128728723346125;
    tmp_tmp_msg_0_0.z_units = 148U;
    tmp_tmp_msg_0_0.speed = 0.8569205977186329;
    tmp_tmp_msg_0_0.speed_units = 203U;
    tmp_tmp_msg_0_0.bearing = 0.5055080726854377;
    tmp_tmp_msg_0_0.cross_angle = 0.7758067315926885;
    tmp_tmp_msg_0_0.width = 0.5393797422365233;
    tmp_tmp_msg_0_0.length = 0.42320629407024934;
    tmp_tmp_msg_0_0.coff = 33U;
    tmp_tmp_msg_0_0.angaperture = 0.9900389271783268;
    tmp_tmp_msg_0_0.range = 33497U;
    tmp_tmp_msg_0_0.overlap = 15U;
    tmp_tmp_msg_0_0.flags = 117U;
    tmp_tmp_msg_0_0.custom.assign("SNFPVEUUQAQH");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 1017U;
    tmp_msg_0.info.assign("JZRYMYHOCJQOAOFTUCSVEFKEIUWBMHQIXDQGWVHCBULGTKQLWIBNPJHZORGRAVNMKSCYDBAULPSLRLPAWLRRUYTAQFLFTSRWWDFJPRCUEPVSLBIZXQYIGJAMEQFGBDXHPIKZGWMDNIYAYZNK");
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
    msg.setTimeStamp(0.7244931116179533);
    msg.setSource(11132U);
    msg.setSourceEntity(248U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(71U);
    msg.req_id = 52729U;
    msg.destination.assign("LQHVZKSDDCFZCCMQYNJQDMFFRVGDPNWNHRZLOGP");
    msg.timeout = 0.6318729258844176;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 24316U;
    tmp_msg_0.bearing = 0.06397240789614533;
    tmp_msg_0.elevation = 0.7892008431673995;
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
    msg.setTimeStamp(0.7154258935459947);
    msg.setSource(27784U);
    msg.setSourceEntity(67U);
    msg.setDestination(51229U);
    msg.setDestinationEntity(238U);
    msg.req_id = 45213U;
    msg.destination.assign("JQBVKARVQPIONYIQCDUNNGIZTKTWFSGQKHQTWSHYJPRMFCEZPPMXGRLMQNBCJBYARHYBMINOCOHRDFNEUOEZIVGUNADSLCXVHQTWVPOMEAEZJKLCXXVAGFEYUHLPXJOFMWFBRKDNSEUITYDYLMUSSSEJNSAPKW");
    msg.timeout = 0.8240539580589744;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("MAJHOVKYFQIHIJQTHYVLAPNEMDUMFEFTWZMNWIJOLEIKNFNAREPGUEWIPSADTXVXZGIAKAYBXOHCMXQSBNCWNJZLGUGW");
    tmp_msg_0.service_type = 234U;
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
    msg.setTimeStamp(0.17619616987215503);
    msg.setSource(13866U);
    msg.setSourceEntity(88U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(106U);
    msg.req_id = 45144U;
    msg.status = 110U;
    msg.info.assign("QXNBEQEVNNSTRNZIFGZLEFOUVFICJWIWQVUC");

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
    msg.setTimeStamp(0.9916680682697953);
    msg.setSource(49955U);
    msg.setSourceEntity(30U);
    msg.setDestination(56747U);
    msg.setDestinationEntity(166U);
    msg.req_id = 18456U;
    msg.status = 225U;
    msg.info.assign("GVKUQSANCCFBPUCDEXRNIHEFMBSAIXFIYDFZAQPQAPLSWOYAZGOUNRRLWWPPJTFYNKKNTLODTYPLWIQBIYHCZVURSMJKMNODAJGAQLVXDXHVYLKHMEMOH");

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
    msg.setTimeStamp(0.05624067355257767);
    msg.setSource(42562U);
    msg.setSourceEntity(148U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(69U);
    msg.req_id = 44407U;
    msg.status = 175U;
    msg.info.assign("QXAOQCAUTTHBJOMZZPPGREAFTATZFKDSPDRYOBPGBYOSIXXWWJNKYVMQCNUKCNGOTSIEBYGHCORFPFEEKIRRVCUPCHFWMVTTAGXXYBMAAKJLJVLKRLGIFDTCXHPNZWHGMFL");

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
    msg.setTimeStamp(0.427962762871936);
    msg.setSource(39907U);
    msg.setSourceEntity(61U);
    msg.setDestination(7346U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GIXRDEORJODBCHZHGYQVQKLVOGZWKKJIMLBEIZZAYQWBEGEEIFDVFUWFFWBZCUDXWCJUPILTXJZMRGDVBONMRORHITKIJPORAUTIFALJTHFYPGOFNYNYMYDACNAKLGTRSQPMXWLCZYDMVSPAAOBNOXUFYSMMEBSVXQHSJUNVWRCKBNYKTKFVYGHWUJSCUHUTOZSPNJMBEEZMCZUTXSDHIAVKQ");
    msg.report_time = 0.5696495943998644;
    msg.medium = 81U;
    msg.lat = 0.2228270646713626;
    msg.lon = 0.3807992922067339;
    msg.depth = 0.915344251910752;
    msg.alt = 0.2239315653139483;
    msg.sog = 0.2045701033829519;
    msg.cog = 0.16110217711890507;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.9402012746045267);
    msg.setSource(748U);
    msg.setSourceEntity(101U);
    msg.setDestination(62484U);
    msg.setDestinationEntity(124U);
    msg.name.assign("AANPIZVGMHKBTFHOZLMWYCKZUFHZHZYSSCFLOGSVDTOXCOJCQPBAALSWQXECLCWYGPXJNTZWMRIPBLQNKKBMCZUTATRRQHKFDFAGNTWPRSFEBFIRISNYWJHFWJOEEFFPQQOVXTLKGBXAAGZJCBNCGYNJPENDHNXHMYHESPTVJWEDELAJRVMTVLIQPITCXDXQQVMYDLWUYZP");
    msg.report_time = 0.4544806637080506;
    msg.medium = 4U;
    msg.lat = 0.395675291332092;
    msg.lon = 0.3609868778330654;
    msg.depth = 0.3958067305419729;
    msg.alt = 0.551579251797171;
    msg.sog = 0.2348602555711482;
    msg.cog = 0.6526214168741545;

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
    msg.setTimeStamp(0.34589214036061267);
    msg.setSource(58191U);
    msg.setSourceEntity(248U);
    msg.setDestination(51903U);
    msg.setDestinationEntity(18U);
    msg.name.assign("PWILLRGGPTLOLXX");
    msg.report_time = 0.675822942007448;
    msg.medium = 86U;
    msg.lat = 0.32386575068733625;
    msg.lon = 0.1306358532366214;
    msg.depth = 0.5441336363972433;
    msg.alt = 0.19767791937367174;
    msg.sog = 0.2522975413671783;
    msg.cog = 0.7035049113921933;

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
    msg.setTimeStamp(0.5011190030026847);
    msg.setSource(29089U);
    msg.setSourceEntity(248U);
    msg.setDestination(51374U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.07023101540200194);
    msg.setSource(32246U);
    msg.setSourceEntity(40U);
    msg.setDestination(18403U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.6431392447272646);
    msg.setSource(50009U);
    msg.setSourceEntity(104U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.5489125923829304);
    msg.setSource(29836U);
    msg.setSourceEntity(157U);
    msg.setDestination(2910U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("HYFRKILJHEUCXPDVCDVXMILNEHTEEZCFXTNRDWRF");
    msg.description.assign("SPSAJNEQOJDPHUPMWFLAZFKMXVVGOXAROEDDWGHTLVTEAQBUJPMGZIVISICDNVBVEHWAAWCSQKOFQOHMICZSDUMKXFINTXCRLMNTSCKGULMNRLOIJRNUEIQCEGBYPPKRTAESSXUZWUKYTPVFMZNWTVGDVVZNCOUNRHSSQOWHLYHWKBQNRZGFRYEXYWQGDGYMLBYFQPXLUXEJWKJXAJJGHDTAMU");
    msg.vnamespace.assign("YWCFMZSPLTNVCVVTPQCAEOIYBOTIKDOZUVGUNHBFULCVDBJEDRPPGJMJGOPIKUEIXLHAWGMJQRBNDARSLLXMGFKEYVUQMSGTNFXPOQEYGZZBNJXRBHOCHMSSEJHGJELCROHMGYDSITDBSWMIKYAUWHUBSEVZYTXQGOQPI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QCJIXMBVBRKFKYOSGJFUQNHYKLWFEDSEZNKOTBBWNSGRJHSMFPJGLQBWFVCNMONWLWHAOAAULKTSKLGLRYEIWFPA");
    tmp_msg_0.value.assign("RVUTCEWVYUCMZAUWUSNQWDQNIADWDVZRNYZMQRAWCPZDTZCRKSHRV");
    tmp_msg_0.type = 150U;
    tmp_msg_0.access = 119U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FRECLMPIPFPARYINSOOHJUHETSUCASVHAMITNVTMRBWQXWPKVHITZ");
    IMC::QueryEntityState tmp_msg_1;
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
    msg.setTimeStamp(0.49913389963361876);
    msg.setSource(26896U);
    msg.setSourceEntity(54U);
    msg.setDestination(25528U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("CDELRUJMJKJXFBYAEOYKMKXNMZZSWGSKPYHAWMXWHVRLGADHVLTCIDFLKWYGDTHXONSQURVJIHHANPDZVATISOZIHYMCCFJWSEDB");
    msg.description.assign("MKITEGCMHQAOTIOJFVAHVXILZBTQYMVJTGLRBPJLWAPCSVHEFEABGZKBCZEKUDDXKEFYWZXEGPWQEYSFBJEOZQOGZSRVHODLDYJUWAKWUNTHBASZGGQCYBRSRUVUHKVPSJYMBLNCDSXFJKGJYOKCNOHPMZRLXBQZWNCPLARTWJDHILDSRLTUIGNCUQXOKXDFUTTGURTRL");
    msg.vnamespace.assign("AWJNIHAFITJXBYVGUZVEFQHEYJYIKZHIZOODDAWRYWHRSTSFOBLXNXQNPKLLURCHKLVMHHTNQTJDKSSF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CAGIIWSNNANCAQYVVOKTFSWXOEZVBKKBMTANQCOXZSUNNXUBJHCHZIVDTVPNGPIXFWAFOYGWYZMBQIGJFXRWPYCHGGFTVLTMRHDMMNKXAEJOFSFACFJFYZUXZVJZEUGZGPSBCLHEKWLUKQADWCDYIPPQEEUEJTJNDDRXTBDJPAOVXRSMDLHNMGWBDBZRURCHTREUSOOYOKSJLRKQKHMYHPVIHTMAWOMJPV");
    tmp_msg_0.value.assign("GEPSMCOIEHSHLQBYFKWSWWJZJZQQYBNKPBWPBKPUXTDHJQDRTOHVDSOGFGULWDNNRLOITSGDKJOEQLVKACXTAYCOSCTXMYCPHX");
    tmp_msg_0.type = 78U;
    tmp_msg_0.access = 174U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KGIBSKWIGAEUISOPICFNEBWKHEOPJCBVCNDYJDLRFXQQGFYACAQOVVAHOIJFIUXDARLWHDNWARBMOLEQYGBEVKVKHJSGMHYNWCRIWYTQYSHVCKWYNZPUEVJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KIFIDGFHPRMUOXNPDXOQODECTXXQFRNLMNJZAWXFUSSVSCGOIVTQGVUBWJMRCHQGKVUYOLADHORUHLJZCLVVTBFVNZVJMDBPOHECHIOTRTADVASFZYWILXNWSNJMHGZVQWAQKIUTCSBUSOAQUGGDGS");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 16866U;
    tmp_tmp_msg_1_0.custom.assign("FTTKECGYLPWVUWGHTJGVOBAEPFVBRVPNUARDEXHZRWCEABYEYCLXUGLLJWODTGPDREKXKJOUBFOKHJDYSPYHMRBLHIXMNSFNBDXHFQNECTKISYIIZRMZSKHEXJBIQADQQSLVXXLMQGBZUAZWPNPLOQALWKUWNTQHQBLWZUSCPGQHYDCEACVSFHAKOTSCRI");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TPAJBCCXHKVVIDYJSELOPCKLDVPCSCHFKTTOYDTFRLGXVSJAZIGBXP");
    tmp_msg_2.dest_man.assign("COLZXCSMHDDPHEJAEFDRAXBSAYQKSNDFSIDMYALGRZTETLZYXVMENHZJSWWFSBGGIKVSVEGBVULZRUHJNDUHOYCTIDVJPLBLZSOAPHLVJWVLQEAJUBHASNBDGWRQPFDRUKCTCQPOPRXQCGZXOIZPBN");
    tmp_msg_2.conditions.assign("PFYROIAQNGFQNGWVVTTWQKDZKAHJWKDVASL");
    IMC::UsblFix tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.target = 39153U;
    tmp_tmp_msg_2_0.lat = 0.27475063617564055;
    tmp_tmp_msg_2_0.lon = 0.40874055913793994;
    tmp_tmp_msg_2_0.z_units = 175U;
    tmp_tmp_msg_2_0.z = 0.23892290943986116;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.2229406747504723);
    msg.setSource(5893U);
    msg.setSourceEntity(56U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("KOTIJTFEMLMVHOGEBWEFWNVHXKASOFYDIKHQVZQZDUYITZKREYSMUGNBCDVBICWZRYHLDBSBVSXVGW");
    msg.description.assign("QFWIILVOUJSKTDYYZSZMHEDJEVKHTVGSOOYNYXTSTKBWMIQWJVGRNIKZVODICNMFRRAGOHLEPWCUAIATPPVMSIWAZXWUSRIXBEYJTNNBGTCMAKLDRBMUPPYEJTFBZDBRDKVHMNLQZAKB");
    msg.vnamespace.assign("VBGTLDCFZFTYPMQKXDZFMNRQNOQBAIRZYYEJRMISSQJTZYAKVFVDCQIETAVBUPXUHGICZKRUEVWWTTHPJBNRHVAVENGXACDPOVEHIUIOWQSHCYCLLKBZXGOGEMAQFREGXANXULS");
    msg.start_man_id.assign("TACZPGQPTNLOFCLIHGWZYSXDWYLVLKXOVCKFRYQZFMQUUOIZYINWNFNHBKJKODGCGOXRZRZUXDQYASOSUBGXDIEJCEEIPLIVKTRGNZPJQHEUBWBAIAZBEKWVJBWKSJIH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PPXWYVLQAOMNXKDWTHCZANDXHNKHQVDPW");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 24339U;
    tmp_tmp_msg_0_0.lat = 0.20286135387147253;
    tmp_tmp_msg_0_0.lon = 0.26587439990845996;
    tmp_tmp_msg_0_0.z = 0.023254542838453185;
    tmp_tmp_msg_0_0.z_units = 26U;
    tmp_tmp_msg_0_0.speed = 0.43134453798253924;
    tmp_tmp_msg_0_0.speed_units = 38U;
    tmp_tmp_msg_0_0.syringe0 = 16U;
    tmp_tmp_msg_0_0.syringe1 = 250U;
    tmp_tmp_msg_0_0.syringe2 = 166U;
    tmp_tmp_msg_0_0.custom.assign("AKTAXHQPEZEFORLNT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CommsRelay tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.8328918358349654;
    tmp_tmp_msg_0_1.lon = 0.9354322542042701;
    tmp_tmp_msg_0_1.speed = 0.8339511755477859;
    tmp_tmp_msg_0_1.speed_units = 174U;
    tmp_tmp_msg_0_1.duration = 47392U;
    tmp_tmp_msg_0_1.sys_a = 52421U;
    tmp_tmp_msg_0_1.sys_b = 31639U;
    tmp_tmp_msg_0_1.move_threshold = 0.9310809515061801;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Depth tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.19420852689174373;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("FMBCRDWUBEINEAZRQBIQLLGBUOFIUSCNFJGTENJMFELWEWFQJHEJEXSEVFSTIVHFLTSJSULHZMQDQUVWROONAIDMGKGYYZGXEHKWDMJVLONPLVGSGALPNPCPOURXRPYDNVFRKAPZBBDXEFGKZCPHKIB");
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
    msg.setTimeStamp(0.6039429305949201);
    msg.setSource(25227U);
    msg.setSourceEntity(180U);
    msg.setDestination(13331U);
    msg.setDestinationEntity(230U);
    msg.maneuver_id.assign("NTJNEEFVMDKWZOSOSLGLVSRCCEJJKHEIHIEXOBM");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("UTRLZLWASSESRGF");
    msg.data.set(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 229U;
    tmp_msg_1.x = 0.2550951877324642;
    tmp_msg_1.y = 0.9574553687397495;
    tmp_msg_1.z = 0.7177493433808013;
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
    msg.setTimeStamp(0.14800070307449775);
    msg.setSource(63641U);
    msg.setSourceEntity(247U);
    msg.setDestination(44109U);
    msg.setDestinationEntity(88U);
    msg.maneuver_id.assign("BBQSVULJTPLPXZJWOWSMSQZHDCIABMTSUHAPHYCBDMIVYRHUTCZALAKARDEKXWTCXSUKRQGLSSFXVGILVFWOKGJHKIVNLMLBINZOMZTDFVHQUYRKTFFEJFYSENXJEDWKAKGZYVBBPCJIZRVNDKJQTXMGZPMBXFGEXCGJYEELYUWAQFCFEYCAGUPQJQFQRZDSNUYAOHUVWCRNXNSIUMKNORVBNC");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("MGLIQGAAKUWPBWCXHRHZFJTQPYVVCYHHOYNBHERUKJFKKRGTXGARCITIMVCNRIWOBSRCOXEQMSQITHUQWUCMTYYDCZPOONINWZFXLCHOSDDLLPEDXEOOSMCYNIJSUEMWMJBSQDZLWXUBLEVUAKXAVKJZHBXMT");
    tmp_msg_0.max_speed = 0.6936565190281986;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.lat = 0.2549748150749188;
    tmp_msg_0.lon = 0.29771346097676654;
    tmp_msg_0.z = 0.0015474453838710822;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.custom.assign("UHJMLOPVSRUGKIHMKRIDOZZVIPGNWLFDDMPSAKSFVBKTJZACAPRFJGOXWTAYCSOFMBQNUFYSOZDLVQJUSINLZKXMGFYMDRCHHKZYGESXODTRVDJKMTOCQHPQGQBIHERMKFPLGWRYNSAIORAEPEYHACEAUWDUENFXCTPUJWWORVYJMEEHWTYBEBLIVDWRQTTZAWFQPBXNNUFXZ");
    msg.data.set(tmp_msg_0);
    IMC::Depth tmp_msg_1;
    tmp_msg_1.value = 0.9728264140798029;
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
    msg.setTimeStamp(0.6426786182101107);
    msg.setSource(26231U);
    msg.setSourceEntity(253U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(52U);
    msg.maneuver_id.assign("CNRFMYXFOZJLNXRQ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 6983U;
    tmp_msg_0.lat = 0.9195466863941951;
    tmp_msg_0.lon = 0.24294882013113606;
    tmp_msg_0.z = 0.9470920979018923;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.speed = 0.18954971625417816;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.custom.assign("WYDPTSTNTNMKPIDMUOESSFQOQPVRFVXDSBVJGKRZSGAMBJKTPMHTNGRYPHEWUWWKCUMJWQLAFIDDHCAXLGQKL");
    msg.data.set(tmp_msg_0);
    IMC::GroupStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.7875722327062644;
    tmp_msg_1.y = 0.684274485359459;
    tmp_msg_1.z = 0.0482598603600467;
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
    msg.setTimeStamp(0.8668706720727897);
    msg.setSource(28518U);
    msg.setSourceEntity(18U);
    msg.setDestination(59340U);
    msg.setDestinationEntity(12U);
    msg.source_man.assign("GRVJSZIOEOFQWXWFSNDHQHRFCBCTWDOQECTIYYQINDNVABLQZSFGIJKGDQOUCSUTURVVZVFDWIWXJLCZXSHAOTYLMWYLNVBHOBXWQPPRNABICUYXXUEYMMHCBFJTFKTMZTTRPLGOMOHLCJZPIGAGKQAKHALBGEFBEEVOFAMMZBGKZTXJFBPVSOAUKVKRDESHKYYZYRWMRQPPZKSJEUXKIAGSSUMGNDWQDJUIMJXNRLNWINPHEVPJLLNCP");
    msg.dest_man.assign("MSGIKEGZISPAOTZUWRTUKLJVBYRKOFADLHLBMSPCWGPGKLTRYBZYOHTVFEYQJROONKNNUUAGCBLUAICSRUGMCXZEJUXWVYQPLRWZBCTBXDXHQESPTIAEZKFTLDLRSCYADXHIVPCWXQISEFWNPFMWMYJICZDKLPRFSXIZJGVFKXWVMAHVG");
    msg.conditions.assign("WHPZYJBZZWXPDDJRWOEXHCLTFQIFSQUFVERHTDBXGQDKUFUXNZKQPSAWUCRYLZGFVYGKBSMDMQOZTKLQYVDEWBWPIEHYXLBHDEJOIHLZNZXVKCRPBYOCBDACFQMXIOCOPSKJBFJVASMNNMAIMVJWGKMVSCXYOEPSCQMJHLWAJOUHLAEDENCQHBGWRIAFNNUSFPGKGPUEZSNIRKYTORSTDLMULXVYTIXUFAITGCYAUZJRHIO");

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
    msg.setTimeStamp(0.0552938228532901);
    msg.setSource(10270U);
    msg.setSourceEntity(254U);
    msg.setDestination(41421U);
    msg.setDestinationEntity(234U);
    msg.source_man.assign("CBDQXIMVUOZMWNFGQUWIHEDWUTEABSFIYKFJKNUYKAZRGARCYLMVKGPDV");
    msg.dest_man.assign("BCKLFEKDJEFYTVYJCAUHDSKUGXLJQMUJRJIUAHSQLRZMNFV");
    msg.conditions.assign("ACSBACAQABKNTOMAHZHNZGNYDFTOJYVXIRQMKOZECOCGHTRLCPBDUXRJVWRPHTHZUCVHSZRVKVMKJIGFLEREKWSMCEFFZDIOFWZXKGBMTRMWOLEKISBNVMGLEBPQJVHYQEJJYZBTODDGUYOHFYWXY");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 56847U;
    tmp_msg_0.sys.assign("MFNBDHSBGVTQAPZYFTMVGZWFMLKWSNXUDOMREJRIIOVEQSGBEJPUPAHLXZDQYRONVPZUCHLNUXUKFVSYYFXYFFSIDKRAPWMMOJCYODQUWLZXABXHAZLQQGOFTPAFVS");
    tmp_msg_0.value = 0.7567467133547097;
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
    msg.setTimeStamp(0.5548048970135018);
    msg.setSource(36837U);
    msg.setSourceEntity(131U);
    msg.setDestination(23433U);
    msg.setDestinationEntity(140U);
    msg.source_man.assign("XEQBFQSWRWXPXTFGGUANLACEADLVZZHPDWSLZKEMJJBSKVFJ");
    msg.dest_man.assign("NLNNHNULWBFDXPTGDRJROBQOLXVIHPUSXQMEBKAJGPJRQQUQVCEEQHJREFNDFINR");
    msg.conditions.assign("TZNZGTJWXVROLDZWYLLRLCLBQZCHWEQVEXDRFYLDJPENJANFHYWOYPZGXCQHXVL");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.014927841992112056;
    tmp_msg_0.x = 0.7762968200750835;
    tmp_msg_0.y = 0.05144908174885243;
    tmp_msg_0.z = 0.7830934352384431;
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
    msg.setTimeStamp(0.852000541292231);
    msg.setSource(50003U);
    msg.setSourceEntity(8U);
    msg.setDestination(33603U);
    msg.setDestinationEntity(5U);
    msg.command = 118U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QGWZVICHUGAJCZKSIHHTRGVPYFOMHNLYXFTLJNORSXBNMEGKUADXASGEJCTXBE");
    tmp_msg_0.description.assign("KJMLJVQCMSLHOZUBJAGWFYZXXZZHWNNYONNDQZNOUPFVKSJYSBKAELEBGJAVWTDFFFXSDTVTOMDUZNBJTKSERQAKMRIRGEECRAQIVIPWDGCIHEUPLGNUVWHZOUVWXKQOBFSTTATMPAGWHWAKVZDGUCHKIJBHOMTSYFMDXGLNEVEBXLUIIXSWMIRORDHFTYHNYNXQPRLYCBEOFJSVARILBPGYPCTIQQSUJJWZQXRLRCQLYAYCHZKECBUFPKOXDG");
    tmp_msg_0.vnamespace.assign("ZLNHTZUPUQPMCWKONVLZXCUCBKZHTETRTIVLIYEDUBVKGFVGTZYOSVRABEMSWESYRM");
    tmp_msg_0.start_man_id.assign("DWIFKSCXGVUSTQLKWATVLXMKPBECIRHIAQQIBTZMDMHAEGJXOQSHSVJUFSXYHNALMZIVDAWBIZROXQCGNIKCAAKQRVYBEIQOFZYBOWYFVVMWALZNSOTEDLTTFXUXPRYPHKXTIRWFZTKQCOYFPGPUQOLCAPRGMWFEVUHUNCTDONZWDKRROJBHUGMJMZYPRXSYLQBNNSNHVIGDGBRSZBJVCTPKZM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DBTBEULYHKUJXMYTSJTWHXRDNPLRCGXVAUIJCZTSVOFKBSSQVWAESCGSUFDOMGUOFDWKQLQFELAEPHOXWXUFRVKYZMADAIZOOUGFEQKYWF");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8864255761854543;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8824113019546526;
    tmp_tmp_tmp_msg_0_0_0.z = 0.06788091910760796;
    tmp_tmp_tmp_msg_0_0_0.z_units = 184U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7241319922612355;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 135U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LKYWJFXCCOMJPPDIURIBAITGAFKHOTBXWHZEVYERKVMSPMWGVGZCXRNFXVKDZDMTGTLIHBUXXEYJNQWGCOIJHEOFUZIEGCXXMOPGIFHQKKYNJKEJJOXMHDBSZTQUIUMUWRZQPO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AutopilotMode tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.autonomy = 124U;
    tmp_tmp_msg_0_1.mode.assign("GHFJTERJRHKAMTJOJSCIZUKZKCWUBYLKAYSBEIXUZBGFIHCLIDURBLWEANNQLYRUYCHYDXVDFISPIJVXVXUIVJERICTDMYAKYQADQGMAAKOVCQDHZWEPPNPDXDAGKUOGOEFGRHPQOWZSJZXWZPMWXITSSRMCTNNFDMGAEINBVOHNOCJZJC");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PH tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.722574507094935;
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
    msg.setTimeStamp(0.26994245761944513);
    msg.setSource(32390U);
    msg.setSourceEntity(196U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(186U);
    msg.command = 137U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XODAVCMFGHIJFJNGJVHDXXULXTGQVCCPZBVWLODMDLOKJKDMCUDVYYPPNBSSXMOKHYOZWKWKAGNCNQIPBQYUGOVGKRGTGHIXEGBMYCWLZLARRLXSDAZHOWNBK");
    tmp_msg_0.description.assign("YMKPCJRDZIOXRDSWKUSSQKIFGMJHPCTJTLRCREAPLMJMNZXQBBCLHKDIWNMFYHUCFJYQNUAGNXISNOKESZHJDDDNTHLKDZLTERAHFVYHMYUKHNFGFFUGVWSARIEKXLPJXULCQOYZQMYLWEWXUSRBQMMOGTEDVMIQZVGGOBDQBCXOTHNVBXUFCFAPOVCHXAWZPJJBGRSZUAOIW");
    tmp_msg_0.vnamespace.assign("JYILLJPUKNUBUFMAIPVGORLQGYBLDFWDOHXRBLLSTAINQQATVYQVRSNTCZWXGKHYDDRINMHVTAMSDMJUFSCWLGMJYWOBZOEONQWPAQDCRBWBKEXZYYTFMX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UKDNGULXRBBSKVXAQDFKAYURAHGREDTZKOXYPXWDSJHFHZQMMJHNSDCAFLNGLNMFJRUVZQQHWSBWUVFBEILFJQRPPLIEQLBEMAUBDWONXOCOGTPKCPVWUZREEIZCCIJGHIMGVGHKZPHSJGBKQREPHIVSVJTWLVATKTEMFSYMCFZUPDCCWQIKRDDIBZ");
    tmp_tmp_msg_0_0.value.assign("CFKAFBSEVCSSQSOKYOPPRJRKQATIXBMKTWAELKPGCIPNEMB");
    tmp_tmp_msg_0_0.type = 178U;
    tmp_tmp_msg_0_0.access = 219U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RMYXZKUDACBEWVECMSGHTJFPHSAXPOAUMFRBFSNLXBHIIVMLIYBDZUAZRKTGJBYLEOFVKLFHOPHNTARDQIANUTDOSZGYLMNPCQNJEOKGROQYGDIMGSSWMPYEIWDUKYWKJMQZVYRHNILPUBXJPVGOCQIIKJXFTKBSHFOZDWBLNNYQYCOCWLSGQSXCPDJRUQITUC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UQTEZYYYAUANZMBDKDCRGGQJAQWPXHHVZTXJEKQZRTYKMKYWGBHZERXWDJDJZHPIYQODXKZ");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.3401712387293935;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9836882555291637;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.04168306576411018;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 247U;
    tmp_tmp_tmp_msg_0_1_0.limits = 5U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.22840609146154844;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.8765797170598024;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.46973629442143894;
    tmp_tmp_tmp_msg_0_1_0.controller.assign("DUPSILMGGQDRUUPKQAWTVEMDJIPADNTIWCNWOGAQOOHPXDVMLDCWVRIKWFVLANNHROBFNQOXPEAKJJHPRBXCVBTUJBCWULEIYNSBQPVBVMSJNTUZLEGRTSILHSWYUUMAZXXHYFTTSFGCFAIECVUYOQXLEGXMGMZAIPNFJVJTWHZZFRHF");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OKTJOVFSQMNATUKROBVJTARHCCPKIMBLFNVHUNXVEHROSWZCJRAPINTWQZBAFZXIJLDQXSDSRKCOEJPKSVFHWRHJFRIHCIZMNTLNYVEGAHDTG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteActions tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.actions.assign("DNWZOYLOINMZPZSYFZYKLFBAWESLPAWUJUPJLPFFCHECAZUQMPSACDTGISSOTJSQRHMXZQGRXHJRSCBTWILGNEQYKQUGVLYTEZDBAIOOVBCNUIKVYZKWFYLATRKJQMMYPVCEOAHFBHOJBXQMNFDVNIENHUKYDGPWXUMMJRLVUGFR");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.action = 228U;
    tmp_tmp_tmp_msg_0_1_2.lon_gain = 0.9624548107129334;
    tmp_tmp_tmp_msg_0_1_2.lat_gain = 0.30598281223773804;
    tmp_tmp_tmp_msg_0_1_2.bond_thick = 0.1261155394868606;
    tmp_tmp_tmp_msg_0_1_2.lead_gain = 0.47920468124717075;
    tmp_tmp_tmp_msg_0_1_2.deconfl_gain = 0.62402788900854;
    tmp_tmp_tmp_msg_0_1_2.accel_switch_gain = 0.8435932989702857;
    tmp_tmp_tmp_msg_0_1_2.safe_dist = 0.14255438892569483;
    tmp_tmp_tmp_msg_0_1_2.deconflict_offset = 0.8942627284039811;
    tmp_tmp_tmp_msg_0_1_2.accel_safe_margin = 0.5500506065919681;
    tmp_tmp_tmp_msg_0_1_2.accel_lim_x = 0.44613360681469605;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::TotalMagIntensity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.2504817033414146;
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
    msg.setTimeStamp(0.023756380214697836);
    msg.setSource(14283U);
    msg.setSourceEntity(104U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(107U);
    msg.command = 23U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LJSDDUHENTJSBLJJRQWOVPZLNJNYMNPKXKLQXGUZOFPNMAXJRTLIIANHBXVDWPWDMIDCRCIICJ");
    tmp_msg_0.description.assign("VSEOCBPXYRKHBEMKKATMJFGLYDNCTHGTTQDZILBPHRSKEKXXYSJNL");
    tmp_msg_0.vnamespace.assign("IEKKOGTHNPTEJFLU");
    tmp_msg_0.start_man_id.assign("ZWSLOQRPSGDBUHABUVGKRXDDYRYNZUWMMXMEVICTPQKLWOFHNRHRLVIQUCCCYBJERHXVHPJEEWXQGZDJGZCTBAJFAQKNILTEHDRYZOAXEMDQFTHVGDPDSZOEMTOAWFLYGJKHVABNXKHPQPMMJSXUMBTMSAVKBXJAYKIGAWBPFGNNDOJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BBLRVQCADOQQSFMOVJTYINPERKWFVDGJBGEYAXPCKKAWRROIXWEHETAKWXSWZEBSHTJOURLCTOSCNQHSIOGXPYPCFMZTTJOVWJJENVGXHIDOYASHDDTNOKGRHAYKNGESZDCLWUPMZL");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.arrival_time = 0.9169062098632592;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.1442215617499253;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8606977080839711;
    tmp_tmp_tmp_msg_0_0_0.z = 0.18686187654395925;
    tmp_tmp_tmp_msg_0_0_0.z_units = 11U;
    tmp_tmp_tmp_msg_0_0_0.travel_z = 0.15745148986333346;
    tmp_tmp_tmp_msg_0_0_0.travel_z_units = 191U;
    tmp_tmp_tmp_msg_0_0_0.delayed = 141U;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::WaterVelocity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.validity = 23U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.15947612501420427;
    tmp_tmp_tmp_msg_0_0_1.y = 0.40389943523533334;
    tmp_tmp_tmp_msg_0_0_1.z = 0.8928990533195363;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SimulatedState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.26325183062457347;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.7773774102380369;
    tmp_tmp_tmp_msg_0_0_2.height = 0.08414677121711456;
    tmp_tmp_tmp_msg_0_0_2.x = 0.10619978366159322;
    tmp_tmp_tmp_msg_0_0_2.y = 0.7570459977329824;
    tmp_tmp_tmp_msg_0_0_2.z = 0.5077415155808952;
    tmp_tmp_tmp_msg_0_0_2.phi = 0.6706088896505299;
    tmp_tmp_tmp_msg_0_0_2.theta = 0.6454764107064136;
    tmp_tmp_tmp_msg_0_0_2.psi = 0.5308540966531557;
    tmp_tmp_tmp_msg_0_0_2.u = 0.24456826206176396;
    tmp_tmp_tmp_msg_0_0_2.v = 0.9004432888724304;
    tmp_tmp_tmp_msg_0_0_2.w = 0.8953625468350968;
    tmp_tmp_tmp_msg_0_0_2.p = 0.6936546790083464;
    tmp_tmp_tmp_msg_0_0_2.q = 0.1795739840253896;
    tmp_tmp_tmp_msg_0_0_2.r = 0.7504358063811741;
    tmp_tmp_tmp_msg_0_0_2.svx = 0.9564293004076576;
    tmp_tmp_tmp_msg_0_0_2.svy = 0.054908559928377065;
    tmp_tmp_tmp_msg_0_0_2.svz = 0.7907992684151058;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6160045964055162);
    msg.setSource(54812U);
    msg.setSourceEntity(194U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(100U);
    msg.state = 19U;
    msg.plan_id.assign("JBAJZEYORVN");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.38469642058482056);
    msg.setSource(32841U);
    msg.setSourceEntity(249U);
    msg.setDestination(55157U);
    msg.setDestinationEntity(81U);
    msg.state = 159U;
    msg.plan_id.assign("CTPWWSZOFXNWFZMSSZXEPDSLQBVRYXUVHOYTJDJBPTDGUNYAVXAPHBGFGFITRMINFVPKLPZKPMFDEXWEVCGAUKKT");
    msg.comm_level = 227U;

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
    msg.setTimeStamp(0.7848312577659018);
    msg.setSource(25653U);
    msg.setSourceEntity(50U);
    msg.setDestination(5458U);
    msg.setDestinationEntity(234U);
    msg.state = 167U;
    msg.plan_id.assign("BRBIEXDDWMDNCHXCIEJNLQMLIKAVVUYLNAGCJTHFRZDZWG");
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
    msg.setTimeStamp(0.20109825184910102);
    msg.setSource(12217U);
    msg.setSourceEntity(24U);
    msg.setDestination(17152U);
    msg.setDestinationEntity(104U);
    msg.type = 24U;
    msg.op = 147U;
    msg.request_id = 64956U;
    msg.plan_id.assign("SFKGQRCZOOLSMPICHAONNFPECIQANRMUJKXLRPMDFKXUUFBPVBUWOQTOSWFYBGKYFIXPRZEHZWRZLTAWNMLINHNKUGCTBBGDYRVSHFHTVIUCALGDHEUVFOLXLTATM");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.7145023582622093;
    tmp_msg_0.reason = 68U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VSZPTLGVVHODEPFFKZXJIIYZCHQRGQUFTUUDHGBNSITLDJFSEVJPYOXQIAYZNACLYSQCKQO");

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
    msg.setTimeStamp(0.016915744696696655);
    msg.setSource(53109U);
    msg.setSourceEntity(145U);
    msg.setDestination(14735U);
    msg.setDestinationEntity(153U);
    msg.type = 159U;
    msg.op = 75U;
    msg.request_id = 25278U;
    msg.plan_id.assign("UAQMZITNNWXBRXUAYCTHVOGKLXCNHWVYDPXRYNFJKPLXUKFTHSJYQGUEVUTFBBFNIBMTNQLZEVKSMQALBCJODEWBRVZLKSVOQF");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3793373601U;
    tmp_msg_0.messages.assign("MNRZRXDQZCLHRDOAWGJLFGVZTMZMSHTFPTXZNFPDXQYVPJCHYGWFCNVSWZODJEMYLTKSMPQWHSJEFEBMYFIHSCAJEKDDZDIEDBSFOIRRJVGLGYOTYPQRGPPGHIXXOBVNOLNLISBFWKUOHMKUHYZGAFPPBLTEGCQVHQUBBAKNWAUCOCXVMOIVKFQRK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BBSLRHBNYIYYGGZHQBRPKXMJHNEESUCLXLECXWCCDXROYWSQGLIUKIPBPUTZSOQZNRTHFLYQDCJFONWDPIJUYEEFJAVMLMTOVDBEKUAMJGDFVGOYSWDTMWKPAJGYRNLEMLZMZLPDOIKUQXOFEKZMLFXR");

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
    msg.setTimeStamp(0.08353338014391765);
    msg.setSource(21711U);
    msg.setSourceEntity(254U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(197U);
    msg.type = 38U;
    msg.op = 180U;
    msg.request_id = 48763U;
    msg.plan_id.assign("BATTYXPTSWBQAGXEVNRCIFZMSDDWXHJASELHTSWFROUSWVDJEFOYHDAVFXAVMOLYQJZMLIGSITRBZDPDKZDTNVEKNMLGBFJZUXLCZHYYKFDRGQNALIUQAHLBPVIHENJERBTJWDWWZVJFBJHXWHUTPUKXOGBMNKJWOIGBFRXBNQYRHRCIQYSPXGKSCOQLOCPQNYTLNPOUVHIMCRPCYGPKIXSCICZMJUGNUEFMZFROGQOKUWK");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.9495904652788629;
    tmp_msg_0.roll = 10014U;
    tmp_msg_0.pitch = 10254U;
    tmp_msg_0.yaw = 61594U;
    tmp_msg_0.speed = 28750;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GLGMZOQHIVVBKKULNNTKAIEKRXRBDCNPWQRMYGENCXBSLGCVDAFJYWUDRYEKPEQLNSMSRDLZTXSVYMBLNJFQALIKNPRNORFUXKYOHZSIAAGXFYSPMKWMTZDSHCXWZUBVQGGXZFEGPMLXFTRVU");

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
    msg.setTimeStamp(0.31934392531706135);
    msg.setSource(43837U);
    msg.setSourceEntity(97U);
    msg.setDestination(54771U);
    msg.setDestinationEntity(0U);
    msg.plan_count = 55769U;
    msg.plan_size = 2717176466U;
    msg.change_time = 0.48263222375866144;
    msg.change_sid = 22624U;
    msg.change_sname.assign("AJNGQTZWWIDFOQIYIOPXWCHJWQJTI");
    const char tmp_msg_0[] = {26, -1, -119, 76, 4, 92, -44, -46, 5, -35, 37, -22, 51, -59, 45, -58, -104, 122, 17, -84, 29, -128, 53, -32, -88, 52, 82, -93, 93, -92, -25, -108, 122, -55, -127, -125, 109, 81, 102, 77, -60, 77, -34, -9, -52, -69, 104, 45, -55, -34, 114, -116, 82, -20, -3, -9, -93, -128, 109, 43, 33, -106, -123, 93, -14, 81, -11, -41, 17, 1, -14, -91, -119, 78, -68, -30, -90, -43, -51, -121, 104, -6, -2, 118, 26, 108, -64, -85, -81, -98, 105, 108, 68, -94, 111, 22, 43, -60, 48, 113, -22, 69, 56, -32, -118, -18, 49, -88, -13, 26, -90, 16, -110, 58, -75, -106, -25, 55, 124, -111, 126, -6, 31, 91, -111, 64, 112, -53, -27, 76, -7, -75, 97, -121, 114, -35, -82, 78, -15, 0, -60, 124, 65, 86, 116, -102, -97, -53, -82, -124, -33, -108, 82, 43, -42, 4, 20, 7, 67, -102, 105, -79, 28, -11, 105, 115, 88, 99, 39, -71, -64, -84, 3, 111, -64, -85, -117, 12, -116, 47, -61, 18, -100, 68, -120, 102, -27, 62, -118, -117, -47, 35, 77, 36, -17, 33, 31, 73, -70, 111, 13, 69, -6, -59, -68, 37, 111, -88, 70, 38, 84, -112, 125, 51, 116, -59, -31, 67, -45, 62, 33, 31, -31, -59, -41, 39};
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
    msg.setTimeStamp(0.37672611111775256);
    msg.setSource(34877U);
    msg.setSourceEntity(238U);
    msg.setDestination(43551U);
    msg.setDestinationEntity(238U);
    msg.plan_count = 31319U;
    msg.plan_size = 4189605921U;
    msg.change_time = 0.5990859398820341;
    msg.change_sid = 54371U;
    msg.change_sname.assign("NPWFDLNHSAYWFSTTZG");
    const char tmp_msg_0[] = {-87, -116, -50, 76, 9, 75, 46, -83, 33, -96, 84, 101, -14, 21, 125, -94, -70, 77, -45};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZOFRGXLLVWOWKYZAFJFZOIJGDZAEBIVALLFKIUJXYCDFAIHGMKRXCAUXBKUJWRUVSGOUQYAJAMEFXNQSSFWHDXUFNKHYUCSGYPGINTKQGMMYBDXENGWPDHVJZKLEPJWSROVQNDCNNASBMJBLIMCZOHCWPMCSBKWYVJJXTHSRPPBTEYTIETDVBMNIZQZLFL");
    tmp_msg_1.plan_size = 50708U;
    tmp_msg_1.change_time = 0.5033900639760649;
    tmp_msg_1.change_sid = 41371U;
    tmp_msg_1.change_sname.assign("EEVSKBPLCIGUJYWTJCHUZQSNKKTZMEHBNXNPTNKLUATOYGHUDQONDPGEIPELOXAJYIPYYGMIKUXKILHNCQUFEFWOZOSGUAMKTFZFZRUXVFJKATVOFQ");
    const char tmp_tmp_msg_1_0[] = {114, -39, -93, -65, -52, -18, -123, -124, -67, 64, -38, 100, 118, 42, 80, -124, -55, -119, -116, -83, 90, 1, 122, 57, -10, 99, -25, 59, -40, -75, 61, -75, 2, -63, 123, -107, -49, 9, 125, -19, -123, -67, 29, -62, -48, -32, -70, 105, -79, 60, 17, -41, 9, 94, -5, 36, 80, 59, 87, 34, 95, 100, 30, 28, 100, -8, 17, -83, 47, -29, -17, 59, -102, -89, 57, -20, -63, 105, -110, 30, 86, 31, -60, -119, 51, -55, -27, -111, 64, -39, -61, -83, -22, -69, 115, 16, -109, 43, 74, -59, 121, 75, -123, 117, -87, 53, 107, -118, 111, -47, 2, 51, 78, 18, -52, -103, 58, -39, 106, -58, -75, -58, -36, -106, -72, -89, 17, -103, 58, 32, -5, -82, 105, 59, -48, 73, -80, 32, -102, -47, 51, -88, -75, 92, 108, 64, -103, -111, -119, -37, 109, -55, 58, 41, -38, -53, -61, 13, 43, 92, 28, -52, 65, -14, -99, 90, -43, -58, -58, 23, 15, -42, 25, 116, 62, 107, 67, -27, 56, -123, 101, -121, -111, 41, -16, 101, -105, 102, -94, 83, 22, -28, 24, -102};
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
    msg.setTimeStamp(0.30624256770368374);
    msg.setSource(14487U);
    msg.setSourceEntity(48U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(174U);
    msg.plan_count = 18000U;
    msg.plan_size = 800094198U;
    msg.change_time = 0.5392689165479002;
    msg.change_sid = 9357U;
    msg.change_sname.assign("KWBDGSLCLGUKXIWBQJWUJXNMHOPWHLBRVZCXMNPTQZIRMQHEKDOJXQDDVELBDWFZHFTTYOFAFTSUELJPUYUOBUSSGLKZQNEWWCTLJBDZIVZGVHDIARJVRZWKTVVNCAHFMAQDAGCUIQTXGLMOSJSYCJFFPRXPJYXEWCKEYMBBUIXV");
    const char tmp_msg_0[] = {30, -44, 19, 89, -56, -103, 99, 98, -15, 2, 110, 105, 50, -128, -68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FPRUENHBGZWZIFJRRNKCBCTSUIAGZTRTYWMDHVWNPCDNZLWDSGLJCCSABZKDYWMUTEJCKMNRUJBQYP");
    tmp_msg_1.plan_size = 38076U;
    tmp_msg_1.change_time = 0.6956631201014594;
    tmp_msg_1.change_sid = 6624U;
    tmp_msg_1.change_sname.assign("FIRXXMDCRRHLCMUB");
    const char tmp_tmp_msg_1_0[] = {55, 60, 51, 7, 121, -78, 106, 23, 32, 76, -94, 49, -39, -92, -108, -89, -87, -128, 77, 7, -114, 92, 11, 48, 59, 42, 55, -125, -113, -39, -117, -72, -78, -123, 45, -39, -128, 16, 122, -107, 68, -92, 97, -36, 112, 6, 89, -8, 72, 50, 95, 68, 68, 57, 95, -3, 46};
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
    msg.setTimeStamp(0.012882407476903612);
    msg.setSource(51516U);
    msg.setSourceEntity(11U);
    msg.setDestination(46143U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("ARZLAMVNJMOGSZZLGCHBNIGSYCPQPZWJCXBRWVNLBDJMASTBHJUOGBYVFCXVEITHRMJFEVPDBOAPPHXDGWWANOVTNRXQGJXHXOFNHDRSTCFZEYBUNCICDFFGZDUTGLZXMXVELKUQUPEGAQIJQEDKINOBUOUVKIKXYTCSRYICFLZURWLAYOWVDKIVBPAKIEWIRAMSLMFJS");
    msg.plan_size = 18948U;
    msg.change_time = 0.8838727653563455;
    msg.change_sid = 27591U;
    msg.change_sname.assign("YGMBNWHXYDTLZGXCRMARJNVZJWKFLDIKPFVPNPNFFAWSBESVPHQIVYEINCRXHGIMQD");
    const char tmp_msg_0[] = {3, 38, -52, -65, 24, 11, 75, -79, -65, 99, 101, -17, 67, -63, -113, -89, -90, -85, 76, -42, -102, -60, 13, 79, 62, -126, 80, -23, -92, -2, -44, -90, -8, 56, 10, 70, 116, -5, 42, -68, 89, 52, 35, -13, -54, 3, 26, -116, -114, 68, 3, 52, 17, 48, 67, -29, 59, 106, 66, -65, 106, 87, 51, 88, -113, -95, -104, -128, 15, 57, -17, 103, 32, -52, -7, 20, 109, 85, 88, 3, -74, -77, -122, 84, 49, -16, 90, -9, -58, 32, -115, -78, -108};
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
    msg.setTimeStamp(0.791381135498038);
    msg.setSource(12995U);
    msg.setSourceEntity(185U);
    msg.setDestination(45842U);
    msg.setDestinationEntity(143U);
    msg.plan_id.assign("LOBTAJYYQTJUZMSRXYESADYRNELHXSHEFZEKXKVFMKRGJIGZWCXAGIIABDAMFRSUBIQRYJXCXZPBMXEPTAVACDTLQFDL");
    msg.plan_size = 36432U;
    msg.change_time = 0.37332547968487917;
    msg.change_sid = 28149U;
    msg.change_sname.assign("BCWPOGIEWKIRXHBMZCNGVZHUHSOGWQQFCVSL");
    const char tmp_msg_0[] = {-63, -10, -107, -61, -106, 0, 72, -122, 47, 82, 106, -4, 57, 91, 113, 15, 126, -32, -84, 100, 61, -73, -20, 61, 72, -95, 16, 126, -49, 14, 97, -9, 94, 77, -36, -20, -83, 71, -28, -83, 2, 92, -46, -16, 42, 19, -56, 4, 9, -48, -30, -85, 9, 81, -5, 89, 35, 40, -128, 69, 71, -81, 116, 113, 42, -10, 17, 47, 57, 97, -127, 48, 119, -127, -34, 126, -80, 73, -85, -42, 52, 89, -108, 0, 22, -54, 122, 64, -94, 106, 7, -18, -123, 56, 72, 94, 61, -119, 112, 28, 43, -85, -42, 56, 3, -107, -73, 17, 19, 73, -89, -79, -10, -125, 9, -20, -109, -76, 66, -46, -116, 64, -30, -79, 70, 79, -118, -49, 100, 64, -92, 70, 18, 123, -113, 79, 60, -61, -20, -86, -58, -3, 88, -103, -8, 99, 37, 102, 48, -94, 61, 31, 14, 112, -124, -127, 56, -54, -46, 105, 75, 70, -41, 40, 99, 5, -87, 1, -118, 83, 4, -78, -79, 1};
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
    msg.setTimeStamp(0.1814305832614621);
    msg.setSource(28403U);
    msg.setSourceEntity(204U);
    msg.setDestination(26194U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("BXOYGDAJQVWGJWPXNIXZQPCYODSRVKPKHYNPUPQJRXUNKLCLQJXJMBNNOHGSYEHKUKPSTZDTSLHZMGNWTCMAZFVWGIGKICSEBIHWXQQGKDPG");
    msg.plan_size = 10007U;
    msg.change_time = 0.3906131092381725;
    msg.change_sid = 36229U;
    msg.change_sname.assign("LDUKWKBSYZJVUVBOQOFAQGZDCRFAPKARJZYYEIABGCUILIBCYPTITILOXBTQFFSMNJPDVVYTRHHAHGOKBYUTJFSEHXGGNCUTLHRPQOAZFYTTDEQCXHWWXRQXYCIGREDBMVRQXJXOGNLISZLQIELZAVHYPMMZUWFTCRUEBTCOPOXKEFJNNBWRDNZSMLKDNAUWJDFHJPJIZEEYMAUMGNCOBVWFSGSDHPQLVNSKVNKXKMHUVRGWSCMPP");
    const char tmp_msg_0[] = {-105, -17, 72, 30, -100, -100, -17, 96, 78, -119, 17, 12, 56, -55, -42, -45, 19, -15, 5, 104, 74, 75, -56, -43, -85, 66, -12, -113, -18, -62, -94, -11, -13, -124, -101, -84, -70, -52, -103, -42, -111, 58, 111, -41, 69, -106, -99, -118, 76, -60, 109, 100, 22, 72, 87, 107, 120, 91, 103, 103, 25, -39, -65, 83, 93, 98, -2, -70, 8, -87, 93, -97, -105, -18, 49, -110, 38, -21, -22, -101, 70, 64, -14, -81, 36, -91, -117, -91, -88, 21, 81, -27, -88, 91, -19, 41, 81, 74, -120, 66, -128, 17, -41, 44, -113, -86, -26, 2, -47, -13, 43, 16, 20, -32, 32, -123, 17, -76, 90, -24, -21, 47, -104, -48, 83, 37, 83, 62, 74, -110, 18, -108, -60, 85, 85, -69, 86, -70, -90, 97, -52, -88, -79, 91, 126, -51, -127, 118, -91, 119, 107, 125, -76, -25, 13, 8, 40, -113, -39, -41, 4, 58, 41, 114, 1, -3, -103, 94, 14, 126, 71, 99, -64, 109, -15, 94, 12, 92, 26, -35, 39, 1, 39, -42, 110, 64, -28, 122, 76, -60, 95, -76, -1, 98, -56, -39, -92, 78, -59, 25, 61, -69, -75, -91, 85, -127, -36, -110, 71, -71, 45, -43, -84, -30, -118, -121, -60, -74, -45, 34, -89, -83, -110, -64, 50, -1, 42, -62, 44, -127, -65, 30, 14, -61, 28, 63, -95, 12, 103, 115, -9, 10, 120, 7, 14, 19, -64, -65, -98, -117, 30, -101, -93};
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
    msg.setTimeStamp(0.01320302977673593);
    msg.setSource(51560U);
    msg.setSourceEntity(248U);
    msg.setDestination(6325U);
    msg.setDestinationEntity(177U);
    msg.type = 212U;
    msg.op = 71U;
    msg.request_id = 6344U;
    msg.plan_id.assign("UDTROHDWUOCPILMBYJAGNNHRBTZXZTMPINUFHKFZLEWXZSBGFPBHMNQWRDMMXNUVRLZHSDZSKRCIMSVMZIIRBYIYIUPQSKCGEERDCLEJBWGKVLIUAJDJENACHYOVMTUSEGQBGPCJAHFRPOLDJDFEPQBVLKKZTRACPTNCGWQOAUMYOETFMCOXTVNW");
    msg.flags = 55396U;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 62745U;
    tmp_msg_0.type = 236U;
    tmp_msg_0.status = 84U;
    tmp_msg_0.info.assign("TLWJDPZBAQSAPSQYTSYKWWLHIRUBDVLAYMOZHAVTMVMQAHUJJYGYZGXPCVQRXKZJRNHQWELYZFBEDELEUYXNBGUKBE");
    tmp_msg_0.range = 0.0471973763406458;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QZHZLEURRRMXTAMLAOARPCINEYVPKYSBWGPCDOPBMLDRCUGZYHFEDPQHFHOSRPQLLEGERTTJBRVXBXVDTLUJNNPZMIFBISFZPJWQSCIUNGYCTHKDSTZNQQKSFNJEDBGLMASKJVXYFIBWFUAAAQNBWPQMFKSJXGKXIQOOLOBWKFFGXYWAKJUKNSMZGKVC");

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
    msg.setTimeStamp(0.8741572457321464);
    msg.setSource(46713U);
    msg.setSourceEntity(222U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(33U);
    msg.type = 226U;
    msg.op = 5U;
    msg.request_id = 52153U;
    msg.plan_id.assign("ZAUYMRMFAQZHCTAXGNRCNDYYSLYRJYPQEKDUJWUWXUHZZOVUBHXPRKFMIRAFVDWCFDPDDVPIJMMQJEYDBBSLUFLUTJFWRPEHNGVNHATLKIGSKELTNZMMBCQBSRXGNSJTPFINQWNOAZXRMTALKTPRWLEXVBVJYTBZCMUWWIEOPCTSGGSXHYQHCJWFLIKOVRNEZPGFSEHEON");
    msg.flags = 36399U;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 37U;
    tmp_msg_0.entities.assign("SHSKYPHSAWWNANGIXRPUTQQLKGESYBIMSZEDNFELRVCYNVXDICZETYNUJOFOZQJHDAVDIHPIWGRBPZEXNHOHWLQGVUONHMTCSCDTQMYFFDMUVZAACMLRWYTSVQLHAGWXJJYBDDFBZTVQPLFYRTLMCFHJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KTHTPRGURWIJEKTVMOEGKSKGFOLDZZXVDRYNMFIUAFERDMHGPYMLIZUXQOEBPXAQXCJPIEZLQLBMWQSBTUSEANKBMSFRUWASQQMVITWFKLWGDYEZZSJZGVJGCOOOY");

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
    msg.setTimeStamp(0.8197999020301173);
    msg.setSource(27752U);
    msg.setSourceEntity(224U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(8U);
    msg.type = 167U;
    msg.op = 13U;
    msg.request_id = 57336U;
    msg.plan_id.assign("AGXKOCYSIVZUQWUQUPELZQSAQEQIFZIDAKYTYHKKBRBIWTZLVDDFAOCCRG");
    msg.flags = 26179U;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.8828185542908792;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IZNFCDWJNCIJTQNPCAHKUSMPWPRJKNLKSDJZSWCJESRGVAKABQJORQMQSHPCJGXNVYVRGWZCKRIDEWCUFGVZPPOULULGLMMBFKWXXRTOEGNBBFQMMIPTCOQLEODWGLXAKELMFIPVJLBZD");

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
    msg.setTimeStamp(0.724780977298775);
    msg.setSource(65023U);
    msg.setSourceEntity(171U);
    msg.setDestination(3384U);
    msg.setDestinationEntity(65U);
    msg.state = 205U;
    msg.plan_id.assign("CXYWOIPJZNPEEMFZKAKHVXHUOETOMGUPKGHHHXGPRCVWKNVTYYLQSUTCEGFOEUNEFJYDEFLPSYCW");
    msg.plan_eta = -185556793;
    msg.plan_progress = 0.18039570712088093;
    msg.man_id.assign("OTLNJPTMHXFSOILJQNBVIIMQOYKSQAVSNFDHYDRLHVWTHGKTEHZDGBVSIMNMJWGZEJMZAOSAOILUCWMKGHWBYJHAADCZTCYTATEIEKHRLURTHCEDBHDNGBNOXCESBXCKYLEDGK");
    msg.man_type = 39922U;
    msg.man_eta = 1156354548;
    msg.last_outcome = 76U;

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
    msg.setTimeStamp(0.5395320471923043);
    msg.setSource(50614U);
    msg.setSourceEntity(76U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(185U);
    msg.state = 189U;
    msg.plan_id.assign("IFAXAUQPMZCOWURYFDXCCTZYGKTEVEXYASISTVGSZMQHSDIXNHZYRKYXWQPUVWHPPRQNFBQIANWRGLXEJAMGJCOJULRRLKMXUEIQKHGJN");
    msg.plan_eta = -448871665;
    msg.plan_progress = 0.051640906766015404;
    msg.man_id.assign("NDWTKHGOABDVRCUBQOMFJUPZKGVMDIPMXJHMQUAVDKRMDPQBMYZUTEYXOSISHRKJNIJLCOSFOZGPXAMEOJWWJGUTDOCXLSRIUWYZBN");
    msg.man_type = 59344U;
    msg.man_eta = 2128651275;
    msg.last_outcome = 251U;

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
    msg.setTimeStamp(0.5536615249399592);
    msg.setSource(12160U);
    msg.setSourceEntity(185U);
    msg.setDestination(33579U);
    msg.setDestinationEntity(75U);
    msg.state = 132U;
    msg.plan_id.assign("KVWBCAWZHDTQSIRKPNXKQEHLSCVNNDXFDGSLFFNFQEZSBQMJTWQWYEMMKOOERQUNMYAZVRI");
    msg.plan_eta = -217333821;
    msg.plan_progress = 0.28321731924636406;
    msg.man_id.assign("TYTILXCOQRZCDMR");
    msg.man_type = 239U;
    msg.man_eta = -1276476055;
    msg.last_outcome = 168U;

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
    msg.setTimeStamp(0.5321590970433799);
    msg.setSource(26339U);
    msg.setSourceEntity(26U);
    msg.setDestination(25471U);
    msg.setDestinationEntity(17U);
    msg.name.assign("HWHDRYSBTYKKPXHAXJKJKLRSVHWNTRJIFMMMGCOSNJXDCXPLUBLNZPPBGGDUGDNEXKOUIEG");
    msg.value.assign("ZRYIBVFNJYZVVBTATKQJBKTVMXZCFEWIUJPAQIKHWHEUZZRTCCWEWDPIZDNTDMAORLUO");
    msg.type = 38U;
    msg.access = 191U;

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
    msg.setTimeStamp(0.4005029452555062);
    msg.setSource(50408U);
    msg.setSourceEntity(219U);
    msg.setDestination(53775U);
    msg.setDestinationEntity(71U);
    msg.name.assign("OPYZTGARGYAVFSFWXBJCYZCQTUMULWBXLSJOYWENIKEPEHWKYBCBQRVMSAWHSYUNPXUEESIMEOGRYAIQEGNWHINZMYFIFNKDXLDXTDQLLGVSQXONHKN");
    msg.value.assign("EXZHKGZCCGXNSOFZLEVZUXJWPIXT");
    msg.type = 135U;
    msg.access = 96U;

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
    msg.setTimeStamp(0.44219216264588135);
    msg.setSource(4208U);
    msg.setSourceEntity(10U);
    msg.setDestination(2607U);
    msg.setDestinationEntity(89U);
    msg.name.assign("UEGAAICHDNVXUOABVKLCIXVVCNPDJBICBTREFIDPKUDZNAMKXPYWELVUJCMFHQEFDZWGHSMLLTDMCSWOBMDQRZYNBFRNGEIZPMSOYGLBWPJWAKYQMVXZLBLNXTXBGTGECCOZRVDHTOBFZNDOYJRWZPPSZSRGHISKUQNJQQUAIKJEQTFMXOVSJYRWAWZOKSYFUWPNFVQEU");
    msg.value.assign("JMYHECSERKJESYXYPDVBZJFRKDQOSGUKHMTMKJCICLQNBJNSRCTUBIULZKXVXHDDKQCHNLNAZUIOUVYFMCHRFEFOPXINSZVJIKELTGEFSKTEYVGTIVOPWEWZZHJXPNROJRUZSAJMALGXOQTLQDZLBCABFPUWPWNFNQQADGYUIDAIBOGQGXBETUMHEYTWOKNRTLQNPMYWBFVAGRHLJSFSRGWVWYLHZM");
    msg.type = 104U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.7526762506972948);
    msg.setSource(7653U);
    msg.setSourceEntity(14U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(97U);
    msg.cmd = 210U;
    msg.op = 97U;
    msg.plan_id.assign("LCPNVBPEMCONGFHSIRBVZQRHZDQLHZCN");
    msg.params.assign("ZHTPEWUFBNNDXEOIFNCKXQCNOELVKJUIMWJSMRAGDCDGLSBGMDVSLUPATEAALVCYEWBHVXVJWZRFPGOLZXPXQZIHSODBKTXGKTJRSJNYRLKPQTPUCJRRQFKZYYMCJIKMKZQOIFNNGDNZNHFTFDZYDIOXRJVQOVAJQFKHVWOMGRBUXESVHOHNIWAEDHXSABSUCMAHYWTKEECBWESUTPBDFMOGLIZHVYWMATRQQUY");

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
    msg.setTimeStamp(0.008085968569078283);
    msg.setSource(64209U);
    msg.setSourceEntity(240U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(48U);
    msg.cmd = 80U;
    msg.op = 180U;
    msg.plan_id.assign("JNFQUZMIVTNRACCUYMLOHODKWXJBJGCWCHKQRIXLBKPTNCLJJYKRUDZJKXRLKICOZANRXOZOBUMFHNZDOYUUBRJSIJSQNLSTTEPZIODFYPVMAYKTTFYHSAWETPKVOGWSQRBULLH");
    msg.params.assign("EFVFDLTMVETSNLQMQWSHWLMGPOCRDMITGGKGNOYMUKZNJYCHIYPXLZXQVVVZTRIKMAJJDSSABQGVDALGRKKONAEHRUKETXZWABYBVBXPISEXOIQJXGMKBSBPXDWNBVOVUDLCWJU");

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
    msg.setTimeStamp(0.6400023213985134);
    msg.setSource(24297U);
    msg.setSourceEntity(209U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(3U);
    msg.cmd = 195U;
    msg.op = 70U;
    msg.plan_id.assign("FHZQHCFXWSXDOCNIPAPQACWYULQIIRKROSRILJWUXPKYTXRGDLPZEHLIPFOKTINOBGAGWFGQUAYMZFDUBRVTIJHDJULQKXZKRTAELGOABCNTPYLBAMWJJCMCFEPTNOAZVERWLKJNOCNYGVVFOKBZZSMLUDQKSHRVBCMAXSBSMYLUXYQPBVWWFEDREKDJGZGPQUMFDRTIVOZQXXVMVUGEMHCFDZHYPHGJNITTXBEKCHSWAWDQNISJNEVN");
    msg.params.assign("LHHHRLPWZOTJWSAVLCFVEAFYFXLEUYBZGUOCTAZRYPCDLWSLQEGZ");

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
    msg.setTimeStamp(0.3310909204095265);
    msg.setSource(62687U);
    msg.setSourceEntity(252U);
    msg.setDestination(42896U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("DYNLZQCMNOYRQOYBSJBYUROIAVYUOJKRIHLGKVESRTLWSMSAZODIOOHJMPDCRDNRD");
    msg.op = 154U;
    msg.lat = 0.22058429374589872;
    msg.lon = 0.09665727184593131;
    msg.height = 0.07335058427190044;
    msg.x = 0.8585255563968609;
    msg.y = 0.37678474246414306;
    msg.z = 0.10213295013224333;
    msg.phi = 0.7614985761431945;
    msg.theta = 0.09194148413967362;
    msg.psi = 0.5591240166926147;
    msg.vx = 0.9805594717384154;
    msg.vy = 0.6933756025050949;
    msg.vz = 0.0235004498571445;
    msg.p = 0.6845282985091256;
    msg.q = 0.06475531641714838;
    msg.r = 0.47493010511787814;
    msg.svx = 0.2631046784651091;
    msg.svy = 0.5820032945006101;
    msg.svz = 0.05321149392619062;

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
    msg.setTimeStamp(0.3978849496832294);
    msg.setSource(61976U);
    msg.setSourceEntity(177U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("COYWGZDIZHZPLJWAFZQRCOCHUJUGTLANSHUFULKXTWMWSIDKFORDASNYNBEZRRVYWBBKTGPEODSMRLJTDMJSKKTGCQVIQQQYDVZJXMWAXMMVSHOQTJPBZFYOCAOXNAHBPCFKVOHCWNEZNDO");
    msg.op = 116U;
    msg.lat = 0.4757444297539718;
    msg.lon = 0.8845159077822611;
    msg.height = 0.3228298081140173;
    msg.x = 0.8967124975234012;
    msg.y = 0.7132287855958624;
    msg.z = 0.06991398962376194;
    msg.phi = 0.8765529820275121;
    msg.theta = 0.3689824122399493;
    msg.psi = 0.06709497915091323;
    msg.vx = 0.4739359784094872;
    msg.vy = 0.47565339755180214;
    msg.vz = 0.2137512022329916;
    msg.p = 0.9979067467070477;
    msg.q = 0.39957698981510414;
    msg.r = 0.8789264248097403;
    msg.svx = 0.8843466602968298;
    msg.svy = 0.9141798209477632;
    msg.svz = 0.6159429006209728;

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
    msg.setTimeStamp(0.843537916406084);
    msg.setSource(10182U);
    msg.setSourceEntity(249U);
    msg.setDestination(53101U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("ETYPLQVXBROCBNHXJXMKUMYTDRSBRCZMFUXXJYGKJYFHDQJPJTHYISLRBGOIHUIYVDNFRGDCIWNVQW");
    msg.op = 87U;
    msg.lat = 0.6514865608960934;
    msg.lon = 0.40293199599464957;
    msg.height = 0.7316401917486084;
    msg.x = 0.27029248360059754;
    msg.y = 0.25697054333087643;
    msg.z = 0.7851433857037357;
    msg.phi = 0.8714421797944872;
    msg.theta = 0.9940505901878168;
    msg.psi = 0.4208013212555942;
    msg.vx = 0.520105337921307;
    msg.vy = 0.3677459368879379;
    msg.vz = 0.5606648488329802;
    msg.p = 0.05305238261006617;
    msg.q = 0.5764884952812994;
    msg.r = 0.511873035379427;
    msg.svx = 0.2488757777314311;
    msg.svy = 0.04058479290390937;
    msg.svz = 0.6919849288878113;

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
    msg.setTimeStamp(0.19961351887404832);
    msg.setSource(33782U);
    msg.setSourceEntity(214U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("SQEHXYEMGPBSUBXSWMOKUWGREJKQECLXWMJDJLUTZDHJAIFXEXCRPJIPSMDNOKSRUUVADTRCRYPCLJIEPAZVSZAXVQMVXVCBYFEVQBQKAVATPZKBBDHJVZFLEGNDGOFKEOTGYQLCFQSBOA");
    msg.type = 77U;
    msg.properties = 223U;
    msg.durations.assign("BKTHWAHEVRTZRCRPPYNZMRMCORCIEEZBGZLYBAULIBUDDZHZWWNKEOSTSXTDJA");
    msg.distances.assign("OAPQEBGXEJJNKZTHSPEVOQDCDQOGZFTVIRQZJKPNFSMNMGXRSRALHBAXFRSXYLUK");
    msg.actions.assign("BIURGDIRRCEHIXDSROYHAIHUBFNKGYEDGWTEBCJYULTO");
    msg.fuel.assign("JKUCDASLMZAO");

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
    msg.setTimeStamp(0.8099321412367108);
    msg.setSource(18202U);
    msg.setSourceEntity(95U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("EPTZAKDUOMXTZLYBMJVEZYWXRVUWTWIPMHEJKYQQUQCFHXSAUEKZKXBBZNDICNOZGCBMSOMTHHXJLPTCDHFEHBQKRWRLTOGXVSWXBDFZRLPOVGSBYMCJHWIRYRNKLFQINVFQVIMEANAORDPFWBOBDFXNGGCGLFPRRIVTTEZJAXMUZAAHMLFJDEYZUJIMAWDVIIGNXWNVNQPPKQLSYSAGGLSGUEUCPYJURSVSOJQHLQTKAP");
    msg.type = 136U;
    msg.properties = 33U;
    msg.durations.assign("VMZPTEFLDYEZERDACUUSHAXCU");
    msg.distances.assign("BCPCACTRVSAOJSNIVIQLXEVCIHAR");
    msg.actions.assign("ZDNKSYIMEIUJARZHKUMHKYXLSWNEDLZBAYJZMTZSGNPJZCRVSVWUSDRSXECGLBHFQANTSEXZXJNPCHOYYGXAMBGOWATPDMQMOAWVBEVTTEBDNOLPSIYMQPFMXPYBKRAXLPXIUDLGLRHKB");
    msg.fuel.assign("AUYUPGFXBWHHPPJWFLBLYOVBOTHHRTGCJZQTEKGMRJDDPZGBERIFMJLXJGCVYNYUYFIACSPMBD");

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
    msg.setTimeStamp(0.8946599249538418);
    msg.setSource(43655U);
    msg.setSourceEntity(44U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("ZUBROYUNIPZUHKOATGDPPISIDCELHUWBBPLFRGKFVFTYJSQFGDFMGYGCNSICCHHSBENTWMIWHPBRQDTALTVTHUOVWLNJDJDNK");
    msg.type = 199U;
    msg.properties = 162U;
    msg.durations.assign("YOQEOTJDHCBTMGCIADWNMHVIQGUHWIXYRPWSAEGJHHREFQZDCFSWLBNBOLQCWSOABHBYGOXXKVPZNIVXHMUNSJBURTZNCFULMRYKDLBPDIPHLXONUCKJTXRIEECTYKKFWEPRJWAAOMOSRSWKHSWDVGVSZIIFVWUARJTFTPIXFQQDDJMLTPBSJLVCXNPYXKFAQRGCZSIVKHQFBQGAJPULETNZZMUAOMKYKNZUCLLVFEJRDGUYVY");
    msg.distances.assign("SGWYXTHKJKJEO");
    msg.actions.assign("KRJFITJJWRWGZHAESQVPTOSBNDKNTBYIJTLDMNCVBJTKKTYCCXGLIBBOAMOVRVNWMZPDILVMVKGLAAMQ");
    msg.fuel.assign("TANWWWQWEVLEZHRPAFLZCRLTUEJUPIJOSTKNBZCSXICRFGFYOLOYMMIRAGOWYDVHSDGTWZ");

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
    msg.setTimeStamp(0.30101405373683543);
    msg.setSource(8375U);
    msg.setSourceEntity(174U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.2673098614800842;
    msg.lon = 0.5266516472356797;
    msg.depth = 0.17450970344806416;
    msg.roll = 0.48509573222578994;
    msg.pitch = 0.6027586790357535;
    msg.yaw = 0.10135270351893066;
    msg.rcp_time = 0.32365464776234276;
    msg.sid.assign("PQSIMBVHAGTPJTDSYJRSPHNSJGFFOAVHXMPWMMPHBKLKHZINNCQPIZBROAXDUEWHBBLJMJOSKPGGENEASEUKTWYXTXYJQEDNBBPTXRSQYFGWIMAUKULLBZSEOOCCKINUJOMYKNVTEQVUGMO");
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
    msg.setTimeStamp(0.2360869981640118);
    msg.setSource(57038U);
    msg.setSourceEntity(62U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.4947849371510038;
    msg.lon = 0.7047033969806994;
    msg.depth = 0.7384882173987971;
    msg.roll = 0.2817897036174335;
    msg.pitch = 0.29825659589658793;
    msg.yaw = 0.708124734774645;
    msg.rcp_time = 0.08032118598484517;
    msg.sid.assign("DNYJSVGPCTAMDCRMKIMJLKPTEIVQFKEUMFWTLPZWDHNYEOMJWLKLFLKFUHKZBJKCBIDIDNVODWWVMGOVBXVSGQOAZNPREHAPWVG");
    msg.s_type = 36U;

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
    msg.setTimeStamp(0.6196427567181197);
    msg.setSource(34180U);
    msg.setSourceEntity(148U);
    msg.setDestination(46503U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.36559470219939105;
    msg.lon = 0.5994439636189743;
    msg.depth = 0.8275623461743796;
    msg.roll = 0.5651538121110186;
    msg.pitch = 0.3048587388678691;
    msg.yaw = 0.2236316900748262;
    msg.rcp_time = 0.3069566663450256;
    msg.sid.assign("XBFQTRBLNJETCVNHIPGHCFGQXARKUTORPTIUVLKWYQYUKHHWKASPNPUUOXOJVZDELLUCVUSLIZLHAMFEPSWDCXZDLAKXRIALHAKDEWEQMVQKONKOVYIINZVCOFZJGRGPZUFMJSXFYLTYWERQUSSWWZNNXGGZONBETAMJSCYZIEBDHBJIATSFMUFB");
    msg.s_type = 146U;

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
    msg.setTimeStamp(0.38371177687192337);
    msg.setSource(47968U);
    msg.setSourceEntity(154U);
    msg.setDestination(36815U);
    msg.setDestinationEntity(77U);
    msg.id.assign("FOBBSCJTSZWYOWZGHKUBXLAJWJECKDKIIPZBMGPJUDNIUBEPFBVLLYIAHWIDPEJPCEJEQKNMFRZECYNTGZVR");
    msg.sensor_class.assign("QMYFUJGJVWHOTQHZXGHECZQPKMSLAWKDYOKHNUPWPMZMVWIZABKLVXQWNTXMMBALMVJFUIEGSXGSOUIRSAYEJVMEEDEYKPVFDHSGACBKKIDRWLBRFNNRQVYKAIYCZSJHVQEBZTODQFP");
    msg.lat = 0.8393170145774553;
    msg.lon = 0.5237926966789577;
    msg.alt = 0.10730905867438267;
    msg.heading = 0.9455958069057588;
    msg.data.assign("RANFLFMZLQNGHRLGUIXTZZPYBLRKENWDZIDTZJQXYXBEDTBKOOARUPHJQIKPRWOFUHJDASFAVTQLMXGRXBJZSJCOIYDNZANSWHVNZHGLEVNDUIHEYFTEVCEEXAYBIOMRZNKLS");

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
    msg.setTimeStamp(0.8015773976277376);
    msg.setSource(13161U);
    msg.setSourceEntity(156U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(141U);
    msg.id.assign("FMNVNRIYKCKTXJZSBFLIZNUGRXCYZSSTHZHVREYNYYCWZATVKSPMKQRNPEXEO");
    msg.sensor_class.assign("SVJVPCQMCZMWRZBNKEDTWWTPEDTBFZEKBYLA");
    msg.lat = 0.36002273467559376;
    msg.lon = 0.37368220981999567;
    msg.alt = 0.11536299553883067;
    msg.heading = 0.9841821804591083;
    msg.data.assign("BPOLUYZPIPJYMURYFAXVMFLMJBEQSQCJACOXSCAESSGHFTCTJFVAAHTGIBUPANZQIVEVTGCNZKMFCEVFIIYXVSREQXXNOUNJDHSWYWSZBTJWOTAGXTDNFYUAWBWXDLWMHPLKWJKCCEECXONRLPANKBWVQZUZXKOGBRGPXRMYOMVSQZRITMEDVLKGQKITRJLDQTRPENH");

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
    msg.setTimeStamp(0.8556868600725611);
    msg.setSource(58462U);
    msg.setSourceEntity(192U);
    msg.setDestination(22920U);
    msg.setDestinationEntity(103U);
    msg.id.assign("YIKXLTBNMAANIGUENPYRBZFMUXXBTIBQFCVRKJACTICEMPHJVZPLIZO");
    msg.sensor_class.assign("CLSXZDTBXYHEMJLPRHNEOTLTGPFCAESDCNRLQZBKBCUJVHJVBWZMZQCISXNUWOOQTVVMJIOKTMONVVKJKOKEWWYPGNHDCBGYMHNQKBXXTQKMQIMHSZFGGXSOVUKYSSAMUFC");
    msg.lat = 0.3604133514580615;
    msg.lon = 0.5661933250262519;
    msg.alt = 0.39881841026062514;
    msg.heading = 0.7082629836564587;
    msg.data.assign("BNOLTSZVHWPXIYUNEYVAOPQXJJIRUJWQUBZQGOALDVUPVUNVKIXFEXRUNYJVWYOUAYGINMDGRKLASHLRSIHSAWAEMYBXATMFMQKFQDJXDJRMXQIFMBHPLGRLUSHGWQVCQZMCVBZCYCZQWOKEHNTZZPCRZIPXCLTTIPWOEROTSGLGRFMUMPFAPBSZHEKBWCOBOHGERLCWEYADCGNJSGBOXKEZTUTQWKIDPMNDXABFYFDKNICKHFHSVYEJLK");

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
    msg.setTimeStamp(0.09717751052822088);
    msg.setSource(14152U);
    msg.setSourceEntity(12U);
    msg.setDestination(10417U);
    msg.setDestinationEntity(79U);
    msg.id.assign("BGZEMEHTEXGMDDEELQUZHDCFYRINTYSPPOXQKMOCOJSSUUCHWADNF");

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
    msg.setTimeStamp(0.7038096123337093);
    msg.setSource(56008U);
    msg.setSourceEntity(204U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(218U);
    msg.id.assign("IZLKXPYBNYVSMLWUSTDNEQEOCOJIVFURDXBORZBTDQJJCWAEOETSQOHWUXHNLHUYRDGDTUYKGMXQSVJRXKKPAVBCFRBYXNMUSGMBGZGUYLATMDEASJGLVVNOHMPWPAOZKAYECIQLAXBWQWGEWWSHUQMNYFVCJHXAFNHXCKVSTYADVUF");

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
    msg.setTimeStamp(0.3253008217620349);
    msg.setSource(30130U);
    msg.setSourceEntity(250U);
    msg.setDestination(54384U);
    msg.setDestinationEntity(124U);
    msg.id.assign("QRSFCDOESNMEMDVGGBTMDXHDOPNYWBPLRGWIGZENATMJHFERREYKYNR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UKELIUGSCMAEBFHKZTDCRTYQDLOKVNDVDFQLECQUMAIHUZJJKYSWTUDBMZPGWOCLOPBRIJDHJQLQMSXCYOBMXZTWXCOFBVETXAIXXFMSZMKXARAPCVILNYANDBGAXZPMSWQUKQVOVVNRTPHUJROHUGNHDOOWXJWQBELFSZKSGRAVWNCPDRRXGCEHUFPVGJAWOINZKYGLGYWEFKYPURCFQWYJVTIIIPNJNFHTFL");
    tmp_msg_0.feature_type = 189U;
    tmp_msg_0.rgb_red = 101U;
    tmp_msg_0.rgb_green = 61U;
    tmp_msg_0.rgb_blue = 28U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3855694622374418;
    tmp_tmp_msg_0_0.lon = 0.38975322493120435;
    tmp_tmp_msg_0_0.alt = 0.0997169041199154;
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
    msg.setTimeStamp(0.9167707676740604);
    msg.setSource(46203U);
    msg.setSourceEntity(35U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(239U);
    msg.id.assign("FUCOOGGIHFSEMEGQPKKZDHRJCJDXXRGSEATIICQIZPSUBSKABSX");
    msg.feature_type = 44U;
    msg.rgb_red = 247U;
    msg.rgb_green = 106U;
    msg.rgb_blue = 10U;

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
    msg.setTimeStamp(0.15803247596713887);
    msg.setSource(44755U);
    msg.setSourceEntity(89U);
    msg.setDestination(60857U);
    msg.setDestinationEntity(5U);
    msg.id.assign("NUNGJKYFILHKXBXHKQUJTFHAXGYXDGBPBEUPKSOSADAAEPRFVLJWJZNQWYCIFJKQMZDULLRBQITEXEDKRYCPOMUPPWNPNCAWZYZSVOITWFRUWUBSNVQJJFPVORMHBIKGEDVAWMEHSGMQJLRGMGUHUDTXEHTSFPOZOTRPBMQYCNDCYXE");
    msg.feature_type = 68U;
    msg.rgb_red = 16U;
    msg.rgb_green = 167U;
    msg.rgb_blue = 105U;

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
    msg.setTimeStamp(0.6981100093932828);
    msg.setSource(9231U);
    msg.setSourceEntity(23U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(244U);
    msg.id.assign("IZNMKAHXFKLUHCUIRKWMLPSHRGWDTWBPNFKZILBODPECVBXNWTCNNYQEUBTYBIKICUCDFDRJJAEMXDNPLOSTUYJRQFHEUMHMIWZQQPXRSETSNKMPGXTGHWAZKZQWGQZBCWLMQOLAPVBVXDBFUEANPSTVXLCHAAUWIYNVJKSGLQCZOMCPHNVSAGOLGKEHDRZCITDFYPXOGIOESXVBQORVOYYYBFMUFHTSSYZAYGEIVAEFFRJJGM");
    msg.feature_type = 248U;
    msg.rgb_red = 103U;
    msg.rgb_green = 230U;
    msg.rgb_blue = 25U;

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
    msg.setTimeStamp(0.08931903533656782);
    msg.setSource(58603U);
    msg.setSourceEntity(22U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.9994278078092025;
    msg.lon = 0.34817023547690085;
    msg.alt = 0.0039475252883706125;

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
    msg.setTimeStamp(0.5976890329565777);
    msg.setSource(60250U);
    msg.setSourceEntity(196U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.11704667329487661;
    msg.lon = 0.3626890537906814;
    msg.alt = 0.05860217686402158;

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
    msg.setTimeStamp(0.8666704594157519);
    msg.setSource(62400U);
    msg.setSourceEntity(128U);
    msg.setDestination(27706U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.2704747475133634;
    msg.lon = 0.3825295662102759;
    msg.alt = 0.8639434817609648;

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
    msg.setTimeStamp(0.7482647384752765);
    msg.setSource(11210U);
    msg.setSourceEntity(87U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(62U);
    msg.type = 100U;
    msg.id.assign("XFUHOMSFAHWZMELJKNHYHNPJBCREHFIUOSWKEBQALMPPFJQWQFAWPTAZPHRHUQTNFWEWVLPYFZODGLEJKGDTRCETIPICXFRUCKRRVYSSUXYORLGWSSXVYCTADWQAIKYUTNBRKSLMZFMVCEMDVOIYQOOBAWCNEQDZGBDAGWMVAPXUM");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.9870065358858912;
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
    msg.setTimeStamp(0.388926204237415);
    msg.setSource(29387U);
    msg.setSourceEntity(128U);
    msg.setDestination(19357U);
    msg.setDestinationEntity(208U);
    msg.type = 91U;
    msg.id.assign("SESPVRHVIVZWTUOSINRBBYDIHLCGRUYKJNGTWWHJDORZNOCIJGUIZOPFDSMYHFB");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.45620560429954893;
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
    msg.setTimeStamp(0.05090937316158528);
    msg.setSource(25257U);
    msg.setSourceEntity(76U);
    msg.setDestination(17489U);
    msg.setDestinationEntity(241U);
    msg.type = 241U;
    msg.id.assign("EIUVFVHRRCWIEFIZJALNDJVPDWSAFYLFBKQXXGSAMZVIDOPTAKHWZNVKMIUEFSLUCQLYJHPPNYWDZIQCUEFHEZMOKOJXGXBNHJBERMNQRINKLTFNVOYXAGCOBZRKQCMSXGVGCHOIMRYSZRUDTMCTEYXWUXAJVWYFMKEOHSGTT");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 28U;
    tmp_msg_0.time_remain = 0.6454224504790845;
    tmp_msg_0.sched_time = 0.093231802496894;
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
    msg.setTimeStamp(0.5365465882032754);
    msg.setSource(46380U);
    msg.setSourceEntity(158U);
    msg.setDestination(62756U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("GALJYNOTMSHQXTVJLBOSWPGJQLERMKEAWCDVJIVNFGFJMPBTPNUKSRQKXXLUSKWCNMSISNBMGTDLVOVLWZVBVAFSFZIGHOUDEHPZMQCNUQIPUZEXBYQTPUZAHNDWANIAXAWYEDLCJMLHGXXIFRRYSNYIWGMOKWKURIKUARSOWBTOERZECQTZRDMOHPXVUTJWYSFVKYKTBFEFCRTDHQAHCEJXOBFYEZOPC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QYQBLGBGSUAGOUBWCJBMSCHSHYHKWVUZTANVSXRTDJOHBHPSBZNDNCYCLSVELPUUHIJMERKNVFJLOPXWTWLVPFLSZDDUFPDKYPEIKFFCXVYMBUDTHAZKJARQALJZAGTKLTSVKXNUNOCLSFUZQIFOKPOQMGDHRQXOYAXIJEMZYJEWTNYWNYRGIVGFPIRQEWWEAXWCMHOENIRMJMVRRXCQDCBGJMBRDABSGNIAZMELXPTIKXTFHTIGVYDUQPK");
    tmp_msg_0.sys_type = 77U;
    tmp_msg_0.owner = 34198U;
    tmp_msg_0.lat = 0.7072929125944782;
    tmp_msg_0.lon = 0.40782599744024106;
    tmp_msg_0.height = 0.5474741685333556;
    tmp_msg_0.services.assign("QENYFSIVMONDKHTFHKDFXUAJCQSJFLBSZMODYJYOPSJIQNKRQWHSWGCRKFNXELCBJKVODIVPEMGGYEHOCHYEUUUTFLDYKMRBLPGXHSZVTNFIPTIYZACPNZPSRGFHP");
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
    msg.setTimeStamp(0.29424536307662186);
    msg.setSource(63106U);
    msg.setSourceEntity(225U);
    msg.setDestination(7424U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("KPXOUVRVRPILWNXJHJMKXBUUXTIDHPJJTDWDPMHALOFDHKOZKYXIAXSGCGXPCIAMZVFKBALVJRLOMVVWUECFERKTJIUQSIYHOYDNBFYPNYRAZFHMMEYXSJJGVLYG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IQDAJNMZIEINCRRCCKUGBDAIKQMEPFJDZAWTHOKFWHKOYMWSBATOBSRSPIAWEBCCVNEZUIQJUYUZGCIWLRFJUGRGPLPYTFOOYFLNNXBBNHUOKLW");
    tmp_msg_0.sys_type = 64U;
    tmp_msg_0.owner = 15956U;
    tmp_msg_0.lat = 0.595957366110502;
    tmp_msg_0.lon = 0.7324713495421055;
    tmp_msg_0.height = 0.5357643200595441;
    tmp_msg_0.services.assign("JCZSGCPAOQTUEWZNHFUNPWEUOUDVBKSXYQGVKQAQYSAWTSLMLDTGGAFFXHEORJPTYRFRWTDFNOLNHBLHGNZIECXDCZQMBEGDUXJWLJGTMNFAOIJLRABKBCLVPNRYYQFHIKOXWDDEKXMIRKVUNLBMMRPVVMWIUSOJFINWNZHAJXVYCJUHEETSWEXODXOTHRZPAIYXKYLQASRGVCGUVKGBMESQLZJADKBPPKHHBVPJPQIZUFCMBCCTSZ");
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
    msg.setTimeStamp(0.7601834835858949);
    msg.setSource(13779U);
    msg.setSourceEntity(60U);
    msg.setDestination(43830U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("MXPNWKIGESLCEIDFGPTJKEX");

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
    msg.setTimeStamp(0.2578970421856318);
    msg.setSource(46060U);
    msg.setSourceEntity(171U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("TUBWNPOYQDXKVFSPCAYRHPDPKIVUMCCANVRZZQVLKBBYEXGWMGRINJPNHFHJVEGNCCUCRWKWJDTUXDXSCAFNEXGAEEFUBCHAPSLXOQEUJWHSAZKHDJTJZIOYBZKLZFAOBQDMYNRGQIMAOTGLZTVNTKVPZLGIVOWUTAUTLXJNGSYWERLFBUQYSUWQWQMFRIMNTZEKCIFYRBQLJOZISFROYHPHVISMMPMKBTC");
    msg.predicate.assign("LBRRNUKXQJYRQORZMEEPKDTFSRDNAMSAPCFBKXJDPQDXIMREMJJQPZBFRLPOYHVHTYIDUGJFCIFUSZCCMIHKNZTJSVBOVFJDAUZGZJICVUVWXKKCAAGRWWGPSBJKMQWEQWYSENOLGXMOFNYSHGGXHATKFVXSVAZUWUDFINGPXMEPT");
    msg.attributes.assign("EJYOVAMPJKEHGGWJELRWLSWYHXRWRFDOGTMUAVPWUNHAHZGNWVANARGMETFCKTSUEQTFSUKOFNAEBFSPZVJYQDYJRKVDKDMUQLFIJFUJOUDHLQSHITQMEKSJMHP");

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
    msg.setTimeStamp(0.1521282850761213);
    msg.setSource(63668U);
    msg.setSourceEntity(88U);
    msg.setDestination(9490U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("ERMIYVADRQFSYAGLBICDOIZETRQIJROHBJLGKAZTUXLKKRARPHMWXDOKWBRMJSKTNLMGPYHEIXQAWNMZCOMRNQESZTVHGAJPUJIGJITFXHBMGQBCNTHFEOWSCHPEPYFMPYGNQXATYIRSLJHVZFKKYJEIKTMWBUTLOSWAHKJPTDQDDSVDLUSOWXPWFPUONEXNYWPLZNUAGZYQVUFBGCSKCJGWDVFBECVXNFRELUCNO");
    msg.predicate.assign("UIPGUPHJWQWNHDHFKLYGXESNFAEMGWJGOLOQZJVNYUEHAOALEHFRVDJMGNMDIZPVOJFHZCGCNXHAMSQRPODFWYETXOXUIDOBBBUAXRTIDFZLZGRTBRZVXCWQQZIXKOQODYLCLBETTQCRDVKFNAQMITSVLUMPJFKDLLTZWUCBYSWUWKJICVROIPK");
    msg.attributes.assign("LTOSIEUTDBGPPUBYISLKELQXUZLNWGBZDPAYJEEGXMSTKMKITFNHRHOYPCUIIEMOPOVHMLBBHTRIPSBJRSULFMFRFTWUQRJINXFYARVYL");

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
    msg.setTimeStamp(0.6655061399684696);
    msg.setSource(23348U);
    msg.setSourceEntity(38U);
    msg.setDestination(46024U);
    msg.setDestinationEntity(193U);
    msg.timeline.assign("CFXKUZVJTKVJCQGRYXSI");
    msg.predicate.assign("IVGLKEFAPSALQQJTXDPBOLNVZUTQEBRTNMEJEQFXSHZVYMDULIFLQMTJSJDULWMYJHTSCUFAKNGNLWKZBLHYKGNIHCIBKFVPZRCEPSFXNUWPZRFAWGAIQRETQKVMAXBTCOURPEWXAEYYUVSGCHNOEYSYVIKOQOVXKFQ");
    msg.attributes.assign("VBILXPWAEFDVAYURLLTUZAPGQZVHDEPJZUFYZXRXTFFTFVBQMWNSXMUXDMOFBHHRTORSZURGPOJNCHACIIMRXWXXOUNWYFLAQJRWQLGPCDHOFTAXVDDTTQCKGIKIEEEZLBIYLJCHMYJNSFHZCHUQTGPICGBDAOGWHSDUYSQVTEKZWBCOIWGVAYUZJNRBKESGJSJMOPQRNSYNADWOEMWOJGKZELBHKPSKNJBUMVLTYPSA");

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
    msg.setTimeStamp(0.8068716728152481);
    msg.setSource(33991U);
    msg.setSourceEntity(194U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(179U);
    msg.command = 221U;
    msg.goal_id.assign("HECUFXZXGYBANSHIESR");
    msg.goal_xml.assign("HPBFMGKXPQPOVBOXHPUTDVEUCMWSUCRLZZUPPJNDGXVSYGCWXRHFIHBSZQOXFMNWRGUGTLYXBRRVTDNMDFAXUZQICVYJQMKU");

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
    msg.setTimeStamp(0.44538593285139116);
    msg.setSource(9532U);
    msg.setSourceEntity(116U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(66U);
    msg.command = 70U;
    msg.goal_id.assign("SZCDNTZPWEJNVFUDWGFEGGPIABOBSNJGZWSPFVQHOIXAAIKRTZPALVAQLEKLDFXREOLXASCOVMTMRVFDTHEHIACQBHXTQFMUIZFCDZYJCGYDYHCIGUPLDSRSPJKTOYAVEXZOOLLJPYPUPQUIMSBAVOQDCRH");
    msg.goal_xml.assign("TSXWJUUKACDDOOMWYXINUZRBZNVMNSINVEGAUSLOPZNODHRQZCQESEFAQAYBVTLJTMJSWPKKFQ");

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
    msg.setTimeStamp(0.3461838138844562);
    msg.setSource(41518U);
    msg.setSourceEntity(106U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(139U);
    msg.command = 238U;
    msg.goal_id.assign("AKCXWHIGGCFKGANNLACGYHDMZPMBHWXQCYXHDZTDFWJEPPSMQMXKTUNIXGXWMHNMEJXDTUKPPLLYKYQJZWHJIPOJUOERJSDRGBWJVIKROZJDGYRKSMDETPT");
    msg.goal_xml.assign("YPBWDIVMIQLWPNKTTPUTNMHZMDALSCOARVXMJNXQDQPYPCRPTSNCMUKKUKKXEWRRULLWUMLHJGSGCIOQKAANEDVBABYWDDLLVOWEKGOBSGGHRSVKORJFWQONFHVFMZDVSJZBUDLZFSAHFYIJCYCTQENPZYIKQXJRXUIMYXPUESLZDV");

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
    msg.setTimeStamp(0.8519637808968972);
    msg.setSource(10855U);
    msg.setSourceEntity(191U);
    msg.setDestination(297U);
    msg.setDestinationEntity(24U);
    msg.op = 52U;
    msg.goal_id.assign("POETOEOQUFWEHUPMBTCTSXXEHGLYBMSRPPTWXRGSPWPIJNINCJYWDVREDJGNCXJMYHUPRTCLREAKIYZFKXQCHVRLOO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GUMGQSIZZQRFCDIENBTXFELVITJGZEVHTIEPYCHWJYKNZRAAOHGOXZFWKIWHMBCVKCKMXYHKDHBDQJZMKLCXGDRPKQQUWSFSOYNPRVLYJ");
    tmp_msg_0.predicate.assign("DSYFICLQDFFCZJWMSPCKUCTKZGTUWIXSLUZRLPUZJWKINOIOPBFAKVLBPGNEQIJLMFOYOYMFMRPVKYAJUUGYZNCDRBTOVLINTECUINGVLYSTUVZR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZWTTKQGRYJWCIYGBVMVFPQTZQDJSMRUEJPGJCUTEIYKCHJLXMDPXHKDTFNTOCAUSYWUNYATASDEBREXKPGLQVKIGCWQYAPPLXRJRKNWXSYEGS");
    tmp_tmp_msg_0_0.attr_type = 202U;
    tmp_tmp_msg_0_0.min.assign("SVBHMKWSVJQMOASPVVVUUAOGEPOXKQLMNTHAYVAFUHMGIWBLRJJDAFPEXIUORZTITQUMQJXQGWFUNPFWFMRVWLCKASJXHSEJZPZWHKXIYTNAFGAOQZVPFXCUOCRDCYBXLTCGMHXEBJDMMSMYOKSQWZSEUNWRYXHLRRRWQAHDHKTL");
    tmp_tmp_msg_0_0.max.assign("EOSFFBMCQBIGULQARTHDEEJGDCFWGFWSGYTCGAEMONSLYZAFJQPJYAULBUZNRYHCJQXBCERSNTKGXIHTUYSOBQWRBCCMHLZDGHTNAYLKNXYKHDQMIVEPMZZCSGKLJOHJFWLUQFMCSNRGOERJVUWVZKRNVSITM");
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
    msg.setTimeStamp(0.33234258980776654);
    msg.setSource(23955U);
    msg.setSourceEntity(170U);
    msg.setDestination(59737U);
    msg.setDestinationEntity(180U);
    msg.op = 138U;
    msg.goal_id.assign("TDIJKIXLDHULABPKLJDYYVYCVQHFVJOPVHEZONZODNZIPJHXKTI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FSCSGSEOFBKRDTAYWSBGMWDBJFBAPNQXIPSXUMCSWQVOSHPLVWWKKOIZYRHWWERPKARQSIDDPIXT");
    tmp_msg_0.predicate.assign("FEUHJMPNGCLNDEHLIBRNS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RPGRHBSCGLKLVQKPXTQJZJRTEAB");
    tmp_tmp_msg_0_0.attr_type = 22U;
    tmp_tmp_msg_0_0.min.assign("CCDMPSQSCBDKWUZZVZXRALLEVFVOGIULEVHSFBATYZXDCEUBTWDBJCDJETYZTZOLKKQRWDGRFQNQRYNIVXTMCBRHMTPHJSXY");
    tmp_tmp_msg_0_0.max.assign("GPQAIBHBESWYIWVSKWQQEAWGCOFCEDFYMZBTATCRVTNCFHINGDIWXWDJNIPUJULGMMOKWWVGXUTFMPVBVEXPRARZZNFHZCPMOABJHFOIBHRESVFDSFKQKTYGOXCQSJJSKYDJLRMLAMQHCHTETNZBMIXPLMOVAFRTJFKBREZQLSLZKQGSRIDRHHTQLJLK");
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
    msg.setTimeStamp(0.10685797109446571);
    msg.setSource(38929U);
    msg.setSourceEntity(63U);
    msg.setDestination(31455U);
    msg.setDestinationEntity(82U);
    msg.op = 33U;
    msg.goal_id.assign("NFVRHBNXZFAQHQNEXBSINYYOLQNJUUSWXOFYDYKMEAUIHIAOURQHRXAWBNSUKSTLOHOGTCFIOJFGSCMEDRNJUTYHVZFTVXGERVMTPMBHSWJDZDUVFQKHTRPBSJCYLMTEWCIPEMTYXPEIDLGQWLYQEXPDKIWVATGXJZSLPVULNOKZOYJVIHCHKPIAPDQCRCROCYIZMJW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LXVNNCOSPOERJEJPUMREXHAQSWVDKOFGNAVDLXFXUFRZMSTQFBQFASTITKYZKPHPUTJYBPLERPKDMVOLHERPCYZIHXGATFQUNYWMIICDQWIZQH");
    tmp_msg_0.predicate.assign("OVOEHSXRSXQUVBPCDHCIHNGVTATAORPSXQQEKOUNUXLMWCHEJFXAQZCLTBVPGYZRMQRSWTIWYATDLLPHJIBYDUMXVRIGCKEZRGQGLDZMGJ");
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
    msg.setTimeStamp(0.5092083134144064);
    msg.setSource(15001U);
    msg.setSourceEntity(163U);
    msg.setDestination(48393U);
    msg.setDestinationEntity(38U);
    msg.name.assign("NYLYMGQIVYSSNMAFGQADFQJRBEKTBAHDZTRFDGZPDNTNZCLZILUGDRQHRPKSGEJVWDBHSGTURIAXJREZNXTC");
    msg.attr_type = 128U;
    msg.min.assign("YWJTNSRGTPLEHFBXSTATMTQLVCUJJVSTQZCCGUCGPVBEAZXBIJQWDLRILXMEXNXBQRHHJENEPFYAKOIQPUBBDUOGKWCZDMRGGIETKWWZYQRIZBLKANJJGTSENSVZVD");
    msg.max.assign("YYWFUZKMTQQPMHLBLEXDMJCTSYBDNUKSOKFFATXHAVOTRELBOXBQFFHOXADTFOAHKTXVGUPHJGQUPUUNFUJEJLWYHERYAVURCEKGNDEEWOTKNIMPCKPNZVUNQNVMSYGSIUWEIAISPWZFKYDYLZYYZEACGBLRZXDCROVJRKZZGIMGDOSROEIWPTJXQIJSQVWWAPSGPMXBBZFMPHKTXJMWNOVLCBWAI");

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
    msg.setTimeStamp(0.5003732581152862);
    msg.setSource(21380U);
    msg.setSourceEntity(140U);
    msg.setDestination(27799U);
    msg.setDestinationEntity(58U);
    msg.name.assign("IFWTCMFLTDKIXDRKTSPHWBJPXJFAZTEQGZBAREOVGAKEBTJOOPXTZNVRLRHAPFYVTWGFTHQDDMMVAJWVSAKARMWGHCNYPRCHZIAQOPGJUCGKNIJQYBSPNDLESIEQXRDUUQXLIWQOU");
    msg.attr_type = 31U;
    msg.min.assign("QJGWESKOPXZYMCSNHTVOXHAXKDLNVBFLCUYGQDBILQOVTHHDTQIXECCMERVQAOFNFVBSYWRJLAEWZCBVBXBZXGUIULOITBAIPSIRSHEQTBKCFOPSGRRZDERDPFWFHOAGNLFQJDLNFPJOENBGIAOUWEZKGCYDRZWMYTAVCYZIGLVJFTYKSMHFXEGNLCOCZWIUWDZNK");
    msg.max.assign("SSDJOZGTVFTSUAUEBNCLFMWTPYLYQYUBVJFGXETDIXMKRYGPQRFIDMQAZNRCERHQSPCBARNKZGZKFAOMSHPQYFYWRNJOHVXVXUGHEZHEMSNYPXTBPIFLIEDFHFEJULGQMKBD");

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
    msg.setTimeStamp(0.9319307253803938);
    msg.setSource(28162U);
    msg.setSourceEntity(136U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(44U);
    msg.name.assign("YXYYIAPFFZSNLFGEMCCRJRPFXOIHJVNUYRBSVSBTZIUQPBLHDTVPPULYWHGMCIVMOOKYHURCAUHFKWJXGKOCASBRXRRUTKAEXOCISRZSVWPRV");
    msg.attr_type = 30U;
    msg.min.assign("AYSXAYRPCZIJGGLDZUJSZXKLBWQFJXESHTBYXOCEUCJKUYQUHQFBZBBQQNZPWVINWFLONHEERVHNQRNCQGHMXSNYDEOHLZMPVTMOKFDYTYTYEBLCJIEFLWTMUWZPSSFLNRVTSOFCKBDVVWNGAAVFPNGZAXRUSHIKWEMPKYDYCBRDJ");
    msg.max.assign("TVQZXZGTZQGFQPQTAJZKGGXVMQHKPHDULBQAMIUPJZJGCFOHEEU");

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
    msg.setTimeStamp(0.3380326438926229);
    msg.setSource(9147U);
    msg.setSourceEntity(97U);
    msg.setDestination(16135U);
    msg.setDestinationEntity(61U);
    msg.timeline.assign("EHPMGRHLSOKQGMKGQMBJUHSVWHENBVOZFJCCTJYROWFTZWWBUGNXXQIPKFQZKUOR");
    msg.predicate.assign("RUDVLCEOTMSUHDACTISBVDRBXNIEXHSBJWOCQSEPOBEKXMXJFBERWTVNGGYLCQRMNZHAGLFSHZQHOBQPQDTPQQZUXVCQDRCXLCFGYLLYDTLEZYZOUVCFDHWWAMPDFPONUMMVITSLUJJDEGCVXGIFOSTRHPYJUMAKJJNQBNTGFVKBGWRSLGEOIEWMXRTUYKJXFXYZUAAHMZWIZWBTFSFPIANWKKHRHWSBONAJKMOGEKVZZLYJAIUN");

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
    msg.setTimeStamp(0.32521308162492013);
    msg.setSource(62438U);
    msg.setSourceEntity(23U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(132U);
    msg.timeline.assign("QIXLKRESWMWPPSYXEXUSKJAGUQAZJCVTMLQFTVDFKQGEYJYRJSBWTXACHKFDTKHWSPCNYLUGFYSLXNGBRTZRZGXQMULQEXHJKZDBZQAWPVIQMVVVPCKEMCIDMJAJHCSIDSUGFYFXRHYETOTUSVBONWOPWAONEHMUKCORCDIOIHRLOBAOUBSKUUVTGRVAVBPDLYKOBXMOPMFEHQNZZJENNII");
    msg.predicate.assign("HVCAZZHXBRUKTDQOMYDKXJEJTDGSOBBTSEGRIFLUDTPXLCREYEGAIAXONUWWEKUIBNPIWKCKSOJTRLAFVFCHCPSJQRNQZVZOFNGPIVSJCABPAZTPPXGOWFFBRHAISBFYQXUHVJFYFQLEZNWAZDQXSVUMTHLGMMCHXGGXBNYXDTNYGLILPHVVTOYKLVCUQARKR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("URULMKPHHFGMXYYBYEESMEBNQTLPQJJCMAUDXNFHIDMWOBIFWHCOPSCVKDOWJTQQZNCSAZTKKVMAWOQUZZNGUKGPGLQTBXFFIXOBEQIWZXOPYGRTFSH");
    tmp_msg_0.attr_type = 201U;
    tmp_msg_0.min.assign("KSBNTAELEFBKQKGVPTXARBPDGEOFLXOB");
    tmp_msg_0.max.assign("RDMJIANWMLLIP");
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
    msg.setTimeStamp(0.23019020737818108);
    msg.setSource(49005U);
    msg.setSourceEntity(90U);
    msg.setDestination(12426U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("HDLIKROMJWOVZTFRCQRYFWSVMDUABUHZXBYYTUBOPFLNKJNOGQJAFIPUYRXARCBNFCNEBGPSWPEYLKZVXJVDKQPTIXBDHHEQSVCGNSMELAXZYQK");
    msg.predicate.assign("THATYIMPUDIAYIUDQCRQRBFWVHXGPGTVWBCHPOLYYBSMNIDXOZFTJCDBQLONRWZHROULNBANVKPCAJHWFZERSMQXXTOGEWGCSJNFEJASCGZZUVOW");

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
    msg.setTimeStamp(0.9587820800976117);
    msg.setSource(36452U);
    msg.setSourceEntity(171U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(139U);
    msg.reactor.assign("NYBTHOPQBCGHDWXIKUINOSZUZQBZNCUOQAITYTRKKCTPXEAGOFNBDVTRKWMSBRASZUGIXEQPKNJUCPDMWLQAEDW");

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
    msg.setTimeStamp(0.8313734257105223);
    msg.setSource(63366U);
    msg.setSourceEntity(223U);
    msg.setDestination(62718U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("UNSIYYWUFCDKARBWDZ");

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
    msg.setTimeStamp(0.22734020924787102);
    msg.setSource(64654U);
    msg.setSourceEntity(122U);
    msg.setDestination(5487U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("FNMXGXHFBTUMZGFUMCCDLSVJFHOHPXWRCRSFSUBKTZNYPUIGCZPXCDGNLROQHVEVFYOFRNFJLEUHRLOECNESYQPSVOPNABDSWQGMRDVBJTRIKAIIRYLPIWGALDSANVENGRQTTPHUXNKDHQSXEOMHWCXBCYJDAIYVWBKQETWHUZZVDTYWBYI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LXDPXVGXVHAREEOGMCPCVWFKSANUUJZRBDQXXIOHISFDPPOKTSJGQJGWMQNSFKHBGZALHENABTBRWKREIXIKKOKYZRXCJYUTRIFPQSIHPVGILQLCFDMYEBFBTTADLNDNYWLYYUDCNAVMAERHSAUEJSCUROJQMUFWPXRYZVTFPSSMJZTPJIWDCBOGCASYBFVPLBWVOJNRQGZTXTZDBO");
    tmp_msg_0.predicate.assign("OWMGIMDKAVPEUVTAHBHJLJFQVVWTMNKNMFKARDFWJFAVEAOWJUBWKZTLBICMSRBQPDRMGDSMXEAHXRHOWKSQVAKKWRWFKYZSVGXUDQSFIXRZPJZRGNZMLYBCMAPTQEDBWOEHKUQNFCZLUVJLNYIDPSZDUXASYGMBGCQHLOLGFBYYNFICHLLHBEVXGESIGNXRXTOPUIPRJ");
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
    msg.setTimeStamp(0.5475564843034955);
    msg.setSource(63084U);
    msg.setSourceEntity(176U);
    msg.setDestination(5533U);
    msg.setDestinationEntity(222U);
    msg.topic.assign("LCFPEZAYWPJZSFZRYUSOFDCZBHHVMGCNICJKMPUSWVFILRZYYMKTGSVFDFAGIXTUMQAUEFODXJFRYHSZLNWXNOJLBBDKTIGSTOYPUPORUWKTMVWIYIQTALBSKHHUNHFJRQBDIAHZXWODHVAKSVGEKUCLMIJHOAQJGYMKECCKCWTTM");
    msg.data.assign("VBQQJHGSWCNRTZDUIBLMSDKHAYZYKEUBDWTMHDDTZMQPKDAYIPEIXAJQWXHEZHXRVUCMHUYUBATPWFJDNYLTNVAZLSQOPUPNCLGHNJKKPHTYMJIPUVTLAAGVWVEDKFIMVJRQZLGMPRFJTSCOROXZQKGJCEXNEIVOWOEERSSCWYTSBGLGLKXWUJXONCGQFMUZCFFXWKWCBRXAOBHROLEIAFSFPKIRRZYMDFGCYVSOGLZ");

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
    msg.setTimeStamp(0.7055609625156134);
    msg.setSource(17475U);
    msg.setSourceEntity(146U);
    msg.setDestination(58212U);
    msg.setDestinationEntity(71U);
    msg.topic.assign("PVTPYGWIYLMKJDQDALJVGXGWLYTGCQIFLQPATZFSXGIUAPBENIFCYQDIWEPMIATMXZXHNZYRFZBOHAPFRBRMGTRWCVHWNVFIZIAPNFNHWSGOAJEMMWOLKRBCKWRVDTLFSJYOGTQEUBLZWAEPETLZBLVTDOQCPILEOAQHOJXOHKUV");
    msg.data.assign("UAXMLPYQKNJRYWFXHITEHVTHWXU");

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
    msg.setTimeStamp(0.15897770831661617);
    msg.setSource(37435U);
    msg.setSourceEntity(152U);
    msg.setDestination(44794U);
    msg.setDestinationEntity(223U);
    msg.topic.assign("KFJWKOGIKNAPYJVIMTLLBUHNZMJCNDHTLJAZUGYPCDFPLKBIXABVZWCYNIMQORFHQKOTEBVITJXMFWHAVINYAVLNZCSISAYCVHRKYYBCMHLKDZSGEDDGMIUPQXGXDEUZHJREKWOXSFDMEZXRYUIUXHAEPLBNTOSOQSWYIQGHHLBDONWVLUUPRRZRLJGTUOTWQSOQQEGSAFNTKDSQJJEFVMESRCYWVKDZEFBBFFAUZAXWTPOMCTRWPGG");
    msg.data.assign("HAFXORJAXNDYNMLLPQDHEQHAWIXUYNOCBTVONPFEJCZIDVCIPQJRVLATODK");

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
    msg.setTimeStamp(0.7295692236103233);
    msg.setSource(63858U);
    msg.setSourceEntity(245U);
    msg.setDestination(45196U);
    msg.setDestinationEntity(236U);
    msg.frameid = 87U;
    const char tmp_msg_0[] = {-23, 45, 41, -57, 96, -115, -51, -11, -19, -13, -52, -60, 94, 31, 80, 22, -16, 92, -60, -101, 14, -93, -30, 63, 55, -62, -114, 115, 114, 82, 89, -96, -7, 25, 12, -12, 98, -11, -34, 0, 23, 38, 64, 79, 7, 100, 112, 9, 76, -17, -16, -98, -87, -107, 31, 42};
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
    msg.setTimeStamp(0.4719925031455702);
    msg.setSource(26837U);
    msg.setSourceEntity(14U);
    msg.setDestination(31357U);
    msg.setDestinationEntity(3U);
    msg.frameid = 252U;
    const char tmp_msg_0[] = {32, -41, 1, -29, -43, 112, -107, 74, 81, -76, 101, -40, -62, -59, 104, -113, -123, 56, -36, 37, 54, 57, 109, 57, -37, -16, 5, -47, 72, -102, -99, -113, 12, 23, -3, -115, -106, -124, -62, -28, 29, -55, -14, 122, 67, -123, -87, 123, 95, 27, -73, 107, 122, -59, -118, -69, -37, -27, 111, 24, -85, -80, 16, 97, -9, -114, 57, 7, 24, -105, -75, 114, 93, 77, 22, 56, 0, -84, 98, 97, -59, -68, -27, -74, 94, 85, -64, 123, 58, 78, -54, 53, 120, 109, -89, -64, -32, -36, -31, -20, -100, 123, 37, 45, -83, 75, -91, -80, -117, 87, -19, -86, 50, -78, 64, 29, -70, 7, -45, -20, 8, -44, -128, 75, 44, -117, -92, 109, 105, -47, -5, 7, -32, -35, 78, -15, -34, 3, 17, -62, -89, -19, 97, 21, -13, -117, -57, -30, -42, -28, -45, -51, 45, -87, -30};
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
    msg.setTimeStamp(0.361391687264354);
    msg.setSource(19046U);
    msg.setSourceEntity(242U);
    msg.setDestination(4185U);
    msg.setDestinationEntity(198U);
    msg.frameid = 184U;
    const char tmp_msg_0[] = {58, 10, 124, -3, -58, -43, -58, -41, -105, -10, -100, -47, -51, -46, -21, 94, 16, -24, -45, 54, -68, -125, 43, -50, 52, 102, -67, -1, 10, -112, -108, 94, 2, 109, -1, 32, -83, 85, 26, 24, -1, 56, 83, -89, 53, -87, -109, 79, -33, -116, 111, 52, -4, -2, -64, 64, -52, -19, -33, 38, -86, -5, -57, -96, -113, -81, 107, 84, 26, 11, 121, -53, 7, 14, 53, -112, -22, 20, -24, -49, -125, 34, -53, 71, 119, -50, 53, 80, -44, -78, 16, 9, -105, 85, -111, 123, -127, -56, -1, -57, -113, -78, 83, 51, 17, 66, -75, -23, 3, -27, 4, 107, 50, 67, 25, 33, 116, 108, -93, -25, 52, 92, -60, 105, 42, 18, -18, 57, -118, 114, 80, -38, -16, -38, 12, 20, -46, 9, -68, -10, -103, 63, -54, -105, 44, -78, 34, 82, -49, -97, 104, 16, -82, -101, -41, 99, 87, 81, 6, 84, -41, 120, -96, -86, 4, -84, 54, -33, -89, 52, 0, 5, 99, 76, 1, -86, -51, -105, 70, -50, 117, -41, -34, 15, 63, 48, -108, -49, -96, -67, -23, -59, -68, 62};
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
    msg.setTimeStamp(0.4283367456263989);
    msg.setSource(43063U);
    msg.setSourceEntity(238U);
    msg.setDestination(12441U);
    msg.setDestinationEntity(232U);
    msg.fps = 209U;
    msg.quality = 17U;
    msg.reps = 100U;
    msg.tsize = 151U;

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
    msg.setTimeStamp(0.8262356059160838);
    msg.setSource(52188U);
    msg.setSourceEntity(100U);
    msg.setDestination(22331U);
    msg.setDestinationEntity(172U);
    msg.fps = 168U;
    msg.quality = 185U;
    msg.reps = 199U;
    msg.tsize = 187U;

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
    msg.setTimeStamp(0.16159312022745553);
    msg.setSource(64056U);
    msg.setSourceEntity(17U);
    msg.setDestination(10163U);
    msg.setDestinationEntity(12U);
    msg.fps = 219U;
    msg.quality = 130U;
    msg.reps = 190U;
    msg.tsize = 59U;

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
    msg.setTimeStamp(0.3516979615372141);
    msg.setSource(4878U);
    msg.setSourceEntity(196U);
    msg.setDestination(41538U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.511002617769632;
    msg.lon = 0.27729250919797677;
    msg.depth = 136U;
    msg.speed = 0.24320111098782482;
    msg.psi = 0.3049437551433315;

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
    msg.setTimeStamp(0.5615225563722424);
    msg.setSource(21851U);
    msg.setSourceEntity(234U);
    msg.setDestination(59063U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.16116532971186337;
    msg.lon = 0.7835327327285285;
    msg.depth = 220U;
    msg.speed = 0.0010888012587435547;
    msg.psi = 0.9081231660659081;

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
    msg.setTimeStamp(0.283223507345267);
    msg.setSource(45657U);
    msg.setSourceEntity(175U);
    msg.setDestination(42602U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.34306379480039884;
    msg.lon = 0.9447528792363851;
    msg.depth = 32U;
    msg.speed = 0.007022088721489017;
    msg.psi = 0.2992665490534122;

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
    msg.setTimeStamp(0.47711574177468685);
    msg.setSource(38790U);
    msg.setSourceEntity(20U);
    msg.setDestination(6843U);
    msg.setDestinationEntity(32U);
    msg.label.assign("FKDRAEAMKLAFSTNRMJUZOHIUYXPXEMNXZQUROGZHDIVFAHUXGFVKBSKCEOYOWLTPNYZECEAFXUDOYIPLWBEDPBDKHLCAVVGRERXYFIISCLEFPVLLTPBMSIVQQXQDSBNDHMB");
    msg.lat = 0.7781341893950704;
    msg.lon = 0.9238564006185557;
    msg.z = 0.10497712639735202;
    msg.z_units = 208U;
    msg.cog = 0.9264676952668198;
    msg.sog = 0.6900589068476035;

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
    msg.setTimeStamp(0.09065929620949409);
    msg.setSource(41048U);
    msg.setSourceEntity(37U);
    msg.setDestination(59131U);
    msg.setDestinationEntity(124U);
    msg.label.assign("JGFAAVMKXNDPZTZBWBHAGTOUGB");
    msg.lat = 0.762484240985813;
    msg.lon = 0.6513071146872864;
    msg.z = 0.8344660082401959;
    msg.z_units = 6U;
    msg.cog = 0.03514440917774986;
    msg.sog = 0.20419774059484075;

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
    msg.setTimeStamp(0.8640973494558374);
    msg.setSource(1537U);
    msg.setSourceEntity(205U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(72U);
    msg.label.assign("KACGXSWLNLWUBJO");
    msg.lat = 0.2859757625331979;
    msg.lon = 0.16830964285412653;
    msg.z = 0.33932260952667614;
    msg.z_units = 109U;
    msg.cog = 0.3151040191726904;
    msg.sog = 0.6481204949919341;

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
    msg.setTimeStamp(0.08588388843498573);
    msg.setSource(27982U);
    msg.setSourceEntity(38U);
    msg.setDestination(37372U);
    msg.setDestinationEntity(78U);
    msg.name.assign("SGYBNZILBFEMUZOVAZVADAFRHSCSMCCHDWEAAST");
    msg.value.assign("TLDGABKFDBHUFXVKDHASTCASIKAMHOMKZOYLMROZWMLQJCYWUDJAGFXERKJYXSRVFSYUVWUERZRLSEMBAOXVBVWMNYSPLGVATPGPQPDJJCPDCJEBSJTBKVLQULRDITEZMTHOGVVWSBGLZICTUGTSHEEEKXFAFZYQPHBENXCINBPNQQJGOWWDOURRUZYQNKFRHCNKNVNMXXZPT");

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
    msg.setTimeStamp(0.06311526628150621);
    msg.setSource(52186U);
    msg.setSourceEntity(155U);
    msg.setDestination(45671U);
    msg.setDestinationEntity(180U);
    msg.name.assign("JVIFQTJPTLZROFQRCAWNOLRUQICMVZDDWJAYDZHRHDVNNNEHXKDMGWRRSYGKQEPQAUC");
    msg.value.assign("PEFMJSSGTEVOCGFYYCUIQJYMRLZOAJDQOWCBDTRWNIQQBOLIHBGDROHMHZBISKAWKKQZGZRSDKINDEORXUWJBFTVBENVURJLNVXXMCVIULTWZSBMDSMJKNGASAQAFFSJMUPCTRAANHBLKXJUDCVTTIWLEWVINGKNHXAQGPUQHBWDSGHYEFECAVLKVQBLOPXXJZZYDZTNYOMMYKFLFOHERPXHS");

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
    msg.setTimeStamp(0.9884039280835634);
    msg.setSource(25693U);
    msg.setSourceEntity(155U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(138U);
    msg.name.assign("JWYCSQTSUVCFIEBRVKWGCOHYUQKFFKLPQPXLNNOANTIWBAQVHVSAOCLTDCDHMNERHTTYKRWEBKGRWNIWTXMEUFZQIMMKYTTEZZOZ");
    msg.value.assign("TDBOTKWHXMEWAZWEBGVJQJPRODEDXCXYGYYCQDTEESHUIAXKHAFSOVFGEAFJVUAJRRTJADIGGWASDZBKUVAUZWYMXUETRBLHEGFDNTKLNSGFBVTSYHYKNWGNLTLLZNHDNUFVADMLJXPWZOSCUMUQOPZYIHEKCQCCM");

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
    msg.setTimeStamp(0.3778199884125224);
    msg.setSource(6449U);
    msg.setSourceEntity(153U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(221U);
    msg.name.assign("QWEDALEIBXOMTENUVSCSHLTHELWMJMVUURJIGQMDVXFRDGJRSXKRQYZWTWJPFMLDBFRUUQLFWHIFVOVUGVILMONSCAIPCPFFXYALEIEJCYZDQBFHXMHOYGYBAXOBPMZG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XYOAQZOVNCQ");
    tmp_msg_0.value.assign("XWQFREFHDBPPSGGALSBOZDFFJYJCDETNPETKHRVZCJXUWPMAKUMYWCBSGLWIEAZRROXPDDTVDMOZFKVKQQUKKVGRMJUUEZNLTWHFALBXTDQLTHLLGAIAGIYCJVNSYSYJTYBIUROGUQSRUTJQBVXTOCIKCN");
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
    msg.setTimeStamp(0.7503577123933586);
    msg.setSource(21221U);
    msg.setSourceEntity(24U);
    msg.setDestination(42941U);
    msg.setDestinationEntity(3U);
    msg.name.assign("NIDSIYOBZAFVCSZAPKMIAXFSUOHQGWBVCZKYRVGZHXELROTDRDXGFJGLVPUXNRWTJULNOICKRZCYXKMMNPLEFJEMHTLNMZKEUZPSOQQIBQBTCWYBXYQKYCDDEWKSVSYHJGYKHIHEPZFVINFFHWWCZMJEATDVCFUJOLN");

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
    msg.setTimeStamp(0.21130044397202907);
    msg.setSource(27845U);
    msg.setSourceEntity(194U);
    msg.setDestination(6037U);
    msg.setDestinationEntity(217U);
    msg.name.assign("DIZDSYRCGBHPTVRMTYBRGAOQBHHENNHWUGRTXGPBAZBCVJSBAQTGVAPQWWBXJOWUZUENXZQAKPDRIWMLPCMGYGZYMCKXAQLUIXSNIOLTEGLHHIFLC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BEHRIUUQYJQKWBKYWDZEGJCPSEMPOTJMSSIGKGHZXAPFCSHDAKPYXDLVWRVNCYXMDZKENTKFHPODQITTNNYGYTZHLYBIQLLDXHJOVBCAKNJHTXXGILVMYMQTWAQUMBPZWNLRGBNWIR");
    tmp_msg_0.value.assign("ZZMVTMLGIKOPBMHCPMLWBBFHSXAEETXVXPHXRCZKFQBLIPUDCIGNHJQUCHLNBGSYADWGBUVVMMOUWEWPSAMPOTXRJAUZOJKYZTUNQFJPLNUEJVWBRVOLVSNCRSBEWGDGJVMFVGOPQLIISXTAZWSNWNRRQCRASKQKETZDUIKKONYZHDDBCTYUDHMIJGERHSFCU");
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
    msg.setTimeStamp(0.37557718332957046);
    msg.setSource(26350U);
    msg.setSourceEntity(37U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(244U);
    msg.name.assign("ASBFPHMIAOEWXGTRQBBTAGJLVFRHEFCRNIDOXJBEVHQYETGDSRDCVQQKKVMHLAWUNTNVDGLOIHSNWXVWFIAKXKBPJUYKCQVOWBPGXMOMUUASUWEXJVQHCEPTXOTYKHJD");
    msg.visibility.assign("IUXOYNJJWMWOAHGSGXETPPUHBSXSYWRNSTQI");
    msg.scope.assign("MYDILHVRDOBKTJLWOZRSTVMOVXEPBQNGOTZPEEMSLNQGNWXSYUCGRCTWCJTKFAEYNWAUPQHQVZHQKJEYAWLZAWRLVSCEVVIIHRGACPZGOHMIOXPITYDCOBYWKTRHBFQWNMXDLVTKLLOKBBFSSPZFUNTFHIRDXWPZTMLCBRKK");

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
    msg.setTimeStamp(0.05802638439334651);
    msg.setSource(64608U);
    msg.setSourceEntity(161U);
    msg.setDestination(48945U);
    msg.setDestinationEntity(8U);
    msg.name.assign("HBIZMJZCQDOXUADXVGIYXXREEHAMALONEXFVJJBITGTOLPEQUBSKWBUHQDEUXMRHQAHFIMOJUXDJXHSDNKSDPPFCACKTKAOETJWHGKIGLDCQWAWDIFOYKCMOBVQVVSCMGL");
    msg.visibility.assign("PJEVLQNCQTCVPOHWXRKPSZRLTYVCHYNNJFGTCQDYLKGIEDDVIZOJJQV");
    msg.scope.assign("XOGFCCUHOOLDQKGKRDZBSBAXNTGMOUVQPDJBTXBPQOHEVDYZZYFAAHHIVWLCVJYNFFZWWCKXCBPNYZCBRJPKFSNQPMUUNBWMAODMSGSTRSTGNFOPIQIJENYYVHPLZLCRSGSMMIDKWFFVZGUWAEGMTTWNOEDYBSETXYIJRECPNLPVONUARXWTVXSVXDURIECZHIQQCHMKGDLSRFZJWYEHAEJABORRMJKPZVYQTUIXLL");

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
    msg.setTimeStamp(0.6659549600443698);
    msg.setSource(54827U);
    msg.setSourceEntity(177U);
    msg.setDestination(39563U);
    msg.setDestinationEntity(39U);
    msg.name.assign("SWYDPFATFGQWXLXNWNSIUMYJHNNSOZMXFPYPZVJZSHTTXCUSVTWZLHMSAJLOBTKKYFRCZLGUNODDEFOBZZZJKIOTAHXEISNSXVRKBBMGIQACTZECHRIGCLWYLDTRQYDNHVBRKBQMJIUTOXAJKCEKJBMFMGBVEQLEIGVKAOHDPBRFPGQLJ");
    msg.visibility.assign("ZWSBQBYEHIUCBUFMIMKAGIZYDNVKEYQDTGZWMPUC");
    msg.scope.assign("GGNYMUGFBQUXRPJDNACKIWNCZTO");

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
    msg.setTimeStamp(0.4477232443857003);
    msg.setSource(36700U);
    msg.setSourceEntity(25U);
    msg.setDestination(26445U);
    msg.setDestinationEntity(45U);
    msg.name.assign("WIBBLCFIXDECMWDRRRDQPVWRJFNTBKOIXEJFDXKFWWZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AZHCGYIHBQJQQFWTPSNZPHPHXUKCTKYGWIZMCXDNAGBHLQRWJMWTHWEARCQQNUCPRNJYBVET");
    tmp_msg_0.value.assign("SMLPGIVMUERDPFVIQPEJYQWBNFFHJVLFVTDCIBHXSANUYYGVCOYZHHAMQKJOWTJRYXNOXGMTQSZRILNXFOGSORPZJAMQMIHGFLVNCAJUKGVRABAEFJNUQSHRQCSIOOGRDGLWSURODZBPKBCUENOTXRXLPMUOQYXUZCMEAKLDPKTYDZBLRYPEMVSKIEXETZINJAXKUTWYPCVWECWBWABHLQMG");
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
    msg.setTimeStamp(0.8602161512263402);
    msg.setSource(26284U);
    msg.setSourceEntity(88U);
    msg.setDestination(6951U);
    msg.setDestinationEntity(160U);
    msg.name.assign("PLOHAPUFOBPVIPZHDUDMGXLSAHXLYZLQBOVRMODIRAGTVTKJSZQFNOCUHRTMSMJYCUWFAQUOYTLYKAZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZSDIBFXEOHMOFKYIWVGFUPSUNVXFHVYGIHUPAFXGANRENSOILJRPBYYLQRLYJISYCZZSUYTRDONDHIPPEJFZCQIHFXNOELYRKBQFKTCVLATNNFRGUOWKWGGHTIDR");
    tmp_msg_0.value.assign("GIDGBBHGFTTKRMDEOVRDSQUUKRPHPEIXRNIWVAWUBLUISOMLFVLVSZHDNVJOYFPJJHBVIFFEGTSJNZHDRCMRSMQZOGZQPBXHJLNNUYINPIYRULSKWCUNOYXGUZMCEWQRJMUQTNOOKKKFZCKEXAHIWOCETVFWLTMKFRLDZPGCTPQYAEMCHUPYSXAYXCYGKEPTTPVATJYWAAZDHMEFQLAYFOXVQZBRBDJMWHQCXBKBWEJWDSNBDZSVSAQLAIC");
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
    msg.setTimeStamp(0.1158241757128905);
    msg.setSource(15153U);
    msg.setSourceEntity(52U);
    msg.setDestination(12257U);
    msg.setDestinationEntity(150U);
    msg.name.assign("LGKAPWSRWCULRTKFKBOYSTSDQWAQAEVRGVZWXDPYBQMYQSWKCHUJJLGEZAQKLNPMGUHIXXTFIFZEKBSOTPMPDWEGXGBFSWOIHMEJUZTFYYWVVTHUIXVCPADBPADWGZCMLROHCZCURJEJLOQRRGONYGYKJMASRZWSPXNQOUYKHUCENORENATNKKTYVCEVJXLRFUTBFIHCUCMVHIJQDLSNBNHX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QKAQPISJPVJFCUAAQPKEVFIPDJZMNSUMXYVHNHDXXTADXZWGDINYTPRAXZXNJZCCEDXRZWBIDQNQMJKALFXLFSUFEOSCIYYLJCMSQLHUWVKTOBPVWBLJTDUXAEHKMSGYFUHFJRRLOGONTBVTURVEPIZBMRYEYGRHVSGWWOGDLFKCWKNULRTGWEEHOCSTNBKQMALMFSPZCYELPQEYZAJVQZZUMIXRCBIGOBHTTDVIWFKNBNAOPJOGHGUHSOMB");
    tmp_msg_0.value.assign("TLAJPIBSMRFEIFSHIGUIGIYSTVLGMPNTFTCJQDAUPPWDQUEO");
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
    msg.setTimeStamp(0.6388989596712842);
    msg.setSource(40934U);
    msg.setSourceEntity(220U);
    msg.setDestination(60311U);
    msg.setDestinationEntity(121U);
    msg.name.assign("KVGCCWTCKUYTYUXYROZNXNAPHEBTXQVAU");

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
    msg.setTimeStamp(0.7955710397031056);
    msg.setSource(53266U);
    msg.setSourceEntity(215U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(211U);
    msg.name.assign("ZBMVDVXMERITJWFBXZRYMVWVBNIANIKQASWRVGJTIUJKVBHETIBFMITLADZRQODJYLROLAIEOWFPLXNUGSTOAQXSRTXADHKNZNYKRKXPELWWLEHMCOPMVKJIPWXTRRQJMYSOMUIVOEYTEQDPVSUXOGRJGIKCUCMKZNLYBTLFXUTJGZSUFSBCGDCHPNOHMOHCGPEWFBJHAEZACCGZNQYDHUCHULABXYFYZDNEHQQFLDAPWFYPU");

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
    msg.setTimeStamp(0.0702332081285536);
    msg.setSource(11147U);
    msg.setSourceEntity(131U);
    msg.setDestination(23492U);
    msg.setDestinationEntity(233U);
    msg.name.assign("QNWQIRVXQGAKZUYSGWMNSBZVLNEURROQSFMFCTERFBKKYTREHDJSJNGIPJUOHPKPQUGKOTYJDX");

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
    msg.setTimeStamp(0.21939565580442288);
    msg.setSource(7049U);
    msg.setSourceEntity(60U);
    msg.setDestination(2352U);
    msg.setDestinationEntity(27U);
    msg.timeout = 142657619U;

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
    msg.setTimeStamp(0.7099176854049224);
    msg.setSource(55291U);
    msg.setSourceEntity(214U);
    msg.setDestination(15381U);
    msg.setDestinationEntity(210U);
    msg.timeout = 2186210385U;

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
    msg.setTimeStamp(0.9497403759045349);
    msg.setSource(3548U);
    msg.setSourceEntity(34U);
    msg.setDestination(61689U);
    msg.setDestinationEntity(93U);
    msg.timeout = 665556862U;

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
    msg.setTimeStamp(0.1183167242254799);
    msg.setSource(13980U);
    msg.setSourceEntity(213U);
    msg.setDestination(5770U);
    msg.setDestinationEntity(134U);
    msg.sessid = 13004960U;

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
    msg.setTimeStamp(0.3379325468437323);
    msg.setSource(51110U);
    msg.setSourceEntity(253U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(233U);
    msg.sessid = 3114996033U;

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
    msg.setTimeStamp(0.6430954141615328);
    msg.setSource(58683U);
    msg.setSourceEntity(80U);
    msg.setDestination(20307U);
    msg.setDestinationEntity(95U);
    msg.sessid = 1909826956U;

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
    msg.setTimeStamp(0.8043160055560108);
    msg.setSource(40941U);
    msg.setSourceEntity(13U);
    msg.setDestination(4638U);
    msg.setDestinationEntity(188U);
    msg.sessid = 1384756044U;
    msg.messages.assign("GZMHCMNEPG");

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
    msg.setTimeStamp(0.15360300198765298);
    msg.setSource(53108U);
    msg.setSourceEntity(62U);
    msg.setDestination(9086U);
    msg.setDestinationEntity(41U);
    msg.sessid = 2579090409U;
    msg.messages.assign("ZQKJZEWHMVWAFCNSCLDUFDTFJVKXNYWKSWCWDUHEMICFLUICWDYLJJSQISBXEDOSPTBOJCVTHCBPPQDLVVFWVZPFKNBPRMTQOZYGBOWHAGJRPHWBIYEAQIRUHKKYIAUREEZNVTQFGFYVYOXQDCGSEUOEBNXSLHLJLOOBRAOSNUVIRFN");

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
    msg.setTimeStamp(0.7005680705722825);
    msg.setSource(39526U);
    msg.setSourceEntity(116U);
    msg.setDestination(29939U);
    msg.setDestinationEntity(31U);
    msg.sessid = 626270636U;
    msg.messages.assign("LQGBDANPBGJSJHUYUXMJEYPVFFGFBKUKDJQBYHLOLHAANIYAKDWCLVCYXZUSIYMXQJUTGPBOESRVKLCRQXIMNFHZNISBRGPRJJNECMWBDMQMTNQTFPXAOBEBDHOOIVEZPQHIWTZTILFKBGUAXSIEZADTODXRYWKRRTLECQETVOIHTOMUWYXFSPFNNJFPQACSAZXSTVSH");

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
    msg.setTimeStamp(0.8811662185018094);
    msg.setSource(35312U);
    msg.setSourceEntity(121U);
    msg.setDestination(37820U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1061285768U;

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
    msg.setTimeStamp(0.2856002309833695);
    msg.setSource(52633U);
    msg.setSourceEntity(239U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(27U);
    msg.sessid = 195337353U;

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
    msg.setTimeStamp(0.01489974506965186);
    msg.setSource(24268U);
    msg.setSourceEntity(11U);
    msg.setDestination(18654U);
    msg.setDestinationEntity(38U);
    msg.sessid = 1454009752U;

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
    msg.setTimeStamp(0.052181208732274054);
    msg.setSource(64944U);
    msg.setSourceEntity(108U);
    msg.setDestination(1696U);
    msg.setDestinationEntity(185U);
    msg.sessid = 2555921510U;
    msg.status = 84U;

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
    msg.setTimeStamp(0.8497521720019126);
    msg.setSource(32557U);
    msg.setSourceEntity(147U);
    msg.setDestination(42099U);
    msg.setDestinationEntity(68U);
    msg.sessid = 4143478642U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.36496036814766375);
    msg.setSource(50882U);
    msg.setSourceEntity(93U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(237U);
    msg.sessid = 700000413U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.5975341283510691);
    msg.setSource(2585U);
    msg.setSourceEntity(132U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(245U);
    msg.name.assign("PAQWMAEKBDOWYGMKQEEQWAHOFSPMGTFEKIHGNPWITTIDZSRJJLCGDTDJIONUHRVFRUIJDNEPCYJQVSTWSAEXFZRNCWFOHPBTISJRZCKMHSSAFXURLZVXXYQBNEDKQXLLMQXAKMIADOFWELYIHLGZFPFMPNCVOBUZFCQIQGAGGVDZPBRSIOJWOBUTGLVYVDOYKAJUUZYNMCAUGHYZUTQHCXPBSSVLNDEMNJMYHKXLJBXYWVRULHTXBPKWT");

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
    msg.setTimeStamp(0.7475831429536088);
    msg.setSource(3206U);
    msg.setSourceEntity(224U);
    msg.setDestination(57113U);
    msg.setDestinationEntity(181U);
    msg.name.assign("KMFUHHSCFEGYWETLIKRWVTRWDFHKAKDNEPPLTIXDTRX");

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
    msg.setTimeStamp(0.741137776553666);
    msg.setSource(51291U);
    msg.setSourceEntity(83U);
    msg.setDestination(40071U);
    msg.setDestinationEntity(158U);
    msg.name.assign("CPXMJCYKRCUGPZUHFMDEWDNIODZMGTVGIABMAIUNBRFSTYQAQSANUSKRZDTHMQACRPHGIOVTDDENPARZLKWJQZPBBQBELLYRMGHYBYFAKBYAWGPLTIJLKBFXNFOHTZOELXNVIGXXNHTUFUSOJCWMMMDQZRKVSIUSZS");

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
    msg.setTimeStamp(0.5008180131611304);
    msg.setSource(17637U);
    msg.setSourceEntity(169U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(0U);
    msg.name.assign("LGJAMNUSIZOSXJJJPSRTWYGYRFXCDTKQOHMHMUOXMPOFERRUZEDVNBPAAMYROAPDWHBSOBHIKFPENVWVDFEHFDKJLBXKORHTZNGVAYLYEEVGTVCCSQCGXISVAXHCHYPCKAVRIODNXAJEUSMQWLKBBSLRGQLSQGNCQNZESIJILFFPCXLZXKTKWBAITUZYPFGKUNWW");

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
    msg.setTimeStamp(0.8810706482745222);
    msg.setSource(33453U);
    msg.setSourceEntity(75U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(18U);
    msg.name.assign("NMMCOGGJUPWGAZPAOYTHROVETDJXCBILUUGGZSSVFFSVOESNBIBUIGKNSLSCQFECMBHSZJPKRHZCDYATPVIKZNHYKXULAWCOEBTDIQVGDQQGSXTHUAWZPQCJZCRJIIDXAFADPUQLRLNAFKLRASNKTHYKYAWJORIFYWGRBFXWJHDDRENVTJPOCBODBKKVHTMPZQIUNEOOEQBQPXLDKUTJMZXNVNSMIMWWEGRERFCWLHMJBYHYEX");

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
    msg.setTimeStamp(0.3210459061282923);
    msg.setSource(53646U);
    msg.setSourceEntity(127U);
    msg.setDestination(34962U);
    msg.setDestinationEntity(94U);
    msg.name.assign("JSLBDKBMPXAZU");

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
    msg.setTimeStamp(0.9109535112603798);
    msg.setSource(33182U);
    msg.setSourceEntity(204U);
    msg.setDestination(13698U);
    msg.setDestinationEntity(253U);
    msg.type = 108U;
    msg.error.assign("RGJMGIPNWXSXEMOUZTXHEIKKDMPXLUBJEPSKRYBOJOFITIEGXXXRKIHLTATBECHHVTIDORFAXTOYNABTMKUEJVPKCPIBWEZIQDKFABMDQGWHSCBJZFSWQVRFBQHGQZGWTPUHACSVUVLWNCNNDZFITGLYAYODPSIACFGOLZYNUQL");

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
    msg.setTimeStamp(0.10809952205537998);
    msg.setSource(50786U);
    msg.setSourceEntity(126U);
    msg.setDestination(9703U);
    msg.setDestinationEntity(226U);
    msg.type = 113U;
    msg.error.assign("MJBSEWGVFMCRUWKPIDNBTQKBSOTVIEGMEHSFSKIGGQXMQLOUATTZIDUJL");

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
    msg.setTimeStamp(0.7371623336157385);
    msg.setSource(49067U);
    msg.setSourceEntity(131U);
    msg.setDestination(11655U);
    msg.setDestinationEntity(233U);
    msg.type = 141U;
    msg.error.assign("NUCTQJRNPXGKYITUHMDYGNRDGGTMFYDKGUKZUMGHWXNFIROQCRKEUSVXLZHEKMBPHZJMEXQBYPQZBDHXNQHECFVPVQWUKOZDZOCGTA");

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
    msg.setTimeStamp(0.5089224281353161);
    msg.setSource(41705U);
    msg.setSourceEntity(141U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(73U);
    msg.seq = 17483U;
    msg.sys_dst.assign("EGXIYKZDXYV");
    msg.flags = 80U;
    const char tmp_msg_0[] = {25, -82, -24, -25, 119, 103, -91, 124, -108, -62, 66, -58, 64, 39, -76, -36, 11, -45, 10, -118, 78, -15, 9, 90, 28, -82};
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
    msg.setTimeStamp(0.7748140880946917);
    msg.setSource(28077U);
    msg.setSourceEntity(219U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(111U);
    msg.seq = 25239U;
    msg.sys_dst.assign("ODBMJMEFHPTNZDMXGZPOJSLIZAZIVLNNTHBKXGOYOGNIQLOVPCRZCZFKJDVTTLVYNMYJQHIUBVCHDFKLKWBKFMJETWMJYFVDEBUZLLQHEEVFUCAKGCYMOUHPCGSKVEHNRSSDZUYAABLQFXQIKPQTIIPVWQTHE");
    msg.flags = 181U;
    const char tmp_msg_0[] = {-70, -109, -43, 83, 57, -93, -37, -31, -111, -91, -128, 79, -92, -102, -20, 118, 7, -16, 11, 25, -52, -28, -36, -95, 91, -128, -95, -91, 73, 5, -109, 116, -106, -24, 2, -27, 24, 17, -119, -56, -11, -123, -44, -4, 15, 28, -18, -112, 54, -6, 115, 126, -64, -34, -69, 51, -26, 97, 122, 73, -6, 95, 88, 17, 99, 8, 70, -14, 113, 5};
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
    msg.setTimeStamp(0.8407668043575324);
    msg.setSource(41707U);
    msg.setSourceEntity(102U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(111U);
    msg.seq = 61938U;
    msg.sys_dst.assign("QCMRIAGFNJSFWRHORTANMZLTKXXPCUJMCANIOKYMELDNROKZGKQDWCQLFHPLYRWVDQNTSTTGLSADBINJMHHRIEJBCBDGOQWYJLCQDVXJSSIHVFAZEG");
    msg.flags = 95U;
    const char tmp_msg_0[] = {52, 46, 38, -105, 103, 47, 95, 116, -90, 92, -10, 114, -125, -103, -44, -69, 17, -52, 124, -16, 38, -81, -26, -41, -106, 52, 44, -8, 85, 57, -17, 11, -82, -52, -28, 68, 94, 83, 63, -114, -42, -49, -98, 87, 29, 117, -93, 72, -36, -18, -4, 48, 45, -37, 108, 69, -99, 101, 112, 110, 66, 31, 44, -96, -32, 72, -92, 110, -19, -27, -21, 68};
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
    msg.setTimeStamp(0.029404731605864542);
    msg.setSource(20264U);
    msg.setSourceEntity(183U);
    msg.setDestination(50948U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("MKTLGXTMFBF");
    msg.sys_dst.assign("VHSTDJYIXPYHLQEF");
    msg.flags = 69U;
    const char tmp_msg_0[] = {2, 77, -24, -41, 38, -54, -90, -24, -102, -90, 62, -54, 69, 102, -97, 34, -26, 120, -46, -19, -119, 12, 113, -102, -108, -84, 94, 69, 29, -109, -74, 18, 2, 68, -89, 9, 9, 64, -62, -3, -122, -79, -116, -15, 3, -66, 15, 38, -18, -102, 116, -74, -98, 69, -21, -42, -99, -112, 85, -28, -76, 30, 86, -73, -108, 60, -41, -86, 12, -29, -41, 82, 10, 31, 11, 104, 8, -30, -6, -2, -69, 78, -117, -30, -101, 75, 61, -33, -13, 65, -99, 57, -14, 19, -4, 78, -111, 31, 124, 1, 40, 33, -38, 11, 105, 84, 80, 72, -18, -49, 46, 7, 31, 32, 98, -5, 119, 42, -30, 37, 21, 5, -80, -104, 99, 114, 120, 125, 96, -87, -8, 40, -42, -76, -80, 15, 114, 100, 62, -96, -76, 48, -11, -120, -33, 88, -76, -57, -12, 33, -116, -31, -125, 22, -93, -114, -126, 17, -61, 22, 102, -80, -17, -16, 32, 14, -20, 6, 62, 28, 49, -55, -49, 72, -19, -4, -109, 74, -33, -62, 11, -13, 10, -53, 105, 9, -123, -81, 63, 116, -79, 46, -91, 115, -22, 62, 49, 9, 59, 89, -111, 70, 43, -88, 124, -79, -128, 110, -79, -35, -50, 97, -9, -94, -4, -42, 83, -94, 17, -14, 95, -98, 124, -96, -10, -95, -3, 99, -58, -42, -117, -121, -100, -11, 93, 46, -93, -92, -24, -63, 47, 42, -20, 46, 39, -5, -78, 38, 14, 27, -98, 57, 13, -73};
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
    msg.setTimeStamp(0.31612443864523254);
    msg.setSource(19933U);
    msg.setSourceEntity(130U);
    msg.setDestination(63344U);
    msg.setDestinationEntity(195U);
    msg.sys_src.assign("JYYZTXPPAWXSVEDYNNCDOBHVAHHONBGBRUTFHYRRCRQOSSYBWCWMYBQOWQXKHFTRAPEGTCRFVDJQXDIYBEUAUIVLBBDQGLCLELKUZ");
    msg.sys_dst.assign("TGYYWMBASEHXWNHYJHEUSYZKEDVPUWEGSRQNAZNDMBKTMQMTUZYJVYMGEVQGHOGLYQIEZCILJQGWRUVWCPPQFIOF");
    msg.flags = 31U;
    const char tmp_msg_0[] = {62, 17, 113, -63, 110, -128, -91, 73, 105, -125, 110, 26, 99, -26, -1, 36, -49, 30, 40, 87, 18, 84, 106, -79, -115, 37, 34, 83, -70, 65, 90, -98, 29, -10, 99, 80, 10, -38, -38};
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
    msg.setTimeStamp(0.6105930862433958);
    msg.setSource(10917U);
    msg.setSourceEntity(215U);
    msg.setDestination(31780U);
    msg.setDestinationEntity(100U);
    msg.sys_src.assign("WGHCIYIXFAVQNDGALVRWYOSAJQUFPUMKVUNLQPUOINJIGRZTTDJKHJDSABIMGEDUCFEEJDXIR");
    msg.sys_dst.assign("MATVZODHVDVGDLYMIOWSMFHEJSZIEAYMWNHAYDRQFUKEWKXFMFEIWCLNTPSYSIPDDTCNPADCNJVPZZGYASWTMJZKWXNZLPZCKRDNUEYGFYFLCFQQIUTSKQRYUOAGOEV");
    msg.flags = 66U;
    const char tmp_msg_0[] = {16, 108, -27, -21, 15, -64, -21, 74, 92, 49, 73, 76, -37, -69, -66, -120, -2, 90, 39, -23, -36, -103, 117, -3, 120, -115, 93, -55, 43, -89, -82, 125, -26, 50, 70, -58, -54, 48, -30, -3, 85, -87, 8, 26, -56, -28, 31, -31, 126, 57, 92, -126, -13, 99, 72, -53, 125, -5, -37, 89, -94, 104, 116, -26, -52, 18, -126, 74, 45, 108, 36, -114, 40, -68, -46, -101, 10, 33, 118, 27, -13, 6, 111, 19, -122, -71, 86, -115, -3, 29, 62, -59, -47, 65, -101, -57, 69, -29, -105, 69, 110, 73, 35, 77, -58, 92, -61, -65, 2, -65, 28, -83, 115, -125, -43, -3, 85, 78, -32, -61, 101, 52, -25, -113, -74, -23, 11, 59, 16};
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
    msg.setTimeStamp(0.745884328703413);
    msg.setSource(25190U);
    msg.setSourceEntity(40U);
    msg.setDestination(56352U);
    msg.setDestinationEntity(45U);
    msg.seq = 529U;
    msg.value = 36U;
    msg.error.assign("ZLLAKOTIYNKABVQDDZSHDBLNBMWOUHJTXRNIPWODTIESJYOPHGGCTGTTRCZLUUMOGVDXIZJRNIZSIFNAUMYDRUGLAHELYMMRKSFSCHKDSVCJACGJVKAXMIPIBMAMTQRCPKBV");

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
    msg.setTimeStamp(0.8597791645489737);
    msg.setSource(36008U);
    msg.setSourceEntity(103U);
    msg.setDestination(39765U);
    msg.setDestinationEntity(66U);
    msg.seq = 60027U;
    msg.value = 126U;
    msg.error.assign("BWFYCKAHEKQD");

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
    msg.setTimeStamp(0.3872101184256693);
    msg.setSource(20081U);
    msg.setSourceEntity(116U);
    msg.setDestination(37140U);
    msg.setDestinationEntity(149U);
    msg.seq = 36661U;
    msg.value = 192U;
    msg.error.assign("DCSSUSKBDXUECXVGNCMZZHXNJIAXLFMKYZJYWHHEQRQQOWGEOGCRMI");

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
    msg.setTimeStamp(0.4956974075800511);
    msg.setSource(36284U);
    msg.setSourceEntity(182U);
    msg.setDestination(2350U);
    msg.setDestinationEntity(236U);
    msg.seq = 49903U;
    msg.sys.assign("UEIXZSOIROMAXQGMAARVEINCKWIDMFFKYTJRVOTCCHFJUVVHGDFALNGFMTBHTKTGLEMDZEMSCPCJNISSRIOCGJAYPPLTNUNBMQFOPPRSMKJZJQPYBFBLNCWWWSVUHOKOQYYHNCAGWADYSKFLPQLEIUTCXDTXDOZRSYKWRDNHZVMWEEPAYX");
    msg.value = 0.716162515659209;

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
    msg.setTimeStamp(0.7984355003074468);
    msg.setSource(38795U);
    msg.setSourceEntity(58U);
    msg.setDestination(2846U);
    msg.setDestinationEntity(143U);
    msg.seq = 33528U;
    msg.sys.assign("ETFBNSYAHBCPYQHRDEYTMVWZLBRETDRUEDNHPTOQAGAVFPXFXTBORZWZLUG");
    msg.value = 0.45003546003976624;

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
    msg.setTimeStamp(0.6844670521352845);
    msg.setSource(16315U);
    msg.setSourceEntity(49U);
    msg.setDestination(56983U);
    msg.setDestinationEntity(181U);
    msg.seq = 26911U;
    msg.sys.assign("LAVCVSKEWPXARKNSCNEZLTPBDXPPSWYPRPZINOKVIWRQXMEBGOWVCMSFOMEDJNLYQZBLFGUIFITCKJETBWBGBAAVHZCMQYWQZMYBNCRJAG");
    msg.value = 0.7831149663492091;

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
    msg.setTimeStamp(0.4115634841845641);
    msg.setSource(28008U);
    msg.setSourceEntity(83U);
    msg.setDestination(34708U);
    msg.setDestinationEntity(133U);
    msg.seq = 43539U;
    msg.sys_dst.assign("STUDANHFHBCEPZXLIXAIRLQXLBGYYFLCHONXSPDEFXAXTRFUHQEYQEAOERIUQZZQWNJKIVGGGKMKGYKTYDKONZMKSJCBQJPHNDAJHTNUJKNOWEPDEDYOPSTCIRIVMNZKYRMYDHWEFMGUEPFVIVIMHUOASNIFJABOGURTTWZZZMVASPCJGCQMLLDWVSQGBAVZBHWELYQOUFPCPDCAKXBULCVBBCPRTOZLLMTMFSRJVRWFNSWBXX");
    msg.timeout = 0.6918009586240382;

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
    msg.setTimeStamp(0.20019712333737494);
    msg.setSource(12160U);
    msg.setSourceEntity(101U);
    msg.setDestination(63841U);
    msg.setDestinationEntity(221U);
    msg.seq = 26600U;
    msg.sys_dst.assign("TKEUYOOKVEEUUILICDIPTHXAAHHRZMQXKLPHEMDZNGHJAEVZTBNJLIQYFNJHOCKJECOPLTBONGBSYFGWQNZNHBGPMDCREEUSLBVCDIEQADABEBHWUYRCVKDQGQTSFMXFVZRTYXRWTNUMKFYWPXGLSPWGIJMARQP");
    msg.timeout = 0.3667025208894722;

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
    msg.setTimeStamp(0.019709434108182156);
    msg.setSource(60991U);
    msg.setSourceEntity(167U);
    msg.setDestination(30057U);
    msg.setDestinationEntity(199U);
    msg.seq = 37789U;
    msg.sys_dst.assign("TBFTBXFDYMRFIVHUQYBWQDZOHJTGEOZLNLWNHJQBGUTGYQUSNVHVRUTWMDYLQGORZCMSIMKIYCDUQJGAYIKCXPREKXYGBTRSMVBMFVELNAHLIRXTLISH");
    msg.timeout = 0.38468837028513514;

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
    msg.setTimeStamp(0.9049198310765827);
    msg.setSource(41694U);
    msg.setSourceEntity(243U);
    msg.setDestination(34963U);
    msg.setDestinationEntity(227U);
    msg.action = 18U;
    msg.longain = 0.3940231629523384;
    msg.latgain = 0.13912344558194667;
    msg.bondthick = 1567422749U;
    msg.leadgain = 0.5357564653560087;
    msg.deconflgain = 0.45167013570235326;

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
    msg.setTimeStamp(0.2663935159796642);
    msg.setSource(53382U);
    msg.setSourceEntity(131U);
    msg.setDestination(19069U);
    msg.setDestinationEntity(73U);
    msg.action = 237U;
    msg.longain = 0.7299045608166491;
    msg.latgain = 0.3312100030928955;
    msg.bondthick = 2540580671U;
    msg.leadgain = 0.0773137680908953;
    msg.deconflgain = 0.8686817744126001;

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
    msg.setTimeStamp(0.430551552489978);
    msg.setSource(59344U);
    msg.setSourceEntity(41U);
    msg.setDestination(51572U);
    msg.setDestinationEntity(213U);
    msg.action = 54U;
    msg.longain = 0.7411924231106475;
    msg.latgain = 0.7793891001419788;
    msg.bondthick = 3734864888U;
    msg.leadgain = 0.201169399791436;
    msg.deconflgain = 0.38632251717556987;

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
    msg.setTimeStamp(0.7693296575266725);
    msg.setSource(5555U);
    msg.setSourceEntity(131U);
    msg.setDestination(19685U);
    msg.setDestinationEntity(62U);
    msg.err_mean = 0.07027466725420628;
    msg.dist_min_abs = 0.564462264747129;
    msg.dist_min_mean = 0.822587920114154;

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
    msg.setTimeStamp(0.9829147533881125);
    msg.setSource(22215U);
    msg.setSourceEntity(220U);
    msg.setDestination(28229U);
    msg.setDestinationEntity(159U);
    msg.err_mean = 0.291171941062461;
    msg.dist_min_abs = 0.4338131543950797;
    msg.dist_min_mean = 0.14280448877683916;

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
    msg.setTimeStamp(0.5000812559813862);
    msg.setSource(29751U);
    msg.setSourceEntity(32U);
    msg.setDestination(10805U);
    msg.setDestinationEntity(35U);
    msg.err_mean = 0.39968584269193863;
    msg.dist_min_abs = 0.31170881401070094;
    msg.dist_min_mean = 0.8559365222737474;

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
    msg.setTimeStamp(0.8031967101510806);
    msg.setSource(18898U);
    msg.setSourceEntity(80U);
    msg.setDestination(16184U);
    msg.setDestinationEntity(195U);
    msg.action = 252U;
    msg.lon_gain = 0.8170938689321806;
    msg.lat_gain = 0.03061685833806327;
    msg.bond_thick = 0.737736311521887;
    msg.lead_gain = 0.3853642200698142;
    msg.deconfl_gain = 0.29041150066327914;
    msg.accel_switch_gain = 0.5748546931606753;
    msg.safe_dist = 0.4387248525725065;
    msg.deconflict_offset = 0.47342792205874007;
    msg.accel_safe_margin = 0.07211000915203669;
    msg.accel_lim_x = 0.6039433963107511;

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
    msg.setTimeStamp(0.8884558962131648);
    msg.setSource(9528U);
    msg.setSourceEntity(162U);
    msg.setDestination(2259U);
    msg.setDestinationEntity(82U);
    msg.action = 149U;
    msg.lon_gain = 0.6575766257426412;
    msg.lat_gain = 0.3527249389824205;
    msg.bond_thick = 0.3462721632831566;
    msg.lead_gain = 0.8017724222487577;
    msg.deconfl_gain = 0.4181850724866063;
    msg.accel_switch_gain = 0.3353623905902957;
    msg.safe_dist = 0.016491147737364265;
    msg.deconflict_offset = 0.9473112209362875;
    msg.accel_safe_margin = 0.09570305887023944;
    msg.accel_lim_x = 0.4343918571115708;

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
    msg.setTimeStamp(0.6674541781303736);
    msg.setSource(47044U);
    msg.setSourceEntity(217U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(12U);
    msg.action = 77U;
    msg.lon_gain = 0.8884270396092105;
    msg.lat_gain = 0.7280514805526148;
    msg.bond_thick = 0.9188495574340114;
    msg.lead_gain = 0.24226663247149827;
    msg.deconfl_gain = 0.11413572680487438;
    msg.accel_switch_gain = 0.8404959892137133;
    msg.safe_dist = 0.8312549748989194;
    msg.deconflict_offset = 0.7983259414785654;
    msg.accel_safe_margin = 0.6204511940596854;
    msg.accel_lim_x = 0.7156767019544313;

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
    msg.setTimeStamp(0.060350712457528544);
    msg.setSource(60708U);
    msg.setSourceEntity(249U);
    msg.setDestination(38466U);
    msg.setDestinationEntity(184U);
    msg.type = 59U;
    msg.op = 252U;
    msg.err_mean = 0.1552496427798602;
    msg.dist_min_abs = 0.2632654063691158;
    msg.dist_min_mean = 0.13762747331272762;
    msg.roll_rate_mean = 0.6396369889196012;
    msg.time = 0.5091565754647394;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 219U;
    tmp_msg_0.lon_gain = 0.37698349689897837;
    tmp_msg_0.lat_gain = 0.8683429445780554;
    tmp_msg_0.bond_thick = 0.4580541416990854;
    tmp_msg_0.lead_gain = 0.7230594626996862;
    tmp_msg_0.deconfl_gain = 0.6534576154031005;
    tmp_msg_0.accel_switch_gain = 0.019179913377139313;
    tmp_msg_0.safe_dist = 0.9822372514033146;
    tmp_msg_0.deconflict_offset = 0.4964245404792398;
    tmp_msg_0.accel_safe_margin = 0.9234916234186149;
    tmp_msg_0.accel_lim_x = 0.6139155362879056;
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
    msg.setTimeStamp(0.5930635461153624);
    msg.setSource(11427U);
    msg.setSourceEntity(18U);
    msg.setDestination(1317U);
    msg.setDestinationEntity(130U);
    msg.type = 134U;
    msg.op = 3U;
    msg.err_mean = 0.7762012467658573;
    msg.dist_min_abs = 0.08656575743580708;
    msg.dist_min_mean = 0.2971892215425018;
    msg.roll_rate_mean = 0.27132285206359374;
    msg.time = 0.5097841105680594;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 78U;
    tmp_msg_0.lon_gain = 0.8828661018991744;
    tmp_msg_0.lat_gain = 0.16706086407551501;
    tmp_msg_0.bond_thick = 0.48725970133358376;
    tmp_msg_0.lead_gain = 0.727176392622089;
    tmp_msg_0.deconfl_gain = 0.08280925638194159;
    tmp_msg_0.accel_switch_gain = 0.8775503800763551;
    tmp_msg_0.safe_dist = 0.21795367588028658;
    tmp_msg_0.deconflict_offset = 0.9341111431860116;
    tmp_msg_0.accel_safe_margin = 0.5815994628851892;
    tmp_msg_0.accel_lim_x = 0.5650214741915842;
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
    msg.setTimeStamp(0.6359322661823058);
    msg.setSource(25951U);
    msg.setSourceEntity(139U);
    msg.setDestination(19245U);
    msg.setDestinationEntity(12U);
    msg.type = 89U;
    msg.op = 219U;
    msg.err_mean = 0.32522254415804086;
    msg.dist_min_abs = 0.04877676281887122;
    msg.dist_min_mean = 0.33014938721599385;
    msg.roll_rate_mean = 0.24625367002069476;
    msg.time = 0.31467344038147504;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 133U;
    tmp_msg_0.lon_gain = 0.605713157030602;
    tmp_msg_0.lat_gain = 0.6589016966950286;
    tmp_msg_0.bond_thick = 0.4937314094391285;
    tmp_msg_0.lead_gain = 0.6233826559899002;
    tmp_msg_0.deconfl_gain = 0.20087060733991424;
    tmp_msg_0.accel_switch_gain = 0.7775700244288694;
    tmp_msg_0.safe_dist = 0.1373159815268925;
    tmp_msg_0.deconflict_offset = 0.8301497552628018;
    tmp_msg_0.accel_safe_margin = 0.5220801435878352;
    tmp_msg_0.accel_lim_x = 0.024895093279950098;
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
    msg.setTimeStamp(0.5171960899634007);
    msg.setSource(44747U);
    msg.setSourceEntity(141U);
    msg.setDestination(17223U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.7822739735208515;
    msg.lon = 0.586399261896833;
    msg.eta = 2126189864U;
    msg.duration = 36651U;

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
    msg.setTimeStamp(0.0068028475282569945);
    msg.setSource(55440U);
    msg.setSourceEntity(0U);
    msg.setDestination(53041U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.05208605303357272;
    msg.lon = 0.8410517491657867;
    msg.eta = 1274425244U;
    msg.duration = 5334U;

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
    msg.setTimeStamp(0.6506640355265373);
    msg.setSource(8039U);
    msg.setSourceEntity(36U);
    msg.setDestination(56558U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.8099868410886465;
    msg.lon = 0.9629523231067312;
    msg.eta = 3339677623U;
    msg.duration = 23165U;

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
    msg.setTimeStamp(0.18933316772798747);
    msg.setSource(38108U);
    msg.setSourceEntity(88U);
    msg.setDestination(54918U);
    msg.setDestinationEntity(182U);
    msg.plan_id = 15507U;

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
    msg.setTimeStamp(0.4718992882996855);
    msg.setSource(61265U);
    msg.setSourceEntity(58U);
    msg.setDestination(5985U);
    msg.setDestinationEntity(87U);
    msg.plan_id = 19361U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.626944404581699;
    tmp_msg_0.lon = 0.5999883336564767;
    tmp_msg_0.eta = 2666875650U;
    tmp_msg_0.duration = 57870U;
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
    msg.setTimeStamp(0.286741376671626);
    msg.setSource(31675U);
    msg.setSourceEntity(52U);
    msg.setDestination(34334U);
    msg.setDestinationEntity(174U);
    msg.plan_id = 9497U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5142650144861188;
    tmp_msg_0.lon = 0.28549851273395677;
    tmp_msg_0.eta = 3621144531U;
    tmp_msg_0.duration = 33257U;
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
    msg.setTimeStamp(0.016554170967336135);
    msg.setSource(50274U);
    msg.setSourceEntity(30U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(129U);
    msg.type = 115U;
    msg.command = 59U;
    msg.settings.assign("GHLNOSCNYUIOZSIMW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17030U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6596977560803485;
    tmp_tmp_msg_0_0.lon = 0.2975048062854718;
    tmp_tmp_msg_0_0.eta = 1764594920U;
    tmp_tmp_msg_0_0.duration = 20141U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FUVIXFHGVMTVNNRTARLVIGOHPHZQQKJZPSOOXAOBWCMUNWBEKOKUGYJSHKSMCKSCXDWCDTNEEQZLAFAJJVPMPIRXFMYJJOETSLIBEPGLOLIVNBXWBXWKAFQNOXIEEWDKCDGPPYVLLTYPHWPCNDLDRRBAWOSDNYGHZPDYUYXUJSSAAETTZRTDYZUCVUQGFSAIHIRTMJRZCHBBMABWFIWRYN");

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
    msg.setTimeStamp(0.0748867356119518);
    msg.setSource(41189U);
    msg.setSourceEntity(217U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(73U);
    msg.type = 202U;
    msg.command = 52U;
    msg.settings.assign("JRQQLEKNXWXUVIELVICAMUZPCIWHKKTGDFGATGJERLHENDPWKAWDGFBOJYFKXFRGPRAFUYBMBSOGWELTQZURUVXNXXYOPGCFVARPISQQNCALZDXLGHVXNYCXOSLZMCWYAJVCFNIUKYOUXDTYCHJHYYBZSJVIZEANCWOFHOBRRMOKNPIMOTEJBTLMSDCSHHJMRYLPEISUWSHDSAVIKPIGVMMQBDZK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30940U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6514411381802107;
    tmp_tmp_msg_0_0.lon = 0.8384178751353969;
    tmp_tmp_msg_0_0.eta = 2691478228U;
    tmp_tmp_msg_0_0.duration = 2388U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QLZKMEYTPCISUXXQOOYJGGZRHWGKZQPDXBUAENDGIHTKFYVWLTNMHEFKQCICCXUXUHGYTLBXOVDBBBDRRIQECJAMUGJIMEFONFOPKHKTLNOMAVBARQEIZJPODJTUVQEOOLFHGDFMGSPRPSMZAMCPSWHLADNSUXVLLVKEFSYQZAZJWWKNYZIRBCQ");

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
    msg.setTimeStamp(0.1578943291410304);
    msg.setSource(43744U);
    msg.setSourceEntity(154U);
    msg.setDestination(41405U);
    msg.setDestinationEntity(135U);
    msg.type = 30U;
    msg.command = 229U;
    msg.settings.assign("GKDLSFEGBJIMXISWOBFBSNONNSYQFAMOAYLPDQQGYMXOXXHYCLGRTJNXJZVVWNRFCVOECNGUUKCRLWTHAADUPLEKVGZPFZUPBRDZZARGEWSCSFSTZDKATKNROUPIWUIMPMZRJGLZEIVUMPMKFQBNTHLHLYHJPKZVUBHXQIDCSWPYSQOWYBEIYTSQBKQTPGZDAFCNHTXCBUOXWARDOYQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7491U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RZUGYJMYBAWCBUCYGSHEMJFUWUTKLAZPLCQPYMDQEVREBPGBRWORSVTWJCVTODWNBLEAQVJLLJKOTVKSOKNBGZKJTUIYNUAYFQDBPHGAMFBCZPMVKHURCMXRIKKNCSAQAFQXUXMHHUETLDZHAIRAXGTLNCJR");

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
    msg.setTimeStamp(0.04909235447116167);
    msg.setSource(5446U);
    msg.setSourceEntity(190U);
    msg.setDestination(50473U);
    msg.setDestinationEntity(56U);
    msg.state = 59U;
    msg.plan_id = 54169U;
    msg.wpt_id = 168U;
    msg.settings_chk = 52062U;

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
    msg.setTimeStamp(0.6080591828928527);
    msg.setSource(10496U);
    msg.setSourceEntity(131U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(16U);
    msg.state = 110U;
    msg.plan_id = 1455U;
    msg.wpt_id = 167U;
    msg.settings_chk = 21265U;

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
    msg.setTimeStamp(0.4016221364270073);
    msg.setSource(38294U);
    msg.setSourceEntity(174U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(127U);
    msg.state = 133U;
    msg.plan_id = 45381U;
    msg.wpt_id = 145U;
    msg.settings_chk = 25696U;

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
    msg.setTimeStamp(0.645819059914094);
    msg.setSource(8664U);
    msg.setSourceEntity(149U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(90U);
    msg.uid = 227U;
    msg.frag_number = 100U;
    msg.num_frags = 62U;
    const char tmp_msg_0[] = {29, 123, -41, 47, 99, 62, 23, 91, 38, -12, 65, 123, 47, -100, -1, 58, 76, 79, 88, -76};
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
    msg.setTimeStamp(0.3192286331077635);
    msg.setSource(13866U);
    msg.setSourceEntity(179U);
    msg.setDestination(28530U);
    msg.setDestinationEntity(16U);
    msg.uid = 90U;
    msg.frag_number = 178U;
    msg.num_frags = 146U;
    const char tmp_msg_0[] = {-5, 62, 18, 124, 62, 50, -100, -127, 52, 112, -47, 111, 90, 69, -62, -97, 96, 7, 52, -67, -29, -18, 42, 62, -126, 16, -83, 54, 7, -47, -49, -99, -32, 100, -101, -71, 52, 2, 62, 8, -73, 48, 28, -116, 69, -17, -89, -88, -123, 10, -49, -127, -93, 35, 114, -74, -75, -1, -90, -53, -111, 80, -25, 117, 79, 102, 5, 74, 6, 13, 50, -5, 63, -107, 87, -12, 27, -8, 29, -73, -37, 76, 22, -2, 103, 118, 52, -99, 1, -127, 25, -73, -74, 53, -50, -41, 115, -14, -97, 59, -105, -83, 21, 26, 92, 22, 108, 118, -79, 107, 103, -52, -84, -67, -91, 113, 63, 49, -57, 17, -70, -56, -79, 91, 43, 113, 18, 88, 110, -114, -39, 2, 87, -94, -45, -32, 91, -51, -56, -38, -76, -107, 79, 30, 97, -72, -10, 118, -109, 49, 16, -30, -116, 94, -112, 114, -37, -46, -47, 66, 20, 113, -109, -90, 107, -74, 110, -109, -28, 125, 35, -50, 47, 94, -53, 67, -34, -77, 104, -73, -72, 15, -108, 121, 87, -66, 87, -84, 39, 117, 92, -25, 113, -49, -65, 59, 23, 74, 36, 88, 103, -72, -42, 63, 88, 124, 121, 89, 123, -112, 111, -127, 29, 14, -1, 55, -110, -120, 112, 98, -88, 60, 115, -31, 83, -125, 22, 76, 32, -60, 26, -121, -13, -116, -102, 41, 1};
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
    msg.setTimeStamp(0.9230644392194031);
    msg.setSource(41662U);
    msg.setSourceEntity(112U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(70U);
    msg.uid = 9U;
    msg.frag_number = 248U;
    msg.num_frags = 144U;
    const char tmp_msg_0[] = {52, -95, 26, 85, 87, -10, 112, -85, -34, 63, 20, 68, 51, -128, -83, -93, 22, 114, 113, 84, -112, -30, 49, -88, 45, -23, 37, 61, 39, 35, 51, -80, -96, 0, -67, 121, -21, 75, 21, -55, -32, -104, -86, 6, 21, -100, -80, 46, -94, -86, -31, -41, 48, -109, -98, 114, -77, 80, -60, 40, -48, -102, 36, -38, 110, 61, -44, 29, -88, -104, 71, 42, 90, 19, 92, 97, 105, 119, -105, -37, -109, -103, -107, -110, -118, 16, 15, -47, 35, 58, -68, -88, 82, -1, 119, -98, -110, 82, -121, 54, -13, 8, -114, 88, 47, 57, 25, 115, 47, -21, -69, -52, 9, 115, -125, -5, -106, 18, -27, 124, 99, -72, -88, -61, 34, -35, 98, 17, -67, 65, -21, 123, -60, -34, 125, 123, 77, 93, -88, -58, 104, 0, 104, -118, 111, 124, -122, 67, -39, 105, -21, -116, -49, -110, 80, -64, -99, -89, -26, -7, 62, 53, 97, 60, -98, 96, -103, 76, -40, -73, -64, 39, -53, -1, -20, -9, -88, 14, 2, 92, 124, 69, -65, -9, 98, 120, 34, -59, 12, 36, -68, 14, -47, -34, -67, -14, 4, -28, -20, 103, -29, -57, -95, -76, -4, -114, -31, -73, 96, -122, 15, 11, 10, -10, -15, -60, -10, -86, 80, -105, -34, -53, -24, 17, -84, 6, 0, -36, -84, 121, -64, 115, 126, 21, 0, -79, 42, 64, -8, -83, -39, -22, -107, -68, 9, -41, 52, -125, -102, 39};
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
    msg.setTimeStamp(0.17363732138015797);
    msg.setSource(58838U);
    msg.setSourceEntity(134U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("GRYTOOYRNGUKFRZPAXBGBWPZHXMPTMFEGTZTKIZYJKLVSCRWJCFJKIHHZBBUNYQCGNWJEISCCEXLSEUMAOYUKWUARYKZHFQVRDHYQQVILSNKXNKZISRNJZJSGIWYNEAJHHLYOTQNWMDSFVJWKXSPGOBXIATAFADDWXIXIPQDFVROVWPCMZGTMDROVUBLDQRUCQXAANDMDEPQBPWBFPEUAFMOBZCGCQLHLDOMSYHVO");
    const char tmp_msg_0[] = {-14, 68, 120, 85, 62, 25, 68, 92, -116, 115, 125, -86, -2, -37, -87, -3, -87, 103, -86, 81, -63, 91, -1, 60, 66, -32, 78, -118, -4, 82, 62, -4, 80, 93, 116, -18, 96, 115, -74, -68, 70, -73, -67, 74, -93, -25, -49, 25, 6, 30, -74, -91, 8, 32, -107, 0, 39, 35, -38, 6, 125, 46, -54, -47, 103, -19, 37, 118, 117, -10, -103, 111, -46, 49, -113, -36, -78, 38, -71, 99, 25, -80, -25, 62, -88, -127, 121, 25, -52, 123, -75, -38, 101, -24, 84, -3, 68, -107, -92, 91, -2, 8, -9, 23, -118, -97, -85, 97, -119, 119, -16, -92, 118, 44, -61, -41, 124, 52, -103, -2, 74, 79, -95, 77, 106, 126, -23, -18, -24, 59, 28, -70, -119, -102, -23, -66, -32, -67, 106, 95, 66, 64, -95, 58, 76, -47, 31, -19, 88, -94, 84, -43, -97, 122, -45, 57, 105, 80, -66, -92, -99, -88, 57, 42, 103, 75, 119, -11, 81, -29, 119, -82, 48, -9, 33, -102, -48, -120, 6, -30, -4, -11, 53, 96, 9, -7, -67, -41, -15, -78, -44, -91, 45, 14, 5, -116, 24, -35};
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
    msg.setTimeStamp(0.9916835179363318);
    msg.setSource(56013U);
    msg.setSourceEntity(131U);
    msg.setDestination(13811U);
    msg.setDestinationEntity(35U);
    msg.content_type.assign("UCZOLRAYCZQQBVJTIHEZWCGPPAEXHROVLRSGVAFFADXVZWQWQEHJVPAKPGCQTKSMITDZOFDLSNMNSLGCUBOGUBRFTROIYVTKPYIVTVCFTAOQIGYYMZWNRMTXCFBPTRWBQHMKTCWSBNPBUWXDHLNRCIDBWXDHXUUARJZYSIEJNVYUFUQ");
    const char tmp_msg_0[] = {77, 114, -126, -84, -89, 33, 14, 42, 99, -74, 123, -43, 105, 105, -87, -92, 85, -105, 45, 29, 122, -125, 79, 2, -106, 40, 4, 70, 55, -24, -98, 58, 124, -41, -6, 70, 37, 22, 39, 34, 34, 104, 79, 71, -6, -104, -31, -94, -53, 114, -94, -5, -62, 50, -73, 32, 68, -78, 112, 73, 3, -80, 50, 3, -23, 3, -116, 124, -8, -65, -30, 102, 109, 35, 89, -41, -54, -39, 107, 22, -93, -100, -52, 57, 19, -26, 60, 34, 110, -115, 19, 71, -24, -64, -10, -45, 87, -127, 58, 26, -58, -109, -24, 121, -118, -35, -74, 8, -87, -8, 75, -28, -40, -100, 91, 105, 60, -52, 65, -66, -10, -7, 108, -2, 64, 77, 1};
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
    msg.setTimeStamp(0.4532463090582127);
    msg.setSource(8508U);
    msg.setSourceEntity(74U);
    msg.setDestination(28051U);
    msg.setDestinationEntity(52U);
    msg.content_type.assign("UJQTQHTLRGUVXWQPJUIPEEMJIYH");
    const char tmp_msg_0[] = {69, -18, 48, -124, -110, -120, 11, -87, 77, 100, 111, 110, -72, 123, -75, -21, 24, -119, -58, -127, 94, 38, 58, -70, 24, -102, 117, 38, -46, -1, -75, -123, -8, 30, 94, -49, -9, 83, 88, 63, -115, 32, -22, -13, 14, -92, -44, -5, 121, 58, 105, 27, -13, 18, 115, -67, -80, 38, -81, 126, 22, -83, 89, 0, 98, 11, 84, 16, -84, 67, 106, 0, -113, -116, 93, 72, 84, -123, 99, -120, -7, -124, 48, 111, -51, 8, 87, -50, -61, 79, 8, -69, 61, 23, -113, 34, -29, 106, -49, -110, -17, -112, 27, -19, 35, -18, 61, 67, 109, 44, -75, -54, 88, 25, 70, -69, 122, -75, 125, -108, -5, 76, -16, 57, -95, -45, 45, -54, 23, -10, 76, 19, 115, -22, -66, -123, 4, -98, -114, -17, -45, 81, 98, 91, -48, -57, -100, -122, -31, -83, -19, -110, -13, -90, -23, 11, 57, -41, 15, -34, 45, -80, 121, 28, 93, 96, 103, 13, 120, -8, 86, 123, -55, -40, -56, -103, 86, 24, 2, -48, -70, -115, 62, 78, -29, 81, -30, -102, -2, -90, -68, -92, 89, 11, -71, 50, -26, -73, 25, -56, 110, 62, -91, -9, -29, 23, -118, 42, -17, -42, -34, 28, -51, 75, 95, -108, 58, -11, -108, 108, -47, 117, 66, -89, -105, -119, -70, -19, 13, -25};
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
    msg.setTimeStamp(0.18658531453822114);
    msg.setSource(12782U);
    msg.setSourceEntity(234U);
    msg.setDestination(57362U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.08958514632162318);
    msg.setSource(61015U);
    msg.setSourceEntity(169U);
    msg.setDestination(13251U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.6244148521302271);
    msg.setSource(5978U);
    msg.setSourceEntity(45U);
    msg.setDestination(47827U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.5429676702723581);
    msg.setSource(17760U);
    msg.setSourceEntity(48U);
    msg.setDestination(48674U);
    msg.setDestinationEntity(71U);
    msg.target = 62446U;
    msg.bearing = 0.9955111373597099;
    msg.elevation = 0.9107965051487359;

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
    msg.setTimeStamp(0.21026303958750303);
    msg.setSource(36824U);
    msg.setSourceEntity(34U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(196U);
    msg.target = 20935U;
    msg.bearing = 0.7156817099619007;
    msg.elevation = 0.5353467696898322;

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
    msg.setTimeStamp(0.769825121004791);
    msg.setSource(39681U);
    msg.setSourceEntity(158U);
    msg.setDestination(63448U);
    msg.setDestinationEntity(3U);
    msg.target = 23633U;
    msg.bearing = 0.6826888073329832;
    msg.elevation = 0.7579930144127535;

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
    msg.setTimeStamp(0.36366181008279774);
    msg.setSource(2063U);
    msg.setSourceEntity(234U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(88U);
    msg.target = 56092U;
    msg.x = 0.8945930570519933;
    msg.y = 0.5943260177099563;
    msg.z = 0.49265556018858037;

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
    msg.setTimeStamp(0.3525798529019264);
    msg.setSource(6664U);
    msg.setSourceEntity(195U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(152U);
    msg.target = 30031U;
    msg.x = 0.9074767625414528;
    msg.y = 0.3735521707537487;
    msg.z = 0.21163184353783915;

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
    msg.setTimeStamp(0.3790035629162365);
    msg.setSource(52428U);
    msg.setSourceEntity(107U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(224U);
    msg.target = 63659U;
    msg.x = 0.4299456063808065;
    msg.y = 0.0474734303137363;
    msg.z = 0.7700007536361522;

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
    msg.setTimeStamp(0.7382058461708029);
    msg.setSource(661U);
    msg.setSourceEntity(68U);
    msg.setDestination(43569U);
    msg.setDestinationEntity(33U);
    msg.target = 22555U;
    msg.lat = 0.9704744590675792;
    msg.lon = 0.4823443031586332;
    msg.z_units = 129U;
    msg.z = 0.897762721818083;

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
    msg.setTimeStamp(0.8309634704371038);
    msg.setSource(44U);
    msg.setSourceEntity(235U);
    msg.setDestination(4971U);
    msg.setDestinationEntity(7U);
    msg.target = 60618U;
    msg.lat = 0.11938714276057616;
    msg.lon = 0.12141623835412862;
    msg.z_units = 109U;
    msg.z = 0.5645072545700454;

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
    msg.setTimeStamp(0.11229018941688551);
    msg.setSource(4083U);
    msg.setSourceEntity(215U);
    msg.setDestination(9147U);
    msg.setDestinationEntity(63U);
    msg.target = 5621U;
    msg.lat = 0.27149803324176747;
    msg.lon = 0.525178828984049;
    msg.z_units = 129U;
    msg.z = 0.6168691785196943;

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
    msg.setTimeStamp(0.6362897712351687);
    msg.setSource(35257U);
    msg.setSourceEntity(216U);
    msg.setDestination(24970U);
    msg.setDestinationEntity(29U);
    msg.locale.assign("TRZHDSHKUMKAAZAXIUMOPIUVNTZQVVJTMPXFFIMCNKLIJTNPCJQLOIZAM");
    const char tmp_msg_0[] = {-128, 69, -42, 46, -24, -121, -73, 78, 43, -45, -4, -12, -111, -99, -116, -35, 62, -14, 103, -15, 64, -56, -4, 114, -38, 67, 67, 119, -115, 94, 106, -53, -56, -92, -30, -69, 93, -73, 1, -73, 12, -120, 38, -97, 51, -96, 90, 8, 86, 18, -1, -54, 8, -90, -82, 124, 65, -126, -114, -16, -122, 102, -89, 71, 45, -125, 3, -74, -86, -32, 93, -101, -109, -40, 16, -64, -70, -3, -118, 126, 88, -27, 111, -105, -92, -93, 0, 80, -112, 95, -62, 120, -25, 51, 93, -113, 33, 106, 42, -7, 105, -6, 99, 34, -55, -45, -10, 26, -24, -85, 123, -36, -46, 31, -18, -1, 106, 103, 11, 80, 38, -103, 119, 63, -8, 91, -21, -96, 55, -11, -11, -104, 124, 81, -102, 108, 99, 96, -3, 104, -39, 116, -94, -104, -34, 117, -18, 110, 52, 47, 51, -36, -81, -40, -56, -51, 7, -51, 89, -64, 46, 67, 74, -48, 1, 72, 53, 37, 92, -69, -113, 89, -94, -31, 125, 18, 72};
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
    msg.setTimeStamp(0.9884577113982578);
    msg.setSource(25859U);
    msg.setSourceEntity(44U);
    msg.setDestination(55357U);
    msg.setDestinationEntity(107U);
    msg.locale.assign("MFQCSFVKOGJCFQJVPHVNELCWRIPDJDTPELPYBZGXHABKJYARXNHXQVUMVBVWYASAUMGVNLJDFZPHPOLDZHWCBAWSJZLIEHUVDHPCCSXXQDBBTRMOFUSQFBEWGSWCZRWKGXRXTIHRMFQGDFKBIIUCQGUIJCONAIYTQTGFYUXOZRNGXNEVSNCSDKLYQJSTMWIPEXF");
    const char tmp_msg_0[] = {-127, 7, 61, 126, 80, -57, -52, 109, -122, 77, 23, 69, 91, -34, 13, -97, -89, 37, -16, 0, 61, -26, 75, 99, 18, -78, -112, 98, 64, 104, 84, 40, -10, -78, 113, -83, -99, -99, -25, 13, -75, -52, -66, -121, -84, -101, 116, -82, -77, -41, 56, -128, -31, 54, -60, 46, 70, 73, 8, 81, 120, -15, 16, -82, -15, -104, -2, -103, -83, -100, 82, 3, -123, 39, 14, -63, -88, 49, 58, 32, 42, -65, -106, 94, -54, -86, 95, 118, -73, -79, 7, 3, 54, 100, -125, -26, -74, 23, 100, 20, 36, 108, 4, -56, -81, 107, -9, -49, -87, 118, -121, 39, -42, 75, -24, -19, -69, -9, -14, -42, 79, 99, -46, -45, 17, 25, 90, -10, -29, 16, -117, -32, -83, 119, 112, 6, 91, -91, 84, -75, -57, -88, 42, -16, 88, 1, 116, 36, 122, -72, -79, 17, -79, -61, 40, 85, 15, -76, -30, -71, -62, -98, 47, -18, -63, -116, -80, -59, 104, 51, -114, 78, 80, 126, -87, -73, -87, 26, -62, -54, -109, -54, 88, -24, 82, 6, 69, 93, 45, -16, 16};
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
    msg.setTimeStamp(0.7108948535042847);
    msg.setSource(31320U);
    msg.setSourceEntity(64U);
    msg.setDestination(44089U);
    msg.setDestinationEntity(91U);
    msg.locale.assign("UXSIQRYCPDGNFIZNJRMORFVXRTQWNDQZJOCWPUWVUKZMNXWMDHHFQYLYLOOANZKCEMEFBKCLOAEKLQXAVVWPDOIDCSAFGALSIISQIBGMVELVSTYEJPUGNRYGHGUEDOUTTXCZCDVYZPCYIQXHXESGGRKCQIXHYSJNCFGTOUJDSOETHRPFIJABSPNJVLKUTBPEBADUNFH");
    const char tmp_msg_0[] = {-1, -91, 14, -89, 8, -49, 21, -119, -92, 79, -99, 34, 33, 27, 120, -70, 4, 50, 22, -19, -58, -47, -125, -51, -50, -2, 102, -86, -42, -88, 106, -70, -28, 58, 118, 75, 93, 34, -16, 82, -114, -12, -69, 102, -84, 22, -27, 52, -54, -39, 58, -73, 31, -36, -52, -27, 41, -15, -48, 47, -89, 4, -66, -32, 75, 76, -43, 11, -63, -30, 89, 102, 59, -58, -115, 80, -124, -96, 105, 92, 0, -66, 54, -71, 75, 56, -47, 19, 41, 109, 28, -82, 93, -71, -127, 92, -23, -6, -113, -99, -21, -11, -56, 56, 39, 73, 43, 108, 41, 11, -30, 11, -29, -108, -6, 7, -64, -123, -15, 59, 120, -36, -62, -84, 36, 17, -106, -47, -76, 20, 90, -74, 105, 22, 63, 84, -27, -90, -119, 78, -38, 118, 32, -19, 54, 105, -72, -93, -32, 10, 68, 116, 94, -115, -1, -115, -14, -24, -18, -120, -18, -82, -94, 48, 112, -90};
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
    msg.setTimeStamp(0.6657199273124965);
    msg.setSource(39782U);
    msg.setSourceEntity(209U);
    msg.setDestination(44175U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.6442312254585028);
    msg.setSource(29125U);
    msg.setSourceEntity(5U);
    msg.setDestination(40598U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.6489861301358214);
    msg.setSource(15527U);
    msg.setSourceEntity(205U);
    msg.setDestination(47250U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.9548182124570275);
    msg.setSource(12588U);
    msg.setSourceEntity(112U);
    msg.setDestination(50366U);
    msg.setDestinationEntity(42U);
    msg.camid = 7U;
    msg.x = 47371U;
    msg.y = 47364U;

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
    msg.setTimeStamp(0.756799548017976);
    msg.setSource(55480U);
    msg.setSourceEntity(58U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(35U);
    msg.camid = 46U;
    msg.x = 29562U;
    msg.y = 37070U;

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
    msg.setTimeStamp(0.5570180074250498);
    msg.setSource(4731U);
    msg.setSourceEntity(180U);
    msg.setDestination(20940U);
    msg.setDestinationEntity(22U);
    msg.camid = 86U;
    msg.x = 6344U;
    msg.y = 62740U;

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
    msg.setTimeStamp(0.5180271099111978);
    msg.setSource(54936U);
    msg.setSourceEntity(38U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(228U);
    msg.camid = 57U;
    msg.x = 40603U;
    msg.y = 14852U;

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
    msg.setTimeStamp(0.9361622037918906);
    msg.setSource(25511U);
    msg.setSourceEntity(198U);
    msg.setDestination(51991U);
    msg.setDestinationEntity(38U);
    msg.camid = 221U;
    msg.x = 38356U;
    msg.y = 41929U;

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
    msg.setTimeStamp(0.09872672683750516);
    msg.setSource(15182U);
    msg.setSourceEntity(152U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(21U);
    msg.camid = 17U;
    msg.x = 5363U;
    msg.y = 35589U;

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
    msg.setTimeStamp(0.28578933078732194);
    msg.setSource(31920U);
    msg.setSourceEntity(16U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(159U);
    msg.tracking = 235U;
    msg.lat = 0.7320200215044274;
    msg.lon = 0.9299281226884809;
    msg.x = 0.5310939070372491;
    msg.y = 0.8896526551099131;
    msg.z = 0.36699102382771887;

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
    msg.setTimeStamp(0.3412684316180692);
    msg.setSource(21802U);
    msg.setSourceEntity(48U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(127U);
    msg.tracking = 211U;
    msg.lat = 0.3052798014516811;
    msg.lon = 0.6667943904171402;
    msg.x = 0.731060130903262;
    msg.y = 0.044113944260048665;
    msg.z = 0.6065095098537301;

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
    msg.setTimeStamp(0.43385675085105335);
    msg.setSource(60475U);
    msg.setSourceEntity(107U);
    msg.setDestination(35500U);
    msg.setDestinationEntity(54U);
    msg.tracking = 79U;
    msg.lat = 0.08883908323217826;
    msg.lon = 0.1508592540064495;
    msg.x = 0.518212189978439;
    msg.y = 0.23355739087994054;
    msg.z = 0.43432915739642763;

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
    msg.setTimeStamp(0.1512283552820749);
    msg.setSource(4882U);
    msg.setSourceEntity(183U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(145U);
    msg.target.assign("TLKPQKQOKFJHRWMSMDQGKSFVCZCNGJFWNNXEUTEHRULGOLMGRNHJYHSQRIEZXIULZTC");
    msg.lbearing = 0.8053818383860812;
    msg.lelevation = 0.5510108291225607;
    msg.bearing = 0.9990863456132018;
    msg.elevation = 0.9481355922940434;
    msg.phi = 0.46396878820954934;
    msg.theta = 0.12813405813768441;
    msg.psi = 0.7683687249161509;
    msg.accuracy = 0.6248071321029877;

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
    msg.setTimeStamp(0.17124523035362704);
    msg.setSource(28493U);
    msg.setSourceEntity(47U);
    msg.setDestination(25070U);
    msg.setDestinationEntity(186U);
    msg.target.assign("WRTSRSNZKPFFGUOAJWLEDIGBZAZUXOLPOKQNRGPWDVHISVDSXZDNTEMGMWCDBKRHTZKHOGGVVRIXYMFUDHCPFQXRCITCGDLSUZAEYPCOXFIJXQHKLFQVHCSNOUIGKCWWRYUUAXTJMNYFOYMGEWBAPKSPWCWNEVIOZZSALEBLBQCTRXJLBIHQRJVNJQQQVFYHPBNEEIVPLSZHXYZUMSTBYJAA");
    msg.lbearing = 0.25312635954598084;
    msg.lelevation = 0.7519462335292204;
    msg.bearing = 0.6476929018746872;
    msg.elevation = 0.6773718679205001;
    msg.phi = 0.8611014681181199;
    msg.theta = 0.981872277976425;
    msg.psi = 0.060331915172553985;
    msg.accuracy = 0.6954959649331347;

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
    msg.setTimeStamp(0.31380133447109315);
    msg.setSource(61108U);
    msg.setSourceEntity(211U);
    msg.setDestination(9399U);
    msg.setDestinationEntity(192U);
    msg.target.assign("SEFGPDGNVSWDUKOSZFJIQKMKKYILHJCYREXBVQPITLYMTWTTJPXUMZSTLOAVDJXFXNRMLFKGVOXRLNZWMWJKNYSVPRMVPWIABIUCHQCAVZBVHLHLRACSQFNHDBCNYQCTEVCYYWRWSEDFIEQTKDACJWGLVAKBBZOMOJDUXHYXGTDZRNUCUOOKZIAIGBCYNGEPHHMBPLPYATPRURMIZNJESIXHWBXFUKDSFLSOZEADXFZQFJPEUMNTQ");
    msg.lbearing = 0.6431905124450257;
    msg.lelevation = 0.9694052538844704;
    msg.bearing = 0.3396676435286441;
    msg.elevation = 0.9824389008595533;
    msg.phi = 0.4026396894719343;
    msg.theta = 0.5418547705374945;
    msg.psi = 0.5836482780702538;
    msg.accuracy = 0.3095261498970997;

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
    msg.setTimeStamp(0.7211024755834542);
    msg.setSource(12098U);
    msg.setSourceEntity(191U);
    msg.setDestination(19091U);
    msg.setDestinationEntity(118U);
    msg.target.assign("FTNZLSMXLWVZIIAXOKRIXNCVUVSYYUKKLSSQTXFDVGEUPURGYGWZIYUOVGVZAXHGEYOAMMJBKTKSHFTBYJXVENWDATEBANHKKQNLWBCECAPCPQP");
    msg.x = 0.8806136491190261;
    msg.y = 0.8377004098418953;
    msg.z = 0.3427171518757052;
    msg.n = 0.7137771402379237;
    msg.e = 0.7015554745101056;
    msg.d = 0.918210629769308;
    msg.phi = 0.7950446739462175;
    msg.theta = 0.7202074309777349;
    msg.psi = 0.9996717003130148;
    msg.accuracy = 0.45397395988084377;

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
    msg.setTimeStamp(0.060786619778249285);
    msg.setSource(44400U);
    msg.setSourceEntity(164U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(233U);
    msg.target.assign("IVOLVWGSSLYFKJDPUZJSRCEDDEHXNUHZWUPJVTRXHIALHSENEAJFGNHBEXKIMGQREGVKHUICLKJMXREKAJNDTFCJJZVQBSOTCJPGMCOLFAXLIKBDWFMPZNYIXCWGVURXPYVRJLPTBUOYOMTIQQAZCRBSAQUMSYEKCRZGHSSMYKMUQVWPP");
    msg.x = 0.42476203932737544;
    msg.y = 0.00011005286955911853;
    msg.z = 0.6825764551920843;
    msg.n = 0.36658827438826724;
    msg.e = 0.6169084382420525;
    msg.d = 0.19847623427821515;
    msg.phi = 0.014064702213679614;
    msg.theta = 0.09082788210914494;
    msg.psi = 0.4472985932639343;
    msg.accuracy = 0.9969268410296014;

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
    msg.setTimeStamp(0.7628635703679122);
    msg.setSource(14970U);
    msg.setSourceEntity(105U);
    msg.setDestination(35067U);
    msg.setDestinationEntity(82U);
    msg.target.assign("MCKHHGPFFNFNWUNDAKQIYZAWECRDIQOKYHAVYBGVSPXFNEACMCCSFURLUHVTLAPVVDYSDRDZBPFJVSJQLQGTLMPXLUIBDXTXNWVINJROKMQODZFHWWUEYKAOSQPJGSRKOKNEUP");
    msg.x = 0.2944136987398903;
    msg.y = 0.37102102616359944;
    msg.z = 0.8298619130611153;
    msg.n = 0.13267181110723636;
    msg.e = 0.9692607461189783;
    msg.d = 0.5291785811660357;
    msg.phi = 0.25594203478809074;
    msg.theta = 0.3611168273505658;
    msg.psi = 0.4452756976201214;
    msg.accuracy = 0.22711114661746112;

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
    msg.setTimeStamp(0.2864163265748556);
    msg.setSource(26020U);
    msg.setSourceEntity(112U);
    msg.setDestination(32392U);
    msg.setDestinationEntity(83U);
    msg.target.assign("BPRBASGJDVLRRTOAMBCBFSCAJKKSLNSBQTTLGCQEIIFZLKMYCDFFNOWPCYMAKAEFJODUDZLHSABMFXWDGVYMFWNJDVVGQDVBTHRPIEUYUIMPXXJPUNGZDSYROJWCSYIEJIOTBUBIQIVDZUOWWZQXEPZLVRNGFWAVJQRYXVHWXGAPEQNWSEZRRNKJJDY");
    msg.lat = 0.7984053341428224;
    msg.lon = 0.40573381513497;
    msg.z_units = 40U;
    msg.z = 0.6688558780138838;
    msg.accuracy = 0.3670533830064736;

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
    msg.setTimeStamp(0.613965568452985);
    msg.setSource(43258U);
    msg.setSourceEntity(83U);
    msg.setDestination(49966U);
    msg.setDestinationEntity(97U);
    msg.target.assign("SHZTGHIVPABFZWOCYILIMIUOZQYQIQKRKVQTKNYCEJJGGQKWOWWCXDWGZUHUAQYHZMAQDFMHPRNAVLLUGKIVQJLBVZEMXJMDR");
    msg.lat = 0.10514016237244739;
    msg.lon = 0.5194730113177148;
    msg.z_units = 2U;
    msg.z = 0.7453412918142504;
    msg.accuracy = 0.4715793724063121;

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
    msg.setTimeStamp(0.07953114881518353);
    msg.setSource(9136U);
    msg.setSourceEntity(35U);
    msg.setDestination(52226U);
    msg.setDestinationEntity(75U);
    msg.target.assign("BZIQNGHBVNDAOSJUKCFNMRPLYXTIHXARAWTHYBXUVZWMMYMFZBLADJQGIBQDVJIXGTRTKQPLXDZJIHJUVJGSWKGCPOXLTFCDEGDWKORMQNWUFCVIPTFJCLWDZXECCEGORMKANUQZTHVN");
    msg.lat = 0.7524153347874498;
    msg.lon = 0.2513756893035314;
    msg.z_units = 86U;
    msg.z = 0.43205407832552545;
    msg.accuracy = 0.27559135639093135;

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
    msg.setTimeStamp(0.11829299875060317);
    msg.setSource(52348U);
    msg.setSourceEntity(194U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(232U);
    msg.name.assign("BCDKZMCCQRNJMGGTAJWWXGSCBTNRRSYRCDGIWJVIEBCZULDRWMEVDTEFSKGOMONEORHXVAMDVSZFWPILQFGTCKIFNLERNTSJZTQFKHBJUSWVXXMGHYSKDNEBXVLPPOBHWYNHHQRJQVJNZZUZTPTZFYEX");
    msg.lat = 0.5604024674945539;
    msg.lon = 0.9676741017779121;
    msg.z = 0.18573724361438182;
    msg.z_units = 32U;

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
    msg.setTimeStamp(0.23339622098896118);
    msg.setSource(10248U);
    msg.setSourceEntity(199U);
    msg.setDestination(34377U);
    msg.setDestinationEntity(37U);
    msg.name.assign("HOUHJCDHGGQKNIPNWOZXHIHBVGAXCERNBMDDSYIOZVTELYM");
    msg.lat = 0.7335913324239866;
    msg.lon = 0.2086838635968914;
    msg.z = 0.9047102610428757;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.38532717820855444);
    msg.setSource(14457U);
    msg.setSourceEntity(240U);
    msg.setDestination(54621U);
    msg.setDestinationEntity(86U);
    msg.name.assign("SJFUVZUJMWSTTSXAQFDOTWJMPLAWCQBCVDODPPDMPERCXIBHYPTXPTVIROJJEYMRVGOGSQQCXYCUAHVDGASIDWXDRWYOXNULWEGYLWLBGNWMWIEISHGRFVAWPKILSZRHNBMMBBXQDHSJRXOFAUGYBHJRLTILGVSACAFDZNZQJCNHZLCUFXYJEGQNYZPKIFHIFHFVTEEZNOOBERPVQNARXKMUBKGEBNKIUZKNTHAJKCKTYT");
    msg.lat = 0.39951700491698117;
    msg.lon = 0.6747605560871918;
    msg.z = 0.9288756128071394;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.3377220287230146);
    msg.setSource(3137U);
    msg.setSourceEntity(138U);
    msg.setDestination(42821U);
    msg.setDestinationEntity(236U);
    msg.op = 224U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JDPIKOERRWGYRGVFVJCSIDTOSZRDHWNQCMKVYAPTSVAECGYJPWQACYBMPNJEEZNXAFRUSXXJBHQRHF");
    tmp_msg_0.lat = 0.2156100970955278;
    tmp_msg_0.lon = 0.055030991639615445;
    tmp_msg_0.z = 0.0533413996297456;
    tmp_msg_0.z_units = 179U;
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
    msg.setTimeStamp(0.13072390449320714);
    msg.setSource(59885U);
    msg.setSourceEntity(166U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(31U);
    msg.op = 128U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NQCMNQCABNDYXFOVBKVKWPXFLDKASBOVLVGXTVBNYWLEARCWHSRZVTBYORHZUTKVMSFLFXKQUFAFPSQYIDIRJEFBGOIHXGAPZIASCSVQWYDCQHOSLJTOXPFGCCMYTMQJUKHMNP");
    tmp_msg_0.lat = 0.14152591704645434;
    tmp_msg_0.lon = 0.7878028164994406;
    tmp_msg_0.z = 0.5212632569372504;
    tmp_msg_0.z_units = 99U;
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
    msg.setTimeStamp(0.574004691806286);
    msg.setSource(40672U);
    msg.setSourceEntity(56U);
    msg.setDestination(12861U);
    msg.setDestinationEntity(85U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.7189423555017765);
    msg.setSource(59912U);
    msg.setSourceEntity(204U);
    msg.setDestination(33872U);
    msg.setDestinationEntity(139U);
    msg.value = 0.41750776556039526;
    msg.type = 175U;

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
    msg.setTimeStamp(0.533255902842683);
    msg.setSource(36696U);
    msg.setSourceEntity(164U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(123U);
    msg.value = 0.7561551441772401;
    msg.type = 54U;

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
    msg.setTimeStamp(0.39437961668123955);
    msg.setSource(27811U);
    msg.setSourceEntity(205U);
    msg.setDestination(34890U);
    msg.setDestinationEntity(195U);
    msg.value = 0.47571600638055966;
    msg.type = 210U;

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
    msg.setTimeStamp(0.3858082155218392);
    msg.setSource(53809U);
    msg.setSourceEntity(35U);
    msg.setDestination(254U);
    msg.setDestinationEntity(128U);
    msg.value = 0.413833004499611;

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
    msg.setTimeStamp(0.1076997224878724);
    msg.setSource(18221U);
    msg.setSourceEntity(139U);
    msg.setDestination(14924U);
    msg.setDestinationEntity(104U);
    msg.value = 0.772018609240556;

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
    msg.setTimeStamp(0.5884009179989065);
    msg.setSource(11393U);
    msg.setSourceEntity(99U);
    msg.setDestination(4165U);
    msg.setDestinationEntity(64U);
    msg.value = 0.5431679639416852;

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
    msg.setTimeStamp(0.8557266971798166);
    msg.setSource(28962U);
    msg.setSourceEntity(104U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(16U);
    msg.timestamp_last_service = 0.6209293855548983;
    msg.time_next_service = 0.381309777934149;
    msg.time_motor_next_service = 0.32378116397878165;
    msg.time_idle_ground = 0.5293523683107308;
    msg.time_idle_air = 0.1854199150585798;
    msg.time_idle_water = 0.4200990441257234;
    msg.time_idle_underwater = 0.173424476561999;
    msg.time_idle_unknown = 0.90657231235803;
    msg.time_motor_ground = 0.7107618189939128;
    msg.time_motor_air = 0.14198177790056044;
    msg.time_motor_water = 0.30838406978207333;
    msg.time_motor_underwater = 0.12276981524229302;
    msg.time_motor_unknown = 0.339259153010661;
    msg.rpm_min = 1091;
    msg.rpm_max = -28389;
    msg.depth_max = 0.43063223627968195;

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
    msg.setTimeStamp(0.26523997169789004);
    msg.setSource(47271U);
    msg.setSourceEntity(238U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(228U);
    msg.timestamp_last_service = 0.4374597146679058;
    msg.time_next_service = 0.9818458873722021;
    msg.time_motor_next_service = 0.6206760293290605;
    msg.time_idle_ground = 0.8365986596565981;
    msg.time_idle_air = 0.47782666932829243;
    msg.time_idle_water = 0.1456998566992006;
    msg.time_idle_underwater = 0.0752094190556516;
    msg.time_idle_unknown = 0.2623670643884247;
    msg.time_motor_ground = 0.29539895185502774;
    msg.time_motor_air = 0.30376827996885736;
    msg.time_motor_water = 0.6071169242663319;
    msg.time_motor_underwater = 0.06763057425951202;
    msg.time_motor_unknown = 0.21125530745054744;
    msg.rpm_min = 1824;
    msg.rpm_max = 22295;
    msg.depth_max = 0.47740641535483286;

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
    msg.setTimeStamp(0.508255717714726);
    msg.setSource(56855U);
    msg.setSourceEntity(164U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(229U);
    msg.timestamp_last_service = 0.04287809072164939;
    msg.time_next_service = 0.293678614992391;
    msg.time_motor_next_service = 0.38511593125397703;
    msg.time_idle_ground = 0.07218492762912432;
    msg.time_idle_air = 0.1226945916581077;
    msg.time_idle_water = 0.3495561071795428;
    msg.time_idle_underwater = 0.389877443245082;
    msg.time_idle_unknown = 0.8597774742822115;
    msg.time_motor_ground = 0.3041383050872639;
    msg.time_motor_air = 0.8854364975422049;
    msg.time_motor_water = 0.815604530586033;
    msg.time_motor_underwater = 0.6770465730992167;
    msg.time_motor_unknown = 0.36114142325937426;
    msg.rpm_min = -10651;
    msg.rpm_max = 26811;
    msg.depth_max = 0.7323630564885292;

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
    msg.setTimeStamp(0.6551748423586238);
    msg.setSource(11386U);
    msg.setSourceEntity(200U);
    msg.setDestination(45344U);
    msg.setDestinationEntity(32U);
    msg.severity = 160U;
    msg.text.assign("WKMSBXWOKZYEUR");

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
    msg.setTimeStamp(0.6257922610870553);
    msg.setSource(57790U);
    msg.setSourceEntity(55U);
    msg.setDestination(28637U);
    msg.setDestinationEntity(206U);
    msg.severity = 177U;
    msg.text.assign("SOXCSZGZWDYVCEXFVDDILZLLSCDPDYGRCVTPEAUWYHZIQRWUSWKC");

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
    msg.setTimeStamp(0.9915008060099603);
    msg.setSource(34278U);
    msg.setSourceEntity(185U);
    msg.setDestination(52199U);
    msg.setDestinationEntity(95U);
    msg.severity = 184U;
    msg.text.assign("GHWHYBPVOXQQBQUOUGZWICTDDRRLYWJSRVZMBNSVGHFHWYRBEJFSHRYDZSXLEEQDFXOTTWDHMEAAPZRPLCVAUSIGHLLNTWBOAQUDEGJIMSZKJMCPNXXEUZPSPLPUAKTFRGEMWVIUVRJXCNHFFYXWZVYKSHOPCDIDGLNAQMPIJRWVZNXUJBFNJEGYQZTCIYFWPBGETCR");

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
    msg.setTimeStamp(0.27246282666420807);
    msg.setSource(760U);
    msg.setSourceEntity(136U);
    msg.setDestination(23917U);
    msg.setDestinationEntity(213U);
    msg.channel = 7;
    msg.value = 324517699;
    msg.gain = 221U;

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
    msg.setTimeStamp(0.030210650291951358);
    msg.setSource(27317U);
    msg.setSourceEntity(14U);
    msg.setDestination(41415U);
    msg.setDestinationEntity(130U);
    msg.channel = 122;
    msg.value = 1956829355;
    msg.gain = 107U;

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
    msg.setTimeStamp(0.4501605726967096);
    msg.setSource(33896U);
    msg.setSourceEntity(8U);
    msg.setDestination(53925U);
    msg.setDestinationEntity(115U);
    msg.channel = 35;
    msg.value = 760933321;
    msg.gain = 161U;

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
    msg.setTimeStamp(0.7845372644504641);
    msg.setSource(41381U);
    msg.setSourceEntity(87U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(190U);
    msg.ch01 = 0.09465530143930379;
    msg.ch02 = 0.7154985853363756;
    msg.ch03 = 0.8653635038744149;
    msg.ch04 = 0.064065939443256;
    msg.ch05 = 0.7284182719490274;
    msg.ch06 = 0.41368544932702933;
    msg.ch07 = 0.5952052922459777;
    msg.ch08 = 0.5447078867894344;
    msg.ch09 = 0.25537351337654124;
    msg.ch10 = 0.7203338139687159;
    msg.ch11 = 0.9729040906499774;
    msg.ch12 = 0.3282543026418391;
    msg.ch13 = 0.15366236743351047;
    msg.ch14 = 0.320700621743338;
    msg.ch15 = 0.11225124081364535;
    msg.ch16 = 0.8556799117487606;

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
    msg.setTimeStamp(0.9384579889020384);
    msg.setSource(54903U);
    msg.setSourceEntity(233U);
    msg.setDestination(36165U);
    msg.setDestinationEntity(237U);
    msg.ch01 = 0.8530000107409497;
    msg.ch02 = 0.1965316065133278;
    msg.ch03 = 0.5448643548852856;
    msg.ch04 = 0.8377772336585189;
    msg.ch05 = 0.9994578179793461;
    msg.ch06 = 0.8406983690709281;
    msg.ch07 = 0.261982775445494;
    msg.ch08 = 0.9754125389627453;
    msg.ch09 = 0.20403976340427832;
    msg.ch10 = 0.7090534776968934;
    msg.ch11 = 0.025982500095813488;
    msg.ch12 = 0.4034682312980299;
    msg.ch13 = 0.2990058803527118;
    msg.ch14 = 0.3074573180387714;
    msg.ch15 = 0.7130819748876943;
    msg.ch16 = 0.1449516108772788;

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
    msg.setTimeStamp(0.7094216233321681);
    msg.setSource(9198U);
    msg.setSourceEntity(183U);
    msg.setDestination(40931U);
    msg.setDestinationEntity(135U);
    msg.ch01 = 0.5955245343830098;
    msg.ch02 = 0.7370351001627026;
    msg.ch03 = 0.4028376655858539;
    msg.ch04 = 0.4671079895937348;
    msg.ch05 = 0.5111332984016278;
    msg.ch06 = 0.9369338118656081;
    msg.ch07 = 0.024628374630781602;
    msg.ch08 = 0.045066083651217226;
    msg.ch09 = 0.7763839895275139;
    msg.ch10 = 0.951406916454757;
    msg.ch11 = 0.6005370689812095;
    msg.ch12 = 0.017532352475061685;
    msg.ch13 = 0.6767347220043398;
    msg.ch14 = 0.9541942003847246;
    msg.ch15 = 0.10387318534666379;
    msg.ch16 = 0.4244295543117621;

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
    msg.setTimeStamp(0.8920714713337521);
    msg.setSource(61283U);
    msg.setSourceEntity(213U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(141U);
    msg.op = 247U;
    msg.lat = 0.6992173040761983;
    msg.lon = 0.6236800070029154;
    msg.height = 0.11790900721557906;
    msg.depth = 0.7686847714428543;
    msg.alt = 0.7368912965502206;

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
    msg.setTimeStamp(0.8814287879535441);
    msg.setSource(2403U);
    msg.setSourceEntity(174U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(49U);
    msg.op = 162U;
    msg.lat = 0.9004787196977037;
    msg.lon = 0.04876471085939538;
    msg.height = 0.5233350815023442;
    msg.depth = 0.2704318882343496;
    msg.alt = 0.009320135197566581;

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
    msg.setTimeStamp(0.5055354552502724);
    msg.setSource(57915U);
    msg.setSourceEntity(110U);
    msg.setDestination(53395U);
    msg.setDestinationEntity(126U);
    msg.op = 124U;
    msg.lat = 0.2516734025934223;
    msg.lon = 0.6743969770398583;
    msg.height = 0.2766239291380178;
    msg.depth = 0.040466359260743046;
    msg.alt = 0.007265806449673229;

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
    msg.setTimeStamp(0.14917155910447122);
    msg.setSource(26888U);
    msg.setSourceEntity(13U);
    msg.setDestination(31505U);
    msg.setDestinationEntity(65U);
    msg.nbeams = 16U;
    msg.ncells = 170U;
    msg.coord_sys = 187U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.98024312660666;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.41136252469694345;
    tmp_tmp_msg_0_0.amp = 0.5526567422914047;
    tmp_tmp_msg_0_0.cor = 251U;
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
    msg.setTimeStamp(0.22150517165932915);
    msg.setSource(13902U);
    msg.setSourceEntity(190U);
    msg.setDestination(955U);
    msg.setDestinationEntity(230U);
    msg.nbeams = 180U;
    msg.ncells = 119U;
    msg.coord_sys = 83U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4883242659403889;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.23896817267581438;
    tmp_tmp_msg_0_0.amp = 0.5988928196290729;
    tmp_tmp_msg_0_0.cor = 35U;
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
    msg.setTimeStamp(0.047905262917065095);
    msg.setSource(52322U);
    msg.setSourceEntity(146U);
    msg.setDestination(35461U);
    msg.setDestinationEntity(160U);
    msg.nbeams = 149U;
    msg.ncells = 215U;
    msg.coord_sys = 205U;

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
    msg.setTimeStamp(0.8457955513895077);
    msg.setSource(21059U);
    msg.setSourceEntity(195U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(57U);
    msg.cell_position = 0.9326354063315404;

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
    msg.setTimeStamp(0.20171521414554516);
    msg.setSource(60556U);
    msg.setSourceEntity(62U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(204U);
    msg.cell_position = 0.19538649979492562;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.18871213780886886;
    tmp_msg_0.amp = 0.7021127593941571;
    tmp_msg_0.cor = 201U;
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
    msg.setTimeStamp(0.791022232539037);
    msg.setSource(49222U);
    msg.setSourceEntity(52U);
    msg.setDestination(9721U);
    msg.setDestinationEntity(229U);
    msg.cell_position = 0.3319937608332739;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.2075378795759839;
    tmp_msg_0.amp = 0.07035118593042577;
    tmp_msg_0.cor = 241U;
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
    msg.setTimeStamp(0.028514346919877087);
    msg.setSource(53644U);
    msg.setSourceEntity(55U);
    msg.setDestination(51346U);
    msg.setDestinationEntity(141U);
    msg.vel = 0.7018827057547564;
    msg.amp = 0.2239374283334019;
    msg.cor = 253U;

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
    msg.setTimeStamp(0.9645647777044283);
    msg.setSource(25177U);
    msg.setSourceEntity(217U);
    msg.setDestination(25794U);
    msg.setDestinationEntity(100U);
    msg.vel = 0.3838844334691991;
    msg.amp = 0.2897335918997621;
    msg.cor = 74U;

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
    msg.setTimeStamp(0.718119121301772);
    msg.setSource(36707U);
    msg.setSourceEntity(207U);
    msg.setDestination(46148U);
    msg.setDestinationEntity(243U);
    msg.vel = 0.04428121399846563;
    msg.amp = 0.7619347787679248;
    msg.cor = 98U;

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
    msg.setTimeStamp(0.744339565810295);
    msg.setSource(28618U);
    msg.setSourceEntity(126U);
    msg.setDestination(41746U);
    msg.setDestinationEntity(182U);
    msg.name.assign("OWIAAPEEVCKZJMLUAHJCVYHBGDDJOZJXSMUGHBQCRYCVNJEIJTIBYPRWOUMDQNQRHTWXKCURWHONOKIATOYSYAWAFXNTDFDHYSLBAZKZKCFIFDEVSOBXUJQSVRTDEZGWFWEQBMJPZTSYFCTPCMKWJUSHJYLTZS");
    msg.value = 107U;

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
    msg.setTimeStamp(0.16405422854406448);
    msg.setSource(33056U);
    msg.setSourceEntity(145U);
    msg.setDestination(11440U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IIJJEMOWYMQQLIYXPUTHIVGYJRDIJSJVAZEWLQGKCVAZGTMKMSXOUFGXONGBQHYLMSGVZJWPYNBUNCKIBLKQHMM");
    msg.value = 239U;

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
    msg.setTimeStamp(0.8114464009888945);
    msg.setSource(17838U);
    msg.setSourceEntity(246U);
    msg.setDestination(2726U);
    msg.setDestinationEntity(177U);
    msg.name.assign("HNPMXIQNLWZRMKRKQXGBZRKDPBCPGKOPJJTOVFFAVWEJDZIWCYQIWZSOAMUAGCWTHHDRQSK");
    msg.value = 133U;

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
    msg.setTimeStamp(0.7881295234150464);
    msg.setSource(49307U);
    msg.setSourceEntity(205U);
    msg.setDestination(7792U);
    msg.setDestinationEntity(213U);
    msg.name.assign("PUKMKHLRSHQCHCZRXQYUVIMNAVGWZSJGRKDUNPWBDDMLNLNWWVEYKQEVISZEMBLLYXCJOTBSJJIZSVKDUBVJALDPROPCWYGYMLBOUCTHEXBIGRHRTTMFMQAIDL");

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
    msg.setTimeStamp(0.5570907322223698);
    msg.setSource(17042U);
    msg.setSourceEntity(133U);
    msg.setDestination(2386U);
    msg.setDestinationEntity(58U);
    msg.name.assign("USDHKQJKDEQUEQSTYGEQCNFCEWBOPTDSZKLXTTCHMNAFZPFOBIGVFSTOIUPGIRBSVSYXIBZWJWHJFMDRKHAKQGJJFRVVZODCLZFBAQWVYMAXNGCBQNELA");

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
    msg.setTimeStamp(0.9783140935518878);
    msg.setSource(43222U);
    msg.setSourceEntity(63U);
    msg.setDestination(20352U);
    msg.setDestinationEntity(98U);
    msg.name.assign("WNIBULKQOAYUWTKPGGJUCCSJRGCZZOJFMZLUESMEWHCGPDOHOJWZCVVKVODQVSHWEYJXMGNRLXXETWM");

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
    msg.setTimeStamp(0.8964952749753289);
    msg.setSource(58152U);
    msg.setSourceEntity(2U);
    msg.setDestination(25577U);
    msg.setDestinationEntity(138U);
    msg.name.assign("VQOMCACAPCHJMTYQPKLYBYQDHBBVTVOFEJLXHDLEQUSBWVENHGVIZGNFRRUQQWNTPOWMNUKAGVYQISJKRUUSRUCGYWHGHYPFENMDEVCRKXMKJHIONHJ");
    msg.value = 239U;

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
    msg.setTimeStamp(0.05584054929204474);
    msg.setSource(27653U);
    msg.setSourceEntity(234U);
    msg.setDestination(50729U);
    msg.setDestinationEntity(205U);
    msg.name.assign("FWCXICEDKAAZTKKLXKXGLQWWGTIOLTSKLXHJZNTCFRUBYGMKPYPIQVSYMXPCQEDUJYSABFCONIUFDOVZVVNHLHOTPA");
    msg.value = 89U;

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
    msg.setTimeStamp(0.31095739130310607);
    msg.setSource(21901U);
    msg.setSourceEntity(1U);
    msg.setDestination(64812U);
    msg.setDestinationEntity(160U);
    msg.name.assign("VBHCHVAFSQAYFWTYUXRLGJGHPMHIYIRLQVDZMZTTNBOUNTNMQBEARCQEKCOZYPGTWAPSJPKXDSOUMJDPWWBZNSSAEHWZYINXKBCERVGYVMYBPLANRUIFBDMIDEYXHJQLODVMT");
    msg.value = 180U;

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
    msg.setTimeStamp(0.22406038499004433);
    msg.setSource(42264U);
    msg.setSourceEntity(125U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(119U);
    msg.value = 0.4877905874729811;

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
    msg.setTimeStamp(0.19672203208946903);
    msg.setSource(46161U);
    msg.setSourceEntity(234U);
    msg.setDestination(223U);
    msg.setDestinationEntity(232U);
    msg.value = 0.03000351348407926;

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
    msg.setTimeStamp(0.6571119009891835);
    msg.setSource(25397U);
    msg.setSourceEntity(216U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8772197860519063;

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
    msg.setTimeStamp(0.12948302990462202);
    msg.setSource(39652U);
    msg.setSourceEntity(132U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(125U);
    msg.value = 0.7007162818490746;

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
    msg.setTimeStamp(0.5231740549539783);
    msg.setSource(46929U);
    msg.setSourceEntity(96U);
    msg.setDestination(4147U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1434477121864497;

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
    msg.setTimeStamp(0.9088103731345327);
    msg.setSource(17583U);
    msg.setSourceEntity(133U);
    msg.setDestination(17093U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8724609689649321;

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
    msg.setTimeStamp(0.48127410293356854);
    msg.setSource(61881U);
    msg.setSourceEntity(248U);
    msg.setDestination(3112U);
    msg.setDestinationEntity(211U);
    msg.value = 0.8732494139632003;

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
    msg.setTimeStamp(0.6655459070348347);
    msg.setSource(23482U);
    msg.setSourceEntity(130U);
    msg.setDestination(38604U);
    msg.setDestinationEntity(41U);
    msg.value = 0.14736072255379895;

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
    msg.setTimeStamp(0.2941862799448637);
    msg.setSource(57637U);
    msg.setSourceEntity(101U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(48U);
    msg.value = 0.40963437069736697;

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
    msg.setTimeStamp(0.5142660761150383);
    msg.setSource(41338U);
    msg.setSourceEntity(79U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(147U);
    msg.restriction = 100U;
    msg.reason.assign("TUTKYZJNNQHMROWLEXSHZVMZOBJCILPVVUYCQSZITJIHDPRYXUMQTOKXBPLZHSOKRZOUCMCAJ");

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
    msg.setTimeStamp(0.708486215052115);
    msg.setSource(43689U);
    msg.setSourceEntity(174U);
    msg.setDestination(54958U);
    msg.setDestinationEntity(151U);
    msg.restriction = 153U;
    msg.reason.assign("RBPBMGWTBXQYDBLZOSNFYBWDCKAPMWZFECDCJNOFQCHMGPHXJQMENMSEFOKTCOBTKSRHWFDPHTCSSLXBFSPEFQMLTIVAXTSUBNRGIWJNAOGXBDWFRVKLOWTEHNRZQLQJUAMYMNYLVNUKQLFLZHXPIAGAUKJYUIVIDOAYKKMNKISHPIXFJSUWLWZHZQVLBVJETWAYAOXPAGHOPDVTYEDZICHJUCJRVO");

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
    msg.setTimeStamp(0.42290020353245383);
    msg.setSource(38601U);
    msg.setSourceEntity(131U);
    msg.setDestination(49102U);
    msg.setDestinationEntity(199U);
    msg.restriction = 9U;
    msg.reason.assign("UNPMNNCZXXDVNQQRFAKTKKZMRGKKLCXMSXVIDUFSQHFTRAFNEPYSOJHIVGPOFKZDTYPPLNAD");

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
    msg.setTimeStamp(0.9846141072035887);
    msg.setSource(64845U);
    msg.setSourceEntity(128U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(38U);
    msg.path_param = 0.4836722389112198;
    msg.lat = 0.9108285089191372;
    msg.lon = 0.6885826803072634;
    msg.z = 0.42043937881837135;
    msg.r_f = 0.5773181290736852;
    msg.p = 0.10628377763896613;

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
    msg.setTimeStamp(0.3490468516236389);
    msg.setSource(30393U);
    msg.setSourceEntity(48U);
    msg.setDestination(7053U);
    msg.setDestinationEntity(96U);
    msg.path_param = 0.7498562395779236;
    msg.lat = 0.4586513622707383;
    msg.lon = 0.738958420441792;
    msg.z = 0.13608431866685033;
    msg.r_f = 0.7526683855872733;
    msg.p = 0.7782897746757778;

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
    msg.setTimeStamp(0.2147993958986133);
    msg.setSource(18777U);
    msg.setSourceEntity(254U);
    msg.setDestination(8760U);
    msg.setDestinationEntity(63U);
    msg.path_param = 0.42198387937226456;
    msg.lat = 0.5558684157480477;
    msg.lon = 0.7988576521451932;
    msg.z = 0.5255803627378729;
    msg.r_f = 0.052369530237749484;
    msg.p = 0.20094488555435375;

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
    msg.setTimeStamp(0.7619295866589079);
    msg.setSource(39181U);
    msg.setSourceEntity(114U);
    msg.setDestination(34706U);
    msg.setDestinationEntity(78U);
    msg.path_param = 0.6958225536147419;
    msg.x = 0.3489005651788697;
    msg.y = 0.7909256218418277;
    msg.z = 0.9877037831760931;
    msg.r_f = 0.2563143728941044;
    msg.p = 0.9993801885956793;

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
    msg.setTimeStamp(0.19654386417349345);
    msg.setSource(47831U);
    msg.setSourceEntity(36U);
    msg.setDestination(24560U);
    msg.setDestinationEntity(245U);
    msg.path_param = 0.44482492356077485;
    msg.x = 0.9299491974032567;
    msg.y = 0.8456154139758112;
    msg.z = 0.7845953340960413;
    msg.r_f = 0.14949748590634393;
    msg.p = 0.6127799151685094;

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
    msg.setTimeStamp(0.1264704350875816);
    msg.setSource(24625U);
    msg.setSourceEntity(75U);
    msg.setDestination(54761U);
    msg.setDestinationEntity(142U);
    msg.path_param = 0.5984447071555976;
    msg.x = 0.13432572175313973;
    msg.y = 0.18354794274974862;
    msg.z = 0.643450872833894;
    msg.r_f = 0.6281998129001756;
    msg.p = 0.8405446021159776;

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
    msg.setTimeStamp(0.8249244984284306);
    msg.setSource(42349U);
    msg.setSourceEntity(144U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(7U);
    msg.op = 121U;
    msg.experiment = 166U;
    msg.obstacle = 115U;

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
    msg.setTimeStamp(0.2586292598215123);
    msg.setSource(37311U);
    msg.setSourceEntity(248U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(111U);
    msg.op = 123U;
    msg.experiment = 88U;
    msg.obstacle = 27U;

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
    msg.setTimeStamp(0.32770160404763693);
    msg.setSource(25565U);
    msg.setSourceEntity(26U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(71U);
    msg.op = 148U;
    msg.experiment = 87U;
    msg.obstacle = 59U;

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
