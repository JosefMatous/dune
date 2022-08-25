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
// IMC XML MD5: 1239d4aa114d6003933998370bda84ea                            *
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
    msg.setTimeStamp(0.8893434187419945);
    msg.setSource(19342U);
    msg.setSourceEntity(13U);
    msg.setDestination(20862U);
    msg.setDestinationEntity(229U);
    msg.state = 145U;
    msg.flags = 152U;
    msg.description.assign("EMTHGQQCRSGWWJABPGYHHZSMZNCLRDOOYZEBRHDIIFJEHPEBEXMDDLJMOQBWBYUGKFCXKXYQUVIRHHGBLIZTCJGPCSEPBSPHIOKBAXQMNJLXKINVTTUXGVYKUNUSTGOGQAMJOZCDXZVYFPLYVJAJLUMUZRHKTSRBYAMDTDRMSHTPSKYJTRLTFXDOFFZLWWNNC");

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
    msg.setTimeStamp(0.4687042575770448);
    msg.setSource(28871U);
    msg.setSourceEntity(249U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(227U);
    msg.state = 107U;
    msg.flags = 70U;
    msg.description.assign("GQBJDKELTOJPSFNKYXSZRBXHCTNZQG");

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
    msg.setTimeStamp(0.7383258107015519);
    msg.setSource(28420U);
    msg.setSourceEntity(160U);
    msg.setDestination(5488U);
    msg.setDestinationEntity(18U);
    msg.state = 55U;
    msg.flags = 229U;
    msg.description.assign("PSLVYQKLXNAZEGJBAPTLRQCZCACHEDSUJOHPNYALIDSOBLPKTFTMHXXSYOZFAOSTFBUZJFFPQSHIJFUVDGOWHNWCGUKXXNYQMJOMAYNKPRQOKHIMDSAKPCIRWASWIZPLWVZWTDYKNGNJNLHMUWJQJRDRCEW");

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
    msg.setTimeStamp(0.2726706376254856);
    msg.setSource(33810U);
    msg.setSourceEntity(212U);
    msg.setDestination(28215U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.42050825309388906);
    msg.setSource(5524U);
    msg.setSourceEntity(174U);
    msg.setDestination(28442U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.3032854196421707);
    msg.setSource(9090U);
    msg.setSourceEntity(136U);
    msg.setDestination(50250U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.5762037312939795);
    msg.setSource(2663U);
    msg.setSourceEntity(240U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(217U);
    msg.id = 39U;
    msg.label.assign("TBPFCQZQIJZUUIMZMXQILOBAGAHWVMZYVPKXNMSORUELGEOSHPGMIXSDDPZLOFBNILNFNDGLJBXZABJVMDOYEW");
    msg.component.assign("BSXKOTEUKOUFMJDSLFRRQCECARYMGZLNPKQSQMRYZDRVWTRYHWJOEABAHVFUMXZXXVGPWNDPQUTPTCTMDSHAUBWBZJG");
    msg.act_time = 33043U;
    msg.deact_time = 42706U;

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
    msg.setTimeStamp(0.8796869982131211);
    msg.setSource(49195U);
    msg.setSourceEntity(64U);
    msg.setDestination(52964U);
    msg.setDestinationEntity(218U);
    msg.id = 34U;
    msg.label.assign("OVCUFYXANJIFOYBABXZCQXUYLUNTISBUQVNNBLGDFYKREEVEJFFWTHLQTEFAQZPBGQJBOWHEXSMKVMZFNAXJQSZUWIPGMLZHPGKLGOMJDWOGVEENYWXYBYTCUWOCRKESLMHIHXBLLPXCSSBDGDCSDKPKLPSNIRGIWWFRUKRYJOKHXSYTCWPHUQPANRDUYEVRARMTISTMFWIPQKZMDNVAJXGHFHVLN");
    msg.component.assign("VGHWQCZQUMZEGFANLYHIRHMOXAFMOSXGEFNQGJCBNCJNMLBSLWOTIMCBSTJCSYIBXYVIEFZXGIITRKJEUPJGPKSOHTCMRDGZVQRIPEMDKNBASCINDWPODYVMCQBNRDYGV");
    msg.act_time = 15493U;
    msg.deact_time = 7874U;

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
    msg.setTimeStamp(0.4451126822754581);
    msg.setSource(29648U);
    msg.setSourceEntity(209U);
    msg.setDestination(23196U);
    msg.setDestinationEntity(31U);
    msg.id = 251U;
    msg.label.assign("RFPEWUFWKXOQZDHRACZRHAVSCQTMWGWPTHLDUJRSKJPCLTVBQOINXQYODROCLBZKIPYGMCFNPIXZMDRPXAWGFZWKEQCJUDBARBEITIXOFSDEXCNZHDAHTSTKSZPWYBBKIGGGUEYGSPLSUEWQJRFETBVVHNJNTGDBYAUJXWLHV");
    msg.component.assign("NNCQUUMGTKJHVXKJOMJPLKNNHRYACTVRNDWAZZXHDZGAQJXKBZELOZVRAPCIZOQVOGUGWLXDEDBVYQFCLYJTIAOTFKMYMNYUSWNG");
    msg.act_time = 5441U;
    msg.deact_time = 4221U;

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
    msg.setTimeStamp(0.9009637421776535);
    msg.setSource(9281U);
    msg.setSourceEntity(39U);
    msg.setDestination(21630U);
    msg.setDestinationEntity(3U);
    msg.id = 38U;

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
    msg.setTimeStamp(0.43821296958387346);
    msg.setSource(27646U);
    msg.setSourceEntity(6U);
    msg.setDestination(49379U);
    msg.setDestinationEntity(164U);
    msg.id = 128U;

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
    msg.setTimeStamp(0.9827519752566324);
    msg.setSource(46086U);
    msg.setSourceEntity(28U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(176U);
    msg.id = 174U;

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
    msg.setTimeStamp(0.05523617149115634);
    msg.setSource(25082U);
    msg.setSourceEntity(20U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(184U);
    msg.op = 93U;
    msg.list.assign("IXYLDYNAYQYKPEKQRLKOCWFRYBQKXFCBMAHVHTJRRFOGJJGCNKQBKEICXBSMSDAHLQYUOZXETJDASYZFJRRVAWTRSCZDIUPTSRIYPOJQNNRPVGHUCMT");

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
    msg.setTimeStamp(0.33143945571681355);
    msg.setSource(32618U);
    msg.setSourceEntity(104U);
    msg.setDestination(57130U);
    msg.setDestinationEntity(225U);
    msg.op = 148U;
    msg.list.assign("FXOSZCKNDZLVRMBGJRGXIDKZHVDOMQHQWPIFWXIKPVYNAULJEBVPCYFOIMHWRIXDEMDPGFFDCTTTKEAXWKLIWHAMHCZOJUBAU");

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
    msg.setTimeStamp(0.37946456465755807);
    msg.setSource(63065U);
    msg.setSourceEntity(243U);
    msg.setDestination(24732U);
    msg.setDestinationEntity(59U);
    msg.op = 197U;
    msg.list.assign("AATLJXMGNGIOWSVSIDICWRFKNGQSOBPCDBPCXISRSGLAVBNLNTILHEXZVACLBEZMRVVNAUKCTNMUUDJBTJIRZQYODUKDYPPWCOFNAXMOATQYWOZWWDKPEIHEDLHCIUGKHDMFMULQBKLNWVCPAXHIEYIDOFCZZGEMUYZQBPMHTQXVDNUCGRQGTQ");

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
    msg.setTimeStamp(0.10116252361358535);
    msg.setSource(55465U);
    msg.setSourceEntity(122U);
    msg.setDestination(60721U);
    msg.setDestinationEntity(6U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.03454202102448378);
    msg.setSource(45349U);
    msg.setSourceEntity(37U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(166U);
    msg.value = 218U;

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
    msg.setTimeStamp(0.1373621305778946);
    msg.setSource(39239U);
    msg.setSourceEntity(229U);
    msg.setDestination(63390U);
    msg.setDestinationEntity(85U);
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
    msg.setTimeStamp(0.0852120060728272);
    msg.setSource(46231U);
    msg.setSourceEntity(119U);
    msg.setDestination(3555U);
    msg.setDestinationEntity(90U);
    msg.consumer.assign("NTLSNSROKEKDIBXBNMZADOBSHEZIEHSLLAROECXZWYOELYRIJUGAFXRUJRIUZQTQQXBIWFHVAQLWKCNTCEMQAAOJHNDKSPQTFDFYZPIOCMVGJHQGLTJFIDXBSWEPYEAXVIRZVPDJPPDONVEHQAWCXFULSIZMVGPKRUFOHMUYOCJYCWKBBWQHFOBUJLRMBDTMNKIHTDSUTPWYUHWZVCVKXGLMEARGKDSMBFCKJ");
    msg.message_id = 14641U;

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
    msg.setTimeStamp(0.5870186477850063);
    msg.setSource(13276U);
    msg.setSourceEntity(135U);
    msg.setDestination(64928U);
    msg.setDestinationEntity(78U);
    msg.consumer.assign("DWVYQNCTXPCJSGRQWVWJZHRPEUIZZCKFSVPYWMGQLFNHMLHJYBGPNIXAZWVFWPUHECXPZEKUWGHJZDGSLFUAGEQJBCQRQCTTZALQUBPNJFYQVOURRMLBGVXOKBLFUDHXHDMNJWLVCOJ");
    msg.message_id = 53740U;

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
    msg.setTimeStamp(0.45715606488611527);
    msg.setSource(14303U);
    msg.setSourceEntity(109U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(106U);
    msg.consumer.assign("BFFRZSDHGGSLQZEEPFCMABXCJZPMTRGOZLRURIYWAHIWIGWDCFKPMIUZAMOTKSFCPAOXLLKKOYYOPNQMKMNXCLXIEHXSWVSNZJMYSSKYVAMRIWSLAZNOKUNVNRULWFVKQNBDWVRPQFBZNLZEQCTJTXCNJJXFEYXQIFERBXW");
    msg.message_id = 38772U;

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
    msg.setTimeStamp(0.7362968341521161);
    msg.setSource(31407U);
    msg.setSourceEntity(135U);
    msg.setDestination(12877U);
    msg.setDestinationEntity(146U);
    msg.type = 31U;

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
    msg.setTimeStamp(0.10466048448421983);
    msg.setSource(33217U);
    msg.setSourceEntity(83U);
    msg.setDestination(5997U);
    msg.setDestinationEntity(226U);
    msg.type = 114U;

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
    msg.setTimeStamp(0.0043626941101450045);
    msg.setSource(50138U);
    msg.setSourceEntity(2U);
    msg.setDestination(4828U);
    msg.setDestinationEntity(120U);
    msg.type = 31U;

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
    msg.setTimeStamp(0.8481371327845061);
    msg.setSource(24462U);
    msg.setSourceEntity(161U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(196U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.6211856650369197);
    msg.setSource(55390U);
    msg.setSourceEntity(26U);
    msg.setDestination(46632U);
    msg.setDestinationEntity(202U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.741813617054795);
    msg.setSource(52276U);
    msg.setSourceEntity(179U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(10U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.6641105158434789);
    msg.setSource(41492U);
    msg.setSourceEntity(7U);
    msg.setDestination(63334U);
    msg.setDestinationEntity(85U);
    msg.total_steps = 199U;
    msg.step_number = 38U;
    msg.step.assign("EVGEKLZMIZPPKLISCOVMWCNJABBCKMGFXVNYCRGUDPJANCULTAMXOZFTZCLJMUZLYGQNVXOSSRSBXBXYLWXFEAUQBVSMJGUKHZTKLKJYGPBEDAEGDOWVDPCYJYPMFXZSRAOCOEMXCTKUPSNBFXHRQDZIZNRYFNEUWIOPHATHDJARYWDXAGNQBFIEFH");
    msg.flags = 115U;

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
    msg.setTimeStamp(0.7513721213517501);
    msg.setSource(36114U);
    msg.setSourceEntity(58U);
    msg.setDestination(29154U);
    msg.setDestinationEntity(156U);
    msg.total_steps = 75U;
    msg.step_number = 214U;
    msg.step.assign("HBPWGCBCGHHBJXWQZCWLOTPZXEAWCMUGNLYFSLHSKITBOUGMOJIYVJDJRZRPFFKQWZQDKKAGLEFPPTJKDVMYPXJXIYVKFYYQYXQNUZVPMNFDASLEMXUDREJKTUNAXZESCSWOHRANRATJZFBQRIIFNNUGTSGKJVISUFUOYPAVHUDOCHEFDV");
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
    msg.setTimeStamp(0.37404553359385606);
    msg.setSource(22033U);
    msg.setSourceEntity(183U);
    msg.setDestination(47912U);
    msg.setDestinationEntity(42U);
    msg.total_steps = 1U;
    msg.step_number = 16U;
    msg.step.assign("LULNXPOFBDTGJJRVAKVRBJBHDUKHKENRHRXZZMWLDTOFSWOFWRYTYLJESUTRXZKDNCCQCEMCMNYGHKDTRPPBGVKTOYXZWAQWPTNEXCGP");
    msg.flags = 169U;

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
    msg.setTimeStamp(0.6795058910619562);
    msg.setSource(51577U);
    msg.setSourceEntity(248U);
    msg.setDestination(21748U);
    msg.setDestinationEntity(152U);
    msg.state = 197U;
    msg.error.assign("XQQSFUIOHIHKENQOYVHZZSLCLHXBMZBNHEMOMGZVCTHKEWOJOCENNXXSQTAUUXYIMHIALJRMRKJYGDMGKZJWIYXCGWXNPLHBGKFYGFLJMSOIVBOBQZAVPURUFPVCPOOVIEHBSJRMLCWXISVPBAQNZRTYPSKS");

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
    msg.setTimeStamp(0.07234491135595378);
    msg.setSource(43542U);
    msg.setSourceEntity(87U);
    msg.setDestination(48404U);
    msg.setDestinationEntity(13U);
    msg.state = 63U;
    msg.error.assign("WNFMVZSFAKRUJDHIODKOXWKPBIDAJDLGTYPDSMHMWDLTYRSUGAXMNTSYUTVBXTEGSWDZBXGXAZJQSBHBOYTCLOKNIJXQULNQNENYLKBOWJHDHMORSNPVWCNKPVRQFFGECPACDKCLDOAUUPEHPBZETLIIYHHZRUCWAQFTVLREIWGRJAGJIYZNFRSKMRVZFCABELZYTHXHVOVCJZXPFFUFBUMWGMZQSBJAPMYKWJRPTIXQIO");

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
    msg.setTimeStamp(0.3081512710262867);
    msg.setSource(60617U);
    msg.setSourceEntity(107U);
    msg.setDestination(15070U);
    msg.setDestinationEntity(108U);
    msg.state = 22U;
    msg.error.assign("CRJSTVPXOHDBOKLSGSEWMKZOIQYRBSDXBHVTMGWTPJSUZOYVZBMCDADFQNTEDNWOLNLZTLVHZNOEFFEYYFDT");

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
    msg.setTimeStamp(0.16299291919387127);
    msg.setSource(45444U);
    msg.setSourceEntity(165U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.5592303894285414);
    msg.setSource(7703U);
    msg.setSourceEntity(20U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.20355624096855385);
    msg.setSource(26412U);
    msg.setSourceEntity(95U);
    msg.setDestination(51403U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.16079180407978455);
    msg.setSource(46012U);
    msg.setSourceEntity(162U);
    msg.setDestination(24733U);
    msg.setDestinationEntity(184U);
    msg.op = 83U;
    msg.speed_min = 0.1991446207951202;
    msg.speed_max = 0.10213487255736842;
    msg.long_accel = 0.44443419439516685;
    msg.alt_max_msl = 0.15836253936225364;
    msg.dive_fraction_max = 0.03634351491583776;
    msg.climb_fraction_max = 0.6307317730017276;
    msg.bank_max = 0.5975587932432558;
    msg.p_max = 0.0793416461625216;
    msg.pitch_min = 0.06641923362045177;
    msg.pitch_max = 0.08901866921263257;
    msg.q_max = 0.6256999744898184;
    msg.g_min = 0.11006956549428115;
    msg.g_max = 0.4347446471552211;
    msg.g_lat_max = 0.04901485537367256;
    msg.rpm_min = 0.1823218462121834;
    msg.rpm_max = 0.10157239549069197;
    msg.rpm_rate_max = 0.6022336279401113;

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
    msg.setTimeStamp(0.8970246332274546);
    msg.setSource(62588U);
    msg.setSourceEntity(35U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(78U);
    msg.op = 84U;
    msg.speed_min = 0.22206586111587434;
    msg.speed_max = 0.23659701976340486;
    msg.long_accel = 0.2913714790819901;
    msg.alt_max_msl = 0.02172575946724231;
    msg.dive_fraction_max = 0.02921414020186519;
    msg.climb_fraction_max = 0.8058354282313605;
    msg.bank_max = 0.29110142664404925;
    msg.p_max = 0.14084189139804393;
    msg.pitch_min = 0.6743413556161655;
    msg.pitch_max = 0.9543009556072221;
    msg.q_max = 0.6329412736414565;
    msg.g_min = 0.6633466382559263;
    msg.g_max = 0.5267177846560462;
    msg.g_lat_max = 0.2641854210056884;
    msg.rpm_min = 0.057285809992997594;
    msg.rpm_max = 0.4528274704383848;
    msg.rpm_rate_max = 0.10293067638443698;

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
    msg.setTimeStamp(0.21384092947710265);
    msg.setSource(55039U);
    msg.setSourceEntity(14U);
    msg.setDestination(8606U);
    msg.setDestinationEntity(68U);
    msg.op = 155U;
    msg.speed_min = 0.24900938195164035;
    msg.speed_max = 0.8765395188333539;
    msg.long_accel = 0.7091837660396203;
    msg.alt_max_msl = 0.4687741790385912;
    msg.dive_fraction_max = 0.7553476167745847;
    msg.climb_fraction_max = 0.8661228305531998;
    msg.bank_max = 0.9450237026558356;
    msg.p_max = 0.0729935695010826;
    msg.pitch_min = 0.14321213760862528;
    msg.pitch_max = 0.13571917485082285;
    msg.q_max = 0.27836249118052403;
    msg.g_min = 0.5167773599474403;
    msg.g_max = 0.45233297989892685;
    msg.g_lat_max = 0.45126808435021437;
    msg.rpm_min = 0.3972909169497546;
    msg.rpm_max = 0.6539365874007409;
    msg.rpm_rate_max = 0.4416207083825804;

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
    msg.setTimeStamp(0.7383109765923026);
    msg.setSource(12U);
    msg.setSourceEntity(2U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.5492791671366075);
    msg.setSource(11249U);
    msg.setSourceEntity(187U);
    msg.setDestination(33440U);
    msg.setDestinationEntity(50U);
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 168U;
    tmp_msg_0.error.assign("DFRPXMNHEBOOWYQIUHBDAEGNXTAKMWOFSVGCSOFLKYUIWMLJJGTYVXCLHCDABUSYAFLNDHYMEOLJJPKVKEBPRMBUXPKSYCMXKHNMYWENLSGMVVNEQMFAJZTILZLHPRSYCBHTPAEPAQUZICDOUZGJGVQXYVCMABNNWRPPLVRBVOYHDCVQFJ");
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
    msg.setTimeStamp(0.6486061871202504);
    msg.setSource(60103U);
    msg.setSourceEntity(6U);
    msg.setDestination(20185U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.5104555453784284);
    msg.setSource(44004U);
    msg.setSourceEntity(234U);
    msg.setDestination(48784U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.8217173808276029;
    msg.lon = 0.3943894468731919;
    msg.height = 0.5245564075457831;
    msg.x = 0.7661320774653164;
    msg.y = 0.502265740643387;
    msg.z = 0.32353210067141347;
    msg.phi = 0.12659616042897015;
    msg.theta = 0.6497607590645246;
    msg.psi = 0.5056436361243377;
    msg.u = 0.5064566816103113;
    msg.v = 0.5771991619788092;
    msg.w = 0.6655032666510189;
    msg.p = 0.1441904055185339;
    msg.q = 0.006768386858181374;
    msg.r = 0.6113836493601034;
    msg.svx = 0.4425372005421777;
    msg.svy = 0.2917187600473058;
    msg.svz = 0.5179511082473582;

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
    msg.setTimeStamp(0.4776105163395503);
    msg.setSource(22132U);
    msg.setSourceEntity(71U);
    msg.setDestination(26948U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.6241181281387257;
    msg.lon = 0.9636002672697499;
    msg.height = 0.9830426078020621;
    msg.x = 0.12957094011326198;
    msg.y = 0.6259176414934138;
    msg.z = 0.2747885246810713;
    msg.phi = 0.9116926818854567;
    msg.theta = 0.5613910606030643;
    msg.psi = 0.2415396387480594;
    msg.u = 0.6559812293404529;
    msg.v = 0.18189829798810742;
    msg.w = 0.5542564238396774;
    msg.p = 0.5993180155023173;
    msg.q = 0.7261798571727953;
    msg.r = 0.11033476285621913;
    msg.svx = 0.5570805223556233;
    msg.svy = 0.40955267714679566;
    msg.svz = 0.9838379461700928;

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
    msg.setTimeStamp(0.6849531000558147);
    msg.setSource(6104U);
    msg.setSourceEntity(76U);
    msg.setDestination(16074U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.20889486190790818;
    msg.lon = 0.4682902976563226;
    msg.height = 0.732644984588974;
    msg.x = 0.7076451706638794;
    msg.y = 0.3940056865620768;
    msg.z = 0.5088033219589847;
    msg.phi = 0.9285110527530781;
    msg.theta = 0.45024518486089926;
    msg.psi = 0.8811301359791915;
    msg.u = 0.378221926953033;
    msg.v = 0.5018807782013769;
    msg.w = 0.9348407845324105;
    msg.p = 0.6117322509309329;
    msg.q = 0.25545720018221263;
    msg.r = 0.5639281335060652;
    msg.svx = 0.02138968513639905;
    msg.svy = 0.4782092095174386;
    msg.svz = 0.6024047440767709;

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
    msg.setTimeStamp(0.06462791335549811);
    msg.setSource(21927U);
    msg.setSourceEntity(191U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(41U);
    msg.op = 120U;
    msg.entities.assign("NYXQPFBHMYNYNMCVQKRLXZETWWYGKXHHBYEERWIWUXBKQSUMAVVJHTNDRRBWCDGJRYBNKKUFUFDLJWOMDCQGZNGBFVEDEIPJPWDIWAQRTOZSALJJNAUNVTYDEOSZBCOHKHPXACAVAPDPFLVOFKTSJCZQDYRIQXSHBNFXHGWYGFIUOESXOKKFBIRQAGUHEITCSESCPVTJSUMGIT");

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
    msg.setTimeStamp(0.2503815043357135);
    msg.setSource(15330U);
    msg.setSourceEntity(208U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(192U);
    msg.op = 172U;
    msg.entities.assign("ALXTMGZHASRSVEHQLQPDVUCWGUQKNYBKXUFVYYIIAAUMSYTNFBPFLKIOTLPSPWHDARMTKIXNCCUZPVMNCXHHHRNCCCZXWRPEWCQDAUNGOSKRVJGWJVBYMRGWBOAZRNTLDIQJTKQUJDEYMOHOZYLEWEMZNSGESYDBMRVJE");

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
    msg.setTimeStamp(0.5322326812154476);
    msg.setSource(24445U);
    msg.setSourceEntity(200U);
    msg.setDestination(21805U);
    msg.setDestinationEntity(49U);
    msg.op = 8U;
    msg.entities.assign("JDBELQRFNYMRGHBRLKFKQLJFOJKVEKSHEOMVCGUGXPKSGSJYXYRJZPCKWDEARTFEZIXZAGCLLTOMFAYBTQBNDWUDITNURQQIFIKWGQTAZOMIUMNUDPXGLEGUCMGVTHHHNHQDOMXMUEBPDCASVFYBINPYEMOZZLZNAIFL");

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
    msg.setTimeStamp(0.9330076568575058);
    msg.setSource(32918U);
    msg.setSourceEntity(196U);
    msg.setDestination(31213U);
    msg.setDestinationEntity(3U);
    msg.type = 200U;
    msg.speed = 30638U;
    const signed char tmp_msg_0[] = {-63, -97, -120, 79, -101, 105, 87, -124, -120, -124, -60, 65, -57, -63, -126, -69, -48, 45, 9, 28, 114, 111, -22, -14, 19, -49, 72, -56, 51, -39, -37, -20, 101, -1, 91, 86, -32, -98, 19, 8, 37, -73, 114, 56, 27, -5, -95, -62, -6, -102, -109, -17, 12, -74, 28, -109, 2, -92, -125, 64, -83, 125, 7, -16, -21, 84, 75, 17, 17, -36, -72, -19, 92, -107, -120, 72, 113, 43, -125, 55, -39, 44, -105, 104, 97, 41, -58, -32, 0, -74, 56, 10, 106, -116, 60, 121, -23, -35, 36, 43, -55, 79, -25, 119, -28, -76, -42, -89, -60};
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
    msg.setTimeStamp(0.39759473748287666);
    msg.setSource(5167U);
    msg.setSourceEntity(58U);
    msg.setDestination(41636U);
    msg.setDestinationEntity(33U);
    msg.type = 193U;
    msg.speed = 57462U;
    const signed char tmp_msg_0[] = {-122, 21, -74, 74, 103, 105, -107, -96, -25, 63, 126, 106, -128, 103, -101, 2, -107, -110, 95, 55, 34, -84, -37, 42, -4, -61, -88, 6, -35, 17, -2, -99, -58, -72, -73, -55, 78, -57, 120, 72, -111, 52, -2, 83, 82, -34, -91, 8, -117, -64, 91, -107, 39, -126, 24, 17, -13, -72, -54, 15, 59, -105, 3, -20, 114, -66, 56, -119, -52, 124, -103, -61, -65, 81, -78, -122, -44, -95, 91, 41, 105, -47, -73, 2, 91, 125, 17, -43, -107, 33, -124, 57, 79, 12, -108, 115, 5, 62, -80, -99, 22, -53, 13, -5, 64, -71, -104, 70, -75, 21, 31, -22, -29, -9, 30, 7, -79, -56, 1, -34, 57, -63, -64, -10, 37, -128, 88, -74, -9, -128, 49, -91, 113, -26, -115, 23, 50, 67, -128, -59, -101, -72, -111, 34, -73, 78, 66, -70, 85, 86, -45, 53, -89, -43, 34, -88, -51, -39, -120, -79, -38, -84, -71, -100, 107, 43, 43, -125, -1, 9, -123, -14, -124, -5, 106, -32, 15, -103, 102};
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
    msg.setTimeStamp(0.3729116779860717);
    msg.setSource(51995U);
    msg.setSourceEntity(95U);
    msg.setDestination(41400U);
    msg.setDestinationEntity(69U);
    msg.type = 200U;
    msg.speed = 48063U;
    const signed char tmp_msg_0[] = {50, 116, 111, -71, 66, 126, -98, 64, 112, -2, 10, -99, 92, -48, -15, -3, -125, -42, 20, -47, 49, 28, 22, -6, 107, -80, 63, 121, -19, -44, 28, 45, -81, 55, 77, 110, 66, -12, -60, -22, -61, 51, -114, -115, -91, -112, -15, -81, 84, -46, -47, -82, -38, -102};
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
    msg.setTimeStamp(0.6715016238733653);
    msg.setSource(44383U);
    msg.setSourceEntity(200U);
    msg.setDestination(2956U);
    msg.setDestinationEntity(48U);
    msg.op = 185U;
    msg.tas2acc_pgain = 0.6661933665490107;
    msg.bank2p_pgain = 0.7243079754400185;

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
    msg.setTimeStamp(0.9544137674393117);
    msg.setSource(14910U);
    msg.setSourceEntity(186U);
    msg.setDestination(44855U);
    msg.setDestinationEntity(184U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.565345464566594;
    msg.bank2p_pgain = 0.20478381760838216;

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
    msg.setTimeStamp(0.732072827231986);
    msg.setSource(53462U);
    msg.setSourceEntity(157U);
    msg.setDestination(62715U);
    msg.setDestinationEntity(196U);
    msg.op = 85U;
    msg.tas2acc_pgain = 0.11031838337064759;
    msg.bank2p_pgain = 0.4904130610017886;

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
    msg.setTimeStamp(0.06685949833789273);
    msg.setSource(58528U);
    msg.setSourceEntity(66U);
    msg.setDestination(29854U);
    msg.setDestinationEntity(84U);
    msg.available = 3422706460U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.464503558166126);
    msg.setSource(18852U);
    msg.setSourceEntity(102U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(218U);
    msg.available = 884273531U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.5690982734073935);
    msg.setSource(27637U);
    msg.setSourceEntity(67U);
    msg.setDestination(53699U);
    msg.setDestinationEntity(8U);
    msg.available = 4096513657U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.06161231956685309);
    msg.setSource(57159U);
    msg.setSourceEntity(130U);
    msg.setDestination(41461U);
    msg.setDestinationEntity(231U);
    msg.op = 103U;
    msg.snapshot.assign("UUOGYBCLZCKQGNNTWLYPJJKWEZTYNJAODZYTQYITZPQBMHNFEZAYAZRVEBCHZULGSRGXFLUUJUXVDJRFHCVKBLEIAYQAVF");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 131U;
    const signed char tmp_tmp_msg_0_0[] = {109, -54, -81, -38, -51, -29, -53, 86, -82, -43, -94, -34, -14, -82, 93, 121, 71, -86, -87, 27, -60, 32, -119, 52, -122, -40, -45, -120, 40, -73, 49, 51, 52, -61, -80, 105, -47, -13, 51, 92, 70, -120, -11, 3, 87, -94, 57, -10, -75, -1, -83, 56, -29, -50, -70, 8, -46, 14, 70, 73, -31, 64, -42, -108, -7, -53, -12, 2, 92, -8, 99, 94, -114, -22, -60, -75, -78, -126, 16, 15, -8, 88, 46, -95, -94, 54, -31, -68, 21, -29, -46, -111, -103, -115, 55, -70, -63, 56, 30, 43, -45, 88, -105, -3, -78, -10, 3, -21, -1, 93, 37, 2, 100, 29, 16, -99, 96, -4, -73, -23, 61, -60, 85, -85, 125, 12, 65, 41, -91, -49, 81, -33, -103, 124, -37, 21, -56, 70, -116, -45, -49, 85, -92, 80, 7, 58, 90, 15, 126, 104, -58, 75, -1, -98, 74, 54, -86, 54, -95, -69, 1, -16, -108, 63, 12, -125, 76, 63, 118, 124, 8, 99, -18, -15, 60, -64, 118, 123, -3, -7, -107, 95, 48};
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
    msg.setTimeStamp(0.8895249495069555);
    msg.setSource(15623U);
    msg.setSourceEntity(237U);
    msg.setDestination(56304U);
    msg.setDestinationEntity(197U);
    msg.op = 195U;
    msg.snapshot.assign("JRKTOIFRPJOFMEYGYBNGEPNLYUHDIKQCWLTGJKHLANNNQFMVKQBECMXIZCVTNWIDEGJOFAGDUBOHVPUBSJKTMFQEGABSVZSCQRXDXXNKKPMSWLLXUTPONOBC");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 46U;
    tmp_msg_0.tas2acc_pgain = 0.7232990177482483;
    tmp_msg_0.bank2p_pgain = 0.79172147980383;
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
    msg.setTimeStamp(0.11867445419221168);
    msg.setSource(15766U);
    msg.setSourceEntity(65U);
    msg.setDestination(22775U);
    msg.setDestinationEntity(176U);
    msg.op = 71U;
    msg.snapshot.assign("VDIAMFZRBYFGOBFKOJNLQKQDPWLVGTCYULKVFWZBYPJHYKESRJWCNLPZRQZJBHJSPIHTYGMNQXNAHAUAPDLBOUVIZBGDVEDMGKQZMUFFXCCTWMKVENETZBNSZSHEWFDEDVCWSIOPPMZUKXXYRXDOJNRVHNJEAIQRIIGOLJMJ");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 60U;
    tmp_msg_0.frag_number = 77U;
    tmp_msg_0.num_frags = 233U;
    const signed char tmp_tmp_msg_0_0[] = {23, -41, -70, -27, -105, -5, -102, -111, -43, 87, -84, -62, 48, 90, 46, 99, -110, -124, 95, -34, -34, -120, -37, 120, 53, -45, -94, 34, -128, 64, -117, 92, 5, -124, -71, -56, 21, -1, 113, -64, -90, -89, -97, -122, 46, 66, -46, -109, -73, 90, 44, -14, 1, -55, 22, -96, -107, 11, -57, -127, -116, -43, -104, -92, -14, -95, -88, -22, -85, 120, 9, -105, 80, -66, -9, 11, -69, 54, -54, -95, 40, 28, -95, 15, -127, -88, 87, 42, 64, -98, 119, -103, -7, 64, -16, -90, -60, 77, -48, -97, 38, 56, -68, -2, 27, 52, 79, 104, -42, -35, 61, -116, 19, 54, -64, -53, 44, 19, -45, -85, 40, 17, 8, -26, -123, 67, 112, -2, 34, -91, -57, -96, -67, 52, -2, 111, 68, 84, 97, 9, 25, 43, -124, 66, -33, 108, -73, -20, -79, -124, -103, 26, 46, -70, 126, 50, -128, 9, 80, -84, -54, -2, 2, -125, 76, -42, -62, 50, 6, 100, -83, -48, 106, -4, -34, 80, 23, 2, -80};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.41040715228264246);
    msg.setSource(20419U);
    msg.setSourceEntity(31U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(91U);
    msg.op = 196U;
    msg.name.assign("QVQLKOXSRXLLGGJFZEISYRKZGORNULVYPANOFIPAEJASEQBTWVNJSOIWMRZOPWPKMWMKIMTEEJHUZCITSUVLEPHXHQMGXNDIQYWDVLETHDVDCKKRPHOHCFQNOOKXQYYBQKITDPCWGZAAFAUQZVCEHIGPFFHSTMGCNAYUOWRWAOIXJUFNCCLYCGRNRUKMYIXSTXFRJBDLGJUDJHQJDNBMWMATSPABZDHZRYGXJLB");

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
    msg.setTimeStamp(0.8318194515289123);
    msg.setSource(64759U);
    msg.setSourceEntity(72U);
    msg.setDestination(29797U);
    msg.setDestinationEntity(227U);
    msg.op = 215U;
    msg.name.assign("YCTLWWORAKWVAIPBNMFEQUKZZLIBQOGIUDIRGZMUJOYVURXUZFPGJRKQMSFQZPGNLXEUGVEBHWMWHBIVQTCHOMXXARTCWEMXECTOGSYFRAUDRVTOSKKITNBQQZZHBZACYDGFYJVZWJCDQSMMRTKJLSK");

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
    msg.setTimeStamp(0.1164421955711884);
    msg.setSource(49648U);
    msg.setSourceEntity(238U);
    msg.setDestination(50351U);
    msg.setDestinationEntity(118U);
    msg.op = 21U;
    msg.name.assign("EXWFIXODYREGIYKNOMLTRHLACVJUPNDXKKVH");

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
    msg.setTimeStamp(0.04600886950520133);
    msg.setSource(33451U);
    msg.setSourceEntity(51U);
    msg.setDestination(25480U);
    msg.setDestinationEntity(55U);
    msg.type = 9U;
    msg.htime = 0.6631097837659622;
    msg.context.assign("WWWHABJKUJNNMB");
    msg.text.assign("BLPACKHBKQPRRWKGMEULDFWKFINNUVITZSGZTRXVTHZKXGWDOLMQAPUNZUGTLQYDCJVDIHYQBOZIZFRDTWRAXAAIHVTSJQWVUQYDYVEKJATJHNEHNMEYKCWQRRXXUNQQHLGSEKBFNVBVVKBLIPSMMFAJXPLBAYXDEWMSSDUFZTOFFCTYPEOABCCOEAPGPCTWRWRLFGEPOVXLCZJYGXNZIZMLEJWFGDHNDSUPXSRUOBCOMJIUHSSBMJYMOINO");

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
    msg.setTimeStamp(0.6959920829855366);
    msg.setSource(58228U);
    msg.setSourceEntity(142U);
    msg.setDestination(31945U);
    msg.setDestinationEntity(138U);
    msg.type = 113U;
    msg.htime = 0.18687428838430165;
    msg.context.assign("RDSRNSMCBMLGNRRMSYQOOOWJDCFAPTDPXZNRPFOY");
    msg.text.assign("DQIVEOUIZSTJJYIOSNTIIBFKWUHWCEZDMHQUKYMGXKBJHPVPQCVAVACLRGMFLFVDQOXHDJGSUWNBPBETGQACGGRBZVCOLRSFNFODKLWSSSWNIGITASOXCIQCLEYEFRAO");

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
    msg.setTimeStamp(0.7187434939595284);
    msg.setSource(53396U);
    msg.setSourceEntity(180U);
    msg.setDestination(2965U);
    msg.setDestinationEntity(86U);
    msg.type = 224U;
    msg.htime = 0.5300137498354105;
    msg.context.assign("EUZLHUYIFPLENWARZVVOEXFICYOGYOBYRLVLETBBQKJWQYXUHODFLQJFOKNNZCMSARZRYNDHDLHLIFHESPNJCVMMTNJGCCGJJCAYOUEDQRUQYGCCFKRAHKBSPVGCHXOTWPURTXQKIBNIRWDVUHFJGAQXASPBWKJIBGLEZFPMLWVXMTNNBTWFQJBWLSDDCWMDPGAPJWRSYOBXMUMXDHXDSATKZTSSRVZKMIGZPTPNEXZIGKEVOKH");
    msg.text.assign("OFRJMQTNKOWJVBZRIAYCKIEBSWCDVHLGTGPPIUJXDPIOMPZHFTNIXPDZQHVTKOXQESTFGEXJHDD");

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
    msg.setTimeStamp(0.9592499506262908);
    msg.setSource(22130U);
    msg.setSourceEntity(165U);
    msg.setDestination(11652U);
    msg.setDestinationEntity(38U);
    msg.command = 160U;
    msg.htime = 0.027415127668119044;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.htime = 0.16544506925289126;
    tmp_msg_0.context.assign("MRWGRBWZKIYCYLCGAJXGSBUWGAHYSMHIIRDHBTQCBRNUSTKORZLCKTECLUTFQXPKQWZQVSDAQUQRSNDXOGONLJFWPMFFTGZDSNZYXBEMWYPIMYTIVUOFCUIQSROAXEJWEEUIEPIDJNCEZHMDZASSAKJGYPENLTYZQGRHLNJEDDNPROJAGUBKQDFPXJZWHYLACVRSTLTHOWKLJIVBXAMPBXEIHNBHPHVAOTFMNUVCFVXGPMXUVFCOJWQYMLDBZK");
    tmp_msg_0.text.assign("UJMFTFPNCSYLWWUJOXWBOUWJUMOHPNCAHHIYUTRPFXLFEGUTZAUUXDIWBDQPSPNCIIYBJGGAAZTHADXXONKYMBZJRSWWXHSMNBCTYEQDJHLKHBZLHDPEWJCGIGLQWLLNQKR");
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
    msg.setTimeStamp(0.7613048002181858);
    msg.setSource(4310U);
    msg.setSourceEntity(138U);
    msg.setDestination(10405U);
    msg.setDestinationEntity(66U);
    msg.command = 138U;
    msg.htime = 0.5705133085402634;

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
    msg.setTimeStamp(0.801117278629074);
    msg.setSource(42526U);
    msg.setSourceEntity(111U);
    msg.setDestination(1850U);
    msg.setDestinationEntity(161U);
    msg.command = 209U;
    msg.htime = 0.21987253425400288;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 65U;
    tmp_msg_0.htime = 0.8379224380190295;
    tmp_msg_0.context.assign("DDLSNITMDPQKLMSQZWOOPJMRNCZAFJRCFDWCLBWSPKFRIATZFSUQYXNRVBHJVWLIQWQIJPUFOZYGKEZVQBUDOPGRXJAHWYVACGONOEDLLJXYYVBANOEHSKUEDZGLAEBUHDRMFASMFYTUUBKJDMMGIGIGKTCVTTEYRHUBMLBUPVOPXEINPMP");
    tmp_msg_0.text.assign("PDPJUMJGZDZPTECREOBJQOCABLOMSHNVHIOAIFGFSBXBEKYLMHUJJCXVVDQGNWWWTXSFUFEVUYQHBNTTUODPYKEYITARGRTLQZQXROKUQWSKUASVOKFQFWHBWLQLYKSMMSTBFJLZHUWXHWLFATKRNTGXURXEMFPUCOMIOJIQBYDINDGHRAXCCOEASWZZKHASLBYGDVGZIQYRZVAPKIDYVDGEYVKIMJLLRANRPNJPGMZVEBDCJS");
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
    msg.setTimeStamp(0.9672517500425427);
    msg.setSource(4963U);
    msg.setSourceEntity(243U);
    msg.setDestination(31686U);
    msg.setDestinationEntity(47U);
    msg.op = 58U;
    msg.file.assign("FLHGNSKVXTOQHTKOBYWKXCRJMFIHRADZOICNJPESTTUDGZUPCAUKKNYRDOUBOQBGXDBQ");

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
    msg.setTimeStamp(0.8393477988756755);
    msg.setSource(4264U);
    msg.setSourceEntity(143U);
    msg.setDestination(16751U);
    msg.setDestinationEntity(227U);
    msg.op = 68U;
    msg.file.assign("KLZCJCSQPJGBJKXHIPNFCMNWIHQOLYXBXVTMVLTRYSIPWMTOEQWWMBEQUGBXAI");

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
    msg.setTimeStamp(0.5677758228821629);
    msg.setSource(14598U);
    msg.setSourceEntity(253U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(37U);
    msg.op = 237U;
    msg.file.assign("ANMZZVUXSJEIZDYPHXJFKLHDWJU");

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
    msg.setTimeStamp(0.8741125111537342);
    msg.setSource(33962U);
    msg.setSourceEntity(12U);
    msg.setDestination(13779U);
    msg.setDestinationEntity(227U);
    msg.op = 185U;
    msg.clock = 0.9531127880911138;
    msg.tz = 43;

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
    msg.setTimeStamp(0.2896641822832642);
    msg.setSource(20231U);
    msg.setSourceEntity(226U);
    msg.setDestination(61650U);
    msg.setDestinationEntity(142U);
    msg.op = 12U;
    msg.clock = 0.289331962912176;
    msg.tz = -43;

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
    msg.setTimeStamp(0.8175868716492949);
    msg.setSource(13815U);
    msg.setSourceEntity(219U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(108U);
    msg.op = 189U;
    msg.clock = 0.9899451262299481;
    msg.tz = 58;

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
    msg.setTimeStamp(0.42361397047523763);
    msg.setSource(55540U);
    msg.setSourceEntity(21U);
    msg.setDestination(10029U);
    msg.setDestinationEntity(221U);
    msg.conductivity = 0.9211162466704419;
    msg.temperature = 0.7804482187774316;
    msg.depth = 0.9133918412214809;

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
    msg.setTimeStamp(0.7649590597954388);
    msg.setSource(43257U);
    msg.setSourceEntity(157U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(48U);
    msg.conductivity = 0.4014079605687416;
    msg.temperature = 0.6931951158147369;
    msg.depth = 0.36857087165154556;

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
    msg.setTimeStamp(0.7216616401668361);
    msg.setSource(60157U);
    msg.setSourceEntity(131U);
    msg.setDestination(41702U);
    msg.setDestinationEntity(89U);
    msg.conductivity = 0.5425863184137838;
    msg.temperature = 0.30319974224079305;
    msg.depth = 0.852035587865364;

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
    msg.setTimeStamp(0.00801066997829647);
    msg.setSource(64266U);
    msg.setSourceEntity(110U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.5324113796943606;
    msg.roll = 12801U;
    msg.pitch = 6971U;
    msg.yaw = 13113U;
    msg.speed = 20150;

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
    msg.setTimeStamp(0.06728742224245554);
    msg.setSource(8339U);
    msg.setSourceEntity(182U);
    msg.setDestination(55135U);
    msg.setDestinationEntity(55U);
    msg.altitude = 0.32051299762350216;
    msg.roll = 29185U;
    msg.pitch = 58832U;
    msg.yaw = 47540U;
    msg.speed = -9934;

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
    msg.setTimeStamp(0.6314002893069878);
    msg.setSource(30824U);
    msg.setSourceEntity(56U);
    msg.setDestination(62910U);
    msg.setDestinationEntity(248U);
    msg.altitude = 0.5044996302026349;
    msg.roll = 48976U;
    msg.pitch = 61629U;
    msg.yaw = 1377U;
    msg.speed = -6561;

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
    msg.setTimeStamp(0.49009816350231383);
    msg.setSource(22530U);
    msg.setSourceEntity(15U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(80U);
    msg.altitude = 0.9557703102465435;
    msg.width = 0.6219917633142537;
    msg.length = 0.7836500518338536;
    msg.bearing = 0.6528852334023021;
    msg.pxl = 15257;
    msg.encoding = 253U;
    const signed char tmp_msg_0[] = {-84, 65, 49, -104, 63, -54, 19, -53, 104, 88, 73, -56, -103, -68, 93, 47, 46, 63, 76, -1, -51, 87, -49, -128, -44, -68, -106, -86, -63, 126, -58, -125, 73, -126, 62, 84, 31, -103, -107, 15, -88, -17, 3, 29, 33, -72, 34, -115, -55, -117, -65, -41, 49, -61, -35, 124, -4, 66, 54, -112, -48, -44, 125, -90, -60, -80, 47, -91, 1, 37, 17, -30, 35, 91, 22, -104, 47, 106, -47, -20, 90, 109, 21, 117, 85, -46, 39, -31, 75, 94, -51, 63, 124, -29, -118, 90, 108, -43, 91, -97, -97, 31, 91};
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
    msg.setTimeStamp(0.721470168223156);
    msg.setSource(31273U);
    msg.setSourceEntity(187U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.016752470022627586;
    msg.width = 0.07758997814331381;
    msg.length = 0.8841982825339438;
    msg.bearing = 0.182922523025161;
    msg.pxl = 31227;
    msg.encoding = 102U;
    const signed char tmp_msg_0[] = {85, -8, -30, -112, -65, 95, 17, 38, 109, -9, 52, -7, -8, -16, -127, -102, 33, 10, -111, 94, -44, -78, -86, 4, 33, -10, 112, -97, 118, -16, -81, -32, -66, 25, -89, 33, -63, -79, 47, 114, 116, 112, -20, 33, 98, 103, -10, 98, -82, 67, 1, -123, 25, -55, 38, 78, -54, 103, 70, -42, -126, 16, -28, -112};
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
    msg.setTimeStamp(0.011587623817194248);
    msg.setSource(24940U);
    msg.setSourceEntity(30U);
    msg.setDestination(56628U);
    msg.setDestinationEntity(34U);
    msg.altitude = 0.09818434512861585;
    msg.width = 0.6939552088085057;
    msg.length = 0.16798719136409568;
    msg.bearing = 0.6097936634998974;
    msg.pxl = -29337;
    msg.encoding = 21U;
    const signed char tmp_msg_0[] = {53, -81, 77, -25, -45, -83, -57, -16, 119, -120, 106, 26, 30, 102, 54, 121, 55, -8, 96, -96, 22, 64, 3, -29, -49, -15, -122, 11, 52, -122, -28, 88, 92, 34, -98, -12, 80, 87, -32, -95, 6, 80, 45, -31, 8, 32, -17, -66, 108, 96, 14, 4, 41, 115, -38, 46, 26, -38, -118, -107, -59, -79, -7, 72, -106, -16, -114, -68, 90, 119, -86, -22, 92, 117, -116, -20, 117, 27, -42, 58, -9, 114, -124, -119, -45, 116, -121, 60, -88, -110, 111, -98, -50, 16, 54, 10, -21, -39, 73, 2, 114, -23, 21, 126, 90, -17, -24, 125, -34, 89, -33, 73, -104};
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
    msg.setTimeStamp(0.2593976077980378);
    msg.setSource(54724U);
    msg.setSourceEntity(10U);
    msg.setDestination(23765U);
    msg.setDestinationEntity(61U);
    msg.text.assign("YTJTQVVHFKYINDZWFGDPCVCGYZXFMYBMRHNEUXBPICTLAVFSIBUXCVOSPJJMWQHFLUZASSYKPFKRIKOLINHABSRJRRZHMVPJDKOMUQYCIRQDNIKXJQWCHIPVSU");
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
    msg.setTimeStamp(0.38410742063586345);
    msg.setSource(3445U);
    msg.setSourceEntity(218U);
    msg.setDestination(54022U);
    msg.setDestinationEntity(105U);
    msg.text.assign("XOHDWHZWXWAWYCBWPHEPBFQJBHCYCHTRFQJTVSBGIJATUZFACSGFRKMDQDRJLQLUUYAJIGNLUVNOKTDJXPHMRMYJKO");
    msg.type = 146U;

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
    msg.setTimeStamp(0.7855252284304576);
    msg.setSource(51885U);
    msg.setSourceEntity(53U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(71U);
    msg.text.assign("BOBMOUQGFBJVYNMGQDOJOCYNVNSUACRFTVANRLRHLXMDZDKIYPQZMFSXBGDCYTRYMZBLNGLLVTTPABVRQIXLFWTQGWKKRLQIPTPY");
    msg.type = 57U;

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
    msg.setTimeStamp(0.07024528272583819);
    msg.setSource(3495U);
    msg.setSourceEntity(234U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(49U);
    msg.parameter = 40U;
    msg.numsamples = 20U;
    msg.lat = 0.6235388137677925;
    msg.lon = 0.623833366392101;

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
    msg.setTimeStamp(0.32973569446218776);
    msg.setSource(23996U);
    msg.setSourceEntity(175U);
    msg.setDestination(28750U);
    msg.setDestinationEntity(134U);
    msg.parameter = 249U;
    msg.numsamples = 233U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 54835U;
    tmp_msg_0.avg = 0.5369417124274509;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.14715342733398462;
    msg.lon = 0.0117307031162871;

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
    msg.setTimeStamp(0.310011669613689);
    msg.setSource(55821U);
    msg.setSourceEntity(44U);
    msg.setDestination(49246U);
    msg.setDestinationEntity(233U);
    msg.parameter = 136U;
    msg.numsamples = 199U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 1156U;
    tmp_msg_0.avg = 0.062270705548168714;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9435875726146619;
    msg.lon = 0.26471022013904844;

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
    msg.setTimeStamp(0.38171504401655276);
    msg.setSource(4837U);
    msg.setSourceEntity(166U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(52U);
    msg.depth = 24972U;
    msg.avg = 0.13385335977319646;

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
    msg.setTimeStamp(0.009663051996876892);
    msg.setSource(32578U);
    msg.setSourceEntity(147U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(254U);
    msg.depth = 17352U;
    msg.avg = 0.5157183716840229;

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
    msg.setTimeStamp(0.4103788761958892);
    msg.setSource(38378U);
    msg.setSourceEntity(96U);
    msg.setDestination(38935U);
    msg.setDestinationEntity(27U);
    msg.depth = 57847U;
    msg.avg = 0.17387558244470414;

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
    msg.setTimeStamp(0.8202556860721159);
    msg.setSource(53581U);
    msg.setSourceEntity(51U);
    msg.setDestination(30976U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.5658325727952842);
    msg.setSource(20697U);
    msg.setSourceEntity(51U);
    msg.setDestination(39481U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.31100673349649566);
    msg.setSource(53586U);
    msg.setSourceEntity(25U);
    msg.setDestination(30611U);
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
    msg.setTimeStamp(0.6707648040818285);
    msg.setSource(13170U);
    msg.setSourceEntity(231U);
    msg.setDestination(47729U);
    msg.setDestinationEntity(63U);
    msg.sys_name.assign("WRBKKWIWJMEZVYYFLBPLAVSUKLIHFWVQTQSSDICXGQQXYMUHTLNJCXUAWIRAHMLFPRUBSTGLHRKNOVTRTAGJGBDBXLZWYLTJQEKFNQVQQUJLFTPCYPHMYNSOGMCXICFNYOELDZURBRDBBNSYFCRGDOTEWXUHZNKDGBSWYEWIAZFERDEICFOUSUHMVCOJISKVAMZPAZONQZOEMJXKGIPRNBXJCPDGTADVUPZEOGMNQYMEXKHZJPHAIFWHKX");
    msg.sys_type = 237U;
    msg.owner = 10577U;
    msg.lat = 0.7012908491147445;
    msg.lon = 0.8184225959944013;
    msg.height = 0.5638963077827437;
    msg.services.assign("AWJWAPTDBVLESVCVMMXLBBIARHYNGJYQKBJRXPHSJZGTPAKPTLGMAVYSDIUMDOFYTQJBKNUDNUYYNWSFLGZLXGVXSCAARPZSOTUCKCREEOEHINHEFIJYJZDMOIHCZQHUNIH");

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
    msg.setTimeStamp(0.6728371243937085);
    msg.setSource(37418U);
    msg.setSourceEntity(186U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(154U);
    msg.sys_name.assign("XQVCXAUMNQFXONBHTJZDYHMIWMHNJNIAHCNJEUBRJBXPKSXGJTNZZMHHPLKUVNFCPKXTGLVZVMLTRBBYTGAOKPIKGLUXCBSKSVVHXVRRYUABOVURCOHYYSLFMOJWSDJZCRITAEWEIGZ");
    msg.sys_type = 187U;
    msg.owner = 46358U;
    msg.lat = 0.8857263964438205;
    msg.lon = 0.8583339730606575;
    msg.height = 0.8237242204075623;
    msg.services.assign("HSPGWZHZDENAGQFGYRNSCMKVGXWPPDOQTGHXAEHLJZQBRVHDWQE");

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
    msg.setTimeStamp(0.4621324593693109);
    msg.setSource(37841U);
    msg.setSourceEntity(176U);
    msg.setDestination(42304U);
    msg.setDestinationEntity(58U);
    msg.sys_name.assign("INDCHCQLMJXDJDZRTAVCALKYJTKSPUVIHPZBJDWHVHFWIASFRLGCJESUYCBTSWYRUHFQVEVEMXBOIFCMAREEMXDNNJVLAWSAOQGBAQEQUQRKGLMOXJLUIXSZL");
    msg.sys_type = 9U;
    msg.owner = 50324U;
    msg.lat = 0.9169300152344763;
    msg.lon = 0.08782266022780294;
    msg.height = 0.6432042591343369;
    msg.services.assign("QFNWXESOKYJJDMFGFLJQUVLAGQHABQACFWUQRZZQBZNKMNPPNFDAXRTXQAYYCCKTAURXDDLLCIWSWTJHZOLLGLSFISYCVYKCGZOQNHDMVBVOMPMWFOSTNGCSBUE");

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
    msg.setTimeStamp(0.1502033636643787);
    msg.setSource(27904U);
    msg.setSourceEntity(32U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(66U);
    msg.service.assign("APPOHZSDESD");
    msg.service_type = 70U;

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
    msg.setTimeStamp(0.07403705670102223);
    msg.setSource(49102U);
    msg.setSourceEntity(45U);
    msg.setDestination(18939U);
    msg.setDestinationEntity(99U);
    msg.service.assign("TRJZVGTQSQVNMVZEHHQYEJGIVIXXCXZZJSIFBIMBRXJPIALLCTDUUYHLPMSBNUULSNYYREXEURNMVEWBPFSNTYABRQGWHYUBKKXKFKCOLMSTIVHLOQHOSAPDYKLUPFYSKO");
    msg.service_type = 150U;

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
    msg.setTimeStamp(0.39126061241744436);
    msg.setSource(28584U);
    msg.setSourceEntity(74U);
    msg.setDestination(19333U);
    msg.setDestinationEntity(113U);
    msg.service.assign("FRDJEQYHZJEEXNPGUWNBWHILJJINNYNCFFKHKSZRKXILRYH");
    msg.service_type = 112U;

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
    msg.setTimeStamp(0.21920522314119395);
    msg.setSource(22554U);
    msg.setSourceEntity(225U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(167U);
    msg.value = 0.8721969060747674;

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
    msg.setTimeStamp(0.531067631038609);
    msg.setSource(10242U);
    msg.setSourceEntity(179U);
    msg.setDestination(1323U);
    msg.setDestinationEntity(8U);
    msg.value = 0.47484159651102187;

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
    msg.setTimeStamp(0.7667874297017391);
    msg.setSource(28016U);
    msg.setSourceEntity(75U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8343755090188845;

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
    msg.setTimeStamp(0.2569037379714929);
    msg.setSource(41964U);
    msg.setSourceEntity(26U);
    msg.setDestination(18451U);
    msg.setDestinationEntity(101U);
    msg.value = 0.2848972979728216;

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
    msg.setTimeStamp(0.819430477479182);
    msg.setSource(33402U);
    msg.setSourceEntity(208U);
    msg.setDestination(37755U);
    msg.setDestinationEntity(34U);
    msg.value = 0.7605623850965845;

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
    msg.setTimeStamp(0.28095627087836983);
    msg.setSource(34862U);
    msg.setSourceEntity(182U);
    msg.setDestination(51345U);
    msg.setDestinationEntity(16U);
    msg.value = 0.4166008928674618;

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
    msg.setTimeStamp(0.9184799090265249);
    msg.setSource(63823U);
    msg.setSourceEntity(137U);
    msg.setDestination(2945U);
    msg.setDestinationEntity(95U);
    msg.value = 0.7905885148747278;

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
    msg.setTimeStamp(0.390428032784113);
    msg.setSource(15143U);
    msg.setSourceEntity(226U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4517564559920868;

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
    msg.setTimeStamp(0.6554629868892152);
    msg.setSource(43816U);
    msg.setSourceEntity(198U);
    msg.setDestination(27962U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5133474825359287;

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
    msg.setTimeStamp(0.4847116696513374);
    msg.setSource(40814U);
    msg.setSourceEntity(107U);
    msg.setDestination(58870U);
    msg.setDestinationEntity(226U);
    msg.number.assign("YMOVAVNPSGAGEZTQZTPONHBWVGZAPKFLIQWLFOZVYGSVUMVBIKPSMHHCZSVYHOOESPBVQTDYDQXWEXIIDUFKGRRZWFNEIFRNXEJCTUHHOWLIYPLGJDRIXANDUBYTYBKOWNUCHKMLEHCOFLQBBSDZFPGYCQDXUORXJCDOCRNNLNPETNXPSKEVCZETTGUFXGVSXHMJQAUKBJJLAPXQZCJAWYMRUJKSIRMWCZU");
    msg.timeout = 2103U;
    msg.contents.assign("LZQXVIODWGONICYITDJEEAZJDCBPTFQRKHHFHRDSBSMRZLYWLKFXSZMMVCJOAEBGSDTRZWMWVMEGHWYUZ");

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
    msg.setTimeStamp(0.7445065928831939);
    msg.setSource(4324U);
    msg.setSourceEntity(254U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(226U);
    msg.number.assign("VAGHVPXRKPQDLHZAZGIMVLLOXRYQFXLLUUAXPDJBWFTMHIYPEBUUDWOFBPOSZMSFFOVICTOAHACERKXZRLNKEUTDBRJZKRMIQASFQGWRYCZTPGDYZSUTJYCKDOXOKGTHYBJANNPHKBPMUNAWJVXOSGJIUSRIWHFGHWSELTRJACGDIPDMHCQVQBOJTEKUUQNKWFNGDWQXZZIJVMNNRSSELDKOBMVGYEJXWQCBFYEVSLBENI");
    msg.timeout = 47268U;
    msg.contents.assign("UQGREKTJBTPVRLTJMKZYSQTJGXBFXTLIPDJWCSFAOAAVZGQGIZTSXBKCZEVBHGJOAIXCMQFUEFOCLLOGDJJQWUAMQCYXNSFQTHKRSKBDYWMKJIQZHXRFDDC");

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
    msg.setTimeStamp(0.6662192284600376);
    msg.setSource(44050U);
    msg.setSourceEntity(84U);
    msg.setDestination(24048U);
    msg.setDestinationEntity(110U);
    msg.number.assign("OIRCEZCKJLHUZQWMWEVJATOXPQCCGSRLBGIBFCAUPDRXDRILXBRFCUQZKUNGFIJIMKZWMYJYDGVLEXJEWNPQOOUSVYPZRCHYWGBPXAIMWETKKUFUNHEVBRDBYQTIMDHXJFORFWWLAG");
    msg.timeout = 14249U;
    msg.contents.assign("OQFTIKMCGCSHMXGLTNRNWUHXJYPPZSQYEZYKNYOBJKKZKZGVRFPZMMEBAFOFLBUISWFRRQVZYLBQAARUCQNVKFAFTBBTGDSGULQKCPCZMHDLLSAIOLHXCJWAUQNWOEFJRTCDMISPNJOOVPUPWYHGIPKTGHAETFGUJVXADGVRLXHKADRCAJEHDNQLOQVMTZCXIYSWWXXWZJEDDBIPHVTJBNIURXEMYFOUBSDVWBIDNSEYJYPHN");

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
    msg.setTimeStamp(0.7169007641639944);
    msg.setSource(5292U);
    msg.setSourceEntity(112U);
    msg.setDestination(10706U);
    msg.setDestinationEntity(86U);
    msg.seq = 2773268940U;
    msg.destination.assign("PTRWEUFJSXHQAFKNVQZZ");
    msg.timeout = 34064U;
    const signed char tmp_msg_0[] = {-99, -89, 17, 97, 43, -41, 5, -37, -122, 89, -67, -84, 47, 12, 20, -104, 43, 79, -30, 100, 0, -118, 90, -77, -16, 31, 37, 30, -2, 29, 123, -37, -39, -55, -121, -118, -124, -29, 2, 58, 93, -86, -110, -66, -72, 112, 96, 28, -90, 8, -118, -49, 37, 120, -27, 125, 104, 52, -121, -48, -25, 64, -79, -73, 0, 28, -65, 124, -87, 75, 88, 87, 28, 85, -29, -95, 36, -80, -79};
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
    msg.setTimeStamp(0.7198442171110377);
    msg.setSource(38740U);
    msg.setSourceEntity(203U);
    msg.setDestination(48211U);
    msg.setDestinationEntity(40U);
    msg.seq = 1133426252U;
    msg.destination.assign("PHNLCDJPKZQABIOKRRZITFFVTOIBGOEJCCQMBSBVEIVXVNIPNJSCEYWWDZNKZLHHEYNIFH");
    msg.timeout = 26506U;
    const signed char tmp_msg_0[] = {-103, -23, -108, 4, 122, -94, 36, -102, 79, -58, 44, -104, 92, 2, 71, 67, 95, 118, -94, -123, -37, -60, 29, 43, -84, -16, 51, -46, -103, -12, -7, -83, -5, -60, -118, 77, -68, -68, -114, -47, 35, -77, 88, 117, 85, 46, 74, -85, -24, 116, -10, -7, -24, -11, -102, -47, -59, 24, 115, -81, 9, -21, 86, -38, 106, 16, -104, -92, 69, -32, 64, 85, 6, 50, 28, 30, -65, 44, 56, -59, -42, 122, 60, 20, -107, 112, -70, -24, -22, -53, 63, 70, 7, 74, 54, 75, -100, 60, 94, -40, -80, 75, 56, 46, -1, 40, 28, 105, -124, 18, 75, 20, 33, 37, 2, -33, -127, -27, 17, 69, 52, -47, 94, -72, 69, -56, 54, -61, 9, 4, -64, 17, 77, 118, 66, 105, 14, -125, 8, -36, 72, 108, 30, 31, -71, 123, -48, 101, 29, -80, -44, -46, -128, -91, -21, 99, -21, -2, -43, 69, 42, -18, 37, -1, 112, 21, -87, -96, 4, -32, -108, -11, -109, 109, -19, 90, -12, -96, 60, 91, 27, 2, 91, 78, -127, -108, -118, 108, 52, -28, -83, 30, -73, -113, -106, 21, -49};
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
    msg.setTimeStamp(0.07589806758409268);
    msg.setSource(18536U);
    msg.setSourceEntity(113U);
    msg.setDestination(14068U);
    msg.setDestinationEntity(44U);
    msg.seq = 1037468383U;
    msg.destination.assign("JLKZZOJLZMKFULSSSXZSXCDTKEGNBBPFWJQOES");
    msg.timeout = 34314U;
    const signed char tmp_msg_0[] = {-52, 53, -121, 95, -12, -115, 99, 101, -32, -34, 86, -53, -74, -89, -98, -77, 116, -58, -31, -83, -83, -47, -10, -3, -51, 58, 54, -45, -34, 44, -105, -11, -23, -21, 6, -33, 32, 125, -114, 60, 83, 67, -28, 18, -12, 29, -122, 22, -59, -122, -51, 114, -100, 43, 45, 51, 29, 96, -87, 81, 117, -28, 122, -121, -74, 14, -90, -40, -103, 40, -96, 2, -54, -110, -65, -121, 40, -69, -8, -116, 116, 69, -68, -124, 118, -109, 71, 71, -25, -63, 61, -127, 68, -78, -27, -125, 80, 43, 120, -114, 124, -48, 108, 57, -19, 80, -58, 10, -55, -119, 0, -58, 28};
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
    msg.setTimeStamp(0.5598705561085262);
    msg.setSource(62716U);
    msg.setSourceEntity(176U);
    msg.setDestination(151U);
    msg.setDestinationEntity(24U);
    msg.source.assign("PUNGNFAWYVBMSVXOKFOTXMGRKQEOYKHIGDT");
    const signed char tmp_msg_0[] = {-120, -30, 83, 7, -109, 37, -70, 110, -49, -87, -107, 59, 113, -64, 49, -9, 93, 44, 40, 5, 123, -37, 99, -110, -38, 41, 114, -105, 78, -81, 43, 42, 17, 106, -46, 57, -28, -45, -30, 84, -126, -53, -83, 49, 23, 91, 19, 22, -112, 60, 15, 107, -25, -44, 62, -31, -99, -85, -38, -64, 86, -45, 19, -21, 63, -84, -32, 3, -58, -112, -88, 108, 28, -108, -6, -68, 41, -59, -66, 34, 45, 55, 77, -42, -95, -27, -89, -95, 68, -89, -124, 79, -84, -21, 113, 72, 43, -46, 19, 107, -88, 123, 60, 95, 73, 18, -104, -60, 60, -36, -121, 31};
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
    msg.setTimeStamp(0.06711700283573363);
    msg.setSource(9699U);
    msg.setSourceEntity(200U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(3U);
    msg.source.assign("EFWAITPMKXBTQFYGQAOXBXBEDCSMTJBCASAJIZDAQFPPYTLFCSISVNKPTXYBWRSZJSANQQGJVOKNNDSIBXOVPKHSNLVGGJFEHBXZMOVPYRQMDIXADZROUWIWPLKHBFRHHGRZL");
    const signed char tmp_msg_0[] = {-58, 55, 46, 66, 124, -28, -47, 71, 39, 114, 37, -48, -9, 76, -72, -22, 124, -89, -45};
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
    msg.setTimeStamp(0.8674409871790774);
    msg.setSource(32050U);
    msg.setSourceEntity(153U);
    msg.setDestination(56753U);
    msg.setDestinationEntity(31U);
    msg.source.assign("SDCAWELOMBQSNXXVKNDPHOHVPIFIUOHHGKCFJNAPVRYVPZOQEXUNFSDJRJSFIKLKZRPWBQNKSYJKRJSPNWHQVGLMACFONXBGLMEQULKWTQUTBWGIGTPPDAZFCZFYUULMAXDICQHKBYRZYTSVMTCTUEQJYAUENYRDJCAIFWAW");
    const signed char tmp_msg_0[] = {111, 125, -60, -91, 3, -2, -5, 47, -24, -111, 1, -56, 94, -38, 63, -84, -47, 84, 5, 27, 4, -111, 2, -34, 103, 83, 56, -23, 121, -107, 35, -127, 101, -64, -90, 66, -61, -67, 49, 67, 64, 115, 108, -47, 112, -114, -23, -89, 4, -28, -79, 76, -86, 126, -90, -28, -30, -124, 21, -119, -52, 17, -7, 94, 89, -53, 29, 57, -67, 31, 91, -101, 93, 112, -23, -97, -128, 51, -80, 86, -125, -81, -23, 58, 98, 41, -124, -112, 4, -105, 63, 71, 1, -3, -61, 101, 97, 9, 9, 72, -90, 114, -102, -87, 65, 64, 25, 56, -115, 67, -34, -11, -44, -4, -105, -50, -75, 66, -110, -105, 45, -24, -65, -27};
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
    msg.setTimeStamp(0.7402885913670174);
    msg.setSource(20365U);
    msg.setSourceEntity(125U);
    msg.setDestination(27098U);
    msg.setDestinationEntity(177U);
    msg.seq = 2828815616U;
    msg.state = 232U;
    msg.error.assign("KHBVDXNVLEZRZDIQVSPGSLVFTNDPMZOROMFLGYQNSFWOUGBDDAZMVJRRGHCYJKKJEQWPGGRXPINWFZAZAMLZICMKGNKDLBNAHXIYPCMNPJETWSTCSWYWHFIXIDDJSG");

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
    msg.setTimeStamp(0.2342901104252504);
    msg.setSource(64564U);
    msg.setSourceEntity(233U);
    msg.setDestination(18268U);
    msg.setDestinationEntity(99U);
    msg.seq = 2024260679U;
    msg.state = 56U;
    msg.error.assign("BTLJXFZWMVCWBJMIIVWIECJPACUWHRJZXPVHGOBDBQWKRJRGNEFGF");

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
    msg.setTimeStamp(0.6858253710938664);
    msg.setSource(45952U);
    msg.setSourceEntity(55U);
    msg.setDestination(27769U);
    msg.setDestinationEntity(183U);
    msg.seq = 2144790541U;
    msg.state = 106U;
    msg.error.assign("ZXWTBQBZJYFCMUU");

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
    msg.setTimeStamp(0.6193096273084238);
    msg.setSource(50506U);
    msg.setSourceEntity(249U);
    msg.setDestination(20633U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("AYGJKLMIWQQERJLAQLWCXNFZPRBFNTXLCFKGGOAUFTWDIHKRBHHSYZMUXLGNWQLBKMOADHCHWZMPOYGVFTDNKBBUDNQLOPTRPVZWVEZTLWKHKNWIUEAMCXPIXHNJRIMUHUPUVIEMFDMEIQCKYDEQTTOSTHGTXIOBWDFDXJQAIYPBJDSFPFZNGPYSXFZBUYVENVALUJMJSZRWKSQSIDBAOZNVXOXRAUQCVJMOBCCYSEHY");
    msg.text.assign("APDEQJTWGNLKYQBNBZMFLWWSYRSXUSOZKJURLPBTBFJGWUDEVZQDKXYOFSTDHCRFIIIPNKAIXCNJPSVFMHIYTLASQMPUEEEZ");

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
    msg.setTimeStamp(0.01313605206462698);
    msg.setSource(49267U);
    msg.setSourceEntity(166U);
    msg.setDestination(39309U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("MSNSMVRGDVXXITQECWVCEKHXPFIBZOBEAGPQBJLNPNIUAH");
    msg.text.assign("QYQTWIDYWSXUJRIMVFCUVFSTNBUPDQALFCCDOYRPRGJQMTOZBANEIFZBMZUILXESEEXECVZNDPTDSNOMWBGVAYCLBLZNMWFSOKCZNHXVWHXYRIOHWHHRUVQRBMLUEPGCGQGVQORJNASETWVKPLIWUGYTAMYUVDSFFKTELDBCTHIXAVAXXGSQHDMBSMIKKGJWSTQJRAABKL");

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
    msg.setTimeStamp(0.00781630963399349);
    msg.setSource(51923U);
    msg.setSourceEntity(25U);
    msg.setDestination(52455U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("CDKFKHHTFZANVZABIAMGEUKBOUZDLZLXPNJKBJIFXMPVGTQHEGETFMNRWUYUXLGDNWIKLFWUAFNPWHAIPVTYJGTSYCKSOOLFTRONXSBEYUKSTTTGVMWMPMRZXNEHKBJWBGDMISKKSCVOQMXWERNXYRQDHZAQICSIIHYMZWAUTNCQJQSVVRDOBWDGWCQYHHMJLQYELAECRPFXBIVESUGQLAQJDNCVFIJZUXPOJBLVDSGJCLDAPBZYOCHOZ");
    msg.text.assign("XAYYHPXMNFVSLWQFEHENONITITBDOQSUKUQADTORUWSAMLYKPPGTIAUVXTMJGPANTWPEVHQHZDJJSZVQQLMVUCHAAOHLOFFBITROUPVNKSAGUKRRCUFFBTDKBGELKALSFCMUEWHVIEQ");

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
    msg.setTimeStamp(0.245106976727128);
    msg.setSource(39623U);
    msg.setSourceEntity(3U);
    msg.setDestination(54247U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("PCSEZVLSODHETRESPIELGGBQTANACSWMHQXFWILAYIYTRGYAKJKVNQOUKDETXZBTKRNZXEKOXXUQOWJNJYNMFODPBWRZUYTDAYXGRZXNQAGSMQPNBMITFKVSUIFJICWHBWLDRNBJAOZXEBFARMFHABITUHFHQVCKYJKTZXDLPBUFUCGPHPSVL");
    msg.htime = 0.5635551606208817;
    msg.lat = 0.27602482534104633;
    msg.lon = 0.43518504691240745;
    const signed char tmp_msg_0[] = {-57, -99, -108, 70, -26, 9, 107, 71, 34, -78, -50, 57, -46, -7, 34, 6, -126, 41, 117, -82, 126, 113, 120, -56, -73, 39, -19, 27, -116, 88, -128, 109, -18, -72, -54, -37, 34, -6, -59, 105, -19, 123, -32, -51, 25, -74, -109, -50, 35, -8, 33, -7, -78, -10, -38, -2, -36, 95, -30, 110, 66, -109, 88, -43, 47, 57, 39, -39, -117, 48, -41, 87, -50, 36, 82, -107, 82, 38, 30, 2, -31, 42, -3, -23, 62, 10, -9, -110, 8, -64, -57, -113, 111, 110, 53, -125, 89, -101, -34, 32, 107, 37, -84, -4, -15, -61, -93, -100, 44, -3, -71, -47, -104, 6, -80, 38, -22, 4, 26, -29, -9, -108, 47, -110, -59, 13, -73, -95, 89, -87, 24, -42, 116, -41, -2, -20, 36, -119, -59, 115, -116, -109, -111, -19, 62, 19, 85, -119, 47, 84, 22, -99, 96, 36, -28, -79, -12, 99, 50, -36, 10, -48, 122, 57, 4, 50, 51, 73, -7, -118, -87, 41, 78, 69, -106, -55, 40, -110, 74, 6, 45, 64, -115, 83, 51, 53, 17, -105, -78, -61, 61, 116, -24, -50, 92, 42, 46, 76, 106, -100, 40, -16, -127, -1, -128, 49, 76, 10, -88, -52, 55, -122, 102, 91, -63, 17, 110, -72, 51, 79, -46, 114, 24, -122, -9, 80, 88, -53, -70, 96, 21, 31, 106, -51, -79, -12, 1, -84, -105, 86, -119, 106, 83};
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
    msg.setTimeStamp(0.5571001040742655);
    msg.setSource(59704U);
    msg.setSourceEntity(150U);
    msg.setDestination(28548U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("ALUTPQOALUCKKVXWLZFXZURAZFCZNANYNRFXHWYVEQEVXLKZIX");
    msg.htime = 0.3102976075796716;
    msg.lat = 0.916417935689914;
    msg.lon = 0.8048349281620442;
    const signed char tmp_msg_0[] = {42, 56, 90, -93, -11, 119, 114, -33, 88, 18, -24, 47, -98, -113, 108, 99, -105, 76, 59, -76, -110, -105, -50, -82, -85, -102, 110, -45, 82, -98, 1, 89, -27, -52, -103, 97, 14, 70, -112, 69, 75, 97, -97, -124, -39, 14, -32, 113, -46, -63, -123, -13, -98, -65, -14, -89, 105, 27, 86, 45, -19, 82, 33, -11, -51, -21, 59, -80, 21, -34, -52, 40, 110, 81, -32, -89, -65, 105, -66, 58, -86, -90, 65, -120, 82, -59, -57, -65, -127, -95, -95, 63, -78, 47, -63, 46, 71, -22, 39, -56, 23, -45, 95, -23, -115, -4, 84, -16, -123, 92, -65, -18, -74, -111, 13, -55, 80, 122, 76, 20, -122, -79};
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
    msg.setTimeStamp(0.7543965368099842);
    msg.setSource(21892U);
    msg.setSourceEntity(68U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("BKUEIUGPZXGFFMHWUAIYGDSROUVJTFUYVTBAWBXXFANVICPBMKZXKQWTTGENCMVKBIQMCYQGNQJDJRYDHPUEPCPVWJJKYHLOHAGC");
    msg.htime = 0.2675546835563144;
    msg.lat = 0.6496453449514284;
    msg.lon = 0.6818835305519039;
    const signed char tmp_msg_0[] = {-58, -81, -112, -101, -46, -88, -8, 30, 49, 16, -7, -3, -24, -103, -64, -13, 37, 43, -50, -31};
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
    msg.setTimeStamp(0.4025856341350883);
    msg.setSource(1448U);
    msg.setSourceEntity(11U);
    msg.setDestination(15370U);
    msg.setDestinationEntity(197U);
    msg.req_id = 22727U;
    msg.ttl = 52630U;
    msg.destination.assign("YLCCDIIHZYCFZMBJVNUAOQAEGTFOUVTZXXELGUETDMBEGZJOVDSDSMYONYQGDMJHLIEGKXPEWHJOELIUUTKBAQFHGCYWXLMQBIJKPXVLSTQTIDMFUOPCZRBNCAIDVW");
    const signed char tmp_msg_0[] = {62, -122, 82, 34, 30, -45, -59, -81, -120, -22, 81, 18, 39, 33, -13, -78, -58, 36, -76, 87, 83, -121, 26, -12, 119, 89, -69, 1, 92, 69, -53, -111, -34, -95, -37, 48, -5, 89, -126, 64, -18, -80, 38, -1, -68, 67, 104, 50, 66, 34, 30, -34, 42, -126, 21, -80, 86, -121, 94, 107, -70, -102, -35, 54, 93, 43, -90, 126, 58, 84, 91, -95, -81, 17, -24, -103, -87, 94, -21, 117, -88, -78, -120, 71, -20, -81, -85, 89, -69, 92, 57, -16, 58, 39, 23, -23, 86, 96, -34, 8, -70, -3, -54, 2, -37, -79, -77, 86, 98, 64, 45, 81, 50, 122, -59, -13, -16, 55, 81, 91, -30, -42, -78, 117, 96, 25, 47, 119, -16, -88, 76, -99, -25, -12, -114, 2, -55, 45, -26, -124, 52, 105, -16, 87, -2, -89, -37, -57, 58, 72, 108, -5, -125, -124, -127, -8, -101, 122, 14, -26, 51, 20, 42, -95, -108, 58, 76, -88, 88, -126, -93, 33, -33, 122, -20, -69, 84, 90, -50, 108, 89, -46, -63, -90, -10, 32, -26, -75, 57, 74, -113, -60, -11, 94, -70, 37, -47, -125, -64, 33, 111, 0, -63, 18, -87, 55, -59, 35, -125, -50, -83, 107, 21, 95, -30, -11, -50};
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
    msg.setTimeStamp(0.5535320746090101);
    msg.setSource(37697U);
    msg.setSourceEntity(79U);
    msg.setDestination(9114U);
    msg.setDestinationEntity(15U);
    msg.req_id = 47600U;
    msg.ttl = 45466U;
    msg.destination.assign("CTJZRVGPMYFMURNBPTAGEOLXLQPQRDGCJMQVZOAXKYSQEWTWGKAHXIGDLTCVOXEWLRLBBWDANOBQNSZEEKXMNPVGEIUDYWHHWUVAYWSHZEBEPZANPU");
    const signed char tmp_msg_0[] = {90, 113, 85, 30, 19, 18, -93, -52, 10, -36, 44, 74, 17, -83, -85, -98, -5, -35, 77, 40, -113};
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
    msg.setTimeStamp(0.28977703494963647);
    msg.setSource(10747U);
    msg.setSourceEntity(134U);
    msg.setDestination(64428U);
    msg.setDestinationEntity(97U);
    msg.req_id = 59095U;
    msg.ttl = 7113U;
    msg.destination.assign("GZCTYFKOESIZUFNGUEDXUETVGMHQPYSXMVUQKRZIQLHBAFFQWRNVMZRLLIMXPXSCKLNCZTWBYCHYMRJSOVAVJIWVNYNBQYQRZSQJGGKIWMBAKQHOOWUFGBPTCYPO");
    const signed char tmp_msg_0[] = {43, -43, -2, 71, -15, 47, -86, -13, -79, 19, -12, 46, -70, -86, 111, -60, 98, -124, 93, 111, -72, 113, -54, 52, -84, 101, -4, 110, -6, -68, -18, 1, 71, -17, 10, -36, 31, 52, 112, -14, -84, 34, -54, 76, -96, 36, -51, -49, 112, 29, 92, 46, 50, 2, -92, 51, -4, -17, -115, -52, 79, -108, 37, -91, -110, 21, -77, 2, 48, -58, 35, -60, 61, 20, 100, -3, -5, -34, -20, -86, 122, 32, -29, -3, 118, 80, 82, -79, -103, 122, 72, 43, -77, 94, -43, -92, 44, 10, 93, -126, -22, 38, -2, 79, -116, 83, -108, -11, 48, 54, 91};
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
    msg.setTimeStamp(0.6685074548923042);
    msg.setSource(3558U);
    msg.setSourceEntity(118U);
    msg.setDestination(41824U);
    msg.setDestinationEntity(197U);
    msg.req_id = 53486U;
    msg.status = 249U;
    msg.text.assign("ZMTYFJSBTLHEMHRELMKPZFEBUDOJOECVCRIKAZZRJZMBFKPJBWQZZVAK");

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
    msg.setTimeStamp(0.14932822157338843);
    msg.setSource(10743U);
    msg.setSourceEntity(10U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(162U);
    msg.req_id = 46618U;
    msg.status = 162U;
    msg.text.assign("DTVEALTAEVGVHPDEBOPNCSQRBCZUNNJJDWWDLOGKUKUZYHSHNVEOZBSWVGIPSKRYOCOHVLSGTVGOPTLPERNBYAPTSJUKQGNAFAYFVUINCBSCZZFBLYHTRXHMAY");

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
    msg.setTimeStamp(0.33207986639318254);
    msg.setSource(19883U);
    msg.setSourceEntity(200U);
    msg.setDestination(32582U);
    msg.setDestinationEntity(109U);
    msg.req_id = 49705U;
    msg.status = 87U;
    msg.text.assign("QWOZJBHAHEWFKVVBRDBQVLTYSCFXCEUNLQFGDXOKINTOCWAAEKRIMSQLXURKCESSVQLNJJXKZYFMGYHAPWWTSJSTBYNXPMEZFZDZKKYQYGCALFGNDTOWXAREWIILPXBIHVWCBUHEVCHEFM");

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
    msg.setTimeStamp(0.14006702782500002);
    msg.setSource(37977U);
    msg.setSourceEntity(15U);
    msg.setDestination(12859U);
    msg.setDestinationEntity(9U);
    msg.group_name.assign("TAPITBRWBMHDHVIULJUFMKEUY");
    msg.links = 294536331U;

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
    msg.setTimeStamp(0.9600866682559681);
    msg.setSource(5675U);
    msg.setSourceEntity(173U);
    msg.setDestination(28818U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("PAXRLSTDSIUEXARVFFWNDCQJSXMAACKPBDJTHLROMBKPWNXLWPMUPPWOVGZTEWZQYLLZGIMNPYQDRBGHTYTKNXQTVQWGFUJDCCVGSU");
    msg.links = 3972370308U;

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
    msg.setTimeStamp(0.8629739456219503);
    msg.setSource(15624U);
    msg.setSourceEntity(238U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("XGJCCODGZAVGOXAONIZQSVUENRNMDGJRPWNACCJFFEOSPURZTDWKVKVSXFOLTHSQLZEYXMKKYAESMJDCVLJGHWRHPZGITLGAKBRUFOQBPPXFDUWBJATUJPYMQDUNOSZUQFQUCYEWQPVITNDAXPDZLEITUEIVSAGRLIMKFYHXBKXWXHEKJTIDFLLYBETSJRUHSMNKHCRQIBBIWVCRLHZNXHTGWMR");
    msg.links = 3615823721U;

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
    msg.setTimeStamp(0.21065964324636177);
    msg.setSource(29972U);
    msg.setSourceEntity(71U);
    msg.setDestination(62151U);
    msg.setDestinationEntity(131U);
    msg.groupname.assign("JTMQQSOFRRMHRABVVPOYCSBDFRKPWGIBWODFAUQHPUCPCBFQFTCXNRGYUEQDKJWKODLMLCSVDBTIQCXQFBBAKZXKYPAGSYRUOUMSFCFAXXOVVMRWKPREDYYFNQZLJZZNEMQMEVHIHUENXOAJJVLHQSPMDAGZAIEVVCEZTDKXYNENMPHZDGOXUYNGPTBGKWHFLATPIXBO");
    msg.action = 125U;
    msg.grouplist.assign("KYFPLVLYIWDYOZUNHVCOOGTPALQNTIKDUEITHMIIOCZHMFSORVVY");

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
    msg.setTimeStamp(0.5079019226333026);
    msg.setSource(27795U);
    msg.setSourceEntity(116U);
    msg.setDestination(15101U);
    msg.setDestinationEntity(105U);
    msg.groupname.assign("UVSIPJYRXPDVSONMIZCCJZHOOZGGKUIDWKTIQEJRGVBVQCMWHHOHHKFRAXZFIEJRLAQARBTYEVVLTQDAHPCEXDRFPJZJCDKKJNABMMMGGISKFLBDSYCNXTTNLYPNOP");
    msg.action = 234U;
    msg.grouplist.assign("LRCBJNAJXJZAWIKFIAPYLEWUIOMUZVKYXFPRWBRKVWQODVYQDGXTPEOOHMUOHOSRDXMWLFMGJIWNNWEBUDFDKKTTGBLCODEFCYX");

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
    msg.setTimeStamp(0.28848755536868054);
    msg.setSource(41612U);
    msg.setSourceEntity(245U);
    msg.setDestination(20591U);
    msg.setDestinationEntity(188U);
    msg.groupname.assign("OKRXZMOBAOSZTRUJWTISMHUCSBBDNYHECGOAHGJCDNHCKZMJKJWBMMKYXIAZVQDZDFORXMPPJVNMHIJFLYLVSEKLYKQIDFANBTFKXRHVLWLHFXQIGYSFKZCJDYNAYBYWXDEKNTGOJVSYXCZDNQRIWLBSFILXIMPTCAZUBBXEPQGPEC");
    msg.action = 245U;
    msg.grouplist.assign("UAXZFHOGAOTEXPCNHXFZSCUHBXZMWSXINUCZMBGJJMKGYZORBQZBENTGRRZFNHKHAPYYVISVSJJXPVSDOLFIXOGOQVEEKHLCQLVCUTURDAQNKIDKKPCCSRTASWZBQONKPCTGMBVIWTWUPIQTHHJMWPJHI");

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
    msg.setTimeStamp(0.7415266006214618);
    msg.setSource(59600U);
    msg.setSourceEntity(178U);
    msg.setDestination(48816U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8281006505227001;
    msg.sys_src = 52534U;

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
    msg.setTimeStamp(0.08750092152815392);
    msg.setSource(54957U);
    msg.setSourceEntity(100U);
    msg.setDestination(60133U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7090483136309149;
    msg.sys_src = 25167U;

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
    msg.setTimeStamp(0.39953625859865727);
    msg.setSource(11303U);
    msg.setSourceEntity(155U);
    msg.setDestination(36645U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6855061260938645;
    msg.sys_src = 21664U;

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
    msg.setTimeStamp(0.5474073636458442);
    msg.setSource(4954U);
    msg.setSourceEntity(241U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(218U);
    msg.value = 0.4737586944133483;
    msg.units = 228U;

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
    msg.setTimeStamp(0.8707869380242174);
    msg.setSource(15230U);
    msg.setSourceEntity(208U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7343617899847933;
    msg.units = 14U;

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
    msg.setTimeStamp(0.15546454039794688);
    msg.setSource(1305U);
    msg.setSourceEntity(57U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(112U);
    msg.value = 0.11062756074264246;
    msg.units = 129U;

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
    msg.setTimeStamp(0.9035198622322912);
    msg.setSource(52019U);
    msg.setSourceEntity(194U);
    msg.setDestination(55816U);
    msg.setDestinationEntity(215U);
    msg.base_lat = 0.8702820488197482;
    msg.base_lon = 0.41944100454480326;
    msg.base_time = 0.2390511326695708;

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
    msg.setTimeStamp(0.08591088320128248);
    msg.setSource(24769U);
    msg.setSourceEntity(44U);
    msg.setDestination(31118U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.9082736908275213;
    msg.base_lon = 0.6916657941334047;
    msg.base_time = 0.3781513485011203;

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
    msg.setTimeStamp(0.11285380376407195);
    msg.setSource(58259U);
    msg.setSourceEntity(69U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.09139922255023625;
    msg.base_lon = 0.2736949180860204;
    msg.base_time = 0.5802905058674109;

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
    msg.setTimeStamp(0.25810604296843165);
    msg.setSource(57667U);
    msg.setSourceEntity(163U);
    msg.setDestination(43958U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.8350775875314599;
    msg.base_lon = 0.9416678432222817;
    msg.base_time = 0.6113515726170772;
    const signed char tmp_msg_0[] = {-111, 99, -43, 26, -80, -96, 43, 42, -67, -79, 10, -69, 114, -85, 28, 7, 29, -97, 80, -11, -112, -42, 71, -5, 60, -36, -83, -113, -110, 89, 69, 18, 1, 9, -33, -36, -42, 75, 7, 5, -62, -60, 76, 4, -120, 123, -123, 18, -128, -6, 33, 53, 121, 118, -83, 44};
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
    msg.setTimeStamp(0.45902939540615106);
    msg.setSource(21106U);
    msg.setSourceEntity(19U);
    msg.setDestination(55451U);
    msg.setDestinationEntity(184U);
    msg.base_lat = 0.7059560650090163;
    msg.base_lon = 0.9562401919621908;
    msg.base_time = 0.8469447941053038;
    const signed char tmp_msg_0[] = {12, -83, -93, 85, -54, 122, 65, 63, 29, -93, -79, 84, 49, 6, -111, 58, -60, 36, -92, 1, 71, -88, 106, -51, 89, 31, -106, -106, 97, -61, -89, -17, 92, 3, 105, 27, 117, -126, 107, 108, -81, 0, -24, -81, 109, -8, 12, -53, 114, -21, 114, 102, 26, -63, -7, 8, -120, 64, -31, -40, -82, 124, 69, -85, 8, -4, 19, -78, 116, 99, 41, 102, 55, -2, -121, -86, -65, 55, -100, -11, 85, -27, 116, -92, 71, 60, -32, -26, 59, -122, -76, -3, -121, 97, 0, -32, -20, -83, -59, 91, 23, -117, -52, 39, -86, 71, 42, -115, 67, -17, -67, 82, -14, 10, -52, -83, -44, -114};
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
    msg.setTimeStamp(0.24798030875131472);
    msg.setSource(33733U);
    msg.setSourceEntity(218U);
    msg.setDestination(7279U);
    msg.setDestinationEntity(153U);
    msg.base_lat = 0.026144733564036682;
    msg.base_lon = 0.573672633794689;
    msg.base_time = 0.45765426227395345;
    const signed char tmp_msg_0[] = {-81, 58, 45, -2, 15, 77, 91, -126, -125, 12, -30, -99, -68, -39, -29, -123, -4, 85, -5, -55, 49, -41, -27, 44, -83, -88, 118, 71, -67, 16, 28, 66, 102, -71, -118, 50, -66, -64, 50, -63, 21, 122, -108, 26, 32, -110, 35, -55, -53, 55, 69, 48, 8, -33, 91, -62, 28, -37, -71, 3, -41, 89, 124, -72, -28, 37, -104, 65, -14, -86, -84, 100, -9, -44, 74, -68, 71, 106, 79, 53, 18, -123, -55, -126, 43, 125, 46, -115, 94, -8, -120, -48, -99, 82, 48, 13, 2, 100, -5, -12, 56, -109, 121, -47, -77, 27, 51, -10, 75, 103, 71, -127, -51, -64, 39, -123, 90, -36, -78, -26, -124, -11, -10, 27, 31, 102, 15, 96, -27, 25, -57, -38, -5, 44, 63, 17, 19, -81, -126, 93, -80, -107, 126, -69, -117, -53, 59, 68, -6, -26, 28, -10, -33, -33, 83};
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
    msg.setTimeStamp(0.0734134221876881);
    msg.setSource(4320U);
    msg.setSourceEntity(93U);
    msg.setDestination(16501U);
    msg.setDestinationEntity(131U);
    msg.sys_id = 13182U;
    msg.priority = -33;
    msg.x = -23770;
    msg.y = 16918;
    msg.z = -23155;
    msg.t = -11660;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("STIGEZQEJYYUIPTZLZLRXPLQZIJAHZNMHDMLWHPBYAZSAFJRCACNRYGVLNXDIOQWPTNELGDSPHIYUXTXRXIVLDKWHDOLZWTNBDGVTEMFUMQPJXUSTPWMNJABBFXFUKBADXKMMKEZEGJSHQUOTWYZCOVKOHCIFUVISGPCYQSKQWGCOFMMSHCWMQSCVXVRORKDIGETDJGUDKYFARFSNBOQKFNVNBLROYPUHVREBGACAEXRUKPBELWYAHTQ");
    const signed char tmp_tmp_msg_0_0[] = {-6, -115, -109, -13, 73, -16, 31, -50, -67, -63, -118, 115, -9, 12, -65, 21, -83, 79, 18, -35, 51};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.4432558850157132);
    msg.setSource(978U);
    msg.setSourceEntity(234U);
    msg.setDestination(45748U);
    msg.setDestinationEntity(161U);
    msg.sys_id = 64432U;
    msg.priority = 56;
    msg.x = 869;
    msg.y = 10626;
    msg.z = 28641;
    msg.t = -17559;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 23559U;
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
    msg.setTimeStamp(0.641524557309715);
    msg.setSource(61095U);
    msg.setSourceEntity(101U);
    msg.setDestination(34664U);
    msg.setDestinationEntity(37U);
    msg.sys_id = 19895U;
    msg.priority = 60;
    msg.x = -5537;
    msg.y = 7767;
    msg.z = -18398;
    msg.t = -17014;
    IMC::NSBMsg tmp_msg_0;
    tmp_msg_0.path_param = 0.9905169654361182;
    tmp_msg_0.x = 0.8731443999599513;
    tmp_msg_0.y = 0.9802198248781508;
    tmp_msg_0.z = 0.011012163677721176;
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
    msg.setTimeStamp(0.7180134928550191);
    msg.setSource(41813U);
    msg.setSourceEntity(96U);
    msg.setDestination(50933U);
    msg.setDestinationEntity(99U);
    msg.req_id = 22110U;
    msg.type = 239U;
    msg.max_size = 64715U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.37291196588931474;
    tmp_msg_0.base_lon = 0.6420321241372062;
    tmp_msg_0.base_time = 0.2095918610123454;
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
    msg.setTimeStamp(0.223036018120506);
    msg.setSource(55473U);
    msg.setSourceEntity(154U);
    msg.setDestination(43696U);
    msg.setDestinationEntity(25U);
    msg.req_id = 27574U;
    msg.type = 253U;
    msg.max_size = 2785U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8891622692786206;
    tmp_msg_0.base_lon = 0.527112005720179;
    tmp_msg_0.base_time = 0.47440126679858985;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 25037U;
    tmp_tmp_msg_0_0.priority = 82;
    tmp_tmp_msg_0_0.x = -663;
    tmp_tmp_msg_0_0.y = 6160;
    tmp_tmp_msg_0_0.z = 1823;
    tmp_tmp_msg_0_0.t = -27927;
    IMC::Heartbeat tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.8763554319193331);
    msg.setSource(29743U);
    msg.setSourceEntity(177U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(33U);
    msg.req_id = 4792U;
    msg.type = 222U;
    msg.max_size = 38977U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9065435644687073;
    tmp_msg_0.base_lon = 0.4954259041198933;
    tmp_msg_0.base_time = 0.5881598862020704;
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
    msg.setTimeStamp(0.8225995831916139);
    msg.setSource(14262U);
    msg.setSourceEntity(44U);
    msg.setDestination(54143U);
    msg.setDestinationEntity(200U);
    msg.original_source = 13986U;
    msg.destination = 9510U;
    msg.timeout = 0.40978400128832715;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.25554736250580035;
    tmp_msg_0.y = 0.7251290319617013;
    tmp_msg_0.z = 0.702667745345418;
    tmp_msg_0.phi = 0.3474605792789405;
    tmp_msg_0.theta = 0.8952672624839684;
    tmp_msg_0.psi = 0.5706010791611533;
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
    msg.setTimeStamp(0.13589952442276332);
    msg.setSource(45701U);
    msg.setSourceEntity(229U);
    msg.setDestination(12549U);
    msg.setDestinationEntity(200U);
    msg.original_source = 40051U;
    msg.destination = 59716U;
    msg.timeout = 0.16770960279240188;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 24U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("MIZAWXNQQLORXJKXURNWNVLVQURNEIIPQRBSUGWDXYNRESRTFQSUGOQWHWFCRPAKOZYPZEXCHUSYGVTNXRQDMFHALG");
    tmp_tmp_msg_0_0.lat = 0.7294965257790289;
    tmp_tmp_msg_0_0.lon = 0.5572854534890056;
    tmp_tmp_msg_0_0.depth = 0.8456804800592482;
    tmp_tmp_msg_0_0.query_channel = 215U;
    tmp_tmp_msg_0_0.reply_channel = 118U;
    tmp_tmp_msg_0_0.transponder_delay = 72U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6616183920811401);
    msg.setSource(54633U);
    msg.setSourceEntity(103U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(78U);
    msg.original_source = 34808U;
    msg.destination = 65455U;
    msg.timeout = 0.4175003342793421;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9292595773026686;
    tmp_msg_0.lon = 0.019470236492530102;
    tmp_msg_0.alt = 0.2963020683604366;
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
    msg.setTimeStamp(0.3780867674129047);
    msg.setSource(48361U);
    msg.setSourceEntity(7U);
    msg.setDestination(25498U);
    msg.setDestinationEntity(134U);
    msg.type = 202U;
    msg.comm_interface = 30320U;
    msg.model = 42087U;
    msg.list.assign("WBSLNOYEDHKEIXEQNAZKSCNVYIGAWTEZJPAUPYVSTVILRAZWJPDHGKFJAPRLQJOXBQVSMXOMNHDJUOFMBQDERDYDNZMRISXGLFTJMQKIPGXEBUVKOLUWPEIKFNVSEMTVFRUYXLZYZIMEPTHTGRJYHRIGWLWJAAJBSXNEOFLCSFFHUSFWGUDCRTDWAIHUCIYKHWGUCVNXSXZHCTTBOQDJWZVMLPMBQGFPOURQLOCXKNNBADKVOACCYHC");

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
    msg.setTimeStamp(0.22041683681691304);
    msg.setSource(42855U);
    msg.setSourceEntity(172U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(247U);
    msg.type = 207U;
    msg.comm_interface = 9747U;
    msg.model = 20561U;
    msg.list.assign("VXCNPHSCROGDTYHBJTOQLBHLKVSXGGVLJQKAONVYNAFRWZUNCUFEEUOMMYPAISCTGAXREPFMYCROFQADSABKTGWLUZGRFVTQOFJVQXUEPHWJKDRRLJAFJBQIZZVDPQMOCWNXRMTABXJHNLIITPUYXLECIVLPYSURFUBKQBIIUAFALMUSSOPPIHONGJKNEYEDYWOHYZMNDQ");

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
    msg.setTimeStamp(0.013766357679344421);
    msg.setSource(12408U);
    msg.setSourceEntity(157U);
    msg.setDestination(2218U);
    msg.setDestinationEntity(222U);
    msg.type = 154U;
    msg.comm_interface = 29612U;
    msg.model = 35439U;
    msg.list.assign("EVMNJEFALUJGWOHWBSPWK");

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
    msg.setTimeStamp(0.3175745401890614);
    msg.setSource(27333U);
    msg.setSourceEntity(16U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(28U);
    msg.type = 249U;
    msg.req_id = 1472565265U;
    msg.ttl = 45440U;
    msg.code = 60U;
    msg.destination.assign("NBMATRLCMKUNJHCVCTYMJWXFYOGIWQILNLBXDMSYRIRRRWXATKJKJQGOFWCKYFVSRLYDXTWEGXAPRYPVGPEZAHBTYUTOHDGPUXYZTHSUUHBFNUYMWADCOOUXBXHEMUCZJVZMIDESBDAMKPIEINJFJLKECRLXFHFBACQEPHSVNQVNKPCKPVQGSZARAWXGFEORZNIBWEOIMKPZLWDNGDJOFUVGLZDSDOJQUZJQTQLBSWVHHTL");
    msg.source.assign("KUNSPETNLPNQPDXQWPVSFOFKAINEWRMBRVRNJJRQQZHYSGJINMWAIVKTIEKVHCXYEZASWAQWHHBEHKDTUUZNXZGYKNDJVOSDIQKARVIMTMHMOZDFXIFSCGTOGBURFCSJHBYTINEKTDBYWUPUBZQRVFZ");
    msg.acknowledge = 102U;
    msg.status = 15U;
    const signed char tmp_msg_0[] = {7, -67, -125, 22, -58, -89, -30, 93, 111, -74, 8, 33, -46, -61, -44, 66, -56, -39, 43, -34, -97, -101, -9, 94, 97, -63, -22, -9, -42, 113, 79, -120, -24, 117, -73, -121, -76, 0, 58, -13, -95, 57, -31, -78, -2, -56, 114, -48, -25, 60, 0, -124, 57, 99, 112, -18, 49, 106, -7, -1, -30, -120, -60, -10, -23, 14, 8, -36, -109, -62, -56, -89, -115, -105, -91, -18, -46, 17, 113, -97, -81, -110, -30, 108, 61, -110, 95, -58, -103, 109, 42, -55, -94, 115, -39, -60, 10, -128, -1, -87, 16, 126, 32, 121, -1, -75, -87, -92, 25, -70, 48, 103, 45, 25, 118, -88, -103, -6, 33, 69, 33, 95, 50, -19, -74, -85, 79, 41, -123, -13, 27, 107, -88, 119, -107, -118, -128};
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
    msg.setTimeStamp(0.3415367902451054);
    msg.setSource(2657U);
    msg.setSourceEntity(111U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(130U);
    msg.type = 252U;
    msg.req_id = 1796735564U;
    msg.ttl = 15053U;
    msg.code = 24U;
    msg.destination.assign("OZGIURBPBIQCAMWQBBSQJBUBCCNMYTICQTAFORLQVDFECTZHVBYMBUUJPXKQPHJQRJROPTLENEJIAKPIPJSYGTJFAGIPCXAVSQEPKIBKWSEXNDRSDLFSCKHYOSCIYMTHNAOEWENRGLUZMQHYLXH");
    msg.source.assign("XGSWYBYZQJVBLUFLGEBYMNUEPXLWRXHSJCDLQPHIIKAIDPIYFGBMFSZYLZETXUXWRPHCLAYPNRJWRAUNSSRQPDCPOLREDKXAACWNJPDUHGXFAVOHTZSFHJVPORYVJSEQG");
    msg.acknowledge = 152U;
    msg.status = 104U;
    const signed char tmp_msg_0[] = {17, -70, 77, -14, 55, 39, 111, -53, -55, 94, -93, -28, 93, -93, 61, 46, -71, -47, -103, -116, 5, 0, 108, -45, -91, 22, 37, -51, 55, 8, -35, 113, -90, 36, -49, 84, -31, 107, 75, -4, -70, 18, 54, -41, -34, 49, 47, 75, -6, -56, 34, -79, -36, -72, -24, -1, -23, -47, 60, 112, -64, -90, 19, 102, -58, -5, 48, 11, -49, 74, -32, -24, 33, 32, -122, -121, -41, 118, -81, -120, 14, -48, 84, 30, -50, -111, -78, 97, -128, -13, -72, 1, 70, -52, -78, 67, 104, 6, -68, 107, 59, 110, 99, 121, 55, -105, -126, -96, 29, -93, 18, 38, -127, 1, -64, 12, 117, 49, -76, -124, 31, -128, 107, 60, -97, 53, 24, -7, -50, -124, 119, -113, -25, -13, 64, -109, -87, 10, -24, -83, 5, -31, 10, 121, 91, -67, 43, 59, 48, -124, -72, 49, 71, 118, 45, -29, 35, 114, 28, 98, 24, 65, 61, 78, 3, -29, -82, 58, -125, -25, 109, 28, 36, -2, -125, 81, -108, 72, -38, 112, 95, 100, -99, 54, 97, 69, 111, -51, -20, 34, -16, -37, -28, 62, 30, 61, 69, 1};
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
    msg.setTimeStamp(0.8842808815734452);
    msg.setSource(40451U);
    msg.setSourceEntity(213U);
    msg.setDestination(43446U);
    msg.setDestinationEntity(108U);
    msg.type = 47U;
    msg.req_id = 1284049731U;
    msg.ttl = 43782U;
    msg.code = 74U;
    msg.destination.assign("XDYLFSVNWSMBEKJREHQJUPZOCJAVJCRSBDGBEIPCKRCTULPYMRRYWOFWSKEHGWYGIAUIMTQXVTNXJZHYQKRHRDGJXSFVNCLGMMQAACIAHMXNFOZGCTHVTSIHULIDSPGOGDANRCYWEKTBBKIPZW");
    msg.source.assign("ZFCYHVNGWWVKVEDWARCD");
    msg.acknowledge = 4U;
    msg.status = 180U;
    const signed char tmp_msg_0[] = {-83, -81, 91, -17, 97, -1, 47, -88, -56, -49, 107, 46, -17, -57, 85, -72, 61, 53, -125, -21, 75, -51, -34, 54, 31, 58, -49, -32, -66, -80, -17, -38, 93, 83, 39, -115, 115, 94, -128, -128, 49, -40, -110, 31, -59, 78, 66, -81, 46, -23, 77, 78, -78, -121, -47, -107, -4, -94, 119, 107, 18, -40, -16, -58, -105, -14, -17, 61, -58, 109, -76, 109, 100, -93, -78, -115, 49, -49, 102, -43, 122, -83, -22, 65, -97, -43, -76, -69, -95, -66, -98, 88, -34, 124, -62, -88, 79, 112, 57, -56, 10, -81, 91, 52, -19, -122, 118, 108, 16, 116, -123, 119, 118, -42, 96, 54, 111, -80, -1, -79, -74, -81, -22, -21, 76, 104, -75, 31, -51, -102, 30, -37, 9, 90, -124, 71, -66, 53, -1, -3, 12, -95, -44, -97, -53, 108, 122, 7, -19, 80, -103, 41, -113, 122, 46, 76, 115, -43, 124, 24, -122, -77, -20, 122, -95, 81, 43, 54, -81, -115, -114, -73, -3, -1, 52, -115, -35, -56, -26, 111, -77, 61, 10, -75, -72, -73, -111, 107, -46, -37, 92, -74, -100, -18, 95, -105, 1, -50, 2, 8, -56, -89, 112, -43, -101, -58, 33, 25, 82, -119, 37, 27, 35, -120, 55, 11, -43, 106};
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
    msg.setTimeStamp(0.8873866512710339);
    msg.setSource(17068U);
    msg.setSourceEntity(210U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(36U);
    msg.id = 92U;
    msg.range = 0.605283674796152;

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
    msg.setTimeStamp(0.6151337802351116);
    msg.setSource(7012U);
    msg.setSourceEntity(200U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(36U);
    msg.id = 188U;
    msg.range = 0.26261922922493863;

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
    msg.setTimeStamp(0.2550492036254204);
    msg.setSource(30419U);
    msg.setSourceEntity(134U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(49U);
    msg.id = 217U;
    msg.range = 0.20244486680641127;

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
    msg.setTimeStamp(0.8002595618361508);
    msg.setSource(38033U);
    msg.setSourceEntity(132U);
    msg.setDestination(27249U);
    msg.setDestinationEntity(36U);
    msg.beacon.assign("DOPBPPBMZWYCYOPTPQIFUDRKTGMJYXOJELKWADHNNQI");
    msg.lat = 0.12765111186822686;
    msg.lon = 0.41596271200106294;
    msg.depth = 0.10303587563559569;
    msg.query_channel = 76U;
    msg.reply_channel = 40U;
    msg.transponder_delay = 60U;

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
    msg.setTimeStamp(0.35460303024399265);
    msg.setSource(27420U);
    msg.setSourceEntity(139U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(213U);
    msg.beacon.assign("BRSMIDFKYVJDQGUFPFMMVEGMKJOEFATMJBBPAOCZITIHVQOCCTZOAYKQVLNNYUBOWUPWCPLJJIXUXJBDGUQAWMMABAQIJPRSSDFVLEVBDTQWEOXNSGFCXNRE");
    msg.lat = 0.45171860719889456;
    msg.lon = 0.3881128968367368;
    msg.depth = 0.6861399407037224;
    msg.query_channel = 133U;
    msg.reply_channel = 169U;
    msg.transponder_delay = 75U;

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
    msg.setTimeStamp(0.2828843984114344);
    msg.setSource(9587U);
    msg.setSourceEntity(190U);
    msg.setDestination(50212U);
    msg.setDestinationEntity(213U);
    msg.beacon.assign("KSJBHDYMZIHDPLGQFEVTQGPQSWECCFJPATAYHDNGEMSBNVTYGPCNADVQW");
    msg.lat = 0.19791495887836852;
    msg.lon = 0.6097011510366579;
    msg.depth = 0.40865320496937874;
    msg.query_channel = 132U;
    msg.reply_channel = 17U;
    msg.transponder_delay = 92U;

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
    msg.setTimeStamp(0.6913004925146655);
    msg.setSource(57234U);
    msg.setSourceEntity(183U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(69U);
    msg.op = 215U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JTPCUPTXGYCYAOWMURDHHPHNQMXILIOSMIHFBIZVPASKTEOQLASNNUEUNRLCBYDHBJSVTBRFDHIROIOREPPJTVFEHJORWYJRXYZKWWQMGDWFROHPXOZVFLKLFKQETXVHLCQPAMTMUGDSMVQN");
    tmp_msg_0.lat = 0.4181552567986393;
    tmp_msg_0.lon = 0.27150433270064556;
    tmp_msg_0.depth = 0.06024400246371997;
    tmp_msg_0.query_channel = 232U;
    tmp_msg_0.reply_channel = 146U;
    tmp_msg_0.transponder_delay = 11U;
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
    msg.setTimeStamp(0.9114933413862675);
    msg.setSource(32681U);
    msg.setSourceEntity(141U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(20U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.6557233927917027);
    msg.setSource(31220U);
    msg.setSourceEntity(234U);
    msg.setDestination(4550U);
    msg.setDestinationEntity(143U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.14230279988636374);
    msg.setSource(1753U);
    msg.setSourceEntity(149U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(65U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 31U;
    tmp_msg_0.file.assign("STIUPZXITKYHWTXZVOMIMETVZNCOGJACWFRINRYZKKXABPRKRJGZUOAHVBHKNXKINUNAJCEJAMLMXSLPFEMELCSSOTMDGZQKSOCZQYNEEHVVGCPRHPWEIOCAWBUHAYMVLAHQWABYBGGBLFHWXKJOWS");
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
    msg.setTimeStamp(0.7430926138974412);
    msg.setSource(60570U);
    msg.setSourceEntity(217U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(215U);
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.05125149238283866;
    tmp_msg_0.m = 0.6183269336500029;
    tmp_msg_0.n = 0.9424587877634457;
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
    msg.setTimeStamp(0.17423422625479568);
    msg.setSource(11100U);
    msg.setSourceEntity(163U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(122U);
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("DKDLYLCSVQTOIVEXXARTADAQVQGFJURBTZUODMGQJSFYBZRO");
    tmp_msg_0.sensor_class.assign("RSRKJHEWBGUHEKMLTKSPXHFBDBJIAQCXPBBFSPRWZFDCOPDVWHXYUNNZSYTXUSTRMPWNDQNTYCAMVVDZPRMPNETRHOSOEZOGFBBMIRSNULACOQZVKLAOTORYGTGTXBLYJGIJGWLXJWQUAWKQTZTDVJSECELMMJKFPKICGACEBDJGUNSSVYKIURJLYQVOAGLQXCHJKDERLIZFFMOENAHIUZWGQPZOMBWLHNIYIAXKQWXEHDD");
    tmp_msg_0.lat = 0.37950965208192455;
    tmp_msg_0.lon = 0.060080210393694156;
    tmp_msg_0.alt = 0.18867780261578404;
    tmp_msg_0.heading = 0.30085471919298856;
    tmp_msg_0.data.assign("IBLMVGVNBWYILUNUCOZLPNQLFSVFGXVUTQXSKPGXKFDNVJKMQUGWWBIYMCZLARIRMCWFEDPOXALOAEDOHIZWMXTDCSNMHOTHOKDZKEOBSPQCGCMRCSSUNIREQEZGLYYPAKSGDETFVTHACXGOEEFMTKRLFKHVARHXSGQTBPNVOQHKXJIPERRHIXZPWEBJDZSHQDTWMJDJXYJYQPYJFPHBTZN");
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
    msg.setTimeStamp(0.9452257399966306);
    msg.setSource(19916U);
    msg.setSourceEntity(142U);
    msg.setDestination(64861U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.8899449121403585;
    msg.lon = 0.379044080414641;
    msg.depth = 0.08936997948819414;
    msg.sentence.assign("DALZHFGQPXPNXKDEVBIOJHJPWNUVRYMXAGKRQFCVBTDNU");
    msg.txtime = 0.27914230313238575;
    msg.modem_type.assign("TNIIPXQXAVIKBMZIQZHHLZLLJCXKPACECWPGNFRUAJSOYJFPBCYEQQVRUONBFDMGUWEJBSFUENISSCLSBCATFDTSAGTQTKKMMUBCENWRNAZP");
    msg.sys_src.assign("MMXVOJWCOOKEQJDQFSLNWBAQMVUTTDEDUXULXYCLHAJRPMRT");
    msg.seq = 49162U;
    msg.sys_dst.assign("MZRUUPBPMYHZOEAXFVCFUZGCTIUNKCFCSVSHQELQWTDTLBCSDHOVWPOPKKZIOYLTHSMGMSUJLPFUGRWLKTITFHRBXPLFUYGFESSJG");
    msg.flags = 116U;
    const signed char tmp_msg_0[] = {42, 16, 26, -100, 78, -45, 94, -97, -90, 37, -16, 81, -89, 117, 93, -54, 77, -5, -66, 115, -45, -48, 69, -16, 69, -127, -57, 112, -82, 74, 78, 40, -52, 25, 71, -64, 28, 2, 79, -63, 121, -81, 3, -33, -40, -86, 126, 113, -119, -118, 77, 1, 32, 117, 17, 0, -44, -20, -29, 57, -118, 113, -69, -84, 47, 83, -95, -57, -77, 5, 27, 74, -121, -119, -98, 71, -71, -38, 83, 122, -118, -47, -9, -87, -39, -75, -92, 59, -17, -6, 111, -44, -13, -56, -75, 66, -90, 59, 92, -16, -70, -15, -32, 75, -35, -47, -116, 102, -52, 60, 50, -61, 52, -123, -118, -117, -115, 45, -33, 77, 31, -90, 89, -8, -48, -38, -91, 15, -103, -120, -36, -63, -3, -19, -35, 98, -99, 79, 37, 51, -92, -29, -73, 49, -128, -33, -106, -72, -33, 72, -27, 62, -90, 122, -109, -123, 119, -27, 57, -2, 122, -80, -99, 74, 45, -59, -92, -22, 92, -8, -99, 52, 106, -56, -3, 115, 6, -43, -124, -113, -97, 66, -71, -51, 73, -98, -95, 98, 115, -50, 86, 41, -41, -116, -109, 74, 30, -75, -112, -68, -48, -44, 90, 1, -6, -43, -71, 116, -16, 77, -83, 47, 48, 65, -110, 11, -52, -113, 29, 12, 81, -101, 45, 41, 60, 17, -45, 67, 98, -22, -122, -117, -120, -41, 37, 14, -128, 79, 35, -99, 19, -104, 111, -6, -47, -81, 114, 59, -14, 57, 102, -77, 125, -80};
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
    msg.setTimeStamp(0.16902493924295325);
    msg.setSource(25981U);
    msg.setSourceEntity(247U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.8097822338509458;
    msg.lon = 0.1496569712474679;
    msg.depth = 0.42633428440731946;
    msg.sentence.assign("AXVVOVXJRRXIBUUXZEGGAXPMIKAKGBRTMIPE");
    msg.txtime = 0.794971613961816;
    msg.modem_type.assign("AEZFHPYVAQDXBXMTNRHUMBLIAKJEPQZSAXZNEGZFZXNCAKDOWJLBCJJCPSKMYFGUDHYXAMAWMXXJMPWSVAJSSFIYXROULTFQOWYZMHVKTGFYKCEKDVEMGYLQBEZ");
    msg.sys_src.assign("NHSEHFLJTWPBRLDEH");
    msg.seq = 14278U;
    msg.sys_dst.assign("ZHPBNJIVCUCAIOIPSLKZVZBKRWUMAFLSNOQRXIGMJFDEEUNPMDOQKXFHOTEGJANMYQJVZFWPPGGUEBFIJKPNPLMEASDGFTPXISSBCBDJTKHRKJKNWIXPTWUMSLQBEUZAIBRYNBYLTHYRWBHOUKSWXZLYUNTQYFZCLUHMFOTAJXVKXEGDIOILAJWVQXHOQYHASTEYCCDTATZQGHFUPDDYNGDXXSCMCMY");
    msg.flags = 98U;
    const signed char tmp_msg_0[] = {30, -52, 97, 112, 65, -51, -18, -15, 125, -81, -97, 36, 109, 40, 19, 59, -2, -66, 9, 69, 73, 93, -2, -28, 97, -40, -62, -39, 14, -72, 80, -4, -64, -104, 12, 124, -25, -6, 26, 111, -44, -22, -64, -122, -119, 119, 41, -109, 96, -93, -22, 4, -40, -114, -80, 69, -71, 41, 112, -75, -43, -120, 45, 39, 76, -32, -61, -92, -26, -66, -74, 33, 95, 97, -92, -36, 64, 21, 101, 75, 71, 125, 122, 100, -64, 122, -37, 62, -107, 20, 75, -126, -41, -27, -50};
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
    msg.setTimeStamp(0.19961185132068993);
    msg.setSource(39483U);
    msg.setSourceEntity(196U);
    msg.setDestination(788U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.8259013516216607;
    msg.lon = 0.29919037099561396;
    msg.depth = 0.8277703225382211;
    msg.sentence.assign("FWGHESEBADXSICRMTNKEYCMLEOXOISYOWFIFDRADPPWNJINYBGCTNBKVCJTAFPCUUHHNKOEPBCBLIQROKTQBBWGJWSIRLZVCVKUHYANZWQJQPEUTYTRZPRMVLSVJXUMDKLEDJRJIWAZMYDGXFTMMZYXMHZFLXNPGYBKXVOLPLGSRBAOSRNDIU");
    msg.txtime = 0.6175841489560897;
    msg.modem_type.assign("RAUMOPMUYPGHUMLSCXMLIITLSRJZPAYBZSQISCSDRFZXTSDGFTBKQJUNCXWVEGFSWSUBVULTKKAEIQQYWSRTSGZQCBVKIPBPTLFOMOVHDECBMWHE");
    msg.sys_src.assign("KDSAFPWBUPZOAOYNUWRQCHZIQWVOHCXXYXFKA");
    msg.seq = 30888U;
    msg.sys_dst.assign("SUHKDXWSOSVTNFBBVQWLILXPITBUWPVQRXRAJXQQBCNCQEFTSIYTRIYSMCMXBQNANBMCAXSGRVPBDKXWSEDWGYUAGOLEZMWIOHKTLOTHHFLQZDCQJDWJNPFUZFOZLIEVZQLHE");
    msg.flags = 29U;
    const signed char tmp_msg_0[] = {64, -86, 98, 85, -24, 61, -24, -24, -3, 16, 46, -48, 122, 50, -100, -92, -81, 33, 38, -1, 50, 112, 84, 102, -69, 10, -115, -67, -112, -54, 61, -40, 11, 11, 2, 74, -103, -66, 55, -107, 45, 57, 53, -30, 108, 108, -117, -48, 65, 103, -96, 45, 110, -112, -12, -41, 69, -67, -76, 125, 116, -107, 115, 94, 40, -96, -10, 122, -77, 36, 113, -16, -67};
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
    msg.setTimeStamp(0.7053324924664972);
    msg.setSource(21150U);
    msg.setSourceEntity(180U);
    msg.setDestination(10698U);
    msg.setDestinationEntity(110U);
    msg.op = 181U;
    msg.system.assign("ELATBZLCOYGEAWBEPBSSNRJEWJKZUIBWZXBWQDZFGDWNHYTORMDLXYENIPVLZCJZFNMOXUHSAJUHFEQQBQVVPNVPNKBDOFDPOZEGWJRU");
    msg.range = 0.7361801739384322;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 191U;
    tmp_msg_0.quality = 251U;
    tmp_msg_0.reps = 87U;
    tmp_msg_0.tsize = 193U;
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
    msg.setTimeStamp(0.8718576733053174);
    msg.setSource(31278U);
    msg.setSourceEntity(103U);
    msg.setDestination(24843U);
    msg.setDestinationEntity(121U);
    msg.op = 97U;
    msg.system.assign("WQZFFUKHAGOBLUBYBIQCHBVWFTVIHNZZMWUSBABFARPAZSYJHQDTNTYGEVOCHLIXUZWEMDWRGHNPVPZIXGOBZKNDXOEKLHZNICLWJQXLNRAGPEGMPCJKZCSRQMDQIBAJSDYFQFUKYTSNUXYWHTVVAJOCKJODHONHKEOGLPLZVURSPJMRCLDJMOIERIDTGNYPATXKJIMEFQUFEWPRSLUFCCXQGEXSXVVKMTLAOPXYQDGMWVFTCWBN");
    msg.range = 0.48454492673768035;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 5046U;
    tmp_msg_0.lat = 0.28789951876794306;
    tmp_msg_0.lon = 0.7473187189170827;
    tmp_msg_0.z = 0.18349846197221098;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.speed = 0.45995408079048505;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("LUUWTYRKJPBXVGLHVQXIPDKRNXSFPMQCFAXHZREEQKHHKSGNHUIKCAMBOYZIJGKQFYGQRDLEZNTVYTVTSUHCZAVL");
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
    msg.setTimeStamp(0.24686270442690894);
    msg.setSource(33974U);
    msg.setSourceEntity(207U);
    msg.setDestination(27914U);
    msg.setDestinationEntity(69U);
    msg.op = 22U;
    msg.system.assign("WKBIBGCGAWYZTGLPIGTTCXDZUQAIFOKOVPKZITRTPLNMFWHEKDLDQWNMNGJSOYAGREKSGBBTBLYZWQ");
    msg.range = 0.28601990361789253;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("UMDXEPPZHURTCWZLHOCVXBRUIGRFGYWVXHEUGQSMWIYALPMETYANCDBFNISXNGQMCNOPSZ");
    tmp_tmp_msg_0_0.lat = 0.16839390096078555;
    tmp_tmp_msg_0_0.lon = 0.023129490253383178;
    tmp_tmp_msg_0_0.depth = 0.4962211185035498;
    tmp_tmp_msg_0_0.query_channel = 131U;
    tmp_tmp_msg_0_0.reply_channel = 203U;
    tmp_tmp_msg_0_0.transponder_delay = 58U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.5672948125143502;
    tmp_msg_0.y = 0.4611102852132374;
    tmp_msg_0.var_x = 0.5639682280371497;
    tmp_msg_0.var_y = 0.1104333432637129;
    tmp_msg_0.distance = 0.37968223182882144;
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
    msg.setTimeStamp(0.9408104064874989);
    msg.setSource(50099U);
    msg.setSourceEntity(59U);
    msg.setDestination(13463U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.8510019954479995);
    msg.setSource(30040U);
    msg.setSourceEntity(204U);
    msg.setDestination(39306U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.14886177766241548);
    msg.setSource(773U);
    msg.setSourceEntity(51U);
    msg.setDestination(5843U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.5758718507284588);
    msg.setSource(33644U);
    msg.setSourceEntity(204U);
    msg.setDestination(10331U);
    msg.setDestinationEntity(43U);
    msg.list.assign("NPWYQVSXPCBDJVJZOOEBZDDGIUU");

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
    msg.setTimeStamp(0.13986077926462281);
    msg.setSource(33247U);
    msg.setSourceEntity(227U);
    msg.setDestination(12539U);
    msg.setDestinationEntity(49U);
    msg.list.assign("JFWYCSKRZQYYPCDLYLHIQUGOMKPHIVNQVNOFIUSMHORGDLEEOXJFDKMXNETRCYEFRGRBFSZUUGVWGQIOSZDXWPBHBSRBTAHBJCQZSLBEYPEMHCZBCLHWPVKVDNTZXHIXRLJKIACNGNKA");

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
    msg.setTimeStamp(0.21232805655196363);
    msg.setSource(11658U);
    msg.setSourceEntity(92U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(194U);
    msg.list.assign("NTGHOHPRYZIQFCJYHEYDDFBOLWVIAUBEEMMRXBJQGZQXHNWCBOBSSXLUZL");

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
    msg.setTimeStamp(0.6032625922070208);
    msg.setSource(39526U);
    msg.setSourceEntity(145U);
    msg.setDestination(5133U);
    msg.setDestinationEntity(151U);
    msg.peer.assign("UDVPJPJXJBOCCFPL");
    msg.rssi = 0.5556033617264667;
    msg.integrity = 62374U;

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
    msg.setTimeStamp(0.9432829142765896);
    msg.setSource(48485U);
    msg.setSourceEntity(79U);
    msg.setDestination(55327U);
    msg.setDestinationEntity(159U);
    msg.peer.assign("NMHCMVUOHPIRQOPWRWQXLLZTIDUJBKOBKGGZSDHKIIFTAUDFKPBGTPCNXCARJMDZYTXHHLXYYMDGVJCIIDNREKXTTDEJXWNQMEEVTQVZFXMPUGFFHZEXQRVOMYSHXSYGYJKYUASCNWAOWBTCKQUOVZMWIOJQWHLRNLQZGSYDNIWHAIEFXRMBDGPEDKGZTCVAEYLFJULWIBNOVARHSCJZVYFV");
    msg.rssi = 0.21552838739693658;
    msg.integrity = 47669U;

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
    msg.setTimeStamp(0.7171672979681495);
    msg.setSource(5834U);
    msg.setSourceEntity(65U);
    msg.setDestination(63538U);
    msg.setDestinationEntity(223U);
    msg.peer.assign("NOBQZORZBZEUTPIEMOYIPUJDRVQGXQCWJFPOCWXWPMZZYJZVRCNRYZSMCVUKCYSJLORUBMJNFKCUEEIKXKTGXSYQLJHTTBJKYNAMOATWJIQGLGRLLRAGZMVCGSDLZMLVWTLVNJXDFUSFGP");
    msg.rssi = 0.18187141117363215;
    msg.integrity = 14404U;

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
    msg.setTimeStamp(0.3484415501982919);
    msg.setSource(64620U);
    msg.setSourceEntity(48U);
    msg.setDestination(62215U);
    msg.setDestinationEntity(53U);
    msg.req_id = 63004U;
    msg.destination.assign("WSUSRVWROZCTBCQNUBYAFRAAZVSKJBGDQOLHMUHHHXCTPEAFWAFBJYKLAIRWFPGVNSOUZULSZMZRJEPNBQYRDGYEMHKPKLCHLFZCUVTIMSQBTXBLXHHXVTPMNJFBEXTOSAKINCDUOXVUGJQTEPYOIFNORQNWGEQNLDCKMOXDWISHQGCKQFF");
    msg.timeout = 0.8985560017020039;
    msg.range = 0.33546278697270926;
    msg.type = 223U;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.9968489347537348;
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
    msg.setTimeStamp(0.38618536443122464);
    msg.setSource(26343U);
    msg.setSourceEntity(125U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(184U);
    msg.req_id = 9271U;
    msg.destination.assign("ZDGTXZXBBSTQJGFTDMATCWJRJILZIGNWMTNSVNOQWXUJLZPNWSQCM");
    msg.timeout = 0.34124363352710185;
    msg.range = 0.927612251199726;
    msg.type = 201U;
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.8895362261425076;
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
    msg.setTimeStamp(0.6010634979475661);
    msg.setSource(13773U);
    msg.setSourceEntity(238U);
    msg.setDestination(6293U);
    msg.setDestinationEntity(197U);
    msg.req_id = 6085U;
    msg.destination.assign("TETCVXONGJAPMHVKULOJBXEOZSSXTDAZFKWZKAYEDIJLLQKRHHGYJBEVDQXKWHFFPCDAIMSZBFMSUNBUQMOSGXKGXBAHLJPOFGIJLYDMUITKRZRQFISADCKWVLAGSWGWBZVBEARLTXNIDBYUORGNTXTNWVPMOWLJCWCUJOJXSBSRSUEPRCNQIMCQDMPRFJFKDNZEYHYPGY");
    msg.timeout = 0.09285943678034025;
    msg.range = 0.5359973188309533;
    msg.type = 124U;
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("AGUQXLATODCNKIXGRKSCSSDAEUXSFKBPUBPBKYCDRSIFAPN");
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
    msg.setTimeStamp(0.7144675133822557);
    msg.setSource(44599U);
    msg.setSourceEntity(163U);
    msg.setDestination(23392U);
    msg.setDestinationEntity(68U);
    msg.req_id = 21842U;
    msg.type = 169U;
    msg.status = 176U;
    msg.info.assign("TOQYZAPGVFIOPRRDOKRSHLXXKPACCUFGCRKAGJLPB");
    msg.range = 0.19891698202868768;

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
    msg.setTimeStamp(0.9868370215426988);
    msg.setSource(32211U);
    msg.setSourceEntity(84U);
    msg.setDestination(37954U);
    msg.setDestinationEntity(167U);
    msg.req_id = 46763U;
    msg.type = 143U;
    msg.status = 226U;
    msg.info.assign("KGHJJKATCKLZVNCVVIKXNEAGCYHIRMDZAJPHGAHBCBOCIYDFFNYZTEZQJHZBWGHLHHDSAEMMRXWZRJW");
    msg.range = 0.9033198361760211;

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
    msg.setTimeStamp(0.1045074787162984);
    msg.setSource(57437U);
    msg.setSourceEntity(100U);
    msg.setDestination(16487U);
    msg.setDestinationEntity(144U);
    msg.req_id = 62460U;
    msg.type = 17U;
    msg.status = 140U;
    msg.info.assign("YDLUNZHCKPTRDMDINPTPQFMBYRAOTWNKXXSWLOBGOVNYRTSOJLLWUEFJMVPENXYZSPWAJYCSDLQPETIFHRFRHKXGTSOZFWTEGDVSDWIKQUXHBSYQMOQIWHWQLYEUPZGAAVWJPOAKEDUCBCCXKFIKAIIHZFVSYRNFPCDNVVHRHMJZKOIXRLPZGFHEIZQDGMUGMAVOGGUUQTJQNCRBXNCTDUBAZJCWYMKXBLHV");
    msg.range = 0.1380459385609113;

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
    msg.setTimeStamp(0.13693674767984876);
    msg.setSource(48166U);
    msg.setSourceEntity(63U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(58U);
    msg.value = -20439;

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
    msg.setTimeStamp(0.9622387244578581);
    msg.setSource(62452U);
    msg.setSourceEntity(87U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(210U);
    msg.value = 477;

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
    msg.setTimeStamp(0.6768074230870322);
    msg.setSource(33835U);
    msg.setSourceEntity(222U);
    msg.setDestination(22172U);
    msg.setDestinationEntity(231U);
    msg.value = 8794;

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
    msg.setTimeStamp(0.13349374056467245);
    msg.setSource(15025U);
    msg.setSourceEntity(234U);
    msg.setDestination(2534U);
    msg.setDestinationEntity(201U);
    msg.value = 0.648821836392314;

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
    msg.setTimeStamp(0.5703402072082632);
    msg.setSource(24876U);
    msg.setSourceEntity(122U);
    msg.setDestination(49496U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9508136244766455;

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
    msg.setTimeStamp(0.5340300638045246);
    msg.setSource(8284U);
    msg.setSourceEntity(218U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(100U);
    msg.value = 0.45302155037452163;

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
    msg.setTimeStamp(0.7726406218076197);
    msg.setSource(41316U);
    msg.setSourceEntity(178U);
    msg.setDestination(53036U);
    msg.setDestinationEntity(24U);
    msg.value = 0.22475715045785838;

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
    msg.setTimeStamp(0.34342223880123923);
    msg.setSource(7040U);
    msg.setSourceEntity(135U);
    msg.setDestination(30407U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7278071438809188;

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
    msg.setTimeStamp(0.9806654666202897);
    msg.setSource(16540U);
    msg.setSourceEntity(140U);
    msg.setDestination(37735U);
    msg.setDestinationEntity(154U);
    msg.value = 0.41707949899453944;

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
    msg.setTimeStamp(0.6691803910004283);
    msg.setSource(19428U);
    msg.setSourceEntity(28U);
    msg.setDestination(56583U);
    msg.setDestinationEntity(166U);
    msg.validity = 19629U;
    msg.type = 63U;
    msg.utc_year = 6160U;
    msg.utc_month = 141U;
    msg.utc_day = 140U;
    msg.utc_time = 0.4997871429849531;
    msg.lat = 0.6326931913043339;
    msg.lon = 0.21620204826554557;
    msg.height = 0.1952388302869913;
    msg.satellites = 211U;
    msg.cog = 0.47418709392777714;
    msg.sog = 0.09921255943009977;
    msg.hdop = 0.7021112370689311;
    msg.vdop = 0.7756174496821102;
    msg.hacc = 0.25165639418668284;
    msg.vacc = 0.42625183786617993;

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
    msg.setTimeStamp(0.5523426790985528);
    msg.setSource(1454U);
    msg.setSourceEntity(6U);
    msg.setDestination(1811U);
    msg.setDestinationEntity(14U);
    msg.validity = 62218U;
    msg.type = 112U;
    msg.utc_year = 22118U;
    msg.utc_month = 83U;
    msg.utc_day = 4U;
    msg.utc_time = 0.6246154309921916;
    msg.lat = 0.6544798121521497;
    msg.lon = 0.3490024210913476;
    msg.height = 0.6784595936048254;
    msg.satellites = 179U;
    msg.cog = 0.8979619779379103;
    msg.sog = 0.4275394547888297;
    msg.hdop = 0.7083056923848025;
    msg.vdop = 0.44604419182364186;
    msg.hacc = 0.22754069208907912;
    msg.vacc = 0.7382751308807667;

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
    msg.setTimeStamp(0.28136265010727124);
    msg.setSource(36349U);
    msg.setSourceEntity(32U);
    msg.setDestination(11618U);
    msg.setDestinationEntity(95U);
    msg.validity = 46966U;
    msg.type = 125U;
    msg.utc_year = 58854U;
    msg.utc_month = 219U;
    msg.utc_day = 93U;
    msg.utc_time = 0.442790931786075;
    msg.lat = 0.47676809489245076;
    msg.lon = 0.023074349097490843;
    msg.height = 0.6902040805628589;
    msg.satellites = 128U;
    msg.cog = 0.49067660212109243;
    msg.sog = 0.8199208089111769;
    msg.hdop = 0.9619367150098391;
    msg.vdop = 0.8844240433891671;
    msg.hacc = 0.7896544542856035;
    msg.vacc = 0.0018816784977878642;

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
    msg.setTimeStamp(0.9119747960130633);
    msg.setSource(25487U);
    msg.setSourceEntity(61U);
    msg.setDestination(30655U);
    msg.setDestinationEntity(240U);
    msg.time = 0.3037332194731156;
    msg.phi = 0.6325539408386951;
    msg.theta = 0.4237301250794774;
    msg.psi = 0.9188732325351978;
    msg.psi_magnetic = 0.46352431028118235;

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
    msg.setTimeStamp(0.010588814538441294);
    msg.setSource(19987U);
    msg.setSourceEntity(59U);
    msg.setDestination(713U);
    msg.setDestinationEntity(90U);
    msg.time = 0.8079439535968306;
    msg.phi = 0.6712226294564646;
    msg.theta = 0.9850643408130486;
    msg.psi = 0.05941811060496127;
    msg.psi_magnetic = 0.8990293758913618;

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
    msg.setTimeStamp(0.6918790494819081);
    msg.setSource(58838U);
    msg.setSourceEntity(214U);
    msg.setDestination(13389U);
    msg.setDestinationEntity(171U);
    msg.time = 0.7242138560162836;
    msg.phi = 0.9363268408403326;
    msg.theta = 0.21303951141614075;
    msg.psi = 0.06277475642247332;
    msg.psi_magnetic = 0.7924958882832182;

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
    msg.setTimeStamp(0.20253077288924837);
    msg.setSource(4880U);
    msg.setSourceEntity(226U);
    msg.setDestination(33596U);
    msg.setDestinationEntity(42U);
    msg.time = 0.2215901079725764;
    msg.x = 0.644427638960514;
    msg.y = 0.5301591186413566;
    msg.z = 0.6766714595045272;
    msg.timestep = 0.6739437782575338;

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
    msg.setTimeStamp(0.6941447265345916);
    msg.setSource(61434U);
    msg.setSourceEntity(75U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(162U);
    msg.time = 0.11482167008260258;
    msg.x = 0.9545804151235339;
    msg.y = 0.6308308156799881;
    msg.z = 0.36355940235129525;
    msg.timestep = 0.5757229528165043;

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
    msg.setTimeStamp(0.37682532194277696);
    msg.setSource(16788U);
    msg.setSourceEntity(108U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(86U);
    msg.time = 0.44505134365626253;
    msg.x = 0.6711765163717703;
    msg.y = 0.27125149836106166;
    msg.z = 0.5583925729004648;
    msg.timestep = 0.5557695966247383;

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
    msg.setTimeStamp(0.66981255193645);
    msg.setSource(56206U);
    msg.setSourceEntity(243U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(118U);
    msg.time = 0.8041380256157632;
    msg.x = 0.7622974270577383;
    msg.y = 0.3837750285001169;
    msg.z = 0.14076297604383103;

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
    msg.setTimeStamp(0.6810371922725372);
    msg.setSource(36618U);
    msg.setSourceEntity(42U);
    msg.setDestination(24806U);
    msg.setDestinationEntity(37U);
    msg.time = 0.17487379078347975;
    msg.x = 0.2392447460391265;
    msg.y = 0.8491262349734682;
    msg.z = 0.015153286039412683;

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
    msg.setTimeStamp(0.13138479979504247);
    msg.setSource(1380U);
    msg.setSourceEntity(24U);
    msg.setDestination(8853U);
    msg.setDestinationEntity(204U);
    msg.time = 0.7662140612723072;
    msg.x = 0.5828513051853066;
    msg.y = 0.7846841857335021;
    msg.z = 0.012470341856911205;

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
    msg.setTimeStamp(0.7017031348421405);
    msg.setSource(61207U);
    msg.setSourceEntity(31U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(217U);
    msg.time = 0.7819986913121012;
    msg.x = 0.7401590082295592;
    msg.y = 0.21918090597778184;
    msg.z = 0.07469352711550681;

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
    msg.setTimeStamp(0.22932713774521607);
    msg.setSource(64561U);
    msg.setSourceEntity(176U);
    msg.setDestination(31336U);
    msg.setDestinationEntity(22U);
    msg.time = 0.9477744825880599;
    msg.x = 0.044191325431472195;
    msg.y = 0.14963392167481582;
    msg.z = 0.7738047687778133;

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
    msg.setTimeStamp(0.7538619962278438);
    msg.setSource(8177U);
    msg.setSourceEntity(110U);
    msg.setDestination(49772U);
    msg.setDestinationEntity(181U);
    msg.time = 0.8655813625985942;
    msg.x = 0.8400886762578781;
    msg.y = 0.13434008379796636;
    msg.z = 0.33467389969409655;

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
    msg.setTimeStamp(0.5972625133265421);
    msg.setSource(17168U);
    msg.setSourceEntity(86U);
    msg.setDestination(39948U);
    msg.setDestinationEntity(84U);
    msg.time = 0.7807360719203247;
    msg.x = 0.030086595239085856;
    msg.y = 0.2184641280541425;
    msg.z = 0.07015899465569109;

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
    msg.setTimeStamp(0.9428221740130318);
    msg.setSource(41221U);
    msg.setSourceEntity(93U);
    msg.setDestination(45630U);
    msg.setDestinationEntity(91U);
    msg.time = 0.5553033417506961;
    msg.x = 0.9172373669346247;
    msg.y = 0.32109809978837633;
    msg.z = 0.1354025616424075;

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
    msg.setTimeStamp(0.7386475248174165);
    msg.setSource(34877U);
    msg.setSourceEntity(162U);
    msg.setDestination(24820U);
    msg.setDestinationEntity(247U);
    msg.time = 0.7933293193108725;
    msg.x = 0.8384632887233997;
    msg.y = 0.04833036739487728;
    msg.z = 0.16308992098731823;

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
    msg.setTimeStamp(0.3750544991155672);
    msg.setSource(56831U);
    msg.setSourceEntity(180U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(28U);
    msg.validity = 208U;
    msg.x = 0.5977622677600635;
    msg.y = 0.3737677754303852;
    msg.z = 0.1865632941749258;

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
    msg.setTimeStamp(0.3639827771318086);
    msg.setSource(12804U);
    msg.setSourceEntity(92U);
    msg.setDestination(25349U);
    msg.setDestinationEntity(60U);
    msg.validity = 77U;
    msg.x = 0.48567624741213566;
    msg.y = 0.4027298324706742;
    msg.z = 0.15877968240754092;

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
    msg.setTimeStamp(0.018062265134192068);
    msg.setSource(4754U);
    msg.setSourceEntity(194U);
    msg.setDestination(6786U);
    msg.setDestinationEntity(41U);
    msg.validity = 208U;
    msg.x = 0.9359324842136825;
    msg.y = 0.29373377576705684;
    msg.z = 0.8254360316636664;

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
    msg.setTimeStamp(0.9704070131509932);
    msg.setSource(41569U);
    msg.setSourceEntity(155U);
    msg.setDestination(45356U);
    msg.setDestinationEntity(84U);
    msg.validity = 40U;
    msg.x = 0.2277240322648718;
    msg.y = 0.5169478205159749;
    msg.z = 0.11561492058385348;

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
    msg.setTimeStamp(0.5146336679370811);
    msg.setSource(28877U);
    msg.setSourceEntity(163U);
    msg.setDestination(56948U);
    msg.setDestinationEntity(217U);
    msg.validity = 91U;
    msg.x = 0.4190858357586762;
    msg.y = 0.7199684843724315;
    msg.z = 0.8812955109632871;

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
    msg.setTimeStamp(0.21073029074393979);
    msg.setSource(56529U);
    msg.setSourceEntity(214U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(172U);
    msg.validity = 20U;
    msg.x = 0.04014509308042924;
    msg.y = 0.8463657956434404;
    msg.z = 0.9894465767605329;

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
    msg.setTimeStamp(0.9847450280343667);
    msg.setSource(48453U);
    msg.setSourceEntity(4U);
    msg.setDestination(13971U);
    msg.setDestinationEntity(211U);
    msg.time = 0.47593195890783735;
    msg.x = 0.08966814623528918;
    msg.y = 0.1358184460178714;
    msg.z = 0.7084304619362383;

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
    msg.setTimeStamp(0.4112794806490624);
    msg.setSource(2152U);
    msg.setSourceEntity(184U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(247U);
    msg.time = 0.527982545183649;
    msg.x = 0.8069087557023212;
    msg.y = 0.6945425542878451;
    msg.z = 0.8556091175131271;

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
    msg.setTimeStamp(0.8769088441163805);
    msg.setSource(11668U);
    msg.setSourceEntity(197U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(78U);
    msg.time = 0.8658357853293104;
    msg.x = 0.37965514752490404;
    msg.y = 0.8961300804897453;
    msg.z = 0.33054814977075153;

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
    msg.setTimeStamp(0.4779458857502482);
    msg.setSource(27481U);
    msg.setSourceEntity(14U);
    msg.setDestination(40782U);
    msg.setDestinationEntity(191U);
    msg.validity = 131U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4186095461842101;
    tmp_msg_0.y = 0.5415255197007783;
    tmp_msg_0.z = 0.417710383742929;
    tmp_msg_0.phi = 0.32823427351651013;
    tmp_msg_0.theta = 0.07426805663830827;
    tmp_msg_0.psi = 0.5934844752416218;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7392472094820545;

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
    msg.setTimeStamp(0.8735250602829153);
    msg.setSource(46602U);
    msg.setSourceEntity(199U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(220U);
    msg.validity = 248U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3955594601067991;
    tmp_msg_0.beam_height = 0.410010765091237;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.5576523791485838;

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
    msg.setTimeStamp(0.21264994339504872);
    msg.setSource(23637U);
    msg.setSourceEntity(99U);
    msg.setDestination(16275U);
    msg.setDestinationEntity(64U);
    msg.validity = 34U;
    msg.value = 0.22679003873041303;

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
    msg.setTimeStamp(0.7350436715603416);
    msg.setSource(37790U);
    msg.setSourceEntity(180U);
    msg.setDestination(32562U);
    msg.setDestinationEntity(8U);
    msg.value = 0.08879694889953438;

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
    msg.setTimeStamp(0.7632736437218599);
    msg.setSource(33051U);
    msg.setSourceEntity(202U);
    msg.setDestination(31606U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6619239761782127;

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
    msg.setTimeStamp(0.32639984592975535);
    msg.setSource(9036U);
    msg.setSourceEntity(134U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(229U);
    msg.value = 0.38206027039913704;

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
    msg.setTimeStamp(0.9768514198961747);
    msg.setSource(17308U);
    msg.setSourceEntity(43U);
    msg.setDestination(59817U);
    msg.setDestinationEntity(121U);
    msg.value = 0.10722955806384926;

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
    msg.setTimeStamp(0.7936626139145022);
    msg.setSource(10592U);
    msg.setSourceEntity(65U);
    msg.setDestination(43567U);
    msg.setDestinationEntity(76U);
    msg.value = 0.43515135859342;

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
    msg.setTimeStamp(0.29485108876208577);
    msg.setSource(56815U);
    msg.setSourceEntity(139U);
    msg.setDestination(3356U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6403710042331214;

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
    msg.setTimeStamp(0.412199136241053);
    msg.setSource(26840U);
    msg.setSourceEntity(10U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9403524597252533;

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
    msg.setTimeStamp(0.6354208783381828);
    msg.setSource(23469U);
    msg.setSourceEntity(13U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(56U);
    msg.value = 0.2494855511098325;

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
    msg.setTimeStamp(0.27972855790268547);
    msg.setSource(57206U);
    msg.setSourceEntity(242U);
    msg.setDestination(29755U);
    msg.setDestinationEntity(231U);
    msg.value = 0.18256148750417378;

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
    msg.setTimeStamp(0.3560781475604117);
    msg.setSource(34828U);
    msg.setSourceEntity(230U);
    msg.setDestination(63695U);
    msg.setDestinationEntity(3U);
    msg.value = 0.7031171694138164;

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
    msg.setTimeStamp(0.6589027928656982);
    msg.setSource(40387U);
    msg.setSourceEntity(244U);
    msg.setDestination(24768U);
    msg.setDestinationEntity(215U);
    msg.value = 0.9056130398935707;

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
    msg.setTimeStamp(0.040380634267628945);
    msg.setSource(22970U);
    msg.setSourceEntity(231U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(237U);
    msg.value = 0.17898757083643224;

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
    msg.setTimeStamp(0.48924803966608876);
    msg.setSource(52729U);
    msg.setSourceEntity(217U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(55U);
    msg.value = 0.1933502888052302;

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
    msg.setTimeStamp(0.1477724499669426);
    msg.setSource(51147U);
    msg.setSourceEntity(82U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(35U);
    msg.value = 0.41370653469034036;

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
    msg.setTimeStamp(0.2718718417876944);
    msg.setSource(63298U);
    msg.setSourceEntity(214U);
    msg.setDestination(5257U);
    msg.setDestinationEntity(125U);
    msg.value = 0.42901815481338657;

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
    msg.setTimeStamp(0.5608964678484855);
    msg.setSource(57489U);
    msg.setSourceEntity(97U);
    msg.setDestination(52524U);
    msg.setDestinationEntity(228U);
    msg.value = 0.5180711988357589;

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
    msg.setTimeStamp(0.47512331134133245);
    msg.setSource(8147U);
    msg.setSourceEntity(34U);
    msg.setDestination(55841U);
    msg.setDestinationEntity(42U);
    msg.value = 0.9440468844219053;

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
    msg.setTimeStamp(0.1187551669552388);
    msg.setSource(6751U);
    msg.setSourceEntity(49U);
    msg.setDestination(37367U);
    msg.setDestinationEntity(200U);
    msg.value = 0.45563016615533924;

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
    msg.setTimeStamp(0.8740336943932294);
    msg.setSource(10418U);
    msg.setSourceEntity(104U);
    msg.setDestination(48316U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9864726629578899;

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
    msg.setTimeStamp(0.6008141627155871);
    msg.setSource(50872U);
    msg.setSourceEntity(4U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7741504415906462;

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
    msg.setTimeStamp(0.38302199508446866);
    msg.setSource(50573U);
    msg.setSourceEntity(65U);
    msg.setDestination(37753U);
    msg.setDestinationEntity(28U);
    msg.value = 0.11146846673554678;

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
    msg.setTimeStamp(0.16480237123513353);
    msg.setSource(36097U);
    msg.setSourceEntity(102U);
    msg.setDestination(54341U);
    msg.setDestinationEntity(148U);
    msg.value = 0.8163791178985311;

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
    msg.setTimeStamp(0.9047768152087847);
    msg.setSource(52093U);
    msg.setSourceEntity(14U);
    msg.setDestination(46825U);
    msg.setDestinationEntity(20U);
    msg.value = 0.655052240225735;

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
    msg.setTimeStamp(0.24192116427146193);
    msg.setSource(26421U);
    msg.setSourceEntity(54U);
    msg.setDestination(40767U);
    msg.setDestinationEntity(99U);
    msg.value = 0.2919594087815761;

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
    msg.setTimeStamp(0.31574182802106265);
    msg.setSource(27384U);
    msg.setSourceEntity(246U);
    msg.setDestination(56119U);
    msg.setDestinationEntity(225U);
    msg.direction = 0.13347758009589883;
    msg.speed = 0.5935752241772416;
    msg.turbulence = 0.8169273180348021;

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
    msg.setTimeStamp(0.826596468777429);
    msg.setSource(6702U);
    msg.setSourceEntity(185U);
    msg.setDestination(9654U);
    msg.setDestinationEntity(19U);
    msg.direction = 0.13884202256014977;
    msg.speed = 0.1537116552747212;
    msg.turbulence = 0.4047907956712151;

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
    msg.setTimeStamp(0.6502696694760141);
    msg.setSource(53985U);
    msg.setSourceEntity(191U);
    msg.setDestination(13323U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.05226063931453362;
    msg.speed = 0.46060453836276305;
    msg.turbulence = 0.5184831257266496;

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
    msg.setTimeStamp(0.5925557341042996);
    msg.setSource(19268U);
    msg.setSourceEntity(182U);
    msg.setDestination(21130U);
    msg.setDestinationEntity(199U);
    msg.value = 0.6390002376769033;

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
    msg.setTimeStamp(0.6439368375763836);
    msg.setSource(25243U);
    msg.setSourceEntity(140U);
    msg.setDestination(11879U);
    msg.setDestinationEntity(10U);
    msg.value = 0.36881022080910664;

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
    msg.setTimeStamp(0.7220534975935272);
    msg.setSource(48402U);
    msg.setSourceEntity(44U);
    msg.setDestination(43244U);
    msg.setDestinationEntity(151U);
    msg.value = 0.089615836702586;

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
    msg.setTimeStamp(0.37983335059800727);
    msg.setSource(2119U);
    msg.setSourceEntity(54U);
    msg.setDestination(15028U);
    msg.setDestinationEntity(7U);
    msg.value.assign("CNAOVEDEJODBPMZRQXPVAJNJVQBJIIFMWVOXYTNGLUODPLRTYEWAQRUDFSMFSODCWPCCUQAIAINWVGWRFKZYELSHKUMDXSLI");

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
    msg.setTimeStamp(0.33997317606285216);
    msg.setSource(42101U);
    msg.setSourceEntity(201U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(230U);
    msg.value.assign("WSKPLNPRAXWGMVFERCVCGQPWAQIEFVERPZSTBJTFMMYAJBCSSBYCCTPUSSBZKDVDBZTJ");

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
    msg.setTimeStamp(0.34014817441674616);
    msg.setSource(52818U);
    msg.setSourceEntity(116U);
    msg.setDestination(14683U);
    msg.setDestinationEntity(114U);
    msg.value.assign("WFXKFSTBDMQIBFVXMNRHAHKMVGFYXQEJMVLGSQHQEIVIYOSEMXCNKLFESFKGTABDNCOCYZZDUKWYBBHTRUVCLPEBQIXTTZTWJXAEINHAGNCVIUXIGZDTROAEPNPBCKPOJQZSSGZAWBJTWCYDAXBIPPLLMRHSKARVHKKCOJXYFPORLNVYLLHCNDMFDMEWZRKLOQWUNUEXAWOQHGMESFJUYPQDOFDSIBNZWIAGRSJMRGTVJCZWZJDQJUTYPYUPV");

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
    msg.setTimeStamp(0.5569439510075427);
    msg.setSource(20708U);
    msg.setSourceEntity(4U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(93U);
    const signed char tmp_msg_0[] = {23, 75, -43, -36, -47, -26, 36, 74, 38, -101, 107, -127, 12, 10, -128, -77, -15, 36, 73, -37, -91, -13, 116, 25, 74, -46, 114, 104, -81, 109, -81, 85, -116, -107, -90, 52, 22, -54, 14, -49, 92, -128, -93, -27, 8, -85, -68, -5, 101, 8, 70, -119, -98, 101, 99, -60, -23, 102, -14, 118, 78, -12, 34, 60, 57, 50, 72, 43, 91, 12, -104, 91, 104, 23, -113, -28, -30, 74, -18, 120, 77, 77, 98, -63, 88, 29, -99, -39, 121, 20, 95, -103, 37, 79, 32, 65, -52, -109, -33, 18, 61, -46, -128, 7, 115, 68, 111, -8, -121, 72, -120, 24, -39, 79, -36, -118, -24, -121, 24, -58, -1, 41, 35, -2};
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
    msg.setTimeStamp(0.5115677985877712);
    msg.setSource(32292U);
    msg.setSourceEntity(136U);
    msg.setDestination(23014U);
    msg.setDestinationEntity(67U);
    const signed char tmp_msg_0[] = {10, 97, 126, -25, 94, 75, 71, 2, 108, 110, -78, -42, 32, -23, 124, 91, 10, 2, 10, 126, 39, 56, 39, 75, -114, -99, 79, 92, -39, 77, 94, -92, 36, -14, -50, -75, 57, 91, -48, -121, -15, 59, -4, 95, -114, -55, 33, -119, 109, 93, -82, 78, -62, -41, 21, -111, 110, -62, 85, 77, -120, -99, -93, 97, -59, -53, -38, -2, 76, -117, -127, -114, -29, -61, -5, 34, 43, 3, -103, 7, -15, 41, 44, -38};
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
    msg.setTimeStamp(0.537714405831373);
    msg.setSource(7336U);
    msg.setSourceEntity(31U);
    msg.setDestination(31633U);
    msg.setDestinationEntity(218U);
    const signed char tmp_msg_0[] = {85, -29, -16, -15, 36, -122, 56, -119, -49, 45, -46, -40, -46, -84, 69, 82, 78, 35, 68, 84, -54, 56, -31, -51, 10, -92, 105, 113, -111, 78, 125, 126, -27, 119, -54, 119, 126, -26, -124, -120, -90, -97, -128, -34, 101, 107, 99, -116, -52, -32, -93, -65, 123, -54, 21, -112, 111, -57, 57, -69, -63, -68, 60, -32, 98, -106, 78, 13, -77, -24, 7, 34, -15, 33, -113, 51, 71, -15, -128, -30, 78, -73, 42, 47, 101, 90, 107, -109, -99, -127, -104, 109, 120, 13, 8, 71, -69, 0, -45, 24, -111, 21, 62, -25, -24, -93, 18, -109, -71, 99, 83, 99, -36, 106, -83, -96, 115, 49, -83, 119, 27, -46, -59, 99, -63, -73, -13, -54, -60, -37};
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
    msg.setTimeStamp(0.16339784297645632);
    msg.setSource(35225U);
    msg.setSourceEntity(58U);
    msg.setDestination(37014U);
    msg.setDestinationEntity(224U);
    msg.value = 0.43488439771208987;

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
    msg.setTimeStamp(0.8368986651180074);
    msg.setSource(56288U);
    msg.setSourceEntity(61U);
    msg.setDestination(50817U);
    msg.setDestinationEntity(23U);
    msg.value = 0.7075765483867824;

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
    msg.setTimeStamp(0.48491594045105246);
    msg.setSource(61439U);
    msg.setSourceEntity(114U);
    msg.setDestination(12947U);
    msg.setDestinationEntity(57U);
    msg.value = 0.3467592284047609;

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
    msg.setTimeStamp(0.8438170742948756);
    msg.setSource(8609U);
    msg.setSourceEntity(123U);
    msg.setDestination(18334U);
    msg.setDestinationEntity(12U);
    msg.type = 171U;
    msg.frequency = 1954704368U;
    msg.min_range = 29383U;
    msg.max_range = 40309U;
    msg.bits_per_point = 119U;
    msg.scale_factor = 0.3072473577932793;
    const signed char tmp_msg_0[] = {-59, -10, -30, 46, 67, -29, 57, -123, 73, 116, -120, -60, -60, 72, 22, 121, -84, -57, 111, 54, -56, 88, -10, 42, 74, 116, -95, -104, 35, 119, -51, 15, -45, -36, -22, -46, 76, 57, 70, 106, 108, -26, -67, 76, 24, -36, -22, -113, 126, 16, 119, -17, -60, -63, -97, 33, 83};
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
    msg.setTimeStamp(0.18097527366337485);
    msg.setSource(2611U);
    msg.setSourceEntity(171U);
    msg.setDestination(47591U);
    msg.setDestinationEntity(3U);
    msg.type = 161U;
    msg.frequency = 2662575071U;
    msg.min_range = 52785U;
    msg.max_range = 32673U;
    msg.bits_per_point = 48U;
    msg.scale_factor = 0.6521846113519908;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8526993866295041;
    tmp_msg_0.beam_height = 0.9804549767961781;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-43, -69, -118, -118, -66, -99, -60, 11, 78, -40, -38, -113, -41, -106, -69, 29, -47};
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
    msg.setTimeStamp(0.48367734107441207);
    msg.setSource(14077U);
    msg.setSourceEntity(119U);
    msg.setDestination(45047U);
    msg.setDestinationEntity(92U);
    msg.type = 252U;
    msg.frequency = 3387413858U;
    msg.min_range = 8070U;
    msg.max_range = 57633U;
    msg.bits_per_point = 18U;
    msg.scale_factor = 0.43645078943385274;
    const signed char tmp_msg_0[] = {119, 28, -83, 31, 114, 123, -52, 98, 26, 79, 10, 101, -22, 66, 64, 83, -20, 23, 54, 82, -94, 109, -114, -58, -15, -17, 59, 97, -123, -98, 109, -103, 16, 86, -15, -114, 108, 45, -101, 2, 117, -78, -87, -121, -41, -51, 100, 114, -94, 77, -30, 47, -26, 44, -42, -33, -76, -61, 99, -36, -123, -97, -76, -107, 42, -21, -9, -60, 122, -112, -124, -100, 48, 24, -8, 2, 40, -13, 95, -32, 28, -3, -15, 77, -112, 56, 98, -49, 31, -34, -4, -67, 96, -15, -31, 29, 6, 89, -73, -42, -100, -12, -25, 88, 97, -51, 50, -99, 64, -9, 82, -106, 31, 103, 89, 83, 19, -27, -9, -127, 57, 7, 103, 56, -58, -72, -122, 74, 46, -28, 117, -86, 18, -118, -66, -27, 83, 13, -92, -49, -116, -50, -17, -102, 43, -50, 57, 63, -17, -57, 56, -65, -78, 79, 43, 54, 53, 37, -54, 0, -48, -35, 63, 13, -47, 19, -55, -74};
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
    msg.setTimeStamp(0.16270283935368612);
    msg.setSource(53682U);
    msg.setSourceEntity(195U);
    msg.setDestination(61316U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.4023466136810573);
    msg.setSource(956U);
    msg.setSourceEntity(2U);
    msg.setDestination(30274U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.933065187807066);
    msg.setSource(41198U);
    msg.setSourceEntity(18U);
    msg.setDestination(47751U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.9165651593117403);
    msg.setSource(11761U);
    msg.setSourceEntity(236U);
    msg.setDestination(54329U);
    msg.setDestinationEntity(147U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.5587459973492626);
    msg.setSource(34071U);
    msg.setSourceEntity(63U);
    msg.setDestination(59239U);
    msg.setDestinationEntity(156U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.4023722451223489);
    msg.setSource(6904U);
    msg.setSourceEntity(56U);
    msg.setDestination(26716U);
    msg.setDestinationEntity(28U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.20370547001046702);
    msg.setSource(43847U);
    msg.setSourceEntity(147U);
    msg.setDestination(29499U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8622735749884677;
    msg.confidence = 0.6252853763900541;
    msg.opmodes.assign("XBJEEAKXBBLJHFEZRIMOMOVAMSYXWWTVHXMO");

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
    msg.setTimeStamp(0.054097423583263304);
    msg.setSource(23733U);
    msg.setSourceEntity(42U);
    msg.setDestination(12207U);
    msg.setDestinationEntity(146U);
    msg.value = 0.9551526980978938;
    msg.confidence = 0.5255160452838161;
    msg.opmodes.assign("YEWQFYDBMQKDIAECKFZSJBCHLIEEPYBQGKCRITVPFWUAVSPIIKJTLYDLNNPZUDOJCMAZZGVSWZVTUWUEVQHVPTGTEOPAOCCMOMKVQDVUBXQYPAMUVTZRMRSTXWNHXABAOTWNWLCRDBEGZYMMVBQDONXZCKNYDBSXUYMISSYBXWXGNQFNGKOJARBHTOWJLHFOULKJFRDFIYEEEGKCXNLAWNJS");

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
    msg.setTimeStamp(0.9362871344675359);
    msg.setSource(49349U);
    msg.setSourceEntity(23U);
    msg.setDestination(47172U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7310118081784195;
    msg.confidence = 0.9854786904073165;
    msg.opmodes.assign("BYNIWVKHROLNIPGOGAPNUKWYQLTDSQWGRZIITPCMLSXHMERKUXIQAAFNQHYTVPDUPYYTXRRMQBDXDNPBEAVXNZJUMFJMEAWJVXYSBIYETBQSLINHJDPEUCCXGWZQGMDORJQFHTDUHAREWCPGTOTICOGZIHPKUBKZLXFOJZKACWLKJWFMRCKVYHZZELFPBVQDSJ");

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
    msg.setTimeStamp(0.7838668203291134);
    msg.setSource(50704U);
    msg.setSourceEntity(157U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(175U);
    msg.itow = 2023779475U;
    msg.lat = 0.40461667376632293;
    msg.lon = 0.9938436300805864;
    msg.height_ell = 0.03278778089505607;
    msg.height_sea = 0.7863558551053248;
    msg.hacc = 0.40686674320192884;
    msg.vacc = 0.285571782586883;
    msg.vel_n = 0.9110895800969383;
    msg.vel_e = 0.7824270873892827;
    msg.vel_d = 0.9304135382985588;
    msg.speed = 0.28746697248135866;
    msg.gspeed = 0.06454880305463984;
    msg.heading = 0.5440246788340843;
    msg.sacc = 0.39077123381775847;
    msg.cacc = 0.5620323928491259;

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
    msg.setTimeStamp(0.1247857197481348);
    msg.setSource(31899U);
    msg.setSourceEntity(153U);
    msg.setDestination(50521U);
    msg.setDestinationEntity(49U);
    msg.itow = 402314366U;
    msg.lat = 0.8519179999674182;
    msg.lon = 0.03592029610141412;
    msg.height_ell = 0.7813752575193128;
    msg.height_sea = 0.5793821870345947;
    msg.hacc = 0.23744369999113912;
    msg.vacc = 0.7475858850022645;
    msg.vel_n = 0.04352342213121452;
    msg.vel_e = 0.7958641474330752;
    msg.vel_d = 0.4610676598826874;
    msg.speed = 0.4883098567089389;
    msg.gspeed = 0.17597533251880482;
    msg.heading = 0.3267017661366678;
    msg.sacc = 0.2374821874309977;
    msg.cacc = 0.11874603812130402;

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
    msg.setTimeStamp(0.6908872553519999);
    msg.setSource(23276U);
    msg.setSourceEntity(220U);
    msg.setDestination(59181U);
    msg.setDestinationEntity(114U);
    msg.itow = 778239446U;
    msg.lat = 0.7081258053255415;
    msg.lon = 0.8250980620753829;
    msg.height_ell = 0.06717668438512792;
    msg.height_sea = 0.12963137751398435;
    msg.hacc = 0.5945558139301758;
    msg.vacc = 0.0028720866604963202;
    msg.vel_n = 0.30261427663035545;
    msg.vel_e = 0.32321474724245713;
    msg.vel_d = 0.47507684856677757;
    msg.speed = 0.5975845928464958;
    msg.gspeed = 0.10487358423688486;
    msg.heading = 0.6342802870344164;
    msg.sacc = 0.35754899175942034;
    msg.cacc = 0.8542160227487118;

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
    msg.setTimeStamp(0.32665830430247345);
    msg.setSource(18885U);
    msg.setSourceEntity(180U);
    msg.setDestination(24548U);
    msg.setDestinationEntity(188U);
    msg.id = 159U;
    msg.value = 0.5782645478738169;

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
    msg.setTimeStamp(0.8353465268672717);
    msg.setSource(31899U);
    msg.setSourceEntity(113U);
    msg.setDestination(26897U);
    msg.setDestinationEntity(212U);
    msg.id = 189U;
    msg.value = 0.2790368938558525;

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
    msg.setTimeStamp(0.5075220868917149);
    msg.setSource(15203U);
    msg.setSourceEntity(135U);
    msg.setDestination(38645U);
    msg.setDestinationEntity(5U);
    msg.id = 179U;
    msg.value = 0.8357769275735779;

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
    msg.setTimeStamp(0.3092825993960795);
    msg.setSource(53416U);
    msg.setSourceEntity(55U);
    msg.setDestination(9701U);
    msg.setDestinationEntity(185U);
    msg.x = 0.38110506838116553;
    msg.y = 0.30276838798959116;
    msg.z = 0.0393875556162514;
    msg.phi = 0.10655974854878558;
    msg.theta = 0.10016567701247803;
    msg.psi = 0.694523268126903;

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
    msg.setTimeStamp(0.8147943445062149);
    msg.setSource(48781U);
    msg.setSourceEntity(156U);
    msg.setDestination(55458U);
    msg.setDestinationEntity(51U);
    msg.x = 0.9587520251169187;
    msg.y = 0.8862719841387888;
    msg.z = 0.8414186200336923;
    msg.phi = 0.4936200227002029;
    msg.theta = 0.4163430537139722;
    msg.psi = 0.9614115677948563;

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
    msg.setTimeStamp(0.38115460879672136);
    msg.setSource(8819U);
    msg.setSourceEntity(188U);
    msg.setDestination(18927U);
    msg.setDestinationEntity(19U);
    msg.x = 0.15598440789565549;
    msg.y = 0.3049967143223222;
    msg.z = 0.5193201232097875;
    msg.phi = 0.06503898409508413;
    msg.theta = 0.33501136276034893;
    msg.psi = 0.9943969513695436;

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
    msg.setTimeStamp(0.759122669549389);
    msg.setSource(28189U);
    msg.setSourceEntity(55U);
    msg.setDestination(18218U);
    msg.setDestinationEntity(206U);
    msg.beam_width = 0.2746780114157521;
    msg.beam_height = 0.5714241820765841;

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
    msg.setTimeStamp(0.21419547110756954);
    msg.setSource(48441U);
    msg.setSourceEntity(136U);
    msg.setDestination(18007U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.8626102425333525;
    msg.beam_height = 0.9699972236121162;

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
    msg.setTimeStamp(0.7365698226191996);
    msg.setSource(36681U);
    msg.setSourceEntity(138U);
    msg.setDestination(21605U);
    msg.setDestinationEntity(174U);
    msg.beam_width = 0.5908458880977756;
    msg.beam_height = 0.7370726980379895;

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
    msg.setTimeStamp(0.010878542752222886);
    msg.setSource(35700U);
    msg.setSourceEntity(155U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(210U);
    msg.sane = 60U;

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
    msg.setTimeStamp(0.6464124518920026);
    msg.setSource(39951U);
    msg.setSourceEntity(15U);
    msg.setDestination(44579U);
    msg.setDestinationEntity(148U);
    msg.sane = 70U;

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
    msg.setTimeStamp(0.06754758046121212);
    msg.setSource(40768U);
    msg.setSourceEntity(188U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(36U);
    msg.sane = 226U;

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
    msg.setTimeStamp(0.35249993365950205);
    msg.setSource(64423U);
    msg.setSourceEntity(64U);
    msg.setDestination(23237U);
    msg.setDestinationEntity(207U);
    msg.value = 0.40455878343108753;

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
    msg.setTimeStamp(0.543675725683789);
    msg.setSource(34718U);
    msg.setSourceEntity(87U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8966006981964503;

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
    msg.setTimeStamp(0.08334985023183439);
    msg.setSource(58850U);
    msg.setSourceEntity(186U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(233U);
    msg.value = 0.03608203039650515;

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
    msg.setTimeStamp(0.20709952468590576);
    msg.setSource(26273U);
    msg.setSourceEntity(0U);
    msg.setDestination(36715U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5853401227970925;

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
    msg.setTimeStamp(0.7930277182976915);
    msg.setSource(16619U);
    msg.setSourceEntity(238U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(185U);
    msg.value = 0.5778652534691578;

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
    msg.setTimeStamp(0.5164944493492679);
    msg.setSource(40168U);
    msg.setSourceEntity(159U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8766536905887738;

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
    msg.setTimeStamp(0.9669674836116886);
    msg.setSource(6425U);
    msg.setSourceEntity(191U);
    msg.setDestination(11512U);
    msg.setDestinationEntity(162U);
    msg.value = 0.00723732777266628;

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
    msg.setTimeStamp(0.7970118929297977);
    msg.setSource(42194U);
    msg.setSourceEntity(166U);
    msg.setDestination(55088U);
    msg.setDestinationEntity(105U);
    msg.value = 0.7295789761556168;

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
    msg.setTimeStamp(0.880636533135103);
    msg.setSource(40421U);
    msg.setSourceEntity(182U);
    msg.setDestination(53882U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7216771552411657;

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
    msg.setTimeStamp(0.5814157012603517);
    msg.setSource(1232U);
    msg.setSourceEntity(240U);
    msg.setDestination(44818U);
    msg.setDestinationEntity(210U);
    msg.value = 0.9366553788567618;

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
    msg.setTimeStamp(0.8447138700783363);
    msg.setSource(10518U);
    msg.setSourceEntity(97U);
    msg.setDestination(17437U);
    msg.setDestinationEntity(203U);
    msg.value = 0.7144091018549568;

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
    msg.setTimeStamp(0.9972522572413678);
    msg.setSource(27038U);
    msg.setSourceEntity(198U);
    msg.setDestination(42751U);
    msg.setDestinationEntity(154U);
    msg.value = 0.31352358957843074;

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
    msg.setTimeStamp(0.04063502152247889);
    msg.setSource(63385U);
    msg.setSourceEntity(29U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(89U);
    msg.value = 0.22782461444933122;

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
    msg.setTimeStamp(0.7174131684630531);
    msg.setSource(21916U);
    msg.setSourceEntity(29U);
    msg.setDestination(39816U);
    msg.setDestinationEntity(172U);
    msg.value = 0.24188543541357732;

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
    msg.setTimeStamp(0.30403954257134136);
    msg.setSource(33078U);
    msg.setSourceEntity(27U);
    msg.setDestination(44094U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8365623603105811;

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
    msg.setTimeStamp(0.5111326507809623);
    msg.setSource(5801U);
    msg.setSourceEntity(104U);
    msg.setDestination(3363U);
    msg.setDestinationEntity(243U);
    msg.value = 0.529771041069212;

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
    msg.setTimeStamp(0.2455112686749681);
    msg.setSource(51878U);
    msg.setSourceEntity(78U);
    msg.setDestination(52075U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8612433630319942;

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
    msg.setTimeStamp(0.008299819046096113);
    msg.setSource(25289U);
    msg.setSourceEntity(168U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6881354145238324;

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
    msg.setTimeStamp(0.9549214724817117);
    msg.setSource(4281U);
    msg.setSourceEntity(16U);
    msg.setDestination(6737U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9739223847729599;

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
    msg.setTimeStamp(0.08474322664047917);
    msg.setSource(54307U);
    msg.setSourceEntity(110U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6425115204850949;

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
    msg.setTimeStamp(0.858601684529663);
    msg.setSource(39458U);
    msg.setSourceEntity(5U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(79U);
    msg.value = 0.558959642899594;

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
    msg.setTimeStamp(0.40406835850792466);
    msg.setSource(48362U);
    msg.setSourceEntity(207U);
    msg.setDestination(55599U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8722935451391299;

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
    msg.setTimeStamp(0.4435450641411811);
    msg.setSource(34603U);
    msg.setSourceEntity(164U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8604282844199013;

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
    msg.setTimeStamp(0.6304457653299771);
    msg.setSource(50574U);
    msg.setSourceEntity(14U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(243U);
    msg.value = 0.26980555012212004;

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
    msg.setTimeStamp(0.9899072730948921);
    msg.setSource(42346U);
    msg.setSourceEntity(194U);
    msg.setDestination(45554U);
    msg.setDestinationEntity(34U);
    msg.validity = 24970U;
    msg.type = 208U;
    msg.tow = 2187619653U;
    msg.base_lat = 0.14078841373584083;
    msg.base_lon = 0.9962108120560325;
    msg.base_height = 0.9952478836954907;
    msg.n = 0.4503833539537597;
    msg.e = 0.8809823738435459;
    msg.d = 0.8082250747896617;
    msg.v_n = 0.10162695493645069;
    msg.v_e = 0.7756159829737048;
    msg.v_d = 0.20373725503755913;
    msg.satellites = 78U;
    msg.iar_hyp = 1768U;
    msg.iar_ratio = 0.29391755318828106;

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
    msg.setTimeStamp(0.9513181510657488);
    msg.setSource(64566U);
    msg.setSourceEntity(136U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(79U);
    msg.validity = 45270U;
    msg.type = 19U;
    msg.tow = 3044676647U;
    msg.base_lat = 0.17021015999799272;
    msg.base_lon = 0.28673132957882086;
    msg.base_height = 0.01690690635249903;
    msg.n = 0.32959618799294266;
    msg.e = 0.3865953249742684;
    msg.d = 0.5121434782095783;
    msg.v_n = 0.4082960152380144;
    msg.v_e = 0.7129250860978925;
    msg.v_d = 0.7744311877611916;
    msg.satellites = 252U;
    msg.iar_hyp = 13915U;
    msg.iar_ratio = 0.22024686539477567;

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
    msg.setTimeStamp(0.2052014245521);
    msg.setSource(44726U);
    msg.setSourceEntity(159U);
    msg.setDestination(32333U);
    msg.setDestinationEntity(14U);
    msg.validity = 43131U;
    msg.type = 134U;
    msg.tow = 4248078172U;
    msg.base_lat = 0.4449233599889969;
    msg.base_lon = 0.9751457455827188;
    msg.base_height = 0.9539330395367899;
    msg.n = 0.17098503921475083;
    msg.e = 0.7478896995367089;
    msg.d = 0.36224767357575716;
    msg.v_n = 0.8131681569594966;
    msg.v_e = 0.9165895464748955;
    msg.v_d = 0.16487322182168818;
    msg.satellites = 100U;
    msg.iar_hyp = 4203U;
    msg.iar_ratio = 0.377093897006212;

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
    msg.setTimeStamp(0.7266042174429745);
    msg.setSource(22285U);
    msg.setSourceEntity(166U);
    msg.setDestination(12340U);
    msg.setDestinationEntity(7U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7206360059989813;
    tmp_msg_0.lon = 0.9384075946222371;
    tmp_msg_0.height = 0.9017657350309136;
    tmp_msg_0.x = 0.9728717801512469;
    tmp_msg_0.y = 0.9667181114035611;
    tmp_msg_0.z = 0.853236004174084;
    tmp_msg_0.phi = 0.6072105909883293;
    tmp_msg_0.theta = 0.1402055334492155;
    tmp_msg_0.psi = 0.7191797137859615;
    tmp_msg_0.u = 0.22211911677965201;
    tmp_msg_0.v = 0.8421230358646329;
    tmp_msg_0.w = 0.6115612391009732;
    tmp_msg_0.vx = 0.8584925075613514;
    tmp_msg_0.vy = 0.2419322224324495;
    tmp_msg_0.vz = 0.4145148593676493;
    tmp_msg_0.p = 0.7793681852327393;
    tmp_msg_0.q = 0.23579840658678863;
    tmp_msg_0.r = 0.22856803870870257;
    tmp_msg_0.depth = 0.8159910726534672;
    tmp_msg_0.alt = 0.45499152728665393;
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
    msg.setTimeStamp(0.6845024086977556);
    msg.setSource(8149U);
    msg.setSourceEntity(43U);
    msg.setDestination(32455U);
    msg.setDestinationEntity(100U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.33818688311794665;
    tmp_msg_0.lon = 0.1840200638987134;
    tmp_msg_0.height = 0.12470061235108998;
    tmp_msg_0.x = 0.6300096041600988;
    tmp_msg_0.y = 0.6091448016257318;
    tmp_msg_0.z = 0.40652356763167896;
    tmp_msg_0.phi = 0.8355582242334085;
    tmp_msg_0.theta = 0.8606975812707639;
    tmp_msg_0.psi = 0.42487162340121254;
    tmp_msg_0.u = 0.7843563896155689;
    tmp_msg_0.v = 0.17773824115286352;
    tmp_msg_0.w = 0.25157797111893;
    tmp_msg_0.vx = 0.5565732404811002;
    tmp_msg_0.vy = 0.4233563777624;
    tmp_msg_0.vz = 0.9922183302106435;
    tmp_msg_0.p = 0.7963278829873123;
    tmp_msg_0.q = 0.6629537588154337;
    tmp_msg_0.r = 0.2192727623247377;
    tmp_msg_0.depth = 0.030248712241413345;
    tmp_msg_0.alt = 0.023209045948517804;
    msg.state.set(tmp_msg_0);
    msg.type = 168U;

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
    msg.setTimeStamp(0.5063671672831294);
    msg.setSource(55281U);
    msg.setSourceEntity(254U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(167U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.22698296956121744;
    tmp_msg_0.lon = 0.9436607218198693;
    tmp_msg_0.height = 0.11748454216438908;
    tmp_msg_0.x = 0.7161111881758968;
    tmp_msg_0.y = 0.1686266006174757;
    tmp_msg_0.z = 0.42396621688727554;
    tmp_msg_0.phi = 0.49052176479438314;
    tmp_msg_0.theta = 0.5715906608083;
    tmp_msg_0.psi = 0.5941013331054806;
    tmp_msg_0.u = 0.8044076964220709;
    tmp_msg_0.v = 0.2524866689707722;
    tmp_msg_0.w = 0.24258123999900605;
    tmp_msg_0.vx = 0.006091660588940728;
    tmp_msg_0.vy = 0.49386649221294165;
    tmp_msg_0.vz = 0.5888900671763477;
    tmp_msg_0.p = 0.24012632012656165;
    tmp_msg_0.q = 0.20121964721938612;
    tmp_msg_0.r = 0.029207956965993875;
    tmp_msg_0.depth = 0.9885479382550258;
    tmp_msg_0.alt = 0.17625074163384824;
    msg.state.set(tmp_msg_0);
    msg.type = 122U;

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
    msg.setTimeStamp(0.7062051668629288);
    msg.setSource(23980U);
    msg.setSourceEntity(93U);
    msg.setDestination(20157U);
    msg.setDestinationEntity(54U);
    msg.value = 0.11020188443283718;

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
    msg.setTimeStamp(0.08635727186818087);
    msg.setSource(19170U);
    msg.setSourceEntity(164U);
    msg.setDestination(51738U);
    msg.setDestinationEntity(202U);
    msg.value = 0.55457074344591;

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
    msg.setTimeStamp(0.001446347321876984);
    msg.setSource(52871U);
    msg.setSourceEntity(66U);
    msg.setDestination(8030U);
    msg.setDestinationEntity(148U);
    msg.value = 0.600438768600878;

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
    msg.setTimeStamp(0.9715655562083266);
    msg.setSource(13012U);
    msg.setSourceEntity(72U);
    msg.setDestination(8972U);
    msg.setDestinationEntity(104U);
    msg.value = 0.4547607979375231;

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
    msg.setTimeStamp(0.010647978022081506);
    msg.setSource(49184U);
    msg.setSourceEntity(48U);
    msg.setDestination(38878U);
    msg.setDestinationEntity(208U);
    msg.value = 0.36676342361817027;

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
    msg.setTimeStamp(0.022222963755299863);
    msg.setSource(23072U);
    msg.setSourceEntity(139U);
    msg.setDestination(20642U);
    msg.setDestinationEntity(125U);
    msg.value = 0.6646062332943861;

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
    msg.setTimeStamp(0.029937305976549755);
    msg.setSource(61979U);
    msg.setSourceEntity(27U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(126U);
    msg.value = 0.8967761874489285;

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
    msg.setTimeStamp(0.8674023765361979);
    msg.setSource(34497U);
    msg.setSourceEntity(73U);
    msg.setDestination(14903U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5190307113031783;

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
    msg.setTimeStamp(0.9529603694540018);
    msg.setSource(35583U);
    msg.setSourceEntity(246U);
    msg.setDestination(36767U);
    msg.setDestinationEntity(169U);
    msg.value = 0.0863897679176645;

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
    msg.setTimeStamp(0.36058418019274685);
    msg.setSource(52963U);
    msg.setSourceEntity(109U);
    msg.setDestination(63149U);
    msg.setDestinationEntity(235U);
    msg.value = 0.33537217168450595;

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
    msg.setTimeStamp(0.19996662972542623);
    msg.setSource(23600U);
    msg.setSourceEntity(136U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6506185902168186;

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
    msg.setTimeStamp(0.8770776278715691);
    msg.setSource(12538U);
    msg.setSourceEntity(120U);
    msg.setDestination(6163U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5691311746176017;

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
    msg.setTimeStamp(0.22262333077900998);
    msg.setSource(1687U);
    msg.setSourceEntity(252U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(102U);
    msg.value = 0.3758644688489696;

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
    msg.setTimeStamp(0.1425768282981984);
    msg.setSource(53574U);
    msg.setSourceEntity(218U);
    msg.setDestination(1366U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5036590446790474;

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
    msg.setTimeStamp(0.002022130556611823);
    msg.setSource(15170U);
    msg.setSourceEntity(82U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(161U);
    msg.value = 0.8161071727938073;

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
    msg.setTimeStamp(0.4415757873630367);
    msg.setSource(19805U);
    msg.setSourceEntity(114U);
    msg.setDestination(41750U);
    msg.setDestinationEntity(153U);
    msg.id = 87U;
    msg.zoom = 197U;
    msg.action = 40U;

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
    msg.setTimeStamp(0.33104110245050866);
    msg.setSource(40859U);
    msg.setSourceEntity(228U);
    msg.setDestination(61490U);
    msg.setDestinationEntity(111U);
    msg.id = 233U;
    msg.zoom = 182U;
    msg.action = 64U;

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
    msg.setTimeStamp(0.4425773156799392);
    msg.setSource(46280U);
    msg.setSourceEntity(136U);
    msg.setDestination(28818U);
    msg.setDestinationEntity(108U);
    msg.id = 205U;
    msg.zoom = 139U;
    msg.action = 57U;

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
    msg.setTimeStamp(0.09336028735000601);
    msg.setSource(31632U);
    msg.setSourceEntity(94U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(37U);
    msg.id = 25U;
    msg.value = 0.6368835156051156;

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
    msg.setTimeStamp(0.9119725589209174);
    msg.setSource(25718U);
    msg.setSourceEntity(187U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(54U);
    msg.id = 238U;
    msg.value = 0.2215306729325135;

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
    msg.setTimeStamp(0.9554574953482274);
    msg.setSource(60658U);
    msg.setSourceEntity(238U);
    msg.setDestination(29399U);
    msg.setDestinationEntity(61U);
    msg.id = 176U;
    msg.value = 0.8275166675580973;

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
    msg.setTimeStamp(0.2916429723956411);
    msg.setSource(28691U);
    msg.setSourceEntity(140U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(100U);
    msg.id = 84U;
    msg.value = 0.36237445700051474;

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
    msg.setTimeStamp(0.2424291570369309);
    msg.setSource(2267U);
    msg.setSourceEntity(232U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(168U);
    msg.id = 42U;
    msg.value = 0.5558794198183824;

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
    msg.setTimeStamp(0.826621684843077);
    msg.setSource(50065U);
    msg.setSourceEntity(166U);
    msg.setDestination(13299U);
    msg.setDestinationEntity(160U);
    msg.id = 24U;
    msg.value = 0.8184451113102651;

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
    msg.setTimeStamp(0.23024456890520917);
    msg.setSource(41270U);
    msg.setSourceEntity(25U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(113U);
    msg.id = 237U;
    msg.angle = 0.5069841725189348;

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
    msg.setTimeStamp(0.3424089401230297);
    msg.setSource(7196U);
    msg.setSourceEntity(187U);
    msg.setDestination(12360U);
    msg.setDestinationEntity(166U);
    msg.id = 185U;
    msg.angle = 0.6794145600443209;

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
    msg.setTimeStamp(0.06705519965336759);
    msg.setSource(1067U);
    msg.setSourceEntity(82U);
    msg.setDestination(15203U);
    msg.setDestinationEntity(72U);
    msg.id = 253U;
    msg.angle = 0.6694897429405294;

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
    msg.setTimeStamp(0.1849591244834522);
    msg.setSource(60499U);
    msg.setSourceEntity(228U);
    msg.setDestination(17272U);
    msg.setDestinationEntity(171U);
    msg.op = 182U;
    msg.actions.assign("SYTDXJRIRUMRUAGBHSVSAGPITYUSLUEZEQRTAMUHETEGWHOG");

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
    msg.setTimeStamp(0.25088953655213164);
    msg.setSource(59134U);
    msg.setSourceEntity(128U);
    msg.setDestination(54925U);
    msg.setDestinationEntity(166U);
    msg.op = 79U;
    msg.actions.assign("BDCLHONRFYLRJBDBUKYPDGVFFTRHFUEYRODAGVWAPEZXAJOXBMVHJNWTVKGJSSGGEWOHNTIXCEJGKVLRPRBP");

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
    msg.setTimeStamp(0.8704527006228335);
    msg.setSource(6635U);
    msg.setSourceEntity(12U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(137U);
    msg.op = 185U;
    msg.actions.assign("OUSPIFCKGKJVJDDBIHPCSVRUBRXNMXZVUGQPUMZQIWLOCRBKQESRTFMXBAUBTFBSMPAYVLJPLATLXCVTUDWJBRCECJJXSJBNWOHTN");

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
    msg.setTimeStamp(0.6730569132458528);
    msg.setSource(20612U);
    msg.setSourceEntity(22U);
    msg.setDestination(49513U);
    msg.setDestinationEntity(178U);
    msg.actions.assign("IZBYUNRSJUVKOIFMGNLHDTXQTJYDZNCWIBSAQOCOLHHLGORCDCRBXQDCVWXDSPCA");

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
    msg.setTimeStamp(0.5255245504739334);
    msg.setSource(63624U);
    msg.setSourceEntity(15U);
    msg.setDestination(49729U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("HPJYKEYNNRCDSNCEYIWFNPHAJENKUEGKBBIOQQCVROGRBHSGAJRDRQABMOSTANIUUOZEVZTLXHGTZBOSVJSSOFMZXMJVEYUBGFYFKOESXILVTNFYLGDJXMWHDUIMCGTHUZGBIKLWARKWBPVVSSYCCJGDZYHDCPLANEQNWPQPACLQRXHWXUFKVXTYTOPLLBVMYCOQKLBRLFZMJQ");

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
    msg.setTimeStamp(0.29958011730606127);
    msg.setSource(27878U);
    msg.setSourceEntity(237U);
    msg.setDestination(46671U);
    msg.setDestinationEntity(223U);
    msg.actions.assign("TAITLPEGMSMLVQOKDNHIHOKTWWZLNTVERFNPTSMYMIXQBYGBWRISOKZSWSVCXNYLYPHSNGQVTGLRHXAPFFWTJFEFAOXDMBDWXCULNPGVVGUHHEZJWDLOECFOKRMOBOJKQIAUZPTSMCCKJXQFRDUHXAFHEGTECCKGPDYYHORJAYLNPFUAADDZRZSHKUGFZNPWBBLNJOJCERIMWYVDJAZXQQEIYZUUAERNCRBVTBYZBXCQUQIXVQJ");

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
    msg.setTimeStamp(0.09694156434955736);
    msg.setSource(48461U);
    msg.setSourceEntity(214U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(77U);
    msg.button = 210U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.9034480234685437);
    msg.setSource(43006U);
    msg.setSourceEntity(22U);
    msg.setDestination(43879U);
    msg.setDestinationEntity(15U);
    msg.button = 49U;
    msg.value = 231U;

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
    msg.setTimeStamp(0.670128156090406);
    msg.setSource(26967U);
    msg.setSourceEntity(152U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(195U);
    msg.button = 219U;
    msg.value = 206U;

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
    msg.setTimeStamp(0.5994786293396518);
    msg.setSource(6372U);
    msg.setSourceEntity(40U);
    msg.setDestination(44621U);
    msg.setDestinationEntity(101U);
    msg.op = 45U;
    msg.text.assign("FNHRWTUUWXPFRCDHIUYSCSQAODYCARZEVLEC");

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
    msg.setTimeStamp(0.6962730438930959);
    msg.setSource(30491U);
    msg.setSourceEntity(176U);
    msg.setDestination(40874U);
    msg.setDestinationEntity(73U);
    msg.op = 79U;
    msg.text.assign("WVNMEEKYGRYUXXUWJDJZEBSRKLWWOCPYXSWCPRFLLISBXXQCPYIYXSPHJWKSKUAUHKGQQYUTNKHANYSOAVQLVBBVPELEDCBXCVIMDUTCWYGTXUWRYCVTHYOMMJJPFQCLBSJNFOFBOSLGJDUHHZXIGFJOKWKNHGQTPZNHOLZRQRGZHNVFLTSRCSTJPADAHDIFADMDNABID");

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
    msg.setTimeStamp(0.21040563671636325);
    msg.setSource(46272U);
    msg.setSourceEntity(149U);
    msg.setDestination(5617U);
    msg.setDestinationEntity(50U);
    msg.op = 168U;
    msg.text.assign("UMVYAXAEWNUMRVINJICGVDXEHFDIPZBRETZOYKUHFNBSVQHOULWLOHTWMGHLAWIIHLNSYOUKAESWJPNFLZGXSJZKDFCQCFKVZJMTAKPTCCYIQGETMT");

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
    msg.setTimeStamp(0.8733675211416494);
    msg.setSource(44773U);
    msg.setSourceEntity(64U);
    msg.setDestination(5797U);
    msg.setDestinationEntity(49U);
    msg.op = 192U;
    msg.time_remain = 0.3151193582224958;
    msg.sched_time = 0.2957203182889051;

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
    msg.setTimeStamp(0.1041862826629042);
    msg.setSource(47419U);
    msg.setSourceEntity(153U);
    msg.setDestination(53496U);
    msg.setDestinationEntity(24U);
    msg.op = 187U;
    msg.time_remain = 0.15688928452290518;
    msg.sched_time = 0.34832288859773275;

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
    msg.setTimeStamp(0.28256329509759315);
    msg.setSource(61607U);
    msg.setSourceEntity(235U);
    msg.setDestination(27974U);
    msg.setDestinationEntity(204U);
    msg.op = 231U;
    msg.time_remain = 0.5638242313584315;
    msg.sched_time = 0.14304879500474033;

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
    msg.setTimeStamp(0.7255128407887095);
    msg.setSource(43713U);
    msg.setSourceEntity(208U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(189U);
    msg.name.assign("LDXWNDCKVYIFKWRMROYXLYGEMTRDPYDOKYFBXZCXLZUILLKKFSUSVWCKWQGBYZEHEMFFZLVUDRDOAOHUDMLESEOYZAAIMFUEPCVWEL");
    msg.op = 87U;
    msg.sched_time = 0.17491847778406233;

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
    msg.setTimeStamp(0.37926855289550776);
    msg.setSource(44597U);
    msg.setSourceEntity(163U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(5U);
    msg.name.assign("ULBNNZISTTVSEHWCDQKFNPRHGMQFUCFWWMLYBIUBNDUQIAOYZRLTPYDOEVSQHATKSRLECALXSQGTRZEAOHHFMXDDRYLWIXLIGTUZVYFONULMAJTEOMTREZCJRWHJSPKIAVLPHRGCPBMOCXSXVVVDJNEPWLBPC");
    msg.op = 29U;
    msg.sched_time = 0.41998853467030584;

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
    msg.setTimeStamp(0.9026884105112287);
    msg.setSource(15292U);
    msg.setSourceEntity(177U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(82U);
    msg.name.assign("PBGVUNFWGULACZXYXJFZEDVDXYNYSHREWNMKMCHBWYLMVUDTDSJIEGVSBPIKFCIOMMCTQYNFYUIXVHRKQTHUNZJCWYBJVEOIBQLGCVUHLBSCNNHKIHATPCABRXFYFOOXDVQEGFYPBAJIQZZAPBHJTDWTEROLKVLGRPZTRMS");
    msg.op = 7U;
    msg.sched_time = 0.7084965825428732;

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
    msg.setTimeStamp(0.9950199000848925);
    msg.setSource(28690U);
    msg.setSourceEntity(147U);
    msg.setDestination(58761U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.21069290831526943);
    msg.setSource(11137U);
    msg.setSourceEntity(227U);
    msg.setDestination(8874U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.8943141889663523);
    msg.setSource(45611U);
    msg.setSourceEntity(108U);
    msg.setDestination(47558U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.590575827963884);
    msg.setSource(1043U);
    msg.setSourceEntity(207U);
    msg.setDestination(35211U);
    msg.setDestinationEntity(138U);
    msg.name.assign("PQOFGEWINRXQJBUUVURWXWPFBZJDDVDPMWGGDBLJAPLYVHOFKTMEPXXBQETFFYHZKAIYCSPKUHCCFOPFXNWGQITYZJTYTRZZKMSABINAACKMNSIXNORUHOXKSAH");
    msg.state = 20U;

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
    msg.setTimeStamp(0.4629337236793811);
    msg.setSource(53072U);
    msg.setSourceEntity(180U);
    msg.setDestination(28506U);
    msg.setDestinationEntity(24U);
    msg.name.assign("TKSCUBTGOKERSQCTQGAPVNZLSMRNJFGOWNVAZDAORBWJBTLOWRESEDBFFZLIGSLHFPTQMRLPCUIGTTRWPNMMICPQEMFGTNOYEQDMNMZTYOGFKCVBJBZKDDVEWVNWIMZXSLHSXKCPSPPKHYXISHQJHOUXQUKAOWYFAVINQCGUNLUYYL");
    msg.state = 87U;

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
    msg.setTimeStamp(0.8141239174525892);
    msg.setSource(16426U);
    msg.setSourceEntity(42U);
    msg.setDestination(38842U);
    msg.setDestinationEntity(189U);
    msg.name.assign("SHDJYPCIWUTSSVUVOJPKKEYVLHJPEWKEYHKIWCBXJESQARLWBUIAJTLEBBGPJCQMRELEGQFFVLXFVZGPMSZCNYBIUFXMLZHWNMGXQFGZRBKIIJJRKODOCWFDSTGWPADIGBZM");
    msg.state = 14U;

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
    msg.setTimeStamp(0.5377832364175013);
    msg.setSource(62452U);
    msg.setSourceEntity(231U);
    msg.setDestination(34462U);
    msg.setDestinationEntity(208U);
    msg.name.assign("KVMKVCJLKYKSIDNQCBLSFDWKPHAJIWTPBUXPXMXSHNUBFNIRVRCMGWQLIRVKBIYNDWEMVATZOGIJNTDOLVYZTYCLBTWYDMWQHTUOAPJHFHPXWKZQSSGUIWPBFRPJKTVEQTKSXRZPSWUOAOGHRCMSFDADCHFQTLZXYZNFHXMOLBIBJPINXJVCHPUHAIREYDQEBMGXYEZRJYYACWEBEDVGGDLMUGEQROKEJAVGCROAUXZUEQOAG");
    msg.value = 62U;

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
    msg.setTimeStamp(0.741500789385478);
    msg.setSource(58263U);
    msg.setSourceEntity(191U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(224U);
    msg.name.assign("TRELYVYUKFEHIIFJCTLDENXQPOGFQOQPWABJCHMNJFQVTKBXJMGJLLWECZHJHKZADVLNOKGQLVMWDKSZJBCIRPNOOWUMZHZVOYQDYOPWISVGBBXKPRXXEUAHRLGRSUDULFMPXKJRYBPHGSIJGGZEYIA");
    msg.value = 54U;

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
    msg.setTimeStamp(0.5383767863375564);
    msg.setSource(36792U);
    msg.setSourceEntity(102U);
    msg.setDestination(22973U);
    msg.setDestinationEntity(141U);
    msg.name.assign("TPUPLQKCGBHQVYJTCEM");
    msg.value = 128U;

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
    msg.setTimeStamp(0.9737050167334288);
    msg.setSource(53307U);
    msg.setSourceEntity(90U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(119U);
    msg.name.assign("EKHYZOGOJTJATVEKXACFPMYZUARIVWWKIWKUQYJAVFEJQZKEGDBXZCUYMSMJWSKGVINOPMPNXU");

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
    msg.setTimeStamp(0.0033649854055840533);
    msg.setSource(6925U);
    msg.setSourceEntity(132U);
    msg.setDestination(57918U);
    msg.setDestinationEntity(211U);
    msg.name.assign("PXSQLMSGEWSPCVIZYZTEMZI");

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
    msg.setTimeStamp(0.4664080320109687);
    msg.setSource(23087U);
    msg.setSourceEntity(131U);
    msg.setDestination(63307U);
    msg.setDestinationEntity(240U);
    msg.name.assign("ZZOBDEFDFEAWGUVRYVCCUEPTAIASQLHBEMNRVJCNFYVKPBANBWMLWLCTZFYOCJMMOHKYFCWSKSLQJFVTIIHGNZDUNXDUMDXXAOPQUEYGDMVUOANLKJZXQTZWOVQBJYBWETOXPIAUISDOSS");

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
    msg.setTimeStamp(0.6700198953568123);
    msg.setSource(32608U);
    msg.setSourceEntity(240U);
    msg.setDestination(15129U);
    msg.setDestinationEntity(158U);
    msg.name.assign("TMPAMWOUMHIJIFLWGWFHQOBEYLPWIXCYDMKHTCWEABSBDAHJUTBSCXKKCLNMNNEJJAOSPOTGEFXRUDDARGGMQPZYNVHFZOJXTASPSBWGWHRASVBSNSUQLAMEMEDIVWIUEFXDYZQXVICYEFTNYHPJZTHR");
    msg.value = 242U;

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
    msg.setTimeStamp(0.7308655077695655);
    msg.setSource(6077U);
    msg.setSourceEntity(89U);
    msg.setDestination(60390U);
    msg.setDestinationEntity(15U);
    msg.name.assign("JGUHFQHFRYYPPMWYBUSBJBAZRVOORJKYCTWPNDPDGD");
    msg.value = 128U;

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
    msg.setTimeStamp(0.39007813758422916);
    msg.setSource(13791U);
    msg.setSourceEntity(251U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZECDATLBXGIRPPIHHRCSWSHPHJNLDSAGVMWVOSYWPLFKRDBVZEZINCTOMNVMAULOPAWOWUENUHVXSDOWPMIRJJHTPCGUWUXIHTLRXKWYQYGZOXCBHVQXZHYQMARWFJEKXTHIYBGBAMZFPQMNJCZEIFOCTUELRTDRGQRGAKNVFJKACKKNNQJZEAYXODDTGICLDFAJBUZIPIRVMQSMSYTYOEFUFMFBKLUYKLVEYDVSSXQUBL");
    msg.value = 156U;

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
    msg.setTimeStamp(0.5411898298304612);
    msg.setSource(55023U);
    msg.setSourceEntity(187U);
    msg.setDestination(5008U);
    msg.setDestinationEntity(82U);
    msg.id = 77U;
    msg.period = 1113058494U;
    msg.duty_cycle = 4260358795U;

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
    msg.setTimeStamp(0.025204007059569156);
    msg.setSource(46680U);
    msg.setSourceEntity(44U);
    msg.setDestination(29775U);
    msg.setDestinationEntity(158U);
    msg.id = 23U;
    msg.period = 1880553059U;
    msg.duty_cycle = 210088421U;

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
    msg.setTimeStamp(0.640978664460198);
    msg.setSource(4780U);
    msg.setSourceEntity(6U);
    msg.setDestination(41247U);
    msg.setDestinationEntity(86U);
    msg.id = 41U;
    msg.period = 460327378U;
    msg.duty_cycle = 1104956662U;

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
    msg.setTimeStamp(0.767376171868491);
    msg.setSource(17314U);
    msg.setSourceEntity(133U);
    msg.setDestination(16000U);
    msg.setDestinationEntity(105U);
    msg.id = 3U;
    msg.period = 2858634846U;
    msg.duty_cycle = 647338799U;

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
    msg.setTimeStamp(0.2645446394607003);
    msg.setSource(13099U);
    msg.setSourceEntity(91U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(157U);
    msg.id = 247U;
    msg.period = 3909996390U;
    msg.duty_cycle = 3365352801U;

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
    msg.setTimeStamp(0.7848277635462967);
    msg.setSource(41687U);
    msg.setSourceEntity(172U);
    msg.setDestination(6753U);
    msg.setDestinationEntity(2U);
    msg.id = 95U;
    msg.period = 289316687U;
    msg.duty_cycle = 1955536677U;

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
    msg.setTimeStamp(0.8965085517071804);
    msg.setSource(29636U);
    msg.setSourceEntity(254U);
    msg.setDestination(13117U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.09266391718108591;
    msg.lon = 0.4258993144623632;
    msg.height = 0.4435313173124721;
    msg.x = 0.698487194874102;
    msg.y = 0.8249482860914555;
    msg.z = 0.23267738467578636;
    msg.phi = 0.3317477499167356;
    msg.theta = 0.6284604114433903;
    msg.psi = 0.7206801338096713;
    msg.u = 0.7625720852258023;
    msg.v = 0.9971696661520272;
    msg.w = 0.5634603215476329;
    msg.vx = 0.788175090829275;
    msg.vy = 0.5049063062694152;
    msg.vz = 0.08230581488607924;
    msg.p = 0.37501364067408127;
    msg.q = 0.724696411875533;
    msg.r = 0.9543935620237943;
    msg.depth = 0.4280192514051214;
    msg.alt = 0.11634531428760198;

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
    msg.setTimeStamp(0.40788350145225605);
    msg.setSource(46345U);
    msg.setSourceEntity(235U);
    msg.setDestination(19649U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.3168152141110132;
    msg.lon = 0.02166275049488986;
    msg.height = 0.4832002234772679;
    msg.x = 0.763677263833727;
    msg.y = 0.16733677256803814;
    msg.z = 0.6620393399186669;
    msg.phi = 0.608806836138876;
    msg.theta = 0.4523848658659928;
    msg.psi = 0.36693971528918146;
    msg.u = 0.1844918034519173;
    msg.v = 0.07840079890392271;
    msg.w = 0.46354630294664556;
    msg.vx = 0.9365360957104605;
    msg.vy = 0.03031907295331715;
    msg.vz = 0.9945442950554761;
    msg.p = 0.9216380555957869;
    msg.q = 0.7204771006838009;
    msg.r = 0.8353472459712037;
    msg.depth = 0.556158959353939;
    msg.alt = 0.4276515257113013;

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
    msg.setTimeStamp(0.8510716813698006);
    msg.setSource(29838U);
    msg.setSourceEntity(178U);
    msg.setDestination(35863U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.010407843660933946;
    msg.lon = 0.552903159340618;
    msg.height = 0.3659029828628818;
    msg.x = 0.056150131570566364;
    msg.y = 0.9209271625750316;
    msg.z = 0.9472874608971601;
    msg.phi = 0.4213972008893422;
    msg.theta = 0.40198053985529525;
    msg.psi = 0.20457034412512853;
    msg.u = 0.2536306005246802;
    msg.v = 0.7434422547901789;
    msg.w = 0.3919437237074419;
    msg.vx = 0.750186627276319;
    msg.vy = 0.428160977017933;
    msg.vz = 0.16413883214729885;
    msg.p = 0.8060780264455505;
    msg.q = 0.5236451958941033;
    msg.r = 0.7817062165547493;
    msg.depth = 0.014637267935332265;
    msg.alt = 0.47252501242046774;

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
    msg.setTimeStamp(0.7604665645807385);
    msg.setSource(61160U);
    msg.setSourceEntity(194U);
    msg.setDestination(61280U);
    msg.setDestinationEntity(123U);
    msg.x = 0.8824685796700983;
    msg.y = 0.4903196563948038;
    msg.z = 0.9175624395471057;

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
    msg.setTimeStamp(0.8799434589678855);
    msg.setSource(38601U);
    msg.setSourceEntity(124U);
    msg.setDestination(45936U);
    msg.setDestinationEntity(114U);
    msg.x = 0.07691287105885347;
    msg.y = 0.4019517121609393;
    msg.z = 0.06960974694144562;

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
    msg.setTimeStamp(0.4862061569410475);
    msg.setSource(63936U);
    msg.setSourceEntity(71U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(117U);
    msg.x = 0.5512480866684417;
    msg.y = 0.6914419195392527;
    msg.z = 0.7117818070478261;

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
    msg.setTimeStamp(0.949398214127176);
    msg.setSource(53094U);
    msg.setSourceEntity(104U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(118U);
    msg.value = 0.15023111154675983;

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
    msg.setTimeStamp(0.5008554522292425);
    msg.setSource(11339U);
    msg.setSourceEntity(15U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6827517156876995;

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
    msg.setTimeStamp(0.9934435306512294);
    msg.setSource(49842U);
    msg.setSourceEntity(31U);
    msg.setDestination(5447U);
    msg.setDestinationEntity(232U);
    msg.value = 0.02304194475194765;

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
    msg.setTimeStamp(0.5691639693550794);
    msg.setSource(28455U);
    msg.setSourceEntity(121U);
    msg.setDestination(45856U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7095725305704729;

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
    msg.setTimeStamp(0.8261735851627913);
    msg.setSource(31242U);
    msg.setSourceEntity(146U);
    msg.setDestination(33552U);
    msg.setDestinationEntity(226U);
    msg.value = 0.3401091231596528;

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
    msg.setTimeStamp(0.7441433086900491);
    msg.setSource(60837U);
    msg.setSourceEntity(194U);
    msg.setDestination(16150U);
    msg.setDestinationEntity(21U);
    msg.value = 0.4737852785773954;

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
    msg.setTimeStamp(0.8892057548852752);
    msg.setSource(26766U);
    msg.setSourceEntity(230U);
    msg.setDestination(31668U);
    msg.setDestinationEntity(16U);
    msg.x = 0.5017976188935307;
    msg.y = 0.4240741117135852;
    msg.z = 0.4820654558646933;
    msg.phi = 0.6947671123928543;
    msg.theta = 0.37710675544631755;
    msg.psi = 0.433981990301019;
    msg.p = 0.5513027938217346;
    msg.q = 0.06446466415461849;
    msg.r = 0.3384685009601993;
    msg.u = 0.7924896025725481;
    msg.v = 0.9107643560335257;
    msg.w = 0.9803994606091093;
    msg.bias_psi = 0.918340038823962;
    msg.bias_r = 0.421013735789718;

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
    msg.setTimeStamp(0.7231257467077638);
    msg.setSource(7964U);
    msg.setSourceEntity(108U);
    msg.setDestination(60183U);
    msg.setDestinationEntity(139U);
    msg.x = 0.7655372603461899;
    msg.y = 0.45247475032677975;
    msg.z = 0.942224741735122;
    msg.phi = 0.9220369566687094;
    msg.theta = 0.12992659534678574;
    msg.psi = 0.6160819741616186;
    msg.p = 0.28310963568207936;
    msg.q = 0.2895693548287631;
    msg.r = 0.17988023641071615;
    msg.u = 0.17503949746167902;
    msg.v = 0.28718997274048486;
    msg.w = 0.9391821582605596;
    msg.bias_psi = 0.008295744647996206;
    msg.bias_r = 0.15564364557516497;

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
    msg.setTimeStamp(0.05993741463387581);
    msg.setSource(14722U);
    msg.setSourceEntity(132U);
    msg.setDestination(42961U);
    msg.setDestinationEntity(71U);
    msg.x = 0.930644478722913;
    msg.y = 0.15830184287346238;
    msg.z = 0.9543354017564591;
    msg.phi = 0.34614417341932013;
    msg.theta = 0.29589159386336694;
    msg.psi = 0.11194307668666437;
    msg.p = 0.7275984651738038;
    msg.q = 0.045389273072350966;
    msg.r = 0.8614558290550857;
    msg.u = 0.42032705763629485;
    msg.v = 0.8988951529190014;
    msg.w = 0.809107528938384;
    msg.bias_psi = 0.8550182836599838;
    msg.bias_r = 0.5005404089334275;

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
    msg.setTimeStamp(0.30036026171158825);
    msg.setSource(39350U);
    msg.setSourceEntity(11U);
    msg.setDestination(14028U);
    msg.setDestinationEntity(157U);
    msg.bias_psi = 0.7884064209975961;
    msg.bias_r = 0.9092655409122024;
    msg.cog = 0.7682994637622065;
    msg.cyaw = 0.26058021159055456;
    msg.lbl_rej_level = 0.40681883884051007;
    msg.gps_rej_level = 0.20005411129252426;
    msg.custom_x = 0.7991774446937612;
    msg.custom_y = 0.23704348497507444;
    msg.custom_z = 0.3879565977523298;

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
    msg.setTimeStamp(0.39075636621717524);
    msg.setSource(35146U);
    msg.setSourceEntity(50U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.19627800868587697;
    msg.bias_r = 0.6726325022391444;
    msg.cog = 0.1667620237054932;
    msg.cyaw = 0.2557352133882994;
    msg.lbl_rej_level = 0.8022063813751926;
    msg.gps_rej_level = 0.9999968717161382;
    msg.custom_x = 0.16045902997659933;
    msg.custom_y = 0.3473641191639938;
    msg.custom_z = 0.2835867449275301;

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
    msg.setTimeStamp(0.2876308522714275);
    msg.setSource(63945U);
    msg.setSourceEntity(127U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(111U);
    msg.bias_psi = 0.19656198241123957;
    msg.bias_r = 0.39130339249705104;
    msg.cog = 0.1435947325514415;
    msg.cyaw = 0.06532405635914729;
    msg.lbl_rej_level = 0.8211455214584221;
    msg.gps_rej_level = 0.564310071385461;
    msg.custom_x = 0.7561672238550926;
    msg.custom_y = 0.6343722117863956;
    msg.custom_z = 0.4016871459485428;

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
    msg.setTimeStamp(0.769558132620598);
    msg.setSource(59627U);
    msg.setSourceEntity(68U);
    msg.setDestination(15080U);
    msg.setDestinationEntity(0U);
    msg.utc_time = 0.8284867076713954;
    msg.reason = 232U;

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
    msg.setTimeStamp(0.03529861299759329);
    msg.setSource(62941U);
    msg.setSourceEntity(51U);
    msg.setDestination(44855U);
    msg.setDestinationEntity(100U);
    msg.utc_time = 0.48028985850400974;
    msg.reason = 189U;

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
    msg.setTimeStamp(0.6358162687333136);
    msg.setSource(34417U);
    msg.setSourceEntity(131U);
    msg.setDestination(59121U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.34967021521916697;
    msg.reason = 88U;

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
    msg.setTimeStamp(0.31443857974219114);
    msg.setSource(45946U);
    msg.setSourceEntity(141U);
    msg.setDestination(1696U);
    msg.setDestinationEntity(12U);
    msg.id = 157U;
    msg.range = 0.5462088196599216;
    msg.acceptance = 52U;

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
    msg.setTimeStamp(0.33399963848312064);
    msg.setSource(58436U);
    msg.setSourceEntity(21U);
    msg.setDestination(61740U);
    msg.setDestinationEntity(223U);
    msg.id = 217U;
    msg.range = 0.097957736812738;
    msg.acceptance = 61U;

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
    msg.setTimeStamp(0.3907580072361423);
    msg.setSource(37498U);
    msg.setSourceEntity(107U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(97U);
    msg.id = 210U;
    msg.range = 0.17769017883616023;
    msg.acceptance = 220U;

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
    msg.setTimeStamp(0.3168954741819342);
    msg.setSource(51352U);
    msg.setSourceEntity(193U);
    msg.setDestination(32730U);
    msg.setDestinationEntity(89U);
    msg.type = 134U;
    msg.reason = 230U;
    msg.value = 0.3757791742783121;
    msg.timestep = 0.8842414571045528;

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
    msg.setTimeStamp(0.8252870460666915);
    msg.setSource(55199U);
    msg.setSourceEntity(91U);
    msg.setDestination(57760U);
    msg.setDestinationEntity(157U);
    msg.type = 57U;
    msg.reason = 214U;
    msg.value = 0.014067351270831474;
    msg.timestep = 0.054363598454126305;

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
    msg.setTimeStamp(0.6721609117953152);
    msg.setSource(24844U);
    msg.setSourceEntity(211U);
    msg.setDestination(26441U);
    msg.setDestinationEntity(68U);
    msg.type = 200U;
    msg.reason = 7U;
    msg.value = 0.35131786623780026;
    msg.timestep = 0.7481720142643697;

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
    msg.setTimeStamp(0.10391225835126161);
    msg.setSource(44775U);
    msg.setSourceEntity(211U);
    msg.setDestination(53432U);
    msg.setDestinationEntity(152U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MJLVMSASIHJFDUXRRJQNIDIICTSSOPZKFSGLPBRGNWNCJKBQTXLXFMAVPDLGMRYHMQKH");
    tmp_msg_0.lat = 0.33366247233987734;
    tmp_msg_0.lon = 0.7443271263684409;
    tmp_msg_0.depth = 0.403799289632244;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 147U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9616183207649887;
    msg.y = 0.7298502669419854;
    msg.var_x = 0.2533012951281859;
    msg.var_y = 0.9220191871055948;
    msg.distance = 0.9607708555069034;

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
    msg.setTimeStamp(0.25835541476272106);
    msg.setSource(43056U);
    msg.setSourceEntity(209U);
    msg.setDestination(30009U);
    msg.setDestinationEntity(251U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WETQJXWMRIBRSLCTXCALMUFXUPYXQTHPGGFYMGKBKKJVWGARVTKKHNMVUHLDJNNYQSFCWYZPADHLQMNAFPTUZOOVTONWOVIKANPGILRZRIUWJNCFEMZTEZBRJPNCGMBAJEANLALZHBMFIIOPGKDQYEFZVIKEYXCOLSDLZRBYEVJPCRVBHDPCMFMUYSGDEHDSTCHBJOBLQWVDQQHRPYOSJHCWWDZFKQXUUXJFUSTKIOYTDQOXSBNSUZGII");
    tmp_msg_0.lat = 0.0553378511938053;
    tmp_msg_0.lon = 0.28208782331804705;
    tmp_msg_0.depth = 0.14478712832201912;
    tmp_msg_0.query_channel = 75U;
    tmp_msg_0.reply_channel = 66U;
    tmp_msg_0.transponder_delay = 162U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8688226697825885;
    msg.y = 0.06817693816015302;
    msg.var_x = 0.9278938605610294;
    msg.var_y = 0.5557078365753035;
    msg.distance = 0.09666155083552441;

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
    msg.setTimeStamp(0.15553627507874335);
    msg.setSource(55152U);
    msg.setSourceEntity(71U);
    msg.setDestination(64111U);
    msg.setDestinationEntity(105U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUTANRXKLFMEIEFPSWAWHHQSVQKNASRKXCIENWGB");
    tmp_msg_0.lat = 0.5462852564724763;
    tmp_msg_0.lon = 0.03426825852009707;
    tmp_msg_0.depth = 0.30203351270981216;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 68U;
    tmp_msg_0.transponder_delay = 152U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.732258036364104;
    msg.y = 0.8258977659541678;
    msg.var_x = 0.18813854906792127;
    msg.var_y = 0.15747345319198613;
    msg.distance = 0.1948253095253919;

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
    msg.setTimeStamp(0.9841972144230301);
    msg.setSource(6781U);
    msg.setSourceEntity(59U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(59U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.5706613748446876);
    msg.setSource(35595U);
    msg.setSourceEntity(217U);
    msg.setDestination(27020U);
    msg.setDestinationEntity(23U);
    msg.state = 221U;

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
    msg.setTimeStamp(0.09396658241250255);
    msg.setSource(19682U);
    msg.setSourceEntity(33U);
    msg.setDestination(22762U);
    msg.setDestinationEntity(243U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.1856178469369727);
    msg.setSource(11164U);
    msg.setSourceEntity(116U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(129U);
    msg.x = 0.44207658802932825;
    msg.y = 0.7201355460133493;
    msg.z = 0.8034691995666826;

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
    msg.setTimeStamp(0.7185723993223825);
    msg.setSource(57115U);
    msg.setSourceEntity(215U);
    msg.setDestination(46987U);
    msg.setDestinationEntity(145U);
    msg.x = 0.2139719590686493;
    msg.y = 0.5198890777120642;
    msg.z = 0.3493681176147527;

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
    msg.setTimeStamp(0.9297644019200529);
    msg.setSource(63051U);
    msg.setSourceEntity(120U);
    msg.setDestination(30609U);
    msg.setDestinationEntity(237U);
    msg.x = 0.22165500944112848;
    msg.y = 0.04524552529365855;
    msg.z = 0.20647293688601254;

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
    msg.setTimeStamp(0.7058729429050243);
    msg.setSource(6831U);
    msg.setSourceEntity(209U);
    msg.setDestination(22535U);
    msg.setDestinationEntity(45U);
    msg.va = 0.5022476087464063;
    msg.aoa = 0.5000516848633478;
    msg.ssa = 0.3300202534907092;

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
    msg.setTimeStamp(0.30184317025208174);
    msg.setSource(15641U);
    msg.setSourceEntity(148U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(31U);
    msg.va = 0.9592478753658739;
    msg.aoa = 0.1003954931448523;
    msg.ssa = 0.807588531535345;

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
    msg.setTimeStamp(0.9781866116897816);
    msg.setSource(26226U);
    msg.setSourceEntity(62U);
    msg.setDestination(53448U);
    msg.setDestinationEntity(248U);
    msg.va = 0.8994536101197405;
    msg.aoa = 0.4917325677307607;
    msg.ssa = 0.25750426360676215;

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
    msg.setTimeStamp(0.42693519233929556);
    msg.setSource(44039U);
    msg.setSourceEntity(50U);
    msg.setDestination(20077U);
    msg.setDestinationEntity(76U);
    msg.value = 0.660630008477527;

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
    msg.setTimeStamp(0.9095565638715922);
    msg.setSource(39159U);
    msg.setSourceEntity(32U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(163U);
    msg.value = 0.6773627056947439;

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
    msg.setTimeStamp(0.19567831746498743);
    msg.setSource(49231U);
    msg.setSourceEntity(126U);
    msg.setDestination(3807U);
    msg.setDestinationEntity(110U);
    msg.value = 0.25041055857198946;

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
    msg.setTimeStamp(0.33826591056085376);
    msg.setSource(27041U);
    msg.setSourceEntity(108U);
    msg.setDestination(55089U);
    msg.setDestinationEntity(223U);
    msg.value = 0.677693788539789;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.3350437498530099);
    msg.setSource(11074U);
    msg.setSourceEntity(77U);
    msg.setDestination(35716U);
    msg.setDestinationEntity(154U);
    msg.value = 0.31384510410738065;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.15399947927383006);
    msg.setSource(52433U);
    msg.setSourceEntity(29U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(117U);
    msg.value = 0.6367171390842585;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.6735738003053359);
    msg.setSource(53110U);
    msg.setSourceEntity(226U);
    msg.setDestination(60039U);
    msg.setDestinationEntity(229U);
    msg.value = 0.4194651523324354;
    msg.speed_units = 39U;

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
    msg.setTimeStamp(0.6628395114521777);
    msg.setSource(31981U);
    msg.setSourceEntity(71U);
    msg.setDestination(52385U);
    msg.setDestinationEntity(215U);
    msg.value = 0.9661804900738051;
    msg.speed_units = 192U;

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
    msg.setTimeStamp(0.5279050831880062);
    msg.setSource(34899U);
    msg.setSourceEntity(23U);
    msg.setDestination(35644U);
    msg.setDestinationEntity(93U);
    msg.value = 0.918905331162558;
    msg.speed_units = 254U;

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
    msg.setTimeStamp(0.6834265507084604);
    msg.setSource(39621U);
    msg.setSourceEntity(26U);
    msg.setDestination(11202U);
    msg.setDestinationEntity(236U);
    msg.value = 0.24986360652179962;

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
    msg.setTimeStamp(0.09704635470881273);
    msg.setSource(6799U);
    msg.setSourceEntity(142U);
    msg.setDestination(58704U);
    msg.setDestinationEntity(162U);
    msg.value = 0.004096605526244135;

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
    msg.setTimeStamp(0.8893627059407341);
    msg.setSource(25431U);
    msg.setSourceEntity(182U);
    msg.setDestination(40672U);
    msg.setDestinationEntity(30U);
    msg.value = 0.9641970170898279;

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
    msg.setTimeStamp(0.4953443752668426);
    msg.setSource(40529U);
    msg.setSourceEntity(188U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(193U);
    msg.value = 0.09766203701967169;

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
    msg.setTimeStamp(0.4872654945427355);
    msg.setSource(33543U);
    msg.setSourceEntity(218U);
    msg.setDestination(37736U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6183616533112073;

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
    msg.setTimeStamp(0.9535560112029181);
    msg.setSource(9831U);
    msg.setSourceEntity(122U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(244U);
    msg.value = 0.8370000282739055;

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
    msg.setTimeStamp(0.18592411183671875);
    msg.setSource(15111U);
    msg.setSourceEntity(241U);
    msg.setDestination(8417U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9505943072550395;

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
    msg.setTimeStamp(0.013648881329051843);
    msg.setSource(44641U);
    msg.setSourceEntity(122U);
    msg.setDestination(59348U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5559052902650355;

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
    msg.setTimeStamp(0.6114486666699599);
    msg.setSource(13871U);
    msg.setSourceEntity(183U);
    msg.setDestination(18169U);
    msg.setDestinationEntity(109U);
    msg.value = 0.18268148634282722;

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
    msg.setTimeStamp(0.010384212105992274);
    msg.setSource(6340U);
    msg.setSourceEntity(90U);
    msg.setDestination(48096U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 3802932686U;
    msg.start_lat = 0.7920698441005718;
    msg.start_lon = 0.2810187840545899;
    msg.start_z = 0.6916867648285723;
    msg.start_z_units = 30U;
    msg.end_lat = 0.6603320498474728;
    msg.end_lon = 0.057361301383709096;
    msg.end_z = 0.46084234149656667;
    msg.end_z_units = 188U;
    msg.speed = 0.5362701149113495;
    msg.speed_units = 103U;
    msg.lradius = 0.9012207375721543;
    msg.flags = 240U;

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
    msg.setTimeStamp(0.2151317225485877);
    msg.setSource(46717U);
    msg.setSourceEntity(226U);
    msg.setDestination(64176U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 3197055456U;
    msg.start_lat = 0.15753946259048568;
    msg.start_lon = 0.5692744660916363;
    msg.start_z = 0.8755576839269605;
    msg.start_z_units = 166U;
    msg.end_lat = 0.3573404624525157;
    msg.end_lon = 0.39752110141223373;
    msg.end_z = 0.15760230327197422;
    msg.end_z_units = 25U;
    msg.speed = 0.8262225499693794;
    msg.speed_units = 207U;
    msg.lradius = 0.027045298515222305;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.16589748492494438);
    msg.setSource(51081U);
    msg.setSourceEntity(251U);
    msg.setDestination(61357U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 282122915U;
    msg.start_lat = 0.7880834497370979;
    msg.start_lon = 0.5735708009273195;
    msg.start_z = 0.8985640276018151;
    msg.start_z_units = 149U;
    msg.end_lat = 0.4637393357195422;
    msg.end_lon = 0.3403464568875434;
    msg.end_z = 0.7357909803339651;
    msg.end_z_units = 177U;
    msg.speed = 0.09812566889454466;
    msg.speed_units = 150U;
    msg.lradius = 0.02637268521158409;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.019051739730144734);
    msg.setSource(41198U);
    msg.setSourceEntity(235U);
    msg.setDestination(18997U);
    msg.setDestinationEntity(106U);
    msg.x = 0.46107964376422816;
    msg.y = 0.7693050155397316;
    msg.z = 0.05892750067177033;
    msg.k = 0.017219844697617614;
    msg.m = 0.1519510868544678;
    msg.n = 0.7431544201435983;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.9468272215510044);
    msg.setSource(22366U);
    msg.setSourceEntity(39U);
    msg.setDestination(28693U);
    msg.setDestinationEntity(98U);
    msg.x = 0.22237261045200618;
    msg.y = 0.6985829207985642;
    msg.z = 0.28079006043551646;
    msg.k = 0.457827536165362;
    msg.m = 9.725619103140293e-05;
    msg.n = 0.2763608512699024;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.326143474312779);
    msg.setSource(57693U);
    msg.setSourceEntity(90U);
    msg.setDestination(549U);
    msg.setDestinationEntity(33U);
    msg.x = 0.10606864892591084;
    msg.y = 0.2540485602013982;
    msg.z = 0.3805068794033788;
    msg.k = 0.7574793324759806;
    msg.m = 0.7181730521281209;
    msg.n = 0.9961027705742304;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.3144672251677447);
    msg.setSource(11230U);
    msg.setSourceEntity(225U);
    msg.setDestination(61993U);
    msg.setDestinationEntity(168U);
    msg.value = 0.16894411693929712;

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
    msg.setTimeStamp(0.13759705959763713);
    msg.setSource(12189U);
    msg.setSourceEntity(43U);
    msg.setDestination(11166U);
    msg.setDestinationEntity(67U);
    msg.value = 0.01598567069485346;

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
    msg.setTimeStamp(0.4054708727034235);
    msg.setSource(50237U);
    msg.setSourceEntity(35U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5763954805421154;

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
    msg.setTimeStamp(0.17727742004758262);
    msg.setSource(44690U);
    msg.setSourceEntity(215U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(95U);
    msg.u = 0.3518367974571024;
    msg.v = 0.8529469095198479;
    msg.w = 0.4805824904615793;
    msg.p = 0.4423623246479792;
    msg.q = 0.9934816390555937;
    msg.r = 0.3079071072096824;
    msg.flags = 98U;

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
    msg.setTimeStamp(0.9890390659415793);
    msg.setSource(23906U);
    msg.setSourceEntity(76U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(6U);
    msg.u = 0.2381363751051837;
    msg.v = 0.35240927195265337;
    msg.w = 0.028841131387661423;
    msg.p = 0.7210935767598328;
    msg.q = 0.7661648244409182;
    msg.r = 0.5613323574209199;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.6768687666403388);
    msg.setSource(33384U);
    msg.setSourceEntity(89U);
    msg.setDestination(14075U);
    msg.setDestinationEntity(53U);
    msg.u = 0.9691692802785652;
    msg.v = 0.15816174266251004;
    msg.w = 0.27006002178951216;
    msg.p = 0.6057111936837971;
    msg.q = 0.9054136265529125;
    msg.r = 0.7901185262288631;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.7315424117670591);
    msg.setSource(35209U);
    msg.setSourceEntity(205U);
    msg.setDestination(10197U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 2939114964U;
    msg.start_lat = 0.988077526372676;
    msg.start_lon = 0.524834751442816;
    msg.start_z = 0.6569958772645584;
    msg.start_z_units = 147U;
    msg.end_lat = 0.9618401441956702;
    msg.end_lon = 0.8883595056728999;
    msg.end_z = 0.3137638273633869;
    msg.end_z_units = 207U;
    msg.lradius = 0.5928936053736233;
    msg.flags = 7U;
    msg.x = 0.005393158051812841;
    msg.y = 0.29214216299617823;
    msg.z = 0.0574115011527041;
    msg.vx = 0.7270668209382316;
    msg.vy = 0.09865245728993066;
    msg.vz = 0.07042508973459993;
    msg.course_error = 0.5490274798722823;
    msg.eta = 42261U;

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
    msg.setTimeStamp(0.08158045384061086);
    msg.setSource(649U);
    msg.setSourceEntity(24U);
    msg.setDestination(65326U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 3583817230U;
    msg.start_lat = 0.028699477645609872;
    msg.start_lon = 0.9399392696640385;
    msg.start_z = 0.6775746425474387;
    msg.start_z_units = 183U;
    msg.end_lat = 0.54103223692007;
    msg.end_lon = 0.42293426780178456;
    msg.end_z = 0.678448473789994;
    msg.end_z_units = 5U;
    msg.lradius = 0.7372364388493492;
    msg.flags = 27U;
    msg.x = 0.043152616108077746;
    msg.y = 0.23037810370515188;
    msg.z = 0.03438670590035453;
    msg.vx = 0.3523042789508105;
    msg.vy = 0.3883206964408277;
    msg.vz = 0.17585008238599276;
    msg.course_error = 0.810140311149341;
    msg.eta = 11660U;

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
    msg.setTimeStamp(0.1859496942585861);
    msg.setSource(63335U);
    msg.setSourceEntity(43U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 618460940U;
    msg.start_lat = 0.9032169071534026;
    msg.start_lon = 0.5781747873577983;
    msg.start_z = 0.5317282017484473;
    msg.start_z_units = 65U;
    msg.end_lat = 0.40134668040141863;
    msg.end_lon = 0.1983291962616699;
    msg.end_z = 0.7942402366965952;
    msg.end_z_units = 127U;
    msg.lradius = 0.2187209113156986;
    msg.flags = 84U;
    msg.x = 0.882921599469772;
    msg.y = 0.40291915603143524;
    msg.z = 0.6996421534798046;
    msg.vx = 0.8112211997198153;
    msg.vy = 0.5662965036796682;
    msg.vz = 0.49450005787369467;
    msg.course_error = 0.145721433438884;
    msg.eta = 2162U;

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
    msg.setTimeStamp(0.46653438090009414);
    msg.setSource(40243U);
    msg.setSourceEntity(13U);
    msg.setDestination(7568U);
    msg.setDestinationEntity(7U);
    msg.k = 0.5056062587382776;
    msg.m = 0.9308111898677961;
    msg.n = 0.44466666254334575;

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
    msg.setTimeStamp(0.4907739419409498);
    msg.setSource(27193U);
    msg.setSourceEntity(47U);
    msg.setDestination(38776U);
    msg.setDestinationEntity(192U);
    msg.k = 0.13181100097834386;
    msg.m = 0.015546633255993592;
    msg.n = 0.5495226694092687;

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
    msg.setTimeStamp(0.8350590095920968);
    msg.setSource(36250U);
    msg.setSourceEntity(63U);
    msg.setDestination(44265U);
    msg.setDestinationEntity(231U);
    msg.k = 0.336181194537978;
    msg.m = 0.9070756136908158;
    msg.n = 0.251229719731626;

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
    msg.setTimeStamp(0.47270716927666556);
    msg.setSource(58140U);
    msg.setSourceEntity(157U);
    msg.setDestination(41293U);
    msg.setDestinationEntity(167U);
    msg.p = 0.9481083530167875;
    msg.i = 0.3834237258875449;
    msg.d = 0.8133566592419599;
    msg.a = 0.4816015449799582;

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
    msg.setTimeStamp(0.35730087613834816);
    msg.setSource(24318U);
    msg.setSourceEntity(140U);
    msg.setDestination(15924U);
    msg.setDestinationEntity(68U);
    msg.p = 0.9666791379806885;
    msg.i = 0.8427571424545625;
    msg.d = 0.23140281753556546;
    msg.a = 0.8848229571664775;

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
    msg.setTimeStamp(0.9330672864687709);
    msg.setSource(46306U);
    msg.setSourceEntity(37U);
    msg.setDestination(14073U);
    msg.setDestinationEntity(64U);
    msg.p = 0.6483297924025015;
    msg.i = 0.6682687342567792;
    msg.d = 0.3952393193831525;
    msg.a = 0.7643490445305142;

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
    msg.setTimeStamp(0.6054738149870483);
    msg.setSource(46128U);
    msg.setSourceEntity(162U);
    msg.setDestination(46453U);
    msg.setDestinationEntity(14U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.1144353016565316);
    msg.setSource(3490U);
    msg.setSourceEntity(8U);
    msg.setDestination(24017U);
    msg.setDestinationEntity(226U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.867329350533095);
    msg.setSource(54852U);
    msg.setSourceEntity(246U);
    msg.setDestination(36406U);
    msg.setDestinationEntity(235U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.25534422127505396);
    msg.setSource(53389U);
    msg.setSourceEntity(101U);
    msg.setDestination(56154U);
    msg.setDestinationEntity(27U);
    msg.x = 0.7376476713078519;
    msg.y = 0.019158917719320767;
    msg.z = 0.19452223417221137;
    msg.vx = 0.2512100193014909;
    msg.vy = 0.17869750002758666;
    msg.vz = 0.785188795475327;
    msg.ax = 0.052446050856442605;
    msg.ay = 0.8396810022235903;
    msg.az = 0.9624060496842788;
    msg.flags = 22061U;

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
    msg.setTimeStamp(0.25448141084459064);
    msg.setSource(23872U);
    msg.setSourceEntity(18U);
    msg.setDestination(32200U);
    msg.setDestinationEntity(251U);
    msg.x = 0.09996827766400074;
    msg.y = 0.5333496816357723;
    msg.z = 0.8052386748320511;
    msg.vx = 0.5516714218380596;
    msg.vy = 0.3218066926222697;
    msg.vz = 0.22589276208208087;
    msg.ax = 0.7815739627720637;
    msg.ay = 0.5952774319945926;
    msg.az = 0.7790511989699016;
    msg.flags = 62533U;

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
    msg.setTimeStamp(0.005395464334382427);
    msg.setSource(26256U);
    msg.setSourceEntity(132U);
    msg.setDestination(31607U);
    msg.setDestinationEntity(4U);
    msg.x = 0.5394931053227088;
    msg.y = 0.300037624553696;
    msg.z = 0.7522623563131521;
    msg.vx = 0.4508718040727666;
    msg.vy = 0.8331755780041988;
    msg.vz = 0.3911656809547406;
    msg.ax = 0.2569072944127455;
    msg.ay = 0.42454584767280057;
    msg.az = 0.8692768098796443;
    msg.flags = 11429U;

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
    msg.setTimeStamp(0.6962397524709427);
    msg.setSource(32383U);
    msg.setSourceEntity(59U);
    msg.setDestination(6662U);
    msg.setDestinationEntity(118U);
    msg.value = 0.4414901883799913;

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
    msg.setTimeStamp(0.9974108574454124);
    msg.setSource(62152U);
    msg.setSourceEntity(150U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9501785664373629;

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
    msg.setTimeStamp(0.6345580620313066);
    msg.setSource(29449U);
    msg.setSourceEntity(155U);
    msg.setDestination(52224U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9501967456242439;

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
    msg.setTimeStamp(0.6242272374509092);
    msg.setSource(23170U);
    msg.setSourceEntity(174U);
    msg.setDestination(48246U);
    msg.setDestinationEntity(232U);
    msg.timeout = 58113U;
    msg.lat = 0.5575201222711543;
    msg.lon = 0.6005285913872112;
    msg.z = 0.46343914083074556;
    msg.z_units = 77U;
    msg.speed = 0.2333947345808569;
    msg.speed_units = 53U;
    msg.roll = 0.31471032542074706;
    msg.pitch = 0.6595284804763701;
    msg.yaw = 0.14175701220023929;
    msg.custom.assign("NGSQOEPFKJYPJBCAIZJLNVQVXAEDLINYUYMHLTCEYHLQDRFYVDJWJWLQYZKHSRGGNVCFYCDCPPZOTPPWZGAGMAHHWHYBQZOAWXOBOBKTOVBWSTRBFXOANGSGEDZDOJULJKIVVURMUCLMFCDLSHHBDRVCIBSNAFCESTEKXUJTQTYWLMMINFZXOKEXNTRUESQHZGTRUWKKDSMARCPZKQJIDEMGYIOXFHIEVNLURTPIIMMN");

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
    msg.setTimeStamp(0.7881326016417655);
    msg.setSource(3484U);
    msg.setSourceEntity(131U);
    msg.setDestination(3510U);
    msg.setDestinationEntity(230U);
    msg.timeout = 10547U;
    msg.lat = 0.14427058861008912;
    msg.lon = 0.35265312979946095;
    msg.z = 0.4536142657437373;
    msg.z_units = 230U;
    msg.speed = 0.6208449567747272;
    msg.speed_units = 119U;
    msg.roll = 0.248423052163244;
    msg.pitch = 0.04496956167183308;
    msg.yaw = 0.30141451670287533;
    msg.custom.assign("VENQXAIZNUKURXGYDCZTHYLBAXMPSQTXZILCPMWXLERAVBWYRSEETQPOJFFCFPBYLJZHSLNHYTNTOYPAFWSGNKBAWDWTCRDMVTIAJJOEYQWIGQINTWVIIYNHZXXJNWJECQVGPJFDBGTFDBFKHMEOOVU");

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
    msg.setTimeStamp(0.5457049959664242);
    msg.setSource(20335U);
    msg.setSourceEntity(146U);
    msg.setDestination(26305U);
    msg.setDestinationEntity(112U);
    msg.timeout = 24309U;
    msg.lat = 0.6084117058704697;
    msg.lon = 0.462697516723096;
    msg.z = 0.1987602457477221;
    msg.z_units = 193U;
    msg.speed = 0.9510459443832989;
    msg.speed_units = 165U;
    msg.roll = 0.9671419356975708;
    msg.pitch = 0.13933603919270687;
    msg.yaw = 0.3758467376463719;
    msg.custom.assign("PWMYELROHOEBPIGXREAIYYCRHUEFFLRMDKFNHVCXKWZPGGFYQDARNFXJBLUFFBVBLLTKUKYDMOKTVQUZJTULWTPJIVJUGXWHNZMNMRTBMWMSVBZYHKIXDCQOHJSTQTABELVTZBFLWSCOQEWEFRFGMPJOIIOBDJAQAUXWSCZHCAOQQZK");

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
    msg.setTimeStamp(0.637234355307481);
    msg.setSource(62895U);
    msg.setSourceEntity(94U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(112U);
    msg.timeout = 21673U;
    msg.lat = 0.7204382651621491;
    msg.lon = 0.7513032473956812;
    msg.z = 0.5937942570568533;
    msg.z_units = 20U;
    msg.speed = 0.23977630680288742;
    msg.speed_units = 135U;
    msg.duration = 18029U;
    msg.radius = 0.6096060086555911;
    msg.flags = 243U;
    msg.custom.assign("HNHCSSDKPSBLGBWZQKMRARBJLBZTDUUIZXSGOWKXBXDCGIOKQYFVAFRVKWDUSNQRP");

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
    msg.setTimeStamp(0.14440826732678158);
    msg.setSource(26351U);
    msg.setSourceEntity(228U);
    msg.setDestination(48223U);
    msg.setDestinationEntity(155U);
    msg.timeout = 18357U;
    msg.lat = 0.1075314028892459;
    msg.lon = 0.7653049502790594;
    msg.z = 0.16415256419308843;
    msg.z_units = 75U;
    msg.speed = 0.42454678848315186;
    msg.speed_units = 222U;
    msg.duration = 46364U;
    msg.radius = 0.24682564959751996;
    msg.flags = 16U;
    msg.custom.assign("QNMKWOSOEWZMPMEJRTRATVVFQPKBCSRDRBYFTXBZOZDPPLXQMGJNDTXQLASRELQMZLCBCYKTHFEMHJNYUHNUAAEQTIDKWKMBSWVDGNAYEVALYWIOCBVUCHUNUBNOHXHIPKWGVF");

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
    msg.setTimeStamp(0.612552894131997);
    msg.setSource(16616U);
    msg.setSourceEntity(166U);
    msg.setDestination(12607U);
    msg.setDestinationEntity(20U);
    msg.timeout = 336U;
    msg.lat = 0.22199894477460358;
    msg.lon = 0.2020853707207093;
    msg.z = 0.6264718790767888;
    msg.z_units = 107U;
    msg.speed = 0.369809808664743;
    msg.speed_units = 120U;
    msg.duration = 43351U;
    msg.radius = 0.2563888836564856;
    msg.flags = 252U;
    msg.custom.assign("HTEIUWDUOSG");

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
    msg.setTimeStamp(0.015960319897800557);
    msg.setSource(35169U);
    msg.setSourceEntity(55U);
    msg.setDestination(43852U);
    msg.setDestinationEntity(51U);
    msg.custom.assign("NMNXQMYIMTOUSLYTDUZRKGNKHPNRQXPPZDAJOWSIBWRRIVQG");

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
    msg.setTimeStamp(0.21773060784228981);
    msg.setSource(36470U);
    msg.setSourceEntity(174U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(52U);
    msg.custom.assign("HMFDMPMALDLTCSQIQCNRKICEJDQIFMQFLZLGACBNMQPDDRENRPOZAIIDEOBETVEEYGYTYBDVNZKOAQSHFSVJPXOLPSNDXJKHYTAEZETRKBOQNVUYQCNWAUZURULPPWLINWFABPYCWMHKOPKCXMSXOHJS");

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
    msg.setTimeStamp(0.4781692402513372);
    msg.setSource(50851U);
    msg.setSourceEntity(47U);
    msg.setDestination(54492U);
    msg.setDestinationEntity(180U);
    msg.custom.assign("UZEBLTYJUBQMEVPKYJJTNTZOHHIFZBIKDYPQD");

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
    msg.setTimeStamp(0.9877771808397189);
    msg.setSource(60811U);
    msg.setSourceEntity(247U);
    msg.setDestination(39260U);
    msg.setDestinationEntity(13U);
    msg.timeout = 37600U;
    msg.lat = 0.8905836341103615;
    msg.lon = 0.6001921361283346;
    msg.z = 0.6436643646937981;
    msg.z_units = 155U;
    msg.duration = 58904U;
    msg.speed = 0.8543356858927185;
    msg.speed_units = 139U;
    msg.type = 87U;
    msg.radius = 0.49403206028621205;
    msg.length = 0.9865916498995106;
    msg.bearing = 0.2749394270743927;
    msg.direction = 19U;
    msg.custom.assign("MDOKJRPIKXCTFLDITWWELMFTZNXNAGTJKRVDXLPIAGUOIRIVIRWJMYJSXLEXYUZTZCLCVOWUKDPBAGQFDPAUSNELZCOEASGVVHAGRVVD");

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
    msg.setTimeStamp(0.7048452361054097);
    msg.setSource(20312U);
    msg.setSourceEntity(86U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(85U);
    msg.timeout = 1310U;
    msg.lat = 0.8695293999787134;
    msg.lon = 0.40218983688359156;
    msg.z = 0.6553310565958378;
    msg.z_units = 182U;
    msg.duration = 18352U;
    msg.speed = 0.8314356537915776;
    msg.speed_units = 191U;
    msg.type = 71U;
    msg.radius = 0.8516921963895333;
    msg.length = 0.5007591560486749;
    msg.bearing = 0.8915585621894919;
    msg.direction = 74U;
    msg.custom.assign("KXPEBSOCOFOLPJKQZBFDXRZYHOKOKBJZTBXVCPYSCUHSNFDUHNVCWGQSIAMTEEZJ");

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
    msg.setTimeStamp(0.4720208660291295);
    msg.setSource(51468U);
    msg.setSourceEntity(208U);
    msg.setDestination(55211U);
    msg.setDestinationEntity(145U);
    msg.timeout = 11258U;
    msg.lat = 0.12375635809613994;
    msg.lon = 0.038495349479074736;
    msg.z = 0.7004446626816466;
    msg.z_units = 198U;
    msg.duration = 4370U;
    msg.speed = 0.5219152651553125;
    msg.speed_units = 243U;
    msg.type = 248U;
    msg.radius = 0.3203293258155072;
    msg.length = 0.5564398909536492;
    msg.bearing = 0.4049629108408255;
    msg.direction = 117U;
    msg.custom.assign("XQFFEUYIWXZLYYKPRJXIQTWFNUPBEHGAALNSOSWZVEFVJRTRXULWUUJCBDAUAGOLKQQCFRGOCJBS");

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
    msg.setTimeStamp(0.5968126208465905);
    msg.setSource(54421U);
    msg.setSourceEntity(41U);
    msg.setDestination(16926U);
    msg.setDestinationEntity(33U);
    msg.duration = 62070U;
    msg.custom.assign("DLWCKKGZWGZCPXWSERPIOTRZCASNYTWUIANCPJHYBZRCAKREPUYOFSCXSWAXURDONVYHLIFWDBLZZGQMTDLSJNHXNENMZNJELYXSQCQVMKXFYHIFUQIXMIVDTLARKZBHTOZWLDOBAVOBVJRWMGJMVORXBDLQPGUAHBDPIEJJELUYYQATUKRNOAUVKCAISJEMVDFHLIXWRBEXEPIGTTJSTPMQQ");

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
    msg.setTimeStamp(0.42792852616619736);
    msg.setSource(21657U);
    msg.setSourceEntity(220U);
    msg.setDestination(17444U);
    msg.setDestinationEntity(78U);
    msg.duration = 41076U;
    msg.custom.assign("WQTQGWGQLQQPOYVFELSNXOBBNDMYMWVLNETZWEAKXRCAPQAWRVSFGJVICMURJKRKWBJIBEWZFKIMXJAJVXDWPVTUTASGVCPHURFODHNITATAKELSCFAHHYXCECMCEXWQLRAPYKQQGTDZGJFIUUHHVESGNBPDYPULOKGDPBLJUC");

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
    msg.setTimeStamp(0.613033905153988);
    msg.setSource(4827U);
    msg.setSourceEntity(159U);
    msg.setDestination(16914U);
    msg.setDestinationEntity(251U);
    msg.duration = 35389U;
    msg.custom.assign("QLYLCWVBFTKEIOODHGWHNFITM");

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
    msg.setTimeStamp(0.7298987615855347);
    msg.setSource(23945U);
    msg.setSourceEntity(105U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(24U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7144121737464242;
    msg.control.set(tmp_msg_0);
    msg.duration = 2676U;
    msg.custom.assign("XHOFDJXOBGDZSCGMPNCGCAUMTGYCEIAFDGZHEBBAKFFGRIAZOZKQJQZHYWNJCMYNYISEDVOOTPLRXNATFSNKQJDCIAWXZNWDRJVQSAQTNWPQYQPYRRMITBFUVLVUFURGIBKRKHSLBRMNSGUJKYGDLLUEKEXXRPJWAWYAPVL");

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
    msg.setTimeStamp(0.029408881125902786);
    msg.setSource(28734U);
    msg.setSourceEntity(160U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(130U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.34038141832624824;
    tmp_msg_0.speed_units = 56U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44555U;
    msg.custom.assign("TPTRNFCSBOQIUUUYEQSISPFYJKZVDEWQEBZIALTUQWGJMRILJMXPLMDFQYTXMMIZFQGTBBKKCYWILLZRVDLHUMQQSDSDKOXYVXNZTZTEPOVNWVXJDGSGOIMXEEMAHKTKKSPASBEFDGIYGWVKGYDIUJHRDCXOJRPIHDZR");

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
    msg.setTimeStamp(0.6679022775573558);
    msg.setSource(34563U);
    msg.setSourceEntity(154U);
    msg.setDestination(40483U);
    msg.setDestinationEntity(178U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.8906812530916682;
    msg.control.set(tmp_msg_0);
    msg.duration = 13378U;
    msg.custom.assign("FIWEOGJMSAYYEL");

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
    msg.setTimeStamp(0.0907948252747538);
    msg.setSource(39180U);
    msg.setSourceEntity(116U);
    msg.setDestination(13357U);
    msg.setDestinationEntity(252U);
    msg.timeout = 10653U;
    msg.lat = 0.5335498155101761;
    msg.lon = 0.9522613211340458;
    msg.z = 0.18996432139942465;
    msg.z_units = 237U;
    msg.speed = 0.409428610225511;
    msg.speed_units = 153U;
    msg.bearing = 0.875830924555295;
    msg.cross_angle = 0.15538888774224546;
    msg.width = 0.44821491127189994;
    msg.length = 0.9529354882473765;
    msg.hstep = 0.31866517045615894;
    msg.coff = 228U;
    msg.alternation = 196U;
    msg.flags = 225U;
    msg.custom.assign("QMUHKWQDCSMFIEOIXPJKEYNRVGLULGVMOTFRXXGXNDGCMOYCHKQEABVRBMBIYUQATXDJASDGQTZCIXHHPPVOXUVFPLGRUWGADQLDJN");

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
    msg.setTimeStamp(0.5379352720281374);
    msg.setSource(14032U);
    msg.setSourceEntity(170U);
    msg.setDestination(24568U);
    msg.setDestinationEntity(179U);
    msg.timeout = 28845U;
    msg.lat = 0.6137714777406661;
    msg.lon = 0.1861860440176588;
    msg.z = 0.9651414438718587;
    msg.z_units = 5U;
    msg.speed = 0.6416431151744045;
    msg.speed_units = 213U;
    msg.bearing = 0.022447518760926988;
    msg.cross_angle = 0.6474660948063645;
    msg.width = 0.6196952811842733;
    msg.length = 0.629080217279995;
    msg.hstep = 0.08175168939864952;
    msg.coff = 248U;
    msg.alternation = 109U;
    msg.flags = 88U;
    msg.custom.assign("GKCMPMVHBRXTRZBUIMEEDTNYGCBWCKLCIDERJAGDUROICOBCSKILSDYMNCMLOX");

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
    msg.setTimeStamp(0.07021967232764936);
    msg.setSource(43252U);
    msg.setSourceEntity(231U);
    msg.setDestination(55980U);
    msg.setDestinationEntity(245U);
    msg.timeout = 65336U;
    msg.lat = 0.35260283724819663;
    msg.lon = 0.8250047449816577;
    msg.z = 0.22000834241581335;
    msg.z_units = 160U;
    msg.speed = 0.9922139686950606;
    msg.speed_units = 176U;
    msg.bearing = 0.5543556853359309;
    msg.cross_angle = 0.022061324770161317;
    msg.width = 0.7243750670477391;
    msg.length = 0.00931176864367167;
    msg.hstep = 0.5214709556544661;
    msg.coff = 41U;
    msg.alternation = 231U;
    msg.flags = 116U;
    msg.custom.assign("BRYFNSWEWUPADKJOPGSJDLABIMOHYXSZXIRLFALZUUESRFJQGAVVESCKHYMTVHGOETPHKGMNWLPFVCTIYKQMCRGLZGNAHZYUOKQORCTLZWGAXBCTFBWTVGRRILJBDNWQEBIBPMZTGYQQDSDYKBVYXZSHJJMAQIWENFOVZAFKCQJENUNDPDPXKNCSIULXFMYPTCQENFSKVYMPEQFLJIUUXVDDXZHDIJWUZRHJA");

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
    msg.setTimeStamp(0.39551467366621706);
    msg.setSource(34026U);
    msg.setSourceEntity(208U);
    msg.setDestination(51168U);
    msg.setDestinationEntity(98U);
    msg.timeout = 53135U;
    msg.lat = 0.3142135172220484;
    msg.lon = 0.6737407050088791;
    msg.z = 0.6173571867235514;
    msg.z_units = 217U;
    msg.speed = 0.08835701008339047;
    msg.speed_units = 148U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.36980831893345756;
    tmp_msg_0.y = 0.047210962262553946;
    tmp_msg_0.z = 0.09677251619940652;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QYPCNHKXUGPSMKLYPHZPKAGQSWLZLMVIRUBTECJGUCMVWFXFNODGJDKSQCKKOEVTXUMVZTJJSTXEJNXTBRIAODVWZBRWAHTFCRUFQLEPICNDQNKIJFCOUDBZVYAJBWXJHEPELBRIDGVYPDPGAOUEZGHMAOQYXCFTFWHFRUHMOXBYKQYGJSLVJNNHFESSLDBRCDSNXKMGYWHBPMUTEOIBARVAZTZYCNYM");

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
    msg.setTimeStamp(0.04084409541313838);
    msg.setSource(15011U);
    msg.setSourceEntity(20U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(246U);
    msg.timeout = 5532U;
    msg.lat = 0.83744950018807;
    msg.lon = 0.993694962246198;
    msg.z = 0.7178175672806416;
    msg.z_units = 21U;
    msg.speed = 0.4923383072935177;
    msg.speed_units = 43U;
    msg.custom.assign("PUEMEPNONRNFBYMSZRYOTYWNGHAPUGEGHUMPJWKQITCMLLQTNPIXOKWZMQJDRPQFGWTQVIZEEUZDVFU");

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
    msg.setTimeStamp(0.1955518760453605);
    msg.setSource(3799U);
    msg.setSourceEntity(24U);
    msg.setDestination(46691U);
    msg.setDestinationEntity(166U);
    msg.timeout = 59656U;
    msg.lat = 0.6153769386641971;
    msg.lon = 0.4311452309927335;
    msg.z = 0.17069047573836293;
    msg.z_units = 201U;
    msg.speed = 0.06352337368602023;
    msg.speed_units = 88U;
    msg.custom.assign("KBCKGYNGRHKTMOADUAFQHEWHCLNYVYTOJMSMXLKMUOOSSBLQHHROGKUNXYHOZFATTVZIJADDJUZMJVRVEXIRVERICNAWCZFVQWTAORAGCFBUNIFSFYQRULYAMSGLBRCWJQWXEOPIDNLBPNGUBVSAWJSIOEPUNEQLIEJDUQYAPWWPDFMXZKETVHDLZKKXMLZGYLDGGCWSCTNCMGIVIEWTBPXTPJEDHQZNMXYXHFXUSKPRBOFVJFHKTZPDZQJCR");

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
    msg.setTimeStamp(0.4775376694328367);
    msg.setSource(32044U);
    msg.setSourceEntity(196U);
    msg.setDestination(58474U);
    msg.setDestinationEntity(193U);
    msg.x = 0.47634750157098127;
    msg.y = 0.5444303132159242;
    msg.z = 0.9682572972153951;

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
    msg.setTimeStamp(0.2239278821747832);
    msg.setSource(52792U);
    msg.setSourceEntity(102U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(162U);
    msg.x = 0.13406690286117662;
    msg.y = 0.5296809985587667;
    msg.z = 0.5840893321592648;

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
    msg.setTimeStamp(0.25243972593701125);
    msg.setSource(24802U);
    msg.setSourceEntity(138U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(61U);
    msg.x = 0.5224171962141673;
    msg.y = 0.4977376020381705;
    msg.z = 0.48035967127563195;

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
    msg.setTimeStamp(0.5583667414336178);
    msg.setSource(23496U);
    msg.setSourceEntity(204U);
    msg.setDestination(50898U);
    msg.setDestinationEntity(142U);
    msg.timeout = 30419U;
    msg.lat = 0.017331712774703467;
    msg.lon = 0.6468705233477001;
    msg.z = 0.8739976783468614;
    msg.z_units = 193U;
    msg.amplitude = 0.9086623833577048;
    msg.pitch = 0.463737612746731;
    msg.speed = 0.6913095247902662;
    msg.speed_units = 119U;
    msg.custom.assign("DDBIENDNVWDVQZFAQIOSLBJKBGCPCHWNLXBLAVEHMWSQZBHHGTCAPYNIDMNTXULBGGXEJQNXHSDDJRZIJMKFWTEAWYVLRQOOKYMXFEARYYZOZLWMHTIFEGTTGKKKPRKHBGMIRMVJBIEFZRUNUXNUDUKMIUFOOZCILYWTCQZJOLXSNSSQEEJBVJCLQZFXVVAG");

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
    msg.setTimeStamp(0.3905314847671345);
    msg.setSource(27044U);
    msg.setSourceEntity(131U);
    msg.setDestination(25424U);
    msg.setDestinationEntity(62U);
    msg.timeout = 24743U;
    msg.lat = 0.2612551241978376;
    msg.lon = 0.2931416475854195;
    msg.z = 0.9770943564554149;
    msg.z_units = 56U;
    msg.amplitude = 0.0016155979951240074;
    msg.pitch = 0.9219161360644946;
    msg.speed = 0.41260474057632257;
    msg.speed_units = 168U;
    msg.custom.assign("JOHUPKMBKLFGEDUWZQYZNVIPZCENDJIWKTEUSSAVQJXRESLVROAIHSHQUNCWTHMLCWEXVRSOAMAGOAMBVLQBTIBWWAZUPYENBBCHFFXPFKHVRAYKIGCAFSCLGJIZNKURWEHTFFDJELSGYCBBMEDNLPQMZKTZCRDDJOVIBMUXLORPKTZHWV");

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
    msg.setTimeStamp(0.11722577113230048);
    msg.setSource(12040U);
    msg.setSourceEntity(19U);
    msg.setDestination(42835U);
    msg.setDestinationEntity(11U);
    msg.timeout = 25141U;
    msg.lat = 0.3600530053413832;
    msg.lon = 0.7957943091387298;
    msg.z = 0.790290970971974;
    msg.z_units = 209U;
    msg.amplitude = 0.07804416450893259;
    msg.pitch = 0.04692012806178614;
    msg.speed = 0.6991526622187173;
    msg.speed_units = 172U;
    msg.custom.assign("ZDFPBMCOAYRGRTNTBJXLQQTFGANSCQFSWCIJXEHZVLPTMGFEWESVBEDXUOECYNYBAEIKIKTANIBEFSUHPYJXLQOJSQKZPTJHRMBQRQAZCOHCAEWVUPKWOUPBORXILWSNNVSZLTHXDDWBRFKKHCVLMMO");

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
    msg.setTimeStamp(0.9450497402197593);
    msg.setSource(20113U);
    msg.setSourceEntity(44U);
    msg.setDestination(40470U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.19408963158124826);
    msg.setSource(39748U);
    msg.setSourceEntity(189U);
    msg.setDestination(55297U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.9824424946179415);
    msg.setSource(9111U);
    msg.setSourceEntity(209U);
    msg.setDestination(43868U);
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
    msg.setTimeStamp(0.03845722775404792);
    msg.setSource(49968U);
    msg.setSourceEntity(96U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.2484910268289222;
    msg.lon = 0.3162090066135673;
    msg.z = 0.8079936814417842;
    msg.z_units = 178U;
    msg.radius = 0.8786115223267462;
    msg.duration = 1617U;
    msg.speed = 0.4071197742787417;
    msg.speed_units = 207U;
    msg.custom.assign("ZKLXMNPCUWHREKFJUUHLMBKRXJNDXSDVUZIPDCRXEQVVKPPANASGEHBLYHQOXPKQTHKHWBRCGFXZIATOTIEYNZY");

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
    msg.setTimeStamp(0.9619772204090986);
    msg.setSource(6401U);
    msg.setSourceEntity(71U);
    msg.setDestination(3745U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.9137199465339958;
    msg.lon = 0.02942976174058176;
    msg.z = 0.5746893938173564;
    msg.z_units = 36U;
    msg.radius = 0.7340785891622975;
    msg.duration = 19114U;
    msg.speed = 0.768714235323258;
    msg.speed_units = 84U;
    msg.custom.assign("EULHJFYWPRWTJIZXPFGHQCBLESBXSEXMKWMLMMCQGOTDZGQJHIKPUAQIEO");

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
    msg.setTimeStamp(0.1298733530699815);
    msg.setSource(8292U);
    msg.setSourceEntity(11U);
    msg.setDestination(44794U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.3619677302855231;
    msg.lon = 0.9331154906013395;
    msg.z = 0.5328095152315608;
    msg.z_units = 200U;
    msg.radius = 0.8196005264820965;
    msg.duration = 5728U;
    msg.speed = 0.03762219624915153;
    msg.speed_units = 35U;
    msg.custom.assign("GMASABLNTNLVCECXTKZUMIAUOXAUKUNQGENTCZYKNRYHHMSHZRFPNDXPKTJYKSQLPPFQQPJRXHVISQSBUUCKEVOWFYQIFPQTKUJEBQVHODFYLFUWACRREJGABVRJLPSAGXMTMBZIYIZEDTVRXNBLPWVNDIQHAXPZWVDGYMCUKIBHCWDDEWSMKCMYYGEW");

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
    msg.setTimeStamp(0.8896029694238591);
    msg.setSource(23840U);
    msg.setSourceEntity(84U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(231U);
    msg.timeout = 32600U;
    msg.flags = 145U;
    msg.lat = 0.16689538262543246;
    msg.lon = 0.14888340192069627;
    msg.start_z = 0.6432170965698231;
    msg.start_z_units = 236U;
    msg.end_z = 0.5936311591238093;
    msg.end_z_units = 209U;
    msg.radius = 0.8636430365869912;
    msg.speed = 0.8725748344420016;
    msg.speed_units = 56U;
    msg.custom.assign("WEPVVXCHIBCQMMRFDQUDQQPSYRWPCNYJKGHUZZZVLSCNHHGRYSPFAGEEKNDDKFSKPIHNRVYHZMOIWBGOFVLJWINRVVJOHYPQVL");

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
    msg.setTimeStamp(0.4622179179364455);
    msg.setSource(30011U);
    msg.setSourceEntity(85U);
    msg.setDestination(22950U);
    msg.setDestinationEntity(105U);
    msg.timeout = 55482U;
    msg.flags = 98U;
    msg.lat = 0.1883236585388135;
    msg.lon = 0.2180412529354414;
    msg.start_z = 0.09993103359650246;
    msg.start_z_units = 54U;
    msg.end_z = 0.6059001236468129;
    msg.end_z_units = 2U;
    msg.radius = 0.6209596690744508;
    msg.speed = 0.7934469323410415;
    msg.speed_units = 206U;
    msg.custom.assign("IKWXDIWNJUQITADBUUCKERSHVBUXOMAGTRZUBDIXDOQGUHUZZZTIQMFHPXBSLUTEPPJVKKSAQFWTTIJBALGJLMDQSAFWAEJBOZPYMGHYCGNMLYWZKXRKMWEGXTMTLFLFKOLONPBPJSKWVDHSSIZXJERRAYNTKJVMYCQCFLSOAESC");

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
    msg.setTimeStamp(0.24861566430773485);
    msg.setSource(16165U);
    msg.setSourceEntity(232U);
    msg.setDestination(36962U);
    msg.setDestinationEntity(221U);
    msg.timeout = 45067U;
    msg.flags = 87U;
    msg.lat = 0.27100904849489993;
    msg.lon = 0.3113890862078006;
    msg.start_z = 0.7611131070395486;
    msg.start_z_units = 246U;
    msg.end_z = 0.6900537950959424;
    msg.end_z_units = 124U;
    msg.radius = 0.4748054072972232;
    msg.speed = 0.26399796514931007;
    msg.speed_units = 127U;
    msg.custom.assign("AQAGZFGCCCHOIQOEXMMPGDACNHLVILMPLCUXRTNMLOGTVWPYBCOZUSAANMETVSMPDBXXIURJVAJSKMDUXLBRJGJUYLRNAPMOVGYHGJQBEIJESSBNHDYNUXPYEDZUVOFFPLTRKYWEJTEWISQCHVPWZPQWZOIWQEKYRNBMZZXHVHLRGAKBKNQASJZUKIIWDOLTTWXJFHYSUTDFBRHKRQDFFFQ");

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
    msg.setTimeStamp(0.7736013850680141);
    msg.setSource(20471U);
    msg.setSourceEntity(237U);
    msg.setDestination(14114U);
    msg.setDestinationEntity(126U);
    msg.timeout = 31700U;
    msg.lat = 0.1807297898874588;
    msg.lon = 0.4942506641784823;
    msg.z = 0.7799482174119758;
    msg.z_units = 1U;
    msg.speed = 0.4481780034862076;
    msg.speed_units = 154U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.40333268402097533;
    tmp_msg_0.y = 0.7949561817074271;
    tmp_msg_0.z = 0.33670177942681545;
    tmp_msg_0.t = 0.09096788234257136;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MLQMYUNFBAOLCSPKQDD");

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
    msg.setTimeStamp(0.40828323608857275);
    msg.setSource(59181U);
    msg.setSourceEntity(26U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(97U);
    msg.timeout = 64687U;
    msg.lat = 0.44751655493203846;
    msg.lon = 0.0458912467142788;
    msg.z = 0.3613109015611672;
    msg.z_units = 110U;
    msg.speed = 0.8505098436550254;
    msg.speed_units = 92U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1603790632266806;
    tmp_msg_0.y = 0.15441829929534656;
    tmp_msg_0.z = 0.11563206338254606;
    tmp_msg_0.t = 0.40770638556119765;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WFLVBDHUSBPBMJOZFKRLHVFSPMYLOPDZHJBNNFVLTKNEBCNUAYJSPSUCOAYRCDIKESDGAALNXZGTQKZADMY");

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
    msg.setTimeStamp(0.2690995829442926);
    msg.setSource(19022U);
    msg.setSourceEntity(232U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(231U);
    msg.timeout = 20554U;
    msg.lat = 0.4393628145354518;
    msg.lon = 0.8403084941863703;
    msg.z = 0.42593531674615714;
    msg.z_units = 173U;
    msg.speed = 0.9540493030184274;
    msg.speed_units = 130U;
    msg.custom.assign("WCHTJAAWWWWKZVIGGJLEIGAZYSBBPIMKUSXYUMSRZSIKNYHCKLTOETFXQOLBKYQTQLZBAXUQIMEQACTWCGZGPWHJRTSUWQUUVDNMCNDKTOMOLDVDIRBHRAAHNXSHVXHVLZVIEAFNCLFUFGYFTYDJROEYQQNNRVAZGJQRXNGXVHMSO");

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
    msg.setTimeStamp(0.497656631884692);
    msg.setSource(22800U);
    msg.setSourceEntity(191U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(218U);
    msg.x = 0.5037126145767292;
    msg.y = 0.7173632136108834;
    msg.z = 0.954514440046013;
    msg.t = 0.2377825570855484;

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
    msg.setTimeStamp(0.3911607801484124);
    msg.setSource(6360U);
    msg.setSourceEntity(42U);
    msg.setDestination(21145U);
    msg.setDestinationEntity(169U);
    msg.x = 0.33883421313001594;
    msg.y = 0.5714190400603891;
    msg.z = 0.4097543422247709;
    msg.t = 0.7446103133998292;

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
    msg.setTimeStamp(0.11253374506092029);
    msg.setSource(49987U);
    msg.setSourceEntity(99U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(203U);
    msg.x = 0.5696252632939984;
    msg.y = 0.4493427887609416;
    msg.z = 0.46631043052385923;
    msg.t = 0.8786783336671677;

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
    msg.setTimeStamp(0.7344120857719296);
    msg.setSource(59417U);
    msg.setSourceEntity(12U);
    msg.setDestination(21618U);
    msg.setDestinationEntity(154U);
    msg.timeout = 29965U;
    msg.name.assign("DBCEZMTTAAUCSIOLSJFKGYPRDCNQBJLEMWTYBSMOLVCYQIVJXOSBKXUTQPCEKDCNZZJVWNHTNXYECUFKIRPHUXJAHJODFNZERKGFYHHAAJOTMBCFTMGREGEVRLHVBGPTYSNBLOANSQAIWIZHYMRURXMGDKHXJSCSPHODLGJFGQZMQPJHTFPTXMWWU");
    msg.custom.assign("URYNGCBRTYUHWFLKYJUJIFUBBGYMFRRIZOJFAQGVSAIOGNWLAQWGCCVHZLPWJKIEGOTDXZEZPJCHLYQKTMZKJXGVEASCMWXBDDOXKXSLKXNOYVWHCWUZEVSCHRFMRJKIGZKNVSTAUTNYMRADRFTZFQXMQMXYTSXMVEQVZPUH");

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
    msg.setTimeStamp(0.9868545420499271);
    msg.setSource(63142U);
    msg.setSourceEntity(163U);
    msg.setDestination(46580U);
    msg.setDestinationEntity(22U);
    msg.timeout = 61817U;
    msg.name.assign("EXTMDDAVLMSSAKGBKLAYIYJNFPZ");
    msg.custom.assign("UQCVUDJKMLXLTIUMMXJFZCBNUKZORPWBEOKRDOIRVPPFAEUKMOQBYZSRPAJJXJTPGXHESBYVRWENPLFAQFEDEBZIXOVNYZGFYDALIHQHTWTGGZFCSSAUJQRUBSTVCOXUBXDEMGLHLLNIGNNQEXYAFBWKOACMLZVACKUUQMOAQGVYDSGIBFYSHRKWCCFSREYPHDWPOZCDOTI");

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
    msg.setTimeStamp(0.42110382838573934);
    msg.setSource(36583U);
    msg.setSourceEntity(84U);
    msg.setDestination(27639U);
    msg.setDestinationEntity(83U);
    msg.timeout = 3170U;
    msg.name.assign("PECKQFHWNRZWWIDGTCGFXNAKFSNUKJNRLPIHGKUYGDOYTSGPZTISHWSKCEAIMKYAJIKLCSFMZOCVEQPNQBBBQEFGTWPTXQJNPHUMBXWEPFCIDLYAZICBMFWLRZQAOSEJTZHHJJNUIVUSOZRGWRUNHDTAEJHBRXSMQMGEUDHAVYBVYYXFYFZRIVOCBCVMRKLOTAVESPPKTLRNDWDAF");
    msg.custom.assign("YOZRNGAPFDRO");

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
    msg.setTimeStamp(0.9154800591084479);
    msg.setSource(28385U);
    msg.setSourceEntity(35U);
    msg.setDestination(9479U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.0683944069311112;
    msg.lon = 0.8942310403342364;
    msg.z = 0.5784298522689103;
    msg.z_units = 207U;
    msg.speed = 0.9013985066543934;
    msg.speed_units = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 135U;
    tmp_msg_0.off_x = 0.44832617311020684;
    tmp_msg_0.off_y = 0.8528060201675578;
    tmp_msg_0.off_z = 0.0126132863292856;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4915888340030601;
    msg.custom.assign("LZRTIPCSQXSVMHVUFIXEDUINNPTXKAHSCMMOZGHFPEXTILSENMVMOQPWWIRLWDGXJBBLYXNUAHVMLKYKDOAWRBFJYAFAZIRPBYDQKMWYTEJSNTJHOTACBKKDXFHIQHQCGKGOKKJBLEPAKLCEFQBRXNV");

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
    msg.setTimeStamp(0.14078022612564467);
    msg.setSource(25430U);
    msg.setSourceEntity(62U);
    msg.setDestination(42820U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.45100233112846844;
    msg.lon = 0.8343056332796749;
    msg.z = 0.7019563298255023;
    msg.z_units = 120U;
    msg.speed = 0.11491160606497786;
    msg.speed_units = 17U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0895254399928136;
    tmp_msg_0.y = 0.6128488914181;
    tmp_msg_0.z = 0.7340921624177988;
    tmp_msg_0.t = 0.8567884091281246;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.011651251830186116;
    msg.custom.assign("EJCEOVWSLPBUQHCXULIHYXTFMBFHYNGGURPBXQKSPNIPICYMUULXGMQEKVWUSRNENNNNWE");

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
    msg.setTimeStamp(0.8968170014810981);
    msg.setSource(11214U);
    msg.setSourceEntity(208U);
    msg.setDestination(36090U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.5292175493265577;
    msg.lon = 0.705512514890769;
    msg.z = 0.5545803071035221;
    msg.z_units = 16U;
    msg.speed = 0.6992294261762511;
    msg.speed_units = 46U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5211211390301062;
    tmp_msg_0.y = 0.7465532153249177;
    tmp_msg_0.z = 0.06781695919355224;
    tmp_msg_0.t = 0.8368229767045825;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 41223U;
    tmp_msg_1.off_x = 0.10410344453017795;
    tmp_msg_1.off_y = 0.3066272710904294;
    tmp_msg_1.off_z = 0.6528772059138084;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.869744691811733;
    msg.custom.assign("YVFLXCJWEOVGZBRKZLWHEDOJSGGMBFGNACMJWHRO");

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
    msg.setTimeStamp(0.6131861008141761);
    msg.setSource(12786U);
    msg.setSourceEntity(35U);
    msg.setDestination(52214U);
    msg.setDestinationEntity(58U);
    msg.vid = 46248U;
    msg.off_x = 0.7654983174005499;
    msg.off_y = 0.45151980579626305;
    msg.off_z = 0.6065909052726453;

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
    msg.setTimeStamp(0.35650448319008965);
    msg.setSource(48859U);
    msg.setSourceEntity(151U);
    msg.setDestination(53428U);
    msg.setDestinationEntity(53U);
    msg.vid = 63040U;
    msg.off_x = 0.40603931311544406;
    msg.off_y = 0.14305836146872353;
    msg.off_z = 0.35450633427693545;

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
    msg.setTimeStamp(0.9325828058816148);
    msg.setSource(59593U);
    msg.setSourceEntity(159U);
    msg.setDestination(55016U);
    msg.setDestinationEntity(30U);
    msg.vid = 62889U;
    msg.off_x = 0.6125010373191286;
    msg.off_y = 0.65049991081853;
    msg.off_z = 0.8425088767592889;

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
    msg.setTimeStamp(0.87872392035117);
    msg.setSource(26260U);
    msg.setSourceEntity(38U);
    msg.setDestination(53054U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.9378821445824156);
    msg.setSource(59086U);
    msg.setSourceEntity(111U);
    msg.setDestination(7423U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.0037282413581869456);
    msg.setSource(43617U);
    msg.setSourceEntity(95U);
    msg.setDestination(34939U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.07960777905421268);
    msg.setSource(49080U);
    msg.setSourceEntity(119U);
    msg.setDestination(32442U);
    msg.setDestinationEntity(167U);
    msg.mid = 12477U;

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
    msg.setTimeStamp(0.26464382229958305);
    msg.setSource(51231U);
    msg.setSourceEntity(223U);
    msg.setDestination(1343U);
    msg.setDestinationEntity(157U);
    msg.mid = 60432U;

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
    msg.setTimeStamp(0.6740903749312357);
    msg.setSource(40971U);
    msg.setSourceEntity(154U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(157U);
    msg.mid = 61232U;

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
    msg.setTimeStamp(0.04083359281037302);
    msg.setSource(43120U);
    msg.setSourceEntity(180U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(170U);
    msg.state = 144U;
    msg.eta = 34911U;
    msg.info.assign("SAZGWNDAKZWLRGQVUAEIOFYXEIMTCOEOCDJQVPNQTPRFPEIDGRNFKLSXLSRSXKCFSXVDWQIWECRXHJFMWUVVCHLTZTEZCVESQFXQDJEDXHARPYMLGYGVEUTBRNRPTSMUJGMBCNMAMKOIBJDCUIBOYWKGOULFBAYPFJXMSBGYVOZYYIXILKQKGDYBUJ");

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
    msg.setTimeStamp(0.48378897470766835);
    msg.setSource(64858U);
    msg.setSourceEntity(235U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(243U);
    msg.state = 115U;
    msg.eta = 36761U;
    msg.info.assign("AQMVRMGDFMJZGCKQWNQPBYGXHJQQLXJBBRHDVCFJDNZYQFATCWPGXEGFDXZRNVKMHTSJSIRBIIUAVXXRIVULAMGDPACOVUXJEWRYI");

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
    msg.setTimeStamp(0.044310543488483956);
    msg.setSource(63919U);
    msg.setSourceEntity(11U);
    msg.setDestination(23091U);
    msg.setDestinationEntity(33U);
    msg.state = 203U;
    msg.eta = 4183U;
    msg.info.assign("JRGDUNZJFJVZSABUESBLSQVKDOQABCSPHLXDEWUUQYFGXYGKMDKKPQTSMTPBVTSCSPNDPOKURHNVWGNLKIRPG");

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
    msg.setTimeStamp(0.0557802948902697);
    msg.setSource(34747U);
    msg.setSourceEntity(134U);
    msg.setDestination(29987U);
    msg.setDestinationEntity(140U);
    msg.system = 29200U;
    msg.duration = 54953U;
    msg.speed = 0.7172452359865376;
    msg.speed_units = 216U;
    msg.x = 0.9223377413671088;
    msg.y = 0.30529212122668903;
    msg.z = 0.5424909367666443;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.3792071749574416);
    msg.setSource(43634U);
    msg.setSourceEntity(186U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(39U);
    msg.system = 5692U;
    msg.duration = 17619U;
    msg.speed = 0.10055521262637013;
    msg.speed_units = 11U;
    msg.x = 0.19263141044795606;
    msg.y = 0.16437328061004763;
    msg.z = 0.22427590621291005;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.22976061085191624);
    msg.setSource(18978U);
    msg.setSourceEntity(103U);
    msg.setDestination(30252U);
    msg.setDestinationEntity(219U);
    msg.system = 22735U;
    msg.duration = 7233U;
    msg.speed = 0.226154283653627;
    msg.speed_units = 76U;
    msg.x = 0.3315543684480172;
    msg.y = 0.5324593441951427;
    msg.z = 0.5242053851012739;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.34098643772815296);
    msg.setSource(20099U);
    msg.setSourceEntity(65U);
    msg.setDestination(11465U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.8398743796336582;
    msg.lon = 0.9966225820163509;
    msg.speed = 0.9049339682252857;
    msg.speed_units = 75U;
    msg.duration = 41451U;
    msg.sys_a = 7086U;
    msg.sys_b = 36124U;
    msg.move_threshold = 0.9158880405362586;

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
    msg.setTimeStamp(0.23650666436274803);
    msg.setSource(8862U);
    msg.setSourceEntity(170U);
    msg.setDestination(50372U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.1182618495561486;
    msg.lon = 0.20309969540082162;
    msg.speed = 0.7529661865460434;
    msg.speed_units = 218U;
    msg.duration = 10578U;
    msg.sys_a = 62100U;
    msg.sys_b = 20618U;
    msg.move_threshold = 0.5905379882659829;

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
    msg.setTimeStamp(0.18309219061571225);
    msg.setSource(41085U);
    msg.setSourceEntity(9U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.2507167949091076;
    msg.lon = 0.1660511162191377;
    msg.speed = 0.04268268568971356;
    msg.speed_units = 198U;
    msg.duration = 64051U;
    msg.sys_a = 4492U;
    msg.sys_b = 22607U;
    msg.move_threshold = 0.8658751788784348;

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
    msg.setTimeStamp(0.2363948768584474);
    msg.setSource(13901U);
    msg.setSourceEntity(3U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.5662768275879667;
    msg.lon = 0.4990174980032931;
    msg.z = 0.6852862767588971;
    msg.z_units = 140U;
    msg.speed = 0.31865465745933097;
    msg.speed_units = 142U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6036282370410363;
    tmp_msg_0.lon = 0.9526960513421102;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ILDMKQCYPHZHDYCUEHQZHXBKIVATAXSAKBHRRKVDGTSVDKVBXIQWGCNR");

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
    msg.setTimeStamp(0.507130895071664);
    msg.setSource(41512U);
    msg.setSourceEntity(191U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.34043504835533045;
    msg.lon = 0.2059418712610125;
    msg.z = 0.8642423330496007;
    msg.z_units = 170U;
    msg.speed = 0.6978513809754732;
    msg.speed_units = 56U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7941533961578561;
    tmp_msg_0.lon = 0.839419280686609;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MVJCAYMDVIPEOSPHSRXFAIKOSCILPFSDCGOMQFBTAHMQZUFRRKNOYLOIROSXRBZQCTFBGFXYYGJRNEBSTANAUGSAOPDCQLJSGHSDKQCZONXKVCINJMWYEBUIGEYWLMTMWAEPWEJNCRXFBYZEUEVDZCKORNPZHHUWZXIWTJBXJBRFDLWVTPBGDPTTAHHZ");

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
    msg.setTimeStamp(0.20549500613802807);
    msg.setSource(22554U);
    msg.setSourceEntity(178U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.9768858496102695;
    msg.lon = 0.1654344606829321;
    msg.z = 0.4397823068924517;
    msg.z_units = 117U;
    msg.speed = 0.5035638683075251;
    msg.speed_units = 136U;
    msg.custom.assign("FNHIQSCCEZNUWSBKELIMSOCYDCBVYHJFQXPHGOBAXOPYJRLCDJDNNLRMSJTKCIXQAKPNFFUVAQSUKBNPRUPHRVOFMGNTYIYRLXCZQKSWFETXVWUBRYZQPUZGOLHTUALJZTEARIXTODYEMZCKYDQXHAMPZIIFYWEWKVNHZHVSRNIG");

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
    msg.setTimeStamp(0.7597641325483994);
    msg.setSource(64801U);
    msg.setSourceEntity(184U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.8720599300280084;
    msg.lon = 0.4609568561125075;

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
    msg.setTimeStamp(0.8208844653096801);
    msg.setSource(44628U);
    msg.setSourceEntity(235U);
    msg.setDestination(2534U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.6740561679790206;
    msg.lon = 0.5496100629244511;

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
    msg.setTimeStamp(0.344392125344548);
    msg.setSource(49772U);
    msg.setSourceEntity(21U);
    msg.setDestination(39833U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.9482344258572343;
    msg.lon = 0.8838697213981086;

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
    msg.setTimeStamp(0.8612716041297259);
    msg.setSource(33337U);
    msg.setSourceEntity(189U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(236U);
    msg.timeout = 18660U;
    msg.lat = 0.04492465579575644;
    msg.lon = 0.6519614113853321;
    msg.z = 0.6511264003172651;
    msg.z_units = 253U;
    msg.pitch = 0.533123315785324;
    msg.amplitude = 0.0426051569794923;
    msg.duration = 41429U;
    msg.speed = 0.6831393421247377;
    msg.speed_units = 252U;
    msg.radius = 0.8661970746262566;
    msg.direction = 59U;
    msg.custom.assign("VUVGMWBQULRFTWIXTEMPEAOGJBIGTNRULXRHXZSEFULOQVCFWBDAQTQGERPYPVIKLNFVZBHGWCVTHOAWXSIZTJXMSJKSOCICQFQKWHMUBRYKWAJLGKXUMPAUKBUHCICGELHINETHDRYUWSDKSDGIMM");

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
    msg.setTimeStamp(0.8406459140948958);
    msg.setSource(41049U);
    msg.setSourceEntity(114U);
    msg.setDestination(58792U);
    msg.setDestinationEntity(163U);
    msg.timeout = 60098U;
    msg.lat = 0.41050380840941436;
    msg.lon = 0.3788785743495986;
    msg.z = 0.5444368154110959;
    msg.z_units = 189U;
    msg.pitch = 0.2533139084915045;
    msg.amplitude = 0.9168130357601516;
    msg.duration = 595U;
    msg.speed = 0.5969614725899284;
    msg.speed_units = 118U;
    msg.radius = 0.006063349054450495;
    msg.direction = 11U;
    msg.custom.assign("HCBBDVJJLRCLHLKIDZATPWOXTXQAXNPOAHDCQWDVHFFCXIEGPJBASLYQERTGUZGZHMQWWNIWVXYBUOSIEKOMTRRRVDYTFCCRVXMJJEZEYBVISPZQUVVPIMTZXQGLDLPYIXNTKLOSGBHSTVWXVHCEERSYKOGNACGOGGSIGUABMBNMIKYQZJUZSLFFADUMWAUOEBATLK");

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
    msg.setTimeStamp(0.17881256819206603);
    msg.setSource(25006U);
    msg.setSourceEntity(47U);
    msg.setDestination(14474U);
    msg.setDestinationEntity(120U);
    msg.timeout = 8628U;
    msg.lat = 0.5287764526708233;
    msg.lon = 0.02015319463276921;
    msg.z = 0.6692292809954496;
    msg.z_units = 190U;
    msg.pitch = 0.2222468144921178;
    msg.amplitude = 0.65167825311689;
    msg.duration = 52834U;
    msg.speed = 0.5131977502399231;
    msg.speed_units = 196U;
    msg.radius = 0.35843317290474586;
    msg.direction = 107U;
    msg.custom.assign("LYNZZJXHQTVZEIAJCNIWQJOJAHARVLVC");

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
    msg.setTimeStamp(0.25644572397388155);
    msg.setSource(40187U);
    msg.setSourceEntity(22U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(77U);
    msg.formation_name.assign("ZLNSADCTILZDZB");
    msg.reference_frame = 14U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27340U;
    tmp_msg_0.off_x = 0.9031100333207984;
    tmp_msg_0.off_y = 0.726029665820336;
    tmp_msg_0.off_z = 0.5575388977794086;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YPRSBHTYCPTEKOARFOGSTDWPOEPZOIUSWNNGZMOLISEIPIWXJHMURHKPVNCRVMKNQHOQZGHYDSZNYTNJSWXFACVPZZANQZNZLQVEADDCZAXKKXYPJEQMFCIYGICBTBDUGUXGNVTPTGUMJBAROHRGWLCMLPWQOQF");

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
    msg.setTimeStamp(0.09595621677809318);
    msg.setSource(49767U);
    msg.setSourceEntity(58U);
    msg.setDestination(29007U);
    msg.setDestinationEntity(239U);
    msg.formation_name.assign("XVXPQWFCTBYEMSBCOEHQIEWQUGJHKLAOBEKNLAZYDFBLPFANSXTLZTUDDHFAHDRICVQJIAIBAPZQITFSEVVAUYBRGVFZOMMDXUCZIGDYDXQORYJWYBQVWVCZSOURRAIKJEBWM");
    msg.reference_frame = 130U;
    msg.custom.assign("OVIJQVIIBQXFDAOFODFUYNNXBZYJPWHKIKLKFTHUUGJVFRMJSTKNYBONORCZZDIAWDWOUQVJCMLWLUEVNVMFXSTHLRPHVQYGKEWLFOXUCINKXINBZTZGEYCMMPEHGPXCGZHFARDPEJQRNQUDYCODSWLFXREUHQSOVYCUBCTCUSQMMBVDJWBTHMVKLAYENXAZRBALLAEQGITPMQERSGPCZISTAEDWDYABGPWKFZYJJHSJPLNTSK");

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
    msg.setTimeStamp(0.2853958098621574);
    msg.setSource(41972U);
    msg.setSourceEntity(92U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("GMRSGURLJUZDNTYZBESLWYSPJOXLIGJHTYZLZBBTVNSKRZHXRMRZTSUVWOUKKTIQZAAHTHPXBWFIDPTBIRCIHCGUSMLLVYKEQIZEXZDKSLSRGWJIPXMLCJNKFVRGWIAHAFNOYRYAALMNWEMFKFNSGUBWUQXTHEPOUYIKDQOMKQJCOXVEUDCVVYVUXDDANHJEAAEFFPTBOVGIFJTHQNPCRQSMOYOMDJOXJCPFMQHZBWDNXCFACPGEBQEK");
    msg.reference_frame = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47408U;
    tmp_msg_0.off_x = 0.9114288362223028;
    tmp_msg_0.off_y = 0.3471232715621164;
    tmp_msg_0.off_z = 0.05526224165787086;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YFNBCISGFKGJLQYBQAORCZNBOLZPPNKGDHFYFGSLQCMXWYANVUSBBLVHZRDOUFCWXHUWLEZCUKANOHIWDVCOMTRLOQNJVQZKXUXAQXIZSIQWXNSDPEHRQALTYZFTKQFSRVQRSMIZIUJCEUJAGKGEAUYRCADTGKW");

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
    msg.setTimeStamp(0.24956825137529892);
    msg.setSource(41089U);
    msg.setSourceEntity(124U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("OVTVRBZRYXAYDNQSUWPPUOAGSFEININQAPPCJECLIMOUZDSWJOJMGIBDXXOKXXAZFXSLFRWLGMBJKUHTMNYJCJFDJMADJGNOQBEOORQELVGHFYNUKPBAXMVRSBSEUVTCDIALIDWQPVSHXOLRCEFEQDZKIZQVZBK");
    msg.formation_name.assign("KJKSFCLRNGVTCCNWNDPXFZNUAUITBJHWOEJQPWHEVMOFBDRYVBNHZAQHZJZJPRAISUKVYAIDGVALYAKQFEFFSQRMAQIEHVEYQUZINBRUP");
    msg.plan_id.assign("SHYTFUFGLJLZVBBKKCQGCCSCVOTWCBXIYZZPTQFHIQLZOMFEXFHCSPEOXGNJHDPZOAGISDBBSWRUIYJUVOOXYWTAJITLAUSKDAGLMEOSEWDYRJETSZAISKFPUQVKRYNKJNJAHKRBLDZEIPYEFKTEHRSQHWZKLLDWHAJBQFVBKPXRMTIJXMWAPGVYQRECVLLHNZHZVYNUWPNRUDNBTDEIGOCYBAMWMMNGXFCMMDUTURVVNJPC");
    msg.description.assign("QGXUYKUWRCZLVFVOYLWSQMITEMVHZMNMHLSDDLFFPXZHFLBBIVJKWCHIDIXKGGOJDBEFWLWUJALPVYEJDPTAZZUQ");
    msg.leader_speed = 0.8350029434902043;
    msg.leader_bank_lim = 0.7356646043881301;
    msg.pos_sim_err_lim = 0.060932977012357115;
    msg.pos_sim_err_wrn = 0.03547047181135854;
    msg.pos_sim_err_timeout = 31143U;
    msg.converg_max = 0.1941489149207064;
    msg.converg_timeout = 38316U;
    msg.comms_timeout = 41830U;
    msg.turb_lim = 0.33356440046166647;
    msg.custom.assign("FVLCYXMLTEGGOLFFQUHNCAGKVRPBALAYOQRBXDDMS");

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
    msg.setTimeStamp(0.5595561176984356);
    msg.setSource(17312U);
    msg.setSourceEntity(183U);
    msg.setDestination(21107U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("VOJJQFPBMRDHJXELUWHLDCBFRUTHOTWYOKAAYACDVFENYQGKDLKVXSSRRQHFZFXRZRZCQVIZATDBHHNOXWIAWDSWGLWINSJUMMGUJVZCYPLZASXLOHPPPHBAJJXKVEPMIZCXSXUGMCPDEETOTQANRTEMZVBNBNGNMZFISLNQUQXMCPDGYRIVTIJJNRLBQOOMQYLGDQGAKYHWPFFCBAXRKMGW");
    msg.formation_name.assign("NDCKDNAHABOXFBCDLQILSYBQNPLXMJVHIIYIYKSAXUPTUWOHDHEW");
    msg.plan_id.assign("PADSYNZHRXKWYHOFGYMNSAFNXNKDFLFGWZRVIEERDHKEUYHFYBTJURPQQWEIJGUJCAVTEUZLLWJDBKQBLPYTEAXFCIZAOVIXMZDVBDTUEOKPXSEZMTRHSLBAMDHASTREGYIUNGLNVBVJVI");
    msg.description.assign("UXAWVZAVPTAMSOHAGRBCCUGLSYPLXFOZHALIVSGNRREMFXKOAFNCLSYFJIHKGQDNOVZUTSLUNDJTZIYQWLUMLIQCDZGBFKZBTOWHKZIFZJIDOJFOJYQEYPBKJGMMUBIMDCGNWAJDHMXTDIGYPP");
    msg.leader_speed = 0.7558444857518976;
    msg.leader_bank_lim = 0.5450030046157843;
    msg.pos_sim_err_lim = 0.5774306319555392;
    msg.pos_sim_err_wrn = 0.876063105387154;
    msg.pos_sim_err_timeout = 9102U;
    msg.converg_max = 0.7942566473847986;
    msg.converg_timeout = 47722U;
    msg.comms_timeout = 36450U;
    msg.turb_lim = 0.00969994442625488;
    msg.custom.assign("QQREYRNUCGTIPADPCVDFQMXOVUIEFZSOTTHQSYDXODXDOAAYBECXJUIIRVANAIHEQRPJSMBYBKQKFSNBAIKCOFACFKZZIJRPHTEGQUBSVBVABTJHZVMFGCCXNWWHBGPBIVUIEAGFJEQBNPUCEUKNOWJYSVGGWLXOHJEPLMMUYLDLLHFDOYTFOXVULRMKNKVOCJWNTYZYKDRPLDLJUMRZMMAHSTTLGSHGZTYGIDQPPENJWWWZZKWKRMXZNLQFH");

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
    msg.setTimeStamp(0.8472985907872134);
    msg.setSource(47087U);
    msg.setSourceEntity(238U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("OFGTNHBILYMNDQKGCGOISTYZQFXSJVAHUCXMPIYOWZVJUXFTRORRWHGKDWIRTAZCXNTEBJFIXCQHBMQXGANJHAANZSOEPDMEBZULFOHLHWXRKSPNFXGDXVSPOOMOJKEPKLFECBRAIW");
    msg.formation_name.assign("ASWMDIQTHYNCMVZIWDQEIMXRHHGFHSQJJFBMURYENSWYPWGETQFBWXZTRV");
    msg.plan_id.assign("IXPLFZXRSITPJYGRKUUENQDGSPAWMVLGJFYSDXCKUZHHXDRQVSRTGDBUOINPDPXB");
    msg.description.assign("BRZYOBVVXFQL");
    msg.leader_speed = 0.546802038084001;
    msg.leader_bank_lim = 0.9211548613909764;
    msg.pos_sim_err_lim = 0.18257994429183344;
    msg.pos_sim_err_wrn = 0.956185024378212;
    msg.pos_sim_err_timeout = 59106U;
    msg.converg_max = 0.7155170117297827;
    msg.converg_timeout = 12185U;
    msg.comms_timeout = 60574U;
    msg.turb_lim = 0.1165375862279886;
    msg.custom.assign("MWLWAFYETJGCPANKULYHSWYLHHPKRVHTHEIQPQEAVPYJTGGAXSSUOHWVHUTCSGTVSCQFDEJXRVVFRAOAYMGENZGSMDFKAIBLIKSGTZWZXWJNKDKDAIPXRBUWJPXPHXUURVQBFOQTBOHXMREYOYJIMJPBCOGBSSZCBVFLSBXUAIJEFCOTMJ");

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
    msg.setTimeStamp(0.13768620657934372);
    msg.setSource(30180U);
    msg.setSourceEntity(162U);
    msg.setDestination(7508U);
    msg.setDestinationEntity(181U);
    msg.control_src = 3483U;
    msg.control_ent = 215U;
    msg.timeout = 0.039738256084821066;
    msg.loiter_radius = 0.7260154431609571;
    msg.altitude_interval = 0.9179556230732446;

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
    msg.setTimeStamp(0.6789230265291014);
    msg.setSource(43320U);
    msg.setSourceEntity(172U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(245U);
    msg.control_src = 50484U;
    msg.control_ent = 140U;
    msg.timeout = 0.85266175035949;
    msg.loiter_radius = 0.15449799907999084;
    msg.altitude_interval = 0.7004496527820553;

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
    msg.setTimeStamp(0.9303172564392606);
    msg.setSource(63491U);
    msg.setSourceEntity(33U);
    msg.setDestination(11320U);
    msg.setDestinationEntity(195U);
    msg.control_src = 32618U;
    msg.control_ent = 42U;
    msg.timeout = 0.631756457757466;
    msg.loiter_radius = 0.32534952436318476;
    msg.altitude_interval = 0.864009281494099;

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
    msg.setTimeStamp(0.6097440425357502);
    msg.setSource(7956U);
    msg.setSourceEntity(25U);
    msg.setDestination(44401U);
    msg.setDestinationEntity(227U);
    msg.flags = 160U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0476703972019894;
    tmp_msg_0.speed_units = 157U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5549917414915185;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9719896892476287;
    msg.lon = 0.8078972226790946;
    msg.radius = 0.15944982530521745;

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
    msg.setTimeStamp(0.5288045304208047);
    msg.setSource(47638U);
    msg.setSourceEntity(24U);
    msg.setDestination(28168U);
    msg.setDestinationEntity(243U);
    msg.flags = 11U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8280600338221468;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1900786777230158;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2053806298733062;
    msg.lon = 0.0976497506073879;
    msg.radius = 0.8506738100823735;

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
    msg.setTimeStamp(0.4166704312025985);
    msg.setSource(12334U);
    msg.setSourceEntity(37U);
    msg.setDestination(16555U);
    msg.setDestinationEntity(187U);
    msg.flags = 52U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.25901413026508135;
    tmp_msg_0.speed_units = 130U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11167415719368956;
    tmp_msg_1.z_units = 150U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7260783863714906;
    msg.lon = 0.6189497357246345;
    msg.radius = 0.2496256171414234;

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
    msg.setTimeStamp(0.6499783551766672);
    msg.setSource(54919U);
    msg.setSourceEntity(189U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(231U);
    msg.control_src = 26682U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 7U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8203094118937485;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4670425937194741;
    tmp_tmp_msg_0_1.z_units = 135U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.17320342871646344;
    tmp_msg_0.lon = 0.9899804590342512;
    tmp_msg_0.radius = 0.6073376577681284;
    msg.reference.set(tmp_msg_0);
    msg.state = 128U;
    msg.proximity = 172U;

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
    msg.setTimeStamp(0.30045392028778806);
    msg.setSource(25986U);
    msg.setSourceEntity(192U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(224U);
    msg.control_src = 53437U;
    msg.control_ent = 72U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 160U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2497063262311312;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4970464901904982;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.02291444269308296;
    tmp_msg_0.lon = 0.2489301960546495;
    tmp_msg_0.radius = 0.9696771603796851;
    msg.reference.set(tmp_msg_0);
    msg.state = 70U;
    msg.proximity = 215U;

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
    msg.setTimeStamp(0.2177245417080934);
    msg.setSource(58536U);
    msg.setSourceEntity(92U);
    msg.setDestination(60242U);
    msg.setDestinationEntity(104U);
    msg.control_src = 47529U;
    msg.control_ent = 99U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.25003853943621535;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.34080976044413425;
    tmp_tmp_msg_0_1.z_units = 87U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9108963116322237;
    tmp_msg_0.lon = 0.06454532494485188;
    tmp_msg_0.radius = 0.41103154006699727;
    msg.reference.set(tmp_msg_0);
    msg.state = 185U;
    msg.proximity = 35U;

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
    msg.setTimeStamp(0.7470413627999476);
    msg.setSource(43923U);
    msg.setSourceEntity(10U);
    msg.setDestination(37904U);
    msg.setDestinationEntity(166U);
    msg.ax_cmd = 0.1246999779305914;
    msg.ay_cmd = 0.29558008988452655;
    msg.az_cmd = 0.6221217023852659;
    msg.ax_des = 0.719559761745661;
    msg.ay_des = 0.5181478459956836;
    msg.az_des = 0.3924809361371534;
    msg.virt_err_x = 0.5499414129734478;
    msg.virt_err_y = 0.28955455299975463;
    msg.virt_err_z = 0.418347091849004;
    msg.surf_fdbk_x = 0.43285855611477086;
    msg.surf_fdbk_y = 0.4155034833259309;
    msg.surf_fdbk_z = 0.8295131618747399;
    msg.surf_unkn_x = 0.608829274484432;
    msg.surf_unkn_y = 0.8594620046382302;
    msg.surf_unkn_z = 0.536270266635572;
    msg.ss_x = 0.30800205325946417;
    msg.ss_y = 0.6268172433773624;
    msg.ss_z = 0.5433664433641775;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AFHEUEYEUBXQWXWQQYNRGDMNSRTLBRICBPRUIZWGRHNAKGWRRDTQTOBZCBUTBAPOSCOSAMMHVXLKHZQCTPNJLFAHEGVFTXZFCGWXFOOKOMYRJHGUKL");
    tmp_msg_0.dist = 0.3655571253100499;
    tmp_msg_0.err = 0.5107311384752958;
    tmp_msg_0.ctrl_imp = 0.49084500367180384;
    tmp_msg_0.rel_dir_x = 0.16569461953177456;
    tmp_msg_0.rel_dir_y = 0.4278229381662839;
    tmp_msg_0.rel_dir_z = 0.8706712907810294;
    tmp_msg_0.err_x = 0.4721484007744786;
    tmp_msg_0.err_y = 0.20331089109341394;
    tmp_msg_0.err_z = 0.8662886014970149;
    tmp_msg_0.rf_err_x = 0.7584038078048418;
    tmp_msg_0.rf_err_y = 0.8551006566690416;
    tmp_msg_0.rf_err_z = 0.7010028337569607;
    tmp_msg_0.rf_err_vx = 0.8865527605921238;
    tmp_msg_0.rf_err_vy = 0.5751405699616234;
    tmp_msg_0.rf_err_vz = 0.3978051200131053;
    tmp_msg_0.ss_x = 0.24520783572010463;
    tmp_msg_0.ss_y = 0.03870307341580226;
    tmp_msg_0.ss_z = 0.3648534847485302;
    tmp_msg_0.virt_err_x = 0.022830301550558096;
    tmp_msg_0.virt_err_y = 0.09916784320621597;
    tmp_msg_0.virt_err_z = 0.7535595915919678;
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
    msg.setTimeStamp(0.7928133145355342);
    msg.setSource(46890U);
    msg.setSourceEntity(49U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(187U);
    msg.ax_cmd = 0.6578848341997887;
    msg.ay_cmd = 0.08572428505775065;
    msg.az_cmd = 0.8342838698463837;
    msg.ax_des = 0.47149993889097674;
    msg.ay_des = 0.5185876813699756;
    msg.az_des = 0.41738110440981424;
    msg.virt_err_x = 0.09162762630000765;
    msg.virt_err_y = 0.8255449968665372;
    msg.virt_err_z = 0.7904460526179322;
    msg.surf_fdbk_x = 0.5657552614975168;
    msg.surf_fdbk_y = 0.9816522494976305;
    msg.surf_fdbk_z = 0.5125771232343401;
    msg.surf_unkn_x = 0.4394812410382315;
    msg.surf_unkn_y = 0.4764119874372753;
    msg.surf_unkn_z = 0.018901825303475173;
    msg.ss_x = 0.3987871732141054;
    msg.ss_y = 0.961785567281161;
    msg.ss_z = 0.9118073001875507;

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
    msg.setTimeStamp(0.536860495214332);
    msg.setSource(26163U);
    msg.setSourceEntity(33U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(104U);
    msg.ax_cmd = 0.4552324861242143;
    msg.ay_cmd = 0.9979870905688323;
    msg.az_cmd = 0.1641841720249666;
    msg.ax_des = 0.20423058201487365;
    msg.ay_des = 0.6410806534940773;
    msg.az_des = 0.3627944100052035;
    msg.virt_err_x = 0.4106821319266235;
    msg.virt_err_y = 0.8613629805144762;
    msg.virt_err_z = 0.7236961963503746;
    msg.surf_fdbk_x = 0.7671162545674549;
    msg.surf_fdbk_y = 0.9597676491815291;
    msg.surf_fdbk_z = 0.43466751118766234;
    msg.surf_unkn_x = 0.44299603721272707;
    msg.surf_unkn_y = 0.47957485581487536;
    msg.surf_unkn_z = 0.6983901087187486;
    msg.ss_x = 0.26663121719839333;
    msg.ss_y = 0.5047720712245465;
    msg.ss_z = 0.3273526885919168;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OVGYXVGBMLXJSSQIKXHCPDPKEWFYNQUMBNVJULBZUGOZKCUERQJ");
    tmp_msg_0.dist = 0.39295385167154573;
    tmp_msg_0.err = 0.9341426987246381;
    tmp_msg_0.ctrl_imp = 0.6756292138749397;
    tmp_msg_0.rel_dir_x = 0.05795982649698328;
    tmp_msg_0.rel_dir_y = 0.09647425491720274;
    tmp_msg_0.rel_dir_z = 0.2091903207356195;
    tmp_msg_0.err_x = 0.3241504086085589;
    tmp_msg_0.err_y = 0.01243044906182944;
    tmp_msg_0.err_z = 0.3837542490845649;
    tmp_msg_0.rf_err_x = 0.8655081866586201;
    tmp_msg_0.rf_err_y = 0.11116480416628582;
    tmp_msg_0.rf_err_z = 0.19863374715032212;
    tmp_msg_0.rf_err_vx = 0.1195375023311247;
    tmp_msg_0.rf_err_vy = 0.5981847879583099;
    tmp_msg_0.rf_err_vz = 0.7003510055221187;
    tmp_msg_0.ss_x = 0.5896767702839399;
    tmp_msg_0.ss_y = 0.0693007050299187;
    tmp_msg_0.ss_z = 0.6870274946816476;
    tmp_msg_0.virt_err_x = 0.6547588541598871;
    tmp_msg_0.virt_err_y = 0.3090252799264064;
    tmp_msg_0.virt_err_z = 0.9950948382919576;
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
    msg.setTimeStamp(0.7429440191566596);
    msg.setSource(63148U);
    msg.setSourceEntity(5U);
    msg.setDestination(38378U);
    msg.setDestinationEntity(153U);
    msg.s_id.assign("YGHZQCVBLRSKXNQTGAIRSNINUDAPNCBGHEBXCEOS");
    msg.dist = 0.09988157653735252;
    msg.err = 0.03800136312432845;
    msg.ctrl_imp = 0.9537203613912472;
    msg.rel_dir_x = 0.798274522483974;
    msg.rel_dir_y = 0.6596379619535345;
    msg.rel_dir_z = 0.2892854433675617;
    msg.err_x = 0.4030478493038806;
    msg.err_y = 0.3976449325897783;
    msg.err_z = 0.727222555996364;
    msg.rf_err_x = 0.4951184909170948;
    msg.rf_err_y = 0.5613570835290969;
    msg.rf_err_z = 0.9021298716841574;
    msg.rf_err_vx = 0.8914533926948043;
    msg.rf_err_vy = 0.040288643064309126;
    msg.rf_err_vz = 0.9707499357071221;
    msg.ss_x = 0.8393279514441133;
    msg.ss_y = 0.0842252885253898;
    msg.ss_z = 0.4054364314508764;
    msg.virt_err_x = 0.1110048060639155;
    msg.virt_err_y = 0.20580380234948836;
    msg.virt_err_z = 0.26018070576559926;

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
    msg.setTimeStamp(0.6134040894248239);
    msg.setSource(701U);
    msg.setSourceEntity(27U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(237U);
    msg.s_id.assign("STFAYGPQXXUFSKAHGBZISZKGEPBRNOLYBETOMYQKDPEFZLONDEWCHEKLKZDJPZSRQSTROPZWXLGJZJAJLRPNXKXYTLFQMXUQAIUFTHKRUMWLVYVKBRWXEMCOSSQCQBAERCHMNYICGIQOACUWEIWVTGHDNWWJMNZXRZNOEDRFHJMHUCONVBICOXAGUJTJIELCYJTTVPVVMGYBMADTILRWFMBQPFBDGVWISHHHPNYPGZUO");
    msg.dist = 0.6399083609222694;
    msg.err = 0.17106037726890244;
    msg.ctrl_imp = 0.02179843010949256;
    msg.rel_dir_x = 0.057696016332103306;
    msg.rel_dir_y = 0.6911859610112742;
    msg.rel_dir_z = 0.6838049262773058;
    msg.err_x = 0.596773415206689;
    msg.err_y = 0.7757482438152913;
    msg.err_z = 0.593501583922535;
    msg.rf_err_x = 0.4207953058238211;
    msg.rf_err_y = 0.4732685464845314;
    msg.rf_err_z = 0.23528129947364962;
    msg.rf_err_vx = 0.48157055599790466;
    msg.rf_err_vy = 0.8962410937356667;
    msg.rf_err_vz = 0.4684299091602897;
    msg.ss_x = 0.4544891264263825;
    msg.ss_y = 0.27048451393600703;
    msg.ss_z = 0.33314061024694785;
    msg.virt_err_x = 0.8633323564852636;
    msg.virt_err_y = 0.7622410194787027;
    msg.virt_err_z = 0.17938954258894224;

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
    msg.setTimeStamp(0.8621667881181895);
    msg.setSource(8977U);
    msg.setSourceEntity(113U);
    msg.setDestination(33434U);
    msg.setDestinationEntity(206U);
    msg.s_id.assign("QAHTNYMIAGCAJGZXNAIPUGUZUDRWYYEEPYUOMHBVZZKHYAKHZZKYJKCLMVCBHNXDWEGIKMTEFRGUILBFVWNFWSYBQFJNWLSDDBRWZPRPAPPQWSXOASTEYLKOOOEJOHJRGOIVSKUPQRATOJSMADPBTXBMRIVZXWVHTMFXEVCUADCTNMNFFLBOPJWDCBJHILXDUSIZGGQHFQKQCEQGSLYCSJFEKHQIRLJV");
    msg.dist = 0.8414923175592989;
    msg.err = 0.34082858263430693;
    msg.ctrl_imp = 0.6405851517817084;
    msg.rel_dir_x = 0.7186865943440343;
    msg.rel_dir_y = 0.032888847301142166;
    msg.rel_dir_z = 0.5501200322242545;
    msg.err_x = 0.625559217187242;
    msg.err_y = 0.015589065751327236;
    msg.err_z = 0.6927038366727939;
    msg.rf_err_x = 0.06536886681709553;
    msg.rf_err_y = 0.1084698340456477;
    msg.rf_err_z = 0.769157931524641;
    msg.rf_err_vx = 0.1640466937350311;
    msg.rf_err_vy = 0.05971009678755601;
    msg.rf_err_vz = 0.9133469664735603;
    msg.ss_x = 0.40025201764040075;
    msg.ss_y = 0.8428703683068142;
    msg.ss_z = 0.11061471134553014;
    msg.virt_err_x = 0.2774735085768265;
    msg.virt_err_y = 0.715020695442684;
    msg.virt_err_z = 0.8211101822475574;

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
    msg.setTimeStamp(0.758307631882713);
    msg.setSource(28264U);
    msg.setSourceEntity(201U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(25U);
    msg.timeout = 65384U;
    msg.rpm = 0.40234787226159685;
    msg.direction = 252U;
    msg.custom.assign("TZCEJYWNFKGTJGFCJDKENMNFLSXQGJEENWIOTMLUJDMFDUADKWHBVXYAHNNGBSEPCZDZKBWKOIWHVPEGUJINUGPZCRXRINBOMDZXHBICILCHEYPSLMYYGTOTMMISQSQOIEMCRXRBZECDFWQKU");

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
    msg.setTimeStamp(0.26149614815444666);
    msg.setSource(18579U);
    msg.setSourceEntity(102U);
    msg.setDestination(63652U);
    msg.setDestinationEntity(129U);
    msg.timeout = 59498U;
    msg.rpm = 0.9084137721670463;
    msg.direction = 246U;
    msg.custom.assign("UGWBGWMGSWRCPQFBIFWVYIVWBKHDLMAHIEGFCUJIGRYJYASZZKDGHVLNGVGDWZRSURAGKZQXFJZPCXFDTNIDOJIWLQOCMMCSBKBDKIERUMMQJQPZITJTHGPPYYSWMILREMETDFOJLOWUECXLLQAA");

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
    msg.setTimeStamp(0.9760389289163091);
    msg.setSource(50036U);
    msg.setSourceEntity(92U);
    msg.setDestination(35142U);
    msg.setDestinationEntity(129U);
    msg.timeout = 14804U;
    msg.rpm = 0.8126276845386197;
    msg.direction = 113U;
    msg.custom.assign("SQQVNDFQSIBALFUCK");

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
    msg.setTimeStamp(0.7696165672135088);
    msg.setSource(33136U);
    msg.setSourceEntity(141U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(65U);
    msg.formation_name.assign("DIZNYVXZCZNTVKILPXOTRUVTQOSUUBSNLSAYWLADZZQLHSJJMSNGQWXLIWEZGEMVAMGSXPCJJEZWBMFZKYDADMIUUFIYROUTIDJUXCMGBBVTFGXKKTHBJXTDNMRIWLQHYANCJCFKWORPIQQVZOCHQSHFEOECLMRRO");
    msg.type = 224U;
    msg.op = 55U;
    msg.group_name.assign("JPGYJHPDYGYUXVCUPRWVCWJDRPZYGMBTNHLSMCYSGZMCHVAHRXUFKBKYENNJHJGXXCZIWVUJRBDVYLXMKOFKBZGGKFWNAQTNXFGRKCYWKFCRHBWUNIPKQPMTK");
    msg.plan_id.assign("QBESJMEVYPBFGWZVEAL");
    msg.description.assign("WFJQONIXOMTMFXWQKYPQTWPIBZLBFUIRHYEBXKWMWYFWXAYWQTBKVLKCHXJJDHQARYUGEBYIRCRNSABHYQMKFIZETOGVBKBSHKLSVEDHCUEAKPFINYRDZPTDNXNZRUYEIYXXOOGLFKZSGUMSLNZAEIZRSZDDVRGMFZWXAFCQAOVJTIHTCMGPGGEQCQPNABWUUIVPOSLDCRGTOOLEZXEWNDQJPJTSMLFPSNVTMRUSPAHJDLVBUMJGJJU");
    msg.reference_frame = 140U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33375U;
    tmp_msg_0.off_x = 0.35941563747243044;
    tmp_msg_0.off_y = 0.8309846963759453;
    tmp_msg_0.off_z = 0.5931351624202249;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.30709519073595304;
    msg.leader_speed_min = 0.3778806232215982;
    msg.leader_speed_max = 0.3132274221455449;
    msg.leader_alt_min = 0.11061491322441142;
    msg.leader_alt_max = 0.1856157373833498;
    msg.pos_sim_err_lim = 0.4862384671372211;
    msg.pos_sim_err_wrn = 0.4148521804599614;
    msg.pos_sim_err_timeout = 17621U;
    msg.converg_max = 0.9296903682219072;
    msg.converg_timeout = 39845U;
    msg.comms_timeout = 39009U;
    msg.turb_lim = 0.10304292736937548;
    msg.custom.assign("JHTHQIMXJEYOQBNEQKZRUESTNAWKNBSBCBUBXTCBDZQOMMKQGJIFYVEGOROPZKTXNTYUXXKSDKFAZDZLROIYAPDMMFPQGOPKJQPEUJAROMKGDQHVIMCLRTXCYSVCPHXMTYRXIWFWVVWALBZUJNWHLFYXLSEWEDNIKCLGCZCJGAFSOEWHPWSWQUFTGOIMVVQFVRHNUKEIWULJPPYYGAEVBTBRLDPNRSMOH");

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
    msg.setTimeStamp(0.026191076107035638);
    msg.setSource(48751U);
    msg.setSourceEntity(94U);
    msg.setDestination(22516U);
    msg.setDestinationEntity(148U);
    msg.formation_name.assign("JVCJACWHQWYJBDBRJDBHNMICRATPERPQIGBZPYWPEMYITZAJMOLGAQRFKLVMBVJUHFVHMTBRJOWRSDACFOVZQIZRHVJEVYFXXYKOPRUHUILORNCWEDOCPZHKLWNHVKIMZFTQQQSABNSLPXVCGYQZWPXFOCFWLEDMNTDLTADYYOKXUGQNENUOECBKDD");
    msg.type = 194U;
    msg.op = 156U;
    msg.group_name.assign("LWHBNZILULQOQZJKMBXNJHWREXQRYZWUVBZJVLEXWAIGUHQQUROEWRLQDMTYTUDUCVUFDYGWREGJYHHNGSNIIGMLAMFDGBBBOLZOKKPTUOBF");
    msg.plan_id.assign("AZGZIFZSLXOTA");
    msg.description.assign("YKYHOWMDNMXFGVBBUAILSILIGWIECHVRHNDSCISETNAHUHOULJDYLSXZXJKWOWITPTQXPLMUXJOHOGGKOPQSWBSHCXDEWKKRXUTQASGFYCMVMLZMYPQYZ");
    msg.reference_frame = 205U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14587U;
    tmp_msg_0.off_x = 0.27478585843377434;
    tmp_msg_0.off_y = 0.9369899311309747;
    tmp_msg_0.off_z = 0.876834901555751;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.30094887874329757;
    msg.leader_speed_min = 0.29455775087624847;
    msg.leader_speed_max = 0.06502111930618648;
    msg.leader_alt_min = 0.24365791511154922;
    msg.leader_alt_max = 0.05488262650848341;
    msg.pos_sim_err_lim = 0.9202199899353446;
    msg.pos_sim_err_wrn = 0.5651584802676333;
    msg.pos_sim_err_timeout = 15105U;
    msg.converg_max = 0.2720629577815711;
    msg.converg_timeout = 54769U;
    msg.comms_timeout = 48443U;
    msg.turb_lim = 0.9054542375322686;
    msg.custom.assign("PCFTLJGRPJWVAUPJISYZZKQQKAFUEXRSAHOLCSWLYTGOEGOZJWLDJPFDYMXBOELVTIVJGESLQYFXAWGWOVOENRULIXLFDQKDMBMBKPPHXYQWRUXCGNJGEHTZBZZUUQERCOYSIBKNZBACBYNNLHCMFSVJHPKMYTOTQCEMQMWZXBOCWEAD");

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
    msg.setTimeStamp(0.9366009320541009);
    msg.setSource(15402U);
    msg.setSourceEntity(252U);
    msg.setDestination(36632U);
    msg.setDestinationEntity(154U);
    msg.formation_name.assign("YLCCJWIVBEQEQHPJIKQBRCXLNJPLBFZODKGBRWKJITQZBWCZRBUEFYFETSPVGDOGKWCTPITXRJFZUKPSCGJPOGVTHXNNRLATNYKSLMMWJZHUIKFEBMHXZPCZYZWMSOABYMXXRXNBSSHPTVGLR");
    msg.type = 143U;
    msg.op = 201U;
    msg.group_name.assign("ELFCYAOLJZTCJURELDFMJJINBWNYWFCPNKJEZOEFFVDDBONXTNMNHWZZUQPRXHIZSUTHECPSYLAUADGEFBVXVBMMTNERCBWWKHGHDQGPGOABRSQGBSHRIQQHJYPYORMDZBTNIDXSTYQKCDKMXYYHMZJAKPZUQUIBOOKTWLVAWSDTPRPWJIZVLSXHVFGUJKOIGTEOGFMGALQHVUEVILUSYL");
    msg.plan_id.assign("ZMYZVFCRHDGGLLDWDLAJFURHHCBYTVGYGZJNMYSQUPOGSIIYIQXQCVWMCCJAQPGAZUTNOKMZVWONPWHRTERDMOYSGYVMTAXFWEZMLTIFOESGPMDSYHIUSCATPUADOJEYUSUTRFORXWGGLQNBXERVRNEQFHCNDJBCP");
    msg.description.assign("PUFSCZEULGUKOUQLVFCGMOTMOPVSELWZMCJYRBLBHOYXKRLUHTEKPZQOEDGATNSPXHARCKBXHDVAQTJTMCAUCEJCDXKPSKMCQOFSWJOALWYMDIPHYUMVZLTNIKLNNIAQRQSJBWHTXEZRXVFCWDWMBWBRKUPXMJGHJBARTDZ");
    msg.reference_frame = 107U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16837U;
    tmp_msg_0.off_x = 0.07816248765684508;
    tmp_msg_0.off_y = 0.8388733897189542;
    tmp_msg_0.off_z = 0.878150659193724;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7675788030091147;
    msg.leader_speed_min = 0.6989340725064342;
    msg.leader_speed_max = 0.718914738192638;
    msg.leader_alt_min = 0.43989452957608066;
    msg.leader_alt_max = 0.6276845823943049;
    msg.pos_sim_err_lim = 0.7037893585085863;
    msg.pos_sim_err_wrn = 0.4753291968425305;
    msg.pos_sim_err_timeout = 46013U;
    msg.converg_max = 0.37002445409247053;
    msg.converg_timeout = 56238U;
    msg.comms_timeout = 8097U;
    msg.turb_lim = 0.4567120542138079;
    msg.custom.assign("XWRYGZXHQUDHLZIXCTBDVZMWKONCSRCNUIQNCDMSWXIKPVUEHGJEZEFLZAYTUWJJSPRBOBXRGSHYGRKFDZEPEILCFSOJXAUNBGEVWFBINDJMMGHEGEAOKBHXDALPRZFVKVASHUFCHKOAYPZEEOTLAFPMBQKRNTNJKJHSZXGNDWRFWJICVQJLKOMXSYQISYXCMAIVNYRTC");

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
    msg.setTimeStamp(0.8234225877756624);
    msg.setSource(50434U);
    msg.setSourceEntity(98U);
    msg.setDestination(51822U);
    msg.setDestinationEntity(237U);
    msg.timeout = 8866U;
    msg.lat = 0.5378208557027407;
    msg.lon = 0.3373664856339431;
    msg.z = 0.5152247412865903;
    msg.z_units = 179U;
    msg.speed = 0.20792761006157634;
    msg.speed_units = 3U;
    msg.custom.assign("QJSSYLVLTSLJNHIRZTRHRQJNESWFIZZKPGWGEDUESRAQYYGEUENEQBIHVBRYKBZFCMHSDFPRUABLGIJTZYACYQBEYZTLQDMW");

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
    msg.setTimeStamp(0.1195654527261184);
    msg.setSource(31568U);
    msg.setSourceEntity(83U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(37U);
    msg.timeout = 39428U;
    msg.lat = 0.70646107190525;
    msg.lon = 0.8814233097535334;
    msg.z = 0.07839687634932235;
    msg.z_units = 84U;
    msg.speed = 0.6694175380549154;
    msg.speed_units = 42U;
    msg.custom.assign("KWMBSTRNPAUSOSTTWJURJNMNWGFCBBLPLNELJKQXFTCDRNJRGSGJCHJQGTECDWVKTIXRALR");

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
    msg.setTimeStamp(0.03127526566404559);
    msg.setSource(59552U);
    msg.setSourceEntity(129U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(116U);
    msg.timeout = 50703U;
    msg.lat = 0.3174112543147334;
    msg.lon = 0.9117538423276084;
    msg.z = 0.8149707298973519;
    msg.z_units = 203U;
    msg.speed = 0.3705411597596242;
    msg.speed_units = 237U;
    msg.custom.assign("YPHJMYUOLQPAMKFHEMKEVCANWSVADMMWNFPRNWJLDVJYXFBZMJDCIGNVUSLBHYPXDRGPWSFTAGCKTITUGSGMRJSPVCZNYQRWYVBZAZ");

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
    msg.setTimeStamp(0.7340183847336373);
    msg.setSource(14783U);
    msg.setSourceEntity(222U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(3U);
    msg.timeout = 11917U;
    msg.lat = 0.26375461616077633;
    msg.lon = 0.2202867507875449;
    msg.z = 0.02575019867479067;
    msg.z_units = 9U;
    msg.speed = 0.7943300128109319;
    msg.speed_units = 197U;
    msg.custom.assign("WPFUZWJKTRLSFPCJLKLIAFCLISFAKRZQUDBMJWNQPZFWVPZOKTGBCRMU");

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
    msg.setTimeStamp(0.7081608531505044);
    msg.setSource(17880U);
    msg.setSourceEntity(155U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(191U);
    msg.timeout = 44164U;
    msg.lat = 0.5072007759982616;
    msg.lon = 0.009497116952971951;
    msg.z = 0.21702772680125593;
    msg.z_units = 92U;
    msg.speed = 0.6812482726606199;
    msg.speed_units = 117U;
    msg.custom.assign("MKZJHHLEJDXJUJJUIOXMMKASSWLHHMXWRLPFYBERVEZQGWCNPIAQDWUFPNSVVSAVFCMDTXYDYBDDVEUBLXRQGMILHXGOGECAYBOIHTQOXIHMOXZSRYYJZCPYQDWTIQPTLOBSPZNRKZGOCGCAZBMTAGPLLFEUCJUZUJQVANCBKGKFPNFISOTWUHERTNLOTWSZRACCTFNKDWKDGOXWQFLIMVAYDIVSSPBFIKFWTYRQBZPJQUEHKJRVEHANVKB");

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
    msg.setTimeStamp(0.9823929741336097);
    msg.setSource(48776U);
    msg.setSourceEntity(203U);
    msg.setDestination(32459U);
    msg.setDestinationEntity(220U);
    msg.timeout = 55729U;
    msg.lat = 0.6231391992754401;
    msg.lon = 0.6862830754017012;
    msg.z = 0.43554655132720665;
    msg.z_units = 186U;
    msg.speed = 0.08145660925493459;
    msg.speed_units = 144U;
    msg.custom.assign("PDUYIFDYFTUOZGCUPSHRCHOMTQEOMFLZEVXLSRSVHFHQJIOGUDTUVBQBXTZWIZTKRHOBFXHMXBTWPTVRCZIKBZCXNWYWRCGIPHKKLHOEGVLSARAZVPKATCAQTNXSJNORNSFI");

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
    msg.setTimeStamp(0.9637478552381581);
    msg.setSource(46613U);
    msg.setSourceEntity(72U);
    msg.setDestination(7124U);
    msg.setDestinationEntity(17U);
    msg.arrival_time = 0.8216492138125249;
    msg.lat = 0.8162770653685432;
    msg.lon = 0.9752611005883158;
    msg.z = 0.5424007993550513;
    msg.z_units = 163U;
    msg.travel_z = 0.5975050686234874;
    msg.travel_z_units = 26U;
    msg.delayed = 19U;

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
    msg.setTimeStamp(0.9235105552005235);
    msg.setSource(60901U);
    msg.setSourceEntity(7U);
    msg.setDestination(29542U);
    msg.setDestinationEntity(99U);
    msg.arrival_time = 0.38106266374891085;
    msg.lat = 0.23543217521922455;
    msg.lon = 0.0593350782563119;
    msg.z = 0.6005272068147799;
    msg.z_units = 115U;
    msg.travel_z = 0.32283294399009876;
    msg.travel_z_units = 223U;
    msg.delayed = 234U;

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
    msg.setTimeStamp(0.40679133911017973);
    msg.setSource(20027U);
    msg.setSourceEntity(181U);
    msg.setDestination(8399U);
    msg.setDestinationEntity(21U);
    msg.arrival_time = 0.5358154739248523;
    msg.lat = 0.08184104924532776;
    msg.lon = 0.6703359060391175;
    msg.z = 0.2382362320780983;
    msg.z_units = 167U;
    msg.travel_z = 0.5024063287329528;
    msg.travel_z_units = 173U;
    msg.delayed = 101U;

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
    msg.setTimeStamp(0.405339236496179);
    msg.setSource(30562U);
    msg.setSourceEntity(152U);
    msg.setDestination(55950U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.948645459490649;
    msg.lon = 0.1730493562203187;
    msg.z = 0.37464861292048424;
    msg.z_units = 146U;
    msg.speed = 0.16877202428961813;
    msg.speed_units = 218U;
    msg.bearing = 0.6356271813025702;
    msg.cross_angle = 0.35482653621934035;
    msg.width = 0.895374078362554;
    msg.length = 0.17011828415045915;
    msg.coff = 158U;
    msg.angaperture = 0.7679014912861025;
    msg.range = 46156U;
    msg.overlap = 186U;
    msg.flags = 121U;
    msg.custom.assign("YOAXUFCDPUCUGDNPHSHDIVEWXYQBUMRSTZROMIENXBJADBIGCTUSRVSAPNDOUQJZDBLXIQOLBAFMGHEEWTPLFIOJZIKXALZKMHIJPVTTVGBNTPUTXRUXKTZSCRWZGNMCSDNTPNLLEQNPVVWEYKRSCECYVWRHJSFHQHWJNGJAMTYCFXRFMLZPHKKWEADJRAOYZDOLISSBAEFOQQGBWCWQGVMOIVKQVYRZNFGMYLIDKQUEZXXOALBHYYJKHU");

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
    msg.setTimeStamp(0.7577250008074873);
    msg.setSource(38908U);
    msg.setSourceEntity(101U);
    msg.setDestination(32330U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.16792845114486366;
    msg.lon = 0.5163092195817695;
    msg.z = 0.8515525545786026;
    msg.z_units = 169U;
    msg.speed = 0.06003436761962755;
    msg.speed_units = 155U;
    msg.bearing = 0.9727979592879896;
    msg.cross_angle = 0.04005127286181731;
    msg.width = 0.6579875861334432;
    msg.length = 0.37860117057312315;
    msg.coff = 220U;
    msg.angaperture = 0.8573869694149366;
    msg.range = 14298U;
    msg.overlap = 188U;
    msg.flags = 162U;
    msg.custom.assign("OFIDKQDKQJQRBNLVTMCGUBBPNMMVPBSQUGHLYMTLAFCWOJXNZGZCZVRNPYETVIXLQCOIHBZDXRBDKUJKSDGENALWPOVWYUCBWSKZCGOAGQEUPP");

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
    msg.setTimeStamp(0.022363009950701507);
    msg.setSource(55107U);
    msg.setSourceEntity(158U);
    msg.setDestination(62326U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.12827250224706288;
    msg.lon = 0.32575380240615104;
    msg.z = 0.7951601028788324;
    msg.z_units = 119U;
    msg.speed = 0.8865416925991844;
    msg.speed_units = 194U;
    msg.bearing = 0.6923179588023021;
    msg.cross_angle = 0.3910135248087092;
    msg.width = 0.8056666150318658;
    msg.length = 0.5618397941109472;
    msg.coff = 254U;
    msg.angaperture = 0.09822967509144898;
    msg.range = 50208U;
    msg.overlap = 114U;
    msg.flags = 157U;
    msg.custom.assign("ZLPUQGWAOERHMIIFMRETHSNLMCRYDOMJRLBALIRPYYOHVJKYFLBABTFGWTVSXDSGPWSZUQRPDNGWBWTXABHFVILMNTJIJXMKYIXDUQGEMVKPYHQCJOXEITWBYCYVZFTFGPHIUTADHYCUCVUXDZPLZJIEQGQRSNSJOZQGHGZVKKCBDUSJNNFBASQRRFUNEBVTJ");

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
    msg.setTimeStamp(0.9638911035437187);
    msg.setSource(11873U);
    msg.setSourceEntity(87U);
    msg.setDestination(33979U);
    msg.setDestinationEntity(191U);
    msg.timeout = 35578U;
    msg.lat = 0.731764607131718;
    msg.lon = 0.5413842137934967;
    msg.z = 0.9803418059726053;
    msg.z_units = 195U;
    msg.speed = 0.01800242640762717;
    msg.speed_units = 36U;
    msg.syringe0 = 196U;
    msg.syringe1 = 248U;
    msg.syringe2 = 36U;
    msg.custom.assign("UDEBMQAIWTOOPWEZGUAFTXQJJDFBYQAQZFBVEOHGI");

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
    msg.setTimeStamp(0.2625445421423688);
    msg.setSource(22132U);
    msg.setSourceEntity(98U);
    msg.setDestination(55036U);
    msg.setDestinationEntity(23U);
    msg.timeout = 17847U;
    msg.lat = 0.33952140695590594;
    msg.lon = 0.7681349854353964;
    msg.z = 0.45492185940114815;
    msg.z_units = 175U;
    msg.speed = 0.09361210994331381;
    msg.speed_units = 214U;
    msg.syringe0 = 136U;
    msg.syringe1 = 229U;
    msg.syringe2 = 79U;
    msg.custom.assign("LKSJHWYADLMXIZLKAOZARIEIQYAQQEHGOGROINEZODPWSXYDZGYCUWMAHJGZUIETWXCFLAMQUCKIDAGIJUFWGQJPHOKLXPVOPVDRGYFDFNHTNZTGXRFECCSPBHIFSOXTKBDDGVRPJVLNNSXTMKOQSIHWCNFBABUVMSIMCJQNRKPJUEKTSHLBYAOBUVKPSRTHQUTSFVFWLY");

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
    msg.setTimeStamp(0.7233474826814472);
    msg.setSource(23058U);
    msg.setSourceEntity(132U);
    msg.setDestination(14756U);
    msg.setDestinationEntity(198U);
    msg.timeout = 10625U;
    msg.lat = 0.24076677670982782;
    msg.lon = 0.6631040364658651;
    msg.z = 0.5022158511145717;
    msg.z_units = 225U;
    msg.speed = 0.21337222199243477;
    msg.speed_units = 214U;
    msg.syringe0 = 161U;
    msg.syringe1 = 242U;
    msg.syringe2 = 16U;
    msg.custom.assign("WYRJSGCMRNIHACJLFJOQSBJCHBCUTCLWMPPYCVYVHUFNSYDRXIIVAXFLUWQHCIFPZIYMO");

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
    msg.setTimeStamp(0.04059865800573448);
    msg.setSource(46726U);
    msg.setSourceEntity(216U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.4022918891172713);
    msg.setSource(5236U);
    msg.setSourceEntity(212U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.8352909859210742);
    msg.setSource(49162U);
    msg.setSourceEntity(51U);
    msg.setDestination(46275U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.7170860257392822);
    msg.setSource(2374U);
    msg.setSourceEntity(0U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.041320257137470784;
    msg.lon = 0.643886787279132;
    msg.z = 0.5573784665110526;
    msg.z_units = 98U;
    msg.speed = 0.4757014832808336;
    msg.speed_units = 37U;
    msg.takeoff_pitch = 0.9508579698480095;
    msg.custom.assign("DOOAIYGYNTUEUOJNNENSWQDAMIVZZUYJCHCZJQRCDLYFQMDEJXVMTMHYJUHSPWITWOCBNGOGPTKPXUVSHVIRHFYQFGJBPKFZUDJLRWRCKVOXRSXZCLEIQQBPVDWFCGOVQDWZAFLXBRZRZAPFRUKWXUHLYBJLAMMQIAJEGOABLRSSYUNAG");

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
    msg.setTimeStamp(0.967386641902274);
    msg.setSource(21410U);
    msg.setSourceEntity(131U);
    msg.setDestination(57904U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.2661408203875947;
    msg.lon = 0.841246438418511;
    msg.z = 0.6944493918565385;
    msg.z_units = 67U;
    msg.speed = 0.3014123515356236;
    msg.speed_units = 194U;
    msg.takeoff_pitch = 0.9409346924706431;
    msg.custom.assign("TOVHZEKRBWBZAQKEBUSGSVWHEGORHAKGLEVWIXWKMSNCWBKMCNMEJKEALPMRWUSQVBALLLIJXZBTIGKCYURQIXINHRHOAYNMQOSDSUPCPMOUDTXQQZC");

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
    msg.setTimeStamp(0.7486055652491295);
    msg.setSource(15133U);
    msg.setSourceEntity(132U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.9462734879018392;
    msg.lon = 0.05295410821950286;
    msg.z = 0.6239890315573295;
    msg.z_units = 6U;
    msg.speed = 0.9398361304231824;
    msg.speed_units = 135U;
    msg.takeoff_pitch = 0.9617891880479101;
    msg.custom.assign("ALAACHBSTTDRYEVWZSXKEESWIPMZFYYPGBLQBVFFISMJSHSQGGFFYQHAZNGLWTDJZKFRONBRPXPBGPQ");

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
    msg.setTimeStamp(0.5875305134430726);
    msg.setSource(18473U);
    msg.setSourceEntity(242U);
    msg.setDestination(62435U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.9070792272009554;
    msg.lon = 0.4773069790023927;
    msg.z = 0.1357746530337025;
    msg.z_units = 3U;
    msg.speed = 0.8652637449428652;
    msg.speed_units = 175U;
    msg.abort_z = 0.34714020814072866;
    msg.bearing = 0.5834392344362868;
    msg.glide_slope = 224U;
    msg.glide_slope_alt = 0.9423899172807614;
    msg.custom.assign("POHRGHFYUSILJQMVIDGIDIABGKTYNFIISTXAFMWQRXXJXXFZGKXWWCAEIGRUMCEPZOORPJDWLUWDLQJAUDNZMAIPKMUCMXAYPSYSZLGZDKBEZTPOXNMUNNGOTNOEKYBHNJVHKTKADHSZE");

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
    msg.setTimeStamp(0.8949415328744356);
    msg.setSource(43747U);
    msg.setSourceEntity(199U);
    msg.setDestination(33841U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.14775163469564034;
    msg.lon = 0.7940655753779643;
    msg.z = 0.7318750010856604;
    msg.z_units = 108U;
    msg.speed = 0.7746653869732071;
    msg.speed_units = 217U;
    msg.abort_z = 0.15668463355267737;
    msg.bearing = 0.5888062362907216;
    msg.glide_slope = 145U;
    msg.glide_slope_alt = 0.6154263815859274;
    msg.custom.assign("HCQZVWTYNOVPOOQAKHACGFPYRXIHTDVBSUKVYMLUHZHTUJJRUOUSCCFCWLDESUDQONFNQZLFLLKAJLGUBSQAVMYNIWMJIDVAAGQBTWGLIPLHXQGVXWZUJZMJFMTKYJ");

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
    msg.setTimeStamp(0.02509107079286854);
    msg.setSource(58907U);
    msg.setSourceEntity(167U);
    msg.setDestination(25276U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.9210130344825613;
    msg.lon = 0.45416258028444634;
    msg.z = 0.21511034835006848;
    msg.z_units = 119U;
    msg.speed = 0.02746525214284501;
    msg.speed_units = 128U;
    msg.abort_z = 0.3390678081726858;
    msg.bearing = 0.671331004374989;
    msg.glide_slope = 155U;
    msg.glide_slope_alt = 0.5147709332550748;
    msg.custom.assign("YOVTKDOIPWCALHYQZCSSFIVXDLZMJWEDFSPGDHEUNNZOVLP");

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
    msg.setTimeStamp(0.7391849380597904);
    msg.setSource(55396U);
    msg.setSourceEntity(33U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.9064818095843084;
    msg.lon = 0.8877976610339506;
    msg.speed = 0.3301611179339534;
    msg.speed_units = 58U;
    msg.limits = 102U;
    msg.max_depth = 0.36750075404521076;
    msg.min_alt = 0.9034537451990369;
    msg.time_limit = 0.31310870341974084;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.34901921334224806;
    tmp_msg_0.lon = 0.0029392102283345434;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NODPYDRUZZXYORSLMECFB");
    msg.custom.assign("WHIATISLENWXDFMYVSPEHXDFGTAXPUCIMHNCRESTYANUXCHJKIKZKIQGYXTESQVMCHDOGJXVCUGFQUSIAPLQKZRNSKAZBTOFVSBZZKRQSDKJJOVPMAOVEFKCFEQDJYFXRUEUBLBDIVBVZJTWTAYQPRWVWJXUDOXGMNLJHFZIGGLYBJMWAYMFBLRZCQRBNPPWRKNHOT");

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
    msg.setTimeStamp(0.9045695491172195);
    msg.setSource(45545U);
    msg.setSourceEntity(163U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.03170182897061713;
    msg.lon = 0.7916673471320691;
    msg.speed = 0.1636128649357791;
    msg.speed_units = 2U;
    msg.limits = 211U;
    msg.max_depth = 0.12243976958665315;
    msg.min_alt = 0.15101219695891122;
    msg.time_limit = 0.28667410531770665;
    msg.controller.assign("KLTBAHPTPBKRFEGDNAYIQWUOXTACAIWXTEDDCZORIQEQAMVKPBOYNBYGNBZRMVOFSGXJUTBHKQCNXHJTZZ");
    msg.custom.assign("TBVIKUJOFQQHVEWYBIANNQOVRVPHLPFJFNHSKZOBSUMDCJPCRETGNPEILBCBWEYYHDUFZFLRUFEQBFPAACQRKKCKSIYXHMLIXAQAIGGKDZNZPSXVRZGYZAMRSWXBLJBOGOPWNRMOMYASDNLSUTAMWOYYQUFTGZKCDEJTBJQSXWLNCCDGYETXVOIAEJUHTHFHLSDLUZMJJZRLEMZ");

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
    msg.setTimeStamp(0.3421080204234791);
    msg.setSource(19030U);
    msg.setSourceEntity(216U);
    msg.setDestination(3696U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.11142739509507416;
    msg.lon = 0.3444613022503433;
    msg.speed = 0.4007331180080501;
    msg.speed_units = 35U;
    msg.limits = 82U;
    msg.max_depth = 0.22471203398060302;
    msg.min_alt = 0.08186619704924858;
    msg.time_limit = 0.7049219988998487;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7034654358854358;
    tmp_msg_0.lon = 0.06625654425225336;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("VVMROKKZVOQDDOGCHNIQKWSTCKCAGWWSPBPYZHLBIVZVIXZKGRMLRKXLZBMTGUBCRXTQLMXFGFZMUPXUJMJWNYXNIYBHDYOFQVLHKEJTMSHZUBTWPXLDZYZEQESHYEGONXQYIAUAFSYRPFVDLKJJDIYSYUAPEAESWFSCLKOXCBBWOBZSETJDAPNAVDMMLMCTATAWFWINGJXO");
    msg.custom.assign("VZIIACPFJCMTAVUQKPDKDNCAGCZIFUPAVDHWQNKMLTZLGJFOTEFXZSPOBRLCYMMYULKNCXPHBYNGLRMDBLHGEGYYSBNTWYRSXSKJ");

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
    msg.setTimeStamp(0.25815120785111756);
    msg.setSource(40222U);
    msg.setSourceEntity(20U);
    msg.setDestination(57172U);
    msg.setDestinationEntity(156U);
    msg.target.assign("WYINSKTVTZPYITRBKIEHNNXDQDPOQRYCBOGVAZOFXHMKLRNPVSJEZVBERPOEHERKCAPJRXWHJDNKSGKBPHRFZMMUFBLSYYOMDIOQALAVXRWXOJJGEAGNRGLQXWGWESDIKDWZMJLJAHPNUFWZYEUNDCPBGMUKCIHPLTMHVHFKQUQMTYUYUQTXVOQYKZCMGBXVWBGCACBSTYFFNHFLQLVXZILTJPSJMFGIQFNZBVWWDECZDESDAOL");
    msg.max_speed = 0.07348600562065855;
    msg.speed_units = 171U;
    msg.lat = 0.261198003997018;
    msg.lon = 0.49040634692731566;
    msg.z = 0.7679481847485344;
    msg.z_units = 216U;
    msg.custom.assign("ODHRIFPIBOUGKRGJUUBRZYKQRJLWDVPNDSXFDTGVCCOGAPWZMIUIQMAMIVJWFVSDTFEASMYZLPFYTEAYUZDHOVVYJXGRXMCHTXEGYPTARJDORIATMBTOVJKBEVIFPYEYXJCOZYKXWNBKGWZUVMKUHWCXXFPXTMWQQKRQZWROSMACOBIDHCJAPCXRNZCBNUGQHSQLTSAJLIIPUNSKLDNHHQGSQCNJSV");

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
    msg.setTimeStamp(0.6479365404182501);
    msg.setSource(5013U);
    msg.setSourceEntity(245U);
    msg.setDestination(7706U);
    msg.setDestinationEntity(250U);
    msg.target.assign("AVIONHBAZOKMAEKPSNJMHDZSGORESDTKWUUCPJYKSLFBGRJFTUYOQOQEOEXEJMILCREYRGWQBCWXAHWUZSQNZQNMUDRTVCQKTFDRXQOVEBCLDKTLOUSRQDUPBRZXAYUEVXIANYDJAJZICYPBMPLTFRFZHIXJEDWGIVRSVNTMMXVCJCVIJ");
    msg.max_speed = 0.8218424503631406;
    msg.speed_units = 208U;
    msg.lat = 0.8169439800295702;
    msg.lon = 0.7333740000100596;
    msg.z = 0.3684056170011808;
    msg.z_units = 90U;
    msg.custom.assign("KWXGGLSMNSAAQQT");

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
    msg.setTimeStamp(0.6312795289420583);
    msg.setSource(49538U);
    msg.setSourceEntity(0U);
    msg.setDestination(27474U);
    msg.setDestinationEntity(122U);
    msg.target.assign("AGMIJGMCUZE");
    msg.max_speed = 0.3944173538074417;
    msg.speed_units = 119U;
    msg.lat = 0.19298072581835513;
    msg.lon = 0.3925576049153541;
    msg.z = 0.18623460467026776;
    msg.z_units = 115U;
    msg.custom.assign("MURHLAELVSJBVYVHKQEEUSHVOQMIVSTBRADUXCTXYSLEUUCLFXDDOGSPVWEINHPNWPJDGWDDZGNCKWMXPGNLNMNRZG");

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
    msg.setTimeStamp(0.525776042265823);
    msg.setSource(63251U);
    msg.setSourceEntity(84U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(95U);
    msg.timeout = 38576U;
    msg.lat = 0.060913229448073425;
    msg.lon = 0.8290677499218373;
    msg.speed = 0.5505923858695834;
    msg.speed_units = 107U;
    msg.custom.assign("PTOVLLAOUOECWFRBCPLQFOQFCDBEYWXOLZFUMLLHWGQMARSHGTUDFSOTLUJUZV");

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
    msg.setTimeStamp(0.912724954090309);
    msg.setSource(64000U);
    msg.setSourceEntity(45U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(228U);
    msg.timeout = 3364U;
    msg.lat = 0.7479719125973042;
    msg.lon = 0.98279568780823;
    msg.speed = 0.6270423650066455;
    msg.speed_units = 50U;
    msg.custom.assign("FXEGTGRLALEKKJJICFYHKDBHXXSOOZQREQQDJKLEENGZPHUWTWYFPKCVVUFIHWMENPMJNMCMSODAXNENVVHFACDHWUZTLOENTOCIVWUGZUBIXLRHKTCDLPJUNGWVOYZLXASUBBVPEBSDIMSGXRITQGYMYBQYQZIUFFEQKLOIXTDIYCCZUAJAWBHYCAIJGRRDRXHZABKBLPAOCPSSMMFWDURWKPSLQMKNYGOHYTNBQZZPVWTGTFARN");

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
    msg.setTimeStamp(0.4085045735748992);
    msg.setSource(58083U);
    msg.setSourceEntity(76U);
    msg.setDestination(4585U);
    msg.setDestinationEntity(198U);
    msg.timeout = 31238U;
    msg.lat = 0.1888584369770464;
    msg.lon = 0.3418142270214386;
    msg.speed = 0.29567172601180425;
    msg.speed_units = 152U;
    msg.custom.assign("SMVMADXVATBUPZXASORKWFHVJRHTEFXUCMLCXWZZXGALHDEPIEJVRVQLHQHTPFFZSWVAARUHOOPDGPCYFQXFCXEUGRNEMZQJSYQLWCBWSNZOVWNPNIBEATOMDOFTRREYIGWMRDYYSYJXOJBRGBMRIYOEDLBWVDBZIGTLPKCQXEYKUUXGJFAUDGFSGNIKGPJMT");

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
    msg.setTimeStamp(0.812150222108022);
    msg.setSource(45443U);
    msg.setSourceEntity(150U);
    msg.setDestination(38057U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.056763640805933546;
    msg.lon = 0.9327015192255234;
    msg.z = 0.6610796309733327;
    msg.z_units = 20U;
    msg.radius = 0.7174823567865134;
    msg.duration = 43208U;
    msg.speed = 0.5474749513818193;
    msg.speed_units = 136U;
    msg.popup_period = 64057U;
    msg.popup_duration = 60005U;
    msg.flags = 204U;
    msg.custom.assign("YNQIESOCOONLTPZCMUTLSJRYSYUGDPUSTQLQENARHWNOHDNLYMFWLGAJHDKVOTSEUYLJFCOHKXGPGHAROIVWGQE");

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
    msg.setTimeStamp(0.2858439159988382);
    msg.setSource(58074U);
    msg.setSourceEntity(39U);
    msg.setDestination(25857U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.4352556280407618;
    msg.lon = 0.22323694763421686;
    msg.z = 0.20222753636719426;
    msg.z_units = 227U;
    msg.radius = 0.2748676405631606;
    msg.duration = 44233U;
    msg.speed = 0.3058707566826735;
    msg.speed_units = 101U;
    msg.popup_period = 27789U;
    msg.popup_duration = 55791U;
    msg.flags = 165U;
    msg.custom.assign("GWMJIREXTVOQSKLKURHZ");

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
    msg.setTimeStamp(0.9888125705587231);
    msg.setSource(58980U);
    msg.setSourceEntity(204U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.3319651978269824;
    msg.lon = 0.1414334176947969;
    msg.z = 0.3962535949184509;
    msg.z_units = 244U;
    msg.radius = 0.238358158139523;
    msg.duration = 4344U;
    msg.speed = 0.36152628152887034;
    msg.speed_units = 215U;
    msg.popup_period = 15967U;
    msg.popup_duration = 58944U;
    msg.flags = 84U;
    msg.custom.assign("VNUEANKFYZGAZOFDWLDRFLJVQZQOVOSSTROOQPAPAMVKAHFWISMRKKYCTCLHGVWXLMCRCJOPUKMSEHJRCFJ");

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
    msg.setTimeStamp(0.3473741807065175);
    msg.setSource(16083U);
    msg.setSourceEntity(48U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.25286813487579696);
    msg.setSource(55261U);
    msg.setSourceEntity(54U);
    msg.setDestination(7822U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.7448097744927658);
    msg.setSource(46825U);
    msg.setSourceEntity(61U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.9406925600958816);
    msg.setSource(21146U);
    msg.setSourceEntity(218U);
    msg.setDestination(36387U);
    msg.setDestinationEntity(122U);
    msg.timeout = 62236U;
    msg.lat = 0.7035310188968417;
    msg.lon = 0.5227036280101923;
    msg.z = 0.17642667005537283;
    msg.z_units = 71U;
    msg.speed = 0.5018536056663099;
    msg.speed_units = 22U;
    msg.bearing = 0.22071879569276864;
    msg.width = 0.3815693197297185;
    msg.direction = 161U;
    msg.custom.assign("UCQYVRKZQNYSUBYXQOEURMLOWWUPXMEOPLEMKLYVBEXJWEDDJITXLDOIMWKRJTWRBAHHLFLPCPZICFMSKRUCGPYWTGZTH");

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
    msg.setTimeStamp(0.22596562327796854);
    msg.setSource(7516U);
    msg.setSourceEntity(242U);
    msg.setDestination(7323U);
    msg.setDestinationEntity(217U);
    msg.timeout = 34686U;
    msg.lat = 0.161888161685813;
    msg.lon = 0.005266243473405652;
    msg.z = 0.8423331027207678;
    msg.z_units = 70U;
    msg.speed = 0.3585572377034425;
    msg.speed_units = 66U;
    msg.bearing = 0.8466697827418036;
    msg.width = 0.14713309365306582;
    msg.direction = 161U;
    msg.custom.assign("NNBXGAIDEIJQBFISBUKVFYGVFHLMCTNTANDERJWPDDJVSMOGDLGZHQHZW");

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
    msg.setTimeStamp(0.2997617689011032);
    msg.setSource(13465U);
    msg.setSourceEntity(24U);
    msg.setDestination(34410U);
    msg.setDestinationEntity(151U);
    msg.timeout = 25585U;
    msg.lat = 0.6769065003954923;
    msg.lon = 0.39102336875218513;
    msg.z = 0.30156004721846885;
    msg.z_units = 33U;
    msg.speed = 0.5697847050771236;
    msg.speed_units = 72U;
    msg.bearing = 0.6274392425865499;
    msg.width = 0.95822095162256;
    msg.direction = 188U;
    msg.custom.assign("IPCUKYGWQZUJBACZUBEGPIVJQLMDHOMRDAJIFOQIYFDXFBAIE");

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
    msg.setTimeStamp(0.9043494604736927);
    msg.setSource(65001U);
    msg.setSourceEntity(166U);
    msg.setDestination(13146U);
    msg.setDestinationEntity(129U);
    msg.op_mode = 245U;
    msg.error_count = 218U;
    msg.error_ents.assign("BVRUJOFUALBYBLCHMVYPAXRDSDUUDDQABXWDECASFZTZHGXRYFKPCUVONHHYOZPHLACYRPYOKIWMCRDFOCKCGIPGUULESQJBIEHXWMGNTLSTFQVJTEJNVDQXHBYYGZWXNGSIRWMXVPJNHKARIKZKMYSFOVNDFDWXDJQAITSJEWOGOMFQXOERQMQPCEUMLEIIPBUUTZTNSPMATVAQKGCJVVCXWIWKRLZONQKABSJMGPYLIETNHKZETGBWFLBLS");
    msg.maneuver_type = 52339U;
    msg.maneuver_stime = 0.597518413140814;
    msg.maneuver_eta = 26426U;
    msg.control_loops = 4011009529U;
    msg.flags = 100U;
    msg.last_error.assign("IWKUGDCAFSVCBYROTGWKBXJKZCAAPFUEQPEIEZNUKWJFYZRXDPFEJNVCDOXUXMHEBEGNFDRCNLYFPQBUJNSOTQAHOLRYRIVVISTGTHGNCLAHOAHSOCXZJQWZCAJMMZIMMOXGLQLGTDVTFHIVAPINWBHQFNDFJSPKORVIQZKRGYPLOYIXTHKLSBEZLXHYWWQEQMPNBZSIKBMXSJTQBRDLUACAM");
    msg.last_error_time = 0.36797393695556424;

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
    msg.setTimeStamp(0.3673861679014574);
    msg.setSource(59850U);
    msg.setSourceEntity(131U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(38U);
    msg.op_mode = 217U;
    msg.error_count = 157U;
    msg.error_ents.assign("PONEYGNYMODMIGRJDLRMDQKRWOYPHEGNAYYMPCTQWUWYKLFJWDQKZFUQLCYANAGFVTBXIFLRQAQXVKHGORSQMTNUOFRKBMHVSNAEBSPBXIBKIWHECGANLSJPUZCCFVDCIZKWPNFMDRUMZUDCAGQSPRYGGIVCWHBZZXEJDJZSOTUVSXDWTBRFTVZXQIMNBIPVSEUAHCFBKCEJJVZGLNJOHILZOKEAAMHRSULOVDPE");
    msg.maneuver_type = 46463U;
    msg.maneuver_stime = 0.3468143181864025;
    msg.maneuver_eta = 28575U;
    msg.control_loops = 4267682938U;
    msg.flags = 142U;
    msg.last_error.assign("HDKJLUWSMZOFBMUUWWBDZWXTRDCGVCKNYYAQFBOOAVXISNLEUKVLUQXHEFMBJQECDPXNOGRJAPMTFGKIVZYWPSDYSZNYGGTNCWNGFISYQYASCSOBBZQXPKPCMPBELONROOHVAZFFPRABLYDRGQQRTAHRVWLKZEOVDCHEFAJIMJOWEZPLNHYTWCTKQYJUMNQBPTVKGVKJIZVXIEESHTSUII");
    msg.last_error_time = 0.36746261116620504;

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
    msg.setTimeStamp(0.35508401492494956);
    msg.setSource(13878U);
    msg.setSourceEntity(196U);
    msg.setDestination(28299U);
    msg.setDestinationEntity(23U);
    msg.op_mode = 203U;
    msg.error_count = 93U;
    msg.error_ents.assign("UEXRIUNTXPRQWLHDSOTJSPONYLJOQNTRHMEQARHKOPBMMCUNXFBWBEQMJTEJDNNCMJEXJJFKYQLFOAECEDCTNAIDEVVPUHOAMHTWZGLDXRLBFZPCZUSUNUVVBZLEPZRQWAIZJMQYRVGFGLHYZQJDCZUPKWTCWPGDFPVWLVOXHFMRUFBWYKIKHVNDWYXZOQKIKJSGLODCAFOAVDIGXNTVRKXQSYWMAIPBSYSAYCBXIIHYHS");
    msg.maneuver_type = 7214U;
    msg.maneuver_stime = 0.9123726422218017;
    msg.maneuver_eta = 50118U;
    msg.control_loops = 3546140563U;
    msg.flags = 69U;
    msg.last_error.assign("RXWWRTKJLYYEXOSYQFJHXGVMPCFEWADIDLMFAKMSAKETTHSNXJKEBMBNVQXSDSGUMIMCZUHAIRKNPLAHYOQDNBSEMHLNJFMTGXNZFECYBBPVHSAJESRDJVFGOWGKFGDVPLCOFYQRRXMNXUOZVGUXTHQWZKWLZRARVOOZCABYQLQIDDLGMRCWHQZDDP");
    msg.last_error_time = 0.7793691368458505;

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
    msg.setTimeStamp(0.34928777516554277);
    msg.setSource(38413U);
    msg.setSourceEntity(247U);
    msg.setDestination(5665U);
    msg.setDestinationEntity(244U);
    msg.type = 157U;
    msg.request_id = 20926U;
    msg.command = 24U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34651U;
    msg.info.assign("QKLDFLLHNIEKFCRIKANBNMOIVI");

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
    msg.setTimeStamp(0.2459322363253672);
    msg.setSource(4073U);
    msg.setSourceEntity(134U);
    msg.setDestination(11015U);
    msg.setDestinationEntity(106U);
    msg.type = 167U;
    msg.request_id = 5022U;
    msg.command = 112U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 50032U;
    tmp_msg_0.lat = 0.14040259233159202;
    tmp_msg_0.lon = 0.9465705655928979;
    tmp_msg_0.z = 0.6086379243786686;
    tmp_msg_0.z_units = 184U;
    tmp_msg_0.speed = 0.7710802039115331;
    tmp_msg_0.speed_units = 209U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7977680045331964;
    tmp_tmp_msg_0_0.y = 0.9352762297819581;
    tmp_tmp_msg_0_0.z = 0.7604918604160192;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("XSXMSZRMKOHDKASXDHVIGCKJYNCCLEIGNDNMPZFTVUFUHOGDMQGDJXFDPCOYZUJUXYOQBNGRGFBUKARBHSVRLFTLECSEJTTPZKTPOLBMAYDQNFSDKAPBEAHAIFWYXWMRBNLZQJHEGVISQCTYWKKU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22727U;
    msg.info.assign("CNDVCNHPMPMJIKMXSHDZBWVTKLJEOEWYDCFARQLXTWQIHZJCTVORSUWTVRRGIZZZNNMQINQGPCPLUTADVXUSTTNGSSKQUBSAIGWEQNOJCKOWLYNEPRTVBVFMPLOBMYKEASXLOCMTQDVUUMFZBGXACZPXHXWOFOMHLUZL");

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
    msg.setTimeStamp(0.24760282759815655);
    msg.setSource(235U);
    msg.setSourceEntity(140U);
    msg.setDestination(28411U);
    msg.setDestinationEntity(88U);
    msg.type = 28U;
    msg.request_id = 7422U;
    msg.command = 64U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 62602U;
    tmp_msg_0.lat = 0.9104614587035471;
    tmp_msg_0.lon = 0.6525276154573959;
    tmp_msg_0.z = 0.1937844786756846;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.speed = 0.788579001829104;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("RQDFLHYJIYLJBJTPPGERPIHZQZEAZOSBGLGOSAWETLUGXRYRUXHAJAFSOSSTEMHIWPWDVODQOOQYBKVQXKZQEXRNKCOCDVQLJNJFPTBSDQRUSJTWNGGOYMMZMWPNMTOAADHFDYCILFBSDOSAUEPXIGFCIMCWLXVIVLGRCXUGBUQNZBTTAWYZCFTSDPVZPBCKBKXRCRELQWMENVWNJMIJNENXHYKKPTVUVCHHVYUY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61260U;
    msg.info.assign("PGFQWQHHRIGDPJVVVPRRAEXGAIKJSPQEBYYCSGRYTCDEQBXPDECLXMAWKUKZHBXPBOMJLVSTXHCTHNYERLFGOMSCYLYCQWWEURLRZANSMVGAZQZFSBLJGDMA");

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
    msg.setTimeStamp(0.9494720906558343);
    msg.setSource(46750U);
    msg.setSourceEntity(249U);
    msg.setDestination(44853U);
    msg.setDestinationEntity(248U);
    msg.command = 196U;
    msg.entities.assign("TXGDVSWSNLATGRJAHAUMLMQPNUIOFBYCEEVPEUVPNOQHXKZKLOSDTUGJEAYAMKPVLBIVIRGDRARFTNQGCPEBYNBIPKOJGSAEBFEKDDPJWVMNVXSUSXRHJ");

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
    msg.setTimeStamp(0.41475740897685665);
    msg.setSource(65137U);
    msg.setSourceEntity(26U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(249U);
    msg.command = 171U;
    msg.entities.assign("OVGBUEXVRJQGZVRDFKZXDVGPRKIYBMHRMTGGJWTCEZVWEGRNWPMQKQFKFFQSFSOORYWCSTYCIZCESAOCUJXPDLNWSKYATGNYHYTBECILPQBGRFNHZXMDPVLCVMUPCDIO");

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
    msg.setTimeStamp(0.6840121671666244);
    msg.setSource(44039U);
    msg.setSourceEntity(128U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(231U);
    msg.command = 241U;
    msg.entities.assign("MECJCBGRFNWEOQXDOATBUXUJMOMOJMKFSMNKCZOARNYPCZOTHIMJZHBMWEGRKNEIALEVRHETOUSUQYAWEULHDXBDTUBARKHIWUYQTBSWJGRVVRINNCLJJWQJFKVEIXELTHZYITOWKVATUGXNNLFVXPSLYLWUHIAVQBKPDKPQPBNLHXZLFGE");

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
    msg.setTimeStamp(0.7940975625784437);
    msg.setSource(36284U);
    msg.setSourceEntity(27U);
    msg.setDestination(21782U);
    msg.setDestinationEntity(46U);
    msg.mcount = 99U;
    msg.mnames.assign("UHCAWKXORPZTSUJEIVFBGVPCZMNMCWLENOSRBYITDHIPSVKCQPEPVYCZMAHKRGBNUTKXKRYAAGXTBQZQZIXHHEWFWPQZYBWLPDKWEDTKJGNTPAOGKSLQSDSYZMFYHSDXULARIVTJWEGYOOJJVROEFKVADLHEUUMXFNQYSWLRZBYAXIQSFS");
    msg.ecount = 124U;
    msg.enames.assign("LUCTLGZINYJPBHODVYDJMUGFBEPXQFJOGJKNIAANRYOJONGQTTRSVVMRXZELYRMMSHWROABSHNUZBQRTZWEHACIPCDVHIQIQSSWUAHRLGEIRWPHDOLQTHXNYBDAZZKNYGSZKRWLLHVUGEMSXDVLPWQCMOKDVWEFFPLYWZCEIDBBBFEKQJMTDFEKBTFKKWWSCAXMVVQXMCJFGTQNGODJIEBHUFJRSATUXUPSXOYPYMCCICXTIUGZNNYAJ");
    msg.ccount = 65U;
    msg.cnames.assign("BXLVFJGWCZBEOTIJCRYQCJKABUNSRBCFDPEYTTIAPNKXMHOLTPQQGIOFTGVMQKEFUWIXSGQUP");
    msg.last_error.assign("FHOZWYALRCIMBIWFVBFQEUATREODEJGRGHLNGRCVURHQXKBPSYZCNEXXKTKWKEMSOZMAYZVLZCOBHDNSFRBLJXYVXDENXBPHSOGAHSWQNSEUVUREWXSCPVIAWAXJVBNKGQDDILNCVYTTPNAPWBUDLDOKOUGLBLMTXPJWZQXCTYMEIUJCFKRGKOWOFGHCJIVJGYYGMNTYYZZFJDELIMMQTZAZOVRWII");
    msg.last_error_time = 0.8034419499274966;

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
    msg.setTimeStamp(0.6475213933881486);
    msg.setSource(9062U);
    msg.setSourceEntity(202U);
    msg.setDestination(22039U);
    msg.setDestinationEntity(35U);
    msg.mcount = 165U;
    msg.mnames.assign("PQUOIVRIHHOAYYZVFVVVSSEPTBAXPMHNSJNWLJKMLUOLEKKWPCZXNCDGLGQMFWGFOJPESOADZVCFPDZRQFEPGWKHXCZENLI");
    msg.ecount = 15U;
    msg.enames.assign("JQNFPJTYOEHBIHXGSKUKKQEZDGBEGDBPKXIEGQAEKBMDAGPZPCKTVTJSJOHCDPKFPANOM");
    msg.ccount = 80U;
    msg.cnames.assign("LCKNIWBPXXXJOXTLWQWNLKLRUVZEJILEREXRZZEFFRWLKPULNKBFTNDIBCESBHD");
    msg.last_error.assign("UTGASKGVYPUCSFLJHLGPVKWYSDUQFPCTOCUDRGARVNDNXEMYTYZTNHQCBOLVRABYRJEEQJSJZAQIJMBHMOUQRXEXZVMXLLORPGJCPKASJIVIBHZVOIDFQBKMCTDRWEWIJYLEVKKUNLSDSCEWJWSGFOURWBHGWNNTMFIALBXPIFNOIPXBTHZSVEUDIHGFZLRMKGQGH");
    msg.last_error_time = 0.9134519252762345;

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
    msg.setTimeStamp(0.5137682783290614);
    msg.setSource(38661U);
    msg.setSourceEntity(81U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(107U);
    msg.mcount = 125U;
    msg.mnames.assign("QZBULCWGRSKYLTAAQDOXHPZJFEKUHXKGPMXJVWFANZITHRLHVEZBKVJSUJYSVFITBLMPXLFATYXXCRIUQWQFPRVPQWYXOCAYUCQFRSDFYKIHMCIHBMDDCNUJBBCKUEGSQTLTDPCGYTMEEXXZLDOJIBEJDTDZSOEVPNZRFVRNNDOVLLKURMHMWWTYWVJWBBKOGFQYJGEJPQGFUSEOCSNAI");
    msg.ecount = 144U;
    msg.enames.assign("HNZVQAQSMYVXKQRNJZWZQCKJLHXNFTPLYDJFMXAWSHEQOTSTMHFMCNTLVZQUORAIQWGSRHXWYGKQCRLJKBNHOOWHYBMUPDXSBVPNBLFUPIDTBYGZBCPDNNKSUCFMZJOWCRAZVKOYOZBEVAIYGWYTSFLWDRIDCERDTCDXMMXEXKJYEJZIPGDGOTJFDYQNHIJ");
    msg.ccount = 146U;
    msg.cnames.assign("ANSFIIFLQLGHXGRFFPRNVGYUEZYYNHRZIDUGORIPXDEIMAYQJLZOUIWJKDDSNEHAOBXWCCVAVEMYV");
    msg.last_error.assign("CBLBSBOPFQGVNLHDLQVPDBPSZQYNVCJLXUOUKWTMOPBAMHEUDBEWFSELIODSVIMFMWNDCBAKLWXTTTXFMISWUOVAVQWEMZCRKCRZQEIRVAJJZKCHOQACPAIDZLMCZIVKHKVHGSYOKOLRGQA");
    msg.last_error_time = 0.2602695478528626;

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
    msg.setTimeStamp(0.34554997117395325);
    msg.setSource(24069U);
    msg.setSourceEntity(96U);
    msg.setDestination(37704U);
    msg.setDestinationEntity(114U);
    msg.mask = 12U;
    msg.max_depth = 0.2527216734085538;
    msg.min_altitude = 0.8671694004650347;
    msg.max_altitude = 0.336666459163801;
    msg.min_speed = 0.13268572796882228;
    msg.max_speed = 0.580808688817138;
    msg.max_vrate = 0.910908777351189;
    msg.lat = 0.8000576099577317;
    msg.lon = 0.24440394970622759;
    msg.orientation = 0.16267295581958374;
    msg.width = 0.267264857638966;
    msg.length = 0.9574407386729342;

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
    msg.setTimeStamp(0.9421919536747987);
    msg.setSource(30601U);
    msg.setSourceEntity(242U);
    msg.setDestination(60149U);
    msg.setDestinationEntity(238U);
    msg.mask = 250U;
    msg.max_depth = 0.2433308732642825;
    msg.min_altitude = 0.4305891773485492;
    msg.max_altitude = 0.3218032478307269;
    msg.min_speed = 0.7217288692297676;
    msg.max_speed = 0.8149062170737101;
    msg.max_vrate = 0.28896522810485814;
    msg.lat = 0.31792570130563447;
    msg.lon = 0.4912079286354589;
    msg.orientation = 0.9053787714116496;
    msg.width = 0.2884626294393886;
    msg.length = 0.1874222210181914;

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
    msg.setTimeStamp(0.32432819626415765);
    msg.setSource(56115U);
    msg.setSourceEntity(248U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(197U);
    msg.mask = 36U;
    msg.max_depth = 0.31525628829024355;
    msg.min_altitude = 0.06334426875928068;
    msg.max_altitude = 0.390092385094571;
    msg.min_speed = 0.24698889956430292;
    msg.max_speed = 0.8602570526733847;
    msg.max_vrate = 0.13574025768244513;
    msg.lat = 0.49828221344069235;
    msg.lon = 0.4009019614029169;
    msg.orientation = 0.6822126217268732;
    msg.width = 0.11788844240914265;
    msg.length = 0.7766558469146584;

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
    msg.setTimeStamp(0.24341860558679018);
    msg.setSource(11324U);
    msg.setSourceEntity(160U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.19194622697094932);
    msg.setSource(13143U);
    msg.setSourceEntity(107U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.771853111607725);
    msg.setSource(43134U);
    msg.setSourceEntity(41U);
    msg.setDestination(33779U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.7900367340700719);
    msg.setSource(45146U);
    msg.setSourceEntity(67U);
    msg.setDestination(4738U);
    msg.setDestinationEntity(59U);
    msg.duration = 18614U;

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
    msg.setTimeStamp(0.8455404221288121);
    msg.setSource(56426U);
    msg.setSourceEntity(87U);
    msg.setDestination(54667U);
    msg.setDestinationEntity(80U);
    msg.duration = 2565U;

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
    msg.setTimeStamp(0.48321256461078455);
    msg.setSource(47470U);
    msg.setSourceEntity(91U);
    msg.setDestination(943U);
    msg.setDestinationEntity(67U);
    msg.duration = 51135U;

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
    msg.setTimeStamp(0.6143600610483495);
    msg.setSource(47556U);
    msg.setSourceEntity(93U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(10U);
    msg.enable = 66U;
    msg.mask = 2657347356U;
    msg.scope_ref = 3867249329U;

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
    msg.setTimeStamp(0.7170983153078712);
    msg.setSource(47174U);
    msg.setSourceEntity(196U);
    msg.setDestination(7269U);
    msg.setDestinationEntity(240U);
    msg.enable = 30U;
    msg.mask = 3215670075U;
    msg.scope_ref = 2126125948U;

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
    msg.setTimeStamp(0.033190642547967886);
    msg.setSource(57255U);
    msg.setSourceEntity(235U);
    msg.setDestination(51287U);
    msg.setDestinationEntity(158U);
    msg.enable = 238U;
    msg.mask = 4182112077U;
    msg.scope_ref = 1645014938U;

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
    msg.setTimeStamp(0.4691555698857861);
    msg.setSource(47429U);
    msg.setSourceEntity(74U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(169U);
    msg.medium = 147U;

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
    msg.setTimeStamp(0.2735182425886834);
    msg.setSource(30515U);
    msg.setSourceEntity(11U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(89U);
    msg.medium = 36U;

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
    msg.setTimeStamp(0.8588098047564982);
    msg.setSource(3622U);
    msg.setSourceEntity(187U);
    msg.setDestination(21882U);
    msg.setDestinationEntity(241U);
    msg.medium = 117U;

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
    msg.setTimeStamp(0.8622787113474037);
    msg.setSource(2966U);
    msg.setSourceEntity(200U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(12U);
    msg.value = 0.1147825562180097;
    msg.type = 123U;

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
    msg.setTimeStamp(0.320167390119134);
    msg.setSource(7948U);
    msg.setSourceEntity(12U);
    msg.setDestination(11261U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5069624812624209;
    msg.type = 239U;

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
    msg.setTimeStamp(0.8327117105189793);
    msg.setSource(1098U);
    msg.setSourceEntity(221U);
    msg.setDestination(23275U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4081760987428764;
    msg.type = 81U;

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
    msg.setTimeStamp(0.14093509740356747);
    msg.setSource(35995U);
    msg.setSourceEntity(171U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(106U);
    msg.possimerr = 0.2092612398414232;
    msg.converg = 0.39156535788899427;
    msg.turbulence = 0.4755951264906003;
    msg.possimmon = 194U;
    msg.commmon = 241U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.6428277221569192);
    msg.setSource(10560U);
    msg.setSourceEntity(242U);
    msg.setDestination(18759U);
    msg.setDestinationEntity(243U);
    msg.possimerr = 0.26983826294775626;
    msg.converg = 0.4294346113339863;
    msg.turbulence = 0.6861388502621718;
    msg.possimmon = 102U;
    msg.commmon = 45U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.8494398578285394);
    msg.setSource(47619U);
    msg.setSourceEntity(100U);
    msg.setDestination(11058U);
    msg.setDestinationEntity(42U);
    msg.possimerr = 0.3786243843680559;
    msg.converg = 0.3224278545877072;
    msg.turbulence = 0.5252284041798256;
    msg.possimmon = 146U;
    msg.commmon = 159U;
    msg.convergmon = 240U;

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
    msg.setTimeStamp(0.19099378928847366);
    msg.setSource(57392U);
    msg.setSourceEntity(155U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(180U);
    msg.autonomy = 42U;
    msg.mode.assign("FRTBGBDNVFAPNEWDLTUZKRWEMKSHXULQCSQZXSEIGLUMAHGIVIJZIDEPTKIQUTJQTJUTUCXMBFMURMSGLZZXGGSGPAYBEXEDYXDPKQWCRVLFSMQHJYEVWHRVOMDLYVFRANBSSELLRINDCNQHECSJWHBVRALWKGJSBMNYJVZHZUWOAIKZNCYPQUPHHDXHAFDNTBGOYBJXFLXFEYQPYOOVIIZQTFMRFAUYBNOOICOKOTTWKAPZDNRAKPJKXV");

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
    msg.setTimeStamp(0.6954142962886606);
    msg.setSource(40188U);
    msg.setSourceEntity(217U);
    msg.setDestination(177U);
    msg.setDestinationEntity(145U);
    msg.autonomy = 78U;
    msg.mode.assign("NBWWLODRAUQWSHRGJBFOIHUISSAFVEUDAGJPFKMYJSVBXXEDTHKVOCU");

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
    msg.setTimeStamp(0.19113580767298588);
    msg.setSource(55730U);
    msg.setSourceEntity(27U);
    msg.setDestination(32874U);
    msg.setDestinationEntity(17U);
    msg.autonomy = 150U;
    msg.mode.assign("QOXKLBNZDTRBDVNVTDIRXQDCKMRCBOCKHPHXYKNYDJOEZNAYLWEAKJINAUAQIPWAHLUBFVIXGSHXTFPJPVBZLBOOTEVZBNZWECEFXMQIUSJEOUKZILYHWXOZLHVFCMYOCZQNPGNQDJYLOWTKHUBHTSLNTQMMRRHECCKIGXQJXAGWCYKFQGITBWSUMVGIEAPMDUYLRFRSGFRJEVHEPVUDTRFSDRJOJAZVSSDBLGGWSUP");

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
    msg.setTimeStamp(0.8877713467570432);
    msg.setSource(56811U);
    msg.setSourceEntity(201U);
    msg.setDestination(27329U);
    msg.setDestinationEntity(58U);
    msg.type = 207U;
    msg.op = 63U;
    msg.possimerr = 0.9776812926596324;
    msg.converg = 0.8194314244201542;
    msg.turbulence = 0.7350350951506536;
    msg.possimmon = 42U;
    msg.commmon = 204U;
    msg.convergmon = 20U;

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
    msg.setTimeStamp(0.754883355639416);
    msg.setSource(36865U);
    msg.setSourceEntity(55U);
    msg.setDestination(62554U);
    msg.setDestinationEntity(71U);
    msg.type = 99U;
    msg.op = 122U;
    msg.possimerr = 0.45545665832877913;
    msg.converg = 0.16328568977082358;
    msg.turbulence = 0.5020009874979374;
    msg.possimmon = 157U;
    msg.commmon = 206U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.1771850164084734);
    msg.setSource(65087U);
    msg.setSourceEntity(214U);
    msg.setDestination(26973U);
    msg.setDestinationEntity(12U);
    msg.type = 54U;
    msg.op = 70U;
    msg.possimerr = 0.4374602183910111;
    msg.converg = 0.2740793502009885;
    msg.turbulence = 0.2920231363776471;
    msg.possimmon = 80U;
    msg.commmon = 214U;
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
    msg.setTimeStamp(0.7310204827726478);
    msg.setSource(49584U);
    msg.setSourceEntity(8U);
    msg.setDestination(61131U);
    msg.setDestinationEntity(132U);
    msg.op = 180U;
    msg.comm_interface = 110U;
    msg.period = 545U;
    msg.sys_dst.assign("UHEACPXMMUZOLJHVW");

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
    msg.setTimeStamp(0.41622061018616585);
    msg.setSource(6245U);
    msg.setSourceEntity(198U);
    msg.setDestination(16769U);
    msg.setDestinationEntity(180U);
    msg.op = 38U;
    msg.comm_interface = 37U;
    msg.period = 43571U;
    msg.sys_dst.assign("OJXXQSROMIGSELPWKGPQGQFMSHBBKHQYHTFGZAOBZRFADIRGRPLWXJCACRFPATKDWNNERZPMCCGYVBJTHLAMQZXEVXPTEMZVDNMNYUBOA");

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
    msg.setTimeStamp(0.284244932920551);
    msg.setSource(16674U);
    msg.setSourceEntity(173U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(51U);
    msg.op = 74U;
    msg.comm_interface = 105U;
    msg.period = 73U;
    msg.sys_dst.assign("BRZOSWTCGXWQHMSPWVMCCEYQVWGBWUSJMU");

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
    msg.setTimeStamp(0.5686575280958208);
    msg.setSource(26731U);
    msg.setSourceEntity(221U);
    msg.setDestination(29852U);
    msg.setDestinationEntity(1U);
    msg.stime = 3290203237U;
    msg.latitude = 0.9343314706612297;
    msg.longitude = 0.2496266961324607;
    msg.altitude = 19360U;
    msg.depth = 61435U;
    msg.heading = 58312U;
    msg.speed = -14975;
    msg.fuel = 41;
    msg.exec_state = 43;
    msg.plan_checksum = 3827U;

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
    msg.setTimeStamp(0.22014382580829728);
    msg.setSource(57504U);
    msg.setSourceEntity(43U);
    msg.setDestination(18062U);
    msg.setDestinationEntity(215U);
    msg.stime = 3613652112U;
    msg.latitude = 0.8718296865549832;
    msg.longitude = 0.19197819429791962;
    msg.altitude = 48149U;
    msg.depth = 14739U;
    msg.heading = 3394U;
    msg.speed = 19186;
    msg.fuel = 23;
    msg.exec_state = 31;
    msg.plan_checksum = 54933U;

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
    msg.setTimeStamp(0.27610792436284604);
    msg.setSource(2014U);
    msg.setSourceEntity(202U);
    msg.setDestination(10552U);
    msg.setDestinationEntity(71U);
    msg.stime = 1033662191U;
    msg.latitude = 0.16000061537755905;
    msg.longitude = 0.6861518953225747;
    msg.altitude = 61668U;
    msg.depth = 4355U;
    msg.heading = 25594U;
    msg.speed = -90;
    msg.fuel = -63;
    msg.exec_state = -121;
    msg.plan_checksum = 29877U;

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
    msg.setTimeStamp(0.9599023450292504);
    msg.setSource(24029U);
    msg.setSourceEntity(190U);
    msg.setDestination(51824U);
    msg.setDestinationEntity(179U);
    msg.req_id = 8926U;
    msg.comm_mean = 189U;
    msg.destination.assign("CCNWLTRYRAIQDBNUGQIRBMWKZBWZMHSVTCAEGSSMACJLIOQPJEVVVNDGKUDXIATHNPFVRISJHMOLWKURDEZFULMUQKZSDPPFHDOEIXHOPLJHBBVKTKEMTOGEGZCHRLGTOPDNVPSKVVVJGTYYMXHRBOFUUPFICAZXRGPWYWNCISZMXAFZA");
    msg.deadline = 0.7752476992238865;
    msg.range = 0.5218601980069313;
    msg.data_mode = 50U;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QSFBJFPWGCQOMHPJXIKYNFTANKUKJORKHRBCIAAOZMQUELQYLWNXWBLMGMVZCBRGNTKFVNJG");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NNYQIQOCGBVTEWSBQSIRCCEVXUIZEOAHUPYTNODWMBXYNOMTAGV");
    const signed char tmp_msg_1[] = {-32, 114, -113, -83, -101, -57, 84, -117, -33, 24, -117, 78, -7, 108, -106, 6, -10, -93, -26, 17, -57, 84, 86, -64, -118, -78, 89, -71, 122, -39, 48, -32, 103, -125, -48, 98, 102, -92, -80, -104, -26, 19, -43, -65, 36, -63, -58, -49, -21, -87, 58, -30, 20, -76, 41, -123, 24, -52, 5, 39, 11, -4, 71, 73, -31, 117, 22, -53, -71, 21, -16, -107, 0, -53, -58, 90, -43, -51, 15, -51, 13, -14, -37, 86, 98, -69, 107, 38, 110, 123, 121, -58, 57, 92, 39, -25, 116, 62, -79, 72, -24, 57, 12, -82, 113, 116, 126, -17, 25, -48, 82, -92, -58, 117, 73, -94, 100, 59, 111, -56, -10, -27, 96, 117, -126, -79, -16, 46, 116, -79, -41, -25, 61, -125, -63, 9, 69, -39, -42, 115};
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
    msg.setTimeStamp(0.7697908860818083);
    msg.setSource(14415U);
    msg.setSourceEntity(159U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(86U);
    msg.req_id = 51158U;
    msg.comm_mean = 199U;
    msg.destination.assign("GJLQHPTHPCYIXQQAAVEMZPGKNVNWWAXBSPOGWOKUBKSUGLZMEUBHBGKZHCQSNKBGPLOKWWVTVQYEOMFHEQGQANRSRIXCMXCDMYPAKJYBDZDRBYRFALJBHXTOEAJONMQPZPMTNVCXNOGRZGEFTMSVJYHTNLLOIXORIDLSOEZFUVWWPALHJYJUDGKWSDZNVJXDJMNDRFYULMHEFIPVTFVABKRAHDSTWCICQIIFUYYWCKEFUCDRTZIU");
    msg.deadline = 0.7688386354953713;
    msg.range = 0.8836871515961704;
    msg.data_mode = 98U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IVNNURHHVYAQYWYBNCZYKOFHOSQEMQQJYHPVBKKOOLNJQIKBPQPVVBVNGKUHGOEFYGWTUDXPPNCXDOIFLQAPBGCTWULHLTWUXWZPXBATENTERJDOGSIYSZHIVUIWROIPNXPDVTFAIXRXMASEXZQSGTTESJBAOZKSCSKMDAMFEUGJYPCEMERMUXZCCHQFLYSEILZZDMJWBMFTGAJGCXDMDFRMCNGZUDCRNJIHBUJ");
    tmp_msg_0.lat = 0.16638376472882066;
    tmp_msg_0.lon = 0.018420995308560895;
    tmp_msg_0.z = 0.03398427751570832;
    tmp_msg_0.z_units = 116U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OSODHTUHZZIEOXLSONFNJTMDZIQSWKVDKIUJSMGDDBVTLGZLAXNAAPMKGQSWXJPCFPVWTWZTNKBHMRIPZRAAOHFTVSJVPKNMQYYUGGPEFIMQVIIRMJEZNLIHBLHBUW");
    const signed char tmp_msg_1[] = {116, 102, 125, -91, -50, 78, 2, -75, -108, -27, 25, -83, -80, -31, -44, -88, -9, 57, -11, 90, 12, -35, 21, 18, 74, 64, 53, -22, -20, -111, -100, 37, -30, 106, -123, -25, 60, 121, 75, 35, 7, -30, -84, -111, -102, -7, 67, -127, 79, -2};
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
    msg.setTimeStamp(0.512097175358298);
    msg.setSource(5916U);
    msg.setSourceEntity(163U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(62U);
    msg.req_id = 45397U;
    msg.comm_mean = 246U;
    msg.destination.assign("NKBTFMXERKHNMVXPLJTMQKYYKHWKBAHKJEQWVSSHGLHDSMOHXRUIWWAPWGNZKMBNYXYKHLLYFQBCUYEIAIWTMOTUNOFZJPCAUTBJUVCJRIBDLDQBTZZRRSVXMTRQK");
    msg.deadline = 0.9185660477189024;
    msg.range = 0.6650192240409313;
    msg.data_mode = 185U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("EWUJFYOMCWLVLLQRAATJAPZPQQCLZAVNUNODXPHGBKSYZAOTJXRTDPGTHDFPKPTNSSWHUHMEKBGWPECUTZMIFZLAMHVTJLWGRFECIMCRAKOSEIYDRMYHUSXRYHBQKOQIGWYOPFNRJMFCFDKJJEFJBODIDWXZVIIXCNBFQGPBHAYEMCNZKLZIIUYXN");
    tmp_msg_0.value = 159U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YKJGSNRMFXKNHWFEZODTIBZUDSSAWKEBHZUSWVUILEJKNLJRNKIVCLWECNWJKVHMLW");
    const signed char tmp_msg_1[] = {-78, -71, -107, -52, 35, 119, 22, 106, -65, -20, 73, 122, -76, 113, 93, -30, 46, 28, 119, -125, -80, 52, 85, 77, 100, 75, -37, 44, -98, 104, 123, -113, 4, 75, -36, -48, 62, -80, 9, -17, -124, 6, -115, 93, 54, -43, 78, 124, -57, 21, -69, 86, 42, -58, 101, 20, 104, 57, -4, -119, 61, -1, -66, 89, 10, 8, 86, -89, 72, -22, -126, 87, 97, -79, 103, -33, 66, 60, 114, -93, -85, 4, 13, 126, 100, 91, -25, -43, 42, -122, 30, 85, -46, -1, 109, 52, 97, -1, -100, -5, -103, -83, 67, 10, -43, -44, -74, 79, 76, -93, 3, 120, -48, 92, -54, 118, -126, 56, 91, -109, 15, 119, -26, 35, 123, -96, 22, 68, -55};
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
    msg.setTimeStamp(0.733194353222286);
    msg.setSource(64223U);
    msg.setSourceEntity(147U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(194U);
    msg.req_id = 44767U;
    msg.status = 219U;
    msg.range = 0.19958979213716166;
    msg.info.assign("EAKLDRDPEBHVZECASGNUBQSBBEIHSAGDQQFJLNTRHOMMENLHWIVSDFUKRUXVNJQJQDALKFUDJBZACMFIYLRSYFXBRMGJMIAHYZQXHVOZTHPLIKESCIUYIPVMVRBUUHFXRZAWDASKPBDITCRYPBIWWNFWJOGHOENDLSSOYUVKTMTOCMGLSTNGCLZQFXYFXEGVOJAKJOQNZYPXPRUZX");

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
    msg.setTimeStamp(0.39134067141944484);
    msg.setSource(1457U);
    msg.setSourceEntity(246U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(71U);
    msg.req_id = 32264U;
    msg.status = 62U;
    msg.range = 0.9952112356819105;
    msg.info.assign("KKXKNVNKGULOSEGWDNIXBHWPL");

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
    msg.setTimeStamp(0.3686520489827799);
    msg.setSource(32474U);
    msg.setSourceEntity(10U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(106U);
    msg.req_id = 36375U;
    msg.status = 149U;
    msg.range = 0.34643523985561187;
    msg.info.assign("VITNNWVTLJPAKJHXOOK");

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
    msg.setTimeStamp(0.5259757027947634);
    msg.setSource(30059U);
    msg.setSourceEntity(223U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(96U);
    msg.req_id = 40213U;
    msg.destination.assign("DJUMRBUGVDQHKIJLOTMLOSTOTOABLDVALJSKLFEUUHBSWTEAJNGZJVXQXZBEQWQQTAANDWKDPROKJWWWXGEIGWCDNXZFJNFHFEYXDNQINBNVTYG");
    msg.timeout = 0.3795986162945474;
    msg.sms_text.assign("ZBHQLTPCQZELBSIOINRPFAVELG");

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
    msg.setTimeStamp(0.4505809966659672);
    msg.setSource(41549U);
    msg.setSourceEntity(130U);
    msg.setDestination(15547U);
    msg.setDestinationEntity(235U);
    msg.req_id = 49783U;
    msg.destination.assign("SENJMSPZCHTMXLVDQHBCLQAJVHKYKZPBGOPHGVLOBSPUILZTMYYEWAPGAUWNNFFWXEUGPCHFRIMIDRGRINVAXMITFPLOXNZTVTZVQFKRQCVVDRYGGYYHYIJALAQPEJKJPHTCORTTUJXZXVEUWOFRACCZMWOXOSN");
    msg.timeout = 0.385726382081218;
    msg.sms_text.assign("FCYPKFTMKFVPNJHIKYIVSZGNRRAZDBDBHKKAGBZAMPOMBAPVVDQWEDGTOSOVNFAGAMICNOLLXLEBVWMLISTUXHQBYWHWCVCXSPIJMEFKEDUHJCGNYTSGJTERQTAUQPGEDYILYMIXLZRLFRRXUSUXGWEBIYFDTHNNJSSYKGEULBUAJQSZXUPRWJZCQ");

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
    msg.setTimeStamp(0.964126635975623);
    msg.setSource(43941U);
    msg.setSourceEntity(3U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(202U);
    msg.req_id = 45116U;
    msg.destination.assign("TGJJNVRVMBDGOJFPIPOESDZEEQCCXFDHKPCHQETLYGMAHSXAJIVFOWSRIWMTGNJIFSNUHEWQQKYWBGGSVPABKYUBQUI");
    msg.timeout = 0.49449492671285045;
    msg.sms_text.assign("BBZQNFKYOLPOCHCMMRG");

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
    msg.setTimeStamp(0.9359570449484915);
    msg.setSource(19543U);
    msg.setSourceEntity(171U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(182U);
    msg.req_id = 30212U;
    msg.status = 138U;
    msg.info.assign("QOWFEPBOFIUPSQDVNJREKBDYYHSEYDEVZCRYWVNUQVZIBQSLTLOMJWOBGQIDWNVZRRVQBZQHKDAWHVICSRYHUVJPXXIXOTRLFKLJPKRHMOEGBTSUDWMZPTNXFSDPAJCZUCPGFIQYNRMESEZKUSSHXOBAGTKIXAIMAPLLMGJONZKCXNUNHWEKKRHGJLXQJATGGJCQMAUCBNEOPWWADCGMDTULMJLTYBWPSVYXHCEAZMIGO");

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
    msg.setTimeStamp(0.2186150988084965);
    msg.setSource(60631U);
    msg.setSourceEntity(219U);
    msg.setDestination(13716U);
    msg.setDestinationEntity(132U);
    msg.req_id = 39874U;
    msg.status = 73U;
    msg.info.assign("SNQDKVCWMOVADQOPXWECHVBYYTGSBADHKGMITLEBZZIICEINNJWCJTJLQALYSBFNJGWTRCCIOWNJRMSXPBBGXVWQIQUEDYFPTATGEQFBEOTAYDKKPGHGMMCAXUDXLFMSHUJYLOXRRNKHERFYCZHXRLPKHPSPZAAOQUTGFEXZYWIDBVXIMZEWSQTDUQ");

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
    msg.setTimeStamp(0.2234001824880547);
    msg.setSource(60552U);
    msg.setSourceEntity(21U);
    msg.setDestination(8058U);
    msg.setDestinationEntity(189U);
    msg.req_id = 45862U;
    msg.status = 184U;
    msg.info.assign("LRUQVZWRCFYDDNXMKISZWTYFXRLSOYSQXOBDIYPWTOXMGEECGNFOVTAQDVNPXSRXLTJOMUWHJAMSBZCKFADIRJCQRCNJMZYPPNOZBPDIAVWQCT");

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
    msg.setTimeStamp(0.241057881247431);
    msg.setSource(28644U);
    msg.setSourceEntity(183U);
    msg.setDestination(25283U);
    msg.setDestinationEntity(204U);
    msg.state = 14U;

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
    msg.setTimeStamp(0.0479736990925389);
    msg.setSource(59525U);
    msg.setSourceEntity(195U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(198U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.32553228826435576);
    msg.setSource(63093U);
    msg.setSourceEntity(164U);
    msg.setDestination(20844U);
    msg.setDestinationEntity(133U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.21368811562416812);
    msg.setSource(38765U);
    msg.setSourceEntity(46U);
    msg.setDestination(4075U);
    msg.setDestinationEntity(52U);
    msg.state = 207U;

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
    msg.setTimeStamp(0.8538735914856733);
    msg.setSource(34767U);
    msg.setSourceEntity(199U);
    msg.setDestination(18441U);
    msg.setDestinationEntity(207U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.20213888264133884);
    msg.setSource(42970U);
    msg.setSourceEntity(126U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(218U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.9697912224096256);
    msg.setSource(47059U);
    msg.setSourceEntity(206U);
    msg.setDestination(29717U);
    msg.setDestinationEntity(33U);
    msg.req_id = 12656U;
    msg.destination.assign("IAGQNINRPQCFEBVTVIZQACYTKKFMM");
    msg.timeout = 0.45197676488217375;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 11291U;
    tmp_msg_0.control_ent = 114U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 129U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.8976469957791788;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 189U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7420756856559941;
    tmp_tmp_tmp_msg_0_0_1.z_units = 61U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.9766363114888851;
    tmp_tmp_msg_0_0.lon = 0.20228544845578167;
    tmp_tmp_msg_0_0.radius = 0.6213385790100341;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 145U;
    tmp_msg_0.proximity = 44U;
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
    msg.setTimeStamp(0.3446894513263906);
    msg.setSource(58233U);
    msg.setSourceEntity(206U);
    msg.setDestination(62568U);
    msg.setDestinationEntity(68U);
    msg.req_id = 45528U;
    msg.destination.assign("FPXMTUZGMOCIDZXARTVIWQNHPJAKLHZESJEMWYPHPPQIBQFAGRNLMQVLCYFWHCDRDYUOUOCQBXNFPPWJQAARRTZXOPCDYTEGFRKXWIVBYATQKHJEJLMWERSEIXLTOMURKNUUIBCPSGSKFKQFLTVLSVVLXVRUEZXXNJGVVCJGHDMIEDL");
    msg.timeout = 0.0882239437705955;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2961718106U;
    tmp_msg_0.start_lat = 0.40325363393138935;
    tmp_msg_0.start_lon = 0.08990550769679162;
    tmp_msg_0.start_z = 0.5864413230605354;
    tmp_msg_0.start_z_units = 244U;
    tmp_msg_0.end_lat = 0.9412637772274854;
    tmp_msg_0.end_lon = 0.1347144438018787;
    tmp_msg_0.end_z = 0.7805258130017211;
    tmp_msg_0.end_z_units = 81U;
    tmp_msg_0.lradius = 0.8966577770821699;
    tmp_msg_0.flags = 132U;
    tmp_msg_0.x = 0.8824005605637116;
    tmp_msg_0.y = 0.059859881767857503;
    tmp_msg_0.z = 0.12475636179531335;
    tmp_msg_0.vx = 0.00883554371485662;
    tmp_msg_0.vy = 0.013125852994176346;
    tmp_msg_0.vz = 0.827090970449343;
    tmp_msg_0.course_error = 0.2960154611314242;
    tmp_msg_0.eta = 46921U;
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
    msg.setTimeStamp(0.9927184663763576);
    msg.setSource(25111U);
    msg.setSourceEntity(188U);
    msg.setDestination(33217U);
    msg.setDestinationEntity(14U);
    msg.req_id = 44039U;
    msg.destination.assign("GQEAIALBKXGFYDVSVCQUKJLVWVYLQVIMCCHRMYUYGDTJHUDLHNTAMNUVSOEQWWVAWEYKTMOZOOFIHXRFNFKZCIRCVCQASYSUOPBOEDITQZONZEZRYRTMKLNPLFXLMTBFIQDPURGUSNOUYJHGDZZAMTOLSQZOQKJAFPWTIGSKIRBAPAPCBWVAPKEFXSBGNRJLSJVJRFPUGXGUQXEEZHBDHMCCPHTCBWWNEJMPDXWJKBMSIYNXGZLDDKR");
    msg.timeout = 0.49309517753630994;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63786U;
    tmp_msg_0.off_x = 0.15462558231608337;
    tmp_msg_0.off_y = 0.4566199875525384;
    tmp_msg_0.off_z = 0.554024037641123;
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
    msg.setTimeStamp(0.08486282805782008);
    msg.setSource(56932U);
    msg.setSourceEntity(183U);
    msg.setDestination(52021U);
    msg.setDestinationEntity(180U);
    msg.req_id = 57725U;
    msg.status = 225U;
    msg.info.assign("TYZHANTQZPOHGJDANWWGGYJKTLDLEJXWITFQCHSYQDUHNNAFNRTTYLFKHCBCEIRPLXPDPJHBJVCKDHBZKKNUTVEOBKUWDWIPAYFVSVWWBEOXSSOSWYROUSHUNNQXSXUXFUUQVVAGIZKBHHFPGLLGEOZMEZCAGMUORICAVDQAQSZXANMXJLOZEOPBSKTRGCWECM");

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
    msg.setTimeStamp(0.4534239773894333);
    msg.setSource(56020U);
    msg.setSourceEntity(2U);
    msg.setDestination(61841U);
    msg.setDestinationEntity(133U);
    msg.req_id = 1066U;
    msg.status = 133U;
    msg.info.assign("OMXMPHJJRQCJNUSGGXSTMBXEHHCKNDGFPFRUTOWGWCQEPQACZMABGURZERFSBWDEUUXMZAIRSHCIJVTGVQGUIMQLXYLWNYJLAFDGKMQVNVBQEDKPOYYSOHTBVVKRZWELFSKHTLDQYYWNPLCOTFCOTJAADMKBDKJEPJUWVHTAXNFPBTUPJIMDOIIPRNHXXJBAZTHNDKLVEOFZBWFYXZGFRWAZSI");

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
    msg.setTimeStamp(0.7157712516436173);
    msg.setSource(4307U);
    msg.setSourceEntity(170U);
    msg.setDestination(20013U);
    msg.setDestinationEntity(12U);
    msg.req_id = 1876U;
    msg.status = 201U;
    msg.info.assign("NQKFGUELFUKLWTSFDDHAQJIAEKFBDGXYRPHWCUBXTLLDNPXKQTNBULEYTVRZOBKTAAZBHGYSRICEWJWHADILXMWOGYIMQONEGIZVPZDPLKVHUYMCMNJKIHSTXDGZJUXVZIJNMNCRTJBQFPSREEZWOKXJCDNVUWLEQEFPUFQOALITMRSORQREBSAZHSMPWCBVZ");

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
    msg.setTimeStamp(0.5720951218870538);
    msg.setSource(59067U);
    msg.setSourceEntity(65U);
    msg.setDestination(46681U);
    msg.setDestinationEntity(9U);
    msg.name.assign("MRVWPMUBVHCMRZKWUYZFSFTEZYMRCLAWXJAXNSTMBLIZHSVDDJTQYPZGBHIHYAQZACWUFDUYLJCGBTVSCTONWRVHIGLFOZIDIFKEMQQKXIRZFGNWHEDUYFUGAMKQVPEKKBXUCOVEOBBBTYNDAUQUNZWNKLMMIPJPTOHWSHPXQQXTBBUWKXEGLOEOSFFVJYPAMXHWNIGRORZTVXQNYEGXALCNSECPCHIJF");
    msg.report_time = 0.22055044340458885;
    msg.medium = 171U;
    msg.lat = 0.7284242556093493;
    msg.lon = 0.30951548623806824;
    msg.depth = 0.5876825398435184;
    msg.alt = 0.7395906063702266;
    msg.sog = 0.17585882226940464;
    msg.cog = 0.3185800189405379;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 63209U;
    tmp_msg_0.lat = 0.287536241746;
    tmp_msg_0.lon = 0.6261946666735003;
    tmp_msg_0.z = 0.2742412686036334;
    tmp_msg_0.z_units = 212U;
    tmp_msg_0.speed = 0.891612035471367;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.syringe0 = 149U;
    tmp_msg_0.syringe1 = 46U;
    tmp_msg_0.syringe2 = 236U;
    tmp_msg_0.custom.assign("KYGBWXVOUUAPNNJPSVVJALLJIOSTXBCYWOCYJBFDUEXZDWGQMRQSLHFFHGCGAEUIRDYZHFDTBHTOXXMFJZBLCPPMQKOAYREPWGRXAJEQQVVRSKISJYEQXXNIXIPFVZPMMOEWJ");
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
    msg.setTimeStamp(0.826490896065752);
    msg.setSource(34726U);
    msg.setSourceEntity(148U);
    msg.setDestination(60310U);
    msg.setDestinationEntity(10U);
    msg.name.assign("ZCTLLDCUJBHKGNWPUAKHPEBXRUTWGFVMTFZEAATFMVHEQWGRCZDFOOBXXELPRYRFS");
    msg.report_time = 0.1824028535158464;
    msg.medium = 121U;
    msg.lat = 0.5014579099913425;
    msg.lon = 0.2832718845373422;
    msg.depth = 0.30033432449793906;
    msg.alt = 0.7959800251307559;
    msg.sog = 0.2185756998750068;
    msg.cog = 0.699322300569173;

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
    msg.setTimeStamp(0.5777469638179283);
    msg.setSource(1337U);
    msg.setSourceEntity(67U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(1U);
    msg.name.assign("GUHEBMGWCFDTWELIKPCVOGAPNQGFKMDXOYJXHIMCAHLLFEOPSEETPLNQVUOKQXZXBSVMNFZIHMTJRRYUOBRZSLHNNRGXDSYQBSRPUD");
    msg.report_time = 0.8432381060616043;
    msg.medium = 12U;
    msg.lat = 0.8994846800274952;
    msg.lon = 0.5582233206986599;
    msg.depth = 0.6794115075055445;
    msg.alt = 0.6130436177072088;
    msg.sog = 0.6001433007205098;
    msg.cog = 0.4147380967505252;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.2824143631596002;
    tmp_msg_0.z_units = 115U;
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
    msg.setTimeStamp(0.33804414270005567);
    msg.setSource(26269U);
    msg.setSourceEntity(164U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.17647562055303923);
    msg.setSource(6839U);
    msg.setSourceEntity(138U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.09382557314788209);
    msg.setSource(48936U);
    msg.setSourceEntity(56U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.18865718184349034);
    msg.setSource(18638U);
    msg.setSourceEntity(247U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("BJICUTQOBDSWCKZSFTFCBLYUYBAXESHGFVCSVRLHLALHWAJODXRCNFQEPZUHDZMCTTMGQVFV");
    msg.description.assign("XPJHYXGCWEJBBICBJAEJGOLHNIMZXGYQCRNOOFUZEKWBBXQMKUDPTWMEMLZCMNMHGXRIIDITOMUNFXTIZOPRSYAYVDNCKYNIQKYTRSMVTRWVCPTLHQMPWLIKVJGVTGFHSANJOFULXKZCDCFDYGJPY");
    msg.vnamespace.assign("KKIFADBXUSBSOVHBRYTTQLYLTZUJXGNBQVUPKGAIZGSSOTYIKVDZFBLZRXSCMMTJBUWBHAFPGGYFEELGCOJGREBDEIQL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JLIPNATVFDLQSVGUNVJLHMSRQUYYFSVKDHVYNWADDWFXMZBQFZKQKGKWCTHQXYQCWRNEBCEARMWPQITDTVKSXSXZELRAMJHOLRHMRBBEPCUTFKJQXNIKOLXTONWUGAOG");
    tmp_msg_0.value.assign("DRNYWKUPMBVFGSGWAXENEIEEWYHRQQRNWIHCIFCYMQQGYTZVUJFNHUKEBZVCZOOBJPSWLBCIIZAFKPXPGELTJAAQPGDIFUDNMLSYUKNQMJSLQXZSDULFKWIVKPROZOTNDYURSJXCHGJMWTDURRLKCRHOJLSWLADAJTWYVXZAOBCENTPMOGEBLIQMWDABVDYYTPRMZ");
    tmp_msg_0.type = 229U;
    tmp_msg_0.access = 170U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DIHDQJEUGMCTBFWKARDGYMJYDTHVJJKEXKJBGDNTEVIMOSOBUXSPASLPKGHWZIHSCBFMEPUFNOCYHNTKCKXUZHUVAGSDRVWGGUZLHTLQOVLAYCHXVRGMNWDHZWWVNZLQRDOOBRRXZOELPJTPFIIFYOENPMYLAYCZKAITYBSQYCXQNAKQUSTUATBIINSNSPHPWGLGCDOXLWPFZICAKQADVNRQFRUUOBLFF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("APJRDBUUMITDMODPHVFCPLITAOFLPHFWQJQPPZYMXNMDQLBSUDNBRJQLYHHECZOMCBUTFEWHNJOXVTSJMXVSMKXQRHZTFIIQKOYFDSVRVXQUQYZCEQNSCWWRUGUZKJRGNNJIXBLIOYSEIYNIBCUKFRXGYGZXKGYWMBZGWAAPOEJHZDOTRBGAAHVKPAIHFWKLZHEGTLPGWEVMKEVJDOELAXEUJNOIDDPCWSTVBFZGFSNTVYRKWQBMRSLAASLTN");
    IMC::Drop tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 44756U;
    tmp_tmp_msg_1_0.lat = 0.16143882827776823;
    tmp_tmp_msg_1_0.lon = 0.29202071220714887;
    tmp_tmp_msg_1_0.z = 0.6796342143086577;
    tmp_tmp_msg_1_0.z_units = 26U;
    tmp_tmp_msg_1_0.speed = 0.20342530076304532;
    tmp_tmp_msg_1_0.speed_units = 123U;
    tmp_tmp_msg_1_0.custom.assign("XWAUQLKPMNNJUYQODCSIINBEDSAQNDGBWMKQPJLRQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FormationPlanExecution tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.group_name.assign("LWGOKKMTAHQVSSDGIQYSLJIVCQZPHXWODYLAQCRZXOSQHNRDVPELNUUFVGBCEIUZNTOEFMWMBE");
    tmp_tmp_msg_1_1.formation_name.assign("GCWPTGAQLIALUCUVOFYOIPIWRCBSNHEDWULAQBOGFFUJCPSANKUPDHSRNDWAQZKNDWNYEJODBFAVLRJYCJPVWXVGOXFBVPSUOQXMKMZCRWNWLZYAJQGYCR");
    tmp_tmp_msg_1_1.plan_id.assign("JYNSEDOBNNKRYOPDNHGXDEXLZFBSBCZHKYOPNQDFLLAMIGCPYUBADMZHEKWZPJRLPACXZQWZTIWUHNGTORGBUYHXHRTQGASADVIFUSMVNRTJL");
    tmp_tmp_msg_1_1.description.assign("XOTFEQAVIFDLIYJMLQROLPFCQZDMWHWGDSGIOZBGKJBBKHPAINGWZXNFHDUJFUWCCCLLKOFLDJJSHZRWLETMGEPNZCUELPUFSJANYHIWPXRCAFGAKKYQMDVOIGOYMIBXHIXWBUVXMYZSBTZGBFOJBYKZ");
    tmp_tmp_msg_1_1.leader_speed = 0.5705352848014356;
    tmp_tmp_msg_1_1.leader_bank_lim = 0.8567345805683402;
    tmp_tmp_msg_1_1.pos_sim_err_lim = 0.9196724259339879;
    tmp_tmp_msg_1_1.pos_sim_err_wrn = 0.011707854028219944;
    tmp_tmp_msg_1_1.pos_sim_err_timeout = 33957U;
    tmp_tmp_msg_1_1.converg_max = 0.7194013493948268;
    tmp_tmp_msg_1_1.converg_timeout = 48123U;
    tmp_tmp_msg_1_1.comms_timeout = 42548U;
    tmp_tmp_msg_1_1.turb_lim = 0.7572925120343987;
    tmp_tmp_msg_1_1.custom.assign("ROOKTPECHBYPLXKHORSGMTKSXCMQZCAAPVLYOCPCGSIHDVXAIVXAEMGWNTZZZZKQIWHBDLPIIKHNPTWQDOVLTPJZFXJBZWNJYIEZWAKTGWRJAEYQCHEGOJBJGKNLDRSVRFILOHAOYQDLYXNEPXUYDUVJMSBNGBEDSHIBMOSFUGUORFDPZFDYQNKLFGUPTIHABWNWUKVXNKQVULBMUSUVMTMLIXRRJWFCHMUAM");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Loiter tmp_msg_2;
    tmp_msg_2.timeout = 38399U;
    tmp_msg_2.lat = 0.9818628682950807;
    tmp_msg_2.lon = 0.3293067337640999;
    tmp_msg_2.z = 0.18839441085025477;
    tmp_msg_2.z_units = 165U;
    tmp_msg_2.duration = 15966U;
    tmp_msg_2.speed = 0.6101752051431838;
    tmp_msg_2.speed_units = 6U;
    tmp_msg_2.type = 74U;
    tmp_msg_2.radius = 0.2348852814835476;
    tmp_msg_2.length = 0.6376174147583207;
    tmp_msg_2.bearing = 0.6009130149513326;
    tmp_msg_2.direction = 144U;
    tmp_msg_2.custom.assign("ARLLPWLHNBNGDAIIMUHUFPFNBSZWTMQICMWCZUQGTFMFNJQNKQDVPJYWKCNXVHRKLMHRBGRMSZEPFCEAZYPDDGFXIJMEIANCYQJCNOHSAFPKTSRHEUEDBAYQXOYFUZYDMHTLZIBXQTJSRBJVOOOEIGPBJLMOAALVTVSVXKPRDJALSGKEJHQZJHT");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::FollowRefState tmp_msg_3;
    tmp_msg_3.control_src = 2458U;
    tmp_msg_3.control_ent = 150U;
    IMC::Reference tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.flags = 44U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_3_0_0;
    tmp_tmp_tmp_msg_3_0_0.value = 0.12484148923102989;
    tmp_tmp_tmp_msg_3_0_0.speed_units = 234U;
    tmp_tmp_msg_3_0.speed.set(tmp_tmp_tmp_msg_3_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_3_0_1;
    tmp_tmp_tmp_msg_3_0_1.value = 0.6599394852300499;
    tmp_tmp_tmp_msg_3_0_1.z_units = 196U;
    tmp_tmp_msg_3_0.z.set(tmp_tmp_tmp_msg_3_0_1);
    tmp_tmp_msg_3_0.lat = 0.3415168722495089;
    tmp_tmp_msg_3_0.lon = 0.5997021364259347;
    tmp_tmp_msg_3_0.radius = 0.6795038840119716;
    tmp_msg_3.reference.set(tmp_tmp_msg_3_0);
    tmp_msg_3.state = 103U;
    tmp_msg_3.proximity = 18U;
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
    msg.setTimeStamp(0.9870649243322802);
    msg.setSource(29542U);
    msg.setSourceEntity(227U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("FMLZQBPXPGKQMWZOXUSHLAFRVHWUL");
    msg.description.assign("BKQAOJVUNWYIDEBLLRZAOSCBPTPKGVEFTSMKFSGXCWZXDGCPXQLLATJBWMQRMIHLMTDZBHRFHKWVUFZZTW");
    msg.vnamespace.assign("EIDWPXSGDGVLNYQNNDQDCCJOUKSUNJKHBFIXSPRJKETALPVOLWBJTNUQRDWZTPWKGJAIAJNFVSNQZHXUMDYDRBBYTNTAAIBIZYLKFWLJPKWAVTMFYMJCYZXRMOYSZ");
    msg.start_man_id.assign("TAMILUQODBZHNHCYLUYWJPFXGAEELFMAJDTGZVPJGRYUKUBHTDVOBPQSWFQNJBQXDCOEXCWCHRLEGQASWTHYBIDYYJMURVASEUYTFKDTEIAIXVEQZPRMVCURNVFXYHMUWCSWQOCKIKBRTKNXLALKPVPNGWXBJPGSWDPFICPFZSNBTIOLYSN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("LSXIWULTRSOEMPXGFXUHBFWRKJLOSNPTUQYQWDQPKBSUDTROZMBKORLFHMFGQLGEDCJVOHENQNDZXSUJB");
    tmp_msg_0.dest_man.assign("VNXBWLBPTKQRCXPJIYKHLUGMMSADNORIQFPFLFBTWDXXUFKGYJSOMOGGZHTGXHSYKZSENZPOZJDIERYBKLNZU");
    tmp_msg_0.conditions.assign("BKSYWNEEXDIALWXNHCPKQJNHOUBIMTUEMTVWOWYYPUNAFPBUUSGDZTIXFWIOVXRK");
    IMC::MonitorEntityState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 79U;
    tmp_tmp_msg_0_0.entities.assign("FMXKMVVVGVRBRTBULZSUCZTEWYHSJ");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::GpioStateSet tmp_msg_1;
    tmp_msg_1.name.assign("WGAISVWUFQLWXKZVARKXEXGGNKQRULOKUOMFDDIRFRBVCUENTWACOTETZGLQCNVVJKEWCINHUXKXBMIOYQEPETMYLGACZUKZQMIFXMOMNEPJTRXUAWFDNCRUJSIZZBWHSVSPSYKYSBJWLRQOIJFSEQOHPZNGQTFLLHDAYTGAJJIMGMKLOLHYWTXRNRFBPCQTVHCHBUQPJRZAPHBKDAMXVTDEHNZZDWOJY");
    tmp_msg_1.value = 231U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityParameter tmp_msg_2;
    tmp_msg_2.name.assign("RTPFZQUUDLQWIGCKTMZKSAUQXPMYZROBIAWBFHRRWPWVVVINSJEIXZLJMHSOLUYTOYVGZVZUTADRZNXYFMUBDMXXSTLAHLUSQDKWCFQECUYJKCYPDEIOOSTWAJENGNXTHKSZKNVUJBGLRPORMKEVGWCYQDPFGLQMLQYJBUOBZDSMJDFJTWHKGCSI");
    tmp_msg_2.value.assign("DOEXKYZMKOFVMYBCFSOVMLNAEZFUEVJHUXQSRPOVEPWJQEZZFHRNLPVSKFASITDPLRPGZHRWIJRUUDZDNTXILNLJHPVGKNSQXCKWCKVDEUMJZTUOSUGGBWB");
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
    msg.setTimeStamp(0.8304493371478027);
    msg.setSource(58188U);
    msg.setSourceEntity(242U);
    msg.setDestination(20402U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("WVLWQYUJGCXKYSTIONTQANUZJUMZOSMEXJNNNOVFCWEUTRILQACNXREOJUSKTOSXPZQCDOEPIWAYZCJLIYYYWGKAVF");
    msg.description.assign("YZNQNEOWDHAZGWTAUXXURKHWRNPYFIQDJRIRLVYAUESISFXEDIPUFDJVLPIFELCGLCUWTSZCQVBQJWSCXTNNSTFOLOSAWDAXRCQIKKJQBSZOYSOZKGWUJTTMBUKAFGDPBRHWWVKVLDVFZMRBLCMLVVJBBYIEANRHOCUJEXEZTYBKQHIMQHNGPDGDFGHYPAJMIKALZTMRYGEINCXCBBPWEXZMNMTQKKHOHGYXJOOPPHQSTLFJMFRSPAZGXCNV");
    msg.vnamespace.assign("EHMVJFCGVVGNBXVUSYFPYZPBREJKNBNCAVXIIPWEEDYHOQMPLTSTCVQMMTCNACMGKPHWCWEKLTBRSXNIMTZTUBWGCDUHKYZZDRAUBOLXAAJPVOJBQXOEJRUTEWUKF");
    msg.start_man_id.assign("KTGHPYYAOQXNYKAQFPCBZF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("VRQALWHXIJPLYPSTIOZTYFBEPKRXVETCQLBSRCHWTZVUEIHWUZGESHJPFRUJKYQOCEVDKQVWUFPYWLBMZZIDNZERBHASQQVNIXFIMYAIMOFQVECVOAWJCSDFAPRUDYKJJFUNKJDDFWTSCSJTHTPILHGGADIMQNCAYNURGYLHSKAMZOLMQORTMTLORXMBZAEUUYTBNGGNCWNBXXDAPRYFMMZBZ");
    tmp_msg_0.dest_man.assign("GPDOGCARIPEGPDIJXNVDLRITRXDEXFUMVHSHSUPEYJDAQJDBLUCOHADOKTRECQGPMLJZHOUK");
    tmp_msg_0.conditions.assign("NNRKJXWAKAVENIAUUTHJKDDYCLCZTBZZYESACWHHNXPSVFXJNEUHMUTHMZLFQVXMWYWURBXLZLNVDUFSTIDEIFMVBIQCSJIRIJFTGXCFAKHMEWIHOSDDPEPBMPGPMHWSREGIDU");
    IMC::ImageTxSettings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.fps = 90U;
    tmp_tmp_msg_0_0.quality = 187U;
    tmp_tmp_msg_0_0.reps = 130U;
    tmp_tmp_msg_0_0.tsize = 247U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::FormCtrlParam tmp_msg_1;
    tmp_msg_1.action = 127U;
    tmp_msg_1.longain = 0.6480628142397236;
    tmp_msg_1.latgain = 0.2802234000313387;
    tmp_msg_1.bondthick = 2440816404U;
    tmp_msg_1.leadgain = 0.357063321587188;
    tmp_msg_1.deconflgain = 0.5350591600882306;
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
    msg.setTimeStamp(0.34346959112144215);
    msg.setSource(63571U);
    msg.setSourceEntity(192U);
    msg.setDestination(56539U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("MRMYSOGZNMPADRZLBZJTAYOTJJJKMYHETKAINXXKVFDQBJDPLYOZHMJBBGNGELQCWOUQIQZSCBJJVFDOGHUJQRBFOWSICNCYNLEOSVPTXXCXGGINEZVYWUZKIHPDNGZFLUHBXDSSQKYYEFVTKOLTLWFGPIEXCEFTTQBZIMANVDCXEFDKRXAVKWFWTRITRJDUG");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("BNHPYQCZDZMTUDJGFPPHQBGQXBZRISSKCCAPNVRYSACFJDADAWLQLOVZNVCPKZIIKDHTXVNPLNZWMJTSISUBYWRIFOCORLCANZXZQMLORDKCUKGMWZTYGPOUNBWY");
    tmp_msg_0.max_speed = 0.5243406322266239;
    tmp_msg_0.speed_units = 191U;
    tmp_msg_0.lat = 0.9549832740966597;
    tmp_msg_0.lon = 0.9401022050941457;
    tmp_msg_0.z = 0.40568063128904575;
    tmp_msg_0.z_units = 145U;
    tmp_msg_0.custom.assign("OKPGADXMQZIFROCVDHWKLYGYQZAZQKWFUPJHXJZVTSFRKGUTRBOEUJAMIPLAGBSQR");
    msg.data.set(tmp_msg_0);
    IMC::SetLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("KEBNFSYXIQKLVPUBGQXJXGKXTXYRHAAJHDMHKICWDZBLMZYGKIVMLPFVXCEKNKNVOWIRQSOQDAPXREJDTKNELUVJVLDZDIWHESOJIAXHFOMQBPGMTTGGHDQNJEBSTHUWZUUKQASFWPNZTPCADDHMRSTHIVUUFMUJPVWORYRWCXVOSAFROBLASMINFOYGYLRMEZBJGHYORKRNCSGXPJCEPT");
    tmp_msg_1.value = 233U;
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
    msg.setTimeStamp(0.3725563083298097);
    msg.setSource(5673U);
    msg.setSourceEntity(183U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(34U);
    msg.maneuver_id.assign("JMVFWJVSRYQFPDFCRCWTBKVQBYXADRIHLIXLSIECWVLFRJUCWPBMCNOLNZOMURMSOPKXDOPTCWOKQGZTVUWVSGOLAOXPDGSGTDVPERFFUDOYGESIKBATA");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.3950999060963759);
    msg.setSource(52758U);
    msg.setSourceEntity(129U);
    msg.setDestination(45288U);
    msg.setDestinationEntity(67U);
    msg.maneuver_id.assign("RNBJMTENBIMOQLJRSGCQUDVLLUFAZLKZWBOCKJYICGFQTVVGOWLZMDWLHNCTJUQETFKWDGPHXDTXGHVHEGFWXYOEXPDQKFEXVYMKIBRBXDVIERNSZHTIHGHVYOCXPJSEFSUZUDAYLDNXSCWSBXMAMGOAKPREWCAIRLITUQUOMMPUDBKCHNZSHKBIEZAZPESYPYBGAARYWCPTAPUXNRJLJTQNMBQVZVRFYVNJWJDLCTUMWIOZYFHKNP");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 11788U;
    tmp_msg_0.lat = 0.9456972388244226;
    tmp_msg_0.lon = 0.28444160366099136;
    tmp_msg_0.z = 0.7702065617194817;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.2945076875565944;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.duration = 6354U;
    tmp_msg_0.radius = 0.8127076139775046;
    tmp_msg_0.flags = 89U;
    tmp_msg_0.custom.assign("UUHNECZDHURRVSIFYMWAZMAJXCJVOBJYQTVOOLLTDRSWPSRBEQLMIJTGQPGLMSHVEVBKNBAYFVDFRLFZFPLKIEJQHNZQAWKMSDTRZGBLLVAGTXKTDXUCIKYMPGWSOGKGVIUYWDPPDGYPBNDIFKHEWXJZBTCQSIXAQYHZUEICRERCKHBYUONANJEGTBNEPJ");
    msg.data.set(tmp_msg_0);
    IMC::CompassCalibration tmp_msg_1;
    tmp_msg_1.timeout = 12547U;
    tmp_msg_1.lat = 0.37980504349495736;
    tmp_msg_1.lon = 0.05400881000543234;
    tmp_msg_1.z = 0.8212188172892202;
    tmp_msg_1.z_units = 188U;
    tmp_msg_1.pitch = 0.6301456239076799;
    tmp_msg_1.amplitude = 0.6661275220311272;
    tmp_msg_1.duration = 40365U;
    tmp_msg_1.speed = 0.877495346233682;
    tmp_msg_1.speed_units = 194U;
    tmp_msg_1.radius = 0.5413252147256704;
    tmp_msg_1.direction = 67U;
    tmp_msg_1.custom.assign("PLVZILCLHUPBSAQMVTNJIUXLTOSXCZUDIWGBRGILLVWYEODVYYOSJNUAKAVNUYDDRCBWJ");
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
    msg.setTimeStamp(0.2671865082644751);
    msg.setSource(48686U);
    msg.setSourceEntity(234U);
    msg.setDestination(20271U);
    msg.setDestinationEntity(130U);
    msg.source_man.assign("OZUBPVWBVPJUQJNPO");
    msg.dest_man.assign("KQEMMJSLODZMRKWDYYIYFQJAJCHWOQBNCHNEVLSRAGZNRLWPZIYBVCKEQWRGEVACTSTMKQSRCLFUGTAUPWBNTNBKKEGUZHPGAJJXLHDFOAZMIZOPXHILQHCWVHTJWNFMNTTRDYEKDSJKWLYDMCUETSBTPXBEOSXPPIDXFHQUMRHOIGLKGQLZXXBWP");
    msg.conditions.assign("HDQARIGISZXLQFKWKDJCATWCUDHTCOORQQUZPKUXIWDPRXVKXKIORDJZYALFMRVOVCGJOPXQSGWIZEFWEUDBLATSMIOCJTVWOBXJWCUCRVMPFEJZYQZFXKRWWGARNPYZXQWHNZ");

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
    msg.setTimeStamp(0.733069322976759);
    msg.setSource(35288U);
    msg.setSourceEntity(183U);
    msg.setDestination(15786U);
    msg.setDestinationEntity(82U);
    msg.source_man.assign("IJRIMPOTBAXYCEIVDFNNYLYYRWDIKZKIUSWHUNFIVWLSHCHFWOPVFEBLUHHOGMESLLLUCQQBRDQGGOBNDQGSFWTDSYKFRTRKVMQISXSUCBLZTMRCQIYCNXHTVJTFSGDZAQGTIWHTXP");
    msg.dest_man.assign("XPVPDEJIPAFREJQDWPUOZHRZFPKRUWSDNAPTBCBVYLLQDQFMCJDEUTACRHDYOSCZSYKKNRAVOMVIUXRSOULBVZKNZJGLTXLKPIIJIDBAMFMXCCVBLKMDNWHGYTXMLCGVEJEWCSIIQBZJQWZFNQQFZTNFWLFDWGOOCUMMSAOVJPHASHEURNOYSBFYWLTGBMKTXWSEOYBURIQZEJD");
    msg.conditions.assign("XDCAANIWSXZBOXOSXVQADPUOPVLQINRSFHYZJMPXIKNFIQKXYWTPDEEGSHDVFHSLEMWVHFZYCQWUKGVFUWNNWYNOLVZKNOHLHESENLZMOMIVMJXAVNJTEOGHIQWLGQDUKTASERMGSEVBMGRGCLRAPMKCLFTQRRDCEZJOR");

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
    msg.setTimeStamp(0.09033925320947778);
    msg.setSource(12919U);
    msg.setSourceEntity(163U);
    msg.setDestination(27531U);
    msg.setDestinationEntity(49U);
    msg.source_man.assign("VLHTNUGJIXXZMZNRARWXDGAWZAJAHKEHYSFWYEKBDDUUCPQYCKSOMTHMZCTEVRPOWBMURPLSKTCJRNMGZIPQVPFFDJRNWFEDXGCCBYAQFGMJZOIVSKDWJLJHYXQTQSLENQUYCNLWTYDOUTNDBFZPNOMUBVVIPGOJVBNAMSQXHKQYYTHIJ");
    msg.dest_man.assign("CNHXATCDAVUZENWENACRHXEDMLLOKUSRYTUFTTLRXXQDCBHVXPRPSYCGGPZFUGBRWVQRNIHIYGYDHGSUBQTAJALZJCRFEWKXRZBQTESBYMONVOLCKKFZMYMJZSMLQITLUKMKNZVOPHBFTJPUVOGPMUIPISBOISVHHQTBPFAILWESCJJDENWGCNSDGKGZFFUOUQGMOPLYFYA");
    msg.conditions.assign("UMJKBBHKKUAIZDCTWLTKARSSYGGWPLDAD");

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
    msg.setTimeStamp(0.10338796251832483);
    msg.setSource(20898U);
    msg.setSourceEntity(74U);
    msg.setDestination(53856U);
    msg.setDestinationEntity(145U);
    msg.command = 116U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JQKVBDXHBZQWMRUTEGYJFKVGAECMCXWZLLAJTXFXYDBOTTLKQYHGHXUDSEGOKHOCJIBLICDCSRYXHZAOBYWZBRNVUUDXQVJTJMKFLFNYISUZYGEAZPPQMIUIWLKWPWKBNSTXOQCEBWRVRGSWGLXQBARNKPLFZLVJEYONEJTJYPATVHFRZQMUHFEHDGN");
    tmp_msg_0.description.assign("DQUIWQREYTQOKDTRCJLMPLMIGUXTSRFBCSCAPVWQQMAFBYGRDNSOSYLXDFOCKZXORLOULYJIDQIIDUCGCNFYZHUBJAMEJNYHRCDMXZGKZAGFPGVPNXOZKYMRPBSBVIOKOJJMYCWVEATKULJFBXVOWFBWLLSEPAHQWHJGATMHLKUIBDZWSPNDSGWQTNAEFNRJQVXZTXOEPPKHVINCGMJMLVWURVEUTIZGHSFAYBIAYE");
    tmp_msg_0.vnamespace.assign("LHQXAKFGRCLXCUTQNPPQGWEHMFTYZLCFJXGSVRSNIJGISEAYEEXTOHIRYBIMVGFSJDWRUNVKVBUFXJOFBRZZQPEARIZYFDLPCNWYCRZODXJIKDEIMIBEBP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HETYLBASVLBUAMJUTIXQAVDOIOFUZQZKSOAPDTAJTWKEMNWCESOUXZFYBLPQMNWLZCCWGSEFHWOHINYTSNOAMEIYZXLEKJCQQCDGKRLLXSNEUAVVXY");
    tmp_tmp_msg_0_0.value.assign("LFETWNIIJW");
    tmp_tmp_msg_0_0.type = 20U;
    tmp_tmp_msg_0_0.access = 5U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NXSTSXDFWIBBHYUWZPYPDVISPWIDHOLIRGYPVWOEUFHYKMEMAGIXWSPZFXCBKLNMPKQCNZDPLUGOLDQBNCMRFHYJOITTXEWHSDHCGAUVQCBFRSPKLALZVOKVRTGNNDRAEFPFKJSJUBUIGYSZVIEJGAHTUXJJANLXCBDKXXAKAEMMERGUACYVZQQQJCRBDTRBUOMWOZVOQTFMGENC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DWVJANRRCTOFFZDURXGQTZAOTJPUSZUECPLIMKXXZBBQNDWYFXFNEXJVUAEABIZDGONXLIWUAWMPITVLPZIGEKJNRLTARGCKCBDOOGSSWVHRKTIHAOQJKFUCXCWCCLSWPRYHBSWGYGTOMRKYMNAIGJVKPPYNYABEZKHDOZDSBFZWTCDSQEVTXIVLPIHKUQYYLFEBKFWQHRPLHEFSQHCNXJQMVDIRJHUDVMESYGTQV");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.45749443743988305;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.33319708189875497;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9646853532304894;
    tmp_tmp_tmp_msg_0_1_0.z_units = 127U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.023498285790820583;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 87U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.3826877204602781;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.9093277408504887;
    tmp_tmp_tmp_msg_0_1_0.width = 0.08962879797292234;
    tmp_tmp_tmp_msg_0_1_0.length = 0.1935745031065358;
    tmp_tmp_tmp_msg_0_1_0.coff = 133U;
    tmp_tmp_tmp_msg_0_1_0.angaperture = 0.44651219471354786;
    tmp_tmp_tmp_msg_0_1_0.range = 54501U;
    tmp_tmp_tmp_msg_0_1_0.overlap = 70U;
    tmp_tmp_tmp_msg_0_1_0.flags = 17U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PNXUHRAEHCLSVGRSZSZAUAYMBZCIKISPZMJSGDHYWVHWZNOKJHMTOJIDPQVQKLXIFKRMFZQYPFFGDNCAVDJHVOWQCDVLEBIECTKXJWVVGOLYBQMGRMWTZAFRMEABBUUFVECYAPCSIBIJURHWSWYSBTHDYBWXRSWSOFGPGJQKAXWOFIGCVLPXUMMNZZOYOBGOKUTTXQLNGKQTXLNDNLRYJDFAUDJLAZRKHTPYUUIQCOETNENIEDPBPEFXML");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetLedBrightness tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("RWDZEZOLZQIFKXSOHCUFTIWWWYBQPFWQOGPJDYTIVUWDKLLAVBTYLKUFPEFQHWNMKNJWLSMIZTBJUBCJPVYURBGZVSOCUIIPBVDSEETZUYCPMDSLAMFHGNXYLSKRYJJDXHDAQINTQCULRXIA");
    tmp_tmp_tmp_msg_0_1_1.value = 236U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ReportedState tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.1096132663322803;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.017597036351394202;
    tmp_tmp_tmp_msg_0_1_2.depth = 0.5359291475552623;
    tmp_tmp_tmp_msg_0_1_2.roll = 0.2513592929607503;
    tmp_tmp_tmp_msg_0_1_2.pitch = 0.27712931680066955;
    tmp_tmp_tmp_msg_0_1_2.yaw = 0.8186527855454316;
    tmp_tmp_tmp_msg_0_1_2.rcp_time = 0.44478459572784634;
    tmp_tmp_tmp_msg_0_1_2.sid.assign("CTYEIQOIABNCIDHWKHGINLZSJSSAEGJEDJCJMZBXMZQWSLTVGUOEXJE");
    tmp_tmp_tmp_msg_0_1_2.s_type = 204U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::MagneticField tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.041295413692923444;
    tmp_tmp_msg_0_2.x = 0.7726344462844552;
    tmp_tmp_msg_0_2.y = 0.7018975685096663;
    tmp_tmp_msg_0_2.z = 0.8785728103427164;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Announce tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sys_name.assign("ULBSPAEQOGPCVMDDWDAQWKRPAMHMZGWQENBICCNLTUZYBZBKLUZWIOIMCRNXUVOJNVOYKHHVHGSNENLEUTDXOKBP");
    tmp_tmp_msg_0_3.sys_type = 167U;
    tmp_tmp_msg_0_3.owner = 58036U;
    tmp_tmp_msg_0_3.lat = 0.5028513437543702;
    tmp_tmp_msg_0_3.lon = 0.9316030215142047;
    tmp_tmp_msg_0_3.height = 0.04950342234475913;
    tmp_tmp_msg_0_3.services.assign("HHDOGDZWXJCWHPALYICQNMEYNPGJXHEGEOQYVE");
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
    msg.setTimeStamp(0.48921399735420756);
    msg.setSource(21011U);
    msg.setSourceEntity(101U);
    msg.setDestination(17039U);
    msg.setDestinationEntity(85U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SZAJPPXTNZOXVKTYJLUIJACXSTQYEVHWUFYOWSVIWZRMRPBKMSRALFNMZSCQURYDOXJTWIUAFHNBPGPUKGTVRJFBCUXSIRBDEDRHFZLJCDQZKTEDSYY");
    tmp_msg_0.description.assign("AQGPJBPLJLWLHDPYZHFNDHNHPABEZCOOXZHXRQEVECINBCJAAJHGCIFERPDRZAFJLBMMBMLCWGVXRJVPOSARABJOFUGNXTQOSUGVSSOBOSYIEDXYAWCCUFQZGWYEMDBNURXBEYKFICKTRPTLSGDQVKKEOQCOTNNTZVWKTGHXATUNTNUPYWJILXVKPUOYYIHMMYKRWQXZREIJLKVYLAHFFMZIQSCVBRUDKSSFXPUEHGQMMZTD");
    tmp_msg_0.vnamespace.assign("HOTFPDQCYONWVHFLFZUVJEYYBEOKUTPETDVTGDRNQLJEXLXSTHSUBPBXAXBVCPDYXRZXYAMSRLQQO");
    tmp_msg_0.start_man_id.assign("HAYODEAXSXDKFCYVCHOQGMPEZFFLOFSPJKYUGGTBOTHVDJWRCBVJBOINTHSPEYMTIRPFAMDHXPTDDIVVUEYEHZZTSKNPWRBGWQOZXKAKLMKYJGTQOFIAKHTWNMGUQQLWNLCIIXZQCJRCNEJSKPEURHFZQGJSLNILUSWWMBVVIZGAXDFJBVDBTKYARXBLPNXAMYWZGRUOIKGAEMHVALTPMFSMZNXCQYBUVU");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YUWUGGSXPZMWCHDKIGUTTOGVAUKSLMHMHDDVBUFDPMEERQRMKLENYAOPVJQSIFXODKOFLBTRKFJUHOLNXIHGOHQRQMULGIWITVOYXNVEDBXIKTJZXJWTNZWYQHKFCMPPBIPNDRBRCLJNAMQDVZAMCCJKXRKOTZGHUBOKYZIPJBLBQJJASIAGTNBA");
    tmp_tmp_msg_0_0.dest_man.assign("RRJHMXMWWXAWHYBGSKKJTYALQGLYLFQMFMGWBHKXVIIBTAJRUOMTHSIHTCZNLPPOXBVMDUFPDQDPCPDNDQNMNNAEEYJJJVFBZERICAKFNWLVKSWLWYMGBYATQOGINFDPSTJAZHLOBKWBNYEFMETUGALXEECTPHITOVXYUSPRFQADPRHRQWKTNIZVVKBGVAZIJHZKCUEGUXOZVUXLIYUCYUSZJZDOBRXZDQSD");
    tmp_tmp_msg_0_0.conditions.assign("ZUZPRWKUQTVVMKBCCOQCEO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::UsblPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target = 47196U;
    tmp_tmp_msg_0_1.x = 0.6861070948787739;
    tmp_tmp_msg_0_1.y = 0.8740917009966089;
    tmp_tmp_msg_0_1.z = 0.8324590967494604;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.1765439446186451);
    msg.setSource(46863U);
    msg.setSourceEntity(144U);
    msg.setDestination(37675U);
    msg.setDestinationEntity(158U);
    msg.command = 245U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HRHESZMUMNMFKOTMVCFHFDYTDBN");
    tmp_msg_0.description.assign("SLOIAQOJVNOEEGIZNXTWAVSYHGHEKDQMTZVGMEOTRTARMYSZXTTJUIFBFLFSOSGCHITCYRCUYBKLWWIYVZDZRQQQVGKYGUCDZFDFADZKCLIEDHALYFIQRDUEPMYORPTXTAEKNLRVQDJWPCHMIMEFXQPNIFJBQXNHYWXWPGVCNSWJVJ");
    tmp_msg_0.vnamespace.assign("CLZEJPSWIXYNZUDABFSEQS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AFFENCWVDPPOGPGRXWJKU");
    tmp_tmp_msg_0_0.value.assign("QBLKWMAYEXUHYVODBFIGPSQCJDCORVFCFSXNHNOCMJKHTIESIKGHAQITRNSFUVGEDOBVJQBRCZWYUBTCKNLLFVDAJJDYKKZEGGUTLBUOXSWHJAPYMIEHBUVXWVSZNIFXMASDMXSCGHJFFNTRHZUOWJWCNEPRIGDZDWDMOZPPLFAKRSLQOKYEJYISLYXBLANFBZPVPHUTQQZIVBCZRUTKRHWVTRWXMYKMGTMDTCNL");
    tmp_tmp_msg_0_0.type = 117U;
    tmp_tmp_msg_0_0.access = 230U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OOYQTMCRLRFMAZPUWTJVDWCILDGXUMRMCPUOMRHYIVJMFJCNZSOJOXHBDHZCKWACPQLEEXUIXXUSPNAIWJZMLOST");
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
    msg.setTimeStamp(0.3662429822490607);
    msg.setSource(12173U);
    msg.setSourceEntity(49U);
    msg.setDestination(40369U);
    msg.setDestinationEntity(172U);
    msg.state = 240U;
    msg.plan_id.assign("UPJKESBPYZOSOXIJZBWBINQYHIRGFMDHKUDRFOKXULBKWKSUWIYYVC");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.3529159185416131);
    msg.setSource(39554U);
    msg.setSourceEntity(25U);
    msg.setDestination(18488U);
    msg.setDestinationEntity(149U);
    msg.state = 135U;
    msg.plan_id.assign("VKQAMHDZUWIEKSTXORRMVXDTUFETYQCGLKQMSXPZYWHGOEIXQVTIBVAPCJFBWVQXZDHEQCEMJKRIELNSJKHOKBBNPBRAOGZGNWTOIGOXFJFYALNNPCJYPYSHAJONZAIHVRLCJJMYWYQDEVZLKFMBFKDNNUWKCWEYAHJFBDPLCWMRMLSSFIZKTGXBXAZUHLVPAEGVDOORWXMPQUIU");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.19613124889362643);
    msg.setSource(1440U);
    msg.setSourceEntity(22U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(96U);
    msg.state = 232U;
    msg.plan_id.assign("PSJBQIRAVMJMVMDALSIKFCCYGXEYKMTUACHJINUEYTSIHTSLPIOKUTSKTFVDCFBGZXOQDENOHVYAYJPZTPQFLRXDQWGTWDOUINZKBIROJHSTONYUSQWBZOVKWUXBZFRMALFTPKKAQLSGOPPSZC");
    msg.comm_level = 161U;

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
    msg.setTimeStamp(0.3238710074389771);
    msg.setSource(18072U);
    msg.setSourceEntity(3U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(208U);
    msg.type = 204U;
    msg.op = 248U;
    msg.request_id = 38202U;
    msg.plan_id.assign("FDPWLXVOKBJQZJB");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("OQBNPXYOJFUUFQDU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UATROLLRRQDOHVRHTOZADPHDZVGLPPYNFPLKQTNECOMDSLNGVWEXIBWVYSHXFLBYXWYEQDPDHSMWNRRCZDWDWAYIMQYCEGEDGYJQFPINPYBZXJVJXYXXUBZESQAJKCTRJCJMGIBFIKLWKUZKKSBZCGULCQHJCIQZHBKIMANWWZTKFNSBASMMSJNFOEVGDJPJQEXBAQAVHOZGNVUSKHMAUTKFWFP");

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
    msg.setTimeStamp(0.9840446786920539);
    msg.setSource(42176U);
    msg.setSourceEntity(185U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(109U);
    msg.type = 50U;
    msg.op = 27U;
    msg.request_id = 29993U;
    msg.plan_id.assign("MCUPCBLVHXFALLAULAHCYACSHVDPPNPQRZBQRIVUMEMFZBRJJNSMOKCLGMKZXLYHDPKTXFVTSITWOXVRUEBDHBOUYGDOAZMZPEKVSOCIWUDMDFXYJDTLSITUXOYRWBTMNEEIHHFQXIZEGCQRSMBSZVGXGNJUALEGWQXJMRZJFZRKQSIWBAAWOWNNUXLYKW");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.6395386971729052;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EGQXIQNGMOWDMUSSANBWXFGTIYXLVDBCXZXJIRAVRZANZSHQSDKOFVEETGYAGBTMLGBYPFIDRMNZHLXLDVXJJQPCMBRMJSAIPYTNYHYQSTOFEWWEUC");

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
    msg.setTimeStamp(0.06175982304309824);
    msg.setSource(39841U);
    msg.setSourceEntity(195U);
    msg.setDestination(49936U);
    msg.setDestinationEntity(40U);
    msg.type = 107U;
    msg.op = 195U;
    msg.request_id = 24673U;
    msg.plan_id.assign("TXYYLFGWOEPXNHQQOCSWIKCHOHCSJEMTOTARFYPQVIQKFHWZQKHOBRYJDDRWZXRSGZSSHJLGVWMTGKIWXFQRERFAECDTDRJLPUTBRBSLFNZMBETR");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 170U;
    tmp_msg_0.error_count = 234U;
    tmp_msg_0.error_ents.assign("YSUZRDXDEVKLRLOYWCZHYRPZXJURWQVNEAAMZYGXEPSDPOHJTACFQZZNHNJYFQRIGOTGNTAUUWBCUKGWYOJMMIUQKGRTPYOIUTFLHVUKCMQZASPSCFVXRAAOBJFBQSEYWMCTYMLDQ");
    tmp_msg_0.maneuver_type = 60777U;
    tmp_msg_0.maneuver_stime = 0.894144373958546;
    tmp_msg_0.maneuver_eta = 42309U;
    tmp_msg_0.control_loops = 2082225700U;
    tmp_msg_0.flags = 109U;
    tmp_msg_0.last_error.assign("OQYUTMYUHAMDPZWEEAIUMKFCCWWNSLHIFSIINZVDYBXLQZHOJDQYHEBCKMAXEZRBXLMUFCUNFTJBCVVAEDBNXGDRPIOYTJDBGZBYJIMJTXKJUHKKWFOONLCLTGMHTDVTFJPIWSUJHFSARCPXZOSDZUQQFTVTEEUYRKHFZINZNXYLPFAKBKIWVYESVQXVNGKASSMWBLQRDLSXKAC");
    tmp_msg_0.last_error_time = 0.27385114456237614;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MCLLKGYQUYUDGRJJZFDQOTSLWRGOXOCUAMAAJXKXJWKRBYIWQGYODUTHVYWYJQIARMEWANRSXDQAODZKWSEBGHFNPFHOQANDNZJKEVVNGBSVTVINYSINEOQLWODUHCJWUBICLUMMNGHKEBKAHJSUIEUVXQRHABXISMFTLKOR");

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
    msg.setTimeStamp(0.6148098839386158);
    msg.setSource(1538U);
    msg.setSourceEntity(247U);
    msg.setDestination(26434U);
    msg.setDestinationEntity(70U);
    msg.plan_count = 3916U;
    msg.plan_size = 363668294U;
    msg.change_time = 0.49609466004289327;
    msg.change_sid = 31120U;
    msg.change_sname.assign("UZTTTXRLCDFKYSDFMHYBMCHRHINUDWKVLNWCPPYSHLGZOJSLNSBZMXMIIHSKVYCNNITBJUKEFGAEANQQPNVVQFDIVAMRQCMIOKAOMAPLUTGLEPKBSBVJALGCWRBORXWPEWPTDZQWEHTYRSYKJJCDSBHIFULQOLJHADNBVJHTYXVZUNZKKDZSXUIP");
    const signed char tmp_msg_0[] = {-31, 93, -128, 80, 29, -121, -9, -22, 120, -27, 120, -78, 38, -13, -88, 108, -69, 61, 5, 78, 125, -76, 43, 52, -50, 61, 68, -6, -25, 51, -57, 19, 92, 113, 44, -39, -58, 103, 40, 43, -97, 93, -86, 120, -50, 33, 14, -69, -98, 7, 99, -105, 73, 123, -84, -36, -96, -8, 63, -10, -115, -69, 50, 57, -4, -65, -96, -4, 3, -51, -14, 102, -94, -7, 20, -49, -94, 119, 56, -124, -77, 8, -66, -28, 38, -117, 126, -18, -86, 69, 38, 111, -10, -121, 111, 118, -42, 113, 105, 7, -105, 79, 105, 121, -77, -123, 64, 82, -47, -114, 16, 117, -12, 113, 91, 20, 74, 73, -57, -74, -21, -66, 121, 8, 124, 1, 26, 110, 100, 12, 115, 104, 26, 81, -86};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EXTBCIPJZKHLBOGZUWVKTDATHJFACFZORYCTDZMEWZFNLHEWIONSEXOOJZXMKBEJOSQLRGMAZRBKCENBXPJLUAIFUOLJRKNQHDBAIHZHHTWFXDFCG");
    tmp_msg_1.plan_size = 14613U;
    tmp_msg_1.change_time = 0.6238872093874548;
    tmp_msg_1.change_sid = 14979U;
    tmp_msg_1.change_sname.assign("APRRYNGNONDTCQZBHSQXWPHDIFK");
    const signed char tmp_tmp_msg_1_0[] = {31, -14, -70, 74, -29, 9, -76, 15, 120, 117, 41, 97, 48, -105, 97, 113, -82, 118, -64, -124, 32, -36, -2, -64, -7, 91, 119, -51, -74, -96, -20, -85, 55, -95, 63, -48, 71, -27, 125, -103, 100, -36, -9, 57, 115, -47, 9, -56, -19, 75, -107, 54, -25, 8, 2, -69, 63, 51, -124, 115, -126, -48, -87, -9, -121, -60, -49, -16, -119, 55, 64, -11, -125, 41, 94, -50, 1, 50, 112, 42, 83, 28, -32, 14, -100, 9, 89, 67, 26, -30, -66, 104, -102, -84, -53, -110, -122, 105, 34, -94, 82, -96, -119, -53, 61, 46, 90, -4, 42, -41, 18, -117, -39, 124, 77, 48, -123, 66, 121, -100, 72, -115, -16, 92, -22, -122, 95, -105, -72, -70, 23};
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
    msg.setTimeStamp(0.3128233350262084);
    msg.setSource(43542U);
    msg.setSourceEntity(30U);
    msg.setDestination(53937U);
    msg.setDestinationEntity(10U);
    msg.plan_count = 16207U;
    msg.plan_size = 313302072U;
    msg.change_time = 0.1437534860389289;
    msg.change_sid = 59749U;
    msg.change_sname.assign("JMAOGKORXRMLKZUFWUCVRBCVFWMMHERDVIRKMYBPTAJLTPBQPYOUGOEPSKZIOJFAPDCLEQHHQORMAXYTNWNWNGNGVTMYXSDVFULXDBCAMUVDCTPOHTMHBBBWAIISISQKEGXZEGEOPKLYIFNVCZTDCNYGPH");
    const signed char tmp_msg_0[] = {11, -15, 76, 59, -40, -77, 122, 30, 66, 30, 5, -73, 123, -13, -96, 119, -128, -104, -102, -12, -56, 20, 83, 6, 41, 51, 97, 81, -89, -115, -84, 27, -110, -36, -98, -125, -16, -113, -87, -35, 56, 40, 70, -124, -74, 88, -45, 60, -105, 73, 93, -22, 67, 23, 0, 100, -119, -53, -11, -101, -67, 63, 16, 83, -102, -74, -7, 75, -94, -71, -45, -15, -33, 25, -81, 50, 26, -4, 70, 85, -71, 1, 78, -75, -118, 71, -49, -61, -37, -65, -113, 106, 126, -88, -58, 3, -67, -92, 16, -30, -87, 15, -16, -20, 39, -122, -80, -42, -84, -90, -46, -80, -111, 89, 33, 78, 62, 56, -61, 90, -67, -25, -69, -118, -55, -104, 18, 99, 56, -98, -89, 79, -67, -56, 116, -26, -21, -40, -125, 59, -27, 19, -56, 8, -54, -47, 9, -91, -40, 8, -7, -115, -40, 8, -12, -41, -113, 36, -71, 95, -57, -61, -120, 122, 28, 13, -66, -12, 0, 29, 52, 104, 38, -80, 91, 13, -82, 81, -76};
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
    msg.setTimeStamp(0.742165639976565);
    msg.setSource(27382U);
    msg.setSourceEntity(11U);
    msg.setDestination(23872U);
    msg.setDestinationEntity(67U);
    msg.plan_count = 10492U;
    msg.plan_size = 2745472535U;
    msg.change_time = 0.07600040796044394;
    msg.change_sid = 52542U;
    msg.change_sname.assign("ZQGDTPTBVGRJWMKOCHBMCHJKEVTRLJGWYLSZIQZTTGLQQVTUDCARNFMLTQYYURHXVAWXCHQVEAPJPXHAWZMMDAKHGNPEQAFSSXFXHDACYJEYREQWNEPCFTDXHIPAUTCUMDOIVMCSFKKFWDIKAWLOKNPLIEMJOORGGZJPJUOZPOISBUZPRQTJWZAKNFSBVKCBIOYZYGQLSVFRYUUMSRDIHKLBXSOFGDUBILNNJVWSBYYXWRIEECNEVOMHLBNZ");
    const signed char tmp_msg_0[] = {110, -125, 32, 78, -47, 80, -67, -43, -62, -64, -5, 64, 117, 76, 78, -56, -28, 0, 50, 125, 121, -27, -35, -44, 54, -111, 62, 92, 109, -45, -18, -57, -80, -60, -51, 8, -32, 65, 125, 2, 77, 68, 68, 52, -43, -68, 17, -53, -25, 3, 123, -79, 28, 113, 46, -27, -37, -67, -4, 22, 124, -74, -36, 84, -17, 54, 13, -99, -61, 12, -47, 95, -102, -26, 98, -11, 57, 85, 76, -19};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LSWZGWHPREJIXAQQGLMAFZLHWYGVMUXKNWIDVPVUSDFYIOMTNEKZXYGSRRQDZQOMWFZZXMHSYXQPRYKCIJEBZYKPXUWFJOCBUEBBILYCIASEZZCHLWDUHORBGSBIQQGPXYLFWNRTVDJUKSEDUBJFAPOIRKPJZUUERCGYXKNWB");
    tmp_msg_1.plan_size = 10606U;
    tmp_msg_1.change_time = 0.5615994210897115;
    tmp_msg_1.change_sid = 28765U;
    tmp_msg_1.change_sname.assign("NDSQQVCPZDZGRJZSAVGYSQLBZTYOHHRCFRQSWLGGJNKWRMGMFUBQAIGOJVPKNNARYDHVLEHJXZWAZCPGKOLRPQCWTCAHCEPNOZVPISGDJDX");
    const signed char tmp_tmp_msg_1_0[] = {55, 59, 125, -4, 119, -35, -16, -33, 69, 113, 103, 68, -69, 5, 80, 123, -70, 125, -79, 113, 98, 125, 59, 95, 64, -38, 82, 55, -52, -127, -31, -25, -52, -25, -33, 73, -113, 103, -107, -35, 21, -51, 14, -21, 23, 68, 111, 79, -107, 119, 42, 56, -27, 19, 84, -60, 25, -86, 36, 74, -68, 88, 117, 22, -57, -11, -112, -74, 60, -88, -23, 69, 100, 78, -117, -99, -5, -120, 26, -29, -104, -77, 48, 91, -122, -93, 92, -76, 32, 52, 20, 11, 110, 38, 36, -38, 69, 74, -15, 52, -60, -32, -66, -69, 93, -77, 60, 105, 11, -56, -3, -52, -11, 68, 100, 31, 46, 82, -58, -71, 37, 44, 32};
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
    msg.setTimeStamp(0.07514635468268804);
    msg.setSource(56965U);
    msg.setSourceEntity(16U);
    msg.setDestination(642U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("OSIGNEQKYAQMFVJOQRRCQIBUVERNIAPQUUKFTRRUTGYOMGZCBANNCXTEDNTCWAXHMWRUVWNFCPGDPBLWZRZJOVKWIAXISYSZAOPDMBEFUMAVQKCIAYOAHXYMXTDTZBQKNCKWETUPLHIQTUXRVLBSFJGLOEBSPKSPGIDPYMHMSLHLFXFHHSXGDENHMFYDCEWYD");
    msg.plan_size = 14043U;
    msg.change_time = 0.8989371490241698;
    msg.change_sid = 22124U;
    msg.change_sname.assign("SDVYUQPQNAC");
    const signed char tmp_msg_0[] = {-90, -17, 59, -83, -89, -14, 74, 97, -5, -39, 25, 94, -74, 103, 87, -52, -49, 8, -20, 73, 20, 14, -25, 96, 59, -40, -2, -14, -2, -125, 90, -121, -72, 93, 0, 103, 32, 91, 93, 18, 31, -7, 78, -118, -31, -112, 111, -51, 1, 98, 38, 58, -8, 112, -28, -85, 108, -2, -60, -7, 66, 109, -5, -44, 96, -51, 84, 69, 34, 66, 18, -64, 26, 37, 34, 95, 87, 16, 33, -54, -11, 17, 39, -41, 74, -50, 111, -111, 30, 108, -111, -91, -118, 125, 80, 9, -48, -66, -30, 9, 15, -28, -44, 70, -35, 49, -45, 97, 87, -77, -97, 5, 29, 80, 12, 22, 112, -107, 110, -7, -48, 77, -85, 33, 70, -83, 119, -126, 124, 74, -24, 85, 69, -8, 81, 72, 75, 21, -31, -27, 5, -30, 70, 42, -67, -127, 87, 122, 92, -122, 20, 6, 101, 40, -91, -72, -102, -91, -88, 97, -107, 35, -39, -34, 106, -83, 95, -97, 70, 80, 114, -88, 26, 2, 111, -100, -101, -126, -63, 104, -53, 126, 63, 55, -88, 90, -10, -56, -64, -36};
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
    msg.setTimeStamp(0.5810869385654571);
    msg.setSource(42509U);
    msg.setSourceEntity(63U);
    msg.setDestination(53505U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("PERLEZFCOGITQWYENXFIIQTAMUWGMDGSYZUASYJZBDGFGNOWTXNBKZYQTFWUDKCFYCDNRSAFPWTMCHUSCBIPIGZPNHHBVWVNOIHPPELXLE");
    msg.plan_size = 15292U;
    msg.change_time = 0.705820736153175;
    msg.change_sid = 47100U;
    msg.change_sname.assign("YMHKMRYESBEURZXCZUEQIKQKVDVCBWGHGAMZOGHTSGNKPHGMWZDJIYFLMDGQOUGFODNVPTPFJSBATNPDSSJNXLZCSAYYHESOLNUZKBFOIJNERJTINFJXTQXZUKMVRWRVQJQILFJZALYIUPUVSIRFECXHQUBHNUPXWTACDTYMICTHSPLJXQCNOB");
    const signed char tmp_msg_0[] = {-117, 105, -25, -98, 123, 26, -70, 5, 26, 114, 123, -113, -10, -76, 6, -73, 120, 75, -126, -45, 114, 27, 80, 93, -53, -112, 19, 39, 54, -76, -128, -46, 112, 35, 121, 68, -53, -111, 43, -10, -21, 72, 10, -47, 81, 45, -31, -7, -104, 117, -20, 94, -65, -126, -30, -102, -73, 103, 18, -54, 62, 43, 113, 56, 17, 20, -128, 94, -41, -105, 26, 123, -53, -20, -34, 112, -100, 22, -68, -84, 23, -107, 69, -26, 108, -25, -120, 16, 16, 44, -88, -27, 2, -31};
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
    msg.setTimeStamp(0.40098447351299726);
    msg.setSource(20503U);
    msg.setSourceEntity(170U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("TOIAQYPHBGJHKQKDYJLQXSHZMYMEEBPZDNRAXOSGFOMFNOLAULRYHAYBDYMHCWICYXUCTHVZQPMJQLEFUUCYSR");
    msg.plan_size = 34140U;
    msg.change_time = 0.22486669698184425;
    msg.change_sid = 30866U;
    msg.change_sname.assign("LJLRKKCPJSUOKVUOHZTDJZDIUHQWYKAYDSAXCRSVPGTAZZXNGRXGEAQHLBVQMAIRHFCCGGCDXOONLPWQHTZSOMUGPCECFLIWNZSBEJKYIXYWFZTXIEHBLJUXDVQKIEBJBHCUTWMHYXYPLGFT");
    const signed char tmp_msg_0[] = {56, 114, 90, -128, -54, 58, 10, 18, -2, 90, -122, -106, 88, -17, 0, -114, -95, 68, -89, -39, 47, 122, -63, 112, -73, -8, -19, 29, 67, -115, 21, -55, -46, -116, -128, 111, -60, 28, -65, 43, -48, -124, -126, -47, -85, -12, -82, 12, 107};
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
    msg.setTimeStamp(0.6323618277614698);
    msg.setSource(50692U);
    msg.setSourceEntity(29U);
    msg.setDestination(14831U);
    msg.setDestinationEntity(216U);
    msg.type = 177U;
    msg.op = 236U;
    msg.request_id = 44619U;
    msg.plan_id.assign("WLOQGSEEGNTNSTRMQUEMWVMVHZFRUGDSPHMQZOCKNUIPFCIBMCHCTKEVTAJIUKKSOSXQJHLWGKMYTAVBKVGNPPBNBOXAKSXGOUEKFCZLDRYCZAZHODRRMOFNFQVQTHHHFJILWTRPZEADLJJMFUBMGOYZBSXOJUBHARKJZ");
    msg.flags = 22722U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 51156U;
    tmp_msg_0.destination.assign("MTKTNJJBHXOWZSOGEOMMVUQPLNTVIYOJKMTLTQQUJWPEFEROCWMREZWZKUGEQ");
    tmp_msg_0.timeout = 0.6151724961659056;
    tmp_msg_0.range = 0.30654660764975095;
    tmp_msg_0.type = 217U;
    IMC::IoEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 237U;
    tmp_tmp_msg_0_0.error.assign("HGNGIOGATFIYOXITQKILOYNKHUQWQTDMQYHSCCQAUDLBMZWSNKMIKFJFSVAIZSIBPVOAATXGXCJTWOQDJGFTXQHNGIBJFUCLZHOVMEPZZWYJJNTKXJUTEQDPLBNMWDUORDCNQXOBJRHMTFZLFXNMMPKGBKSAWBVLHFZELUZRBRCPVAVAVBYIGMKYUSXE");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AZVZWWSLHKFKMX");

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
    msg.setTimeStamp(0.24475467993737787);
    msg.setSource(46953U);
    msg.setSourceEntity(101U);
    msg.setDestination(33380U);
    msg.setDestinationEntity(197U);
    msg.type = 125U;
    msg.op = 203U;
    msg.request_id = 49150U;
    msg.plan_id.assign("FEMLJWRMCBJRTVTFQPDIOMGUOKWUHIXQDFCJRKMAHZPPJYPCHAHNQHSBWXRLULCAXXBQGTLGCHKPDMDDTNBEKEMROGDI");
    msg.flags = 29548U;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.20668611929339642;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHPJTVXFACCSYBIWQYOMHAONDDDVRMUJJKBSWYEVMVFHRYXMJQOGIZSNWKLNTVHMUTXTMAUAGTXCGPSAORAYESYBADNZGHXXTFKBJRKRUVCKPLSWZIDWR");

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
    msg.setTimeStamp(0.6068593906319582);
    msg.setSource(32382U);
    msg.setSourceEntity(106U);
    msg.setDestination(40303U);
    msg.setDestinationEntity(248U);
    msg.type = 223U;
    msg.op = 207U;
    msg.request_id = 60510U;
    msg.plan_id.assign("BPLRXZAKQPT");
    msg.flags = 29647U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9042687802743751;
    tmp_msg_0.lon = 0.4185410596828577;
    tmp_msg_0.eta = 1892488082U;
    tmp_msg_0.duration = 12498U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XNURXKRVPDLDIFIAAIKDZMAYNOTTDTSOGWSZCUKQRTYMZPAKXCRZYJUNQFANPBZKAXCYHNVGTYDQYMMSYZLCDUQFFQWCZMIBMDJWWVIEGJHXBVRWEQZMKLUUJPODDRJQLTHFRBHKVPJSGCWZPQKIQKDOBBXVIAFYQLPJCTNEGGS");

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
    msg.setTimeStamp(0.39536520112905005);
    msg.setSource(55135U);
    msg.setSourceEntity(6U);
    msg.setDestination(49443U);
    msg.setDestinationEntity(112U);
    msg.state = 139U;
    msg.plan_id.assign("VQCJMCXBMUVXHIISYLQBCPJSMONZIZWJEUYWESHWSGBJEDIFYALGFYFDLNSHMMEBYUWHOKCPXUKZIIDQCWGCFDPNXRLAUFPIRPSPQQVAVXLR");
    msg.plan_eta = -1540834572;
    msg.plan_progress = 0.0008220341368299078;
    msg.man_id.assign("DWGCBMMLXCECDZVZLJMPE");
    msg.man_type = 61086U;
    msg.man_eta = -261017685;
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
    msg.setTimeStamp(0.7466273085541304);
    msg.setSource(16936U);
    msg.setSourceEntity(222U);
    msg.setDestination(8852U);
    msg.setDestinationEntity(155U);
    msg.state = 3U;
    msg.plan_id.assign("COZMYVJFQRUBJXCJIZWLRDSURKGKZTHYZBSSEPXNTSVOZMHDIPGNHIYABJWQBTZEKJAORSPHLBZRIPCBTVSMHKSKTLGPFFDGDEYJMPBQCFKYXBHJXRVILAFEEGWOVLTIROUQCDYLNQIYTOMUXYOENQNHHKZWTPAEMRJNACFSLAEQLCMKENXGLGMDDLVQNVWVONWWXXGJHBVUPUYIGIJSFQUFDUXKPOVRQDAUYWRUAPZWA");
    msg.plan_eta = 1752629201;
    msg.plan_progress = 0.5013676274115285;
    msg.man_id.assign("ULOEDMTWTUXCYLWJPDLHFYIJKRZAWZDUVFQJTLIKGQRHRSPURTXHDAHXVVOKLXMEIKHFAVQARCMDFBPSYCDDHPQCGVNPVTDRZYISUBSCMRWSXUVMQBGPEIMEKIIMONZAFWNTGZFUAJNGZSYOLHXZELNFUIFOGPOHQTHJBGPTDOGAX");
    msg.man_type = 61544U;
    msg.man_eta = 1410627604;
    msg.last_outcome = 117U;

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
    msg.setTimeStamp(0.10684929577412428);
    msg.setSource(5388U);
    msg.setSourceEntity(227U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(109U);
    msg.state = 221U;
    msg.plan_id.assign("RAPOGTJHBCXJLWYWERGWEUFJICOQAYXVHBMELGZZRLNASYYCGMIULGQJXJURLEGZDHDVYTMWZALTKGQNXYRIVNJKVQWMDSBSOJKFPTQWNM");
    msg.plan_eta = 636967293;
    msg.plan_progress = 0.03952262423791009;
    msg.man_id.assign("CDWULSNRAYPIXCMHBJJREGFBYQCEFAYINHZDDKTZGYJK");
    msg.man_type = 8351U;
    msg.man_eta = 1638948099;
    msg.last_outcome = 125U;

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
    msg.setTimeStamp(0.27410787566250494);
    msg.setSource(40877U);
    msg.setSourceEntity(137U);
    msg.setDestination(63875U);
    msg.setDestinationEntity(45U);
    msg.name.assign("XJDJEZSVYHUTLDADKWMQKVRNCCVKUBVYSQDOQCRGHSBGAXGIRXCPXRWTZPJASZNKBMZGKARBUJAMLBDYKQITYWDLDIEQXEQVLYZVZLOICAYLFWSYTJZTOPXSCKQAIOEJHVNVQMRXCWEOAPORPPQEGVJUMMTLMWKBWYGSSWQXJFNFOFMDEFBNGOLUZPIFFHOIZNGWHEDCRTUKLNOPXXM");
    msg.value.assign("TAVDSMBLSCNQFGDOPEKXLBFDAKAEHITZVGDMSWCOYWQBELTWWNOZMKYJIZLCTNRQQOHIXLFIVFAGOTOVWZAZDEPDLXEJICZNBMXCRYMEAMQSIQDVXLWUCSUPLZYXRIOTDIRMQZHBRFGRFRGPTDSFCHGHSYJTCOUBNKARKXU");
    msg.type = 113U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.968359609754702);
    msg.setSource(62005U);
    msg.setSourceEntity(78U);
    msg.setDestination(4450U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TRMHSFFKYJWWXNUOEVOQINCFWCXTUSHEOVJFIEZYLAYFCPMGYKTPMAUPFBMWHLWKKDVJCHVGBBXDPWNJNELKLCKYDUSNEVGJRLOYPUCRFUSGBEKUIEZAXAZTWQNOIBRAMVSREMHBXYSZTQBCAIGYVGQDQXRHHHSJWLKMDGDTKEUHJFELUOBPFXLMVODBMGUTXRSNTAFXTPVGSTNISZYLIKODNZCZOZXBPDWNQHQJRVRRZJYWJACGAOLQ");
    msg.value.assign("KNDTIDVCUEIQLBFRKPNROSAXFTPWAEGQNEDHJGUPZEOREECZWTYRHXXUSKHKRUXRTMUEYZTWRKNDJQILGTZKFMLBVCFQIUBPZQGGQOTBLPJGPQLVADZJSYVWNBDHSWXVLFDMSNAUIJWYCNOZYMXFXIPTFHXVKPAHGAKQJPCBMVKJBGWPZEZCYILQMAM");
    msg.type = 242U;
    msg.access = 47U;

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
    msg.setTimeStamp(0.4340605462424342);
    msg.setSource(23003U);
    msg.setSourceEntity(200U);
    msg.setDestination(31964U);
    msg.setDestinationEntity(160U);
    msg.name.assign("QCNJYCASSDFK");
    msg.value.assign("MJLUQSGWKDLUZLAVNYYQJYWOXDVAOPFACUZZXNQVXGDJRKWKPGCBTTNHCKYILBZIHIXOZKNRWGBHWXWHOXFHUTMABDKRUHVMSPWESXBMVUFATSFBHIIVUQPZOEOLTNJDSYTQUGEENBBSWJAOVPHXLTKQTJRGZYVSKOSCGGYECPIACTOPEZKLLASNFCJEGPRLUFCYIZWQQOAIHYQMVSENFIDWCDE");
    msg.type = 117U;
    msg.access = 8U;

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
    msg.setTimeStamp(0.34273455710827827);
    msg.setSource(17734U);
    msg.setSourceEntity(43U);
    msg.setDestination(17708U);
    msg.setDestinationEntity(112U);
    msg.cmd = 26U;
    msg.op = 31U;
    msg.plan_id.assign("QYSOHPHHGIPEOKRDGTQASEKXBVHWWYICHTRFSVMZWBXXPRLMYTZDQBXZGOWFYUUYDKMAMEZQIMJBUUWWJOSSUKCCVBFKQGGBYMATTFQOJJRRZHLHFPUEZACNRJZPAMFHDCPEPWQJRGMTXYCUALZLADEULJXHCBEGMIJNVXPCUDFALOIIONEBVAFCDGCINVPOJFQLEKATVIGYWLSRRXNWBL");
    msg.params.assign("YVOVDWGDOZCUJSWFXSBLYRTPVMYGGYQQJBANTFNJTZNGBREKDMZEXEOI");

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
    msg.setTimeStamp(0.2109348167393601);
    msg.setSource(10299U);
    msg.setSourceEntity(59U);
    msg.setDestination(3362U);
    msg.setDestinationEntity(197U);
    msg.cmd = 104U;
    msg.op = 244U;
    msg.plan_id.assign("QHKAWRFWFFCGPQEYLEACCLUWQDGOTOTRRPKVSUSHUDXBJPAYNNUVSTVTJWZXJMWBXGLSMYKBFTPLAKSTSBQZOMFNGRZBZHCYHWRVOBPQDDHOXVRCNUKHJTTMBZQOPDLNMCTOESULWECLHDYXSUAEDPORYOYMBADIFMJGKZGNZMCYBZAKWZHNICSNFXJLLRVQXHGAPNEIKVIIPUFIMXMQPJIRQKVQZAIIDEFIDVYBJEKOHFXWLYWUXNEJSEGJRT");
    msg.params.assign("GGSFXUDERNBOIGSKALMQGEPUACSRYOWWZLMWIYMGBFIYNJVWFILNFZEXKMMBNYPEODOOHTANVRDAXVJSRXUGCBXMXZUUCPMAYECKVICEHUCZVKNPRSHBTONBDNZTAKAHHFBCGVJSJCBTCTEQXWWPHCRIWUUJDPMYKUDEVDWPJXSHQKYPXMHVNY");

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
    msg.setTimeStamp(0.7859858849103611);
    msg.setSource(60214U);
    msg.setSourceEntity(83U);
    msg.setDestination(60838U);
    msg.setDestinationEntity(131U);
    msg.cmd = 253U;
    msg.op = 176U;
    msg.plan_id.assign("SUATHQAGKOZCNYNJBMB");
    msg.params.assign("HEHAYPZPOSJRSIRFBRRLFOJILEXAXTQFSKQHLZVLWI");

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
    msg.setTimeStamp(0.4419115986161728);
    msg.setSource(9619U);
    msg.setSourceEntity(32U);
    msg.setDestination(18379U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("XGELLFKWGTMDGXJYFZEDNNVNEGEBPQBLUSOSHVDXMDTANAVCTHBFJTQBOCBHFOOGKTSMMUSRXAJGOULFRAZYEWVJNMIGJHMHAMKKCKZURRVGJWQTPCUOIWVAWIRRLRQRNBJBYPDQKVDYDOHZDVWXRTFVIIZPHHYJLEVXQBZINQNGFSTQNYXKIDOFPEZJDCLYSFMPEEGCPPWNZOKXPSTHBZUYMUSU");
    msg.op = 220U;
    msg.lat = 0.6417784031739532;
    msg.lon = 0.5636087341468061;
    msg.height = 0.3863216679562982;
    msg.x = 0.529537609645051;
    msg.y = 0.6151367250769175;
    msg.z = 0.22488976549259532;
    msg.phi = 0.37277991586815495;
    msg.theta = 0.9435391769183655;
    msg.psi = 0.3926797991168349;
    msg.vx = 0.7126779109518062;
    msg.vy = 0.4169919664726396;
    msg.vz = 0.2709486144533151;
    msg.p = 0.7432707398579483;
    msg.q = 0.9405218614527309;
    msg.r = 0.025785302372922758;
    msg.svx = 0.8557674842532292;
    msg.svy = 0.6718782711168703;
    msg.svz = 0.606570044012604;

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
    msg.setTimeStamp(0.5975807054003338);
    msg.setSource(14881U);
    msg.setSourceEntity(190U);
    msg.setDestination(25728U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("AJEMOXPMOQXROCNUCCCSIHWYJZWMXQYMSSPYRQQGSWZILPFQVCRXICGYAPCGESFWUBLYWENMGWXDWAVDRZAHSTGMJAOLILQKOPHSJWOODOFBHIVBPVFXCPYVVSDVPUTHRMBECCZDSPGQZTKNLYEOUTJBWXABLU");
    msg.op = 84U;
    msg.lat = 0.3030108057470786;
    msg.lon = 0.11904115701171092;
    msg.height = 0.2978412975412087;
    msg.x = 0.05519774213830264;
    msg.y = 0.8408278038032669;
    msg.z = 0.7848274855132892;
    msg.phi = 0.20526804961471312;
    msg.theta = 0.547843955160439;
    msg.psi = 0.9503181077809352;
    msg.vx = 0.725636852553014;
    msg.vy = 0.7766931823788022;
    msg.vz = 0.5471999854796443;
    msg.p = 0.4503346806989261;
    msg.q = 0.041256076165441136;
    msg.r = 0.8210660653098228;
    msg.svx = 0.13201052552973258;
    msg.svy = 0.3846220881371939;
    msg.svz = 0.5760306376980799;

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
    msg.setTimeStamp(0.01999145950001291);
    msg.setSource(48577U);
    msg.setSourceEntity(234U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("TMDMYBZFIPZXMAJJGSLFZZGGMQUTXZAAZDCACAUBVTWRNEKYXSQONCGHEBQPRYFONRVYHHACBBZECGJRQUFKHPQBTPKOLRYFJEFOCIKIHPDKURJEKWHSOUVPCIYQPSHBDUQQWYNXXBVXJURIDZTMEPTWKSITVLQLKKMZYPAGROVLNSGUDXFDWGEYMSFNDNNKULCIBXXTRAAHOVWLJQNSMLSTLYPMXWUVFGCEWOMVWLGIJDDJTWHOECIBVFNJH");
    msg.op = 208U;
    msg.lat = 0.6251794434775498;
    msg.lon = 0.3336284890509915;
    msg.height = 0.3308652424929187;
    msg.x = 0.5229618525551439;
    msg.y = 0.30534717320885874;
    msg.z = 0.9851048889488517;
    msg.phi = 0.25722836613441236;
    msg.theta = 0.8309865841329392;
    msg.psi = 0.6591969006054372;
    msg.vx = 0.08571351513757619;
    msg.vy = 0.8239289757104896;
    msg.vz = 0.3854659605892651;
    msg.p = 0.3230632096105365;
    msg.q = 0.09461704860973152;
    msg.r = 0.3511332540809331;
    msg.svx = 0.8174645079237672;
    msg.svy = 0.3476743072284585;
    msg.svz = 0.02048087539540855;

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
    msg.setTimeStamp(0.31494163815193765);
    msg.setSource(13193U);
    msg.setSourceEntity(251U);
    msg.setDestination(42607U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("QPWBQUVBHGONLQBGEWPEFOJQMXJBMFZGXDCALEYJDINGBGIONCFDTCMZMQERADEYQYVXSMRNWHVDFKXRKYZMWXLJAQXBKPALOBWNIWEDHDPHYVSCFYVTXIDOVIOIVUMTWZSZZMIRZHTESRNOZXLXLYKVYHOUTWFCNKIPUKCBURMTKJBGLRYXSSRPFSUJBTWCUUJJHEGDSMGUNCZAKWPSVLGEKROU");
    msg.type = 242U;
    msg.properties = 90U;
    msg.durations.assign("TBGLJXDOSAAXKYIHBVTKXHYDMYMGFVAWEOCUGYOQWHADZXPWEULMYTVWKMQESQIJMJHZKFPDAFONCHKVEORLREIVAMOMQTZUMFGJTLWLXEJTAUIYBNGVQNWNFMRLSREAMSCZVDXVIGFZSKHHUFJBSUFANBJVYBKBBTHJEDCNSCODPCDGFBBJYPQQPLROOQNGUPZKRQDCSHLPSTYJKTCIPLWEWXVZGI");
    msg.distances.assign("LAQXHYNAUMTFMNMFCDFUNXEKCJCJEVPOZQFORSKKGDIUZOCEABTMFFHAHJVHOJYVDOUTEWN");
    msg.actions.assign("GUBPLRLWHRZYMNBSQGSTXJPXDHPTBYESKOHOORXYRODOLGSQCUNCCVFKUPRZINLIBXZXDNBGBKCSRPAKADEFFEEXQPADTVQLNUBOJMCDTV");
    msg.fuel.assign("EGLBOZZNGQPSVASKPIYUWYXEMCSXSYDEFKXYIWOFHPXJKONEERFDVGNLIXVPRIMWLERHPHWVHYMTILTJKMWTNTOQODMYYPKJHSKNOZSQIAVROIJEVHYGZFXTQCQJJRYGPRACDUZ");

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
    msg.setTimeStamp(0.11390727893058483);
    msg.setSource(55398U);
    msg.setSourceEntity(104U);
    msg.setDestination(53939U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("SMUMPTYPHHKJCBSZLMVQQVWSRYOYBEXDDULRFZXKABXCFJPDWRARAKAVYIOVQTTZQEOPDHMKRNUORZOHELFGAXZWNIKOKJQHGKOGBQXBJPFTHFNZMSCVDZEIZXCRZDWAOKNJJZBOASHUTEKGREBFWHCCHHLNFYMWVRQSTWIIMY");
    msg.type = 183U;
    msg.properties = 22U;
    msg.durations.assign("GMPIVBLZVYBSVZCHLUQRWPCPTUSHCGWLRIXNECMCYFSTZXMAVZJOQEMSYPSZWWGCKZWSBUJTOVHPJIRQPULXGYUEXJQSDT");
    msg.distances.assign("RGVLUCVZZLYODPIQCCAPEFBBWQPCRWKLOXBEPRAEPZMYAROJH");
    msg.actions.assign("SWVRZGBPOXEYG");
    msg.fuel.assign("XEAZIBUGFYMIYQFEBAARGWVHUDYJZVGSTDMAWPPPHXJKMQGBLFSWHDGQONYGNTSMFAKMXUKXWMEIWXJONWDOJFDZMPPDACELJWSYYDCSEUQUCQJYHIBJTIPDKQYZFBRLXNHHHRSISTCVZKRRPDNJLXBMVTNELJTORPCLPEOWITNOI");

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
    msg.setTimeStamp(0.05777092327527611);
    msg.setSource(8955U);
    msg.setSourceEntity(89U);
    msg.setDestination(60041U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("JDNQHMHXXJUHUFEUCJQGUSYGGJMOWRUJUD");
    msg.type = 54U;
    msg.properties = 26U;
    msg.durations.assign("MZUKIQWXVJTCATLHJNMWMPOPFSLRGQHNGAODCMSQPTQBLUDDGDGZABIYIRCRSHLFOOEUYYWRTBIXYEOSZKLHNGYWHQMZFSJYQVDVKZBXSUBPDLKX");
    msg.distances.assign("PPBJZUZXTJOGZITCPCOKIIJECWHYSDXXANLYJOPGTGOVETQMUTKCULJJWCBJPMVXVIHQGKSEZBQHWDGVLZOOKEWM");
    msg.actions.assign("GZTGKEAVUUUSQDWIMFJUPHGSWQNCTKBJHXDVMKFVMWKDOJOSOYCJVWLUZQXRFCTBRAUEJWFQOJROUTPSJLEPNQLULFYLAIBDIIZKNSCFAZOLVMPTDVVKPIWAQPIRRPMMLZLQTXCIZRTEKREHWETEGATBNXCBMCFGRNOYDVYHSUWGNXHOKNE");
    msg.fuel.assign("USDFEXVAXNDLGBPRBBYSYJDKZAKPPSCMHWNMHBNDQXEZAEQCSDIQBSQTZMQRLAUFRKIVGIJGLEQOQBMWJZIOTFTRAIVFRVLXCXLWPKFYWCCVKFPLVGOHSENXHONVRBQYWPNCWTGYSFUCFRKPNOHQAN");

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
    msg.setTimeStamp(0.836872919043904);
    msg.setSource(34142U);
    msg.setSourceEntity(114U);
    msg.setDestination(48168U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.8169068609215357;
    msg.lon = 0.297820165925484;
    msg.depth = 0.30003360267811063;
    msg.roll = 0.3493732258615171;
    msg.pitch = 0.15722419072263694;
    msg.yaw = 0.2594106732639264;
    msg.rcp_time = 0.43974006407787924;
    msg.sid.assign("HKSUHTZEWGNENMGMRLPQFFOSIHRKZPWYFJPBQGLJONUWBFTKGNDDBIJNDSASZNXQRBVXOVTOCXNDTZEPFUAJFY");
    msg.s_type = 146U;

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
    msg.setTimeStamp(0.44182329848254187);
    msg.setSource(5871U);
    msg.setSourceEntity(236U);
    msg.setDestination(35880U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.2211188846595309;
    msg.lon = 0.4893045158769891;
    msg.depth = 0.7821227980217473;
    msg.roll = 0.4586542899104116;
    msg.pitch = 0.9939330967008545;
    msg.yaw = 0.024838161212512477;
    msg.rcp_time = 0.8090170192914693;
    msg.sid.assign("EXBVAKOGSNDBSTXDIWRNHVWNFEGPTWKHOPQSMXNECNDFQPHDBUZGBZUSKUCVRKYJZMTBREGUVQUYAGZJKGRICXYXQYKAPTGQDPZJSAZRDLKIYFEDOHMBRIYTGAXSLNGXAVTCFXWJPAIFMOFVSNEAJTAYLMLPHDWHWELMBWHJCPOPQHQYUQLFIZVOFRLCMUTJNSOWVODCIRLCZZUUBKMMSXUCJEBFLKTIOZYSEHJKTRXEINIDJPRVFYQQLW");
    msg.s_type = 145U;

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
    msg.setTimeStamp(0.02735595199045493);
    msg.setSource(53292U);
    msg.setSourceEntity(199U);
    msg.setDestination(35672U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.19106966512245016;
    msg.lon = 0.9973987195576461;
    msg.depth = 0.8862644718708012;
    msg.roll = 0.2997290975643371;
    msg.pitch = 0.7639413728940063;
    msg.yaw = 0.5395594724795407;
    msg.rcp_time = 0.08754643662135186;
    msg.sid.assign("WHWJTSNGNXCQNNKHUEKOHXRPVDHAYTWAIPOVQHKKDIJZQUMOYFBXQGUKSMTVYCXPRTANTINBLYWUBRTRPOWXDBVRMMEAQGJWBZJQEXQVQRICFAPACAYDLGIF");
    msg.s_type = 194U;

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
    msg.setTimeStamp(0.6496394136058588);
    msg.setSource(1522U);
    msg.setSourceEntity(19U);
    msg.setDestination(61947U);
    msg.setDestinationEntity(105U);
    msg.id.assign("DSSEGQWFIMZWBEMF");
    msg.sensor_class.assign("FUKZAULNMUNRBYDSOTNRRSZWOXAAKPVOOEZSKBMTQBKBIJXWYJVBEZEVUNKZKPRJGSEQXRYHPTHHXPDBIYQFLDQSHGNUHICKCFTYSTCMQLWCPAEDKGJLYVRVJXZAJMXCWQSWGTCUVXAHLFKPILNWWDFPIVNYCNNFPECDQUXZTCIPFMIJAPLZGXJSEDRBMXEUOHHDGOCRJLHWTNAZUADTSVHYGRUYVWMABLMMYWIZBE");
    msg.lat = 0.32536195687343983;
    msg.lon = 0.39234150258393885;
    msg.alt = 0.18195903638911815;
    msg.heading = 0.6668906885354913;
    msg.data.assign("RHJGHDPDRYVAKSMJSDRXGDNTHFSIJCSDZVQLETBFGQNCLSYBMQOWZNMZWZZZBXFAXGUJAEXMCBD");

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
    msg.setTimeStamp(0.6950216194093898);
    msg.setSource(14347U);
    msg.setSourceEntity(176U);
    msg.setDestination(10037U);
    msg.setDestinationEntity(130U);
    msg.id.assign("KAMLWSDPYNERCNUQFIUVMDZHWMXSQOZSOXJUFGTVPGZHDGPBVMRTITBOXSMLCWBTDMCRAFMESQETAKIKVEJCYZXQWBLC");
    msg.sensor_class.assign("QYJPQMVGTTEOKFXY");
    msg.lat = 0.6388608568204291;
    msg.lon = 0.874394833748441;
    msg.alt = 0.6393559608376477;
    msg.heading = 0.0067197903014953875;
    msg.data.assign("IEBOVDMTLTHVFYUOZRMGEWDTZRHBHZSDBSELCFPXJPAVPLY");

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
    msg.setTimeStamp(0.20975077623311533);
    msg.setSource(1877U);
    msg.setSourceEntity(64U);
    msg.setDestination(21025U);
    msg.setDestinationEntity(22U);
    msg.id.assign("TJBRKVYAMFHVSPPQRKJEOYPKNBQKZHVEPOYVPXTUSQQICUNZDYCNVILAZXCZOURIMWSAHFAQKTERMGSEZGIBHBYVJIEMPRSGFYDNSEKGLDUBQJOKTHNREJLYZNAXSRBFTJHVXCGNTRSXQUTWJJHLVCPXDZKKUWQXTWIEXMNIBXQ");
    msg.sensor_class.assign("XYCQKVBRNGCDOHVUZIWMYNMDHBSFTPSJOIYMGUFYIVTWXLHWXQGBDGUVHNNSEKBFSPLZGSBEHDUPUZXVDTCIZDMQOIXBFLEIUQIAGQCGJYTOKJXXJMMFLZTWLVIYOWPGPGHUDCEJZFYANYBQPLOOJTWSCCXAHIAJVRHZWABMFREJOQWLJKKPPIYRDAKZFSKSOATRLKENJMZGUS");
    msg.lat = 0.5930495012365607;
    msg.lon = 0.6058858778364244;
    msg.alt = 0.7260777015574947;
    msg.heading = 0.5341976975684761;
    msg.data.assign("DXSVJEUXKPTLXMRYOLBQTGAJNPNWUIYEQWVWCLJNZUUCMOVOGWMHELXRHCQCTDJKWTEYIGSOIMTHAPAYFJPHXDWDRJDMSCHBPTEKGGQBVRYFQJOKZDIIKCAFJFUGQJIZJXVKBYVAAYLMNR");

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
    msg.setTimeStamp(0.34483161537302487);
    msg.setSource(7260U);
    msg.setSourceEntity(52U);
    msg.setDestination(6959U);
    msg.setDestinationEntity(236U);
    msg.id.assign("NXSADQTQSATLRRFOWETHILYZZMFAUVYJJMTFKIUCAIUMZBAIKILDONJRYGBZMFDCHMDHMXZNXRGOSUFYHPRVLFNNWXWNLSFHHQHGEUYOIDTGYPLVCGPEVUROJJTBFXESCHGAIVQGWCJEPIKMUEQXVDCHRYLBVKSOCEIZMJZRKWUWKVGOYPTLLSOPEYYSJZKJNAXAUQORTRZN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FSRZYYDFFOJYWBCIRXZHPDDUCWJXMGJTYVJWFXO");
    tmp_msg_0.feature_type = 115U;
    tmp_msg_0.rgb_red = 32U;
    tmp_msg_0.rgb_green = 1U;
    tmp_msg_0.rgb_blue = 194U;
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
    msg.setTimeStamp(0.2230341567883577);
    msg.setSource(42972U);
    msg.setSourceEntity(99U);
    msg.setDestination(8350U);
    msg.setDestinationEntity(11U);
    msg.id.assign("PBAEDNYVRQGUMMPHJYYZZCKDEAORBVPYXUEWNTTZNHGXEVTKMHRQKITVFJOQEFXIKZXIVZLOOKPANRCRAZVQMARPGBFFMIPLJZSDBBTWNBJUDYUVBDTSCEEWHGWIRKBXIHLFLMDJDUOCIMNSODGIDAUOHEAQYJXFMCXLQWHBZXJTST");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GHHLRMWURJOIKQMYBAK");
    tmp_msg_0.feature_type = 100U;
    tmp_msg_0.rgb_red = 159U;
    tmp_msg_0.rgb_green = 164U;
    tmp_msg_0.rgb_blue = 109U;
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
    msg.setTimeStamp(0.9831449979432868);
    msg.setSource(1632U);
    msg.setSourceEntity(252U);
    msg.setDestination(48043U);
    msg.setDestinationEntity(89U);
    msg.id.assign("HKLOGQDMFPPETHFKPVSGUVJLRWWPEVIYDHFWUYWAHKEWSRDZMBSSYJRFYVZRPWVTNALFCHENINQROBULEBRBWREIQIGXHYJLSEMVNKCMOPQQCCABPFBSUZXHEGKQJOTIGKWIJXGITJOHTOFSECIGCRRGLPJKZAPWCLZKXOJVTIZXDYYNJDAZHCLYJXDSPBDKEBCTMOMYFXUOOMHSNTZ");

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
    msg.setTimeStamp(0.36480880565895113);
    msg.setSource(54235U);
    msg.setSourceEntity(197U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(217U);
    msg.id.assign("GEWRCCMMIZHWAHKERAFOYBLLZXZUOMCMDQYFYPDNPBOFWFXESWNOPFFLRMVKIQXICSAYBZAEHTKIIURBYVAQLYLSJRELLEWZHPNJJJTUYXGHTREKQGMUYIMRIQKSBNTBWSIXSY");
    msg.feature_type = 16U;
    msg.rgb_red = 207U;
    msg.rgb_green = 192U;
    msg.rgb_blue = 26U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.16427487767717985;
    tmp_msg_0.lon = 0.7862504848264572;
    tmp_msg_0.alt = 0.6670101444719083;
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
    msg.setTimeStamp(0.8066215621261098);
    msg.setSource(64792U);
    msg.setSourceEntity(210U);
    msg.setDestination(24723U);
    msg.setDestinationEntity(234U);
    msg.id.assign("QDDAUHMEMSA");
    msg.feature_type = 194U;
    msg.rgb_red = 216U;
    msg.rgb_green = 95U;
    msg.rgb_blue = 4U;

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
    msg.setTimeStamp(0.24642563380079585);
    msg.setSource(42059U);
    msg.setSourceEntity(180U);
    msg.setDestination(18740U);
    msg.setDestinationEntity(4U);
    msg.id.assign("NUQJAILFFENTXNOTDUMXLEGKMGJQRHTDLFVVHADTHBZMWARJUHGQWMKYRBCBKOXZBSBOGHIHBYSQMLHEJ");
    msg.feature_type = 195U;
    msg.rgb_red = 66U;
    msg.rgb_green = 112U;
    msg.rgb_blue = 174U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8226318714376429;
    tmp_msg_0.lon = 0.8577515380773892;
    tmp_msg_0.alt = 0.8029064491133783;
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
    msg.setTimeStamp(0.06357108368898057);
    msg.setSource(889U);
    msg.setSourceEntity(200U);
    msg.setDestination(6316U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.0006980327446246548;
    msg.lon = 0.6179028029429718;
    msg.alt = 0.6709396725506834;

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
    msg.setTimeStamp(0.6066750601456291);
    msg.setSource(29812U);
    msg.setSourceEntity(199U);
    msg.setDestination(28268U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.28623448663936824;
    msg.lon = 0.6974080815923732;
    msg.alt = 0.4530744701122188;

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
    msg.setTimeStamp(0.42597530004691764);
    msg.setSource(21564U);
    msg.setSourceEntity(26U);
    msg.setDestination(138U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.003790662459789762;
    msg.lon = 0.6648888095408321;
    msg.alt = 0.9329736293328392;

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
    msg.setTimeStamp(0.870973958260471);
    msg.setSource(35186U);
    msg.setSourceEntity(197U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(52U);
    msg.type = 96U;
    msg.id.assign("BLOQAUIZOKNAM");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 166U;
    tmp_msg_0.time_remain = 0.28149286761320746;
    tmp_msg_0.sched_time = 0.29688582322130574;
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
    msg.setTimeStamp(0.8058409562904246);
    msg.setSource(15975U);
    msg.setSourceEntity(154U);
    msg.setDestination(56056U);
    msg.setDestinationEntity(116U);
    msg.type = 83U;
    msg.id.assign("KLBZRKWRYPMTLPEZIEOTPYNLRVWZJJVCICNIIXLIBIMRMSOPDFPVQSRGWDMJDBMEGRNBCQVGMJEZYOAFKFZCPTJNJJUQFLXTN");
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("MVYXSTDIZPMBCEDJBUFSQQPHVLKOPHDALKKGAVIA");
    tmp_msg_0.type = 90U;
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
    msg.setTimeStamp(0.28352170209145955);
    msg.setSource(27477U);
    msg.setSourceEntity(21U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(178U);
    msg.type = 65U;
    msg.id.assign("UVDRDDBEFYTRAPACTRHWQPISLXZDYTZAVOMPZOPNEEQUBONQSMCWGBYQWAHHXBLBCVODCRTVYHHUVJVGWYGJBTECKEEXTFMPPISDUYGKJXDTKGEADDUIJKZKIKGCFRPATLVWMT");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 191U;
    tmp_msg_0.plan_id.assign("QEGEZWSCJLJKIVFBUCQMJ");
    tmp_msg_0.plan_eta = 430663403;
    tmp_msg_0.plan_progress = 0.19291814282681552;
    tmp_msg_0.man_id.assign("ETLRAAQIPHXONIBWVPVFFGGPEUVHJSHKGDSPMQFRHZDFBKIJVUYDYYVZXXJVFMSRDFYWVJQBKZPKVOKEOSEBXHKYBVJETUYTCKXJMEOAQQCGAOTYZNFIZQEPYIATODDUBLIGMLSLJRZPRBSCWULABXCARDDOHGTPXZUAMLAWQWC");
    tmp_msg_0.man_type = 41653U;
    tmp_msg_0.man_eta = 95665874;
    tmp_msg_0.last_outcome = 170U;
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
    msg.setTimeStamp(0.4529827762451847);
    msg.setSource(3707U);
    msg.setSourceEntity(249U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(241U);
    msg.localname.assign("PXXPIGSCNYRHXVIFMQNPFTXIDYTAGFGHQLMIBDDLAEQWMSMVEUVFZMUPDBSYDWBKMQGHVENTUZQUJWENDWKKHOXARQNNSLCGTZKFJPRCSMWJHGERKALBFCZJLMOXYTOSURDKIGEFRZRCBXTYHZZHZWHWELUZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KLFBEATNPMBLAWVRTABOJNPDXVVINJXRMHIBFAOCGAMIQOWGLEELHIKSJQELPSVQQPYAOPORUKWVFMYSLDSQOXZWWGKYHCEHUCCLJCNNBEWSQHIFDTLJVKWDNYJZTHFGSYEOJLTDRKTYPSRPRVMRZWGAFIYUAYJXXIXURYSJQ");
    tmp_msg_0.sys_type = 162U;
    tmp_msg_0.owner = 23832U;
    tmp_msg_0.lat = 0.9124732720271929;
    tmp_msg_0.lon = 0.7724242616063157;
    tmp_msg_0.height = 0.9089493452642076;
    tmp_msg_0.services.assign("EVTPQNAKISPXFCPTUHHFQMSNRYNRHWPOYLRZIWYZSIAATFLALBBBKTRYMGPEHZKI");
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
    msg.setTimeStamp(0.12187163100416565);
    msg.setSource(2533U);
    msg.setSourceEntity(252U);
    msg.setDestination(34522U);
    msg.setDestinationEntity(134U);
    msg.localname.assign("EPNYDYYLWV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LDCNYHXIECXSCVXPEPPUWGNVBNLAIAOQZMPMGKOUWFR");
    tmp_msg_0.sys_type = 48U;
    tmp_msg_0.owner = 57306U;
    tmp_msg_0.lat = 0.9724396635867201;
    tmp_msg_0.lon = 0.4012847385656382;
    tmp_msg_0.height = 0.6049032000899415;
    tmp_msg_0.services.assign("RJKOVACSPSHLMGJNFRLL");
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
    msg.setTimeStamp(0.5611598176261127);
    msg.setSource(12411U);
    msg.setSourceEntity(26U);
    msg.setDestination(45519U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("SHMJITBNJPIXMQNBQLKJQYFYSPXWLPWXGLMHMTNEFQORWJFDLXWKGJNRNATSQUMGREKAJYBNNAXAJTRZZPSNVCCRGKHLKVFCZYEGYEZZARUTDOAABOYQGPTKWFMUTXCVBBBIOYFQNVTHKPYPHFDDLTDOENIYCDAZIDQEKMUQCHVIVFPUGCOOHGYMUJGVZEZ");

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
    msg.setTimeStamp(0.8713912006944421);
    msg.setSource(32045U);
    msg.setSourceEntity(95U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(53U);
    msg.timeline.assign("JMLXVBHNWWYQTGVRUQHUNMIURVXD");
    msg.predicate.assign("XKMHLRMRXNKANPDMIDGOLSHUYOFFTVDGTDFZEDOMQPUCYMCTUHYRHBXNAZNAKEONPJQYAABFTFLSDCGLIF");
    msg.attributes.assign("ZOVKPCXIQYFXXSJZQWFSNRHZAUJZWBWCRRTFXVMTSVLSWAQTTHKIDQBOKWNHZMHJOCOSXMZKFAKGUDADPOAODBAFHGUYTIFONLSENYATXJMALQFKMMKNKRHEOJOWPUVESVYVTCKYELCPRWXRCGADYHUEPMOQPNLYAEISCRCJVURBQVLDVYB");

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
    msg.setTimeStamp(0.14588801318726985);
    msg.setSource(27441U);
    msg.setSourceEntity(186U);
    msg.setDestination(40047U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("XSYTDHKJCVLGRZEHSSOPABYXAHSIIBRDYXRQOEAFPCRZXXAQRT");
    msg.predicate.assign("GHHTVJNLFQJXIILMQYSMHLPOEZEVQWCZSUNGONRQSRNUGKJIAWDKMTDBWYOPYVVXCLNFMI");
    msg.attributes.assign("XFMBQMOGDZCIYKBOVYWSZTNHL");

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
    msg.setTimeStamp(0.8842188869726846);
    msg.setSource(28708U);
    msg.setSourceEntity(169U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(193U);
    msg.timeline.assign("TBUZAMCCRNNPTHPXRRAZTHLFJSXJVXXTIJCGWSGSZELWJIAMVDSKCQJABTBENHVRDHLHYWGGMCMQVWCBRKDYJKIMCDOVOBTBTQPANNAROVFDWFYRKGOGVFLQYQAEQZCSEGUUUDLQYTPIOHTGMZEKLRFINEAUUXPCHDPUEWJKNVIKRCGDXPTXSRFPNVWFBBHEYDMASYVYIOL");
    msg.predicate.assign("MTOXTBQNUTEUDGBVIGTCZTQOHFWDAZZMEEDURCUNRKGCIOSIRZTYLAFXRNWGJIUHPNXBZYQSDSKYPSJBNDYEZVTHGLHBBJMRGKTJEMOCOILGVWLZQDAGVXXOSAPHLC");
    msg.attributes.assign("ANHKVRXFLISVEYCBIAFSJZFYCRMURHCKFQAWTKOOSMMEDIJAVLXZEQSJGXRNDICIHNQYOGNWPVPDGQHQAXZWLBDWOZXYPENURUOBSWDWCXJEZZAGDECPHPMYMQOTJPDLLZFFTLUJZUGLASTSHVGAKJRJQDDKINOGAYXFVHSTPGWKEWJBOEHFSFTVGQNOATCBVYUSOLRHBHYUKVPDGXITRQCTKBMFMCNNWLMTBQBWIXYVINPJUKRIBULR");

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
    msg.setTimeStamp(0.6143304282508746);
    msg.setSource(33124U);
    msg.setSourceEntity(29U);
    msg.setDestination(56858U);
    msg.setDestinationEntity(197U);
    msg.command = 42U;
    msg.goal_id.assign("JNJGCUDNASASAEJCWRYBCSMWRDIIIGGULQB");
    msg.goal_xml.assign("PMPRDFDWXHFBJWMQYOCXUPHXULVJQSYDSITDIUYIQGZGKACEYJASEJMRALOTUAYJHNOROGBENKGKCWVBIWRAZRKLVTDZLWBFGSTZDOCCCRQJONHFNVIZVDFHDTWBQIHKLRXIEKHUKTTUGYCQFNXAEFQQAKVPNIRNFZIOTPECEEHLXSXZJVNEPATGEIVMJLAL");

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
    msg.setTimeStamp(0.07814399893345014);
    msg.setSource(35274U);
    msg.setSourceEntity(8U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(141U);
    msg.command = 221U;
    msg.goal_id.assign("REVCBBUNOIKMYKJKPYQRSIHLAQPTNUUGMPECBHMUCHSCKWEGHDLNTDAOPHKREMARWOXDWFXAKFMBOXBTWHOFASVYAXVXKMMJODQWEGZIYOGHEZCXPTPYQUMGCBQJSBDNVIKBUPZVNTVLRPNZFISZJWFCYVRHDFXDLFTMQOQJXDIBSGVZUXRJVORTHIIKZTYARWGFCLVJWADJASGJMRZJLUHULQCILEBXSYEFPDUNENETCINLPATSFGS");
    msg.goal_xml.assign("BHNYUDQKABKTVIYVAKWCTLJTYJMRIUPYTUUPQHKFCMALHCXXCDQJRGMFZXZUTPVVYSNXZPEYJKZPHDXRVQWRGSLRBABCWYCTTGAQOYKPOEEQAVVEOSSORMRJ");

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
    msg.setTimeStamp(0.9663434140635608);
    msg.setSource(41057U);
    msg.setSourceEntity(99U);
    msg.setDestination(42883U);
    msg.setDestinationEntity(19U);
    msg.command = 230U;
    msg.goal_id.assign("UFBQOZFFKUAMLUDRTPNKKAHYJVAYNKWVWYECZRHFRZWQGUSIAQTLNTSAPWFSEHRCFOXNTIJIMMKAKATXGDXIGDVHBVLYEODSFBSLTIGDTCDRSMOTKBTHXVPBNOZLMUDZPWSPGNXXSJRJHCBHNTFEWXJMVVBJFYRPEJHIDEOKMIEQIJKOYNVHGVLUNLQPPQGXWXAUGREUQYCPCOMBOBJQUQZRCSVLBAWCLNYIDMWDCKXUMEJQE");
    msg.goal_xml.assign("LCDLXPHTFMPDLOKHFESGCCTFKQCZBIZKTRCEMBOAPMMXSTFRFLCUWRGOAPLXRWEIVZJTGQSBXZPNFIMRFYEUCGKSAHHXOYUYNZSRUJPEUSERJGMVDKNUNNLODLKIOWPVSAALXRKNEHBJMWIJITIBBCWOVJQFHAGWIGWRHVYNXOWVMIW");

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
    msg.setTimeStamp(0.928659442103454);
    msg.setSource(40707U);
    msg.setSourceEntity(165U);
    msg.setDestination(20679U);
    msg.setDestinationEntity(178U);
    msg.op = 165U;
    msg.goal_id.assign("DLESQHZCFLKLGQYNQSXMPDZBZZPJBKUHNFKZMDQNGSWGMKTHDDPCYIVPNYAZWPBRWROFSCSKUAT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ONPUKMWTXDUGJPVYXUFMULZRIGNMMGVCIZBFYLOHFLFTIUURCZGBRMCYWRBFLWZEWYQSWNSCTPQCQZDIGORIKEMVLXERKMHYNWNIK");
    tmp_msg_0.predicate.assign("VYYVSUWQJVNOKBGCUWXZDXTKCIOBTIQNTAXXJVDHPGNTBM");
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
    msg.setTimeStamp(0.37531349751000753);
    msg.setSource(54155U);
    msg.setSourceEntity(188U);
    msg.setDestination(1110U);
    msg.setDestinationEntity(63U);
    msg.op = 10U;
    msg.goal_id.assign("RUXKOMSKVSCCRSENFGRXWPEGLYUMFGRJJEUAHVBDPXYTCGLODKDNBXEYQWVXXOKAOCRINF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DJNRMVQILEZKJZJJTEPQMMTFCALWHPBBVWYWFOYIQIQSTOAZIHEAMHXUBASXQCWJNHISKUGXKRRGKDOZMRRIUOZEHIFDO");
    tmp_msg_0.predicate.assign("PSAVYQLUKOEHQNSPGMZLLDLHEKDFYNWTABUJCHNFFTSWMPWXTWXZJUZDOXCVRUFRSDLMQRAKSVQILHPDFFIVCYVH");
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
    msg.setTimeStamp(0.9700435306234672);
    msg.setSource(15898U);
    msg.setSourceEntity(8U);
    msg.setDestination(47334U);
    msg.setDestinationEntity(44U);
    msg.op = 21U;
    msg.goal_id.assign("KCRUMKTTCQWJUBMHHZNNXOKUQNHYWNYXYYPAQDVTZCULLRPOIKDMZROFRGEGNARXOKUAONGSYBVITUYEXFWBMLQBESZEPSXJGZBYBGJJNLESRJSTMHABDZQFYHYAQDDGTVDVIJHGNOMFCSW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NYFZAQCVNHAOLBRBHMJVVHIDUUPOBDSZPKYYIWJSSDGUBLMULWNLFAMTSWEEWRZFLDYPZSCLPISTRAZEZJGTBACKNXXNSJXVLBIKCFJXRIQUOEXUCOTTLDCVXZXGAUVKPRRDMMEIOCLWGGKSVQWPNOJ");
    tmp_msg_0.predicate.assign("NUPYGIZAFZDRTZYLMWKTFWAJIASARTGVBMDDJSIGQBUNKGNQDAV");
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
    msg.setTimeStamp(0.9196414769737566);
    msg.setSource(40627U);
    msg.setSourceEntity(188U);
    msg.setDestination(1132U);
    msg.setDestinationEntity(98U);
    msg.name.assign("ZPXJYUUFVUIWRWTGMMCCASEBSCKSWJSZDFRIJHPMHREXVWCNJCPQOKVKIYHPLZVHNANHAACBHUXYAQKMOVPROPHGPUBJHDFNNAMJFDAGLNPPLSDVFCWOSYZKZYBKJCIHZYABFGVXECETXTAYMQJIKNTXNZCZBXTOVBGKYWRTSBOGFFBKNKDQXWEETOGJLOIERQQRVIQLEETXUMSQFMYTLBDDWNIGRVJUZIMULSDLGRWLDWYM");
    msg.attr_type = 41U;
    msg.min.assign("HUOIYUQFRDENFJBBNBSEVDFINHMYKCBCRHHQYLKDIAZFZXVFQABDXFRPMCYELZMGEPGHCVHROMYEBTZTKDUEIVOIVZTKTAMJCWFAOLGLDOQYPKDGVXPLMUQXSCMIKSKUIWAZPUVXUXPDZQYDSQGBYHMMHXNW");
    msg.max.assign("SZFINQBKVPNERHCJTZMPEPRCKUXJVDKOGQQKVFEHDBFSAKAQCUGFJPGCFICXFVSRMEXQQMEAZREYJLSBNTNXGUSZTOFFHJZPPGWLOOGCGKLJQCZMYIWEEBMBIVAPXTCWERLURAJZCVDZMAOMPSQUXVDYDHXWKSLPKIPIQTVUFNBAWNMTSIWXTBLTUTLSOWHONYHDUQBAYUNIMT");

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
    msg.setTimeStamp(0.2536742846709765);
    msg.setSource(36186U);
    msg.setSourceEntity(221U);
    msg.setDestination(52153U);
    msg.setDestinationEntity(50U);
    msg.name.assign("OYNPQSWGYMDCNYREZWTLOCVKUNENEGJZAUAMTRDYLCYNXVAUIVXLDWGUTKMHVKJFDLQKYEBXCHIQUGYUFAQUJKFVOUSWTFRMZRQBMGZVXJSFECWRKIHMOSKWFLDZOVJJ");
    msg.attr_type = 86U;
    msg.min.assign("MKVZMIHYHZDEJVDIJVQFRYSZJAYPFNVHYEYPCPLQXVSMKKOPWNGUKDFTSZSYDLUVCWSPPHJZARPXQVHFTDRRYGKJOBYAHNIAUBMTLZYMPGSCGSQEOXBHPIXAWZTECVCFBFHEJGJLL");
    msg.max.assign("YSWWXNDPGBLRAZBWQVJPLLHAOIUBFOYZSEFDOTKKYDMJZCFZQWUOWOYKKNWABGNDUDPQRJHDRCGLAIGPIWHANYSMIELXQSYZWVGLLQJ");

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
    msg.setTimeStamp(0.3457906651345507);
    msg.setSource(25141U);
    msg.setSourceEntity(47U);
    msg.setDestination(15712U);
    msg.setDestinationEntity(187U);
    msg.name.assign("DIGPAZMNJWVZATKVWYLILYRXILFCHSZCTHZXB");
    msg.attr_type = 245U;
    msg.min.assign("QGQZEOBARBNOJMRHOLZPXNFCCRONLLRZPEJCYHDKIZDVSGLHIQGWUUIYICIGNAWOFUDMMBZUBODTQVUIZVSMMSCAFP");
    msg.max.assign("ALMIMVNJIKORGZFXIRSWEKGERNADVXKHZYJTISSPTY");

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
    msg.setTimeStamp(0.7927745519911389);
    msg.setSource(2048U);
    msg.setSourceEntity(47U);
    msg.setDestination(65210U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("HSYAGPJMLYBYMVBUWKEXNUAPHQNHBFDCMXZMISODTIBETXDIZRJRNIWJJNWMUPJKCPBDZQFW");
    msg.predicate.assign("ONFMRZGOLPQIEZMRPQUEDRYTUODEKWZRNNICJEFPBVZILZGMQBUGJWWKJCKLNPCDHQAAMBGGSGFLCTJBKQNBEBQUBMSBUEAFTDRUJFRMOQTYWBUIXQPTWTRFIXDZKPCGGSEJDRENSVEJIFSJHPPXCMUHWGHYHCXYZPSALQXSMYWJJKYVWCAVHQORYMDKSIXSUDTLNXZKGHETIVHYVXVAZCFWVXLLHYOKOAOWKLNOMHANB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NBFBSNFINIWIDQNKZTVHPWJATXDZQQJTIOFCQPEJMVCMYUYDMK");
    tmp_msg_0.attr_type = 156U;
    tmp_msg_0.min.assign("GCWBYZTAFEAFMJMVHSRINZXXRUYLFSQHAHALVXWOTNWPWZYMWOMRDVKIRAWLIPCUMSEPZLQFTDKDXTJKCVRDGVOENVUIMCAKASUJHBLBHPVFULICNAEGEQNXOZJYBULPWZXBFHQUYYRXZPKITTPGBKPUKMCLRGECOSSXODIMDNYSGGFFBZTJQNWQPNURBPYJKNBLMDTDECLUEWJHGVOSJQZX");
    tmp_msg_0.max.assign("NZLWVMZECDIIYTFLMWOGLQLLYWUGMHOXPZDFZBXTLXMNLQAOQHKJTSEQTVWDJCUAUKAPXUGRMBVVRCVNDWFSXASUTMIJWPYPOBCKVRGXOCACUC");
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
    msg.setTimeStamp(0.8775488738826718);
    msg.setSource(3633U);
    msg.setSourceEntity(135U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("VHPKVSELSJPVIBMBVAJRZLSHCKOKFRZECHNJKAIUFKJMEAYFFZGSLTXJFHVHXZWNWZLMFNDERAXGBAUQLEDGMSQITRGWYZIXEDNTHYUDNQTSWYAVMQUYXQBNYBJHQZECDLVUJQJKDACXIDSOMEUMWAABPCTOCWPVIABRVOOIELNNGMRDCXDWGCOWEQNGZQIGXPXHLSIFMZRQLFGOTYRYFSPJPUNKKTB");
    msg.predicate.assign("SBWVUKQRMPBLYXVDOZLSZJUABWLXZIBXFXQPBDUPPAPQGSEZJPWTQFXJRJIOQLXQWZROVHZQYDYYMNJASLUHCNCKFVPISUYDXRMRDMUKSITDTGKNHKCLRHFCGRNMXCGBEPNUYTRVYOIEZOVRZDFZJGAWVHKTFBHXEBPWSIUEIPDIYKWTBAVAFEOWBMGLNEMFAQMSVFSUOJCHEYCKGHGLZWIYRCTEDACTGWJONHE");

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
    msg.setTimeStamp(0.34221660473612214);
    msg.setSource(26123U);
    msg.setSourceEntity(193U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("ULOUVBEHLESTGTNOOXMJHGKURIMRBPJYJAXLGYXDENFXSFGXWAQCDMHCXBPQKIKQBQIPZVKELBQSIOSZSCWWLQBSVQLQPGOKLYMBJUJEZTSAZAHKDMDGAYWTMMEBDHATTXNVEMTJGLUCDOHJLICF");
    msg.predicate.assign("AZINXTVLWJD");

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
    msg.setTimeStamp(0.18448599769562357);
    msg.setSource(18982U);
    msg.setSourceEntity(183U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(202U);
    msg.reactor.assign("OOZRPMKNKDPHVGFAGQXEORQBYKPPGAAWWDYUVLSQLYZNTXOUSBY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DQIPPXDEIWRKKZCKWNNDBYPXGPZNSRJUTNDHXPSGKYOHJLUBVDDCHO");
    tmp_msg_0.predicate.assign("AEDRLMXHEQYVEBZKNYAXXJYCZTTMRAYTJZSRXCIMHQHOABJKYWKRHPMQGUYSJWAJFXWAWZGFISLNDPROYYVESDLOSOTUNFBHIXDGMOPEMNFRCRVCTOQLSQWTHVPJQDRILUPCWVZCOPVAQFYBDXITHTQZAGUNWGSBVTBWMOPIZFQXUJLVKNKGHNSLPVNTUWYGUDBEMCKUGMDVFKNIKBDXQULOFEHUHPLLMOSEGR");
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
    msg.setTimeStamp(0.29988683637941804);
    msg.setSource(15576U);
    msg.setSourceEntity(150U);
    msg.setDestination(59144U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("YVLBTDJGTUGGMUTFWKCSAFPNHLDJNWJCRPYXFANFVIZJCADRUQPVCJWSGONMHUQLKYZPVYOLSHGQEOIMIXHUDAJTIEBYCZTONKZUKBMFOXWLBAHDYXHALMNEEWDRREHPLBOXNKWSQZEOAQHZCDILGUVINAZXBUBVQVCCUTERPWBWLKKTAZMJIDDFPXPFSTIEUGNASOJPXJZKPKEBMFSVQBNORVIJHYLFGDOMIRYEVTYRHKTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ECGUVMMVGSQNPAZGRFLEMUTTGRTQGSMWYANY");
    tmp_msg_0.predicate.assign("RITWDOKRGADNTVBSIDIJHWAIAKZKCZTOXQXPRYUZANYORFRDUPVWISWBWSHGHQNUCBWLCPCGKSGTKZBKFHBBYXFGXEUGLSYN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WTQANDLDCFUVUBNPYEVMIUEEFJPDLXGRWBQQLGXQNKHUQEUNMGLTFWBZLIZROKJUMBKWTSIIKTCEPWIWCNTWLYMHXONRQPQRVSJHCSSHVHGXXDOPAGLFVTZSAJQMMMFVFGUTYJJRJOGBOHSCKPZVTYCQAFURRAAAINNWSQNEDVFJKDCVSYL");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("GPBUXSDFDRUHMQGQADJPYWZDRIMPINHYQHGLUAILTIJOSTETTGVCFVZBDOXTYXNRIVZOJIADVH");
    tmp_tmp_msg_0_0.max.assign("UEWSPASNXOXXPSSEZRJUQOQEFZLODHDNBNOTHICTDPLAYUFSWYGBCUDPWJFGXUBJMJGMOTHQNZSCTEFWRALSEHDHJVDYPMYUDVKJGCFVOAAHWIERHBYEBOVMHLOWGXACVTZSVJMZYTGXOYLPPVVTCKNKWNURUQZHLNJTFXRQBKLPJKAAQEZGNYMIFRSDBIIBIOIHYRVUXXBPEIGQNIJQMZYNDIGLGWZMSQFDAKWMXPUQM");
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
    msg.setTimeStamp(0.8146854548414443);
    msg.setSource(61183U);
    msg.setSourceEntity(80U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(202U);
    msg.reactor.assign("CAEBYGOVAYU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KAFJCDEPFAGBXIQSAFUFWOSCJWRHDLZXVSOXRVWSQIMILIZUVXWCANCOQMZLXSMEHJWRMYRTLNVDZUCCEPYMKIBHYVLPYZGXIQXEWELHAGTTOFSGTKDNNEYBNGKGJBGHSQXRKYSHNZHYHPUASDMZGEFHRLYKNFTABDMBTDFAFWKRGMOFJMEJDKNKSTBOPOCJBAQUBBTVPPYCERHUXPZZRJANPJZVW");
    tmp_msg_0.predicate.assign("MOAYOAPJLRNWTDEBKXDWTIHSMXEJALUUQXAPDZCWHRZIMREFNFMREYJBVUKFLGRYLMUWTDZKZTIUSAWWXPLIHRONIWYMLZKSXCDPKAGIXEGQIOFXJSEHMUPQLBKPXJSTJIFNPQCBUCMEQAVIKTVBVKJQAGEFVBHHQOBGUSNGGOELTQNNJSRSOZDYCPJBTFYPYCFGIWGMYJFUNTVDWHVCPZZDQYCRRCVNVRWUNEVKBDLGYLOHCFHAASDMKXZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GYNGFVKXODUUFBBGBETJYMTGNLTEQIQFFOSOKZRXGPNRIFUJXKHRIYQUQWLDKWNLFANXWRHIBWXTVZEGIBMSMQGYVWSBYDLTMUAHG");
    tmp_tmp_msg_0_0.attr_type = 34U;
    tmp_tmp_msg_0_0.min.assign("BLIUSTQHZKZMNJZXSUOJSGIGSVGIXZPMHIIWUBEJIARYEV");
    tmp_tmp_msg_0_0.max.assign("CNEHQIVLZAGQNVDMFYMRUHGSWHQUOKXRKWPJOQPPBASBODMZBJDREYSVYMXHPWVNTVSICUOKZWPKMICUPZQDJPZGSIEWINRUVMCTRVAGBJITDFJBKRGAJAUOXFCLHWEIZLBVCOZHEKVYBPRELFCHVCMQWBZKAXGSTYUJSFT");
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
    msg.setTimeStamp(0.3353474167854962);
    msg.setSource(49301U);
    msg.setSourceEntity(90U);
    msg.setDestination(43583U);
    msg.setDestinationEntity(15U);
    msg.topic.assign("BKHNCFGICFGELKILYOMUTVURQKTJRGXXKZUNWDHRUOBFXPGEQQSUBXMCMEKLSPTVAOHDMMZYHYXLXEUUSVQSLQFMLAJHJOBOLDAEEWKDVCFNDPQNWDREWAYGANIICIIUGX");
    msg.data.assign("FJQURDEDFFACXDVPPRVBHBCQRMMKPSUHKLEOGCMHXQHZYLOGILMCEGTRVRLTICRFKERPGBUTQJQUTPEOLNFSDACZMMKSKQSGIIUGDOYGWBXPILSVVAZGAWQHTOCYWIREWMBFJWVXETAEEWFJIAOJJDCUVVSKWOJOEPALMTHDGPZNWYYXDYNKYRNHPKVQTZJWYFTNPHONNNZNLLZSRJJBYXBZWBSUBY");

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
    msg.setTimeStamp(0.7718038804100309);
    msg.setSource(3670U);
    msg.setSourceEntity(97U);
    msg.setDestination(59559U);
    msg.setDestinationEntity(178U);
    msg.topic.assign("YWDPHLSITAQRUDCYZEXFRELDOZKBLWCOIYYEJIVNFXRVROKAVTZCGSGSBMJYNJWDJLBMDVZCLQQIVENFLBEVRLKEVGTKISQMPZPDJHPKNQUHJHFJKXUXVDWSFUBKWATOWTQBIZANGHZTSEVRMONRLTORYADWYWGNZXPFJTVGXRUXXMZBKRPYATBHQMIIHYNDPCWNJCKGOHJCBFYFUACSCUOFSSHQPLPG");
    msg.data.assign("YODPNIUQUHSHSCCGCHHNIOPAFNJUOKXZILTDRWDETCRGSMASYAGWQMZUWITNEEXZBNQTZEBNSQVBYTRVRAYEVGLEIPFBJCGROCWMYANDMJBJTKVWRQCXHFLHXSLUZABWOFLUOXPVFVIDXLMJTWFFKXRAPSIYEQZKDPONCNUOOKHWDGOTQVJCGQPKHRHFPFEKLSGUZZEDBAQXYMKJUJBHXZREBDGVAVLYMYTFWDGIMXPLSCJRQMPAVTKIKY");

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
    msg.setTimeStamp(0.653847667864218);
    msg.setSource(48182U);
    msg.setSourceEntity(84U);
    msg.setDestination(49004U);
    msg.setDestinationEntity(126U);
    msg.topic.assign("FPNEECAWNNZLJHPIQHYDIW");
    msg.data.assign("LYRHCUDHRNQRRNAMMFCKTORXOWSVNMWCQXCSFCTRBOPLBJLWQAZAHBBHWGVVSDKLTEDUBKYFNEZXMSKEUJCDNXGDWS");

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
    msg.setTimeStamp(0.7044641364989856);
    msg.setSource(22852U);
    msg.setSourceEntity(33U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(193U);
    msg.frameid = 22U;
    const signed char tmp_msg_0[] = {-118, 2, -67, -120, 107, 72, -52, 85, -29, 20, 7, 23, -1};
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
    msg.setTimeStamp(0.173753702577074);
    msg.setSource(52244U);
    msg.setSourceEntity(161U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(130U);
    msg.frameid = 71U;
    const signed char tmp_msg_0[] = {110, -93, -71, -37, -32, -44, 120, 80, -91, 100, -78, -97, 15, -98, 112, 75, 56, -66, -20, 89, -61, -123, 2, 18, 7, 40, 52, 68, -125, 83, 68, -54, 21, -59, 109, 61, 95, -27, -126, 112, 59, 77};
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
    msg.setTimeStamp(0.5528682824259559);
    msg.setSource(26106U);
    msg.setSourceEntity(65U);
    msg.setDestination(14754U);
    msg.setDestinationEntity(246U);
    msg.frameid = 240U;
    const signed char tmp_msg_0[] = {-50, -93, 49, 27, -42, 12, -40, -77, -88, 64, -19, 120, -4, -66, -41, -39, 43, -86, -1, 68, 116, -33, -20, -57, 49, -100, -97, -6, 121, -58, 116, -47, 17, -72, -111, -104, 24, -1, 19, 115, 70, 41, 54, 32, 44, -105, -41, -105, -113, -25, -54, -49, 106, -111, -8, -117, 111, -27, 79, 58, 85, -30, -56, -102, -53, 56, 121, -34, -77, -96, 26, 40, 7, -63, -19, -11, 96, 12, -62, 78, 72, 25, 108, 67, -3, -64, 31, 93, -112, 101, -54, 4, -52, -41, -90, -73, 60, -17, -2, 91, -83, -40, -88, -128, 98, -116, -34, 113, -10, 2, 92, -30, -56, 42, 88, 11, -36, 77, 85, -99, 126, -78, 78, 106, -112, 94, -9, -90, -77, -117, -32, -82, 33, -6, 75, 44, 27, -108, -69, -106, 83, 101, -79, -35, -84, 4, 4, 86, 88, 110, -44, 66, -24, -35, -88, -77, 91, -80, -88, -121, 11, -48, -59, 3, 18, 38, 11, 99, -54, -4, 99, 69, 55, 65, 114, 8, 114, -102, 62, 52, -117, 125, -64, 13, 18, 26, 105, 81, -6, -34, 117, 64, -81, 34, -53, 26, 46, -33, -66, 7, 53, 44, -75, 74};
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
    msg.setTimeStamp(0.8561117153458041);
    msg.setSource(19393U);
    msg.setSourceEntity(199U);
    msg.setDestination(35282U);
    msg.setDestinationEntity(227U);
    msg.fps = 63U;
    msg.quality = 16U;
    msg.reps = 158U;
    msg.tsize = 74U;

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
    msg.setTimeStamp(0.907099183820989);
    msg.setSource(6615U);
    msg.setSourceEntity(69U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(214U);
    msg.fps = 172U;
    msg.quality = 101U;
    msg.reps = 223U;
    msg.tsize = 59U;

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
    msg.setTimeStamp(0.6879283344336607);
    msg.setSource(62721U);
    msg.setSourceEntity(98U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(162U);
    msg.fps = 140U;
    msg.quality = 88U;
    msg.reps = 0U;
    msg.tsize = 249U;

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
    msg.setTimeStamp(0.9382136438240928);
    msg.setSource(53035U);
    msg.setSourceEntity(174U);
    msg.setDestination(56616U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.9236605258146259;
    msg.lon = 0.06592530130775309;
    msg.depth = 11U;
    msg.speed = 0.6039536854028527;
    msg.psi = 0.952763091609873;

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
    msg.setTimeStamp(0.5386976183605252);
    msg.setSource(20335U);
    msg.setSourceEntity(72U);
    msg.setDestination(55755U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.7976166963569781;
    msg.lon = 0.7975873395188517;
    msg.depth = 77U;
    msg.speed = 0.4702558049838498;
    msg.psi = 0.9568581031170514;

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
    msg.setTimeStamp(0.524441528442675);
    msg.setSource(40193U);
    msg.setSourceEntity(126U);
    msg.setDestination(23105U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.4988012045030743;
    msg.lon = 0.4440001989391561;
    msg.depth = 57U;
    msg.speed = 0.6846662934623368;
    msg.psi = 0.15887600044694306;

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
    msg.setTimeStamp(0.8690265796690663);
    msg.setSource(11252U);
    msg.setSourceEntity(2U);
    msg.setDestination(24000U);
    msg.setDestinationEntity(202U);
    msg.label.assign("JZTSIPSVBKXGPICQBHSKWHEXGCLLZQWPXBAFDIUYRRZMLEFJWTJVGMIMQGIEKOIYSPVHLHAYVRSOYHMMWVFFZYZFOLWHDDNKCJTPGQODJBSOWEVXANFVRECZJQNRYUBTTFTXSCCSYHKGCMDBDNUBMOWUBRDDPPF");
    msg.lat = 0.7840136077993186;
    msg.lon = 0.8440069454863689;
    msg.z = 0.8875907627750969;
    msg.z_units = 90U;
    msg.cog = 0.5225309893244211;
    msg.sog = 0.011734240898539694;

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
    msg.setTimeStamp(0.2804801448798706);
    msg.setSource(59686U);
    msg.setSourceEntity(127U);
    msg.setDestination(44787U);
    msg.setDestinationEntity(21U);
    msg.label.assign("HYXSXHTZXHBFFVKVIIBFYTAQEDRGLJKGKNAWDVHPZXPHTWINJGWWLEAEHJRROVJMDTKCGZYMOQQORCPMNDGAUGDKDELWOF");
    msg.lat = 0.9491354715191396;
    msg.lon = 0.41150055749906633;
    msg.z = 0.49097807752969636;
    msg.z_units = 179U;
    msg.cog = 0.4786229835083743;
    msg.sog = 0.9093941657513662;

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
    msg.setTimeStamp(0.5389215434206223);
    msg.setSource(53066U);
    msg.setSourceEntity(148U);
    msg.setDestination(9438U);
    msg.setDestinationEntity(57U);
    msg.label.assign("MDOSRRTJWYIAOXJVHJWOFSNEHFEF");
    msg.lat = 0.8259982466928026;
    msg.lon = 0.772089969559374;
    msg.z = 0.7851047655545835;
    msg.z_units = 33U;
    msg.cog = 0.7718129613266561;
    msg.sog = 0.8169095961353787;

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
    msg.setTimeStamp(0.5725754856998693);
    msg.setSource(42176U);
    msg.setSourceEntity(196U);
    msg.setDestination(52117U);
    msg.setDestinationEntity(46U);
    msg.name.assign("EOFGVDEUSHIKWHGPZNURCYYRBCGGVTUMWQZOAVHOPDTXMIIQOBFPQLKIWCUDSPUMWIQFEKLMNADMHNYWWRPLFGJSNCBGRUATAEJXMOHSODXKEPKGKBNBTNFJKFQWTOYKGXNEQJZSUDZHCHWSVIXYWTICLMEWRRZVNPHYYVQGCJVZPFXAIRYRFMOLD");
    msg.value.assign("IKCNZVULFRGSHQXNFKZERKUVVOXFACLOPZOEYOBMYKYWHWUWQGXISHFWPOCJAAPKYPDL");

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
    msg.setTimeStamp(0.10529945607542601);
    msg.setSource(27121U);
    msg.setSourceEntity(136U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(237U);
    msg.name.assign("TDLLJUDMIMCTBZJMNCPJYNCERNTAWWFCTVQVXIFOIWAXBYPZZXRSAFKGMYLKCKLCZLEWNKUXXDUHZIBBJGSSZILOXWNAPOYKMUYUAJZKKQXCIVYHIORGKSQCVYFVTFXAEQMRBQHHTIXVHALMUUADDHVYUPNENOORZQCGWMPWQ");
    msg.value.assign("MEGTNMHUKHOTXUFONGUHLYZQZETPASSDUBRUBFBDNXAWMJMVLAWLVICMWXKVNKLYGEEFDBVVSHBSYETNZNIOWTQDVRWJMPJYLVMHPAIJIZGRHZCYXPTGKFJQFZCOHVHOPOGXKCSWBDKYBLLATRQSBTPWXRQMGNLFZLQPNWINYJOOUEIBQCACUFSEOPEHTCPDYADRAYSSKUMWBXCETPWZDKHAJD");

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
    msg.setTimeStamp(0.7184694644806824);
    msg.setSource(17058U);
    msg.setSourceEntity(243U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(99U);
    msg.name.assign("LQWCVMORDOVVUUIOFZIFJYWSMUJXYKLNUVGKIJKAGHPLFEYEJCUT");
    msg.value.assign("JJOQCDGIWYQOAASLLJDPAUZMVQCEMVTDRQNU");

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
    msg.setTimeStamp(0.39360814013525725);
    msg.setSource(55506U);
    msg.setSourceEntity(49U);
    msg.setDestination(21940U);
    msg.setDestinationEntity(180U);
    msg.name.assign("WEIRYFHQGQXOHLUBLGDKXTEHMSCAMJWPYSPZWDAYGIRYCBTVZNMMUGCUHBXFPWJTNC");

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
    msg.setTimeStamp(0.944424802528203);
    msg.setSource(20734U);
    msg.setSourceEntity(245U);
    msg.setDestination(33820U);
    msg.setDestinationEntity(152U);
    msg.name.assign("FSPKQGFIWFQEPZIUJATNHSNZKFJXMRJTTGRAJOLEAGQVC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VMALSGHYVBPFMJTYZPNSGUAWJBVKQGAIBCGWKWIRNVNFUSPKTKVMSHGXXNPLUCQZNLAQNBXSETKLRVOYQXBVXIFQYOKXAYAUQFAKBRDZWMXFMZTEGRCEJCKHVZCDUJUYUFVALOOFOISSUZOTJDBPMGPDHWQDYWTIFGWYCJWEHKDHIZPNLETTHYCNCEXGLIAIAXM");
    tmp_msg_0.value.assign("YROJIEFDFQLRTZILSKJFNWMPAELKEIOQUNOIDSHDASXTPRBZEBMDPTFGUAMQVFWYXVZSZ");
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
    msg.setTimeStamp(0.1407791968516071);
    msg.setSource(10971U);
    msg.setSourceEntity(252U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(75U);
    msg.name.assign("QGOKBUOHYAIYNBJZJFOTEMLBZRDZYISNZKODKREJWJLZDSIMIFFVNRBHDWIZQEDEGAHOXZUYGVSVOEIYLSUHPLXCWAOACMELUATJITUQVBEAWRXMQYFFGIKTGDPHWAKJWVSXOCSBJIGRNRGBGSXLEKTWGFVOZQFHSPQFYLWPPMPMPADCVNDLMTYUADZAHUXXIVTPRHCGTCJBMFBQPECKKRRHQZXNKCPEMXCHUSLJXORSLYQYBTMCN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QVGXWMCSYPWXZKAHNOKTYOFEDGONSUHW");
    tmp_msg_0.value.assign("GTYTMWXVMLXFMFEZRDZYNQNJRUHWLSQXBCUBAFTORIJZQYGTQLGVFQUSVVIFFKPEOIYRLLJIERHUZDUEMHBDKEJZCOUPPHDOPUCMOOMKMBTKPXSHHWWXBTHSNALCKTEVNSZJANSJJHWWRCEDXGVQAZXTXCIBMNVNYP");
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
    msg.setTimeStamp(0.6647363273029372);
    msg.setSource(21463U);
    msg.setSourceEntity(184U);
    msg.setDestination(37759U);
    msg.setDestinationEntity(1U);
    msg.name.assign("JMZWDNGUWLLRTCVWXJVNWDBUDSEXCBVPUBIWORYPHJAEI");
    msg.visibility.assign("DFLVRXIMFAQERXOATMLISFHHCRCAVFMXPWYVYQGZQAAUHTARCKNWJVJTDOOGECUXSETNJOJLMDYHIGUXZOYIFTWNLWIDERSBWJVGFBFWVOXQPBVNCCBAVKMKMKNGXKKQRLIJNYDTHUEGHMRVWUDWXGOBONLHDMBKBSGBLITIYQXSEGCZYHESQFMLCMVAIPYUZWRORNEJSKSJFUZPYIHHE");
    msg.scope.assign("ECSHFEJDHPGMKYYBLUMRGQQJEGAZDIFAOUIBSZWMICDQIJICPLDLVUSOZSAPBLOPTRWZUXIAZJOPXEEKVVCOZDEDFKROZHPFBKSMRBNYWWRQAXSNHHTASXRODHCBGAHXIPLYEZWKKUCXAZ");

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
    msg.setTimeStamp(0.21670557851613192);
    msg.setSource(52455U);
    msg.setSourceEntity(139U);
    msg.setDestination(41411U);
    msg.setDestinationEntity(242U);
    msg.name.assign("ATRONTHUVFJMIVWYEXSWKKCHUVRPLMQDMHCDGPDWASOUVSRZXGYSHGDKIUCQCMKLTMLXQVAPFXEGGHNQBEVNUYRKBIDOWIASBKILPSTVYLWRGHCBJBRWCHRIOZZNFFHFAPAYOQJRNPPMUXQJAHJWLYBDULBRBVYEAKSXQMXGIVTNCFWEVKZOADTGQTMPLLQGSFFDZOFOTCCSGDKEMAXJCZPBIJMNIWNNLRBZTOOYJEZJXTJZE");
    msg.visibility.assign("LBGCUNWMEMYTJK");
    msg.scope.assign("OFTCQQFAKVEYGSXBXOVDLSVWZGLQITNCJQYMZQPFYCRLQAHQHEWBCPFMVAZYCXDSDQMZUADNVWZBJFPPUMIUHCDNTUBOZNRMTAHZATDYEGNDNURBSHIKZKPOLSVFLJMBDPOQPEPWLFBWNWCGVJAEUXRORTBGKJOHSDYQECWSYNIXJIWKUDMEKW");

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
    msg.setTimeStamp(0.05920312003331285);
    msg.setSource(23940U);
    msg.setSourceEntity(2U);
    msg.setDestination(13588U);
    msg.setDestinationEntity(45U);
    msg.name.assign("DOKVLAFDHRXVZPOKTHQTJPYERGMYAFUGQXWUYYUACRGAXNPEUUIEZPMAJWXNPVZDBQGMDSNLKZLUUSVHFSQJLMWDWOTIVCIVYOTBEHGSVYEILHEINYCRPKOLZTEMCRRTDBOXJBQLNPWZJUBDZLQWDTCSNMBKWWQBVAFRPLFKBKADNQFNGZSLHIKFHPRVBCUMAEQQJIFZMJIGYXJSOJONECKXUGTXMHFTYAPAEHRWSHTCOGSDYWBXXCRI");
    msg.visibility.assign("DHSQXKOMHEEBWQVSPUWWCPUEINLYXSPBIIJFFRUYBJXIFGDTNMRKJYVKREWVUWBOJA");
    msg.scope.assign("JNEWHRFBJKFLSOYZKDAGBWSGVEGBVJIUIOODB");

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
    msg.setTimeStamp(0.9440760345722624);
    msg.setSource(18527U);
    msg.setSourceEntity(92U);
    msg.setDestination(28031U);
    msg.setDestinationEntity(78U);
    msg.name.assign("GGSTEHIQJDCRWTVOJGEQSGHJAQLGPBWKJWMROWIIUEKIVYYBVJSEODBIMKBNLOOCZXKBOZDRHUMMZASXEXBLTYXIYULCPCPTBQUXIFNWKPSNCKEIUFXXQTNNZPMVATKODKSYBUWVFQNXANFXVLBPRMLZYULGFHPZDAWCCFAOMHMXHAORVJYTOVVILPGRENT");

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
    msg.setTimeStamp(0.9674295259133454);
    msg.setSource(48496U);
    msg.setSourceEntity(225U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(161U);
    msg.name.assign("OJMGVNIERIXFNVCFQQMKIRFEYQUAEBJOHSCZYSDGOTSVLANGAKZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JDJNTBEVYCNVHPVUUKRSVGINLWWAPTYAGNSKABVRIDGUONIUYRWFKQZWHPFZRSPZOPPEKSPQMBDQXXLKYDSTIJPJWLDQHHONVALQU");
    tmp_msg_0.value.assign("PHQBOTOHMNJKTPDGJWSYTVYIIXFPLJXKVYREULOYTIMQONNKEYBDGGAVPAEZKGSVXVLCEGIFBCQDQIDOBWCONIBHLILNHXCJKWIAOEUTMVCDGCLTQUIXVRBADPRTHMUZDGOMSXRDSJPFPWYHFRZMFWAAZYRTCJEZKJIZQKWSSHQBHKSKORAGVSMCQZWRRAWXLTQPBYMEDNPHGCBFZUTGE");
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
    msg.setTimeStamp(0.9796099164546518);
    msg.setSource(47820U);
    msg.setSourceEntity(161U);
    msg.setDestination(43208U);
    msg.setDestinationEntity(148U);
    msg.name.assign("QALCYOUMBBJNGAJHAWDYGADZSKPKSQXIOWEZMFPOWOTVRWOPTIGGEMBCFGWFUMUAEOELNKUTJOJOIFYPPRHQYRRAYUMGMDLKDVGGUIRJDVNZXKYQCBTXWJLDSLNEHPMXQZCENNYBZBUICVVBDKXUQGQWZLSFSZHTXAHCJVSFVLKHI");

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
    msg.setTimeStamp(0.7642877609306834);
    msg.setSource(23060U);
    msg.setSourceEntity(9U);
    msg.setDestination(15119U);
    msg.setDestinationEntity(74U);
    msg.name.assign("GWOBDMFXRYZCIQOSAHAPWVUAUXWQUNDVYMMKCIVSETKJAHZOOMLVFEVSYSJVXRKZUMWOAEQXBUYFGRAPBLJCFWYZETOCYMKJMCGNKDFHLRQLBKDRPHNXTPHHIWVNBYRLAGYYWSTEFJIWSMWKPPOZDTQTFCDBSVUDZRJLIZOILTSJBTHAGNQXNXVIJAEFELWXLLG");

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
    msg.setTimeStamp(0.4777428035839598);
    msg.setSource(54656U);
    msg.setSourceEntity(184U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(95U);
    msg.name.assign("KQOGQVYKYYHRKHDXPZYMBIDJXYSFCKWLVZZBLEPUOJVLXSHSZUZRLKMTRDTYLIMBOIYWXWCDGZCNWJZLQTYAKCTVUFPHSNZQIUTXBIKSFOAJIBHRXWQLVMMFJXOPXHC");

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
    msg.setTimeStamp(0.318424275094773);
    msg.setSource(15933U);
    msg.setSourceEntity(106U);
    msg.setDestination(17590U);
    msg.setDestinationEntity(120U);
    msg.name.assign("CHXGLSFKQVSSMQNZCHUSGXXASTYUHWFDPUICOUDYHGFOKDJHNZRXFRAKOLYLBILKOEMKJSDZTMANTVVBNHGIWWIRRVWEYGBATXLYQDPNERNZDZTEOZVTMVJRLJMFIPFYZHAUOPUJQBFMPKG");

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
    msg.setTimeStamp(0.8131611539526377);
    msg.setSource(7133U);
    msg.setSourceEntity(27U);
    msg.setDestination(37252U);
    msg.setDestinationEntity(142U);
    msg.timeout = 1493684910U;

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
    msg.setTimeStamp(0.4238046389204354);
    msg.setSource(60415U);
    msg.setSourceEntity(142U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(118U);
    msg.timeout = 2783848435U;

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
    msg.setTimeStamp(0.8570809199598534);
    msg.setSource(575U);
    msg.setSourceEntity(108U);
    msg.setDestination(8432U);
    msg.setDestinationEntity(211U);
    msg.timeout = 394580223U;

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
    msg.setTimeStamp(0.5812311302000939);
    msg.setSource(2455U);
    msg.setSourceEntity(226U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(205U);
    msg.sessid = 2713421568U;

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
    msg.setTimeStamp(0.4149393871985778);
    msg.setSource(40264U);
    msg.setSourceEntity(189U);
    msg.setDestination(8309U);
    msg.setDestinationEntity(55U);
    msg.sessid = 1238636684U;

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
    msg.setTimeStamp(0.34534137024526856);
    msg.setSource(14967U);
    msg.setSourceEntity(72U);
    msg.setDestination(35618U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1400670151U;

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
    msg.setTimeStamp(0.4762636745366643);
    msg.setSource(54461U);
    msg.setSourceEntity(121U);
    msg.setDestination(49676U);
    msg.setDestinationEntity(17U);
    msg.sessid = 3420663712U;
    msg.messages.assign("PKKOGSYMHAHJESYFXRSLHIJVCVDENRZFACVFMNVLGHZCAEVTCUXPRLHXFOORXREGAYXCNWJVIBYLNTROBQFADWHLTKVAIKLYPPWMQAUMIHZJCODINYTUTXBEVGH");

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
    msg.setTimeStamp(0.7809651426093811);
    msg.setSource(37228U);
    msg.setSourceEntity(25U);
    msg.setDestination(31630U);
    msg.setDestinationEntity(9U);
    msg.sessid = 2998044919U;
    msg.messages.assign("VTXBKMKZGXZLYXYBJJCTGHTNMZRORUFPDQMRSDUFIXAQCDNSJFVJIZLPECSIYVMRITZBHUNEOUOPPSDKYLJAHFDBMCZXJHASIAIWJFYNBMKYDPHAPHLWIHLXYEPOGFSQGNHQPEZGAUGBBKLAECRBINFVVMZUOSUQZECQNTOOVXOITKFGKEVVZCMQWUAWRRPXQCJWESMWVNYFBGRWTSDHQWEHDGKTYUX");

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
    msg.setTimeStamp(0.6723849546923779);
    msg.setSource(61347U);
    msg.setSourceEntity(52U);
    msg.setDestination(49739U);
    msg.setDestinationEntity(148U);
    msg.sessid = 1338355091U;
    msg.messages.assign("TQQBMRGFYXAVGDRRUYPCOFOCTMGHDDWAOOBVYO");

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
    msg.setTimeStamp(0.31425961411864045);
    msg.setSource(18397U);
    msg.setSourceEntity(61U);
    msg.setDestination(46811U);
    msg.setDestinationEntity(142U);
    msg.sessid = 3433725543U;

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
    msg.setTimeStamp(0.1943011069591929);
    msg.setSource(11892U);
    msg.setSourceEntity(110U);
    msg.setDestination(23486U);
    msg.setDestinationEntity(249U);
    msg.sessid = 813816493U;

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
    msg.setTimeStamp(0.772496120529102);
    msg.setSource(6787U);
    msg.setSourceEntity(101U);
    msg.setDestination(10553U);
    msg.setDestinationEntity(32U);
    msg.sessid = 2673899494U;

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
    msg.setTimeStamp(0.5615262037738107);
    msg.setSource(35139U);
    msg.setSourceEntity(165U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(109U);
    msg.sessid = 3803954632U;
    msg.status = 186U;

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
    msg.setTimeStamp(0.6089970820130965);
    msg.setSource(61949U);
    msg.setSourceEntity(218U);
    msg.setDestination(34976U);
    msg.setDestinationEntity(96U);
    msg.sessid = 1468833704U;
    msg.status = 111U;

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
    msg.setTimeStamp(0.33386659906367144);
    msg.setSource(53366U);
    msg.setSourceEntity(75U);
    msg.setDestination(62707U);
    msg.setDestinationEntity(154U);
    msg.sessid = 3058286215U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.7222605753008026);
    msg.setSource(58105U);
    msg.setSourceEntity(21U);
    msg.setDestination(33039U);
    msg.setDestinationEntity(189U);
    msg.name.assign("DOVAXLANZKRBHXSPZBPRIFGWSQKWNFFXKBLYJXALJHNEFHSAGZVMUELCLORVYCCNYQMWRHMZDORWQAJTXSPGCKQSWCJJTFODBQPSVDSCBJNGMGWLMXQEOODIZMABSQRVHYTFUUBFZMS");

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
    msg.setTimeStamp(0.39518213187510254);
    msg.setSource(3148U);
    msg.setSourceEntity(109U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(14U);
    msg.name.assign("VVEHRIZXOBAQNKPQLQBDAUXFLSHIGMRPNWPITXXTDBUZVHLNMTEYJMBBVOUUCTQCEHCKQEJLPSHTCKJMSWRICPKGYUCISRTMCQVRFQAYGYRWYYDPOLZIZPUBFGWSMWCDEWWEDOIOHWKDILFYKGZGUHVPFXHEYBRXVMGVOKBBRPYDNESCFSWHANJGNJZMTXIATTDEFBQFYXLWPLZVJNADZSKGZNSMC");

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
    msg.setTimeStamp(0.6763248600601351);
    msg.setSource(29114U);
    msg.setSourceEntity(158U);
    msg.setDestination(14612U);
    msg.setDestinationEntity(161U);
    msg.name.assign("EINEVTQYCGQRCLXPYCSQBYXDWLKAWNTYSUCXVYGFDJUOWPOEESBJWEVOMNPLUUQFIVMHQTULMPMHOWAJZQBCCZHSWRKBWHZOTTXVBEFKETXQVAKATWVGKDUREQHDNLVAEL");

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
    msg.setTimeStamp(0.23527465413871385);
    msg.setSource(57709U);
    msg.setSourceEntity(128U);
    msg.setDestination(14650U);
    msg.setDestinationEntity(103U);
    msg.name.assign("CVGOKMZQVYAHLOBWILAYUCAKTIYXQJXILQKGFEONQXQLIPFCJOFGXECXNAFUBRQRMBFMEEXLCZOMRZRUGTMJQIZUXZDBBUONHBXPRDKQPSFKPONPJACYUHTYMHLKYVZSLGYEHEVEJTBDYWJIGCLXTJMLWYJRUBDZMFUPSIACSXVTLNJVCGPSDVFRYHIDKHWBFSVRPETCOAEDHSTGRFWOHOSWZWVNANGZKNQSVKHJEMPTINWUW");

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
    msg.setTimeStamp(0.1835415360974858);
    msg.setSource(27327U);
    msg.setSourceEntity(71U);
    msg.setDestination(5863U);
    msg.setDestinationEntity(80U);
    msg.name.assign("JLDQGEMHULQNFUYZCLNZMHCWZFQMFKBUTGZIXPMTINFEOMEEEWYHOYZJWJMDXUOBTDTKSDRNGDZKYPHCHQFEOHNSAKCBRGKASIAYINFVWRLSLRIDIPKCOOOQYMARPPRHGHQOYFXBZSWGNQZJKCIOJWAEYJJVCXNBVWDKVSPX");

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
    msg.setTimeStamp(0.7845742297945763);
    msg.setSource(51392U);
    msg.setSourceEntity(44U);
    msg.setDestination(23434U);
    msg.setDestinationEntity(189U);
    msg.name.assign("BPKFRBOMVGIPIUFSJULDLARXLVSIZEENZFEIDUTUTRZAMAGWOLGQDEAVANMYXHCGCAOJMBOKTEUOISSPYQBWWJRRTOTWKPJROFXPXQYBPMETNMQQPQDDYCSGSWDCMZXFGVTLZDQOZUVJZRYKCOPHWCVUYLHGUWWBELIBJNKCPFHTNXHKYBNKKAIYZDLFNMEGFIIWHPWBLRNCALYH");

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
    msg.setTimeStamp(0.11068229882502534);
    msg.setSource(6885U);
    msg.setSourceEntity(18U);
    msg.setDestination(29479U);
    msg.setDestinationEntity(253U);
    msg.type = 241U;
    msg.error.assign("UDKFDIAYAARFGJSMRQJHTJGCZWPYEVTBPLFPLBEEBESIDCVOGUAKPXNO");

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
    msg.setTimeStamp(0.48533206242752214);
    msg.setSource(47219U);
    msg.setSourceEntity(106U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(35U);
    msg.type = 60U;
    msg.error.assign("SEXEQWRFAKBRSDVVOWFZVSVUMNLHALRSKGRDZDNWOIXVJIMHTSJXAUEMPYMCBVHHFZGUUURGWTCZYRBEGPHQIKINCILYYXJWHJMAGADLSSJEMMTYTLMKFIYSFOPZEWUBDNFYVACXTCIRGORYBRZPRVQLDNOHCHZDAZCBXXJMUFXGTUTLALPQJ");

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
    msg.setTimeStamp(0.5063441514970772);
    msg.setSource(62901U);
    msg.setSourceEntity(110U);
    msg.setDestination(326U);
    msg.setDestinationEntity(204U);
    msg.type = 254U;
    msg.error.assign("BIIKGIGRWJNC");

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
    msg.setTimeStamp(0.5574078246870072);
    msg.setSource(38658U);
    msg.setSourceEntity(228U);
    msg.setDestination(17025U);
    msg.setDestinationEntity(74U);
    msg.seq = 17971U;
    msg.sys_dst.assign("UPKFZGEQVHOSZKKIWTBDJCDMBACDECRGCPILNAV");
    msg.flags = 192U;
    const signed char tmp_msg_0[] = {-7, 122, 53, 80, -74, 64, -48, -88, 46, 126, 9, -47, -19, 91, -108, -98, 26, 111, 102, -123, 115, 4, -56, 79, 82, 5, -87, 65, 102, 41, 4, 126, 22, -52, 32, -49, 25, 34, -127, -110, 35, -15, 5, 73, -1, -90, -126, 9, 119, -123, 44, 72, -111, 118, 103, 89, -100, 74, -121, 55, 106, 124, -128, -12, 64, -11, -68, -24, 40, 18, -66, -24, 102, -7, 31, 78, -94, 115, 86, -13, 126, 83, 15, -124, -127, -30, 82};
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
    msg.setTimeStamp(0.6663165061518924);
    msg.setSource(32624U);
    msg.setSourceEntity(52U);
    msg.setDestination(3998U);
    msg.setDestinationEntity(195U);
    msg.seq = 49151U;
    msg.sys_dst.assign("JJKXUYKBPAIGPQRZBCMBQACQAZRYXEFCODTPEBXYRVCIMUGVJLHNJUAUGZRECXIDMVOQWVIXBVLAVKHEFITVOWSFNSHPKQDLIBZNNCTRBWSOSXL");
    msg.flags = 183U;
    const signed char tmp_msg_0[] = {-61, 12, -31, -85, 7, -14, 72, -7, 35, 18, 5, 124, 7, 74, 13, 102, -108, 123, -40, 58, 115, 123, -13, -73, 33, 53, -72, 63, 106, 64, -51, -64, -100, -91, -108, 37, -51, -50, -104, 119, -50, -2, 44, -71, -73, -59, 39, 94, -46, -80, 43, -43, -83, -107, 18, 81, -15, -79, 32, -126, -58, -49};
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
    msg.setTimeStamp(0.8082320018953812);
    msg.setSource(30902U);
    msg.setSourceEntity(22U);
    msg.setDestination(36210U);
    msg.setDestinationEntity(121U);
    msg.seq = 59514U;
    msg.sys_dst.assign("YFGPVFVUWKDRZBSADWGMZTXPWWPANZXRHNSNKKNSTLKSWPNBMFHZRLOAVWTIOPZDIUQNDGAYTHSQWUFGENXELZRPGYGBJEMIQBHIECXHFYMBKFRRMZTMQMXXYGPS");
    msg.flags = 132U;
    const signed char tmp_msg_0[] = {-93, -69, -71, 108, -120, -41, -109, 109, 108, -1, -92, 79, -49, 28, -70, -46, 58, -84, 14, -55, -29, -69, 113, 14, 10, 60, -52, 100, -126, -17, -118, 6, -19, -37, 95, -38, 15, 22, 47, 119, 40, -26, -101, 5, -17, 8, -35, 32, -70, -31, -54, -97, 28, 70, -66, -84, 111, 47, -80, -30, -9, 81, -86, -99, 125, 30, 112, -1, -111, -38, -57, 62, -63, 46, 93, 61, -32, -8, 38, -95, 49, 20, 105, -18, 99, -31, -127, 111, 33, -115, 102, -3, 0, -29, 88, -81, 99, 101, 47, -93, -13, 46, -34, -39, 106, 107, -81, -80, -28, -26, 54, -21, 124, 69, -116, 53, -107, -103, 27, -27, -89, -113, 104, -87, -1, -40, 108, 83, 35, 2, 89, 117, -44, 84, 67, 40, -128, -42, 52, -8, 103, -33, 83, -73, 59, -40, -97, 125, 35, 94, -41, 125, 105, -115, -11, 122, 14, 47, -49, 113, -45, 1, 4, -4, -76, 92, 122, -125, 45, -77, -112, 66, 8, -45, -83, 88, -36, -86, -95, -4, 82, 123, -82, -12, -110, -17, -94, -82, 78, -94, -118, -11, -38, 27, -47, 95, 118, 54, -58, -22, 120, -11, -82, -107, 93, 85, 69, 107, -81, -35, 106, 117, 109, -116, -125, -68, -62, -77, 35, 82, -1, -100, -2, -19, 62, 113, -5, 105, 108, -18, 49, -119, -30, 102, 78, 112, -86, -58, 102, 50};
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
    msg.setTimeStamp(0.2750945766307622);
    msg.setSource(54621U);
    msg.setSourceEntity(63U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(133U);
    msg.sys_src.assign("BFDKIRDRDTFMBIYIMEMFQPUDMLPESMKJGTEFEZZAPJIVUVKUMWAAPOGIJWSZHNMXDZYOGKFFHSJDMTLDDVPVKJAPWIZIRPYLGGQBDCWSIHNXUXUJUTSLEJRTNSLPPQORZRMOYVEKANOPCTDGYTAQCTKGHVVNLKRYMICABGCYAYNGFFXWNJAHCESHQBEJXXBOOTQWARBCJYWH");
    msg.sys_dst.assign("FMFDBYHGNKXJABRETUZOWDPRETRVHOIPMFOYTBIEMLXLBGSZRWUAXTOAVUDJJKHYVOEBPMOTWDXZUPBTANCTLSNZTCVYJPHSSDPJRDJGTNNDSKQPZOFXFAGAUQDKXNYOLPCHZEWJLYHHQCBVWABGZNUQWGNRWOMZVKTDVHLIILGUYXZJVGWCHWNCE");
    msg.flags = 216U;
    const signed char tmp_msg_0[] = {-123, 75, 65, 13, -111, 65, -53, 43, 96, 67, 85, 0, 117, 109, 110, -34, 84, 2, 93, 92, 52, -13, 24, -69};
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
    msg.setTimeStamp(0.3299891460328389);
    msg.setSource(44589U);
    msg.setSourceEntity(245U);
    msg.setDestination(46508U);
    msg.setDestinationEntity(231U);
    msg.sys_src.assign("OQNVBJEMJERUSEPTKULZZGZHFMOQIFFLNGORUYSXCDPMXLQAOSZVTOQCBAIGQCLWOMVWWRGDIFMKNJNIEUMJLILHNBZTAYSNGIBWWAGFSPZHVBCJUHRWXVYUVIYUBRQWXXDDTAWCFTREMP");
    msg.sys_dst.assign("SRKKEMXTAPYUHWKEULCWZIKCJRHOVDOVGQSXZXLGQBTZQJUVPNJCSMLEWERNTMCHMGW");
    msg.flags = 92U;
    const signed char tmp_msg_0[] = {93, 116, -111, -119, -9, -20, 92, 53, -125, 59, -18, -28, -102, 29, -39, -127, 14, 84, 15, -25, -80, -58, -98, -85, 39, 10, -112, -84, 93, 118, 11, -69, 58, 55, 84, -26, 3, -43, -95, 55, 72, -99, 90, 123, 102, 45, 2, 62, 90, 53, -61, -80, -28, 36, 38, 0, 65, 46, 30, -95, -67, 36, 46, -46, -79, -71, 119, 52, -49, -66, -107, -16, -74, 32, -58, 98, 37, -42, 48, -3, 112, 71, -6, -13, -107, -26, -52, 78, 83, -81, -121, 28, 32, -119, 47, 88, -93, -35, -128, -22, 73, 80, 95, -97, -105, -56, -32, -33, -78, 113, 10, 98, 101, 3, -89, 82, 57, 93, -96, 66, -98, 18, -103, 5, 41, -7, 114, -9, 87, -2, -43, -2, 95, 39, 18, -81, 32, -14, 7, 59, 91, -102, 73, -102, 95, 121, -13, 120, 123, 42, -22, -97, -125, -6, -63, -126, -39, -34, 87, 22, -72, 96, 98, -36, 110, -20, 86, 79, -52, 125, 0, -112, 36, 51, -125, -77, 1, -103, 12, -19, -111, -23, -40, 89, 41, 83, -40, -16, 50, 88, 93, -49, 2, 52, -21, -105, -86, -74, -65, 37, -86, 39, -5, -58, 108, 75, 95, -14, -84, -5, -67, 55};
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
    msg.setTimeStamp(0.9243045847533504);
    msg.setSource(39061U);
    msg.setSourceEntity(63U);
    msg.setDestination(54998U);
    msg.setDestinationEntity(214U);
    msg.sys_src.assign("IQOVJEWWJYGJXPTYYDUJXYALLAJAULKDKQEGZUFGTIGTKMOEPTMMQAXWZRCKVHXBXVUXPCFZGOUDXZBSCHTDYSTSPLAHFBBKYEZNPBII");
    msg.sys_dst.assign("CLXAMFTSJETLBTGKPMVZPFHKPRSLEPFQWOIGOXFVJA");
    msg.flags = 240U;
    const signed char tmp_msg_0[] = {57, -5, -49, -12, -71, 25, -128, -102, 77, -84, 51, -71, -13, 24, -114, -71, 83, -57, 96, 111, 58, -48, 5, -111, -27, 46, -35, -50, 61, -32, 72, 75, 39, -4, -109, 121, 6, -82, 76, 19, 66, -35, 24, 10, 61, 105, -113, 113, -91, -24, 99, -72, 104, 65, 6, -113, -51, -33, 97, 103, -86, -54, 91, -90, -38, -43, -111, -95, 9, -88, 5, -4, 17, -17, -122, -86, 124, 14, 69, 41, -47, -71, -111, 2, -88, -114, 8, 108, 21, -43, -36, 115, 30, -83, 115, 15, 27, 36, -61, -24, -6, -106, 116, -48, -99, 19, -124, 105, -87, -36, 20, -88, -49, -56, 18, -103, 35, -106, -89, -69, -17, -115, 49};
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
    msg.setTimeStamp(0.008121687117844889);
    msg.setSource(28693U);
    msg.setSourceEntity(160U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(210U);
    msg.seq = 61305U;
    msg.value = 67U;
    msg.error.assign("ZUFVIDDBIYMSIIJUHUAFDYNZIUXISOSBZOBMGIGJFJLDJSU");

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
    msg.setTimeStamp(0.5123481944692382);
    msg.setSource(64581U);
    msg.setSourceEntity(231U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(234U);
    msg.seq = 62393U;
    msg.value = 142U;
    msg.error.assign("XKOPBYFWCTKURYIZZMURFHAEVQCMZAVOKQAUFTLNLYRQNVAOCOOHXLCXULRJNNYIHLBFFIXSIWFHNAOLVJWXKZKEKSPFCHQXXLLWEUXHSYATFEDCRNADPZCTMQIUVESZLVYZI");

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
    msg.setTimeStamp(0.5483022485429633);
    msg.setSource(13664U);
    msg.setSourceEntity(102U);
    msg.setDestination(39170U);
    msg.setDestinationEntity(228U);
    msg.seq = 1997U;
    msg.value = 38U;
    msg.error.assign("QVKQTLXTXRVSBIODYIRJANZILVCYZMZGXYNOIVBXJACFQUWTOOEZQZGPAZYCKPEMPESOAJINWHDWLASKDGDHUEHGVKNGALKPJOJPDYXGXZNMGBBKIVQOTUUVWEIQYCEAULQHBGWSSIJVEHSXRWTUTFKPF");

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
    msg.setTimeStamp(0.8168436012472399);
    msg.setSource(16370U);
    msg.setSourceEntity(214U);
    msg.setDestination(59689U);
    msg.setDestinationEntity(94U);
    msg.seq = 10333U;
    msg.sys.assign("UILSSCCOJVGZGKBWFHUKTAZQWWUPKEAY");
    msg.value = 0.27259723060624863;

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
    msg.setTimeStamp(0.45000939707776055);
    msg.setSource(21211U);
    msg.setSourceEntity(221U);
    msg.setDestination(42222U);
    msg.setDestinationEntity(48U);
    msg.seq = 62004U;
    msg.sys.assign("HSYEDPXRFFWDFCAQEFASHU");
    msg.value = 0.26840487950679226;

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
    msg.setTimeStamp(0.3834435944439244);
    msg.setSource(4253U);
    msg.setSourceEntity(99U);
    msg.setDestination(48677U);
    msg.setDestinationEntity(86U);
    msg.seq = 62583U;
    msg.sys.assign("YZYXPVPPVGFSCZERBFHXKEHP");
    msg.value = 0.19640601052443485;

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
    msg.setTimeStamp(0.23767128749155697);
    msg.setSource(3066U);
    msg.setSourceEntity(189U);
    msg.setDestination(27290U);
    msg.setDestinationEntity(162U);
    msg.seq = 49643U;
    msg.sys_dst.assign("JQENEOYVHJMRXBCMLETPNYXYMGABTSVAYDQEHNJDCSUVLNNMCHFZMVKZBBZLYWAVOYFMAAFBJXGWUHRHIWUMEEKRKSJALXGIQWQTTVOQKFSZGZXDLSXMIDFYLURJMCJAQECVGDYOEBTZFZIGKTGCLCQORVTWYJDVWHDHSFUTCZQJNOXNTJWIUENCINPVORKPSUSFGDNUXPPBLPAQOOPEIHIASTILFKDBS");
    msg.timeout = 0.9870885835470103;

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
    msg.setTimeStamp(0.4395316600663758);
    msg.setSource(45631U);
    msg.setSourceEntity(79U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(129U);
    msg.seq = 41009U;
    msg.sys_dst.assign("SYBYDJKKABDRQSOGAHVHMONZLVOQVCLHBGVLMZGBWYYNQMJXUVQCQDXDUPXVTPWIHLCVPNUXLKWIQFZMHNWLKZNYABKWQTBFMSBCSMMFCFYDPHQBLUQWFNKYNGDNZITXOFCIOEJVSCRFEORWIJWLAJOEPRHUBDXIEJCZRTPUMOEJDTRZHOSTJUUKAZKTWTUFRDPXAFCESJPG");
    msg.timeout = 0.7476014001854996;

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
    msg.setTimeStamp(0.5531709657992102);
    msg.setSource(45158U);
    msg.setSourceEntity(132U);
    msg.setDestination(15806U);
    msg.setDestinationEntity(46U);
    msg.seq = 13399U;
    msg.sys_dst.assign("SQYHVWDZIIMTKOEMZRILPTGOKZTBEOVHBLJPMQSKLRXMRTVUFFLPXXZXCCDDMGUMEQXLSMVJBCIWQHAKDKOOALYQOPTRREINJXHPIUZLRJFZALUUXVFGXQYGMALCCWOJVYEZFZNBONCYATLWNBVQAJFRSPQFFDYEWSQNTCQPWWXJAEOHPPWRGHYVYKEYEMKWUDNDYTSNISDUJFIHSENIBU");
    msg.timeout = 0.4405577294078209;

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
    msg.setTimeStamp(0.34513054445041846);
    msg.setSource(13060U);
    msg.setSourceEntity(3U);
    msg.setDestination(38440U);
    msg.setDestinationEntity(52U);
    msg.action = 111U;
    msg.longain = 0.38237030915881387;
    msg.latgain = 0.8495893909070674;
    msg.bondthick = 768568209U;
    msg.leadgain = 0.7477830582624684;
    msg.deconflgain = 0.21315736546862618;

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
    msg.setTimeStamp(0.9844363405442189);
    msg.setSource(9166U);
    msg.setSourceEntity(29U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(161U);
    msg.action = 140U;
    msg.longain = 0.06954219182192578;
    msg.latgain = 0.3901102715289769;
    msg.bondthick = 387739699U;
    msg.leadgain = 0.7181348327065656;
    msg.deconflgain = 0.47013937852733034;

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
    msg.setTimeStamp(0.4093040526956404);
    msg.setSource(32738U);
    msg.setSourceEntity(173U);
    msg.setDestination(29355U);
    msg.setDestinationEntity(120U);
    msg.action = 201U;
    msg.longain = 0.9196112624649818;
    msg.latgain = 0.7356448052985561;
    msg.bondthick = 2171807684U;
    msg.leadgain = 0.31735369633096777;
    msg.deconflgain = 0.613905483842435;

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
    msg.setTimeStamp(0.7221103410922198);
    msg.setSource(56753U);
    msg.setSourceEntity(250U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(66U);
    msg.err_mean = 0.057650540805409434;
    msg.dist_min_abs = 0.913913191491744;
    msg.dist_min_mean = 0.17069044407493117;

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
    msg.setTimeStamp(0.07527467003079169);
    msg.setSource(12010U);
    msg.setSourceEntity(151U);
    msg.setDestination(39232U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.33308084592684417;
    msg.dist_min_abs = 0.976724221716176;
    msg.dist_min_mean = 0.6178231868412654;

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
    msg.setTimeStamp(0.2675410363021655);
    msg.setSource(31470U);
    msg.setSourceEntity(135U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(225U);
    msg.err_mean = 0.6317546454782776;
    msg.dist_min_abs = 0.8033885960875486;
    msg.dist_min_mean = 0.8705160277594935;

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
    msg.setTimeStamp(0.5703576342164356);
    msg.setSource(17197U);
    msg.setSourceEntity(219U);
    msg.setDestination(3372U);
    msg.setDestinationEntity(56U);
    msg.action = 63U;
    msg.lon_gain = 0.9910919445614268;
    msg.lat_gain = 0.1537556826412081;
    msg.bond_thick = 0.7225890842839516;
    msg.lead_gain = 0.30005033734931363;
    msg.deconfl_gain = 0.06924953265981271;
    msg.accel_switch_gain = 0.19483694470866664;
    msg.safe_dist = 0.9222789919963612;
    msg.deconflict_offset = 0.8431698960886701;
    msg.accel_safe_margin = 0.41095111934353423;
    msg.accel_lim_x = 0.46805476684585434;

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
    msg.setTimeStamp(0.1636279518042687);
    msg.setSource(7853U);
    msg.setSourceEntity(25U);
    msg.setDestination(37768U);
    msg.setDestinationEntity(41U);
    msg.action = 207U;
    msg.lon_gain = 0.502476107917993;
    msg.lat_gain = 0.741486234532262;
    msg.bond_thick = 0.6636049170055329;
    msg.lead_gain = 0.9782463862458083;
    msg.deconfl_gain = 0.7192888029468634;
    msg.accel_switch_gain = 0.44345416117819925;
    msg.safe_dist = 0.504098102887738;
    msg.deconflict_offset = 0.9427090669058966;
    msg.accel_safe_margin = 0.2620269973867061;
    msg.accel_lim_x = 0.6204966916547325;

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
    msg.setTimeStamp(0.614124823551809);
    msg.setSource(3943U);
    msg.setSourceEntity(241U);
    msg.setDestination(54281U);
    msg.setDestinationEntity(214U);
    msg.action = 21U;
    msg.lon_gain = 0.39445845339906804;
    msg.lat_gain = 0.8284539194662033;
    msg.bond_thick = 0.5270338735129034;
    msg.lead_gain = 0.28493129530449424;
    msg.deconfl_gain = 0.8798170972586596;
    msg.accel_switch_gain = 0.7363324282513252;
    msg.safe_dist = 0.5655463431807632;
    msg.deconflict_offset = 0.4414317760448996;
    msg.accel_safe_margin = 0.9722397572180033;
    msg.accel_lim_x = 0.2644371804305812;

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
    msg.setTimeStamp(0.15382072063071872);
    msg.setSource(47993U);
    msg.setSourceEntity(146U);
    msg.setDestination(62375U);
    msg.setDestinationEntity(105U);
    msg.type = 2U;
    msg.op = 183U;
    msg.err_mean = 0.42000451573500674;
    msg.dist_min_abs = 0.14569941168207656;
    msg.dist_min_mean = 0.33188032390092304;
    msg.roll_rate_mean = 0.45245129618511326;
    msg.time = 0.7450387364822599;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 253U;
    tmp_msg_0.lon_gain = 0.5008015849294521;
    tmp_msg_0.lat_gain = 0.9641597767745369;
    tmp_msg_0.bond_thick = 0.3198674890936316;
    tmp_msg_0.lead_gain = 0.5489560525487407;
    tmp_msg_0.deconfl_gain = 0.6847517998262567;
    tmp_msg_0.accel_switch_gain = 0.09785115213644391;
    tmp_msg_0.safe_dist = 0.40735381945645277;
    tmp_msg_0.deconflict_offset = 0.9796706503981581;
    tmp_msg_0.accel_safe_margin = 0.8816343865888869;
    tmp_msg_0.accel_lim_x = 0.14370242163468927;
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
    msg.setTimeStamp(0.610469651509654);
    msg.setSource(23926U);
    msg.setSourceEntity(209U);
    msg.setDestination(33787U);
    msg.setDestinationEntity(111U);
    msg.type = 87U;
    msg.op = 239U;
    msg.err_mean = 0.6550398228904735;
    msg.dist_min_abs = 0.5534721561732239;
    msg.dist_min_mean = 0.9935581691231764;
    msg.roll_rate_mean = 0.617318631133834;
    msg.time = 0.5082760401039857;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 92U;
    tmp_msg_0.lon_gain = 0.8830280017381473;
    tmp_msg_0.lat_gain = 0.6187797711484763;
    tmp_msg_0.bond_thick = 0.6188699322193014;
    tmp_msg_0.lead_gain = 0.1913439387355157;
    tmp_msg_0.deconfl_gain = 0.41568501249313294;
    tmp_msg_0.accel_switch_gain = 0.10040744225912146;
    tmp_msg_0.safe_dist = 0.8296627321238149;
    tmp_msg_0.deconflict_offset = 0.8874460595779928;
    tmp_msg_0.accel_safe_margin = 0.68756947086834;
    tmp_msg_0.accel_lim_x = 0.42412926726961486;
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
    msg.setTimeStamp(0.9483034943701897);
    msg.setSource(309U);
    msg.setSourceEntity(240U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(64U);
    msg.type = 120U;
    msg.op = 36U;
    msg.err_mean = 0.7996726659213619;
    msg.dist_min_abs = 0.19778875346626412;
    msg.dist_min_mean = 0.2744344965543929;
    msg.roll_rate_mean = 0.10473256497699446;
    msg.time = 0.18177799316802556;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 22U;
    tmp_msg_0.lon_gain = 0.053585992066391586;
    tmp_msg_0.lat_gain = 0.24799255160274924;
    tmp_msg_0.bond_thick = 0.20106523473768778;
    tmp_msg_0.lead_gain = 0.7484411952517582;
    tmp_msg_0.deconfl_gain = 0.412049599975186;
    tmp_msg_0.accel_switch_gain = 0.47984585362463705;
    tmp_msg_0.safe_dist = 0.7109345663347049;
    tmp_msg_0.deconflict_offset = 0.9060714613400812;
    tmp_msg_0.accel_safe_margin = 0.5043740484097788;
    tmp_msg_0.accel_lim_x = 0.4526133865646207;
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
    msg.setTimeStamp(0.990276995097349);
    msg.setSource(49488U);
    msg.setSourceEntity(38U);
    msg.setDestination(37821U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.8857757604321865;
    msg.lon = 0.11659304450570507;
    msg.eta = 2022839704U;
    msg.duration = 57605U;

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
    msg.setTimeStamp(0.9027225885591175);
    msg.setSource(48111U);
    msg.setSourceEntity(117U);
    msg.setDestination(8855U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.5464291872641514;
    msg.lon = 0.9136832269509861;
    msg.eta = 2458236292U;
    msg.duration = 12746U;

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
    msg.setTimeStamp(0.36973735547279873);
    msg.setSource(44782U);
    msg.setSourceEntity(148U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.48013724415791914;
    msg.lon = 0.5296041785561335;
    msg.eta = 2912754210U;
    msg.duration = 56586U;

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
    msg.setTimeStamp(0.5907872497904509);
    msg.setSource(7277U);
    msg.setSourceEntity(200U);
    msg.setDestination(31938U);
    msg.setDestinationEntity(13U);
    msg.plan_id = 12068U;

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
    msg.setTimeStamp(0.8940445278296321);
    msg.setSource(3227U);
    msg.setSourceEntity(125U);
    msg.setDestination(13755U);
    msg.setDestinationEntity(6U);
    msg.plan_id = 54279U;

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
    msg.setTimeStamp(0.7203863265038493);
    msg.setSource(50129U);
    msg.setSourceEntity(194U);
    msg.setDestination(21620U);
    msg.setDestinationEntity(100U);
    msg.plan_id = 49043U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6737840668690557;
    tmp_msg_0.lon = 0.2279876093922384;
    tmp_msg_0.eta = 3897760214U;
    tmp_msg_0.duration = 30135U;
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
    msg.setTimeStamp(0.07090199171837275);
    msg.setSource(22201U);
    msg.setSourceEntity(242U);
    msg.setDestination(57911U);
    msg.setDestinationEntity(104U);
    msg.type = 89U;
    msg.command = 84U;
    msg.settings.assign("ARCLNVGWISFFGTAMKEXVZAAJFWGOQOEBESOYBJFNECMYVDNMTXELONHMCTAVZCBLAIEYHDMKCLQDJPMQXRUIZNPIXDQDUCRBJSLVYWPHUXMYHZPMGXJLGWJOBKSXRSRNUYWKZMVRKRCHXPUABMLTNQOKPEEUJXPRBJDIJRIDYBGFTUNGZNLFOTGWFSZKGHUWCKUWYUTCAYAFBDXPJOLPZSQHV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 18950U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GRKENWJEHITTHGOCPGURTRM");

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
    msg.setTimeStamp(0.9200336257441939);
    msg.setSource(47900U);
    msg.setSourceEntity(86U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(24U);
    msg.type = 71U;
    msg.command = 35U;
    msg.settings.assign("PVKPNSRKGJUCJTLLLZMEADLJFUWYAKBUFOMONVZRQBAMHKJZVYYBKQBCGIBHHYYPSXSFRJTTRBEFEBSLOCYQPFGDJKDTGICCEQGEMBRXPTSQJIZWAOXNNITGCLRDINULCDHWVXKJVBWWOHKWQHAGRXXIHUHFYNOTJVINGIMVDAGDTEMPCRWXSVQXLAZXNTRYPWEODZPCKNKJMXDEYVIYSCFAPFPZGLUSMIOOEFUQASOTZFWAU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 46693U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7779123889150293;
    tmp_tmp_msg_0_0.lon = 0.03637809946626325;
    tmp_tmp_msg_0_0.eta = 927144554U;
    tmp_tmp_msg_0_0.duration = 18967U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FFURTGGBPJNGWAKDSBKOCRBTKZUVPQWXJYDTCTMUAJZQEHNTDVEFUBUHKYTRLGQNDMIHNOFCBLARIBFYMYFAZPXEPCCBGXODEDFRHVXCMBNWSWZGVLIIQWHJXZWDVHOXMXTIUUQNIURIMBOGOELWKEGZGMKQVHSZILNYSJJEOLKXARMJCASREKXDVYPDLYCWKAENWVYJOAS");

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
    msg.setTimeStamp(0.5345980207681991);
    msg.setSource(50791U);
    msg.setSourceEntity(88U);
    msg.setDestination(30999U);
    msg.setDestinationEntity(180U);
    msg.type = 54U;
    msg.command = 107U;
    msg.settings.assign("XOECIXDHIUXUAOLEWKDVBBKZLRNVGPVYLTHUPRHHRKICLZCTPEEMXJVBWLCFASWQCFOFQINGLEHCBDBVQYMDAEPQGGDSOUFSXXMBCTMAUQPPNVXUZMSJJKARRWHTRYMANNUHSMZZNLYIKITBQNDRTBOKTFAEOSNFXWNJDAQIRZUTRYFGJTQKSDXZJJGJIPVR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48386U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EYEQBHGPGNLMLIFIRYHTEJJUOIVKSDFPOVDTUCDOQXHCRMKMSOOPSYXCJJQYOLDKNBQVCBFRGEVHGCNNQVBESPERDXPTAWVNDTDJSOSFVWJMXZNXDIVFUJKUNGAKMKHIAOUSNZRXTATYBMAWWRZPYFGOIKHXYMFTQEBZCLLYLGKBLWYSATJSZLZGQTSPITWICEDWARUZRFEZCIJBFAHBBLXAAXUYUWJQNU");

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
    msg.setTimeStamp(0.8132585561857204);
    msg.setSource(5962U);
    msg.setSourceEntity(81U);
    msg.setDestination(6376U);
    msg.setDestinationEntity(218U);
    msg.state = 67U;
    msg.plan_id = 41070U;
    msg.wpt_id = 180U;
    msg.settings_chk = 40121U;

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
    msg.setTimeStamp(0.09666391126623297);
    msg.setSource(15145U);
    msg.setSourceEntity(9U);
    msg.setDestination(59910U);
    msg.setDestinationEntity(153U);
    msg.state = 185U;
    msg.plan_id = 46669U;
    msg.wpt_id = 0U;
    msg.settings_chk = 59700U;

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
    msg.setTimeStamp(0.09716971052056511);
    msg.setSource(50761U);
    msg.setSourceEntity(142U);
    msg.setDestination(1205U);
    msg.setDestinationEntity(101U);
    msg.state = 93U;
    msg.plan_id = 24270U;
    msg.wpt_id = 15U;
    msg.settings_chk = 14062U;

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
    msg.setTimeStamp(0.16492796257073183);
    msg.setSource(56399U);
    msg.setSourceEntity(155U);
    msg.setDestination(5319U);
    msg.setDestinationEntity(238U);
    msg.uid = 174U;
    msg.frag_number = 35U;
    msg.num_frags = 68U;
    const signed char tmp_msg_0[] = {-117, -107, -100, -94, 115, -56, 84, 89, -118, -4, 7, 109, -99, 58, 116, 0, 71, 62, 63, 116, -40, -103, -18, -29, 16, -75, 85, 104, -115, 85, 33, 78, 94, 102, -115, -55, 123, 84, -80, -98, 10, 64, 9, 33, -65, -38, -103, -3, 33, 25, -115, -83, -116, -117, 38, -117, -79, -80, -108, -1, -25, 120, 121, 4, 114, -31, 75, 41, -107, -16, 122, 115, -54, 16, -66, -38, -13, -11, -68, 50, 89, -118, -127, 106, -92, 124, -32, -69, -111, 79, 103, -59, -127, -105, 35, -69, -8, 90, -11};
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
    msg.setTimeStamp(0.7888003751039845);
    msg.setSource(3641U);
    msg.setSourceEntity(191U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(103U);
    msg.uid = 151U;
    msg.frag_number = 202U;
    msg.num_frags = 156U;
    const signed char tmp_msg_0[] = {-83, 89, -1, 90, -77, 9, -126, 126, -47, -10, -42, -47, -52, -87, 99, 109, 124, -93, -82, 115, 39, -52, -100, -27, -61, -22, 107, -119, 123, -116, -43, 23, -42, -18, 17, 121, -1, -102, -116, 48, -97, -86, -10, 12, 48, 95, 121, 42, 100, -115, 107, 29, -78, -78, -97, -50, -80, -119, 10, 53, 67, -99, 7, 5, -25, -97, 20, -3, -13, 2, -119, -3, -128, 121, -36, 73, 74, -41, -26, 90, -31, 37, 81, -12, -53, -39, 45, -105, 99, 126, 55, 104, 58, 29, -116, 53, -7, 16, 16, -105, 68, 70, -36, 62, -47, 30, -56, -72, 70, -18, -21, -75, 36, 120, -3, 42, 56, -74, -34, 120, -24, 12, -97, 60, -108, -88, -120, 46, -52, -43, -60, 124, -27, 116, -87, -57, 68, -100, -53, -85, -18, -42, 117, 74, 22, 62, 111, -3, 40, -38, -28, -62, 122, 24, 1, 124, 58, -80, 27, 41, -99, -96, -18, 50, -48, -108, -40, 58, 93, 56, -84, 77, -20, -59, -14, -107, 87, 90, -72, -3, -103, 83, 79, 75, -75, 81, 31, 105, -114, -101, -68, -121, 11, -103, -58, 3, -127};
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
    msg.setTimeStamp(0.944861509807381);
    msg.setSource(59473U);
    msg.setSourceEntity(36U);
    msg.setDestination(22124U);
    msg.setDestinationEntity(25U);
    msg.uid = 61U;
    msg.frag_number = 245U;
    msg.num_frags = 205U;
    const signed char tmp_msg_0[] = {118, 86, -110, 54, 101, 10, -78, -48, 45, -86, 104, -64, -11, 45, 73, 43, -113, -84, -126, 11, -93, -33, -66, -61, -63, 58, -55, -33, -80, -86, -102, -85, -56, 26, 37, -11, 73, -103, 109, 16, 96, -30, -62, -38, -43, 49, 63, 109, -39, 92, -71, -60, 30, 58, 14, -16, 113, 80, -2, -2, -21, 100, -32, 10, 24, 85, 22, 28, 102, -5, 123, -13, 106};
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
    msg.setTimeStamp(0.1153217355325985);
    msg.setSource(60678U);
    msg.setSourceEntity(112U);
    msg.setDestination(35006U);
    msg.setDestinationEntity(48U);
    msg.content_type.assign("WRGLGOKIQASEQUEFPAEUKETSOINFHMWQBUJFPRIKDPWVOZFRWXEZIHHUJXWQXHRFJFBSGBQBQZDHCBRJYWJPVIPOOXNTHMVQRYPILXKBCDWNMYPILUKZAQQLJTIVMEQXADHRKBVLCXZYDFRCEKPTSMSOLYV");
    const signed char tmp_msg_0[] = {-115, 9, -76, -125, 37, -126, -47, -59, 8, -12, 99, 105, 86, 117, -10, 78, -7, 86, 7, -50, 91, 11, 98, 52, -63, -85, 5, -70, -2, -20, 108, -14, 103, 97, -25, 100, -124, 74, 121, 116, 31, 76, 54, 94, -110, -85, -52, 77, -27, -76, 45, -33, -57, -18, 60, -82, 72, 71, 45, 54, 45, 5, 104, -12, -18, 98, 118, 8, -121, 96, -12, 15, 51, 19, -47, -24, -87, -23, 86, -16, 2, -49, -68, -105, -83, 85, 67, -48, 33, -97, 13, 3, -104, 34, -123, -24, -99, 50, 44, 112, 7, -105, 93, -48, 76, 96, 19, 117, 66, -68, 99, 114, -86, 44, -80, 115, -20, -25, -54, -88, -13, 38, 115, 46, 92, -85, 23, -57, -96, -67, -42, 115, 24, 76, 112, -97};
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
    msg.setTimeStamp(0.9805861931043522);
    msg.setSource(12608U);
    msg.setSourceEntity(199U);
    msg.setDestination(14032U);
    msg.setDestinationEntity(183U);
    msg.content_type.assign("ZDVUYISVIYKSJBWCXZPGXSJJRMTHYKCQHCHFCDSEOBIHFGQNYNIRTSKRVMLDXJSOJZUDZXLGCSTWYPCZFEOPBZLLVLCBXWCMXRUTMIGRWKFXPPKPSODUYGMUQJLQULKRJKMNAJLWOLAWANZTPEH");
    const signed char tmp_msg_0[] = {-70, 29, 32, 89, 93, 84, -21, -46, -6, -47, -102, 2, -65, 21, 69, 73, 80, -22, 83, -28, -103, -42, 83, 9, 54, -75, 4, -32, -105, 59, 47, -47, -105, 43, -91, 68, -33, -19, -35, 39, -67, -59, -55, 58, -9, 31, -35, -112, -111, -119, 69, -76, 60, 36, -28, -54, -113, -52, 13, -56, 80, 56, 120, -113, 71, -74, -8, 66, -116, -47, 106, -46, 74, -69, -76, 105, 6, -41, -74, -51, -10, 76, 7, -35, 60, 103, 121, -70, -72, 17, -95, -128, -16, -81, -59, 64, 27, 25, 42, 46, 95, 112, 90, 47, 82, -62, -37, 61, -14, -48, -11, -79, 21, -11, 34, 31, 11, -87, -12, 23, -48, -69, -13, -10, -98, 38, 33, -10, 67, -15, 22, -47, 49, -60, -32, 93, -91, 71, -29, -13, 70, -12, -120, -90, 69, -63, 62, 7, -14, -26, -123, -56, -73, -35, -11, -13, 10, -1, 20, 21, 83, -82, 35, 25, -75, -124, -105, -111, 69, 28, 34, -106, 53, 92, -77, 93, 24, -4, -41, 110, 77, -76, 100, -56, -82, -14, 9, 109, 89, -92, 26, -31, 115, -31, 6, -10, 46, 42, 101, 81, 12, 65, 68, 126, -107, -50, -27, -19, -95, -41, 60, -93, 109, -15, 7, -41, -12, -5, 75, -107, -120, -106, -78, -64, -13};
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
    msg.setTimeStamp(0.1463521803277813);
    msg.setSource(49809U);
    msg.setSourceEntity(14U);
    msg.setDestination(39511U);
    msg.setDestinationEntity(109U);
    msg.content_type.assign("JYNMTFKUCNWNDDSRUEUKQTTIDXLLLCBIKAGRZASOSDWZZQLCCTYYWVSQWAJAFEQGRCVPISZPZOBGKSBMFDBAVRHAVHBFSSLYKIMVKJCVDPRXHGFBEEGXDFQZEXTWMCNDGXHKIRPUNOIQBJAYING");
    const signed char tmp_msg_0[] = {124, 29, 58, -70, -113, -8, 42, -34, -105, 27, 0, -101, 89, -107, 29, -100, 122, -58, 97, 12, -121, -79, -126, 26, 60, -43, 53, 115, 41, 60, -103, -85, -92, 34, 27, -73, 108, 26, 113, 126, -25, 72, -37, 50, -76, -56, -105, -104, -37, 98, 74, -11, -107, -86, 50, 122, -53, -124, 60, 39, 70, -39, 86, -30, 35, 81, -33};
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
    msg.setTimeStamp(0.9155877247263777);
    msg.setSource(51636U);
    msg.setSourceEntity(16U);
    msg.setDestination(51795U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.8519968034316456);
    msg.setSource(38733U);
    msg.setSourceEntity(154U);
    msg.setDestination(21575U);
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
    msg.setTimeStamp(0.5180371815073515);
    msg.setSource(20257U);
    msg.setSourceEntity(3U);
    msg.setDestination(52360U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.1570005515357492);
    msg.setSource(20209U);
    msg.setSourceEntity(92U);
    msg.setDestination(41273U);
    msg.setDestinationEntity(52U);
    msg.target = 23933U;
    msg.bearing = 0.8697384897370425;
    msg.elevation = 0.3712420325738637;

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
    msg.setTimeStamp(0.8409565753845762);
    msg.setSource(14277U);
    msg.setSourceEntity(8U);
    msg.setDestination(35767U);
    msg.setDestinationEntity(221U);
    msg.target = 26262U;
    msg.bearing = 0.6397994258082491;
    msg.elevation = 0.6706484241438697;

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
    msg.setTimeStamp(0.774738902767369);
    msg.setSource(56492U);
    msg.setSourceEntity(122U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(251U);
    msg.target = 22966U;
    msg.bearing = 0.04083776237150283;
    msg.elevation = 0.7333533955546913;

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
    msg.setTimeStamp(0.9043912798057308);
    msg.setSource(62379U);
    msg.setSourceEntity(109U);
    msg.setDestination(40108U);
    msg.setDestinationEntity(203U);
    msg.target = 56602U;
    msg.x = 0.7647059877860443;
    msg.y = 0.053083684568950074;
    msg.z = 0.45603305427398944;

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
    msg.setTimeStamp(0.762436265005608);
    msg.setSource(60638U);
    msg.setSourceEntity(176U);
    msg.setDestination(60114U);
    msg.setDestinationEntity(86U);
    msg.target = 45933U;
    msg.x = 0.23289755585668004;
    msg.y = 0.9814542448223248;
    msg.z = 0.8377794439782424;

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
    msg.setTimeStamp(0.5766426858111621);
    msg.setSource(17192U);
    msg.setSourceEntity(173U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(6U);
    msg.target = 45581U;
    msg.x = 0.5298842200957445;
    msg.y = 0.15055683283764243;
    msg.z = 0.43308390402945873;

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
    msg.setTimeStamp(0.5944464796863491);
    msg.setSource(8518U);
    msg.setSourceEntity(141U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(113U);
    msg.target = 16968U;
    msg.lat = 0.29020330649069404;
    msg.lon = 0.4860806223171822;
    msg.z_units = 24U;
    msg.z = 0.3137243376807497;

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
    msg.setTimeStamp(0.3024872764803358);
    msg.setSource(55123U);
    msg.setSourceEntity(116U);
    msg.setDestination(17518U);
    msg.setDestinationEntity(236U);
    msg.target = 28892U;
    msg.lat = 0.5790615752509862;
    msg.lon = 0.25437885022745754;
    msg.z_units = 132U;
    msg.z = 0.9906856499871622;

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
    msg.setTimeStamp(0.6167340085152822);
    msg.setSource(45015U);
    msg.setSourceEntity(116U);
    msg.setDestination(44387U);
    msg.setDestinationEntity(243U);
    msg.target = 53251U;
    msg.lat = 0.9119536683993673;
    msg.lon = 0.1571225165061313;
    msg.z_units = 241U;
    msg.z = 0.4910651796588844;

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
    msg.setTimeStamp(0.9233640565954528);
    msg.setSource(36291U);
    msg.setSourceEntity(122U);
    msg.setDestination(39416U);
    msg.setDestinationEntity(214U);
    msg.locale.assign("JWHDIORKEMQPFAZLPHXFEYIMLTTGVXZXYBIDZUZZGQWDAMELMQEXJNMTYABUZGQUFATXJYVVREVRSIBTIAMOQKOLLFNLNDURCOLYEADUCQDLRNSD");
    const signed char tmp_msg_0[] = {-39, 42, -60, 24, -102, -117, 96, -44, 93, 49, 80, 67, 6, -21, -79, -21, 52, 74, 50, 11, -57, 22, 39, 68, 74, 33, 103, -97, -89, 60, -65, 31, 55, -3, -79, 60, -26, 20, 111, -45, -2, -33, 96, 106, 102, -77, -7, -57, 98, 16, 99, 110, 48, -43, -106, -105, -85, -65, 76, 9, 62, -115, 44, -16, -32, 53, 126, -28, -128, 80, -61, 99, -110, 63, -114, -89, 86, -50, -2, -114, 44};
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
    msg.setTimeStamp(0.8475766475401488);
    msg.setSource(1423U);
    msg.setSourceEntity(107U);
    msg.setDestination(15408U);
    msg.setDestinationEntity(3U);
    msg.locale.assign("PWPUEKIZNWDKMYZBVQJHYEXMUXTUNLOQLSVFXLUFDDDJELXLDIABVNMSGWHFQYFRMWGUGSGMPWCUPCEHKGNPKRFJZRADKJXFTGZYCKXRSSPCTWGGESDEFIPMXANNLAFJYMZWYVMRPPZQAIOYEXTAVLQOJROTRZVJBHBHVEHMOMCKJEGWYANTWLKUHUIHQZRYINKGPEYITBRCBSTQIUISDHJWOBIOOVQDCTABOQLJNOVXCSCFDF");
    const signed char tmp_msg_0[] = {97, 27, 80, -30, -44, 90, 67, 21, 42, -113, -112, -8, -128, -52, -69, -57, 34, 11, 15, -37, -5, -52, 0, -69, 32, 94, -28, 112, -10, -3, 77, -90, 84, 47, -56, -42, -122, -27, 50, 22, 120, -103, 67, -99, -114, -22, 15, 116, -43, -66, -97, -36, -92, -38, -126, 23, -27, 73, 72, -61, -48, -27, 43, -74, 123, 63, 47, 103, 35, 49, 105, -31, -74, 59, -88, 105, -30, 126, 23, -71, -27, -13, 15, -126, 105, 117, 72, 124, -55, 62, -10, 43};
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
    msg.setTimeStamp(0.5171174651085859);
    msg.setSource(41381U);
    msg.setSourceEntity(230U);
    msg.setDestination(16517U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("JHCTLVZOKCDZQWBLJEUCUBTIWICXUDBGVEMFWHCBRNRXJOAFURQQMENRFHXXFMCGESVHTFKVUUXEKQOSFOPPDJAQIFAYFDMXCRNPSEKHOVWUGWNSSLPRHKHUQJXBTCKHOKKAITIVF");
    const signed char tmp_msg_0[] = {-57, -90, 31, 42, 50, -99, -67, -68, -104, 18, 10, -17, 34, -124, -60, 3, 69, -128, -70, 76, -52, -71, -51, -104, 54, 58, -113, 6, -4, 81, 118, -70, -41, -6, -13, -21, 57, 40, 121, -5, 93, 4, -55, 100, -116, -127, 39, -119, -118, 6, 47, 120, 20, 121, 25, -21, -100, -19, -119, 16, -121, 102, 28, -1, -15, -65, 114, 39, -96, 84, 107, -76, 70, 84, -71, 31, 60, -126, 119, 86, 66, 32, 54, 98, 117, 71, -112, 87, -30, -42, -19, -104, 124, -24, -50, 32, -3, -38, 119, -88, 4, -84, 8, -8, 104, 58, -87, 122, -25, -4, 40, -76, -5, -48, 98, -98, -5, 96, -8, -45, -15, -110, -124, 55, -17, -29, -7, -114, 27, -57, 7, -100, -60, -47, -105, -49};
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
    msg.setTimeStamp(0.9438670192054286);
    msg.setSource(64214U);
    msg.setSourceEntity(103U);
    msg.setDestination(9951U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.6624154378705968);
    msg.setSource(44894U);
    msg.setSourceEntity(162U);
    msg.setDestination(44510U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.6669590610230886);
    msg.setSource(24993U);
    msg.setSourceEntity(39U);
    msg.setDestination(44675U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5108874368109738);
    msg.setSource(43865U);
    msg.setSourceEntity(1U);
    msg.setDestination(15696U);
    msg.setDestinationEntity(228U);
    msg.camid = 77U;
    msg.x = 20932U;
    msg.y = 3967U;

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
    msg.setTimeStamp(0.9916390721523692);
    msg.setSource(18397U);
    msg.setSourceEntity(132U);
    msg.setDestination(15982U);
    msg.setDestinationEntity(175U);
    msg.camid = 183U;
    msg.x = 6121U;
    msg.y = 40881U;

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
    msg.setTimeStamp(0.8959615919378663);
    msg.setSource(38061U);
    msg.setSourceEntity(44U);
    msg.setDestination(61360U);
    msg.setDestinationEntity(19U);
    msg.camid = 101U;
    msg.x = 51711U;
    msg.y = 4728U;

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
    msg.setTimeStamp(0.46018670549037133);
    msg.setSource(9879U);
    msg.setSourceEntity(157U);
    msg.setDestination(16099U);
    msg.setDestinationEntity(1U);
    msg.camid = 29U;
    msg.x = 1063U;
    msg.y = 57431U;

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
    msg.setTimeStamp(0.3041915678978251);
    msg.setSource(41218U);
    msg.setSourceEntity(22U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(91U);
    msg.camid = 30U;
    msg.x = 5473U;
    msg.y = 15913U;

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
    msg.setTimeStamp(0.29822130236608213);
    msg.setSource(61668U);
    msg.setSourceEntity(7U);
    msg.setDestination(49763U);
    msg.setDestinationEntity(93U);
    msg.camid = 35U;
    msg.x = 18810U;
    msg.y = 27805U;

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
    msg.setTimeStamp(0.9430153319046539);
    msg.setSource(41790U);
    msg.setSourceEntity(2U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(134U);
    msg.tracking = 186U;
    msg.lat = 0.28820295365171644;
    msg.lon = 0.5397203293033614;
    msg.x = 0.8980392637342138;
    msg.y = 0.23632326452113395;
    msg.z = 0.6041098546350486;

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
    msg.setTimeStamp(0.4918554488406629);
    msg.setSource(46847U);
    msg.setSourceEntity(159U);
    msg.setDestination(27030U);
    msg.setDestinationEntity(17U);
    msg.tracking = 217U;
    msg.lat = 0.5790285105825954;
    msg.lon = 0.9415937682096689;
    msg.x = 0.5320294647173842;
    msg.y = 0.4300595904578165;
    msg.z = 0.5037021517651076;

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
    msg.setTimeStamp(0.061922981384265774);
    msg.setSource(47222U);
    msg.setSourceEntity(170U);
    msg.setDestination(30513U);
    msg.setDestinationEntity(112U);
    msg.tracking = 231U;
    msg.lat = 0.5083473035756072;
    msg.lon = 0.39698747168596626;
    msg.x = 0.6086067234768863;
    msg.y = 0.8827995442441915;
    msg.z = 0.9618356531127646;

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
    msg.setTimeStamp(0.5948546512146324);
    msg.setSource(27270U);
    msg.setSourceEntity(121U);
    msg.setDestination(53922U);
    msg.setDestinationEntity(17U);
    msg.target.assign("PIFYPOBTSMXXEKHELIMCEXYTGE");
    msg.lbearing = 0.32100971181003546;
    msg.lelevation = 0.26904913463987123;
    msg.bearing = 0.14587636044988683;
    msg.elevation = 0.9070439193301731;
    msg.phi = 0.5478647783424563;
    msg.theta = 0.8590092402850293;
    msg.psi = 0.5650464171233701;
    msg.accuracy = 0.49863731412503365;

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
    msg.setTimeStamp(0.7472578261844564);
    msg.setSource(3423U);
    msg.setSourceEntity(32U);
    msg.setDestination(3055U);
    msg.setDestinationEntity(4U);
    msg.target.assign("MTROVXVKNCTTDQGGBXSCZZBOEQDPBTSCIXCMSXOQGGEYIYEPRBNGPLGFGVMXLZREQGJFCLRLSRPGANUXBYYCKIYATHWJAESFUMWHHBIFEJTSHNPEOWUPTVIDKKRZRZKWCBUJLVASFLNHDPFFVKNOHGXZCDTEHCPPUNKTJUWYVHXMMXUAWVRJDLV");
    msg.lbearing = 0.7570235608513055;
    msg.lelevation = 0.48840144606717806;
    msg.bearing = 0.5000152829387033;
    msg.elevation = 0.28921970003869657;
    msg.phi = 0.76430508517593;
    msg.theta = 0.2963913638678385;
    msg.psi = 0.20537421939680223;
    msg.accuracy = 0.8809525254450082;

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
    msg.setTimeStamp(0.5847175894860965);
    msg.setSource(46161U);
    msg.setSourceEntity(38U);
    msg.setDestination(62149U);
    msg.setDestinationEntity(95U);
    msg.target.assign("YWLSQAIQDKGPQXRKHFWKIEXYVURLWAGZHBGHLERROONYOXBXTDXLJBVSYGGGATVOCDCSNUPNIZWRPNOEBPNVCWZGAUCUAZMIEHTVJDHWVHTPSODBHEMKKZJYNZYYFAPEIDZFEMOYGMWCABWOLKITMBLTSZXPFNOJTCTULIUBDQICLCBCTKHQDMZZJFJJPVQUXO");
    msg.lbearing = 0.7011647486307512;
    msg.lelevation = 0.9952684517388789;
    msg.bearing = 0.4476389118286984;
    msg.elevation = 0.8046730783976166;
    msg.phi = 0.7093274143903088;
    msg.theta = 0.5858601621068527;
    msg.psi = 0.7849725852717888;
    msg.accuracy = 0.9071059402629197;

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
    msg.setTimeStamp(0.38577900164868006);
    msg.setSource(39514U);
    msg.setSourceEntity(179U);
    msg.setDestination(1765U);
    msg.setDestinationEntity(196U);
    msg.target.assign("DQYUWFGXQKBNZYQOIUGOKLPNCNQBKRJCBCZPCWTHMUXHMVSUYMOADLMEKCFEUJHVRSZTKHP");
    msg.x = 0.054058847592987624;
    msg.y = 0.6257023554302831;
    msg.z = 0.4756731916142658;
    msg.n = 0.9754377739537066;
    msg.e = 0.9648736703776377;
    msg.d = 0.3203483106730515;
    msg.phi = 0.28682185923405645;
    msg.theta = 0.23994872738072448;
    msg.psi = 0.4989471118905394;
    msg.accuracy = 0.7021742591660828;

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
    msg.setTimeStamp(0.12030814053612593);
    msg.setSource(64144U);
    msg.setSourceEntity(19U);
    msg.setDestination(4674U);
    msg.setDestinationEntity(237U);
    msg.target.assign("DFYAHIHWCAQYCAWHSSKXBIXCFXTJOJXNQOODLNGZQKRWLWUHIXODZEQQUTKXGWGXFWYEVNMYJTVPUYGFBJSTLQREPVBVBZPXGVFPGQTDURLDIHPBCNOTYDA");
    msg.x = 0.11025032791319589;
    msg.y = 0.7258388783986045;
    msg.z = 0.6938171373645198;
    msg.n = 0.6572233068076375;
    msg.e = 0.5120048455034876;
    msg.d = 0.8756347270606495;
    msg.phi = 0.8053838692462439;
    msg.theta = 0.20108743681603325;
    msg.psi = 0.9399541182231316;
    msg.accuracy = 0.7591199718355603;

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
    msg.setTimeStamp(0.6363921263155222);
    msg.setSource(33191U);
    msg.setSourceEntity(228U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(244U);
    msg.target.assign("ZIIBMKQKPYIZTETQUVBIVOGVSOVWAJBZMQRNPBAARRMPBOCDVPEUFHTFPJNZRJBYZRKGLDLFACWFZVBDNHTQOPLUJRMIMEVMGCNHBKOLSAHUUUYWZQNFIOZHMWSYVCPGQTOIFDCNGJVJAEGMFCPUDJQDPJXBHKCGMKKWHASEPTEYSTLXFGEKZHWHUSDDUYYALCQRNVEOXWGLOQRXXDTIZXJCINSBSICDYLNLOYFRWE");
    msg.x = 0.14445648355759066;
    msg.y = 0.4688923849579407;
    msg.z = 0.6614321346338871;
    msg.n = 0.18885546622785376;
    msg.e = 0.8620471429828813;
    msg.d = 0.6064368791544156;
    msg.phi = 0.7704359188364561;
    msg.theta = 0.05587098627164899;
    msg.psi = 0.02111987389338288;
    msg.accuracy = 0.7383371641850225;

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
    msg.setTimeStamp(0.4905720875920748);
    msg.setSource(32303U);
    msg.setSourceEntity(220U);
    msg.setDestination(54789U);
    msg.setDestinationEntity(6U);
    msg.target.assign("JULAYIJPZSNDGPHMXBNKXRJCUMSTXEAFDHRFOXKMDLNFONUBFAAKCOATRUJTZZPKDNQEGVZXWQZVNPXWNLPTSEMSVYKBBCWRGXCJFBNGDU");
    msg.lat = 0.4611036942915665;
    msg.lon = 0.8801049611718231;
    msg.z_units = 170U;
    msg.z = 0.7165958898089955;
    msg.accuracy = 0.17057698170797198;

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
    msg.setTimeStamp(0.19393778709842047);
    msg.setSource(60637U);
    msg.setSourceEntity(104U);
    msg.setDestination(19250U);
    msg.setDestinationEntity(120U);
    msg.target.assign("ZEIABHCREWIFDCTDFQQVYODFRNSLNDVLGKFFMFCSQQOTTEIODUYGVVHVMRVUIZLSBLAPLBKIQKVJUBATTIGUJUWNWHSPXKMUEDVUCZLHNOBYAIYHSMWSMODJNMJSYHBWEKXPAJZGBYNXGGWPIZUPAMOGDKXGPLRQRDJWYCFPKONHKLXHYPZ");
    msg.lat = 0.36287239495874624;
    msg.lon = 0.05779288541841432;
    msg.z_units = 162U;
    msg.z = 0.4350511888354147;
    msg.accuracy = 0.22595841684153528;

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
    msg.setTimeStamp(0.13260100542175846);
    msg.setSource(35332U);
    msg.setSourceEntity(126U);
    msg.setDestination(12002U);
    msg.setDestinationEntity(21U);
    msg.target.assign("EOSZTIOTHBDZQIEUHCRLQRLBFQRPLTOJIGAGGMLEPIJGPNDTASHYHORFJZKMRCCLSHRJCUIYXXWWRTCZPUENZMCFVABDQDXXXJXAMYJBTPMBNUYSQCPXEMRVBOUNKQSHEEKMZINLVENDBVOYDTSWPLFGVLWCRFSOGPBIWWHOAZPVNV");
    msg.lat = 0.8081967942576973;
    msg.lon = 0.7417159067835588;
    msg.z_units = 254U;
    msg.z = 0.5211102734822242;
    msg.accuracy = 0.03399132833582552;

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
    msg.setTimeStamp(0.5297499589598698);
    msg.setSource(40380U);
    msg.setSourceEntity(10U);
    msg.setDestination(54519U);
    msg.setDestinationEntity(95U);
    msg.name.assign("LAGJRSPUIAHLQAZHJQTDXEJGKWTBZAGZYENIPDSMXCSCDQFOKERACEPAXICTXZGESHSKUIOSMZIYHWOTGCWRIFAMVDNJGQXFGHYNOHFKQXTFBWQTUOLFJLFZBKKKLOZGYESUBPTKSTFFMPRCZUBARVMKPYODRIQYC");
    msg.lat = 0.25131447921443684;
    msg.lon = 0.43312043905492315;
    msg.z = 0.6991968742513683;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.790296647414029);
    msg.setSource(51821U);
    msg.setSourceEntity(63U);
    msg.setDestination(4383U);
    msg.setDestinationEntity(148U);
    msg.name.assign("NKKQTJLERWUXVRIEBRPKDJDZYJEJBNAXIZGVFTEOLFMJTSDNLDDKEXHUODIXPXDBBHZQMGHOIYCFUFXHOOXCABS");
    msg.lat = 0.12576908090161476;
    msg.lon = 0.42655392045386553;
    msg.z = 0.13183148195225725;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.9932711606821287);
    msg.setSource(54761U);
    msg.setSourceEntity(142U);
    msg.setDestination(9420U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ZQSLLPWFZJSYZZOKEOHWHLBQJSPYIHMGKFVOMWKDVDMCFGTEBEAORIXICEVLDIFTAAXPCGNLBTHVWGSQFYJXNWPRKHHKVXWRYZWWMPUGFQMOUAKOLBUGGNYNVFXRPDNJKDYBORPWYPAGMNUONPCTJQXSJVYUDBCAUHROFTCLVXIRTEUMQXJLSZCLZHMIHFHVKETKZSUQYKARJNR");
    msg.lat = 0.10273620207271406;
    msg.lon = 0.549024124097414;
    msg.z = 0.8061040395614343;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.7379122587581929);
    msg.setSource(28186U);
    msg.setSourceEntity(80U);
    msg.setDestination(54568U);
    msg.setDestinationEntity(109U);
    msg.op = 76U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PARGSOQKBZMKZSZGOLLAIHBWOTRNLKHVETQWAFQTZHPZSAEBWJFIQXEAGZIUSOCWNGXCVIUNUQBPHBYDCYDLTCPECNLYKQLURCACHVBUJYSRRMYFRLUJMXWEFIMYMVEHAPGFTYQJUOKPUFSLADDSOXVMAQDMQKGHXXNINVVGDZGXKCLTPETZXWGVWMEFDVJRNQBEGBSNJNRMEICXADFJWJHOSKKNZITRFTCKHHBTWPSJ");
    tmp_msg_0.lat = 0.047620573613344486;
    tmp_msg_0.lon = 0.6752400529059741;
    tmp_msg_0.z = 0.9626653544603736;
    tmp_msg_0.z_units = 23U;
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
    msg.setTimeStamp(0.300317232580842);
    msg.setSource(62931U);
    msg.setSourceEntity(121U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(254U);
    msg.op = 184U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SSPLJBTHWXRSYNOQIEDLBUMTDHLRLYXMBSWSSCZHWFUJRMQARZPXEZDLXRICWWVKPMHIHMZBGRQGZEKWUYOQLOSUTDJJYWWRDFKIQPCVXJYGLJVFMZVCDSPMTEKXRZVILHBVIPNIBZCYGKMTVCTUVPBFNEYBVXCUZHF");
    tmp_msg_0.lat = 0.57433573559958;
    tmp_msg_0.lon = 0.3749640555506476;
    tmp_msg_0.z = 0.6169729080718195;
    tmp_msg_0.z_units = 119U;
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
    msg.setTimeStamp(0.2139679059573083);
    msg.setSource(31452U);
    msg.setSourceEntity(151U);
    msg.setDestination(19442U);
    msg.setDestinationEntity(169U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.5455028242293836);
    msg.setSource(33403U);
    msg.setSourceEntity(68U);
    msg.setDestination(50900U);
    msg.setDestinationEntity(30U);
    msg.value = 0.3472284645847217;
    msg.type = 61U;

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
    msg.setTimeStamp(0.8052112987044191);
    msg.setSource(9760U);
    msg.setSourceEntity(10U);
    msg.setDestination(51942U);
    msg.setDestinationEntity(88U);
    msg.value = 0.46158948016916745;
    msg.type = 204U;

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
    msg.setTimeStamp(0.17147945545515586);
    msg.setSource(31272U);
    msg.setSourceEntity(72U);
    msg.setDestination(13566U);
    msg.setDestinationEntity(37U);
    msg.value = 0.08531419633632098;
    msg.type = 177U;

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
    msg.setTimeStamp(0.5647955068963127);
    msg.setSource(32918U);
    msg.setSourceEntity(84U);
    msg.setDestination(62510U);
    msg.setDestinationEntity(27U);
    msg.value = 0.29591170589884175;

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
    msg.setTimeStamp(0.6407848277613652);
    msg.setSource(38791U);
    msg.setSourceEntity(24U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(17U);
    msg.value = 0.11156517429983148;

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
    msg.setTimeStamp(0.5282522593523501);
    msg.setSource(44924U);
    msg.setSourceEntity(153U);
    msg.setDestination(36669U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1051411934196751;

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
    msg.setTimeStamp(0.08573385630312436);
    msg.setSource(21667U);
    msg.setSourceEntity(207U);
    msg.setDestination(38123U);
    msg.setDestinationEntity(150U);
    msg.timestamp_last_service = 0.9882248616276474;
    msg.time_next_service = 0.3836300942922165;
    msg.time_motor_next_service = 0.8427408629245696;
    msg.time_idle_ground = 0.2982485405071291;
    msg.time_idle_air = 0.8707964354760034;
    msg.time_idle_water = 0.41140701097486676;
    msg.time_idle_underwater = 0.6616498393852384;
    msg.time_idle_unknown = 0.8490794033644655;
    msg.time_motor_ground = 0.9287694511577494;
    msg.time_motor_air = 0.6873618354038616;
    msg.time_motor_water = 0.4533146697091728;
    msg.time_motor_underwater = 0.44218763442129116;
    msg.time_motor_unknown = 0.6267479646908661;
    msg.rpm_min = 16886;
    msg.rpm_max = 15761;
    msg.depth_max = 0.8404755420568404;

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
    msg.setTimeStamp(0.4416726537180238);
    msg.setSource(49817U);
    msg.setSourceEntity(244U);
    msg.setDestination(60907U);
    msg.setDestinationEntity(32U);
    msg.timestamp_last_service = 0.6509426711799835;
    msg.time_next_service = 0.8329020988246079;
    msg.time_motor_next_service = 0.0623287591279883;
    msg.time_idle_ground = 0.14907127669598985;
    msg.time_idle_air = 0.5861029808260731;
    msg.time_idle_water = 0.5460016363615665;
    msg.time_idle_underwater = 0.06498678217245601;
    msg.time_idle_unknown = 0.8789509527031436;
    msg.time_motor_ground = 0.5751569869447127;
    msg.time_motor_air = 0.8008648211028895;
    msg.time_motor_water = 0.6839454558165983;
    msg.time_motor_underwater = 0.4515374020103494;
    msg.time_motor_unknown = 0.05315444100354061;
    msg.rpm_min = 12106;
    msg.rpm_max = -25599;
    msg.depth_max = 0.6739599742558687;

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
    msg.setTimeStamp(0.96944938126765);
    msg.setSource(45413U);
    msg.setSourceEntity(182U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(156U);
    msg.timestamp_last_service = 0.8917749663276616;
    msg.time_next_service = 0.7443284047004032;
    msg.time_motor_next_service = 0.5010277667437454;
    msg.time_idle_ground = 0.06364086981780692;
    msg.time_idle_air = 0.455308293819808;
    msg.time_idle_water = 0.011819569211549363;
    msg.time_idle_underwater = 0.9722663991061943;
    msg.time_idle_unknown = 0.7560517379279809;
    msg.time_motor_ground = 0.9122681353675123;
    msg.time_motor_air = 0.04217563797487023;
    msg.time_motor_water = 0.6523281429916877;
    msg.time_motor_underwater = 0.5706837549211594;
    msg.time_motor_unknown = 0.6846360361857956;
    msg.rpm_min = 26482;
    msg.rpm_max = 15258;
    msg.depth_max = 0.36825988459076653;

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
    msg.setTimeStamp(0.8734353654268243);
    msg.setSource(25893U);
    msg.setSourceEntity(177U);
    msg.setDestination(62322U);
    msg.setDestinationEntity(22U);
    msg.severity = 106U;
    msg.text.assign("KZJZUJFSMARURYXDMORIMVDESNIQIKLWOFTNXKHNVGQCULCVXIONJZ");

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
    msg.setTimeStamp(0.780376598662249);
    msg.setSource(27053U);
    msg.setSourceEntity(141U);
    msg.setDestination(26380U);
    msg.setDestinationEntity(42U);
    msg.severity = 53U;
    msg.text.assign("OTEGEIYYIDOBEVSUPWFHSWCMLBBHXNALXLPNDCDLDYXGGHGQKNWVMBLTICN");

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
    msg.setTimeStamp(0.3385210735119689);
    msg.setSource(62189U);
    msg.setSourceEntity(157U);
    msg.setDestination(16523U);
    msg.setDestinationEntity(143U);
    msg.severity = 23U;
    msg.text.assign("DDGLFEKFKAARPEWHAUKFGBMSIJPOEUMQUHQDLBTVKEBSSIZSUOIWXOZDTNEJCKKXTRVXLQDFGRXBCYVDRWY");

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
    msg.setTimeStamp(0.016524893569494714);
    msg.setSource(23501U);
    msg.setSourceEntity(1U);
    msg.setDestination(18575U);
    msg.setDestinationEntity(60U);
    msg.channel = -13;
    msg.value = -961728059;
    msg.gain = 4U;

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
    msg.setTimeStamp(0.8924720153970638);
    msg.setSource(60603U);
    msg.setSourceEntity(5U);
    msg.setDestination(29871U);
    msg.setDestinationEntity(215U);
    msg.channel = 19;
    msg.value = 638909706;
    msg.gain = 237U;

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
    msg.setTimeStamp(0.9842820331058006);
    msg.setSource(47666U);
    msg.setSourceEntity(60U);
    msg.setDestination(61301U);
    msg.setDestinationEntity(33U);
    msg.channel = 118;
    msg.value = -589754439;
    msg.gain = 124U;

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
    msg.setTimeStamp(0.6896608081625963);
    msg.setSource(58635U);
    msg.setSourceEntity(216U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(77U);
    msg.ch01 = 0.45166385715047597;
    msg.ch02 = 0.6465122228004837;
    msg.ch03 = 0.15403467392471115;
    msg.ch04 = 0.6464130932430073;
    msg.ch05 = 0.6248966622636669;
    msg.ch06 = 0.44505195186839097;
    msg.ch07 = 0.21586086741424992;
    msg.ch08 = 0.38418056903525355;
    msg.ch09 = 0.601221734569862;
    msg.ch10 = 0.45050711965851287;
    msg.ch11 = 0.45209475833825685;
    msg.ch12 = 0.8755513203961126;
    msg.ch13 = 0.7927865074172569;
    msg.ch14 = 0.31090618178641893;
    msg.ch15 = 0.6420161427280568;
    msg.ch16 = 0.756909876805818;

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
    msg.setTimeStamp(0.6375829804721956);
    msg.setSource(26637U);
    msg.setSourceEntity(250U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(97U);
    msg.ch01 = 0.38276692691140723;
    msg.ch02 = 0.6228355430813501;
    msg.ch03 = 0.327732098157415;
    msg.ch04 = 0.8179029406342427;
    msg.ch05 = 0.41389694780246666;
    msg.ch06 = 0.29801469004819414;
    msg.ch07 = 0.8865047643389139;
    msg.ch08 = 0.020385464731491276;
    msg.ch09 = 0.14466035701410207;
    msg.ch10 = 0.9783754763760932;
    msg.ch11 = 0.12926637290542153;
    msg.ch12 = 0.6133029145712999;
    msg.ch13 = 0.7101393371684077;
    msg.ch14 = 0.8449344398779868;
    msg.ch15 = 0.7582056351242551;
    msg.ch16 = 0.7827837090886433;

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
    msg.setTimeStamp(0.4769429092625197);
    msg.setSource(29443U);
    msg.setSourceEntity(149U);
    msg.setDestination(61963U);
    msg.setDestinationEntity(153U);
    msg.ch01 = 0.14649000225006714;
    msg.ch02 = 0.16712051989373522;
    msg.ch03 = 0.43664403774465377;
    msg.ch04 = 0.8076838481201285;
    msg.ch05 = 0.1627469345808158;
    msg.ch06 = 0.7908945761286614;
    msg.ch07 = 0.18268238592920505;
    msg.ch08 = 0.8524345568457757;
    msg.ch09 = 0.7579405057259032;
    msg.ch10 = 0.487287560501916;
    msg.ch11 = 0.5560032374770292;
    msg.ch12 = 0.9652656779499892;
    msg.ch13 = 0.9524396155620782;
    msg.ch14 = 0.7918122713970969;
    msg.ch15 = 0.9693962148036162;
    msg.ch16 = 0.7900473344160699;

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
    msg.setTimeStamp(0.5427275120110312);
    msg.setSource(26729U);
    msg.setSourceEntity(237U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(239U);
    msg.op = 148U;
    msg.lat = 0.23517616601060676;
    msg.lon = 0.510312062338892;
    msg.height = 0.42889993804995663;
    msg.depth = 0.5651326675287099;
    msg.alt = 0.8758920499332261;

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
    msg.setTimeStamp(0.25345631701648186);
    msg.setSource(4582U);
    msg.setSourceEntity(44U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(188U);
    msg.op = 159U;
    msg.lat = 0.9366508187972584;
    msg.lon = 0.790136757177989;
    msg.height = 0.33429353430646924;
    msg.depth = 0.6724928491567888;
    msg.alt = 0.7639790499842918;

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
    msg.setTimeStamp(0.10329359269901117);
    msg.setSource(61920U);
    msg.setSourceEntity(2U);
    msg.setDestination(24760U);
    msg.setDestinationEntity(56U);
    msg.op = 188U;
    msg.lat = 0.0916636039058285;
    msg.lon = 0.2378417852342204;
    msg.height = 0.6584593111686464;
    msg.depth = 0.7804105545432514;
    msg.alt = 0.6254933965900994;

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
    msg.setTimeStamp(0.20588986521305375);
    msg.setSource(40569U);
    msg.setSourceEntity(201U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(223U);
    msg.nbeams = 179U;
    msg.ncells = 94U;
    msg.coord_sys = 57U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9609781254304;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8396851044083592;
    tmp_tmp_msg_0_0.amp = 0.5004929267920093;
    tmp_tmp_msg_0_0.cor = 114U;
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
    msg.setTimeStamp(0.5000950068135456);
    msg.setSource(17612U);
    msg.setSourceEntity(121U);
    msg.setDestination(43375U);
    msg.setDestinationEntity(248U);
    msg.nbeams = 153U;
    msg.ncells = 149U;
    msg.coord_sys = 194U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9506987533897755;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.17168893704510912;
    tmp_tmp_msg_0_0.amp = 0.8266460088799682;
    tmp_tmp_msg_0_0.cor = 38U;
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
    msg.setTimeStamp(0.2709777261541888);
    msg.setSource(873U);
    msg.setSourceEntity(189U);
    msg.setDestination(18575U);
    msg.setDestinationEntity(121U);
    msg.nbeams = 75U;
    msg.ncells = 227U;
    msg.coord_sys = 48U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8097545308556012;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.06432282214365626;
    tmp_tmp_msg_0_0.amp = 0.5280386732238007;
    tmp_tmp_msg_0_0.cor = 203U;
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
    msg.setTimeStamp(0.9456152175955106);
    msg.setSource(21145U);
    msg.setSourceEntity(1U);
    msg.setDestination(53743U);
    msg.setDestinationEntity(10U);
    msg.cell_position = 0.6649927636829133;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.38742160352206323;
    tmp_msg_0.amp = 0.4372976366660015;
    tmp_msg_0.cor = 108U;
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
    msg.setTimeStamp(0.5917297662460734);
    msg.setSource(5477U);
    msg.setSourceEntity(60U);
    msg.setDestination(211U);
    msg.setDestinationEntity(33U);
    msg.cell_position = 0.948675582257633;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8354336014142648;
    tmp_msg_0.amp = 0.675790483443535;
    tmp_msg_0.cor = 58U;
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
    msg.setTimeStamp(0.7456801811549489);
    msg.setSource(11077U);
    msg.setSourceEntity(38U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(65U);
    msg.cell_position = 0.1013261190751531;

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
    msg.setTimeStamp(0.028110841296881794);
    msg.setSource(8939U);
    msg.setSourceEntity(181U);
    msg.setDestination(7866U);
    msg.setDestinationEntity(126U);
    msg.vel = 0.22698044403541018;
    msg.amp = 0.17586339736707302;
    msg.cor = 177U;

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
    msg.setTimeStamp(0.8434077051734247);
    msg.setSource(63540U);
    msg.setSourceEntity(160U);
    msg.setDestination(20873U);
    msg.setDestinationEntity(153U);
    msg.vel = 0.6966935143028856;
    msg.amp = 0.365321203335946;
    msg.cor = 120U;

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
    msg.setTimeStamp(0.003730185953955356);
    msg.setSource(59820U);
    msg.setSourceEntity(113U);
    msg.setDestination(4330U);
    msg.setDestinationEntity(134U);
    msg.vel = 0.09762639878759372;
    msg.amp = 0.014796090108886384;
    msg.cor = 212U;

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
    msg.setTimeStamp(0.0840681168223516);
    msg.setSource(62594U);
    msg.setSourceEntity(100U);
    msg.setDestination(1574U);
    msg.setDestinationEntity(210U);
    msg.name.assign("SBROBYKADUQIIPLBNIHXPWJGRCEOLTTFWSYDQWYBXVEFLDOGHEIQSMSKYNMRBCLQURILGZKCQRUJVWPTNZYNZCAPOMQAXXVSEZJOHFQGMNJCZQFUELPMTAHMERWABTTLHBMLSCCVWUKCEKLDJOVRVANIUZJPWHUIAGDXQGVZPAIPYGEPXZGKUZCITMKVTRXRFKXJDHOHDEMNAPYQXHZNUNVDSTOO");
    msg.value = 214U;

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
    msg.setTimeStamp(0.548696590388745);
    msg.setSource(63363U);
    msg.setSourceEntity(106U);
    msg.setDestination(46694U);
    msg.setDestinationEntity(200U);
    msg.name.assign("YNKLZVVFZBINRGQJFPPLANIGAPMBJXSMUBACAEXFBDBNFWHCFAONRWKGAIAIETRCJSQUUEMUDLQSVXTHCLONSGSAFFYNRQRVZLHQHTBWDOZDUDWDHMREKFJPPGGSYLSYPUXNFIWMLHXTQWOBLJRSPIHMVRSE");
    msg.value = 132U;

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
    msg.setTimeStamp(0.8621579178425128);
    msg.setSource(28255U);
    msg.setSourceEntity(20U);
    msg.setDestination(50336U);
    msg.setDestinationEntity(166U);
    msg.name.assign("EPVVWXBZIQHSNEMHWNJJKXULKDLVQQEMYHDDDRTAQBRBJRYRRJUMXOPEOXVIDMILMAYPGVCHBQIVJFKJPBBAJSHEGJXCAPZBIQLKXTKVBYTFMZLAGTSGUPPBW");
    msg.value = 89U;

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
    msg.setTimeStamp(0.7024748210600661);
    msg.setSource(48505U);
    msg.setSourceEntity(119U);
    msg.setDestination(64551U);
    msg.setDestinationEntity(197U);
    msg.name.assign("RSQNLBNVHIDDGEKDIWTZHSGDXTOXWRVLUI");

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
    msg.setTimeStamp(0.25292443339787685);
    msg.setSource(42527U);
    msg.setSourceEntity(228U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(242U);
    msg.name.assign("ISKXYRAKXILEKEZFRMGLKYWFNDUXDYIQQNVWQTVSUPLLZGFZGLACPUBQVEPDHNFSRJJDFRFUROKHHRSIWWBFJGOSNXLLZIMCNWDKOCT");

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
    msg.setTimeStamp(0.6569120678074708);
    msg.setSource(65378U);
    msg.setSourceEntity(97U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(105U);
    msg.name.assign("RBMSTPVSSCVQJVROSSFUEHFTQYDACDTBTBFIRMRPLSQS");

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
    msg.setTimeStamp(0.18719365175403802);
    msg.setSource(52531U);
    msg.setSourceEntity(248U);
    msg.setDestination(11954U);
    msg.setDestinationEntity(184U);
    msg.name.assign("FAUBRJKAHNNJTJBQCRPVBXVKYAHMGJFIUSATNCOHMGKQCWSDAZSIDTNXYFUVFOQILRUJGQHTPUYBFUTQXJMBASMGWEGSIWRNQDCFRYXLRGYDLHZOMRZECKTTOALXKMCXKBAHLJGUVEPVWQXACNUNOM");
    msg.value = 160U;

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
    msg.setTimeStamp(0.04544861276959811);
    msg.setSource(42230U);
    msg.setSourceEntity(22U);
    msg.setDestination(64454U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ZFTUFPUPEYCHWSOEOVIJVLNUVYQFLGHRTZLOBZTYQDTRFBOWWFJZSFLKSLJBBXVJNIQKWCXOJEPDIVMQXWCVRREDUBMEYKRKXPQUIJDPTQBOQCEGSQMVASMLINLGHNVEXECTGBUOLGIRZXBISNOFBHPZLLPUWABIPWYHHMXNGPZEROXOTWAMSTANAJIRGGNWYHHNHYDUZYARRAJC");
    msg.value = 151U;

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
    msg.setTimeStamp(0.9437015566837065);
    msg.setSource(24416U);
    msg.setSourceEntity(224U);
    msg.setDestination(27553U);
    msg.setDestinationEntity(171U);
    msg.name.assign("QSPSEVREBYZHXYUDQDQGWKGZRAASYRWKXLUQKPCFNZPKVVHZHXZWSIMTLRLKKZKULDFPRJWOHDLANKZNYGSPEES");
    msg.value = 85U;

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
    msg.setTimeStamp(0.4750033029613915);
    msg.setSource(3553U);
    msg.setSourceEntity(33U);
    msg.setDestination(37007U);
    msg.setDestinationEntity(27U);
    msg.value = 0.10798982446482908;

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
    msg.setTimeStamp(0.4786821254184165);
    msg.setSource(11258U);
    msg.setSourceEntity(9U);
    msg.setDestination(22066U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5063785439585061;

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
    msg.setTimeStamp(0.4902693513742341);
    msg.setSource(50724U);
    msg.setSourceEntity(45U);
    msg.setDestination(44384U);
    msg.setDestinationEntity(153U);
    msg.value = 0.4397029231566493;

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
    msg.setTimeStamp(0.5493957663396924);
    msg.setSource(59707U);
    msg.setSourceEntity(237U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(187U);
    msg.value = 0.91067383984029;

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
    msg.setTimeStamp(0.15805491936916716);
    msg.setSource(30708U);
    msg.setSourceEntity(36U);
    msg.setDestination(12094U);
    msg.setDestinationEntity(60U);
    msg.value = 0.25148347151433803;

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
    msg.setTimeStamp(0.7521303057647956);
    msg.setSource(15892U);
    msg.setSourceEntity(141U);
    msg.setDestination(20689U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5524110278232335;

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
    msg.setTimeStamp(0.30731462264586007);
    msg.setSource(45887U);
    msg.setSourceEntity(85U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5573527723362716;

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
    msg.setTimeStamp(0.502560746360259);
    msg.setSource(34722U);
    msg.setSourceEntity(48U);
    msg.setDestination(19474U);
    msg.setDestinationEntity(12U);
    msg.value = 0.44803644937873355;

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
    msg.setTimeStamp(0.39807568188561204);
    msg.setSource(26338U);
    msg.setSourceEntity(242U);
    msg.setDestination(46903U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7569430723227515;

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
    msg.setTimeStamp(0.6371592655837239);
    msg.setSource(32777U);
    msg.setSourceEntity(218U);
    msg.setDestination(11701U);
    msg.setDestinationEntity(127U);
    msg.restriction = 187U;
    msg.reason.assign("HIDICEHKHUKUMBPZNKWORVWGDBRXABQWKEGVIPCIZTGYHFRSUBAIJYJSEMOSLTKSEMDKNPQTYAXYAZZSVHNWFOQFRHJBJYTXHMQFNJLUZFLFQFXBRAIZOGXICEVLLKTZSCRORACDBWLBBQLODVMNYETQWNUNFJJQQSTOLCDVPPHFYGWSMWPIDNMRETPJXZQIAXOYEE");

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
    msg.setTimeStamp(0.900403336502405);
    msg.setSource(39266U);
    msg.setSourceEntity(42U);
    msg.setDestination(36768U);
    msg.setDestinationEntity(205U);
    msg.restriction = 83U;
    msg.reason.assign("JVHJMBTCXKGYBVKRIRZPEFOHNNWESXOTABJIQDWNMQVAEVJKIVSCZBHXDOQNWECAILRTEPZTPRZKXFVQNXHJUJFQQEKYYRYKPGHKULPFPZMSZBOPKXFDTALTXGAFELAIZLAOUAYGFOJDWLIPSSNFJBXVCMLOPGUDNHQQCMESOCCBQNSGDRAHDWMSZDUIWYVZ");

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
    msg.setTimeStamp(0.5449516289091416);
    msg.setSource(6238U);
    msg.setSourceEntity(39U);
    msg.setDestination(48068U);
    msg.setDestinationEntity(95U);
    msg.restriction = 55U;
    msg.reason.assign("ZEYJCBPHVUIUOQUBGIPYYZFTQVRMPJONYKKSJDAMTYGZOTHMRSJBDEDVAIHANOTEVBMFHIQSXLGZIOHWXWIWEKZXSEVOHCJLTXEXUXLLJWKZUAPWJKSWBGJDOBDHHCCNXGAFEAXDNRRMBZFAEYVWROXNQAFIKNMUIKWTOTJPPBDPZCFSDXVELSWSDBJPCLOASNRKVFRIFGNLCI");

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
    msg.setTimeStamp(0.9509200024229196);
    msg.setSource(43152U);
    msg.setSourceEntity(145U);
    msg.setDestination(28733U);
    msg.setDestinationEntity(26U);
    msg.param = 0.0668175980247091;
    msg.lat = 0.9438580717879647;
    msg.lon = 0.1393993616560648;
    msg.z = 0.56245774838065;
    msg.theta = 0.8653771802806406;
    msg.psi = 0.40297813797773074;

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
    msg.setTimeStamp(0.1979697099237253);
    msg.setSource(54594U);
    msg.setSourceEntity(67U);
    msg.setDestination(33325U);
    msg.setDestinationEntity(50U);
    msg.param = 0.4979030442629484;
    msg.lat = 0.9337271720117913;
    msg.lon = 0.5170207590908956;
    msg.z = 0.8680094584998982;
    msg.theta = 0.1128159205572532;
    msg.psi = 0.4535430497829669;

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
    msg.setTimeStamp(0.22502919234003838);
    msg.setSource(41072U);
    msg.setSourceEntity(140U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(170U);
    msg.param = 0.9196311937098121;
    msg.lat = 0.03467073366930773;
    msg.lon = 0.883934705020802;
    msg.z = 0.2982358959348256;
    msg.theta = 0.688192053741423;
    msg.psi = 0.057677855083371865;

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
    msg.setTimeStamp(0.5072044184021898);
    msg.setSource(56470U);
    msg.setSourceEntity(153U);
    msg.setDestination(16184U);
    msg.setDestinationEntity(108U);
    msg.path_param = 0.9594620362425997;
    msg.x = 0.20197002752039794;
    msg.y = 0.9318217685859037;
    msg.z = 0.9448205527569142;

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
    msg.setTimeStamp(0.5960898818756925);
    msg.setSource(42383U);
    msg.setSourceEntity(73U);
    msg.setDestination(39552U);
    msg.setDestinationEntity(138U);
    msg.path_param = 0.29395913253103245;
    msg.x = 0.09414004656534147;
    msg.y = 0.5735299761149093;
    msg.z = 0.1944658158372109;

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
    msg.setTimeStamp(0.4984256781736909);
    msg.setSource(45192U);
    msg.setSourceEntity(159U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(223U);
    msg.path_param = 0.839059569778076;
    msg.x = 0.38361492020782817;
    msg.y = 0.4042406485619441;
    msg.z = 0.7036607688491933;

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
