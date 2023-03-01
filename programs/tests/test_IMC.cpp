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
// IMC XML MD5: de3f20d1a93e93aefc1cee7375f1fb92                            *
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
    msg.setTimeStamp(0.46647425110157936);
    msg.setSource(51834U);
    msg.setSourceEntity(72U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(35U);
    msg.state = 1U;
    msg.flags = 144U;
    msg.description.assign("XMLPHBAANEWDRDURDCJTMTCNRPKXZZNUADPBVWHFYIWRJWPVKCOWEEUWNSVKACQXJZIDNHODFYQOYQYALNATHWGPJFTFEWLGCEVYMUCSVLXQMAEUOUZRAPYSDISDHRKKTJPLYZBNSUQHNJVZPMJVAABSGKZRG");

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
    msg.setTimeStamp(0.40972131561423875);
    msg.setSource(26569U);
    msg.setSourceEntity(64U);
    msg.setDestination(64675U);
    msg.setDestinationEntity(131U);
    msg.state = 140U;
    msg.flags = 85U;
    msg.description.assign("PMOISKGDQSVNZDNOFJNZMCSLNWJEUWVKJKHIDJXSSQXKRFGRQHIXBVOTHJZJGYTZNWYBQVBGMCLWYIYBQTLEXJNPLTUBOAPQGQTBPBJGBEANRCKRXALEDOUWGLAZCOEWCLDBLMCVWAWZSHSXVIUMHFNRTTJPFFATZ");

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
    msg.setTimeStamp(0.48230412657568345);
    msg.setSource(55787U);
    msg.setSourceEntity(14U);
    msg.setDestination(60747U);
    msg.setDestinationEntity(128U);
    msg.state = 56U;
    msg.flags = 216U;
    msg.description.assign("ZVNCBLBEEZDEKSIXZIGCHWTOTBNQXFUSAJHNIQLABCUDPRY");

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
    msg.setTimeStamp(0.12704668193564506);
    msg.setSource(57044U);
    msg.setSourceEntity(160U);
    msg.setDestination(60849U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.5905016477356471);
    msg.setSource(43967U);
    msg.setSourceEntity(167U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.3129175598115652);
    msg.setSource(20018U);
    msg.setSourceEntity(104U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.6312139707123258);
    msg.setSource(9928U);
    msg.setSourceEntity(191U);
    msg.setDestination(44948U);
    msg.setDestinationEntity(202U);
    msg.id = 179U;
    msg.label.assign("GPMZJFPVIZFMEQGCAVWCNRWNVHVWRTIUOJLKPYXRJHFPXUWEXVRJCQGAOLDKNYGWUMXNZPLJXHHTYOFOVVTGEWBOIFMOZGADDSYAMJDNKASYLCNNYHQKIFHSZUHSBLAIQRAXNHOUFUDNFSMTOZAWRXCWGHVIVMYITCEZQPXMRUDRDCZBKIBBETKQEOXGELYLQSYTVLYIGSWBJXKKDBIJUZQBTGDDPQAAHCWZOMSM");
    msg.component.assign("SCJEVXNDQAKOIXUCORWYIYADDMUDNHOXXKXURURFSMVCAADRZPNYTLVKBDMBIZXZTIODYOCBPQ");
    msg.act_time = 48326U;
    msg.deact_time = 54238U;

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
    msg.setTimeStamp(0.8376685757495774);
    msg.setSource(6360U);
    msg.setSourceEntity(81U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(180U);
    msg.id = 203U;
    msg.label.assign("SDGQUGZMFPUAEAURPNGBSCCVJTTGBALLDKDSABCWEAVIJQDCNZLTJANRBSIEAKILBAITXZWOBFPCEQRWTXKGYNVOQRSCGHOJTMRXROTKNBYNZXKGQLEYFMPEXVDXTSHFPVIEBMTRHUHJGYAYSNPZFXHVVCSPDUYRSIHDYJEOWZSGEWWLIU");
    msg.component.assign("LXLYHBTUFQCLPEZAZQBSDEOVHPJMQWNVCUGILRWHJNGPQMLACJTOJPTRKDTEASXALOQNASRKKRJOPWFXBEOQFJKVZDJRIIHTSOQBOWXGIONBKRH");
    msg.act_time = 36467U;
    msg.deact_time = 30210U;

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
    msg.setTimeStamp(0.817734839461135);
    msg.setSource(55287U);
    msg.setSourceEntity(20U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(55U);
    msg.id = 38U;
    msg.label.assign("QNFKXKULEXTYKIMFTNYWWKRBXDSCZETWVOHTRYPINNOXVLIMJLAYZLEZBIMEYTDYXAJGYHVDWOAORGJUBEGATGSCHQSLQWRIHHJKVPLXFZHNZQQAQU");
    msg.component.assign("FOZRPGGECGOAQICMHRIXCAIQOOJFVASGTMXMDDIMQPGRDIFHKAMLTBNUAZZPQXZVUBKAVFUCGYNTJBPNSWUVZYVSKXAUFUXSRGUWNCWELHLTEFEUPZSJDBWXMBWYJHOHKHRIQVWBQSAVCHTVMTPXYABYDHEXNYLKWQRNIDJOKSNLFIXFFEEKALOZSYPDLDGZOQQBJWWJPCBUZEHMPMNKKYUSPSFODE");
    msg.act_time = 63436U;
    msg.deact_time = 42209U;

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
    msg.setTimeStamp(0.3711743296906572);
    msg.setSource(61824U);
    msg.setSourceEntity(209U);
    msg.setDestination(1039U);
    msg.setDestinationEntity(40U);
    msg.id = 29U;

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
    msg.setTimeStamp(0.12919019726215952);
    msg.setSource(30164U);
    msg.setSourceEntity(119U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(217U);
    msg.id = 240U;

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
    msg.setTimeStamp(0.7964674191113752);
    msg.setSource(10865U);
    msg.setSourceEntity(219U);
    msg.setDestination(16374U);
    msg.setDestinationEntity(57U);
    msg.id = 182U;

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
    msg.setTimeStamp(0.9558919774791086);
    msg.setSource(27168U);
    msg.setSourceEntity(64U);
    msg.setDestination(14904U);
    msg.setDestinationEntity(129U);
    msg.op = 134U;
    msg.list.assign("WPAACZUBSBWTNUUTQTZQHWLDOYJVJNBCRSHJFOFQHKSGLVGHWRCCFXDLVYEWLMEZBYIVLUJSVZULMBXA");

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
    msg.setTimeStamp(0.005640925237990979);
    msg.setSource(34219U);
    msg.setSourceEntity(2U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(45U);
    msg.op = 60U;
    msg.list.assign("PHDURHVOEQQNMNVUIUJATPZWBRFROPGXKRVYSDDKMEXJGEJGUBBBJFPNLEORDQWQSWXCCYVFFEDLQCPSTIBFSCRAYATGECLZXQRYPFMWKFDCBKWMNIXOCGPHCMZYIQFFKVHHIBZISGDXHSIKOCEIYWDUSWMXLOLTAXZVMUHBOGGKPUUVEAMBZLZSZLYTHHGQDLACSYWBMTRXKTKYJAWTATAIDNMLJZXHELEOUJYNRRKWOQPGTJNU");

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
    msg.setTimeStamp(0.44825063408803956);
    msg.setSource(26019U);
    msg.setSourceEntity(244U);
    msg.setDestination(12314U);
    msg.setDestinationEntity(202U);
    msg.op = 222U;
    msg.list.assign("BORSWYIBZTUMXSAWTAVBRHBONVELGGXKQRCIXWLSEPHXQWZZCNFMCPUCLOIMHMEASWFCTIZYAGJQCVGREYXSYDJUKLQBUIDKOPMQAQXPFOGRREANAVKJMZIELYFEACSTPZUCDEBMKWKQTUYZAGDTOJLHWVNJXIXZVVJLODYEFPHJXSFNXQHEIPI");

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
    msg.setTimeStamp(0.11574020482822711);
    msg.setSource(40902U);
    msg.setSourceEntity(221U);
    msg.setDestination(39917U);
    msg.setDestinationEntity(130U);
    msg.value = 167U;

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
    msg.setTimeStamp(0.7947876521696531);
    msg.setSource(8437U);
    msg.setSourceEntity(49U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(91U);
    msg.value = 3U;

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
    msg.setTimeStamp(0.6791026772645722);
    msg.setSource(62247U);
    msg.setSourceEntity(237U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(152U);
    msg.value = 200U;

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
    msg.setTimeStamp(0.5871235015604399);
    msg.setSource(63766U);
    msg.setSourceEntity(63U);
    msg.setDestination(14091U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("NGHHHGZXFCTACAEVEBFRYMXBAEAMNRUSIBHQTTNAELCWWVPUJNGZRYSJJTIHDLOSFMYKXYOXJCVIZVNUPALTOQNBRZQBELLCFUDCEGISPUPQXVZDJNUNGRAIBWZWT");
    msg.message_id = 59935U;

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
    msg.setTimeStamp(0.32666821873768626);
    msg.setSource(25771U);
    msg.setSourceEntity(17U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(150U);
    msg.consumer.assign("KFXBFUPNBZBEUYCHOKPKUWZRSZWIIUFJOHDYRPEKTZDQWPSFZGADZEYBCVRQWVWRWYCOKVTENLGITGNBRGTOEDODIKOMDASTIWXVKIDQCXYSMEHPBKISNREVCPFUUNXIGQMLLUMRYGFEJQYHVVCSHFISABMZAEM");
    msg.message_id = 59663U;

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
    msg.setTimeStamp(0.8411356239144344);
    msg.setSource(42676U);
    msg.setSourceEntity(85U);
    msg.setDestination(43526U);
    msg.setDestinationEntity(192U);
    msg.consumer.assign("BBGGNLQTQXCTKIVIKWOAIDEVEFPTHYMWZJWVZQRLGPHPRFXQNRRDHYNOHXBEILURVOOLSHVMKJWXEBZWGBJFUECIOFFDLUZLUIGPUJPHUJWVRYKSXYJSOWJOQVBNBPAQKFLOPEIVRCJRZNDKDM");
    msg.message_id = 5772U;

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
    msg.setTimeStamp(0.8801898418426838);
    msg.setSource(21556U);
    msg.setSourceEntity(79U);
    msg.setDestination(42853U);
    msg.setDestinationEntity(51U);
    msg.type = 92U;

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
    msg.setTimeStamp(0.41046934633763477);
    msg.setSource(21801U);
    msg.setSourceEntity(92U);
    msg.setDestination(40528U);
    msg.setDestinationEntity(53U);
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
    msg.setTimeStamp(0.4963856746552918);
    msg.setSource(55446U);
    msg.setSourceEntity(18U);
    msg.setDestination(53409U);
    msg.setDestinationEntity(117U);
    msg.type = 59U;

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
    msg.setTimeStamp(0.33133884150575543);
    msg.setSource(2164U);
    msg.setSourceEntity(104U);
    msg.setDestination(51640U);
    msg.setDestinationEntity(243U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.17093885063018455);
    msg.setSource(14914U);
    msg.setSourceEntity(6U);
    msg.setDestination(65034U);
    msg.setDestinationEntity(168U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.4292797522856576);
    msg.setSource(30103U);
    msg.setSourceEntity(111U);
    msg.setDestination(3117U);
    msg.setDestinationEntity(99U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.8671208376715824);
    msg.setSource(26259U);
    msg.setSourceEntity(13U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(154U);
    msg.total_steps = 242U;
    msg.step_number = 97U;
    msg.step.assign("VLZATFRZPOYIOESVJDRQDGEFTDECJFUZXFEXXYRBLHSFVJRPYBCENLZDHZHROWXXQZBGFOKQMUCMELBMZIUVDXYZAKJYVNYCHNMWWCPSJOGIQXIKUMPCGQFKTNAXRDUMOXSJMOWI");
    msg.flags = 200U;

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
    msg.setTimeStamp(0.25021787629264236);
    msg.setSource(27648U);
    msg.setSourceEntity(132U);
    msg.setDestination(18078U);
    msg.setDestinationEntity(200U);
    msg.total_steps = 223U;
    msg.step_number = 141U;
    msg.step.assign("DZYQUGSPYAHYUUBRHYOMXEPIJXSEJTVNQZRZHVPPUHSOKDMADRVXDZXXORPJZCYGOEKQNNJKCXFZGUHBJBTODXKQIUNSJUCSDOSEWOLIGAWLOSTTMJBIMELRWGLDZEWFMIXNHMVRGHVQHTTIRKAGFGTCBPAMAAPLKHLYYSAURKXDFGZSLLPBTNDBEQBURIKCNVWMQTQZPFYOHCJSBVVIFVGFZYWCVJCFWXLUAWEMNFATCWEI");
    msg.flags = 149U;

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
    msg.setTimeStamp(0.8952128915355343);
    msg.setSource(64099U);
    msg.setSourceEntity(234U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(150U);
    msg.total_steps = 53U;
    msg.step_number = 54U;
    msg.step.assign("ZDWQYCZCJNTY");
    msg.flags = 96U;

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
    msg.setTimeStamp(0.09449620052917063);
    msg.setSource(26322U);
    msg.setSourceEntity(166U);
    msg.setDestination(12132U);
    msg.setDestinationEntity(99U);
    msg.state = 167U;
    msg.error.assign("ACGLWTFKVNYLLSJHAOWDOHMBQAMFEBBIZKAJMNCNYT");

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
    msg.setTimeStamp(0.9544695145664672);
    msg.setSource(44537U);
    msg.setSourceEntity(112U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(254U);
    msg.state = 95U;
    msg.error.assign("VJQWZPRTKKJZFQYKYXISDPNDCHDXMQFAJXYGDRODUASZHHJYCJNGWJNQXYMFWHFSSZAGVCOKAUETXQYFLUYPLKPBBRSVNRQBLESAIZJGKXVIEHYTMGHHZKWZITEUORGNVMDRTBCIKPCQIJCFRSAPCPOEQGTWOOXXPZWBQFCIUQHLD");

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
    msg.setTimeStamp(0.7057789808999702);
    msg.setSource(46013U);
    msg.setSourceEntity(224U);
    msg.setDestination(55779U);
    msg.setDestinationEntity(76U);
    msg.state = 70U;
    msg.error.assign("TPAAQADQUPFBZVBLJZQMSWRYVQGUZHKEOQXWMZWVEOQKGDTFGYOTZDCYTYGLHYHUEZNXOZOFWHSLDKXBABZELSMXURMVXHFEFMVPGFYPNDXLNGCCLNWSBXINLJHBMVUYLVMKXNUWSUUVEZBKIASMYCRZDGRFOCPIUKJPI");

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
    msg.setTimeStamp(0.6150953411454504);
    msg.setSource(23468U);
    msg.setSourceEntity(161U);
    msg.setDestination(52543U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.013826380225843482);
    msg.setSource(33598U);
    msg.setSourceEntity(196U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.5296670222829851);
    msg.setSource(46141U);
    msg.setSourceEntity(95U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.5789118380294601);
    msg.setSource(27855U);
    msg.setSourceEntity(192U);
    msg.setDestination(54508U);
    msg.setDestinationEntity(143U);
    msg.op = 105U;
    msg.speed_min = 0.6800635221184637;
    msg.speed_max = 0.7359534799640801;
    msg.long_accel = 0.3102227699633311;
    msg.alt_max_msl = 0.5861590010803035;
    msg.dive_fraction_max = 0.25477434744598315;
    msg.climb_fraction_max = 0.648698384809899;
    msg.bank_max = 0.24697878416221108;
    msg.p_max = 0.8909794558245816;
    msg.pitch_min = 0.27018665899124494;
    msg.pitch_max = 0.20355809403115854;
    msg.q_max = 0.2384575130590022;
    msg.g_min = 0.23686267036925446;
    msg.g_max = 0.9190744873281544;
    msg.g_lat_max = 0.4968457145206263;
    msg.rpm_min = 0.30197369505885596;
    msg.rpm_max = 0.6558189535147788;
    msg.rpm_rate_max = 0.1480258564326068;

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
    msg.setTimeStamp(0.7915202291295418);
    msg.setSource(42801U);
    msg.setSourceEntity(8U);
    msg.setDestination(63340U);
    msg.setDestinationEntity(75U);
    msg.op = 235U;
    msg.speed_min = 0.9565802534000336;
    msg.speed_max = 0.5509683776436265;
    msg.long_accel = 0.4156578076155081;
    msg.alt_max_msl = 0.9149236273078787;
    msg.dive_fraction_max = 0.47773031973561;
    msg.climb_fraction_max = 0.2883010186120052;
    msg.bank_max = 0.1156637659741312;
    msg.p_max = 0.19158131710140092;
    msg.pitch_min = 0.7056621611624148;
    msg.pitch_max = 0.23276057273760598;
    msg.q_max = 0.6738260584283814;
    msg.g_min = 0.32903040214665313;
    msg.g_max = 0.014257587248129644;
    msg.g_lat_max = 0.14127575809126147;
    msg.rpm_min = 0.5029426271331934;
    msg.rpm_max = 0.924976228888052;
    msg.rpm_rate_max = 0.16389980895351008;

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
    msg.setTimeStamp(0.19973163953527961);
    msg.setSource(57751U);
    msg.setSourceEntity(1U);
    msg.setDestination(37887U);
    msg.setDestinationEntity(16U);
    msg.op = 176U;
    msg.speed_min = 0.6648047816057038;
    msg.speed_max = 0.9180693545802323;
    msg.long_accel = 0.8392121504040639;
    msg.alt_max_msl = 0.3391538902913034;
    msg.dive_fraction_max = 0.8524892444726034;
    msg.climb_fraction_max = 0.23358666306896436;
    msg.bank_max = 0.520102203199034;
    msg.p_max = 0.29173885231320495;
    msg.pitch_min = 0.004261648530972217;
    msg.pitch_max = 0.6957572903819373;
    msg.q_max = 0.6882319196352976;
    msg.g_min = 0.7143343465373643;
    msg.g_max = 0.04770182501700282;
    msg.g_lat_max = 0.13603711670182583;
    msg.rpm_min = 0.8025705809705654;
    msg.rpm_max = 0.4257992031638631;
    msg.rpm_rate_max = 0.2541318119480822;

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
    msg.setTimeStamp(0.539796142793886);
    msg.setSource(57170U);
    msg.setSourceEntity(246U);
    msg.setDestination(29333U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.8729264963548234);
    msg.setSource(36480U);
    msg.setSourceEntity(14U);
    msg.setDestination(57295U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.004769079489376105);
    msg.setSource(58549U);
    msg.setSourceEntity(19U);
    msg.setDestination(33096U);
    msg.setDestinationEntity(100U);
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 52U;
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
    msg.setTimeStamp(0.5902537336415314);
    msg.setSource(7U);
    msg.setSourceEntity(33U);
    msg.setDestination(10595U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.610257607520067;
    msg.lon = 0.5366263359956954;
    msg.height = 0.12987240219555019;
    msg.x = 0.37097507883337755;
    msg.y = 0.16298564980763364;
    msg.z = 0.05875388480235699;
    msg.phi = 0.23659256862782985;
    msg.theta = 0.1261823084114404;
    msg.psi = 0.606636154329265;
    msg.u = 0.17847631132022612;
    msg.v = 0.7369384717403036;
    msg.w = 0.3119550793273297;
    msg.p = 0.09576928350737202;
    msg.q = 0.3425469611791877;
    msg.r = 0.3926224069200519;
    msg.svx = 0.6949619546596632;
    msg.svy = 0.5048038217945301;
    msg.svz = 0.6919384358818526;

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
    msg.setTimeStamp(0.27183554849109215);
    msg.setSource(43187U);
    msg.setSourceEntity(106U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.27585750167194567;
    msg.lon = 0.46332944015123156;
    msg.height = 0.012301735899050703;
    msg.x = 0.799601988445075;
    msg.y = 0.34040282677157274;
    msg.z = 0.7753087874704525;
    msg.phi = 0.6530276932040432;
    msg.theta = 0.24280591804945806;
    msg.psi = 0.7086946569077762;
    msg.u = 0.5262315871258784;
    msg.v = 0.19387465843292262;
    msg.w = 0.8377407377849525;
    msg.p = 0.5590450928330013;
    msg.q = 0.2529708927336557;
    msg.r = 0.677471440009391;
    msg.svx = 0.3543740546800902;
    msg.svy = 0.08323136714115997;
    msg.svz = 0.8937455028395793;

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
    msg.setTimeStamp(0.013859206695573056);
    msg.setSource(53439U);
    msg.setSourceEntity(40U);
    msg.setDestination(432U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.5179397474794956;
    msg.lon = 0.6064868287016258;
    msg.height = 0.4775321434050602;
    msg.x = 0.7754690731624168;
    msg.y = 0.8854189717510135;
    msg.z = 0.8125766618429037;
    msg.phi = 0.8009389659583885;
    msg.theta = 0.8049171697964705;
    msg.psi = 0.5416482093864697;
    msg.u = 0.6300352856760406;
    msg.v = 0.9223325331943398;
    msg.w = 0.2482731258032569;
    msg.p = 0.5917504069371797;
    msg.q = 0.7503221681482701;
    msg.r = 0.23539059028377318;
    msg.svx = 0.4017406364093763;
    msg.svy = 0.9767074807852426;
    msg.svz = 0.0497017706871391;

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
    msg.setTimeStamp(0.5752153993578487);
    msg.setSource(29906U);
    msg.setSourceEntity(204U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(54U);
    msg.op = 57U;
    msg.entities.assign("VTVUNEFGEZQXKADHCHOKMECWNSKLPIFYBVVLTWIRMIVYELSVVHRRPMZPUOJOYXRFHUOCSKKJJZQJAHPKUQIATRNHJUBZRBGGUDXEQSNVWDOZSQAGVLDXLQSCFHWBIMEXTPDSQBPOKANXUCYCZNIKOEWYFTYGGMSLDBFGTYHMFYKPRHWDLVAW");

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
    msg.setTimeStamp(0.7834108590596428);
    msg.setSource(58039U);
    msg.setSourceEntity(52U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(6U);
    msg.op = 46U;
    msg.entities.assign("RTMOCSGWKTDCATQZUQCHAGLVYNUKGPLTSPFZKDADOWWIIPCRKFNXIHZMIPDHSXVREYNMHWZBJVWCZTVDVZOJEEELQJUYIQOJNWXXYVZFDOCFUSBRTXLDJNVS");

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
    msg.setTimeStamp(0.9016250897063779);
    msg.setSource(34626U);
    msg.setSourceEntity(162U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(72U);
    msg.op = 39U;
    msg.entities.assign("FSTUPNDVTRHDPMEQJWHOBNZKTLILBLUGBYWSPUBPZWRMSVQXYPXVPOMBUOILJECCMLAXRQLOCVU");

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
    msg.setTimeStamp(0.579038648758527);
    msg.setSource(3907U);
    msg.setSourceEntity(6U);
    msg.setDestination(34579U);
    msg.setDestinationEntity(68U);
    msg.type = 206U;
    msg.speed = 1342U;
    const char tmp_msg_0[] = {107, -126, 71, -121, 88, -84, -8, 100, 125, -77, -108, -11, 60, 88, -91, -105, -52, 86, -90, -27, -120, -58, 42, 12, 33, 104, -119, 117, -111, -59, 37, 45, 126, -100, -72, -23, 43, 40, 76, -21, -20, 102, -10, -28, 37, -122, 12, 27, 27, 11, -113, -60, -50, -119, 49, -94, -47, -35, -127, 20, -61, -44, 36, -38, 126, -73, 85, 23, -89, -110, -45, 33, -71, -80, -123, 103, 102, 29, 49, 100, 119, -75, -17, 120, 65, 111, -18, 42, -15, 84, -93, -38, -16, 16, -14, -46, 69, 87, -5, -84, -101, 13, 92, -62, 84, 35, -117, 49, 61, 91, 82, -112, 91, -61, -102, -22, -55, -62, 92, -75, -53, -14, -12, -105, -125, 107, -110, -63, -15, 8, 113, -12, 4, -1, -17, -98, 27, -35, 68, 25, 45, -113, 45, -68, 82, 117, 71, 90, 92, 16, -119, 43, -120, 36, -8, 15};
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
    msg.setTimeStamp(0.7627068557839226);
    msg.setSource(50401U);
    msg.setSourceEntity(25U);
    msg.setDestination(46753U);
    msg.setDestinationEntity(91U);
    msg.type = 120U;
    msg.speed = 51960U;
    const char tmp_msg_0[] = {16, -51, 87, -45, -15, 36, -118, -9, 121, 45, 66, 43, -87, -114, 88, -96, 126, 62, 115, -38, 62, -73, -3, -82, 10, -112, 49, 57, -11, 63, 51, -91, -61, -108, -88, -98, 24, 35, -79, 91, -43, -108, -122, -52, -67, 40, -57, 68, -18, -78, 28, -63, 104, 45, 60, -104, -77, -29, 34, 39, -64, -93, -51, -101, -35, 4, 124, 19, 112, -92, -32, -112, -20, -67, -39, 26, -39, -128, 54, -96, 54, 3, -3, -23, -61, 68, -29, -35, 28, 12, 81, 101, 27, -12, 3, 41, -70, 119, 106, -126, -23, -15, 65, 6, -124, -32, -26, 24, -22, 112, -98, 36, 90, -110, 93, 15, 106, 62, -50, -74, -13, 21, -106, 116, 113, -48, 70, -54, 121, -94, 48, 73, -54, 116, -75, -85, 86, 46, 102, -68, -15, -10, 60, -17, 50, 115, -76, 64, -111, -105, -87, -32, -85, -15};
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
    msg.setTimeStamp(0.27930504209230167);
    msg.setSource(1314U);
    msg.setSourceEntity(118U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(103U);
    msg.type = 253U;
    msg.speed = 30000U;
    const char tmp_msg_0[] = {100, -8, 18, 55, 36, -9, -48, -79, 23, -29, 3, 75, -84, 52, 42, 111, -127, 61, 77, 126, -67, 86, 102, 63, 42, -61, 111, -85, -21, -87, -60, 90, 55, -83, -84, 99, -37, 116, -63, -39, 104, 12, 10, -36, -111, -120, -43, 116, 11, 68, -83, -79, 0, 43, -2, -45, -122, 50, 91, -71, 13, 27, 111, 8, -39, -9, 72, -54, 111, 102, 30, 83, -30, 114, 75, -35, -91, -2, -97, 55, -5, -86, 3, 59, 107, 51, -100, -29, 96, -8, -59, 92, 48, 51, 96, 15, -60, 123, -33, -57, -121, -16, 106, -125, 35, -116, 73, -118, -99, 71, 111, 97, 0, 69, -100, 100, 54, 71, 111, 72, 44, 111, -10, -111, -128, -63, 66, 8, -100, -11, -39, 16, 117, -103, -114, 120, 120, 54, -66, -106, 81, -49, -2, -45, 89, -65, -73, 76, 16, 87, 74, -75, 39, 108, 43};
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
    msg.setTimeStamp(0.7485738352546107);
    msg.setSource(799U);
    msg.setSourceEntity(219U);
    msg.setDestination(45767U);
    msg.setDestinationEntity(6U);
    msg.op = 77U;
    msg.tas2acc_pgain = 0.9632203769614608;
    msg.bank2p_pgain = 0.8267134469261176;

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
    msg.setTimeStamp(0.4396561684313165);
    msg.setSource(8948U);
    msg.setSourceEntity(245U);
    msg.setDestination(50373U);
    msg.setDestinationEntity(145U);
    msg.op = 180U;
    msg.tas2acc_pgain = 0.4428731252760587;
    msg.bank2p_pgain = 0.37069696823556497;

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
    msg.setTimeStamp(0.967146730126172);
    msg.setSource(58714U);
    msg.setSourceEntity(31U);
    msg.setDestination(48728U);
    msg.setDestinationEntity(213U);
    msg.op = 99U;
    msg.tas2acc_pgain = 0.7672884316276416;
    msg.bank2p_pgain = 0.800960567673175;

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
    msg.setTimeStamp(0.3938224998316121);
    msg.setSource(29310U);
    msg.setSourceEntity(199U);
    msg.setDestination(62174U);
    msg.setDestinationEntity(65U);
    msg.available = 1991584435U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.6101377279799505);
    msg.setSource(56492U);
    msg.setSourceEntity(62U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(111U);
    msg.available = 4179635341U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.7998204009304842);
    msg.setSource(56298U);
    msg.setSourceEntity(217U);
    msg.setDestination(50191U);
    msg.setDestinationEntity(2U);
    msg.available = 2334484072U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.5514028561771984);
    msg.setSource(56586U);
    msg.setSourceEntity(125U);
    msg.setDestination(9413U);
    msg.setDestinationEntity(118U);
    msg.op = 96U;
    msg.snapshot.assign("TRLPEPGHDEHDLVPJVBRIHUNNKJPYCUMOEKPEAUKFNOECNJKJVNQMOXIOBMCSQFDJWPVIXDQOMCEQRTQZHBUVWKJUFBVMTDTSERXQSIARDPBNGICQDYAWTMWDNHFWZRGJUXMNCXVSGOFGIWXWZBLBIVLPHTHKOKCACYFAJLZJHLQZSIAAYYI");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 84U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("VBOFONSFBJIDFLQWRUFVNUDZUHDMSNXSZBIHPDXJIXQJUTACHLBYYAQROQTKSHAEYYUNPGJUGVZUYNJANHAZSTGFVYICXEJWVLTHMOIJZFWFYELIAMLOJNTFM");
    tmp_tmp_msg_0_0.description.assign("WXDTIBTBEVWLBSPSZPNXVRUMKDZDMABEBNMWYFHTHJJAPXQSUQQSCNLVWVNWWCANHHXHMTDDOXWYUPJMEXHZYIZYVCFORSZXKVHAGFYACDKJZLUDDTNICOSVKKORJMDGYFYACGEZRBBNRUWKAGQIOHKEQUOUBPEFPXRFXSCSQEITUCUEKOJTGANBZLIWAFSLKJTGMQJRPTJ");
    tmp_tmp_msg_0_0.vnamespace.assign("HBRTDUJCPOMEHJMZZZWIBYCRAPVOCUIMZTKDHVNRRILLXUXPEVDQFTNYLSSLULNYEWASOJXQXOAIIAPVSKKDPFSYBQFQCTPCWOQFBYGHVCFCUDX");
    tmp_tmp_msg_0_0.start_man_id.assign("FIPEBYNSPQYNLITKMDJBGEXRQOKYIJQLDURKCSRJWUTPGAZVEAXCGYBNPDZKMWHOXHRBUBBDYFEZLRJCQMWOZNIPFWKPDWCMENVQWYRVLKWUGAHLDJALXBGUBEOLMRCQSZMHZFS");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("GXHJQIPCUCEIKQGONJOSGIHTZRNRPKVNXBTJOCITFPHFTXSPWCCPRBWTYYDLMJXKEMZRLMBLXMJEWEKSWWDTBOMFDZBETLZDKAWGHZKVFDDHMTQPBSES");
    IMC::YoYo tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 38514U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.31532480485701486;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.7107321822324157;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.13094734551518405;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 199U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.amplitude = 0.17797244219958575;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pitch = 0.8263059264438626;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.07365025851507756;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 174U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("PSYYSPHKIQEUKPNJEXUDTUJAGZMWVPMLZSUZPDFYAKGXFKXUQIHQORFZMKGEAQZCXISCRYCCMLWUSBYZWYBTBNDIPRIWHNOSO");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::Tachograph tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.timestamp_last_service = 0.5279949340265683;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_next_service = 0.6212778534366104;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_motor_next_service = 0.7405580571099953;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_idle_ground = 0.47885458316813534;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_idle_air = 0.03599183866952893;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_idle_water = 0.5072787942156755;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_idle_underwater = 0.1594391872411105;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_idle_unknown = 0.6797380820081887;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_motor_ground = 0.2859679132750921;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_motor_air = 0.7467053192230134;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_motor_water = 0.9159285451165772;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_motor_underwater = 0.7648509615910382;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time_motor_unknown = 0.2480678398752988;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.rpm_min = -2178;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.rpm_max = -30137;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.depth_max = 0.6511957740699998;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("SMDHCENAXDSBMQWEGCCTPGTZQNFMAYIIPSOPUAVQHWRIHXIBCZEWV");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("QKIZNZNZZFHSLJKWGWMAOUASPKXRDLWLTCMCZGVVAMFNBSJPEURITLFIHCQV");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("EUYBAVLUDCWOEWWIHWLBWMIBTQGKZRAWHVCCCJOWCTSRPRIFJRRENJNNHGDDXYEJKUFTNGMOZTYOCJEMOLBQUTQCNJGCFXSDIAZJKXQTSIELHIYHIVKGZSYXVKIHBPXCDKSXTLUFUPUNSHFIVMBLEPZAFKZOAOOILWMEDDXXSBUGRYQXVKPZVDOAWZFUHHP");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::UsblAnglesExtended tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.target.assign("ARDESZNZJDZOFXPVOETPHQXEBBVTNUGFGSKNBYOQCRHRSNEIPRVGFOOFAGIJEQVDYZXTBGNVALVCWBKITWEJAESQZNMFWPRNHJGPJZSQNMQMRVWCFYARLXJYBVFYGDGCFINSUGRZYHTXMUDHTCFTQSDFLXTYODWUQLLEBECGOKUIVLSILWBBKNJPADZSHJIOUBILKMHPLXKARMXAYDOXYALMCUZUCKWTPIUWKMTQPIXOY");
    tmp_tmp_tmp_msg_0_0_2.lbearing = 0.7214451475704512;
    tmp_tmp_tmp_msg_0_0_2.lelevation = 0.857002226279029;
    tmp_tmp_tmp_msg_0_0_2.bearing = 0.7081072413200371;
    tmp_tmp_tmp_msg_0_0_2.elevation = 0.6786927234074768;
    tmp_tmp_tmp_msg_0_0_2.phi = 0.7944323256601223;
    tmp_tmp_tmp_msg_0_0_2.theta = 0.6036555401217344;
    tmp_tmp_tmp_msg_0_0_2.psi = 0.3398648791373736;
    tmp_tmp_tmp_msg_0_0_2.accuracy = 0.7613415520722816;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7357562188797198);
    msg.setSource(15117U);
    msg.setSourceEntity(222U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(56U);
    msg.op = 186U;
    msg.snapshot.assign("YPIVHRMGCHBOFYPZARVUGBOTBEIOSLJENTLWCDFEFJROFIPQIHXUXHTYMNQSAKBALTBGIVRUSHAPXFXJUNKFPUKQEQTUHLSZNMJZVNVAVZJMWIWUEBKFAPM");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("OVMLOBLBEDFEEFNVCR");
    tmp_msg_0.plan_size = 44492U;
    tmp_msg_0.change_time = 0.8111720340204465;
    tmp_msg_0.change_sid = 35414U;
    tmp_msg_0.change_sname.assign("IUUIQORLWECJYSEHHLRWIKCQHTVDJMTNVBDEQUYRUXAYLHCBAFNZJUPRRERNHLVSGFVMHUXFWGTIMPSJKTWCVAKGMVOLXLSVYPHGWZOPAZIPAOGIEQXMDZDHVWNEYDJYKODSLNZTFEIMWCJSPBYSOVUGQZJWFOAEXRBDBCZZVKUIAFBDXAXOQUFGQABCBTJCIKNYTYDOKRZSUMBXESC");
    const char tmp_tmp_msg_0_0[] = {-12, 50, 86, 102, 85, -62, 59, -26, 97, -111, -10, -31, -51, 96, 77, -91, 37, 126, 84, 35, 61, -64, -111, -75, 78, -112, -54, 109, -19, 83, -16, -114, 74, -52, -86, 0, 44, -69, -17, -34, 5, -18, -90, 68, 75, -70, -74, 103, 58, 94, 105, -42, -19, 30, -94, 0, 49, -3, 99, -20, -78, 62, 107, 70, 42, -46, -73, 26, -94, 120, 55, 72, -5, 31, 50, -123, -125, -29, 89, 103, 125, 15, -72, -119, 94, 7, 5, 111, -38, -26, -39, -12, 117, 32, 78, 84, 72, 42, -41, 34, -118, -61, 104, -48, -37, -113, 14, 74, 1, 16, 76, 57, 1, 12, 37, 70, 110, 76, -39, -111, -31, -97, 36, 19, -29, -128, 42, 78, 28, 1, -84, 58, 88, 38, -100, 117, -73, 111, 80, -29, -5, -97, 2, -37, 53, 75};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9003130001220273);
    msg.setSource(65265U);
    msg.setSourceEntity(245U);
    msg.setDestination(49065U);
    msg.setDestinationEntity(81U);
    msg.op = 237U;
    msg.snapshot.assign("NOPPWWBUVD");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.2887466170316313;
    tmp_msg_0.time_next_service = 0.8265744115270374;
    tmp_msg_0.time_motor_next_service = 0.1729687572285349;
    tmp_msg_0.time_idle_ground = 0.6320101146911401;
    tmp_msg_0.time_idle_air = 0.7235483918475905;
    tmp_msg_0.time_idle_water = 0.733398408818328;
    tmp_msg_0.time_idle_underwater = 0.7820912868700237;
    tmp_msg_0.time_idle_unknown = 0.7014404364936104;
    tmp_msg_0.time_motor_ground = 0.9829065625754922;
    tmp_msg_0.time_motor_air = 0.538586902295518;
    tmp_msg_0.time_motor_water = 0.6348498699636621;
    tmp_msg_0.time_motor_underwater = 0.8357813102519419;
    tmp_msg_0.time_motor_unknown = 0.3638496865587787;
    tmp_msg_0.rpm_min = 11513;
    tmp_msg_0.rpm_max = -29925;
    tmp_msg_0.depth_max = 0.7947332813257088;
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
    msg.setTimeStamp(0.8415269914027869);
    msg.setSource(50717U);
    msg.setSourceEntity(104U);
    msg.setDestination(16981U);
    msg.setDestinationEntity(77U);
    msg.op = 77U;
    msg.name.assign("TIGKYUPPHWMRBZSWWBFLKYDJCAOHQCXIFDNZWKJMLOAVMMCSOAHRMQLLUXBNEJUSQHPMZPLYEYTJIACIAMKOKISUDTGYGQBWAQGNQZCSPWFGPWJLVVKFSNTHSBXNXENZYTUZAXYREWKIXZITFUVDBJZCEBHFLPHFROVUXRUIFNTXRSE");

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
    msg.setTimeStamp(0.09096548380606029);
    msg.setSource(12867U);
    msg.setSourceEntity(196U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(13U);
    msg.op = 177U;
    msg.name.assign("HAJBCLBWXZYXUOSLWHDELFTTSCEIGDOUHZQKBCKFOQYEQBVQTQRYKHPFTZHXZCRIMXBOTYHTYUSRRRPNWDLXRTOFM");

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
    msg.setTimeStamp(0.09932838598457616);
    msg.setSource(54790U);
    msg.setSourceEntity(72U);
    msg.setDestination(22430U);
    msg.setDestinationEntity(140U);
    msg.op = 224U;
    msg.name.assign("MWNAGCNNNQQSQIZMFEPDRKYUEMHTMBRMSHHYGULZOXVBASGOBFFJCCJMWCW");

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
    msg.setTimeStamp(0.7386646470608923);
    msg.setSource(11646U);
    msg.setSourceEntity(180U);
    msg.setDestination(21041U);
    msg.setDestinationEntity(134U);
    msg.type = 130U;
    msg.htime = 0.17650634020011802;
    msg.context.assign("ZANHEXOPQRUCHLGQIJXWUQRQVSMUFDGRIDNZAVDMEMUXTVGHLJTHWTQXPFTUMYKNBVECMCUDAKRMMPKVKSENPERWKEYJYNPBOPOIJIYZTLFZXFB");
    msg.text.assign("UDIYJFHRLVVAGKEGCPOQKIIOZYTTUSINTAFYATZVOMVSIBMOZUWFSLZNHGVPQUXRCQKDCCRKKFYRTJBGVPOSPYQJQTCJTWAEQGNMAEBIKYOUWQLOUMMRXLYXSTWPDUGFVNZFSLHEDBSFPHNEZBGWFAOBSMHEQLIKEIUYDRVMLHPWFNBIGDDJVXODHUBXDXFXHMZJCAKLTQENYWZBKWVAOHJLRZRWZJIKTWXRNBNASXJPLHDPNSJMCC");

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
    msg.setTimeStamp(0.3253194848011174);
    msg.setSource(29192U);
    msg.setSourceEntity(175U);
    msg.setDestination(62097U);
    msg.setDestinationEntity(30U);
    msg.type = 24U;
    msg.htime = 0.14602409141205486;
    msg.context.assign("KJGCGUPCTXYTYFIEXQBADRHOQFQFSNPFXDHPQQUHXHANIJTVCRZXCCVAMBYIBDYXSOIALBVIVJRMLWRVSLQHXAUJONJPRNKXMPWEMKBYCHFDZAJEDWUVFQGEDTLWHABMRZZNAKGNQBTUYAQTTVJGCIXUSPOEZLFXVGNZZKRESHGWLELOYUMUK");
    msg.text.assign("DZKRSWRJKLOZLCDDIJFIUQREXHFYYHXGVHKZV");

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
    msg.setTimeStamp(0.7170544535103246);
    msg.setSource(50611U);
    msg.setSourceEntity(2U);
    msg.setDestination(25681U);
    msg.setDestinationEntity(226U);
    msg.type = 190U;
    msg.htime = 0.9083733780222253;
    msg.context.assign("KQJPHDPXWYUHURNGQFFIKVBBRTGFTOAKZNBYAJYVTHEDDTQRCEYMYPPDUKBYJQDIIGQWQQZZFEVETVNBZSHUKYSAOGOXCMLEZVCBPACTHWTARUGIBZHYGSTADUNQAXMXOGYRVGUNZXHKVQDVHINFIRELPMOWPLTJMMCISLUKMELENWNDQRSCJEWSMMVFDNTVJWYJIKCPLZBCOKSLHSXXPGWORLDFXLCZHAAKXUFLSBJZRGRXBAFFJ");
    msg.text.assign("LYYKKTQLBPUPZVWCNNJOMZKKWMGVSRVCGHLHVXFOAWBEFJOQRFIIYZLAWBQMGDPFJSOUMFYWAEPEEXMDAPPUK");

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
    msg.setTimeStamp(0.8563914348729414);
    msg.setSource(1643U);
    msg.setSourceEntity(184U);
    msg.setDestination(52278U);
    msg.setDestinationEntity(230U);
    msg.command = 21U;
    msg.htime = 0.6637308391709559;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 197U;
    tmp_msg_0.htime = 0.007058351346395875;
    tmp_msg_0.context.assign("AGGYJUXXXDPDQIIYNSIFMVBBERTNLHQPWRALIFJICRZWZKAUVDUVJIFQBFJMXPRMCUGSFKCOMCXLHUDPYPSYNGHBOXLSZRDUXMOHHDVWIHSOCYBYRJFSBTJKSTOLYJAG");
    tmp_msg_0.text.assign("NIYJOKXCLPXZFWXGJYZACARORWKQDGPAZIHIBXMLCVQUIRDDLTFSAVPPKNN");
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
    msg.setTimeStamp(0.2109874927595431);
    msg.setSource(61403U);
    msg.setSourceEntity(114U);
    msg.setDestination(13791U);
    msg.setDestinationEntity(120U);
    msg.command = 158U;
    msg.htime = 0.9524309806131924;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 150U;
    tmp_msg_0.htime = 0.5547351343001944;
    tmp_msg_0.context.assign("GOHAVAQAYQPZYXMDKEEYCOFZKAWQWDEPWERJGUHFPMORUWDOHITDXQGIUMRDBZADOLENVIFUBTLLGFVGOCBUHPBXYHLSMMGVBMJDWVSDTBDXQFVEQKZIPMPLSZIMCRJFWQSWOQESJVPJUFKTEZRJQDESWYKUNSIXTVCANHQZICBCFJCWLPNRKUMSGXCTFXTAYLMHNRNOCLIOGKJFRZV");
    tmp_msg_0.text.assign("MTJCHVTUTBIZKPCLGQODMAPVKUEEVKYACFZORIKXIIGJIEZQODDRPDAYVRTDHYGYHP");
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
    msg.setTimeStamp(0.09141713931450324);
    msg.setSource(44944U);
    msg.setSourceEntity(95U);
    msg.setDestination(2011U);
    msg.setDestinationEntity(162U);
    msg.command = 114U;
    msg.htime = 0.629944917923531;

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
    msg.setTimeStamp(0.29741087128349475);
    msg.setSource(1972U);
    msg.setSourceEntity(122U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(94U);
    msg.op = 30U;
    msg.file.assign("HIETAONEBJHNOPSKVDOBAWAGXLRQIUWKLROSIKVLHJFQCVDVQXYVBVZEQGRBSZEGAWXMMPINWYTKTKVDMHTZVSAKJVDS");

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
    msg.setTimeStamp(0.5403324402456408);
    msg.setSource(50072U);
    msg.setSourceEntity(148U);
    msg.setDestination(39840U);
    msg.setDestinationEntity(239U);
    msg.op = 57U;
    msg.file.assign("CYBNTNGLMEMDFMPCVSZCRJZIPNCCBVHHQPEFFBJVGJKOYDXTRQNAXUGRRIXJRZZVCINQWVULOEWDDAHHXKOULQWOSFKYRHOSZIDAPUPUWMBVGJVBNHOREXRKKJLUGQADWSAYWZKHTBOMOQEDFYOANXXBZQJSSTIVGVOZXXPUNBMKJHFFCLZBUYQRPMFRTIEHJSMFCUA");

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
    msg.setTimeStamp(0.982083294032351);
    msg.setSource(33577U);
    msg.setSourceEntity(121U);
    msg.setDestination(23582U);
    msg.setDestinationEntity(180U);
    msg.op = 241U;
    msg.file.assign("EXKZIFEOPGDJJICICLTZDAAWKRFVPNJCQOUYUYDXOXZJQVWNVVAPGKTLJQQNCRQDRUCNIPVDGFMMLKRFLTLPAHZKTIFHQOSVAWXTHYAGEYBZDZEZLXDBQUJVBNYBRTOYDELFLCPMTREUSHFFWDATZGUTXIBIMOGGZMFDVWWPUSPVLTMIQSHSRXYGSBABHFKKCWCSCYSOXHGPNJUOJNKALWOSQIWGNHHYKAIEH");

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
    msg.setTimeStamp(0.8805056827972707);
    msg.setSource(64890U);
    msg.setSourceEntity(132U);
    msg.setDestination(62390U);
    msg.setDestinationEntity(1U);
    msg.op = 74U;
    msg.clock = 0.8029690076957499;
    msg.tz = -49;

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
    msg.setTimeStamp(0.394143903532749);
    msg.setSource(18908U);
    msg.setSourceEntity(198U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(128U);
    msg.op = 238U;
    msg.clock = 0.18798021223197892;
    msg.tz = -68;

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
    msg.setTimeStamp(0.6550304645190721);
    msg.setSource(49865U);
    msg.setSourceEntity(168U);
    msg.setDestination(16476U);
    msg.setDestinationEntity(192U);
    msg.op = 192U;
    msg.clock = 0.9451728556515192;
    msg.tz = 16;

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
    msg.setTimeStamp(0.42015852090546835);
    msg.setSource(23218U);
    msg.setSourceEntity(182U);
    msg.setDestination(17763U);
    msg.setDestinationEntity(178U);
    msg.conductivity = 0.03969509154640449;
    msg.temperature = 0.300095410107731;
    msg.depth = 0.4668660759854384;

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
    msg.setTimeStamp(0.6791292468594773);
    msg.setSource(12006U);
    msg.setSourceEntity(55U);
    msg.setDestination(40713U);
    msg.setDestinationEntity(84U);
    msg.conductivity = 0.7622492432627898;
    msg.temperature = 0.1567249907822963;
    msg.depth = 0.16218811731688587;

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
    msg.setTimeStamp(0.36403303689290734);
    msg.setSource(29819U);
    msg.setSourceEntity(251U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(191U);
    msg.conductivity = 0.17412413508569613;
    msg.temperature = 0.5600969971468954;
    msg.depth = 0.8621156657424147;

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
    msg.setTimeStamp(0.736362417225547);
    msg.setSource(15813U);
    msg.setSourceEntity(219U);
    msg.setDestination(34432U);
    msg.setDestinationEntity(65U);
    msg.altitude = 0.1212701826935757;
    msg.roll = 58797U;
    msg.pitch = 49330U;
    msg.yaw = 40161U;
    msg.speed = -5563;

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
    msg.setTimeStamp(0.18989738822190738);
    msg.setSource(59151U);
    msg.setSourceEntity(146U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.7801650300828855;
    msg.roll = 29233U;
    msg.pitch = 39479U;
    msg.yaw = 8833U;
    msg.speed = -1690;

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
    msg.setTimeStamp(0.05782516976408658);
    msg.setSource(1443U);
    msg.setSourceEntity(120U);
    msg.setDestination(9264U);
    msg.setDestinationEntity(136U);
    msg.altitude = 0.06050747268226553;
    msg.roll = 17382U;
    msg.pitch = 48089U;
    msg.yaw = 30967U;
    msg.speed = 10638;

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
    msg.setTimeStamp(0.4652343175239092);
    msg.setSource(5251U);
    msg.setSourceEntity(103U);
    msg.setDestination(58267U);
    msg.setDestinationEntity(36U);
    msg.altitude = 0.5177655531586767;
    msg.width = 0.2685921153418157;
    msg.length = 0.5421071463461082;
    msg.bearing = 0.11199724646479725;
    msg.pxl = -31740;
    msg.encoding = 83U;
    const char tmp_msg_0[] = {-94, 109, 88, -83, -61, -54, -4, 109, -108, 108, -96, 85, -54, 118, -35, -57, -29, 114, -32, 67, -104, -43, 27, -101, -62, 32, 38, -68, -86, -58, 118, -104, -96, -118, 123, -115, 70, -34, -105, 51};
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
    msg.setTimeStamp(0.08583541794977301);
    msg.setSource(47357U);
    msg.setSourceEntity(49U);
    msg.setDestination(60487U);
    msg.setDestinationEntity(109U);
    msg.altitude = 0.9295600488931323;
    msg.width = 0.08295223191894507;
    msg.length = 0.39925409571235204;
    msg.bearing = 0.303429744056504;
    msg.pxl = -24126;
    msg.encoding = 212U;
    const char tmp_msg_0[] = {-46, -54, 3, 124, -67, -125, 83, 73, 72, -29, -80, -79, 4, 17, -14, -6, 2, 109, 43, -25, -32, -55, -71, 54, 89, 69, -127, -96, -48, 86, 31, 44, 51, 113, 48, -89, 107, -47, -24, 12, -65, -66, -55, -55, 52, -41, -15, -108, -48, 117, -43, 70, 10, 35, -87, -125, 66, -90, -90, 117, 89, -88, -84, 116, -116, -104, -92, -34, -49, -106, -24, -22, -44, 124, -49, -10, -105, 75, -18, -3, -12, -76, -118, 7, 88, -93, 79, -122, -3, -21, 98, -79, 67, -52, 20, 115, 99, -47, -63, -78, 89, 123, -71, 80, -77, -103, 25, 22, 81, -109, 42, -50, -35, -1, 111, 73, 26, -59, -64, 118, -40, 113, -6, 41, 74, -124, -107, -123, -8, -56, -128, 98, 12, -14, 116, 85, 120, 4, -27, 82, 33, -60, 121, 114, -107, 62, 58, 29, -39, 41, 40, 123, -127, 57, 119, -11, 61, -51, 45, -105, 18, 118, 42, -81, -82, -73, 65, -14, 55, 48, -37, -44, -109, 83, 120, -89, -126, -45, 46, 105, 6, -37, 89, -97, 31, -58, -55, 82, 72, 26, 96, 47, -2, 111, -7, 89, 121, -63, -111, -113, -54, -43, 5, -54, 5, -51, -59, -33, -93, -94, -51, 108, 113, -53, -85, 80, 47, -87, 77, -14, -36, -85, -33, -98, 41, 56, -106, -59, -59, -48, 83, -88, 54, -92, 39, 86, -42, 93, 11, -25, 2, -72, -92, -49, -66, -38};
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
    msg.setTimeStamp(0.030943146356560924);
    msg.setSource(59153U);
    msg.setSourceEntity(70U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.25727085206660794;
    msg.width = 0.5069297241859524;
    msg.length = 0.9079765039546012;
    msg.bearing = 0.6122826286955392;
    msg.pxl = -19457;
    msg.encoding = 4U;
    const char tmp_msg_0[] = {-108, 1, 93, 69, -34, 55, 44, 38, -103, 96, 53, -23, -20, 84, 86, 81, -59, 81, -62, -89, 92, 18, -22, -36, 4, -121, 31, 65, 33, -34, -12, 5, 23, 56, 54, -6, -13, 79, -70, 86, -2, -44, -42, -63, 120, 37, -77, -97, -124, 42, 6, 3, -125, -12, -62, -125, -12, -84, -95, 88, -115, -89, -94, 55, -122, -71, 109, -17, -41, 102, 74, -27, -90, 115, 18, 68, -72, 105, 48, 71, -114, 87, 29, -44, 11, 86, 46, -96, 69, -126, 109, -44, -92, 55, -15, -65, 39, 58, -7, -24, -83, 8, -38, 12, -60, 67, 88, -69, 12, 11, -42, -11, 84, -98, -16, 107, 82, -21, -103, -4, -83, -96, -128, -4, 79, 94, 7, 14, -99, -65, 89, -1, -35, -118, -106, 78, 95, -51, -13, -33, 96, 85, -18, -9, 104, -25, 41, 57, 51, -38, 123, -48, 117, -55, 46, 17, -32, -35, -17, 112, 8, -93, 105, 71, 112, -23, 37, 111, 52, -13, 105, 19, 69, 54, -123, -11, -61, 12, -87, -86, 39, 22, 36, 53, 45, 38, -91, 124, -1, 0, -24};
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
    msg.setTimeStamp(0.6382797911507906);
    msg.setSource(39484U);
    msg.setSourceEntity(245U);
    msg.setDestination(42361U);
    msg.setDestinationEntity(233U);
    msg.text.assign("VXNVXBFOYWNFLNATZTNKVCIXVKWIMVLBUWHNSAEANKYEFHZBZQOMRTIKZEQSTPCWAUQETMFTOUJMEUDSFYCRUXJPJCFCSBNLABQPMSMWMOZOQOGLXWGVVCBIYZJQEYWV");
    msg.type = 189U;

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
    msg.setTimeStamp(0.07057662129704345);
    msg.setSource(61952U);
    msg.setSourceEntity(88U);
    msg.setDestination(9116U);
    msg.setDestinationEntity(92U);
    msg.text.assign("GYRMBPDHYRPUMNEQNNWYTQLKWSRZECJDCADNOTTRGDXUOTQGBJBKZLXPGZOLMLQLKFLSNASJFRETACRDLYMIIEYHTRADBQUVRXTDCPODQOFBHPATAWIVTGMFVNJVXKSYSUICXDSSVCHONEVOMNWZUPABIHFWHUQCMBWPYREXVHPQEMIBSPAAYCJHNZCSWIOIOQZPJUDYMJHXZZQWBZFJFOG");
    msg.type = 147U;

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
    msg.setTimeStamp(0.20133608860841568);
    msg.setSource(35113U);
    msg.setSourceEntity(238U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(153U);
    msg.text.assign("HJPKYCQUVOXAQNLVWARWIFHEYVDCCLESPBBPDGCPSRTMWENSAZHIVRZOJOEHTYRIZPXKBBUEAIJEGUNXDOSXDQSIUHYB");
    msg.type = 70U;

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
    msg.setTimeStamp(0.6387756579824558);
    msg.setSource(3789U);
    msg.setSourceEntity(118U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(224U);
    msg.parameter = 154U;
    msg.numsamples = 166U;
    msg.lat = 0.25018774498486773;
    msg.lon = 0.9613042002183635;

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
    msg.setTimeStamp(0.2040743843056535);
    msg.setSource(3155U);
    msg.setSourceEntity(170U);
    msg.setDestination(39520U);
    msg.setDestinationEntity(79U);
    msg.parameter = 154U;
    msg.numsamples = 250U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13477U;
    tmp_msg_0.avg = 0.683001837030978;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8623198445347886;
    msg.lon = 0.23404638077955475;

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
    msg.setTimeStamp(0.20811797028074464);
    msg.setSource(52104U);
    msg.setSourceEntity(137U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(17U);
    msg.parameter = 243U;
    msg.numsamples = 26U;
    msg.lat = 0.8908037148970667;
    msg.lon = 0.06369100488140145;

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
    msg.setTimeStamp(0.6533575921189045);
    msg.setSource(6258U);
    msg.setSourceEntity(130U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(25U);
    msg.depth = 21022U;
    msg.avg = 0.9246674429796865;

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
    msg.setTimeStamp(0.33199976577667223);
    msg.setSource(19582U);
    msg.setSourceEntity(243U);
    msg.setDestination(11088U);
    msg.setDestinationEntity(82U);
    msg.depth = 28586U;
    msg.avg = 0.08184776948408445;

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
    msg.setTimeStamp(0.6628699233518041);
    msg.setSource(60350U);
    msg.setSourceEntity(190U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(101U);
    msg.depth = 38717U;
    msg.avg = 0.450411666074348;

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
    msg.setTimeStamp(0.4422785715396126);
    msg.setSource(7475U);
    msg.setSourceEntity(6U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.7825457697729887);
    msg.setSource(55873U);
    msg.setSourceEntity(100U);
    msg.setDestination(59656U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.38110466197439097);
    msg.setSource(10331U);
    msg.setSourceEntity(142U);
    msg.setDestination(24427U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.9544396018233547);
    msg.setSource(50406U);
    msg.setSourceEntity(78U);
    msg.setDestination(20847U);
    msg.setDestinationEntity(19U);
    msg.sys_name.assign("SXDJADWYJMLROLMRDQBIZKHAXSANWWSIQDNRQTANKHEJGCOFYJQQFVYPJPCEBJSDOGFYFKVTTOUZBHJRIWZWAFGXAEHUWBCOUMWOTGEDRZNTIOBRRQBEATVJEACSCSPBJPUPQRYLEHCXBAYXVUQCLMNWYUGZOZFGBMWNIDMJTQZLSIZVYFQFLKKXCGZNGIDCUPCKPVUTOP");
    msg.sys_type = 115U;
    msg.owner = 49597U;
    msg.lat = 0.03238312132608068;
    msg.lon = 0.6751954356962856;
    msg.height = 0.15675825693047907;
    msg.services.assign("YMQJYPIBXYWSXOEVRYGOQVTHWPMQZSGMMHESARIPLEZITYXVBOAYKZWXEJGUFZDLHGJMCTFYNYQCDBDUOQAPPCKASDAMNCLHOQWZUPMGGAEJSGFPKIKNAMTHODQLCUCEVVRYPXRNHZWUEKCDCUJYISUQZIMBAXLVFJTCJUTVFKFUTSDXHAGDFNPNJN");

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
    msg.setTimeStamp(0.7101845189176904);
    msg.setSource(48057U);
    msg.setSourceEntity(96U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(248U);
    msg.sys_name.assign("AEBIQPLTPZDZSBADKBXQPCFEIZDVHFCPCDYKYHRHZBHFWKNRSFOLUHECIAVUSLGEAMKPLAKSUULZFIBTYEVRJXEAGQZUXLTZJQJUYWOCURXJFNRZRXSGXJQHOIHMRNMEESPMXOONJIGJVTDMBGPITVNRMOSTCKYPNDSNAOGHXGOIE");
    msg.sys_type = 40U;
    msg.owner = 37845U;
    msg.lat = 0.39112742809472023;
    msg.lon = 0.704298943474585;
    msg.height = 0.9734092842548238;
    msg.services.assign("TSYGKHXZQAOCLUWJCAZGQYH");

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
    msg.setTimeStamp(0.714879256778398);
    msg.setSource(28590U);
    msg.setSourceEntity(242U);
    msg.setDestination(16981U);
    msg.setDestinationEntity(47U);
    msg.sys_name.assign("QVABMMQXTOESYJQMPFWYHUPJDMRMOTSDFPXZQJIGTRXVOMBGHDADWFRKQLEDRGZFMMXBAKGSZTLGZWLYDFXDZVZQNDWGPUTJSVOMSXGOINOEPFAZOZYJMJSCEECHTARLONRPHBCRFUKYDRTVFKUCWVYSRZYFCBBTWDVKQENCAYAEVBCIEHWHOLNNCFNSWJCKOHBJUINLUTHIRUXQEAXTPVLIGIZKKGLCBPPSLIQKHNGA");
    msg.sys_type = 250U;
    msg.owner = 3610U;
    msg.lat = 0.9804313091093334;
    msg.lon = 0.47968311391431995;
    msg.height = 0.49783315294581554;
    msg.services.assign("UNLAKDZYTWVXIFSFACTAZRPONYZTPSOGVXXTLFZTFEDWYURGQRLQBGQAILRCMALEECUCVOAZIJTXACHHOXXHUUXWMPMQUHRIVKLBFBSWHPYHRJGIJKIJPOZ");

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
    msg.setTimeStamp(0.6446479174699234);
    msg.setSource(1713U);
    msg.setSourceEntity(203U);
    msg.setDestination(24319U);
    msg.setDestinationEntity(222U);
    msg.service.assign("ZWXOASGALZXZKDZJLYTIKHYFSPLGVRAQBNJIUHMWEMLRDGOCJGYPGYMWKYBYVKKQLESULYABOJFPCLQTEDYMNIUVUSTUEVXSAMZZIXPTJNENMAPMBWARDVOHAVSMOHOTGSNPBOLXFPZJXUGBIHHOIDEYUNDOSQQCQCUWHWQUEIPWTZMVWICCKDBBXOJJBGUHRFJNHKERXCAVFTNTZXEYRVBFFTFXIVKQZAKGCWLKMCHJGERFSLDDRRPNSQPI");
    msg.service_type = 166U;

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
    msg.setTimeStamp(0.7053270735189846);
    msg.setSource(21787U);
    msg.setSourceEntity(172U);
    msg.setDestination(12153U);
    msg.setDestinationEntity(150U);
    msg.service.assign("GQXLNAJEJKYYZAGOTGAIMCLPUROTWJAJMWCBPZXVWBCNTVWSYQTRXAUI");
    msg.service_type = 122U;

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
    msg.setTimeStamp(0.6699812438236985);
    msg.setSource(9756U);
    msg.setSourceEntity(196U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(34U);
    msg.service.assign("XJCOATVMKJUJKPAIVXBCSYXUHLNMGUSXEKPIWWATRRQULMQRBBYGKDIAACEEIFLWTXNIPCUZASTYYHFJODMGILIROGVFDRDOKKHZCGVUCYBPDCTJBYFOWEFPNOQDZNOWHPPEMNVUHLHZSGXWZAFQXKALQLMQRZIHSELKWTNWIJVBLFUHO");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.902964312011227);
    msg.setSource(2907U);
    msg.setSourceEntity(85U);
    msg.setDestination(41263U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6057153846542345;

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
    msg.setTimeStamp(0.09909021745311752);
    msg.setSource(41900U);
    msg.setSourceEntity(50U);
    msg.setDestination(41767U);
    msg.setDestinationEntity(153U);
    msg.value = 0.38977880763451744;

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
    msg.setTimeStamp(0.5599960965148223);
    msg.setSource(54699U);
    msg.setSourceEntity(108U);
    msg.setDestination(29118U);
    msg.setDestinationEntity(54U);
    msg.value = 0.3719205371518377;

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
    msg.setTimeStamp(0.25960150809733495);
    msg.setSource(1651U);
    msg.setSourceEntity(181U);
    msg.setDestination(64U);
    msg.setDestinationEntity(238U);
    msg.value = 0.06970099855968759;

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
    msg.setTimeStamp(0.10324208024593651);
    msg.setSource(18862U);
    msg.setSourceEntity(206U);
    msg.setDestination(37940U);
    msg.setDestinationEntity(186U);
    msg.value = 0.46345089914893656;

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
    msg.setTimeStamp(0.03675296584271526);
    msg.setSource(60944U);
    msg.setSourceEntity(209U);
    msg.setDestination(40931U);
    msg.setDestinationEntity(240U);
    msg.value = 0.38295472910824957;

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
    msg.setTimeStamp(0.012239588341446228);
    msg.setSource(44905U);
    msg.setSourceEntity(112U);
    msg.setDestination(63795U);
    msg.setDestinationEntity(107U);
    msg.value = 0.1506262183300734;

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
    msg.setTimeStamp(0.5229095704071033);
    msg.setSource(60480U);
    msg.setSourceEntity(26U);
    msg.setDestination(29457U);
    msg.setDestinationEntity(164U);
    msg.value = 0.22278155778553332;

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
    msg.setTimeStamp(0.7357919315509686);
    msg.setSource(27460U);
    msg.setSourceEntity(111U);
    msg.setDestination(2601U);
    msg.setDestinationEntity(98U);
    msg.value = 0.08296076466255375;

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
    msg.setTimeStamp(0.5516212015057291);
    msg.setSource(32263U);
    msg.setSourceEntity(194U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(124U);
    msg.number.assign("NSXZUIWTKBQOSAZVSKTEWEWFZDSWCMMCBCRMDLSIXZGBDEJXYSMVGTTKAJZVKODPUP");
    msg.timeout = 35178U;
    msg.contents.assign("BEJVFEVMENJYQCNGLRQAFKOIKMAVZIBDZTIQYMCGBPFRVGBRXZOSVWJSCPQTFOBJFAFQRCBVKBGLSPEAOMYWNVKGULDTKWIXMSCJAHYEZHBOWTZRCKMJU");

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
    msg.setTimeStamp(0.36184602806449273);
    msg.setSource(38948U);
    msg.setSourceEntity(253U);
    msg.setDestination(59268U);
    msg.setDestinationEntity(26U);
    msg.number.assign("RZVRZUEOMLNZCYVOYQZZDOTQWDWZPHTBFVXHYKAEMPTEGTQBLAVOLWMSNRFFNGYAKODIPWUKJHPICLTHGDICIQSZSJSJDFYOQGBTWMPFBZNHHSRMRONWJFEYNWTNIDRBXU");
    msg.timeout = 19148U;
    msg.contents.assign("IUVQMQQBUVZTMJGERZISHIIBGKQUSSAYCSWXIBRFCZQTHLWYZHLEGJLJPFKFWJKMVCTLGPHYEWYPBSECCMBOKLXFTDDGKMDEPFUGSYYZYGAUDNCXLZQLOUPAVFNRVEXDXRBRJKGRHFIMCRSZFBGJTJQBDWQPDFSNXOUDPMQGWWJNNVEJCONTPOITHZOONVOXXWKTAVKQSYAHMDVXZUFTVYPHWKOM");

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
    msg.setTimeStamp(0.03958842963239684);
    msg.setSource(50262U);
    msg.setSourceEntity(184U);
    msg.setDestination(52130U);
    msg.setDestinationEntity(4U);
    msg.number.assign("TBWHFOJXOQMHFDQLFJKRXWUJADUYGVDBYCEEYBEQWAJZSCMAWYSLFJSMLIODWAUHZIWBSMSPSMTPRPXCIQRHDIITMEAPYOLVA");
    msg.timeout = 51593U;
    msg.contents.assign("LJKBIZXXRDKZFNLOVNWUEAGLOVCRTYJOUUBRCRCNEMFQCOGLZXJXAFYBLBQXEVPANYEYHQCZJOVYDXAYVTLKSDPPZEFMVJGGUQQTUFRVFSWEEUWSHZPCWTVQXKIEWIRIUULLDHNHSPGDPRHSZMDMDQWXTRUAUMJGTKCIDZAXAKBNSEMYLTDYIOBPYETSGHLBTGWBPMJZNQGQSSVW");

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
    msg.setTimeStamp(0.5071226197764097);
    msg.setSource(21764U);
    msg.setSourceEntity(180U);
    msg.setDestination(7870U);
    msg.setDestinationEntity(253U);
    msg.seq = 1800470711U;
    msg.destination.assign("PECVRNMRHHDFBQWIUNCIDWBWDTOBDCMFASQRZVSKLFWSCXWPUQQOJXMPKUHPCVUOQZJGFPQEDLIJBGTUXRTQBORGTNKGALACDHCJDAQXFTONNNZYKZDAFNKIYPUGIJFNEYXNAVOZKQIGVGEMTWHYVPMMZLHBZPEVSWKPBVTAMEXLUAJKFHHTLVHZCLNYLUUFSLRSMHDOGYIIOCOYBYTXWJLRSUBYE");
    msg.timeout = 33784U;
    const char tmp_msg_0[] = {-116, 86, -13, -73, -56, 2, 21, 39, 115, -93, 86, -53, -42, 10, 119, -11, 69, 116, -70, -98};
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
    msg.setTimeStamp(0.23430013508028347);
    msg.setSource(33387U);
    msg.setSourceEntity(84U);
    msg.setDestination(49808U);
    msg.setDestinationEntity(139U);
    msg.seq = 1731130616U;
    msg.destination.assign("XYHYLEVMSEBUWFDOBLKYKTKSEZFWLGULWTFCUNTGOMCFHSQFGCQJJIKVYHGPBZCPPESBDNHHJUENDJKAXJHCOGOXKQARSDUCRRNUIGCPDFZNNRPNIFOWEVWLRSOWBMHPQJNDAGPVDIJ");
    msg.timeout = 64892U;
    const char tmp_msg_0[] = {-70, 61, -6, 59, -49, -6, -120, -94, -2, -104, -95, -5, -33, 122, -21, 105, 15, 65, -44, 116, -24, 37, 62, -17, 59, 114, 95, 90, 16, -26, -89, 119, 14, -121, 0, -21, 43, -116, 1, 1, -77, -43, -47, -54, 40, -125, 19, 1, 111, -74, 19, -122, 6, -3, 27, -79, -16, -80, -83, 59, -57, 93, -50, 103, -46, 104, -22, 102, 26, 96, 101, -8, 24, -55, -92, -45, -17, 65, -39, -119, 29, -49, 42, 104, 17, 23, 83, 92, 26, -72, -106, -65, -55, -47, -105, 40, 69, -67, 4, 77, -43, -53, 79, -2, -101, 48, 80, -71, -99, 62, -32, -47, -59, -8, -85, 82, -44, 87, -19, 60};
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
    msg.setTimeStamp(0.6411472302909518);
    msg.setSource(49853U);
    msg.setSourceEntity(149U);
    msg.setDestination(63675U);
    msg.setDestinationEntity(73U);
    msg.seq = 4063325081U;
    msg.destination.assign("HFPLHGINJZNKTQRNZWWSWAETVTZZVPLOUQSCUPPAGCYHNXJKGYGSSWVEKSRJKDIEUOIIRLSVQKZHQYDBJCEAYXOUGBRHZDETFIILCCPOMGMFCTLZUNFOMZWXEXDQRDVEDJZTYQEPOFXAYNALFWATMBMTJHGSEGMWXBXHYWNFSMLYXWRHRDEVOGJMDFJSCNOUK");
    msg.timeout = 49062U;
    const char tmp_msg_0[] = {-4, -103, 76, 67, 43, -58, 59, -36, -8, 34, 95, 56, 17, -30, -125, 46, 0, 71, 92, 83, -102, -106, -28, 122, -19, -54, 20, 0, 126, -80, 34, -11, -40, -102, -91, -104, 58, -112, -113, 112, -11, -113, -103, -65, -22, -83, 59, -98, -89, -19, -12, -55, -47, -3, 88, -60, 25, 118, 19, -114, -112, -92};
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
    msg.setTimeStamp(0.8137886267909742);
    msg.setSource(33976U);
    msg.setSourceEntity(56U);
    msg.setDestination(38708U);
    msg.setDestinationEntity(71U);
    msg.source.assign("TWOEJCOHDSWJYYRXAJOCVQUFDOQZBDHADCOODZQFPCXTEWCUZZFIH");
    const char tmp_msg_0[] = {-92, 22, -110, 45, -117, 93, -17, 101, -87, 75, -38, 99, 74, 30, 34, 66, 0, 19, -75, -79, -37, 114, -47, 109, 113, -79, -38, 68, 24, -7, 48, -55, 83, -59, -42, 70, -94, 23, 1, 19, -111, -97, -84, -88, -84, 29, 5, -58, -2, -20, 103, 88, -36};
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
    msg.setTimeStamp(0.955204106830386);
    msg.setSource(32961U);
    msg.setSourceEntity(158U);
    msg.setDestination(36398U);
    msg.setDestinationEntity(81U);
    msg.source.assign("ZMOXUBUCUFONWSMXCEKDVTKJSAGSOMNFBDRMFRRJGRGFZQFGZDZQINJIKGWZTVBXLCSPUCCGVCXZSBJAUXFAXYTRGHVQHOAFQWCDVRHOHYPBOKETFQPAXYSZOXLKMIIVGNBTYXJUHZQZVCBJWLTGPKIJIPRPKONTCAWYULEQQLKPIJZNWYHDYVNAERBEM");
    const char tmp_msg_0[] = {-34, -92, 110, -116, -51, 38, -103, 26, -84, 118, -79, -58, 45, -27, 87, 49, -25, 71, 8, -59, -95, -56, -100, 94, -84, 94, 46, -40, -67, -29, 59, 10, 5, -110, 10, 89, -57, -61, -85, -6, 91, 55, -73, 114, -29, 64, -93, 72, 97, 8, -6, -104, 67, 74, -20, -21, 113, -97, 56, 6, 26, 122, 44, 7, 103, 88, 60, 91, -103, -118, 21, -59, 59, 95, 60, 36, 36, -110, -79, 34, 9, -50, -72, 61, -24, -28, 10, 65, 81, -37, -58, -16, 17, 36, 120, -18, 65, 64, -66, -28, 120, 16, -9, 108, -123, -122, -37, -62, -102, 99, -102, 24, -72, 25, 17, 122, -98, -25, 103, 35, 20, -77, -60, -128, 22, -41, 105, -96, -83, 26, -70, 95, -103, 20, 28, -31, 39, -30, 115, 56, -30, -108, -110, -14, -73, -53, 26, 94, -29, -52, 78, -18, -50, -6, 108, -17, -86, 73, 87, 50, -5, -24, 4, 25, -70, 100, -24, -100, 88, 59, 57, 123, -122, 54, -115, 70, -117, 104, 69, 43, 118, -121, 71, -126, -50, 90, 69, 105, 50, 9, -94, 31, -110, 103, -124, 88, -63, -9, -19, -17, -35, 28, -44, 85, 10, -66, -18, 3, -78, -59, -71, 118, -113, -32, 39, 52, 17, 74, 79, 10, 102, 9, -100, 27, 54, -111, 124, 28, 76, 123, -2, 119, -2, -112};
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
    msg.setTimeStamp(0.9598688448381336);
    msg.setSource(13615U);
    msg.setSourceEntity(211U);
    msg.setDestination(57343U);
    msg.setDestinationEntity(107U);
    msg.source.assign("VQZSJKLHZHPZLHNTKDKQVCWKAWYTFRLODMYRZGFFFNHZBRCPJPYVIPCOXBICXMGUJQCNOLQXZKAJABIGFLIBOIHJNJCKPWEUXGZITRWBSMFFEPWLUEXKUUWCDSHHEDKJSVLNDGXRMRKTBBTPVQDXOMAJSYNUIMGETQYGYMFNQPSTOZUNMRHWGGSXLELEHQYDYS");
    const char tmp_msg_0[] = {93, -21, -6, 58, 83, 60, -58, -11, 37, 25, 64, -99, -70, 9, 44, -37, -19, 122, 60, -118, 95, -46, -101, 25, -107, 79, -126, -10, -15, 106, -69, -61, 29, -44, -112, -58, 9, -111, 80, -22, 116, 46, -39, -58, 50, 63, 82, -123, -112, 55, -18, 62, 13, 70, -67, -38, -20, -76, 39, -120, 94, 7, -77, 75, -88, 120, -23, -70, -75, -78, -68, 125, -71, 94, -4, -12, -115, -49, 118, 89, 121, 100, -24, 34, -61, 43, -65, -17, -115, -64, -32, -101, 16, 94, 57, 35, -42, 41, 109, 69, 92, -70, -108, 124, -69, 53, -116, 60, -72, 84, -88, 65, 78, -42, 73, -43, -79, -25, 123, 83, -3, -85, 77, 55, -38, 62, 107, 77, 114, 13, 61, -61, -88, 43, -29, 72, 6, 10, -20, 14, -122, -83, -48};
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
    msg.setTimeStamp(0.7830363914655875);
    msg.setSource(14487U);
    msg.setSourceEntity(0U);
    msg.setDestination(41187U);
    msg.setDestinationEntity(94U);
    msg.seq = 334421224U;
    msg.state = 85U;
    msg.error.assign("RPXSDIOVFWPYZXSZATJUBFTZPOKVFMYRSPGKYQVFAXRADANCRPHZNVXRVWONLYYKULDCEHDBWZZEYHQJLAVXJUUWTPUINNLSTTWNZYIMSCMFSJHLAIEBBLADCHQJNDRO");

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
    msg.setTimeStamp(0.1684557082062048);
    msg.setSource(3677U);
    msg.setSourceEntity(65U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(243U);
    msg.seq = 2832469096U;
    msg.state = 217U;
    msg.error.assign("WKIDRKBNUHWJZDQOGHYPZIYDXESHKMMEBRZLIITJPOXSUWMGNPXVKDAOAEHVSCMVZDMRLRZIUKRRUGNGIZFBKHGZHPRHQYYCTJFMQMQBSCFLEVSLDMLVJWFKGXYSJTQCTIALVZVNAXJKEDUNFWKBFKROFTXQLCGVBFWNWAONIBYFOXARECXYZZYGJHBQQITHBASUTNOLVSURCAGCXYOXNPPMTTAQDOPIJECBGEWUWQCN");

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
    msg.setTimeStamp(0.6539999236154663);
    msg.setSource(64883U);
    msg.setSourceEntity(87U);
    msg.setDestination(2919U);
    msg.setDestinationEntity(115U);
    msg.seq = 1376799013U;
    msg.state = 12U;
    msg.error.assign("LGRGWATQPAHZEMYHLTRKPFJFJGIKSZBUKBTZHSODLZNCDLYURFWCPTNDCCCWQOVNVZSXBYNUSQOOYRZGXICLVEEQJISNAPDXFRZWWFPUOXVEGIFBKLNVIUWVLJOBJXAEVLJRHIMITSULNMRELCNGTPKUIAEHQGZRGPWBFQMFUFYQCE");

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
    msg.setTimeStamp(0.5323340435289324);
    msg.setSource(25980U);
    msg.setSourceEntity(149U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("USOBTYKQIGZOXGRELHPMBVHKEDPIWEXHGU");
    msg.text.assign("PAHNIUETUWHJOOBLEFOMLJUSNVXRNOVGCFUPSUMWQGXLIFYZIQMPCHSVUQBVTKBGCKISNJRRBGIQCXJUHCGGKYXMNJQANYTBDJXJIWGDGPOHHBGHMEOEEJQOTHKIPIVCUPQWDQMJDRQLJYYBZOYCVMXWFTERVKZVYPXWRLFZA");

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
    msg.setTimeStamp(0.44502474524136937);
    msg.setSource(41320U);
    msg.setSourceEntity(144U);
    msg.setDestination(779U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("QTCZXBJRAQYIGDOJFERYDAQZJWFAXYOUFWTKBHSKWSALLUYVYTDFGDNCUVKFISCLPSPOXZDMRFMAOMQLRKSGPABTCNHXXQUCMQVQBGFCWDDXWZCHGYLKNAXVTNATWTGHIJZKWUKHYFTICXZJPVQNPHOKIOPCELFWHUOINSBHPIRTJLWAIBJYIGYKRVSZRUMEZCMQ");
    msg.text.assign("AMGPJHGBVYLNHMXNCXOJIDPPEZBEPLMSDDIMXLJQNTOKLRNFCKATEQNTIOBGACFUWHZROMYHCLEWWGQXGBDBVWUDOVKUOELSAXQTFJREPBJKULOZBFGADWTKJYPXBKRQRUJRPMHZVSOIHJLQVNRLKDUZQPUWHTPMZGZYGTRFZXRBYUAYPUWCQYQCJSHHIKLXIJACVCYREKONKYMFXGQUWFI");

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
    msg.setTimeStamp(0.6175356239012942);
    msg.setSource(469U);
    msg.setSourceEntity(177U);
    msg.setDestination(39646U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("RSPFEJWRQBSOGACTYWSYQKLDUVNBENGOTHZJXFWMTXORJGJTMERAADIYPNALLHUGRNFMUOTZIXHVZPFZNBTZVBZMHEXZMPKFQQUCADTIKVWPPXSCWDQDVJOFLIIHSTNGFAZRJLUECSCVYEHYPCVXJYBGDNXNGUWGBPIREYKGQWDMHOCONKVBPRUZYKYMGVSXUMWOKDHKJUDEQBCXFDBANQLWAIMIHRFLTTHWLZQSIAXRCQKLAUELVYIKJE");
    msg.text.assign("PKCFYKEMRVWPJIGNGJBHDHBFVFYWJXQTECIWQKDZLKSWSPZGGVJAEFKCAOSYSYHQOTILMRTSGLBGAMFDYVHLWEJVPLVTTBGMCDWMRNQPFHUOXBZTAXFCESCRYOLDJNUYDLNOZKROUDUZ");

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
    msg.setTimeStamp(0.00014587631916651578);
    msg.setSource(23386U);
    msg.setSourceEntity(96U);
    msg.setDestination(29627U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("APHEEKLPUSJNGDAEPCIRQRUJGYAWFWYXPQHTSMZJSVIPXLRMFLJFJHNKDKPGNMLYSLEBOYDVFCOAQ");
    msg.htime = 0.4231464496822742;
    msg.lat = 0.9985287529335357;
    msg.lon = 0.483699138372075;
    const char tmp_msg_0[] = {34, 75, -42, 35, 109, -84, -10, 9, 44, -77, -78, -49, 84, -78, -70, 90, 35, 63, 90, -43, -80, 71, 55, -60, 92, 115, -45, 8, 78, 19, -87, 116, 64, 48, -118, 126, 70, -77, -47, 120, -32, 73, -124, -118, -52, -65, 49, -19, -93, 82, 43, -1, 26, 47, -60, 40, -68, -43, 8, 62, 117, 43, 83, 41, 39, 24, -20, 62, -16, 22, -113, -42, -46, -99, 91, 87, -96, 77, -6, -21, -60, 110, -103, -30, -30, 44, -64, -68, 79, -10, 24, -104, 58, -15, -53, 124, -84};
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
    msg.setTimeStamp(0.6447863139683979);
    msg.setSource(61361U);
    msg.setSourceEntity(90U);
    msg.setDestination(64937U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("JWNJDMAVKNFOQBTEKBAEXQ");
    msg.htime = 0.539241558607376;
    msg.lat = 0.2662626851903642;
    msg.lon = 0.7935551761923544;
    const char tmp_msg_0[] = {25, -63, -14, -77, -34, -57, -118, 27, 62, -35, -79, -120, -52, 82, 21, 96, 72, -80, -20, 126, -26, 66, -56, -68, 76, 48, 110, 57, -128, -3, -47, -82, 125, 17, -66, 88, -62, -69, 49, -28, -94, 85, -1, -88, -18, -95, -128, 60, -10, 48, 93, 45, 109, 71, -119, -41, 122, -66, 122, 86, -61, 101, -98, -112, -36, 5, -32, -15, -10, 39, -59, 86, -61, -46, -43, 24, -102, 57, -21, -41, 61, -13, -75, -38, -48, -50, -125, -115, 73, -45, -121, 19, 9, -126, 47, 22, 82, 72, 62, 76, 45, 83, -89, 25, -92, -3, -76, -66, 61, 59, -125, 0, 27, -67, 121, 26, -99, 105, -62, 15, 73, 81, -52, -127, -81};
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
    msg.setTimeStamp(0.1183216778188827);
    msg.setSource(53267U);
    msg.setSourceEntity(161U);
    msg.setDestination(17362U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("LKAHNHFOFMNMHAXVMRDRUUBGLKOVBXAJEYVWISUAVJHTREDGWFSFSWZMQXPLWYBNNZPDJCJPJHVUSABEZOGKMRZPCQSDYCBNPSQVTCTFFCXJQIYGBYACZZZNULWVSQIEORGIZOSGKXMYSOFKRKDLXDXQZKCIOCTWUBPEHSXORLHFCJQLWITTXNQTARJLNKPDWUPGORPLHVRFXMTPHYGMGADEVQOAFEWVUEIJUHYEKDJKZMBCGNTL");
    msg.htime = 0.1584670428553755;
    msg.lat = 0.41465105194074303;
    msg.lon = 0.024561139778061514;
    const char tmp_msg_0[] = {-50, 63, -17, 93, -67, -94, -13, -87, 107, 16, -122, 51, 117, -21, -8, 20, -127, -79, -58, -111, -74, -122, 85, -88, -22, 47, -65, -36, 49, -37, -89, -39, -55, -30, -15, -38, 54, 41, 80, -7, 66, 111, 33, 50, 124, -104, -48, -45, 39, -5, -23, 50, -85, 98, -126, 76, 51, -53, 40, -51, 35, -11, 34, -20, 34, 81, 31, 91, -42, -122, -27, 64, 77, 105, 24, -71, 52, 121, 54, -53, -31, 69, -101, 107, -15, 64, -12, 113, 113, 88, 122, -74, 47, -57, -28, -96, 102, -16, 50, -126, -22, -69, 45, -107, 69, -74, -56, 110, -6, -22, -90, -118, -19, 30, 65, -113, 9, 29, -85, 107, 37, 32, -36, 83, 13, 83, 90, 107, -80, 93, -105, -61, -38, 20, 99, -115, 65};
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
    msg.setTimeStamp(0.6062078927942576);
    msg.setSource(21172U);
    msg.setSourceEntity(60U);
    msg.setDestination(30778U);
    msg.setDestinationEntity(164U);
    msg.req_id = 51013U;
    msg.ttl = 53681U;
    msg.destination.assign("LULCPHNAJLAUCAZZPVFSSDEBZLFEMAOOCMIVXPXSWUWTIXOETOGFDYRCPNNKTNAJFPOQTWITQVYFNFHPEECIVUTGHBIWHZCULYMBMZWNKDYQWTJIGIRBZJJBAUMDWBXRQCRSKVMQMUYVWWXPHHHGDKPISYLRCJTXESVK");
    const char tmp_msg_0[] = {87, 14, 47, -12, 110, 75, 119, -61, -13, 16, -128, 56, -96, -111, -13, -115, -29, 94, 9, -89, -91, -24, 40, -33, -61, 54, -85, 2, -4, -90, 36, 90, 122, 121, -117, 47, 113, -40, 88, 25, -55, -60, -8, -94, 14, -67, -126, -51, 15, 125, 56, -78, 110, -45, 40, 40, -106, -1, 104, -110, -8, 61, -42, -120, 122, -8, 98, -38, -44, -122, 12, 71, 58, 122, -62, -83, 120, -67, -121, -46, -72, -107, 123, -16, -39, 109, 45, 116, 87, -83, -33, 97, 23, 12, 34, -63, 52, 87, -25, -26, -115, -13, -52, -70, -42, -22, 120, 88, -75, -64, -71, -62, -112, 95, 32, -31, 69, 8, -110, 27, 42, 17, 81, 97, 10, 81, -55, -9, 36, 32, 116, 69, 28, -39, -41, 65, -23, 18, 57, -58, -101, 18, 64, 36, 2, 52, 114, 75};
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
    msg.setTimeStamp(0.4124825175296357);
    msg.setSource(35201U);
    msg.setSourceEntity(197U);
    msg.setDestination(8519U);
    msg.setDestinationEntity(156U);
    msg.req_id = 51079U;
    msg.ttl = 13489U;
    msg.destination.assign("PGGNNCZQGXRSVVAAJOYFGRBNFNBMTWJOLUZQJAQGMCOISDHHIBZASYEDPOUOCCRRFUQYIWLTSK");
    const char tmp_msg_0[] = {42, 86, 21, -73, -66, -106, -73, 118, 74, -61, 104, -73, 58, 86, -61, 75, 3, 110, 90, 118, -39, -58, 125, 85, -89, -21, -128, 6, 116, -36, -111, 103, 6, 41, -38, 12, -79, 49, -75, 42, 17, 94, -87, 114, 16, 29, 39, 54, -72, -7, -121, 120, 53, 40, 92, -61, 79, 2, -41, 47, -95, -47, -16, -101, -74, -34, 33, -123, -31, 40, 88, -56, 56, -29, 95};
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
    msg.setTimeStamp(0.07932416555036603);
    msg.setSource(44298U);
    msg.setSourceEntity(231U);
    msg.setDestination(36663U);
    msg.setDestinationEntity(252U);
    msg.req_id = 6192U;
    msg.ttl = 34697U;
    msg.destination.assign("KWLFAUWYFGUZPHHHDTBQCLKUSWSKVQBYPAOEBRNJVLWSPZHWSBHOIYFEVOSGXJSZFWDXMRHLFXQOYGDEIVCSAATDTNLICWIEQLQRVHVGJMKBWDUXDJGEAXDRYMLAWUBSMTGKNRPZQEPPOFRFNTIUIMOQRMJGAGKZJTYEJNUALCXVYPHTENF");
    const char tmp_msg_0[] = {73, 91, -69, 84, 99, 86, -103, -12, -65, -68, -28, -30, 102, -35, 117, 110, 69, 17, 37, -85, -123, -85, 17, -30, -67, -89, 115, -110, -2, 8, -19, 22, 85, 93, -6, -104, 118, -105, -103, 41, -8, 100, -19, -67, 30, 44, 57, -96, -87, 99, 119, 100, -69, -122, -18, -28, -113, -81, -91, 116, 53, 3, -13, -34, 83, -104, 5, -119, -9, -81, -75, 87, -62, 13, -100, 102, 31, 87, 119, 40, -5, -15, 52, -49, -35, 55, 108, -115, 124, -55, 78, 119, -29, 46, -32, 7, -27, 20, -56, 1, 33, -51, 72, 19, -66, 113, 20, -4, -14, -105, -7, 112, 109, 36, -62, 111, 49, 27, 51, -74, -102, 54, -55, 67, -101, -52, -122, -78, -120, 53, 2, 9, 46, 45, 5, 13, -123, 85, 109, 103, -20, 41, 46, -3, -70, -15, 117, 61, -12, 107, -108, 64, 101, 99, -105, 60, -102, -76, -91, -80, 100, 116, -55, 25, -81, 18, -100, 13, 54, 14, -114, 76, -111, 90, -79, -125, -59, 28, -41, -3, -61, 111, 52, 75, -89, -40, 45};
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
    msg.setTimeStamp(0.21387862270888902);
    msg.setSource(52257U);
    msg.setSourceEntity(122U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(126U);
    msg.req_id = 60135U;
    msg.status = 218U;
    msg.text.assign("CSMJBBATQRAJWYNA");

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
    msg.setTimeStamp(0.0031683470446208783);
    msg.setSource(25072U);
    msg.setSourceEntity(33U);
    msg.setDestination(62941U);
    msg.setDestinationEntity(75U);
    msg.req_id = 35399U;
    msg.status = 46U;
    msg.text.assign("KSLZTMBXGQXFKUGOOSDYVRZHOUEYGSUIBGHRMXXWMGLOVLTQJWKJCSAFQHUPRUYALKXCBFUJPTEPCJCQFNIRRVQTPMJBLIZZGZSRHENIIDABWCRYJJFSWDRFWMVJQYEQBHUKQPSDUHHNTNSABGZBWAWXLVEVHRFDTKLA");

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
    msg.setTimeStamp(0.16642723857696295);
    msg.setSource(62726U);
    msg.setSourceEntity(24U);
    msg.setDestination(50629U);
    msg.setDestinationEntity(210U);
    msg.req_id = 24129U;
    msg.status = 2U;
    msg.text.assign("OPFOBJKPRTYYBYPHODSINRDNJXDGUJUVAZGHECDPQNWVMOHWBSSLOVVABDHUUTFJAZNULFLJGHLPBUQXTBVTRJHULEYQDFMRRYCGAFEQXCNIVCLOLRZHSQYICWPMYGZXTZNXQEMCPWUXMSRUKWEYIQCAKZPXINDHBXRTMFEUOSTMRPQWVXYEGEKKBBACKFZIXBCMJMDPASDFWWFKIVGGIASCKHEKGLOWTGMISKAZQJENZITATVQHLJLRDVOWZ");

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
    msg.setTimeStamp(0.623961252076885);
    msg.setSource(64562U);
    msg.setSourceEntity(164U);
    msg.setDestination(27503U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("DCQGILZMWYKX");
    msg.links = 3901031274U;

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
    msg.setTimeStamp(0.8345104256593631);
    msg.setSource(2647U);
    msg.setSourceEntity(113U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("DVGVZNHYDYQKNSBIFFXFMXEQLJOEOTDBTAXNIPHOIDAWVQDKLQQJBPSUFTMSEMFPMAAVHNCGGYREIWEBHNEGLQOZPNSFRYRVBZEDFZRHODIQFYSHNIRVIYZOKOVUANBCIZCSBCZATWXTBGJLOKUXPGCLFCLUFCJJVTEMRGNJMLKWOCSKYKPXIPGTLCQUZOQNJSUKPWXJVGLHPHDMYUSBZWVGUTHRDUMLAMASERJ");
    msg.links = 2971731914U;

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
    msg.setTimeStamp(0.674324241474709);
    msg.setSource(859U);
    msg.setSourceEntity(56U);
    msg.setDestination(24698U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("EOXPIYMZRXOSZWTQWIKGRFFFLAYPUENVXUYAUCMMJAWYJMPPNVLQSDTVOEMWXIINEBSNTGWFJXJTPNHEFGITBOUWZRNLLKRZCWAAUOYZZOVBRQLFRHBHCZHJRASHLBQTBNMRUBDUICPOWYMSTDPLJFZPSGUKNMOCYHJJQQZCGKMETJADWBKRKNPDQTFHOMKKFHCGLCPBSYZEQUKXEGDVXCQVAXODXNVGSHRDYLSISLGIXH");
    msg.links = 45112318U;

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
    msg.setTimeStamp(0.5247425550892171);
    msg.setSource(49746U);
    msg.setSourceEntity(83U);
    msg.setDestination(59242U);
    msg.setDestinationEntity(191U);
    msg.groupname.assign("TJXYCGHYPIZCDKWCUPYFEOHEVWMHWPADHNTCWNUSJXGHLEVVLWQDFOQGAKLSQZRFBEDMLOIXYGBROXOJWKHSFOEZPAIUUNYKWFUIKEYRVNEMBXDBTOJMOZSRGXLUGHEKARPWDMRXJHCVMLGTSSKHBGMWQNIFUBSTPCNJSDCBXTKJYQCLDAHDSTIXXCONZQZVPKPCOIAEFTFUWZJZFRRRIVPSFYY");
    msg.action = 147U;
    msg.grouplist.assign("JYPCHVWTDZGFYTTUCBVHJAGKAZETNPUGFYRJMMIUUGZ");

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
    msg.setTimeStamp(0.6960067946589537);
    msg.setSource(55765U);
    msg.setSourceEntity(17U);
    msg.setDestination(42447U);
    msg.setDestinationEntity(253U);
    msg.groupname.assign("GMLMZTMYZUTEWOTTVKACBKBLMKQNSQJQHVFZFWSGWJJILJFTXRPEQA");
    msg.action = 5U;
    msg.grouplist.assign("TKUENKGHJOUZOXPQMVGDYHBZUGKXAAWKGGXLQWJIOKGBEEISYIUNITECJBVUSJBRNANWHXAPLCGYDEQVRCOGSWKWMSOWPCCNAYRRCXCUFQCFEFUDXYEAVLXMMDORWVHXBQBRAAYLJOESLZBRZDHHMSHDTJZFPNVCITFSLQWZTYNRNJGJQMIMYMFFPIU");

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
    msg.setTimeStamp(0.2276050785876269);
    msg.setSource(44313U);
    msg.setSourceEntity(155U);
    msg.setDestination(37989U);
    msg.setDestinationEntity(219U);
    msg.groupname.assign("PPSUPJGWHKMZESPZAJIGRDUHGBIDKOTVAWQRMIEBVNOTBUPCHBVNEFNORQSXMJQOKTGOWJJFCKNLXMIYXGICREXTXTQNZSHCIGMEYGNVDKNJ");
    msg.action = 143U;
    msg.grouplist.assign("WTJVZEUQBBVUYBLBLIGFVIJJPCMPZCRMFQPZGVICVDUOKWFPWPUUTUJVSSQKRBAYBFKHWLQSHJZVTYARWRGNAWEUTOYGEMAXNODIHMPLYFCCTDXDKBTYKMGGNELINYRAYZDKGYIHOLNXNNQAGPCVMWKOOSFIRQQKEJIZZOPCSSOWOQFZSTGNRG");

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
    msg.setTimeStamp(0.4253731268885441);
    msg.setSource(27072U);
    msg.setSourceEntity(100U);
    msg.setDestination(63099U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5880572794655221;
    msg.sys_src = 14383U;

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
    msg.setTimeStamp(0.5750606930130338);
    msg.setSource(16906U);
    msg.setSourceEntity(170U);
    msg.setDestination(49839U);
    msg.setDestinationEntity(133U);
    msg.value = 0.7131066866908502;
    msg.sys_src = 21670U;

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
    msg.setTimeStamp(0.9003766984870714);
    msg.setSource(16306U);
    msg.setSourceEntity(239U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(206U);
    msg.value = 0.2544326150604673;
    msg.sys_src = 6714U;

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
    msg.setTimeStamp(0.17828300176888257);
    msg.setSource(61139U);
    msg.setSourceEntity(253U);
    msg.setDestination(28290U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9385405651530129;
    msg.units = 215U;

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
    msg.setTimeStamp(0.22835616716848417);
    msg.setSource(13075U);
    msg.setSourceEntity(101U);
    msg.setDestination(46964U);
    msg.setDestinationEntity(100U);
    msg.value = 0.311594302741513;
    msg.units = 12U;

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
    msg.setTimeStamp(0.29618084836182945);
    msg.setSource(14870U);
    msg.setSourceEntity(169U);
    msg.setDestination(550U);
    msg.setDestinationEntity(29U);
    msg.value = 0.3975973444206644;
    msg.units = 130U;

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
    msg.setTimeStamp(0.490769286097526);
    msg.setSource(26416U);
    msg.setSourceEntity(109U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.4333797199819541;
    msg.base_lon = 0.2373207478782745;
    msg.base_time = 0.9725002693440964;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 37739U;
    tmp_msg_0.priority = -22;
    tmp_msg_0.x = -71;
    tmp_msg_0.y = 24339;
    tmp_msg_0.z = -7274;
    tmp_msg_0.t = -22858;
    IMC::SetThrusterActuation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 250U;
    tmp_tmp_msg_0_0.value = 0.837189134194448;
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
    msg.setTimeStamp(0.9304277012031482);
    msg.setSource(29198U);
    msg.setSourceEntity(251U);
    msg.setDestination(18441U);
    msg.setDestinationEntity(11U);
    msg.base_lat = 0.20195034855111937;
    msg.base_lon = 0.15592402479992507;
    msg.base_time = 0.9455533280650681;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 52808U;
    tmp_msg_0.priority = 65;
    tmp_msg_0.x = 6646;
    tmp_msg_0.y = 26473;
    tmp_msg_0.z = -3635;
    tmp_msg_0.t = -13894;
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.11863869191090182;
    tmp_tmp_msg_0_0.y = 0.34179738404997106;
    tmp_tmp_msg_0_0.z = 0.32890886040888523;
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
    msg.setTimeStamp(0.04755971144720783);
    msg.setSource(63298U);
    msg.setSourceEntity(155U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.1919231418960864;
    msg.base_lon = 0.4356840269011467;
    msg.base_time = 0.4138562447491829;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 3339U;
    tmp_msg_0.priority = -82;
    tmp_msg_0.x = 9168;
    tmp_msg_0.y = -29058;
    tmp_msg_0.z = -15590;
    tmp_msg_0.t = 10214;
    IMC::PopEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XQDATRJVZFOTOQQGXNMYMTQADQLYMJNTMTPJKEUEKNTFZLGVDSAIBZHWXMNHVCXFSGIOBMEKFVZUSXLNRWSBGGTRKYIHCBIMLPEIUEOVQKLPCSFVOKESJPOWADWRRYNUHAKAFDYBGPCSYJRMDYXKJCRBHWBZXKTEWMLGNIIUVSOGJEPJEUHJSZYKARBDUFZVLXALWIOHZXP");
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
    msg.setTimeStamp(0.019367350680127626);
    msg.setSource(14188U);
    msg.setSourceEntity(159U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(174U);
    msg.base_lat = 0.9815552925951879;
    msg.base_lon = 0.887312648639573;
    msg.base_time = 0.7223332093910728;
    const char tmp_msg_0[] = {-97, -53, 101, -125, 25, -50, -22, 106, 107, 94, 32, 60, 103, -69, -60, 58, 7, -29, 75, 46};
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
    msg.setTimeStamp(0.7399234165058146);
    msg.setSource(20526U);
    msg.setSourceEntity(69U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(74U);
    msg.base_lat = 0.6773366346839668;
    msg.base_lon = 0.4387715559863785;
    msg.base_time = 0.9132571922877329;
    const char tmp_msg_0[] = {-9, -53, 3, -117, -117, 91, 65, 26, 13, -31, -76, -46, 49, 126, -124, -26, 87, 50, 12, 63, -27, -46, 112, 63, -32, 33, -45, 100, -59, 117, 56, -79, 89, -93, 77, -128, 96, 1, 95, -101, 108, -84, -25, -2, 16, 89, 113, -97, 115, -126, 82, -124, -35, 13, 47, 33, -120, 105, -26, 48, 49, -12, 82, -26, -50, -6, -87, -41, 54, 55, 9, 22, -16, -77, 80, 86, -87, -108, -111, 16, 121, -88, -117, 39, -27, 67, 15, -12, 48, 118, 123, 72, 93, -19, 27, -2, 85, -35, -66, 65, 5, 60, 121, 37, -82, -33, -63, -110, -44, 66, -55, -35, -22, 93, -35, 59, -94, 125, -44, 90, -53, -65, 24, -70, -47, 19, -113, 43, 98, -64, 57, -107, -9, -41, -55, -14, 67, 86, 54, 14, -95, -60, -34, -57, -2, 10, 3, 10, -97, -52, -113, 37, -89, -49, -65, 125, 72, 101, 14, 31, 71, -65, 101, 68, -20, -23, 29, 112, 104, 10, 54, 35, 6, -3, -54, 43, -96, 51, -19, -111, 116, -124, 26, 107, -105, -77, 59, 5, 26, -62, 113, -118, 2, -80, -38, 80, 93, 16, -73, 11, -118, 122, 59, 92, -40, -42, -32, 21, 101, -25, 46, 100, -118, 29, 85, 40, 96, 80, 76, -124, 78, -41, -105, -50, -19, -112, -82, -99, 30, 4, 102, 26, -96, -106, 40, 118, -103, 18, 98, 76, 67, -96, 40, 17, 123, -106};
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
    msg.setTimeStamp(0.26430277945658764);
    msg.setSource(54657U);
    msg.setSourceEntity(241U);
    msg.setDestination(33083U);
    msg.setDestinationEntity(152U);
    msg.base_lat = 0.644256779426921;
    msg.base_lon = 0.15455326325375462;
    msg.base_time = 0.5276850565614538;
    const char tmp_msg_0[] = {-30, -28, 71, 77, 13, -93, 111, -28, -113, 46};
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
    msg.setTimeStamp(0.007115792493061157);
    msg.setSource(51233U);
    msg.setSourceEntity(153U);
    msg.setDestination(36101U);
    msg.setDestinationEntity(145U);
    msg.sys_id = 31391U;
    msg.priority = -73;
    msg.x = -21252;
    msg.y = 19700;
    msg.z = 4438;
    msg.t = 24155;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 114U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KJZSSCBSLXSTFPEVCOLWWZADECTMSYIMFUQUEEYJHTKWLFCVHRKHPJULAWVSWUIIIZGWHZOVABHHMYZYEJLDIWZXGRASMITSVPFWXTIHGLRRXFJGMNPQOLQUKVXEAOVOT");
    tmp_tmp_msg_0_0.lat = 0.6600575705737249;
    tmp_tmp_msg_0_0.lon = 0.6220135222334408;
    tmp_tmp_msg_0_0.z = 0.8616116467048696;
    tmp_tmp_msg_0_0.z_units = 62U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.15753601092521452);
    msg.setSource(24798U);
    msg.setSourceEntity(184U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(155U);
    msg.sys_id = 25240U;
    msg.priority = -72;
    msg.x = -2561;
    msg.y = -3442;
    msg.z = -16653;
    msg.t = -22003;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.5643120872899784;
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
    msg.setTimeStamp(0.15030967681484897);
    msg.setSource(62803U);
    msg.setSourceEntity(91U);
    msg.setDestination(10354U);
    msg.setDestinationEntity(233U);
    msg.sys_id = 50811U;
    msg.priority = 83;
    msg.x = -18766;
    msg.y = 27417;
    msg.z = -5719;
    msg.t = 8982;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NOLLXCGBYXQISTODCUOITVRGBAQKVULZOWPVMNIJJZEVLZKEWYPGMPSNNENDZSBCFAEPETJJSQVDTRJNTYFUESBFGXBDCBKINKKLWOYTPGCIYDASMOGRDUSFMOQPLDWCUQNZVAMZHFTXCE");
    tmp_msg_0.value.assign("ZTUZEXSCTPPVJNUHMQNGEFMHCYHUGZWDLVBHTINCCBYGXQCEQIDRPJLX");
    tmp_msg_0.type = 59U;
    tmp_msg_0.access = 28U;
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
    msg.setTimeStamp(0.6510511942539198);
    msg.setSource(24013U);
    msg.setSourceEntity(64U);
    msg.setDestination(12883U);
    msg.setDestinationEntity(41U);
    msg.req_id = 42391U;
    msg.type = 129U;
    msg.max_size = 9888U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.13893035603096204;
    tmp_msg_0.base_lon = 0.2731675385737713;
    tmp_msg_0.base_time = 0.7047194831920697;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 50442U;
    tmp_tmp_msg_0_0.priority = 3;
    tmp_tmp_msg_0_0.x = -7897;
    tmp_tmp_msg_0_0.y = -29857;
    tmp_tmp_msg_0_0.z = 31223;
    tmp_tmp_msg_0_0.t = 213;
    IMC::AcousticSystems tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.list.assign("BRIEWVSYLJFCSKJMMJAYXXOIXGELKCPILZABRVTGWHTZWCZWLRNIDUMAPGBUAEULZBHRUMSPZKEUQEQBZFAEZJGRSOJIVLSLWWFDNSPDJJMHUFRPAPUGKHFKSVRTDSGDEFNUKGKOWVATMVQRZHBFBQFEBICBPNOCPTJDRVHM");
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
    msg.setTimeStamp(0.9864634215715842);
    msg.setSource(29970U);
    msg.setSourceEntity(45U);
    msg.setDestination(26148U);
    msg.setDestinationEntity(46U);
    msg.req_id = 47528U;
    msg.type = 169U;
    msg.max_size = 63159U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.07195999234535222;
    tmp_msg_0.base_lon = 0.13339181925981447;
    tmp_msg_0.base_time = 0.7350451669793601;
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
    msg.setTimeStamp(0.9543204844524468);
    msg.setSource(55320U);
    msg.setSourceEntity(53U);
    msg.setDestination(7292U);
    msg.setDestinationEntity(52U);
    msg.req_id = 57604U;
    msg.type = 79U;
    msg.max_size = 11022U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.29724845300313263;
    tmp_msg_0.base_lon = 0.3363075102458192;
    tmp_msg_0.base_time = 0.9284884280134463;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 18607U;
    tmp_tmp_msg_0_0.destination = 16511U;
    tmp_tmp_msg_0_0.timeout = 0.22868792872271504;
    IMC::VelocityDelta tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.time = 0.5536672348934021;
    tmp_tmp_tmp_msg_0_0_0.x = 0.1016684183205746;
    tmp_tmp_tmp_msg_0_0_0.y = 0.3811926066298059;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7844993051666257;
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
    msg.setTimeStamp(0.9506790633361767);
    msg.setSource(18911U);
    msg.setSourceEntity(56U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(136U);
    msg.original_source = 54909U;
    msg.destination = 58797U;
    msg.timeout = 0.26677462301585275;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.9807796912351721;
    tmp_msg_0.y = 0.8314783178408622;
    tmp_msg_0.z = 0.9628972787105284;
    tmp_msg_0.k = 0.41395598163729697;
    tmp_msg_0.m = 0.6411404515387251;
    tmp_msg_0.n = 0.6498550998938359;
    tmp_msg_0.flags = 220U;
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
    msg.setTimeStamp(0.44023452812573594);
    msg.setSource(21726U);
    msg.setSourceEntity(66U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(52U);
    msg.original_source = 17266U;
    msg.destination = 3287U;
    msg.timeout = 0.4537822494914612;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 49758U;
    tmp_msg_0.type = 20U;
    tmp_msg_0.max_size = 60745U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.2325938530774596;
    tmp_tmp_msg_0_0.base_lon = 0.877841852399615;
    tmp_tmp_msg_0_0.base_time = 0.35038509849647836;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.32158776933983013);
    msg.setSource(24460U);
    msg.setSourceEntity(117U);
    msg.setDestination(59046U);
    msg.setDestinationEntity(250U);
    msg.original_source = 62517U;
    msg.destination = 4580U;
    msg.timeout = 0.5181384839462565;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 12022U;
    tmp_msg_0.status = 1U;
    tmp_msg_0.range = 0.8868594788143396;
    tmp_msg_0.info.assign("ZYWKMRGBESZBXCLYVMJSBPZUMVJFMFTNUOTOTVZHQTIGUEJNSUR");
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
    msg.setTimeStamp(0.9414669009649396);
    msg.setSource(14413U);
    msg.setSourceEntity(234U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(153U);
    msg.type = 96U;
    msg.comm_interface = 21846U;
    msg.model = 8046U;
    msg.list.assign("XWAFVGUUHFJDTMRNQMESMAFJRZRHXHGBBCYZIEIIZOPRFQMSMBSFUQXTKPXFNOSPGCOYVDLTCBDVBDZGEFMLNWATPYMOHMQSQIJEWTTVVICOGFCGOLZKIBSTUBSKGJAVJPAIYJSYDJQYNXKTRKHUJZTZAIUIXO");

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
    msg.setTimeStamp(0.7731796264229127);
    msg.setSource(25913U);
    msg.setSourceEntity(218U);
    msg.setDestination(30525U);
    msg.setDestinationEntity(123U);
    msg.type = 245U;
    msg.comm_interface = 36959U;
    msg.model = 38030U;
    msg.list.assign("LXUJKKYYPSHWAVXSSVDDPOFFBTOQWUIQTSJCHQQHKQKMUELPTAURGLOHXBVXEYRQGXMIGVFA");

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
    msg.setTimeStamp(0.10807326341668344);
    msg.setSource(21060U);
    msg.setSourceEntity(24U);
    msg.setDestination(52124U);
    msg.setDestinationEntity(82U);
    msg.type = 72U;
    msg.comm_interface = 54129U;
    msg.model = 6082U;
    msg.list.assign("IYJDQZBVXVYSLRCJGBKXNUCQLHFEDTEOFGYWUMEKNTTHMOITWOOPOLXTXELOGJVNRRVUVRTJAPZDZZHJMMUUDWXJIJCAAQKYXERVCBKFEEIGXQAZSGWQSWPKJSMNOGVJFNMCNGRGCHHTTDPVQXLYUYMPDCPSTADBHSBNIPKRSTKKBLZIRHJRUYBMNHBWASZMVSOXZQIHLDWIEFPQFGFFENOQZGFZAYCUXFOLKSVACPABDCEIPURWLIKUBW");

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
    msg.setTimeStamp(0.6846483626709905);
    msg.setSource(48563U);
    msg.setSourceEntity(2U);
    msg.setDestination(45923U);
    msg.setDestinationEntity(140U);
    msg.type = 5U;
    msg.req_id = 560098126U;
    msg.ttl = 53916U;
    msg.code = 210U;
    msg.destination.assign("DPYBGMHFLZAVMHADZOBTFYDBVIYEXTVTGSUBNSKXEOGKRJAHSEHFWXRETPITVPGRKKMYSYCMWCIYAWVMCICVDQEOUDPCZFIFQDHWJIOXFJELMTLUQNIUHUTTWVNDKPBARKNUNIQAFMDBPTBPXLUCJYRNEWSWTKCJQXLVYSCGOSLZWEFOGAKXQLDHOJRSRQVZGIROZWRKPSONUVRN");
    msg.source.assign("OPDOYDWTRKHZNYQYQTPZGUCRAMSZUJYUXBSNWWEHBIOCPBNWBRHZXGXTHFXOZMBQKQIATMSRBCEZLCVMVPKCOPDADQGFYMANSEL");
    msg.acknowledge = 10U;
    msg.status = 249U;
    const char tmp_msg_0[] = {-72, -93, 88, -61, 22, -30, 15, -72, 81, -92, 18, -36, -107, -24, -20, 14, 50, -60, 25, 13, 94, -113, 64, -62, -100, 91, 65, 115, 65, -84, 21, -6, 115, -48, -40, 50, 48, -101, 96, -115, 73, 66, -38, 48, -110, 53, 79, 37, -102, -83, -111, -5, 11, 59, -36, -97, 86, 73, 20, -103, -85, -39, 35, 34, 19, 34, 44, -62, 48, 49, 32, 21, -68, 10, 17, -121, -72, 8, -53, -62, 60, -57, -71, 22, -41, 52, 15, -70, -98, 56, 67, 28, -112, 19, -121, 18, 5, 80, -42, 19, 93, -90, -61, 26, 13, 40, 51, 65, -97, -104, 11, 16, -32, 29, 42, 31, -47, 108, 84, -14, 55, 0, -97, -72, -29, 102, 30, 99, 14, 113, -121, 125, -62, 118, -56, -53};
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
    msg.setTimeStamp(0.8560141142261275);
    msg.setSource(453U);
    msg.setSourceEntity(75U);
    msg.setDestination(5028U);
    msg.setDestinationEntity(134U);
    msg.type = 114U;
    msg.req_id = 1101263496U;
    msg.ttl = 36696U;
    msg.code = 104U;
    msg.destination.assign("VZCLHWWJSDJGHPPWRRFSMEFGUTEBXURTZLRZBCVFMCTYHWITVGQFQYKQINJMQFUBYIARIHEMYYBNCHBVNLHLKERPLYVPORVFKOIGHSAPYPGRCZGKBHDEMDFSDYQANMGWVOEAGYCCDFGJQAQZVAUJCRSTXDDLZULKISNI");
    msg.source.assign("MCXPQFOXGGDBROBNNHJPFOWDBSCSDRQDHZPGZTXQHGWTUJMILJPVVLYUTXFBEIW");
    msg.acknowledge = 11U;
    msg.status = 10U;
    const char tmp_msg_0[] = {-71, 95, 6, -27, -31, -77, -70, 56, 52, -30, 95, -23, 80, 33, 4, -44, -16, -62, -93, -73, -10, 17, -45, 40, -23, -66, 97, 87, -65, -110, -46, -91, -69, 38, 109, -87, 113, 84, 4, 108, 104, 69, -61, 43, 85, -70, -18, 88, -5, -55, 5, 43, -62, 21, -64, 62, 116, -51, 78, 59, -50, 93, -39, -22, 17, 112, -55, 20, -122, -40, -90, -122, 63, -60, 106, 121, 30, -114, 70, -84, -101, 34, -122, -43, -109, -47, 53, 51, -65, -29, 18, 42, 100, -115, 71, -104, -20, 36, -59, 117, -21, 121, -80, -89, -61, -111, 34, -31, -12, 8, 37, -48, 125, 62, -28, -66, -112, -28, -122, 57, -63, -26, 26, -103, 18, -115, 52, 45, 80, -100, -123, 92, -57, -17, -74, -119, 12, -18, -74, 12, -115, -32, 3, -119, -32, 44, -74, -116, -110, 71, 119, -67, 54, -94, -81, 51, 107, 21, -12, -48, 3, -26, 58, -51, -124, -57, 92, -87, -42, 73, -118, -85, -106, 0, -102, -25, 95, -118, 40, 74, -41, -78, -126, -52, -57, -10, 31, 38, 102, 126, 72, -18, -112, -64, 98, 18, -101, -88, 125, -93, 39, -41, 77, 63, -17, -87, 53, 6, -96, 36, 120, -1, -54, -38, -38, -43, 6, 98, 46, -109, 63, 68, -29, 13, -71, 17, -106, 97, 90, -50, 102, -64, 81, 28, 56, 117, 107, -57, 1, -60, 19, -51, -65, 50, 93, 77, -5, 22, 39, 119, -54, 32, 117, 55};
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
    msg.setTimeStamp(0.050308384475392987);
    msg.setSource(60955U);
    msg.setSourceEntity(20U);
    msg.setDestination(41791U);
    msg.setDestinationEntity(69U);
    msg.type = 134U;
    msg.req_id = 4177165167U;
    msg.ttl = 35176U;
    msg.code = 162U;
    msg.destination.assign("MTPDIZSHDMIHTLQVPFFDRRMGGOVFRIYPELVFLOQWSLBCDJYCMWVOZMLIVBUREKTWJDMQJJIABQZKOYRTGRHKZQVGPVWTGKCWALPNDQJBXFBQETNIUJPWXBGWXHEZCANXTZOLPYCXLBKDYSHXGGXEIAKAOWTBELAOYPJTMEIZHWWXXDCDYOUSUUAQURMFYSNNZFSVUSMUKRBOSKAZHKCCUQFSVGSCTLGEHA");
    msg.source.assign("MXJUNTOYJYIEZAYRFZLBDRFZDSMEKEFXENTVLCXEJKLKTMYWGPJCNCKYNWYEQXSGXVOZPPOQCTPLLSJWQMATUBPHFUTLH");
    msg.acknowledge = 178U;
    msg.status = 127U;
    const char tmp_msg_0[] = {-29, 111, -16, 50, 14, -81, -86, -4, -28, -45, -96, 20, 111, 33, -57, -108, -125, -97, 12, -90, 102, 126, -92, -30, -41, 63, -40, 29, -40, -22, 118, 86, 120, -70, -16, -52, 75, -73, -39, 18, 111, 107, 112, -64, 24, -79, 118, -59, 106, -48, -6, -42, 17, -67, 0, -117, -91, -23, -73, 111, 106, 44, 39, -24, 77, -37, 16, 69, 86, -60, -85, -95, 99, 77, -2, -115, -107, -84, 63, 67, -126, -107, 44, -13, -40, -36, 51, -71, -50, -82, 41, 74, -16, 15, 81, 124, -5, -93, -85, 38, -69, -96, -61, 14, 47, -100, 76, -59, -24, -15, -44, 46, -14, 71, -108, 4, -82, -125, 64, 66, -111, -6, -65, -128, -13, 114, -40, -22, -119, -10, 2, -115, 55, -47, 3, 6, -21, 62, -52, -118, -87, 80, 31, 19, 78, -64, 58, -75, 29, -65, 59, -63, 22, 38, 73, 123, -75, 114, -66, -19, -98, 40, -89, 12, 49, 42, -32, 15, 26, -58, 55, -42, 57, 27, -30, -101, -57, 34, -6, -12, 73, 98, 39, -16, -104, 69, 5, 93, 31, -15, -45, 82, 83, 72, -90, -51, 86, 49, -75, -62, -59, -40, -36, 3, 60, 42, 47, -42, -75, 85, 112, 15, -42, 61, -50, -107, -72, 11, -109};
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
    msg.setTimeStamp(0.20989723065750354);
    msg.setSource(7633U);
    msg.setSourceEntity(171U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(183U);
    msg.id = 219U;
    msg.range = 0.8480676518975351;

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
    msg.setTimeStamp(0.015929648594577572);
    msg.setSource(3341U);
    msg.setSourceEntity(63U);
    msg.setDestination(16069U);
    msg.setDestinationEntity(97U);
    msg.id = 174U;
    msg.range = 0.24445962316789527;

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
    msg.setTimeStamp(0.963043816974166);
    msg.setSource(5124U);
    msg.setSourceEntity(201U);
    msg.setDestination(1850U);
    msg.setDestinationEntity(37U);
    msg.id = 112U;
    msg.range = 0.5581715691238238;

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
    msg.setTimeStamp(0.09971297500589948);
    msg.setSource(25711U);
    msg.setSourceEntity(102U);
    msg.setDestination(29199U);
    msg.setDestinationEntity(6U);
    msg.beacon.assign("LJZCQGDYRAAEALFPJTTDVFIEBCHSJQNGCTJVMQXGCMJODAFEXGRPDKHYIQJXOHGKCBXSJFSEZKKGGICHQTANMVUSEVZVXWMUYDYQKFCTLHHSIBBFIDFZXSQLAMIYWONAZXSMHKHOTRWQNTSDUECWQVLGLWUVPYXINROZBABNZNLOPDPIDPRZMWPYLUITWQAKPMURYXNUUANTEKBRRFYUJOMYPRFRSCVGBWTPCBHEOO");
    msg.lat = 0.23319017096986605;
    msg.lon = 0.31699536771505377;
    msg.depth = 0.574159392079335;
    msg.query_channel = 14U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 180U;

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
    msg.setTimeStamp(0.933004345498012);
    msg.setSource(7234U);
    msg.setSourceEntity(68U);
    msg.setDestination(13142U);
    msg.setDestinationEntity(145U);
    msg.beacon.assign("WDZRMFPDHRRYLUJWMHEGAIYWOPKKFCPROZUKLQDECZIKNIQRNZTXDETAXI");
    msg.lat = 0.8335215019105832;
    msg.lon = 0.851438668908571;
    msg.depth = 0.27903966856406415;
    msg.query_channel = 88U;
    msg.reply_channel = 159U;
    msg.transponder_delay = 213U;

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
    msg.setTimeStamp(0.45173017376964364);
    msg.setSource(60531U);
    msg.setSourceEntity(217U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("OFPDOWTEILHCFJRMMVZONIYZRNKNCMVFLTCZBIDZXPWNCHTUKBUVEEICDJBXNXBBMZTRQRYUAUPJUKHEOLBGHDRRDFST");
    msg.lat = 0.8591863632209376;
    msg.lon = 0.4882775831843843;
    msg.depth = 0.11503200439911476;
    msg.query_channel = 188U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.41336663558223696);
    msg.setSource(65046U);
    msg.setSourceEntity(64U);
    msg.setDestination(7964U);
    msg.setDestinationEntity(148U);
    msg.op = 59U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PTTKRVLQBIENMDKDSUFOOTHFIBYDFFYYKAOTOMFYMPBGTIRTQKPGZPAJGHPMZAEXN");
    tmp_msg_0.lat = 0.9395800445483865;
    tmp_msg_0.lon = 0.32636665848037194;
    tmp_msg_0.depth = 0.6310575782279715;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 104U;
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
    msg.setTimeStamp(0.6043832938955682);
    msg.setSource(25761U);
    msg.setSourceEntity(82U);
    msg.setDestination(42534U);
    msg.setDestinationEntity(185U);
    msg.op = 158U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TGRJUOKYUFGKCTXZHREWPZKBPBJOLHHPFUFAZTXDFDXGLDNKXLGTJGCFQVVBZW");
    tmp_msg_0.lat = 0.7104780877983005;
    tmp_msg_0.lon = 0.4023118787649582;
    tmp_msg_0.depth = 0.4733773800246106;
    tmp_msg_0.query_channel = 71U;
    tmp_msg_0.reply_channel = 31U;
    tmp_msg_0.transponder_delay = 16U;
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
    msg.setTimeStamp(0.05598623558711957);
    msg.setSource(8481U);
    msg.setSourceEntity(86U);
    msg.setDestination(16079U);
    msg.setDestinationEntity(132U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.8958654407538555);
    msg.setSource(5266U);
    msg.setSourceEntity(161U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(203U);
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 31621U;
    tmp_msg_0.bearing = 0.5970882774198499;
    tmp_msg_0.elevation = 0.5467926091229162;
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
    msg.setTimeStamp(0.6469657522959319);
    msg.setSource(30696U);
    msg.setSourceEntity(72U);
    msg.setDestination(63950U);
    msg.setDestinationEntity(226U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.8737443298925268;
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
    msg.setTimeStamp(0.47941470274547837);
    msg.setSource(42111U);
    msg.setSourceEntity(103U);
    msg.setDestination(6628U);
    msg.setDestinationEntity(111U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.22189039645690878;
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
    msg.setTimeStamp(0.45127884114502514);
    msg.setSource(57629U);
    msg.setSourceEntity(34U);
    msg.setDestination(19503U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.3564441263110939;
    msg.lon = 0.6774597667205317;
    msg.depth = 0.1158039833375476;
    msg.sentence.assign("ACMPDQPPYADZNHJCMNRYBPCXBCBIZVOQBHJAWMGKDDKTIUPEKFVMROIAGTYMQIJBGOZZOWKKWYUUDWSTWJXJNFRRPDETQXXVAWECSXHOSTDSVVSLFF");
    msg.txtime = 0.4455865603434517;
    msg.modem_type.assign("NFQHJCRUQWSDAAFSGZGNSFWYEHOXBTWWMZIYTVXVEOPRPNZMHVXAQLGRQZLBEAXHGISYRNNPTBSOMKDIVOZOVPUEGOJBKYBNMRPKEHZKTIKRBDRTGLOODUTMBALIFQACTJJYKVSFBIOXHUXMITPSWRAMQMZFDWMXRPIU");
    msg.sys_src.assign("TMYKNPIWAZERDVFYNPIUJJYMTFJSJYWVDQHIUCXMZOFTIBTHVBSPCQMRCWOLAHQCPSULNAKHPMZUENNCUGHWILFQEXZDGRDRYQULWGCFJVSAQKFXCODXXSXRRBOWUMPNBBONQUAHPOBYVWOLGTBDSTKVTXHAEGZHNZVXNHHODJGPZDQLEJSKBEAJSDIGMOJIGKZCGNZJCLTYIGPVQQSOFWBDERXUME");
    msg.seq = 33406U;
    msg.sys_dst.assign("HSTYZIMJEMRJFTAYYBQTXAMGRFFRKFMABPQTXVNLWBJMNSIRQORNHLOKCCOPYMZQWPCUVRNEFNKXPLFZKHYGPEQIFZXJVDMNJGLCYTSNGEBAWGOJLKJGERMESWVUBNOSSOOYTTXORZDIKJPYIDUBVAFNDBXICVADMJGJSTXGPZQDWK");
    msg.flags = 19U;
    const char tmp_msg_0[] = {107, -20, -66, 50, 5, 29, 41, -83, -98, 94, -115, -77, -108, -66, 35, 110, -92, 74, -88, -105, 96, -51, -93, -62, -73, -116, 12, 126, 76, -37, -56, 83, -37, 13, -55, -46, -30, -61, 115, 0, 71, -33, 74, 45, -51, -118, -106, -121, 94, -15, -37, 44, 110, -51, 42, 110, 45, -23, 77, 3, -8, 38, 17, 10, 61, 117, -92, -96, 18, 116, -49, -45, -66, -73, -44, -87, -127, -99, 6, 15, -82, 110, -1, -55, 14, 106, 68, -10, 115, -128, 23, 68, 27, 50, 20, 123, -87, 126, 118, -33, 116, 9, 67, -126, -76, 83, -105, 64, 98, 99, 96, -10, 7, 58, -79, -103, 29, 22, 66, -3, 44, -88, 48, -106, -95, -119, -24, 77, 11, 68};
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
    msg.setTimeStamp(0.08495193234405418);
    msg.setSource(48974U);
    msg.setSourceEntity(182U);
    msg.setDestination(50366U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.7821944510670081;
    msg.lon = 0.43788379725082516;
    msg.depth = 0.8644706327313539;
    msg.sentence.assign("XUTNZESEVBWEDCFEEHUJYJMGAHOPUFBYRZISYJMVHOIJPRXSTSIRKHDLWFXABCFHVAPNCRSMWLYZNDVKQXMPENSGXVPNFJKNKZINNSCYPBFOZEKLUUWLTCOARIRUADAMWJBQFVAXPHLTXGYVTBIUGBSJEFIRSYNQAPGKGOTOLQQMJACKOJOGLDMZWKHZVPRSGDFXZMYPYKITOJDHAG");
    msg.txtime = 0.7544862153609526;
    msg.modem_type.assign("LAGPRMXYSBYJRIOKASWSXSSYAWAEBCIIKQVOCMWELUGLVUUAWWLGAIKNGXPDTHZNVXZFYVPGOHZMLUBVURDAAXNBERNMMJFEFQKDIXODRGURZKFUHCUHQQTQXRUZXJNDSQTYDYQESTNBVIMDZRBYJRFQKJLWZRDQACTGHCLOJHWDPCKLNGHTPFZICKBMJFYHOZWNIJFIFHYXIYJTHNGBABVOPPOLUTNEGMCFVZKECWSSEBXQTPMLWK");
    msg.sys_src.assign("ZNLKSBDFWZUBAMFQMCOBBHSTGUBPJPIZIFGADMORHDRWLHISGJROGIQUTWXIKMOARSUJVPZZVDJRXKLAPSACMHZPMHGDFFSLKTZIRVESSBJOMCCTTKJEJFOWWFCKIKYSHFCKRQVQQLWXUXHJUWEBEFNXPXNZFCCTTRNWVUGLQDHTNJLPRNMDDXHTYTJXUYQAEMPUGIBGAEYYOXQVANRYEPKSKBVAQBVIDAZGPWYEVZD");
    msg.seq = 24583U;
    msg.sys_dst.assign("CLBURDVRWLIQOJNUKQGLPQLHFXIGPCWETBFUNZOHOXBMNADYMMUYXLIBCETUQOOVIZLXDQZMDWWDHUMJYYZYGHPRZWRDFJFULGWHBSYEWZKBDKMZEAIIOVKOHGXPTHLXJMCFSKQKE");
    msg.flags = 143U;
    const char tmp_msg_0[] = {-76, -97, -75, 51, 91, 7, -43, -74, 28, -87, 62, -120, 59, 37, 57, -65, 102, -74, 110, 97, 92, 61, 95, -108, 57, 2, 47, -40, -8, 64, -39, -47, 65, 98, -42, 47, -36, -49, 31, 111, 98, 119, 21, 123, 52, 95, -44, 26, -72, -20, -113, -83, 43, 54, -51, 31, -23, -93, -31, -54, 0, 113, -123, 50, 120, 75, 77, 55, -92, 126, 41, 120, 47, -128, 59, -77, 109, -12, -120, -33, 57, -69, 47, 120, 116, 109, -57, 122, 14, 9, -17, 25, 94, -103, -14, 118, -115, -32, -32, -22, -87, 117, -46, -13, -28, -84, -108, -25, 26, -77, 105, -80, -75, 98, -124, -61, 8, -104, -25, -14, 27, 81, -26, 105, 13, 40, -118, 93, 14, 48, -66, -121, 61, -128, -74, -52, -25, -113, 9, -67, -104, 58, 34, 8, 1, -74, -90, 113, -67, -44, -81, -10, -107, 88, 33, 19, 24, -86, 96, 19, 44, -6, 29, -70, -30, -12, -93, -45, 4, 51, 77, 8, 2, 36, 58, -65, 124, -71, -51, 46, -24, -107, -106, -108, 3, -33, -29, -31, 99, 7, 31, -22, 115, -83, -31, 114, -127, -101, 7, -3, -30, 32, -10, -60, -28, -54, 73, 84, -38, 126, -20, 17, 33, -10, -52, -94, -119, 51, 115, -127, -60};
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
    msg.setTimeStamp(0.530458269500167);
    msg.setSource(55961U);
    msg.setSourceEntity(235U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.41386537840307014;
    msg.lon = 0.6312348617631872;
    msg.depth = 0.767006498921581;
    msg.sentence.assign("GGAVGURZUUSVDFMQYOAZOHNAWECLKXRSWRYDOCEOIAPLQIWBMRCDVXBMIKHSOXJZLQBNAEPZSYAJHFQMOQOPXWAHIFNUSSUSMJOUXPYLJDTXRUTBDDQEKKPWBKIHXMEBGUOHPYKFGPHVGEQJVLFJNGFATERNKTHGYMELDRSYCTQIPJDXRH");
    msg.txtime = 0.2019033458920917;
    msg.modem_type.assign("ESRVBAYKHUYNMZSYXZKHZDDLMKDIKSXTUMMCVVQCYGGNTXTOHNLSWOUGDAPCPIRXYUDCQYJBEHVDQHYIQMRJHSTPJBJBQIFUCHERAZCSOTDYNUOHXKAVPPQQTTTQMNYCNPWRKOJOLDSOUAGOWMB");
    msg.sys_src.assign("HUSWUHPTUUNXHJKW");
    msg.seq = 21209U;
    msg.sys_dst.assign("MIVBOFRLQWHPFRXRNCPZIPKLHETZOKSFVZEHWTNBGOGYJIFNKYHEIGHNSKQPDRADDKPZGFSORHJLEKMYSULKWZJDXHXBUFACYEIQEAABMZVXFYRHR");
    msg.flags = 174U;
    const char tmp_msg_0[] = {124, -119, 19, -25, -68, -7, -73, -40, -36, 102, -123, -53, -123, -84, -87, -50, -27, -32, -92, 36, -13, 4, -80, -92, 21, -27, 11, -37, 116, 77, -95, 101, 112, 9, 124, 114, 63, 28, 22, -88, -76, -19, 123, -65, -71, -78, -73, 2, -16, -58, 29, -8, -113, 79, -70, 28, -61, 113, -77, -87, 5, 54, 82, 13, 75, 20, 40, 111, -36, -77, 66, 58, -26, -84, 17, 82, 56, -82};
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
    msg.setTimeStamp(0.9164308320957498);
    msg.setSource(33244U);
    msg.setSourceEntity(54U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(143U);
    msg.op = 235U;
    msg.system.assign("NMZDOJQJDWKDKAEUBJAVIMWTFOEBHZENRBXBKYMCDRYUDQYNCFEDWFTODRKPXLQKBSBSITWWAOXTCPRDQXJGNWHNZVMZQULHBGJAFQ");
    msg.range = 0.3392204699155382;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("WZFXSNWMYYAGDEIKCSRCDGHLWQRWTPRQHBTVZFLIUMFTBXWLBHGBDKMXGOOABWAENNEXPAEORJADXOITEUMHEENDQEHJQPWOLUZHWUKXISUJBJPIBRUTZLZCSPZZXHNTVEJSYFGCKZXKOAHMSVUZFUGYYTICIXPWAMPLFRVHQFOAVLNQDGLRCJMVKYPCEQZDTDGOKJ");
    tmp_msg_0.htime = 0.7764933291598473;
    tmp_msg_0.lat = 0.8050456853193383;
    tmp_msg_0.lon = 0.5305030774911634;
    const char tmp_tmp_msg_0_0[] = {-97, -58, -89, 32, 106, -32, 0, -112, 11, 59, 109, 94, -28, -46, -128, 41, -85, -103, -120, -73, 80, -107, 2, -51, -29, -3, -16, 73, -79, -12, -97, -69, 56, -94, -28, 91, 38, 120, 113, 13, 22, -128, 88, -10, -86, 93, -55, -65, -105, 19, -109, -112, -128, 97, -17, 97, -16, -116, 30, -75, 57, -105, -56, -85, 20, 42, -106, 46, -55, -89, -94, 14, 10, 9, 103, 50, -34, -89, 117, 86, 1, 89, 119, 115, -36, -76, 59, 15, 9, -1, -1, 119, 107, -71, 79, -82, -83, 52, 28, -79, -3, 94, 57, 121, -67, -123, 105, 126, -25, 19, -31, 36, -42, 112, -9, 47, 122, 20, 71, -120, 1, -9, 16, -71, 54, 18, -122, -35, -51, 112, -82, 40, -41, 34, 5, -73, -116, 51, -26, 33, -42, -8, -119, 50, -36, 36, -8, -115, -57, -112, 78, -36, -32, -94, -104, -10, 69, -33, -47, 82, -6, 7, 3, -8, -22, 123, 7, -112, 8, -65, 21, 31, 7, -54, -36, -125, 84, 92, -80, -27, 25, 100, 117, -27, 83, 93, -49, 13, 49, 75, 79, -22, -1};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3729233434095748);
    msg.setSource(5961U);
    msg.setSourceEntity(244U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(61U);
    msg.op = 88U;
    msg.system.assign("DSZPAVJFMKTVGYZACGUEKOJHSHYPJYIIDIFUMWMAHDSMKXZBVMENLERQZTBJQWZONJCXHLYRZPLHTUOXTYRRNDTUBFKRAPUFLDNGHEEOULCESVAXQFKLNVSDBIXIXBCJPWFCTLCJCNHRWCZWEBDWEHSOGQSXMBFYMJVGKVTPPWHSLYIKVIIMXNQARLVKWCLFTWGGNBVAYTGCBFOXDQJAHOR");
    msg.range = 0.29513842510935395;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1654700085U;
    tmp_msg_0.latitude = 0.2721477876896874;
    tmp_msg_0.longitude = 0.59755083913177;
    tmp_msg_0.altitude = 55998U;
    tmp_msg_0.depth = 53646U;
    tmp_msg_0.heading = 27708U;
    tmp_msg_0.speed = -12028;
    tmp_msg_0.fuel = -49;
    tmp_msg_0.exec_state = -51;
    tmp_msg_0.plan_checksum = 65344U;
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
    msg.setTimeStamp(0.32586443325634173);
    msg.setSource(31489U);
    msg.setSourceEntity(216U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(185U);
    msg.op = 30U;
    msg.system.assign("IQPGYAGBLSSOGFFQJUPZNMDNEZOOZLITYUZQHMYICAQBLCIFCZWYFVNYLAFEVKXCSBRGLVVNNZESSYFWJMMGLWMUOLUPD");
    msg.range = 0.18370905803763526;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6836787539466251;
    tmp_msg_0.base_lon = 0.519434943908459;
    tmp_msg_0.base_time = 0.936413461610563;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 15730U;
    tmp_tmp_msg_0_0.destination = 43759U;
    tmp_tmp_msg_0_0.timeout = 0.6322295060208705;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.beacon.assign("LPHHLLORBRUTZIZYVSOGSDELDVJDGPAUNHFKTMRKSPDFENWHDYUGLWRAACAQUTOFWPCVSEBGNDACBFWIRSKKYPZVXKVHTQVVYCRCONQTKWOQCYZBBIFVLIHSDMWYAJILGMBCNZUDPJIXENMMHGIXOJXDZWSPSOHQASGPQNBQBNXNFQLXROELAHKOTMF");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.057087039683210716;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6285750303023312;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.036190333436057265;
    tmp_tmp_tmp_msg_0_0_0.query_channel = 235U;
    tmp_tmp_tmp_msg_0_0_0.reply_channel = 19U;
    tmp_tmp_tmp_msg_0_0_0.transponder_delay = 123U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5346295033475691);
    msg.setSource(8750U);
    msg.setSourceEntity(207U);
    msg.setDestination(49637U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.4471509049109448);
    msg.setSource(32332U);
    msg.setSourceEntity(239U);
    msg.setDestination(40712U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.9138758610230288);
    msg.setSource(28348U);
    msg.setSourceEntity(122U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.1695582239389336);
    msg.setSource(12577U);
    msg.setSourceEntity(120U);
    msg.setDestination(58953U);
    msg.setDestinationEntity(141U);
    msg.list.assign("LBTFFLHVFMRCKFSDCUJYTZBLWWVTZGENWOROQCGWUPNALEEZQDNSYOLVKUOGZPNSZJXFAEYRTNWY");

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
    msg.setTimeStamp(0.5083856884390683);
    msg.setSource(26073U);
    msg.setSourceEntity(148U);
    msg.setDestination(53228U);
    msg.setDestinationEntity(220U);
    msg.list.assign("WZVAOYHQREZMRZDALIPWXUNKASTVPIDWYUHCPQRYRFUEIBGTVJDKEOCAENQCIZMHJXYLWCTIJZBDFNYFPQBKOBEACMZLBNQ");

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
    msg.setTimeStamp(0.050470941580067485);
    msg.setSource(45253U);
    msg.setSourceEntity(6U);
    msg.setDestination(30909U);
    msg.setDestinationEntity(75U);
    msg.list.assign("WWXKQUBWJQHAFNLVUEVTOSBGOFAJZNAPROWJWVZKECSNTZUVGZMTTUYJDIAJDCIKDFWTCSEXMQAVGBFAIWUJAKIXTOYMJTACBYLGDOQPBEOIO");

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
    msg.setTimeStamp(0.4410666938686688);
    msg.setSource(60306U);
    msg.setSourceEntity(151U);
    msg.setDestination(2024U);
    msg.setDestinationEntity(168U);
    msg.peer.assign("PSJKDKELSETHYZJTVEHNLJKADPRKWPSRTWEOAOKTCIFFMCLYYOBKMECXBQQULQQUDDSNHXFDTBXCDANTYSCURBRZOPMVYAZQNBIRNZSFARQUTOXGAPJWVTEFZXICKIHZUXOVZISBPCJBMPVCVHDNFFWHMGGMHWOOAUMYWHNEPQRYZGJGLLIJNOGHMFTISVQLBKCXUUSUXJXPHRAIWMZLGQVKGBBGEAJANUEFIWTRWIDFXLVEZLOMSJYYYKVCGN");
    msg.rssi = 0.15688757942177278;
    msg.integrity = 52993U;

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
    msg.setTimeStamp(0.8717337268382634);
    msg.setSource(63522U);
    msg.setSourceEntity(234U);
    msg.setDestination(46334U);
    msg.setDestinationEntity(186U);
    msg.peer.assign("DSCHVPILUPPQECSBZZZQBLNZGIAOOCHIXMAJPPACTIKBYEHMLHJIEYCVVIRLEGKTFIMSWMWMBQHONRDUYZBUPOJDEVZYZQHJOWSCEVJUSGLCXHRQWGPSUFWDTMKGKVFDICXBFNX");
    msg.rssi = 0.2106266276986235;
    msg.integrity = 53564U;

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
    msg.setTimeStamp(0.12673213210729284);
    msg.setSource(10364U);
    msg.setSourceEntity(212U);
    msg.setDestination(20263U);
    msg.setDestinationEntity(236U);
    msg.peer.assign("BAJCESWCSKXUGZIOXYEJASEGDGICWKAFPRLAODQZJAWRYPKUMEYFTJNMOKFUPCIXNGIPXIVBEYSYTQKBVJQPWLBKUGIMJXFSXPKFETZOQTVRUQWVXCMVWKTJPHZFUSAAUTDHLMXIEMHZRNDRNDYKLNYRVBNUFINWAHVDEXBELBHU");
    msg.rssi = 0.5912462234073713;
    msg.integrity = 47596U;

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
    msg.setTimeStamp(0.660984061161748);
    msg.setSource(12017U);
    msg.setSourceEntity(225U);
    msg.setDestination(31180U);
    msg.setDestinationEntity(229U);
    msg.req_id = 57287U;
    msg.destination.assign("EGRCSJGUJDKBNEHMGAVBAURLODRMTVJVHWASLPHLFEWEIOPCWFJIYPKZSILKYANFRKRYJHIQMTMLUXKDXSXETMJPAXHBBFZESONLRTKZLISCUMGBOYBCPNJVDIEWATNLHDXUMVBACZYS");
    msg.timeout = 0.2129147901104994;
    msg.range = 0.08670838391431113;
    msg.type = 254U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3255870391U;
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
    msg.setTimeStamp(0.4747278404495914);
    msg.setSource(29209U);
    msg.setSourceEntity(44U);
    msg.setDestination(59869U);
    msg.setDestinationEntity(233U);
    msg.req_id = 9951U;
    msg.destination.assign("RQJEHUIDUVOBFGSOJIUTNDAGMVZJCANDVGZRRYKVWXMDSNLOYOYXZWEVLWSGOZTPHTADJPSCDHZLN");
    msg.timeout = 0.4690401679679602;
    msg.range = 0.39768116258788366;
    msg.type = 141U;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.8153077949367715;
    tmp_msg_0.roll = 45023U;
    tmp_msg_0.pitch = 44838U;
    tmp_msg_0.yaw = 27716U;
    tmp_msg_0.speed = -16679;
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
    msg.setTimeStamp(0.4461265771169757);
    msg.setSource(6298U);
    msg.setSourceEntity(151U);
    msg.setDestination(47264U);
    msg.setDestinationEntity(236U);
    msg.req_id = 22269U;
    msg.destination.assign("IAOJTHRXZCIMMHRZUHPEJIJLYDDKSOGUDBEACCRGKPIWCOHCFLSPRHSLRHLPNAPOECXLAVRY");
    msg.timeout = 0.005810628712573984;
    msg.range = 0.4936731321666715;
    msg.type = 225U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.34622073867985037;
    tmp_msg_0.lon = 0.4226301366036216;
    tmp_msg_0.depth = 0.07494213392212223;
    tmp_msg_0.roll = 0.8389355562775799;
    tmp_msg_0.pitch = 0.0987317259101349;
    tmp_msg_0.yaw = 0.15583888396369516;
    tmp_msg_0.rcp_time = 0.34740941205552067;
    tmp_msg_0.sid.assign("LUCYENABAZSGLNTRQHALCMAFPVZVOOVKLXGPYUEOKHPKWQYGYBDZJGLSTNJQRSIEZUOZAWVMSHWPXEGIDVBPTLLEFBMHXYRQRETAMNJZYPNYCVGJUXFIMYZQRSLWRSTWJQXCNTGPZOBTDTGIIHAOIZWRAFEWYSF");
    tmp_msg_0.s_type = 186U;
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
    msg.setTimeStamp(0.6139515928523392);
    msg.setSource(38430U);
    msg.setSourceEntity(163U);
    msg.setDestination(60800U);
    msg.setDestinationEntity(232U);
    msg.req_id = 12682U;
    msg.type = 221U;
    msg.status = 186U;
    msg.info.assign("MMOELBISOKFEGABGZQOHKPZCGXXZWUVFFVZQOILYBPVBTHBMCGJWTTMQZGUOIYXVCILSDCAOBWFTTPVPPSPTANAXRTAIQNDYXUMMWEJPYXKPEOEHRNYNJYOXWMQMYHRDGQDJNPUSKEZRAZTHNN");
    msg.range = 0.21766943807786165;

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
    msg.setTimeStamp(0.14298844351870232);
    msg.setSource(44738U);
    msg.setSourceEntity(143U);
    msg.setDestination(63308U);
    msg.setDestinationEntity(44U);
    msg.req_id = 15858U;
    msg.type = 19U;
    msg.status = 236U;
    msg.info.assign("VWEHODEMTRRLDOIQIKBLJMBSICREUKCOIYVALEMHWJRZHVJHWZDYYFVBAUCMUODPYTYRASUCROZVZNNWQNYCDQQXPLKKYJXNIBDJFGABFEUXFIHQBGZTFVKEWEVHJMCGJNCXLAUKPRUVFTWPOPVSDHZFXNZPROXFSNACMGXIBHMFOLZMEJMQILYUDJTNCMBGUBWGSLTRARWBTSTLFS");
    msg.range = 0.7424509892278615;

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
    msg.setTimeStamp(0.24439445745612332);
    msg.setSource(59709U);
    msg.setSourceEntity(97U);
    msg.setDestination(12804U);
    msg.setDestinationEntity(160U);
    msg.req_id = 33074U;
    msg.type = 130U;
    msg.status = 91U;
    msg.info.assign("FYNWXZCDOLBGNAWLMKHHMVODKOUQMGRRYAAZCLYFRPFIIOVQITUBOURZHZPITTTCAUQVUGHXOJXRKIDKLRZETBQHMEZVSSQHKXLWVMBEAFBYMWEPNFNKGNLCFHSSTDFYDFKQYMLPXUEVIEDDSQBGMKPWFTRPKYAXACOSRWLTEDRUPWXTGOFI");
    msg.range = 0.973718231507526;

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
    msg.setTimeStamp(0.13532373301973633);
    msg.setSource(53486U);
    msg.setSourceEntity(82U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(149U);
    msg.value = -8452;

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
    msg.setTimeStamp(0.5120631417185818);
    msg.setSource(41357U);
    msg.setSourceEntity(17U);
    msg.setDestination(35034U);
    msg.setDestinationEntity(26U);
    msg.value = -6003;

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
    msg.setTimeStamp(0.31960273346355816);
    msg.setSource(64041U);
    msg.setSourceEntity(212U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(251U);
    msg.value = 9234;

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
    msg.setTimeStamp(0.914843735128698);
    msg.setSource(43335U);
    msg.setSourceEntity(248U);
    msg.setDestination(36808U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9933919790894743;

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
    msg.setTimeStamp(0.9923888569313994);
    msg.setSource(27153U);
    msg.setSourceEntity(7U);
    msg.setDestination(36161U);
    msg.setDestinationEntity(26U);
    msg.value = 0.6051660183376488;

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
    msg.setTimeStamp(0.6709283007532554);
    msg.setSource(61408U);
    msg.setSourceEntity(9U);
    msg.setDestination(19397U);
    msg.setDestinationEntity(37U);
    msg.value = 0.677077314183173;

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
    msg.setTimeStamp(0.7208097194246132);
    msg.setSource(21777U);
    msg.setSourceEntity(74U);
    msg.setDestination(21127U);
    msg.setDestinationEntity(152U);
    msg.value = 0.44171449446086397;

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
    msg.setTimeStamp(0.20408490022308845);
    msg.setSource(38600U);
    msg.setSourceEntity(101U);
    msg.setDestination(4621U);
    msg.setDestinationEntity(207U);
    msg.value = 0.32837282814154156;

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
    msg.setTimeStamp(0.11795987417307563);
    msg.setSource(37327U);
    msg.setSourceEntity(162U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(173U);
    msg.value = 0.17656930915485625;

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
    msg.setTimeStamp(0.37132059945700313);
    msg.setSource(6326U);
    msg.setSourceEntity(57U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(101U);
    msg.validity = 2708U;
    msg.type = 151U;
    msg.utc_year = 741U;
    msg.utc_month = 128U;
    msg.utc_day = 249U;
    msg.utc_time = 0.18639023387839482;
    msg.lat = 0.7535964136786073;
    msg.lon = 0.2254094652072588;
    msg.height = 0.5330718027787545;
    msg.satellites = 67U;
    msg.cog = 0.7255182115550152;
    msg.sog = 0.9016377867864513;
    msg.hdop = 0.545920148006529;
    msg.vdop = 0.16792572440058084;
    msg.hacc = 0.42887743882614104;
    msg.vacc = 0.31380874683333704;

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
    msg.setTimeStamp(0.8035772113480909);
    msg.setSource(37937U);
    msg.setSourceEntity(50U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(237U);
    msg.validity = 52167U;
    msg.type = 5U;
    msg.utc_year = 8482U;
    msg.utc_month = 161U;
    msg.utc_day = 15U;
    msg.utc_time = 0.531096292328175;
    msg.lat = 0.014111562001387523;
    msg.lon = 0.37201528789956384;
    msg.height = 0.09538851892953859;
    msg.satellites = 253U;
    msg.cog = 0.7886072862254847;
    msg.sog = 0.881631525060146;
    msg.hdop = 0.897892714549183;
    msg.vdop = 0.762204684591503;
    msg.hacc = 0.6093232824307501;
    msg.vacc = 0.779543999687208;

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
    msg.setTimeStamp(0.2434806138441482);
    msg.setSource(61665U);
    msg.setSourceEntity(27U);
    msg.setDestination(42039U);
    msg.setDestinationEntity(106U);
    msg.validity = 8851U;
    msg.type = 112U;
    msg.utc_year = 16963U;
    msg.utc_month = 122U;
    msg.utc_day = 243U;
    msg.utc_time = 0.5427399734278703;
    msg.lat = 0.897676199864605;
    msg.lon = 0.5096448888867631;
    msg.height = 0.5155802022992862;
    msg.satellites = 245U;
    msg.cog = 0.28970517048990974;
    msg.sog = 0.571739334709386;
    msg.hdop = 0.351440290992341;
    msg.vdop = 0.019102154974533048;
    msg.hacc = 0.33350272707708273;
    msg.vacc = 0.26867971649093714;

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
    msg.setTimeStamp(0.6159684253697708);
    msg.setSource(42097U);
    msg.setSourceEntity(145U);
    msg.setDestination(34732U);
    msg.setDestinationEntity(88U);
    msg.time = 0.6348580364381703;
    msg.phi = 0.11570125605207893;
    msg.theta = 0.9990789106801978;
    msg.psi = 0.16835760193879157;
    msg.psi_magnetic = 0.6178255821273831;

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
    msg.setTimeStamp(0.27664289939897113);
    msg.setSource(9273U);
    msg.setSourceEntity(166U);
    msg.setDestination(43194U);
    msg.setDestinationEntity(187U);
    msg.time = 0.8488981379728534;
    msg.phi = 0.3252494850426716;
    msg.theta = 0.8433558780060905;
    msg.psi = 0.5781572261477538;
    msg.psi_magnetic = 0.8777129619347098;

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
    msg.setTimeStamp(0.39451793538824875);
    msg.setSource(1447U);
    msg.setSourceEntity(6U);
    msg.setDestination(23399U);
    msg.setDestinationEntity(215U);
    msg.time = 0.2957700493691301;
    msg.phi = 0.05757527561847242;
    msg.theta = 0.8144475483465254;
    msg.psi = 0.6321236563271999;
    msg.psi_magnetic = 0.5415377186181709;

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
    msg.setTimeStamp(0.830884775474853);
    msg.setSource(20632U);
    msg.setSourceEntity(22U);
    msg.setDestination(18758U);
    msg.setDestinationEntity(55U);
    msg.time = 0.7629710142229431;
    msg.x = 0.6865505530908478;
    msg.y = 0.7470034171440673;
    msg.z = 0.5941346221424527;
    msg.timestep = 0.46720745863851987;

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
    msg.setTimeStamp(0.14864903486246606);
    msg.setSource(19670U);
    msg.setSourceEntity(130U);
    msg.setDestination(58138U);
    msg.setDestinationEntity(42U);
    msg.time = 0.36354459962007746;
    msg.x = 0.8464188704398354;
    msg.y = 0.299419663206844;
    msg.z = 0.2590927648337792;
    msg.timestep = 0.2929345551361887;

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
    msg.setTimeStamp(0.28568873951374296);
    msg.setSource(27433U);
    msg.setSourceEntity(204U);
    msg.setDestination(26207U);
    msg.setDestinationEntity(99U);
    msg.time = 0.44128515224204046;
    msg.x = 0.1268365397633815;
    msg.y = 0.6127769211702632;
    msg.z = 0.6964015143848327;
    msg.timestep = 0.6842837747807571;

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
    msg.setTimeStamp(0.6661809274558536);
    msg.setSource(65265U);
    msg.setSourceEntity(0U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(97U);
    msg.time = 0.9988480761765354;
    msg.x = 0.2884898109797508;
    msg.y = 0.4042391538550205;
    msg.z = 0.6306952696953602;

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
    msg.setTimeStamp(0.8772827152532395);
    msg.setSource(35273U);
    msg.setSourceEntity(58U);
    msg.setDestination(42018U);
    msg.setDestinationEntity(166U);
    msg.time = 0.6522468594391333;
    msg.x = 0.9872580757244617;
    msg.y = 0.4553121317901284;
    msg.z = 0.9979165100361267;

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
    msg.setTimeStamp(0.1551377595807033);
    msg.setSource(11131U);
    msg.setSourceEntity(160U);
    msg.setDestination(1125U);
    msg.setDestinationEntity(17U);
    msg.time = 0.37289050043961636;
    msg.x = 0.8672821490219;
    msg.y = 0.5995443376938251;
    msg.z = 0.5194245706976065;

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
    msg.setTimeStamp(0.2976502886733876);
    msg.setSource(44915U);
    msg.setSourceEntity(86U);
    msg.setDestination(61276U);
    msg.setDestinationEntity(215U);
    msg.time = 0.771435537974487;
    msg.x = 0.7781904510662084;
    msg.y = 0.9378519390094904;
    msg.z = 0.8472067823165309;

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
    msg.setTimeStamp(0.4020688101138613);
    msg.setSource(58506U);
    msg.setSourceEntity(189U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(126U);
    msg.time = 0.6914309852645911;
    msg.x = 0.46632114046073825;
    msg.y = 0.8043624635091481;
    msg.z = 0.5830465031027483;

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
    msg.setTimeStamp(0.8894277860452453);
    msg.setSource(51030U);
    msg.setSourceEntity(0U);
    msg.setDestination(7210U);
    msg.setDestinationEntity(219U);
    msg.time = 0.08810364445546126;
    msg.x = 0.12782886685834216;
    msg.y = 0.4333109829589452;
    msg.z = 0.7998008704653637;

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
    msg.setTimeStamp(0.49788246503543365);
    msg.setSource(61240U);
    msg.setSourceEntity(161U);
    msg.setDestination(50819U);
    msg.setDestinationEntity(237U);
    msg.time = 0.5890060495446157;
    msg.x = 0.5228915587121711;
    msg.y = 0.2627495904630228;
    msg.z = 0.9525482367017467;

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
    msg.setTimeStamp(0.7818010154533183);
    msg.setSource(48554U);
    msg.setSourceEntity(95U);
    msg.setDestination(33335U);
    msg.setDestinationEntity(245U);
    msg.time = 0.40177580646117694;
    msg.x = 0.31772042968323866;
    msg.y = 0.07214026829829046;
    msg.z = 0.3629036268695739;

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
    msg.setTimeStamp(0.2868084116446151);
    msg.setSource(62537U);
    msg.setSourceEntity(34U);
    msg.setDestination(4898U);
    msg.setDestinationEntity(198U);
    msg.time = 0.9506849098606934;
    msg.x = 0.8858590776394134;
    msg.y = 0.6752913676022687;
    msg.z = 0.3060243156606942;

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
    msg.setTimeStamp(0.5707404603941948);
    msg.setSource(26963U);
    msg.setSourceEntity(171U);
    msg.setDestination(41131U);
    msg.setDestinationEntity(193U);
    msg.validity = 39U;
    msg.x = 0.006227808581293903;
    msg.y = 0.7182098941988596;
    msg.z = 0.4871124414791762;

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
    msg.setTimeStamp(0.25711853849628985);
    msg.setSource(47320U);
    msg.setSourceEntity(107U);
    msg.setDestination(3696U);
    msg.setDestinationEntity(177U);
    msg.validity = 24U;
    msg.x = 0.19339714376766204;
    msg.y = 0.1282870251564986;
    msg.z = 0.09791427329197011;

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
    msg.setTimeStamp(0.837528205309986);
    msg.setSource(31157U);
    msg.setSourceEntity(225U);
    msg.setDestination(56933U);
    msg.setDestinationEntity(150U);
    msg.validity = 251U;
    msg.x = 0.36368736926065504;
    msg.y = 0.3578498833899375;
    msg.z = 0.5860188917105238;

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
    msg.setTimeStamp(0.9390397185020989);
    msg.setSource(2054U);
    msg.setSourceEntity(112U);
    msg.setDestination(45386U);
    msg.setDestinationEntity(214U);
    msg.validity = 47U;
    msg.x = 0.8789175808910417;
    msg.y = 0.29722310028239696;
    msg.z = 0.007273092827713157;

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
    msg.setTimeStamp(0.10988333947579643);
    msg.setSource(9136U);
    msg.setSourceEntity(95U);
    msg.setDestination(43966U);
    msg.setDestinationEntity(238U);
    msg.validity = 99U;
    msg.x = 0.27916884510709206;
    msg.y = 0.35204379427511223;
    msg.z = 0.8830097486564946;

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
    msg.setTimeStamp(0.7991586169979586);
    msg.setSource(26013U);
    msg.setSourceEntity(2U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(187U);
    msg.validity = 157U;
    msg.x = 0.7181893509107282;
    msg.y = 0.39271974136746957;
    msg.z = 0.9649567348561698;

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
    msg.setTimeStamp(0.7029797413025465);
    msg.setSource(51538U);
    msg.setSourceEntity(15U);
    msg.setDestination(40900U);
    msg.setDestinationEntity(250U);
    msg.time = 0.32775337090691825;
    msg.x = 0.18479726097988203;
    msg.y = 0.5944085011527167;
    msg.z = 0.23623475325938081;

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
    msg.setTimeStamp(0.026947471747771012);
    msg.setSource(48660U);
    msg.setSourceEntity(199U);
    msg.setDestination(56864U);
    msg.setDestinationEntity(247U);
    msg.time = 0.1873805195344148;
    msg.x = 0.5521659457367699;
    msg.y = 0.2672964084080236;
    msg.z = 0.08874526196026333;

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
    msg.setTimeStamp(0.1866670645524401);
    msg.setSource(11774U);
    msg.setSourceEntity(213U);
    msg.setDestination(29414U);
    msg.setDestinationEntity(127U);
    msg.time = 0.5330288946512218;
    msg.x = 0.43122015733715957;
    msg.y = 0.3758708274710467;
    msg.z = 0.6851766629838638;

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
    msg.setTimeStamp(0.6920048225777007);
    msg.setSource(63034U);
    msg.setSourceEntity(169U);
    msg.setDestination(10098U);
    msg.setDestinationEntity(176U);
    msg.validity = 217U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9233804024590566;
    tmp_msg_0.y = 0.36647261410453047;
    tmp_msg_0.z = 0.4204027241426107;
    tmp_msg_0.phi = 0.12333142515130424;
    tmp_msg_0.theta = 0.9150283522747071;
    tmp_msg_0.psi = 0.42605376878090295;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0307961845946354;
    tmp_msg_1.beam_height = 0.8655398960235289;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4114492555692848;

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
    msg.setTimeStamp(0.9025011079951681);
    msg.setSource(33238U);
    msg.setSourceEntity(254U);
    msg.setDestination(24666U);
    msg.setDestinationEntity(212U);
    msg.validity = 81U;
    msg.value = 0.5485866563875226;

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
    msg.setTimeStamp(0.9640971309192271);
    msg.setSource(49149U);
    msg.setSourceEntity(168U);
    msg.setDestination(42030U);
    msg.setDestinationEntity(163U);
    msg.validity = 174U;
    msg.value = 0.9911406958754995;

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
    msg.setTimeStamp(0.27874005854522177);
    msg.setSource(63415U);
    msg.setSourceEntity(221U);
    msg.setDestination(52863U);
    msg.setDestinationEntity(31U);
    msg.value = 0.9259106834243114;

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
    msg.setTimeStamp(0.10895768778031423);
    msg.setSource(50026U);
    msg.setSourceEntity(212U);
    msg.setDestination(1839U);
    msg.setDestinationEntity(102U);
    msg.value = 0.7204191986553974;

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
    msg.setTimeStamp(0.5508989278245352);
    msg.setSource(22382U);
    msg.setSourceEntity(158U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9822483955208018;

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
    msg.setTimeStamp(0.5883331085368524);
    msg.setSource(34830U);
    msg.setSourceEntity(224U);
    msg.setDestination(18284U);
    msg.setDestinationEntity(180U);
    msg.value = 0.1973195496068083;

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
    msg.setTimeStamp(0.3470451198247859);
    msg.setSource(23986U);
    msg.setSourceEntity(229U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(35U);
    msg.value = 0.24853920192852075;

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
    msg.setTimeStamp(0.5131922807777829);
    msg.setSource(49146U);
    msg.setSourceEntity(186U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5542310971545553;

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
    msg.setTimeStamp(0.5459675112170687);
    msg.setSource(51593U);
    msg.setSourceEntity(178U);
    msg.setDestination(22221U);
    msg.setDestinationEntity(1U);
    msg.value = 0.06507016372900587;

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
    msg.setTimeStamp(0.5848399744893023);
    msg.setSource(46291U);
    msg.setSourceEntity(66U);
    msg.setDestination(35538U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6243631600818584;

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
    msg.setTimeStamp(0.5083041566223463);
    msg.setSource(15168U);
    msg.setSourceEntity(228U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6457412735930602;

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
    msg.setTimeStamp(0.11497488277816748);
    msg.setSource(53745U);
    msg.setSourceEntity(65U);
    msg.setDestination(32907U);
    msg.setDestinationEntity(4U);
    msg.value = 0.6215917215048001;

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
    msg.setTimeStamp(0.46956566949698875);
    msg.setSource(21170U);
    msg.setSourceEntity(202U);
    msg.setDestination(22605U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9828623440706739;

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
    msg.setTimeStamp(0.20281348804619992);
    msg.setSource(11466U);
    msg.setSourceEntity(196U);
    msg.setDestination(658U);
    msg.setDestinationEntity(48U);
    msg.value = 0.18935853141407333;

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
    msg.setTimeStamp(0.29454737211711657);
    msg.setSource(13140U);
    msg.setSourceEntity(76U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(209U);
    msg.value = 0.640862264541654;

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
    msg.setTimeStamp(0.6162173055123755);
    msg.setSource(27952U);
    msg.setSourceEntity(58U);
    msg.setDestination(12863U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3359034177206769;

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
    msg.setTimeStamp(0.745223634157116);
    msg.setSource(21211U);
    msg.setSourceEntity(254U);
    msg.setDestination(48785U);
    msg.setDestinationEntity(49U);
    msg.value = 0.48041958562496223;

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
    msg.setTimeStamp(0.4277955904285242);
    msg.setSource(47628U);
    msg.setSourceEntity(173U);
    msg.setDestination(22083U);
    msg.setDestinationEntity(115U);
    msg.value = 0.37912810615473314;

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
    msg.setTimeStamp(0.724593828857875);
    msg.setSource(9301U);
    msg.setSourceEntity(28U);
    msg.setDestination(7070U);
    msg.setDestinationEntity(228U);
    msg.value = 0.776887380840548;

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
    msg.setTimeStamp(0.8853299693056079);
    msg.setSource(43533U);
    msg.setSourceEntity(249U);
    msg.setDestination(19232U);
    msg.setDestinationEntity(100U);
    msg.value = 0.8848457492603119;

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
    msg.setTimeStamp(0.377612933536128);
    msg.setSource(59913U);
    msg.setSourceEntity(218U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9616954750442126;

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
    msg.setTimeStamp(0.9333196387178546);
    msg.setSource(44854U);
    msg.setSourceEntity(222U);
    msg.setDestination(64282U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5874190072955987;

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
    msg.setTimeStamp(0.7380305641449894);
    msg.setSource(63829U);
    msg.setSourceEntity(118U);
    msg.setDestination(25032U);
    msg.setDestinationEntity(254U);
    msg.value = 0.3423725822183662;

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
    msg.setTimeStamp(0.32240479108740094);
    msg.setSource(45797U);
    msg.setSourceEntity(148U);
    msg.setDestination(24946U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9193199000654545;

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
    msg.setTimeStamp(0.807803488238271);
    msg.setSource(10541U);
    msg.setSourceEntity(144U);
    msg.setDestination(9860U);
    msg.setDestinationEntity(179U);
    msg.value = 0.6541542034567638;

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
    msg.setTimeStamp(0.9773743352403765);
    msg.setSource(38085U);
    msg.setSourceEntity(97U);
    msg.setDestination(27777U);
    msg.setDestinationEntity(242U);
    msg.value = 0.11971027791491196;

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
    msg.setTimeStamp(0.6881448969182687);
    msg.setSource(44310U);
    msg.setSourceEntity(158U);
    msg.setDestination(53699U);
    msg.setDestinationEntity(132U);
    msg.direction = 0.011326622072871384;
    msg.speed = 0.20074983080243292;
    msg.turbulence = 0.1924483889644838;

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
    msg.setTimeStamp(0.6651689178908589);
    msg.setSource(25226U);
    msg.setSourceEntity(83U);
    msg.setDestination(32188U);
    msg.setDestinationEntity(127U);
    msg.direction = 0.869769687008555;
    msg.speed = 0.7470654795002278;
    msg.turbulence = 0.44944236761535683;

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
    msg.setTimeStamp(0.5341197380337545);
    msg.setSource(13600U);
    msg.setSourceEntity(62U);
    msg.setDestination(21365U);
    msg.setDestinationEntity(166U);
    msg.direction = 0.6022636332344947;
    msg.speed = 0.1277865654339232;
    msg.turbulence = 0.2305500574710354;

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
    msg.setTimeStamp(0.8128109581920817);
    msg.setSource(19909U);
    msg.setSourceEntity(218U);
    msg.setDestination(30023U);
    msg.setDestinationEntity(172U);
    msg.value = 0.6227091013376498;

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
    msg.setTimeStamp(0.09639759069636167);
    msg.setSource(7120U);
    msg.setSourceEntity(202U);
    msg.setDestination(52266U);
    msg.setDestinationEntity(230U);
    msg.value = 0.15540283346974437;

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
    msg.setTimeStamp(0.20838828295029388);
    msg.setSource(35569U);
    msg.setSourceEntity(13U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(53U);
    msg.value = 0.9453578680348037;

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
    msg.setTimeStamp(0.3378470355704012);
    msg.setSource(41240U);
    msg.setSourceEntity(28U);
    msg.setDestination(25664U);
    msg.setDestinationEntity(236U);
    msg.value.assign("SHAENLWYBTCYJIEOPPZYUZQQVVOZWANXQSBUOQEMFNTBNYQKDGFIEBSCGEEORERIHKXOBYRNPAYDUNXQWZZCKSVBLZPLKXWJJVKLCGSXTJISQIONGLMQPHNHPKRTNOVSFKUFLPGTYATWMTRPDZRIRBLWYG");

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
    msg.setTimeStamp(0.3301543229354731);
    msg.setSource(58226U);
    msg.setSourceEntity(3U);
    msg.setDestination(50000U);
    msg.setDestinationEntity(152U);
    msg.value.assign("HOYSEUITWCMDDAQWKZRAZDRHO");

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
    msg.setTimeStamp(0.4317777142800092);
    msg.setSource(37075U);
    msg.setSourceEntity(56U);
    msg.setDestination(27941U);
    msg.setDestinationEntity(0U);
    msg.value.assign("QXYHCWMETLXZFDODLPYTIYMBEWFLMONTKJXCXNLUQXRXLTBBTEVHVMKSZGVX");

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
    msg.setTimeStamp(0.045996402511730095);
    msg.setSource(27859U);
    msg.setSourceEntity(151U);
    msg.setDestination(52858U);
    msg.setDestinationEntity(1U);
    const char tmp_msg_0[] = {-19, -5, -18, -107, 69, -103, -18, -89, 9, -80, -97, -80, -3, 12, 82, -58, 104, -110, -125, -48, 0, -112, 8, 56, 2, 11, 5, -88, -60, 47, 33, -80, 22, -22, 60, -76, 33, -122, -92, 126, -35, -5, -11, 1, 78, 10, -38, 37, 97, 32, -123, -43, -124, 62, 39, -121, 29, 69, -72, -9, -43, 69, -7, -49, 117, -103, -31, 68, -77, -39, 7, -64, -60, -93, 48, 52, 16, -119, -84, 81, -46, -8, -17, -73, 125, 47, 13, -67, -90, -14, 26, 80, -45, -45, -57, -52, -69, 13, 62, 9, 79, -20, 113, 84, -31, 24, 23, 37, 36, -53, 83, -1, 13, -66, 0, -37, 73, -48, -122, 29, 25, -90, -93, -112, 16, 51, 101, -93, -24, 18, 114, -119, -18, -65, -120, -116, 17, 13, 26, -86};
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
    msg.setTimeStamp(0.5751985226078669);
    msg.setSource(53436U);
    msg.setSourceEntity(43U);
    msg.setDestination(591U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {-48, 52, -125, -17, -128, 53, 99, 112, 98, -44, -105, -39, -20, 89, 111, -66, 6, 126, -54, -93, -32, -49, 3, -1, 84, 67, 107, -114, 96, -38, 113, -56, 71, 1, -111, -123, -52, -11, -45, 31, -22, -83, -82, -70, 14, -120, -81, 67, -35, -49, -10, -58, -32, -18, -60, 62, -37, 93, -90, -83, -106, -33, -81, -57, -97, 112, -99, 110, 117, -113, -112, -101, 115, 20, 64, 26, -77, 103, 58, -7, 5, 110, 39, 2, -20, 111, 84, -97, 106, -77, 55, 80, -105, 7, 56, 88, 114, -52, 17, 106, -48, 16, 37, -122, 105, -30, 24, 88, -10, -15, -57, 86, 45, -99, 29, 66, 30, -39, -10, -40, 55, -48, -27, 109, 25, 101, 103, 69, 17, 10, -7, -58, 81, 73, 77, 117, 31, -42, 29};
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
    msg.setTimeStamp(0.16599329721242229);
    msg.setSource(9076U);
    msg.setSourceEntity(149U);
    msg.setDestination(46666U);
    msg.setDestinationEntity(128U);
    const char tmp_msg_0[] = {68, 8, 28, -102, 40, -84, -99, -97, -123, -15, 108, 90, -25, 35, 35, 23};
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
    msg.setTimeStamp(0.41715965282829104);
    msg.setSource(22851U);
    msg.setSourceEntity(163U);
    msg.setDestination(32858U);
    msg.setDestinationEntity(181U);
    msg.value = 0.20688711587325914;

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
    msg.setTimeStamp(0.032616259472728504);
    msg.setSource(32531U);
    msg.setSourceEntity(46U);
    msg.setDestination(45407U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6836502125723072;

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
    msg.setTimeStamp(0.9794750484453348);
    msg.setSource(37561U);
    msg.setSourceEntity(135U);
    msg.setDestination(32869U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6112422218627381;

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
    msg.setTimeStamp(0.2183357094315973);
    msg.setSource(12367U);
    msg.setSourceEntity(7U);
    msg.setDestination(42140U);
    msg.setDestinationEntity(56U);
    msg.type = 201U;
    msg.frequency = 1570354518U;
    msg.min_range = 48169U;
    msg.max_range = 13454U;
    msg.bits_per_point = 242U;
    msg.scale_factor = 0.056053989273168514;
    const char tmp_msg_0[] = {-56, 78, -61, 48, -14, -30, -81, 99, 14, -3, -32, -30, -39, 68, 82, -19, -13, 106, -104, 39, -55, 49, -109, -112, 72, -72, 112, 62, -23, 105, 31, -46, 115, -63, -11, -19, 73, -100, -45, -50, -113, 22, -102, -128, -107, 17, 126, 60, -30, -57, -89, -104, 55, 20, -32, -47, 47, -101, -99, 57, 13, -38, -19, 100, -127, 12, -124, -82, 54, -113, 25, 40, -32, -8, -69, 74, -31, 104, -112, 46, 12, 35, -88, 60, -82, 71, 63, 108, -19, 3, 116, 121, 44, -17, -64, 17, 12, 42, 65, 71, -68, -59, -21, -4, -87, 112, 109, -18, 11, -95, -90, 74, -110, 73, 66, 70, 106, -15, 20, 42, -25, 89, 18, 105, -83, 19, -39, -57, 33, 113, 87, 69, -115, 47, 62, -63, 89, 28, -79, -86, -115, 109, -41, -36, -125, -12, 11, -72, -124, 48, -128, 40, -66, 33, 54, -28, 88, -43, -69, -44, 94, -29, 77, -96, -10, 65, -104, 125, -92, 63, 26, -115, 39, 9, -79, 59, 67, -43, -17, -99, -22, 8, 55, 17, -31, 55, 30, 86, 62, 17, 81, 56, 38, 73, 99, -88, -80, -6, 83, -55, 108, -58, 50, 75, 81, 84, -2, -36, 78, 38, 100, 55, 42, 0, -30, 16, 96, -88, -53, 59, 88, -91, -89, 19, -31, 103, 100, -119, 23, 122, -88, -27, 12, -5, -49, -17, -33, 107, 53, 38, 57};
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
    msg.setTimeStamp(0.5875476171920753);
    msg.setSource(20798U);
    msg.setSourceEntity(45U);
    msg.setDestination(777U);
    msg.setDestinationEntity(220U);
    msg.type = 46U;
    msg.frequency = 4247850697U;
    msg.min_range = 59405U;
    msg.max_range = 14913U;
    msg.bits_per_point = 151U;
    msg.scale_factor = 0.10457605499447009;
    const char tmp_msg_0[] = {-89, 40, -58, 67, 32, -84, 42, -29, -88, 29, -15, -19, -96, 71, -17, -88, 112, 14, -100, 51, -105, -30, 77, -80, -42, 87, 43, -74, -106, -100, -30, 63, -88, -23, -6, 34, 125, -3, -41, 8, -33, -127, 115, 58, -76, -116, -126, -48, -123, 61, -79, -50, 108, 122, -104, 27, 27, 39, -29, -110, 124, -94, 34, 114, 54, -12, -17, -34, -64, 50, -77, 23, -80, -4, 106, 61, -56, -126, -66, -119, 38, 25, 47, 94, -88, -126, -61, -50, -22, -31, 98, -104, -89, -75, 86, -117, -112, 44, -47, -78, 123, 120};
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
    msg.setTimeStamp(0.4019372154347377);
    msg.setSource(62368U);
    msg.setSourceEntity(220U);
    msg.setDestination(32126U);
    msg.setDestinationEntity(68U);
    msg.type = 139U;
    msg.frequency = 3376659043U;
    msg.min_range = 64845U;
    msg.max_range = 24108U;
    msg.bits_per_point = 184U;
    msg.scale_factor = 0.3341586235041757;
    const char tmp_msg_0[] = {-66, -98, -86, 3, 80, 98, 0, -51, -15, -37, 75, 72, -65, -76, -92, -111, -68, 24, -110, 13, -49, 92, -14, 35, 115, 4, -12, -124, -29, 123, 40, -85, 117, 20, -104, 26, 72, 72, -87, 93, -72, 100, 123, -22, 49, -102, -10, -53, -97, 100, -14, -85, 82, 113, -96, 27, -123, 13, -45, -93, 96, -68, 110, -57, -121, 121, -115, -9, -89, 50, 41, -10, -15, 68, -44, 95, 64, 50, 13, -75, 24, 85, 60, 50, 81, -2, -13, 32, -36, -56, -39, 115, -30, -90, 85, -107, -104, -44, -57, 92, -118, -14, 19, 90, -84, -114, 80, 112, 19, -54, 81, -62, -115, 5, -47, -109, 17, 9, -88, -38, 85, -45, 29, -67, -96, 19, -108};
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
    msg.setTimeStamp(0.04414984631399166);
    msg.setSource(46691U);
    msg.setSourceEntity(142U);
    msg.setDestination(30937U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.45423719406298246);
    msg.setSource(13825U);
    msg.setSourceEntity(163U);
    msg.setDestination(12570U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.2551282047213971);
    msg.setSource(25392U);
    msg.setSourceEntity(231U);
    msg.setDestination(43700U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.10791203422679818);
    msg.setSource(47228U);
    msg.setSourceEntity(182U);
    msg.setDestination(27644U);
    msg.setDestinationEntity(141U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.1362391923392272);
    msg.setSource(54624U);
    msg.setSourceEntity(157U);
    msg.setDestination(29379U);
    msg.setDestinationEntity(123U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.012046440700283156);
    msg.setSource(61434U);
    msg.setSourceEntity(120U);
    msg.setDestination(17212U);
    msg.setDestinationEntity(152U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.8546486638004794);
    msg.setSource(3078U);
    msg.setSourceEntity(36U);
    msg.setDestination(6856U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5603861921320485;
    msg.confidence = 0.8771092107620416;
    msg.opmodes.assign("OMTSLLDUFIYEMXXKOMDPOKUYLOJILRHWOJKWMGPHNEBBYYEVLMOYWHLUHHMGWBOIPAUUUTDYXBGVRAETEFLSKNJP");

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
    msg.setTimeStamp(0.031161665482830725);
    msg.setSource(28893U);
    msg.setSourceEntity(253U);
    msg.setDestination(63011U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7561155226071972;
    msg.confidence = 0.7316344169345802;
    msg.opmodes.assign("YHERZWPFMBRRRWDPAPYNRUBTIOFTYJZCXXRTYDNNCFYBGSBFSDWUDQFNMJDPMFCCVLULEGYIABWAZHSYSOKVTZBZTMKQZVUUXRHWQXHWGWAOMDEJBSIVFEAMKQIXRHJOJVOZSEKDHNVEJYBZACMXSMSTTIKJHTACFXUCQKCKADDQMQQNTNKGNQFPWELNSNILOCSMKHGHXPWUAI");

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
    msg.setTimeStamp(0.6714523214227334);
    msg.setSource(4260U);
    msg.setSourceEntity(11U);
    msg.setDestination(40251U);
    msg.setDestinationEntity(190U);
    msg.value = 0.054294249338079914;
    msg.confidence = 0.1612163833819159;
    msg.opmodes.assign("TBPGCNSOSMKETNJAKERFWAZXQXZPZDYLJXPFITTENOZQHSXSICDVHWOGPIDAUJGNJBVEAISL");

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
    msg.setTimeStamp(0.44714670907116627);
    msg.setSource(8310U);
    msg.setSourceEntity(64U);
    msg.setDestination(42855U);
    msg.setDestinationEntity(143U);
    msg.itow = 1517445321U;
    msg.lat = 0.010624846729816118;
    msg.lon = 0.2403713159360139;
    msg.height_ell = 0.46833330993271394;
    msg.height_sea = 0.4326884596335441;
    msg.hacc = 0.952187411794269;
    msg.vacc = 0.9774819149749239;
    msg.vel_n = 0.36100878795828173;
    msg.vel_e = 0.06787867089087363;
    msg.vel_d = 0.3575864731949381;
    msg.speed = 0.004347398418276027;
    msg.gspeed = 0.03639903934810951;
    msg.heading = 0.8419363122624018;
    msg.sacc = 0.21898890368729007;
    msg.cacc = 0.07951475291180232;

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
    msg.setTimeStamp(0.6263536794319233);
    msg.setSource(37865U);
    msg.setSourceEntity(47U);
    msg.setDestination(16107U);
    msg.setDestinationEntity(57U);
    msg.itow = 306088107U;
    msg.lat = 0.3247440384345115;
    msg.lon = 0.36956749587542137;
    msg.height_ell = 0.06825246201745083;
    msg.height_sea = 0.14384654168773314;
    msg.hacc = 0.32113724278834443;
    msg.vacc = 0.3560844064693641;
    msg.vel_n = 0.5962821409728407;
    msg.vel_e = 0.37833437558999317;
    msg.vel_d = 0.4042086738934437;
    msg.speed = 0.8623188388593603;
    msg.gspeed = 0.006880580436025019;
    msg.heading = 0.5606141168453761;
    msg.sacc = 0.13899951725431314;
    msg.cacc = 0.4909639798768607;

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
    msg.setTimeStamp(0.3060431115539657);
    msg.setSource(64755U);
    msg.setSourceEntity(91U);
    msg.setDestination(28152U);
    msg.setDestinationEntity(150U);
    msg.itow = 2034223660U;
    msg.lat = 0.9204769653478009;
    msg.lon = 0.6880840698867058;
    msg.height_ell = 0.2381433521313282;
    msg.height_sea = 0.19460981112946252;
    msg.hacc = 0.2625839482569958;
    msg.vacc = 0.8859973171687355;
    msg.vel_n = 0.5701658269898596;
    msg.vel_e = 0.14894551442420256;
    msg.vel_d = 0.23400345487934338;
    msg.speed = 0.6860577766814299;
    msg.gspeed = 0.22961041339392596;
    msg.heading = 0.5596287974233122;
    msg.sacc = 0.8517702065658344;
    msg.cacc = 0.4776066719888893;

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
    msg.setTimeStamp(0.7812354171727769);
    msg.setSource(49822U);
    msg.setSourceEntity(44U);
    msg.setDestination(22877U);
    msg.setDestinationEntity(41U);
    msg.id = 32U;
    msg.value = 0.7463366512837496;

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
    msg.setTimeStamp(0.1733918328646351);
    msg.setSource(30847U);
    msg.setSourceEntity(148U);
    msg.setDestination(54763U);
    msg.setDestinationEntity(119U);
    msg.id = 13U;
    msg.value = 0.042748683392404785;

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
    msg.setTimeStamp(0.0695346743755243);
    msg.setSource(27212U);
    msg.setSourceEntity(238U);
    msg.setDestination(65063U);
    msg.setDestinationEntity(180U);
    msg.id = 82U;
    msg.value = 0.7708694376630046;

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
    msg.setTimeStamp(0.6397169694578673);
    msg.setSource(56823U);
    msg.setSourceEntity(232U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(115U);
    msg.x = 0.13821254821733664;
    msg.y = 0.7970333056689488;
    msg.z = 0.5544185786613666;
    msg.phi = 0.2314629543253528;
    msg.theta = 0.44445876222831804;
    msg.psi = 0.5819875634416752;

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
    msg.setTimeStamp(0.21960072024905264);
    msg.setSource(39015U);
    msg.setSourceEntity(195U);
    msg.setDestination(3486U);
    msg.setDestinationEntity(1U);
    msg.x = 0.5626111218180229;
    msg.y = 0.14586892129812;
    msg.z = 0.3370937846704125;
    msg.phi = 0.35666869406572543;
    msg.theta = 0.8828858317776698;
    msg.psi = 0.3329313549524501;

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
    msg.setTimeStamp(0.6278364247794954);
    msg.setSource(11404U);
    msg.setSourceEntity(10U);
    msg.setDestination(9391U);
    msg.setDestinationEntity(172U);
    msg.x = 0.28177075290488207;
    msg.y = 0.35937563362913716;
    msg.z = 0.6025946079062311;
    msg.phi = 0.7724747973367676;
    msg.theta = 0.9442513562049563;
    msg.psi = 0.5456553275958705;

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
    msg.setTimeStamp(0.2754669485482406);
    msg.setSource(63714U);
    msg.setSourceEntity(61U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(46U);
    msg.beam_width = 0.21063777847748166;
    msg.beam_height = 0.4681206587650949;

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
    msg.setTimeStamp(0.5032473633855286);
    msg.setSource(24068U);
    msg.setSourceEntity(33U);
    msg.setDestination(55482U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.7963367643826924;
    msg.beam_height = 0.16223145036181674;

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
    msg.setTimeStamp(0.9078487549154979);
    msg.setSource(23448U);
    msg.setSourceEntity(94U);
    msg.setDestination(56388U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.6819543441756372;
    msg.beam_height = 0.7993440346490154;

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
    msg.setTimeStamp(0.9256990578355777);
    msg.setSource(5165U);
    msg.setSourceEntity(119U);
    msg.setDestination(30084U);
    msg.setDestinationEntity(14U);
    msg.sane = 243U;

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
    msg.setTimeStamp(0.3850788536153551);
    msg.setSource(52898U);
    msg.setSourceEntity(150U);
    msg.setDestination(30795U);
    msg.setDestinationEntity(67U);
    msg.sane = 210U;

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
    msg.setTimeStamp(0.9810704715659497);
    msg.setSource(46621U);
    msg.setSourceEntity(36U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(215U);
    msg.sane = 212U;

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
    msg.setTimeStamp(0.23106261594488842);
    msg.setSource(45949U);
    msg.setSourceEntity(224U);
    msg.setDestination(18889U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5722832055023848;

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
    msg.setTimeStamp(0.08883047431025948);
    msg.setSource(52065U);
    msg.setSourceEntity(57U);
    msg.setDestination(4333U);
    msg.setDestinationEntity(147U);
    msg.value = 0.2915626036817537;

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
    msg.setTimeStamp(0.7847444863289471);
    msg.setSource(33806U);
    msg.setSourceEntity(172U);
    msg.setDestination(13629U);
    msg.setDestinationEntity(181U);
    msg.value = 0.25658257555330255;

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
    msg.setTimeStamp(0.9681849589744101);
    msg.setSource(46251U);
    msg.setSourceEntity(75U);
    msg.setDestination(41708U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9972495588773829;

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
    msg.setTimeStamp(0.1579632881829317);
    msg.setSource(508U);
    msg.setSourceEntity(84U);
    msg.setDestination(18952U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5048668035850166;

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
    msg.setTimeStamp(0.6804826173527483);
    msg.setSource(57913U);
    msg.setSourceEntity(208U);
    msg.setDestination(13642U);
    msg.setDestinationEntity(65U);
    msg.value = 0.21214481218040437;

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
    msg.setTimeStamp(0.46706299004516993);
    msg.setSource(25445U);
    msg.setSourceEntity(228U);
    msg.setDestination(42160U);
    msg.setDestinationEntity(251U);
    msg.value = 0.6469558685219224;

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
    msg.setTimeStamp(0.2382395875706611);
    msg.setSource(43007U);
    msg.setSourceEntity(237U);
    msg.setDestination(30016U);
    msg.setDestinationEntity(139U);
    msg.value = 0.33498687483411616;

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
    msg.setTimeStamp(0.44702302938972527);
    msg.setSource(43952U);
    msg.setSourceEntity(213U);
    msg.setDestination(47577U);
    msg.setDestinationEntity(138U);
    msg.value = 0.25641803764894033;

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
    msg.setTimeStamp(0.9168933558951167);
    msg.setSource(12525U);
    msg.setSourceEntity(93U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(215U);
    msg.value = 0.1488592927124096;

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
    msg.setTimeStamp(0.8276602660880641);
    msg.setSource(12804U);
    msg.setSourceEntity(120U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6075893833173321;

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
    msg.setTimeStamp(0.30492410230072375);
    msg.setSource(54694U);
    msg.setSourceEntity(121U);
    msg.setDestination(23673U);
    msg.setDestinationEntity(13U);
    msg.value = 0.23460823394676178;

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
    msg.setTimeStamp(0.6905980851148809);
    msg.setSource(60997U);
    msg.setSourceEntity(56U);
    msg.setDestination(33295U);
    msg.setDestinationEntity(65U);
    msg.value = 0.796001820362039;

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
    msg.setTimeStamp(0.11370041492129745);
    msg.setSource(9959U);
    msg.setSourceEntity(208U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(129U);
    msg.value = 0.7177300942880264;

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
    msg.setTimeStamp(0.976716362339905);
    msg.setSource(32839U);
    msg.setSourceEntity(32U);
    msg.setDestination(9694U);
    msg.setDestinationEntity(202U);
    msg.value = 0.1342466463381028;

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
    msg.setTimeStamp(0.6534940596030694);
    msg.setSource(48418U);
    msg.setSourceEntity(217U);
    msg.setDestination(22383U);
    msg.setDestinationEntity(186U);
    msg.value = 0.4238511256465657;

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
    msg.setTimeStamp(0.7914715995816911);
    msg.setSource(21497U);
    msg.setSourceEntity(149U);
    msg.setDestination(39801U);
    msg.setDestinationEntity(254U);
    msg.value = 0.08542389194507516;

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
    msg.setTimeStamp(0.04399152532642958);
    msg.setSource(31311U);
    msg.setSourceEntity(185U);
    msg.setDestination(27310U);
    msg.setDestinationEntity(40U);
    msg.value = 0.03958045032807689;

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
    msg.setTimeStamp(0.8554162663382328);
    msg.setSource(54331U);
    msg.setSourceEntity(130U);
    msg.setDestination(16347U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4607863847263046;

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
    msg.setTimeStamp(0.8742760700752303);
    msg.setSource(3185U);
    msg.setSourceEntity(104U);
    msg.setDestination(26106U);
    msg.setDestinationEntity(105U);
    msg.value = 0.4918133411251432;

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
    msg.setTimeStamp(0.3906192678299868);
    msg.setSource(39396U);
    msg.setSourceEntity(232U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(241U);
    msg.value = 0.44174100713923603;

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
    msg.setTimeStamp(0.458343468075892);
    msg.setSource(35335U);
    msg.setSourceEntity(56U);
    msg.setDestination(60705U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5479902388056824;

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
    msg.setTimeStamp(0.7135228504003088);
    msg.setSource(30591U);
    msg.setSourceEntity(102U);
    msg.setDestination(51415U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7269629123102691;

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
    msg.setTimeStamp(0.01541545713479675);
    msg.setSource(29677U);
    msg.setSourceEntity(253U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(56U);
    msg.value = 0.1396514921469243;

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
    msg.setTimeStamp(0.417210276548026);
    msg.setSource(14381U);
    msg.setSourceEntity(60U);
    msg.setDestination(48631U);
    msg.setDestinationEntity(59U);
    msg.validity = 44622U;
    msg.type = 223U;
    msg.tow = 3122448161U;
    msg.base_lat = 0.6621459966358504;
    msg.base_lon = 0.024898723064643136;
    msg.base_height = 0.5503377602756055;
    msg.n = 0.20170962587416297;
    msg.e = 0.12810954266556018;
    msg.d = 0.8029426429134672;
    msg.v_n = 0.07755197959873705;
    msg.v_e = 0.9070767980468665;
    msg.v_d = 0.4014070274941437;
    msg.satellites = 147U;
    msg.iar_hyp = 55109U;
    msg.iar_ratio = 0.5596111351011354;

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
    msg.setTimeStamp(0.17034541115190993);
    msg.setSource(27101U);
    msg.setSourceEntity(224U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(42U);
    msg.validity = 7347U;
    msg.type = 47U;
    msg.tow = 4197504024U;
    msg.base_lat = 0.8632966758225951;
    msg.base_lon = 0.7444886197075415;
    msg.base_height = 0.33974298489413035;
    msg.n = 0.8028491893704468;
    msg.e = 0.2582859778109784;
    msg.d = 0.3873642795393586;
    msg.v_n = 0.3882201693226529;
    msg.v_e = 0.43969592026112736;
    msg.v_d = 0.30431413473518554;
    msg.satellites = 38U;
    msg.iar_hyp = 28371U;
    msg.iar_ratio = 0.7301965030063402;

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
    msg.setTimeStamp(0.3699973865331976);
    msg.setSource(24707U);
    msg.setSourceEntity(134U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(72U);
    msg.validity = 23182U;
    msg.type = 68U;
    msg.tow = 3918376932U;
    msg.base_lat = 0.931943679852991;
    msg.base_lon = 0.4082189309830856;
    msg.base_height = 0.6355340333485267;
    msg.n = 0.9429800348422446;
    msg.e = 0.979163076905372;
    msg.d = 0.8118700634703037;
    msg.v_n = 0.3827683335724289;
    msg.v_e = 0.6211396727221599;
    msg.v_d = 0.45156775698271856;
    msg.satellites = 159U;
    msg.iar_hyp = 11363U;
    msg.iar_ratio = 0.7961822771463524;

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
    msg.setTimeStamp(0.2601249674838526);
    msg.setSource(492U);
    msg.setSourceEntity(165U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(210U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5918589849363254;
    tmp_msg_0.lon = 0.0701299717454561;
    tmp_msg_0.height = 0.1638452483682219;
    tmp_msg_0.x = 0.6717792013928495;
    tmp_msg_0.y = 0.056922129885873085;
    tmp_msg_0.z = 0.36113661601205527;
    tmp_msg_0.phi = 0.15753440316318157;
    tmp_msg_0.theta = 0.28494767145068756;
    tmp_msg_0.psi = 0.18999148175425706;
    tmp_msg_0.u = 0.16876242264571373;
    tmp_msg_0.v = 0.8404941227239674;
    tmp_msg_0.w = 0.9839805962476152;
    tmp_msg_0.vx = 0.26784588864267633;
    tmp_msg_0.vy = 0.7998190442031908;
    tmp_msg_0.vz = 0.6218402368824073;
    tmp_msg_0.p = 0.6925264002853886;
    tmp_msg_0.q = 0.41183868135488966;
    tmp_msg_0.r = 0.49951272498371857;
    tmp_msg_0.depth = 0.16068909201282833;
    tmp_msg_0.alt = 0.6650246968784163;
    msg.state.set(tmp_msg_0);
    msg.type = 20U;

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
    msg.setTimeStamp(0.5631039805368937);
    msg.setSource(41115U);
    msg.setSourceEntity(117U);
    msg.setDestination(57809U);
    msg.setDestinationEntity(226U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9301717993469313;
    tmp_msg_0.lon = 0.4810733959002069;
    tmp_msg_0.height = 0.47165960418539843;
    tmp_msg_0.x = 0.15737270389347047;
    tmp_msg_0.y = 0.997172098656464;
    tmp_msg_0.z = 0.3809971739671658;
    tmp_msg_0.phi = 0.27166886991258954;
    tmp_msg_0.theta = 0.46870553837805184;
    tmp_msg_0.psi = 0.9537003176865863;
    tmp_msg_0.u = 0.8359575250619036;
    tmp_msg_0.v = 0.49289177894526226;
    tmp_msg_0.w = 0.6820116140217061;
    tmp_msg_0.vx = 0.6323748016379765;
    tmp_msg_0.vy = 0.7583800152917916;
    tmp_msg_0.vz = 0.9170547066533513;
    tmp_msg_0.p = 0.4161760388506889;
    tmp_msg_0.q = 0.8528695069815693;
    tmp_msg_0.r = 0.7877999079742295;
    tmp_msg_0.depth = 0.5862833939883606;
    tmp_msg_0.alt = 0.6822506282065814;
    msg.state.set(tmp_msg_0);
    msg.type = 46U;

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
    msg.setTimeStamp(0.19720296718255337);
    msg.setSource(7969U);
    msg.setSourceEntity(78U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(189U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9316740299768436;
    tmp_msg_0.lon = 0.16295564303454624;
    tmp_msg_0.height = 0.6625178409227457;
    tmp_msg_0.x = 0.059721650603746124;
    tmp_msg_0.y = 0.761239159688389;
    tmp_msg_0.z = 0.7128149945383259;
    tmp_msg_0.phi = 0.5603223856268763;
    tmp_msg_0.theta = 0.8096241190495352;
    tmp_msg_0.psi = 0.2928321716644984;
    tmp_msg_0.u = 0.06339695685562097;
    tmp_msg_0.v = 0.28524512415790104;
    tmp_msg_0.w = 0.29372444999433667;
    tmp_msg_0.vx = 0.8681323594462436;
    tmp_msg_0.vy = 0.690066085697979;
    tmp_msg_0.vz = 0.13211893426693488;
    tmp_msg_0.p = 0.25767492626991695;
    tmp_msg_0.q = 0.09933076119091244;
    tmp_msg_0.r = 0.7924075231034592;
    tmp_msg_0.depth = 0.9900916795111695;
    tmp_msg_0.alt = 0.021600590769264683;
    msg.state.set(tmp_msg_0);
    msg.type = 176U;

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
    msg.setTimeStamp(0.40888853758006705);
    msg.setSource(24567U);
    msg.setSourceEntity(2U);
    msg.setDestination(56558U);
    msg.setDestinationEntity(119U);
    msg.value = 0.24993201282542798;

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
    msg.setTimeStamp(0.4736084315720259);
    msg.setSource(51161U);
    msg.setSourceEntity(14U);
    msg.setDestination(13296U);
    msg.setDestinationEntity(130U);
    msg.value = 0.3677402354004988;

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
    msg.setTimeStamp(0.6445519303856718);
    msg.setSource(16268U);
    msg.setSourceEntity(47U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(220U);
    msg.value = 0.47824553865698016;

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
    msg.setTimeStamp(0.27885863238416764);
    msg.setSource(62170U);
    msg.setSourceEntity(39U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6146952673737552;

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
    msg.setTimeStamp(0.2818437571735596);
    msg.setSource(61119U);
    msg.setSourceEntity(152U);
    msg.setDestination(51867U);
    msg.setDestinationEntity(231U);
    msg.value = 0.10434466921859498;

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
    msg.setTimeStamp(0.8178238076145765);
    msg.setSource(55768U);
    msg.setSourceEntity(107U);
    msg.setDestination(41369U);
    msg.setDestinationEntity(72U);
    msg.value = 0.24847237587167126;

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
    msg.setTimeStamp(0.28025903762740856);
    msg.setSource(36438U);
    msg.setSourceEntity(186U);
    msg.setDestination(58312U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6739832905617282;

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
    msg.setTimeStamp(0.16768402361880164);
    msg.setSource(5756U);
    msg.setSourceEntity(147U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(25U);
    msg.value = 0.4041898299457941;

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
    msg.setTimeStamp(0.027763888908336143);
    msg.setSource(52063U);
    msg.setSourceEntity(190U);
    msg.setDestination(34837U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8271467788201287;

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
    msg.setTimeStamp(0.5913754570032613);
    msg.setSource(17032U);
    msg.setSourceEntity(108U);
    msg.setDestination(24964U);
    msg.setDestinationEntity(28U);
    msg.value = 0.4460725809945799;

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
    msg.setTimeStamp(0.4763586416369333);
    msg.setSource(13260U);
    msg.setSourceEntity(209U);
    msg.setDestination(13418U);
    msg.setDestinationEntity(253U);
    msg.value = 0.014948159276384487;

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
    msg.setTimeStamp(0.48403331648171866);
    msg.setSource(40550U);
    msg.setSourceEntity(83U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9231482748560822;

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
    msg.setTimeStamp(0.591134875192456);
    msg.setSource(35140U);
    msg.setSourceEntity(254U);
    msg.setDestination(5696U);
    msg.setDestinationEntity(105U);
    msg.value = 0.45080521375209304;

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
    msg.setTimeStamp(0.8459084317810138);
    msg.setSource(12197U);
    msg.setSourceEntity(150U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(41U);
    msg.value = 0.385116012070597;

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
    msg.setTimeStamp(0.9443799537635625);
    msg.setSource(19756U);
    msg.setSourceEntity(13U);
    msg.setDestination(52228U);
    msg.setDestinationEntity(244U);
    msg.value = 0.4535456848745729;

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
    msg.setTimeStamp(0.5143146242059391);
    msg.setSource(712U);
    msg.setSourceEntity(137U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(52U);
    msg.id = 141U;
    msg.zoom = 96U;
    msg.action = 209U;

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
    msg.setTimeStamp(0.7076322007381316);
    msg.setSource(3630U);
    msg.setSourceEntity(249U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(61U);
    msg.id = 208U;
    msg.zoom = 169U;
    msg.action = 13U;

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
    msg.setTimeStamp(0.6575451762228627);
    msg.setSource(4663U);
    msg.setSourceEntity(117U);
    msg.setDestination(15096U);
    msg.setDestinationEntity(147U);
    msg.id = 124U;
    msg.zoom = 248U;
    msg.action = 79U;

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
    msg.setTimeStamp(0.7145911731823458);
    msg.setSource(10594U);
    msg.setSourceEntity(198U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(174U);
    msg.id = 138U;
    msg.value = 0.9648617513741008;

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
    msg.setTimeStamp(0.5705270198144891);
    msg.setSource(14064U);
    msg.setSourceEntity(207U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(231U);
    msg.id = 214U;
    msg.value = 0.7145043924675061;

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
    msg.setTimeStamp(0.9903901841025895);
    msg.setSource(15483U);
    msg.setSourceEntity(233U);
    msg.setDestination(3349U);
    msg.setDestinationEntity(227U);
    msg.id = 76U;
    msg.value = 0.4273261698884355;

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
    msg.setTimeStamp(0.4055158230661393);
    msg.setSource(48047U);
    msg.setSourceEntity(21U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(56U);
    msg.id = 224U;
    msg.value = 0.12611994867225718;

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
    msg.setTimeStamp(0.7993499028037945);
    msg.setSource(17217U);
    msg.setSourceEntity(227U);
    msg.setDestination(39096U);
    msg.setDestinationEntity(191U);
    msg.id = 85U;
    msg.value = 0.5857823570349705;

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
    msg.setTimeStamp(0.6683701725824213);
    msg.setSource(287U);
    msg.setSourceEntity(13U);
    msg.setDestination(4477U);
    msg.setDestinationEntity(222U);
    msg.id = 67U;
    msg.value = 0.48982765289655206;

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
    msg.setTimeStamp(0.9659726050919486);
    msg.setSource(28146U);
    msg.setSourceEntity(71U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(20U);
    msg.id = 211U;
    msg.angle = 0.6015321594079638;

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
    msg.setTimeStamp(0.038992181116118796);
    msg.setSource(44772U);
    msg.setSourceEntity(42U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(224U);
    msg.id = 4U;
    msg.angle = 0.8801481126854135;

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
    msg.setTimeStamp(0.6538981210946656);
    msg.setSource(40734U);
    msg.setSourceEntity(84U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(97U);
    msg.id = 198U;
    msg.angle = 0.7672604215840481;

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
    msg.setTimeStamp(0.9883923026439765);
    msg.setSource(61668U);
    msg.setSourceEntity(128U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(127U);
    msg.op = 160U;
    msg.actions.assign("PACKYFQFBMYPWWAAOFBXYUZJVYAAIZQSSHMZZVCDHTXYZILTOCKVILRNILUFDEVSJWTRSXVLZTNJREPETMWDIPCBKKUTRGVKENODOHPCUQPRNTXMUDMJSDQFXKXQQPUGKRCEHIHWBQOFBYBKXUQSGZTNULPDGHPEOWITSMAGYKEFLJOHRWI");

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
    msg.setTimeStamp(0.5836019315614852);
    msg.setSource(41101U);
    msg.setSourceEntity(68U);
    msg.setDestination(46375U);
    msg.setDestinationEntity(253U);
    msg.op = 83U;
    msg.actions.assign("OHXNBEBKVOVDSKAHBJBBZMELKOSRYUAQRYHZNHQUSQZFDDNJVXJJNNRLWPLLLSPHTYDDWZPVCDRGTIGUNQEWOKIASWBKLPVYUFOEYGFRITLTBDHOFIXGPKCETAZCSOMQVVXZVXUTQWJKGJRPF");

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
    msg.setTimeStamp(0.5245853757456682);
    msg.setSource(46916U);
    msg.setSourceEntity(127U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(197U);
    msg.op = 26U;
    msg.actions.assign("JETFKJSWRGPANIERFJSQCPKSMWDRJQNYKOVZUJSGMLJXRWAIBQNPWEVVPBPLI");

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
    msg.setTimeStamp(0.8727104533644657);
    msg.setSource(45669U);
    msg.setSourceEntity(168U);
    msg.setDestination(51958U);
    msg.setDestinationEntity(122U);
    msg.actions.assign("GSOAACHVXNFKPLITAQXWVQRNEOVDJIBIMCYOZJQTQTJULLVUCIGKLJXZTBVTUWYSCVEVJXNQMKZWJDQPFBKOVDPXFEAYGUSDELXORIKWLO");

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
    msg.setTimeStamp(0.5983557829427257);
    msg.setSource(17986U);
    msg.setSourceEntity(63U);
    msg.setDestination(23159U);
    msg.setDestinationEntity(2U);
    msg.actions.assign("ZGSJBHLIIKQKDQJGWOAIBOPNRMAJDNDWUGAVXCVUMYBAYKKEZJCHLHBTXOVHSUYGGMCJRDYPTVQMJXQOQAASERUWFZTHDJAUWTFTKFVIEZEIPGTWOZZYEZVERJNXPBUKDCLQSHVWASDKLMQXSEDZCFQFNLVJLMBWPVXGKLTFKOYCCMNYHIUM");

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
    msg.setTimeStamp(0.9719052987326149);
    msg.setSource(22070U);
    msg.setSourceEntity(209U);
    msg.setDestination(34490U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("IZTLTXBVMQDDSBOXJAKOROMIVRSZPGZOVZMDZZHXXURYFKEQFGWYCDLCEFAULCODCJWGUKV");

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
    msg.setTimeStamp(0.3937276430838712);
    msg.setSource(12250U);
    msg.setSourceEntity(185U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(79U);
    msg.button = 198U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.9159995362026203);
    msg.setSource(52358U);
    msg.setSourceEntity(101U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(210U);
    msg.button = 42U;
    msg.value = 237U;

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
    msg.setTimeStamp(0.3283445996448947);
    msg.setSource(42106U);
    msg.setSourceEntity(90U);
    msg.setDestination(49083U);
    msg.setDestinationEntity(11U);
    msg.button = 106U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.42224870069323384);
    msg.setSource(34753U);
    msg.setSourceEntity(75U);
    msg.setDestination(32925U);
    msg.setDestinationEntity(190U);
    msg.op = 7U;
    msg.text.assign("VVLTEICWENPRLNSEUQFSHWSCUTSIKPCMWFQQKIBZRQYBJZBOBYGDXJHMXTIZ");

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
    msg.setTimeStamp(0.012522976570881417);
    msg.setSource(47067U);
    msg.setSourceEntity(34U);
    msg.setDestination(9594U);
    msg.setDestinationEntity(66U);
    msg.op = 64U;
    msg.text.assign("NZLVHTLEIZCAWDVYJLUPTRORGCJLZZIMHRRAGARWCJFVZODOBXEPTBDCFKHHRGQAVWPCNXEKSZTAEFQLUDUMSINHVAXZNXKHAXFIYSPFNWYPOWBOBDWU");

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
    msg.setTimeStamp(0.3095939840179832);
    msg.setSource(44239U);
    msg.setSourceEntity(14U);
    msg.setDestination(52913U);
    msg.setDestinationEntity(102U);
    msg.op = 135U;
    msg.text.assign("ZPFJAOZYRMLFWNXLNHHMRDJCABRJPBRKLVUZXCGKIMWQVOLSTUJGXVQOLPRHNWKQFONYDPPFDGUIXBBDPFDRCAFKAVTEZQADTE");

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
    msg.setTimeStamp(0.8457263208071373);
    msg.setSource(41079U);
    msg.setSourceEntity(210U);
    msg.setDestination(47464U);
    msg.setDestinationEntity(114U);
    msg.op = 219U;
    msg.time_remain = 0.33895202556839243;
    msg.sched_time = 0.37108984098846853;

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
    msg.setTimeStamp(0.15361223722318973);
    msg.setSource(48002U);
    msg.setSourceEntity(233U);
    msg.setDestination(62796U);
    msg.setDestinationEntity(60U);
    msg.op = 141U;
    msg.time_remain = 0.594779141185422;
    msg.sched_time = 0.34529657920926893;

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
    msg.setTimeStamp(0.44000050171378613);
    msg.setSource(15448U);
    msg.setSourceEntity(215U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(5U);
    msg.op = 74U;
    msg.time_remain = 0.6893622963685784;
    msg.sched_time = 0.09756809892473561;

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
    msg.setTimeStamp(0.447155488504414);
    msg.setSource(7943U);
    msg.setSourceEntity(42U);
    msg.setDestination(21661U);
    msg.setDestinationEntity(21U);
    msg.name.assign("IMLTMNUHHGNJAFIYQSRSVONWXBBXGZTGTSWAHSLNJJ");
    msg.op = 173U;
    msg.sched_time = 0.5445443448244681;

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
    msg.setTimeStamp(0.3777709345062289);
    msg.setSource(155U);
    msg.setSourceEntity(19U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(20U);
    msg.name.assign("NFKJIQIAXAZBHXYRUNRZMCOVLBRPQOKPGZHTOBGTFMLMOSDOKGIIGYZUGDKMTAQUUJZXBVLMECPEYLBBVUNEIZDRPSTKVETSORZWQHMAUWZFREYAABPTGP");
    msg.op = 249U;
    msg.sched_time = 0.13204646606549908;

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
    msg.setTimeStamp(0.7573989471558835);
    msg.setSource(9507U);
    msg.setSourceEntity(175U);
    msg.setDestination(15372U);
    msg.setDestinationEntity(146U);
    msg.name.assign("VJULKGPNDXGZBIGRRMOFPOJEVQESULWGYWJBFXUDUCOWSSYIFCGLXRNLROIPKPBPWHDCCQWDLKTVNURRNGKMRTBAWYDILKNJZUCXUYRSKOTKLTSEVBDQDZXHNAAEUDBARMHDFJOUEGMZTBXSZCEPBQCZNVKFXDFHIVCJMTBRMNCXZYKVZVFPLAWWYGNWEZXJLJHHAIAAIQ");
    msg.op = 107U;
    msg.sched_time = 0.5065783840933064;

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
    msg.setTimeStamp(0.395704073735454);
    msg.setSource(42617U);
    msg.setSourceEntity(199U);
    msg.setDestination(56454U);
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
    msg.setTimeStamp(0.7284559517870419);
    msg.setSource(28047U);
    msg.setSourceEntity(140U);
    msg.setDestination(42498U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.5899805009003497);
    msg.setSource(2155U);
    msg.setSourceEntity(67U);
    msg.setDestination(47023U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.02342039678491714);
    msg.setSource(4778U);
    msg.setSourceEntity(40U);
    msg.setDestination(32331U);
    msg.setDestinationEntity(120U);
    msg.name.assign("WMPBMADBVLHBQSUQKEOVVTNANZDUJURWUHJHLJEZOAKT");
    msg.state = 236U;

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
    msg.setTimeStamp(0.061071038246774734);
    msg.setSource(42703U);
    msg.setSourceEntity(164U);
    msg.setDestination(33939U);
    msg.setDestinationEntity(55U);
    msg.name.assign("NKMFVVBUAWKDZEZNOYXUNAPFMDGJNICQNRHOWDTZLWHCLHTMGHP");
    msg.state = 191U;

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
    msg.setTimeStamp(0.5805746135805517);
    msg.setSource(20537U);
    msg.setSourceEntity(51U);
    msg.setDestination(44946U);
    msg.setDestinationEntity(24U);
    msg.name.assign("BCKJAXKHBTHXIJWGCGPTILOTNGXRQXUNVVRZQQYDHYNRTARUDTERPMJZLNTSYLZFVLBEPYOIGAJJSSDTQQQVKLPSFZHBFDAGXKJURNSVCMNGQOSUAVRMAYEZBWBNUOMUGOFZHNYVBXJHDADJIDYSJERCNAIMOPCKHCOFJRFTXDYGEOXMPLFAPUXKIWWRCVHTVGKDBP");
    msg.state = 106U;

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
    msg.setTimeStamp(0.964668835689129);
    msg.setSource(36740U);
    msg.setSourceEntity(117U);
    msg.setDestination(64887U);
    msg.setDestinationEntity(18U);
    msg.name.assign("ZORSDXBQCVCBYMJDIOTCSJSIJTQKQTDCATDTPGKLYYGBPEASIKMHAWNRGEERATJRZMSFRMCVF");
    msg.value = 115U;

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
    msg.setTimeStamp(0.8818749604398912);
    msg.setSource(33946U);
    msg.setSourceEntity(80U);
    msg.setDestination(56375U);
    msg.setDestinationEntity(153U);
    msg.name.assign("TBWQLZLDKBPXDNHCSJSMWHDFCI");
    msg.value = 241U;

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
    msg.setTimeStamp(0.04268296841073993);
    msg.setSource(18249U);
    msg.setSourceEntity(212U);
    msg.setDestination(14346U);
    msg.setDestinationEntity(126U);
    msg.name.assign("VLBRSNOYEIASVCLRPWAXBCNPPOLDHCTARXYFIEYZDBAEDYBLAUWDGFACUNCSNDKMTFTDSNKSTJKYPVAIPZYJIGQHVERURDEWYGVYEJKXWSMRBTZGTOXUVPPXWTJLXJGYOMBMWEWVKMLFMKIDJSQNCFRXVOOJMTEWQHIONJEALJMHRMGVHNKAFHEFGVKWLZBHNQSKIQGLZCXCHHROQAFCLCIBZQUXUYZUUPBPTSQBMH");
    msg.value = 214U;

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
    msg.setTimeStamp(0.7198437818983315);
    msg.setSource(54228U);
    msg.setSourceEntity(120U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(225U);
    msg.name.assign("JGSBCAYPVJEPUBUXYOXUBNEKMJDDEHXLTSWPCDSWZLOWQITYKEKDNQWCVHRVIAQHQXYOBEGSGOCMZFTYLUTZDFDFYMRKEDKWXCRKMJYEW");

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
    msg.setTimeStamp(0.6618915369569253);
    msg.setSource(24402U);
    msg.setSourceEntity(243U);
    msg.setDestination(2076U);
    msg.setDestinationEntity(119U);
    msg.name.assign("GXVMQXXETQWQQSYKGHTWBQEJWJLRAGCNSFKGNUUNAAUWXDCNMLKZHIPJTVNKXMHIHMPUYKFIYCNNWZGFPPVILOKJOOZLBWIOVOMSROYPBVJBAGRQWTHFYVAMZDOAHQAGFEULMRYFPEREWBOZDPEFZQTCKBE");

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
    msg.setTimeStamp(0.3330571831928596);
    msg.setSource(65514U);
    msg.setSourceEntity(154U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(172U);
    msg.name.assign("IYULQLPIRVHLNBEWSJJDMFQHPRPFJJNXISGHVIZXFUHRTICKK");

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
    msg.setTimeStamp(0.6365316170630105);
    msg.setSource(31895U);
    msg.setSourceEntity(74U);
    msg.setDestination(29456U);
    msg.setDestinationEntity(47U);
    msg.name.assign("RGDSXOHSGWXVFVECKBDTQXKEAHVLJCJPQRZPGBGSTXCYHWPRYDPDXTKAAUMNTBINHZGINNRKPWIPEBIUBZE");
    msg.value = 254U;

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
    msg.setTimeStamp(0.14639590439008066);
    msg.setSource(2788U);
    msg.setSourceEntity(126U);
    msg.setDestination(10656U);
    msg.setDestinationEntity(197U);
    msg.name.assign("DHDLOFJFRUUEZXMFWLMPSPFVXZKCDKHRXIINGZQVMEZVQJKBHHFDTLMEUJYMCDJUGWEOLOWYKLDGBOOARXKDYVJCWPSXGYMCAZZKIVOIDRZNAX");
    msg.value = 224U;

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
    msg.setTimeStamp(0.2324703192389621);
    msg.setSource(13799U);
    msg.setSourceEntity(108U);
    msg.setDestination(33815U);
    msg.setDestinationEntity(83U);
    msg.name.assign("CPAYAHPCOYJTKZXBVQOQFUFCRZJYXLMFBTSOINDNCNYBPJIYXGQQJTQZAVFOTUWCAMVZULLCFWWGYYEWIWDIDZYTFBVGWZPCFMEHXAMMOLBWSGIIXGRHVKQXICEWQBODWOXCAKEITGLSPNK");
    msg.value = 17U;

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
    msg.setTimeStamp(0.08447805254596352);
    msg.setSource(17614U);
    msg.setSourceEntity(4U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(165U);
    msg.id = 126U;
    msg.period = 645114100U;
    msg.duty_cycle = 1786232955U;

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
    msg.setTimeStamp(0.01366649379469842);
    msg.setSource(845U);
    msg.setSourceEntity(26U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(247U);
    msg.id = 159U;
    msg.period = 3588000676U;
    msg.duty_cycle = 714548280U;

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
    msg.setTimeStamp(0.9126970087671237);
    msg.setSource(35757U);
    msg.setSourceEntity(76U);
    msg.setDestination(378U);
    msg.setDestinationEntity(227U);
    msg.id = 172U;
    msg.period = 828531220U;
    msg.duty_cycle = 4270193273U;

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
    msg.setTimeStamp(0.13256760907637255);
    msg.setSource(36080U);
    msg.setSourceEntity(237U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(252U);
    msg.id = 211U;
    msg.period = 2061150085U;
    msg.duty_cycle = 3334767928U;

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
    msg.setTimeStamp(0.08335385926995753);
    msg.setSource(8735U);
    msg.setSourceEntity(81U);
    msg.setDestination(3579U);
    msg.setDestinationEntity(182U);
    msg.id = 66U;
    msg.period = 1980872587U;
    msg.duty_cycle = 3565734324U;

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
    msg.setTimeStamp(0.9113867859104358);
    msg.setSource(28278U);
    msg.setSourceEntity(223U);
    msg.setDestination(29465U);
    msg.setDestinationEntity(84U);
    msg.id = 157U;
    msg.period = 4081802408U;
    msg.duty_cycle = 2580785885U;

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
    msg.setTimeStamp(0.895020617982202);
    msg.setSource(39191U);
    msg.setSourceEntity(118U);
    msg.setDestination(17440U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.8869366922599468;
    msg.lon = 0.9907043747890066;
    msg.height = 0.29290362289714134;
    msg.x = 0.06123520536048144;
    msg.y = 0.637263243763968;
    msg.z = 0.4539984411874983;
    msg.phi = 0.414190844879336;
    msg.theta = 0.6960032572991971;
    msg.psi = 0.5109985429723033;
    msg.u = 0.8323244602267187;
    msg.v = 0.696627777865519;
    msg.w = 0.22599844006458036;
    msg.vx = 0.44597219713427527;
    msg.vy = 0.5466201411214446;
    msg.vz = 0.8827438611831667;
    msg.p = 0.595281958983915;
    msg.q = 0.16061318354609266;
    msg.r = 0.22784359578421487;
    msg.depth = 0.32208393072429475;
    msg.alt = 0.23442295205988162;

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
    msg.setTimeStamp(0.6570267908295664);
    msg.setSource(42590U);
    msg.setSourceEntity(165U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.08911893134195092;
    msg.lon = 0.641080759034826;
    msg.height = 0.35374419992703476;
    msg.x = 0.444201407648409;
    msg.y = 0.575483887392116;
    msg.z = 0.7127051888232874;
    msg.phi = 0.8108243907129655;
    msg.theta = 0.9918412806064808;
    msg.psi = 0.5625491033702328;
    msg.u = 0.07685538658173596;
    msg.v = 0.751529847355707;
    msg.w = 0.6543694950741631;
    msg.vx = 0.9010519887707992;
    msg.vy = 0.9546490567818655;
    msg.vz = 0.8730976923928803;
    msg.p = 0.7288176828634083;
    msg.q = 0.7490694461222235;
    msg.r = 0.709282031178149;
    msg.depth = 0.9460027773882695;
    msg.alt = 0.4322138149557426;

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
    msg.setTimeStamp(0.9950065857580576);
    msg.setSource(43046U);
    msg.setSourceEntity(174U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.8306076357623015;
    msg.lon = 0.6610932826280684;
    msg.height = 0.18194496253405312;
    msg.x = 0.9675778445536122;
    msg.y = 0.34163887462878384;
    msg.z = 0.7415339687803716;
    msg.phi = 0.4611052123510917;
    msg.theta = 0.5266540972266656;
    msg.psi = 0.1913127085812535;
    msg.u = 0.1347564403867817;
    msg.v = 0.621265380469996;
    msg.w = 0.39745947810208404;
    msg.vx = 0.47222390887656895;
    msg.vy = 0.6354259279933528;
    msg.vz = 0.5639933057055925;
    msg.p = 0.2731357570553691;
    msg.q = 0.9068336676480527;
    msg.r = 0.17264282465485425;
    msg.depth = 0.2915165793410519;
    msg.alt = 0.6532037744354542;

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
    msg.setTimeStamp(0.7824160635319356);
    msg.setSource(18006U);
    msg.setSourceEntity(87U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(38U);
    msg.x = 0.4092770926572723;
    msg.y = 0.19325445827330567;
    msg.z = 0.36051357293345954;

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
    msg.setTimeStamp(0.5115943116633345);
    msg.setSource(11349U);
    msg.setSourceEntity(67U);
    msg.setDestination(36970U);
    msg.setDestinationEntity(61U);
    msg.x = 0.9945531037810147;
    msg.y = 0.5372711758072093;
    msg.z = 0.6477527417722393;

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
    msg.setTimeStamp(0.5624618881346198);
    msg.setSource(51878U);
    msg.setSourceEntity(82U);
    msg.setDestination(48049U);
    msg.setDestinationEntity(186U);
    msg.x = 0.3446778879889336;
    msg.y = 0.25834088007058187;
    msg.z = 0.8532049831487936;

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
    msg.setTimeStamp(0.9490214211381118);
    msg.setSource(56906U);
    msg.setSourceEntity(45U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8010522401872426;

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
    msg.setTimeStamp(0.7050484703886445);
    msg.setSource(368U);
    msg.setSourceEntity(34U);
    msg.setDestination(15972U);
    msg.setDestinationEntity(169U);
    msg.value = 0.6401513932453454;

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
    msg.setTimeStamp(0.20319214570861344);
    msg.setSource(50170U);
    msg.setSourceEntity(112U);
    msg.setDestination(47777U);
    msg.setDestinationEntity(69U);
    msg.value = 0.48070416572986374;

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
    msg.setTimeStamp(0.40697666080954475);
    msg.setSource(20343U);
    msg.setSourceEntity(223U);
    msg.setDestination(12837U);
    msg.setDestinationEntity(146U);
    msg.value = 0.8674681896600093;

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
    msg.setTimeStamp(0.11358465300809284);
    msg.setSource(24686U);
    msg.setSourceEntity(95U);
    msg.setDestination(60504U);
    msg.setDestinationEntity(27U);
    msg.value = 0.39254003432190765;

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
    msg.setTimeStamp(0.8373304751435364);
    msg.setSource(15111U);
    msg.setSourceEntity(22U);
    msg.setDestination(35295U);
    msg.setDestinationEntity(78U);
    msg.value = 0.581413145486734;

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
    msg.setTimeStamp(0.8251680153882571);
    msg.setSource(58612U);
    msg.setSourceEntity(90U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(227U);
    msg.x = 0.5114332367711862;
    msg.y = 0.03309808297195582;
    msg.z = 0.08822105342665532;
    msg.phi = 0.06458289387234217;
    msg.theta = 0.43988648542672915;
    msg.psi = 0.5017628876168778;
    msg.p = 0.5856585781796567;
    msg.q = 0.9710324541722836;
    msg.r = 0.3202241556088887;
    msg.u = 0.940752559006511;
    msg.v = 0.8112686305433592;
    msg.w = 0.8638325724867959;
    msg.bias_psi = 0.6236596980319518;
    msg.bias_r = 0.5060972494452305;

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
    msg.setTimeStamp(0.31941622722001106);
    msg.setSource(2968U);
    msg.setSourceEntity(224U);
    msg.setDestination(53485U);
    msg.setDestinationEntity(138U);
    msg.x = 0.10918118258181897;
    msg.y = 0.5463788191073451;
    msg.z = 0.1289457642243571;
    msg.phi = 0.8013295435442725;
    msg.theta = 0.3295814504622018;
    msg.psi = 0.3768585214444917;
    msg.p = 0.8090141802084464;
    msg.q = 0.49895553786801805;
    msg.r = 0.2541504638298482;
    msg.u = 0.5491944505851839;
    msg.v = 0.5350028512954206;
    msg.w = 0.8581361256879271;
    msg.bias_psi = 0.6288768757556057;
    msg.bias_r = 0.5789943866272701;

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
    msg.setTimeStamp(0.6554810013557639);
    msg.setSource(5374U);
    msg.setSourceEntity(139U);
    msg.setDestination(18118U);
    msg.setDestinationEntity(153U);
    msg.x = 0.36831862811340943;
    msg.y = 0.22940237856973367;
    msg.z = 0.9506786963048873;
    msg.phi = 0.5375608343810694;
    msg.theta = 0.001013449998838123;
    msg.psi = 0.5054718297370396;
    msg.p = 0.030196238745159087;
    msg.q = 0.5474755220092361;
    msg.r = 0.6395345283286485;
    msg.u = 0.86231495250992;
    msg.v = 0.06472562585352837;
    msg.w = 0.49240208336538027;
    msg.bias_psi = 0.3532936796438426;
    msg.bias_r = 0.9496466529172626;

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
    msg.setTimeStamp(0.2783915394358031);
    msg.setSource(43511U);
    msg.setSourceEntity(15U);
    msg.setDestination(9393U);
    msg.setDestinationEntity(9U);
    msg.bias_psi = 0.6430320912695819;
    msg.bias_r = 0.8638558508411475;
    msg.cog = 0.5387590324927347;
    msg.cyaw = 0.561219252966145;
    msg.lbl_rej_level = 0.701827037999379;
    msg.gps_rej_level = 0.38744629625794336;
    msg.custom_x = 0.12556319499640578;
    msg.custom_y = 0.8133663942246253;
    msg.custom_z = 0.8975490632492733;

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
    msg.setTimeStamp(0.310388880123449);
    msg.setSource(35817U);
    msg.setSourceEntity(206U);
    msg.setDestination(58297U);
    msg.setDestinationEntity(196U);
    msg.bias_psi = 0.7101142645914169;
    msg.bias_r = 0.2930757604559753;
    msg.cog = 0.896485888388045;
    msg.cyaw = 0.3404663081523479;
    msg.lbl_rej_level = 0.22762730069974613;
    msg.gps_rej_level = 0.7587193416232191;
    msg.custom_x = 0.1401134641698203;
    msg.custom_y = 0.24019857131817024;
    msg.custom_z = 0.14665486911284553;

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
    msg.setTimeStamp(0.10900412325675013);
    msg.setSource(3467U);
    msg.setSourceEntity(7U);
    msg.setDestination(36750U);
    msg.setDestinationEntity(40U);
    msg.bias_psi = 0.7192701964964299;
    msg.bias_r = 0.09471244446727167;
    msg.cog = 0.39584347208247417;
    msg.cyaw = 0.857541208443933;
    msg.lbl_rej_level = 0.8236592714711037;
    msg.gps_rej_level = 0.4719616721153388;
    msg.custom_x = 0.9693199977037893;
    msg.custom_y = 0.6874145993633387;
    msg.custom_z = 0.3876040668225631;

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
    msg.setTimeStamp(0.3837113631100506);
    msg.setSource(62224U);
    msg.setSourceEntity(115U);
    msg.setDestination(23118U);
    msg.setDestinationEntity(123U);
    msg.utc_time = 0.9242933994870792;
    msg.reason = 247U;

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
    msg.setTimeStamp(0.8186209682597604);
    msg.setSource(8454U);
    msg.setSourceEntity(212U);
    msg.setDestination(29120U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.9452787258044788;
    msg.reason = 223U;

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
    msg.setTimeStamp(0.5455411082490084);
    msg.setSource(2746U);
    msg.setSourceEntity(173U);
    msg.setDestination(34154U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.8742466251638853;
    msg.reason = 155U;

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
    msg.setTimeStamp(0.6165594886205772);
    msg.setSource(17832U);
    msg.setSourceEntity(55U);
    msg.setDestination(9988U);
    msg.setDestinationEntity(224U);
    msg.id = 32U;
    msg.range = 0.5439380173827697;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.49519722891739937);
    msg.setSource(7929U);
    msg.setSourceEntity(143U);
    msg.setDestination(57899U);
    msg.setDestinationEntity(124U);
    msg.id = 201U;
    msg.range = 0.6459841431575682;
    msg.acceptance = 243U;

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
    msg.setTimeStamp(0.5816485407293117);
    msg.setSource(34389U);
    msg.setSourceEntity(142U);
    msg.setDestination(58581U);
    msg.setDestinationEntity(197U);
    msg.id = 246U;
    msg.range = 0.8003086040586662;
    msg.acceptance = 237U;

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
    msg.setTimeStamp(0.9826964820318654);
    msg.setSource(17320U);
    msg.setSourceEntity(88U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(203U);
    msg.type = 175U;
    msg.reason = 142U;
    msg.value = 0.8580110425078568;
    msg.timestep = 0.14933117384985872;

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
    msg.setTimeStamp(0.3613097817519141);
    msg.setSource(16773U);
    msg.setSourceEntity(176U);
    msg.setDestination(37770U);
    msg.setDestinationEntity(232U);
    msg.type = 3U;
    msg.reason = 203U;
    msg.value = 0.575031733212956;
    msg.timestep = 0.7842068681992925;

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
    msg.setTimeStamp(0.23790600802578732);
    msg.setSource(52465U);
    msg.setSourceEntity(184U);
    msg.setDestination(3035U);
    msg.setDestinationEntity(9U);
    msg.type = 53U;
    msg.reason = 113U;
    msg.value = 0.0054063867722777825;
    msg.timestep = 0.11669425775010056;

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
    msg.setTimeStamp(0.47217862849146885);
    msg.setSource(13586U);
    msg.setSourceEntity(140U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(221U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NMLXWXOBUGWTHVWXGGRLRNNPJSOHZFIYWNSKYUIWNARFCLIMBOVSOIS");
    tmp_msg_0.lat = 0.2525699459817381;
    tmp_msg_0.lon = 0.975019252802603;
    tmp_msg_0.depth = 0.955201436087785;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 189U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4862801887601188;
    msg.y = 0.9104936739262982;
    msg.var_x = 0.45006779670243413;
    msg.var_y = 0.5156733013648901;
    msg.distance = 0.36854283475746896;

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
    msg.setTimeStamp(0.5915332556622453);
    msg.setSource(47831U);
    msg.setSourceEntity(228U);
    msg.setDestination(24381U);
    msg.setDestinationEntity(122U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EANUDHGTJKWCBQYY");
    tmp_msg_0.lat = 0.5414275915559936;
    tmp_msg_0.lon = 0.9883465652149072;
    tmp_msg_0.depth = 0.36368833400278644;
    tmp_msg_0.query_channel = 124U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 13U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.03626021939704582;
    msg.y = 0.8185358509061819;
    msg.var_x = 0.681208499420592;
    msg.var_y = 0.3386518701666613;
    msg.distance = 0.2844182892111057;

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
    msg.setTimeStamp(0.6287377415083303);
    msg.setSource(50213U);
    msg.setSourceEntity(110U);
    msg.setDestination(51470U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUFWLVJMSZVUVRGDTACOVHKWKXQRAETXRAINDKBUPUFYQJJNJUEBLIIVQNJPLZFOKFBRBENTFGTSCDCGSZYADLPDWRFEZUKHHPAVHVXATEXGWXTWSULFQYHMJHSZHQUCCGGLQTQGJPAZHFYVJMMQMYMXHSWKLUHSMQBSOLGXZE");
    tmp_msg_0.lat = 0.6993074483424104;
    tmp_msg_0.lon = 0.6628476364082304;
    tmp_msg_0.depth = 0.8808382326407846;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 111U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5180791990431258;
    msg.y = 0.019278597379367546;
    msg.var_x = 0.07920181352976108;
    msg.var_y = 0.5731968655896653;
    msg.distance = 0.4106877753838041;

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
    msg.setTimeStamp(0.9028195442905783);
    msg.setSource(35071U);
    msg.setSourceEntity(233U);
    msg.setDestination(34673U);
    msg.setDestinationEntity(51U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.9866573297193197);
    msg.setSource(54542U);
    msg.setSourceEntity(119U);
    msg.setDestination(19582U);
    msg.setDestinationEntity(171U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.404479450752267);
    msg.setSource(104U);
    msg.setSourceEntity(85U);
    msg.setDestination(14857U);
    msg.setDestinationEntity(17U);
    msg.state = 218U;

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
    msg.setTimeStamp(0.6082835308520956);
    msg.setSource(2273U);
    msg.setSourceEntity(200U);
    msg.setDestination(21455U);
    msg.setDestinationEntity(233U);
    msg.x = 0.3005183311490891;
    msg.y = 0.7456273361423429;
    msg.z = 0.5915040784958912;

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
    msg.setTimeStamp(0.7776043972829927);
    msg.setSource(42718U);
    msg.setSourceEntity(248U);
    msg.setDestination(8868U);
    msg.setDestinationEntity(53U);
    msg.x = 0.2049601628494071;
    msg.y = 0.9568336651412234;
    msg.z = 0.39883071398789294;

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
    msg.setTimeStamp(0.2861341201456008);
    msg.setSource(53324U);
    msg.setSourceEntity(145U);
    msg.setDestination(47893U);
    msg.setDestinationEntity(168U);
    msg.x = 0.7691813236010675;
    msg.y = 0.3944623176749338;
    msg.z = 0.4800202328828119;

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
    msg.setTimeStamp(0.100127355279513);
    msg.setSource(31748U);
    msg.setSourceEntity(208U);
    msg.setDestination(40456U);
    msg.setDestinationEntity(57U);
    msg.va = 0.5700111900035782;
    msg.aoa = 0.12183474849877718;
    msg.ssa = 0.9837237725556482;

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
    msg.setTimeStamp(0.1865856613815483);
    msg.setSource(44090U);
    msg.setSourceEntity(130U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(191U);
    msg.va = 0.43579212545810175;
    msg.aoa = 0.09984668251799933;
    msg.ssa = 0.7888798550415874;

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
    msg.setTimeStamp(0.36811291975137883);
    msg.setSource(55345U);
    msg.setSourceEntity(82U);
    msg.setDestination(8295U);
    msg.setDestinationEntity(205U);
    msg.va = 0.5466723612081343;
    msg.aoa = 0.4535662790920497;
    msg.ssa = 0.632865440612725;

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
    msg.setTimeStamp(0.7485847365308069);
    msg.setSource(41809U);
    msg.setSourceEntity(89U);
    msg.setDestination(17613U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5911378506516878;

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
    msg.setTimeStamp(0.27224220489459106);
    msg.setSource(32483U);
    msg.setSourceEntity(85U);
    msg.setDestination(15303U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6356037523512241;

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
    msg.setTimeStamp(0.6352180460346651);
    msg.setSource(23479U);
    msg.setSourceEntity(92U);
    msg.setDestination(23273U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5935826212951474;

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
    msg.setTimeStamp(0.11509132821402657);
    msg.setSource(54466U);
    msg.setSourceEntity(163U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(178U);
    msg.value = 0.35114327671817314;
    msg.z_units = 227U;

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
    msg.setTimeStamp(0.4678605579770011);
    msg.setSource(39958U);
    msg.setSourceEntity(118U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(91U);
    msg.value = 0.874040628082564;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.37817021767659464);
    msg.setSource(1765U);
    msg.setSourceEntity(88U);
    msg.setDestination(28478U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8590254352071713;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.3465300314250127);
    msg.setSource(31085U);
    msg.setSourceEntity(81U);
    msg.setDestination(12029U);
    msg.setDestinationEntity(159U);
    msg.value = 0.08314468094939109;
    msg.speed_units = 38U;

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
    msg.setTimeStamp(0.22438719115299832);
    msg.setSource(26786U);
    msg.setSourceEntity(153U);
    msg.setDestination(59775U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6166249137935025;
    msg.speed_units = 55U;

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
    msg.setTimeStamp(0.20537679758035376);
    msg.setSource(58097U);
    msg.setSourceEntity(78U);
    msg.setDestination(31193U);
    msg.setDestinationEntity(179U);
    msg.value = 0.039774913010664825;
    msg.speed_units = 227U;

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
    msg.setTimeStamp(0.292960146291635);
    msg.setSource(49701U);
    msg.setSourceEntity(178U);
    msg.setDestination(39737U);
    msg.setDestinationEntity(7U);
    msg.value = 0.2825751389088833;

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
    msg.setTimeStamp(0.19083999751263137);
    msg.setSource(43979U);
    msg.setSourceEntity(130U);
    msg.setDestination(13116U);
    msg.setDestinationEntity(30U);
    msg.value = 0.27584837454064015;

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
    msg.setTimeStamp(0.7846389341432912);
    msg.setSource(8726U);
    msg.setSourceEntity(227U);
    msg.setDestination(61089U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6052125620882126;

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
    msg.setTimeStamp(0.9758025495844608);
    msg.setSource(30876U);
    msg.setSourceEntity(231U);
    msg.setDestination(26748U);
    msg.setDestinationEntity(114U);
    msg.value = 0.09654912634170298;

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
    msg.setTimeStamp(0.9341734576862405);
    msg.setSource(6215U);
    msg.setSourceEntity(45U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(199U);
    msg.value = 0.2540400298085862;

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
    msg.setTimeStamp(0.23479498081871197);
    msg.setSource(47457U);
    msg.setSourceEntity(145U);
    msg.setDestination(454U);
    msg.setDestinationEntity(80U);
    msg.value = 0.10955199854848574;

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
    msg.setTimeStamp(0.01701037175155573);
    msg.setSource(56321U);
    msg.setSourceEntity(14U);
    msg.setDestination(55616U);
    msg.setDestinationEntity(97U);
    msg.value = 0.2707480956987244;

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
    msg.setTimeStamp(0.39273071662171044);
    msg.setSource(26275U);
    msg.setSourceEntity(18U);
    msg.setDestination(1233U);
    msg.setDestinationEntity(39U);
    msg.value = 0.2947996219965937;

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
    msg.setTimeStamp(0.7117441556248337);
    msg.setSource(42115U);
    msg.setSourceEntity(130U);
    msg.setDestination(21122U);
    msg.setDestinationEntity(157U);
    msg.value = 0.2115164693558056;

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
    msg.setTimeStamp(0.4584503247586996);
    msg.setSource(46708U);
    msg.setSourceEntity(13U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(167U);
    msg.path_ref = 1546602160U;
    msg.start_lat = 0.574755634228928;
    msg.start_lon = 0.6786239126068557;
    msg.start_z = 0.7532688654890326;
    msg.start_z_units = 19U;
    msg.end_lat = 0.10035596640094491;
    msg.end_lon = 0.15765971849553584;
    msg.end_z = 0.5790310875180673;
    msg.end_z_units = 87U;
    msg.speed = 0.6330223933753443;
    msg.speed_units = 51U;
    msg.lradius = 0.6621576024010056;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.1888029308843644);
    msg.setSource(9322U);
    msg.setSourceEntity(188U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 2079727943U;
    msg.start_lat = 0.9179261277938543;
    msg.start_lon = 0.6380509485674747;
    msg.start_z = 0.15741438800835705;
    msg.start_z_units = 66U;
    msg.end_lat = 0.1523062463732594;
    msg.end_lon = 0.23775983615644591;
    msg.end_z = 0.7623751686896728;
    msg.end_z_units = 203U;
    msg.speed = 0.18327808726310657;
    msg.speed_units = 190U;
    msg.lradius = 0.47870409377140766;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.5247678626097217);
    msg.setSource(17403U);
    msg.setSourceEntity(72U);
    msg.setDestination(221U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 401392954U;
    msg.start_lat = 0.6641899577686975;
    msg.start_lon = 0.04884912584962964;
    msg.start_z = 0.9360380515563511;
    msg.start_z_units = 11U;
    msg.end_lat = 0.9498127789689402;
    msg.end_lon = 0.9457816851894397;
    msg.end_z = 0.37833409637527315;
    msg.end_z_units = 179U;
    msg.speed = 0.9836002765431594;
    msg.speed_units = 217U;
    msg.lradius = 0.5661460487575632;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.5532040395431967);
    msg.setSource(22676U);
    msg.setSourceEntity(87U);
    msg.setDestination(40455U);
    msg.setDestinationEntity(220U);
    msg.x = 0.18209772509131705;
    msg.y = 0.8071625621873351;
    msg.z = 0.1293193586266428;
    msg.k = 0.08886670274188258;
    msg.m = 0.4593626822006309;
    msg.n = 0.6652514027198069;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.4070886945063129);
    msg.setSource(48551U);
    msg.setSourceEntity(219U);
    msg.setDestination(42551U);
    msg.setDestinationEntity(56U);
    msg.x = 0.47909377989615765;
    msg.y = 0.6928399011257087;
    msg.z = 0.6684978816773841;
    msg.k = 0.15058924290067932;
    msg.m = 0.9472876046004884;
    msg.n = 0.5689609481095064;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.35507788285582353);
    msg.setSource(8247U);
    msg.setSourceEntity(144U);
    msg.setDestination(15203U);
    msg.setDestinationEntity(109U);
    msg.x = 0.12619699293598885;
    msg.y = 0.9884450056746624;
    msg.z = 0.5110541230802472;
    msg.k = 0.1986658255866739;
    msg.m = 0.9673222177893381;
    msg.n = 0.1577462435735535;
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
    msg.setTimeStamp(0.12270466973507332);
    msg.setSource(50369U);
    msg.setSourceEntity(142U);
    msg.setDestination(59248U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7748703758270286;

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
    msg.setTimeStamp(0.7343923310097282);
    msg.setSource(42554U);
    msg.setSourceEntity(199U);
    msg.setDestination(49696U);
    msg.setDestinationEntity(201U);
    msg.value = 0.3642594389456434;

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
    msg.setTimeStamp(0.21298853837083287);
    msg.setSource(8439U);
    msg.setSourceEntity(179U);
    msg.setDestination(39978U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5589014706223796;

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
    msg.setTimeStamp(0.4226809294661401);
    msg.setSource(32358U);
    msg.setSourceEntity(118U);
    msg.setDestination(57032U);
    msg.setDestinationEntity(238U);
    msg.u = 0.6949644748854162;
    msg.v = 0.37423539086460034;
    msg.w = 0.12314516533198594;
    msg.p = 0.48336673437743816;
    msg.q = 0.3526025816813795;
    msg.r = 0.29450911695311155;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.7260825194532761);
    msg.setSource(19511U);
    msg.setSourceEntity(57U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(151U);
    msg.u = 0.00929060214822408;
    msg.v = 0.2966042755716166;
    msg.w = 0.9505699671390274;
    msg.p = 0.20251584129860856;
    msg.q = 0.12097716151150772;
    msg.r = 0.30543577336106564;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.7469095153352224);
    msg.setSource(64173U);
    msg.setSourceEntity(99U);
    msg.setDestination(20930U);
    msg.setDestinationEntity(154U);
    msg.u = 0.519333185195471;
    msg.v = 0.22419398041383398;
    msg.w = 0.3564225087689048;
    msg.p = 0.43353854955503657;
    msg.q = 0.25137632827762046;
    msg.r = 0.20651941584998112;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.014899275442714077);
    msg.setSource(18633U);
    msg.setSourceEntity(25U);
    msg.setDestination(51739U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 4093657607U;
    msg.start_lat = 0.3084862804482832;
    msg.start_lon = 0.018916968628194475;
    msg.start_z = 0.3473605520695252;
    msg.start_z_units = 218U;
    msg.end_lat = 0.40577877573219734;
    msg.end_lon = 0.11093551813992686;
    msg.end_z = 0.941437095661998;
    msg.end_z_units = 104U;
    msg.lradius = 0.25064938179794394;
    msg.flags = 183U;
    msg.x = 0.03350606611900675;
    msg.y = 0.4772580257539545;
    msg.z = 0.5822627697343128;
    msg.vx = 0.053708300487615324;
    msg.vy = 0.8188050078965332;
    msg.vz = 0.06155432015596762;
    msg.course_error = 0.6252834249969118;
    msg.eta = 37949U;

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
    msg.setTimeStamp(0.29176015976639647);
    msg.setSource(41544U);
    msg.setSourceEntity(41U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(178U);
    msg.path_ref = 4180249966U;
    msg.start_lat = 0.03811116547388316;
    msg.start_lon = 0.7990511462634619;
    msg.start_z = 0.4291810588281193;
    msg.start_z_units = 84U;
    msg.end_lat = 0.8889429593182214;
    msg.end_lon = 0.021504111928682956;
    msg.end_z = 0.12416965624204024;
    msg.end_z_units = 117U;
    msg.lradius = 0.46863567505596715;
    msg.flags = 40U;
    msg.x = 0.6873929929577548;
    msg.y = 0.3363580222848347;
    msg.z = 0.3479631893539623;
    msg.vx = 0.7295322709575707;
    msg.vy = 0.5941347676461672;
    msg.vz = 0.03579527202784638;
    msg.course_error = 0.4572680973168066;
    msg.eta = 6945U;

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
    msg.setTimeStamp(0.449185143934953);
    msg.setSource(10538U);
    msg.setSourceEntity(33U);
    msg.setDestination(34055U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 124461415U;
    msg.start_lat = 0.46067096656645945;
    msg.start_lon = 0.7977785639523864;
    msg.start_z = 0.8720990451219314;
    msg.start_z_units = 155U;
    msg.end_lat = 0.7338333605202456;
    msg.end_lon = 0.05164363905276326;
    msg.end_z = 0.43351340743941;
    msg.end_z_units = 150U;
    msg.lradius = 0.5979326468854655;
    msg.flags = 243U;
    msg.x = 0.03963746037125815;
    msg.y = 0.523992214551917;
    msg.z = 0.7885816118937816;
    msg.vx = 0.13440533676110633;
    msg.vy = 0.451951464411826;
    msg.vz = 0.4265558061041924;
    msg.course_error = 0.05331292521577857;
    msg.eta = 33292U;

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
    msg.setTimeStamp(0.7390679199316643);
    msg.setSource(4209U);
    msg.setSourceEntity(145U);
    msg.setDestination(47129U);
    msg.setDestinationEntity(68U);
    msg.k = 0.5129099935189901;
    msg.m = 0.8379483368989604;
    msg.n = 0.014146733882744789;

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
    msg.setTimeStamp(0.22205265697629128);
    msg.setSource(27958U);
    msg.setSourceEntity(153U);
    msg.setDestination(34868U);
    msg.setDestinationEntity(18U);
    msg.k = 0.8379505052179151;
    msg.m = 0.5430115935939904;
    msg.n = 0.10173546372999809;

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
    msg.setTimeStamp(0.5027623246656406);
    msg.setSource(52306U);
    msg.setSourceEntity(103U);
    msg.setDestination(11806U);
    msg.setDestinationEntity(18U);
    msg.k = 0.8083171270543976;
    msg.m = 0.2275316192029443;
    msg.n = 0.4348693801023441;

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
    msg.setTimeStamp(0.8444887679711033);
    msg.setSource(7624U);
    msg.setSourceEntity(76U);
    msg.setDestination(58809U);
    msg.setDestinationEntity(55U);
    msg.p = 0.40897456094290885;
    msg.i = 0.16679572375034235;
    msg.d = 0.7517452833282006;
    msg.a = 0.7638997769128492;

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
    msg.setTimeStamp(0.321692122004814);
    msg.setSource(3896U);
    msg.setSourceEntity(126U);
    msg.setDestination(5872U);
    msg.setDestinationEntity(98U);
    msg.p = 0.6118832939721464;
    msg.i = 0.3871971517262688;
    msg.d = 0.6088533433993414;
    msg.a = 0.08646409063088045;

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
    msg.setTimeStamp(0.4925277772135699);
    msg.setSource(758U);
    msg.setSourceEntity(162U);
    msg.setDestination(32448U);
    msg.setDestinationEntity(70U);
    msg.p = 0.8324605818867433;
    msg.i = 0.49026077476504126;
    msg.d = 0.7458106320390143;
    msg.a = 0.3452046150071042;

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
    msg.setTimeStamp(0.3192614044176042);
    msg.setSource(7719U);
    msg.setSourceEntity(141U);
    msg.setDestination(41310U);
    msg.setDestinationEntity(81U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.4941698589713144);
    msg.setSource(34957U);
    msg.setSourceEntity(108U);
    msg.setDestination(52284U);
    msg.setDestinationEntity(129U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.729426488537308);
    msg.setSource(38003U);
    msg.setSourceEntity(173U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(147U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.09481988942533237);
    msg.setSource(29777U);
    msg.setSourceEntity(173U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(131U);
    msg.x = 0.6121770522722375;
    msg.y = 0.14174528240754047;
    msg.z = 0.1882590331573879;
    msg.vx = 0.44157281911600565;
    msg.vy = 0.8820953800360126;
    msg.vz = 0.6478806009569726;
    msg.ax = 0.8762725941294037;
    msg.ay = 0.8810889543522743;
    msg.az = 0.30906308589295084;
    msg.flags = 25576U;

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
    msg.setTimeStamp(0.898324792826362);
    msg.setSource(38773U);
    msg.setSourceEntity(131U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(202U);
    msg.x = 0.7596980203622717;
    msg.y = 0.5454796935130433;
    msg.z = 0.8461791668717894;
    msg.vx = 0.18487153948688162;
    msg.vy = 0.07446300960930419;
    msg.vz = 0.42153709965662245;
    msg.ax = 0.23714675359963866;
    msg.ay = 0.7731568195763472;
    msg.az = 0.19768161286074426;
    msg.flags = 17603U;

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
    msg.setTimeStamp(0.8581767665884902);
    msg.setSource(6279U);
    msg.setSourceEntity(142U);
    msg.setDestination(34364U);
    msg.setDestinationEntity(136U);
    msg.x = 0.7260080701159191;
    msg.y = 0.7721364635919195;
    msg.z = 0.2622996448629439;
    msg.vx = 0.3490178191126073;
    msg.vy = 0.9601646462743025;
    msg.vz = 0.648687216170273;
    msg.ax = 0.5036043598206101;
    msg.ay = 0.15059040015936387;
    msg.az = 0.07849825236274088;
    msg.flags = 700U;

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
    msg.setTimeStamp(0.5312296518657769);
    msg.setSource(32240U);
    msg.setSourceEntity(31U);
    msg.setDestination(46675U);
    msg.setDestinationEntity(225U);
    msg.value = 0.3189720488203309;

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
    msg.setTimeStamp(0.9110855350945922);
    msg.setSource(38620U);
    msg.setSourceEntity(200U);
    msg.setDestination(784U);
    msg.setDestinationEntity(115U);
    msg.value = 0.28381950787056975;

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
    msg.setTimeStamp(0.8807196401479978);
    msg.setSource(53650U);
    msg.setSourceEntity(195U);
    msg.setDestination(59121U);
    msg.setDestinationEntity(3U);
    msg.value = 0.5182247841605359;

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
    msg.setTimeStamp(0.9017230779902813);
    msg.setSource(61355U);
    msg.setSourceEntity(78U);
    msg.setDestination(27729U);
    msg.setDestinationEntity(185U);
    msg.timeout = 18069U;
    msg.lat = 0.7623673586763501;
    msg.lon = 0.15355413512879235;
    msg.z = 0.4687076684321364;
    msg.z_units = 61U;
    msg.speed = 0.8798394670795694;
    msg.speed_units = 2U;
    msg.roll = 0.4569755685797702;
    msg.pitch = 0.8197641909674304;
    msg.yaw = 0.715316079078137;
    msg.custom.assign("DJKFCMJBGLBHDVUMQQLFNKZTLGOSQGXYRTEFIUDUSMYQIPLPQWZTETVOVGURVOCLRUJSRLCDCBWBOHWCSRRLBOEVKAIKYGPQAJDYTAFCYHHFHDTFSMMCRHANJXZDZRYPOSHNMCPTHTBYGUXMBJGOEKEZPNHQLNRFXFHOKUKLQAMU");

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
    msg.setTimeStamp(0.2697093502903395);
    msg.setSource(30375U);
    msg.setSourceEntity(196U);
    msg.setDestination(56094U);
    msg.setDestinationEntity(161U);
    msg.timeout = 962U;
    msg.lat = 0.26423209007300896;
    msg.lon = 0.27852956485266156;
    msg.z = 0.7777818689159525;
    msg.z_units = 188U;
    msg.speed = 0.7051749860762221;
    msg.speed_units = 51U;
    msg.roll = 0.3922547333436269;
    msg.pitch = 0.9811381741572834;
    msg.yaw = 0.5033013405919642;
    msg.custom.assign("BCBFMEMCXXHTURH");

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
    msg.setTimeStamp(0.9594054106386116);
    msg.setSource(60792U);
    msg.setSourceEntity(168U);
    msg.setDestination(45534U);
    msg.setDestinationEntity(117U);
    msg.timeout = 35922U;
    msg.lat = 0.5853545540817282;
    msg.lon = 0.46852361161450273;
    msg.z = 0.6658923778978889;
    msg.z_units = 75U;
    msg.speed = 0.5817984373177105;
    msg.speed_units = 188U;
    msg.roll = 0.14419472427240065;
    msg.pitch = 0.8349094347376191;
    msg.yaw = 0.7780286993978426;
    msg.custom.assign("GUTBGRXGAGDXNFUMWVSERQEPYPOQHOZTYRABWUBJIPUPTNZVISJTKFSRVXBOANDBQHMXVLYKVEEZISKBZKVNLFKIDLQIRJWDADGAUVUHLHJDPYZUSSRIAYSULDZBPWFKNZCRMTCMPVGEHMKEXGRYQRMCZDONCJIPQOCBNLGH");

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
    msg.setTimeStamp(0.5881916226751267);
    msg.setSource(5521U);
    msg.setSourceEntity(247U);
    msg.setDestination(41468U);
    msg.setDestinationEntity(171U);
    msg.timeout = 43256U;
    msg.lat = 0.34892722253304076;
    msg.lon = 0.8636502478849282;
    msg.z = 0.4929877514959443;
    msg.z_units = 57U;
    msg.speed = 0.43839522581804014;
    msg.speed_units = 191U;
    msg.duration = 8263U;
    msg.radius = 0.8178491057220814;
    msg.flags = 134U;
    msg.custom.assign("PKYKZIMKLILSVHBZZWXHVCNLVXGKJNGHFG");

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
    msg.setTimeStamp(0.9024373812788364);
    msg.setSource(62210U);
    msg.setSourceEntity(236U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(125U);
    msg.timeout = 65438U;
    msg.lat = 0.5716293593898559;
    msg.lon = 0.356947994548828;
    msg.z = 0.015326537880430147;
    msg.z_units = 121U;
    msg.speed = 0.41197554721472485;
    msg.speed_units = 220U;
    msg.duration = 65372U;
    msg.radius = 0.8515166926943251;
    msg.flags = 26U;
    msg.custom.assign("XTTCKXSGYXTCWZMPNBAUFWBESDEEKZYSRBIWGLDVDBMTLQCIQIWQNGOONVRVROTHNDOTRYDYDBAUIVLQYEBMKRDNGMEBSFCJGZLCFMYJMBJEZFSLZFUJQFYEHTAXCUDJJKORVSPWSUAITFGIFEVCYAHXSCRHNILXQSXF");

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
    msg.setTimeStamp(0.9882140109007029);
    msg.setSource(7694U);
    msg.setSourceEntity(2U);
    msg.setDestination(32428U);
    msg.setDestinationEntity(19U);
    msg.timeout = 39020U;
    msg.lat = 0.3972752626328795;
    msg.lon = 0.19374096670020868;
    msg.z = 0.007043922027070604;
    msg.z_units = 6U;
    msg.speed = 0.4132330695610079;
    msg.speed_units = 92U;
    msg.duration = 46819U;
    msg.radius = 0.07021355517608374;
    msg.flags = 213U;
    msg.custom.assign("KAMWIUJETSZKYHROZRWNOXGOYLDGEUVPNGKFNCIJFTRCVIXDBEEERHPACPFYXAMTFGCDWCPIMZABRPKZLTMNIHPTBERDUMTCBMFVIVHUSJZUYSXHBMTQQQOZAXOWRLSUNJSFTXKAWVWBLLXEKOXVNDIHSGWGSVDLAPAFANKQCPFW");

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
    msg.setTimeStamp(0.1876416662468906);
    msg.setSource(44873U);
    msg.setSourceEntity(72U);
    msg.setDestination(26814U);
    msg.setDestinationEntity(157U);
    msg.custom.assign("MXWNUXMJVFLIIRGGXCYMPNL");

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
    msg.setTimeStamp(0.6514633891968635);
    msg.setSource(45986U);
    msg.setSourceEntity(134U);
    msg.setDestination(10828U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("RZUTNTLUZWBLWXDFNFYJVQSSUTCTPOGYMUPJBFISGAMQHUYBZKFVNDWHNYPVPYUDJYIJDMQLGRRAMMOTXFPRJSECEKNRWBHFGXHOYAHALELVJMZJPSOHDSWSXQMATYIKGVOWJV");

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
    msg.setTimeStamp(0.3064726553224174);
    msg.setSource(17369U);
    msg.setSourceEntity(89U);
    msg.setDestination(12874U);
    msg.setDestinationEntity(191U);
    msg.custom.assign("DEJFDWXOLJDQNHFZAYDBBQUYAMPWWNQEQKVTVOFTFCXZPFTORKOQKBHKSDPHFHQGANKPLESGUARTIIGAHQMLEOJILGJXSIDN");

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
    msg.setTimeStamp(0.09775545638766892);
    msg.setSource(16337U);
    msg.setSourceEntity(245U);
    msg.setDestination(20400U);
    msg.setDestinationEntity(184U);
    msg.timeout = 32277U;
    msg.lat = 0.522154526570621;
    msg.lon = 0.543459702903939;
    msg.z = 0.12759889556800286;
    msg.z_units = 84U;
    msg.duration = 55905U;
    msg.speed = 0.1922368677277242;
    msg.speed_units = 224U;
    msg.type = 134U;
    msg.radius = 0.36814928490928966;
    msg.length = 0.6655688103133222;
    msg.bearing = 0.560725922153132;
    msg.direction = 246U;
    msg.custom.assign("PIXMUFUHZBMFSBKECJLMPZOVWM");

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
    msg.setTimeStamp(0.20602489975007077);
    msg.setSource(26335U);
    msg.setSourceEntity(70U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(182U);
    msg.timeout = 58089U;
    msg.lat = 0.2914808377558167;
    msg.lon = 0.8184631969535877;
    msg.z = 0.19487396997654816;
    msg.z_units = 91U;
    msg.duration = 35665U;
    msg.speed = 0.9857468513288101;
    msg.speed_units = 184U;
    msg.type = 186U;
    msg.radius = 0.02627780756791087;
    msg.length = 0.8532478502657155;
    msg.bearing = 0.9002773059309847;
    msg.direction = 88U;
    msg.custom.assign("ULQJELFUPZXCVDXTGGIZUQSTUSBNEMVIHGGMAPNRBSJDRRZFGFHHQTHWIOFLETTYIQYZIOUNHVGTJOMXDMLQNDJZDWMEKPJFM");

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
    msg.setTimeStamp(0.9514488100681022);
    msg.setSource(35649U);
    msg.setSourceEntity(94U);
    msg.setDestination(3156U);
    msg.setDestinationEntity(119U);
    msg.timeout = 6635U;
    msg.lat = 0.29857938468656675;
    msg.lon = 0.105385842480481;
    msg.z = 0.7682480118661018;
    msg.z_units = 64U;
    msg.duration = 14352U;
    msg.speed = 0.964270091012494;
    msg.speed_units = 168U;
    msg.type = 116U;
    msg.radius = 0.3110771675416255;
    msg.length = 0.8092133967041664;
    msg.bearing = 0.8843614952490738;
    msg.direction = 152U;
    msg.custom.assign("SWRYCEPLOOXPUNMZSNPAFVTMRXPNIESMXEKJBITRZJFOXLNFVPFBBQCSVRLMLAFBLQTHXQVJSDALDYGUDYFXOBRGBKZGZIEUEHNJSNY");

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
    msg.setTimeStamp(0.8643270665192812);
    msg.setSource(54815U);
    msg.setSourceEntity(218U);
    msg.setDestination(46611U);
    msg.setDestinationEntity(53U);
    msg.duration = 8902U;
    msg.custom.assign("DWAQKHENNHNTSBMDBSQEWZNRWGCEVBXYVKRKOTFVXOTTFYSXCTPNPHIYLDK");

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
    msg.setTimeStamp(0.9191283365719888);
    msg.setSource(12528U);
    msg.setSourceEntity(92U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(164U);
    msg.duration = 48270U;
    msg.custom.assign("RZPBLUGOGKRXKQIQZYFEMZQNNMJNIFQAQUEMAIZTAPKWUTIDVPDWDTQNLXHBIBEDMFNZACRRVCRNLJVEFMHLZGKGMLMSFJFBAXWKVDUUKEXGEKJKRJYYMDLHBUWGGWZRCNOPRPQHXSYJLODIWVIYTOOJYBYLDZPRTFZSFEZTTWTMNCAYEHKWCXAFEGJFVPJSGHUCDBQYIQKPSJSAOWNV");

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
    msg.setTimeStamp(0.7415969772844316);
    msg.setSource(36896U);
    msg.setSourceEntity(34U);
    msg.setDestination(29775U);
    msg.setDestinationEntity(133U);
    msg.duration = 9015U;
    msg.custom.assign("HWXFUKFGUYKCKWHEITMTFJGGXDTCPDYERNZJZCCUTKAVSVNAPVLPUQAPJAPNZPWYNKYJYABGFQZZTLEWCPDVVHFMLOBAXMWTORZSXYFU");

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
    msg.setTimeStamp(0.3006839802971992);
    msg.setSource(23047U);
    msg.setSourceEntity(125U);
    msg.setDestination(13693U);
    msg.setDestinationEntity(35U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.8108802142813119;
    msg.control.set(tmp_msg_0);
    msg.duration = 20690U;
    msg.custom.assign("XDWNDMYJNVTIPFMYQYCJTINXXTTABUCOZGWDAHUHVJWWEUYMEFRBOOKCOZPCLAUCYNWPFYSXSZRQFUECHRRZIZIEVHGENOKFMGDHISLSHLJGAALUJSIVLPBKXTCDZARFPMRSBPQZWATXREDHNKTHJALGKOAETISUNMLDRPQYBKYVNKHXQBFSOBGWOTIOKJE");

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
    msg.setTimeStamp(0.8342874412953065);
    msg.setSource(52588U);
    msg.setSourceEntity(124U);
    msg.setDestination(25520U);
    msg.setDestinationEntity(84U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.33888431749760783;
    tmp_msg_0.z_units = 204U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45199U;
    msg.custom.assign("WUWYIFSLALXYSCMCNIJLJIOLTHPYZJHZGONOGPRAQUOIBMYCAFKWBYRPKPZHCNVDTRMELAHLIEQFUEICMMCRKFQWQSKPZDUTUVKACSAYTHZXTFDPWGIWXOBFDMMJQOPHZVEMSAKCXGVSBTGERRVYVRAXQRDLOTYQUWBHXNKNWRJDPJEBSBZYFWQBALDVZUKOEGIUXJTGRIXNVPCTMHSBHZKEOKETCAJFGOWIFDNVXQVGYGJNLZJFHDUPX");

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
    msg.setTimeStamp(0.7014369208992385);
    msg.setSource(2179U);
    msg.setSourceEntity(243U);
    msg.setDestination(15615U);
    msg.setDestinationEntity(155U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9883439493975309;
    tmp_msg_0.speed_units = 204U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1842U;
    msg.custom.assign("OEFLSHCDRRVJRWEVXABMNFRLQVZCYAQNDPIIMUKOIHJSYQQTGCTOIBIPVVERYCFFTXKWSKHRZWPLCNGKPUTXOFYXZDVUZAZGDIVMSNEYMOMYBBGYOXKBWGKFEENBVCSEROFG");

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
    msg.setTimeStamp(0.872678071667055);
    msg.setSource(23100U);
    msg.setSourceEntity(183U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(224U);
    msg.timeout = 40335U;
    msg.lat = 0.18799912379321426;
    msg.lon = 0.957114184872277;
    msg.z = 0.8523699494465155;
    msg.z_units = 21U;
    msg.speed = 0.7748984072968638;
    msg.speed_units = 78U;
    msg.bearing = 0.15200983185847472;
    msg.cross_angle = 0.8173194293987306;
    msg.width = 0.40320076530710247;
    msg.length = 0.4275463873155031;
    msg.hstep = 0.5264856167467109;
    msg.coff = 47U;
    msg.alternation = 24U;
    msg.flags = 91U;
    msg.custom.assign("MPVIOIEXCBTNHYRDXBAPJRLYNWNWPQIFHBDREXSFPPDEABQYTCNXZYHOLGSCVCYOAUMVRIUBZAOOXCBGNGVKUEAGRCWFVHJBFKOISNSLBDRDVZZQLQGAKZGCEUMNIQHBTLAHHMXIRHTJSKATQUPAVRTFWPZYQKLJJFSMOQVNTTXTCDMJWQEUHARUHNMFGVJ");

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
    msg.setTimeStamp(0.02760083691602233);
    msg.setSource(36837U);
    msg.setSourceEntity(83U);
    msg.setDestination(4434U);
    msg.setDestinationEntity(243U);
    msg.timeout = 44071U;
    msg.lat = 0.7321884105815516;
    msg.lon = 0.011658683464986996;
    msg.z = 0.679805172333988;
    msg.z_units = 129U;
    msg.speed = 0.24565661464697863;
    msg.speed_units = 158U;
    msg.bearing = 0.000555606643386275;
    msg.cross_angle = 0.5590198015565072;
    msg.width = 0.1524455929392713;
    msg.length = 0.06269659548816542;
    msg.hstep = 0.6343132271244621;
    msg.coff = 124U;
    msg.alternation = 131U;
    msg.flags = 236U;
    msg.custom.assign("ABSQVASIVBFNSMLCOTTHQNEICFPFUGDZOXCRPKGNKYQQRYAYCJEWZALYTQJGZKTYZFKAEHZDVPEQVKAHMUCORJPHSQFAAUITONAIHIBYLJULXPQIFXCUQZTWJSCJDYSWNXDXXIHTJVDOK");

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
    msg.setTimeStamp(0.5030039063596896);
    msg.setSource(54421U);
    msg.setSourceEntity(10U);
    msg.setDestination(32588U);
    msg.setDestinationEntity(92U);
    msg.timeout = 40461U;
    msg.lat = 0.06442840303559372;
    msg.lon = 0.6396977969877863;
    msg.z = 0.4906660058183686;
    msg.z_units = 227U;
    msg.speed = 0.14902107376466656;
    msg.speed_units = 198U;
    msg.bearing = 0.9450535072005948;
    msg.cross_angle = 0.4588692114562989;
    msg.width = 0.917234015690061;
    msg.length = 0.6313092674156515;
    msg.hstep = 0.45941376240865694;
    msg.coff = 82U;
    msg.alternation = 205U;
    msg.flags = 16U;
    msg.custom.assign("KCOLHMBBMVAFSMHPTTKVPZYKSBANRYNJYBXWJFFIJUBBAJZMOSJWAGETLWMMOGIWHXEFEGCSQZRFCLWHIYPADWTGIMCAUEVPHBYZXREJTNDZMFHACDDQLTICWMKRLLYDOGSPHB");

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
    msg.setTimeStamp(0.6749619119115271);
    msg.setSource(42870U);
    msg.setSourceEntity(203U);
    msg.setDestination(62790U);
    msg.setDestinationEntity(220U);
    msg.timeout = 5773U;
    msg.lat = 0.5884892920897238;
    msg.lon = 0.5801040386369131;
    msg.z = 0.11935061026891847;
    msg.z_units = 9U;
    msg.speed = 0.7554774503725662;
    msg.speed_units = 155U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.44589829825828686;
    tmp_msg_0.y = 0.6188307726396767;
    tmp_msg_0.z = 0.9202526359522987;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TBBJDKVWGPHTXMPQMVTZFVDBEGILIKMTTBRV");

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
    msg.setTimeStamp(0.5777018070128964);
    msg.setSource(36955U);
    msg.setSourceEntity(111U);
    msg.setDestination(56915U);
    msg.setDestinationEntity(229U);
    msg.timeout = 29820U;
    msg.lat = 0.5580781865169046;
    msg.lon = 0.9107085109134255;
    msg.z = 0.890546784644315;
    msg.z_units = 178U;
    msg.speed = 0.1363911751489818;
    msg.speed_units = 66U;
    msg.custom.assign("XQKOGGULPZELFKTRJKXAFPZPZBMPPSMFFTYGNWFGEWRHYQPRJRNZYDJIEEBETEBUCVRGNHAPQWCBNGZIOZWBBWXABWEUXLEDCUCOPVYEYSSHAFIOOXSODMJNGUKTKRAFVADZOAYKLMGNFSIUSJFUUDVHAGMPKNUSNMJYXRCDQSZIEQAYYMOKXQTINZVLIL");

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
    msg.setTimeStamp(0.790602402896806);
    msg.setSource(53726U);
    msg.setSourceEntity(88U);
    msg.setDestination(6307U);
    msg.setDestinationEntity(134U);
    msg.timeout = 35563U;
    msg.lat = 0.5926675314599764;
    msg.lon = 0.3975273678556953;
    msg.z = 0.26135653005291903;
    msg.z_units = 79U;
    msg.speed = 0.7685680082123075;
    msg.speed_units = 30U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9336462308069285;
    tmp_msg_0.y = 0.07561918826421621;
    tmp_msg_0.z = 0.034554919490117686;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TKXCGDNDZHCFZPTUVCHJLKVDQREIQYULBSMKYWLJSOJIIQOQDPENAVTXTRGTXZFGHPIFKWSH");

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
    msg.setTimeStamp(0.6787158293925205);
    msg.setSource(52740U);
    msg.setSourceEntity(181U);
    msg.setDestination(35924U);
    msg.setDestinationEntity(221U);
    msg.x = 0.15843267837686115;
    msg.y = 0.11397480745961408;
    msg.z = 0.12508869509718645;

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
    msg.setTimeStamp(0.5311603639776121);
    msg.setSource(30002U);
    msg.setSourceEntity(46U);
    msg.setDestination(46831U);
    msg.setDestinationEntity(126U);
    msg.x = 0.013632432388367755;
    msg.y = 0.22398799346226528;
    msg.z = 0.0946945794805728;

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
    msg.setTimeStamp(0.7610031469424563);
    msg.setSource(19714U);
    msg.setSourceEntity(30U);
    msg.setDestination(35665U);
    msg.setDestinationEntity(97U);
    msg.x = 0.15392005294386302;
    msg.y = 0.4643674901301993;
    msg.z = 0.46062472351465833;

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
    msg.setTimeStamp(0.36734692877062436);
    msg.setSource(41888U);
    msg.setSourceEntity(138U);
    msg.setDestination(13735U);
    msg.setDestinationEntity(78U);
    msg.timeout = 7922U;
    msg.lat = 0.6799936392681066;
    msg.lon = 0.9220775580146447;
    msg.z = 0.36083175408099455;
    msg.z_units = 130U;
    msg.amplitude = 0.2959043233159482;
    msg.pitch = 0.09849513364256779;
    msg.speed = 0.651534181941045;
    msg.speed_units = 230U;
    msg.custom.assign("GWCVVXSWXWUISNNFOJCWMBPTZLWJJUTCFGMGAOIBWOVSSYPZREPHNZRBMERHPOBJKHCOTYPVBQCZGKGQDXFSAEUMGBGPAUXLCQPDLZJHILEDPYNHKLKVDFODGZITWQHLLTAEHQDDMAXVHPUTBYJQMKIAFIOORW");

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
    msg.setTimeStamp(0.7370524001155989);
    msg.setSource(10245U);
    msg.setSourceEntity(195U);
    msg.setDestination(9438U);
    msg.setDestinationEntity(66U);
    msg.timeout = 19440U;
    msg.lat = 0.3943595165463525;
    msg.lon = 0.6084494570471451;
    msg.z = 0.32246262446145646;
    msg.z_units = 102U;
    msg.amplitude = 0.06323174183731517;
    msg.pitch = 0.1867758532708439;
    msg.speed = 0.9445100807318885;
    msg.speed_units = 47U;
    msg.custom.assign("WROZZHGTWNDFZOPOTRTIREWCJR");

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
    msg.setTimeStamp(0.9774846524952681);
    msg.setSource(42442U);
    msg.setSourceEntity(42U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(229U);
    msg.timeout = 14874U;
    msg.lat = 0.3472517851883703;
    msg.lon = 0.9880077616530818;
    msg.z = 0.9178648424488806;
    msg.z_units = 119U;
    msg.amplitude = 0.3819570702620182;
    msg.pitch = 0.9193033671115698;
    msg.speed = 0.32762228693447104;
    msg.speed_units = 212U;
    msg.custom.assign("DAEKUIPNEUCAQTPRYWSAJANMYOQCZURBKMPXHXLCCEUBZFXGXKSQGTJXMQHMLOLGTTHTV");

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
    msg.setTimeStamp(0.5985441132611912);
    msg.setSource(18545U);
    msg.setSourceEntity(22U);
    msg.setDestination(20101U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.9072410806624065);
    msg.setSource(6508U);
    msg.setSourceEntity(20U);
    msg.setDestination(28486U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.9513765308084707);
    msg.setSource(21150U);
    msg.setSourceEntity(153U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.3757972201906059);
    msg.setSource(63156U);
    msg.setSourceEntity(178U);
    msg.setDestination(5936U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.8609958769422011;
    msg.lon = 0.17288381281986653;
    msg.z = 0.35950348271756616;
    msg.z_units = 55U;
    msg.radius = 0.9916418858642365;
    msg.duration = 16715U;
    msg.speed = 0.2263018921997465;
    msg.speed_units = 100U;
    msg.custom.assign("LJCSOAUHEUQZOPYEQXLSMWUJNCXXRBYPYTKLUJDKTGYRPBOHWBMXJZXOLULKQKGGBDSEZAFNHNAWTGZPNGTIVDRZHEWLQBHQTTERFUOVJKMZBDHDNTIDINMCJZYJHYEPJDZASOJSLYACPRHWCSMPCRVNCFNVNXYMUVGSDAXMISBFWFXSEKMIIQGFQUOCKGZDTGLAFVQKRXFWFFWHJAQKYQVPVBNDPLHWTSIOY");

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
    msg.setTimeStamp(0.054432301093331636);
    msg.setSource(49226U);
    msg.setSourceEntity(213U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.07599888300673463;
    msg.lon = 0.596298260141826;
    msg.z = 0.11572107244129326;
    msg.z_units = 236U;
    msg.radius = 0.5658344261290007;
    msg.duration = 3242U;
    msg.speed = 0.4588210021264777;
    msg.speed_units = 215U;
    msg.custom.assign("WMLUVMTRDTTPVOZWQMGMVZDNJYSUPRXDBWOXOJEHYSNKGOQLXDVSXAIABKSUVRPZHOETKBWZEQPCIZZWLDFNCANKQYWKHB");

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
    msg.setTimeStamp(0.8976970243583396);
    msg.setSource(47581U);
    msg.setSourceEntity(212U);
    msg.setDestination(26723U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.7074172810854344;
    msg.lon = 0.06420111726036781;
    msg.z = 0.86150733636691;
    msg.z_units = 17U;
    msg.radius = 0.8899691874898433;
    msg.duration = 58958U;
    msg.speed = 0.9322127859368718;
    msg.speed_units = 173U;
    msg.custom.assign("URQBLDXAOOLUGGKMTHVVXMEGZJSZPTFDUJ");

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
    msg.setTimeStamp(0.28093437951037414);
    msg.setSource(5897U);
    msg.setSourceEntity(136U);
    msg.setDestination(15358U);
    msg.setDestinationEntity(233U);
    msg.timeout = 21790U;
    msg.flags = 175U;
    msg.lat = 0.17121206875624417;
    msg.lon = 0.6227960095959074;
    msg.start_z = 0.620833072596031;
    msg.start_z_units = 215U;
    msg.end_z = 0.8509140445209646;
    msg.end_z_units = 109U;
    msg.radius = 0.9099259643568759;
    msg.speed = 0.9646226537449794;
    msg.speed_units = 46U;
    msg.custom.assign("NQKWKIQCIUNBYJTDRSYXCDJLVLGZBPKGAYID");

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
    msg.setTimeStamp(0.8389474481288083);
    msg.setSource(50466U);
    msg.setSourceEntity(189U);
    msg.setDestination(11734U);
    msg.setDestinationEntity(145U);
    msg.timeout = 34094U;
    msg.flags = 62U;
    msg.lat = 0.11446522349444843;
    msg.lon = 0.6010681112369267;
    msg.start_z = 0.2672447553606845;
    msg.start_z_units = 132U;
    msg.end_z = 0.2158516812008856;
    msg.end_z_units = 39U;
    msg.radius = 0.8308447779434657;
    msg.speed = 0.1259101340515164;
    msg.speed_units = 181U;
    msg.custom.assign("CWVQZIIAFGIWXJJSUURFBACKOGQNMALYDMAIRNVAJMCYTQRUKPSKLHLODZRAHSRSMUEKLALOKSBPYGQPUEZSPTCHZFPIEQLMOSJXGTFYWTRHFHEGXCMHGEAKKTG");

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
    msg.setTimeStamp(0.09143740642842646);
    msg.setSource(18037U);
    msg.setSourceEntity(52U);
    msg.setDestination(9591U);
    msg.setDestinationEntity(83U);
    msg.timeout = 60083U;
    msg.flags = 194U;
    msg.lat = 0.5838772763562928;
    msg.lon = 0.04282386435140384;
    msg.start_z = 0.021396499064047503;
    msg.start_z_units = 233U;
    msg.end_z = 0.14091748679471816;
    msg.end_z_units = 192U;
    msg.radius = 0.479180738462761;
    msg.speed = 0.9763492832180587;
    msg.speed_units = 200U;
    msg.custom.assign("DRSJNNAAYBKBGNMZKM");

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
    msg.setTimeStamp(0.9733812282760033);
    msg.setSource(63917U);
    msg.setSourceEntity(219U);
    msg.setDestination(6456U);
    msg.setDestinationEntity(80U);
    msg.timeout = 52689U;
    msg.lat = 0.2616277266593322;
    msg.lon = 0.04278693656706145;
    msg.z = 0.5152639167188974;
    msg.z_units = 135U;
    msg.speed = 0.44073376685746335;
    msg.speed_units = 244U;
    msg.custom.assign("PAFSSAWUNGYAPRBROXBFUOTFVQAKYJJSWSYODQQFJLYTNLCGDGTVHELEVZRUCSITREDYNEHNPLHEQDOXCEVIBNSBGSZAKMPOVIJXTYROIMKWYTEQEVMNDTNLSLWLXPWGUVNCBMYPBUWMESJKRO");

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
    msg.setTimeStamp(0.8275958694019335);
    msg.setSource(37298U);
    msg.setSourceEntity(210U);
    msg.setDestination(17984U);
    msg.setDestinationEntity(66U);
    msg.timeout = 39911U;
    msg.lat = 0.7068648063024378;
    msg.lon = 0.5534303162653151;
    msg.z = 0.5501699078065813;
    msg.z_units = 13U;
    msg.speed = 0.29779271455135115;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6386373249588065;
    tmp_msg_0.y = 0.0467187156819473;
    tmp_msg_0.z = 0.741768006008701;
    tmp_msg_0.t = 0.8750742259006469;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XLEVUJDGZRUDWBEPLGDZJFKQKCSSRXOBWLFTVHLSPSBECVKSSJTTONINUWMXCZXOYVEERPASZLLBAKAJXCDIVWRWWGAVJUYWQTRRKQJFIASKHQLYPYGF");

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
    msg.setTimeStamp(0.1200084705321468);
    msg.setSource(20916U);
    msg.setSourceEntity(177U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(203U);
    msg.timeout = 63623U;
    msg.lat = 0.3492521571198154;
    msg.lon = 0.7822789604407818;
    msg.z = 0.49807559901585297;
    msg.z_units = 207U;
    msg.speed = 0.735522780176005;
    msg.speed_units = 77U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.42093710580447974;
    tmp_msg_0.y = 0.6289731381351155;
    tmp_msg_0.z = 0.929199862262667;
    tmp_msg_0.t = 0.6693874014406719;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AWFBXLGGHECONPCNBHTNYQMPLTYVPSUMKBDWRSHBGREZPHQWLFZRONEPMYXOCJJTWXSOYJIWNUQKADALFJFBVBEVRVNYBXARLSADUFVXMWFDCEOZMCAKPTIQCFBGXGMECGXURJWDQQYECFZQM");

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
    msg.setTimeStamp(0.09554518698632364);
    msg.setSource(12660U);
    msg.setSourceEntity(81U);
    msg.setDestination(10645U);
    msg.setDestinationEntity(50U);
    msg.x = 0.7236713808785481;
    msg.y = 0.2226341200617339;
    msg.z = 0.6570677334538209;
    msg.t = 0.9617359258628282;

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
    msg.setTimeStamp(0.6663966228040823);
    msg.setSource(8403U);
    msg.setSourceEntity(152U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(171U);
    msg.x = 0.4784730198271221;
    msg.y = 0.2217729109433636;
    msg.z = 0.2808705593926323;
    msg.t = 0.7506175323078226;

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
    msg.setTimeStamp(0.4785478540129774);
    msg.setSource(7439U);
    msg.setSourceEntity(82U);
    msg.setDestination(8198U);
    msg.setDestinationEntity(131U);
    msg.x = 0.8881490053624492;
    msg.y = 0.07325233637853446;
    msg.z = 0.3288631517704085;
    msg.t = 0.23131986361197887;

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
    msg.setTimeStamp(0.8870306265921836);
    msg.setSource(29002U);
    msg.setSourceEntity(46U);
    msg.setDestination(3529U);
    msg.setDestinationEntity(156U);
    msg.timeout = 13601U;
    msg.name.assign("FUMDIKQQBKICX");
    msg.custom.assign("SKKGNEAIVZVCUJFVJRGDCDHGOOUCQDVGCBC");

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
    msg.setTimeStamp(0.6916201501445447);
    msg.setSource(17838U);
    msg.setSourceEntity(77U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(60U);
    msg.timeout = 17940U;
    msg.name.assign("FXVSWCHXBTNWCNEHGDTYVHOCRUMAIYVVAANOCQWZRPDHISQSQYVUGIENRHTJWPRVZAYFFGMRWNWSBQEVACTOUIJIGXJMQUCAKZZEXRBPODJMPDEZMICPMHZPULNEGIGUELAOBHXQYXHWYFSZBX");
    msg.custom.assign("CVRNBSRRNEDICMXAYNLGUMMDSADBCPDVMGVHMBZLFFTTFZBENSLDCYRZRTZMNDJWWIKFYGQEGUMUHUQJIXHUPQOVXVLUEAPOTKXMPIIWXQOOECVNINFKQKFRHOYTASYXWVPZWHQYHIJPQVOKAZAHLCAEGFAVIXTYDYUJLRIVLASKOBZBNQ");

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
    msg.setTimeStamp(0.9837338948557226);
    msg.setSource(16971U);
    msg.setSourceEntity(219U);
    msg.setDestination(46253U);
    msg.setDestinationEntity(4U);
    msg.timeout = 16446U;
    msg.name.assign("CSMGNPECYNMCLLKWBRUSTBYAEJFQRVIYBNLWEBQDKVPUCHPXFPYOIHKPATWXADQEFXIUZLBSUOBJYGKOQUSIRTWTDBAUTQMTNGVSZMDQKTHPLFWLJOLMRGZZIHGSIFYIEQCJIXYZDOMUV");
    msg.custom.assign("IKSSEVXLSGNCQDEKJQFA");

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
    msg.setTimeStamp(0.8656203221939593);
    msg.setSource(8210U);
    msg.setSourceEntity(209U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.9392282602893457;
    msg.lon = 0.7878399084484629;
    msg.z = 0.9834490187476507;
    msg.z_units = 238U;
    msg.speed = 0.010831879414676893;
    msg.speed_units = 149U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9366482334381158;
    tmp_msg_0.y = 0.4010099284561389;
    tmp_msg_0.z = 0.5772637308629883;
    tmp_msg_0.t = 0.032807198033884766;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 13282U;
    tmp_msg_1.off_x = 0.334827547874332;
    tmp_msg_1.off_y = 0.9433412394729098;
    tmp_msg_1.off_z = 0.8471626511920368;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5952048702423915;
    msg.custom.assign("WQVEDORLMKIZAKOGTLAXSCHMVMKZBHSDUYSZBTYAGBEXCFCFPUBJQPYNQKBZQMZJUJTRALZRKNVRPFXAWPIOBILOFIZSJCOUHKUAGUFTNTVJBXESLROBGEWSYRFKZPUKVWXIIQKNCBEYYSDMJMCFMEXAFCDTQUGXCNNTYTDIGECAXOSHZMCPQOIRWUVNRJLRVQRGJEWPFEDPYDSJTLDNWVZGHHHWGJBEWSQHIPUXYTPH");

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
    msg.setTimeStamp(0.9143542805996999);
    msg.setSource(22129U);
    msg.setSourceEntity(12U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.7308958498328919;
    msg.lon = 0.14908443169425745;
    msg.z = 0.9090514147929297;
    msg.z_units = 238U;
    msg.speed = 0.7300358771768368;
    msg.speed_units = 193U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12642U;
    tmp_msg_0.off_x = 0.17904544655198962;
    tmp_msg_0.off_y = 0.8362597115891987;
    tmp_msg_0.off_z = 0.43956205946895144;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.14199897393307137;
    msg.custom.assign("NDOKXLTKGSQFCWSUWQDAKUFCGQAGZPECLYNAZBMJKNFGFOVESZWVTUYRUSMCMMOMRCYBIKOMRDOVGEZXSCKXTXGEBAHUBVHZTRESIHUXUEWDEPQYSHGDBNPLFBPNPPTIAIWSZSZQTKCWJDTYHVAJMTNZYTFIBXRUJLGHDYLJPFTMJAQACOBQKQEXZZMGXOXIJVLNWQERHVKYVURPWIEJBHFNLLNHRY");

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
    msg.setTimeStamp(0.8471399088102887);
    msg.setSource(28787U);
    msg.setSourceEntity(99U);
    msg.setDestination(40210U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.22304347904494148;
    msg.lon = 0.8959366039355788;
    msg.z = 0.4179438164573618;
    msg.z_units = 130U;
    msg.speed = 0.09202563455948864;
    msg.speed_units = 145U;
    msg.start_time = 0.8390952214525423;
    msg.custom.assign("TGVIRNYYNEGQJYCZZUJBBDBEXSRRDGZJVCTCYFPZEXHNJYOOPHAWHPKXGVSBLMYBBEJZSVGBNMIFWRNUSUDUNSOSPBWALRTLMZWJUUIZXFAFFQFCATXVKDKSOWWQVHCKFCLCKNGMMAALZOFWPXRDPQVHPLKYYNXJIATKGTVGZLQQYLYPMTHUTUWRJHNQSWGOBKQJOLTXAEHIZXARHQMOBJHIROCXMSPUIINAIFDVSEQ");

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
    msg.setTimeStamp(0.3007177885402099);
    msg.setSource(28899U);
    msg.setSourceEntity(227U);
    msg.setDestination(52610U);
    msg.setDestinationEntity(100U);
    msg.vid = 36481U;
    msg.off_x = 0.8081855452660247;
    msg.off_y = 0.6344426487540348;
    msg.off_z = 0.25160132419414283;

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
    msg.setTimeStamp(0.8669420134662197);
    msg.setSource(9270U);
    msg.setSourceEntity(160U);
    msg.setDestination(21868U);
    msg.setDestinationEntity(109U);
    msg.vid = 31751U;
    msg.off_x = 0.881310454167531;
    msg.off_y = 0.30814552729901135;
    msg.off_z = 0.8061424974361389;

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
    msg.setTimeStamp(0.26189141968819996);
    msg.setSource(2019U);
    msg.setSourceEntity(246U);
    msg.setDestination(58414U);
    msg.setDestinationEntity(26U);
    msg.vid = 32679U;
    msg.off_x = 0.2718290318984712;
    msg.off_y = 0.3641859354448971;
    msg.off_z = 0.8427920383546925;

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
    msg.setTimeStamp(0.7316165325245602);
    msg.setSource(65531U);
    msg.setSourceEntity(167U);
    msg.setDestination(9141U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.2973143689145954);
    msg.setSource(9403U);
    msg.setSourceEntity(136U);
    msg.setDestination(44041U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.21989930523654067);
    msg.setSource(58751U);
    msg.setSourceEntity(18U);
    msg.setDestination(15911U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.29078818780912574);
    msg.setSource(18329U);
    msg.setSourceEntity(68U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(174U);
    msg.mid = 17059U;

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
    msg.setTimeStamp(0.7705849943833879);
    msg.setSource(64347U);
    msg.setSourceEntity(217U);
    msg.setDestination(18993U);
    msg.setDestinationEntity(88U);
    msg.mid = 14500U;

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
    msg.setTimeStamp(0.8747044816450833);
    msg.setSource(48414U);
    msg.setSourceEntity(182U);
    msg.setDestination(17423U);
    msg.setDestinationEntity(200U);
    msg.mid = 15512U;

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
    msg.setTimeStamp(0.9065170352221675);
    msg.setSource(38629U);
    msg.setSourceEntity(59U);
    msg.setDestination(8376U);
    msg.setDestinationEntity(15U);
    msg.state = 145U;
    msg.eta = 11463U;
    msg.info.assign("RWVWMJATYEFYKPLFTBC");

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
    msg.setTimeStamp(0.9955967532766709);
    msg.setSource(28418U);
    msg.setSourceEntity(145U);
    msg.setDestination(30634U);
    msg.setDestinationEntity(69U);
    msg.state = 92U;
    msg.eta = 46314U;
    msg.info.assign("HVKSAHMTIDOSDTKKVXWTSKGHAOELZJYNTLCPYNGEQNMDGWHNYQUOPNCXZDYYDFWUSHVQLUKKJLAUPCZTOPQHKBQLOM");

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
    msg.setTimeStamp(0.17458164545615196);
    msg.setSource(29580U);
    msg.setSourceEntity(161U);
    msg.setDestination(10220U);
    msg.setDestinationEntity(133U);
    msg.state = 77U;
    msg.eta = 12702U;
    msg.info.assign("FNRYHGADMVHXIPHHAFDSFLPXSYLYHNVAUVLOOTMOJPBBQUNHHKOPOGOJWLDGBXYEPICXSTFBJQTXDLNRSAEBENOMJBXAWZEBILKMWJVCWZLWVKFDQREXHQDCPGCBAQRINAURPQGUZRT");

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
    msg.setTimeStamp(0.7294374120951083);
    msg.setSource(36566U);
    msg.setSourceEntity(191U);
    msg.setDestination(47042U);
    msg.setDestinationEntity(219U);
    msg.system = 59927U;
    msg.duration = 11056U;
    msg.speed = 0.5327151698900486;
    msg.speed_units = 218U;
    msg.x = 0.8844979598364122;
    msg.y = 0.024119624396703454;
    msg.z = 0.41111460995209537;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.09882536426629407);
    msg.setSource(50251U);
    msg.setSourceEntity(147U);
    msg.setDestination(12143U);
    msg.setDestinationEntity(161U);
    msg.system = 61856U;
    msg.duration = 52483U;
    msg.speed = 0.11816610745056788;
    msg.speed_units = 79U;
    msg.x = 0.08867405008257168;
    msg.y = 0.8421102255324033;
    msg.z = 0.3595444616328045;
    msg.z_units = 116U;

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
    msg.setTimeStamp(0.3594555213784);
    msg.setSource(38295U);
    msg.setSourceEntity(213U);
    msg.setDestination(1720U);
    msg.setDestinationEntity(20U);
    msg.system = 39726U;
    msg.duration = 54107U;
    msg.speed = 0.7464057198373786;
    msg.speed_units = 14U;
    msg.x = 0.23282073866572173;
    msg.y = 0.520271446972023;
    msg.z = 0.8633302120176808;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.47899118858551526);
    msg.setSource(36821U);
    msg.setSourceEntity(183U);
    msg.setDestination(48558U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.13146948552454552;
    msg.lon = 0.5148384096157466;
    msg.speed = 0.3424000361263583;
    msg.speed_units = 56U;
    msg.duration = 24368U;
    msg.sys_a = 16464U;
    msg.sys_b = 39429U;
    msg.move_threshold = 0.41261212058871455;

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
    msg.setTimeStamp(0.7671976168520862);
    msg.setSource(21999U);
    msg.setSourceEntity(169U);
    msg.setDestination(15700U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.48996456351004114;
    msg.lon = 0.16544587809293265;
    msg.speed = 0.9704933503961913;
    msg.speed_units = 208U;
    msg.duration = 28098U;
    msg.sys_a = 45823U;
    msg.sys_b = 42991U;
    msg.move_threshold = 0.27925017756046866;

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
    msg.setTimeStamp(0.6412789120072153);
    msg.setSource(21581U);
    msg.setSourceEntity(26U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.6881180142115954;
    msg.lon = 0.6340555066596923;
    msg.speed = 0.2540354300986606;
    msg.speed_units = 151U;
    msg.duration = 15996U;
    msg.sys_a = 3073U;
    msg.sys_b = 20531U;
    msg.move_threshold = 0.3219274484066442;

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
    msg.setTimeStamp(0.4351422834851215);
    msg.setSource(33689U);
    msg.setSourceEntity(78U);
    msg.setDestination(35978U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.027838602796021017;
    msg.lon = 0.7154552817716209;
    msg.z = 0.16112891176608835;
    msg.z_units = 237U;
    msg.speed = 0.19958029991649473;
    msg.speed_units = 3U;
    msg.custom.assign("LFBEEGVERRXOXNCCGBOUDNZGDWCBNUEFSBFFCPMVPVWXLPYRBKXOQKNTTMGKPFWNLEMMNTHMFBAFUBOJUTJPWKOAJQTSCNSGTMALDNMCXGZZALLIXPIRTIQPHZWSHFRASOQWZJZREUYDZEWYVQAOMBYKXYVGWTRQDIVJUQLGBBEXWFZVHLYRUDUINPKHVIQTEYYCRTVKDSQCDSMKYXHIEJLUJJMRS");

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
    msg.setTimeStamp(0.16634462375715142);
    msg.setSource(1682U);
    msg.setSourceEntity(58U);
    msg.setDestination(61537U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.6062504108922834;
    msg.lon = 0.770948661470621;
    msg.z = 0.7819035592722191;
    msg.z_units = 114U;
    msg.speed = 0.4785788256510445;
    msg.speed_units = 116U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.19248112886811497;
    tmp_msg_0.lon = 0.3528365632814733;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QSPHXMFQAOLLYBYHLGJNAXGAMMLSGOURECVRMIZVXNKJXCDNFSODSUOYGBYKDSXWEVZQWCRYXAYARLSWOXZNMZJTEPQYFFQ");

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
    msg.setTimeStamp(0.6771237861621695);
    msg.setSource(44908U);
    msg.setSourceEntity(252U);
    msg.setDestination(20020U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.47245589765584106;
    msg.lon = 0.6589757441322978;
    msg.z = 0.2071513752942462;
    msg.z_units = 98U;
    msg.speed = 0.4966157296138364;
    msg.speed_units = 202U;
    msg.custom.assign("DHXSYWQTTHZYOAPVXVYPPJIJWPLSEUZMCG");

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
    msg.setTimeStamp(0.21811570439675187);
    msg.setSource(11367U);
    msg.setSourceEntity(230U);
    msg.setDestination(54838U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.7264934950198989;
    msg.lon = 0.0013224685740936826;

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
    msg.setTimeStamp(0.35676383947896106);
    msg.setSource(3191U);
    msg.setSourceEntity(211U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.6204276479864306;
    msg.lon = 0.126880111726557;

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
    msg.setTimeStamp(0.3707854337883222);
    msg.setSource(13180U);
    msg.setSourceEntity(98U);
    msg.setDestination(24200U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.45456856483430774;
    msg.lon = 0.23102802479395468;

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
    msg.setTimeStamp(0.2830958342958707);
    msg.setSource(10234U);
    msg.setSourceEntity(123U);
    msg.setDestination(32606U);
    msg.setDestinationEntity(68U);
    msg.timeout = 63555U;
    msg.lat = 0.9750612151226191;
    msg.lon = 0.9983292235491665;
    msg.z = 0.6442733436907941;
    msg.z_units = 75U;
    msg.pitch = 0.6292904460579523;
    msg.amplitude = 0.6455431624583983;
    msg.duration = 23008U;
    msg.speed = 0.13262903251090008;
    msg.speed_units = 101U;
    msg.radius = 0.5969327068921487;
    msg.direction = 126U;
    msg.custom.assign("YQQBWHJLAXTKRCEPQKXMVQYQCANWYGXKPRKGHSZOPUDFVTYZRFVUGBVTCVXRIDLBXLOAJNNEGTAUCIDOBDIEMZNQEYDVMKGTVUJFKCJRUJNDKXHLLIMMWBMEWGVTZHFNJULAEZSLOHXHWJFTFAVUQKBJCPBSSNOAKCOYAGIGTELGXIMSIPHWRPHEAKZRZWUCDDIFNWOZEBXMCHQZFIVUOYOAXCPQJSYFSRUTH");

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
    msg.setTimeStamp(0.7179497703588585);
    msg.setSource(34162U);
    msg.setSourceEntity(64U);
    msg.setDestination(39901U);
    msg.setDestinationEntity(157U);
    msg.timeout = 35681U;
    msg.lat = 0.9883410138212321;
    msg.lon = 0.4701008016713035;
    msg.z = 0.08018342104787168;
    msg.z_units = 82U;
    msg.pitch = 0.7777280010815213;
    msg.amplitude = 0.06127114983551707;
    msg.duration = 16173U;
    msg.speed = 0.30442091439933316;
    msg.speed_units = 228U;
    msg.radius = 0.5931224257139622;
    msg.direction = 247U;
    msg.custom.assign("RAVQYJKFSHRPHKXVASMSHNBBMVPJUHAXMIKAYYLENAZGWNOTSSCRXBDSYGIP");

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
    msg.setTimeStamp(0.4090334197581489);
    msg.setSource(10115U);
    msg.setSourceEntity(219U);
    msg.setDestination(23706U);
    msg.setDestinationEntity(85U);
    msg.timeout = 21003U;
    msg.lat = 0.7041475858394757;
    msg.lon = 0.22812707033179191;
    msg.z = 0.5797470586266076;
    msg.z_units = 94U;
    msg.pitch = 0.18118901553001443;
    msg.amplitude = 0.9773733665943914;
    msg.duration = 58551U;
    msg.speed = 0.32540426489360574;
    msg.speed_units = 186U;
    msg.radius = 0.9149044171335752;
    msg.direction = 69U;
    msg.custom.assign("AMRDLTAZCQKADCWJZQCFEWMFOFMGIMOOITCUHLEMNJDQTYZVLGSGBYXIPFSWHTHBGPRQCIQWADMRFTZQCKBMOAKAAJENUVWSBXNDVSROJCYSCYXHZEFU");

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
    msg.setTimeStamp(0.8214251236129654);
    msg.setSource(31530U);
    msg.setSourceEntity(125U);
    msg.setDestination(55465U);
    msg.setDestinationEntity(129U);
    msg.formation_name.assign("BYGDCDKPIKBYDDRMHWJAQCQGZBXLSFFGFMOEXYAOZBMIPKVKNSUTLMOVKDZKBOWNYHWULZOMASYHLAHWDFHTWSCYVSXQDTEWOXPEKJJSUNYONNNJZORALPBERAKXTPIVETIRCDELQLOMBGKKNQWACXCXELGSJJVXWW");
    msg.reference_frame = 127U;
    msg.custom.assign("OIQVRPCOTPGPZLMTDAPQEQUCFBVHPBBKOQEXHJCYISKQQZIWTXMGUBOXHPVMNXURWZEVGRCUDMNWFULFABCLELZMDHIYVRQGQNEJSTBGDQSKXGYFKJYVTTNLBFWOUEEJHNPKVRTHZKSPWWNYFUSVUQSYTOALAHJVSGA");

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
    msg.setTimeStamp(0.08668371673675834);
    msg.setSource(51576U);
    msg.setSourceEntity(31U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("SLMZHUNIBQYPFVLWQRVKCNZONDMPLGZTJBPVZZAJCVYXZIFDSQ");
    msg.reference_frame = 93U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43204U;
    tmp_msg_0.off_x = 0.6352243574745525;
    tmp_msg_0.off_y = 0.9052375695240312;
    tmp_msg_0.off_z = 0.7310337858298488;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XKIDFDSMXAULMANULJGLPZROSTBMDWMMRCYPSBBHYXIQJOLNXBYWOSJVEEWFRSK");

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
    msg.setTimeStamp(0.7589609063456421);
    msg.setSource(2736U);
    msg.setSourceEntity(100U);
    msg.setDestination(2362U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("THPALGCMIEHACVAYZHAYTIELEHNRDZMEGMIWFYKHRMYLQODUKCOLTACWBNMTQGZQXPZYIEHQKWRXPOBWQROOAUXQTMHCPSKSBDQUDWOPZXXRUKXVYNIVKWOJRJEBFLUCJRNFZRBPTEMGUJHKFZRDBNJWFCUWGPDWTNJADNPNYSPOKFLWYQIRBDIXTSNULJSUNGSFCTQKILMGXLDIXLVJSBCVAOJJCMGHZKHTAIFASGQDGVZFSBEOBZEPVY");
    msg.reference_frame = 237U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55009U;
    tmp_msg_0.off_x = 0.9846179092009579;
    tmp_msg_0.off_y = 0.7732324774614544;
    tmp_msg_0.off_z = 0.2878220598285951;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FOGYJHSFRWCLPIUAMHBYQNMEWUENAHVAPEQTUBETELOBJJJPPZILBJRONSWEHQSCADRXKRSMWZIYACVLFMDNJDLRXETCLAFXNQGTXXIVAFXDMRXODYMBLL");

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
    msg.setTimeStamp(0.4975475306132503);
    msg.setSource(14952U);
    msg.setSourceEntity(254U);
    msg.setDestination(35795U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("TQTEMUFLJOLEZFBEULHFZIMPOFLPGGSYPTWHJQVKGREXRWXNPMAFAZJDBMCSGTJEUPMHLKOOJOIAYOZSIWVRHRREADTAIGBDMSUYDXHEDZPJUVYXCKXGGQWWJQGSRCKEFRWBSYJKNWOBXYJKDGHVQSNICZLSYOLSRBGZVLUDAQWHFYRXBXVOQBFVVUCLEPTCLICMFNNZHKCUMHNMVVWPOZWSXBPITXMDFUNI");
    msg.formation_name.assign("LCBBYCRVMQDSGNHWPVICCGJPULSZPWGULFXGNNOCLHIPDFOEYNIWBCSUYPZWMOKVVZULMXMRKFBZQJBONSQJTJRNASXJBXQYSFAQGAKFEYATYDEDHREZWCWTILFHTVET");
    msg.plan_id.assign("YAEIGRXMJI");
    msg.description.assign("ZYYZLHCNDRLTBLSYMABTWHQVQAPZG");
    msg.leader_speed = 0.8197133069873676;
    msg.leader_bank_lim = 0.24880336278927973;
    msg.pos_sim_err_lim = 0.31740177532043423;
    msg.pos_sim_err_wrn = 0.1331686643158777;
    msg.pos_sim_err_timeout = 15582U;
    msg.converg_max = 0.610073886063155;
    msg.converg_timeout = 32845U;
    msg.comms_timeout = 10834U;
    msg.turb_lim = 0.44179554669952836;
    msg.custom.assign("HCLUMQBWFPTCGYBFPTDMIRTNFZCXAGQMZINTYGHYWZTBEAOJRYGCKEPMDJBFSWYSKSLMHRPGCWOOAWLKSGSQBEYOSYMWNMGKHJGJCMMSXEIZVDIDXHSQBCBLIUDJOQIKCZHDOTLDTDJOHURLIPKXVRXPTUSNWFILUURXOGKZVRNPHXVQUNEVFAQTANDGLUAPLEKXV");

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
    msg.setTimeStamp(0.5629610025286779);
    msg.setSource(61591U);
    msg.setSourceEntity(24U);
    msg.setDestination(52123U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("ESYSADZENCQEDNKBKUMRCJABMDBKPEWIEQTIMTHXYZOVNEIZDLPFXCNAJWMIVAVKTLYGHKSPQGGPCLHB");
    msg.formation_name.assign("UXUZPBQYYVDDYQEPJYVXMRLJIHMDBLYUYEEGZUFSGRHBORHKUZGKXBNSCGLVIPGASOXMNTPGILIBWQHWIHUJPOFSJGIVXKQAYLCGAPFVDBBCJNARWPPOMBRHDZARTCWEEEMHOKWQQJSHVHJ");
    msg.plan_id.assign("ECUSNHUMLCE");
    msg.description.assign("WEJALSNNKHAVWOOQFAESRERALDUWNPEKLXRCCNZYJAUDZYNUIZORVULZXFTJQPJBBEBUYAVIISCKVGQLNSQFQKQEUGTFPUWTXOLYBHTDUXEKCMXFILIYCLJRCJTAMZRCGGMHOQORBTCPAGPBIIZTYYVZHVMDEPDYMCSUJS");
    msg.leader_speed = 0.37250488978864305;
    msg.leader_bank_lim = 0.8419563732057064;
    msg.pos_sim_err_lim = 0.16384019222082213;
    msg.pos_sim_err_wrn = 0.4405028856097678;
    msg.pos_sim_err_timeout = 13408U;
    msg.converg_max = 0.9856109673174058;
    msg.converg_timeout = 63655U;
    msg.comms_timeout = 30841U;
    msg.turb_lim = 0.4256674642162458;
    msg.custom.assign("OORABRUZRAFTPOCLEXUCYWUDDWJFHNWDLYIFLHMYCQKTCPLYZLTMKWSEWBOWQVZRJHMHMPOSFONRNEYXIAUSVOIDQIAVTQBNENSEKAGLAWSIESRYZVGMANPFGQLIMNZQYBPJWOZCMHIBPEFBER");

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
    msg.setTimeStamp(0.7867684570810081);
    msg.setSource(3181U);
    msg.setSourceEntity(5U);
    msg.setDestination(17074U);
    msg.setDestinationEntity(144U);
    msg.group_name.assign("UUBKLTUOVWRHMPZZJLWYVIEHBLKQERPDTISVCRDOMZPGFTMXDGDCNJTWJAT");
    msg.formation_name.assign("KPMNIHACZPHXQXLOALUVESYYPUGCXJUVXRWJRBKSSGQFSHISBVIYWZCRQBNIEJCZGRWDFZOPOEBFXOTIAEHNTZPIKDHNRUVUQXIVYJRVALKK");
    msg.plan_id.assign("OKYMQIBOKTKCGHOLDJFGEOPFIOSEOTSMVXWHWJODGFYKVNCBIRWVWMMAEFISIHGANAZRBTFPYQRYMLXERQUMGAEVGZCVTDMXRGWEPZUQCDHUPYXNGOFRDKIKLTHZEPXWSAXOFDBLJUUESKPNCTYJGYRWJXTHQXZQZIPNHSNZBQFOKNJV");
    msg.description.assign("QFFOVPCIUAZODQBXHCXZAKORYLPNBHJTSJOTKGUELDXLSYZMYMLLLANXEHWYAWBTCFPDHCPWFNAYQHFTBSMNPPKUIMUENRWFJQRVTEAGIHVZONXKGMLMWPIAPEUODAFEJCDLEIYTFOJUVVWADZHJCDWDTTNUCRKKZPQSVDGKICLSWHBANRYPDLQSONFYZFRRIJGERJYNCXH");
    msg.leader_speed = 0.06819873477926663;
    msg.leader_bank_lim = 0.35022390792499636;
    msg.pos_sim_err_lim = 0.19758962553048354;
    msg.pos_sim_err_wrn = 0.4803366498435888;
    msg.pos_sim_err_timeout = 48614U;
    msg.converg_max = 0.9807769194271321;
    msg.converg_timeout = 20094U;
    msg.comms_timeout = 56942U;
    msg.turb_lim = 0.4703578185937154;
    msg.custom.assign("YNNIDRYSNTQZQBMCVDUHCASZWBCZFMSOFPCVIVOXTVELUTRMHYSEZSDDQNWPSWMQLHAKDHEVGOLRWXBTYLGBYXIXUKJDWUEHMGWZAGJERYGDEAQRJOMHFHLKMITXUNAXHPQVFUJNGTSLYMNOPRVSPFLFBKUWIXXQPAPOGRJRTBQMOKPJLIGUMBBSCDUFFCAITOJAORZYLGEWVFJKKSYLAERGCCBOUXIETNWZ");

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
    msg.setTimeStamp(0.08675613830215367);
    msg.setSource(4057U);
    msg.setSourceEntity(119U);
    msg.setDestination(45654U);
    msg.setDestinationEntity(87U);
    msg.control_src = 60444U;
    msg.control_ent = 217U;
    msg.timeout = 0.21626593584031317;
    msg.loiter_radius = 0.7751095253920627;
    msg.altitude_interval = 0.04447900685488315;

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
    msg.setTimeStamp(0.8769109647879383);
    msg.setSource(41110U);
    msg.setSourceEntity(254U);
    msg.setDestination(13237U);
    msg.setDestinationEntity(223U);
    msg.control_src = 42015U;
    msg.control_ent = 159U;
    msg.timeout = 0.3766355090511311;
    msg.loiter_radius = 0.8393608527855122;
    msg.altitude_interval = 0.7168635981971766;

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
    msg.setTimeStamp(0.5961124873744332);
    msg.setSource(20200U);
    msg.setSourceEntity(120U);
    msg.setDestination(28916U);
    msg.setDestinationEntity(155U);
    msg.control_src = 61006U;
    msg.control_ent = 238U;
    msg.timeout = 0.33803459924046864;
    msg.loiter_radius = 0.23983047351494846;
    msg.altitude_interval = 0.44467600478318803;

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
    msg.setTimeStamp(0.4135696938955862);
    msg.setSource(17695U);
    msg.setSourceEntity(77U);
    msg.setDestination(35396U);
    msg.setDestinationEntity(71U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.606435255132984;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9421832808519347;
    tmp_msg_1.z_units = 40U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7945831335807871;
    msg.lon = 0.7268513201073679;
    msg.radius = 0.3097041347515693;

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
    msg.setTimeStamp(0.6345594322606689);
    msg.setSource(33933U);
    msg.setSourceEntity(140U);
    msg.setDestination(48767U);
    msg.setDestinationEntity(22U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2200469622308734;
    tmp_msg_0.speed_units = 65U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.296478774834817;
    tmp_msg_1.z_units = 180U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.20988230397280816;
    msg.lon = 0.02588730434231279;
    msg.radius = 0.5201287848587963;

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
    msg.setTimeStamp(0.6526976091474737);
    msg.setSource(29550U);
    msg.setSourceEntity(175U);
    msg.setDestination(62037U);
    msg.setDestinationEntity(126U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20776086429531515;
    tmp_msg_0.speed_units = 55U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.183284750923698;
    tmp_msg_1.z_units = 214U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2776948393147961;
    msg.lon = 0.8234530061484648;
    msg.radius = 0.46885439465319445;

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
    msg.setTimeStamp(0.08463700969584642);
    msg.setSource(62313U);
    msg.setSourceEntity(95U);
    msg.setDestination(20368U);
    msg.setDestinationEntity(181U);
    msg.control_src = 19281U;
    msg.control_ent = 138U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 206U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.90559866894606;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4153215445493832;
    tmp_tmp_msg_0_1.z_units = 46U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4417100798515916;
    tmp_msg_0.lon = 0.27005870546127553;
    tmp_msg_0.radius = 0.1053646204053642;
    msg.reference.set(tmp_msg_0);
    msg.state = 142U;
    msg.proximity = 158U;

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
    msg.setTimeStamp(0.7689914959676016);
    msg.setSource(11184U);
    msg.setSourceEntity(90U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(126U);
    msg.control_src = 24257U;
    msg.control_ent = 182U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 63U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4729024887342491;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.644199757145596;
    tmp_tmp_msg_0_1.z_units = 66U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.551273804364101;
    tmp_msg_0.lon = 0.9601231037332559;
    tmp_msg_0.radius = 0.029927864965890505;
    msg.reference.set(tmp_msg_0);
    msg.state = 192U;
    msg.proximity = 64U;

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
    msg.setTimeStamp(0.13926176615428942);
    msg.setSource(27310U);
    msg.setSourceEntity(237U);
    msg.setDestination(43199U);
    msg.setDestinationEntity(184U);
    msg.control_src = 21592U;
    msg.control_ent = 6U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 203U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7547765859938205;
    tmp_tmp_msg_0_0.speed_units = 83U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9333649618585205;
    tmp_tmp_msg_0_1.z_units = 244U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.31393637202569236;
    tmp_msg_0.lon = 0.7626068855202671;
    tmp_msg_0.radius = 0.8449703025961924;
    msg.reference.set(tmp_msg_0);
    msg.state = 67U;
    msg.proximity = 200U;

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
    msg.setTimeStamp(0.8939473331185441);
    msg.setSource(58430U);
    msg.setSourceEntity(25U);
    msg.setDestination(20609U);
    msg.setDestinationEntity(117U);
    msg.ax_cmd = 0.7188957987777496;
    msg.ay_cmd = 0.2501015423434645;
    msg.az_cmd = 0.08257097388437495;
    msg.ax_des = 0.7174702532352363;
    msg.ay_des = 0.23990614066438787;
    msg.az_des = 0.7695838489440114;
    msg.virt_err_x = 0.26344553118069125;
    msg.virt_err_y = 0.20892385393226232;
    msg.virt_err_z = 0.2427244848671608;
    msg.surf_fdbk_x = 0.7891786080437987;
    msg.surf_fdbk_y = 0.05075362485365342;
    msg.surf_fdbk_z = 0.9274884247283264;
    msg.surf_unkn_x = 0.6827041929604362;
    msg.surf_unkn_y = 0.03406179853829583;
    msg.surf_unkn_z = 0.5481012194251871;
    msg.ss_x = 0.823384324536346;
    msg.ss_y = 0.9860795584557385;
    msg.ss_z = 0.8089759650248896;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WONWJUZPZNHYTFPSZPDIJZZUJLWJLVLKMOUGHCTYXQENIHYYVMGODJSARFVSJBBVQQWLVMEMAGOQHIQMZC");
    tmp_msg_0.dist = 0.31589330439619157;
    tmp_msg_0.err = 0.7110103913766167;
    tmp_msg_0.ctrl_imp = 0.9790281528176665;
    tmp_msg_0.rel_dir_x = 0.031412501888246624;
    tmp_msg_0.rel_dir_y = 0.28443135044514145;
    tmp_msg_0.rel_dir_z = 0.21672757800330267;
    tmp_msg_0.err_x = 0.1629243596468375;
    tmp_msg_0.err_y = 0.5521397779450942;
    tmp_msg_0.err_z = 0.0021819999699054238;
    tmp_msg_0.rf_err_x = 0.3320058777232322;
    tmp_msg_0.rf_err_y = 0.33030828545255253;
    tmp_msg_0.rf_err_z = 0.03567485163301454;
    tmp_msg_0.rf_err_vx = 0.8975391895271343;
    tmp_msg_0.rf_err_vy = 0.9742232200573663;
    tmp_msg_0.rf_err_vz = 0.30262847631842915;
    tmp_msg_0.ss_x = 0.0033744709595647793;
    tmp_msg_0.ss_y = 0.2703841792334656;
    tmp_msg_0.ss_z = 0.010520073909441319;
    tmp_msg_0.virt_err_x = 0.97902691625414;
    tmp_msg_0.virt_err_y = 0.030561762648115498;
    tmp_msg_0.virt_err_z = 0.9211218577619287;
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
    msg.setTimeStamp(0.9211694951335838);
    msg.setSource(23448U);
    msg.setSourceEntity(152U);
    msg.setDestination(7346U);
    msg.setDestinationEntity(224U);
    msg.ax_cmd = 0.3388096798129365;
    msg.ay_cmd = 0.25004813933565595;
    msg.az_cmd = 0.3312882540360448;
    msg.ax_des = 0.13582351417325467;
    msg.ay_des = 0.027844154567663537;
    msg.az_des = 0.05030046684105516;
    msg.virt_err_x = 0.916545096409382;
    msg.virt_err_y = 0.036685345429727456;
    msg.virt_err_z = 0.15449748299229404;
    msg.surf_fdbk_x = 0.49110368712677654;
    msg.surf_fdbk_y = 0.6177776588025155;
    msg.surf_fdbk_z = 0.704023491981653;
    msg.surf_unkn_x = 0.5094675295928622;
    msg.surf_unkn_y = 0.6253285849820099;
    msg.surf_unkn_z = 0.4671634838199066;
    msg.ss_x = 0.30656976219034526;
    msg.ss_y = 0.6067969723761332;
    msg.ss_z = 0.6941933081175334;

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
    msg.setTimeStamp(0.9063698143739195);
    msg.setSource(65156U);
    msg.setSourceEntity(177U);
    msg.setDestination(60028U);
    msg.setDestinationEntity(132U);
    msg.ax_cmd = 0.8131957466128698;
    msg.ay_cmd = 0.6847695413467616;
    msg.az_cmd = 0.953147997170401;
    msg.ax_des = 0.9579681459741035;
    msg.ay_des = 0.830245430085001;
    msg.az_des = 0.6352819339060215;
    msg.virt_err_x = 0.9955301189494845;
    msg.virt_err_y = 0.40082050657807533;
    msg.virt_err_z = 0.29905981592429975;
    msg.surf_fdbk_x = 0.25332474944432404;
    msg.surf_fdbk_y = 0.6302799784082742;
    msg.surf_fdbk_z = 0.2386674277849673;
    msg.surf_unkn_x = 0.7843502727265623;
    msg.surf_unkn_y = 0.0805445762950241;
    msg.surf_unkn_z = 0.5762565573209821;
    msg.ss_x = 0.0008289091357063239;
    msg.ss_y = 0.1855555653462092;
    msg.ss_z = 0.4298411690900843;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QZQXBJIIKPONJCYDRGRQPFCERUCSUJVUGDKBMSAEFMYZMPWJPBINOOXJHDQUYFSWOUGILRGMTJOIBSHHLSQFGBNUYNMZTEYOGZSULHKRTCLYANIKXVRWMJKODQLMKZHJCFMDVGGBTTQWM");
    tmp_msg_0.dist = 0.28138306290126125;
    tmp_msg_0.err = 0.9664186856037984;
    tmp_msg_0.ctrl_imp = 0.27461687053197936;
    tmp_msg_0.rel_dir_x = 0.9817587951147286;
    tmp_msg_0.rel_dir_y = 0.05404391606231518;
    tmp_msg_0.rel_dir_z = 0.327704446960315;
    tmp_msg_0.err_x = 0.7124541476862755;
    tmp_msg_0.err_y = 0.7663521557591655;
    tmp_msg_0.err_z = 0.5013357225964497;
    tmp_msg_0.rf_err_x = 0.4648965847574227;
    tmp_msg_0.rf_err_y = 0.35106469757052705;
    tmp_msg_0.rf_err_z = 0.6633276138236628;
    tmp_msg_0.rf_err_vx = 0.5979245342978413;
    tmp_msg_0.rf_err_vy = 0.5197789927060398;
    tmp_msg_0.rf_err_vz = 0.47612484042876035;
    tmp_msg_0.ss_x = 0.5563095534954684;
    tmp_msg_0.ss_y = 0.15162081652792514;
    tmp_msg_0.ss_z = 0.025743225411045234;
    tmp_msg_0.virt_err_x = 0.615807893756973;
    tmp_msg_0.virt_err_y = 0.7881774860332211;
    tmp_msg_0.virt_err_z = 0.3207102734641887;
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
    msg.setTimeStamp(0.4631155788242779);
    msg.setSource(27888U);
    msg.setSourceEntity(54U);
    msg.setDestination(6919U);
    msg.setDestinationEntity(161U);
    msg.s_id.assign("YHZMERJHIZSROXFLVBPFOAQBRLMWGHEOWNPNPAXOCUFGIQJIXJQTCGCCBCYICYASTJJJUCOKWSLWDQNDUEVPNHBONQEQGQDQGECHAUAAERCSLSWMOYFRYBTAFZDBWVKFBPZYBADNIZVNFXSGVQKLIXKRKJOVWEUELAHWRZUBLXDHMDEGMJTVIRIMSWMVKTZMXJSNNXUKPKWTKNPUYCXUZTBSTRRVUGYM");
    msg.dist = 0.8360920569624002;
    msg.err = 0.03252800492342367;
    msg.ctrl_imp = 0.3941811602553955;
    msg.rel_dir_x = 0.7616718420825851;
    msg.rel_dir_y = 0.24636243524128298;
    msg.rel_dir_z = 0.9372677452335393;
    msg.err_x = 0.7392498816541445;
    msg.err_y = 0.5954809613539663;
    msg.err_z = 0.4787422249285399;
    msg.rf_err_x = 0.33881849636472317;
    msg.rf_err_y = 0.14743522249498242;
    msg.rf_err_z = 0.22110263587426815;
    msg.rf_err_vx = 0.051624917415333815;
    msg.rf_err_vy = 0.3403952059474703;
    msg.rf_err_vz = 0.6588606250239742;
    msg.ss_x = 0.22896018104048532;
    msg.ss_y = 0.3256629301608074;
    msg.ss_z = 0.8041043582355558;
    msg.virt_err_x = 0.915603175564134;
    msg.virt_err_y = 0.4456068800322679;
    msg.virt_err_z = 0.7878869488371848;

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
    msg.setTimeStamp(0.27667002315254674);
    msg.setSource(51346U);
    msg.setSourceEntity(56U);
    msg.setDestination(24886U);
    msg.setDestinationEntity(140U);
    msg.s_id.assign("QMNTYSWUONPESWXONPIMXGDEAIZTOXLILNYOQQTVXALCWYVAWVBGCJIMQWEG");
    msg.dist = 0.9199707764474367;
    msg.err = 0.5854309340006444;
    msg.ctrl_imp = 0.529081000451272;
    msg.rel_dir_x = 0.744016454343283;
    msg.rel_dir_y = 0.47082845013358754;
    msg.rel_dir_z = 0.09313098566693456;
    msg.err_x = 0.05065475353992088;
    msg.err_y = 0.5243086958563986;
    msg.err_z = 0.5494668775744557;
    msg.rf_err_x = 0.6658678319454853;
    msg.rf_err_y = 0.09670540836392594;
    msg.rf_err_z = 0.7625917893808175;
    msg.rf_err_vx = 0.12061908153089484;
    msg.rf_err_vy = 0.14630425146263715;
    msg.rf_err_vz = 0.5922103347457346;
    msg.ss_x = 0.6659319728146541;
    msg.ss_y = 0.4824374457876123;
    msg.ss_z = 0.744359193629871;
    msg.virt_err_x = 0.27410575771294354;
    msg.virt_err_y = 0.16443186198693172;
    msg.virt_err_z = 0.2342201753464106;

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
    msg.setTimeStamp(0.9710741000034847);
    msg.setSource(34355U);
    msg.setSourceEntity(77U);
    msg.setDestination(46721U);
    msg.setDestinationEntity(171U);
    msg.s_id.assign("OKIPIEMEPYMQTPWAAAKVSTLFWNJSPBJMFAAXYLFOBUOQRL");
    msg.dist = 0.6594797585345176;
    msg.err = 0.35083049533276633;
    msg.ctrl_imp = 0.5102659840468935;
    msg.rel_dir_x = 0.9631086197407692;
    msg.rel_dir_y = 0.5317643065170212;
    msg.rel_dir_z = 0.22338933122007132;
    msg.err_x = 0.9477396697546406;
    msg.err_y = 0.4921885017888069;
    msg.err_z = 0.1597736428935833;
    msg.rf_err_x = 0.8017784330720967;
    msg.rf_err_y = 0.13779777263354676;
    msg.rf_err_z = 0.1430088055086448;
    msg.rf_err_vx = 0.8494276699878859;
    msg.rf_err_vy = 0.1983245639366975;
    msg.rf_err_vz = 0.9180114848699338;
    msg.ss_x = 0.5922255507585492;
    msg.ss_y = 0.3399323102181231;
    msg.ss_z = 0.4493909322824229;
    msg.virt_err_x = 0.23444485398079518;
    msg.virt_err_y = 0.5546810761854494;
    msg.virt_err_z = 0.48175951659172134;

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
    msg.setTimeStamp(0.04848114510673285);
    msg.setSource(14771U);
    msg.setSourceEntity(145U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(227U);
    msg.timeout = 48429U;
    msg.rpm = 0.9612920238118139;
    msg.direction = 94U;
    msg.custom.assign("FUFUYFZNARMULZH");

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
    msg.setTimeStamp(0.7204917777626736);
    msg.setSource(22972U);
    msg.setSourceEntity(204U);
    msg.setDestination(12524U);
    msg.setDestinationEntity(250U);
    msg.timeout = 43867U;
    msg.rpm = 0.2365449233625646;
    msg.direction = 91U;
    msg.custom.assign("JPCBAWMSZDFMBKWCJKEDDCDDUHVXNJVCKOZJXHEZEQEXLRZKHGQTQPCHJVAQNODASIJRPZSFTROWEOKFYMYWALZSHUUGQVAFKPKFVDSTUNY");

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
    msg.setTimeStamp(0.8686594676138407);
    msg.setSource(795U);
    msg.setSourceEntity(124U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(93U);
    msg.timeout = 52969U;
    msg.rpm = 0.6437020280204583;
    msg.direction = 82U;
    msg.custom.assign("WLTRRCUNCNFFOUGZHPYTHRQKDGFAHOSLZEZHMHMEGUJFKYXPRLNYAKAWSKIFZVGAQRDWHILBECFWS");

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
    msg.setTimeStamp(0.2920239804814152);
    msg.setSource(53083U);
    msg.setSourceEntity(118U);
    msg.setDestination(17873U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("VLPDRFSHYDDUWASMSFPZDQOLMTFAUBGSCVBMZUNALBFUFXQHOSEDYLQACICSPZHIBTETGZVMEHGNJDJAQXXMBKBAQIVCHJJOYEHVHZPLGTEJKVTLCGIKBNSEQZRHGRVPNUKYCVSIDRZWWUSFPWQGIMFBAKENIKMYVERWCCLOJTZIUXDHFDXCQOXNOLLJXDUEWYSTNYKXRFLRBWRP");
    msg.type = 163U;
    msg.op = 220U;
    msg.group_name.assign("JFPENKOYCULSQZVJEUGANLNASYZZNBOEGIVLVQYAKDVHXDSAJRSOABJYWIGTJYWKXHOAUMCLRFXGPMMHKIBWXTTWWCDELIOSZDLDMTXR");
    msg.plan_id.assign("OGQTFXMDDEIKXYOWSGNQWIUHUWYEMCVMQCRBVFYPTHGVAFZBKQKJJGUPERQDJWAWAYHDKWCOHNMZXDYX");
    msg.description.assign("PLSLMJTZVDYTTLVDZZHHOJVKXSNVESCPWFJGAKQQMWGJRVYMMQ");
    msg.reference_frame = 169U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62185U;
    tmp_msg_0.off_x = 0.5864799756089322;
    tmp_msg_0.off_y = 0.9413225236528172;
    tmp_msg_0.off_z = 0.9728982839702425;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6093414282719171;
    msg.leader_speed_min = 0.6048201590016444;
    msg.leader_speed_max = 0.6752845460295236;
    msg.leader_alt_min = 0.6587687734968569;
    msg.leader_alt_max = 0.5728599530819735;
    msg.pos_sim_err_lim = 0.9082020931787447;
    msg.pos_sim_err_wrn = 0.11658641793303537;
    msg.pos_sim_err_timeout = 45103U;
    msg.converg_max = 0.9796802578827193;
    msg.converg_timeout = 5353U;
    msg.comms_timeout = 35475U;
    msg.turb_lim = 0.06253513756019535;
    msg.custom.assign("LYHTETMZVTFEAHJRKDSIKKQZNHMBDMIIRCOEXDAHNVGQYITLIEAPQAFPKUNDQBXKLTPHJKNQOHUGWRUGOCWDPLLMJTGC");

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
    msg.setTimeStamp(0.793900350024953);
    msg.setSource(30242U);
    msg.setSourceEntity(158U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(242U);
    msg.formation_name.assign("XBVVMSSKJWKSODAUMZMSVEFSGXRJWDANZHQFXKFVRNGZIOMOFDZDDQQPTYBWEXHJKWHNOKBIPOYYLMOLBJUOCPCMHGEIBDUFPSEQRYJBTLIBNLANQDBIEQPRAOTTMETNNURGUPGCFHQFYWSPAYHUZKRBHCJRZODJLZPTAXULICKGKVSCEXPWFZAUMDEQHI");
    msg.type = 91U;
    msg.op = 46U;
    msg.group_name.assign("OLQTKECYBDRFIXGZAODZLCBXRMZRMRVTWOSHVWKCRUQLGDNCCAECHWIMJSTJQZXFUWAYANZGKUSZYITJSNEGPODGJPBWFCTILIYJFPORMHDQKHBVWOPGQBWPFYGOUMPEUVXTIJOZBKD");
    msg.plan_id.assign("JNVQCKMYELYGPDRRUIPVKOOPNZXNXDFLPDPUZJLCPKLMUJIKSIBSKMHCHQXNMWBVUWENHOCMLIWXHLFUZULATAACHYYBYTFJANZQIGGPHNSFEJX");
    msg.description.assign("POCEJVUYLMIUTNPZUDZYJPQGJBKTJKYANABJRHAGFBEXQIAGWSZTBFTHIVEIPIKWO");
    msg.reference_frame = 238U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53792U;
    tmp_msg_0.off_x = 0.4897297715132988;
    tmp_msg_0.off_y = 0.2875695581689337;
    tmp_msg_0.off_z = 0.9225932969476144;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6759599004372193;
    msg.leader_speed_min = 0.45919431939558797;
    msg.leader_speed_max = 0.4988325544311504;
    msg.leader_alt_min = 0.29279777967373155;
    msg.leader_alt_max = 0.7898625720499421;
    msg.pos_sim_err_lim = 0.9661846035055186;
    msg.pos_sim_err_wrn = 0.8337016871178261;
    msg.pos_sim_err_timeout = 63154U;
    msg.converg_max = 0.2518509730977927;
    msg.converg_timeout = 21260U;
    msg.comms_timeout = 60210U;
    msg.turb_lim = 0.9213718898983714;
    msg.custom.assign("ELUXPYKKEPNQCZARBAQDWUVHHNMZPKTXGHODWDKBRBMCREDZOVYXBJJMFSBPWUUIFVLTFVIRTKJUSSMRJPLEKEFLPYEXWVFXROQWSUSALTOHRVBGVYZFNFYDMLWGSNHNGHSIXLZGWLCWNYEBEGOIMOEMHQNAYYKZCKCZRHQSUQJWYAEPFZCKTXUMPXSGGTZ");

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
    msg.setTimeStamp(0.510866259352621);
    msg.setSource(14630U);
    msg.setSourceEntity(80U);
    msg.setDestination(5475U);
    msg.setDestinationEntity(79U);
    msg.formation_name.assign("ADGVYBRAQUOMKYPMBDAUVPIGHLXNPTRYSWYRIEJZEXKHXFQPCDIQLRMWZCTCAUYSDMTOQTNAOVWOHJFYZNTJGIIMKQUIJFBFHSWR");
    msg.type = 246U;
    msg.op = 239U;
    msg.group_name.assign("OQCDTMUWJKRSTPROKBYFECQGJIEAACHOIPVVSOFIZHZGHOCLDFEGPRAAEZEVLFNAN");
    msg.plan_id.assign("NLELJIJEWJVUWONHOYQFDBOUBRUWIOVDEKMLNIXXDFSWJXNRQOZMLKOIVBOYFWZJHVOZBMVHQWMIRZQXAWANJJEKXHMPFXUTPEASZLYTJBXZGYKOJKHDG");
    msg.description.assign("DDDZJVADLGMCLMUTTQTVRWCBCRRSWNVITPKIJEDNTOHLXWOFFCPDFOTAVBHBYYUIXCLEDHBRUOGZYPNFKQKBMQRNUKYJSQRWVQFPTWDGXXNMWTQFKPKXLPARAKMGCHSYIRLOKQAIHPJZMSJSEEN");
    msg.reference_frame = 111U;
    msg.leader_bank_lim = 0.6580391505428226;
    msg.leader_speed_min = 0.08443074772068493;
    msg.leader_speed_max = 0.5246382544592798;
    msg.leader_alt_min = 0.029004736257551067;
    msg.leader_alt_max = 0.32271580351211404;
    msg.pos_sim_err_lim = 0.4215052981822158;
    msg.pos_sim_err_wrn = 0.8019932741484107;
    msg.pos_sim_err_timeout = 19955U;
    msg.converg_max = 0.6744249245954566;
    msg.converg_timeout = 9314U;
    msg.comms_timeout = 50612U;
    msg.turb_lim = 0.3253540317268797;
    msg.custom.assign("UMSXGGEZTDQIRYHKWKVPTOHNBYORGVDUMKZKPNCNNWLHTDJORBCCSYHKFTRQYLHJLCVGIPDGZJSLMHUMQSFUUZZTFSOQKNUV");

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
    msg.setTimeStamp(0.36074716285008324);
    msg.setSource(37323U);
    msg.setSourceEntity(63U);
    msg.setDestination(20136U);
    msg.setDestinationEntity(214U);
    msg.timeout = 56428U;
    msg.lat = 0.8672915622806086;
    msg.lon = 0.5040926293476503;
    msg.z = 0.015869129832798978;
    msg.z_units = 199U;
    msg.speed = 0.023051144571421545;
    msg.speed_units = 247U;
    msg.custom.assign("COBDKIPCEAEQPQVIQAQAYAQIGMYXDKRITUNRVJNHEFCTOZBKRKTPRLEOMUDSMDMSBHMFCVXLTZYPOEXUKDJGLJZIAWTYQWGUFDCZYKJVEZEGGUVEBWXIMKTXFISPJPUYMTNLOHNHFDFJESHUXWJMZJPRXBBHHWHNDOMBQKXJLNACOYZMAVZQUVTYA");

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
    msg.setTimeStamp(0.5064483272021457);
    msg.setSource(53785U);
    msg.setSourceEntity(94U);
    msg.setDestination(44247U);
    msg.setDestinationEntity(66U);
    msg.timeout = 41894U;
    msg.lat = 0.5254066237502947;
    msg.lon = 0.2009434837870614;
    msg.z = 0.5430884721162199;
    msg.z_units = 107U;
    msg.speed = 0.5989553255601564;
    msg.speed_units = 129U;
    msg.custom.assign("FLRLKPACDEHEISFHIKRQXSXVPAAWUIIVSUCJOECYZLQMIGUGZDKSOHONJLSTLFCYHZBWWOJUGBQENGGMPIJXMWHVBKOYVNJDHZSDBCLBUQHYZKRXIUVPHCDXYNQDVHFFZKTMVPOKGAOTRBSPRWTAUDMUGFMAVOJHWGENTJSLDPIQWANYZNTCMWMNGLF");

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
    msg.setTimeStamp(0.3513580331590035);
    msg.setSource(34215U);
    msg.setSourceEntity(201U);
    msg.setDestination(42156U);
    msg.setDestinationEntity(135U);
    msg.timeout = 16803U;
    msg.lat = 0.7686617007795367;
    msg.lon = 0.9189697993403101;
    msg.z = 0.023057759455983318;
    msg.z_units = 134U;
    msg.speed = 0.9027793706543812;
    msg.speed_units = 37U;
    msg.custom.assign("ZRAFJPHUEQXDVLKSPJNRFSJZZBTSHWRLKRFIUFWOEGUVYHWKINDICCGQXOAQBPBAIOWYSPEAHUPDSKTLXWFYEIXYYOPGMBAGVNJCDCUFUVRGHDPSNMITPLSZHDEHCXAJMNRJBPLZMDWXQCJKULJMEVWZG");

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
    msg.setTimeStamp(0.1112819382175746);
    msg.setSource(6960U);
    msg.setSourceEntity(20U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(235U);
    msg.timeout = 27010U;
    msg.lat = 0.24266672151836488;
    msg.lon = 0.36043464753154963;
    msg.z = 0.4256653846089763;
    msg.z_units = 142U;
    msg.speed = 0.01626236725585628;
    msg.speed_units = 78U;
    msg.custom.assign("OZUJTEHLBNPZZZWEXYIOTKKOGFMSUDXCXMNHXDAYFYDHICTSMLIBNJWLXLXFIAJVVBLHVTWRTFJIDWCCUEVJHKPOEDJANGVYCAXJBHMSINQHSGGK");

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
    msg.setTimeStamp(0.9892671237246591);
    msg.setSource(49691U);
    msg.setSourceEntity(128U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(231U);
    msg.timeout = 8303U;
    msg.lat = 0.06781940917506979;
    msg.lon = 0.4697898287855887;
    msg.z = 0.02157311959335717;
    msg.z_units = 121U;
    msg.speed = 0.4570810983767086;
    msg.speed_units = 8U;
    msg.custom.assign("AYWJUEHCJHULRBEHCVWWBARLKYXMFGTPZWBCO");

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
    msg.setTimeStamp(0.7355511322754781);
    msg.setSource(56019U);
    msg.setSourceEntity(132U);
    msg.setDestination(29383U);
    msg.setDestinationEntity(169U);
    msg.timeout = 16557U;
    msg.lat = 0.4823742402730602;
    msg.lon = 0.8301299671453423;
    msg.z = 0.6559574968019426;
    msg.z_units = 214U;
    msg.speed = 0.31422424497278034;
    msg.speed_units = 222U;
    msg.custom.assign("IVTZHXVQCPHXTJGUHPYXGQJFQGLAAMBWTQHDGOCSBNLDZDYJFXWZMWPZJORRKUSKEWSYHZTCLNFAHNKXYNTMOMVAALLGISFWGJFECNZIMMYZQKQNAJAPKNWKPOPLQYBDMBKVEDNXGSYOCKITVPOT");

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
    msg.setTimeStamp(0.7932356079000611);
    msg.setSource(39326U);
    msg.setSourceEntity(146U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(18U);
    msg.arrival_time = 0.5055336324632369;
    msg.lat = 0.7258178591047939;
    msg.lon = 0.2292223276908355;
    msg.z = 0.9385487142326312;
    msg.z_units = 82U;
    msg.travel_z = 0.18258849982125724;
    msg.travel_z_units = 162U;
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
    msg.setTimeStamp(0.5020679415565017);
    msg.setSource(9236U);
    msg.setSourceEntity(218U);
    msg.setDestination(21930U);
    msg.setDestinationEntity(216U);
    msg.arrival_time = 0.22677828295350477;
    msg.lat = 0.037327116083013756;
    msg.lon = 0.173670608507681;
    msg.z = 0.9377254233267767;
    msg.z_units = 188U;
    msg.travel_z = 0.694244500263482;
    msg.travel_z_units = 191U;
    msg.delayed = 103U;

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
    msg.setTimeStamp(0.8143005892899721);
    msg.setSource(37205U);
    msg.setSourceEntity(37U);
    msg.setDestination(20360U);
    msg.setDestinationEntity(135U);
    msg.arrival_time = 0.7413066703163194;
    msg.lat = 0.4140903628799819;
    msg.lon = 0.8266149629814336;
    msg.z = 0.8504849331076196;
    msg.z_units = 75U;
    msg.travel_z = 0.6656562306586635;
    msg.travel_z_units = 130U;
    msg.delayed = 205U;

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
    msg.setTimeStamp(0.703728831835744);
    msg.setSource(18995U);
    msg.setSourceEntity(246U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.8314183478377457;
    msg.lon = 0.34825354928070607;
    msg.z = 0.657041799035381;
    msg.z_units = 93U;
    msg.speed = 0.7489846020501917;
    msg.speed_units = 63U;
    msg.bearing = 0.8632689578892099;
    msg.cross_angle = 0.8404332470451307;
    msg.width = 0.5186227809108663;
    msg.length = 0.8472799529858016;
    msg.coff = 220U;
    msg.angaperture = 0.9195179361300279;
    msg.range = 5707U;
    msg.overlap = 8U;
    msg.flags = 178U;
    msg.custom.assign("MNOXGJUFMKISRGYDK");

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
    msg.setTimeStamp(0.9613824249342127);
    msg.setSource(54586U);
    msg.setSourceEntity(42U);
    msg.setDestination(27348U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.577773359311554;
    msg.lon = 0.47108852836826876;
    msg.z = 0.4093230441301524;
    msg.z_units = 193U;
    msg.speed = 0.8160945825798908;
    msg.speed_units = 184U;
    msg.bearing = 0.9876328168071056;
    msg.cross_angle = 0.9251380670223242;
    msg.width = 0.5402741934330547;
    msg.length = 0.23791042159219877;
    msg.coff = 130U;
    msg.angaperture = 0.5160134890707819;
    msg.range = 27576U;
    msg.overlap = 130U;
    msg.flags = 199U;
    msg.custom.assign("IZPAOLKOKOOUPNNJJCMWBUXZUYELKHV");

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
    msg.setTimeStamp(0.7409273256806178);
    msg.setSource(24467U);
    msg.setSourceEntity(217U);
    msg.setDestination(17693U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.8874229840398014;
    msg.lon = 0.2454195112741565;
    msg.z = 0.7372554870040151;
    msg.z_units = 212U;
    msg.speed = 0.5488843631434563;
    msg.speed_units = 155U;
    msg.bearing = 0.06210120124903873;
    msg.cross_angle = 0.6490493955509773;
    msg.width = 0.9426953042374263;
    msg.length = 0.667887614595368;
    msg.coff = 53U;
    msg.angaperture = 0.030384835661935394;
    msg.range = 4564U;
    msg.overlap = 132U;
    msg.flags = 69U;
    msg.custom.assign("POCBFATXJWUONAYWTFTUVULHEZSQWGEAXRELSSGGYAIGRZXJMPMNMMQISULFVKVKQNXFDMORVAKHLEOBOTLHEXFETNWYEJJWVHKSKZPUNSSXDOCOJNIDCDOLQNAQ");

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
    msg.setTimeStamp(0.4654422216550512);
    msg.setSource(58669U);
    msg.setSourceEntity(250U);
    msg.setDestination(45136U);
    msg.setDestinationEntity(248U);
    msg.timeout = 11107U;
    msg.lat = 0.8776385762216398;
    msg.lon = 0.9191638607358364;
    msg.z = 0.4087611675712527;
    msg.z_units = 148U;
    msg.speed = 0.6339960237668522;
    msg.speed_units = 10U;
    msg.syringe0 = 78U;
    msg.syringe1 = 224U;
    msg.syringe2 = 194U;
    msg.custom.assign("JPOAQQYCTQMUEDZQMQLYOSJGA");

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
    msg.setTimeStamp(0.12385596807726185);
    msg.setSource(56406U);
    msg.setSourceEntity(35U);
    msg.setDestination(21624U);
    msg.setDestinationEntity(180U);
    msg.timeout = 6314U;
    msg.lat = 0.5729416629662839;
    msg.lon = 0.7472487657619025;
    msg.z = 0.9205455058509642;
    msg.z_units = 82U;
    msg.speed = 0.5531705576537373;
    msg.speed_units = 203U;
    msg.syringe0 = 132U;
    msg.syringe1 = 234U;
    msg.syringe2 = 108U;
    msg.custom.assign("PIPBEIPOVBWGBDMNUIYLWAUTXCZAIFSPZOLZDVCLKBHHBDNGURCMYCSSARYEAIATMFVVXQXKMZUCCBLYZDYJQUPQTSILGPGXQJPMAJRNCOUUGEOISLFKDJZHYFHRHUYNQZVKHOFGEZDDKLJFEIODTKDQWAM");

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
    msg.setTimeStamp(0.9416184778538186);
    msg.setSource(15883U);
    msg.setSourceEntity(33U);
    msg.setDestination(24670U);
    msg.setDestinationEntity(70U);
    msg.timeout = 3041U;
    msg.lat = 0.43257962929813865;
    msg.lon = 0.20524366656994308;
    msg.z = 0.840587689099244;
    msg.z_units = 210U;
    msg.speed = 0.9819698812719452;
    msg.speed_units = 197U;
    msg.syringe0 = 56U;
    msg.syringe1 = 118U;
    msg.syringe2 = 141U;
    msg.custom.assign("NPLMZXEIYDAGXSTLLNFQOIIIDACEGXEVKQFQPFMPBCHJMMACQEXROBUBIYRDVKAPXHTHEJKFTQJNKVSL");

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
    msg.setTimeStamp(0.08788589414591663);
    msg.setSource(28140U);
    msg.setSourceEntity(97U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.45176673450120486);
    msg.setSource(26676U);
    msg.setSourceEntity(232U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.3608968712980293);
    msg.setSource(16496U);
    msg.setSourceEntity(66U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.041963271106882916);
    msg.setSource(26301U);
    msg.setSourceEntity(39U);
    msg.setDestination(34798U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.30120591236472605;
    msg.lon = 0.4238596294228315;
    msg.z = 0.4985170389366431;
    msg.z_units = 247U;
    msg.speed = 0.27192457469082065;
    msg.speed_units = 236U;
    msg.takeoff_pitch = 0.48489965312518624;
    msg.custom.assign("XLVMQAAWVBPRICLPDHREZMKUEOBXMHVHTFSWMATUNRXENGOLSPVLGFHQOTTMSODHVAYZIIQPUXGKACODMKWYHCGIEIRPKCJDBLGUGHHFNOCEJIJRFSNRQUBEYHBXPRRSLXEFNACQYSXMWKDYLQPNDOTEXZTTYUBZZMSQIWRKVJRFGWJFTQKAXUDWNATPSBNYLTPCEQDMNDZVNGHZKZDXWKJSIEOVOQZIM");

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
    msg.setTimeStamp(0.9433622547489916);
    msg.setSource(26069U);
    msg.setSourceEntity(158U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.8058897733968883;
    msg.lon = 0.139121465557279;
    msg.z = 0.247487372109226;
    msg.z_units = 136U;
    msg.speed = 0.7969813316546953;
    msg.speed_units = 132U;
    msg.takeoff_pitch = 0.2342422029211344;
    msg.custom.assign("FRHGKFYBUFFWIMAWVVCHCPCDUQONILVCWNLPSHEPBHPRGXAOUUDAKXZGIRAWTPNH");

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
    msg.setTimeStamp(0.8732975151067305);
    msg.setSource(43154U);
    msg.setSourceEntity(56U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.8511863157486612;
    msg.lon = 0.036319772882742685;
    msg.z = 0.5542804532351099;
    msg.z_units = 111U;
    msg.speed = 0.5481747785495177;
    msg.speed_units = 85U;
    msg.takeoff_pitch = 0.4172868297501482;
    msg.custom.assign("RYIFSYVZHDEOCJTDHFBAGGLDKAAVWEXPLGAIMVNLKVEZBCEWBBZANESGJQHUOIRXIJHCFPWYTKWRLGFAUTTAMLVWOWREBVVUCNOPNOJ");

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
    msg.setTimeStamp(0.9549234660857969);
    msg.setSource(35921U);
    msg.setSourceEntity(215U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.11314845108144622;
    msg.lon = 0.30028462805200185;
    msg.z = 0.02186044829071443;
    msg.z_units = 180U;
    msg.speed = 0.7883465542340173;
    msg.speed_units = 13U;
    msg.abort_z = 0.64883509755137;
    msg.bearing = 0.9143596805186617;
    msg.glide_slope = 74U;
    msg.glide_slope_alt = 0.8687194041383641;
    msg.custom.assign("HUPJLXHKMJZBJFYHCVBNUFVVSOMJGRYMVDVNPWSUBYQGTRPIOBWEBILHFNSKZDUGLURIPLUEVUWZCRBANZDDEMEYHQVCXHY");

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
    msg.setTimeStamp(0.9145626259073402);
    msg.setSource(53833U);
    msg.setSourceEntity(158U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.4884401385098679;
    msg.lon = 0.17511320928762897;
    msg.z = 0.1042555407839495;
    msg.z_units = 21U;
    msg.speed = 0.7090979921187229;
    msg.speed_units = 66U;
    msg.abort_z = 0.5215804151956316;
    msg.bearing = 0.5593896234152749;
    msg.glide_slope = 231U;
    msg.glide_slope_alt = 0.941699807946624;
    msg.custom.assign("UBNMHDRUNLHIOAZXHBFEWKMPUDGCKOWZPVRSENQERYYXRETKSJPLFMHQVKYVYRLHXPCCCPJHDNQAQYKNJNKLVVWWIMHA");

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
    msg.setTimeStamp(0.6963142539823096);
    msg.setSource(34998U);
    msg.setSourceEntity(108U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.15556572322587314;
    msg.lon = 0.6553085715758438;
    msg.z = 0.7499010870299068;
    msg.z_units = 225U;
    msg.speed = 0.9808155767279576;
    msg.speed_units = 61U;
    msg.abort_z = 0.8105896268245932;
    msg.bearing = 0.5533105902750759;
    msg.glide_slope = 240U;
    msg.glide_slope_alt = 0.8994266271778647;
    msg.custom.assign("QRGUQSUUSKKLGDIBPOFWQBWTATPYAIGVADHRSAGGMKCEW");

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
    msg.setTimeStamp(0.8738301836186079);
    msg.setSource(10205U);
    msg.setSourceEntity(97U);
    msg.setDestination(42017U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.020580466241200135;
    msg.lon = 0.8549687059494754;
    msg.speed = 0.06901858634723523;
    msg.speed_units = 126U;
    msg.limits = 106U;
    msg.max_depth = 0.09075392575966901;
    msg.min_alt = 0.4216795471695889;
    msg.time_limit = 0.5573173017370524;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0813607208702628;
    tmp_msg_0.lon = 0.3397311818963119;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ZGHHVEHSSPHUEYVVSVRBHSZQVMRXWAGYRORIDYFWHFMDLXPNCMELOBGMRZQNOCAXUZKORMAEIOIQWSTEWUFAZTNYAQLDERTIFRYQDGJRLCZJCAIFQYBERXUCHBDTFKPLCKVFOCZKPDXPPNJZIHBOQJJXKXWJTVCWABPXJOMSDPTCULVXFSDK");
    msg.custom.assign("QYNLHZBCYQDGAJRFRWOHDYEOULXUBNGQKQUAETKNCOQXKZTTHUOBAPDSOZPLETKIVWRXTIUMQBVYHZDVVGZIJEIGYBEUKENWMH");

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
    msg.setTimeStamp(0.03988144027892926);
    msg.setSource(60610U);
    msg.setSourceEntity(156U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.6886847408509188;
    msg.lon = 0.22224684443468445;
    msg.speed = 0.8957394633624408;
    msg.speed_units = 82U;
    msg.limits = 231U;
    msg.max_depth = 0.5976301948420387;
    msg.min_alt = 0.3994394178962116;
    msg.time_limit = 0.9027520618561298;
    msg.controller.assign("SXCPKLWTXFPYBBNPAZXEOVZQKOAKQUDJJYRGRMSWTFCCOTWVLBDARLWRVXGQKMFHKFNHCGMJXYHFNIZOMOLGTDUUZQSMIZRSHIAJJTIONDGQLTNACGQCOAUBCEUMVOTMUNRQRVSXRIJPDESKAUTTHIPBNBVJYNISVOSVFKDJUCLQKDHWCIDJBUBEPUGTONXHPXBSHMEEPGFYWBYEMEZPGKYSALQRWKVZHJZWZYYHFLNLWCREVIQXMPWFYFX");
    msg.custom.assign("IGQUKONTYPOKWIOMPPXMREOYKBXUJBVFMTAMZYPHFZYDTTUSSSKFAYQIUGSORQUTRCTWSNVMUWUZWJEVQTQIILQUHEOKOJTYQCXKPENDLCZRADUKFFBUCIINXBVPLPNWAYBOHLWDRCNFQLRHEIBRLPNZYXWTHZEXHLRZSFIVGJRCAMKGZJXWFNGCVECYPNILHWVJHJSCLMGDABKJSVDCDGGEZJOMATMHXBREOYWXG");

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
    msg.setTimeStamp(0.6198789654642571);
    msg.setSource(54791U);
    msg.setSourceEntity(94U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.6536983750633614;
    msg.lon = 0.2807768492693353;
    msg.speed = 0.7284764533494722;
    msg.speed_units = 44U;
    msg.limits = 192U;
    msg.max_depth = 0.7085815934382009;
    msg.min_alt = 0.6215205026684351;
    msg.time_limit = 0.7321734822407847;
    msg.controller.assign("VWATIFSQLKRMYHYPLCPHLDKKBGGFNDSBNJCBHUUIFNSKYYZIWHWTMCZOEFQJHGDJUKQSOHQTTLINGPEZXPTRZJQYFNMUUOVBTOAFLZACSSUBBYECGIUSAMYDJHWOELAXTSI");
    msg.custom.assign("LILXSETPWMPONCKEULIPEITYLUUSJFZ");

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
    msg.setTimeStamp(0.6535753361235828);
    msg.setSource(13539U);
    msg.setSourceEntity(65U);
    msg.setDestination(24650U);
    msg.setDestinationEntity(58U);
    msg.target.assign("QHQZKRVDEOSJUBGKHYYGCVOYZKJTEONFTDNBQXUPMGSLKWKDUHQMPUPJGACDXHAKBWRFGLGUHHOLGMADTSYVEAWXCYMKNNNFZJYJSQTCRTIFPQWCPNXBFNIGCBNMIHLUJAUYIIYMXZGJXTAHRBF");
    msg.max_speed = 0.4163209053650405;
    msg.speed_units = 178U;
    msg.lat = 0.7041468533415403;
    msg.lon = 0.1676341073160439;
    msg.z = 0.8210384989910048;
    msg.z_units = 138U;
    msg.custom.assign("PBRGYDMRZHP");

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
    msg.setTimeStamp(0.5741389501784483);
    msg.setSource(42394U);
    msg.setSourceEntity(26U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(223U);
    msg.target.assign("XFSOSUHRUVBOVYTHBZLJKYQOLBGHOREEFPQCVBKKNHZOSKEWJCFVZJOIGEQCRNIYPRSVTTOOCLIDAZLCNDPCQRGSBNJUOPFYGYHY");
    msg.max_speed = 0.9498357802661299;
    msg.speed_units = 241U;
    msg.lat = 0.9391354197158959;
    msg.lon = 0.45567188462205777;
    msg.z = 0.41547235584609066;
    msg.z_units = 217U;
    msg.custom.assign("CSYHHBFPLURVYJJEAIYMLNRTOLKVHVELIDKPGKNCSVAEPAZPEIAIEPXDTXMWRPGFFNFYKETWWNRJMUAPZBOZBFUNTDDVBVRJXZKSMQDDOOSBODJSQFJHTEAVUCICTZLWQGJLUCZDUZZFKFMXDBQHNYCHERTMGQMNRUYWGBWQCOHUWRFQGGWYORYWLSQNLIVCUKHXKMFOCHGJSJXXE");

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
    msg.setTimeStamp(0.09398327745343393);
    msg.setSource(48310U);
    msg.setSourceEntity(3U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(114U);
    msg.target.assign("GZUPTYHUDQYDMHDOKZJLJKOMQFQDODUMQLEWXAWOZELGYIDONFNXJAUUBUEELHBYAIYGIMYIJENWFSTVFBLSVDQHHEIOAVRTZVVEIKWIGIOQWGVGPBADNTKKNXLBSHMABDIUYTZTEPXRBGQPRBELAYPPVYRCBXRJVZXQGJCMMMZVFENILKZXSNQGXXOUNWRTRRTMCTCWXCLYN");
    msg.max_speed = 0.5329038563513185;
    msg.speed_units = 140U;
    msg.lat = 0.007020015791186052;
    msg.lon = 0.18008135870112496;
    msg.z = 0.2699339487413308;
    msg.z_units = 66U;
    msg.custom.assign("FOBPKSAQUUXTZTLUGMLSRMNIXFDZZRIPIXOADNWIECEHPSBOLRSGYAPOEMQQHQXQXYLBQRJZCBUKUEWYZKQJESKPCDLQVBUYEILVSCZNBFCVBMN");

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
    msg.setTimeStamp(0.44072627582571344);
    msg.setSource(33844U);
    msg.setSourceEntity(121U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(49U);
    msg.timeout = 37851U;
    msg.lat = 0.9818991645976299;
    msg.lon = 0.8763489581823377;
    msg.speed = 0.38926469146832454;
    msg.speed_units = 165U;
    msg.custom.assign("IKHKQASEPTOJSOUMPVXOOTHFYVFOBXIKXSHUKZZQIFEWLASLPTDVMPZURLWDWWFCSIRKEBRRSUPFLIMOEZYXBTPJJYEGBDVBHYQXCRZBNNAUDMQCJGJSXZMDTEGLWGB");

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
    msg.setTimeStamp(0.8356447757639935);
    msg.setSource(64048U);
    msg.setSourceEntity(219U);
    msg.setDestination(18292U);
    msg.setDestinationEntity(252U);
    msg.timeout = 48877U;
    msg.lat = 0.42139122299789356;
    msg.lon = 0.39291947587598763;
    msg.speed = 0.06262683739881592;
    msg.speed_units = 85U;
    msg.custom.assign("QBTCUKMOQALGVBDJGPDWOHRMCGUVOCIMCXNYWAOFRPWYTXRLLNSWHTYZBVPWDPEDBUZDBYRYYTSXGCHUUUXIPEVPQLAYZGJIWBACBIQYFIMDBPXXLSJOKFJEZOMQAQJSFEFNPIEYRZJLBKEEGTIJKVZWOSIHZZMGNQGECXRETUBTELSLHNTJAWUNLZRXOGICOQFKHMIKSVNVRAKMXKADPQHYNFDK");

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
    msg.setTimeStamp(0.8234322992597484);
    msg.setSource(63811U);
    msg.setSourceEntity(26U);
    msg.setDestination(51680U);
    msg.setDestinationEntity(227U);
    msg.timeout = 53891U;
    msg.lat = 0.2604195889047638;
    msg.lon = 0.9703267416078688;
    msg.speed = 0.547257998009134;
    msg.speed_units = 172U;
    msg.custom.assign("QYRRHJLAYEGIGIBIXNZTYUHVEXPJHZNXTEJCQJVUUOIGIFWSBBLHBVFIJKLRPNYXOGO");

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
    msg.setTimeStamp(0.8944002274899552);
    msg.setSource(10254U);
    msg.setSourceEntity(162U);
    msg.setDestination(1853U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.4234943111690438;
    msg.lon = 0.3612048743767312;
    msg.z = 0.26845014694818825;
    msg.z_units = 146U;
    msg.radius = 0.6971593840029943;
    msg.duration = 65196U;
    msg.speed = 0.9758315820923139;
    msg.speed_units = 246U;
    msg.popup_period = 63495U;
    msg.popup_duration = 48955U;
    msg.flags = 159U;
    msg.custom.assign("EIGUHASCVVDAUTUPJVYNMXIPLFQZRWJEFEFLPEJIINKCMDLZKJOFFJWACYDOAMQVHGVQRWBEUMKYHHJXMGNSDGRBGVOTOMKTESSCGOSOHHHXYQBBDPQBVPRDHRIYAIZMWLTEOTT");

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
    msg.setTimeStamp(0.8358142905605631);
    msg.setSource(7216U);
    msg.setSourceEntity(124U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.6677951991211462;
    msg.lon = 0.007464580683255839;
    msg.z = 0.8706614536481083;
    msg.z_units = 24U;
    msg.radius = 0.09054575241576035;
    msg.duration = 46374U;
    msg.speed = 0.05127862958953988;
    msg.speed_units = 152U;
    msg.popup_period = 39134U;
    msg.popup_duration = 33084U;
    msg.flags = 70U;
    msg.custom.assign("NAHVKAROPDGRCKJBCOUZXQWIEUFVIOSIRZRBPOTMYSGWPJMXSMNF");

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
    msg.setTimeStamp(0.1618390502433481);
    msg.setSource(843U);
    msg.setSourceEntity(49U);
    msg.setDestination(33927U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.7276456614053228;
    msg.lon = 0.8743661413609952;
    msg.z = 0.5571809417495643;
    msg.z_units = 236U;
    msg.radius = 0.7128178528328647;
    msg.duration = 3074U;
    msg.speed = 0.034803796030473455;
    msg.speed_units = 150U;
    msg.popup_period = 15884U;
    msg.popup_duration = 49864U;
    msg.flags = 78U;
    msg.custom.assign("WTCSNEMPGFTNIERVUBHWVBCYLGCBQRHFWKYZOKEZBJVUBQSTURKRRNOHACRVYNMQWXDXOYXPAJDCNIZKZHWAFOPMXYIAFFPVVXYTQUBUJXRXKJUNGDOJOAESSWDGTPUMDZCFHITDEECTPSGBRQCYZHSEJQIGLNWEXRLKDSLZZVNVMS");

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
    msg.setTimeStamp(0.7839861312513408);
    msg.setSource(44968U);
    msg.setSourceEntity(95U);
    msg.setDestination(29123U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.06866391565018481);
    msg.setSource(56838U);
    msg.setSourceEntity(121U);
    msg.setDestination(46811U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.7324863334168044);
    msg.setSource(16509U);
    msg.setSourceEntity(157U);
    msg.setDestination(8113U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.9450263923955099);
    msg.setSource(60768U);
    msg.setSourceEntity(129U);
    msg.setDestination(64083U);
    msg.setDestinationEntity(227U);
    msg.timeout = 38843U;
    msg.lat = 0.8853270735968753;
    msg.lon = 0.016698071195046738;
    msg.z = 0.5815083876430961;
    msg.z_units = 215U;
    msg.speed = 0.5177056923057664;
    msg.speed_units = 118U;
    msg.bearing = 0.432360174073388;
    msg.width = 0.8914688514159198;
    msg.direction = 203U;
    msg.custom.assign("TWGAVRCSSWGSLCJBDGDZBUCHVFYWLEYJAASIYFDGFOSEBCAICUONCHEFQVLBOZBAMRQYPDUAOXTZHQUVPVWENHTXVEQHKUSXXSOSNKLIMPLFXPFDRKIMGNUDYKBJRUANAMQLDCRENJBNHFPNBMRBMKPWTLDZ");

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
    msg.setTimeStamp(0.5530947200979037);
    msg.setSource(8720U);
    msg.setSourceEntity(210U);
    msg.setDestination(37491U);
    msg.setDestinationEntity(184U);
    msg.timeout = 38188U;
    msg.lat = 0.7970460046737736;
    msg.lon = 0.5168629556291304;
    msg.z = 0.5957278186482756;
    msg.z_units = 74U;
    msg.speed = 0.48155202754667037;
    msg.speed_units = 58U;
    msg.bearing = 0.8108882224517682;
    msg.width = 0.8976751899487455;
    msg.direction = 69U;
    msg.custom.assign("YLZHZDDFCHTWFWOOOCSEHCKMGNYJOHFNURZPHZEQALHFKUZLFRABPEKDTSENTWSFVIOJVPQWXCMSTLYILRPVAHBJIRQYUBKRIADVPQMZYQFDMNYMZQXPGEFJWBZHSTLJDEFTGGYSIOGVEAHBXNCYOBJXWOAWBGLGMUVCQERPLXXNGIIVUHUBAZJAUKUQSKJCYPRPQMROTONKISMGAENCWFEIVTDBTKAW");

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
    msg.setTimeStamp(0.19978078100554908);
    msg.setSource(37366U);
    msg.setSourceEntity(114U);
    msg.setDestination(15567U);
    msg.setDestinationEntity(10U);
    msg.timeout = 22635U;
    msg.lat = 0.8699825028532605;
    msg.lon = 0.7523849419251831;
    msg.z = 0.8142496991354322;
    msg.z_units = 249U;
    msg.speed = 0.49261991704467967;
    msg.speed_units = 81U;
    msg.bearing = 0.9941710972984574;
    msg.width = 0.48308482113445506;
    msg.direction = 170U;
    msg.custom.assign("PYBMOEAFJTDIDIFNSTOVCMCYXJIRNPZNZLMERUVBUGMXNTHAKKBEQSPYPFBXSWTWJJLVXPKOIIVAEKMUDCQE");

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
    msg.setTimeStamp(0.6684933199577369);
    msg.setSource(3387U);
    msg.setSourceEntity(138U);
    msg.setDestination(1148U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 64U;
    msg.error_count = 227U;
    msg.error_ents.assign("RQPTADNHVBFCPOYXVERVAKGB");
    msg.maneuver_type = 13320U;
    msg.maneuver_stime = 0.4197253317519015;
    msg.maneuver_eta = 36750U;
    msg.control_loops = 1422946088U;
    msg.flags = 96U;
    msg.last_error.assign("IUYWINUOWVUULPKPQUPIBZWVDSWRKEVKIHBZCMAKVROQKUYOTTDCNXLJWHRBQUMLMEKSXEXNMXXCYSZEYVPLTHSFCNGBAYVHPHBQXZSMOTVNAEPLGZAAFWFGFOODNZRDLPRYCLAINJJGYVHATXDJBTONQKMSRDH");
    msg.last_error_time = 0.6829167411204307;

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
    msg.setTimeStamp(0.8368125541228909);
    msg.setSource(47959U);
    msg.setSourceEntity(20U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 190U;
    msg.error_count = 248U;
    msg.error_ents.assign("UKIEUJEBMTYUEWGZFNDBQAXADHCQOYEZBHYCPWXJGTLPBGAQLVLQGXWNFASIWXCAFTGGCTMNKFDKYZYSIYISKPMXOCHDXZLRDFXVNIMPONQPXKLLRYTZLODNVFVCHFHTJJZWIVMAACEVEPHLVIPBHYTKORNQFVRWWQUNFOTBHWOZJURGMMCQPPVOD");
    msg.maneuver_type = 20935U;
    msg.maneuver_stime = 0.6257949216821055;
    msg.maneuver_eta = 59011U;
    msg.control_loops = 1681275903U;
    msg.flags = 168U;
    msg.last_error.assign("ZMJCGGPHOHAFIPHMIQZIORHBXTQPF");
    msg.last_error_time = 0.32155460579836004;

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
    msg.setTimeStamp(0.7877892857113932);
    msg.setSource(21145U);
    msg.setSourceEntity(148U);
    msg.setDestination(52417U);
    msg.setDestinationEntity(41U);
    msg.op_mode = 132U;
    msg.error_count = 72U;
    msg.error_ents.assign("MEVFCDRFWMILTZYMPIVQHNORYHACFZUMJROBEISSUUULBKPLRINBABCYPGDVCKKBDJNAJZQDTLRZUTSOLXEAWORCFTOZMLBIGQOBDOGIUJVHIUAEXJKGPZNKEVTYSBCJHFFZXKHWHFWNGLXXUYWYQFHLSQIMNVLWETMEIPGYJEOGZNXUFHTKKAXVZNHLTJSYHWKTMQDY");
    msg.maneuver_type = 16853U;
    msg.maneuver_stime = 0.6731244468940807;
    msg.maneuver_eta = 40543U;
    msg.control_loops = 3316410227U;
    msg.flags = 188U;
    msg.last_error.assign("IQMOUWQFSBUGNSQVOLARWEDKNIUTUEXMJESHJMVEKFHVODFTVZHBLSGJYPHBCXBMHTNPCPLWRYSBZF");
    msg.last_error_time = 0.11715325499568763;

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
    msg.setTimeStamp(0.5382428715094816);
    msg.setSource(43586U);
    msg.setSourceEntity(138U);
    msg.setDestination(4474U);
    msg.setDestinationEntity(194U);
    msg.type = 233U;
    msg.request_id = 8462U;
    msg.command = 51U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 2695U;
    tmp_msg_0.lat = 0.9588732820756038;
    tmp_msg_0.lon = 0.9940984608905428;
    tmp_msg_0.z = 0.7707342572155692;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.2014591123378573;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.custom.assign("LFAOVFHUMVHXYVBJPLHCGZCOWJWYSTTCBRZLYLSODMDBGXLUQZFCNPFAZNSTTVAMOVNBGSHKXUUBOJNFEUEHHPNJYMHKLQCNCONYCLRQGCWZMFGQRDKIWQTGROFRYCXEJKH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34255U;
    msg.info.assign("WKNUEYWEGQYWQNTTNFQOZLREZPCPAJNKUGNWJBUDFGJHRLBXPMYTXDAMVVMANOKBTIUNQNPBITZGOCVCIAFAMLDPHJGZQVXKTBOLJSKSREKTVMHJSHJFZLDDGBRAPSQBFGQPNGKRHVGZAKMAXZHSVICIEYILRURHWQQOAHBFUPSYORVSDQEONBJFLUEFMBLTWXWGFMDWUJYHXKYCYWEXESIKCCWTJLUOCSYCDIEAVMDZ");

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
    msg.setTimeStamp(0.12381258668619977);
    msg.setSource(30247U);
    msg.setSourceEntity(129U);
    msg.setDestination(33278U);
    msg.setDestinationEntity(82U);
    msg.type = 33U;
    msg.request_id = 58113U;
    msg.command = 209U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42420U;
    msg.info.assign("FFZBSKISIQZNPAQBLPVWYAVMXVTYEITBRJMSEFMUCOLZLICYFYDHUATUBSMQQOWEGYGQFHEXDMSZMRKTXJXYUOUUICTIJVKTRMCXEVPLBHQPTHPZLUBMZEHLI");

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
    msg.setTimeStamp(0.946795974818858);
    msg.setSource(45259U);
    msg.setSourceEntity(188U);
    msg.setDestination(38758U);
    msg.setDestinationEntity(39U);
    msg.type = 51U;
    msg.request_id = 21653U;
    msg.command = 28U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 27069U;
    tmp_msg_0.lat = 0.7203366666233634;
    tmp_msg_0.lon = 0.20361885851858985;
    tmp_msg_0.z = 0.1757834054107189;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.021617068880028123;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.syringe0 = 15U;
    tmp_msg_0.syringe1 = 248U;
    tmp_msg_0.syringe2 = 41U;
    tmp_msg_0.custom.assign("URMZTTQJAGJJLDZHUOVJQTGNPQUWZSFIRTULMKMGXWWSHESYCBAJTKUFFCGSCDAAUAYCWELCCXCJLMCXHWPAMJHDGLULXOSPSKUIHYQPYBELHZKLEWGMNSMXZBRVVRZEZTZFVFPTTSWHMXYWMOBQNRDILFICPEXOKRIAVNHEATYNIQVMVFJKYYDGPBDWZINRGOQEYJEUNOHHQIJNRBK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27546U;
    msg.info.assign("PJIJTKTRMONRPKAFEGQNQXMYPTHSCMJNGVIEJSLHMFWCUBXLCMMXDEUMYCPETBOBRUIAQMWWB");

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
    msg.setTimeStamp(0.43803429813322137);
    msg.setSource(15668U);
    msg.setSourceEntity(31U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(127U);
    msg.command = 122U;
    msg.entities.assign("UHLMAWKCCDZNWTPUOLWDIUGNYMPKYGMZQZHVIVPTAGJXGOJAFBQKYKVXQUJDEUDWVNBFMJTXUPEFXBDRGEHZEHNLBOJHPSUMBJJAMUOETSRQQCGGZHQSNRNO");

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
    msg.setTimeStamp(0.8043623726885942);
    msg.setSource(58542U);
    msg.setSourceEntity(21U);
    msg.setDestination(40502U);
    msg.setDestinationEntity(234U);
    msg.command = 178U;
    msg.entities.assign("UKVBKPSKVSROCLIESDCGLTGGMTDGAMTIQPWOMQHCUIQEFTTLFIYRPIFQRZQXKNVKDEMXOTUODNJQNNERBHKCIXDNQIAWFSUBNMHEZHTXEHPJXIJBEYMAGUQHJCCYSTYBEQJLORZAZXAVHIOMFZWFVYRVDLMSPJWCAGLESXHGZUWLBFFJWWTTMAOMEPNFSDXBYFJVCPNYQAVRDNXHGYVBZLJHRUZWSKBPLVROYCWUKOZGZNBAJSWACUIL");

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
    msg.setTimeStamp(0.6340956627127412);
    msg.setSource(30167U);
    msg.setSourceEntity(241U);
    msg.setDestination(42014U);
    msg.setDestinationEntity(150U);
    msg.command = 153U;
    msg.entities.assign("ZNWNZUPQHDNVOABPOFKWMZJGHSBIKXRBTDWRORNSJJRT");

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
    msg.setTimeStamp(0.675267873450141);
    msg.setSource(33080U);
    msg.setSourceEntity(158U);
    msg.setDestination(54420U);
    msg.setDestinationEntity(113U);
    msg.mcount = 123U;
    msg.mnames.assign("JPOEBAIAARYZELZCQGKRFUNXLOGAQDPBNWNOLV");
    msg.ecount = 41U;
    msg.enames.assign("TDVPCGFDHBEEVXHNAPAZTVHXBSRFYQBJSIVBJKPMUTHDCLPVMBHRAAMGAZCJBTERJUXVRLFYXMPKQPHQSDGQALDTNIUDOVKNVCKMZMKVWGGIJYTDTHQYDIVLSIMZCQNINBRCUUOKJIGYXMZUWWEYOWFNUNXDFCBYPQSHXQZIZEHFLUCOBWQJUWQSSWTTSYOAXEG");
    msg.ccount = 158U;
    msg.cnames.assign("QNNMEDFZYCPNHYWGDURTSRDNUMPAFYFXJKCWPHCNISODBQVAULTBJKVKBIFWPANEVTBWUXZXAADLUORMZOMSOWMPEBSMZVQASJVLGRKSKZRJKOLYJTJGKHNVIDWARTZTFVHITFWKQOOGBJQDFYQVVAXPOYHHWESJSCJYPGBVYXXMHCUXRPBCINSLHZZBJYF");
    msg.last_error.assign("GQHLOPDEZKCMIABPHNZKGURIZGSKXMXJABTSMMWNLTQOLJCKCDGISFFQXBHDJNYNEORLIDCUUAGCZLUQJEXDEASWPSXDPEUWITPDOVVZOFUTMHDSWHRBYWPHHZKLXMRAZYORRYIKFICZUWFFVIKEECTYKFOJVRWYQTFFVARGZPGSRVYGCCIRTQMDBBGKVPNBBJUEAWYKMXNQAQZLOWOQJJXENHSBWOCXHHSQTGPSJFUNBDMUJAVVILPTVMTNNY");
    msg.last_error_time = 0.8152609969012655;

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
    msg.setTimeStamp(0.3923769429071613);
    msg.setSource(2159U);
    msg.setSourceEntity(115U);
    msg.setDestination(12570U);
    msg.setDestinationEntity(103U);
    msg.mcount = 239U;
    msg.mnames.assign("NFUTXFWUGPKWTBLRHTAUGFOABVZOARJSJOTDKCB");
    msg.ecount = 61U;
    msg.enames.assign("OIXODBPQIOJLSMSYJFWMUBVRXXNVYCIRSMKJAAQCHELWMFACDMPDTKWRFUNFGYBYHEBXZPSQLHETJZNWLHFTVMFONYRSKDALBFNZTHUCAUZXAYMJHEPPBEENIPIYUCDCGQNVZSDGTQXPBWAWRZUZVKDPQDEADINVERCUJNKGSYPLWFQQZOKBBUTEGHMVLYMBPVUVLQROZHGGDOGXLUOKCQACJZLKTISXRTOYGJJSTJ");
    msg.ccount = 23U;
    msg.cnames.assign("NTYKALVAYLKQXSTGBASPTEXBHAXJMOLUJOQETJMOULIQEQPHMNUEGJEJZPJENRGHCIJUASYHUXKLFSHWRCWFFOWPBKMPKTRWWGFOVVIOXC");
    msg.last_error.assign("RVNKOHETWWSAKXFKMEUMNZQLMACVUCJPFWSPBFUOSCCDXZLXDVGSRZKOBJANYHHADQEBQNGCWEOMVNXDAEDIBELNFSWYCSYFHZOXMTRYBRKYOLRFUUOJTQVYZGATVHUIJSHWGFCYMNJZYDVPRKSXQVHIGICFEOUQDPIYIHHLNW");
    msg.last_error_time = 0.5764733544101185;

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
    msg.setTimeStamp(0.9138930286980497);
    msg.setSource(23329U);
    msg.setSourceEntity(222U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(64U);
    msg.mcount = 14U;
    msg.mnames.assign("RKMNVNQHMVAFGUEZPGOIFSYHTDLXGQMBENRXTRWIHDFYTJRSAPUPHQJDCSEZOKFXSVXCTPJLGARTNALQDBZWCXAYIWYAPVL");
    msg.ecount = 96U;
    msg.enames.assign("JNJDMUVYTPAQWMPYZZKAHWBVSBHZRSXEBQJCIGPBGMRTFYFGXKHRXITXAOWDXAECQPOQPPCUASRFNSOKKMAKJTGSYJRZKGYIBDECSJDEPZYJDXLOBZTYDHVSIJCXDMN");
    msg.ccount = 237U;
    msg.cnames.assign("NXIXHYCRCZZXZOZSXIWPMTYEJVBVBVKKCPLVAKSVOEUUYBYSZMYQSLDLUMHQBAUTPQAYILGADMDZQQIOGFKAJAFWYXEQZOUKORKLT");
    msg.last_error.assign("BEJGBQISBPBBRYJDWNKHWHOEGCU");
    msg.last_error_time = 0.16562704377969983;

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
    msg.setTimeStamp(0.7554114914125175);
    msg.setSource(43250U);
    msg.setSourceEntity(55U);
    msg.setDestination(1455U);
    msg.setDestinationEntity(174U);
    msg.mask = 100U;
    msg.max_depth = 0.13378163839430102;
    msg.min_altitude = 0.7490406424933937;
    msg.max_altitude = 0.9665988182124051;
    msg.min_speed = 0.09402843871961897;
    msg.max_speed = 0.5556298985043479;
    msg.max_vrate = 0.3978296000440529;
    msg.lat = 0.047892124613495346;
    msg.lon = 0.7031367221069671;
    msg.orientation = 0.9909774198888379;
    msg.width = 0.5613006820451898;
    msg.length = 0.8164065065862032;

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
    msg.setTimeStamp(0.593462011571013);
    msg.setSource(33435U);
    msg.setSourceEntity(43U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(131U);
    msg.mask = 17U;
    msg.max_depth = 0.09393416922087361;
    msg.min_altitude = 0.8550408290747469;
    msg.max_altitude = 0.5178835632310389;
    msg.min_speed = 0.3249773693505309;
    msg.max_speed = 0.4486246220007388;
    msg.max_vrate = 0.20882768407098484;
    msg.lat = 0.4248416602123901;
    msg.lon = 0.8349068380927801;
    msg.orientation = 0.32718603582250116;
    msg.width = 0.5547210034521501;
    msg.length = 0.2037848344217249;

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
    msg.setTimeStamp(0.4264015574402188);
    msg.setSource(47812U);
    msg.setSourceEntity(99U);
    msg.setDestination(25402U);
    msg.setDestinationEntity(121U);
    msg.mask = 36U;
    msg.max_depth = 0.6700088354291344;
    msg.min_altitude = 0.44799808859882206;
    msg.max_altitude = 0.937420583193306;
    msg.min_speed = 0.44910739149284407;
    msg.max_speed = 0.1492846834595416;
    msg.max_vrate = 0.5673016968858438;
    msg.lat = 0.39003822056572224;
    msg.lon = 0.3063908921077467;
    msg.orientation = 0.38865203742005494;
    msg.width = 0.2984174850804182;
    msg.length = 0.46047109083312376;

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
    msg.setTimeStamp(0.5752536698198044);
    msg.setSource(64216U);
    msg.setSourceEntity(246U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.37964047428419245);
    msg.setSource(5664U);
    msg.setSourceEntity(143U);
    msg.setDestination(43800U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.8911821952891126);
    msg.setSource(21680U);
    msg.setSourceEntity(54U);
    msg.setDestination(3293U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.018576046261875923);
    msg.setSource(40122U);
    msg.setSourceEntity(6U);
    msg.setDestination(19338U);
    msg.setDestinationEntity(170U);
    msg.duration = 11748U;

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
    msg.setTimeStamp(0.15846735655580657);
    msg.setSource(23723U);
    msg.setSourceEntity(213U);
    msg.setDestination(12834U);
    msg.setDestinationEntity(63U);
    msg.duration = 24879U;

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
    msg.setTimeStamp(0.7584179344620737);
    msg.setSource(43299U);
    msg.setSourceEntity(174U);
    msg.setDestination(31518U);
    msg.setDestinationEntity(151U);
    msg.duration = 27038U;

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
    msg.setTimeStamp(0.19600004775808855);
    msg.setSource(58716U);
    msg.setSourceEntity(115U);
    msg.setDestination(38675U);
    msg.setDestinationEntity(16U);
    msg.enable = 94U;
    msg.mask = 3102654921U;
    msg.scope_ref = 12565879U;

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
    msg.setTimeStamp(0.22494617651041382);
    msg.setSource(61919U);
    msg.setSourceEntity(45U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(113U);
    msg.enable = 138U;
    msg.mask = 876324420U;
    msg.scope_ref = 3463578496U;

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
    msg.setTimeStamp(0.11367312440470834);
    msg.setSource(911U);
    msg.setSourceEntity(148U);
    msg.setDestination(33694U);
    msg.setDestinationEntity(142U);
    msg.enable = 123U;
    msg.mask = 1094120457U;
    msg.scope_ref = 2153012209U;

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
    msg.setTimeStamp(0.9839929754381698);
    msg.setSource(40639U);
    msg.setSourceEntity(234U);
    msg.setDestination(20250U);
    msg.setDestinationEntity(54U);
    msg.medium = 78U;

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
    msg.setTimeStamp(0.23452268267417786);
    msg.setSource(11902U);
    msg.setSourceEntity(174U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(117U);
    msg.medium = 243U;

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
    msg.setTimeStamp(0.21197506353077178);
    msg.setSource(34417U);
    msg.setSourceEntity(61U);
    msg.setDestination(9016U);
    msg.setDestinationEntity(128U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.33065247884333493);
    msg.setSource(33193U);
    msg.setSourceEntity(154U);
    msg.setDestination(20290U);
    msg.setDestinationEntity(215U);
    msg.value = 0.432046261104696;
    msg.type = 234U;

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
    msg.setTimeStamp(0.632404697978997);
    msg.setSource(34463U);
    msg.setSourceEntity(135U);
    msg.setDestination(457U);
    msg.setDestinationEntity(143U);
    msg.value = 0.44097251114218516;
    msg.type = 147U;

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
    msg.setTimeStamp(0.3189198676378927);
    msg.setSource(61283U);
    msg.setSourceEntity(155U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(251U);
    msg.value = 0.9048844797191837;
    msg.type = 136U;

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
    msg.setTimeStamp(0.10714686587852262);
    msg.setSource(18515U);
    msg.setSourceEntity(112U);
    msg.setDestination(3648U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.0026227452058658063;
    msg.converg = 0.3603860740171566;
    msg.turbulence = 0.696498928836338;
    msg.possimmon = 128U;
    msg.commmon = 49U;
    msg.convergmon = 221U;

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
    msg.setTimeStamp(0.17108583038445224);
    msg.setSource(6568U);
    msg.setSourceEntity(24U);
    msg.setDestination(40941U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.07117375528852787;
    msg.converg = 0.05550853331550465;
    msg.turbulence = 0.17561287915570378;
    msg.possimmon = 132U;
    msg.commmon = 101U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.6882519562592684);
    msg.setSource(33149U);
    msg.setSourceEntity(113U);
    msg.setDestination(57201U);
    msg.setDestinationEntity(19U);
    msg.possimerr = 0.929830275197254;
    msg.converg = 0.8394207990985734;
    msg.turbulence = 0.8867286015466579;
    msg.possimmon = 142U;
    msg.commmon = 220U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.5420562902747654);
    msg.setSource(656U);
    msg.setSourceEntity(121U);
    msg.setDestination(19186U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 13U;
    msg.mode.assign("ZQGLGNSOGWBRQARKIJEICSDIQVFVWGFBGSBNDF");

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
    msg.setTimeStamp(0.4314531507616326);
    msg.setSource(289U);
    msg.setSourceEntity(6U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(166U);
    msg.autonomy = 19U;
    msg.mode.assign("RQUXFXCWYYVACMTFQGLUHTWPLCWBUYYKUCTGVBNCRRZPKQFGGDEBHRRRECKMPRYZMRNLNMAXKDYLZASSTJWTUZSAQWNSSVDMPMTIDRNDIAQZCWQEOJFKIPKIFXOZXBTENJXXILVLHHHSSEVXOJHFHZQFHGUSKEUIDU");

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
    msg.setTimeStamp(0.6264525649246598);
    msg.setSource(45960U);
    msg.setSourceEntity(196U);
    msg.setDestination(51441U);
    msg.setDestinationEntity(37U);
    msg.autonomy = 229U;
    msg.mode.assign("CHPDVGUXHKELEXIZZSURFYHLNFHHZXZYJSMHABMKNJFJLDTTZJQKTUMQIAIUKYJOLYKFNLZVACWLKTNGKMSWQPPOHWRRIYVRAELRRGFGXFTBTBVXIGSDIPBCUMDNTCJ");

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
    msg.setTimeStamp(0.15184822528474362);
    msg.setSource(28727U);
    msg.setSourceEntity(220U);
    msg.setDestination(46656U);
    msg.setDestinationEntity(116U);
    msg.type = 108U;
    msg.op = 208U;
    msg.possimerr = 0.25121862722975685;
    msg.converg = 0.4382579134780791;
    msg.turbulence = 0.5002186241635805;
    msg.possimmon = 232U;
    msg.commmon = 54U;
    msg.convergmon = 68U;

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
    msg.setTimeStamp(0.8950505824832572);
    msg.setSource(21915U);
    msg.setSourceEntity(72U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(210U);
    msg.type = 47U;
    msg.op = 245U;
    msg.possimerr = 0.22866026107582993;
    msg.converg = 0.3519384771119175;
    msg.turbulence = 0.7028662618294456;
    msg.possimmon = 84U;
    msg.commmon = 200U;
    msg.convergmon = 95U;

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
    msg.setTimeStamp(0.9764843983149382);
    msg.setSource(19733U);
    msg.setSourceEntity(160U);
    msg.setDestination(27527U);
    msg.setDestinationEntity(124U);
    msg.type = 96U;
    msg.op = 126U;
    msg.possimerr = 0.7906923123927537;
    msg.converg = 0.4217352246318954;
    msg.turbulence = 0.2136013424028792;
    msg.possimmon = 81U;
    msg.commmon = 238U;
    msg.convergmon = 170U;

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
    msg.setTimeStamp(0.03499131243742548);
    msg.setSource(30197U);
    msg.setSourceEntity(191U);
    msg.setDestination(17566U);
    msg.setDestinationEntity(53U);
    msg.op = 174U;
    msg.comm_interface = 233U;
    msg.period = 7773U;
    msg.sys_dst.assign("HUKOHXZGRGCMCFQIPNQUHGELEJOTKJWTYGVKDMNPIBWWFJORMFZSUTCXZJJEO");

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
    msg.setTimeStamp(0.5882560989386153);
    msg.setSource(9154U);
    msg.setSourceEntity(160U);
    msg.setDestination(50898U);
    msg.setDestinationEntity(19U);
    msg.op = 151U;
    msg.comm_interface = 74U;
    msg.period = 52281U;
    msg.sys_dst.assign("FPGMYLZNANQNNOSUFHHTLSGNKLDYORZUMKZXTIEATRIYMQJLTWIPCBHZSHUNCFFVQMSVSQEPRCYWWDRNFMMEPXWB");

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
    msg.setTimeStamp(0.7209351973847871);
    msg.setSource(8874U);
    msg.setSourceEntity(63U);
    msg.setDestination(33452U);
    msg.setDestinationEntity(213U);
    msg.op = 95U;
    msg.comm_interface = 170U;
    msg.period = 64196U;
    msg.sys_dst.assign("GZUHKUIWYCQAQMNPDFGTEFJSCEKLWPWVRLKNSHDNXVEPYWUDXLRODLJTFUSLTBEQRLUCZDSOBTXOAZIKMFKREBPGISCNTEVPZXQRVTYTAKPWIJXLITSICTRNANVBQGXFWOMUEYPMDSXZYOBQXQOCQUMXJCOTBABAVBJBVHGFYHFVGMHOCHKKUNNYJGCYMESFLFUSRDPORZVIUOJAZDJMLSWYNAJNCA");

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
    msg.setTimeStamp(0.6900231489719341);
    msg.setSource(64141U);
    msg.setSourceEntity(214U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(200U);
    msg.stime = 2025548824U;
    msg.latitude = 0.8402619727410114;
    msg.longitude = 0.12581374129217138;
    msg.altitude = 61979U;
    msg.depth = 59839U;
    msg.heading = 25089U;
    msg.speed = -706;
    msg.fuel = -16;
    msg.exec_state = -100;
    msg.plan_checksum = 65305U;

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
    msg.setTimeStamp(0.6827466516935659);
    msg.setSource(22458U);
    msg.setSourceEntity(131U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(112U);
    msg.stime = 368977044U;
    msg.latitude = 0.060333622543898624;
    msg.longitude = 0.04927654099079781;
    msg.altitude = 49439U;
    msg.depth = 11131U;
    msg.heading = 13810U;
    msg.speed = -24028;
    msg.fuel = 8;
    msg.exec_state = -18;
    msg.plan_checksum = 44370U;

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
    msg.setTimeStamp(0.5385742297457784);
    msg.setSource(63328U);
    msg.setSourceEntity(130U);
    msg.setDestination(45684U);
    msg.setDestinationEntity(160U);
    msg.stime = 2842631239U;
    msg.latitude = 0.7929813377988251;
    msg.longitude = 0.19259708069677461;
    msg.altitude = 51980U;
    msg.depth = 41214U;
    msg.heading = 55857U;
    msg.speed = -24635;
    msg.fuel = -53;
    msg.exec_state = -59;
    msg.plan_checksum = 19663U;

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
    msg.setTimeStamp(0.4964786764394702);
    msg.setSource(19873U);
    msg.setSourceEntity(158U);
    msg.setDestination(40676U);
    msg.setDestinationEntity(49U);
    msg.req_id = 52266U;
    msg.comm_mean = 70U;
    msg.destination.assign("KIEUAZMROARYUWYDNVEGOGVPUVVSTJHFKHGLXQKMNFMBLBWCZCFFBDJGOPLWLAERMMGKNRUKZWBAARUXIGDHDTJIALDUWOEWVENOJOLJABIBBUQZORHEGYLOPRRCVFUSVSEPXHQTSYINGZJNSFSXSFEBNBVYRNZPAVFJFZWYITCHLTQUMHCMPZXJ");
    msg.deadline = 0.006257799577379708;
    msg.range = 0.15185180765316209;
    msg.data_mode = 167U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.26817512438884683;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HGHWGFRBETFNEUZOEZWIDHMLXGVPPZSJZCGAJBDROAQCQPPRRDUGULFNRGGYKLNKFMQSBMXTJJXLHSTODEDIKTQRXVMQWMKBRZQHAHWYNZJYGJOFAKUCXWYSFPSAQBLHYNUTVMZEESXNLKTDFSMFIRSOLYWUHVCQVAPUIUUNANKCWZHKOKCOIZWVXXIPMNOAQDYCIARJOBDBMTTPBGYMZVIQEYJBXD");
    const char tmp_msg_1[] = {-108, -55, 10, 107, -82, -102, -70, 62, 46, -107, -30, 82, 122, 87, -123, 8, 56, -16, -72, 107, 11, -85, 54, -40, -80, 107, -49, 122, -103, -3, -121, -7, -48, 40, -33, -95, -5, -84, 59, 32, 13, 45, -81, -51, -6, 120, -117, -19, -38, 17, -116, 42, 120, 2, 88, -71, 59, -37, -73, -84, -94, -13, -71, 61, -96, 9, -98, -66, 111, 38, -96, 40, 20, 105, 106, 92, -128, 14, 106, 118, -75, 14, -57, -39, -126, -19, 9, -85, -105, 78, -106, 82, -29, -100, -74, -106, -102, 24, 104, 2, -53, -102, 62, -54, -70, -9, 66, 117, 73, -92, -49, 14, 107, 13, 54, 19, 84, 60, -36, 108, 5, 82, -9, -4, -89, 58, -115, -121, 75, -116, -95, -63, -27, -44, 116, 55, 77, 118, -58, -10, -104, -82, 107, -58, 99, 7, 6, 82, -115, 92, -11, 108, -98, 70, -46, 19, 86, -61, 71, 26, 40, 96, 44, -113, 77, 123, 104, -17, 122, -9, -124, -11, -127, 50, -89};
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
    msg.setTimeStamp(0.5831609893962493);
    msg.setSource(551U);
    msg.setSourceEntity(111U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(158U);
    msg.req_id = 14063U;
    msg.comm_mean = 60U;
    msg.destination.assign("JVVGARETXTFBRODTSCHGQJLIDUMUPFZBTCANBAHRDQTVGC");
    msg.deadline = 0.8869513215245995;
    msg.range = 0.13844613773517633;
    msg.data_mode = 128U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YVSQAQOKYGDPGTLIVOQGUJPBNRBMESZEFCZWVPAHGELXVXFEUTHZSTBLOKULAMDOGKRJWTSWOOOJYFPVKXXMRIFKWDDDQSCFIUDZCBAPGVBUZXKTAHMJRAFTEJF");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 44307U;
    tmp_tmp_msg_0_0.rpm = 0.5187470419931852;
    tmp_tmp_msg_0_0.direction = 75U;
    tmp_tmp_msg_0_0.custom.assign("DFGNTMQONUHJAUPIVBICYHGKRUXLOKFZRCBAGIGVXCRXVAHJUVLYQMXCFTIERWSLJQNKPXZOBOBBSXSMPUEQWELPBAJTYJRCBKWRIJPMZXNTIFWRACDXISAYVEXWFJQHQXTWUKPESTMQDZGV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UASimulation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 193U;
    tmp_tmp_msg_0_1.speed = 57503U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-27, 126, 74, -76, 111, -35, 23, 52, -1, -9, 123, 16, 104, 81, -10, 80, 70, -88, 103, -60, 44, -5, -45, 69, -127, -31, -15, -57, 65, 37, -86, 104, 70, 23, -17, -91, -85, -4, -55, 35, 89, -76, 23, -69, -25, -56, -38, -90, 10, -54, -54, -89, 61, -102, 82, -80, -65, 45, 21, -43, 34, -124, 54, -115, -95, -91, -78, -71, -2, -114, 68, -47, -69, -48, 65, 37, 50, -60, -55, 3, -68, -74, -64, -10, 45, 26, -62, -35, 65, -84, 64, -112, -14, 57, -31, 58, -11, -26, -29, -17, 67, 37, 7, -83, 108, 124, 29, -31, -123, -95};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MZDPNWWWIDGRQF");
    const char tmp_msg_1[] = {-87, 104, 75, -115, -27, 6, 119, 50, 69, -60, 6, -72, -44, 35, -70, 57, -99, -101, 89, 114, -114, -1, -3, -72, 78, -67, -80, 11, 118, 8, -75, -91, -31, -74, 3, 109, -17, 40, 120, 27, 34, -32, -108, -122, 2, -101, -84, -128, -88, 30, -34, -123, -46, -31, 84, -47, 119, 40, 17, 109, -56, -113, -94, 122, 1, 80, 109, -50};
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
    msg.setTimeStamp(0.19391840072409183);
    msg.setSource(32092U);
    msg.setSourceEntity(181U);
    msg.setDestination(56842U);
    msg.setDestinationEntity(8U);
    msg.req_id = 6297U;
    msg.comm_mean = 183U;
    msg.destination.assign("VGVYBGAELMDSANHFWZBKLPINAHYLDQSYAUXZDTFVCDEHQFJDFKVBJGIDEKUCBAZYXTBEHWRLHGFIIUVJFSXCDZVKOIRU");
    msg.deadline = 0.9447873150810182;
    msg.range = 0.5795309804198768;
    msg.data_mode = 211U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.7304509729136691;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XCKVNTZRHBJWDJWCSJMERBQQNMZTZIOGLYMLSPRGAUIWYAEAQOMUDXVSTHDXSQANMIQRLASFILCGBOYVPKVTPAEEMCJJPCGJYEXIVKBGOLFXPPFUBYQTUIEFFQHDUDXIZOFCKCYNVASBAYYKFEQXERAVRTCNUSDNMREDGUUGCRHZZHWSPIZDLVZOZJFOXLBVHQONMWLCBDPWPFWXMSMOTOPKJKUGWHSKNZTEBTHLJLI");
    const char tmp_msg_1[] = {-12, -119, 36, -102, -68, 19, 110, -125, 112, 17, 122, -36, 6, -94, -39, -124, 42, 36, -87, 83, 115, -72, -41, -22, -64, -121, -12, 87, 89, 103, 51, -72, -49, 83, -60, -56, 65, -107, 31, -63, 73, 40, 94, 98, 120, 77, -16, -54, 69, -123, 120, 115, -77, -43, -66, 61, 109, 25, 114, -4, 11, 58};
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
    msg.setTimeStamp(0.6635832721951669);
    msg.setSource(33408U);
    msg.setSourceEntity(209U);
    msg.setDestination(22597U);
    msg.setDestinationEntity(227U);
    msg.req_id = 35975U;
    msg.status = 171U;
    msg.range = 0.8404563966202974;
    msg.info.assign("HXYWPDIVYXZZSUDCRMZAYLYCKTVQFXDFEQRNLFDURFWEOUXANCZTGFDKUEKNHY");

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
    msg.setTimeStamp(0.6807352838416248);
    msg.setSource(12617U);
    msg.setSourceEntity(87U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(65U);
    msg.req_id = 4055U;
    msg.status = 227U;
    msg.range = 0.07062100884173694;
    msg.info.assign("HDHIFFRWDIFHOZSUJLRMPFXZACHBYQHGLFIVZOROJBTGKCYNWPUAWNFPEBBSESKFWCEDJONQTWMCIUOOQARSCSTXPEPDESDVZRUXYDOBUVRKMUEMXCDACHVUALSXYTLIGLHMIQZHQCVGMKEBXMGZVBYPGQSDIVQIMKXWAXPDMQFBUORWRTIPVJN");

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
    msg.setTimeStamp(0.05327655199918613);
    msg.setSource(25864U);
    msg.setSourceEntity(210U);
    msg.setDestination(27235U);
    msg.setDestinationEntity(13U);
    msg.req_id = 54642U;
    msg.status = 254U;
    msg.range = 0.4086536020879087;
    msg.info.assign("LVMELOTFASCSBKXQZJEOGEJTUXTIPONYNJVUHRXJTROBJXZPLBBMQSCYZHDWSWJUMVZBIWKPCHYHBIFUFNIDFGLDMGFPZLJBNEUKHYQIYOTREPOKNKAKGVJCUCUAUNRLASHNWPVCVMXQZRQYPDNWPTRMGMURVSTQIYGGVQWKIZCHJOAENMAXFHLCVENOLBTHDWTWFDDSQTFIPIGBYHWXXQUWGJARYDXSKECPRDZALIXMBFEFDSQOYRZK");

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
    msg.setTimeStamp(0.6099266252360466);
    msg.setSource(53681U);
    msg.setSourceEntity(236U);
    msg.setDestination(11619U);
    msg.setDestinationEntity(5U);
    msg.req_id = 9790U;
    msg.destination.assign("MZCAYXVIVPSNODTLGTBSKMDTPFJHWSGURGCYUXUHNKSXMZPJNXFAKIQOTJQLBMOOIHUZROQETEOBCPIDBUWFKIAJEXTNRSHVVMKKCELKRHZZMXQSDJNRCOLCRDEAUGOWYAQZFWYQTGEQNGVYGLHRIFGMZBVFAW");
    msg.timeout = 0.9838143910185005;
    msg.sms_text.assign("AJYXBSNRUACZPTSYYCEOYWKMQFFHTZHVRXUQKPHBEPTIFMOEWEVHDJWRYXJTKFCHBBSNJRGKISLTBGOPNDVHLUOOLQLGIKNZACUQQLDGTXGCPZCAXMSYAWYBWOQYFUUOFTQOSRNMNUBMHBMVHA");

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
    msg.setTimeStamp(0.19601368894122795);
    msg.setSource(58430U);
    msg.setSourceEntity(121U);
    msg.setDestination(124U);
    msg.setDestinationEntity(225U);
    msg.req_id = 5923U;
    msg.destination.assign("VZDXUCUGXOXNEISVRDXNGRUZWJJZQWBXBRWPZOFHLJHOJNJPBQKETAHMC");
    msg.timeout = 0.12067391623682189;
    msg.sms_text.assign("UFOWSVEUROSPKJZCVQQWGOCBNCEHEHWTZXRLUBNVZFMDRZYEWNFHPRIVDUNXVLBMWNSWRFIHGMNOGDEHSRZQLHVAKTYYYAXIFRPAIASCICYCTXPWQJSJLKFOKPCBIVTMLXEBPQGPBTVGGEAUYIY");

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
    msg.setTimeStamp(0.004535194475604798);
    msg.setSource(47374U);
    msg.setSourceEntity(69U);
    msg.setDestination(21861U);
    msg.setDestinationEntity(126U);
    msg.req_id = 47410U;
    msg.destination.assign("LYMXAPDHXUJGTLRJYSINFEARDRZEYJONEIFAXFSVHTYOKKCQGSMKLSAHAOPBKZGWTFPDFERJVNTDGFPHMULUPHXZWQJPONKVINTQXLGSEEAQTVEVABIQQHZBWCABWYJDSMBTRXSRDGXAQNGLEJLNIJGYQV");
    msg.timeout = 0.019923122223768908;
    msg.sms_text.assign("KMFLVDPBQHRTDUYUPYLSJDKMKVWPRSHEOHCBOCNXQYANMXGMCIDXXSMQTIJWOZLAKLQRUYPBHTCKOIBBXJFXINCPYWEQTHXTSFOHNPKUTBLUNLQZEKFSFGDJLYVZYHINVCGVMZVRWNJAICUPCQWDBGTCRZSHATGWPOGPRXARWJALLFJQAEZZFDGLDVXGRXSMUBBKJJBANYGWFETIHGHVSOWIVEZMYNQNECJIZPVIUMMTARQDAEOOKZSEKFYUR");

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
    msg.setTimeStamp(0.2509593016549847);
    msg.setSource(22573U);
    msg.setSourceEntity(88U);
    msg.setDestination(8652U);
    msg.setDestinationEntity(173U);
    msg.req_id = 25142U;
    msg.status = 205U;
    msg.info.assign("WTFWZBLXMCNNVOKVQQOPOVTTYTDNYMZDSSIJYKNZCWADEPBNPEPGEIPYVQPSREKOVMDVOGCCKKEJRFIYYXNSJLACBAZVZILATLRQUTVBEMKRUMFMFHGFLIMZFSFXQ");

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
    msg.setTimeStamp(0.03417180616373605);
    msg.setSource(54967U);
    msg.setSourceEntity(180U);
    msg.setDestination(33942U);
    msg.setDestinationEntity(49U);
    msg.req_id = 47811U;
    msg.status = 109U;
    msg.info.assign("KLMRRGCBMCXCLPHZRYCENGHDFJWPVKQJWNLBSPITRUJUWZWIRUDSISBSKXYCENPSEBNGTGPGFQKFJVLMPLUHISBYPRDSDBXRFKINNIZBWVJGBYVEDNIUDNRMWTPAOAMXLMYTOUQFVCXTFJWZXJINXKQZOPAQTHWX");

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
    msg.setTimeStamp(0.36443253774957907);
    msg.setSource(36609U);
    msg.setSourceEntity(85U);
    msg.setDestination(7722U);
    msg.setDestinationEntity(41U);
    msg.req_id = 57326U;
    msg.status = 72U;
    msg.info.assign("SVQPSNCTYLHTZSMUYBHMSBPESNJCDUERFROUDZJHJTANMUUIMHLVDLOGAGFSTX");

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
    msg.setTimeStamp(0.33371466676588324);
    msg.setSource(4125U);
    msg.setSourceEntity(163U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(143U);
    msg.state = 17U;

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
    msg.setTimeStamp(0.3643422324913447);
    msg.setSource(3287U);
    msg.setSourceEntity(114U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(129U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.8916840074503949);
    msg.setSource(13732U);
    msg.setSourceEntity(138U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(156U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.26631464275816596);
    msg.setSource(28036U);
    msg.setSourceEntity(156U);
    msg.setDestination(58277U);
    msg.setDestinationEntity(71U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.08531967278492503);
    msg.setSource(57489U);
    msg.setSourceEntity(27U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(147U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.061169209736152474);
    msg.setSource(28175U);
    msg.setSourceEntity(133U);
    msg.setDestination(15858U);
    msg.setDestinationEntity(53U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.4912502110532898);
    msg.setSource(20327U);
    msg.setSourceEntity(148U);
    msg.setDestination(53882U);
    msg.setDestinationEntity(254U);
    msg.req_id = 53798U;
    msg.destination.assign("VLCRQYQRMSJZLSSXOGIHYNRKKWPTNDMTBRSFLMBI");
    msg.timeout = 0.4320995306257287;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.4811962236743411;
    tmp_msg_0.lon = 0.658081772471102;
    tmp_msg_0.z = 0.38124901998946203;
    tmp_msg_0.z_units = 207U;
    tmp_msg_0.speed = 0.9082504106461972;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.custom.assign("TZRQCJMZVXYRLZHSKSZIMEVEGOEFIDDMGGRFUCXISHUWAXTMJGSCVFCRJTZOAONNNKZWJNLBPAEKXRZEEXDHZHWLWPETKDBZOWPCKFCHVAEWEKDSTAAWVNUYMGUIWGQMKMOJPQIFPPTJOJBGOQLYGYKFXVBXNFBPVFDQKJALOACFCXSQFQVTRBCQWTJYBSUXUNAQLNYPLB");
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
    msg.setTimeStamp(0.9833986423652974);
    msg.setSource(41545U);
    msg.setSourceEntity(92U);
    msg.setDestination(39181U);
    msg.setDestinationEntity(88U);
    msg.req_id = 22733U;
    msg.destination.assign("MPFSARXFZSOFFJJCCBTBKUQARJBXHTWPHLLBMHUERJEQRFAIMVOLHMGIIUQZGYWKRHCGIXVJQIWAMUGDYOUJWTYUFPTKYMNNTVWXQAFLXRNSJKJOBGIKCXEEABQBXKKFVATNVZXQHZZQNCSDQSZSDRESUIDCFVIPGUYLVSDDKKEBZAOGWUTHFBCMGZVXLTSPOSWCYOABTREQPCWWZWLDPJINCPRPUDLYVNOXEHHZOVDAMRGIEMYEPNONY");
    msg.timeout = 0.18771249100144483;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 91U;
    tmp_msg_0.x = 0.7589287583955734;
    tmp_msg_0.y = 0.6619986557806962;
    tmp_msg_0.z = 0.23835877931833305;
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
    msg.setTimeStamp(0.6471253169998006);
    msg.setSource(33431U);
    msg.setSourceEntity(229U);
    msg.setDestination(10363U);
    msg.setDestinationEntity(198U);
    msg.req_id = 16314U;
    msg.destination.assign("LUXSLSUAGULEVURWKZLTAFBKNQTDKATHVCRGHSFQRCIMBYZMIOFSKDDHXJXBVEGLVEYGVCXBCEVJQRFQJZSMZTZYRSPPZHYILXEUROGRBINMYGUY");
    msg.timeout = 0.05437418443134601;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 151U;
    tmp_msg_0.request_id = 51530U;
    tmp_msg_0.command = 18U;
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 37028U;
    tmp_tmp_msg_0_0.name.assign("OENBKCDELFMEFVBIQGRGKOPQRGQZTXKORIWZXHRFOWMSNSNIJLVEHSVMIWQHADXEOCMDXEYFONKYNKHNADJULRFWCZPZRSWJARJEUFYTEXCSWYPGROUVWXJXVIHGVBLDPPIDWSJLXHYXUAIICCKGTWPPQBHZNSL");
    tmp_tmp_msg_0_0.custom.assign("ARRAMGSYGMRUGEVZICFTUNTHQDPZFPVJAOWGWZJVIHFFHLJGZXADUOXUZKPDOVRBKEYHIJWZDVLETKUGUHEQQKOIVBTCANOQHSRVNAEACWRWFARXNWVSALQFEKCMTLYBFTIINTGDDKGYWJCPIFXPYIICTHVSSBBYXMXQODOBKRUTFXHNHMLFOCNYYYWRHJPKQIMBCSZZPSWZBPLLEJXAODCMUGNSG");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 37470U;
    tmp_msg_0.info.assign("PCKNCFMSKHQDLWHOXNFPCVVPTDNPMJZULRPQVYXRGJWPWGWIBBVUOOSAFJAOYDKOSYPXCWHIOUKLLAEETBLSRSDIGQNOMBFITLFZXHEZVFHNXTCNMLBYQYRGJQDEVRZVXCADAISZSPPWDNJBCRUHTOZKUESAYHYMRGNCYFYGKMWTXVIETUMKRFGCJBOWHPSRSJIAUNVXXUZFULBAOZBTLXYQTJILERQIZKQWFEJQCKZMHQJG");
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
    msg.setTimeStamp(0.5888684884014606);
    msg.setSource(25389U);
    msg.setSourceEntity(46U);
    msg.setDestination(63909U);
    msg.setDestinationEntity(183U);
    msg.req_id = 56446U;
    msg.status = 16U;
    msg.info.assign("WVMECUTNDBYZHWBWDRAMQELRMZXOESTCYEUBHSTZSVMFIGBWAYYMVLVCSGZRXXZFLXYPHB");

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
    msg.setTimeStamp(0.6175657105264152);
    msg.setSource(56296U);
    msg.setSourceEntity(122U);
    msg.setDestination(34205U);
    msg.setDestinationEntity(155U);
    msg.req_id = 41311U;
    msg.status = 243U;
    msg.info.assign("XYRLMYGIFYIEEUSZ");

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
    msg.setTimeStamp(0.7407639797199475);
    msg.setSource(52598U);
    msg.setSourceEntity(33U);
    msg.setDestination(60839U);
    msg.setDestinationEntity(93U);
    msg.req_id = 38802U;
    msg.status = 167U;
    msg.info.assign("LHGNMTEISPBODKAIGQYQZUUVGRZXQGAHQFODJLUVHWLZJIIABQRFXVDFCVVERAKPCKWJVOMHPALNSBNHXJENGDNYGYZFYUAWFURYYSRUIVZTHXEDKIJDHPNUFKIOEOKOVUXMGDEXTWDRQYSNNYFUCEZWWMYAXMSBKCM");

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
    msg.setTimeStamp(0.35971173214613705);
    msg.setSource(40235U);
    msg.setSourceEntity(244U);
    msg.setDestination(55527U);
    msg.setDestinationEntity(58U);
    msg.name.assign("OVBSLSJGYFWWOUXCWWUKMPATMWQTABJGOPHVCNDKHRJHDJFKMVZCDSGTFP");
    msg.report_time = 0.5232273300162972;
    msg.medium = 17U;
    msg.lat = 0.5374833138181938;
    msg.lon = 0.9009982157033964;
    msg.depth = 0.19407164283120093;
    msg.alt = 0.18524718309668997;
    msg.sog = 0.6302490781308807;
    msg.cog = 0.006478578443370631;
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 10551U;
    tmp_msg_0.sys_dst.assign("IKTDQCTRNZRPTLUFCSXANFXYMJZWNJKJIDPEDNNRFBGPVOVBPBLZCDBXORJWZUHICGSDXDIMYIXHFCVEFHBWT");
    tmp_msg_0.timeout = 0.9571786962073839;
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
    msg.setTimeStamp(0.19049794832544487);
    msg.setSource(15181U);
    msg.setSourceEntity(8U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(181U);
    msg.name.assign("OUUJLSBFZTGTMDZHZQFMAMKKPALCDEDLGIWVURSPHPCHUXBKHWOSRZGINBDSCSXIFIYUQJNFPWTQXOQKRGNEB");
    msg.report_time = 0.17002907019735491;
    msg.medium = 205U;
    msg.lat = 0.8551904334911044;
    msg.lon = 0.9003134473952393;
    msg.depth = 0.9838776668612569;
    msg.alt = 0.9840848411847052;
    msg.sog = 0.6838797003455958;
    msg.cog = 0.4554460718205172;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.6347582755368016;
    tmp_msg_0.temperature = 0.8785253043173015;
    tmp_msg_0.depth = 0.7159119871725123;
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
    msg.setTimeStamp(0.4853731621049794);
    msg.setSource(16442U);
    msg.setSourceEntity(216U);
    msg.setDestination(5213U);
    msg.setDestinationEntity(79U);
    msg.name.assign("APZZSSUIJCVEITMOZBUIHIPLAQMSAIIDUYMJQYMWWQITDKBBIVGBBTXHOTHTQQCUPXGFWCZQHSXHRKWPLJMKSLGV");
    msg.report_time = 0.6811363023508595;
    msg.medium = 206U;
    msg.lat = 0.1723113581095248;
    msg.lon = 0.12369308489492925;
    msg.depth = 0.31157937334280317;
    msg.alt = 0.1489762470402669;
    msg.sog = 0.9827001635133085;
    msg.cog = 0.8528983758650752;

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
    msg.setTimeStamp(0.14066500040191132);
    msg.setSource(10919U);
    msg.setSourceEntity(13U);
    msg.setDestination(56962U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.3256132866201874);
    msg.setSource(18000U);
    msg.setSourceEntity(121U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.7932358809753438);
    msg.setSource(25220U);
    msg.setSourceEntity(168U);
    msg.setDestination(17645U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.5851287468763156);
    msg.setSource(10469U);
    msg.setSourceEntity(42U);
    msg.setDestination(2546U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("IWVFIMRIPVMHODUQXJGHALCCVQGOWZDBSQFBEOUZOYUWLHABNYUFQDJEKYNXCIBTOPBILIWLDLQJMCSEJQY");
    msg.description.assign("JGDBQINZXTJPRQWMFKLQHWDCLEAJYNVVIVVRGZUVTLSN");
    msg.vnamespace.assign("SGSXNQQPRPPFTLBYLLWVCOUYDQPWUCAVXWKYTUPZYFMKWNFHOQXPXNFSYMURJBDZDOSTIZJIATNQEZNXDKMFPQEECTAKFYQHIBMPVGACSCVXHTDPTXVJIDMHJRJUBYIJLOBGGSIEZTUAG");
    msg.start_man_id.assign("ACWCVUSSUBBEIWOPWUOCFOYPDDLUZXJVNGJXDFXTOSKNPTFYXSQCDKVLHXXMQMSYEALYTJOFHGUPNVKKEQVZLRCYKCGBCHOWTSRFOAKBEKQXOLDFVYAEHUNPLYCGCWMBWXJRJELGJTJWRETP");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 26289U;
    tmp_msg_0.lat = 0.1566341986677503;
    tmp_msg_0.lon = 0.9468098384938652;
    tmp_msg_0.z = 0.0859015335125708;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.pitch = 0.13219869799406592;
    tmp_msg_0.amplitude = 0.5173134663941328;
    tmp_msg_0.duration = 51502U;
    tmp_msg_0.speed = 0.6095547687297588;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.radius = 0.46772833971537375;
    tmp_msg_0.direction = 158U;
    tmp_msg_0.custom.assign("AKWBLQZSDAGIYRRAELTIIQSGOFSVIMDUSZLTYSZAI");
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
    msg.setTimeStamp(0.5415873129947881);
    msg.setSource(47647U);
    msg.setSourceEntity(82U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("LGKIVWXBEQLJKMHVBMIJHAQCRYHEYODDKWDQHEJATPTCDTPUNSLLOGLWUZFIHINVJCXRRZZLAFYXTBXMCOZIEKNOPIMAYNMHUCSZBMMYLQPKKZOYSXEVBUGETRSQOHDJZQWTFDPUFSZWBXPSKTNJRZAENPTUHEGYVBFUUFRUCPQYJSLAFHIYWVKTXKQCDMJPFGDXWZVJIBIGFGRKMS");
    msg.description.assign("IAVTQHFZZHEFQKJGHRFISSALPKBMBKFEMVDOCIISPZUYXVXZIFJOISDLBMGREGGSWCKBPPGCUKYFRYVTQHWDQXDWDYGCFKEATTELKJAYUTTYBCSROBZWDMQGHUEHSAXQVAZAJLTUJXGGMGUERNOIVVCRWPMXYNMNLHRMWOAAFWFDUNDOZISRQLJUBLVHJTPBQQPEZOWSICKNTXJNQTNN");
    msg.vnamespace.assign("EBNTCZDQIWVQRVZWYHEOUKLDTTGXNLOLTQDZKFXWNYZSMIFRAQJWVJPELKFBMJVMUGKHIKHJHTDVGSTTRGFUNVQQKIYOFDLYOOPTFPTFAKUWEXPCROQDPNKYZLPROEHAEMPJGIMHFMXJYNUWERCRAUQIPVYCJGJBXXDZGSOZBGIZSHCMXSSZWLBUHROWQDNGBQBBIACSMADEWGUFDKXMRSCCTXLEHYXVYRYNIPLBECFSCAJZAV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YIKOQNQZBQCG");
    tmp_msg_0.value.assign("THAQHFTPJUQPWFYGFQKZNQFMVQYVLYQVSXVIEBTJJDCUXAKOIHRSMIELXHBIJXRDWYOXBRLMTBOXBOLLEECMRBOJDKZPXZMPCULJRCDXPKYNDXAULZRFJWPNYMQNHNFOPCMCSRUIMVSUODUYHZELFFGOGDRCDWTIWNFEXMLQIBHMEPCWZEDSJTSGYSNKACEJNWIVGHGKLQWTZOKAZSBSGAKGGNFSVHRKITR");
    tmp_msg_0.type = 168U;
    tmp_msg_0.access = 37U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PHHAWINXVZREQJWSJSMQFLUFQDGNXZXLTRTRNRUYEGBTACAFINVLDZYZCBYGAAGTHNXJLTVPIABWOOTGEDDWADBYKEWYWTPPDCYIPODZHBDKMRLQFUWHSKGGUESHTMSBZFOMDXYFXKIFXXKHCPUYFQSLIVEDTALNHJIEWUVPMNVYVUOZORHJMVBPXERRSKOAFPNMRZFQJYKCKSQSSGGIJLJKMGCAJNVKQNHECLBCVZZCU");
    IMC::OperationalLimits tmp_msg_1;
    tmp_msg_1.mask = 89U;
    tmp_msg_1.max_depth = 0.8205073744584781;
    tmp_msg_1.min_altitude = 0.8628256997217242;
    tmp_msg_1.max_altitude = 0.3885116595381821;
    tmp_msg_1.min_speed = 0.2709015448394416;
    tmp_msg_1.max_speed = 0.9749109661504315;
    tmp_msg_1.max_vrate = 0.7575922280279875;
    tmp_msg_1.lat = 0.5199203692884472;
    tmp_msg_1.lon = 0.2103117426936162;
    tmp_msg_1.orientation = 0.43936528080258164;
    tmp_msg_1.width = 0.1939637456458546;
    tmp_msg_1.length = 0.3760498579014415;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexObservation tmp_msg_2;
    tmp_msg_2.timeline.assign("WASOHEUONBDWJPECCEZUGHNLITHXQYYOFIQDLSXLDURVWVVJIIOKDGFVVDZCLZUYPMRTSCRYLGUHBB");
    tmp_msg_2.predicate.assign("FIIPUDAEDBTRKSZQHERODYPNJFUGOZHLCYGFLDKZWMRKKFLCMWQBXJVBDNGVZVCONCCYMGYSKQTFGJDKSMATRDIXZUZTLRAKMBLAIHNLEMWALEZEJXYXCIWDTLIFPXERLDUCGKQSYVJLUKIJONPAVQBGIXOJOWRUZVHXPRBBCOIXNTTYXTTGUSBRWRQSAWJNVWAEQHFFHPYSVSAPZSXHBFNMIG");
    tmp_msg_2.attributes.assign("DHKXYVOJYHXHAZYIJQNEUXASQLMGPJQAFVROIORRDLBZBGJFGUJIPJPKTSJELDLCMURORCMSADSBALHAOQUWZNRLJKT");
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
    msg.setTimeStamp(0.23215748178318685);
    msg.setSource(46238U);
    msg.setSourceEntity(62U);
    msg.setDestination(13634U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("PYHPCWUGSFKMEUGAEAOPLSQJOMCGSHCFYSCEHMYYZOTITWWNOREIJMFDDDEDJCMLWOZGTUKQM");
    msg.description.assign("NEPLSEQAIGZONVENELQAKGRFBJBNLTREMLCYAWOMEIUHAUHOVDBJOLTWUZRDAYKY");
    msg.vnamespace.assign("ZEKAWSHNHBKYWEGIKMMSOWZNVNQSFRXRGACSABRDRPMZIEEULWNFKHLOYCTRODWEEJTKPVBDIIBWLKQFGVBSQ");
    msg.start_man_id.assign("YIBDZFAKXVJKJQZKQMVAGEWDSFIMNVGZQPFYVBKIFWFZPJULHSCTTAVSOSFPIXOWUQSOWJOJCLIZVFCBEPWPWWRJWNRGHRTTWQAVXUOKIOECLMLRNDSHEXXBYJHZVDHPYPQBHRYDARINLGNEDQAOKPLQZILRCYTCRAMAPZEWULMZBHLJKEMNBGCHAJKYYYSSFMXFXBBTKHD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RFZWCVNZIODCRMBZUXXYVWKGSOOMWLDXLYWHXSIIBGVVHCYONATICOPAPJONFTTPDKATVXNKDRGFIWCRSODXCBYKOZUIGEUMLVZFHWCTJLAKVPAUPJRQBGKCALQLEZYEDEXLBXKGDYMGQMNESBDXFWEHWQZM");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 24609U;
    tmp_tmp_msg_0_0.lat = 0.58628733769518;
    tmp_tmp_msg_0_0.lon = 0.2150299254589737;
    tmp_tmp_msg_0_0.z = 0.9690311339779998;
    tmp_tmp_msg_0_0.z_units = 162U;
    tmp_tmp_msg_0_0.speed = 0.7959862421901536;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_tmp_msg_0_0.bearing = 0.6659476370716941;
    tmp_tmp_msg_0_0.cross_angle = 0.940255404284098;
    tmp_tmp_msg_0_0.width = 0.13944380208464935;
    tmp_tmp_msg_0_0.length = 0.8128897884711498;
    tmp_tmp_msg_0_0.hstep = 0.9222586154276181;
    tmp_tmp_msg_0_0.coff = 68U;
    tmp_tmp_msg_0_0.alternation = 200U;
    tmp_tmp_msg_0_0.flags = 68U;
    tmp_tmp_msg_0_0.custom.assign("GOZHZWFPNAHMJTUUAHUXLASGGFCMEYZINZVXOYDQZSBXJKOEWJTBRMOZGNRRTTURNHZVNWAPMSWEMFLAQPIQVMIDTAHVDABWJVYLNKRYLDLFOYIEZMSPCPHUMPIUCIVBSUNHBRXUESFCAQSLWJGQKTEVDOUIUCSTMTBJGLIBKGFKXAJKKWNECTMEFQBPEWNQRBKSQGLJTHODCXCKVOLRVPYIYKOXRYXQCPHDXGZBHJPDYAIEQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AutonomousSection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.27047664367460433;
    tmp_tmp_msg_0_1.lon = 0.5967124760516601;
    tmp_tmp_msg_0_1.speed = 0.672723630045815;
    tmp_tmp_msg_0_1.speed_units = 83U;
    tmp_tmp_msg_0_1.limits = 96U;
    tmp_tmp_msg_0_1.max_depth = 0.9119537268070372;
    tmp_tmp_msg_0_1.min_alt = 0.5028442493200161;
    tmp_tmp_msg_0_1.time_limit = 0.4698817124935285;
    tmp_tmp_msg_0_1.controller.assign("YGZPMTVORAXLTWISTYUCKGVXNUIXNCZRKQTUGGUZEVMQBYFAOTONIHQPDEMZSGTYRIWOKFELTCSABEVXLJMKCQIXFKFJADMJSZBMJSAQGVBKGBBNODKZLHRFGEX");
    tmp_tmp_msg_0_1.custom.assign("WBWBWSWGIAKBQVEJPJFVGZZZOCULDLAHZIOPMDJMUWRZDYAWDGWGUIQKIKNEZJHDVEVOSRJMOLPWRFYVSGGHTJNPFBQEDOYNPKCFDACCVYXEFUXLFLRFLMPIDYOPQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.7113801075029431);
    msg.setSource(43347U);
    msg.setSourceEntity(195U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(93U);
    msg.maneuver_id.assign("PHDBEFACDTOEMDVZSJCISOFAMVNDYHKJJYSHCXSXZHFPXJYRKCURYAQKWLJOOEQGTZQQBESIGZAMGWJWSMRNCVUBXNBTDQEDETWXCIZBFMGXRAVOHLJMYZHGLPZYBHLSPJBSPAZYFCKLRRMSWXOWJQK");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.18002771963827535;
    tmp_msg_0.lat = 0.8972734470063882;
    tmp_msg_0.lon = 0.5825419199194743;
    tmp_msg_0.z = 0.6022328136842153;
    tmp_msg_0.z_units = 4U;
    tmp_msg_0.travel_z = 0.9827702050307057;
    tmp_msg_0.travel_z_units = 250U;
    tmp_msg_0.delayed = 97U;
    msg.data.set(tmp_msg_0);
    IMC::RemoteSensorInfo tmp_msg_1;
    tmp_msg_1.id.assign("QPOXDTCBDAXFTVVWLKAWMRZDYEHRYNHBFPQUHIWMZPHJKAUBFWVFWZZNKEEETULEWAQCCYYEOEWXOXCKXPBAAGBJPQNGHYZZPUGINETRFFSHSMVDMRGZQLUMUPNSAGUSNQKYXSKQQTQKYDGSOOIXKUEHHRDJUSKVSAGTNGSIVDILWGHJIHCEPTLAFXCVUDBOODOMIBQGYBSORLRVJCCLJJNYILXNMFO");
    tmp_msg_1.sensor_class.assign("IJMSWBCYPTBMVFMHCKPYCXQVRXTJBLFQPQNLBEFHWHXISVNMESOJGEQUUAZBIEEDY");
    tmp_msg_1.lat = 0.9019191165052166;
    tmp_msg_1.lon = 0.9447992655285457;
    tmp_msg_1.alt = 0.9623258483088398;
    tmp_msg_1.heading = 0.5163861550610668;
    tmp_msg_1.data.assign("DESXCXRMQOTDXQOVDVYPHPYFSLXMQBAIFWCFXYAIJRZMRLRVDVUKSPPKILTIRCZSKXWCLUNONWCJREENINOJURUHMTEABVMGYXAFEYILBCOPEOTTLKSALQGAMTIAQGBNMUS");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.31698539618188915);
    msg.setSource(34980U);
    msg.setSourceEntity(177U);
    msg.setDestination(2878U);
    msg.setDestinationEntity(12U);
    msg.maneuver_id.assign("SBOREPYSWNWHJUSWMEHBXEGMXVRZCKCQPBTARWUQZLIRLWUGNFPDOQTYYLMKGNFXIAKOZFPHABDAMXXCACDVIHTJDBWFDPBVOJVLKPSODLYGNKXVGGGNUDIVZPEJVYTREQBOIPMQHNCIELDDBZRMZESAPCZAFINVGNJUSULYRZMZTJOYYBTCARQPFFRFQUAISHHQ");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 3865U;
    tmp_msg_0.control_ent = 187U;
    tmp_msg_0.timeout = 0.08909750018041429;
    tmp_msg_0.loiter_radius = 0.4690771844132683;
    tmp_msg_0.altitude_interval = 0.4478563868387585;
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 8976U;
    tmp_msg_1.lat = 0.13818964491227148;
    tmp_msg_1.lon = 0.049011457337101993;
    tmp_msg_1.z = 0.514868989730858;
    tmp_msg_1.z_units = 233U;
    tmp_msg_1.speed = 0.0259096944470395;
    tmp_msg_1.speed_units = 198U;
    tmp_msg_1.duration = 17559U;
    tmp_msg_1.radius = 0.4314235785870917;
    tmp_msg_1.flags = 135U;
    tmp_msg_1.custom.assign("GUCYNQBRQTAQVPOYEDWTMOYXVYTMNAQ");
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
    msg.setTimeStamp(0.6627380395422792);
    msg.setSource(41566U);
    msg.setSourceEntity(106U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(193U);
    msg.maneuver_id.assign("QLXDUEGPUATSWCFONBZOMRRCUIGTNFVNJYIEPFXNOTVGPWHJIMYOVUYVJHOHUWYGAEYLAFUOMSXEWSBQUJOLMKJXZRDNQGECQBIQKQZLZPBSKXXKFQZWJFAHCCBOAGRVJRGPHSITFHMPWRSAMMWSZVUYCTJKDVYZDYPCXCTZDLAEBNLSKIVBBXJQKGGTASXOWAKVZTFBZXRFECHLSRTINNMHRKFYENHWVJDH");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 58135U;
    tmp_msg_0.rpm = 0.3626424570686305;
    tmp_msg_0.direction = 244U;
    tmp_msg_0.custom.assign("MEZEAQSKDGHBHUGRVQPWNQOVZWLKAKYJMNDXCGOFITUVMCNGTEKMYICGZNSFUBQEAOIWAQNNOXGBHLHIMLHMEZVBAOXCBRKFDASRTOEQTYIZSDGBTPXTXFQNPSFBLWFRTRCYHHVGXIDYMYYSHPTXKBEXVZQVRSXLSPWIFUUDZJFCCZIKEWBRWSEOWRAUJNKUCNLPGDLNLPAYQIBCJ");
    msg.data.set(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 51U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::YoYo tmp_msg_2;
    tmp_msg_2.timeout = 23495U;
    tmp_msg_2.lat = 0.49004595732225154;
    tmp_msg_2.lon = 0.2918249839683281;
    tmp_msg_2.z = 0.3335428277830411;
    tmp_msg_2.z_units = 150U;
    tmp_msg_2.amplitude = 0.5669138298084382;
    tmp_msg_2.pitch = 0.07214871149712332;
    tmp_msg_2.speed = 0.9125971836082976;
    tmp_msg_2.speed_units = 243U;
    tmp_msg_2.custom.assign("IEXNUNIKXUYGNCNOQSMICGEHRVUASMXDFKFJPEHJSGZVJGCQKTBQLLIOOYXYVPIOFAYLZUYHLWRMRECTSCZDPCQUXTNAHJVGGZRGDYURZIVKDWLLJPSHAHTQFSDAZVOHWWJOTLNPXMRVXCKBBWJPWHRJBWRXNQFBRQYKBYMBHZDDYUCBHTPZUUSKPCEPFBESMDTDAFQNKTVSNMTSFEJYLGDGTW");
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
    msg.setTimeStamp(0.37708045010646374);
    msg.setSource(5475U);
    msg.setSourceEntity(193U);
    msg.setDestination(45370U);
    msg.setDestinationEntity(228U);
    msg.source_man.assign("UZLUOBPPHJYSYESXMIJVOZIUDSNGLDMMFTIZEONLARCYOAKIRRWJUQEKXBNXYNWPLJWKOLZTBZSWRPDFTXXSVGCWQNGENKSCRFYCZXXKGYQUZCWMLJBLIVPSRKVJTTZAPNLQIFFWVTDAJHKCPABOKRWOYOQEHFVEWHFWL");
    msg.dest_man.assign("AKDQDJWGSCBZSWLIVUJODWYWIDOMVVKJPJANUEGEYHFXXEYRXZIXLIJEIFGKMTYFUKCRSHXZBXKOAGFWHRVPRFMSSTCILXFVTUTVPRBNPOTMF");
    msg.conditions.assign("AOCWKUJDVAGVQXPQPTIFNOPIHYNWLVTIWNRMJCUIFQZYPPKDEUDBAASFPWLDFVOYLHGJHXWELMOUNNYHBWIRKUTFWZTWSJVYGEZORXLVQPBQHOHJNRDYUOCSQMBNFNTKSSCIGAWYFUMZTRKIRZLAEC");

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
    msg.setTimeStamp(0.23567310527660534);
    msg.setSource(3604U);
    msg.setSourceEntity(238U);
    msg.setDestination(14009U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("GOCBVCDSIIBBFQCPUDYPUUBEPUITPQNAWJIOINENNRMJFGQGEUGUDAVWJVUROAGAQTKLQXZKEMFWXHJKCWFKNCVXJHZZNZRHOBKNGDOYUKVWLFSBTQJLVJMDNFPYKVRDHXWEETYLMSBEBJMISOL");
    msg.dest_man.assign("GXSWHCIGVKXYRZFJRMJEAFKHSEPRFQYOUQBXGXBBHXMBUCQYDQFHMAJRWWVWZHUDGHXVASXCLQOUQVLFJTTGKTKLYEYTFKTBMPLHEDLVDJLAOCYZFJGNEOSTFMGUKGBGSNCWVKQYNMCRRSQIELWPRLCEDEZCEBJJLNPOXKPYDKQYMURZAIPISPMXANNWDRUZBLUAWQWOWIPIDFVRBMZIEVPDKDVOOJJSZPIZSBZAXNAAFGUHNTHITCMOCHTUN");
    msg.conditions.assign("MARJCFTMOHBVLSONADKGEAOPSUCTYXWOIJALEURQWNIUBNJHSYIFGNAESGGRKXPSUOAFZZEXULIJBMYFKZWSAHTNGTAKNULQGRRMMZJHONPMXVWFOUXEPBGPIYOJVFTCQXMVNETPDYHRCBQBQZYICLLLCKJEVOHHLEQFGLHGILCCVDTZVEKBYUOMIVQRTXEWH");

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
    msg.setTimeStamp(0.3226315554369945);
    msg.setSource(43978U);
    msg.setSourceEntity(228U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(96U);
    msg.source_man.assign("MRJQANTUXJYRXODKHHSMCSDNQOJKDDCLQNEUEOSHGXXCWSSITRXMPEKFFFFXBPEEOMTBLZRDTJ");
    msg.dest_man.assign("KECRWJAXYJJYXOPQWIXXWLDNGEXTFCPWRDKOIVADVMGTFPHAVTXMBSGVDAHFEDDYSHPIJMSSZONC");
    msg.conditions.assign("UNVVXIWOGUVBQGCZTMOQPARBBHDTYPYKJRUTDUNBNTSIKHQBGLSLWLEBYGSVTOAJIPIFHPCFKCZJHALRMELQSFOHRFBQZX");

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
    msg.setTimeStamp(0.36021359562639454);
    msg.setSource(48718U);
    msg.setSourceEntity(184U);
    msg.setDestination(62873U);
    msg.setDestinationEntity(217U);
    msg.command = 214U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KCRBGIVETKURUXHKRBWZUDQILIKFKBTFOWOAPZMJGSHOHCYXAYRNFZOVPMCFFVVQILAFKZNODHRCDQIMVYWXMNQUZLDOHUTDAIASPLBEUPFHBISKSQJAYVCQOGEIMWJZTJYBHPPRRJVWCNTLZJLDCFJKMQUADRWLIQWNESSFHEYUBREMDGMKAPEEJTHTGIVNSXSXYAJLZBQWZZEGNBXXUYDWMLAQBDSGGOPPWVKYCOPXGUCHSELTMVYCGTJX");
    tmp_msg_0.description.assign("JZOXRMNBOHNDAMXCPXLDBHWUIOYEWJAHOBRVIJRSMPRTLNVGEPZFHZDVAXDHFUWSOGEEUNLOKBGCGUQXULBNXVWKLWVYHPFWQVFY");
    tmp_msg_0.vnamespace.assign("VOMNENCFFRIOBBFZLQBIJLOCGBBRGCWLVQMFOGQAIZPVQPTZLTJBSFDMAYHHMUASPYSTZGHSLFSVWBKIXVYWZGDWZHKTXDDVWUJPUTJAVITKCDROAKWCPDHXBESIMYOVOCXIUN");
    tmp_msg_0.start_man_id.assign("CBIMNSDXXGZBKRYOJNNOELXZHTMIHPNJTZMUGUCTJSOVRKIKKIVGYDPTTABDKWNJGZQPCOHUITCUYFQQSWLAWYXPEDBLAMVJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZYOKZIHBYMKSBTPLQEGDWOE");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.18377148364165585;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.237760234855529;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9014293968790826;
    tmp_tmp_tmp_msg_0_0_0.z_units = 79U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0817536654752461;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 241U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.0074880749853446504;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.01586990040755809;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.6512081088164268;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.53029147040431;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.vid = 42782U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_x = 0.4353686284873445;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_y = 0.6501559178737918;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_z = 0.24169108455389832;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.5385213630874538;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZRLUTUTKSKGDGVALKWTNKVDBVFIBRWYC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SoiCommand tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 237U;
    tmp_tmp_tmp_msg_0_0_1.command = 100U;
    tmp_tmp_tmp_msg_0_0_1.settings.assign("IZQZLURJDOCMXNQC");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.plan_id = 2562U;
    tmp_tmp_tmp_msg_0_0_1.plan.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.info.assign("WLGMTYSQUYZUAKXOHENDXMLITDSSNJWGMYAXAABJGIMUSHOOURJYOIMK");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FollowReference tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.control_src = 18822U;
    tmp_tmp_msg_0_1.control_ent = 254U;
    tmp_tmp_msg_0_1.timeout = 0.6306025228838091;
    tmp_tmp_msg_0_1.loiter_radius = 0.792959837538551;
    tmp_tmp_msg_0_1.altitude_interval = 0.26816955629413675;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::FluorescentDissolvedOrganicMatter tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.6053810953683136;
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
    msg.setTimeStamp(0.7490158835084062);
    msg.setSource(48782U);
    msg.setSourceEntity(8U);
    msg.setDestination(15631U);
    msg.setDestinationEntity(39U);
    msg.command = 9U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TMBDPZYVSRBCUMYLHPJJWWHSVYKQNAXPFULGCOMBUPWQADIVZOZTXQRDXLNWEKCMAQQDSOZUXSSMTEHOHJJNEBOZBVFJYIPETSISYSDEIVNDXGUNJHECYZEQRTGNLFQEWQVHMRSDKUCCZUAKRNOTVLGPHVIAFFKDIFMRLCIAGSCVERYNHL");
    tmp_msg_0.description.assign("GSXHHCQACPVKDSNJYFQBAVYMCERSFZIQLPIKTBAGOEEFZRYUUMOMOMODTPYMZIJXXWCZBCBVLSODQHKGHEULXCYTCFXPZWUFNAERJNFYVCKJHMBRKAGGSVBWWFJPZJJXREPUFTPBTZQNIOAMGYIVKRRIWFLAHDESKPTGTSATHXINQLSTXSUZOCPIGUAQVEDYGLWWICYHLD");
    tmp_msg_0.vnamespace.assign("OMNMRJBYULOFGDSSEVTCORKDENATNZFXRNKZUYLESLNKABQOXCIKBHOVZISDDJNGPSZMUCLFEOWDCXYRCGFUMZPATVSITQCZPYWVWWYMLQMSJDSYUHLHKJFGQEGHWCBGBYOVVDQVRTBJGLEDGYQAXRINXBKIKZEIUHVJXWXMEHTPJPFDIDWBQTQXTPHRXHILBYWSMPFCNJBLKZWMRJAEPFFCRUAAGTAARFUPNMQS");
    tmp_msg_0.start_man_id.assign("OJBKEJAMVTESRGFCKWWWDVRVJGQWMXJOIPCMMI");
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
    msg.setTimeStamp(0.06979838037456432);
    msg.setSource(50012U);
    msg.setSourceEntity(233U);
    msg.setDestination(39636U);
    msg.setDestinationEntity(79U);
    msg.command = 136U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VLPYXDSBTHCVBMQJFNMSTJHGZBYAIWARVERRDGDBTBRKVSITCUZLMAPLGBJLAJEYLSXEXWONZVQOJRCFDWOAMFXJJZWENDCAFPWJDVHXKZEPLVQUCUGHIGGDMOPWEQHQNOISLERNDBYNFSYWFYPHBUOLARJWATPXHLZQMETTCVGURNYMKQQCYTJFKBCNUHSGAEZHPOHIWUPUNDUKZRKSTSXMGIFUSCYXTXGABVK");
    tmp_msg_0.description.assign("IMCUAVOLAVIBTQKQZQSBHFBHUCHEZPMFZTXQVXGURXECNXPFUAFVCEURJXWKRRMKBBRYAEMLXDVKMNQELGCZAUAONOJJYNOTGUHCHDZNWAGHYZHTTSQIGOEPFGRVNQCDGNXXSEYLSTMQCJYYOFLVSVOYDWTYYMDIRBTJWTUSAJJEDRVPMLBXWPFLDFLWQJESPMKIJWRXUPKRBGFZZWKCWSDKPCSYEPNASIKGDA");
    tmp_msg_0.vnamespace.assign("TCXZBSRNQVEPUJZGJZDLDXFGVBWVSMZBSEYMLKFLNJWALRKQTCPCNAQHPYGHYMOOXQUZYSVNGUMTWZZYUFUVMCXDISGPODNOKBCJYFQXUVZTDCZBFDSPQNRRFAGKWZSKBIICQPXQCABDLRMDATQAEIGHXHEOSSWLOELJLTIMO");
    tmp_msg_0.start_man_id.assign("FHJFQPJWBUBCRDUXKQIGFONAHIRLULJTHSSQWHQHKOJQIBIZDNSINLJHBWPPMAUYVNVMFJECAOLZXPIFTASADLCVSSUCMVGJKYIYDDGRVWJWOMABTLTYEHTDCKZCBRYCYWMHUAMPDYORWJLUTGMXXNAGZVKMPIKNJDLAEFXAHCZNNYBXVCSTIPVVWMXPSUOTXQSOEDLRWSRZTFOYUEEEKWBRGRBRFIEXXQDZBUEKF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RHJKMLZQVMMPNQURGCWEJKTKMAPIYYBHZYJJLHABJISRMJXQGOAOWTNYAIOVKHWBXLIFTPKZCEKFSSOCANOURDUSXEVUIBIGWUXEYYTDUANHJXGLHWVNWELSENZTDGLVXICUMCSBJRDDFASMVFNPGLQPXQZYTZUJRSLBTTDJVWNHBURYNHTGDYZLQOAFEWPIWUPWECMTGFXCGOBLCSVQKRPDXQIXZEVOHVQQFNMEPDFZDGMFKKYKBRBRPZA");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 65159U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ONJWUBDDODXZQXUIPSNIVWKVHLHUEPDPFRVVSKAQEZCMBOBNVOPJPWSQNFSPBQAVCLIQRXHLWKFTGLHOFEBZSJSHYODGMWEDXKK");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FRBJPATWJILRFJOYLGCLMIXGEPOZYIKTEOLKFLRSHPBCMREKKUOYWSQVRYEGMACPFNNRZNDECLSAHEKNYAGDWBVNHATFBKDHXBMUVIU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PXMFKCOKELISTUIHRNADVAPGBBNBMZRFFSTYJAMXQPMDUTKDVEOTSVMIWZRUJLAGRGVYSRMRHYUTWRCJASEZNYCFNMMMZQYBPAPZDODYIFBEZNQUCIDBJLFCXGCSNWLMZJQZEKIULYGXKVHFSFTIXSXZNGKWEVOVQWQQOJHNTKTOBWRGKL");
    tmp_tmp_msg_0_1.dest_man.assign("TLFTLVHTIWBZOEAVVGCIUMLFXUCFBEXUAPVURZPJONKUSIRSCKTJOPKDMFCNPEVUGHOJROJHXMHYJQGRLPAWFWLJEBTJSMYKCNQIHEDCVHXHBMXLEBGKANSQBFRFHZAVROWRZEQIMD");
    tmp_tmp_msg_0_1.conditions.assign("VAIVLQKMTFJGDWMRMXXGDQIWRLPOWPVLYBEAPRSDGNCKRDDSVAVRPHPLAUNOKFECJMNCXEKTOHKIQJAYZLYSUBQTFBKGREQVOLWCLDASAAYLHQIXWQTMCELIWENTBFOGXKFZWGUBTBXURQTEAZKDDNCNZNOWFQHULTPTCJSCZOPBUFSXCTQJMZNHFIGZBHGEZXOGJEPIBMMSRSGSRUVFHXWIPVUJFKVCIJYMNYDYAMNYUWIHX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::TrexToken tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeline.assign("ORRIHLZOBSOHPTWAOSEXDCEBBNPSIFUDLEJIQZFGYBQQIEDVMHMMLASYDOMGTZLJFZVXGCNDCJXIKUXJVUPCIRCUWHKFGTTALWNLAYUFPKQEFOUYGJRXWRWAJJYCRCPNDKIAMBTVFTNWPKUDHSVWQMBPUHSLUQZVMGAPGEDTQDZCBRRLSSBTXKXVJKBXSGLXPEMGTYAKYJANXNZWMYIIKTEBNSEOOZCVFOYEHQHQVQWMYIRFANZGCNRDZLPUW");
    tmp_tmp_msg_0_2.predicate.assign("FVTJIXTKXZRYUDPANGREZAKIRBOCOJCRZLHECKDDJWWKVQHTIKACKSEFGCWLXSLGGYEZZECDQBRMIXVETMVIITUBPUDOILHEAMSVAVQTHVCIIQXNBJQEROACLMZFJPPXHDKJSUFHRVWRQLMLGQOBPOQGSBZZKYDVSYUSXLGHBEWOTUFTNLDEFATYJXPYWTBMQASAIADYFMYYMJPOLYMPZCDONBNG");
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
    msg.setTimeStamp(0.11161031143175726);
    msg.setSource(23527U);
    msg.setSourceEntity(218U);
    msg.setDestination(2689U);
    msg.setDestinationEntity(8U);
    msg.state = 151U;
    msg.plan_id.assign("LRZIPHCESBXHEDEUDNZUTWPHTHXFPZKNACNYGXZCYMJSDMWKBGAHFALJCRIYALGJIWZVDTLRHFAJFVSGSOMUSNIOAEPODQWUMMIUOFKRRJBDEZFWIVMZEURNSXZEPAUTXZRXKXNKVDNIBCECLFNDYVJGYOMJAWTOEPCCUPYUAQGISJQDVOQLNWITGOVTKZHUOXJYWMKSYLAIXYNEHQQBFQVMTTPPVYSHSWB");
    msg.comm_level = 223U;

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
    msg.setTimeStamp(0.6218311221592467);
    msg.setSource(9088U);
    msg.setSourceEntity(12U);
    msg.setDestination(24583U);
    msg.setDestinationEntity(184U);
    msg.state = 54U;
    msg.plan_id.assign("KMIYGMUEARBWAFRXYCHDFSYCIXSKIRDSNDXIEGXNFOZYQZUGWGIUDZQTRKJJJMPRVCYNRHRFTLGMVBCRZFSWCLAOKICFZYEVZBOCIHKVUSVLNVQMGTNAFYERAQHGBXNTTKZKGVBUPVOCDZJBUHH");
    msg.comm_level = 115U;

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
    msg.setTimeStamp(0.1845727941473374);
    msg.setSource(36527U);
    msg.setSourceEntity(111U);
    msg.setDestination(50511U);
    msg.setDestinationEntity(149U);
    msg.state = 252U;
    msg.plan_id.assign("HITMNOBJTKFIWWZLILFYSKZHCJSTULBHYOJDOECWM");
    msg.comm_level = 248U;

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
    msg.setTimeStamp(0.5963378041074705);
    msg.setSource(19806U);
    msg.setSourceEntity(46U);
    msg.setDestination(11024U);
    msg.setDestinationEntity(240U);
    msg.type = 185U;
    msg.op = 90U;
    msg.request_id = 55645U;
    msg.plan_id.assign("LWFBHQAFXHMPPOUUMDMEDEIVEUMPSUTSFTBHWDQORVJUYVJTHZREPYRTEECGAXQNFNSESXXURGCANMCUYVXDQMLHZLKFWEVAIWCIIR");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.6350069531702672;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XCCWWVLHSEYLITMYENCMNRJSFUMFULQACOERHGSMKCBJINLXAODWCAEXCBGSNMQZIHAZIRDBIPLIOOGCYFVZJCFFGZQHLJXKORUNRNSDCASBRYMJTDPHPKTXEXLNNTWUAPYWPFIUHIV");

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
    msg.setTimeStamp(0.11907673406074792);
    msg.setSource(37140U);
    msg.setSourceEntity(162U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(57U);
    msg.type = 116U;
    msg.op = 59U;
    msg.request_id = 3051U;
    msg.plan_id.assign("AIHVNYZAJSVIEHLCZQXRHECZVGBHGUBVVDDKQPCMLYDOCCMZBQWNUGIUEMZTHEOFTKFWAXTNTBEUJOUSLAZCDTHWFATYVSGKYATGQJGOHPONXSEWJFZDLURXCINLJDLQZGRBJIQKDNFXXJVKKWRDPDSJYMKSOCWNUPQFBRNWBBEJMNFPHYVTFESFZYXRGRGNOWUOOVPJQXCYYPPRQHUYHAISWXLOWCSRIM");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.6812458239285722;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YYKWUBPETXESQZWLYUTRTAYSJWBVXPGOGODAZZLFOZMYTRBYFPICZVJLHBCLFQPJUUWHMBDLZVUOTTCNDRH");

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
    msg.setTimeStamp(0.39336639594300704);
    msg.setSource(60411U);
    msg.setSourceEntity(72U);
    msg.setDestination(58419U);
    msg.setDestinationEntity(233U);
    msg.type = 210U;
    msg.op = 185U;
    msg.request_id = 32948U;
    msg.plan_id.assign("VESQTTGHIXJQFBRNPVSBCEAHTYDFDVHSGMTMLTLGJJSOMIVRHIIOLUWURSWBPYCAOWYQGFOTVDLSLDIBKUYLMFJYJUDLIYXDF");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 55422U;
    tmp_msg_0.flags = 163U;
    tmp_msg_0.lat = 0.5203783101366568;
    tmp_msg_0.lon = 0.5187560085895809;
    tmp_msg_0.start_z = 0.6459606660675495;
    tmp_msg_0.start_z_units = 241U;
    tmp_msg_0.end_z = 0.7792777941696456;
    tmp_msg_0.end_z_units = 124U;
    tmp_msg_0.radius = 0.6145109606488909;
    tmp_msg_0.speed = 0.05734635614173278;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.custom.assign("ESOCRHZMRMUBMYUEXUPHZOYHBECBKXGZABLOBVOWIGNAGUVBZDLDAZCOQBQQWKFFTSLIZEFTSTPIGFICGIPPFDMUYMMMATHSRJURKHMUJEXPFYQCDJLDSVCNATXKBQTSYTVSAKEWDKGRDUMGAQZTJIJZXXGHITXXWPCZISUVELVWBHJMKHAKOENOOT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZNZVPSXEHHUFQEJKSBTVDEDMRPOJRGOHIAWYQMYZPNNKVFEBMYPBBACAUFAMENXL");

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
    msg.setTimeStamp(0.995429662501278);
    msg.setSource(41968U);
    msg.setSourceEntity(162U);
    msg.setDestination(46426U);
    msg.setDestinationEntity(61U);
    msg.plan_count = 10001U;
    msg.plan_size = 1911859700U;
    msg.change_time = 0.6945261062355359;
    msg.change_sid = 10320U;
    msg.change_sname.assign("LOWAFJSROLYWGSLAUPONITFSXYMDEVOWCAZSCPWFFKNSDEVHGPDTDSVEYYUBAEUZDQUZKCBHQOTRRGRTZPDXQRMMSIULNY");
    const char tmp_msg_0[] = {49, -1, 79, 77, 37, -3, 116, 81, 40, -108, -51, 3, -87, 81, 4, -19, 58, 45, -51, 35, 44, -87, 15, -63, -45, 39, -112, 50, -108, -47, 47, 122, -1, 80, 29, 106, 78, 89, 39, 78, -99, 95, -30, -48, 29, 74, -63, 85, -26, 52, 27, 102, 15, 108, -123, -63, -59, -99, -21, 109, -92, 12, -84, -124, 30, -101, 63, 82, 51, -19, 72, 64, 83, -15, 2, 105, -107, -84, 25, 67, 48, 40, -108, 120, -26, -33, 90, 70, 71, 124, -16, 64, 120, -62, 73, 107, -103, -34, -123, -81, 124, -50, -37, -14, -34, 100, -19, 28, -72, 55, 117, 45, 55, -99, -58, -77, -20, 102, -13, -67, -39, 8, -111, 99, -42, -49, -18, -57, -76, -99, -125, 83, -35, 107, 11, -72, 19, -6, -59, 85, -103, -39, 94, 31, -24, 65, 11, -43, -84, 38, -55, -46, -127, 20, -7, 88, -28, 36, 111, -125, -12, 117, 32, -55, 48, -49, -87, -123, -40, 30, 53, -118, 44, -104, -99, 24, -106, 16, -69, 96, 83, 62, -60, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LQFMCABANWXGYPJWEMEYJXCGINULMFVAFRIUUEQDKOAB");
    tmp_msg_1.plan_size = 50793U;
    tmp_msg_1.change_time = 0.7893871018400886;
    tmp_msg_1.change_sid = 61668U;
    tmp_msg_1.change_sname.assign("XNOZKRHGSHIWUJFMPMGNJJWIJRVZXYZUUPTKBLNSLXTMWKVOCMNGINPDVWQABBLRLAYIAFCPKQTATFKYXFGETVIUGZVBQDZOOPMKSLMCQXBPBJSIYFLJIQNNLCNESCFOWPTEXPZDSQRIEUQGCBBRAWGGWDKPTWEWLSCVPUVFSOOQDYHILKFWXHJQHHRCECVABESMZHUJDKYEOAHDATM");
    const char tmp_tmp_msg_1_0[] = {65, -33, -77, 14, -83, -92, -65, -95, 4, -9, 104, 92, 35, 17, 62, -119, 103, 63, 122, -5, -29, -15, 53, 70, 6, -122, -96, 53, -53, -39, 15, -126, 91, 114, 25, -45, -128, -29, -29, 58, -20, 102, -18, 46, 105, -7, 90, 10, -109, -97, -89, -26, 124, 55, 17, -121, 18, -4, -13, 71, 59, 98, 84, 78, -62, -93, 14, -103, -84, 76, 42, 26, -88, -1, -12, -7, 33, 123, 85, -94, 55, 123, 12, -59, 66, -58, -120, 25, 2, -88, 59, -96, 16, 94, 102, 30, -85, -92, -70, -127, -10, 111, -96, 89, -10, -116};
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
    msg.setTimeStamp(0.5489296555872542);
    msg.setSource(55181U);
    msg.setSourceEntity(122U);
    msg.setDestination(17757U);
    msg.setDestinationEntity(203U);
    msg.plan_count = 54688U;
    msg.plan_size = 1816440853U;
    msg.change_time = 0.4090213819265308;
    msg.change_sid = 7245U;
    msg.change_sname.assign("DHJNSSBZNMKDNYXBTEVJPCQVZFSMQHYYPKEUKAFUPGNGIXEWGBTIOUIVAADFWVTXKDQZYJGOUVPKRIIYMIBTBJCSBGCOBDRAWKHUTRFCZLDYKIECSRJAYMSMSOOONLVFFBJRMLCVYVNIUWQWLXPGMSQWUEWVWLXOGTDZIMHEZNRRUJSQFXZJPXY");
    const char tmp_msg_0[] = {25, -2, -51, 96, -40, 32, 113, -3, -53, 101, 88, 69, 79, 4, 29, -67, -64, -124, 22, 46, 72, -11, -75, -118, -71, -68, -92, 19, 40, -31, -104, -50, -80, 118, 71, 70, 113, 106, 69, 12, 76, 39, 107, 47, 120, -41, 112, 25, 118, -74, 94, 70, 51, 33, -46, -109, -125, 105, 94, -47, -22, -46, 108, -71, -91, 76, 37, -123, 44, -51, -68, 13, 78, -93, 83, -97, 69, 8, 86, 59, 102, -47, -34, -75, -10, -125, 118, 107};
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
    msg.setTimeStamp(0.8127701829146567);
    msg.setSource(39222U);
    msg.setSourceEntity(147U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(94U);
    msg.plan_count = 19928U;
    msg.plan_size = 2515564545U;
    msg.change_time = 0.7909913203711577;
    msg.change_sid = 37937U;
    msg.change_sname.assign("WEOWULBECSAMOXNSGKKWQDRWJXIXMXGTEOMUXVGHODAKKTVNMTQPPPUYMZGVUUFPZYZCPJIIJNGORHKARUCCPDFNSKZJGYDPWQVWBIVGXSKNCMYRNDPEWWGTJAEBNQIPEBDEMXCBUQLYHZBHDYDXFLVEECANSLHDOVSRHVFFWTCLEULLUFYBGOSLTZFAHVN");
    const char tmp_msg_0[] = {7, 99, -126, -118, -27, 91, 111, 115, -108, 46, 51, -79, -91, -42, 47, -76, -13, -34, -8, -78, 115, 0, -2, 8, 26, -87, 14, -90, 108, -48, 83, -11, 105, -99, -98, -7, -74, 49, -38, -68, 35, -8, -128, -105, 16, -105, 113, -10, 15, -6, -104, 84, 58, -31, 125, -70, 59, 9, 13, 110, -29, -124, -52, -65, 74, -103, -49, 92};
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
    msg.setTimeStamp(0.9996966945309668);
    msg.setSource(56867U);
    msg.setSourceEntity(112U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("YMVHOKTERUQNDQWGMPQIYSDYNVXDKQAMTAPPFLMSBCWQDYNQFCLPEJVNTMYLNHGVUCYQIULAZGNVABJPWA");
    msg.plan_size = 18854U;
    msg.change_time = 0.07213363432256925;
    msg.change_sid = 60027U;
    msg.change_sname.assign("PUQMABFPVIWKCMWRIJHFMZRFILRPUCAXZSFDWWKEEGVJHELASIWUMTFGBDYUNQFYRZVOZCSXQXVRAGYKXBNAANMSJYKMFBYCNKOITXKFIGGVZKZFOHJDGEQJZEHNUOTSNUDXCRDWRZGSSVICQCGGOHUDPWPCIEHYDKNQGVVDQYAEFCTLINTJYQPHUVHBENQLMANRW");
    const char tmp_msg_0[] = {95, -16, -54, 124, -94, 9, -113, -78, -5, 125, 25, 83, 19, 14, 43, 24, 7, 54, 95, 48, -74, -49, 73, 37, 59, 46, -76, -74, 125, -21, -33, 71, -58, -91, 36, -120, -52, -114, 31, -88, -29, 97, -111, -67, -25, 87, 97, -120, -121, 105, -122, -122, 24, -126, 90, -73, 103, 82, 38, 65, -40, -122, -40, -104, -61, 107, 52, -74, 69, 104, -61, -20, -79, -29, -27, -105, -110, -100, 113, -9, -23, -109, 75, 25, 82, 117, -36, 10, 125, 42, 49, 1, -60, 24, -49, -47, -63, -46, 126, -46, 11, 103, 125, 115, -38, -20, -98, 37, 42, 35, 60};
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
    msg.setTimeStamp(0.9659265133130661);
    msg.setSource(34032U);
    msg.setSourceEntity(83U);
    msg.setDestination(1823U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("VAXPGJEVSAKNGPJUXXDPUDWLMMWPZVUTNCIQFRCLXQEISPGAKBLAXACKIKNOBTIRTKECVWGDTBMUGOVJJNJYHTJPXMBDFKLLLOFCGFQCCEKIBPOYHVQSVFW");
    msg.plan_size = 52578U;
    msg.change_time = 0.8882426012718846;
    msg.change_sid = 63967U;
    msg.change_sname.assign("LYZOFSIWAPNXUCQGUDBJNYFYPIBHMZBDHCRLZXIGGHKDPTSIJOMZESEHDJJJRLHTOZQAVVBDKYZXXXJUMOC");
    const char tmp_msg_0[] = {-57, -32, 91, 37, 28, -86, 85, -52, 15, -121, -64, -106, 114, 66, 56, 95, 111, 119, -5, -62, -114, -110, 42, -111, -92, -68, -86, 52, 112, 112, -44, -71, 44, 126, -91, -93, -63, -114, -102, -28, 89, 28, 28, 55, -124, -28, 36, -79, -25, -5, -99, 17, -76, 10, -38, 30, -124, 31, 23, 85, 62, -45, -31, -29, -46, 38, 59, -73, 111, 54, 106, 38, -99, -89, 52, 30, 67, 9, -28, 19, -81, -8, 38, 110, -1, 122, -17, -35, 42, 19, -36, -63, -57, -13, -51, 50, 35, -31, -103, 33, 25, -58, 16, -20, -79, -26, -2, 126, -36, 61};
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
    msg.setTimeStamp(0.14277037512056023);
    msg.setSource(11787U);
    msg.setSourceEntity(241U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("NUISRIMBSVLEHZGAYOEYMSQICHHSPPADMXOWEXOVBALVJNMVVKQLWRNAPRSMFZADUAFWCNYTQGRFBDVRHMKZZLGYSXJQWZNBDTQCXLWOXJKHOHOQMBXEYKLTTYBEFCUINIPSOTWNAJULXSEUNTYBFEK");
    msg.plan_size = 36125U;
    msg.change_time = 0.1031979982222424;
    msg.change_sid = 30916U;
    msg.change_sname.assign("UOMDCBPLEGOYEKRWVABZZZPGNSXQGOEMGCWJOFEHNZKPDYKVIMCWTAXZUAFILZWHUNVPBDMWFTHEVZNDBQTYTRIFMTYPLPNDMOCRLQDLQWSTKHLVGSXFHQRHBXADYWMUVBTPJIGPMSTOCYDIUZIKVQIHGROFQLBAYIOZBFSOXAKJXERWCBSXWSRQDDHUVUAXEKUIKWVBYNXXJHOTMFNEQFKLLJ");
    const char tmp_msg_0[] = {109, 80, 114, 91, -8, 34, 11, 112, 65, 62, -78, 26, 46, -37, -11, 40, -103, -28, 40, -68, -28, -126, -118, 113, 71, -63, -1, 100, 90, -49, 35, 79, -98, 122, -69, 108, 111, -80, -57, -49, -108, 46, 112, 34, 84, -110, 1, 81, 98, 2, 7, -126, -90, 80, -51, -19, 10, 38, 70, 95, -24, 52, 46, -16, 72, -126, 47, 114, -113, 74, 117, -14, -88, -124, 18, 49, -60, -113, -100, 69, 14, 78, 126, 65, -36, 56, -13, 89, -18, -125, 102, 7, -75, -79, -36, -94, -41, -98, 89, -51, -110, 32, -46, -39, 79, 89, 92, 115, -5, 49, -119, -103, -116, -20, 39, 83, 60, 5, -102, -124, -90, -46, 38, 0, 46, 23, -114, 31, 60, 125, 9, 10, 58, 100, -85, 92, 49, 45, 44, 28, -39, 107, -60, -64, -63, 84, 23, 73, -13, 96, 83, 29, 5, -119, 56};
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
    msg.setTimeStamp(0.9142388570230343);
    msg.setSource(42974U);
    msg.setSourceEntity(166U);
    msg.setDestination(60803U);
    msg.setDestinationEntity(140U);
    msg.type = 106U;
    msg.op = 50U;
    msg.request_id = 23539U;
    msg.plan_id.assign("ZAVRDBBYXIIHPHSVWUNKCDBHCBMOYTLXQNVTMRCQJQUJAVIKQLSGRWVUGZMOIMSOFEHDOQDHGQBPDIIBLBNNVSYPUOWHJCOEUKURKPFFZAKAXDAHCYRSFPNRYBGSZJMMSZGJILHICGHLHAAVLMTWSTUOWRATRPDXECBJMNFFTLOMNNXGWNTUXJEYXSXPKADYKZKLUXUKTPGFPOPTFZEGVYEVZZYQGCOSZRNEECQFCMWTRIWVEQQLWJXILA");
    msg.flags = 24289U;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8854496906469375;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FYRMZRICUJDKENXHJBHTHQYVSXOPFMUWZLDNHJQOSWQJNVSOEEOIPNAPULAMJEOZQRVIGFFEFYAJMNZBUSLASCSTCEZRTKXVYKTSGJUFMWDVBOMCNQQKGOGSKFAUQNKGVSIJDTFUBCHLTQAINKPWHLBHXH");

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
    msg.setTimeStamp(0.99958583328544);
    msg.setSource(20017U);
    msg.setSourceEntity(170U);
    msg.setDestination(47742U);
    msg.setDestinationEntity(248U);
    msg.type = 3U;
    msg.op = 114U;
    msg.request_id = 47658U;
    msg.plan_id.assign("OTYBAZQUKDXSCDXXELFGTKXNGEVYHEBGJRFSCZRWCUWWEFPUGRZTIGHGKNPLOJPNAMETLLSXVWRUBKPZAGNQCIWEFJMTJNZHWXRDVUQNLMQJVYPQFDYOWOVAEHHMKQCJWBLLZKMSOVQOMCYUZGSVRSE");
    msg.flags = 16709U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 76U;
    tmp_msg_0.clock = 0.3222374822474462;
    tmp_msg_0.tz = 63;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VNRQUGKMBZBURACDEPNWCDQJTJEKUVLNVZTXL");

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
    msg.setTimeStamp(0.4964672446715864);
    msg.setSource(49595U);
    msg.setSourceEntity(126U);
    msg.setDestination(55225U);
    msg.setDestinationEntity(224U);
    msg.type = 184U;
    msg.op = 150U;
    msg.request_id = 3284U;
    msg.plan_id.assign("NVUXRXBLLCMYEZTXJJABLJPEKZACDIISIOGZQGJPLRX");
    msg.flags = 5879U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("IEBNRFHBIFIESAAMXKYSEVOYZZCVLHFWTWLYMGBUOELLFYJHXNUJVNBITBUVSUPXKTNITJTQXKOSPMBEXWURKLHEN");
    tmp_tmp_msg_0_0.lat = 0.5904963756957123;
    tmp_tmp_msg_0_0.lon = 0.5902532162320266;
    tmp_tmp_msg_0_0.depth = 0.4449111111654398;
    tmp_tmp_msg_0_0.query_channel = 115U;
    tmp_tmp_msg_0_0.reply_channel = 42U;
    tmp_tmp_msg_0_0.transponder_delay = 228U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.41556530159579963;
    tmp_msg_0.y = 0.17526085397232172;
    tmp_msg_0.var_x = 0.11504109584447186;
    tmp_msg_0.var_y = 0.4910448035028525;
    tmp_msg_0.distance = 0.40107887318578483;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NHTOSGSEEKRVMYESLLDLHWOUTXCXRVCJLHQIYBDUFZRXREMLHZBITJCHKFHLFLBCXVDVYGMJORKRXXOXYQZIUGMVYOICUPYDARAQBIASDEPTFZWNHCEZDHAVVYWMSAFNNYQAIGQGGSYQNPPZRAAPJBNZWIJGWMXKDBJBMMKHDMSQAODIFUTJVLUNUCWCNWFHNPKJQWGAXT");

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
    msg.setTimeStamp(0.17190600868266226);
    msg.setSource(3035U);
    msg.setSourceEntity(93U);
    msg.setDestination(48777U);
    msg.setDestinationEntity(176U);
    msg.state = 162U;
    msg.plan_id.assign("TEZKPLBWRPSXOAAYIUWURJZQXRNUGLCVXNHBUQBDZAPOINETVFLFBLWSCHLSMBZOCCFIYNVGEBPQTDAPOSWNUISYVKLFEXKVQFJREAHCIDGGPODBYCRYWIANGVRXZRD");
    msg.plan_eta = -1700838571;
    msg.plan_progress = 0.1318446415673511;
    msg.man_id.assign("UZCERKJHCSDUYQPVRJPGIWNLOHLVYOJLZCQ");
    msg.man_type = 31046U;
    msg.man_eta = -616600187;
    msg.last_outcome = 140U;

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
    msg.setTimeStamp(0.2187925453072741);
    msg.setSource(37049U);
    msg.setSourceEntity(210U);
    msg.setDestination(43105U);
    msg.setDestinationEntity(127U);
    msg.state = 104U;
    msg.plan_id.assign("LSUCEFSIHMSAKRTOIBCCMWPMEROATCEXIUUABKDJXUEXCZHMDZVNTLQLHYEFRMPKJWZPUYZ");
    msg.plan_eta = -1028449689;
    msg.plan_progress = 0.6434057775441318;
    msg.man_id.assign("GWMBHHNNJBIJWCRCJSHLESXRVELKORYCOPQSCNFEJOYDBUSMKMJKAWQDDGLAXSTYPBQOGZDDWVGEKDYTFNZTWVYLEZRHOGSZKEZJXFSIKLYMFIANCOTQQACARGJWLFHUHPOVAFMPNXQLZESAETUIYKBRXTPOGFKDEYRMKTSUKNBAUOVZVDGQMDNBPNVPFHMUWQVJLMGXTJUQBZRXPPCCRZUXAXFLIXNFWHUICJYSOAHVTICB");
    msg.man_type = 47819U;
    msg.man_eta = -252909404;
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
    msg.setTimeStamp(0.007829521880114876);
    msg.setSource(16538U);
    msg.setSourceEntity(210U);
    msg.setDestination(40848U);
    msg.setDestinationEntity(56U);
    msg.state = 180U;
    msg.plan_id.assign("QXIIBNJGFGRLWUZDKEENDYCPFISUZABBEEPADUABPXFZKLZGMYRPIQMDZAOTFQNCWDWHMKXDPEANFWSCSPJPUBUTZBDOIHSIGTFJYAHFQQPZDXAWRJFOHSJVYKGVUBLWVHKRLWHVWRIEKSATYCZVCJFLNLKMRXCVXJGJRBYNNCOQUFOCWKZGCBXOSINKEUVORT");
    msg.plan_eta = -1685587509;
    msg.plan_progress = 0.48812411398594735;
    msg.man_id.assign("HTQOJZRVPUQNLYRUBJRPNJLJPYZGCCYWJPLEQUTHEYTLNKWTIJGVNUHAXHLDLGFUDQWOIGWZYJOQSHNXXLBZVYSQSEJ");
    msg.man_type = 45742U;
    msg.man_eta = 1313728949;
    msg.last_outcome = 250U;

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
    msg.setTimeStamp(0.578764533804754);
    msg.setSource(42722U);
    msg.setSourceEntity(88U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(95U);
    msg.name.assign("LNYJJORWLEWJUASAFJSYHIQKSFDBQEIEMQXBQOFTWCGPRVYPEBMWEEOEUPSYIFWANDLGKUXROWPTHIEISADYKVKKGXSPHYVBOZCHZBVXUJWZNALZQWVGUKHPRSXUNIRMDXMZZWFONCGXTLSSKGEMNMSVMLIBPZKUHJMMCQQADJJVVCZIRMNRYVKOXADNRDDQPAIFDILPOHFCTFUNQBETCTXLAPNUAHLHFJXFVOKRLBBDOGTCJGYTGWUTQCY");
    msg.value.assign("WGDQIREXQRSUXJSWZKGAFQRELNGIVOLIPFKAOGFYSKXLVONVAUXUWUHHBCNPDNBAMKZQDRYUFQQHRH");
    msg.type = 61U;
    msg.access = 111U;

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
    msg.setTimeStamp(0.7048673861894622);
    msg.setSource(55763U);
    msg.setSourceEntity(103U);
    msg.setDestination(49008U);
    msg.setDestinationEntity(92U);
    msg.name.assign("LGEIRTXFNNJQLWSURENGOZIRWLGYNSRLEF");
    msg.value.assign("WCGXQXCZCGGUNYYZQEDTUBTOJBKJXKNIJHOIJDODVUPXMYVZNHAWVLDYZYAXWRKSESBSJHVXCAILIQZYCGLSQRZUGVAWQOMWWETTMGABFHEPMHMOITFXRWPJFNZGTPH");
    msg.type = 75U;
    msg.access = 243U;

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
    msg.setTimeStamp(0.5186165952605508);
    msg.setSource(46996U);
    msg.setSourceEntity(203U);
    msg.setDestination(48090U);
    msg.setDestinationEntity(37U);
    msg.name.assign("OIZWANYPJAINPAQHSFLOEWBSDQLCSMQJTFDNSMWBKHMZINLYPDQKXMUROARZRPKORBSCFGBJHKKDEURIXKDEDCNRJVYSYULIGYVCFWTNRGP");
    msg.value.assign("ELIIVGCQCFDTPYHKYURWVVKKATGZUBVBBHONRWFHDKDIBPBUQGZSGPVPXKXYNJZGYGZHVAJGVWKMNTDNYAOYEHLUBHUHVMSSCRKDGMWQWXRFJSCCOQRPJJMBPASILDKLJZZAYIJMEQZ");
    msg.type = 44U;
    msg.access = 32U;

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
    msg.setTimeStamp(0.6712339929643677);
    msg.setSource(13114U);
    msg.setSourceEntity(171U);
    msg.setDestination(17706U);
    msg.setDestinationEntity(103U);
    msg.cmd = 171U;
    msg.op = 59U;
    msg.plan_id.assign("FNZIEJMDAXLHGDVHZEZIASXGMHTPKZYUXYLFLIYODKTGCVLDGEWRBPQUOFHMFFOQPCAVDMFRZILKSVGMBJEEMPQBWUOPNDBUPRQGBWIELFXCQYUQNICUMWOHSABAPNXTAVOBWXJQEKLQJLUBFTHLVNZVZAVRKRARRABQTNEIJZJNUVNMYKRPISHMWVZGOYC");
    msg.params.assign("SUBKQOWEFVWKJJSJRVQLFRMCNXNQXDHYRSFXTVZFCDBLCDVXYGFYKBAROTQHZHBQMGNNZJWXTIGI");

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
    msg.setTimeStamp(0.04069815662619514);
    msg.setSource(20512U);
    msg.setSourceEntity(67U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(119U);
    msg.cmd = 237U;
    msg.op = 4U;
    msg.plan_id.assign("HOOCCAWDCFFMMRTWAOOIEYRASIKTHBDYZIRGDSJFAXQLUKPKBHQZYZUJOGATNVKKPLTLDLQVYGUZBGVCRKVWWVBQGLDXWTIABWSCXTNVZBMWIJHALPMHQBSZLCNOCUGXP");
    msg.params.assign("EHKVSYROCSGBHCACYBZUHQVJOWPHPMYSBLJIPLNWQKTKABBSXWYDBUMWSUWLMHGYBZVKTOMTROSLRIDVDAIYNLYZCAOYPPDGHWFVAQJLIRLCYVNQOUXOIVGMOIMSJRNFFCZTLMVXZJTVQJZWXQ");

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
    msg.setTimeStamp(0.6496492847532741);
    msg.setSource(60047U);
    msg.setSourceEntity(229U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(203U);
    msg.cmd = 185U;
    msg.op = 111U;
    msg.plan_id.assign("HHIAEVNARJYTBIODTNMFFTXHQXVDZDVHSVBHXLIOVPGYRRTCMEGFCLDGVYKGULVVJBKYQOJQRLMEZNGMJUWCLAIKAHZKLEXPCLHYLBQZUTTSKFNNYJZQCLASESUJVCBCAHSWRYSYFOEFPWRSCMYISZUMFWNXQVJWTAIRDUSNZBRHUDAPCFAOPPO");
    msg.params.assign("WBOYWFCDXJIGRKVNZRTLYFCMRULCTVKTYSWASIKGDGMPAPCPDZGAZYSITBWSEULUQVSZLTHUXRAWCCQJXIGJOATUYEEUOMCTZIPCXXQHQQMQXLPVNIGOBFVEEEYWRAVGSUFXJELOOGBWNOHULUTZNJDBSFHHMLIWKDSJKYGAMHAVBVNNOJZBVTRTYAMRIWPDDMMEFPPDHKORNJYPSDOXHQHZZM");

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
    msg.setTimeStamp(0.9428347383287984);
    msg.setSource(38557U);
    msg.setSourceEntity(191U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("NWIYXZEKBMTBEVRWOLQKTUJJOICJAQOCYUITODLKXFHIJXFPSFKYLXZYMUZQZFWWMPYIJTIXXGMGRRZMPSFHWLOSPNPZDZLJTHSHVVPANYQNQGVEMAOGWLYCNEUXAJAUBQKONGQXPATPAWDFDNDCTJZJTVGQXUZDODDRLRMBVDSRSHBEVGEHKSBGNHAZCIDIXYIRYRTCELMNKTQEESFG");
    msg.op = 26U;
    msg.lat = 0.4663043223918657;
    msg.lon = 0.26926253008214485;
    msg.height = 0.3040198382817738;
    msg.x = 0.17155241259129728;
    msg.y = 0.421738454380469;
    msg.z = 0.9531113332811101;
    msg.phi = 0.30340361921235914;
    msg.theta = 0.18101897727615035;
    msg.psi = 0.07852159837311534;
    msg.vx = 0.6876859537604794;
    msg.vy = 0.6387570019070545;
    msg.vz = 0.8786944418914039;
    msg.p = 0.6736418858798561;
    msg.q = 0.18641774869596084;
    msg.r = 0.10142009693586096;
    msg.svx = 0.36959869461548145;
    msg.svy = 0.682611008335351;
    msg.svz = 0.3980362336755652;

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
    msg.setTimeStamp(0.8144680455218105);
    msg.setSource(40314U);
    msg.setSourceEntity(129U);
    msg.setDestination(60081U);
    msg.setDestinationEntity(53U);
    msg.group_name.assign("AKVTRGJLKQMTXWXBRMTPGNETRWQIXUYQUCZXNNAQXWYMIGJMVLJUKCFWKSWYEIGDISAKZJOYMMQDOPAUVMEHVABWXNKMNEIBGIZRJUEGCGRT");
    msg.op = 48U;
    msg.lat = 0.5694292408825166;
    msg.lon = 0.7965432786821444;
    msg.height = 0.17459835834477;
    msg.x = 0.2050311827261363;
    msg.y = 0.46462200117329766;
    msg.z = 0.005272588798377664;
    msg.phi = 0.6278912772378915;
    msg.theta = 0.32585816524242395;
    msg.psi = 0.5552922350771129;
    msg.vx = 0.9860824613800979;
    msg.vy = 0.0880162621590933;
    msg.vz = 0.05517748034389913;
    msg.p = 0.9314472125884884;
    msg.q = 0.558121294786393;
    msg.r = 0.030297263877203995;
    msg.svx = 0.02404576277831516;
    msg.svy = 0.8938370237766884;
    msg.svz = 0.5930449422550867;

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
    msg.setTimeStamp(0.41296705586168303);
    msg.setSource(36932U);
    msg.setSourceEntity(90U);
    msg.setDestination(51078U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("QOPAYPWJYWUSLCWRLUPPQDRQVJOKSUWFGCGRDRIVEGBGVSMRBQHKEFYQXBUVIDJRGMZEJXQFVZQBMCLOXWABTGAIZQOIFKZTXEOGSNMTSUDFXYHANWLJYHVOTCCBXMXSYEPRADVOCFONSVSELZJZXFBDLOKNUMRNUENQKHDZINVSKHHIYDWXBPKRHXWIKEUTNTHHZZKNDC");
    msg.op = 149U;
    msg.lat = 0.1116566782790821;
    msg.lon = 0.03801214347531778;
    msg.height = 0.278566133894547;
    msg.x = 0.48338848430892556;
    msg.y = 0.24807508779089138;
    msg.z = 0.7423911080166292;
    msg.phi = 0.14273332101731262;
    msg.theta = 0.561738460835667;
    msg.psi = 0.17407354505021133;
    msg.vx = 0.8773861490758791;
    msg.vy = 0.17922007833360276;
    msg.vz = 0.8972961383981249;
    msg.p = 0.7604760505091054;
    msg.q = 0.7995712900549142;
    msg.r = 0.4929095682871265;
    msg.svx = 0.33364708687473044;
    msg.svy = 0.9657738221777326;
    msg.svz = 0.6323695192496502;

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
    msg.setTimeStamp(0.6508914102337614);
    msg.setSource(52726U);
    msg.setSourceEntity(220U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("AEJBCZXBUZPTZWDXYQMERWQWMFCIJTEVJRJODABSYZBHRHCVVSLXQTLSPCJRNIOGWIZVZBIYHLMIWVAOBPVWKNPQEHQIJOFOHAFTMUGAQXRMTRZDIOSUWDGLGDYSCLKFYKBSOHLCZWDHBLEAVQLPAFGEKBU");
    msg.type = 213U;
    msg.properties = 6U;
    msg.durations.assign("XXPELJRNSVUPACUYNQSDYCUNCQLLBQEFIJNIUHIUFCKLFZDQGKELXULTGZTHRPVERBUNISACMVWOZABPWICWWVEZDWKGLYXUVYUFQQKNMKSFHYCSACJYHMTZJXATKIADQMOMHGAHPYDSAXHMTJTSWHOXQYMYERAGNRBJIBSIKMJEVIFZFKIZRZCUPPGJNEWSZO");
    msg.distances.assign("VJRAYRPXUEXSGMCZHJEISJBDESZFPQVCLGBRUZCRR");
    msg.actions.assign("IFCMAMXSXA");
    msg.fuel.assign("KPTKESJXXILHQZNCDAYFIOPYUHZKTIXNYQNNSMNUDFLMPIRITWKUSRLQCSCMJEXGPWZZQLQDAMTGVXNEOOUVGBGXDYLKYXKXLBEHYOIRVBYCHJAINBWQFVISCZVNDGHSGJUEFMFPDZTWETUVMWOPAMPRDPPCBSVAYAKSHWBIWAMOGORCTKYEDZBMPYFCOJHBOXROJTWGDXLHFHQBSQFLZTWCGNEMFZJVADUWLACRUIFVKRSZQN");

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
    msg.setTimeStamp(0.9051751343028089);
    msg.setSource(13186U);
    msg.setSourceEntity(107U);
    msg.setDestination(43766U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("ZIXNMVZCUYCGDRTAEQXOCJELTNGYARMZZJTTPMALWVNKACYJFSRPEBTYUNKNFLCOJDGMKPRHRCYFJLHSIVHPPIHMXHUCPNSEEGFJWDWBKWLRBAMWBVDHOUUUKGDVXSTMHOGZFDOKNHBFVXZUESKLAFTAFSWXLQQDGCMBQPJWQTONNZYHWYZAXIWRJZEBBOKSOVOCDXUGVRDEIVRTEGPQFJIALINPBBS");
    msg.type = 157U;
    msg.properties = 93U;
    msg.durations.assign("CBXSDZCYFDRYGKZEGHMCRQFNRBJUKASWOXNDULEBJWBFFGVEJ");
    msg.distances.assign("KPLIPSITGSSHEFXTRCLOXJREBKGVDAHGLLEJDWJISMHUJZAYVMQUKVQSDWVWEVCBCAOOXWKYNDIIGKEDHUYQWALGAUGRXZRQIZBHBAFWFYTQRSMGCQXMIRGZPYMUZBKLBIYTFJWTMZQSMKKZFUNMEAJPSETIAQRFOIOPCQTXJBPLZPVSGDEHFHNHKP");
    msg.actions.assign("QJVRJZFHRJAPIBLDMCRWLCGGETDHCHWDMLGNAQFDIIUDMQJWHDSWHKBESZJOGNBLWYUQRAFVKUMFXNLSODFZJQXYGIEULOQIMTRKU");
    msg.fuel.assign("VUUGHIOFZJFNEHNJKJZSBIMLLFULCQBEZVRWOOFGTCRWGAEKAZZKSDNLMXPJQGALYIUHHUTIFHKTFITVGEMDATEMVAEDYYNYZAJFEBHSYSILKMIMZDPCJVKOJENPXDPBOPTWLCYQXHRTDQXRAKPBFDVYQQICLXNQRXBTNAJYGWVIMQJRUYPSSEORHHW");

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
    msg.setTimeStamp(0.6183969824351299);
    msg.setSource(7526U);
    msg.setSourceEntity(17U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("BAHQURYPVLVJRGNNDPYWOVWJCHKIZEQKDCCNZBUGHFTSRUKYJFBTSVMMUGUOWYZSTFJWAIIQWOLLDDJYYMTHKWOGQPCDRQJMBQEAQIJMHYTWVBCIVWKBLSMZAUEUEELPWMFHSGQCTRSPMO");
    msg.type = 42U;
    msg.properties = 190U;
    msg.durations.assign("KUIEABGKMKVMUQHZXALSSJLNMFWKXNQDDVZCRAUGDPWLFA");
    msg.distances.assign("NOFVCEXFULSAWXOBYJGTMVJRATYAELKSHFNIUPRMSCOMVTZRVLDIMOIGGLUOETHIWBZQFWXMGZQJXRPZLQZMCZKOPWNIVQOJTKIOBDCQPBEQVDULPFWWXKYDNIORTFHNCDSANNGAPTJYZH");
    msg.actions.assign("NLKDXOPMHWJFZACFWYPLLPYYMZUZMATDYRCTIWHJWPFWMVXGCQSFIWRPKIDEWRFYEGFXOHESVKTYXNKQQQAAGNSGINAURAKVVWSLCCBKHTLNUCEIFSJQGDWOOMCQMVDBHYDJXYIDXSPBTGEQCIKUDLEZAZOXNQGHLGVRHMWPAUAVXTFUESHIDDHEBZUMUBRSUXZVJTMBPQSNTTJAOGJL");
    msg.fuel.assign("TNBFZOBUQLZRHLAVJMBQTKVQJLUYSNSACIPGFLFODOWDTBOPBAJUGWWQIHLKMAYIMLKEGOQXGOBYQMTKTUYWPNKCARKRUFTXIJHHTNWAWHWVPAUWRV");

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
    msg.setTimeStamp(0.1748107350527054);
    msg.setSource(40295U);
    msg.setSourceEntity(246U);
    msg.setDestination(4245U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.003965435964687236;
    msg.lon = 0.25820285942515675;
    msg.depth = 0.7070415084264502;
    msg.roll = 0.6842135436114763;
    msg.pitch = 0.0285212114657879;
    msg.yaw = 0.19460951525363424;
    msg.rcp_time = 0.11843263329797316;
    msg.sid.assign("SYWGZEFUCIUDGWBPGYIIUTQUEPWCHZCMWRGLQOWSHCZXSDVOC");
    msg.s_type = 125U;

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
    msg.setTimeStamp(0.7201450017632316);
    msg.setSource(23726U);
    msg.setSourceEntity(84U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.3923229667322029;
    msg.lon = 0.30861022933015814;
    msg.depth = 0.7665796991375013;
    msg.roll = 0.006457600923815199;
    msg.pitch = 0.742476313749835;
    msg.yaw = 0.524900554037554;
    msg.rcp_time = 0.6029449708784744;
    msg.sid.assign("SZTBMXMUVEJRBCVWPBYZUTBFTOMWOFYFGCUUEJHMIROHOWZVSLSK");
    msg.s_type = 177U;

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
    msg.setTimeStamp(0.8470650716424413);
    msg.setSource(2008U);
    msg.setSourceEntity(198U);
    msg.setDestination(15509U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.026928001204255425;
    msg.lon = 0.803048268167643;
    msg.depth = 0.10771706496723166;
    msg.roll = 0.769547161721133;
    msg.pitch = 0.5508687958058188;
    msg.yaw = 0.837931222134847;
    msg.rcp_time = 0.46898038113514573;
    msg.sid.assign("BTJLPQQZOGIUDTCYLRNAQKSVXXIQPCZEZALIBOXORASTSVZRFKBFCEVWKJAMDXNJUQOEGDANQMTLWGFFIZMJRWNEZWBIGDVKCPNHRIWAJVKOTTSDNDBUWHLFBEQTJCSGHMWJJAERNNBLXGGSHYGYKBMQPPHVSLRU");
    msg.s_type = 142U;

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
    msg.setTimeStamp(0.9424807271714932);
    msg.setSource(24076U);
    msg.setSourceEntity(122U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(248U);
    msg.id.assign("HMGHKQFRVTBTYZNHYHZINORJLIXJKOIZVSGYVFYKRMSFTFOWGGQCVFLCKQHPTSZGHIJAAWJRSRDJCKTCIDAOPAWYSYUNBLEJZGPGBENPUMZXAXXEBNWFONVD");
    msg.sensor_class.assign("LKIQLDYJEQQZRYSSQYIN");
    msg.lat = 0.13122773359164186;
    msg.lon = 0.9183619182078038;
    msg.alt = 0.5333310214280353;
    msg.heading = 0.05373076514327857;
    msg.data.assign("WSJPGYJTMWPQKCVFHNMKQHAUFEBPV");

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
    msg.setTimeStamp(0.5173654968992168);
    msg.setSource(36508U);
    msg.setSourceEntity(180U);
    msg.setDestination(44156U);
    msg.setDestinationEntity(48U);
    msg.id.assign("TVKOIDXIXTDKZBYLWBVBGFJADPSINYUMZZDKSUNQEOXULVXXXAYVQGTKQCHTNRCHCIOXSRHMRMXDJFBPLSUBBWVCWJIFYHONGKXGCKWWORHANQEWPPZQMTMEFRAGJFSLYLPIIGVLSEWZBAEJMJASPYRMRFQVPSDWKUQATYBUOMMSHDLGMQHTNJCFZBJHYCGUZPSPTPFAKIU");
    msg.sensor_class.assign("GKLURAPHFIKFMXOGFZWUUEATTXGLGKCWAQPUWYBMSOIKTEFEYUKTKJGTRSEQVIPRDVMMLJ");
    msg.lat = 0.16756209529968524;
    msg.lon = 0.7030565970149616;
    msg.alt = 0.5994177929831913;
    msg.heading = 0.3602743931656198;
    msg.data.assign("OKLFQVSIGDQJPAXOUJBNWOQBUXXUQHFNOJXEHSCGWFDCQDUMNWCOBRXYTHQNZCRBZZSAGWHMYKIEDSECNMYZGGFKJLEKZHAVLLLVIAXAQVKGZRRNEODUOLANPNZNRQFXLBTYJMTLBHSXJITCGWEWGDCXYCRAVRFSSEREUNXDITPFFKBCPGPVTEWRDPHVPLMFZBSMMTGUAHJU");

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
    msg.setTimeStamp(0.3440912133346402);
    msg.setSource(37608U);
    msg.setSourceEntity(135U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(57U);
    msg.id.assign("WRXHTROFUZUZHEFAMIPVHZSRLGXTRCDNPZXDZSKHYJKEVFHTOCLMWDNYMMBDIJJRBGJZQQPMDWBXPTAEKSCKQVBOONNSVUVATVGKEKFEPNTFCCUZPRFKIBKQJVTSJUIJFLNAQYBIIYEYQKMXAJSNGQWQEYXHOWRBSKDUUJFYGWOWUSQCPELNCDPWXOXEDXDOHGTMNGOCGZVMUDJBGOVYRXALIGBRZFBCSHLAVAPZLLCWA");
    msg.sensor_class.assign("YRQCGEXTBBXMFHLLRNPSDWPWNOMTRMONGOAAIMZPZVFBOUAFFJYWVHZTOVJUYTDWASFRKGLSCDLZFWKJTQVPEJEBBIHNXWCAHGDCVFIDUHHTNELLMSNQNWWFCEXOACISOOVLESDUJITPYJMKJDXFWYEUZZVYYKOPCSRLIKMBKXHUGETKQVXMRBIMADQKLICGVPNLTKRRHBBAHGTSCFPH");
    msg.lat = 0.0710531461816245;
    msg.lon = 0.15557213863489172;
    msg.alt = 0.8921580724559707;
    msg.heading = 0.10497696739618956;
    msg.data.assign("NDQIBFKQSFLUANVYFIFPLRDOQCDPKUEOR");

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
    msg.setTimeStamp(0.6719427750740985);
    msg.setSource(22218U);
    msg.setSourceEntity(224U);
    msg.setDestination(64438U);
    msg.setDestinationEntity(119U);
    msg.id.assign("NHRDVOQACUKFKIZQGQBRYFSLQMYBZVPWQPNKWAXTSXNVWUKLRHSEGGLHEVCDZSBHGJMNIDFBGLOHEHYLXTPWAYNTRBLCCKBUWLQMGZTSBHJISDPLRMRQZUPFPCWKIXZGDMSUCDGCTCOEPMOXRTMMJWNJHJKEOQRNEARYJJYWDVBAOXUFAQLGFXAIRYWEOIVIPQAPTFXVDUG");

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
    msg.setTimeStamp(0.9450464896416547);
    msg.setSource(27408U);
    msg.setSourceEntity(106U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(129U);
    msg.id.assign("XFYYXVFFEWTRBBVUCHSUQZNDNNKZKBULRRVOKAFTTPYAYWMSEWIXHWCSQAEAVVVUGIXJCDALBQSGNYKLWKAOPHXQLEEORNYDETWHDXORXZDT");

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
    msg.setTimeStamp(0.8882213069942033);
    msg.setSource(45888U);
    msg.setSourceEntity(72U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(157U);
    msg.id.assign("NIWPAYENWUNUHDIQRRUXIMFDFZLNBNYGNMPSMZWTIDUIYYXVSOBVFSGHOVKSARFEGJELXXEBXQVHKSTCAATHGDLUEPVZFPDOBHQIRKQRLEXYBOZMGEKFBETPYWIKNWCYMAJPGOLZKDBNLPZLTSBMGQOJSDUJIUECPNKFMAZMHLMWKJOYBXQKFCSUZOEBWRJQRCCTJMYVXRCAPKHVCOTDTVHRFWTOVAHGA");

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
    msg.setTimeStamp(0.5757509248962498);
    msg.setSource(58511U);
    msg.setSourceEntity(95U);
    msg.setDestination(37436U);
    msg.setDestinationEntity(100U);
    msg.id.assign("SGUXJZFPIATCUWAQRZGWYOXDBDPBWTOTTIBYNBBFVELMOZJUKNYQPOXVSTLMUICQWJHQDILPCAXCZORMGKHOSMXFIDHHZVXFHDRYPVIZUFQNUFNJZGXSWILVLPDWAPMTUGOINTCREDHVEZOJRBFWCMJQCQJXJSHGQKPALJFNCKAFUCKYEYDSEANYKWLMRVSLZZPYJTNAVEYGPWBLRADIV");
    msg.feature_type = 36U;
    msg.rgb_red = 196U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 88U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8014357967456647;
    tmp_msg_0.lon = 0.6561843591476452;
    tmp_msg_0.alt = 0.022468094380518777;
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
    msg.setTimeStamp(0.8897944521938871);
    msg.setSource(59953U);
    msg.setSourceEntity(157U);
    msg.setDestination(12457U);
    msg.setDestinationEntity(184U);
    msg.id.assign("VIFEOAGPAJVSKOXSQXMGQKFTMYIQBTTUJCSXMYEFWPCCLNBDQGUQCMCLSOGONIESRCNEYOMRHWACYEHFNZQUDLZUIVTMHWHDVYMVMPTRZAIFEWUHMGAVRVGZCTIAYCRXVUOGFGOWNNAUHBDBHQJKSKVKPZLCWFKBBPBZJSPEKDDQYGPJUPLJTLOHWNBXJZARLQROITDYERRFNFFUKHEXDLNSQPYXAHZPJBWWVKAIXJXZZ");
    msg.feature_type = 39U;
    msg.rgb_red = 163U;
    msg.rgb_green = 229U;
    msg.rgb_blue = 86U;

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
    msg.setTimeStamp(0.8573032695303219);
    msg.setSource(37467U);
    msg.setSourceEntity(50U);
    msg.setDestination(58003U);
    msg.setDestinationEntity(62U);
    msg.id.assign("NVAQPFJHYYFFDLUMEOAXEPCRTVYZSKPHTQQUCHFQBENNLLKHMKRCYOTBTFCLSVGWLEPTLBSSIGJGQUPJBLBJADCNRFJEDIVZWAVHDPQYKERTZWVJXOVBZAEDXYKNZAVTNMGPEAARNWHBMUAUNFCXWITUPDDYFXODDYGWMHKERUWJWZGLWKQIWUPCRSZJHOHVPJCXKZGXRQOOLIMO");
    msg.feature_type = 68U;
    msg.rgb_red = 235U;
    msg.rgb_green = 220U;
    msg.rgb_blue = 241U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4965117660011119;
    tmp_msg_0.lon = 0.8179883611259223;
    tmp_msg_0.alt = 0.5944039228317242;
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
    msg.setTimeStamp(0.7666526259784273);
    msg.setSource(40550U);
    msg.setSourceEntity(198U);
    msg.setDestination(24093U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.7467239397603125;
    msg.lon = 0.9882509317341208;
    msg.alt = 0.0727490657037253;

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
    msg.setTimeStamp(0.7544345844171688);
    msg.setSource(2109U);
    msg.setSourceEntity(148U);
    msg.setDestination(64955U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.25699582014363453;
    msg.lon = 0.32758934308643595;
    msg.alt = 0.774120593636109;

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
    msg.setTimeStamp(0.035718018517508);
    msg.setSource(44271U);
    msg.setSourceEntity(38U);
    msg.setDestination(19158U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.5235466051875163;
    msg.lon = 0.184183263633503;
    msg.alt = 0.2662484730195127;

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
    msg.setTimeStamp(0.07812719627131537);
    msg.setSource(32291U);
    msg.setSourceEntity(54U);
    msg.setDestination(62503U);
    msg.setDestinationEntity(111U);
    msg.type = 241U;
    msg.id.assign("FDQXYVAMRMVGPAAYUTCJIPDQRSWKPHZOIGBOCDXZHKIAXTHZGBAICWHQVLTTAOVTWMLUOAEFDEXDHNJFXPTPQNXTALHDRPXSSYCONGKQESCJCAYEJMETRURIQZBWOCVGBVWNULNBGRFNJFSOSTHLDLIIJYHWZVPLXEZEKOVNVIDQGPFFDXSYKWURCZPGMYJBFSIGMJGHHKQOQZMVUCJYQBOIEEBNWYKDKKTRJCYBERFAB");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 181U;
    tmp_msg_0.plan_id = 61896U;
    tmp_msg_0.wpt_id = 180U;
    tmp_msg_0.settings_chk = 56902U;
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
    msg.setTimeStamp(0.1962971319331157);
    msg.setSource(39939U);
    msg.setSourceEntity(8U);
    msg.setDestination(7481U);
    msg.setDestinationEntity(167U);
    msg.type = 160U;
    msg.id.assign("ELAIDQVJQCDBJZNXRVES");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.34983657727707973;
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
    msg.setTimeStamp(0.38492646944064457);
    msg.setSource(14067U);
    msg.setSourceEntity(252U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(162U);
    msg.type = 181U;
    msg.id.assign("YABMWMPNKEIDWTUNQMXDQWLMOPLAGLBRTLTIYHUNTVZGUSUHRTNKNWAMMNVFRFHKLDLFJRAMDCPYVQZZUSOYPRCQEOIBAWHNWXROYFJZXGFJPBZILICXYCXDGAFTDWGUINKOVTAIXHTEZSUYVXYGDBVVACEESQJGSQIDBJPTGNJWEBBFSOIJJSCZWPKAQHROPPPLCEHLVSXAZOUBQHZVDUQYTMNSR");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.5666450578126627;
    tmp_msg_0.speed = 0.85167843507616;
    tmp_msg_0.turbulence = 0.1544816002220648;
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
    msg.setTimeStamp(0.9971329143445482);
    msg.setSource(11828U);
    msg.setSourceEntity(77U);
    msg.setDestination(26420U);
    msg.setDestinationEntity(127U);
    msg.localname.assign("GHFOTZETUCBHGYCSXNPGJYHXWJLZAKBGKAUKEIXSIUXBLCDTWOMEDTHCFJWMWYGEBJQNCIFEZEMUMHPEKSNMHWFGKZBLMODJOVNILARFXZVODVJQMQUSQUQEIJOIVSMADYFPNIDBYPUCFKQKHNLBUWYTRWLOSLANQQCZZPPNFRGVAUWLJURR");

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
    msg.setTimeStamp(0.8941507222179811);
    msg.setSource(7116U);
    msg.setSourceEntity(8U);
    msg.setDestination(9052U);
    msg.setDestinationEntity(175U);
    msg.localname.assign("XIBYPWCUINHMWSSAOGFUIGZZDFKFKTJIKLKMTVSWDZHPQOUHRAZUQXEZCRISQNZEMWYQVDPSHSQHLMCLCGTWWGAP");

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
    msg.setTimeStamp(0.4827155240437291);
    msg.setSource(57373U);
    msg.setSourceEntity(94U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(14U);
    msg.localname.assign("QFNAQCSAZIBUCFEDHUHZKOXSQIFEI");

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
    msg.setTimeStamp(0.14402255391734864);
    msg.setSource(52486U);
    msg.setSourceEntity(42U);
    msg.setDestination(4740U);
    msg.setDestinationEntity(188U);
    msg.timeline.assign("LIRGSRVMRFDYCQZYKCHYWRWIDGKINMLWVYCZTUQNBEPBPYIMQTO");
    msg.predicate.assign("ZTSOHJXPBBDFUJWRLQKVJKYCUISZXUDMPTHHUJQBSMKCQIGIPLPNTGTVJLRK");
    msg.attributes.assign("JIPRIZSNVADWZBCVSMEFJRDYOHTRBCZZQSLRKVEFAKKISAKXSXNZWAQXOLYRFGVDKHWRIYUTMLZGDVOIUJSKDKOTUATGAEBRGGNDUZFKGLGCSJXZ");

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
    msg.setTimeStamp(0.3655802210474651);
    msg.setSource(28336U);
    msg.setSourceEntity(40U);
    msg.setDestination(29432U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("UPCDIMSFBIUTNHLHCZKANOWTRROIMHXSPMLOULFYZBHEJTVFUXLXGZNJHXGTPMKGSFMSDKCXLKKRQXQNKKNIECRDZYZZUIWWBYLYWELKGPVFYOSNSJBPUACFUAZVTJLBXOGOVRXFEQQQMUKZODVWITW");
    msg.predicate.assign("MADCSKGHYBJGWIXPFD");
    msg.attributes.assign("NBOISXHYLJFYGUNLCENMNGSSEVKSVXMUTFTDWYSOSMTAJDEYFIOZZIIMFYCKQUZJUOWUWRGVBAAEUGRCAOQGCUEQSSDQMMIBKEOPLUJXYARDDJAKJNRZT");

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
    msg.setTimeStamp(0.5140253085122954);
    msg.setSource(25003U);
    msg.setSourceEntity(73U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("BWZDIVPGZQFNVVSRBCWOXRXVNJTRFPMATYGWXRLDHCMFDACUGMCVYSNLKSLELFZWEUOJXEQRBRFNEEDAWJYINZDEZSIKFYWKPYGIPOBHRXCUYVNKRGJGQJCIETULHTLJU");
    msg.predicate.assign("ZEWJSTOWPSDLYCMLDPQBVJRVXCXLZGXAUMLYUAYFSDMNGGUEPILQYYJEBDRXFVVQCZROSVTRUZJGHUZFOAHHNYZSLDNFMOTIMVDVBQTZHAZTFKOKLJPYUTQGSCD");
    msg.attributes.assign("KYYJUVEAHVFQDMIRWXUIZJNQPYXYYBFLEKAGNKQBIG");

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
    msg.setTimeStamp(0.04694990381578634);
    msg.setSource(44492U);
    msg.setSourceEntity(126U);
    msg.setDestination(60244U);
    msg.setDestinationEntity(89U);
    msg.command = 122U;
    msg.goal_id.assign("QYOHYVFVSKFPWFWWRVVBWZGUOGHOXHXVWIFCECIRNGCSAYIOMECEFIWDYHHPAINJJCKOCTIVNTTBQTDZYQDLQAJKNOYHSXXQWGESFWVILRFTBDWKZWDNGLMCGLRSOOZMKAZZKFRLDURB");
    msg.goal_xml.assign("SKRGHEUEFRKLNCOLFYAKBMZGESHVLMHGLARCRXPMYDNIAKDXYGOJWPACNCTZDPXJNUOTWBUETDSRTFVGTKGSPHZZNMFIMDVIQKJBQABXTIVETBLHVNLWLPXWFYBHFOSFXPIQFMHMAQBDCZDROOAURZRJQWJBIUYELUVJGCBNKIYVUAWJSSDNXOZVFJHIPLWQQDHTGBSPWTSMEORQPNQSZGHICZCWOJIAKXUN");

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
    msg.setTimeStamp(0.37616127083971385);
    msg.setSource(21617U);
    msg.setSourceEntity(20U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(155U);
    msg.command = 238U;
    msg.goal_id.assign("VEOAGISNFNYDKYTSMONFPZDCUWUXRKGLLZBRLWRKSUQWFCPMPTYWIBUFBVNJSFHXACXAQJNZJA");
    msg.goal_xml.assign("DUDMASUVDMZTFWUOKMSLIYFITCKPTPFPHRLCYUYJAEKBQZJVEFGRDMFYZGCROVCGIUBOZYEAQPKDJQSBCPKWMRRONSAUYQLSKXWBGJLHWUOOTVTBCEFKWNVXCREPNFHUQPDICJDBQEGNEJDVIAQNZJISTNMICXBCSPOKPZHTKTOTMPIFXEMOJBZKGBGUERWZOAAJBWVNTQSFLYHRXYRYDWJXLHNVWHLXGYZIGGQVNSAHARSXMFLAXNWVDHHLM");

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
    msg.setTimeStamp(0.6624637199672165);
    msg.setSource(57870U);
    msg.setSourceEntity(51U);
    msg.setDestination(45578U);
    msg.setDestinationEntity(251U);
    msg.command = 38U;
    msg.goal_id.assign("FFOYKQTWYRKPVOBEFJHVCDANDXGHJBCJNHYHADLFPCZEKKTKOSTYNSXBMSMYXXPWNQIOQXMHTSAFGVODPACZADAJXEMQOUBCUSHEGVTFWZUQEWMIRSOPWTLZDGTIMSJMYPGXEVUFFLJAAANHTIUWGKLGLINYDZPZZRILEGILVRMBURIIDYCWLJNFOJEUZPCDRQQKTZXSIVQTE");
    msg.goal_xml.assign("VOSTFBRYNEJQXTSLPLDGSZBTFKWGGOADZMUMXLRMZTAURKNAHUZQFU");

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
    msg.setTimeStamp(0.871686735953472);
    msg.setSource(41702U);
    msg.setSourceEntity(142U);
    msg.setDestination(57590U);
    msg.setDestinationEntity(92U);
    msg.op = 145U;
    msg.goal_id.assign("WVUETHBCDMAKWTLGMYIHBZZQBTWDENKAVNVFQRIZBQXSFGYTJORQUDXELEWDENOCRPWZYXDSPNZILPBIXBKFYNFYEEEHJM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CNFHJCXIFQZWTAMDBJKTFGOHELMDTPZHJISUOLQALNJMWBIPGVOYEQXJLYYUJZSZKHRKMRCUOYFRTDTPXZC");
    tmp_msg_0.predicate.assign("ZEFBADPBVSWACQTNZMINDXNQUQJPLTENYPKWGESROGR");
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
    msg.setTimeStamp(0.5113648631347967);
    msg.setSource(56993U);
    msg.setSourceEntity(37U);
    msg.setDestination(25870U);
    msg.setDestinationEntity(80U);
    msg.op = 92U;
    msg.goal_id.assign("WXNNMJPUBQEAUWKRVMIMFCQAJZVKYARREIJFRRWKNPQSPZJKTSPHOSABXMXQGYYGHOMCYHHBLTNZTVGVULDIUT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XDKJWTJMLTFLYAXBVDAEYUYMTDDQPHYNOMOCKFQCGNIERRPCKZPJRZUEPSBFIJGWJHFDHTGSZMGRICEWXBROQZRRSFAOAQNLNEWVXVIGVFTQYSQGPVINMCYFTAMKTWKHXISSBABVCFTWPDNDOZMACAYVDZSPUBOKHNPLBOLWHQHUBFZHXNNLIXJCBEJVJHVLLUAPMFDHIUKXRXJSEGXY");
    tmp_msg_0.predicate.assign("QCNCYVCWWETAAYDRKGTSLOXCJZYZSJWGSUQZOGDYZRCCKZBRPVLIGJDZHALVQJKSGKTRUREFPLNLIONLJFA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VYOBXQVGXNAMSYHOPEIYOKLQTQFLQLDHJFRMQGNURUBZYBPEEPSQVFUJHCOZTBDWJJXKNOIGAABMXUAKIJHWQOZIKYZXKHMVMIWFTWZXFEVIHBLZZYNPZHCICPTRRLPDHGVPARRHPOCOJLUDROTUAWBCGKTIXMLZUEBNJVKEPFNGMDGQSVWDHIBKKWZCTAFLASQEJUADDXCWCVSEIJAVMMFUNNXYYWFFTYQWGDNSLPEOJRSURGMRNDXKYSCC");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("QWMCAVSMZVLRDYBOFCGGPJRXASCKYHIFXEAPCZESSEQCVGAAMWZMZLRNCDHXVFPIIXIKVDUAZJXYBEMDOCTGXVBEEYXUEZRMFRZKKRCYKVHGIHEVMPSZUSMD");
    tmp_tmp_msg_0_0.max.assign("DBOHTIIXRROKGBWWFJDZHWQJIBWMNALQBJDOUWDUKVZWWNHHEFXHXAYFIGEVQZLKRPXNICMPOTEAXNXOMRQUGSYOHBHYSPUGDGYBZORTQPGMISLTZKKAAFSQPVJQVNDLUHOGLQDXFYVVHKLGSMCYESJULAIOC");
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
    msg.setTimeStamp(0.521798971771916);
    msg.setSource(4473U);
    msg.setSourceEntity(48U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(40U);
    msg.op = 1U;
    msg.goal_id.assign("NYLQAEDBTYVJOSHIINYTWYRI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SQEMBPHILCYDHKNBZAMBDLZSVYECEEUQHIHXVPIG");
    tmp_msg_0.predicate.assign("LMWNLNKUUBIYWCSKBJDTICIIUBAFDAYCYEQNPHXQHHJBZOVVQECAFLYYAXTDMWENRHINMYOXDLRIGNDEGMJZLVUHZCASRHQBFPPRMMHCQUWNKKSFFGATPJZFCSROIRAOIREJJVQERKARJG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TKEKVIMTGOXBFDQXZGDPLMBSGFRIRBCKRZKPSBUEZLUOJPSXWUJVDPAFDFPLUKDRZOCGOVRQECXCNZBL");
    tmp_tmp_msg_0_0.attr_type = 122U;
    tmp_tmp_msg_0_0.min.assign("ZOJSFBBUDOKIGOJVVXHSRLZNYDAIASNZPLGLQEXAYSAZWCGDVMKGHYGWFWFJGZSWHRWDZSZURINGINMGXUBDQSXWKFHCUMUTPTFFVLDZMBQPQCXEAVNKVHIBYWROEPPIMTCVZCCJWMECYROIMTAHVLFPJBUEYVFEL");
    tmp_tmp_msg_0_0.max.assign("WXQQPTKHLXJYEZBQMCIEPJUNCUETGZIKMKTNCFHKBCBINXYRIMUGFIYOGISPSWOZIFZHTXEHLEUCOXWCBYRNJQVAQNNYMVDYCZDUOALGKHHVRUJTPSVTWENZWLHPOFJVNFBOLLXBXZDQQJJGTZRYF");
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
    msg.setTimeStamp(0.42920326488636795);
    msg.setSource(15302U);
    msg.setSourceEntity(191U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(134U);
    msg.name.assign("TEYGEPCJVIJCUVUWTQQFXDLZASNLSQUAHVZWRNCPYXQCOZSJYAVGRDSELGARDTGYPEIIWYUIFDYMZMEZSPCVLJAPWZBNWKHOLOMOQEVUBIESCDVRTRFJYKVNKKBLUAHWIJLFRM");
    msg.attr_type = 124U;
    msg.min.assign("NONRTHCEHLOCFUPGDYNGYMDORSEWGFRNBNUIETOKDPJQAMMYZXWAAUHPLRBHQWZVJXBZFCRBTLMCIGEMFFYSODZLBMPZSVXQJZZVZVJEQHOWANACPPUV");
    msg.max.assign("KFIKEHLLDWXRCUIUTRWKRUDLTCKYRGVMQXVUAXFKUELQRQYZEYWVVNVYQOLVFTECGGJHTYAXDMBNRIJJTMKOMDDBONOSPQPXSWIPODIFFJZCAZWGAEBHKEXATLGXWRQIJHMNSUAQ");

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
    msg.setTimeStamp(0.3592401428496015);
    msg.setSource(35266U);
    msg.setSourceEntity(30U);
    msg.setDestination(10039U);
    msg.setDestinationEntity(89U);
    msg.name.assign("LEPMZENTKIKHXSVONUATUWGABKTLBZXHQYTJHIHLFNCUJSPMPBGXEEFQFTWBPIRCLXTXYQVHCMIOPPJYUJDWWLKFBRMVETFMHDCBSDSAYPRYZCL");
    msg.attr_type = 190U;
    msg.min.assign("YQEQKOWEIDNYKJAMSRSICJWDEXCHPMIRELJUCTXRYDIFBNNLVUMOVHQSISRIWMRPBDHMVWTBDKZISQEZVHLKOWFNILQYWXGNYHNPOJAZXSUVAXHJTLOLJTTWLSZDQSDPUYJIGMJEQCBHQUMJNRXBFTIFAFPYVKZPCWADVFUMOVYAXLFZAWKUVBFTRKGFCQXGBSWPUDZQGSYBECXNUKTOFLTZOGGADBNREHBUYH");
    msg.max.assign("DZNCNRCUQBNHCMTDAKWLPIFNVFYRDINOHBDKSMXVLQPGOORJSWMXCIMPTEWAOAGBUCYMQOTWVRQELNZQQOOUVKFYHCXPHHWKIPMHRLRLXUIZXNQSJOBVDXSGSVIYGRPMJYAKJUNHKASFCVZUDTJPDUTVYSEFVC");

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
    msg.setTimeStamp(0.9649223019896067);
    msg.setSource(1868U);
    msg.setSourceEntity(244U);
    msg.setDestination(5184U);
    msg.setDestinationEntity(134U);
    msg.name.assign("IRXKLYKEETTENOVPOELLPOFXSDLIVPQAFHFFOYKVXBGPCSJONGMVRMAQVBHZWZVQFBCLAYDBQAPGXNYDSVSVWXCECHUJEKSQCPGLWYREPDBMNNDHYZEXZKGTZBMUTGQSWYPJFSJFZBFPMAKMUJTVZNBPZCZAWURXXR");
    msg.attr_type = 139U;
    msg.min.assign("CMMWYWSKEUXLDUJZPQHAKLQUMRBGGPBTUMCXQRWZDMIINQLDIFEFQBNJGENRJAUOEYBLOQLEDKBIMSLEGUWLBZZOKAVHFPQAPLRLTHNSYWETINLYCKRVXCOOQCRWEUSVVYGPQXYIYZCZJYGBBTSGVIOHJKSHOFURCCVAFRWTMIHXSGANINTMZBNKHDAOTHJTEKWCJNQZBVSXTOPNMPEWVVJXFKFUURCDDWTFRJP");
    msg.max.assign("LVWLHKRJUQGWKFKWPRZSYQLCZYUPGUZCMAFIOLXFSDLQNNGWAPMJQWEZHTXVJMNVAFMHBYIJGFVAITNN");

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
    msg.setTimeStamp(0.8627478923838292);
    msg.setSource(56788U);
    msg.setSourceEntity(56U);
    msg.setDestination(30561U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("IXLMERDZACNEYZDOMXHIWOMEYWRJJAIZOKPVNMNCBKGVHKFRTHYGLCZSQRUVWZXQPCIVVCETUBKOQDEVTBGPSOQAGGDAFCLDAXTSNDSNJAHQIQFXBJYLQAZPPJCEILUFJNUIKDUUZXDKRBMWZBIGEIWBBYRFCKTRGMWLP");
    msg.predicate.assign("LETIJBKBAFZYEBACHFCTZOBZGNSTEXMFGQILVTODZVVKJEWYRRXCBGVFXHVETPPZHVYWUUUFBP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TJNMADWHLKWLLASYJGQZEODKSEUNBYHJQFMHYBBTFPBBUBGCUEUKIIXDJKTIYJYRFXXGQMFQATNURKXGPSREJSPRKQWSCVFJAGPMWCIREHOVETVUWDCDZRFIDBAIQZQNULRVGCNHTHOVQUTOEAZKNIUZPVGISMALRXWTSQHOFJPDFWBUMVLVLENJSPEMHZTLFYAYXDLVYVBCWZRCKNOPCJGOZLQZE");
    tmp_msg_0.attr_type = 105U;
    tmp_msg_0.min.assign("HNUIJOFLXJRQKUQVBJVLZQPQRYPFDMOHMNEEXQQPAWARWRADUTCMFANXNKJZIRFYZLQAEVWJZAVGYCZKOGXKENDNKJBYIKITZPJKTXEPJHBKVHJDOHGDZOAWTGQELDBMVTSXHVSMDLRQBNLXMAYXKEMSCFBOSNXGTPLCEYLBASPIBGFWKUIPCRTFUFJVOCUMHNFECWWUYSOQIDRROFPYOLRDIXGGWTTIHZGYG");
    tmp_msg_0.max.assign("URIZCVPAEHZCRKWPFKJVIWDPTSLZJNXJYHLKUIAOVLSBQOOBFAPJRJRDNQAGVILTNTYNHDAEMQOKTBHJZBLUUNJCFVSXCWYMDGHTRIWYDVDVQTCWVKUGLFYUMWBTEKUQLYHIMJIGHYEKHVXWFBPZCGPBPMLOIXDPAWRRRKEAXGFPOVMMEZTXEQCHDSURSQFSARTMG");
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
    msg.setTimeStamp(0.21763119642650164);
    msg.setSource(41059U);
    msg.setSourceEntity(111U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("APXSQICNHUGGCXFMONNRSPPPAKYDTZEFZVNTVCLUYERPEBIIAWHX");
    msg.predicate.assign("JFQZWEIKAPAYEMVIVTHZRVNMUOSHZKZLYCWQFPBXXJBHUQGFGHYVUFGSINVYEITAMNOAJYLLNBWIMKNPJQGZEYLBIDMPZWAHCSKFRNRDPKNHHJHWFTQFUHDZJJGX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UIEMJLSGLPNMHDIBWETAIDOXFGDBYMHAQVYRRUNRQAIPSRKPSPMRJKLNBFWSQDOFQPLCWTWYOOKNAWKJVVDUPTMZIOFZEWEQVNLVCJYUURTWZJHOHVSEWBACCFZYXXKFUVHHXCZTKUUJ");
    tmp_msg_0.attr_type = 143U;
    tmp_msg_0.min.assign("XYUUGYADGXJLOADTFARREPOCXNPFQZSCGNPZRCDVBBMXPEWLSHDZEHJZKCNQVPARHHLOANUJEUYIMKYINKKTXILGEIQOGPIMXGERREQAMBZHRFTOURWTKECJAOFYTMYSFJMLHMRSSSKADOCZEJFQGJHWHCXSULYWHWFVMUZNLBLPBTTQPYSWWWCCDXJWSMPBTAONVFUQZKXTIBNNTWBEV");
    tmp_msg_0.max.assign("SAWDYVABBQJBRLBOBVVPV");
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
    msg.setTimeStamp(0.12465665042614138);
    msg.setSource(26206U);
    msg.setSourceEntity(184U);
    msg.setDestination(11509U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("SGXFTFFRWFQGSTMHKRRKIHDCGX");
    msg.predicate.assign("JSEZZJINMAZSYQXMAXESZKHVNRTJVDFTWVAW");

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
    msg.setTimeStamp(0.2380041406283967);
    msg.setSource(12641U);
    msg.setSourceEntity(134U);
    msg.setDestination(55859U);
    msg.setDestinationEntity(30U);
    msg.reactor.assign("AQDEZUEMSYXQFDWNPGUTHAQWEVORALYFJYKYKZVBFAEGWCNEIBUWZEOBZRMLVHIXPRHHVQQSISTCTNRAO");

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
    msg.setTimeStamp(0.3415690156708239);
    msg.setSource(46713U);
    msg.setSourceEntity(6U);
    msg.setDestination(18383U);
    msg.setDestinationEntity(252U);
    msg.reactor.assign("ZUXNHQOCNRJEPZDNUPSRWJVNYIBKUINVKZDMASSWLIURRVFNCGWEQYIJZFPMLOKDOAXCVUUOFFQKWTKTYFH");

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
    msg.setTimeStamp(0.8550751062039169);
    msg.setSource(20880U);
    msg.setSourceEntity(182U);
    msg.setDestination(63619U);
    msg.setDestinationEntity(76U);
    msg.reactor.assign("YADSLVBZAZTJUMFJGBSKTRYVEVHTKBNWTTIALTQDSFOJOLDBPBLRAHSLQDJGRMGYYAGIXOWNEFDQBYAKXDWUOZRWUSTSOCLVZCVPULZBKWDQYVBXOZBOLIXTGXFPQYZCGDOJEXMNMWFRJILFMCPUNTZPNCKUJDHUXQCPPCGIFHRLRVTVSPAGKUCPEYQUQKXIUYIMAWVENNESXFKFCIDFINC");

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
    msg.setTimeStamp(0.806129692515413);
    msg.setSource(6800U);
    msg.setSourceEntity(104U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(32U);
    msg.topic.assign("NHSBACEQDHSSPANDUCUJOMICHHMQZNCAVCYRQTFOWWNMLTIPXOYYIFKHBKILWWYTJMVDWKSKOFPXANQRWLXDPUEGDKEEOBBRQMNG");
    msg.data.assign("FMJOUZSPYOHXUIOUEAUNRXFIYTWLFWFSGIWPDYPJBSGLCVRXTURBDDVHTKOKPCHIAYXRUCMEMEWYGLVQACOEDTYXGKODRCCFHQVMYDDNJMHBKVQKQFBANFPVONKEZNZJCMHIQGZQBRSZUODDWUXSTFAHUNPFYYBJLJXTJRAXAPCBHAMAJAVLGIZLLDMFGGSCQGERXERWBINEJ");

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
    msg.setTimeStamp(0.0918001994252634);
    msg.setSource(1763U);
    msg.setSourceEntity(204U);
    msg.setDestination(23274U);
    msg.setDestinationEntity(146U);
    msg.topic.assign("MPKCUJQDWVXIIWHCZZYZEUFQBOHTERTWYNLTKRTCNPSHAIRKUIIVVSZPSNMUXUWVSFOYIJOSQZDTHJGGLAFXHMGDMUJGLHMBWMAXTLPNLWIPASXKDLEWUMQFEEJFHEECLZXACQUBZYAXNBDHJSNCJGXDAGCCLBVBORNVZXYMRRFCVZOKAKBRQJFNGQMYOPFYBREIVOKKSNTGMD");
    msg.data.assign("VMDFAYLVYRBDWAGSDKEHNOCJHTNUSIKEJALUMRPFOLMWFPFESIBPFCTSWMWDJVEJTEKHOZFKUZJMAMCCWVIIBQYHAXBFMQUBLGYKVLLFIONSRFNSHFXCDBDXCLROTTTJHPQGQLQVQRUPODUNNMXSZPNCEYYZUTUXEYZZXKIIGYSCGSQTRZXQHHAKPHDCTQGPWWDILRYOGJGRNHWEKVAENBBMV");

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
    msg.setTimeStamp(0.682475295569208);
    msg.setSource(13339U);
    msg.setSourceEntity(211U);
    msg.setDestination(52112U);
    msg.setDestinationEntity(74U);
    msg.topic.assign("PVLWQDVFONARJMJUSQENXHCJVTZYOJGHANZSLIHFVEYYNZDSXYOENBPAPGGEUFXIIXQUWECUUDWLETCMLFMOTQNGUQWTXMLZBBHPSIUZKPPZ");
    msg.data.assign("UVRTOXHSNYGAIELHPZROSGPIFMKERSMHQGWJEOUEQQSVHWKTYLOMDPIZTVMTPTQIICPOCCUVFYKBHVJZHZNKBXDJOSOUQJFDQWW");

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
    msg.setTimeStamp(0.9445885841425627);
    msg.setSource(2466U);
    msg.setSourceEntity(139U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(54U);
    msg.frameid = 29U;
    const char tmp_msg_0[] = {122, 41, -92, 58, -116, -83, 11, 108, 60, -15, -82, -38, -86, 77, -79, -52, 108, 84, -3, 24, 120, -1, 75, -112, -8, 0, 104, -14, 51, 40, -76, 41, -100, 88, -58, -126, 77, 26, 118, 30, -34, 91, 48, -33, -108, -126, 59, -29, 87, 4, -28, -82, 5, 22, -77, 23, 98, 60, -55, -100, -63, -82, -85, 2, 114, -46, 120, 91, -106, -97, 17, 15, 40, -115, -125, 126, -74, -1, -34, -60, -91, -117, -63, -104, 19, 53, 90, 37, 44, -115, 35, 12, 63, -72, 4, 11, 51, -28, 92, -54, -107, 53, 81, 38};
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
    msg.setTimeStamp(0.9222617433775997);
    msg.setSource(12759U);
    msg.setSourceEntity(16U);
    msg.setDestination(34515U);
    msg.setDestinationEntity(144U);
    msg.frameid = 138U;
    const char tmp_msg_0[] = {53, 66, 36, -109, 104, 1, 122, -69, -69, -10};
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
    msg.setTimeStamp(0.09490665692095013);
    msg.setSource(44557U);
    msg.setSourceEntity(88U);
    msg.setDestination(42028U);
    msg.setDestinationEntity(40U);
    msg.frameid = 233U;
    const char tmp_msg_0[] = {21, 95, -48, 96, 115, 125, 59, -102, -74, -42, 86, -116, -66, 14, -62, 10, -15, -37, 59, -27, -113, -82, 102, 96, -69, 44, -63, -22, 21, 51, 95, -127, 86, -109, 125, 6, 6, 106, -27, 66, -59, 99, 88, -99, -75, 53, 43, -49, -60, 18, 40, 49, 125, -36, -44, 80, -48, 111, 2, 47, -86, -113, -56, 93, -31, -53, 95, -112, -27, 43, 112, -90, 48, 115, -47, 36, 8, 97, -114, 9, -96, 123, 35, -49, -64, 59, -118, -88, -123, -61, 28, -44, 59, -3, -15, -80, -53, 28, -108, -41, -28, 86, 18, 1, 10, -7, -108, -96, -80, -18, -82, -115, 113, -102, 41, 53, 124, -17, -38, -98, -101, -47, 4, 7, -31, -41, 61, 71, 111, 122, 114, -79, 81, -108, 96, 65, -106, 41, -4, -73, 55, 64, -65, 9, -52, 41, 103, -29, 30, 69, -39, 93, -56, 115, 58, 58, 125, -89, -68, -1, 81, -16, 117, -51, 37, 55, 37, 31, -100, 23, 63, -122, 74, 126, 107, -29, 23, -112, -18, -18, 0, 50, -28, 85, -56, -2, -104, -42, 86, 94, 111, 90, -34, 45, -47, -90, 19, -51, -42, -123, -19, 46, 113, 124, 6, 67, -70, 85, 3};
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
    msg.setTimeStamp(0.37937070075975365);
    msg.setSource(17295U);
    msg.setSourceEntity(91U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(70U);
    msg.fps = 112U;
    msg.quality = 49U;
    msg.reps = 212U;
    msg.tsize = 171U;

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
    msg.setTimeStamp(0.8319375728527225);
    msg.setSource(6142U);
    msg.setSourceEntity(20U);
    msg.setDestination(1777U);
    msg.setDestinationEntity(212U);
    msg.fps = 198U;
    msg.quality = 123U;
    msg.reps = 15U;
    msg.tsize = 10U;

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
    msg.setTimeStamp(0.8420044000104792);
    msg.setSource(17118U);
    msg.setSourceEntity(223U);
    msg.setDestination(5590U);
    msg.setDestinationEntity(25U);
    msg.fps = 81U;
    msg.quality = 169U;
    msg.reps = 174U;
    msg.tsize = 225U;

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
    msg.setTimeStamp(0.7378871840143492);
    msg.setSource(50335U);
    msg.setSourceEntity(205U);
    msg.setDestination(40862U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.12127312150666114;
    msg.lon = 0.06925960416435839;
    msg.depth = 58U;
    msg.speed = 0.46592910482033845;
    msg.psi = 0.13793895389449518;

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
    msg.setTimeStamp(0.12453231886971416);
    msg.setSource(51603U);
    msg.setSourceEntity(188U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.11738008545037748;
    msg.lon = 0.1948617694936654;
    msg.depth = 57U;
    msg.speed = 0.3601223220085289;
    msg.psi = 0.6170795870121919;

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
    msg.setTimeStamp(0.8482647982942058);
    msg.setSource(18004U);
    msg.setSourceEntity(2U);
    msg.setDestination(47603U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.2482681987721035;
    msg.lon = 0.5268398095051927;
    msg.depth = 123U;
    msg.speed = 0.4377258869419596;
    msg.psi = 0.9204025527901539;

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
    msg.setTimeStamp(0.5272088524883991);
    msg.setSource(18797U);
    msg.setSourceEntity(85U);
    msg.setDestination(38892U);
    msg.setDestinationEntity(116U);
    msg.label.assign("TNGJRCEEJQPDPKWYWQJXPUACWBPUXSBWYHHGLQVESZNDMAOIPKBWIPAQMBMDIOYLYPDLKDYNVRWKSDJGNSBXNMCWSVHGZKOHECREHMOHZAOPCULRCEAOQHLIIMZTKJJFQRTLIXEFEUTKBVWAZKVUQUBNCKXYITEHLMFDHSOUXVSUTWTZGGWFQNRVRFTOSUSCFYUVDMYFHZOYAYGANVIDJIJLNTGBCGTBPENJR");
    msg.lat = 0.6937374517534034;
    msg.lon = 0.4638048930681662;
    msg.z = 0.3732135707831884;
    msg.z_units = 99U;
    msg.cog = 0.8475608089702532;
    msg.sog = 0.6689585284539122;

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
    msg.setTimeStamp(0.9948754429635028);
    msg.setSource(14815U);
    msg.setSourceEntity(160U);
    msg.setDestination(36885U);
    msg.setDestinationEntity(249U);
    msg.label.assign("MAXWZUQNDZSAUYTDNXXGLGWFNCFUIHAPRTGMVNRFJFGIONKEMREGVHFTVOHXFRTQUPAGJWLAUJYARSRPDWSMISTZOJHBTLXLEFYUOSHKLTNDZYMFITUEEFESWAZJLZTVSISCPGBMJLKUMVPHKOJNCOSQFDYSERIPAUCHKGPBXPZXZLYNYBQBXQVOOWPRJMCDLVBRKJMMZKYHQEWBEBHRWZCIAVWXBYKGIINKOCHDUGBEYDVC");
    msg.lat = 0.5808456053805028;
    msg.lon = 0.32787886540355704;
    msg.z = 0.2644569407380717;
    msg.z_units = 182U;
    msg.cog = 0.6177407206475393;
    msg.sog = 0.41684798205977813;

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
    msg.setTimeStamp(0.7798456154295924);
    msg.setSource(42944U);
    msg.setSourceEntity(222U);
    msg.setDestination(44661U);
    msg.setDestinationEntity(74U);
    msg.label.assign("KYSQTNUFQBKLPPYQNBROHBIACWPJTYJVUXZDDUOOBR");
    msg.lat = 0.29082606280579704;
    msg.lon = 0.549635215395612;
    msg.z = 0.7660136257498481;
    msg.z_units = 44U;
    msg.cog = 0.4206266452789472;
    msg.sog = 0.7609973269564587;

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
    msg.setTimeStamp(0.1176362308474237);
    msg.setSource(64222U);
    msg.setSourceEntity(247U);
    msg.setDestination(63376U);
    msg.setDestinationEntity(127U);
    msg.name.assign("FSAJYSSCFLZOQKYFPRKRKQEAMFEWQMJUCSTOUWNBREFLGXXCBKZPZJRJZRPVWXYTPQXTUOLEUMVOYLEWCHZBDBIENCJSNXFEVTPILMOFBAVXJRFUBNNAHRJAUAKDCMGGLNJPMJQOOGMIYKSAKXWYGQPSTHHCWDIHMFIBDAIVZGKWGDGVODFAWWKJTBNNVSYL");
    msg.value.assign("HLTRJCSVFXMZJNFKEFBPEZXLAJSZDNHPEYFUAFTETYKXMUGEZZSWIPJKGICUUIZQDKQ");

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
    msg.setTimeStamp(0.2978434630641159);
    msg.setSource(58902U);
    msg.setSourceEntity(120U);
    msg.setDestination(40178U);
    msg.setDestinationEntity(47U);
    msg.name.assign("HXYQBDRCLXJTMGJKTWKUXGNXNMZBSYYXLSIJNNALYDCTASBMWDFUXKISAEEIWMTWPHJGHEBAMVRRLDJOUWLDIUTJOVKDUJORAFACFMLHCSOYGDZVD");
    msg.value.assign("FLKEJFRSXWLHZTKBQSZDWEYCIZJRUCPBYVYNNZKPDQKCAVJTGLXDHMPEKGOVRRTOTKMZHNKGFWIXVZHGJVRPOAKQCOMEZEBFNTUYDEMLJMSZDPKURVUGBQGNXAIOXUVUIGVWXQXRHCSNHCFILFYNASQPQACLO");

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
    msg.setTimeStamp(0.4825493905583189);
    msg.setSource(35211U);
    msg.setSourceEntity(28U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(223U);
    msg.name.assign("DVFMNLXFZBQKPHJIIEHAJUHBWONBXIPFFCMRZJZBLBGZUEHQDQJADASMXIWVCVWJFSSNHGNMUGZXRFWHPHBKUXKYAHNLOBRKYGTPAULYWRDDKXFOCLSFOJCVSVBTXMNSSIYNJSIOKKUAQRTNGQEADUNBFHSNPICXWZYPKGAQMQDLBOGUZYWMKOCGAFTZPTVQOIDVLYPRQYTOERCQZT");
    msg.value.assign("YOSCUTIDJTIHREADXOGHWBNKJVHRIWCJYYXMZOCOEKAUWLFOGZQBGANATAAJWNPODPWMLMORRVUVWBKCM");

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
    msg.setTimeStamp(0.2037026126219521);
    msg.setSource(50167U);
    msg.setSourceEntity(117U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(247U);
    msg.name.assign("CZDTIPCMPIAFQWVYCLVXDXBSMLYTDQJPDDWFEDKPBCJUUXZJIYSBNUKHRUTBEYMGRFCKJHJKPOJSPWDTCWVNLBREXIHIIZGNQCTLPWSBGQRWEVZASFRCMBHWNUUSXWPFFKOLIAAQHLNYGMHAUNGQMCSZBPNINURF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BVGDISGLUSUCIAZHAEGYVPCJALJTRWDXHPVFPGDIKHOEJICMZNYRSKPSQMWWGWTNMXHBUZIFWXCPCZRAFICXIBKMJOPJCYJNXUQTUSRVRXXQEKXARKLWIHQPJIHLOFSHVGVXWQUDAPENDYTBAANAEUYCKHVMT");
    tmp_msg_0.value.assign("COVWBTYDLCHAXKASSAKIIAXVDZPSESSOEOTIPOTQZUGXMTKJYELBCNFDIEYNVLRTNHSJFQHNKZWPWFNMGQFUSDDGDKYJZXXVJXHLPHIAQMFMPKWVQPRZKQTOGNCLZBEZWBDLGTWCSUWCLIMABBMHOZIVQMAQNJYWKBRBGHFIFPYUHUFBNDYOGLDKGEJZSRRHVAJQEIUQENXRMCYFIHCYZ");
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
    msg.setTimeStamp(0.9178210599083942);
    msg.setSource(16556U);
    msg.setSourceEntity(105U);
    msg.setDestination(20789U);
    msg.setDestinationEntity(187U);
    msg.name.assign("NINIFOMSYSUPENYSWCFQJKULRORDAHPJBZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GLSSRWALFSUCRVQMKVUGFKSHMEXPGJKLLDMZJANCELB");
    tmp_msg_0.value.assign("AVFZQRXAPZJGBNTYMTPIWHNXVHELIZUHHCKESGSPPCNXPUNUDHJADHVKIJDGDDXJNRLMGXUMUZPVNTAORZCSYFOLJTDMLYDCKBTIWRIGQLPALBAAML");
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
    msg.setTimeStamp(0.16456211465126103);
    msg.setSource(42714U);
    msg.setSourceEntity(192U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(46U);
    msg.name.assign("FOEBDANEZSPLVXWHCQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FCCVWIMYKVICWQETGCIRBIAAYHHDSYJGXFXALHDMHXRLSBIWKKKTFEJJSMNYPVRKDTAGDKRQNNNV");
    tmp_msg_0.value.assign("IYNRETXMSLRLBZTRDNSPSJMUJRMZSQLCPOYACPHXVOYRRSTGCVYGDLICMGJVFGEUTEIIDZRVKHOQIECNZZDZWVCPEWNATSLYEOQDBHZOVRSATKUGDWLUXSFHUXNNGHIKBOCBFLHURIJFOFNVQAZCHFPAKBEFWQTJVTOBOBVUPMAGYFBDXAXTJAQSYKIKERSMCFUEIXWLLZUMXQJADH");
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
    msg.setTimeStamp(0.4413451975525662);
    msg.setSource(19601U);
    msg.setSourceEntity(235U);
    msg.setDestination(61196U);
    msg.setDestinationEntity(69U);
    msg.name.assign("RDVUBAOVVIDUSLTQXOCZJHWBTXABNFJOPFSVSQDBJYIEANXZLWCJAGRKFZKGTBSQORDYQRWQCNWQXTYRBHCIGLIRNVKWEHBRLWNZAOAG");
    msg.visibility.assign("TKVCLOUAHJBYGAECJBETNSCYXMWIMURZZEUCEQKJFBAATGJXWVIKSMVZBSRPNQEODIRBEYPGZSGY");
    msg.scope.assign("JZXXVFUHWHBAIRTSDPMSNEICEHYWBVZHRWMPRTKSQFFOLLKSBGNVKNYQWOOYJPJIEZOILFPCLUZZCMDGEAOCXXQFNNRXTSNBUMJNEFIUPPFVTBPRQGNSUUFDTWTGJSMYDCWZPSKHTQYAQDZKORXOUJGBWDBZAGIUYTCLTCYSDLKUCMRLDCXWFXESBW");

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
    msg.setTimeStamp(0.40817909496508475);
    msg.setSource(59963U);
    msg.setSourceEntity(182U);
    msg.setDestination(8663U);
    msg.setDestinationEntity(7U);
    msg.name.assign("NMYHRCRYKXNQIWSZTGFHEQVSDTGLSJJZHGYLIAVEJBCEVMDWGUBIFDDEFOSNVGHHTBVXHREXIOUMVCENPBXFMPHYYQZTUNMQLIIPZXVRHXOGGVZTDOKCIRNUFWKOAJPZRWUSNSNDRQFXAYKMWGXOHRQYM");
    msg.visibility.assign("RJJAVFWTYKZDPMZTUZVLHQSPMBUPMNKUATAIQPWSAASEUGGPIQOFDTYFDDFUZGLZZJHNRWVLONFWCDNDNOMKDTHBZXBJHTBMQBXOWDYKEQXIANPOOPUZTHEJGQWYEXXCIRQEHEEAVDNEYWFXPZJIQCRTFU");
    msg.scope.assign("NALQMHXCHMJKIINEXWKPYEDBVWGEJVVNIUQAIZBOWDYRRGIYQFSSHTRXKNOEESMXGKVBRJVLLDYYZUUBIUZRTQRODXWUPTFPHYNFHCDTSBVCTJOKBSUQTYAJWMJGFOXL");

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
    msg.setTimeStamp(0.5711811951743025);
    msg.setSource(30181U);
    msg.setSourceEntity(110U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(220U);
    msg.name.assign("WVLVJGFLPXOBITDQUOYZPXHMSWRERXKIPVSTBCIYEJALMBVOEMVTWANODHARYZHSVNMNDPZSQMJPOQOOHTFCTTHQXZSNREJRVXDEAKDFJBXRPJWEUNZGLOUNBQKLYNYMKLFYVINGXDQRPUSIEHGYGIFNXFMTLICWGAFPCTPMLRLGUVDSUWNAHBDRWTKAQQKUJKIQSYWUPHIFUKJMZZVJCQZXBKGBOCLGTEZUORC");
    msg.visibility.assign("OULAPVFQFCRUYASSCBZKITMSCYTKFCRXVBIXKVYQLKIBFXWGHDUPOWICFFXZLSBFJHUGNWUEGYTHHHTAPPCGLDVTSUEMMCAGEAASCABJKDZXNRRUXDIPHWJUHVAEOIHDNJFLZENJCLKTQDXRBQTWNZGMI");
    msg.scope.assign("AXYPOCMKJVWZNSBWFZQKCLXIMULXDWGOHYLMLEPYKRTWCPHBIUZMDKVOBCGJDUDTHJQSDICWMBRJFQGSDYPOGZELEVTCEVVHIFKVIYQWRXLELZCHPXLXCNFTHEXYNWZTOKAIXYSMTNVJBAJUBODCIQABZSRMPUORLAJADBQFANMSOPIHDKZQWGGFYD");

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
    msg.setTimeStamp(0.22108141144556248);
    msg.setSource(32582U);
    msg.setSourceEntity(40U);
    msg.setDestination(15191U);
    msg.setDestinationEntity(7U);
    msg.name.assign("ITSJETNYHMRTTVPAIXURBKDSUXGKJJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OKBYXQEMGYTNQQMWGLPKIYYMNCUDUTOAIWHXNOSFHYVPALTJORQHWOJCVVJJKRTJTARYZIDFLZPCEBZIDJFAXETLPRZWSTKSDGOAIBJZHCHXUCMSFEPSHKXSQCDXDYZWPLOCJWVQGVYNGKMLAZHRVISNEUWLFERNBUSIPVOPKVNEJOTLBGITBWQFGQCWBCGZUILWGYUXRNXDHCRLQFVEFBBRSSKM");
    tmp_msg_0.value.assign("MBSSMVBHFIVPYKLCQTCVQKPBTAJPAXXNDLCZWQNFG");
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
    msg.setTimeStamp(0.9417339875484185);
    msg.setSource(9897U);
    msg.setSourceEntity(9U);
    msg.setDestination(1464U);
    msg.setDestinationEntity(32U);
    msg.name.assign("ZIFEJUNPLQLSTCHCTYUMMBOUFTHLIHXMVFPOLAQBWDDYPCYCFIFAPXXQQEVEGQSVSEQXNOHKWQNKJACRLXGUABLPCXJDBOKVJHYLCHTKGNBEUYNGRDQKXSBIRMKYCSCHIBSRZTNIQMDVJYSZLUTNZKOBLVJDVB");

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
    msg.setTimeStamp(0.6884185893327992);
    msg.setSource(55556U);
    msg.setSourceEntity(162U);
    msg.setDestination(28251U);
    msg.setDestinationEntity(39U);
    msg.name.assign("ZOWRHIMKGOTHUTRDWPZBPNVYJDGFLRWRCUMTOQYFJAFSBNFFZLLHGXUFFIXYNNK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UKJKQNONAPAPRVFBKEVNZORXZHDYYSWTNBJHLIOQYXRGJRXMBWBKRJECHHSXBMZGHUCLGVDTGZDELISXXOCVWDSFLKMZPMUCHTVDHOWQEGKTXZZYEXQEZUB");
    tmp_msg_0.value.assign("GVVHFLSNJDKDFEJMZGUJAFPPVXWZZHQDCEWXQAYVKEFINHRLLAFHAVTSZSGUBFIXBAUNJYFQOROBNBQZRITMSK");
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
    msg.setTimeStamp(0.23647015569237217);
    msg.setSource(36507U);
    msg.setSourceEntity(9U);
    msg.setDestination(7974U);
    msg.setDestinationEntity(213U);
    msg.name.assign("JYEIZSSTPRUGIOEA");

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
    msg.setTimeStamp(0.3272357077785719);
    msg.setSource(18543U);
    msg.setSourceEntity(185U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZGKPITHDYLQWTDMZNJIYIVKCUKCYLNULSVFSANWJZBIVOJMLOT");

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
    msg.setTimeStamp(0.20392534803901619);
    msg.setSource(35667U);
    msg.setSourceEntity(234U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(233U);
    msg.name.assign("OVESAPRPFAPEGLBJKVRFTMTCIGDZLTXAZBC");

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
    msg.setTimeStamp(0.48250726365696217);
    msg.setSource(49476U);
    msg.setSourceEntity(119U);
    msg.setDestination(185U);
    msg.setDestinationEntity(27U);
    msg.timeout = 2766319268U;

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
    msg.setTimeStamp(0.42240241942431245);
    msg.setSource(25170U);
    msg.setSourceEntity(99U);
    msg.setDestination(61216U);
    msg.setDestinationEntity(208U);
    msg.timeout = 104072155U;

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
    msg.setTimeStamp(0.04074164980432671);
    msg.setSource(57237U);
    msg.setSourceEntity(23U);
    msg.setDestination(14080U);
    msg.setDestinationEntity(172U);
    msg.timeout = 1727310229U;

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
    msg.setTimeStamp(0.8883054636524841);
    msg.setSource(33780U);
    msg.setSourceEntity(59U);
    msg.setDestination(22994U);
    msg.setDestinationEntity(139U);
    msg.sessid = 946111797U;

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
    msg.setTimeStamp(0.3999639535236379);
    msg.setSource(41799U);
    msg.setSourceEntity(160U);
    msg.setDestination(57716U);
    msg.setDestinationEntity(151U);
    msg.sessid = 2250369996U;

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
    msg.setTimeStamp(0.96521370619789);
    msg.setSource(40900U);
    msg.setSourceEntity(142U);
    msg.setDestination(20904U);
    msg.setDestinationEntity(230U);
    msg.sessid = 543210807U;

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
    msg.setTimeStamp(0.4505245080600029);
    msg.setSource(10201U);
    msg.setSourceEntity(69U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(227U);
    msg.sessid = 2224152393U;
    msg.messages.assign("TZSFIRHKJKHXTKEVSVLZBWKGAIJOYSKUD");

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
    msg.setTimeStamp(0.7294798310469347);
    msg.setSource(20748U);
    msg.setSourceEntity(238U);
    msg.setDestination(53251U);
    msg.setDestinationEntity(215U);
    msg.sessid = 3779942709U;
    msg.messages.assign("VEKRLLAFRFUFXACFQUHKWHWHVIMCBOVQGLGYVCXTIEDPOJMSRSHVJVOILIDJUDOCTMPZGYTYN");

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
    msg.setTimeStamp(0.5414722849999138);
    msg.setSource(49112U);
    msg.setSourceEntity(204U);
    msg.setDestination(64238U);
    msg.setDestinationEntity(158U);
    msg.sessid = 3542621755U;
    msg.messages.assign("NZOCIEXNDJJEBQRARRLGOTHKSQEAQBJYXTBDBEQYRFOPURLSDVLTJBUIWOMWFZFGUSZQVZUWWQNMXCJQJTDBEBGNWPDXBMDTYWYKSSIVZGHSNXEOMIHGCAAXSKIKQGZKAYEUUGHJHLVYPLHPUQZXAALFDPITFFQIJPCLLXPCNPMTKT");

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
    msg.setTimeStamp(0.7146511240155846);
    msg.setSource(29649U);
    msg.setSourceEntity(242U);
    msg.setDestination(33260U);
    msg.setDestinationEntity(139U);
    msg.sessid = 4187204433U;

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
    msg.setTimeStamp(0.5393927064234625);
    msg.setSource(7398U);
    msg.setSourceEntity(132U);
    msg.setDestination(6731U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2690427678U;

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
    msg.setTimeStamp(0.28672949773941403);
    msg.setSource(17161U);
    msg.setSourceEntity(132U);
    msg.setDestination(63618U);
    msg.setDestinationEntity(219U);
    msg.sessid = 2092030899U;

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
    msg.setTimeStamp(0.4290281874308338);
    msg.setSource(20636U);
    msg.setSourceEntity(39U);
    msg.setDestination(32769U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2186998515U;
    msg.status = 192U;

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
    msg.setTimeStamp(0.1452750440302868);
    msg.setSource(63360U);
    msg.setSourceEntity(225U);
    msg.setDestination(47742U);
    msg.setDestinationEntity(63U);
    msg.sessid = 3450965821U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.1646537379745472);
    msg.setSource(21567U);
    msg.setSourceEntity(185U);
    msg.setDestination(62908U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3606858641U;
    msg.status = 63U;

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
    msg.setTimeStamp(0.9565926317358455);
    msg.setSource(59268U);
    msg.setSourceEntity(219U);
    msg.setDestination(45548U);
    msg.setDestinationEntity(182U);
    msg.name.assign("IWIZWJZZHEKUARMFBHYPQOEJTOKDDLIKKZAHZIXFQOLZFAPYQAJOOPHXJZGAGDVLYYXZUMOWPVHPRAQECUYTGLRNDYZKMDTCYVKMPILDIHBSIQJRYHNVCUBLPYNRXYMVQJVXBUKETHDWTRGMSSOETAVECSFWHVDTXCRLCETMWNVN");

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
    msg.setTimeStamp(0.3648065213595444);
    msg.setSource(11985U);
    msg.setSourceEntity(61U);
    msg.setDestination(11160U);
    msg.setDestinationEntity(121U);
    msg.name.assign("BDPZSYCHCRJQFKWBZLQNTNWCBRWZKPOJJHXQZVCYTBWTUGETBQLBNMSIFAGZWXOSNZMTGRTCFALHQXPKHRUOVIYKIMYAPVPPBMHLJMRYNGIIMEOIYWLYEWEIVCODBBXEKRACVNMYFUWFLTFVOFEAKVURSSY");

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
    msg.setTimeStamp(0.4238328815110808);
    msg.setSource(5860U);
    msg.setSourceEntity(218U);
    msg.setDestination(39151U);
    msg.setDestinationEntity(213U);
    msg.name.assign("UKEYPWGRDIZRCSDVBGHVBIRJGEANTQSNJESYIKYAEOFNHQPAJMVSOAOGLIRVWBJGATZQYGXZGXDWCSJYUOBJMQPQFFMYOIVFZZPNOEOJXMXJODNBLQWFASKPHZKPJCBWUBEHYNQVRPCLRUSVLKNAQPSRBHUUEWERCYEMTCZLTUCKBLKDTSOIFKXTNKXVLSTARRATHZMHMYLXTMUWZENUIDDWLWDQKXWXGVJ");

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
    msg.setTimeStamp(0.21145033528359314);
    msg.setSource(62829U);
    msg.setSourceEntity(16U);
    msg.setDestination(5313U);
    msg.setDestinationEntity(239U);
    msg.name.assign("PNKFTZXIMPDAUCHCGPANSHXAZCMVVGDDAPBMWMGINFP");

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
    msg.setTimeStamp(0.5595056569859418);
    msg.setSource(11009U);
    msg.setSourceEntity(38U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(218U);
    msg.name.assign("VZMACBJDUFFEGFUHJWNJGZSLBOICTIIOLUQSAQ");

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
    msg.setTimeStamp(0.20591722965793402);
    msg.setSource(55879U);
    msg.setSourceEntity(100U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(41U);
    msg.name.assign("HGQVXXHLWMDVGRAWSQNCXNSKIEKOGBIRTBGIDCWRWTKYWFYQAHLZQWCSCYCDUPIPNAVPJDSMAOMUKDBIGVMXUCJBCMHTCSOYJZHBRAKCMEZOAIONRINHPDKZEVPUTTZLMJDJUFJJXBORUBTZJHELFCHBIFYBGVXSLIEGNOMQSVQVFELUKNQXLTJ");

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
    msg.setTimeStamp(0.014265173305115786);
    msg.setSource(4684U);
    msg.setSourceEntity(83U);
    msg.setDestination(34168U);
    msg.setDestinationEntity(182U);
    msg.type = 90U;
    msg.error.assign("LZJHOATNMCBBTENTTHJSFDJOAHXPSFSUHXQYMSMGFEQSGSWVMWDTDCKHQABSIDWVFFHIOFFGXWLIFITY");

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
    msg.setTimeStamp(0.7262287661057267);
    msg.setSource(13998U);
    msg.setSourceEntity(186U);
    msg.setDestination(17528U);
    msg.setDestinationEntity(89U);
    msg.type = 65U;
    msg.error.assign("TBBDODOBXKSGLNCMOOJVTAJKZMUIREWSUEHFVADRLHQNPQXEEZWAOLEHQSUSVPWJBQWVVVEMPNKQXJZIQHYKUVCHPPWZYEUCRFMZPOHLUSPBCGJXQHNYCTYCUSYTHIBKTYKBIXXXGSPMQSUQWADTIIXGAOG");

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
    msg.setTimeStamp(0.9017035621751026);
    msg.setSource(6711U);
    msg.setSourceEntity(56U);
    msg.setDestination(6789U);
    msg.setDestinationEntity(98U);
    msg.type = 21U;
    msg.error.assign("AQFOSYYNXMDGEKQOD");

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
    msg.setTimeStamp(0.8727204394327349);
    msg.setSource(6584U);
    msg.setSourceEntity(178U);
    msg.setDestination(24971U);
    msg.setDestinationEntity(10U);
    msg.seq = 43189U;
    msg.sys_dst.assign("LQTPWUHVYLLUITRGRKWBZZYLAJHZDLTBCNOEHKBYUWQVASQWSGIMLRFDYOUJWESCIYJXFTIHGMXWJTFAEBZEXOMRMGFORYKHJJASDTNHQYNGDLOUWFQSJLNKNXEKQIRXAXFKIBKWPINVQCTHGDOPYVVTBZXLZHQRCMPNVUOIBICMAAYGTPZJRRJLNBMMVJUQPVTDYPGBEWHEXSNEVIMKSSCCDPOCDDDWA");
    msg.flags = 186U;
    const char tmp_msg_0[] = {-104, 7, 82, -40, 62, 65, -1, -72, -27, -5, 9, 25, -84, -41, -72, 43, 83, -40, -19, -22, 116, 72, -96, -46, -59, 125, 20, 43, -102, 49, 33, 83, -18, 125, -86, 52, 63, -85, -41, 98, 68, -66, -67, 3, -124, -13, -109, -86, -71, 107, 38, -19, -13, -43, -98, -74, 51, -82, -87, -3, -92, 5, 100, -110, -18, -125, 15, -121, -74, -114, -96, -107, -52, -5, -37, 3, 49, 82, -73, 35, -12, 34, 64, 55, 100, 53, -128, 64, 59, 54, -14, 35, 40, 49, -59, 114, -53, 19, -14, -96, 35, 20, 56, 116, 1, 61, 30, -29, -40, -47, -76, -34, -96, -25, -78, 10, -128, 74, 47, 118, 59, -30, -51, -91, -89, -49, -14, 108, -81, -1, 63, -111, 121, 114, -39, 108, 66, -62, -112, 87, -69, -73, -45, -17, -10, 90, 63, 33, 16, 98, 6, 62, 50, -74, 11, 37, -48, -89, -44, 15, 96, 35, -69, -58, -6, -66, 87, -104};
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
    msg.setTimeStamp(0.12232641909104203);
    msg.setSource(56082U);
    msg.setSourceEntity(231U);
    msg.setDestination(89U);
    msg.setDestinationEntity(217U);
    msg.seq = 34480U;
    msg.sys_dst.assign("XVKEOMDHHHPHOQQRAUFVJBMSYRQNAHKETIZRFDJYTNYWKAADWGUOSIQKVSNLGVDBYIWTTZLXPEUR");
    msg.flags = 54U;
    const char tmp_msg_0[] = {-91, -94, -53, -76, -6, -48, 113, 71, 18, -79, -119, 83, -43, 68, -67, 77, -112, -31, -30, -115, 124, 19, -102, -102, 107, -47, -4, 39, 6, -19, -21, -80, -37, -104, 92, 70, -52, -83, -111, 108, 109, -65, -69, -126, 102, -83, 120, -81, 71, -94, -117, -70, -58, 125, 101, 16, -24, -3, 81, -28, -126, 2, 16, -55, 95, -1, -17, -26, -76, 117, -68, 61, -13, 56, -65, 56, 18, 60, 58, 91, 108, -55, -40, 48, 99, -119, 104, -21, -85, 79, -66, -91, 82, -93, -73, 121, -37, 115, 56, -42, -81, -126, 63, 39, -89, 126, 100, 7, 98, -111, -24, -54, 22, 68, 32, -60, -29, 18, -39, -68, 60, 70, 74, 49, -35, -10, -103, 87};
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
    msg.setTimeStamp(0.8605032580036441);
    msg.setSource(64837U);
    msg.setSourceEntity(161U);
    msg.setDestination(52233U);
    msg.setDestinationEntity(120U);
    msg.seq = 39123U;
    msg.sys_dst.assign("ZUEDBGEFCPWGMZLUBHHSJZFDNKQAQQODIFIRQZCXCTVBPMCNYHILUDGCPGDJSSOXNWDTBXJOCA");
    msg.flags = 18U;
    const char tmp_msg_0[] = {-41, -12, 44, 89, -77, 0, 7, 44, 13, -55, 17, -92, 35, -53, 124, 62, -109, -124, 56, -40, 116, 86, -90, -72, 97, -55, -23, -17, -52, -17, 67, -125, -52, -10, -68, -101, -67, 64, 87, 11, 32, -12, -95, 15, 63, -39, 113, -94, -31, -104, -108, -101, -75, 38, 49, 15, -46, -1, 71, -113, -101, -85, -125, 104, 36, 107, -88, -68};
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
    msg.setTimeStamp(0.9772208891746842);
    msg.setSource(42492U);
    msg.setSourceEntity(134U);
    msg.setDestination(1347U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("CSFWRKZUTNQRUYJPCDKNMNCRPPOGHEKABZYQCDFFVFGKMSYQXWOPZCSCUDWXRLWYYNQAJCDGHMTYUNJWETIMTWJZFGTLUEJLQVZKMPBEXAQBBBEGBXMTWMVOXUAUFRAYUWIGTRPAKOLHSGS");
    msg.sys_dst.assign("SJBXLZTDJNEHQFSETESHJYZLLVRMBGAAVLRGRLOZSFIZKZFTUBVCCMPYHXAVGOBXOPDVLACCNARLNYEMEPQNJXQMISUUENFYGKAHPDIIRNTXZVOIZCVJYVXVSZUBNAOFKJBMUTBYMCQWGHMHYRATQPSMR");
    msg.flags = 124U;
    const char tmp_msg_0[] = {25, 64, 21, -20, -97, 34, -49, -31, 89, -118, 29, 14, 116, 113, 90, 67, 24, 42, -98, -72, 3, 35, -46, -48, 68, 32, -95, -7, -124, 121, -28, 71, 30, 38, 94, -16, 112, -80, 124, -106, -10, -67, -59, -86, 79, -71, 101, 122, 114, -100, 89, 83, -30, -10, -95, -97, 91, 118, -18, -57, -96, -96, -65, -103, -119, 7, -105, -79, 68, -58, -73, -87, 56, 118, 124, 29, -106, -40, -23, 70, 102, 35, -63, 65, 58, 47, -18, -18, -99};
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
    msg.setTimeStamp(0.9829203541623247);
    msg.setSource(43668U);
    msg.setSourceEntity(180U);
    msg.setDestination(3479U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("BZGZXXKSXYDGQVWAYRZQKFWAKWMVJRFJOBFJQWFEYDHCWNPCMZTOEAIKUH");
    msg.sys_dst.assign("HZSNFHPVNWGFMQUAACEWDVURKEAZFIWJZIHIYLPCSPXCGZKUHENIFZJWOBBCJMGTBUGWJMKKVHESTIAQGXSMABABDJCNDRDAVTGLJXBEFOJVBXFKYOMPNRTFMPCSYUCPKQHZMARSFIYNTUFTDGJDWIOLOJVOLVJYXRHXBRZYKQIOPPRNDKMDQPSXDSULREXYZBCPTUVCWDQOLIRBXGAOAHTCRMEXGVUTWLKFEZIQSLWEQEYNKUGSLZHWYVNO");
    msg.flags = 123U;
    const char tmp_msg_0[] = {-9, -35, 115, 36, -105, 92, 32, 37, -111, -57, -26, 118, 89, -125, 83, -71, -25, 59, -121, -10, 77, 116, 71, -49, -33, 80, 5, 95, -10, -107, -99, -87, 27, -73, -115, -20, 41, 63, -114, 54, 24, 56, -4, -60, 93, 5, 71, -24, -127, -24, -70, -15, -97, -30, -127, -53, 68, 69, -61, 77, -67, 19, -126, 30, -24, 101, -109, -87, -70, 41, -17, 41, -49, -18, -14, -17, 42, -55, 55, 89, 117, -32, 107, 19, 25, 23, -118, -5, -127, 93, 91, 24, 101, 15, 69, -86, 41, 12, 102, -44, 118, 18, -39, -59, -83, 32, 25, -126, 51, -55, 119, 87, 107, -100, 47, 118, 11, -86, -71, 62, 83, -49, -11, 23, 33, -4, 23, -100, 84, -80, 114, -40, -23, 124, -23, 15, 107, 42, 116, -43, -90, -39, 42, -111, 14, 18, -81, -14, 28, -97, 7, 54, -1, 58, -9, 10, 44, 90, -70};
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
    msg.setTimeStamp(0.8927882994041664);
    msg.setSource(17764U);
    msg.setSourceEntity(130U);
    msg.setDestination(47638U);
    msg.setDestinationEntity(178U);
    msg.sys_src.assign("DZTKFYZVUFX");
    msg.sys_dst.assign("PVJUWIDUNTTWEUSYPRCDBHVQNTZJKIXBCOZUZWJSXKYBPVEYLIGIZUMQMPHAGMWQDXMTITSCEFLZBFXERFNXSLYRHNQHQJVXFAGVANBCYOOSYJDEGCTLKPKFOOOGZKLMCZCLGRYPRRGODLVQTSADUSEJPCPVMWQSSASKXEUBGHXDFT");
    msg.flags = 81U;
    const char tmp_msg_0[] = {31, -68, 51, 17, 38, -123, -100, 102, 105, 63, -79, 68, -5, -87, -69, -52, 45, -80, -76, 20, 5, -108, -52, -60, -61, -86, -97, -15, 71, -88, -33, -16, 16, -125, -126, -28, 73, 91, 78, 77, 35, 16, -58, 78, 23, 112, 62, -88, 52, -122, -19, -75, -95, 114, -29, -46, -52, -16, 72, 39, 101, 11, 123, 14, -114, -2, 119, -75, -70, 93, 11, 51, -64, -80, 57, 105, -25, 64, -8, -1, 39, -116, 63, 12, 5, -116, -74, 75, -111, 58, 58, -124, -119, -51, 98, -6, -68, -48, 12, -126, 117, 66, 73, -115, -9, 112, 110, -92, 112, -84, 9, 25, 100, -100, -123, -61, 106, -49, 27, -27, -13, -56, -36, 34, 59, -33, -3, -41, -67, -49, 102, -34, -89, 97, 53, -96, 16, -55, 66, -67, 83, 67, -99, -7, -82, -41, -120, 29, 102, 38, -24, -67, -49, -16, 10, 100, 117, 61, -35, -125, -83, 24, -123, -3, -56, 44, -58, -111, 12, -18, -70, 89, -120, -1, 28, -43, -120, -81, 25, -51, -119, -41, 4, -46, 113, -74, 97, -30, 34, 100, 58, -15};
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
    msg.setTimeStamp(0.9608855139894257);
    msg.setSource(36797U);
    msg.setSourceEntity(167U);
    msg.setDestination(47796U);
    msg.setDestinationEntity(67U);
    msg.seq = 53284U;
    msg.value = 144U;
    msg.error.assign("LYGINWDZBRRBNBBOHCDVZHORFXTBKASSLYQIGCOTXOJBTGIXKEHBAYPKCTAIWPZMLENWNXZEWSFUNZYOAJVFKLUQUHZD");

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
    msg.setTimeStamp(0.9307639986972788);
    msg.setSource(42357U);
    msg.setSourceEntity(120U);
    msg.setDestination(2154U);
    msg.setDestinationEntity(101U);
    msg.seq = 18607U;
    msg.value = 50U;
    msg.error.assign("FVMXZLWTDAWBROOVYKXPIEGVLLLVMOLFAZKQYFYXUGZNRGDHUPJYGRZSSROQKNAJGOTPFEHZELKCNZOZPFIBWFEDRVXKJWYQHIFWUCITUJGXKQISGQUYHJUUCBRDNGQCSHUEVPEOOPUYRANKQPLWGHDNSISKCPMCVCSHJMBEPBVVMRNBTFBEHUDDQSMWXXL");

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
    msg.setTimeStamp(0.27739574551357726);
    msg.setSource(23159U);
    msg.setSourceEntity(168U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(249U);
    msg.seq = 40766U;
    msg.value = 66U;
    msg.error.assign("RITJVXUORCAYDWRIPIUGBCRDXDKLQVQCACFGQJFTVPKMVOAWTNZZXHCOXKNDMWISROLKBAEGBFELGYJEPJHMWEGUKDPQLPXXAJUHRHXHZNYEIBPDVPSCFOZ");

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
    msg.setTimeStamp(0.4781124493095785);
    msg.setSource(23012U);
    msg.setSourceEntity(177U);
    msg.setDestination(22357U);
    msg.setDestinationEntity(201U);
    msg.seq = 37360U;
    msg.sys.assign("ECWQVDFKQTGPXLFBVXYMASHGLRFJQWLRQLNAPBHWHDRKPYFQUYNPKWRJPNJZFRSZDKSUTEYCLEXFGQULVEXDEDKLOTEONNGMPNSWCJUCGHGTJBYITOFIIICMWJVBQZZXPNWLHPDENZUPMURAUHSMSXCOBTMXNQECAZLDSIVQGLJTDGAHJKYWWNOOMKVQBIIUEVYOOOUXEZIWRDBGUAMVCRI");
    msg.value = 0.24329800022292547;

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
    msg.setTimeStamp(0.730513918026526);
    msg.setSource(48774U);
    msg.setSourceEntity(26U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(219U);
    msg.seq = 15458U;
    msg.sys.assign("MTIGNDACKXYAMYASBLAITVCCMVEJHWTCJKNQRRHLLPDWEGWSKUPHGUDEFIGU");
    msg.value = 0.3373963818438479;

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
    msg.setTimeStamp(0.9831714919015735);
    msg.setSource(8427U);
    msg.setSourceEntity(120U);
    msg.setDestination(18251U);
    msg.setDestinationEntity(208U);
    msg.seq = 34551U;
    msg.sys.assign("VWCNYXTGZLOMTJACFETUYMGZRQREDDZZMOLSYZVHOPGDEYWCQBSCFTRKPTQUMGHUHEQPKKRDWQKUGRBOYLKAIHKBDFJOBRAPSBCQHJCNUDJWHDNEIHPPIMBABTGGGUPSBKOVEJXWHZOQBMXUYRTZSULFJHXKNSMDUVIFVJDXRZASOJILZYMLUCXAVEPIXWHSGZWKVBOMLPXXNJNYAWXVKFTIAMRIFTQIFGJNQDCAYLWWEFQNNN");
    msg.value = 0.661085372537918;

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
    msg.setTimeStamp(0.10172440375824787);
    msg.setSource(42180U);
    msg.setSourceEntity(253U);
    msg.setDestination(42246U);
    msg.setDestinationEntity(167U);
    msg.seq = 54651U;
    msg.sys_dst.assign("XKTBZAOXQUWMBWXZHVFNLHAPWDPRODUJYKFZHSKLDKEOFFWZNAJDGWPMELYSMEJLTVRBIDQLBQAGZRHCXYCHSLINRSVTDQKHFJIQAWAAONLVYUHUZJPXBQRCMGJDYSEBKIAGRJTFIGCWNNRGBLEQVTBIVEPDYQASDCNJHZDAOGYKMVHFGGOZQUZOUXZYOOCYEPHKTGFFIXRRXTMOUCLSEUIMXTFCVKBMIKCBSNPLSPTTRNMXEWPIJ");
    msg.timeout = 0.3908771519024743;

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
    msg.setTimeStamp(0.4190546424693292);
    msg.setSource(37014U);
    msg.setSourceEntity(127U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(74U);
    msg.seq = 63294U;
    msg.sys_dst.assign("XMAOJGVUGORRWHDAMHRPCVKNQRGCNTNSDITTKBXNBIEGYSGEVCJKDTIMYPTAZSFKOGOBPLQNZHCFWKVABUQSYUSHFDJPBFRMMAYLZEZALV");
    msg.timeout = 0.35776647008682794;

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
    msg.setTimeStamp(0.050956270850421315);
    msg.setSource(23449U);
    msg.setSourceEntity(223U);
    msg.setDestination(6860U);
    msg.setDestinationEntity(232U);
    msg.seq = 61177U;
    msg.sys_dst.assign("DDMPABWFJTVEYMZIEVUEZTXXWOCYIQXRSONUTNBHCKENEUBDTIGCVHSECVFRJZMNPJNHCIUDSWIGDSXPTQVSLZKZQTGIUCZNKHTQJEWGALXMGRVQAOSYJFPNOQWYVLCXCMFWXUFGKGOYURUXGEKMIFJFWBZGRDD");
    msg.timeout = 0.9713568636172347;

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
    msg.setTimeStamp(0.12296554785591451);
    msg.setSource(41765U);
    msg.setSourceEntity(111U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(205U);
    msg.action = 27U;
    msg.longain = 0.120101323659067;
    msg.latgain = 0.4592216074701554;
    msg.bondthick = 2353931052U;
    msg.leadgain = 0.6686419589684718;
    msg.deconflgain = 0.6766478499880298;

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
    msg.setTimeStamp(0.4692384831842591);
    msg.setSource(145U);
    msg.setSourceEntity(234U);
    msg.setDestination(19254U);
    msg.setDestinationEntity(39U);
    msg.action = 218U;
    msg.longain = 0.7036167070894902;
    msg.latgain = 0.7502293438305806;
    msg.bondthick = 1785308190U;
    msg.leadgain = 0.6018575103760041;
    msg.deconflgain = 0.5040976785467756;

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
    msg.setTimeStamp(0.4463722214439537);
    msg.setSource(44683U);
    msg.setSourceEntity(45U);
    msg.setDestination(36657U);
    msg.setDestinationEntity(94U);
    msg.action = 122U;
    msg.longain = 0.346864590638047;
    msg.latgain = 0.36516266966263244;
    msg.bondthick = 2049747127U;
    msg.leadgain = 0.6955908532535465;
    msg.deconflgain = 0.9850382185509262;

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
    msg.setTimeStamp(0.847492480142651);
    msg.setSource(40837U);
    msg.setSourceEntity(6U);
    msg.setDestination(59897U);
    msg.setDestinationEntity(39U);
    msg.err_mean = 0.9368295100021166;
    msg.dist_min_abs = 0.5945507758913102;
    msg.dist_min_mean = 0.015322254866832807;

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
    msg.setTimeStamp(0.29442300433012103);
    msg.setSource(18101U);
    msg.setSourceEntity(180U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(211U);
    msg.err_mean = 0.5933573653118649;
    msg.dist_min_abs = 0.30164318793075584;
    msg.dist_min_mean = 0.1692719283644979;

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
    msg.setTimeStamp(0.20283296885619329);
    msg.setSource(15035U);
    msg.setSourceEntity(102U);
    msg.setDestination(15999U);
    msg.setDestinationEntity(185U);
    msg.err_mean = 0.8827230533413722;
    msg.dist_min_abs = 0.3331327535063232;
    msg.dist_min_mean = 0.7206896615433719;

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
    msg.setTimeStamp(0.6985181616970529);
    msg.setSource(40804U);
    msg.setSourceEntity(165U);
    msg.setDestination(32760U);
    msg.setDestinationEntity(213U);
    msg.action = 74U;
    msg.lon_gain = 0.7453733705578145;
    msg.lat_gain = 0.5231150136523066;
    msg.bond_thick = 0.32623109711719633;
    msg.lead_gain = 0.1309799226806284;
    msg.deconfl_gain = 0.47954260812872507;
    msg.accel_switch_gain = 0.5342938541967088;
    msg.safe_dist = 0.32588079799555447;
    msg.deconflict_offset = 0.646699657493971;
    msg.accel_safe_margin = 0.004965937856257763;
    msg.accel_lim_x = 0.9656447760872539;

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
    msg.setTimeStamp(0.7474476881012395);
    msg.setSource(24884U);
    msg.setSourceEntity(203U);
    msg.setDestination(28512U);
    msg.setDestinationEntity(25U);
    msg.action = 59U;
    msg.lon_gain = 0.4750484787435636;
    msg.lat_gain = 0.09901154682240654;
    msg.bond_thick = 0.3429520471981775;
    msg.lead_gain = 0.3506702035227569;
    msg.deconfl_gain = 0.37590271460425306;
    msg.accel_switch_gain = 0.6980834990914067;
    msg.safe_dist = 0.9179212871964433;
    msg.deconflict_offset = 0.6449678842619732;
    msg.accel_safe_margin = 0.8607314368482829;
    msg.accel_lim_x = 0.16734216378877553;

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
    msg.setTimeStamp(0.5039497770265552);
    msg.setSource(13920U);
    msg.setSourceEntity(107U);
    msg.setDestination(49809U);
    msg.setDestinationEntity(246U);
    msg.action = 118U;
    msg.lon_gain = 0.4032990676818824;
    msg.lat_gain = 0.18928019144597352;
    msg.bond_thick = 0.6537571862951451;
    msg.lead_gain = 0.3004176713858717;
    msg.deconfl_gain = 0.6926566052461844;
    msg.accel_switch_gain = 0.4482767837900343;
    msg.safe_dist = 0.028609763401886035;
    msg.deconflict_offset = 0.8696313263996995;
    msg.accel_safe_margin = 0.3616115926611192;
    msg.accel_lim_x = 0.16995448393223578;

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
    msg.setTimeStamp(0.9665016167502021);
    msg.setSource(44357U);
    msg.setSourceEntity(105U);
    msg.setDestination(49276U);
    msg.setDestinationEntity(176U);
    msg.type = 100U;
    msg.op = 174U;
    msg.err_mean = 0.1491840697111445;
    msg.dist_min_abs = 0.8699026722702697;
    msg.dist_min_mean = 0.22158890457971558;
    msg.roll_rate_mean = 0.47300911476355034;
    msg.time = 0.9169522271115639;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 46U;
    tmp_msg_0.lon_gain = 0.5621586374898151;
    tmp_msg_0.lat_gain = 0.2077718272978223;
    tmp_msg_0.bond_thick = 0.1928634377975963;
    tmp_msg_0.lead_gain = 0.17897058000663557;
    tmp_msg_0.deconfl_gain = 0.0822733258932069;
    tmp_msg_0.accel_switch_gain = 0.9077216752176991;
    tmp_msg_0.safe_dist = 0.6293842717292194;
    tmp_msg_0.deconflict_offset = 0.5237822553666306;
    tmp_msg_0.accel_safe_margin = 0.2872923478548608;
    tmp_msg_0.accel_lim_x = 0.28005303095697776;
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
    msg.setTimeStamp(0.09235372523848284);
    msg.setSource(39188U);
    msg.setSourceEntity(207U);
    msg.setDestination(26091U);
    msg.setDestinationEntity(206U);
    msg.type = 122U;
    msg.op = 22U;
    msg.err_mean = 0.8133839771474581;
    msg.dist_min_abs = 0.0007414825809167747;
    msg.dist_min_mean = 0.9438086561581484;
    msg.roll_rate_mean = 0.2520400550928036;
    msg.time = 0.8956703743593104;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 133U;
    tmp_msg_0.lon_gain = 0.10556064688145417;
    tmp_msg_0.lat_gain = 0.9472055917049426;
    tmp_msg_0.bond_thick = 0.8489350113193268;
    tmp_msg_0.lead_gain = 0.2956332982383113;
    tmp_msg_0.deconfl_gain = 0.3118227076012088;
    tmp_msg_0.accel_switch_gain = 0.9650481759041833;
    tmp_msg_0.safe_dist = 0.28814774456919423;
    tmp_msg_0.deconflict_offset = 0.2176872270491912;
    tmp_msg_0.accel_safe_margin = 0.038220559754280736;
    tmp_msg_0.accel_lim_x = 0.163940384486571;
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
    msg.setTimeStamp(0.5368129588493998);
    msg.setSource(59591U);
    msg.setSourceEntity(187U);
    msg.setDestination(12050U);
    msg.setDestinationEntity(149U);
    msg.type = 71U;
    msg.op = 67U;
    msg.err_mean = 0.49575364015777734;
    msg.dist_min_abs = 0.9715788900504546;
    msg.dist_min_mean = 0.5033061546991925;
    msg.roll_rate_mean = 0.7128454749060549;
    msg.time = 0.378848834566229;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 254U;
    tmp_msg_0.lon_gain = 0.3252119978762401;
    tmp_msg_0.lat_gain = 0.37506761601655947;
    tmp_msg_0.bond_thick = 0.803165058813862;
    tmp_msg_0.lead_gain = 0.6929857229858761;
    tmp_msg_0.deconfl_gain = 0.6457603763151556;
    tmp_msg_0.accel_switch_gain = 0.4417076188490666;
    tmp_msg_0.safe_dist = 0.6067109025702957;
    tmp_msg_0.deconflict_offset = 0.8811103165838977;
    tmp_msg_0.accel_safe_margin = 0.2600130488388416;
    tmp_msg_0.accel_lim_x = 0.975866827746876;
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
    msg.setTimeStamp(0.8010226169233375);
    msg.setSource(10856U);
    msg.setSourceEntity(172U);
    msg.setDestination(24832U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.18430232607426444;
    msg.lon = 0.34875058801821823;
    msg.eta = 1856087028U;
    msg.duration = 32043U;

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
    msg.setTimeStamp(0.21474773630954125);
    msg.setSource(13829U);
    msg.setSourceEntity(99U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.5837533599161304;
    msg.lon = 0.4315660425825304;
    msg.eta = 3102921751U;
    msg.duration = 44556U;

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
    msg.setTimeStamp(0.4660278879752189);
    msg.setSource(44400U);
    msg.setSourceEntity(96U);
    msg.setDestination(63811U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.7107300051393601;
    msg.lon = 0.2703163098137983;
    msg.eta = 1008428471U;
    msg.duration = 25957U;

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
    msg.setTimeStamp(0.3061245842747391);
    msg.setSource(32330U);
    msg.setSourceEntity(173U);
    msg.setDestination(61333U);
    msg.setDestinationEntity(141U);
    msg.plan_id = 4633U;

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
    msg.setTimeStamp(0.9775074847388684);
    msg.setSource(22932U);
    msg.setSourceEntity(58U);
    msg.setDestination(8573U);
    msg.setDestinationEntity(102U);
    msg.plan_id = 39024U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5636228157959816;
    tmp_msg_0.lon = 0.025746574238937003;
    tmp_msg_0.eta = 370763423U;
    tmp_msg_0.duration = 15459U;
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
    msg.setTimeStamp(0.2412345441604855);
    msg.setSource(10960U);
    msg.setSourceEntity(71U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(184U);
    msg.plan_id = 27069U;

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
    msg.setTimeStamp(0.9825339693170563);
    msg.setSource(60105U);
    msg.setSourceEntity(87U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(166U);
    msg.type = 3U;
    msg.command = 96U;
    msg.settings.assign("KRXGRRTJQUBPY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62474U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GNORVYMHTFZPMLCOJLMUZLQXAUBSXFEKVCJBKGEBSQAJUVNYWPZQZIRRGESHQRTNNBUPUQFXMGNLRINUOZAWHFDSLZYKIOWRZMDWEAYLTACWJGUXCLNLDWPDYVDXMPHZWLBAHAN");

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
    msg.setTimeStamp(0.6477731800819819);
    msg.setSource(39371U);
    msg.setSourceEntity(207U);
    msg.setDestination(2584U);
    msg.setDestinationEntity(149U);
    msg.type = 185U;
    msg.command = 23U;
    msg.settings.assign("TIWROICGYTFSQHGARVMSMMBLFXFOKIMWJKKWVRSQNTMHAHDEZUQBEDXTJWNJDCONUFUCJLXEOSDEKRCEDBZCNZOPKMJWTAZXCXPGRWVBFBSXHQPAUBKVITIBFCJCUIIXVPPAYLGJGGBZMHDOVWIUVANYNRHRYSUBLZIPEVQEGDVLGOWMOCHAKFTJLLMSDXTPWIUPNEZEHXKSAFUNAZFAYTUFKZSNHBQZDSYCGOLWYKOQRQQRELYR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 13131U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MLBRRQVZKBBKHESFJDITESWZEBLUQCEWQJRKRJNRSPQMTDGYGG");

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
    msg.setTimeStamp(0.9518900601395053);
    msg.setSource(46427U);
    msg.setSourceEntity(165U);
    msg.setDestination(8645U);
    msg.setDestinationEntity(16U);
    msg.type = 7U;
    msg.command = 121U;
    msg.settings.assign("PRZYKIGGCLBUZTCHJBUQNBUOVATQCTMPHCNBVQLILBUUPQNHVKDPZBQDOHMNLNVZTZMWGOOHAMGRJSXKZESBSWXJXDNFFNXAOLRHXPTVOVYYEWQFPVLCRELIRYWETOCYWQMQJLSJZFAQMRNYBVKRYZJUJPLCEBREDKIFSXYGPXIDDSSGOKTAUHXVWNIISKISWEMMVDERDCAPAFFIUGGMKXTACER");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 13223U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.045235830127018484;
    tmp_tmp_msg_0_0.lon = 0.6774557109140784;
    tmp_tmp_msg_0_0.eta = 1248961858U;
    tmp_tmp_msg_0_0.duration = 20549U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GFMWLMGQUKIZFYPPUEYUKPVRQWMOPCGJUPXLBDMZSEQGXPCORTADFHUAHVSRJHBOMCZHCAXBPXKJNYTGJDMTDEIGVJKUHXLRUOYTSMLURWVDSEFXFCUTMAFSWZNLVNOQQIQC");

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
    msg.setTimeStamp(0.13696191305929817);
    msg.setSource(7444U);
    msg.setSourceEntity(203U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(168U);
    msg.state = 161U;
    msg.plan_id = 8873U;
    msg.wpt_id = 124U;
    msg.settings_chk = 61103U;

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
    msg.setTimeStamp(0.9899871191519762);
    msg.setSource(53164U);
    msg.setSourceEntity(126U);
    msg.setDestination(59737U);
    msg.setDestinationEntity(241U);
    msg.state = 77U;
    msg.plan_id = 2449U;
    msg.wpt_id = 36U;
    msg.settings_chk = 62184U;

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
    msg.setTimeStamp(0.5716487635520324);
    msg.setSource(13362U);
    msg.setSourceEntity(180U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(160U);
    msg.state = 68U;
    msg.plan_id = 27693U;
    msg.wpt_id = 38U;
    msg.settings_chk = 52100U;

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
    msg.setTimeStamp(0.1489540608238341);
    msg.setSource(60856U);
    msg.setSourceEntity(78U);
    msg.setDestination(64206U);
    msg.setDestinationEntity(16U);
    msg.uid = 54U;
    msg.frag_number = 30U;
    msg.num_frags = 3U;
    const char tmp_msg_0[] = {51, -76, -59, 37, -111, 86, 55, 29, 17, -3, -115, -109, 99, -80, 47, 23, 55};
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
    msg.setTimeStamp(0.5725791567506379);
    msg.setSource(719U);
    msg.setSourceEntity(39U);
    msg.setDestination(51078U);
    msg.setDestinationEntity(90U);
    msg.uid = 37U;
    msg.frag_number = 81U;
    msg.num_frags = 60U;
    const char tmp_msg_0[] = {17, -6, -113, 32, 17, 24, 79, -89, -121, 91, -52, -103, 1, -52, 27, 5, -39, 34, -65, 92, -33, 40, 47, -25, -100, -100, -56, -64, -80, 104, -64, 34, -101, -86};
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
    msg.setTimeStamp(0.9635394201043851);
    msg.setSource(41397U);
    msg.setSourceEntity(27U);
    msg.setDestination(47231U);
    msg.setDestinationEntity(253U);
    msg.uid = 79U;
    msg.frag_number = 235U;
    msg.num_frags = 134U;
    const char tmp_msg_0[] = {4, -88, -58, 116, 20, -83, 2, -13, -56, 117, 53, -73, -55, -37, 124, -111, -13, -17, -115, 121, -32, -13, -121, 126, -70, -18, -22, -14, -94, 1, -51, 35, 81, 64, -10, 23, 56, -96, 36, -38, 104, -115, -67, 110, -8, -103, -30, -111, 49, -87, 61, -54, 17, 86, 73, 9, 107, -101, -59, -90, 57, 107, 95, 105, -98, 21, -28, 47, 75, 66, -36, 120, -39, 96, -117, -31, 100};
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
    msg.setTimeStamp(0.008522471438242585);
    msg.setSource(63299U);
    msg.setSourceEntity(2U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(40U);
    msg.content_type.assign("MZHCUZVWXPXPDJYWCZQNSDDRIDIRQXBLKZEHIFJOWSBAVVUWDHKVNGOPCGSRSGLROZWLKAOUNCRNMWIRXFSVMFGH");
    const char tmp_msg_0[] = {24, -124, -80, 65, 71, 22, -72, 99, 57, -19, -37, 103, 115, 113, -62, -71, -123, -46, -42, 69, 126, -46, 41, 123, 77, -24, 13, -103, 113, 27, 64, 53, 73, -11, -101, 32, 20, -67, 101, 59, -34, 104, -1, 15, -6, 86, -32, 50, -12, 103, 24, -65, 76, 81, -77, 84, -97, -71, 94, 6, 77, 29, -58, -95, -61, -41, 92, -72, -101, 68, 67, 50, -90, 16, 110, -75, 111, 75, 9, 22, 24, 99, 52, -116, 37, 112, -123, 80, 114, 55, -52, 86, -89, -104, 57, 86, 13, 105, -62, 32, -7, -4, 69, 13, 14, 116, -59, 123, -46, 1, -69, 112, 50, -77, -32, 12, -19, 68, 17, 93, 68, -81, 52, 113, -23, -41, -61, -7, 10, 34, -103, 54, 113, -120, 83, -80, -53, -110, 86, 123, 51, 122, 45, -29, 103, -75, -8, -47, -97, 122, -61, 33, -8, -66, 84, -54, -31, -20, -29, -104, -10, 119, -96, -74, 81, -36, -73, -98, -97, -75, -31, -114, -74, 30, -121, -10, -23, -71, -83, 93, 26, 93, -9, 11, 75, 26, -22, 91, -79, -28, 5, 4, 39, 104, 85, -87, 77, 81, 33, -122, 107, 69, 99, 31, 12, -118, 104, -42, 64, -127, 95, 4, -62, 39, -106, -65, 55, 55, -76, 67, 123, -104, 3, -55, 43, 40, -111, 33, 72, 102, 71, 65, 83, -115, 44, -5, -86, -94, 62, -13, -89, 42, 87, -95, -126, 120};
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
    msg.setTimeStamp(0.2520493848397679);
    msg.setSource(16977U);
    msg.setSourceEntity(82U);
    msg.setDestination(45344U);
    msg.setDestinationEntity(188U);
    msg.content_type.assign("ILPPPUUGXCZEZMMCZFJDCHGAIAWOXCQWF");
    const char tmp_msg_0[] = {54, 44, 108, 5, -90, 80, -81, -48, 79, -12, 90, -108, -61, 76, 123, 83, -27, 4, -57, -75, 19, 126, -119, 107, -13, -104, 5, 91, -65, 15, -39, 48, 36, -2, -76, -58, -46, 66, -112, 21, 33, -122, -77, -15, 125, -100, 35, -24, 32, 56, 49, -13, -103, 62, 123, -57, -92, 74, 85, -42, 46, -92, 78, -66, 12, 13, 67, -124, 42, 84, -22, 103, 42, -78, -66, 71, -120, 97, 69};
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
    msg.setTimeStamp(0.6034541117639565);
    msg.setSource(9611U);
    msg.setSourceEntity(207U);
    msg.setDestination(63163U);
    msg.setDestinationEntity(53U);
    msg.content_type.assign("YEAXZJKGLEYCQHPBIROKWRCLCDHSWRHLKKCGNFBGPAGNWQYISDFGIMRZJNPKTEIYKVNNQSVQUKBDFTJCSBUTCLKWUTSLZICHVTBZURZUIGVCYAJDCIEFKTBBUMS");
    const char tmp_msg_0[] = {-5, 14, 67, -111, 1, -87, -38, 97, 31, 30, -116, 102, 99, -20, 68, 117, 90, 94, -89, 24, 91, 82, -20, -55, 38, 90, 124, 24, -33, -44, 75, 4, 59, 126, 4, 94, 47, 96, 103, -64, -67, -81, -112, -71, 95, 103, 4, -98, -2, 116, -58, -21, 36, 49, 59, -5, 12, -112, -124, 9, -78, 57, 30, -42, 56, 42, -67, 49, -94, 53, 49, 1, 104, 60, 7, 24, 7, -14, 83, -28, -85, -121, 23, 58, 23, 54, 123, -45, 118, 5, 39, 32, -88, 56, -115, -60, 45, 41, 114, 72, 35, -39, 117, -21, -12, -97, 93, -73, -23, 80, 104, 110, 41, 30, 109, 118, -57, -57, 1, 81};
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
    msg.setTimeStamp(0.6205717768765932);
    msg.setSource(25033U);
    msg.setSourceEntity(51U);
    msg.setDestination(34278U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.5662057299874698);
    msg.setSource(28149U);
    msg.setSourceEntity(8U);
    msg.setDestination(58025U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.9834953085088392);
    msg.setSource(59312U);
    msg.setSourceEntity(216U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.6715223200460736);
    msg.setSource(31047U);
    msg.setSourceEntity(77U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(81U);
    msg.target = 43738U;
    msg.bearing = 0.010978369972159285;
    msg.elevation = 0.8727118394619008;

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
    msg.setTimeStamp(0.41712976996126583);
    msg.setSource(5463U);
    msg.setSourceEntity(31U);
    msg.setDestination(20964U);
    msg.setDestinationEntity(242U);
    msg.target = 40397U;
    msg.bearing = 0.6295453741499035;
    msg.elevation = 0.014304171685057043;

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
    msg.setTimeStamp(0.37723279599411375);
    msg.setSource(45345U);
    msg.setSourceEntity(231U);
    msg.setDestination(11823U);
    msg.setDestinationEntity(111U);
    msg.target = 10265U;
    msg.bearing = 0.18081829869675448;
    msg.elevation = 0.26946198549467393;

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
    msg.setTimeStamp(0.07816369356330266);
    msg.setSource(42168U);
    msg.setSourceEntity(118U);
    msg.setDestination(29028U);
    msg.setDestinationEntity(107U);
    msg.target = 29929U;
    msg.x = 0.028574763115418067;
    msg.y = 0.4957682934516092;
    msg.z = 0.4818571338119565;

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
    msg.setTimeStamp(0.15516609515793478);
    msg.setSource(63529U);
    msg.setSourceEntity(233U);
    msg.setDestination(5093U);
    msg.setDestinationEntity(56U);
    msg.target = 3530U;
    msg.x = 0.7233593280977026;
    msg.y = 0.3104089127377603;
    msg.z = 0.6764579413199996;

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
    msg.setTimeStamp(0.781403066500219);
    msg.setSource(26067U);
    msg.setSourceEntity(215U);
    msg.setDestination(50654U);
    msg.setDestinationEntity(94U);
    msg.target = 9870U;
    msg.x = 0.12686862151858336;
    msg.y = 0.2584350377371415;
    msg.z = 0.8568260324842483;

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
    msg.setTimeStamp(0.6009763357780311);
    msg.setSource(29330U);
    msg.setSourceEntity(47U);
    msg.setDestination(36362U);
    msg.setDestinationEntity(212U);
    msg.target = 23988U;
    msg.lat = 0.6191056723001869;
    msg.lon = 0.8225548061871978;
    msg.z_units = 151U;
    msg.z = 0.8223786838193458;

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
    msg.setTimeStamp(0.13044470852560608);
    msg.setSource(19730U);
    msg.setSourceEntity(127U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(109U);
    msg.target = 34325U;
    msg.lat = 0.41736749093446357;
    msg.lon = 0.22810587038614583;
    msg.z_units = 70U;
    msg.z = 0.2713733630908981;

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
    msg.setTimeStamp(0.9567000314251719);
    msg.setSource(60634U);
    msg.setSourceEntity(113U);
    msg.setDestination(27643U);
    msg.setDestinationEntity(90U);
    msg.target = 11333U;
    msg.lat = 0.7891338101974236;
    msg.lon = 0.2759734785406954;
    msg.z_units = 137U;
    msg.z = 0.62606643760317;

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
    msg.setTimeStamp(0.5065954223719106);
    msg.setSource(13879U);
    msg.setSourceEntity(214U);
    msg.setDestination(20341U);
    msg.setDestinationEntity(22U);
    msg.locale.assign("WANEDVVRFZFTOOXIOXUT");
    const char tmp_msg_0[] = {105, -109, 10, 120, 34, 71, -128, 1, -11, -90, -24, 40, 86, 10, 84, -79, -71, 47, 19, 16, 46, -29, -123, -89, -80, 27, -124, -49, 67, 57, -21, -47, 2, -10, -120, -92, 64, -97, 2, -64, -128, 106, 102, 118, -45, -32, 91, -20, -89, 42, -60, 90, -24, 36};
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
    msg.setTimeStamp(0.9556035019213726);
    msg.setSource(57745U);
    msg.setSourceEntity(188U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(83U);
    msg.locale.assign("RRVDAUCZPBWFPVNRPGYPPVYMLESNPNIDHYENUQDTMWJZGRIOHXXZVZTSDAODBGHKBWJCTADIDHWMGFAKKYTKCQHAPCTQXRLYXOTIGLELOULYYUINDCUCEFJGWKUERGSFSGZWJMJRFOSLHBBIYHBCYPHSKXVHKPZAITISPEQOVLOZQSDGXVZJJVCENIMWGJTDAVUMOSKAAR");
    const char tmp_msg_0[] = {-42, 19, 1, -113, 101, 91, 125, 57, -109, -57, 45, 92, -5, 97, -90, -54, 78, -46, -61, -50, 93, -70, 1, 124, 76, 43, -42, -64, -17, 43, 8, -104, 51, -72, -99, 94, 21, 44, 13, -63, 52, 124, 90, -52, -103, 1, 83, -102, -6, 81, -58, 47, -34, 64, -128, 30, 96, 0, -123, -52, -16, -59, -18, 7, 93, -127, 38, -86, -78, 67, 57, 7, 50, -47, 45, -105, -59, -43, 92, -83, 66, -88, 104, 80, 121, -12, 14, -66, 60, -43, 11, 80, 110, 17, -75, 98, -42, -5, -120, -6, 63, -119, -73, 28, -84, -1, -36, -34};
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
    msg.setTimeStamp(0.2639623407384807);
    msg.setSource(59225U);
    msg.setSourceEntity(143U);
    msg.setDestination(40046U);
    msg.setDestinationEntity(141U);
    msg.locale.assign("NWHJWSELMEVUTACBFOBB");
    const char tmp_msg_0[] = {9, 59, 58, 104, 42, -50, -50, 116, 81, -114, -88, -105, 50, 38, -6, 80, 68, -62, -114, 94, -91, -78, 36, -122, -61, 63, 125, -19, 0, 106, 36, -77, 4};
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
    msg.setTimeStamp(0.8607030902392531);
    msg.setSource(8468U);
    msg.setSourceEntity(243U);
    msg.setDestination(58511U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.4376771080206455);
    msg.setSource(46392U);
    msg.setSourceEntity(201U);
    msg.setDestination(59656U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.9270685450229864);
    msg.setSource(8746U);
    msg.setSourceEntity(174U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.5643476793540333);
    msg.setSource(19302U);
    msg.setSourceEntity(226U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(55U);
    msg.camid = 197U;
    msg.x = 11214U;
    msg.y = 16562U;

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
    msg.setTimeStamp(0.5045451369931611);
    msg.setSource(56141U);
    msg.setSourceEntity(47U);
    msg.setDestination(21998U);
    msg.setDestinationEntity(72U);
    msg.camid = 90U;
    msg.x = 45849U;
    msg.y = 54696U;

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
    msg.setTimeStamp(0.3494359759751088);
    msg.setSource(49813U);
    msg.setSourceEntity(1U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(157U);
    msg.camid = 244U;
    msg.x = 32306U;
    msg.y = 7015U;

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
    msg.setTimeStamp(0.022144205566536512);
    msg.setSource(32423U);
    msg.setSourceEntity(92U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(62U);
    msg.camid = 222U;
    msg.x = 25377U;
    msg.y = 28499U;

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
    msg.setTimeStamp(0.6063795383947679);
    msg.setSource(52225U);
    msg.setSourceEntity(178U);
    msg.setDestination(29830U);
    msg.setDestinationEntity(43U);
    msg.camid = 146U;
    msg.x = 37392U;
    msg.y = 54481U;

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
    msg.setTimeStamp(0.8940160069804158);
    msg.setSource(12293U);
    msg.setSourceEntity(250U);
    msg.setDestination(37983U);
    msg.setDestinationEntity(159U);
    msg.camid = 238U;
    msg.x = 22170U;
    msg.y = 59553U;

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
    msg.setTimeStamp(0.24076493390841558);
    msg.setSource(18381U);
    msg.setSourceEntity(16U);
    msg.setDestination(28893U);
    msg.setDestinationEntity(160U);
    msg.tracking = 72U;
    msg.lat = 0.4872528916101895;
    msg.lon = 0.187507242641894;
    msg.x = 0.29887954007860107;
    msg.y = 0.770691253782388;
    msg.z = 0.0739029816107527;

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
    msg.setTimeStamp(0.06946850360061829);
    msg.setSource(35329U);
    msg.setSourceEntity(75U);
    msg.setDestination(20505U);
    msg.setDestinationEntity(42U);
    msg.tracking = 205U;
    msg.lat = 0.9159524164200492;
    msg.lon = 0.25925393499371585;
    msg.x = 0.4838441646194972;
    msg.y = 0.04702999371256844;
    msg.z = 0.06131207004891881;

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
    msg.setTimeStamp(0.9092669024657872);
    msg.setSource(48822U);
    msg.setSourceEntity(223U);
    msg.setDestination(33344U);
    msg.setDestinationEntity(169U);
    msg.tracking = 105U;
    msg.lat = 0.4698086920512978;
    msg.lon = 0.30315111234952763;
    msg.x = 0.6213719270823533;
    msg.y = 0.12819958647288465;
    msg.z = 0.48506176719190175;

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
    msg.setTimeStamp(0.7845456808900977);
    msg.setSource(34093U);
    msg.setSourceEntity(232U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(23U);
    msg.target.assign("CSQOVTVWZIIBAQYVVCQZRPTRDJLZICIUIGYDTQCOCJGVURNBLXGKASMDZJXPOZEMCNEFQGWUNWUCJEYKPTLNFCVDPDMFERPXKUUWBMOQLBALCKSEAPFAXZTAPEHHNJPLWUSHJFFMYHTWKGSKQXRNYUNANMVKHWA");
    msg.lbearing = 0.708902231776271;
    msg.lelevation = 0.7999977542328809;
    msg.bearing = 0.7973677429278059;
    msg.elevation = 0.25151360168554304;
    msg.phi = 0.5139557188531517;
    msg.theta = 0.18842780009089843;
    msg.psi = 0.9738716141874866;
    msg.accuracy = 0.02190386037571823;

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
    msg.setTimeStamp(0.43051433289290075);
    msg.setSource(18851U);
    msg.setSourceEntity(43U);
    msg.setDestination(30132U);
    msg.setDestinationEntity(14U);
    msg.target.assign("LKKOBZMXZHUIYNRJOZKHQIAEQWTMYOQFFPXATXFEUQHVMHWPJDGCZOLLYRLSNWWSOZBVIAVIVUBPPSURCCVAMKDPHOCWRTECOAQNMQNRHWUXAPOERJYDQKSYABSYGRMBSGVDGSGXZZTCIQGDJTXXJJKLUDGMSUJUINNYWRZFPNLOOFTGRDFCQESTPNBZEWVLCNDTIUHGIEPBFYCB");
    msg.lbearing = 0.940371766967497;
    msg.lelevation = 0.9726065614546301;
    msg.bearing = 0.8157852766485515;
    msg.elevation = 0.7741895788377351;
    msg.phi = 0.6779733714061257;
    msg.theta = 0.36914706842913836;
    msg.psi = 0.4188097767052281;
    msg.accuracy = 0.24380845202221113;

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
    msg.setTimeStamp(0.6411946368876696);
    msg.setSource(32808U);
    msg.setSourceEntity(15U);
    msg.setDestination(8846U);
    msg.setDestinationEntity(44U);
    msg.target.assign("GCOFHUGDMVUXOGGLHMMVFPMVXSIBTLEDBQKOECAUJDMRPLWMJBWUMTAZIEKKQALQOWJLAPQRRYWNNRTWOBIYGBLCARSDKJGFWINTLQZPZIPMIBQDTKPXNIAXBSSQVRTFVRPVRYGPSXYCGKMPOSLF");
    msg.lbearing = 0.8292119442921992;
    msg.lelevation = 0.720042746472524;
    msg.bearing = 0.6931579830697359;
    msg.elevation = 0.41162167430512264;
    msg.phi = 0.9403474755802506;
    msg.theta = 0.5950337312174724;
    msg.psi = 0.7619914560546224;
    msg.accuracy = 0.386508666482678;

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
    msg.setTimeStamp(0.9659488137272761);
    msg.setSource(26632U);
    msg.setSourceEntity(61U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(117U);
    msg.target.assign("YODFPIYFIGINVWKBXPPHQNRKRZFZJPMCHGFJUCAAHBZZAGUVGIAIXUTNBEDROXGYTBQTUICUSASERWJQFHXVWBZLTVEZRJSTMNUAAUAQYEJPLOOZJROYMBWFGRCDSLKTIXOHJASXLCDBVHOIHCDKFYPTWNXMMEDKOWVIBPTUZCWFOSUPVPGHILMMMGHDKJKKEQBGCRLNMZLSREQWQUQYT");
    msg.x = 0.41685204476478344;
    msg.y = 0.21739392706384586;
    msg.z = 0.283888355489862;
    msg.n = 0.3274428160147824;
    msg.e = 0.15295122143765372;
    msg.d = 0.5973931705866948;
    msg.phi = 0.8558381406385206;
    msg.theta = 0.2660004423570095;
    msg.psi = 0.09235014930757035;
    msg.accuracy = 0.16723859207817038;

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
    msg.setTimeStamp(0.4641161360138809);
    msg.setSource(44910U);
    msg.setSourceEntity(80U);
    msg.setDestination(8372U);
    msg.setDestinationEntity(40U);
    msg.target.assign("ZOGIEKDVGHHOVJJPJLOEMHKFPNXEPTVUALTAQBAQZSZMNOUTRPBXTAXURGGVOKEUJMNHKUYQTUSUIURJJMYCFBBTGWNSNJWVIZNFQCDQXMIIHPMSXWXWAQCMUOIBLDHFSAIPERKWTCJTSFZRSRVYZVETZZDYCCYSDHFRIBALDRYIWILDWLKP");
    msg.x = 0.5520333540438987;
    msg.y = 0.5604795204994849;
    msg.z = 0.9089675439258854;
    msg.n = 0.5339696173569883;
    msg.e = 0.5347892579525705;
    msg.d = 0.8148949039859145;
    msg.phi = 0.5842616617825135;
    msg.theta = 0.01761125900305205;
    msg.psi = 0.5827256462762254;
    msg.accuracy = 0.7593973919406128;

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
    msg.setTimeStamp(0.22044119234208548);
    msg.setSource(25142U);
    msg.setSourceEntity(23U);
    msg.setDestination(65363U);
    msg.setDestinationEntity(141U);
    msg.target.assign("EWSBOPOAEYHCXJOMDFLNJSDMKIZPFQWDRFNMDDBZRKGQHELATHZAWUFXWBUNVULRQLUZPSVFLHHOEISJ");
    msg.x = 0.2456047698984798;
    msg.y = 0.6865619182981921;
    msg.z = 0.303012093086402;
    msg.n = 0.5137695565234579;
    msg.e = 0.8840362505671568;
    msg.d = 0.42834577148942465;
    msg.phi = 0.1341132306799503;
    msg.theta = 0.40019062022950147;
    msg.psi = 0.5274024332773953;
    msg.accuracy = 0.6165195856561901;

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
    msg.setTimeStamp(0.5102685111833126);
    msg.setSource(2324U);
    msg.setSourceEntity(90U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(190U);
    msg.target.assign("OHPLINJYPNXGSXBPLJGJAVPUIWHGMAJCNNROSQRLIDZUVIFIAPLBZMTMQAYUOOQSGEJKJPFMZTWBHWBNRAVXD");
    msg.lat = 0.28563134494300846;
    msg.lon = 0.707694488838772;
    msg.z_units = 86U;
    msg.z = 0.5149285256288382;
    msg.accuracy = 0.6850963728240987;

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
    msg.setTimeStamp(0.31122152371551803);
    msg.setSource(57417U);
    msg.setSourceEntity(1U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(69U);
    msg.target.assign("QVZVHNGKLZWWHISSZACQOQYOGXMGTOXBPVQTFPKNPRMOCPMKTHFIXTHWXUBYYOFTMJLUWZMDMKCZEFJAFEJHJSZKGURYCVKSPYPISXQDBZHTUGEUJUMDACQRLCHLYHNIBWKLCUJCANKZFOCDSDLUAPGWJYSAERNGNLEFWASPKVNKDRWDBGQDXMIZREEVBOMZQCWLLRPHIJIIFEQVQBVJVARX");
    msg.lat = 0.06788904281603336;
    msg.lon = 0.8546599789639658;
    msg.z_units = 125U;
    msg.z = 0.6028550941176782;
    msg.accuracy = 0.885676465862273;

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
    msg.setTimeStamp(0.00944775132699982);
    msg.setSource(26371U);
    msg.setSourceEntity(139U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(156U);
    msg.target.assign("PXUFBDOBYMGVRGAXKCFOUUUA");
    msg.lat = 0.13655442993216516;
    msg.lon = 0.5212303522719304;
    msg.z_units = 91U;
    msg.z = 0.2900011012107069;
    msg.accuracy = 0.9470154805572869;

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
    msg.setTimeStamp(0.20886008697450997);
    msg.setSource(38881U);
    msg.setSourceEntity(214U);
    msg.setDestination(22229U);
    msg.setDestinationEntity(71U);
    msg.name.assign("UBUACMOOVPUNHTVGIFWMWSXSSQTCYFQMJGUEGLNLPUFZLRUDTNNDGLCZBAETSCKWCXZHAZHOAPEWIIVWHMYTDHPVARYEHAXLDIRSJIKOFWJFEFYUSXPMWKWJHZEQMXVQJWLBKXAZGVOIJOPEUZDKTQISMDKCQFNNQTLJOJPYJABRXDXNGRLPDKKNNGRTBLJOCEKYN");
    msg.lat = 0.4601609374271324;
    msg.lon = 0.22863175775099887;
    msg.z = 0.8373754050894401;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.566600852461074);
    msg.setSource(48162U);
    msg.setSourceEntity(159U);
    msg.setDestination(20603U);
    msg.setDestinationEntity(209U);
    msg.name.assign("JFHWKHRKZHKDLGAVUXYNHGWMUCAIDTWCHZJZMOIHKRKPRTQDXGIPYPFBDCLIPVOWGOSNZAPUFZBLLVLFQUKSCMNIKDSBAOLMGDZAQEHDPXFEPQUATRFOVAXTXQMRBLKMSTSQVZMICOELEBLVYSCYIEETXSJNLSIWVUSFDBGWCYMYBGMDBFHNYJXQNVTPBJNYAFATEJARJBZ");
    msg.lat = 0.8375946346456302;
    msg.lon = 0.79200283090068;
    msg.z = 0.7315554082797656;
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
    msg.setTimeStamp(0.5254582415149638);
    msg.setSource(11498U);
    msg.setSourceEntity(89U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(212U);
    msg.name.assign("VIFSXWZNSEVRLJHVJAMAKKKGSWBJUGSUIZJUWLZEQOXQLTBCMPJGTYNFIMDAQBNAQHQ");
    msg.lat = 0.3462240403013902;
    msg.lon = 0.7881124908901619;
    msg.z = 0.3843474781968701;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.4042510094621422);
    msg.setSource(2153U);
    msg.setSourceEntity(66U);
    msg.setDestination(18264U);
    msg.setDestinationEntity(232U);
    msg.op = 230U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MCSPTFSJQSDOOCDZQFTPQJUYSVGVYLFKNLOMCETOBIHPXUUPYGKMDNDMZWGJQTMZYWPWJNYTHDBIOC");
    tmp_msg_0.lat = 0.6931547461026185;
    tmp_msg_0.lon = 0.6724893285821975;
    tmp_msg_0.z = 0.6519283607459021;
    tmp_msg_0.z_units = 18U;
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
    msg.setTimeStamp(0.06706494141696218);
    msg.setSource(14818U);
    msg.setSourceEntity(129U);
    msg.setDestination(62979U);
    msg.setDestinationEntity(45U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.6946980276219907);
    msg.setSource(30032U);
    msg.setSourceEntity(175U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(221U);
    msg.op = 231U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EAGWIXNHECPKPSTQIBVIMRBPCBIXSQPPJRYAWKAOGCGOLPZTOQSDLEGUZYEXGOHUFFFWDAKFHTFESHBMMUTKBZDXQVDBNCDBCUMAYHQEEMPZUUWIXOVJZWCJZFOFCIVGYRDRNWYNZJLJEKYHJHPBLXHZRVOX");
    tmp_msg_0.lat = 0.3584077098866325;
    tmp_msg_0.lon = 0.9824193707473131;
    tmp_msg_0.z = 0.5916604846756662;
    tmp_msg_0.z_units = 75U;
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
    msg.setTimeStamp(0.5221452775433431);
    msg.setSource(18170U);
    msg.setSourceEntity(145U);
    msg.setDestination(16906U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9228696776784794;
    msg.type = 0U;

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
    msg.setTimeStamp(0.22347715890155495);
    msg.setSource(60738U);
    msg.setSourceEntity(175U);
    msg.setDestination(29884U);
    msg.setDestinationEntity(214U);
    msg.value = 0.31443874949120043;
    msg.type = 253U;

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
    msg.setTimeStamp(0.13782559063867772);
    msg.setSource(1338U);
    msg.setSourceEntity(59U);
    msg.setDestination(28938U);
    msg.setDestinationEntity(187U);
    msg.value = 0.8343534752627141;
    msg.type = 54U;

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
    msg.setTimeStamp(0.7610817835328767);
    msg.setSource(54206U);
    msg.setSourceEntity(157U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(125U);
    msg.value = 0.5902490873883954;

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
    msg.setTimeStamp(0.6415019666460403);
    msg.setSource(14147U);
    msg.setSourceEntity(86U);
    msg.setDestination(54236U);
    msg.setDestinationEntity(82U);
    msg.value = 0.24334203768715745;

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
    msg.setTimeStamp(0.9319630567403674);
    msg.setSource(496U);
    msg.setSourceEntity(252U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6261468030706103;

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
    msg.setTimeStamp(0.9280735256957305);
    msg.setSource(59226U);
    msg.setSourceEntity(175U);
    msg.setDestination(37751U);
    msg.setDestinationEntity(184U);
    msg.timestamp_last_service = 0.1660020429834479;
    msg.time_next_service = 0.0009413707792266246;
    msg.time_motor_next_service = 0.4767233128403211;
    msg.time_idle_ground = 0.7251652851520063;
    msg.time_idle_air = 0.9109735305754459;
    msg.time_idle_water = 0.24506726712396076;
    msg.time_idle_underwater = 0.6349644036068027;
    msg.time_idle_unknown = 0.615162667780731;
    msg.time_motor_ground = 0.5568167224889533;
    msg.time_motor_air = 0.5939435138973861;
    msg.time_motor_water = 0.840031421140615;
    msg.time_motor_underwater = 0.24604914511410525;
    msg.time_motor_unknown = 0.6590859772401075;
    msg.rpm_min = 30772;
    msg.rpm_max = 31015;
    msg.depth_max = 0.11530448597080034;

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
    msg.setTimeStamp(0.46213704801956024);
    msg.setSource(5963U);
    msg.setSourceEntity(133U);
    msg.setDestination(21156U);
    msg.setDestinationEntity(98U);
    msg.timestamp_last_service = 0.6513846974143094;
    msg.time_next_service = 0.4771868028713102;
    msg.time_motor_next_service = 0.5544019745424544;
    msg.time_idle_ground = 0.8436668540250756;
    msg.time_idle_air = 0.6933730509483027;
    msg.time_idle_water = 0.305494446912812;
    msg.time_idle_underwater = 0.9041932628766532;
    msg.time_idle_unknown = 0.43882212229134243;
    msg.time_motor_ground = 0.4178171532749215;
    msg.time_motor_air = 0.16563781130052546;
    msg.time_motor_water = 0.35243057870802086;
    msg.time_motor_underwater = 0.5525715048155457;
    msg.time_motor_unknown = 0.0989085365099972;
    msg.rpm_min = -12968;
    msg.rpm_max = 19789;
    msg.depth_max = 0.8156073054473946;

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
    msg.setTimeStamp(0.8349161878010533);
    msg.setSource(62839U);
    msg.setSourceEntity(83U);
    msg.setDestination(41898U);
    msg.setDestinationEntity(17U);
    msg.timestamp_last_service = 0.11551032226050195;
    msg.time_next_service = 0.18594464428299495;
    msg.time_motor_next_service = 0.389651369810445;
    msg.time_idle_ground = 0.24349646258589164;
    msg.time_idle_air = 0.45349180480043827;
    msg.time_idle_water = 0.13661133189014807;
    msg.time_idle_underwater = 0.6736005503111518;
    msg.time_idle_unknown = 0.44393990215873724;
    msg.time_motor_ground = 0.9346332390355492;
    msg.time_motor_air = 0.8705063286958092;
    msg.time_motor_water = 0.6824841105011228;
    msg.time_motor_underwater = 0.9931542610716565;
    msg.time_motor_unknown = 0.8872427123791976;
    msg.rpm_min = -20241;
    msg.rpm_max = -29205;
    msg.depth_max = 0.6204833850675014;

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
    msg.setTimeStamp(0.5402952189081806);
    msg.setSource(2711U);
    msg.setSourceEntity(141U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(86U);
    msg.severity = 113U;
    msg.text.assign("NUAUVVWTBQRKEBQKYTUCWLEDJEVRGZFTABUXYLFYKGVRJWNAOOCHTWPHMRUFJRXSRHCPEPDQMOUVDWPHALYPTEDIJLIOPYZLXKRHPISBYWZQXIEDONQOHMLXEHHXMDMTMSBQGFPINIBUBXOCNGCWJNKTBDYJOJSWNIYSESIVKFAQQZGGFGEWZCGTFITSSUKLAKPKZZU");

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
    msg.setTimeStamp(0.5778370999475586);
    msg.setSource(49052U);
    msg.setSourceEntity(211U);
    msg.setDestination(23484U);
    msg.setDestinationEntity(190U);
    msg.severity = 223U;
    msg.text.assign("JSVYRDKEPSHCNSHVGOU");

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
    msg.setTimeStamp(0.6548782144496559);
    msg.setSource(56869U);
    msg.setSourceEntity(20U);
    msg.setDestination(11860U);
    msg.setDestinationEntity(79U);
    msg.severity = 192U;
    msg.text.assign("PAPWGWDQMOYSYVHPEQKCKWRTOVRALNTZCJKFYSBIBIIZPZZILJZCSNUEURSROQSURCYUKXVFNHXNLPJENDNFVUCUOEPOBEAPFECBCWGJBRSXHDMNVJUXWTUWTFLWOBGLXHZYGWKHASWDHEDMPLCGMLIQLXITHRUTCMAZHQEBVJFJKSGBDHVVAGX");

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
    msg.setTimeStamp(0.7583858841932363);
    msg.setSource(54397U);
    msg.setSourceEntity(219U);
    msg.setDestination(43039U);
    msg.setDestinationEntity(147U);
    msg.channel = 53;
    msg.value = 845045509;
    msg.gain = 121U;

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
    msg.setTimeStamp(0.6669544537502566);
    msg.setSource(2464U);
    msg.setSourceEntity(212U);
    msg.setDestination(22903U);
    msg.setDestinationEntity(19U);
    msg.channel = -120;
    msg.value = 333460702;
    msg.gain = 77U;

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
    msg.setTimeStamp(0.010321891636299596);
    msg.setSource(63872U);
    msg.setSourceEntity(28U);
    msg.setDestination(62970U);
    msg.setDestinationEntity(81U);
    msg.channel = 24;
    msg.value = 653136843;
    msg.gain = 253U;

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
    msg.setTimeStamp(0.6635218310612112);
    msg.setSource(9804U);
    msg.setSourceEntity(148U);
    msg.setDestination(5605U);
    msg.setDestinationEntity(97U);
    msg.ch01 = 0.007277521915438512;
    msg.ch02 = 0.16320463923135387;
    msg.ch03 = 0.07901026468332939;
    msg.ch04 = 0.20380061843404362;
    msg.ch05 = 0.28515623965390735;
    msg.ch06 = 0.7710433974593045;
    msg.ch07 = 0.3979195602351119;
    msg.ch08 = 0.10320976481833577;
    msg.ch09 = 0.43099985176599387;
    msg.ch10 = 0.28082377241526935;
    msg.ch11 = 0.7541618345446969;
    msg.ch12 = 0.8101788524142755;
    msg.ch13 = 0.9905617383150526;
    msg.ch14 = 0.7322350012762195;
    msg.ch15 = 0.6307513138770175;
    msg.ch16 = 0.7479064888240176;

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
    msg.setTimeStamp(0.3473821157633613);
    msg.setSource(20390U);
    msg.setSourceEntity(152U);
    msg.setDestination(56547U);
    msg.setDestinationEntity(206U);
    msg.ch01 = 0.6060140391347784;
    msg.ch02 = 0.7494555004616384;
    msg.ch03 = 0.581977572433979;
    msg.ch04 = 0.7388425182576626;
    msg.ch05 = 0.19278372907716024;
    msg.ch06 = 0.6036782213753821;
    msg.ch07 = 0.595829577358681;
    msg.ch08 = 0.5958878355767007;
    msg.ch09 = 0.03576256424398094;
    msg.ch10 = 0.25097670217270884;
    msg.ch11 = 0.35770482847845875;
    msg.ch12 = 0.46234705134436693;
    msg.ch13 = 0.28567770171045337;
    msg.ch14 = 0.9262664815682384;
    msg.ch15 = 0.6317900480310203;
    msg.ch16 = 0.5748061518344328;

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
    msg.setTimeStamp(0.34309800089832565);
    msg.setSource(40528U);
    msg.setSourceEntity(212U);
    msg.setDestination(41737U);
    msg.setDestinationEntity(84U);
    msg.ch01 = 0.9589205222970694;
    msg.ch02 = 0.7301994325486457;
    msg.ch03 = 0.24746463635638072;
    msg.ch04 = 0.6685204151732981;
    msg.ch05 = 0.5814291324764495;
    msg.ch06 = 0.2764999853379516;
    msg.ch07 = 0.701622409942024;
    msg.ch08 = 0.9033823376067126;
    msg.ch09 = 0.3337182835565866;
    msg.ch10 = 0.6514167263149618;
    msg.ch11 = 0.49812938041100674;
    msg.ch12 = 0.6607288461669969;
    msg.ch13 = 0.3096169941836062;
    msg.ch14 = 0.8657409439473726;
    msg.ch15 = 0.2205892208724426;
    msg.ch16 = 0.13473847182097898;

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
    msg.setTimeStamp(0.5660309382809365);
    msg.setSource(27715U);
    msg.setSourceEntity(119U);
    msg.setDestination(6401U);
    msg.setDestinationEntity(235U);
    msg.op = 219U;
    msg.lat = 0.24148908925023915;
    msg.lon = 0.8783462302200105;
    msg.height = 0.6167129151180991;
    msg.depth = 0.1972147599527233;
    msg.alt = 0.1298794908639216;

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
    msg.setTimeStamp(0.24082180526689878);
    msg.setSource(62129U);
    msg.setSourceEntity(34U);
    msg.setDestination(2677U);
    msg.setDestinationEntity(242U);
    msg.op = 106U;
    msg.lat = 0.8587297441556282;
    msg.lon = 0.4755021338622686;
    msg.height = 0.5151238221222609;
    msg.depth = 0.17231108874465917;
    msg.alt = 0.3990703531438945;

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
    msg.setTimeStamp(0.07628985557599077);
    msg.setSource(36516U);
    msg.setSourceEntity(182U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(92U);
    msg.op = 109U;
    msg.lat = 0.9640671348042388;
    msg.lon = 0.08580303602632189;
    msg.height = 0.44148528297598066;
    msg.depth = 0.3001459010954264;
    msg.alt = 0.2261279233930693;

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
    msg.setTimeStamp(0.09342528010485684);
    msg.setSource(8678U);
    msg.setSourceEntity(147U);
    msg.setDestination(32090U);
    msg.setDestinationEntity(136U);
    msg.nbeams = 78U;
    msg.ncells = 98U;
    msg.coord_sys = 78U;

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
    msg.setTimeStamp(0.9124690235742812);
    msg.setSource(41367U);
    msg.setSourceEntity(228U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(29U);
    msg.nbeams = 197U;
    msg.ncells = 231U;
    msg.coord_sys = 169U;

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
    msg.setTimeStamp(0.2705949247593634);
    msg.setSource(50898U);
    msg.setSourceEntity(12U);
    msg.setDestination(40944U);
    msg.setDestinationEntity(215U);
    msg.nbeams = 140U;
    msg.ncells = 129U;
    msg.coord_sys = 205U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7931835268497818;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.7133325754826787;
    tmp_tmp_msg_0_0.amp = 0.30643527420015026;
    tmp_tmp_msg_0_0.cor = 176U;
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
    msg.setTimeStamp(0.7951486260583481);
    msg.setSource(45439U);
    msg.setSourceEntity(252U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(167U);
    msg.cell_position = 0.7487850338972782;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.09395421533514225;
    tmp_msg_0.amp = 0.7771457771113548;
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
    msg.setTimeStamp(0.8801150881902392);
    msg.setSource(58944U);
    msg.setSourceEntity(109U);
    msg.setDestination(29017U);
    msg.setDestinationEntity(213U);
    msg.cell_position = 0.8700078294177848;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.16891304342978175;
    tmp_msg_0.amp = 0.8826551477685664;
    tmp_msg_0.cor = 131U;
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
    msg.setTimeStamp(0.48329052206636514);
    msg.setSource(17445U);
    msg.setSourceEntity(138U);
    msg.setDestination(46321U);
    msg.setDestinationEntity(230U);
    msg.cell_position = 0.11870065564553145;

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
    msg.setTimeStamp(0.8515785222883785);
    msg.setSource(47525U);
    msg.setSourceEntity(83U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(184U);
    msg.vel = 0.702472368553477;
    msg.amp = 0.7760512537160178;
    msg.cor = 40U;

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
    msg.setTimeStamp(0.041792035393753424);
    msg.setSource(6433U);
    msg.setSourceEntity(72U);
    msg.setDestination(56840U);
    msg.setDestinationEntity(33U);
    msg.vel = 0.2391905213718143;
    msg.amp = 0.2550951934459613;
    msg.cor = 49U;

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
    msg.setTimeStamp(0.8678185004640279);
    msg.setSource(23192U);
    msg.setSourceEntity(135U);
    msg.setDestination(62734U);
    msg.setDestinationEntity(158U);
    msg.vel = 0.7676764847074402;
    msg.amp = 0.7949048281061258;
    msg.cor = 80U;

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
    msg.setTimeStamp(0.08593169362949593);
    msg.setSource(48708U);
    msg.setSourceEntity(113U);
    msg.setDestination(5407U);
    msg.setDestinationEntity(3U);
    msg.name.assign("XOTHQPPFZWQJJOBEUQNCFHMGGEGXMBOQPGR");
    msg.value = 89U;

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
    msg.setTimeStamp(0.39342255802336856);
    msg.setSource(53814U);
    msg.setSourceEntity(178U);
    msg.setDestination(42259U);
    msg.setDestinationEntity(205U);
    msg.name.assign("HZZOJDUYYONEIAGJONFQDBWTABFLOVOWSMWSJUMRHMXUVVPERVLLTGNRRQNMNHIZIOVATHDDXKPUEYPJWPQKXETCGWYPLNKJRRQUQFUTRIOYCNSUGHJRMKMATSBOJWGVHDDIMUGCGXZFPLMNLKTVERPKZEBQUKBQZQYTCNMFAPGSEXEOELIFDVZXKSWFPHWFLAZFXYAAKXBBFLASNUWICODYGJHRZXCQDCHVBIPZMCJWXLBVJYATKISSICGDT");
    msg.value = 138U;

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
    msg.setTimeStamp(0.3284203666351778);
    msg.setSource(55091U);
    msg.setSourceEntity(189U);
    msg.setDestination(53140U);
    msg.setDestinationEntity(122U);
    msg.name.assign("SIWZXFAJWYAPQZVRHECODUCVQFVKZVOMRPCXGUMPITZT");
    msg.value = 37U;

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
    msg.setTimeStamp(0.2985152165727518);
    msg.setSource(11640U);
    msg.setSourceEntity(3U);
    msg.setDestination(52086U);
    msg.setDestinationEntity(127U);
    msg.name.assign("VBBIGMGDUVCIZCKWNOVUWXUVPACNSWIJYBPDZPIMJSXYRYYUWGWICUQLTKGRYFYXRRFGGZHOMSPWHPUPJOTNWKGTFKKAGZAWOAFRAUZEFQKQHMEJIKJIMEDQTDKPQQDBUSRMBENYAZCRXJEAVUXHTBXFSYMHSQLILLBJQKDNTAWPJVBWNHNDSGSXYJBFTGTKCJCLVAVLSTUEXRCHVHZRHTLXE");

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
    msg.setTimeStamp(0.3594480276658747);
    msg.setSource(2417U);
    msg.setSourceEntity(93U);
    msg.setDestination(32445U);
    msg.setDestinationEntity(7U);
    msg.name.assign("LVDMDGLCFJYYFBVXYWFACIQPROTRYJGUAQLKYQGMCZHGDFSEVSXMOBYYROENDLZEILFINTWSKHGZWPFDGIBJATGRUDQPAMWUOONCXTUVBUPMPQRCAXNXRKNHUIQFDBLKLVICQGKKMKWWTUTKZTQWTJBBVBRZUPCJFBXOZVWECNVDFXTVAHNGRVZFOGNINHHZPJHNMMCOECEMEQJZOKWAPRLWSSHUXDAEQDYSSYSAEKIEZXBHMHJSTIPIOUXAR");

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
    msg.setTimeStamp(0.5491912893160673);
    msg.setSource(52883U);
    msg.setSourceEntity(251U);
    msg.setDestination(52249U);
    msg.setDestinationEntity(55U);
    msg.name.assign("HHJEBVNKNNGARJFDECOFOXLLKFIPEIYKKGGBZRIQKUBMJALYNMLWCLQEMJBEIRIICDDVFHSTSUJGOQNGUQRSZUFS");

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
    msg.setTimeStamp(0.8261408735303453);
    msg.setSource(55510U);
    msg.setSourceEntity(216U);
    msg.setDestination(52270U);
    msg.setDestinationEntity(123U);
    msg.name.assign("ESSFGFRPJMHVBOLAPTRTWDNBSGRIQMLQEBYRPCEMKNQXDOHEESCVNNEGNPUSOMATSXCUPEKOZTMYMRHXKJKIGHFTRXUPIZJAEBXYKUHCPHWLQFST");
    msg.value = 139U;

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
    msg.setTimeStamp(0.7572037395453158);
    msg.setSource(17832U);
    msg.setSourceEntity(119U);
    msg.setDestination(16124U);
    msg.setDestinationEntity(80U);
    msg.name.assign("KFHJFDUDAHZXSVJPDOJTHFETPPQTMJVKUNOSIMREIVMROWRKRXGNXYNCSSQCELWTZVVVBMWTKMWHLFZDPWVBFCRKGAZULITCKANEEPCUHOINDRBRQKXYXKOETYRTJYNNGLAMJCPHXJEP");
    msg.value = 101U;

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
    msg.setTimeStamp(0.6510150899805801);
    msg.setSource(46601U);
    msg.setSourceEntity(98U);
    msg.setDestination(60833U);
    msg.setDestinationEntity(204U);
    msg.name.assign("SCMYKRNGAK");
    msg.value = 165U;

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
    msg.setTimeStamp(0.8183768645264449);
    msg.setSource(2066U);
    msg.setSourceEntity(22U);
    msg.setDestination(26840U);
    msg.setDestinationEntity(7U);
    msg.value = 0.9722197729660397;

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
    msg.setTimeStamp(0.7708633608221325);
    msg.setSource(56567U);
    msg.setSourceEntity(152U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(89U);
    msg.value = 0.11043109238334603;

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
    msg.setTimeStamp(0.056234764040964724);
    msg.setSource(54361U);
    msg.setSourceEntity(132U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7770190367894;

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
    msg.setTimeStamp(0.48125976400919546);
    msg.setSource(26340U);
    msg.setSourceEntity(79U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7393399195868953;

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
    msg.setTimeStamp(0.03433596675793049);
    msg.setSource(30901U);
    msg.setSourceEntity(142U);
    msg.setDestination(34408U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5385444717600713;

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
    msg.setTimeStamp(0.985683940444776);
    msg.setSource(2579U);
    msg.setSourceEntity(250U);
    msg.setDestination(742U);
    msg.setDestinationEntity(7U);
    msg.value = 0.4680004223822194;

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
    msg.setTimeStamp(0.37502299297006136);
    msg.setSource(2694U);
    msg.setSourceEntity(96U);
    msg.setDestination(37335U);
    msg.setDestinationEntity(1U);
    msg.value = 0.3690403959008499;

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
    msg.setTimeStamp(0.8729705653696502);
    msg.setSource(60737U);
    msg.setSourceEntity(211U);
    msg.setDestination(62025U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2946428337284088;

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
    msg.setTimeStamp(0.4196676362039121);
    msg.setSource(23982U);
    msg.setSourceEntity(110U);
    msg.setDestination(19690U);
    msg.setDestinationEntity(6U);
    msg.value = 0.019324675502875754;

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
    msg.setTimeStamp(0.7661565097724483);
    msg.setSource(383U);
    msg.setSourceEntity(183U);
    msg.setDestination(56441U);
    msg.setDestinationEntity(106U);
    msg.restriction = 31U;
    msg.reason.assign("JSLJBZDONUUVTTUMSRLSFPCSPGXEVRZLNHFBJVOGNZKEFAYNUMGDBZBDFDATXHMQSHCXJAKGHWYEVHAYNLPAIGYFVQPKZKNBPQCWOLMZZJVQGJTEKDIBULWIGGMFXXTBRIEYERJWXKAK");

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
    msg.setTimeStamp(0.9443493339533775);
    msg.setSource(59087U);
    msg.setSourceEntity(25U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(232U);
    msg.restriction = 39U;
    msg.reason.assign("IGXDAMXEHDNXDZFFEBUZZCLAULMAUQMWVRBAHYWQTCBHHTTOPDIMJZJMAVMNLYSTAKLIVRKSKGSERFRNWJSFOENOCEEGYRCWQCTYAIVNPLSURFTZKVCTEVDCOLMHRNWDYKXNPDLOQGQQEOSZKPYKBPVGLJYDBIJRFUOFSIVUOHQUDHCJZWIWKEQHTZFNXEGJVAXDSWIFWBIXKZPSXBAJGUL");

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
    msg.setTimeStamp(0.5372306489885964);
    msg.setSource(7534U);
    msg.setSourceEntity(200U);
    msg.setDestination(25789U);
    msg.setDestinationEntity(79U);
    msg.restriction = 84U;
    msg.reason.assign("SGJKJHPAGUSHDQHCAZZXEADEQBFWBXWVGTVDUQOJNTOZUQMMLNTYZVEUKNIJZPKIUDBNIRTCBTVQSGATFJQJYKMZFYOKGNKHOYIULCWOQZOAMH");

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
    msg.setTimeStamp(0.3736258287258375);
    msg.setSource(61503U);
    msg.setSourceEntity(100U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(35U);
    msg.param = 0.4960865280858683;
    msg.lat = 0.42249420682779615;
    msg.lon = 0.27903434720244624;
    msg.z = 0.8178373827158117;
    msg.theta = 0.11768007366417743;
    msg.psi = 0.32684643079654396;

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
    msg.setTimeStamp(0.46905467178586213);
    msg.setSource(39749U);
    msg.setSourceEntity(223U);
    msg.setDestination(64790U);
    msg.setDestinationEntity(238U);
    msg.param = 0.9032228278672643;
    msg.lat = 0.47814291550959476;
    msg.lon = 0.8717818627515246;
    msg.z = 0.63038796663689;
    msg.theta = 0.42434753558315996;
    msg.psi = 0.1253534694714712;

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
    msg.setTimeStamp(0.8739084971454908);
    msg.setSource(54467U);
    msg.setSourceEntity(100U);
    msg.setDestination(7723U);
    msg.setDestinationEntity(53U);
    msg.param = 0.8293011085044277;
    msg.lat = 0.6656072308116308;
    msg.lon = 0.35154848715423515;
    msg.z = 0.46767030920669705;
    msg.theta = 0.6281115052729651;
    msg.psi = 0.6467795890313311;

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
    msg.setTimeStamp(0.4021757442944681);
    msg.setSource(27542U);
    msg.setSourceEntity(59U);
    msg.setDestination(17164U);
    msg.setDestinationEntity(47U);
    msg.path_param = 0.005744710779422846;
    msg.x = 0.7043818959729314;
    msg.y = 0.5193707897055377;
    msg.z = 0.7761994305980224;
    msg.r_f = 0.8890485695855651;
    msg.p = 0.7084970998739218;

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
    msg.setTimeStamp(0.10074743660811081);
    msg.setSource(36930U);
    msg.setSourceEntity(124U);
    msg.setDestination(53421U);
    msg.setDestinationEntity(36U);
    msg.path_param = 0.3668684415996786;
    msg.x = 0.9837506716319254;
    msg.y = 0.25320362831255894;
    msg.z = 0.0363739422491669;
    msg.r_f = 0.15538370231201237;
    msg.p = 0.9885478055607118;

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
    msg.setTimeStamp(0.20172960142939733);
    msg.setSource(7578U);
    msg.setSourceEntity(216U);
    msg.setDestination(32681U);
    msg.setDestinationEntity(90U);
    msg.path_param = 0.08192177333491346;
    msg.x = 0.882447350873377;
    msg.y = 0.3604602886190379;
    msg.z = 0.02343585959402139;
    msg.r_f = 0.3814373385420783;
    msg.p = 0.5966847310110013;

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
    msg.setTimeStamp(0.0606229631189108);
    msg.setSource(33982U);
    msg.setSourceEntity(49U);
    msg.setDestination(4732U);
    msg.setDestinationEntity(224U);
    msg.path_param = 0.4373070248531512;
    msg.x = 0.24913318586419753;
    msg.y = 0.6152766990067112;
    msg.z = 0.900710510085803;
    msg.r_f = 0.3113328943576543;
    msg.p = 0.1460445766765045;

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
    msg.setTimeStamp(0.6251687707763988);
    msg.setSource(11646U);
    msg.setSourceEntity(168U);
    msg.setDestination(2123U);
    msg.setDestinationEntity(17U);
    msg.path_param = 0.12436968059175002;
    msg.x = 0.9243172459609494;
    msg.y = 0.9825858854592501;
    msg.z = 0.995241042970235;
    msg.r_f = 0.49045070653372425;
    msg.p = 0.22481910004027306;

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
    msg.setTimeStamp(0.10353959587799844);
    msg.setSource(41829U);
    msg.setSourceEntity(48U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(87U);
    msg.path_param = 0.1594670198899063;
    msg.x = 0.4963662334184066;
    msg.y = 0.21792282368750293;
    msg.z = 0.020415973507372454;
    msg.r_f = 0.7598702180505547;
    msg.p = 0.43863276777836535;

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
