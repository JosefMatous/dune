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
// IMC XML MD5: 1446314a18f505e57ec5c41ddde2addf                            *
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
    msg.setTimeStamp(0.19418276612433405);
    msg.setSource(44527U);
    msg.setSourceEntity(146U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(10U);
    msg.state = 198U;
    msg.flags = 87U;
    msg.description.assign("NQYZPYMVWLWZHFWNHTGNBHLSZRDVLGVSGHYUCMAJAC");

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
    msg.setTimeStamp(0.045897601532563836);
    msg.setSource(20195U);
    msg.setSourceEntity(241U);
    msg.setDestination(13580U);
    msg.setDestinationEntity(177U);
    msg.state = 240U;
    msg.flags = 27U;
    msg.description.assign("VUNRUEPSLUKBYEWCVCRMRODMFFPMFILSFFGYNDKAZZYHZJGQXCSRKWGAXGEOYOTZJUBNHPKLTHTVUYLQNIIGVGJIKECBJJRQUMDIMHNNMVYGYZENAYLXZJWXOHRQTXPBZZIDVSAEMWPLWFFOR");

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
    msg.setTimeStamp(0.8856169631753604);
    msg.setSource(16161U);
    msg.setSourceEntity(212U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(7U);
    msg.state = 62U;
    msg.flags = 106U;
    msg.description.assign("MECVAFTODBPUNWXEEGDQNBXGVXXSLEBISINHWFNDAHVYXANMYTVOIKIKZJMRSBPTSMZKQYHPATWAERHWCPZSGHFIRMTLSBDNOUTQZMJDKYWCULRBCQGLMGRZZLXIBEVCE");

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
    msg.setTimeStamp(0.5564913186717195);
    msg.setSource(6864U);
    msg.setSourceEntity(110U);
    msg.setDestination(39009U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.43208123641781004);
    msg.setSource(62401U);
    msg.setSourceEntity(16U);
    msg.setDestination(53241U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.7536355508422541);
    msg.setSource(44161U);
    msg.setSourceEntity(82U);
    msg.setDestination(14124U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.03492397135819225);
    msg.setSource(53862U);
    msg.setSourceEntity(8U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(120U);
    msg.id = 139U;
    msg.label.assign("GETTZZBAJCKWVIPFSTLMGESQNMEBXKBFICSPCJOHTRQJEVWRZIGBBLCJVBGZTUFHYSDITOZIFPLZGAKQIVZHBHHNVUNPEZPPFXADUWPTEOOQARTDDSWUOOWVLCFXOYZ");
    msg.component.assign("FABPBRLZZSXWTOCLCYEOOEMACOAGILNVPQKYAHDQFCWROUXPUXJOHSAWWNJEXYXGLSTBPFNCPMALNNSMTDIIYDDKJERYQWOVRUNTTQOTILAHXGUDLQEDESJBLTIECSQLCZJWXZDQWJNMPMGBZHQCEUEAFHRDYYKKZKSIXRBBPUIAJRUHWQFTUOUWBKBMJJVMFCXRTZIKTPEDVYVFMKHQFUIZGHGINWGVGGBGNZVHNV");
    msg.act_time = 46611U;
    msg.deact_time = 45530U;

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
    msg.setTimeStamp(0.7930786147460142);
    msg.setSource(17232U);
    msg.setSourceEntity(53U);
    msg.setDestination(51931U);
    msg.setDestinationEntity(105U);
    msg.id = 221U;
    msg.label.assign("BEKXDFJTCITEOYCW");
    msg.component.assign("ERMWCDQJJRPAMCJEWQTXUVRXXYKGXUZZSCYERLWLDIWEHXRYZNKMCKDOKTZGHAZPLBJXJECZWXTHQHPUVNQXTEBTLDIFDSSB");
    msg.act_time = 18336U;
    msg.deact_time = 59696U;

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
    msg.setTimeStamp(0.911786992223321);
    msg.setSource(43078U);
    msg.setSourceEntity(168U);
    msg.setDestination(31118U);
    msg.setDestinationEntity(189U);
    msg.id = 167U;
    msg.label.assign("FALRDBRUIHKPLVOLONRGVPVVKYZJLRIWSJTKBHYDLJHXNWOEZOAXVZPEJGRXHUKFMPBYAOWBRDNMCOYSSGXMKICTTIANAUWMFZXYHHMWVKXQCBQSQPFLEGPUBTIZUJJOBCZPVJDEXTZNBGOGQYSYJMKYLCZZHDXWTOFDKBNVASECSTRMCVNIHWGYSFFXIIEQQ");
    msg.component.assign("XTMWQQIGQANECRDOJWUDGIPHYSNLJBQUTBGDOVZKZTSSZNFHZDVZYAOXBHSBZXYRXJDRP");
    msg.act_time = 44416U;
    msg.deact_time = 1862U;

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
    msg.setTimeStamp(0.26211820702810507);
    msg.setSource(53705U);
    msg.setSourceEntity(65U);
    msg.setDestination(35437U);
    msg.setDestinationEntity(112U);
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
    msg.setTimeStamp(0.6071986901706367);
    msg.setSource(20035U);
    msg.setSourceEntity(20U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(222U);
    msg.id = 51U;

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
    msg.setTimeStamp(0.4299265546453078);
    msg.setSource(40815U);
    msg.setSourceEntity(238U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(97U);
    msg.id = 204U;

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
    msg.setTimeStamp(0.7107160290715675);
    msg.setSource(25663U);
    msg.setSourceEntity(101U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(225U);
    msg.op = 115U;
    msg.list.assign("PTFCYINRSRGSTODCCOFAORELRQFNQZWDYAJZXQLFQNLAMHKPMBGVBVUEDFWAKTOIJHYKBEOCZXUKCZEBBXVCUFPVIHOILVWQKZKRNNYELQGQSHEJVDTCDRGOYYUOAGFJIWQYFOCHMITLHAKRNLVGHXSRSZSBDPLXTNMLDAGPUYLXQ");

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
    msg.setTimeStamp(0.8969012756729946);
    msg.setSource(23087U);
    msg.setSourceEntity(247U);
    msg.setDestination(42965U);
    msg.setDestinationEntity(102U);
    msg.op = 23U;
    msg.list.assign("XJJQCHOQDNWSWLKCVLUZSODFBHSRTFZFTGOBXNWABYSCSGRQCRXAUJMRKNKMCHDMAJDRBKCBVSEIXGKAYADWNUVDTLIIESDHFHKYWMMQZQNLMEKOPKRIXXUJZU");

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
    msg.setTimeStamp(0.8956608052195942);
    msg.setSource(36831U);
    msg.setSourceEntity(219U);
    msg.setDestination(50055U);
    msg.setDestinationEntity(223U);
    msg.op = 118U;
    msg.list.assign("PRCSCJXQIZXBZTADNFZKMUMNOHEOTBYPVLOGEATBULC");

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
    msg.setTimeStamp(0.8757165935225906);
    msg.setSource(3278U);
    msg.setSourceEntity(21U);
    msg.setDestination(48158U);
    msg.setDestinationEntity(125U);
    msg.value = 97U;

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
    msg.setTimeStamp(0.9288096093468653);
    msg.setSource(34738U);
    msg.setSourceEntity(232U);
    msg.setDestination(42493U);
    msg.setDestinationEntity(250U);
    msg.value = 233U;

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
    msg.setTimeStamp(0.45081560992271874);
    msg.setSource(4304U);
    msg.setSourceEntity(104U);
    msg.setDestination(18564U);
    msg.setDestinationEntity(210U);
    msg.value = 30U;

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
    msg.setTimeStamp(0.2337346413242668);
    msg.setSource(62009U);
    msg.setSourceEntity(123U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(10U);
    msg.consumer.assign("VYDZZCSREVQBUOZDSXFBEPNUNIOYADUCVILOUONBXTLRHCUYWHTXESQOWEFPLCTGBAUUZCPQDCLJSKREWQMAMAIWOBUGMTVBWAITGJGNGYSCBXAKRJHSTCRTDCEJFNIWSFHIQBPVFJNEKRQQLFTLKWKBMOJVWZXDTSHMVIHISMPVADJAJQAHPYPLOPZPYZNVG");
    msg.message_id = 23413U;

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
    msg.setTimeStamp(0.2633801213677629);
    msg.setSource(26645U);
    msg.setSourceEntity(189U);
    msg.setDestination(1314U);
    msg.setDestinationEntity(195U);
    msg.consumer.assign("QOXEMMTCSNSPXNFMMCPFNALWIYAJOXLSUAMIVRJAWTEZAJXWVZOMVLFFDOHHJUYEEVLALIHYKNUYLTCVGPHYESXZGBPYGODMTDZEUMPVNTXUIHGORIQZJODGKKVGOJXBJWQUEUCLXHEBDPGJKFARQYRBMAUYRCFHDBNKVVIHZLHPUVWZXWTWDNGZGFNRPGQTDCR");
    msg.message_id = 49079U;

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
    msg.setTimeStamp(0.9977347360662238);
    msg.setSource(35520U);
    msg.setSourceEntity(86U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(137U);
    msg.consumer.assign("SYEUEOHZSTZDTDQFDMFIQDOPPJEQQEWGRFFXTTULFNEWSZBQUPOYUSMMCINYUPFGHUQLLVOXHURVKMJSKJJKSUHNWHPTPVADCROFBSWRLIBHNRXZRBLCLATMGOAWZAYPXQIKLMJJAADQGCYXIACNTYKFDVZMCNJKRDVKTVMAIXGCNWWBLSZGHPCGNBWXCNXAHGBKCQXK");
    msg.message_id = 35097U;

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
    msg.setTimeStamp(0.41973842679398843);
    msg.setSource(17595U);
    msg.setSourceEntity(207U);
    msg.setDestination(54750U);
    msg.setDestinationEntity(248U);
    msg.type = 202U;

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
    msg.setTimeStamp(0.07572293217772441);
    msg.setSource(49309U);
    msg.setSourceEntity(219U);
    msg.setDestination(55432U);
    msg.setDestinationEntity(203U);
    msg.type = 65U;

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
    msg.setTimeStamp(0.05826668653934275);
    msg.setSource(47572U);
    msg.setSourceEntity(186U);
    msg.setDestination(50925U);
    msg.setDestinationEntity(63U);
    msg.type = 164U;

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
    msg.setTimeStamp(0.03694839057970867);
    msg.setSource(23589U);
    msg.setSourceEntity(248U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(160U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.5843665145186387);
    msg.setSource(57513U);
    msg.setSourceEntity(112U);
    msg.setDestination(32599U);
    msg.setDestinationEntity(97U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.1341641707306307);
    msg.setSource(34509U);
    msg.setSourceEntity(30U);
    msg.setDestination(42972U);
    msg.setDestinationEntity(223U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.533575779769601);
    msg.setSource(37487U);
    msg.setSourceEntity(111U);
    msg.setDestination(22518U);
    msg.setDestinationEntity(141U);
    msg.total_steps = 200U;
    msg.step_number = 70U;
    msg.step.assign("CDZYUPGSCVMKPQGBTQPITKNINJUEFMRYRJBREQRBBJVPQCWQSGZ");
    msg.flags = 26U;

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
    msg.setTimeStamp(0.1085212568550733);
    msg.setSource(38467U);
    msg.setSourceEntity(68U);
    msg.setDestination(63605U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 116U;
    msg.step_number = 151U;
    msg.step.assign("YGFTGCEVRBSXGZUUQCNONEYDJZPQWP");
    msg.flags = 175U;

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
    msg.setTimeStamp(0.8458483062569448);
    msg.setSource(13142U);
    msg.setSourceEntity(212U);
    msg.setDestination(22573U);
    msg.setDestinationEntity(237U);
    msg.total_steps = 242U;
    msg.step_number = 142U;
    msg.step.assign("NBALUGMIWRUMZYTRNUMFJZBJQLBMVVDPWEDIWJTKYOGSZHEHPERCINXBGOUZMQKNBAKDVNDCQZGRAIYKTVQOXHEKUXPELZCD");
    msg.flags = 216U;

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
    msg.setTimeStamp(0.28496596955464715);
    msg.setSource(29083U);
    msg.setSourceEntity(19U);
    msg.setDestination(40778U);
    msg.setDestinationEntity(12U);
    msg.state = 44U;
    msg.error.assign("VBNWFJKMBJNZDFIOZRRWCTXBKANIFOENYAEPQBJLVQIHUJCGIRMWBPUDWWLTCWGVGMUYSIKBQYTRNOKNJOETEDXCITVAVXYVDBODKHJMFTYZZFARTYKGEZLZPFHKQCBPJNCLSAYOIDBURCXWAUXCGWDHTFAGRULMPIRSZQLVPKRLVWHSTCKSGWPIMSDSFAXVZYDQJGFE");

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
    msg.setTimeStamp(0.3065874489202093);
    msg.setSource(46137U);
    msg.setSourceEntity(232U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(164U);
    msg.state = 221U;
    msg.error.assign("XBQLIIPBRQGDPC");

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
    msg.setTimeStamp(0.43682874116123627);
    msg.setSource(38908U);
    msg.setSourceEntity(220U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(141U);
    msg.state = 89U;
    msg.error.assign("UYTAVJZKRLEZVIGWCAUUQAHECVULQJMZBNKMFPMGYPGCJSLZUQQRPODXEJODNYFOKDSHTBAFQCWAXNQVKRNWNOPTJRSYUGOYKBJWHSFXVOTIBYMZTPMBEJECDVVSPOZIMCRDFWJXPKFRSVBWFYEHWOAIWSRUPYYNQVTQRFMKHXGTCNQPAWCAZGHNXIZFSVIGEUCBGIXALLMRFJXKEDBIPXLBOIGADDLBGNMUZTD");

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
    msg.setTimeStamp(0.5991586062067628);
    msg.setSource(20518U);
    msg.setSourceEntity(170U);
    msg.setDestination(25507U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.11036568142118974);
    msg.setSource(43270U);
    msg.setSourceEntity(31U);
    msg.setDestination(16511U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.20021205164926936);
    msg.setSource(24368U);
    msg.setSourceEntity(237U);
    msg.setDestination(23741U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.6567033717702656);
    msg.setSource(241U);
    msg.setSourceEntity(18U);
    msg.setDestination(30630U);
    msg.setDestinationEntity(118U);
    msg.op = 159U;
    msg.speed_min = 0.8630812500734186;
    msg.speed_max = 0.5369404221236799;
    msg.long_accel = 0.04765069994996929;
    msg.alt_max_msl = 0.49471042223102635;
    msg.dive_fraction_max = 0.9115870847408498;
    msg.climb_fraction_max = 0.585321200043698;
    msg.bank_max = 0.9264069662458392;
    msg.p_max = 0.5012136804841391;
    msg.pitch_min = 0.933180713717921;
    msg.pitch_max = 0.20772912723246006;
    msg.q_max = 0.8705595475116166;
    msg.g_min = 0.5403086363474285;
    msg.g_max = 0.23352192452747622;
    msg.g_lat_max = 0.6038727347974718;
    msg.rpm_min = 0.9783196802710649;
    msg.rpm_max = 0.44140724021168354;
    msg.rpm_rate_max = 0.8876764090549275;

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
    msg.setTimeStamp(0.6976441662097542);
    msg.setSource(53929U);
    msg.setSourceEntity(65U);
    msg.setDestination(39586U);
    msg.setDestinationEntity(175U);
    msg.op = 41U;
    msg.speed_min = 0.2239814986163875;
    msg.speed_max = 0.39877941443972387;
    msg.long_accel = 0.7383024461665683;
    msg.alt_max_msl = 0.5094278134118402;
    msg.dive_fraction_max = 0.27220977165619764;
    msg.climb_fraction_max = 0.8782671244952766;
    msg.bank_max = 0.6586031023031036;
    msg.p_max = 0.4496814526257503;
    msg.pitch_min = 0.9657737296336777;
    msg.pitch_max = 0.3789840183398163;
    msg.q_max = 0.601197994366148;
    msg.g_min = 0.30163466958184826;
    msg.g_max = 0.5655465400900831;
    msg.g_lat_max = 0.8303595848372798;
    msg.rpm_min = 0.044812417586383546;
    msg.rpm_max = 0.21204460275501902;
    msg.rpm_rate_max = 0.9691885805627861;

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
    msg.setTimeStamp(0.5212743015899345);
    msg.setSource(49993U);
    msg.setSourceEntity(168U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(183U);
    msg.op = 136U;
    msg.speed_min = 0.6604370136830331;
    msg.speed_max = 0.8546571643114663;
    msg.long_accel = 0.7881896737162405;
    msg.alt_max_msl = 0.8585369042067176;
    msg.dive_fraction_max = 0.1966884024623594;
    msg.climb_fraction_max = 0.9517225124541862;
    msg.bank_max = 0.14866069931561943;
    msg.p_max = 0.12016188921804527;
    msg.pitch_min = 0.47873462101597086;
    msg.pitch_max = 0.16128686208840914;
    msg.q_max = 0.8695459578515355;
    msg.g_min = 0.41084077168203936;
    msg.g_max = 0.3158510529671916;
    msg.g_lat_max = 0.9649268783319203;
    msg.rpm_min = 0.12726986746077784;
    msg.rpm_max = 0.7018727141927705;
    msg.rpm_rate_max = 0.3662112859011689;

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
    msg.setTimeStamp(0.5755631373303237);
    msg.setSource(9619U);
    msg.setSourceEntity(129U);
    msg.setDestination(54707U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.5285419522225202);
    msg.setSource(53793U);
    msg.setSourceEntity(187U);
    msg.setDestination(48557U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.7664070321374639);
    msg.setSource(19485U);
    msg.setSourceEntity(0U);
    msg.setDestination(2759U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.04760263763883621);
    msg.setSource(19160U);
    msg.setSourceEntity(121U);
    msg.setDestination(12028U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.31487413333630554;
    msg.lon = 0.31649597094561777;
    msg.height = 0.9442177327036245;
    msg.x = 0.3862260847973543;
    msg.y = 0.44300059752763643;
    msg.z = 0.483532639405407;
    msg.phi = 0.18344230917436433;
    msg.theta = 0.10614954847799274;
    msg.psi = 0.2641758791845191;
    msg.u = 0.2494314447206456;
    msg.v = 0.3912814627071777;
    msg.w = 0.8224162061959877;
    msg.p = 0.8319830973982284;
    msg.q = 0.11986923930642202;
    msg.r = 0.27162816191641015;
    msg.svx = 0.9292799744365472;
    msg.svy = 0.930477454322818;
    msg.svz = 0.12661306839189834;

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
    msg.setTimeStamp(0.6785937131595566);
    msg.setSource(33099U);
    msg.setSourceEntity(53U);
    msg.setDestination(393U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.5693218802037615;
    msg.lon = 0.12791945213764444;
    msg.height = 0.1659225455791019;
    msg.x = 0.03264991484278468;
    msg.y = 0.5152455778694942;
    msg.z = 0.4718657492587919;
    msg.phi = 0.29319122188719393;
    msg.theta = 0.8342795603949394;
    msg.psi = 0.9804003511522685;
    msg.u = 0.06787493401420586;
    msg.v = 0.2310035519647179;
    msg.w = 0.6311720559346291;
    msg.p = 0.4780459201107381;
    msg.q = 0.23585579890116237;
    msg.r = 0.6037427279829246;
    msg.svx = 0.9984121099319746;
    msg.svy = 0.506552580983958;
    msg.svz = 0.379751298137616;

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
    msg.setTimeStamp(0.4902408494511705);
    msg.setSource(60776U);
    msg.setSourceEntity(194U);
    msg.setDestination(12536U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.3521240376640533;
    msg.lon = 0.9528020459541036;
    msg.height = 0.15795421541335886;
    msg.x = 0.2500832039236732;
    msg.y = 0.6671118554354464;
    msg.z = 0.13130471467851534;
    msg.phi = 0.17905541266874792;
    msg.theta = 0.01748444349233036;
    msg.psi = 0.8718860720649149;
    msg.u = 0.5098303444561247;
    msg.v = 0.7054666721115604;
    msg.w = 0.2630104175645963;
    msg.p = 0.4177393426507594;
    msg.q = 0.3827834333332426;
    msg.r = 0.8353678523839521;
    msg.svx = 0.37147513631943363;
    msg.svy = 0.29997008502625744;
    msg.svz = 0.6782014529957092;

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
    msg.setTimeStamp(0.9826531872705198);
    msg.setSource(17663U);
    msg.setSourceEntity(184U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(232U);
    msg.op = 27U;
    msg.entities.assign("RQDWKRXHWVBPLRFIATSMALGPCQGKUOYRVHKJNWHERWKDCFVBFCMDTFUYSBJPGMYXGEQGNKIUGNKEBXDKEDWMOJQILOYOKUEISQJNJSZZIABHCGT");

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
    msg.setTimeStamp(0.14369544082432373);
    msg.setSource(36915U);
    msg.setSourceEntity(112U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(251U);
    msg.op = 176U;
    msg.entities.assign("URQSTWWVOVMRLXKHIUHBOOHMRLFDFGIFCPXMYCXDJVZZWGNYRMFSUDKQHHRFYPUCDPSEGJVLWDFQZYNYKHOISKTNLNIEKBLICKYPMBZWEBFJGQPGQPEAVNIPLHSJSBCUXRLORTHEWWKANAXXYATLHTTVKVLOITGKIFYPNDWUNBZJTNASBEZWCZSVQGK");

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
    msg.setTimeStamp(0.8821139022950657);
    msg.setSource(48191U);
    msg.setSourceEntity(30U);
    msg.setDestination(54344U);
    msg.setDestinationEntity(107U);
    msg.op = 152U;
    msg.entities.assign("NXMMCITWPGTGDVKOEITWHEMKUGWPSYRVELERAAYYAUPZDZKXBFXJQEYICLHSAJNUGRGSCDSFXMDDYNRONEZS");

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
    msg.setTimeStamp(0.5361128437008164);
    msg.setSource(2945U);
    msg.setSourceEntity(197U);
    msg.setDestination(2177U);
    msg.setDestinationEntity(164U);
    msg.type = 85U;
    msg.speed = 28677U;
    const signed char tmp_msg_0[] = {-116, -85, -94, -112, -43, 30, -6, -117, -82, -90, 89, 33, -92, 59, 117, 45, -1, 108, -40, -51, -96, -64, 111, 16, -123, 21, -57, -92, -1, -34, -70, 93, -118, 70, 3, 26, -66, 90, 66, 31, -45, -52, 108, 59, 1, -83, 52, 73, -53, -90, 16, 95, 49, -90, 60, 81, 17, -46, -4, -49, -113, 26, 68, -13, -52, -32, -4, 48, 94, -90, 22, 36, 31, -73, -76, 16, -25, 20, -47, 12, -8, -106, -62, 15, -108, 40, 68, 5, 27, -10, 21, 91, -9, -78, 4, 125, -101, 3, 6, 55, 28, -61, -60, -116, -4, 30, -89, -21, 102, 58, -52, -83, 126, 103, 98, 96, 6, 72, 119, -76, -86, 48, -5, 68, 52, 26, 34, -3, -101, 18, 103, 68, 32, -49, 32, 70, 114, 85, 88, 85, -107, -19, 93, 53, 17, -59, 1, 13, -109, 17, -28, -16, -117, -87, -99, -74, -126, 26, -14, -37, 5, 101, -27, 76, 16, -46, -121, -31, 97, 95, 3, 30, -76, -4, 70, 23, 60, -110, 105, -103, 9, -52, 99, 42, -41};
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
    msg.setTimeStamp(0.9101000301238099);
    msg.setSource(28883U);
    msg.setSourceEntity(167U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(103U);
    msg.type = 60U;
    msg.speed = 56586U;
    const signed char tmp_msg_0[] = {88, -82, 49, -41, -86, 69, 113, 0, 15, 7, -43, -47, 107, -90, -10};
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
    msg.setTimeStamp(0.12015225575117494);
    msg.setSource(57746U);
    msg.setSourceEntity(161U);
    msg.setDestination(5763U);
    msg.setDestinationEntity(46U);
    msg.type = 155U;
    msg.speed = 18804U;
    const signed char tmp_msg_0[] = {-64, -43, -5, 79, 64, -92, -34, -2, -18, -67, 115, 46, -31, -63, 11, 111, 78, 11, -60, -4, -43, -42, 114, 27, 25, -67, -9, -79, 93, -84, 71, -120, -42, -121, 30, 111, -1, 76, -52, -116, 23, 62, -78, -15, 104, -44, 89, -46, -105, -115, 42, -124, 114, 119, -126, 104, 49, -64, 102, 43, 20, -93, 47, 91, -80, -106, -65, -60, 125, -20, 27, -43, -23, -61, -112, -115, 67, 9, -41, 111, -93, 19, 109, -114, 69, 60, -108, -95, -52, 8, -45, 101, -119, 62, -128, -16, 19, 55, 45, 10, -66, -36, 19, -34, 125, -5, 52, -23, -30, -71, -95, 62, 37, 39, -95, 7, -91, 107, -119, 92, -11, -112, 126, -78, -36, 4, 23, 114, 76, 71, 23, -33, -37, -22, -27, 64, -114, 41, 28, 71, -7, 0, -95, 107, -14, -100, -122, 79, -30, 12, -52, -121, 57, -46, 57, -63, -60, -80, -82, -57, -2, -15, -15, 96, -5, -18, -111, -65, -105, 3, -102, 75, -72, -117, -68, 100, 125, -83, 104, -12, -82, -11, 83, -117, 4, 37, 94, -24, -21, -65, 3, -15, -107, -101, 5, 12, -91, -107, 90, -61, -45, -70, -10, 116, 44, -89, -88, 103, 14, 45, 18, 25, -47, 94, -41, -58, 103, -112, -62, -5, 108, 107, -127, -30, 93};
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
    msg.setTimeStamp(0.12972381039703829);
    msg.setSource(48505U);
    msg.setSourceEntity(29U);
    msg.setDestination(35148U);
    msg.setDestinationEntity(96U);
    msg.op = 160U;
    msg.tas2acc_pgain = 0.27224075998052;
    msg.bank2p_pgain = 0.7720077675027417;

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
    msg.setTimeStamp(0.3759585933057341);
    msg.setSource(5452U);
    msg.setSourceEntity(190U);
    msg.setDestination(46456U);
    msg.setDestinationEntity(122U);
    msg.op = 231U;
    msg.tas2acc_pgain = 0.014867786324634036;
    msg.bank2p_pgain = 0.13016586155701504;

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
    msg.setTimeStamp(0.5465943653401698);
    msg.setSource(14555U);
    msg.setSourceEntity(111U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(33U);
    msg.op = 26U;
    msg.tas2acc_pgain = 0.6716594835070056;
    msg.bank2p_pgain = 0.6859524666981086;

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
    msg.setTimeStamp(0.4741221187172937);
    msg.setSource(24794U);
    msg.setSourceEntity(242U);
    msg.setDestination(64294U);
    msg.setDestinationEntity(107U);
    msg.available = 4255199510U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.6190180191129743);
    msg.setSource(34635U);
    msg.setSourceEntity(246U);
    msg.setDestination(15742U);
    msg.setDestinationEntity(137U);
    msg.available = 2886903653U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.991473177424069);
    msg.setSource(45220U);
    msg.setSourceEntity(251U);
    msg.setDestination(20920U);
    msg.setDestinationEntity(162U);
    msg.available = 2450122957U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.5071400508509141);
    msg.setSource(62136U);
    msg.setSourceEntity(148U);
    msg.setDestination(31433U);
    msg.setDestinationEntity(242U);
    msg.op = 175U;
    msg.snapshot.assign("SALPWDYTPJMIMWPFJZGOFDDCNHYZEDSSUZUIBRXWWBXJZWCLFAJAYXOEMGFJZOQVUYXSJVECNGMRQBFLRXXKPLUTKVEFHSPMQZJPKDBBUCUZHHQDKGMEUYIECFQNEAOMRQRGDAANTTTDUFTCMGRGGHKKEMGSXQWCVCNDPVDXEVYTQIIYHWJUFQVCAKNCL");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MZDLGYBVWFXWPZTRMVZALBIQIABVYTJYEOPURVEDHUIOONIRSMNSXSPYHJXNXEOTCCXXLXPCTOIIPNUKBFRZINQQMFNHGOKLNWQLASQGUSZDHXUKBPJVQMTPDZANRQHCUSIOCZQFZJCVDTJELBMRJPGLGAGOQSKRCAMXIU");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UXWMHGISVZOCQENTLQJGGFQZOXYCDYQSSJKTZRCDPHKWZNHUOQOFMGHNMATACEIXBKJHISEQJTPE");
    tmp_tmp_msg_0_0.value.assign("DMJSEBPLKVKTACGRKYLJKLQWDLSZLYOGXMDAOOKUIXTDMJSQFUHJCBRFFDUOCZXILSWIVUPNVRAIPBOPTZKIXNIWSTYGMYFNYJHYVKIZJTQXASTQUPNFSNMSQGWCVBVLBDOQXFAXHDBHPUWMCCNWEBCVOMEHKVYWMSIOFKMYRCBH");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6516582926547374);
    msg.setSource(40706U);
    msg.setSourceEntity(94U);
    msg.setDestination(63245U);
    msg.setDestinationEntity(180U);
    msg.op = 107U;
    msg.snapshot.assign("IJYVHEQVWMTQIEZPEEDMKCNPXCUHYWAEXCYKRTOWBNRZQKKQUNCTECPBAGRNTQUERZXJTRYIRIJSNDJJWIFAADGMOYZPVPOVCBZPSTXJHFGOUVUQRXCNDDQLWAUHJVSVHQLTMPAFWGJGGKXEZFXYDKOWNPSSHJLFVARSMEPYTDKBNOIHXZYZQUARBCFYHBLBGXL");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.8360119355066548;
    tmp_msg_0.roll = 9100U;
    tmp_msg_0.pitch = 14591U;
    tmp_msg_0.yaw = 59038U;
    tmp_msg_0.speed = -32043;
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
    msg.setTimeStamp(0.0013642494523568027);
    msg.setSource(45408U);
    msg.setSourceEntity(19U);
    msg.setDestination(16556U);
    msg.setDestinationEntity(211U);
    msg.op = 250U;
    msg.snapshot.assign("YCEZKNEBPFQHJIBILOTDYNUGSXYLWCJDAOLVIFPWMINDANHEZCHYZIDIGJPSEJGURAAAMGSUSPNVJEGYTHGLVBUSUCFZCMLNJHTTWAXJOQEOGVRMPKNVFVRWOFZWHTHODENBTTVYEGDKRNYQRWCZKSJBLZPMSHRTFJOSXTKZPZQWDGFQRSLFVKOOXPIRKUMYXKAKVXXBLHQNEDPCURXRUAKBFMBLXEDCQAHYCQIWAVCOB");
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 53736U;
    tmp_msg_0.destination.assign("JGDPGLBAMUOKDASKYAGLMFFXZSCGRLMIPQIPFADCWWDYLXLPXAXRVTGZBFZETRXPIOIJYIMTOIHZUNBWAANEHNDNJVUOUHRWBZBSOQNKJFJBDLYVHCWTNKNYYTXMTOFQBRMCBT");
    tmp_msg_0.timeout = 0.018690242143907465;
    tmp_msg_0.sms_text.assign("BMYBESOIAZSOSDFLEBMEGAXHKMCDS");
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
    msg.setTimeStamp(0.6237710447105532);
    msg.setSource(17544U);
    msg.setSourceEntity(215U);
    msg.setDestination(18132U);
    msg.setDestinationEntity(172U);
    msg.op = 245U;
    msg.name.assign("CRSJRZWXCSOFLWMTZHJERGCVVTDNWVBQVAYWHXUEOMQMKBMIDTVPXJEDHRUFJPEGIGVQEGIKPBFGNCBMS");

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
    msg.setTimeStamp(0.3132358989119223);
    msg.setSource(48130U);
    msg.setSourceEntity(226U);
    msg.setDestination(58323U);
    msg.setDestinationEntity(76U);
    msg.op = 45U;
    msg.name.assign("TBUDQQSASHVARGAONRYHDUKBPAJHDRMBQBNDPXXFLFAYPJLSMCWRBHUZLCJFPCIJ");

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
    msg.setTimeStamp(0.05710090377105781);
    msg.setSource(38026U);
    msg.setSourceEntity(172U);
    msg.setDestination(2920U);
    msg.setDestinationEntity(163U);
    msg.op = 50U;
    msg.name.assign("FIFNBHRMKPJOHTTWNYATJYRMSYKBXLYKQVUOBHJQKMBDNQMGRZAOFWVWJXHYPNXEIHZZUNVFBUCCCTMUMWKLNQYGWDEVZOUJKMLDSTHFOIRXYQLDSHPGIVXAPASMLM");

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
    msg.setTimeStamp(0.5855009939197064);
    msg.setSource(3274U);
    msg.setSourceEntity(223U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(73U);
    msg.type = 199U;
    msg.htime = 0.47098469545660426;
    msg.context.assign("BLTMNMGELZXUOEGPMUXWQDYWWVTNHPSJHXYKZGJRUMCCWBBLJYKXKVTNQUACGHLHXJGHDQVMPHZRCSHAPOIUYQIKWRRNMXOJIGJOYLCNAPQDYASEKVFPPJKNALFWZTVFOFJNWJCWZARDGBGLDADBYKKMGI");
    msg.text.assign("OJNJOZVZGMMSQZIUKDEH");

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
    msg.setTimeStamp(0.1054039327846874);
    msg.setSource(36068U);
    msg.setSourceEntity(33U);
    msg.setDestination(252U);
    msg.setDestinationEntity(38U);
    msg.type = 8U;
    msg.htime = 0.4041030512545981;
    msg.context.assign("GSMAJAEYUHQAXOSZUIIYLNIGIRAKDQFWWSFZBXRHPXAFFBMQFVSBAVE");
    msg.text.assign("HEZCPJZPCXWCVRYRZTRAILQXGJLMFDDNSOIEIVSYMQLGKGZFXXLPLBCDOURGGRAZNCHWDZESCZBYKUKJEAWVTQABXMFOXKGABHCVUVAQYAIDTJNRTHBRESXSBQKHTBWJENMTHXGMTSWSYUFYNONUVBWYSUHAZDEJQGNDOLRBPKJUDTLIUOEPPMBHPINFEWXDLIHMGSRKIFRJWMTFM");

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
    msg.setTimeStamp(0.6174524793995918);
    msg.setSource(31525U);
    msg.setSourceEntity(70U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(90U);
    msg.type = 45U;
    msg.htime = 0.03139567753049499;
    msg.context.assign("WRLZGWAVWMQUYIPFYFGITIWWELRLGDQJPGOXOSFGWNAILAQLZCVYBNYXXHJZFDBGHDZVSKLAPCWNYHKJQQCRYYOHJBMEIOTUNCH");
    msg.text.assign("BMQPWTJOOFPBNUYUCOKTISMBUUWSRDADXTTZVRQJGSJPVIQIHBDBSTHRZYTCLGTSITMAEEMMUIFLYNVJGFIIUSELKAKUUJOXEUEWQBJNKOPJZCMVPYPWWGISNRMOVQRVRDZVLDLXCLZNKLOCATZOZBCHJFNE");

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
    msg.setTimeStamp(0.548698114180547);
    msg.setSource(35720U);
    msg.setSourceEntity(171U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(63U);
    msg.command = 232U;
    msg.htime = 0.5102130218515701;

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
    msg.setTimeStamp(0.683097015608809);
    msg.setSource(43595U);
    msg.setSourceEntity(60U);
    msg.setDestination(15704U);
    msg.setDestinationEntity(127U);
    msg.command = 42U;
    msg.htime = 0.8596456010820951;

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
    msg.setTimeStamp(0.7956238911798644);
    msg.setSource(15337U);
    msg.setSourceEntity(87U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(63U);
    msg.command = 240U;
    msg.htime = 0.6785877012687447;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.htime = 0.5002637771400177;
    tmp_msg_0.context.assign("BNPOSRYPFTMIHALVZIXOENZYHQGADNWZACOWAHGRMPDQJTWZBUIHFRDXEIYGBEJBUACDYNKDYVYTJTVYLE");
    tmp_msg_0.text.assign("ASEANMEBOZJREETTTGMKRSGXDIBUHORPVOWOOLGVGMMUHZIVLHDTBAWNCRBYNMWEIUAVVSBYTYRHZUIYVSNUFMNFRMIQCTPDULPTAXGFSJQL");
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
    msg.setTimeStamp(0.20469831934881733);
    msg.setSource(49187U);
    msg.setSourceEntity(13U);
    msg.setDestination(22361U);
    msg.setDestinationEntity(14U);
    msg.op = 11U;
    msg.file.assign("HCVBMDLBJXAPGPUNMVHSZZTBAJIFEXPFDEAIVXYHTRKOQFLXTDSKIUHOBJRQVARWHNXVRSUNYTTQKGPBIMUPIDWAJDGGQXBJVLMSTCLXYSLQBOGZJNYMLYOHMQRKSZFGSNNYCPUWCAUOUIPSGQVHW");

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
    msg.setTimeStamp(0.9736533492865722);
    msg.setSource(1925U);
    msg.setSourceEntity(243U);
    msg.setDestination(43276U);
    msg.setDestinationEntity(46U);
    msg.op = 239U;
    msg.file.assign("SEUQNNFUUIGXUFIGHUCBAAASSPGFSRYLPHVTMEKTOHEQWUAQLMYUNWFFUOHYCFYGHVVBOOHSXOLQZOXBDNZERZPRCKDXVWEQOMWVYCQTIXPXBBGYVZURMJKFKREIJLDWVMZIDBPGFAJICLALCPMMPFMDQDYDZJKXNYWWLRZTSWEQSEBIHJCDKJBHYCSALITTVQKMJXSRXYLNRGKTWVONGRBZHLTC");

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
    msg.setTimeStamp(0.2203549655679503);
    msg.setSource(22522U);
    msg.setSourceEntity(35U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(68U);
    msg.op = 90U;
    msg.file.assign("MXXBEBASWJPQGUCWWUCVKMWDR");

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
    msg.setTimeStamp(0.03382632549679343);
    msg.setSource(9284U);
    msg.setSourceEntity(140U);
    msg.setDestination(38480U);
    msg.setDestinationEntity(46U);
    msg.op = 129U;
    msg.clock = 0.8870340292797789;
    msg.tz = -98;

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
    msg.setTimeStamp(0.4638507256919936);
    msg.setSource(37850U);
    msg.setSourceEntity(70U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(242U);
    msg.op = 12U;
    msg.clock = 0.825037901115921;
    msg.tz = -82;

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
    msg.setTimeStamp(0.12312453173427795);
    msg.setSource(58456U);
    msg.setSourceEntity(92U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(183U);
    msg.op = 180U;
    msg.clock = 0.20592982834634543;
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
    msg.setTimeStamp(0.8776508243318817);
    msg.setSource(3883U);
    msg.setSourceEntity(128U);
    msg.setDestination(57489U);
    msg.setDestinationEntity(143U);
    msg.conductivity = 0.6375617324140096;
    msg.temperature = 0.17522005610954927;
    msg.depth = 0.7542411649368953;

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
    msg.setTimeStamp(0.8621680368196314);
    msg.setSource(60999U);
    msg.setSourceEntity(119U);
    msg.setDestination(32818U);
    msg.setDestinationEntity(168U);
    msg.conductivity = 0.10550653383262387;
    msg.temperature = 0.8803399315416716;
    msg.depth = 0.10055808698618951;

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
    msg.setTimeStamp(0.6412725926057373);
    msg.setSource(29011U);
    msg.setSourceEntity(42U);
    msg.setDestination(43343U);
    msg.setDestinationEntity(83U);
    msg.conductivity = 0.11193367364239015;
    msg.temperature = 0.8735664760845122;
    msg.depth = 0.6617294199703636;

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
    msg.setTimeStamp(0.4057148055705323);
    msg.setSource(1337U);
    msg.setSourceEntity(95U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(158U);
    msg.altitude = 0.6820712132755611;
    msg.roll = 5372U;
    msg.pitch = 1624U;
    msg.yaw = 12981U;
    msg.speed = -4288;

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
    msg.setTimeStamp(0.4782585552348013);
    msg.setSource(58516U);
    msg.setSourceEntity(107U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(213U);
    msg.altitude = 0.9030214823413978;
    msg.roll = 25894U;
    msg.pitch = 50866U;
    msg.yaw = 32339U;
    msg.speed = 30694;

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
    msg.setTimeStamp(0.11774126744004076);
    msg.setSource(38851U);
    msg.setSourceEntity(98U);
    msg.setDestination(48313U);
    msg.setDestinationEntity(6U);
    msg.altitude = 0.22936684491667125;
    msg.roll = 63810U;
    msg.pitch = 46261U;
    msg.yaw = 20783U;
    msg.speed = -25839;

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
    msg.setTimeStamp(0.8683811910176167);
    msg.setSource(23203U);
    msg.setSourceEntity(7U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.46212699327638174;
    msg.width = 0.2991634063404083;
    msg.length = 0.6892187759802747;
    msg.bearing = 0.44405545411339564;
    msg.pxl = 24431;
    msg.encoding = 35U;
    const signed char tmp_msg_0[] = {-99, -91, 37, 66, 90, -29, -89, -92, -58, -82, 108, -55, -107, -41, -70, -38, -4, 59, -65, -35, 85, -115, 84, -1, 95, -18, -27, 114, 120, -55, 76, 38, -78, -78, -9, -91, -21, -47, -105, -29, -21, -16, 53, 82, 8, 67, -84, -99, -41, -127, -119, 5, -85, -10, 65, 53, -59, 17, 8, -14, -5, -9, -78, 73, 30, -63, -60, 48, -68, -52, -114, 45, -119, -97, -101, -36, 109, -80, -76, -73, 19, -47, -90, 5, -27, -104, 99, 77, -2, -10, -75, 93, 69, -74, -49, 75, 44, 126, -73, -127, 16, -25, 86, 22, 100, 31, -51, 126};
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
    msg.setTimeStamp(0.3614299778690786);
    msg.setSource(43630U);
    msg.setSourceEntity(233U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(222U);
    msg.altitude = 0.5637109691320661;
    msg.width = 0.7945240727892152;
    msg.length = 0.8334019956441173;
    msg.bearing = 0.004449584768096204;
    msg.pxl = 8582;
    msg.encoding = 59U;
    const signed char tmp_msg_0[] = {14, 21, 19, -72, -102, 47, -35, -57, -30, 36, 42, 8, 9, -53, 105, -11, -79, -13, 20, -48, 103, -81, 73, -126, -42};
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
    msg.setTimeStamp(0.9968517565547251);
    msg.setSource(15236U);
    msg.setSourceEntity(253U);
    msg.setDestination(42550U);
    msg.setDestinationEntity(87U);
    msg.altitude = 0.8946991537590316;
    msg.width = 0.5803816647450624;
    msg.length = 0.40406026391214644;
    msg.bearing = 0.32842772475830206;
    msg.pxl = -14414;
    msg.encoding = 89U;
    const signed char tmp_msg_0[] = {-111, -70, -121, 44, 105, 51, 88, 74, -75, -17, 57, -119, 62, -115, -63, -59, 87, -45, -108, -48, 46, -35, 27, -38, -71, 120, -6, -36, -53, -70, 4, -86, -41, -107, -92, -49, -97, 113, -3, 18, 52, 119, 12, -89, 118, -30, -52, 31, -93, -6, 90, 58, 55, -35, -47, 121, 113, -42, -106, 6, 49, -50, -125, 73, -123, -10, -103, -68, 92, -70, 124, 28, 82, -13, -114, 9, -56, 111, -35, 61, -43, 48, -99, 87, 74, 66, 4, -81, 72, 5, -47, -34, 19, -101, -50, -82, 56, 87, 50, 75, -20, -95, 10, 92, -108, 100, 0, 19, 83, -96, 109, -108, 8, -31, 49, -71, 79, -127, -94, 92, 118, 98, 118, 76};
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
    msg.setTimeStamp(0.6635003586450162);
    msg.setSource(47163U);
    msg.setSourceEntity(155U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(30U);
    msg.text.assign("YZFIOOTEVIQVFXBSEKEIMLJEWTPBSGKSOGDHTJJDMJYDKZWYNKWXXBCUGOVIUADKBFALSGPAMQLEZPFCWRHNZWYUOPYDNCQSKFSMWMRLTZFZINRIMKZUQTTYYGAVLVOLH");
    msg.type = 169U;

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
    msg.setTimeStamp(0.7602836218593726);
    msg.setSource(49599U);
    msg.setSourceEntity(33U);
    msg.setDestination(31895U);
    msg.setDestinationEntity(20U);
    msg.text.assign("XQCTKVZPJGDFPNSMNGRVLZPOZYAGNCCGWAPLPNXSWPXOYOYJLZBATJPMVEMMQTMIZEYZAIUJEYBDFDDYHAQJDTZOOAENDVXJRBHSSJTBVUZNTWQQWKBEFXSLETNUXXARIHSHABZLORSIPULMGJWUMHGYCJXJFYBOHRVECVVYWQELKGQFEHOIRDXSSFNDKCAWGKVOBH");
    msg.type = 233U;

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
    msg.setTimeStamp(0.9661765644006607);
    msg.setSource(25318U);
    msg.setSourceEntity(78U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(77U);
    msg.text.assign("TZMHTFMHEABORVZEAXOBORPD");
    msg.type = 113U;

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
    msg.setTimeStamp(0.3829788483987865);
    msg.setSource(30350U);
    msg.setSourceEntity(152U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(117U);
    msg.parameter = 249U;
    msg.numsamples = 250U;
    msg.lat = 0.33389177416202886;
    msg.lon = 0.9432524619452193;

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
    msg.setTimeStamp(0.13142839717074795);
    msg.setSource(9853U);
    msg.setSourceEntity(191U);
    msg.setDestination(32481U);
    msg.setDestinationEntity(77U);
    msg.parameter = 147U;
    msg.numsamples = 197U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 50881U;
    tmp_msg_0.avg = 0.8778773472281662;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.851180276169893;
    msg.lon = 0.508812567384292;

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
    msg.setTimeStamp(0.7659479737592484);
    msg.setSource(23857U);
    msg.setSourceEntity(28U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(75U);
    msg.parameter = 237U;
    msg.numsamples = 111U;
    msg.lat = 0.9966082517547157;
    msg.lon = 0.6945102226731856;

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
    msg.setTimeStamp(0.46052163441052896);
    msg.setSource(10699U);
    msg.setSourceEntity(81U);
    msg.setDestination(57U);
    msg.setDestinationEntity(21U);
    msg.depth = 49753U;
    msg.avg = 0.37346289237347063;

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
    msg.setTimeStamp(0.5054856473936999);
    msg.setSource(20829U);
    msg.setSourceEntity(253U);
    msg.setDestination(19283U);
    msg.setDestinationEntity(111U);
    msg.depth = 65270U;
    msg.avg = 0.18717401527563549;

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
    msg.setTimeStamp(0.6639485730023938);
    msg.setSource(16595U);
    msg.setSourceEntity(145U);
    msg.setDestination(36781U);
    msg.setDestinationEntity(214U);
    msg.depth = 54970U;
    msg.avg = 0.638064427941437;

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
    msg.setTimeStamp(0.1573758712225961);
    msg.setSource(27532U);
    msg.setSourceEntity(42U);
    msg.setDestination(14830U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.2662737524804405);
    msg.setSource(34442U);
    msg.setSourceEntity(154U);
    msg.setDestination(13082U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.6551842892993258);
    msg.setSource(7192U);
    msg.setSourceEntity(158U);
    msg.setDestination(16515U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.8560750369956721);
    msg.setSource(48413U);
    msg.setSourceEntity(197U);
    msg.setDestination(39111U);
    msg.setDestinationEntity(64U);
    msg.sys_name.assign("XFNRYQUXIDHSNQGKOVBTYFCIJDUGAHKXIGZGBSAVJZKDWOLYFKOMUVTNXSBMSWBPYQEVSCYBKVNDEZVPYKJBFXQZEPRMELTTUJOVHHYNIMNJFRFJCNCAIZHBFMLGBQNTXRJQEQDMAEGMVLQUOOOHCAELWYECXTZCAFTEHUEWPGISTKRHIUSPIRKWOHLSULXQXPRJPCPAPLOLWBHAISWZZMWQXYVUGDFZNDYNADGTRTRFKKDRPAZUCSCVMWI");
    msg.sys_type = 182U;
    msg.owner = 61089U;
    msg.lat = 0.30369593928051575;
    msg.lon = 0.6113635243275582;
    msg.height = 0.2515004587722862;
    msg.services.assign("OQEWNZEWTGGWRHGQMVVFACTZWKWQOTHDHWMFJWHPUUCSSBUEFDICTXXQVMXNGLDERVFIKPFAJHPNMUPOJPTKTPTCGPQAUNUBYIOERSKSDJCQYEBKBAJREVNEDCNQXALKRMTMAXLVOBPUXWXZOGBVHYDQYOLFTLGPOXRLYTYVELIWFMQISOAFQKMKYJGSSFZYRAXMDSWZHSHNRILJIUGCIVHDZKNOHBFEYMVCANCGUPJIDYSZKL");

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
    msg.setTimeStamp(0.1160176276534115);
    msg.setSource(4214U);
    msg.setSourceEntity(134U);
    msg.setDestination(19455U);
    msg.setDestinationEntity(254U);
    msg.sys_name.assign("EZHMCZIOYYNDVKOKNLQAFEWDCLXGPDPAUEEYDAMDFUUYVTPKSSCLHSGNXUKXNOKTNYJTAMTJVOSXZHYWVCGDJWFPDQLZAMMXNREPDVCMFHCGLINWFRTFQKAGTBBBLSYYCWKTWMKJIHQNQAZTZSIRZECZEXBIPSTPYKRQLUJQVLMOAWXWUOUUYVGHEZEIFBQDNIXBHPULOQSORHWRWZD");
    msg.sys_type = 141U;
    msg.owner = 16718U;
    msg.lat = 0.027932555284295724;
    msg.lon = 0.2761000520875805;
    msg.height = 0.7373721258989905;
    msg.services.assign("IBPBJPNLNDWVROYHDTCPNMKEJCCLBXMTFKIUXFXDYRFWGAQJAJNPZWRMMRLZAUXZYETGWSAOTBJIMFUTGRLYEXGCCHGEIAQYCGCTOEQXXJEQKDPLTCVNIUENQKSUBZUZKODNCRZLXPFVQZMOQSUWRGSSIJNSLWDARKVYAYHCDILOTWGSLVWK");

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
    msg.setTimeStamp(0.05695480567111766);
    msg.setSource(29341U);
    msg.setSourceEntity(114U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(180U);
    msg.sys_name.assign("GBGLIFDXIZANXFVRPZKMOJGCXNEWDIPARNHQSVZBZNNRKZDNWICYKDUSATGVESGKMLPSBWIMTOUPNYMYBJRBLOPGTJWUOBDCWE");
    msg.sys_type = 174U;
    msg.owner = 36068U;
    msg.lat = 0.8596249853441741;
    msg.lon = 0.9223517240100441;
    msg.height = 0.7334109552065118;
    msg.services.assign("QKNSNOBVDFLRLTXMVQSGFRZFKMLNCNBFOEPQZQESHUPJBXMEYOXDDNZHDQHHJKOOBNVZRKFXKETTFQEUMYDYYZPFSEICGASSGUTKB");

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
    msg.setTimeStamp(0.38638716114266125);
    msg.setSource(51852U);
    msg.setSourceEntity(196U);
    msg.setDestination(55008U);
    msg.setDestinationEntity(158U);
    msg.service.assign("OFTEHHFYAJLRXHNSYATUVCAVRKVSEVNMXEJPPWZLNPKXZDBDDCZRPJQUZOJSTSSJMQATTHSXIGZSYIXCZBYBWEJTUFQUFKHIBCCJDIRBUNLUVEGWJOEHLGXNODNNBISHFUAQQCPDGYZOYEVRSBFGAEHZIVDFMKHSEXBXMOPADK");
    msg.service_type = 42U;

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
    msg.setTimeStamp(0.7919637949736934);
    msg.setSource(54349U);
    msg.setSourceEntity(190U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(128U);
    msg.service.assign("IMLWIGTJGOKPVOWJYYSCXNPBTXYYDAQTHEWVPPZRNCZWANGBCKKZBTYQUS");
    msg.service_type = 252U;

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
    msg.setTimeStamp(0.7866197304243481);
    msg.setSource(17884U);
    msg.setSourceEntity(92U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(117U);
    msg.service.assign("NMNGKCUJUYTLIQCKDHSZSJNQKFSQQEXCIXQETUJANHEWMCULECLQLSGAOBGEPFKIHXRR");
    msg.service_type = 205U;

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
    msg.setTimeStamp(0.6365842047460202);
    msg.setSource(43722U);
    msg.setSourceEntity(228U);
    msg.setDestination(37026U);
    msg.setDestinationEntity(92U);
    msg.value = 0.5709441853838588;

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
    msg.setTimeStamp(0.9492057380158553);
    msg.setSource(59974U);
    msg.setSourceEntity(49U);
    msg.setDestination(12849U);
    msg.setDestinationEntity(112U);
    msg.value = 0.3058847653743818;

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
    msg.setTimeStamp(0.6991508630730181);
    msg.setSource(5945U);
    msg.setSourceEntity(44U);
    msg.setDestination(43802U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9227383929250637;

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
    msg.setTimeStamp(0.8295295116162579);
    msg.setSource(4570U);
    msg.setSourceEntity(170U);
    msg.setDestination(8485U);
    msg.setDestinationEntity(232U);
    msg.value = 0.20104669314069157;

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
    msg.setTimeStamp(0.08853609346641345);
    msg.setSource(50909U);
    msg.setSourceEntity(136U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9001821435689096;

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
    msg.setTimeStamp(0.06889910529332177);
    msg.setSource(60716U);
    msg.setSourceEntity(2U);
    msg.setDestination(41645U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7507728627383752;

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
    msg.setTimeStamp(0.4671315481226824);
    msg.setSource(29828U);
    msg.setSourceEntity(27U);
    msg.setDestination(58081U);
    msg.setDestinationEntity(122U);
    msg.value = 0.6256914350559711;

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
    msg.setTimeStamp(0.30377532515168404);
    msg.setSource(3201U);
    msg.setSourceEntity(200U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(158U);
    msg.value = 0.1913333520299857;

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
    msg.setTimeStamp(0.2855674697684477);
    msg.setSource(56237U);
    msg.setSourceEntity(71U);
    msg.setDestination(6759U);
    msg.setDestinationEntity(210U);
    msg.value = 0.27027290192345066;

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
    msg.setTimeStamp(0.3176176484687663);
    msg.setSource(2472U);
    msg.setSourceEntity(234U);
    msg.setDestination(53078U);
    msg.setDestinationEntity(124U);
    msg.number.assign("ZCAVUIIYPYZWCNWKCWCKYQJSOCVLHUWIDIZXLCNSXZGMOMHUQFVWDTYANJMPCGXUNBEBMXNXEMJANENBTPMVFSKDYOTUTCKEUKPGJATZLHFNVEPRRGHABM");
    msg.timeout = 39252U;
    msg.contents.assign("PYHDFMYDAIXOHNZVBMCWVJZHKXOVUAWUPWWGOXBMGXBQAVXEJOQLNUKDTSNTLEVUEQECQFMFVRKSTRWHKPAFUDHJTKSCUGMBJFJCHLIFVTGDZBCHSNTEQAPY");

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
    msg.setTimeStamp(0.7616534723171328);
    msg.setSource(22565U);
    msg.setSourceEntity(35U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(82U);
    msg.number.assign("ZXVCCWHUXFWPXPEZDMIDUGSOOI");
    msg.timeout = 45645U;
    msg.contents.assign("YUBFPIYNFFZRGGTIZ");

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
    msg.setTimeStamp(0.24287889661941686);
    msg.setSource(57154U);
    msg.setSourceEntity(27U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(65U);
    msg.number.assign("YEDKNNNSKMGIKIRZGRZDCQLWFNOVMPGGGORHJSLDGNDKIBYSHCIOQXJFBHUUPGRRQAYQJAWDILSYRBBAZWJXLXXGTCEUPRPPWTXTMIPCSTUQKEFLWPMKSJRHZWBIAALXBPQHYFALYYTXNBTUCFWWUVOHFOSXLBOFCMKEUTKJEZJTOMEDCVMJQBHUXUSZZPWM");
    msg.timeout = 29648U;
    msg.contents.assign("GLLDHXPZGMOSRAXKIQPUZWHTIWSYAYLNNRQTKZJQSQOGKUSBKJLAZADQHVHJICUBURHQYKCITIEFYOINMYVOAVERNKVQJNMZUDPSXXRAWCBRRYDGEPNBDGXMLEBFZLZNEMJVWHZTCEKCTRUVCZWFVVXMYJTXSDLWIOHFOJOWMKOJOVAF");

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
    msg.setTimeStamp(0.9581661129932226);
    msg.setSource(23030U);
    msg.setSourceEntity(26U);
    msg.setDestination(20794U);
    msg.setDestinationEntity(228U);
    msg.seq = 3872125649U;
    msg.destination.assign("TBKIAYXZDFVTTRGHYPZPNHBWU");
    msg.timeout = 32069U;
    const signed char tmp_msg_0[] = {-3, 114, -53, -51, 108, 7, 115, -41, -106, -42, -103, -15, -64, 12, -125, -52, -13, 42, -75, 45, -35, 33, -42, -102, -60, -22, 29, -49, 55, 53, -121, -121, 1, -110, -117, -63, 104, 5, 18, -50, 21, 102, 78, 59, -25, 31, 80, 35, -127, 30, 106, 15, 77, 43, -116, -87, -56, 89, -27, -7, -115, -95, 102, -58, -49, -122, 62, 62, -110, -41, -46, -88, 8, 7, -82, 80, -122, -61, 85, -9, 43, -91, -106, -81, -105, 6, 82, 9, 5, -93, 35, 12, 118, 126, 124, 116, 100, -22, -42, 59, 16, 69, 18, 123, -1, -34, 61, -86, 58, -102, -29, -91, -128, -59, 41, -120, 74, -46, 13, -25, 40, -90, 98, -91, 29, 36, 109, 117, -68, 44, 89, -120, 98, 113, -120, 89, -126, 70, -60, 110, -18, -106, 23, 53, -65, 97, -36, -19, -29, -48, -91, 92, 81, 17, 35, 37, 105, 97, 35, 59, 40, 54, 4, 26, 116, -49, 11, 22, -128};
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
    msg.setTimeStamp(0.004301927622218371);
    msg.setSource(31831U);
    msg.setSourceEntity(199U);
    msg.setDestination(64453U);
    msg.setDestinationEntity(210U);
    msg.seq = 3958229572U;
    msg.destination.assign("XRPOJNHHJGEDTGWEQCWWFROWONQNMVGHKZCBRAQSSUCQOMFLBBGNBCMLUTMYYYSXRSSZEXQKWKADTFKQPDFUPUBBHEGKWJQVLHCMFPVETIUPZTALPGFBCISPKIHIDHWDYD");
    msg.timeout = 47241U;
    const signed char tmp_msg_0[] = {-126, 125, -83, -69, 58, -63, 25, 90, -64, -32, 12, -79, 53, 110, 20, -67, -11, -22, -25, -123, -103, 74, -83, -58, 10, 36, 95, 11, 90, 37, 105, -106, 26, 71, 53, 57, -28, -69, 100, -126, 70, 120, -8, 100, 15, 0, -103, -123, -33, -70, -81, -109, 95, 49, -34, 115, 86, 25, 101, -82, 115, 109, -98, 35, -8, 112, -27, 70, 35, 126, -104, -85, -126, -31, -34, -23, 6, -92, 110, -121, 44};
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
    msg.setTimeStamp(0.8235067999841877);
    msg.setSource(14481U);
    msg.setSourceEntity(158U);
    msg.setDestination(35497U);
    msg.setDestinationEntity(251U);
    msg.seq = 3426573309U;
    msg.destination.assign("BFBOXKAUFZSCHTUVCJHUIBCZBKFNGJIIWUEUNKURNDKYPFGRWZDQLCFDXUTBXULSWSALVGYJYNGFECZMVWHTWHNMGZURQRPHPYPWLGREZPXRDMAYXVJHYQORISSYGJOXOQSAOVAWPCIJPOEVDHTAVSJXABAMVOCCTDLQRBSDAXKLDZJKLJICVNZQKQWIHXTPEZIOKPWFELVOAENYBNPSMHEBZEMJQU");
    msg.timeout = 1553U;
    const signed char tmp_msg_0[] = {76, 107, -112, 27, 51, 29, -3, 90, 50, 43, -49, -19, -113, 0, 58, -103, 13, 121, 104, 38, -81, 87, -16, 105, 118, -20, 59, 64, -11, 25, -29, 38, 67, -4, -60, -50, -23, 30, -110, 35, -16, 74, -15, -67, 74, 44, -112, -61, 21, 22, -33, 100};
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
    msg.setTimeStamp(0.4681735598497633);
    msg.setSource(28770U);
    msg.setSourceEntity(34U);
    msg.setDestination(64816U);
    msg.setDestinationEntity(152U);
    msg.source.assign("HMXVKVWFWZBSHOETJSPYPFPQEENBURHEVBKIGVCLLNMUHRMT");
    const signed char tmp_msg_0[] = {36, -83, -105, -99, -101, -98, -36, 110, -48, -89, 2, -49, 59, -20, -116, -70, -58, 115, -68, 124, -104, -32, -120, -104, -9, 15, -23, -28, -95, -101, -97, 81, 126, -103, -111, 111, 24, -3, -107, -117, 1, -35, -91, -94, -93, -87, -71, -69, 30, 14, -24, 57, -110, -22, 30, -95, -81, 3, 55, 114, -14, -27, -80, 124, -50, -101, -27, 93, -123, -30, 66, -81, -27, -58, -125, 125, 43, -52, -111, 111, 65, 24, 115, -104, 59, -92, 93, -39, 78, -113, -22, -124, -83, -101, -114, -8, 97, 108, 43, -128, 35, -95, -17, 126, -123, -117, 73, -11, 91, -46, -122, -102, 27, -113, -15, 43, -1, -18, 50, 89, 122, -11, -74, 79, -39, 35, -37, 125, -38, -36, 6, 42, 119, 1, -10, -19, -35, -33, -35, 20, -87, 95, -42, 37};
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
    msg.setTimeStamp(0.7373078942086047);
    msg.setSource(49936U);
    msg.setSourceEntity(46U);
    msg.setDestination(12411U);
    msg.setDestinationEntity(152U);
    msg.source.assign("WKNPWLADXXUYDJFDHHBAANWTQEOXPKLMQHSJOMOZDWHTKEVPEUBNHZJQLZISIORXGVFPPBOJZWGGCGJARYTVMRRNACHEIPRXKFIITBVZJLBQEMPSEJYGUQCCURYQZDYEGEVYMDKLYMDUWYIUUBUSKACXHOFCIOXARJOSYHJNVKDVSCCPLGIRKPLTTVAPTOCFBFVGCNBQNZZXAGSRZNLKQNMZTWLMUMHXRKTWILQXBQEGJF");
    const signed char tmp_msg_0[] = {-113, -5, -76, 87, -51, 65, -98, 2, 113, -108, -23, -8, 24, -67, 32, 106, 95, 79, 23, 57, 126, 80, -14, -119, -110, 3, -87, -57, 80, 85, -105, -78, 22, 79, -8, 42, 82, 103, 98, 118, -49, 43, -47, 0, -23, 49, -79, 26, -83, -114, 54, 93, 110, 86, 100, -72, 8, 96, -10, -113, 10, 117, -62, -23, 76, -125, -54, 24, 1, -54, -61, 124, -42, 100, -119, -99, -41, 42, 46, -8, -90, -43, 42, 11, 64, -99, 6, 30, -80, -45, 73, 114, 15, -65, -93, -71, -96, -62, 41, -96, -28, -64, -61, -23, -107, -2, -65, 113, -119, 13, 45, -105, 107, 61, 73, -7, 47, 88, 17, 70, 108, -98, 109, -64, 106, -100, -41, -28, -104, -43, -6, 38, 0, -65, 20, -84, -53, 125, -105, 13, 45, 56, -99, -26, -107, 28, 32, -10, 51, 117, -44, -6, 43, 102, -57, 121, 25, 66, 103, 79, -104, -76, -64, 116, 24, 74, 72, -35, -48, -78, -15, 38, 118, 72, -10, 27, 86, 35, 109, -30, -64, 60, 120, -93, 23, 81, -34, 95, -84, -114, 50, -106, -46, 1, -3, 97, 110, 124, 4, 110, -85, -31, -99, -70, -2, -76, 41, -64, 55, -75, -82, -88, 10, -45, 19, -11, -69, -20, -90, -37, 77, 81, -76, -49, 98, -118, -11, 88, -76, -10, 0, 102, 82, 97, -54, -121, -52, 48, 47, 47, -23, -17, -125, -29, 29};
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
    msg.setTimeStamp(0.6527113320594907);
    msg.setSource(58726U);
    msg.setSourceEntity(80U);
    msg.setDestination(10246U);
    msg.setDestinationEntity(196U);
    msg.source.assign("MLKDJHZSWPVCZJIWHNUNQORQHCPTUOVWMBENTMHGDVXDMFHCLVWBFGUKTKKRSCYJDYBEUYGAIUHTZZANABAKNXNRPBJKQBSXHSXYNELEYJFPYVQSIQUJGXBDQSHFKJJRYOOODXMFPVXPTGRINVWRMZHUQGZPWADIXKGLOFYEJUTUDKMZIYZGLLGTACVLAEVVPWRBEHLATEXOTODCPMONZAMUKRSAIDGXR");
    const signed char tmp_msg_0[] = {-113, 2, 45, -48, 39, 112, -2, -112, -107, 114, 125, -114, 112, -104, 23, 31, 27};
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
    msg.setTimeStamp(0.648596136511189);
    msg.setSource(38605U);
    msg.setSourceEntity(76U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(70U);
    msg.seq = 3742749804U;
    msg.state = 105U;
    msg.error.assign("ACCMHSEKWTROUVARYOLCVEDXYQBPQYDVGNOPDYKPFFSIRDCOBQKUFMFKKTXTPUPZLBZGCXNACLZTBAYNMNJAZOPRDBJR");

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
    msg.setTimeStamp(0.42588061538472766);
    msg.setSource(15610U);
    msg.setSourceEntity(238U);
    msg.setDestination(44186U);
    msg.setDestinationEntity(203U);
    msg.seq = 2050556674U;
    msg.state = 62U;
    msg.error.assign("GVTNJKKLECJBQQBOKTHARESYCYJPEGWQNPQLRIYYYFGOLZJMYTOZ");

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
    msg.setTimeStamp(0.4178297324344781);
    msg.setSource(9775U);
    msg.setSourceEntity(9U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(8U);
    msg.seq = 1455675297U;
    msg.state = 65U;
    msg.error.assign("RCBZTFIIGBIZNHKQULOBZNVVVFASHLUGEJKDKTRSTFJDNNOMYCENDUGIDVDVBMEJEWPZQEMVYPQLXUDAYBXIWMVUESJCOCIMFUWBCPQPYHTSQCGJOTIABIZCLZXFGAAWPOYTHUJWXRVXTJXEQNACNVAULVIUDAKESFZFKHWQLRTRPMRSWSBHZQYJHPOZBX");

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
    msg.setTimeStamp(0.3199754630494742);
    msg.setSource(41009U);
    msg.setSourceEntity(174U);
    msg.setDestination(36721U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("HOKLUWLBPXMZCYGOUGQMRQVIBVBITQMEFUOBNVPRZDHTAITXZKHTNXXVAUDFDKDZCXSEPREDSNINQZQEYYAAVWHFMGEALVXFYTDVSMGPJKIKSNEQESJPMMRZVTHKNOLOFTEUNKMQKLQBJRXYCUOUNFSJLRHBBOYAGUWCWBRIJEIIJPDLSEGJMGBLYFNCWALJYIBKWHKWDHTQZUDOZTTAXCGYUROZPZCJGYOFGAWVPHHRWFPDXCWCSV");
    msg.text.assign("AWBJMEHXHJEVWSAALJYWNHSQQBRVTHITPTOHXCNZBNKATLTOVWXDPOSJRVPGBMKUNECEJUDGKOKLVCVJIBZLFMLMDQDYAYGRXEMHCAPWHIAOGYTTXUINENWWJUARYBDICFLXVUZJURDCYUSOEDOHHCZXBKXMEMPQJLHCRZFDMLUISBQGKIPTGVWZMAYUDWQEUQIOYKFGKRZSSVXR");

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
    msg.setTimeStamp(0.6810064854818978);
    msg.setSource(60302U);
    msg.setSourceEntity(24U);
    msg.setDestination(12913U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("WBLMANEPFBNWJJQYHSFXNRELOBAPLRODCYJZTWRSHTPW");
    msg.text.assign("EPPQLUJXVNXNPAGZBRDBDPDHCSORXLTKMCWEQQEAYVHBQMMWOAGXEFFSTWU");

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
    msg.setTimeStamp(0.9060758639769442);
    msg.setSource(16480U);
    msg.setSourceEntity(231U);
    msg.setDestination(44595U);
    msg.setDestinationEntity(237U);
    msg.origin.assign("ZSEPVTUJSLJFEQBQCLVVUOCBORIZPDWUCTINAQUAMXQOYFMPMMJPVCUSROLOLJOQHAAENFXTPTRSDHHNHLYXANGKTIZCZGXPAEFSMYKWHFEBTKUMBNGGTVQWZGXFRSLPKQPSCBRRIYKJGTCXKUKBWJWMVEAFXBFWBBIDLQNYCODJDORUDJVKMJYSAIZBRIIGEIOTKMAZ");
    msg.text.assign("NQSZWGUHTDXTROSWSJFWFXDHGODGQJVSSBUQNKDUSRAPRKGHZBZFBRBWJOLGLTRTUMC");

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
    msg.setTimeStamp(0.6946019189658513);
    msg.setSource(17335U);
    msg.setSourceEntity(129U);
    msg.setDestination(43814U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("XGGUWLMHKTPMQOERNCHHURFFABSZVKOWGSMIXFNBWGVMNMOWONFFIBHADAUPCMYTLSPIATHHTLZTWFGWYEHPRDRMENGEOXCLILQXXPGSKHOBKJNTDYNVZQKPCOILSPYJIAPEAGUYLOZXZZUXABJSBSUTCPKAYZQNJEJEFQYNXXRJJGKHQEUVFLIELDVYFUTCTOWBRNDBBXMRTRCZVQUDIGWDAZKVCCCPZIHJUVVYRJFRSDDMQ");
    msg.htime = 0.281537204052014;
    msg.lat = 0.09563280509842154;
    msg.lon = 0.12128218289307446;
    const signed char tmp_msg_0[] = {-104, 71, -65, -91, -113, -9, 106, -93, 105, -127, 73, 59, 21, -34, 88, 48, -15, 122, 118, 17, -41, -8, 81, -21, 37, -113, -26, -79, -72, 12, 25, -123, -105, -115, -48, -64, 27, -13, 14, 70, -105, -101, 75, -127, -103, -41};
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
    msg.setTimeStamp(0.5991664897289819);
    msg.setSource(44263U);
    msg.setSourceEntity(14U);
    msg.setDestination(51653U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("GCRBZDXVXFGPWIDMAXBDQRMTTOOQJCFPWTYFGZWDJJKEPCQHGMAPSUBDSSE");
    msg.htime = 0.7151549898462192;
    msg.lat = 0.7227886170017279;
    msg.lon = 0.531720705277703;
    const signed char tmp_msg_0[] = {-48, -29, 83, -8, -104, -103, 102, 44, -110, -52, -38, -5, 16, 38, 80, 79, 28, 36, -15, 71, -53, 62, -17, -89, 23, -56, -18, 93, 33, -35, -7, -14, 103, -43, -21, -86, -115, 49, -119, -81, 81, 27, 43, -40, 89, -49, -23, -21, -72, -48, 3, -76, 58, 39, -39, 60, 62, -65, -40, -88, -107, -13, 25, -49, 22, 71, -64, 85, -98, -98, 67, 95, -127, 2, 1, -45, -41, -122, 101, -27, -21, 76, 10, 31, -67, -51, 96, 45, -116, 23, -95, -65, -20, -55, -124, 72, -83, -55, -75, -11, -81, 102, -101, -122, -88, 45, 60, 68, 80, 4, -28, -30, 35, -111, -86, -61, -88, -105, -104, 18, 39, 39, 115, -34, -21, -56, -15, 107, 82, -104, 102, 102, -56, 122, 29, 83, 12, 98, 68, 79, -41, 55, 51, -32, -37, -42, -45, 96, 87, 116, 20, 61, -41, -63, -35, 83, -121, -113, -96, 110, -53, 86, 63, 2, -90, 113, 5, -4};
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
    msg.setTimeStamp(0.11722691551899533);
    msg.setSource(17676U);
    msg.setSourceEntity(109U);
    msg.setDestination(48074U);
    msg.setDestinationEntity(190U);
    msg.origin.assign("ZEDHEXWGJRWLHZKYYKABQCNNVZEMDUIHHBEWKGUVCWWLPVAEFBERYOQLFZGTZRDGXCPRMQPJPNJRATMJWNHBSFUFFXDTRKZVSGVXKWCCACBIKXYQMICNTRJLDYLBKOYDNGOEOYCUXDVIQTTXGGOFOLZELVIBSIFSRJVNMULPDSHKGPXLQUSHQZOMVPCJYAQINS");
    msg.htime = 0.4926551041780164;
    msg.lat = 0.03944812588954294;
    msg.lon = 0.3341717434415269;
    const signed char tmp_msg_0[] = {-39, 0, 125, 36, -35, 89, 16, 29, -51, -127, 120, -1, 64, -73, 117, 60, -102, -118, -103, 84, 115, -75, -118, -74, 62, 52, 3, 5, 18, -60, 57, -116, -127, -97, -11, -115, -30, 32, -105, 76, -127, -39, -80, -49, -50, 33, -46, 44, -95, 44, 63, -118, -3, 113, -19, 8, -71, -112, 68, -14, 68, -78, -60, 115, -123, -19, 97, -28, 95, -14, 78, 12, -74, -120, 11, -122, -93, 8, 119, 31, -31, -95, 0, 103, -17, 30, 37, -109, 91, -26, 95, -21, -84, -52, 97, 63, -28, 48, 20, -87, 9, -51, 13, -62, 84, -115, 95, -89, 2, 94, 78, 125, 125, 16, -87, -10, -54, 46, 93, -62, 21, 8, 7, 62, 103, -35, 27, -86, -31, -112, 13, -21, -9, 71, 117, 100, 25, 28, 30, 55, 76, 47, -30, 58, -28, -86, -110, -26, -49, -38, -68, -62, 109, 1, 22, 2, -128, -56, 75, -113, -21, -125, 19, -42, -23, 60, -4, 73, 78, 99, -10, 16, -79, -101, 0, -6, 115, 106, -39, -37, 69, -2, 66, 3, -123, 7, 52, -13, -64, -119, 60, -6, 11};
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
    msg.setTimeStamp(0.4900409931284391);
    msg.setSource(47990U);
    msg.setSourceEntity(27U);
    msg.setDestination(12240U);
    msg.setDestinationEntity(79U);
    msg.req_id = 37413U;
    msg.ttl = 61487U;
    msg.destination.assign("GTKOXBCNBBEOVQBSOGXXQRQALBSNEFCEJTYUYERKURHAKNPVAGXGFYJFCUWRBPSDFMRAQTXZGPUWVCRWPIFMHNDKLMBQJEXNGVJWWDTACMRBSIIKJSZKZGHORXTVAFMBQLEANJLITWJERVCAUIVKFPVWOOLTYHMPXMXFHZXLZHWNGLDFOYZGPTISSAZDYMVCYNCSGZIEVDDDH");
    const signed char tmp_msg_0[] = {73, -103, -123, -98, 102, -13, -107, 28, -76, 16, -75, -85, -32, -15, -18, -20, -18, -71, 20, 116, -41, -82, 108, -98, -101, -71, 123, -14, 63, 114, -1, 3, 49, -63, -1, -88, -28, -46, 107, 74, -124, 26, -126, -14, 94, 46, -79, -7, -27, -18, 105, 56, -87, -111, -17};
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
    msg.setTimeStamp(0.640624970592454);
    msg.setSource(21016U);
    msg.setSourceEntity(124U);
    msg.setDestination(59960U);
    msg.setDestinationEntity(176U);
    msg.req_id = 56562U;
    msg.ttl = 8590U;
    msg.destination.assign("DEHBINZWNJIELFQNZSFGQTPJILBZXYOVQMY");
    const signed char tmp_msg_0[] = {88, -121, -116, -26, 96, 27, -17, -20, -42, -79, 8, -83, -36, 0, 0, -54, 20, 113, 39, 91, 74, 90, -47, -75, -95, -77, 9, 52, -74, 91, -67, -86, 53, -9, -48, -7, 116, -38, -76, 110, -68, -28, 122, -128, 92, 112, -103, -123, -94, -128, -42, 16, -78, -30, 108, 30, 66, 87, -10, -71, 122, 66, -115, -127, 36, 30, -93, -32, -23, -18, -16, 86, -42, -1, -7, 95, 101, 115, 110, 33, -43, 61, -22, 92, 113, -83, -53, 83, 40, -51, 14, -93, -8, 99, 21, 119, 100, 52, -69, 81, 76, 38, 27, -48, 59, -109, 27, 54, -104, 84, -15, 125, -119, -53, -34, 69, 4, -116, 14, 112, 95, -9, -39, -26, -57, 68, -25, -28, 18, 44, -36, -86, 45, -18, 41, 60, 100, 82, -86, 16, -78, 97, 18, -97, -90, -55, -73, 113, 20, 2, 39, -95, 48, -28, -46, 114, -86, -99, -62, -24, 40, -16, -119, -44, 98, 118, -102, 25, -7, 42, 99, -98, -107, -48, -112, -46, 110, -10, 111, -17, 33, -53, 99, 68, 58, -119, 80, -48, 83, 103, 10, 17, -6, -36, -47, 32, 90, 26, -24, 60, -41, 52, -96, -17, 57, -60, -66, -1, -74, -3, 11, -11, -70, -78, -91, 87, 111, 120, -44, 76, 87, 2, 122, 16, 107, 43, -33, 107, 69, 111, 58, 51, 20, -68, -115, -117};
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
    msg.setTimeStamp(0.9473365044963862);
    msg.setSource(12146U);
    msg.setSourceEntity(209U);
    msg.setDestination(46590U);
    msg.setDestinationEntity(20U);
    msg.req_id = 19065U;
    msg.ttl = 32274U;
    msg.destination.assign("JDLXEIQLSDAGSLIGRAVKNZOXQIUJCVYJFXGPVTQDPZNNKTRENZIXVEMLPHXHPDYKINKJRCGZCOGJBRUVFPHWCJPTBCBAWFKTLNTDIDMJKUQGWENVQAIPEOSUYEHGXOCZ");
    const signed char tmp_msg_0[] = {-82, -59, -127, -14, -73, -114, 21, -4, 15, -26, -34, 38, -16, 54, 27, 19, -63, -51, 2, -33, 88, 28, -126, -8, -59, 18, -103, -109, 70, -89, -78, 76, 40, -117, -102, 40, 63, 44, -82, 98, 50, 61, 73, -87, -10, -13, 26, -61, 109, -10, 121, -52, 105, -78, -24, 17, 53};
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
    msg.setTimeStamp(0.8282452793680547);
    msg.setSource(33172U);
    msg.setSourceEntity(30U);
    msg.setDestination(43720U);
    msg.setDestinationEntity(98U);
    msg.req_id = 62640U;
    msg.status = 53U;
    msg.text.assign("HNZHGCKKSFWTARSIUZZAIUFPBBIOTJWSYZCARNTCFQBAFEHYNYSTDNLJBRVZUXPFVTLWODEK");

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
    msg.setTimeStamp(0.4165522173354824);
    msg.setSource(15830U);
    msg.setSourceEntity(172U);
    msg.setDestination(59582U);
    msg.setDestinationEntity(168U);
    msg.req_id = 10910U;
    msg.status = 89U;
    msg.text.assign("GYUCRRANOPXXFNGHOFXFWBQKTELOXNZUUIJYIPDAERENRTSKUOUZIQZPCFSLGSCCUNJUQIJPFFBRHYYUGBCLDOUACHJXWNOVZQGTWZMMJTASHTMELTQRQJRYFWMYBHLECBXCBGJLRCHLPKZYMONADRXNISRPOPSYQDZDPZMVHUSKF");

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
    msg.setTimeStamp(0.44157637954529705);
    msg.setSource(56504U);
    msg.setSourceEntity(18U);
    msg.setDestination(4671U);
    msg.setDestinationEntity(161U);
    msg.req_id = 48436U;
    msg.status = 71U;
    msg.text.assign("PIYFQBAHSRNEEAMZMOGUWYRDSDYWRCZCCXTRZLWMZVMOEXAITTOUZJJHNHSCHRJDQOGFFEHXZSTIJAIKRNIBKMTMDSYKEQZMDNFPXPJUPQUQXOULUGCVEPKNAWKUHSOWFPSRLZ");

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
    msg.setTimeStamp(0.9588513932004272);
    msg.setSource(37116U);
    msg.setSourceEntity(84U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("FPAIYNFNMICSVTUFKGQOVXJQNDGCVDM");
    msg.links = 1579367890U;

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
    msg.setTimeStamp(0.9625909514563804);
    msg.setSource(32460U);
    msg.setSourceEntity(149U);
    msg.setDestination(1296U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("ENAIBYVNKTXCNLSAWOXHXRUJFAJYYBOFDDPNPQMFXWKWYSOIWBBKDKXFQQQRFUSZAILSARBWVMHVLLNKTYTQTKCHEIXTJXAXAUBIQDZMJRGDFFGDWCUECKATUIDREHHUEEOINGPVTLUNYSGVPVHMRGYPBEWEOYJGUAMCKLJJRSCKYUDKGMSC");
    msg.links = 802897319U;

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
    msg.setTimeStamp(0.7752870983013936);
    msg.setSource(28061U);
    msg.setSourceEntity(185U);
    msg.setDestination(64125U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("BEDWMPHKWPABOJQONHORULRMOACBISGZZVLEVSSKVLRHCFHFFTDGUFJWLCVUYCIQTTPOPBXJWVCITVZXPLAYDPR");
    msg.links = 2388398739U;

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
    msg.setTimeStamp(0.9990859700432378);
    msg.setSource(35067U);
    msg.setSourceEntity(208U);
    msg.setDestination(12357U);
    msg.setDestinationEntity(157U);
    msg.groupname.assign("IZVNRAEJZEZWDKMNNTJWNTSIFQHIRWYEPGJBGJNXCNBVIOTNRXGALPVOBDXCWPVMYOTVXPPKEUFGCXLGQZHDHULRIUDHIJRPWWSREAMGKAFSINVREHALCJYNRYBASQYHHBUVOVKDQOTMZCNYJPMBFTSZEURBQZMXWKAMQXBMKEFSYGQZKUSEDPHMIFDTLSSLZHTDGCFCOXJICULCTWPUBBOUWSCXOLDOXQLAIDOHYURPEGGWKAYQVFKMJY");
    msg.action = 237U;
    msg.grouplist.assign("PXCYLOZVAJWRVETELQBORKIEWXXXLNVYHTSMRNQYCZJWNUYAIAOWXHMTXYPK");

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
    msg.setTimeStamp(0.7781642333999663);
    msg.setSource(46013U);
    msg.setSourceEntity(52U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(76U);
    msg.groupname.assign("PHJVMPQJFHHWGKBRYEUWMQHZPCMOXPERZFSIBOUGLZQWKFTPKFJUVZCVHEHUPZHWEYCSONOKYYDMOUBLHAVNUDICYSDWILEIKMWLDNTNSJXOXGGGTNVPPNFQSETGALWVMIBMDGQSLPQQKXOAQYUDXRDBUAJJHYSIXOCYDSXRNV");
    msg.action = 2U;
    msg.grouplist.assign("WUNCOOQPUNPEOIDJIKUHRIZ");

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
    msg.setTimeStamp(0.4211744045524004);
    msg.setSource(57861U);
    msg.setSourceEntity(46U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("PNDXVFGXCXVLTBEDORPDV");
    msg.action = 180U;
    msg.grouplist.assign("XUOAWOIISDADVHWCZLCOGVKZHZLSFURBJJIUBYUKSKSC");

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
    msg.setTimeStamp(0.03501326770574065);
    msg.setSource(5712U);
    msg.setSourceEntity(187U);
    msg.setDestination(37997U);
    msg.setDestinationEntity(89U);
    msg.value = 0.05086978080024673;
    msg.sys_src = 33470U;

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
    msg.setTimeStamp(0.365875107213372);
    msg.setSource(57321U);
    msg.setSourceEntity(72U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(68U);
    msg.value = 0.3876928751889748;
    msg.sys_src = 31148U;

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
    msg.setTimeStamp(0.23534281327566886);
    msg.setSource(58523U);
    msg.setSourceEntity(223U);
    msg.setDestination(35311U);
    msg.setDestinationEntity(166U);
    msg.value = 0.31938001062668664;
    msg.sys_src = 1735U;

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
    msg.setTimeStamp(0.9271751580096451);
    msg.setSource(52233U);
    msg.setSourceEntity(52U);
    msg.setDestination(22611U);
    msg.setDestinationEntity(93U);
    msg.value = 0.6113660187758458;
    msg.units = 112U;

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
    msg.setTimeStamp(0.518659550881591);
    msg.setSource(25172U);
    msg.setSourceEntity(25U);
    msg.setDestination(61410U);
    msg.setDestinationEntity(96U);
    msg.value = 0.4163345912252975;
    msg.units = 174U;

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
    msg.setTimeStamp(0.951277398123074);
    msg.setSource(50690U);
    msg.setSourceEntity(166U);
    msg.setDestination(20699U);
    msg.setDestinationEntity(23U);
    msg.value = 0.7610193334625357;
    msg.units = 34U;

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
    msg.setTimeStamp(0.6597645626495354);
    msg.setSource(30577U);
    msg.setSourceEntity(146U);
    msg.setDestination(31311U);
    msg.setDestinationEntity(1U);
    msg.base_lat = 0.5228514001210816;
    msg.base_lon = 0.3771443157922659;
    msg.base_time = 0.8909467171663167;

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
    msg.setTimeStamp(0.18416629604413304);
    msg.setSource(6954U);
    msg.setSourceEntity(151U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.9721838115583212;
    msg.base_lon = 0.3254108939041701;
    msg.base_time = 0.5639418400853785;

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
    msg.setTimeStamp(0.28051248920373395);
    msg.setSource(21646U);
    msg.setSourceEntity(168U);
    msg.setDestination(57204U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.5798070179101147;
    msg.base_lon = 0.6613296884558829;
    msg.base_time = 0.9511273549191079;

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
    msg.setTimeStamp(0.742281221776546);
    msg.setSource(46300U);
    msg.setSourceEntity(158U);
    msg.setDestination(8389U);
    msg.setDestinationEntity(141U);
    msg.base_lat = 0.815958421567578;
    msg.base_lon = 0.049646754877183064;
    msg.base_time = 0.9677418761996255;
    const signed char tmp_msg_0[] = {38, -104, 30, -22, -109, -39, 92, 121, 95, 66, 122, 19, 102, -55, -13, 104, -11, -24, -72, -14, 32, 69, -14, -23, 64, 40, 51, 48, 103, -34, 20, 87, 114, -114, -82, 74, -87, 59, -94, 31, 50, 11, -97, -109, 7, -52, -35, -91, -19, -116, -23, 5, -10, -40, -4, -51, -72, -108, 34, -96, -18, -60, -126, 106, -11, -66, -101, -67, 31, 28, 126, 77, 98, 123, 70, -17, -63, -27, 62, 29, 64, -111, -39, 126, 34, 49, -69, 103, 24, 71, -48, 76, 5, 12, 33, 72, -103, -81, -10, 34, 74, 106, 93, 124, 96, -81, -1, 126, -89, 0, -40, 35, 124, -120, -12, -115, -115, 62, 75, -71, 93, -85, 82, 5, -18, 95, -121, -75, -116, -73, -69, 18, -50, 61, -122, 58, -64, 122, -93, 120, -110, 34, -78, -10, -13, 86, 44, 123, 16, 51, 53, 16, 3, 114, 46, -25, 29, -59, 7, -104, -2, 40, 37, -100, 19, 114, -116, 39, -29, -32, 89, -41, 22, 10, 79, -60, -68, -94, 123, -24, 28, -22, -82, -122, -69, -99, 19, -58, 18, -125, -19, 14, 3, -114, -43, -70, -105, -45, -118, -85, 77, 76, 28, 40, -123, -76, 15, 106, 80, 105, 47, -42, -124, 79, 11, 14, 69, -116, -56, 83};
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
    msg.setTimeStamp(0.33631515363360276);
    msg.setSource(17528U);
    msg.setSourceEntity(228U);
    msg.setDestination(62745U);
    msg.setDestinationEntity(124U);
    msg.base_lat = 0.021210531108742048;
    msg.base_lon = 0.6508220199523611;
    msg.base_time = 0.13593566181898764;
    const signed char tmp_msg_0[] = {-80, -127, -109, 32, 49, 53, -59, 50, -112, -36, -118, -102, -122, 62, -96, -97, -4, -64, -89, -28, -13, 32, -50, 3, -25, 105, -63};
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
    msg.setTimeStamp(0.028941510016160743);
    msg.setSource(52198U);
    msg.setSourceEntity(97U);
    msg.setDestination(39177U);
    msg.setDestinationEntity(161U);
    msg.base_lat = 0.00949105577371323;
    msg.base_lon = 0.7007720319795124;
    msg.base_time = 0.9083334698815972;
    const signed char tmp_msg_0[] = {-27, 15, 56, -116, -114, -64, 63, 22, 89, -43, 113, -58, 17, 14, 111, 22, 74, 23, 81, -75, 38, 21, -55, -74, -116, -16, -54, 65, 120, -10, 90, 26, 48, 64, 114, 37, 50, -30, -57, -30, -38, -103, -98, 26, 48, 54, -60, 13, -82, 2, 30, 95, 115, -119, -16, 106, -22, -4, 33, 99, -8, 2, -24, -65, 91, -78, 105, -44, -105, -10, -91, 75, 32, 71, 24, 17, -44, -47, 95, -48, -31, 50, 46, -87, 112, 52, 98, 104, 6, 100, 54, -57, -68, -93, 93, -120, 104, -24, -70, -125, -75, -11, -14, 116, -18, -20, 123, -55, -126, 109, 40, 28, -91, 104, 117, 56, -106, 41, -37, -73, -18, -88, 7, 5, 52, -84, 28, 3, -98, 122, 32, 51, 30, 0, 19, -76, -90, 90, 46, 39, -33, -55, -53, 18, -126, -2, 83, -97, 19, 94, 72, 70, 91, 80, 66, 52, 118, 83, 71, -110, -11, -39, -19, 114, 31, 59, -125, 124, 115, -59, -29, -48, 62, -91, 16, -22, -69, -71, 25, 66, 3, -119, 21, -12, -39, -31, -57, 13, -1, 47, -78, 39, 5, -76, 63, 27, -114, 89, -23, -122, 35, 104, 34, 52, 29, -101, -43, -20, 5, 52, -54, -65, 60, -121, 103, 4, 121, -53, 7, -60, -98, 122, 119, -54, -86, 95, 118, -115, 21, -116, -89, -103, -48, 48, -79, 111, -113, 111, -33, -86};
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
    msg.setTimeStamp(0.17846922974693358);
    msg.setSource(20398U);
    msg.setSourceEntity(163U);
    msg.setDestination(16905U);
    msg.setDestinationEntity(241U);
    msg.sys_id = 44746U;
    msg.priority = -103;
    msg.x = 7974;
    msg.y = 11699;
    msg.z = -16155;
    msg.t = -16488;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 146U;
    tmp_msg_0.goal_id.assign("WXQUWJLNJSWURRFYBXUUXQBUHNYYANJXFMCQNLTOPQEKDFBQHOMPK");
    tmp_msg_0.goal_xml.assign("VPVRBKEMGRQFNVNAWDMMZFMYZCOUBPSTWHGSEDDOTQHEGTAFIUZLHOOFSAWHPOVILBFYXVALLTOQZOBCTXPXGYRLYUKRQLWMVZPGTURWKSGNJAIXOFBGCPKRYDIWUTXEGNWSNCWSCKJJJLHXIZEFGJOUEKTHLHLQQBSJRLS");
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
    msg.setTimeStamp(0.46899841439411094);
    msg.setSource(60261U);
    msg.setSourceEntity(240U);
    msg.setDestination(48203U);
    msg.setDestinationEntity(243U);
    msg.sys_id = 53126U;
    msg.priority = -84;
    msg.x = -24270;
    msg.y = 1314;
    msg.z = -16534;
    msg.t = 19422;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.5882829107711027;
    tmp_msg_0.x = 0.07731504723852889;
    tmp_msg_0.y = 0.749974944017781;
    tmp_msg_0.z = 0.6630587810345427;
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
    msg.setTimeStamp(0.8348596099153436);
    msg.setSource(33765U);
    msg.setSourceEntity(168U);
    msg.setDestination(1615U);
    msg.setDestinationEntity(193U);
    msg.sys_id = 51422U;
    msg.priority = -75;
    msg.x = 18807;
    msg.y = -2833;
    msg.z = -29447;
    msg.t = 28982;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.774615186427043;
    tmp_msg_0.lon = 0.9582401892429719;
    tmp_msg_0.z = 0.6164983645877279;
    tmp_msg_0.z_units = 217U;
    tmp_msg_0.speed = 0.003724577936012441;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.bearing = 0.5527010899300726;
    tmp_msg_0.cross_angle = 0.6471062696078521;
    tmp_msg_0.width = 0.24951154500938455;
    tmp_msg_0.length = 0.21998712815467103;
    tmp_msg_0.coff = 203U;
    tmp_msg_0.angaperture = 0.5489593377020405;
    tmp_msg_0.range = 50719U;
    tmp_msg_0.overlap = 161U;
    tmp_msg_0.flags = 219U;
    tmp_msg_0.custom.assign("PDAXSVITBHQOWTGCVTDMUFZITEUTZSGGYQAUYAUWGDMSIPKJNYMHEEQURNIFLPCHXSTUWAVUIYMCRCRVYEFIBDIIBTXQZWWKGEPHMNTVJREJGONDROEXWAXQUVFPRPKVKHFCOSSELNVQBJHOBGZEHNCGXQLTBFDXYJALUJBCMCDGUWZJQFOGDCEOLYCXSFPAKJSFHWMTVAYYOLDQZZPOJPSMZOJQBNFR");
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
    msg.setTimeStamp(0.7077266533011356);
    msg.setSource(55035U);
    msg.setSourceEntity(139U);
    msg.setDestination(8788U);
    msg.setDestinationEntity(229U);
    msg.req_id = 43635U;
    msg.type = 55U;
    msg.max_size = 12492U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.779762914453999;
    tmp_msg_0.base_lon = 0.540741543594836;
    tmp_msg_0.base_time = 0.906155875942879;
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
    msg.setTimeStamp(0.17293241501646284);
    msg.setSource(54837U);
    msg.setSourceEntity(167U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(171U);
    msg.req_id = 12756U;
    msg.type = 136U;
    msg.max_size = 42840U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7891326572669207;
    tmp_msg_0.base_lon = 0.4411295629561949;
    tmp_msg_0.base_time = 0.03884345352580221;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 2691U;
    tmp_tmp_msg_0_0.priority = -28;
    tmp_tmp_msg_0_0.x = 15686;
    tmp_tmp_msg_0_0.y = -29345;
    tmp_tmp_msg_0_0.z = 8068;
    tmp_tmp_msg_0_0.t = -31126;
    IMC::TransmissionRequest tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 48325U;
    tmp_tmp_tmp_msg_0_0_0.comm_mean = 199U;
    tmp_tmp_tmp_msg_0_0_0.destination.assign("WWBVWCHYSONJUHKFMJQUFOQECRVSKGXMPMQZZRKJOYPUKLBIPXVNVSLUXFECBPVYTNGXGQKBAEMCGXQPHOJUHWFZEYVKTLTWODXSSLNZCLYYJPXUSTVWDIOKQTTERFGUDDGAILRABFTPWFCQHBSZPUZJTHFDQCXIKEKIYYRICNTEHJZOAQWDNSANBNLVGAMLZMVNIRCXEOBERDADFIWLDOWCGEMRVDPIUAPSRXJYAMLSNOAGK");
    tmp_tmp_tmp_msg_0_0_0.deadline = 0.9767054525183123;
    tmp_tmp_tmp_msg_0_0_0.range = 0.19407888116794136;
    tmp_tmp_tmp_msg_0_0_0.data_mode = 93U;
    IMC::Phycocyanin tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.8965438733983404;
    tmp_tmp_tmp_msg_0_0_0.msg_data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.txt_data.assign("AIUFTIUDPNQXHBRULMKVVEAOWOHKORRTGJSVFAMFZSVGPBUPJCFYWQVHONSSHWIJXODWSYRBHRGQAMNWOOMEYLCDEFDXUDIUESUREOMBNTGCBNXGKQYVADJJTECDHPBLFKPKEUUCHHLBACJXZPPFWJJQILKZHALMDSQMZGWLF");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_1[] = {-13, 96, 39, 23, -12, 110, -56, 92, -26, -90, 121, -101, 99, 49, -116, -26, -122, 7, -35, 71, -71, -43, -41, -121, 7, -108, 31, 92, -76, -11, -88, -34, -108, -124, 57, 114, -107, 82, 28, 11, -118, -120, -125, 117, 110, -88, 98, 47, 68, 101, -106, 124, 120, 44, -64, -101, 6, -38, -56, 58, 14, -79, 120, -123, -109, 42, 30, -68, 116, 123, -32, 107, 15, 29, 100, 72, 86, 93, -3, -53, 60, 85, 67, -62, 15, 16, 1, 45, -45, 78, 59, -44, -69, 73, 46, -79, 31, -19, 33, -34, -59, 103, 54, 81, -91, -44, 104, 114, -107, 12, -97, -30, -121, -45, 119, 15, -69, -59, 41, 115, -27, 0, 3, -19, -88, 58, 105, -2, -63, 49, 21, -97, -4, 101, 98, 57, 29, -127, 17, -13, 107, 118, 10};
    tmp_tmp_tmp_msg_0_0_0.raw_data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_1, tmp_tmp_tmp_tmp_msg_0_0_0_1 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_1));
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
    msg.setTimeStamp(0.04168477308378282);
    msg.setSource(37626U);
    msg.setSourceEntity(177U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(206U);
    msg.req_id = 11125U;
    msg.type = 237U;
    msg.max_size = 46996U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.13313131741472106;
    tmp_msg_0.base_lon = 0.38552960978350137;
    tmp_msg_0.base_time = 0.3762362201830439;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27340U;
    tmp_tmp_msg_0_0.priority = 51;
    tmp_tmp_msg_0_0.x = 27633;
    tmp_tmp_msg_0_0.y = -20279;
    tmp_tmp_msg_0_0.z = -1200;
    tmp_tmp_msg_0_0.t = -485;
    IMC::TextMessage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.origin.assign("DDQPHLTTSRFYKALBNVFAJHEQBCRLAYHDEFGRJYKWCIKNWAKCAZUTMBWQHNLSEEKNUWIMMMUESRXXTKPVYUOUGLXSSODOLBZLAGSAGQSZNOLZXDEXDCGNBZIPDYMFGTCJJBP");
    tmp_tmp_tmp_msg_0_0_0.text.assign("TUUNBPQEXVDPGJMECANIPOOFHMZXMYGHMBFLYNGCFGJPKLWQJHQDSPRSZWBYDOELAMTOSLDPJNXSARZTCHVTUAWBMJTSFZOKAJXGZCAOWEVQZXINBXPHEMYNIKQCKVJOPJNSAZFHIYLRYDKITVRGCLAFVLCVYQTAQGK");
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
    msg.setTimeStamp(0.5662311314808853);
    msg.setSource(50313U);
    msg.setSourceEntity(89U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(245U);
    msg.original_source = 35549U;
    msg.destination = 24977U;
    msg.timeout = 0.7597782140178655;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("JENULOSFHRRUEGKNGSWWBTQPWJIJJGHVKWDYCZDIQVUGKQLEDPODZIBVBCPTGAHUQCYCUSIAIDCRPFPMEKANPTKTVHYRZONATZZLVZEABBAQOWJPDOFXSZOOUPSREKTLCMWULAJIRWFXYQBOVTANJVTISXMNHDQFXGMCGYZWXDUXQMUCPJGNXVEBKXAOHBRMGRXVKZMDQFSURE");
    tmp_msg_0.action = 25U;
    tmp_msg_0.grouplist.assign("CVODXWTTRMGGVTBECLRYDZLYYBIASGADNBJBKGHQBFPEKLCXXDWRAGDEMBDZEROHYCUOVCIQVZONMOSYLORZKTVJAXPZOUUMWUPHTEUNYQWHNREEGVQKQZXSLWYBBKUPWLENJMJQPQSVJSPLKFXLPSGVDGOAYHXUHPSMCZEKCCRYPJMJJYMXHZNTFAQSUDIHWJGIFXRTHXJBNILANCVZ");
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
    msg.setTimeStamp(0.7614862491539867);
    msg.setSource(43255U);
    msg.setSourceEntity(23U);
    msg.setDestination(3857U);
    msg.setDestinationEntity(151U);
    msg.original_source = 35473U;
    msg.destination = 44180U;
    msg.timeout = 0.2109381143394281;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.8071491235747986);
    msg.setSource(57321U);
    msg.setSourceEntity(240U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(85U);
    msg.original_source = 25698U;
    msg.destination = 52208U;
    msg.timeout = 0.9093501496558849;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.3175198134102145;
    tmp_msg_0.v = 0.867269810652089;
    tmp_msg_0.w = 0.014934181423899573;
    tmp_msg_0.p = 0.6859265812900395;
    tmp_msg_0.q = 0.5644852827783408;
    tmp_msg_0.r = 0.37050624794137177;
    tmp_msg_0.flags = 10U;
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
    msg.setTimeStamp(0.9960315825899386);
    msg.setSource(2254U);
    msg.setSourceEntity(117U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(185U);
    msg.type = 172U;
    msg.comm_interface = 20064U;
    msg.model = 65414U;
    msg.list.assign("ADMZOSFEUCPGCWCYICPXNPQWODSHRWPVVOMYTULGHKNEFHPUYCGUJIHYCTAMQZZOBFEWGUKIYKIALXZQHYNLAHYXDPMRBLRENFFYKFHNPJBZLJIODJJRIRIDQRJBXVZAAUXBOZWOGKGZUYVNQNOSPNSCTESNTEMRVEQGXCFAVRBVDBJKWOMYKKHFMSQKDVMCUSLUZOQSBGCLEIJNXTESPMAIJGDIVXJQVTDHBTFM");

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
    msg.setTimeStamp(0.037212134549949205);
    msg.setSource(23200U);
    msg.setSourceEntity(221U);
    msg.setDestination(14521U);
    msg.setDestinationEntity(75U);
    msg.type = 206U;
    msg.comm_interface = 5572U;
    msg.model = 10608U;
    msg.list.assign("SEERKPFSLMQODCYMLHZJUAIPNBPVMLPBEXARUDAKTQNRUDVNWXHEUBNESWZOVXYXOCHUKAGNPGSMLZJNXBXFJGIWXHQFBFTGUJBRMJOEVCIKBBIFVIITQPUDWESVWXCFGWOJMRQRZWDSTRALCQETTZNODVOAEYSKSXNHKQJYWLDMBALKXKDWHVVYHLRCYKKGCGWYPGAFNOZQJCDHUHFNSRVMQZMRTEOZUYCBFZQTYZAPLIP");

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
    msg.setTimeStamp(0.8278881869680816);
    msg.setSource(1319U);
    msg.setSourceEntity(221U);
    msg.setDestination(42850U);
    msg.setDestinationEntity(188U);
    msg.type = 91U;
    msg.comm_interface = 47367U;
    msg.model = 16825U;
    msg.list.assign("PKIAUTNJRKPJMYMFRGWWEBLLMXQZGAROMWQWYKDYORHJMKWLJKIPDNRSNHMWBOBRVNHOJNSVHRQCRKSUGFQUXXGO");

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
    msg.setTimeStamp(0.7125340021601042);
    msg.setSource(60038U);
    msg.setSourceEntity(146U);
    msg.setDestination(24603U);
    msg.setDestinationEntity(81U);
    msg.type = 31U;
    msg.req_id = 475982464U;
    msg.ttl = 57568U;
    msg.code = 46U;
    msg.destination.assign("OONGKDNXFMYGQCUMLBITJPORWASXRELYKJZPUGBXTP");
    msg.source.assign("SKLQGPOGOMNXKSZJSXOJCIZRQBZPQVFARSHBNC");
    msg.acknowledge = 9U;
    msg.status = 241U;
    const signed char tmp_msg_0[] = {-59, -50, -10, -4, -68, 70, -62, -6, 2, -20, 120, -127, 2, -2, 23, -51, -2, 122, -64, 48, -117, 67, 34, -94, 18, 12, 45, 25, -21, 41, 80, 25, 43, -99, -97, -109, -4, -43, 70, 80, 25, 42, -8, -50, -42, 65, 35, -15, -112, 96, 117, 71, 0, 96, 116, 9, -67, 123, -106, 37, -98, 64, -65, -31, -80, -116, 77, 113, -86, 107, 24, 48, -43, -40, -46, -82, -52, -104, 104, 78, -24, -74, -36, 4, -106, 34, -54, -7, -111, 13, 106, -122, 93, 99, 99, -85, 17, 9, -43, -66, 78, -1, -101, 8, -4, -25, 116, 37, 91, -19, 113, -96, -53, 114, 102, 33, 63, 21, -106, -126, 6, 56, 79, 36, 105, 90, 63, 12, 40, -117, -127, 103, -68, -27, -17, -13, 122, -32, -52, 123, 124, 39, -51, -115, -70, 16, 54, 48, 48, -2, 45, -27, 25, -105, -66, 49, 95, 45, 109, -78, 16, 79, -100, 88, -59, 82, 32, -87, -6, -43, 87, -33, -18, -86, -80, -70, -110, 101, 123, -55, 74, -66, 87, -19, 33, -27, -90, 41, -121, 122, 48, -45, 52, 119, -8, -37, -76, 52, 36, -75, 26, -38, -1, 50, 101, -13, 18, 40, 39, 126, -107, -27, -70, -102, 114, -17, 124, 13, 56, -85, 74, 56, 29, 4, 36, 49, -74, 68, 95, 6, 91, -125, 93, 76, -123, -64, 88, 72, 28, -107, -72, -34, 76, 20, -35, -93, 48, 42, -84, 14, 16, 18};
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
    msg.setTimeStamp(0.45218904692742046);
    msg.setSource(11904U);
    msg.setSourceEntity(45U);
    msg.setDestination(23988U);
    msg.setDestinationEntity(58U);
    msg.type = 22U;
    msg.req_id = 3852242088U;
    msg.ttl = 61446U;
    msg.code = 204U;
    msg.destination.assign("UZRAMAPMLQCYEOWPGYJRAYHUDFTCUTKNAFNIKMRBGWPLBJESLRPBKBPDHESCXGZWWOLWPLDPDLOINOBIYBROZKKM");
    msg.source.assign("BHOSUONRDTECTEBAKIECKDZWUFYYOLCUGAJJWSZAQJJLGLYWT");
    msg.acknowledge = 15U;
    msg.status = 220U;
    const signed char tmp_msg_0[] = {-109, 70, -73, -53, 61, -86, 0, -48, 43, -26, 19, -78, 86, -56, -106, -18, -60, -51, 113, -69, 69, -31, 5, 77, -36, -56, 41, 20, 54, -65, 118, 98, 63, -72, 96, 31, 61, -73, -41, 49, 107, -74, 81, 99, 44, -20, -38, -35, 126, 43, 97, 110, 59, -105, 8, 26, 126, 12, -58, -112, -53, 80, 106, -80, -82, 26, -128, -42, -82, 40, 83, -115, 5, -45, 108, 55, -61, -19, 97, 123, 54, -21, -86, -54, 30, -98, 67, 51, 10, -72, 81, -65, 20, -7, -109, 65, -12, 38, -101, 123, 72, 90, -86, 33, -120, -42, 110, -104, 66, -67, 54, -103, -12, 104, 110, 98, -75, 67, -111, 93, 67, 66, -19, 45, -46, -124, 44, -3, -84, -16, 41, -30, 44, -39, -49, 47, -101, 83, -66, -10, 64, 114, 121, 59, -1, -90, -100, -66, 29, 60, -58, 79, 42, -64, -83, -80, -3, 122, -36, 37, -51, -6, 38, -69, 19, 25, 118, -68, 11, 112, 22, -51, 48, -103, 35, 27, 14, -79, -25, -1, 52, 37, -120, 126, 15, 99, 102, 91, 70, -23, 19, -113, 79, -34, -54, 13, -48, -89, 108, -95, -50, -23, 27, -117, -104, 77, -119, 3, -124, -2, -33, 62, -5, -13, 9, 83, -88, 71, -81, -47, -90, -124, -10, -95, -113, -65, 67, -69, 63, 26, 28, -36, -63, -85, -65, -7, 78, -107, 65, 79, -102, 45, 73, -27, 25, -73, -66, -52, 63, 123, -4};
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
    msg.setTimeStamp(0.03597008209257413);
    msg.setSource(64164U);
    msg.setSourceEntity(120U);
    msg.setDestination(36393U);
    msg.setDestinationEntity(124U);
    msg.type = 60U;
    msg.req_id = 3032167460U;
    msg.ttl = 63944U;
    msg.code = 164U;
    msg.destination.assign("MGPFZCHUBGMXKCNITXWITFXTKVUQGWCPUTBMNSFQODHHKUVDKWSEZALLFJUBISNLDPMWJNXNHNFMLWGQQOJAZYYYCWQRZSOIBDLDOZFSOYSXCAYGSTHEQGHUETBDKIUPVNBCMDXQTYHDHBGOFVLXSKMIEVINF");
    msg.source.assign("RMOOYEIEMSJRNIPRSIYPBKXTDKPNXBAZMWXLVOVCWWCDXDCVURSEFLWCNPVXGOLLGHSIBJMNJGGBKWVPYTFMIDGUREQLYHOLDPPPOHNVFATLNJBE");
    msg.acknowledge = 190U;
    msg.status = 89U;
    const signed char tmp_msg_0[] = {60, 105, 17, -13, 81, 57, 48, -11, 81, 104, -11, 30, 15, 5, 0, 56, -122, -45, 43, -27, -16, -116, -65, 61, -28, -16, 31, 81, -7, 115, -50, -90, 14, -48, 11, 8, 100, 68, -49, -90, -51, -95, -22, 94, 93, -109, -40, 101, -102, -113, 14, 54, -61, -126, 52, -48, -55, -41, 59, -75, -119, 89, -63, 1, -15};
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
    msg.setTimeStamp(0.8347121715427694);
    msg.setSource(48103U);
    msg.setSourceEntity(46U);
    msg.setDestination(6705U);
    msg.setDestinationEntity(233U);
    msg.id = 47U;
    msg.range = 0.8251950930409674;

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
    msg.setTimeStamp(0.4140854570123944);
    msg.setSource(16270U);
    msg.setSourceEntity(4U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(236U);
    msg.id = 134U;
    msg.range = 0.4464023031685048;

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
    msg.setTimeStamp(0.4338314344649833);
    msg.setSource(49566U);
    msg.setSourceEntity(112U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(16U);
    msg.id = 120U;
    msg.range = 0.940884962878765;

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
    msg.setTimeStamp(0.14947644588772724);
    msg.setSource(54057U);
    msg.setSourceEntity(161U);
    msg.setDestination(2310U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("KQJRYKJFNSGBFWKTPCHYARBSBYOBJRVSKBTMYRNUD");
    msg.lat = 0.8987747063198617;
    msg.lon = 0.17894626304519967;
    msg.depth = 0.917293502107476;
    msg.query_channel = 221U;
    msg.reply_channel = 67U;
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
    msg.setTimeStamp(0.5620841517422496);
    msg.setSource(24367U);
    msg.setSourceEntity(29U);
    msg.setDestination(34056U);
    msg.setDestinationEntity(71U);
    msg.beacon.assign("PWRLFALYQOSPPTYBMGAWVPF");
    msg.lat = 0.7592812267342478;
    msg.lon = 0.3220056572019713;
    msg.depth = 0.9964789276719047;
    msg.query_channel = 29U;
    msg.reply_channel = 164U;
    msg.transponder_delay = 2U;

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
    msg.setTimeStamp(0.13180245633025478);
    msg.setSource(1015U);
    msg.setSourceEntity(154U);
    msg.setDestination(2289U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("KHEGKBVNKSHMTDFCDUCCJNEVYRCUYQMFAYZLFYOXLFEOZDANOSADHIBZOWRRBRSYJXVBMREETQDJWQJHXIAPIDGXYNUDNORTXUMVIZVPGWXHYILNQBRBOJCILQXFTUPWIQGHFFKGCPZLWESDFWNAMMKUQCTAJSEMUSPMKVNHMTTOKIOCJTQTFUPEVVAQDBD");
    msg.lat = 0.5544777573271141;
    msg.lon = 0.7009812119988323;
    msg.depth = 0.85024051007796;
    msg.query_channel = 1U;
    msg.reply_channel = 113U;
    msg.transponder_delay = 128U;

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
    msg.setTimeStamp(0.3057897647344542);
    msg.setSource(60448U);
    msg.setSourceEntity(23U);
    msg.setDestination(58824U);
    msg.setDestinationEntity(79U);
    msg.op = 59U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LMHJVGMBRSCTXUMDBANFCLXIXNKAZQMTJQIJCM");
    tmp_msg_0.lat = 0.4291857655690726;
    tmp_msg_0.lon = 0.1096938416462977;
    tmp_msg_0.depth = 0.1259407910279432;
    tmp_msg_0.query_channel = 208U;
    tmp_msg_0.reply_channel = 252U;
    tmp_msg_0.transponder_delay = 186U;
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
    msg.setTimeStamp(0.060698391026634435);
    msg.setSource(24571U);
    msg.setSourceEntity(124U);
    msg.setDestination(26423U);
    msg.setDestinationEntity(180U);
    msg.op = 208U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SPOPRWAYZUYAJYQPGCIKSHPAXOIFVROZSCANPNVSVCZVDMLKYIZDGMUQLJFOTELIFGXMRUGNUTJBTXVHHRAQDPWFSZKAYMEXIBADWOWCMRKXJRJUYNWNDWCYJKVMUCJRPZITO");
    tmp_msg_0.lat = 0.026119998854838733;
    tmp_msg_0.lon = 0.44617127128310174;
    tmp_msg_0.depth = 0.5712692737100478;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 32U;
    tmp_msg_0.transponder_delay = 112U;
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
    msg.setTimeStamp(0.31237144210190537);
    msg.setSource(18987U);
    msg.setSourceEntity(224U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(166U);
    msg.op = 156U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JRCQSODINQJVYRGXGRMTNABEYTBSFPVFEJACGEWODDCKKXCPHDMMLWUJLSQWHRWRPORTIAKLLOKZASMWBUARUEQODFMANTKOGZQABTZGRDTTVLXHZURBANNHNWS");
    tmp_msg_0.lat = 0.15490787786523497;
    tmp_msg_0.lon = 0.8616247793685035;
    tmp_msg_0.depth = 0.40377359675891056;
    tmp_msg_0.query_channel = 65U;
    tmp_msg_0.reply_channel = 208U;
    tmp_msg_0.transponder_delay = 21U;
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
    msg.setTimeStamp(0.8491325387536065);
    msg.setSource(59174U);
    msg.setSourceEntity(212U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(88U);
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.6217097168323177;
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
    msg.setTimeStamp(0.7534737800529744);
    msg.setSource(39625U);
    msg.setSourceEntity(23U);
    msg.setDestination(55020U);
    msg.setDestinationEntity(51U);
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.740658318817918;
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
    msg.setTimeStamp(0.04727958638519647);
    msg.setSource(31615U);
    msg.setSourceEntity(156U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(100U);
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 5U;
    tmp_msg_0.speed_min = 0.25835625212095026;
    tmp_msg_0.speed_max = 0.28720287115625165;
    tmp_msg_0.long_accel = 0.7705014927528607;
    tmp_msg_0.alt_max_msl = 0.9926673404799876;
    tmp_msg_0.dive_fraction_max = 0.4186122566041224;
    tmp_msg_0.climb_fraction_max = 0.8813677724470993;
    tmp_msg_0.bank_max = 0.03090338782077673;
    tmp_msg_0.p_max = 0.8937981796900523;
    tmp_msg_0.pitch_min = 0.14733005554157486;
    tmp_msg_0.pitch_max = 0.13046127350123604;
    tmp_msg_0.q_max = 0.9573204876332035;
    tmp_msg_0.g_min = 0.8744934068267688;
    tmp_msg_0.g_max = 0.9943346054161383;
    tmp_msg_0.g_lat_max = 0.8425470895293715;
    tmp_msg_0.rpm_min = 0.10967344841369808;
    tmp_msg_0.rpm_max = 0.11727008408666206;
    tmp_msg_0.rpm_rate_max = 0.5066473755213281;
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
    msg.setTimeStamp(0.8965286422720383);
    msg.setSource(32892U);
    msg.setSourceEntity(245U);
    msg.setDestination(10670U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.679402565032625;
    msg.lon = 0.09884547885884443;
    msg.depth = 0.4008233188078012;
    msg.sentence.assign("TFZUMCIDCISOUDTSHAHPZLBDXUREPHLUNRTUTXZZHDVLMHOMXCMCQZOOTKQOJALCCUMPBJYQFXWWZPBRENGRTKLPFFTWKHKSEAOAINHQAXSVMJIGPASGUYQVOENB");
    msg.txtime = 0.922083356065531;
    msg.modem_type.assign("VSPNCUPXFLCGIERCOCEJLPTDYBENCCJHVSJDAGSZQGGIWBVYRIHCTPJAOKSWIAZDBKTVWKZQTRXFDHYXREPKJOBGDBPLMWLAXODAXKFTMVDVLFNMONJZNUUZYYQJPBAKANTHIKTBHMONRFKOWISSHRUDEZNOQMHGUCEUYPZQXSMTEEIAVELQUCVAXQFPOXAXIYKPJQFGMWUYRTMSLEBCMBVISUFRZHYBQWJKHW");
    msg.sys_src.assign("KGTELIOQXUACRMJTNEFCHVAYXVGPJBRMYIBYJYKZWVDIHYTQCRVFNF");
    msg.seq = 35565U;
    msg.sys_dst.assign("KZWVZVNFTUAWXRREPYRKEWEWENIAQIJMRBGDTMIKGQZMILRCUSHQPXCBULYVJEDAMRLZEJFLKSOLCEFCNKHXHBGXISBVFRVXXAUSYQQNGLMMJESMNCFOFTDKVQW");
    msg.flags = 133U;
    const signed char tmp_msg_0[] = {77, 0, -93, 46, 13, 82, -98, 72, 105, 26, 43, 81, 25, 3, -81, -30, 115, -97, -115, -28, -58, -107, 122, -27, 43, -102, -95, 104, 105, -127, -71, 87, 26, 20, 79, 26, 68, -81, 32, -123, 51, -23, -126, -29, 55, -60, -78, -21, -87, 21, 81, 119, 56, -66, -39, 19, -17, 27, -7, 37, -109, 114, -36, -39, -128, 67};
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
    msg.setTimeStamp(0.6053533700849892);
    msg.setSource(47728U);
    msg.setSourceEntity(107U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.28271301038272967;
    msg.lon = 0.7556453839417616;
    msg.depth = 0.009996127539471988;
    msg.sentence.assign("MVNHLHOMRVPWEHGCJNMFMHGPHQUNPGIKSTKAFGULSEDFJINDVCILBLZZIGGTKVMQAGAXTUBVCQWQPHWIXUERIWOXCBLJRMCFIYSTROMAOXEVEYBOSLPBXYAJOQT");
    msg.txtime = 0.904450543861536;
    msg.modem_type.assign("BYLUKMEHUSRIGPTGLIEWXFJUSHBXBLJSVODFKBCLYMFEVZLCPTBCUCR");
    msg.sys_src.assign("JLOLPCQCQDAFXHGVGJGEUDDDCFMJWQAUFOBLWYISTCOVXGPNLGUDVGIOGGBXTIRJFFUTCXAHZCIAEQVTETMHAEMLOWDMKENKERKZVHJPKIWNMASUIHUHIMYRBOTBMOWAMRPJZEFVCHTXYNNPUPXYSWVRSLUTTEVORGBYSSSUZRFZUDGENVDWWFD");
    msg.seq = 51488U;
    msg.sys_dst.assign("VTFGMOAXMFTHPJDEVCSTBQNZTKWSFKWUHUXHIALMQETYRGYVONOGDGJEGLTHDVDVDBSRBQGPCWNCSKIGSQQTDJQGQXBRZYSORSWKPHLRXFEHRPIPBFIFUHVOJAHVAPXLUZRRTAKYZIRBQKDOQUNBMPZIVCCYCCNAFDMNOGUSWQLIXHIXFSWYUMNLWEMY");
    msg.flags = 129U;
    const signed char tmp_msg_0[] = {-121, 38, -49, -5, 79, -69, 107, -50, 37, -25, 75, -51, 73, -56, 83, -103, -119, 78, -22, -53, -54, -116, 59, 122, 3, -99, -50, -123, 112, -18, -106, -115, -4, 55, -9, 41, 105, 103, -117, 99, 111, -19, -117, -19, -83, -17, 125, -120, -58, 29, 32, -56};
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
    msg.setTimeStamp(0.8732563600943991);
    msg.setSource(55353U);
    msg.setSourceEntity(226U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.13955546677407615;
    msg.lon = 0.8508011737097997;
    msg.depth = 0.6759577184754084;
    msg.sentence.assign("YSTGLCVXOOYZUGPOBLNCVMUOTYBPKQDQIJXNSEWWXKCMGYDPCEVFZIGBIHZYQFRQKCTGZJWAFEGRCEUTCWEBPNCUGQKTTYLQLRIMDIVWPUCMRUGXKIPUDDKYKLBNSAHDQNUJLTEXTRVRGBZAVTYKLEDBSZRTNWHPMAAFDSDIZRACEHJOUHFPOUBNGWWVAHHMAFAOOISZJOSVIZHPLJJMHNDXLXVSJHFLMEYFSKASORIXPZBJWBNQJVX");
    msg.txtime = 0.6643393023544516;
    msg.modem_type.assign("ZLHNAEWDRVSBKYRRHDIEGMPXXTHZOOJMYGYBGB");
    msg.sys_src.assign("GYNCLOTFTBXGVPKSPQOTDDUYDJGLBZYMEPEWNDTSMOXKDZAYNGRLFQUXITLBCIX");
    msg.seq = 39245U;
    msg.sys_dst.assign("WEAISDHKFCBIWBAWSECVYRPTQPICWEECJOFUTYEDQNDYKNMHBGPVVLHZZSGYDLOZKVEIJAIRRYVZNAZOUUWDOUTANWYAQFWQMBGSHNLHGAGPMXJRTLDZKTBS");
    msg.flags = 227U;
    const signed char tmp_msg_0[] = {34, 68, -111, 12, -13, 28, 93, 110, 68, 57, -55, -73, 112, -98, -39, -102, -94, -42, -87, 88, -41, 96, -41, 98, -37, 105, 1, 69, 101};
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
    msg.setTimeStamp(0.1489388880696224);
    msg.setSource(62312U);
    msg.setSourceEntity(76U);
    msg.setDestination(61200U);
    msg.setDestinationEntity(145U);
    msg.op = 105U;
    msg.system.assign("BVOZWYLNJLDFORGHVMTCYKLWATLQNUJOZKIKYYDNCQEQCVTJAYIHMPPDIBGFKRNSLJJNXPNFSCZXESQIPNEKLURDKJPEIRDDAIQULVNAZIGKHUOHQVIMAT");
    msg.range = 0.8205051527233234;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18229U;
    tmp_msg_0.priority = 60;
    tmp_msg_0.x = -15094;
    tmp_msg_0.y = 16976;
    tmp_msg_0.z = 36;
    tmp_msg_0.t = 24634;
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 19685U;
    tmp_tmp_msg_0_0.lat = 0.2569761127706973;
    tmp_tmp_msg_0_0.lon = 0.9132730766295568;
    tmp_tmp_msg_0_0.z = 0.4527696115987464;
    tmp_tmp_msg_0_0.z_units = 124U;
    tmp_tmp_msg_0_0.amplitude = 0.45520314055309197;
    tmp_tmp_msg_0_0.pitch = 0.274163650728655;
    tmp_tmp_msg_0_0.speed = 0.24867080119939078;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_tmp_msg_0_0.custom.assign("SJDTJBEZMTQUNGROEUSWFFIULEPXTVKYBTWLQHAESRSZARUNMUFRXAZRCEMLOYWWCHNSRKNHAXQIDGOHDCTXKNKXJJGBDLQTAWCEDGOZJFVRBPEHSMGCVVXFRGTPNDGNWWMSKPHIMULUOOBPEQQZWIUHYHMPNVIJKMCEXLHRSYOIKIVJFVTYDQPCJDUYCPREATBIFZABICQKIBYGL");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6046511856770974);
    msg.setSource(4930U);
    msg.setSourceEntity(229U);
    msg.setDestination(43002U);
    msg.setDestinationEntity(67U);
    msg.op = 113U;
    msg.system.assign("IYSEPBYZRACCLBLVMYDUOCJPJGTAKVFKCGNXLVDDWECGBRKPFWWVOXPGOCIBBLIQTYEZQXUGBSHNAUIUOATVPJWCRDZFFRRVIMEPEYXXZMDZUUQWVUXZLQFPNMLHHNRQSQBQQTSDRVMJTMRUNNJLJOTSEFSPTHYJAOSUOIDDHTYCEMFLRHIGKWHQUGMGJHBZJXWN");
    msg.range = 0.8162502116806044;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 14726U;
    tmp_msg_0.destination = 37684U;
    tmp_msg_0.timeout = 0.7287579056805226;
    IMC::ManeuverControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 134U;
    tmp_tmp_msg_0_0.eta = 25893U;
    tmp_tmp_msg_0_0.info.assign("AXKTJFGCPADUBNTAFMJKZEAVHTXBKLNURQFMLFGFONBXZAZNOQQUXWIRBVJVVZURTDVSAIQVYKYSJXGTKSMTFUXCLUWJERHELSLTQRGYROWDPWZBDGUWXEWAQTCHCVI");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.32084003360728397);
    msg.setSource(33052U);
    msg.setSourceEntity(182U);
    msg.setDestination(26577U);
    msg.setDestinationEntity(63U);
    msg.op = 84U;
    msg.system.assign("RHFLRHFISVEDGCOTMASBITZSUZNKLGEIJJCLVRYIFGFNHJGBAMOMGXXZGAMMZXYVHKFQYKUSRETOWIOUOJDFKCZEHEDPTBVGBUTPUTNCNDPIKDMVTQFPJZNSNOSLLDYOVKJNBFYYJYMIWQIW");
    msg.range = 0.7323421632389524;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.176978539083257);
    msg.setSource(32255U);
    msg.setSourceEntity(120U);
    msg.setDestination(49895U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.8037889970765029);
    msg.setSource(22994U);
    msg.setSourceEntity(90U);
    msg.setDestination(54122U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.4534018558738778);
    msg.setSource(5433U);
    msg.setSourceEntity(34U);
    msg.setDestination(21296U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.2998184627252166);
    msg.setSource(5211U);
    msg.setSourceEntity(38U);
    msg.setDestination(5615U);
    msg.setDestinationEntity(104U);
    msg.list.assign("PSMRRNRSHMCLKGXWNBBCUMYZSMLJMEJGSDIMPQZWIFYHZPXKTWPOZVPEQNHRXLMUGHIQFJCYDDGVEULIBDLWLJGUDRWQXENVRTZJATLTEHWUBLCITBBSTAKAUOJCYETFFFIKFYCYOKGP");

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
    msg.setTimeStamp(0.14930552983495082);
    msg.setSource(59546U);
    msg.setSourceEntity(8U);
    msg.setDestination(252U);
    msg.setDestinationEntity(50U);
    msg.list.assign("WKKIYJEMCPOCEURNTOHUIHKFOJARUWAFXIXLSHNWMJZCLMUVJKLIPHDLFTTBHQAOBWNYETXMUFIUNNVZBGTSHSUVLHIYRPSYGVPNCBJRCNTMRYNSKWQQTXIHCFUBXDOEZEDBJAZDPVMSBLZGAQM");

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
    msg.setTimeStamp(0.5491676004027016);
    msg.setSource(52490U);
    msg.setSourceEntity(1U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(172U);
    msg.list.assign("ZKCYZGNEUCBKMUAQZPGGRVSWUXKFU");

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
    msg.setTimeStamp(0.17705635776232465);
    msg.setSource(61334U);
    msg.setSourceEntity(208U);
    msg.setDestination(15588U);
    msg.setDestinationEntity(105U);
    msg.peer.assign("VTNASCERWZMSNJYXSQCSOGYZRBMSVVTXGFIGTQJFGBBHBKIKZLLVWUONTJUESJHCUBNLBXXPRIUDLDAICOAAONUYFWFYPRDJBTPJOXNKLJWVHMGKXAZEDUCIGPTHQMWECIAFQIVCHDVPMAHJYWVSYFFODOUYKCGKBXEAOXNERF");
    msg.rssi = 0.013001237449118186;
    msg.integrity = 4907U;

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
    msg.setTimeStamp(0.1356715396160164);
    msg.setSource(35676U);
    msg.setSourceEntity(62U);
    msg.setDestination(45848U);
    msg.setDestinationEntity(195U);
    msg.peer.assign("SKLVWDWGJSDWJQATKSCPWYYWUIQWBFGJZFGUMNVPUHDPXVOFAYZRJOZTCSGBAKFXNCWHIREXDZRJAHMUTCXBPFGMUFBQLYIVYGALYOAHUSZFKSQYUYNZOVLQRFNIKNLYTNKBHFRZBNTMKOEVCIWMOZNGMKLXEECCCBRXHMLTPTVGIMIDRGJZSLCHOQAHVBUJBIDNVPUDXIVTPIOWQEAFKOQYSSQXMZDTWQBEEPXEKOJRENRRHXHLAJ");
    msg.rssi = 0.019602538080082388;
    msg.integrity = 29962U;

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
    msg.setTimeStamp(0.8969577637443592);
    msg.setSource(53024U);
    msg.setSourceEntity(147U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("NLSADREEOQIMPAHDIJLFKILKEPWELIGFJEXHUUTZBXXDSRDZVIZJSAHLJATZFWGLAVCHROUMXYNNYEAIFNCNDYIRCOKBNJVEDUUGMCXJMXVTRHSSZGIKTGOSKVWALPCKDHFQFWXOMBQHZNPNOYMQVHDWXFQFEHUVBYOCDBVKTOCCUVBKSBKEMMWEFYJBWYOMZAUKVRLSGRATPCTNCWOXIBLJXPYJYRQSDTQNU");
    msg.rssi = 0.21035092221912033;
    msg.integrity = 8989U;

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
    msg.setTimeStamp(0.2716257415333262);
    msg.setSource(27072U);
    msg.setSourceEntity(184U);
    msg.setDestination(64927U);
    msg.setDestinationEntity(103U);
    msg.req_id = 62522U;
    msg.destination.assign("HDXFJZKZNUHXVRDSRZUCPUKYLRIVCYGLWWMYSQHDHWANPUCXJGAFBALYHPLASEAKSIAXEFAJKFFWVKKRLOAIVQEYMRVCMBISLNMBNIGFITQWDOOGX");
    msg.timeout = 0.7763407722385572;
    msg.range = 0.19147783074963165;
    msg.type = 53U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3149022496U;
    tmp_msg_0.state = 41U;
    tmp_msg_0.error.assign("ARFHWIPIKPKIHLCZUMLDQXOGRMXZGUNHKRGMHGQCDDMNQZSAZZNZEDYNRFCQPTAXRYWEKEOQYESHUSTLFIXBLBMVWYWGIYVLKBJZCOJYRGHLITLYVUWSQBAPRJZDDJNXNTPEORDMHVDBUJFWXGOAPTPIOWNEHWQKQCPSJNGPYAVVTAHCKBOPARCBVSWWOFVSALCKBJZITUOJZSKMQULFUETIEDVVBEIDJXNFQGNXYCACURGOH");
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
    msg.setTimeStamp(0.6160334446496692);
    msg.setSource(52265U);
    msg.setSourceEntity(124U);
    msg.setDestination(44531U);
    msg.setDestinationEntity(73U);
    msg.req_id = 53619U;
    msg.destination.assign("QOBLAYWIMUXDIPKJMXGXZSFRCFTVYQJOJMFESHTZMDNONLGLWSPNAPZCKYNDZXATCAKVPPWYSFNYOIKGIGBDQVXDJFZIUWTDDKOYMDGAZEGFLAJVPZVXYOBZZRMPSTCBUPRRWJFLQUJSJKNCHXEVAMRIHUHCONNVBIXWBETGBHUYMJOWBUSWAQVRFVRG");
    msg.timeout = 0.4875494322311831;
    msg.range = 0.0050051220968677645;
    msg.type = 10U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.004450577706097358;
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
    msg.setTimeStamp(0.6139579579995502);
    msg.setSource(44779U);
    msg.setSourceEntity(131U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(141U);
    msg.req_id = 50194U;
    msg.destination.assign("OFVQINXAJHIHGTANMTLRSFHECYQAKKOZVCFPLHBWUUNEXLDWBTEPBITJFQSLDRBSLKIHRIJSQMDGBYLLAMYFJQAXORPNDJCGECZOFWNPWPKLYTBGARUUKSIPXEHLENDOYFFPWKWHW");
    msg.timeout = 0.30383619902291115;
    msg.range = 0.19742895717995868;
    msg.type = 154U;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.3999758173556619);
    msg.setSource(6406U);
    msg.setSourceEntity(109U);
    msg.setDestination(24148U);
    msg.setDestinationEntity(40U);
    msg.req_id = 7932U;
    msg.type = 93U;
    msg.status = 46U;
    msg.info.assign("RGVQUMOOAUZVGLAP");
    msg.range = 0.94499613683798;

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
    msg.setTimeStamp(0.5921055594592854);
    msg.setSource(15738U);
    msg.setSourceEntity(196U);
    msg.setDestination(23899U);
    msg.setDestinationEntity(141U);
    msg.req_id = 14137U;
    msg.type = 9U;
    msg.status = 136U;
    msg.info.assign("GEBBABYQSVRONFUMWFOBRCIWULLJTMMVWKOAKQJQAFHYFLZMGKPMFTMHLWANKPPIJHZVIIJGCPLNLGWMDEXTARTDBNNHNCSGMNVOSWSXKLLHSZQIRACEGCSYZCZVXXFEBVLVVJWKJASMDRMIQYDRFL");
    msg.range = 0.3174516181533259;

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
    msg.setTimeStamp(0.4298518425607376);
    msg.setSource(21957U);
    msg.setSourceEntity(40U);
    msg.setDestination(13081U);
    msg.setDestinationEntity(115U);
    msg.req_id = 52777U;
    msg.type = 200U;
    msg.status = 74U;
    msg.info.assign("NKZJLWHZGJPSKOMKCAAGYVXBSZQIJGRSJFNFTEYUKQMPCQDSCUQIUMYLTPXSOUABRWHNTHHIGBBNECHNHGQHLBXRSZOAVETAPFGQXRXMOWROFJGYLRZXBZNOJGWVKFPCNTDWVVMIXFPUMRPUDKIFXENDLVAAHCTZMORBXMYTFEUKCITSRLVPDOYZDQCVDBRVCGUNUQEXTYPAWYPOBTLJDWJU");
    msg.range = 0.9193356653023572;

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
    msg.setTimeStamp(0.018446662363992394);
    msg.setSource(35950U);
    msg.setSourceEntity(16U);
    msg.setDestination(25784U);
    msg.setDestinationEntity(235U);
    msg.system.assign("SYOCHZAWNDEOVBYEOBFNFULKSVUTHQCWSAMDXKJZGDNRMEJJAKBHVUHNOXQJPFIJGEAXJYPMDZZGTNBLEISHZCDUWBIWNNUXCBXRBGGGQOIXIRJVLFUPXSAZIATVYYLGOWGBCMO");
    msg.op = 70U;

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
    msg.setTimeStamp(0.4574334495715383);
    msg.setSource(65268U);
    msg.setSourceEntity(76U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(170U);
    msg.system.assign("CPPVDIUEJHXZCXAVWZGPPSAIMDWRONUSJKLZFUKCLLTFNMLXNETYJSHZUVZJNBJGFQMKUGKYOZKCYYQWVIHMDHQLSXCBKEBXIDTAVATTLBJIRHQFBQICHHLYYBMWDDWCPSAGWPQHDUGKPYORRBLNOEOUCENWMJQTCAOSRWGEJMWAVGBETZXYAVHFOEMKIQLINIPVXZGNSGGKNXKJJXLTERFEFHDQZNSPFXFTRU");
    msg.op = 75U;

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
    msg.setTimeStamp(0.07862841858522762);
    msg.setSource(3303U);
    msg.setSourceEntity(63U);
    msg.setDestination(44898U);
    msg.setDestinationEntity(198U);
    msg.system.assign("ERSDNGAIJMBQBPCXMWUMCFWXGJOCXOKBAZSMSCWXZFBFVAVUKJHKULSXPEJRPRCSSUKZXUJOSXLHDEBAYBLZNYRVYXHHPETFOEMXTAGYPAWYCVVNEIRQIDRBFMKIWYUIPGPOVADOHKOLWDGROYUGPOQYKVRUKNCJTWK");
    msg.op = 250U;

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
    msg.setTimeStamp(0.10081996133335969);
    msg.setSource(17053U);
    msg.setSourceEntity(248U);
    msg.setDestination(25863U);
    msg.setDestinationEntity(230U);
    msg.value = 6263;

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
    msg.setTimeStamp(0.46362742937974377);
    msg.setSource(37539U);
    msg.setSourceEntity(14U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(127U);
    msg.value = 24727;

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
    msg.setTimeStamp(0.5437803806058613);
    msg.setSource(64729U);
    msg.setSourceEntity(14U);
    msg.setDestination(55794U);
    msg.setDestinationEntity(172U);
    msg.value = -3743;

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
    msg.setTimeStamp(0.05871564568621501);
    msg.setSource(56522U);
    msg.setSourceEntity(224U);
    msg.setDestination(19724U);
    msg.setDestinationEntity(211U);
    msg.value = 0.03189289071555357;

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
    msg.setTimeStamp(0.9955519389651754);
    msg.setSource(9243U);
    msg.setSourceEntity(222U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(201U);
    msg.value = 0.49106963030594286;

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
    msg.setTimeStamp(0.17943780927459974);
    msg.setSource(25520U);
    msg.setSourceEntity(168U);
    msg.setDestination(23940U);
    msg.setDestinationEntity(219U);
    msg.value = 0.019030931499086967;

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
    msg.setTimeStamp(0.840904971693369);
    msg.setSource(24548U);
    msg.setSourceEntity(51U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(250U);
    msg.value = 0.6402509821149904;

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
    msg.setTimeStamp(0.30080682082288124);
    msg.setSource(42937U);
    msg.setSourceEntity(82U);
    msg.setDestination(49505U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9022153456088549;

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
    msg.setTimeStamp(0.44804783688377225);
    msg.setSource(34221U);
    msg.setSourceEntity(101U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3538348449683556;

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
    msg.setTimeStamp(0.010318695437818048);
    msg.setSource(6283U);
    msg.setSourceEntity(19U);
    msg.setDestination(12071U);
    msg.setDestinationEntity(58U);
    msg.validity = 14471U;
    msg.type = 91U;
    msg.utc_year = 54633U;
    msg.utc_month = 150U;
    msg.utc_day = 60U;
    msg.utc_time = 0.15106327494750915;
    msg.lat = 0.9912436710771911;
    msg.lon = 0.6417386233898302;
    msg.height = 0.5428811918382097;
    msg.satellites = 220U;
    msg.cog = 0.3628362846445451;
    msg.sog = 0.029755041450085007;
    msg.hdop = 0.32374091576996555;
    msg.vdop = 0.4157129772177477;
    msg.hacc = 0.9110027373611979;
    msg.vacc = 0.5708627830903712;

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
    msg.setTimeStamp(0.47585960043353404);
    msg.setSource(7466U);
    msg.setSourceEntity(112U);
    msg.setDestination(30303U);
    msg.setDestinationEntity(234U);
    msg.validity = 41456U;
    msg.type = 201U;
    msg.utc_year = 43597U;
    msg.utc_month = 230U;
    msg.utc_day = 4U;
    msg.utc_time = 0.3066470879482496;
    msg.lat = 0.29083397966951585;
    msg.lon = 0.3447874246681537;
    msg.height = 0.9346894544674674;
    msg.satellites = 9U;
    msg.cog = 0.08451672089803786;
    msg.sog = 0.094093589859645;
    msg.hdop = 0.691983792982148;
    msg.vdop = 0.8551800730865318;
    msg.hacc = 0.1673252554990834;
    msg.vacc = 0.2545586506142181;

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
    msg.setTimeStamp(0.014081721207368614);
    msg.setSource(10902U);
    msg.setSourceEntity(212U);
    msg.setDestination(35525U);
    msg.setDestinationEntity(109U);
    msg.validity = 13303U;
    msg.type = 219U;
    msg.utc_year = 9927U;
    msg.utc_month = 23U;
    msg.utc_day = 168U;
    msg.utc_time = 0.7853728333259855;
    msg.lat = 0.1311888377080378;
    msg.lon = 0.8659435345412224;
    msg.height = 0.32401026088516927;
    msg.satellites = 109U;
    msg.cog = 0.5417462848198932;
    msg.sog = 0.5658229371747122;
    msg.hdop = 0.12989776503716377;
    msg.vdop = 0.2734102010031123;
    msg.hacc = 0.4940514368667279;
    msg.vacc = 0.17188069855352706;

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
    msg.setTimeStamp(0.15665422282844987);
    msg.setSource(40943U);
    msg.setSourceEntity(129U);
    msg.setDestination(53062U);
    msg.setDestinationEntity(10U);
    msg.time = 0.6886405244736211;
    msg.phi = 0.4973222374344801;
    msg.theta = 0.889067804138474;
    msg.psi = 0.4988797709660502;
    msg.psi_magnetic = 0.2971194857945577;

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
    msg.setTimeStamp(0.6265189234915169);
    msg.setSource(44339U);
    msg.setSourceEntity(203U);
    msg.setDestination(25038U);
    msg.setDestinationEntity(142U);
    msg.time = 0.1874410943167527;
    msg.phi = 0.5470098003514837;
    msg.theta = 0.6264008282316255;
    msg.psi = 0.16788093099922197;
    msg.psi_magnetic = 0.05430954467293547;

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
    msg.setTimeStamp(0.15460455684302343);
    msg.setSource(33805U);
    msg.setSourceEntity(234U);
    msg.setDestination(16262U);
    msg.setDestinationEntity(252U);
    msg.time = 0.1438467568232874;
    msg.phi = 0.3673484425298761;
    msg.theta = 0.5166014803851844;
    msg.psi = 0.27631654898629043;
    msg.psi_magnetic = 0.773539369550755;

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
    msg.setTimeStamp(0.018997428018798);
    msg.setSource(42224U);
    msg.setSourceEntity(118U);
    msg.setDestination(21955U);
    msg.setDestinationEntity(82U);
    msg.time = 0.6284301801506601;
    msg.x = 0.7470829424004457;
    msg.y = 0.7627149055892715;
    msg.z = 0.8082021457683847;
    msg.timestep = 0.20210149922894127;

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
    msg.setTimeStamp(0.2487278803014945);
    msg.setSource(60473U);
    msg.setSourceEntity(1U);
    msg.setDestination(27308U);
    msg.setDestinationEntity(84U);
    msg.time = 0.5374541912199352;
    msg.x = 0.28871178439468226;
    msg.y = 0.008446525175639708;
    msg.z = 0.5319928255505679;
    msg.timestep = 0.6863173213012267;

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
    msg.setTimeStamp(0.9886631707987242);
    msg.setSource(22612U);
    msg.setSourceEntity(130U);
    msg.setDestination(1161U);
    msg.setDestinationEntity(2U);
    msg.time = 0.5206140749625312;
    msg.x = 0.44960404412075794;
    msg.y = 0.8670833358951847;
    msg.z = 0.8946220702867906;
    msg.timestep = 0.6131386525988568;

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
    msg.setTimeStamp(0.8359480927836435);
    msg.setSource(5796U);
    msg.setSourceEntity(118U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(170U);
    msg.time = 0.5381192055819811;
    msg.x = 0.28691610480933305;
    msg.y = 0.7924034446742679;
    msg.z = 0.7643964162109005;

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
    msg.setTimeStamp(0.298678985246677);
    msg.setSource(16752U);
    msg.setSourceEntity(126U);
    msg.setDestination(17347U);
    msg.setDestinationEntity(132U);
    msg.time = 0.9920480284577945;
    msg.x = 0.7033225433112292;
    msg.y = 0.24471660641168747;
    msg.z = 0.3225247816019221;

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
    msg.setTimeStamp(0.2546748856588671);
    msg.setSource(3974U);
    msg.setSourceEntity(66U);
    msg.setDestination(59040U);
    msg.setDestinationEntity(124U);
    msg.time = 0.6867486410567885;
    msg.x = 0.5345258111855525;
    msg.y = 0.9664397286573929;
    msg.z = 0.2515473560449416;

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
    msg.setTimeStamp(0.588859095118492);
    msg.setSource(51843U);
    msg.setSourceEntity(87U);
    msg.setDestination(25987U);
    msg.setDestinationEntity(151U);
    msg.time = 0.8772039776157944;
    msg.x = 0.6634231033611521;
    msg.y = 0.5892242705280502;
    msg.z = 0.5864378762118985;

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
    msg.setTimeStamp(0.5353847958882875);
    msg.setSource(7607U);
    msg.setSourceEntity(250U);
    msg.setDestination(10673U);
    msg.setDestinationEntity(25U);
    msg.time = 0.7684593174370431;
    msg.x = 0.05033693063374722;
    msg.y = 0.9966175997625982;
    msg.z = 0.028110818071798716;

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
    msg.setTimeStamp(0.5052362771199832);
    msg.setSource(63102U);
    msg.setSourceEntity(119U);
    msg.setDestination(5644U);
    msg.setDestinationEntity(66U);
    msg.time = 0.5134838114933621;
    msg.x = 0.4014184286725093;
    msg.y = 0.15398274561904657;
    msg.z = 0.8212298628973257;

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
    msg.setTimeStamp(0.15891142593086538);
    msg.setSource(47644U);
    msg.setSourceEntity(149U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(124U);
    msg.time = 0.03848081492545774;
    msg.x = 0.11751884404368362;
    msg.y = 0.23657644272745593;
    msg.z = 0.12165366877589945;

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
    msg.setTimeStamp(0.7237884425993101);
    msg.setSource(38169U);
    msg.setSourceEntity(227U);
    msg.setDestination(63146U);
    msg.setDestinationEntity(54U);
    msg.time = 0.7840675258344484;
    msg.x = 0.21327160597102657;
    msg.y = 0.9132126938509746;
    msg.z = 0.0035926114369392304;

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
    msg.setTimeStamp(0.09490292292181135);
    msg.setSource(46041U);
    msg.setSourceEntity(26U);
    msg.setDestination(8731U);
    msg.setDestinationEntity(138U);
    msg.time = 0.8026088326018429;
    msg.x = 0.49067268398594677;
    msg.y = 0.11802502504004486;
    msg.z = 0.33300310257922605;

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
    msg.setTimeStamp(0.8276219921956862);
    msg.setSource(16281U);
    msg.setSourceEntity(140U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(45U);
    msg.validity = 54U;
    msg.x = 0.6254940765183707;
    msg.y = 0.835132180543191;
    msg.z = 0.3295445975244602;

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
    msg.setTimeStamp(0.4308758353412778);
    msg.setSource(43695U);
    msg.setSourceEntity(51U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(79U);
    msg.validity = 160U;
    msg.x = 0.2742042085006763;
    msg.y = 0.8015257648355004;
    msg.z = 0.19709306305663954;

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
    msg.setTimeStamp(0.46324814906329437);
    msg.setSource(53919U);
    msg.setSourceEntity(176U);
    msg.setDestination(15513U);
    msg.setDestinationEntity(119U);
    msg.validity = 246U;
    msg.x = 0.183019615971873;
    msg.y = 0.918038243060848;
    msg.z = 0.7215672585689843;

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
    msg.setTimeStamp(0.3046761060370997);
    msg.setSource(54673U);
    msg.setSourceEntity(55U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(238U);
    msg.validity = 115U;
    msg.x = 0.5741906671788217;
    msg.y = 0.3809792885108241;
    msg.z = 0.08204494551928365;

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
    msg.setTimeStamp(0.4827336725514011);
    msg.setSource(10066U);
    msg.setSourceEntity(127U);
    msg.setDestination(52947U);
    msg.setDestinationEntity(228U);
    msg.validity = 103U;
    msg.x = 0.5279594140033328;
    msg.y = 0.0032784504475121823;
    msg.z = 0.2992830993114207;

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
    msg.setTimeStamp(0.25039354220874954);
    msg.setSource(33081U);
    msg.setSourceEntity(251U);
    msg.setDestination(14666U);
    msg.setDestinationEntity(64U);
    msg.validity = 199U;
    msg.x = 0.01668352424171171;
    msg.y = 0.8006183462227191;
    msg.z = 0.7130663270400012;

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
    msg.setTimeStamp(0.03738043281289016);
    msg.setSource(44466U);
    msg.setSourceEntity(98U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(76U);
    msg.time = 0.3142476616472838;
    msg.x = 0.8573675238203297;
    msg.y = 0.49482378629091484;
    msg.z = 0.3017640275911462;

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
    msg.setTimeStamp(0.5373323711234463);
    msg.setSource(53678U);
    msg.setSourceEntity(36U);
    msg.setDestination(2293U);
    msg.setDestinationEntity(123U);
    msg.time = 0.016920958205348113;
    msg.x = 0.3813454610686168;
    msg.y = 0.6725257540730041;
    msg.z = 0.6546400469487225;

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
    msg.setTimeStamp(0.9455144758545551);
    msg.setSource(55523U);
    msg.setSourceEntity(153U);
    msg.setDestination(5908U);
    msg.setDestinationEntity(64U);
    msg.time = 0.09951049866121287;
    msg.x = 0.07632697093974372;
    msg.y = 0.7100521508337735;
    msg.z = 0.5311688794060092;

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
    msg.setTimeStamp(0.30656254374441316);
    msg.setSource(45098U);
    msg.setSourceEntity(243U);
    msg.setDestination(64188U);
    msg.setDestinationEntity(114U);
    msg.validity = 219U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.19939102968768907;
    tmp_msg_0.y = 0.8550798989331175;
    tmp_msg_0.z = 0.05249729273948589;
    tmp_msg_0.phi = 0.8534511374376904;
    tmp_msg_0.theta = 0.5700081166142612;
    tmp_msg_0.psi = 0.6968113488627573;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.40027678934304733;
    tmp_msg_1.beam_height = 0.40634646261769547;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.03754102814382043;

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
    msg.setTimeStamp(0.52141413673576);
    msg.setSource(50191U);
    msg.setSourceEntity(235U);
    msg.setDestination(25785U);
    msg.setDestinationEntity(141U);
    msg.validity = 141U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4461431560470486;
    tmp_msg_0.y = 0.70537660088251;
    tmp_msg_0.z = 0.6585522287168394;
    tmp_msg_0.phi = 0.4817706124247516;
    tmp_msg_0.theta = 0.0302816724407593;
    tmp_msg_0.psi = 0.06556007581333179;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8584826086263717;

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
    msg.setTimeStamp(0.6050249866343796);
    msg.setSource(14467U);
    msg.setSourceEntity(52U);
    msg.setDestination(13861U);
    msg.setDestinationEntity(209U);
    msg.validity = 5U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7702745242003378;
    tmp_msg_0.y = 0.952083590029956;
    tmp_msg_0.z = 0.023567150774797208;
    tmp_msg_0.phi = 0.8488178203150073;
    tmp_msg_0.theta = 0.33889157431458805;
    tmp_msg_0.psi = 0.5418452721805157;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.1860435101508372;

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
    msg.setTimeStamp(0.3726579467658453);
    msg.setSource(54469U);
    msg.setSourceEntity(136U);
    msg.setDestination(17832U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6835557064709157;

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
    msg.setTimeStamp(0.6895412099921213);
    msg.setSource(8877U);
    msg.setSourceEntity(194U);
    msg.setDestination(14578U);
    msg.setDestinationEntity(172U);
    msg.value = 0.3747452933259786;

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
    msg.setTimeStamp(0.8421553563588291);
    msg.setSource(4402U);
    msg.setSourceEntity(15U);
    msg.setDestination(23368U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7101099144647722;

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
    msg.setTimeStamp(0.6682232405112442);
    msg.setSource(50596U);
    msg.setSourceEntity(194U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8761568381565922;

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
    msg.setTimeStamp(0.418498721552127);
    msg.setSource(18426U);
    msg.setSourceEntity(218U);
    msg.setDestination(9658U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9236080776881641;

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
    msg.setTimeStamp(0.6893221205917394);
    msg.setSource(44077U);
    msg.setSourceEntity(52U);
    msg.setDestination(3822U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5347987090829496;

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
    msg.setTimeStamp(0.6382087078812837);
    msg.setSource(61561U);
    msg.setSourceEntity(50U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5389868457159264;

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
    msg.setTimeStamp(0.23523291107883337);
    msg.setSource(41890U);
    msg.setSourceEntity(137U);
    msg.setDestination(5410U);
    msg.setDestinationEntity(108U);
    msg.value = 0.3066610409967593;

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
    msg.setTimeStamp(0.4016069381585089);
    msg.setSource(54565U);
    msg.setSourceEntity(75U);
    msg.setDestination(23654U);
    msg.setDestinationEntity(74U);
    msg.value = 0.12111951278405975;

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
    msg.setTimeStamp(0.6757645278643484);
    msg.setSource(33867U);
    msg.setSourceEntity(191U);
    msg.setDestination(29874U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6877889313723295;

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
    msg.setTimeStamp(0.8388454268203185);
    msg.setSource(5495U);
    msg.setSourceEntity(220U);
    msg.setDestination(48820U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5045296989775532;

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
    msg.setTimeStamp(0.5944959414600147);
    msg.setSource(5341U);
    msg.setSourceEntity(40U);
    msg.setDestination(8608U);
    msg.setDestinationEntity(246U);
    msg.value = 0.6145180785820231;

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
    msg.setTimeStamp(0.8542575276430056);
    msg.setSource(24350U);
    msg.setSourceEntity(108U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(251U);
    msg.value = 0.4975388449093533;

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
    msg.setTimeStamp(0.1087794743603171);
    msg.setSource(55197U);
    msg.setSourceEntity(219U);
    msg.setDestination(16609U);
    msg.setDestinationEntity(201U);
    msg.value = 0.02053864230999025;

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
    msg.setTimeStamp(0.6774185830661935);
    msg.setSource(12389U);
    msg.setSourceEntity(190U);
    msg.setDestination(20912U);
    msg.setDestinationEntity(129U);
    msg.value = 0.061296061704937066;

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
    msg.setTimeStamp(0.9617015983480561);
    msg.setSource(64639U);
    msg.setSourceEntity(173U);
    msg.setDestination(20684U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5915976455282144;

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
    msg.setTimeStamp(0.48115828399602134);
    msg.setSource(27853U);
    msg.setSourceEntity(178U);
    msg.setDestination(30255U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6365186367132106;

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
    msg.setTimeStamp(0.7420709623560405);
    msg.setSource(47823U);
    msg.setSourceEntity(200U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5599610944830653;

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
    msg.setTimeStamp(0.1103295592402207);
    msg.setSource(51116U);
    msg.setSourceEntity(65U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7562893517323287;

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
    msg.setTimeStamp(0.8630743961660752);
    msg.setSource(61024U);
    msg.setSourceEntity(36U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(48U);
    msg.value = 0.971037785679452;

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
    msg.setTimeStamp(0.02158399296648661);
    msg.setSource(1144U);
    msg.setSourceEntity(192U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(247U);
    msg.value = 0.6479961694285676;

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
    msg.setTimeStamp(0.05294486899931505);
    msg.setSource(39939U);
    msg.setSourceEntity(64U);
    msg.setDestination(49053U);
    msg.setDestinationEntity(235U);
    msg.value = 0.6439173986860137;

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
    msg.setTimeStamp(0.19524848480014168);
    msg.setSource(14850U);
    msg.setSourceEntity(58U);
    msg.setDestination(35122U);
    msg.setDestinationEntity(133U);
    msg.value = 0.4353393707482933;

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
    msg.setTimeStamp(0.013854481475186309);
    msg.setSource(53291U);
    msg.setSourceEntity(217U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(234U);
    msg.value = 0.3243515223502442;

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
    msg.setTimeStamp(0.3881272002825463);
    msg.setSource(5804U);
    msg.setSourceEntity(207U);
    msg.setDestination(3041U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.05318778748668862;
    msg.speed = 0.9242008018682177;
    msg.turbulence = 0.9254810321703522;

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
    msg.setTimeStamp(0.5351708637607389);
    msg.setSource(6807U);
    msg.setSourceEntity(243U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(15U);
    msg.direction = 0.7760435091867652;
    msg.speed = 0.5072245911059985;
    msg.turbulence = 0.010269080076846904;

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
    msg.setTimeStamp(0.40846373194795316);
    msg.setSource(41934U);
    msg.setSourceEntity(37U);
    msg.setDestination(17880U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.202746551968902;
    msg.speed = 0.9312128724978217;
    msg.turbulence = 0.30811080709213834;

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
    msg.setTimeStamp(0.5790325131859281);
    msg.setSource(4437U);
    msg.setSourceEntity(73U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9240944026127834;

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
    msg.setTimeStamp(0.5994785091882671);
    msg.setSource(36791U);
    msg.setSourceEntity(45U);
    msg.setDestination(59440U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8625116524504968;

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
    msg.setTimeStamp(0.7036006542490555);
    msg.setSource(26535U);
    msg.setSourceEntity(251U);
    msg.setDestination(42465U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5785632228154405;

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
    msg.setTimeStamp(0.08321046747994454);
    msg.setSource(58274U);
    msg.setSourceEntity(162U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(208U);
    msg.value.assign("BVFYXUYIYOWINEEONQFQDAAZOHSYIYKIUHBKQLPVKEMDXJUZWYTXUAINPDQVPHIPHMJWLMGTHHRVZSDZONXSPQZZJNAMUZNOLKCGLFFELFKREBCXPRMYMDMSCUDDCTVEJAFJTHCESKFTWODXTVEBZVJFOABIBDCGLGHDJPOLLQOPMBSWVBUHHTTTRABKGWQTXPLECRRPN");

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
    msg.setTimeStamp(0.8857271634520353);
    msg.setSource(23219U);
    msg.setSourceEntity(90U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(9U);
    msg.value.assign("AJSIZMXGWWKQTVWFABMSNBPERLYGZOXIOGISCRASHINZKTVVDRGBUHZHAOCWIECPFVKLOPNCYKLIRIUCBQBSUYNWYTNLVSFQSDJJFOBAYXHNPJJQAEUGVURMHSTMPWNFEFTSTXEKRXFEXAZPGYKJAOPYEVQRSIDPHDGGYRELZYCMMXIHADZMHOWHFWQVCKGDKXAFUQJRCTUGTBONKDDXUUJBDKLYNPCQEFXWPQ");

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
    msg.setTimeStamp(0.08822073927993501);
    msg.setSource(1764U);
    msg.setSourceEntity(228U);
    msg.setDestination(34778U);
    msg.setDestinationEntity(106U);
    msg.value.assign("NZLHFDZWWZJKOETXNSFIHWTRSGHIECCAMQRATPCRMKBJCWSKYSFDPEMAKSYFCYBAXTVXAXMJOIGYPBNMCPGUWTPYIWKYBXRGONRLBLNUSKRDXBDWZGHCLTUSDABAIVQAJSUJHGLEBBZQXXIDJHQTOOKZJNFKVCUPOERPMRGCXNMFPSEZAFGLQFULYBUYIWMGPOUVHNHFJNWHDIOEMMVVSQEJTJUFUVHRGLDNYTKQQZVDECL");

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
    msg.setTimeStamp(0.005905788629335995);
    msg.setSource(16798U);
    msg.setSourceEntity(238U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(194U);
    const signed char tmp_msg_0[] = {-64, 74, 31, 60, 117, -14, 70, -61, 25, 42, -98, -122, 56, 17, 48, -111, 14, 29, 75, 55, 17, -22, -82, 110, -80, -82, 17, -126, 41, 93, -60, 12, 46, 77, 77, 71, 62, 112, 39, 16, 80, -114, 99, 89, -120, 18, 28, -25, 18, 49, -115, 101, 106, -113, -8, -67, 0, -59, -107, -72, -89, -7, 96, 51, 98, -62, -15, 32, 19, 74, -115, 84, -86, -80, 33, 15, -50, 81, 104, 36, 24, -89, 16, 114, -52, -70, 43, 35, 96, 74, -49, -83, 6, -70, 113, 70, 15, -119, -75, 112, 57, -92, -69, -91, 47, 13, -27, 82, 91, 99, -51, 102, 82, -63, -123, 101, 124, 112, -120, 0, -2, -90, -42, 54, 26, -104, -81, 96, -21, -96, -76, -108, -73, 123, 112, -122, -94, -115, 27, 106, -87, -51, 23, -117, -35, -64, 45, 100, 10, 95, -3, -13, -21, -85, -92, -67, -74, -94, 72, -29, -1, 38, 66, 5, 84, -15, -115, 60, 76, -40, -33, 74, 87, -6, 46, 67, -12, 119, -119, 71, -48, 72, 15, -35, -75, -55, 51, -71, 42, -22, -44, -119, -39, 108, -73, -87, 22, 118, -2, -121, -9, -87, 7, -56, 120, -22, -66, -20, 97, -100, 0, -22, -7, -53, 52, -13, -84, 49, 0, -105, -61, 48, 91, -106, 86, 66, 37, 5, 115, -20, -113, -91, 112, -96, -23, -102, -67, -38, -24, -100, -19, 13, -52, 70, -75, -12, 77, -90};
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
    msg.setTimeStamp(0.9762798417002129);
    msg.setSource(11347U);
    msg.setSourceEntity(54U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(215U);
    const signed char tmp_msg_0[] = {118, 9, 17, 74, -75, -83, -88, 7, -60, 96, 120, 9, -50, 38, 100, 114, 6, -114, 114, 79, 115, -37, -3, -57, 103, 31, 114, 66, -109, 16, -102, -33, 66, 87, -91, -63, 67, -60, 64, -110, -64, -16, 73, -40, -21, -76, 110, 103, 110, -110, -92, 3, 26, -37, 21, 88, -24, 57, 79, -8, 57, -55, 61, -78, 100, 0, -24, -14, 31, -108, -85, -116, -76, 63, -9, -77, 122, -9};
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
    msg.setTimeStamp(0.08680768350259038);
    msg.setSource(45465U);
    msg.setSourceEntity(170U);
    msg.setDestination(17763U);
    msg.setDestinationEntity(10U);
    const signed char tmp_msg_0[] = {-122, -34, -61, 108, 35, 37, -70, -65, -37, 96, -100, -18, 48, -27, 5, -92, -49, 120, 18, -26, 71, 42, -72, -112, 72, 6, -98, -110, -76, -107, -89, -13, 98, -45, -85, -14, -21, -33, -8, 113, -128, -45, 66, 7, -115, 67, 109, -123, -68, 114, -41, -123, -74, -26, 83, -10, 0, -17, -60, -63, 114, -56, 63, -8, -10, -88, -126, 0, -119, -18, -110, -78, -45, 71, 19, 76, 126, -112, -81, 66, 54, 27, -109, -100, -102, 5, -63, -5, 27, 61, 6, -118, 8, -11, -61, -37, 114, -86, -124, 40, -80, -74, 78, -94, 53, -84, 78, 52, -67, 49, -57, 72, -51, 56, 108, 9, 17, 79, -12, 50, -52, 85, -112, -45, -4, -33, 85, 28, 27, -122, -65, -114, -55, 105, -17, 40, -35, -35, -8, -79, 38, -68, -107, -34, -76, -85, -115, 9, 5, 64, -114, -91, -95, -34, -40, 96, -102, 122, 14, -51, 9, 52, -29, 3, 0, -54, 97, -10, 75, 24, 44, -25, -107, -36, 74, 102, 61, 57, -88, -6, -93, 34, -111, 73, -75, -60, -30, 25, 51, 33, 58, -24, -124};
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
    msg.setTimeStamp(0.2479799954992662);
    msg.setSource(57270U);
    msg.setSourceEntity(23U);
    msg.setDestination(59404U);
    msg.setDestinationEntity(252U);
    msg.value = 0.054512602029343826;

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
    msg.setTimeStamp(0.8316826637180654);
    msg.setSource(9687U);
    msg.setSourceEntity(52U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(13U);
    msg.value = 0.020862042766904842;

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
    msg.setTimeStamp(0.6398070788845664);
    msg.setSource(36379U);
    msg.setSourceEntity(147U);
    msg.setDestination(18487U);
    msg.setDestinationEntity(196U);
    msg.value = 0.11670947151214572;

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
    msg.setTimeStamp(0.859706153461336);
    msg.setSource(35056U);
    msg.setSourceEntity(32U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(242U);
    msg.type = 171U;
    msg.frequency = 1860727367U;
    msg.min_range = 55294U;
    msg.max_range = 11402U;
    msg.bits_per_point = 45U;
    msg.scale_factor = 0.7560710115420866;
    const signed char tmp_msg_0[] = {111, -65, 84, -16, -8, -74, 38, 123, 102, 121, 61, 88, 28, -93, -1, 111, -90, 51, -38, -107, -49, 34, 27, 47, 21, -39, -23, 53, 72, 65, -66, -97, 65, -30, -107, 54, 122, 117, 51, 120, 17, -117, 96, 104, 119, -33, 69, -45, -92, -30, 84, -94, 100, -120, -1, 106, 28, 115, -41, 27, -120, -89, -84, 37, -107, -46, -57, -101, 18, -15, 93, 64, -107, 28, -55, -96, 110, 46, 109, 24, 79, -19, 126, 122, 14, -3, -35, 24, 2, -80, 18};
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
    msg.setTimeStamp(0.34764078788815267);
    msg.setSource(60340U);
    msg.setSourceEntity(77U);
    msg.setDestination(40976U);
    msg.setDestinationEntity(209U);
    msg.type = 197U;
    msg.frequency = 3009979292U;
    msg.min_range = 45529U;
    msg.max_range = 35961U;
    msg.bits_per_point = 238U;
    msg.scale_factor = 0.0393888557040446;
    const signed char tmp_msg_0[] = {21, -51, -22, -65, -105, 62, 101, 12, 8, 103, -116, -123, 108, -85, -28, 119, -71, -69, 52, -82, -14, 27, 81, 119, 41, -59, -32, -116, 66, -7, 101, 66, 84, 109, -89, -34, -28, -69, -61, 41, -21, 114, -84, 33, -77, -50, 96, 11, 8, -101, -8, -89, 6, 18, 123, 7, -61, 109, -41, 65, -19, 87, 112, -55, -75, -65, -54, 125, -51, -87, 3, 36, 9, 22, -66, -79, -47, -99, -102, 90, 60, -27, -63, 81, -31, 123, -82, 92, -63, -84, 29, 108, 30, 25, -37, -61, 97, 124, -110, 74, 17, 113, -28, -109, 83, -118, -55, 0, -87, -63, 56, -23, -10, 113, 120, 11, -113, 21, -32, 2, 51, 84, -65, 65, 98, 116, 35, -89, 37, 36, -50, 109, -114, -35, 67, 58, 106, 45, 32};
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
    msg.setTimeStamp(0.009469610700207354);
    msg.setSource(12419U);
    msg.setSourceEntity(173U);
    msg.setDestination(18531U);
    msg.setDestinationEntity(240U);
    msg.type = 172U;
    msg.frequency = 3840493777U;
    msg.min_range = 57423U;
    msg.max_range = 5296U;
    msg.bits_per_point = 130U;
    msg.scale_factor = 0.34798507613444885;
    const signed char tmp_msg_0[] = {51, -83, -102, 60, -54, 59, -87, 19, 13, 34, -35, -95, -2, 70, -126, -86, -57, 43, -116, 85, 122, -124, 90, -56, -69, -60, -40, -81, 87, -72, -86, -4, -49, 93, -4, -50, -28, 112, 83, 108, 60, -74, 59, 15, -119, 17, -13, 112, -84, -55, -122, 98, -46, -76, 10, 92, -37, -1, -105, -93, -68, 78, -124, -7, -80, 82, 25, -85, -89, 16, -111, -126, 52, -99, 111, 91, 72, 96, 5, 117, 116, -88, -123, -58, -34, -82, 44, -72, -28, -51, -58, -128, 81, 96, -80, -29, 102, 63, 25, -95, 5, 30, -81, 123, -53, -105, 19, -73, 92, 103, -100, 55, 51, -16, 84, 121, -75, 36, 90, -57, -90, -13, 125, -50, 55};
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
    msg.setTimeStamp(0.17912816376160678);
    msg.setSource(36093U);
    msg.setSourceEntity(184U);
    msg.setDestination(24788U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.43719181643372884);
    msg.setSource(14347U);
    msg.setSourceEntity(194U);
    msg.setDestination(7055U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.4872463412974217);
    msg.setSource(51659U);
    msg.setSourceEntity(187U);
    msg.setDestination(38112U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.5907307356411603);
    msg.setSource(41363U);
    msg.setSourceEntity(53U);
    msg.setDestination(16125U);
    msg.setDestinationEntity(79U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.2870816670652653);
    msg.setSource(3819U);
    msg.setSourceEntity(208U);
    msg.setDestination(33377U);
    msg.setDestinationEntity(242U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.6144698176684417);
    msg.setSource(63495U);
    msg.setSourceEntity(24U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(165U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.5418033066276107);
    msg.setSource(64402U);
    msg.setSourceEntity(250U);
    msg.setDestination(34070U);
    msg.setDestinationEntity(156U);
    msg.value = 0.06950489384914149;
    msg.confidence = 0.36257984890049144;
    msg.opmodes.assign("MWHZCQFXDMBHNYHJWXEBNGBNWRTMOWAMJMBZZMSDUXPSYPNLITRWGLHEPEQKHKTZXFCIVESGJCKYOJYBNQEBFNJXORL");

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
    msg.setTimeStamp(0.03405316122532043);
    msg.setSource(15393U);
    msg.setSourceEntity(229U);
    msg.setDestination(59732U);
    msg.setDestinationEntity(37U);
    msg.value = 0.20711228817343186;
    msg.confidence = 0.12342875249626073;
    msg.opmodes.assign("SEXNMKEGKTCOCCNOWONPVIITMWJKVZFJORBZAENDTKMCIUZAJFJQVZCHRPGPBGELSQBSXHEGXOHHABGMFTLDSUCZRHKZVTDMVFHKUJLMZCOUGDGDWIYJDRMNMYWPLQOIENOIPPXQGALNUNAYVVAGYRLUVRYALXCDXNWFSFKLTOFRIYGKEHRYIJYBCTBPWWXJSRQQXIWDP");

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
    msg.setTimeStamp(0.7852887900214389);
    msg.setSource(54611U);
    msg.setSourceEntity(49U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(82U);
    msg.value = 0.3110271506214346;
    msg.confidence = 0.1143728665208742;
    msg.opmodes.assign("SEHWTSFQPPLQWWZJHNPZGHOGYBJTBETEEOGDAHZZFRNVNAYGBPQFMZDQURUSBJMTQQQBYAGWUPWMPXMTHPOJESSSGMWMYJRCOALRFXVKFMIXLLSXNOJUVIUKATAQWYNXGHYQ");

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
    msg.setTimeStamp(0.5575825638613927);
    msg.setSource(34119U);
    msg.setSourceEntity(144U);
    msg.setDestination(58397U);
    msg.setDestinationEntity(190U);
    msg.itow = 1882414887U;
    msg.lat = 0.2530976184490328;
    msg.lon = 0.8656434959661667;
    msg.height_ell = 0.7205188467496134;
    msg.height_sea = 0.8744423185033063;
    msg.hacc = 0.39491084599125104;
    msg.vacc = 0.9520088848472655;
    msg.vel_n = 0.14434337605715974;
    msg.vel_e = 0.613015179442219;
    msg.vel_d = 0.5043224934332365;
    msg.speed = 0.6614439563978463;
    msg.gspeed = 0.427139395611535;
    msg.heading = 0.09028144278201333;
    msg.sacc = 0.8487117640778342;
    msg.cacc = 0.9583613456806023;

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
    msg.setTimeStamp(0.8363381409792103);
    msg.setSource(64938U);
    msg.setSourceEntity(103U);
    msg.setDestination(15181U);
    msg.setDestinationEntity(213U);
    msg.itow = 1766971264U;
    msg.lat = 0.742825016264136;
    msg.lon = 0.8482393953569115;
    msg.height_ell = 0.9859207619511717;
    msg.height_sea = 0.6386405928152721;
    msg.hacc = 0.0790112790862979;
    msg.vacc = 0.8556662550039674;
    msg.vel_n = 0.4057483717826301;
    msg.vel_e = 0.859635040894824;
    msg.vel_d = 0.9785154917036076;
    msg.speed = 0.37192744978635406;
    msg.gspeed = 0.9207958498329571;
    msg.heading = 0.3890657402461658;
    msg.sacc = 0.3822308811066255;
    msg.cacc = 0.4528306957281404;

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
    msg.setTimeStamp(0.9175001584140041);
    msg.setSource(18861U);
    msg.setSourceEntity(125U);
    msg.setDestination(45620U);
    msg.setDestinationEntity(248U);
    msg.itow = 1139233142U;
    msg.lat = 0.8001119543109587;
    msg.lon = 0.8819421391825972;
    msg.height_ell = 0.6698272528344957;
    msg.height_sea = 0.2768060534365919;
    msg.hacc = 0.6526675366794344;
    msg.vacc = 0.11836364938970723;
    msg.vel_n = 0.3876634361520075;
    msg.vel_e = 0.3444770497971832;
    msg.vel_d = 0.7847386350762929;
    msg.speed = 0.7000699859350797;
    msg.gspeed = 0.20028725870147146;
    msg.heading = 0.3816988885853926;
    msg.sacc = 0.26556472381505414;
    msg.cacc = 0.4842885649872378;

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
    msg.setTimeStamp(0.7228320531634514);
    msg.setSource(49285U);
    msg.setSourceEntity(71U);
    msg.setDestination(8434U);
    msg.setDestinationEntity(75U);
    msg.id = 232U;
    msg.value = 0.4654892951290378;

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
    msg.setTimeStamp(0.4119532475072901);
    msg.setSource(1168U);
    msg.setSourceEntity(163U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(13U);
    msg.id = 185U;
    msg.value = 0.4217129549340315;

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
    msg.setTimeStamp(0.9402252842790394);
    msg.setSource(56627U);
    msg.setSourceEntity(99U);
    msg.setDestination(43875U);
    msg.setDestinationEntity(97U);
    msg.id = 31U;
    msg.value = 0.25643144404783846;

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
    msg.setTimeStamp(0.3115711438775871);
    msg.setSource(40708U);
    msg.setSourceEntity(88U);
    msg.setDestination(1913U);
    msg.setDestinationEntity(150U);
    msg.x = 0.2814461221682085;
    msg.y = 0.17321356780254948;
    msg.z = 0.5873809318586881;
    msg.phi = 0.5181295889751025;
    msg.theta = 0.8092321609960703;
    msg.psi = 0.5038092301959611;

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
    msg.setTimeStamp(0.8328266798220763);
    msg.setSource(12992U);
    msg.setSourceEntity(185U);
    msg.setDestination(62408U);
    msg.setDestinationEntity(139U);
    msg.x = 0.47818318596722564;
    msg.y = 0.9840594943953116;
    msg.z = 0.0572133978594751;
    msg.phi = 0.5162150411391498;
    msg.theta = 0.4752650703527994;
    msg.psi = 0.0742641133417733;

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
    msg.setTimeStamp(0.10287085477597646);
    msg.setSource(50944U);
    msg.setSourceEntity(20U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(9U);
    msg.x = 0.49367244189381687;
    msg.y = 0.570032087680011;
    msg.z = 0.9226284215983429;
    msg.phi = 0.4562942294747271;
    msg.theta = 0.06243469656151901;
    msg.psi = 0.5712643019092067;

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
    msg.setTimeStamp(0.6872319430745822);
    msg.setSource(20997U);
    msg.setSourceEntity(34U);
    msg.setDestination(14954U);
    msg.setDestinationEntity(189U);
    msg.beam_width = 0.9895598067486979;
    msg.beam_height = 0.5683770449409469;

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
    msg.setTimeStamp(0.19963139888519377);
    msg.setSource(13648U);
    msg.setSourceEntity(2U);
    msg.setDestination(17837U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.48345952485875565;
    msg.beam_height = 0.16245659158423398;

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
    msg.setTimeStamp(0.6693969195905489);
    msg.setSource(64061U);
    msg.setSourceEntity(253U);
    msg.setDestination(13880U);
    msg.setDestinationEntity(135U);
    msg.beam_width = 0.34867543282105673;
    msg.beam_height = 0.18449388289409452;

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
    msg.setTimeStamp(0.7538357835777474);
    msg.setSource(40019U);
    msg.setSourceEntity(90U);
    msg.setDestination(6511U);
    msg.setDestinationEntity(54U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.0991948814712007);
    msg.setSource(35436U);
    msg.setSourceEntity(185U);
    msg.setDestination(2848U);
    msg.setDestinationEntity(206U);
    msg.sane = 149U;

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
    msg.setTimeStamp(0.3273242103543609);
    msg.setSource(57224U);
    msg.setSourceEntity(86U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(6U);
    msg.sane = 197U;

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
    msg.setTimeStamp(0.9186736341774662);
    msg.setSource(24333U);
    msg.setSourceEntity(188U);
    msg.setDestination(16553U);
    msg.setDestinationEntity(142U);
    msg.value = 0.3127414696018085;

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
    msg.setTimeStamp(0.8599874845876602);
    msg.setSource(44150U);
    msg.setSourceEntity(62U);
    msg.setDestination(41435U);
    msg.setDestinationEntity(3U);
    msg.value = 0.1984248519031474;

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
    msg.setTimeStamp(0.6929329359722209);
    msg.setSource(57167U);
    msg.setSourceEntity(0U);
    msg.setDestination(63826U);
    msg.setDestinationEntity(107U);
    msg.value = 0.16355136064563836;

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
    msg.setTimeStamp(0.43861979089277303);
    msg.setSource(61573U);
    msg.setSourceEntity(102U);
    msg.setDestination(32254U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7852250876313236;

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
    msg.setTimeStamp(0.9700054420529832);
    msg.setSource(43595U);
    msg.setSourceEntity(168U);
    msg.setDestination(47947U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5099525159600992;

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
    msg.setTimeStamp(0.6337423670648148);
    msg.setSource(50846U);
    msg.setSourceEntity(147U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5276671843356134;

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
    msg.setTimeStamp(0.3976933458708536);
    msg.setSource(32245U);
    msg.setSourceEntity(40U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(103U);
    msg.value = 0.9893063481294111;

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
    msg.setTimeStamp(0.3641721155124775);
    msg.setSource(14634U);
    msg.setSourceEntity(219U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(136U);
    msg.value = 0.20700759743872565;

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
    msg.setTimeStamp(0.8050173357525039);
    msg.setSource(34112U);
    msg.setSourceEntity(185U);
    msg.setDestination(8211U);
    msg.setDestinationEntity(229U);
    msg.value = 0.1412279353679312;

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
    msg.setTimeStamp(0.11725335491645117);
    msg.setSource(17503U);
    msg.setSourceEntity(97U);
    msg.setDestination(41483U);
    msg.setDestinationEntity(155U);
    msg.value = 0.08644841753098165;

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
    msg.setTimeStamp(0.8758328930324983);
    msg.setSource(56756U);
    msg.setSourceEntity(28U);
    msg.setDestination(14590U);
    msg.setDestinationEntity(158U);
    msg.value = 0.29524608146521714;

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
    msg.setTimeStamp(0.030409646447633554);
    msg.setSource(16091U);
    msg.setSourceEntity(33U);
    msg.setDestination(19883U);
    msg.setDestinationEntity(196U);
    msg.value = 0.14479534473251876;

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
    msg.setTimeStamp(0.10065314031436501);
    msg.setSource(4122U);
    msg.setSourceEntity(99U);
    msg.setDestination(59571U);
    msg.setDestinationEntity(101U);
    msg.value = 0.013703480847891525;

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
    msg.setTimeStamp(0.19484364620835204);
    msg.setSource(20266U);
    msg.setSourceEntity(227U);
    msg.setDestination(6997U);
    msg.setDestinationEntity(88U);
    msg.value = 0.02551077357094267;

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
    msg.setTimeStamp(0.6390362180024673);
    msg.setSource(56480U);
    msg.setSourceEntity(11U);
    msg.setDestination(26690U);
    msg.setDestinationEntity(43U);
    msg.value = 0.011527718195229353;

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
    msg.setTimeStamp(0.5458134033427114);
    msg.setSource(31173U);
    msg.setSourceEntity(90U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6104325022412528;

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
    msg.setTimeStamp(0.863321962161135);
    msg.setSource(29130U);
    msg.setSourceEntity(189U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(71U);
    msg.value = 0.07899000695546754;

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
    msg.setTimeStamp(0.5115789934323135);
    msg.setSource(25587U);
    msg.setSourceEntity(73U);
    msg.setDestination(59496U);
    msg.setDestinationEntity(195U);
    msg.value = 0.6780723296343742;

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
    msg.setTimeStamp(0.8004497695950371);
    msg.setSource(44010U);
    msg.setSourceEntity(16U);
    msg.setDestination(46629U);
    msg.setDestinationEntity(104U);
    msg.value = 0.3409908451387419;

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
    msg.setTimeStamp(0.4529957766863023);
    msg.setSource(24395U);
    msg.setSourceEntity(70U);
    msg.setDestination(53961U);
    msg.setDestinationEntity(236U);
    msg.value = 0.32901967812392885;

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
    msg.setTimeStamp(0.8047258200934113);
    msg.setSource(35551U);
    msg.setSourceEntity(195U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8364883890683182;

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
    msg.setTimeStamp(0.7321141737236291);
    msg.setSource(63536U);
    msg.setSourceEntity(130U);
    msg.setDestination(1569U);
    msg.setDestinationEntity(191U);
    msg.value = 0.7302139024757642;

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
    msg.setTimeStamp(0.1913473784289974);
    msg.setSource(60556U);
    msg.setSourceEntity(10U);
    msg.setDestination(38834U);
    msg.setDestinationEntity(59U);
    msg.value = 0.655558824803736;

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
    msg.setTimeStamp(0.23362487283268196);
    msg.setSource(48955U);
    msg.setSourceEntity(170U);
    msg.setDestination(18343U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9459274411959824;

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
    msg.setTimeStamp(0.06177719577038088);
    msg.setSource(16778U);
    msg.setSourceEntity(85U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(61U);
    msg.validity = 50105U;
    msg.type = 66U;
    msg.tow = 3778512903U;
    msg.base_lat = 0.39779096042094;
    msg.base_lon = 0.8806268625676478;
    msg.base_height = 0.10924218097276595;
    msg.n = 0.6387792595271142;
    msg.e = 0.3748942016036051;
    msg.d = 0.9968848776016836;
    msg.v_n = 0.799402287686365;
    msg.v_e = 0.48187915166903184;
    msg.v_d = 0.12984506284715258;
    msg.satellites = 219U;
    msg.iar_hyp = 15892U;
    msg.iar_ratio = 0.18066228628534808;

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
    msg.setTimeStamp(0.4080752450032985);
    msg.setSource(61449U);
    msg.setSourceEntity(64U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(196U);
    msg.validity = 55040U;
    msg.type = 182U;
    msg.tow = 3860997651U;
    msg.base_lat = 0.4624673244919695;
    msg.base_lon = 0.8474204645994237;
    msg.base_height = 0.7938953915010001;
    msg.n = 0.2430189477972433;
    msg.e = 0.4012061343573563;
    msg.d = 0.047108451552282604;
    msg.v_n = 0.22422024780983807;
    msg.v_e = 0.6041832701235015;
    msg.v_d = 0.898944241302471;
    msg.satellites = 194U;
    msg.iar_hyp = 5038U;
    msg.iar_ratio = 0.7285414082459946;

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
    msg.setTimeStamp(0.8667741318038483);
    msg.setSource(10444U);
    msg.setSourceEntity(168U);
    msg.setDestination(50726U);
    msg.setDestinationEntity(153U);
    msg.validity = 4302U;
    msg.type = 214U;
    msg.tow = 3737284738U;
    msg.base_lat = 0.14799106421159247;
    msg.base_lon = 0.6307940589577219;
    msg.base_height = 0.42033478671040103;
    msg.n = 0.8180707911617997;
    msg.e = 0.9160614931420076;
    msg.d = 0.14592553495417349;
    msg.v_n = 0.7939694930034926;
    msg.v_e = 0.14028244959657976;
    msg.v_d = 0.2157931507878239;
    msg.satellites = 153U;
    msg.iar_hyp = 2557U;
    msg.iar_ratio = 0.3825845018185905;

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
    msg.setTimeStamp(0.04783065487704763);
    msg.setSource(2603U);
    msg.setSourceEntity(247U);
    msg.setDestination(6858U);
    msg.setDestinationEntity(35U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.46100722541704575;
    tmp_msg_0.lon = 0.0707204187104693;
    tmp_msg_0.height = 0.6752883444824179;
    tmp_msg_0.x = 0.9880933836892583;
    tmp_msg_0.y = 0.4407260127399223;
    tmp_msg_0.z = 0.2374302691410206;
    tmp_msg_0.phi = 0.8101269436810977;
    tmp_msg_0.theta = 0.23209264103126626;
    tmp_msg_0.psi = 0.407668339822037;
    tmp_msg_0.u = 0.6362515848976846;
    tmp_msg_0.v = 0.14096983253352557;
    tmp_msg_0.w = 0.11280192055809202;
    tmp_msg_0.vx = 0.9398238430692184;
    tmp_msg_0.vy = 0.7490710397254455;
    tmp_msg_0.vz = 0.5443355797511988;
    tmp_msg_0.p = 0.14914855174792563;
    tmp_msg_0.q = 0.8009808297970342;
    tmp_msg_0.r = 0.572388838989384;
    tmp_msg_0.depth = 0.4433531857939699;
    tmp_msg_0.alt = 0.6815728351226868;
    msg.state.set(tmp_msg_0);
    msg.type = 24U;

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
    msg.setTimeStamp(0.34286184041966616);
    msg.setSource(47321U);
    msg.setSourceEntity(22U);
    msg.setDestination(16326U);
    msg.setDestinationEntity(130U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8737936107061018;
    tmp_msg_0.lon = 0.9003144601005093;
    tmp_msg_0.height = 0.7848294574524579;
    tmp_msg_0.x = 0.18420435544284475;
    tmp_msg_0.y = 0.9537774782852826;
    tmp_msg_0.z = 0.8909878998569266;
    tmp_msg_0.phi = 0.4392627506535711;
    tmp_msg_0.theta = 0.8894966791127884;
    tmp_msg_0.psi = 0.740973070564157;
    tmp_msg_0.u = 0.37279828453097685;
    tmp_msg_0.v = 0.6059388459617302;
    tmp_msg_0.w = 0.19376627193918783;
    tmp_msg_0.vx = 0.29162051271252354;
    tmp_msg_0.vy = 0.397030077830434;
    tmp_msg_0.vz = 0.505158249279405;
    tmp_msg_0.p = 0.472535079045561;
    tmp_msg_0.q = 0.7225291652659506;
    tmp_msg_0.r = 0.3048681486609546;
    tmp_msg_0.depth = 0.42324195117007;
    tmp_msg_0.alt = 0.7618698124438471;
    msg.state.set(tmp_msg_0);
    msg.type = 130U;

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
    msg.setTimeStamp(0.5943901099157817);
    msg.setSource(16839U);
    msg.setSourceEntity(70U);
    msg.setDestination(56886U);
    msg.setDestinationEntity(162U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.855223143097097;
    tmp_msg_0.lon = 0.8829334221272158;
    tmp_msg_0.height = 0.09641234831077605;
    tmp_msg_0.x = 0.6065949137279648;
    tmp_msg_0.y = 0.4397202718227715;
    tmp_msg_0.z = 0.7292269999184892;
    tmp_msg_0.phi = 0.15914327082019963;
    tmp_msg_0.theta = 0.3969955958156469;
    tmp_msg_0.psi = 0.28654772685096475;
    tmp_msg_0.u = 0.6945269879066701;
    tmp_msg_0.v = 0.9826891716943177;
    tmp_msg_0.w = 0.44898983213224297;
    tmp_msg_0.vx = 0.008806322429882218;
    tmp_msg_0.vy = 0.22215305339136437;
    tmp_msg_0.vz = 0.0346027273070586;
    tmp_msg_0.p = 0.46985668962911187;
    tmp_msg_0.q = 0.3456135384014333;
    tmp_msg_0.r = 0.838010954322259;
    tmp_msg_0.depth = 0.6061050679316052;
    tmp_msg_0.alt = 0.6994401655061414;
    msg.state.set(tmp_msg_0);
    msg.type = 135U;

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
    msg.setTimeStamp(0.4418612212650046);
    msg.setSource(17702U);
    msg.setSourceEntity(25U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7575725175744684;

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
    msg.setTimeStamp(0.215514530279993);
    msg.setSource(40840U);
    msg.setSourceEntity(136U);
    msg.setDestination(16471U);
    msg.setDestinationEntity(99U);
    msg.value = 0.9271719681470902;

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
    msg.setTimeStamp(0.29728151905167777);
    msg.setSource(56067U);
    msg.setSourceEntity(125U);
    msg.setDestination(48334U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5183184478392627;

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
    msg.setTimeStamp(0.30160130944234664);
    msg.setSource(30230U);
    msg.setSourceEntity(201U);
    msg.setDestination(33256U);
    msg.setDestinationEntity(68U);
    msg.value = 0.010885081580160327;

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
    msg.setTimeStamp(0.7198249982402563);
    msg.setSource(13157U);
    msg.setSourceEntity(217U);
    msg.setDestination(16396U);
    msg.setDestinationEntity(226U);
    msg.value = 0.4113053198350588;

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
    msg.setTimeStamp(0.13215677146034754);
    msg.setSource(12775U);
    msg.setSourceEntity(33U);
    msg.setDestination(55419U);
    msg.setDestinationEntity(62U);
    msg.value = 0.2447920902944407;

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
    msg.setTimeStamp(0.06405026800179325);
    msg.setSource(38762U);
    msg.setSourceEntity(49U);
    msg.setDestination(54153U);
    msg.setDestinationEntity(84U);
    msg.value = 0.17667380604187521;

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
    msg.setTimeStamp(0.47330867571440816);
    msg.setSource(28076U);
    msg.setSourceEntity(237U);
    msg.setDestination(32354U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7170034238764252;

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
    msg.setTimeStamp(0.5118476267130667);
    msg.setSource(63544U);
    msg.setSourceEntity(48U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7489475234975379;

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
    msg.setTimeStamp(0.6205054547817521);
    msg.setSource(57385U);
    msg.setSourceEntity(239U);
    msg.setDestination(43625U);
    msg.setDestinationEntity(150U);
    msg.value = 0.8124549651086262;

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
    msg.setTimeStamp(0.2626904731809472);
    msg.setSource(24010U);
    msg.setSourceEntity(27U);
    msg.setDestination(28815U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5984994219299894;

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
    msg.setTimeStamp(0.2236966859887245);
    msg.setSource(8645U);
    msg.setSourceEntity(111U);
    msg.setDestination(15269U);
    msg.setDestinationEntity(42U);
    msg.value = 0.2110287511515191;

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
    msg.setTimeStamp(0.6732985154706727);
    msg.setSource(34469U);
    msg.setSourceEntity(47U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(26U);
    msg.value = 0.057836138182987495;

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
    msg.setTimeStamp(0.8442471089604705);
    msg.setSource(41372U);
    msg.setSourceEntity(58U);
    msg.setDestination(51955U);
    msg.setDestinationEntity(66U);
    msg.value = 0.7967378254804592;

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
    msg.setTimeStamp(0.9529237567097497);
    msg.setSource(19194U);
    msg.setSourceEntity(20U);
    msg.setDestination(45070U);
    msg.setDestinationEntity(138U);
    msg.value = 0.8713845400567869;

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
    msg.setTimeStamp(0.39394103888682797);
    msg.setSource(12346U);
    msg.setSourceEntity(83U);
    msg.setDestination(24447U);
    msg.setDestinationEntity(224U);
    msg.id = 199U;
    msg.zoom = 136U;
    msg.action = 0U;

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
    msg.setTimeStamp(0.9036938610678129);
    msg.setSource(18752U);
    msg.setSourceEntity(73U);
    msg.setDestination(26151U);
    msg.setDestinationEntity(191U);
    msg.id = 217U;
    msg.zoom = 95U;
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
    msg.setTimeStamp(0.5866745554017614);
    msg.setSource(55846U);
    msg.setSourceEntity(36U);
    msg.setDestination(49164U);
    msg.setDestinationEntity(147U);
    msg.id = 150U;
    msg.zoom = 168U;
    msg.action = 212U;

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
    msg.setTimeStamp(0.8151998606783852);
    msg.setSource(33642U);
    msg.setSourceEntity(121U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(106U);
    msg.id = 25U;
    msg.value = 0.6030872171656668;

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
    msg.setTimeStamp(0.4871094214369741);
    msg.setSource(27463U);
    msg.setSourceEntity(11U);
    msg.setDestination(61095U);
    msg.setDestinationEntity(132U);
    msg.id = 166U;
    msg.value = 0.7315671273688816;

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
    msg.setTimeStamp(0.763451003462571);
    msg.setSource(3162U);
    msg.setSourceEntity(238U);
    msg.setDestination(56539U);
    msg.setDestinationEntity(104U);
    msg.id = 169U;
    msg.value = 0.5082556582339179;

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
    msg.setTimeStamp(0.7155252771747966);
    msg.setSource(31356U);
    msg.setSourceEntity(57U);
    msg.setDestination(39832U);
    msg.setDestinationEntity(253U);
    msg.id = 120U;
    msg.value = 0.5853643180263779;

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
    msg.setTimeStamp(0.48261297546920656);
    msg.setSource(2128U);
    msg.setSourceEntity(70U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(189U);
    msg.id = 41U;
    msg.value = 0.557223772346374;

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
    msg.setTimeStamp(0.1008812140123252);
    msg.setSource(42039U);
    msg.setSourceEntity(235U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(103U);
    msg.id = 31U;
    msg.value = 0.3081225429380572;

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
    msg.setTimeStamp(0.799348045044817);
    msg.setSource(33797U);
    msg.setSourceEntity(153U);
    msg.setDestination(2582U);
    msg.setDestinationEntity(60U);
    msg.id = 189U;
    msg.angle = 0.030324901150114658;

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
    msg.setTimeStamp(0.2754907240203158);
    msg.setSource(39548U);
    msg.setSourceEntity(15U);
    msg.setDestination(25032U);
    msg.setDestinationEntity(121U);
    msg.id = 5U;
    msg.angle = 0.08791387105853521;

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
    msg.setTimeStamp(0.20045200784198458);
    msg.setSource(35657U);
    msg.setSourceEntity(113U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(195U);
    msg.id = 97U;
    msg.angle = 0.6650929121872546;

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
    msg.setTimeStamp(0.9344297207778335);
    msg.setSource(9618U);
    msg.setSourceEntity(1U);
    msg.setDestination(9089U);
    msg.setDestinationEntity(155U);
    msg.op = 57U;
    msg.actions.assign("FGCYUQWJYLIUOAXWRANGCFNBOWJQQAICGDWDBMAZHDAQOQEBSXMPVYRGIMEMLKFTGJMINSUJROJHHFKSNSZTFBWXXRYDDTTO");

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
    msg.setTimeStamp(0.5430427253610375);
    msg.setSource(60752U);
    msg.setSourceEntity(154U);
    msg.setDestination(50859U);
    msg.setDestinationEntity(0U);
    msg.op = 21U;
    msg.actions.assign("LVKFFMAWUIXIJXQZNOBIMXXJXRMKTGPILYYHNGPGDFFPMIRRQPOJWUUWLQKERTWCJHMZDGGPUAYOTSHHEKHYQASVLVVATVKR");

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
    msg.setTimeStamp(0.3263283161745405);
    msg.setSource(50714U);
    msg.setSourceEntity(221U);
    msg.setDestination(38371U);
    msg.setDestinationEntity(182U);
    msg.op = 44U;
    msg.actions.assign("SIQGBYSPNXEXHWRUMZKMDRZTOKMRKRMTDWGSESGEMCUWBPPHOFOPGGAWJYMDZPYIMZHJDYFALSJTNNHZMCLGXUVYDCUUUYFWQZLBQXJDUAFAFJFPHNOWHHIVQGQHRUVWCRYNTYCOZWEFTBFPCKKTNJARKXAXWOCSDDXNQKBYXAIKPLQXWGGEIQEVNMALIHCBFBNXSTBZLOOVJOSEKCJTEIMVRSDEYZHIPJKVIDCLZSRJLVVORFPIBVTTQG");

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
    msg.setTimeStamp(0.5492634195628441);
    msg.setSource(41138U);
    msg.setSourceEntity(7U);
    msg.setDestination(62941U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("HTPTGBNQYSIECBSGMPIRYFRQIXAJMRVQSYSGKAOVDMFBUCZAUVTIIRKCADPEKQNMKPOXVDCXXKOPOFTOFPKQBELDVFGEHJCRYHEYMJCQGBYUJNQEXNFYOGBCWRNPUDUJEFBXEFRTZLNNLAZGSEWBCUVIBZMW");

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
    msg.setTimeStamp(0.0927594987233964);
    msg.setSource(42241U);
    msg.setSourceEntity(171U);
    msg.setDestination(33122U);
    msg.setDestinationEntity(121U);
    msg.actions.assign("EZRYTGSOGSAJDFIMCGSWFRRSIWWABZNNAKTLZSFRSMCIQVIYEPRWXMVCCWALJYMOHUSRPYEIDQBYPBGNVVQZKMOEQKCOHDLBDPAZVSOXMEMTZKEWZUDNCLIUVXATQTNUKNDNUCRGQXXKMLQWLFEUWHQLFDGFVFA");

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
    msg.setTimeStamp(0.16189684317514275);
    msg.setSource(33822U);
    msg.setSourceEntity(158U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(232U);
    msg.actions.assign("YGUXYFZIXBPASWWTPECYJQVPCAWSBFUMOHADRNOBOEPMRXCQWFUKNBVOVATYHVJMYMYWGLUFZSZTCNGBDGGMVBXINECYYRUYSCZOJQRJKEFMXWDK");

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
    msg.setTimeStamp(0.05578404388538061);
    msg.setSource(32022U);
    msg.setSourceEntity(145U);
    msg.setDestination(61971U);
    msg.setDestinationEntity(223U);
    msg.button = 213U;
    msg.value = 202U;

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
    msg.setTimeStamp(0.42548493271703014);
    msg.setSource(51775U);
    msg.setSourceEntity(64U);
    msg.setDestination(47133U);
    msg.setDestinationEntity(234U);
    msg.button = 106U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.14696624733548036);
    msg.setSource(9925U);
    msg.setSourceEntity(66U);
    msg.setDestination(17251U);
    msg.setDestinationEntity(101U);
    msg.button = 122U;
    msg.value = 139U;

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
    msg.setTimeStamp(0.29942021263155927);
    msg.setSource(48896U);
    msg.setSourceEntity(234U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(152U);
    msg.op = 181U;
    msg.text.assign("KJFFVPSPEDHEZBGJCDGOJQLLTEVYMJLSIAXJPCYSYQMSVGCVMPODMZCXCKACCHLCNWUWBTGRBVOVHTYBOEAWAAKMXDQIZGBOUUKAWRGKHIZFLTZNQAVFHPXUFQ");

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
    msg.setTimeStamp(0.367226770092818);
    msg.setSource(45927U);
    msg.setSourceEntity(77U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(151U);
    msg.op = 142U;
    msg.text.assign("YVKNNEEPRQTVFGWKICMNKMYWCMQPSKJXQKECZIFAUM");

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
    msg.setTimeStamp(0.49362867762986595);
    msg.setSource(10913U);
    msg.setSourceEntity(225U);
    msg.setDestination(43037U);
    msg.setDestinationEntity(3U);
    msg.op = 87U;
    msg.text.assign("MCGFDRUKMHDHZYAOGCMHIYBGLPOTJUBEEKNQUBFVBSYHVCIAQTFTBXURNFPSXZMSLXLNAFYQOZOTC");

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
    msg.setTimeStamp(0.36708598424525807);
    msg.setSource(17167U);
    msg.setSourceEntity(67U);
    msg.setDestination(35483U);
    msg.setDestinationEntity(85U);
    msg.op = 148U;
    msg.time_remain = 0.7083518280099277;
    msg.sched_time = 0.20670554208055503;

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
    msg.setTimeStamp(0.025820695046449793);
    msg.setSource(41466U);
    msg.setSourceEntity(237U);
    msg.setDestination(42140U);
    msg.setDestinationEntity(76U);
    msg.op = 242U;
    msg.time_remain = 0.1872375767161557;
    msg.sched_time = 0.6096795751747512;

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
    msg.setTimeStamp(0.41761907516297914);
    msg.setSource(63641U);
    msg.setSourceEntity(5U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(13U);
    msg.op = 53U;
    msg.time_remain = 0.7118450837378958;
    msg.sched_time = 0.5536319790627716;

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
    msg.setTimeStamp(0.05078016045962286);
    msg.setSource(61737U);
    msg.setSourceEntity(168U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(87U);
    msg.name.assign("EETSITVEIBFHHACIZQLXVOJKMNBGCOSCVTYCL");
    msg.op = 60U;
    msg.sched_time = 0.7124807901544006;

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
    msg.setTimeStamp(0.38647676941279496);
    msg.setSource(18301U);
    msg.setSourceEntity(78U);
    msg.setDestination(35357U);
    msg.setDestinationEntity(95U);
    msg.name.assign("JGBCNCSUSFMPQFDPGAYTTMKWWEIYJGJZSHQOXXPTONQCXLDZINPHKEZJSDEFCDUFRHDJFXTMOAOIHHFVLXNJPHILBOHNEVMAOKZXRLGWPZYPDXPEMWXCQECNYUTGBYBUBAFX");
    msg.op = 178U;
    msg.sched_time = 0.8204559488302751;

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
    msg.setTimeStamp(0.6812425130617331);
    msg.setSource(20657U);
    msg.setSourceEntity(91U);
    msg.setDestination(4569U);
    msg.setDestinationEntity(1U);
    msg.name.assign("NYRNVGDODRTUWGXHFATEHRZBXNEBWLSGOMJXRJATGYWLVVHUNTRBCYPLAXZQDYZJSOFWMVINNSYTHTSQMOUJKGRC");
    msg.op = 69U;
    msg.sched_time = 0.6517058577016894;

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
    msg.setTimeStamp(0.6912618362217179);
    msg.setSource(14040U);
    msg.setSourceEntity(25U);
    msg.setDestination(63168U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.3172262708813316);
    msg.setSource(27902U);
    msg.setSourceEntity(249U);
    msg.setDestination(8130U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.568569752517125);
    msg.setSource(54220U);
    msg.setSourceEntity(64U);
    msg.setDestination(23779U);
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
    msg.setTimeStamp(0.35305990805622867);
    msg.setSource(593U);
    msg.setSourceEntity(1U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(155U);
    msg.name.assign("ZVJRZLEEOIBDNUSSTBTCZNDHHWKTMSHVZFPDCJRQXSKHIABQWBEQSKYXXPUEIGEHXARVGMQZLJUXNUZAAWKMOYMVJLKXDNVROXBMASCHRUUFZTBQLAFDIHDRAWFQIJCLDHJROIICWTJYGARKJGEFCFPLWGHYDIVVY");
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
    msg.setTimeStamp(0.8744396330550687);
    msg.setSource(20937U);
    msg.setSourceEntity(33U);
    msg.setDestination(4993U);
    msg.setDestinationEntity(217U);
    msg.name.assign("FNHIFNIPIYAANVOSEZPWSLYINYUEZVAQMQSDRFCQOUJMGHJRKFGBJTLXVCBJEXDRBBWBKWUAMKLSHGBPOFMXAXJXFRVRPRYQVFDYSHOJEFOWBTKUKLTZTGZKYKJKWYCPHUOGDTXDZQMXDNYDHEOWZKTZJKXATPVYCIMGSXWFNNCMRXVLWQHWLTPUNDQYLIAJTJPEOQOLSUUIMBMZQHUBCRCLCIG");
    msg.state = 153U;

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
    msg.setTimeStamp(0.7977684418104933);
    msg.setSource(51650U);
    msg.setSourceEntity(184U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(59U);
    msg.name.assign("JZCREXFIUDNXFOLULJPOCWRFXCUQSQDNLCAIXVISUTRRFBENTYEBVROMGXWXGPKQSAXJYWWARUYEGORTBFRDKIHJVUANMKWVPGMHGOJJUCYTKFYSYATXKUZASAMHYCOZVQEBHUENTKSPBTMGSCTTKBDRHZGNCHDNJPLKPNNVWRIWZGHAHYUBSLLMSPXIHPAIJODZFIZQKMBV");
    msg.state = 130U;

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
    msg.setTimeStamp(0.2048112495476887);
    msg.setSource(6415U);
    msg.setSourceEntity(188U);
    msg.setDestination(56270U);
    msg.setDestinationEntity(28U);
    msg.name.assign("UCOFDIRFSSQCEJOYBHGLQZGNMZWIDDXVKUXBGIZUVHJOFDYSQXLTUITKHSDEGUTDULDAOFVGIUPKPRBZZURYMASWQVCYPQBDBYMWTKINEGAZHMSPMMPJPLOQYJJBVLINAXVQRYNJQLEHZMLOGEOXKNLTEPFTNSYBMRUHXWWFRSCWVEECOGNAUNBHWXCRKIKHSKXAHWMCIFJMFKSNYWKDLRCE");
    msg.value = 116U;

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
    msg.setTimeStamp(0.9389848793334592);
    msg.setSource(39310U);
    msg.setSourceEntity(148U);
    msg.setDestination(15669U);
    msg.setDestinationEntity(122U);
    msg.name.assign("TVNABGSHFCVUFROLDBUERIDOPCXMDIQLKTHUBIAUGMOQQFDASWMINENCIQUFPXEYEMSZIFSYSYWLPKGBLAQRGZAGWZBLOXFMDSKKTIUZVPFLQXERZACICN");
    msg.value = 244U;

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
    msg.setTimeStamp(0.6803847931174207);
    msg.setSource(53980U);
    msg.setSourceEntity(66U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(212U);
    msg.name.assign("GFJSSQGVKLNUICAFLDBDLGYPSTIZFKJRVMGMRQBUFSNMHCOLINEPZYRXDCJJDNNTODHDHAMPAXVTYQKUKZLGXXOETROYFMAERWJEIEQPGAFXOXPSIPKYUTDXMCBSWKWKMJZPDTJPGLAHUVIEBZCZVRWZXHIMSSQBCBOKTDBBDRNQKXONFQETWCHYHWQKXLUUSJAIEWL");
    msg.value = 192U;

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
    msg.setTimeStamp(0.4833818511160738);
    msg.setSource(29080U);
    msg.setSourceEntity(62U);
    msg.setDestination(24980U);
    msg.setDestinationEntity(237U);
    msg.name.assign("KHMJMNEEDNKGMJAGSBBJFFGVFLXONMZLZYOFWREQFOHOMXMNLPQIVJCVYRLKIAOYTBUQEWLXHXENOWLYZSPWWVGF");

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
    msg.setTimeStamp(0.19048857134489627);
    msg.setSource(28142U);
    msg.setSourceEntity(241U);
    msg.setDestination(40069U);
    msg.setDestinationEntity(253U);
    msg.name.assign("PEYUZVKDINNGQOUXLOWBMVRUXPYVJGVOYKQJNHMDCBFABCUIRXNEDKKKKNTBKPRMVEHOCTLXDCAEJRGQHZOHOXWWEMKOFFWHFZMFEMTQFPTBYPIDXJQSUYUVMCCDJWQEIZTWUSSQGMWBPHZBILSZSYIIBDHYVDSTUXHQEPLAMLEAVJTRATLIKWQCJPNUTZAPSSGBGFRFHBZNAA");

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
    msg.setTimeStamp(0.5210654964736368);
    msg.setSource(2969U);
    msg.setSourceEntity(210U);
    msg.setDestination(23417U);
    msg.setDestinationEntity(237U);
    msg.name.assign("RZFRNTCGCCURGQFGVAOSSREASBNMHXKCXLYGNLBPGJDWHTMXIETUHLLPLQQNJMCWEEAOXAHBMMTPYIIUJHEEXZCZYPDBZHJLVUWPKQLITLHAOVVUJIKNOISDFTUSSBRKOZDPUNSWPWCBZCPXJSKVEYIFYYCGTKJBOVVWADEYFCBKHLFUFKUXRDQXRZQVGQEOQZPDDMFALWFAWHTKVJDRRNXIYTXOOPZASWNBWQMMBONKMTFGZGYISRQJNUIH");

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
    msg.setTimeStamp(0.8699851393376298);
    msg.setSource(49844U);
    msg.setSourceEntity(75U);
    msg.setDestination(32154U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RXHMXQMMIASBLAJDJLBYCYFFANCRXKCUODWZVFCZWBRWPSLRLZRNUOUKYGEAQVATXCQUATBXUVINEYMNRDRMOHGTZVOSEKSTHFJLCSE");
    msg.value = 222U;

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
    msg.setTimeStamp(0.3543946927406205);
    msg.setSource(55099U);
    msg.setSourceEntity(162U);
    msg.setDestination(33312U);
    msg.setDestinationEntity(120U);
    msg.name.assign("RJLKIQHMOBIQERGBNDDCEVRUSTLZXHWVEUKKDDIWHFAOELTJQNPKEOEMRGVQLFZHBUNMMGFIPVLJNASACPGRXSFGASRSITMXMJPYFVGZKYJYKDOROGCYDCINTIHMCVTOTBYKHEDBFZAKSWBGLKUXJCKYEPLZCHDRVQCSJUXWEN");
    msg.value = 85U;

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
    msg.setTimeStamp(0.4158428158163213);
    msg.setSource(43067U);
    msg.setSourceEntity(121U);
    msg.setDestination(9877U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FGYRWIDVTVOTJTARVLWHEDPKFCZRPYVVGDCLMHPTSENLQKTXBANHWBUUJWIOBTOJRFTAUSYPIXSSRPKMUKFQCHYCJG");
    msg.value = 13U;

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
    msg.setTimeStamp(0.44394696436677883);
    msg.setSource(25840U);
    msg.setSourceEntity(94U);
    msg.setDestination(5109U);
    msg.setDestinationEntity(74U);
    msg.id = 56U;
    msg.period = 3656088740U;
    msg.duty_cycle = 2505473577U;

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
    msg.setTimeStamp(0.9131547369791984);
    msg.setSource(3924U);
    msg.setSourceEntity(214U);
    msg.setDestination(45572U);
    msg.setDestinationEntity(245U);
    msg.id = 91U;
    msg.period = 4135685967U;
    msg.duty_cycle = 3337689858U;

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
    msg.setTimeStamp(0.18571478813438236);
    msg.setSource(14795U);
    msg.setSourceEntity(7U);
    msg.setDestination(34415U);
    msg.setDestinationEntity(100U);
    msg.id = 156U;
    msg.period = 1782372052U;
    msg.duty_cycle = 4239592488U;

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
    msg.setTimeStamp(0.5003944864718409);
    msg.setSource(33832U);
    msg.setSourceEntity(88U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(146U);
    msg.id = 90U;
    msg.period = 2971809232U;
    msg.duty_cycle = 2594658441U;

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
    msg.setTimeStamp(0.6456162429040937);
    msg.setSource(62051U);
    msg.setSourceEntity(239U);
    msg.setDestination(33419U);
    msg.setDestinationEntity(21U);
    msg.id = 220U;
    msg.period = 1889043006U;
    msg.duty_cycle = 2543740740U;

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
    msg.setTimeStamp(0.19809049670009637);
    msg.setSource(3680U);
    msg.setSourceEntity(96U);
    msg.setDestination(736U);
    msg.setDestinationEntity(131U);
    msg.id = 196U;
    msg.period = 2434954873U;
    msg.duty_cycle = 2163337105U;

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
    msg.setTimeStamp(0.7514662254403413);
    msg.setSource(21923U);
    msg.setSourceEntity(189U);
    msg.setDestination(10755U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.7668558128311839;
    msg.lon = 0.5084501575666787;
    msg.height = 0.6524272339315516;
    msg.x = 0.8619577579182321;
    msg.y = 0.5315251023157049;
    msg.z = 0.28266678276211443;
    msg.phi = 0.019559795431584703;
    msg.theta = 0.6206720109602597;
    msg.psi = 0.817008239570032;
    msg.u = 0.06665438975720284;
    msg.v = 0.8157802212580114;
    msg.w = 0.30801443199820466;
    msg.vx = 0.21196573737141755;
    msg.vy = 0.5240565108150441;
    msg.vz = 0.776667171704741;
    msg.p = 0.5407648111500089;
    msg.q = 0.0751372435185722;
    msg.r = 0.03361189809978615;
    msg.depth = 0.7703185504725679;
    msg.alt = 0.47687555106437696;

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
    msg.setTimeStamp(0.9460136751898103);
    msg.setSource(36954U);
    msg.setSourceEntity(57U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.051781239553034264;
    msg.lon = 0.4768646637323817;
    msg.height = 0.3695664194432664;
    msg.x = 0.11913470532001547;
    msg.y = 0.1635739654330326;
    msg.z = 0.6351531132779867;
    msg.phi = 0.6017828001986926;
    msg.theta = 0.8559485023717638;
    msg.psi = 0.30108168441983785;
    msg.u = 0.9092044562807252;
    msg.v = 0.12274107800648304;
    msg.w = 0.8556633957493803;
    msg.vx = 0.6112065245027887;
    msg.vy = 0.3655174643314477;
    msg.vz = 0.2671240784431278;
    msg.p = 0.6358840769402109;
    msg.q = 0.12460840694752007;
    msg.r = 0.7149380824230972;
    msg.depth = 0.4580074588148525;
    msg.alt = 0.6265416532492809;

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
    msg.setTimeStamp(0.4803295582442553);
    msg.setSource(30980U);
    msg.setSourceEntity(142U);
    msg.setDestination(25342U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.9117230518927075;
    msg.lon = 0.9588852431782472;
    msg.height = 0.7182896523631077;
    msg.x = 0.8079344021729397;
    msg.y = 0.1954461922198487;
    msg.z = 0.44050464236593456;
    msg.phi = 0.4630847326890566;
    msg.theta = 0.9628613773785157;
    msg.psi = 0.6661408299681936;
    msg.u = 0.875606569302162;
    msg.v = 0.5750045317916013;
    msg.w = 0.9864565662048759;
    msg.vx = 0.6588180583975795;
    msg.vy = 0.7956465096767285;
    msg.vz = 0.5670503375437588;
    msg.p = 0.45025482420657614;
    msg.q = 0.1791017729196409;
    msg.r = 0.9277819938459337;
    msg.depth = 0.2687335190069209;
    msg.alt = 0.07772172695546364;

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
    msg.setTimeStamp(0.7043271538621927);
    msg.setSource(17036U);
    msg.setSourceEntity(193U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(233U);
    msg.x = 0.770232114143022;
    msg.y = 0.8815069007066573;
    msg.z = 0.14420582509906565;

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
    msg.setTimeStamp(0.4153704492289);
    msg.setSource(30185U);
    msg.setSourceEntity(138U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(64U);
    msg.x = 0.726248927999547;
    msg.y = 0.7798077859204964;
    msg.z = 0.14642379056158672;

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
    msg.setTimeStamp(0.8265750774118961);
    msg.setSource(1190U);
    msg.setSourceEntity(231U);
    msg.setDestination(2585U);
    msg.setDestinationEntity(132U);
    msg.x = 0.5186046233205689;
    msg.y = 0.9694325124589215;
    msg.z = 0.7667464067319687;

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
    msg.setTimeStamp(0.8613767753768318);
    msg.setSource(7056U);
    msg.setSourceEntity(147U);
    msg.setDestination(58215U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8301688476246653;

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
    msg.setTimeStamp(0.8328743723083546);
    msg.setSource(48277U);
    msg.setSourceEntity(181U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7856955720882708;

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
    msg.setTimeStamp(0.632462088251064);
    msg.setSource(36588U);
    msg.setSourceEntity(68U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8191029910486659;

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
    msg.setTimeStamp(0.20056625020755237);
    msg.setSource(18057U);
    msg.setSourceEntity(220U);
    msg.setDestination(12006U);
    msg.setDestinationEntity(164U);
    msg.value = 0.05540975028234196;

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
    msg.setTimeStamp(0.734132772289396);
    msg.setSource(3321U);
    msg.setSourceEntity(202U);
    msg.setDestination(8434U);
    msg.setDestinationEntity(53U);
    msg.value = 0.9217836886203361;

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
    msg.setTimeStamp(0.4914859003381086);
    msg.setSource(14685U);
    msg.setSourceEntity(112U);
    msg.setDestination(41596U);
    msg.setDestinationEntity(208U);
    msg.value = 0.743217830933021;

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
    msg.setTimeStamp(0.7873295097306217);
    msg.setSource(59158U);
    msg.setSourceEntity(97U);
    msg.setDestination(63111U);
    msg.setDestinationEntity(71U);
    msg.x = 0.6754108614815615;
    msg.y = 0.038269741712100735;
    msg.z = 0.2588063181292546;
    msg.phi = 0.026807824206987463;
    msg.theta = 0.30650930987979674;
    msg.psi = 0.21101045167281818;
    msg.p = 0.9996683895595054;
    msg.q = 0.16170016102389018;
    msg.r = 0.389497081963075;
    msg.u = 0.6150001379128615;
    msg.v = 0.8103146149908442;
    msg.w = 0.45086129262658836;
    msg.bias_psi = 0.48632621674859067;
    msg.bias_r = 0.23602232470518425;

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
    msg.setTimeStamp(0.9392852301919702);
    msg.setSource(63460U);
    msg.setSourceEntity(211U);
    msg.setDestination(29115U);
    msg.setDestinationEntity(202U);
    msg.x = 0.40184014255279565;
    msg.y = 0.12927948540842082;
    msg.z = 0.6727877144580852;
    msg.phi = 0.2793279517940176;
    msg.theta = 0.6951608560841177;
    msg.psi = 0.16956600228785546;
    msg.p = 0.23937740993631174;
    msg.q = 0.7829420723776328;
    msg.r = 0.5928009649030787;
    msg.u = 0.4802103170155626;
    msg.v = 0.6856076233407375;
    msg.w = 0.09631477594772198;
    msg.bias_psi = 0.9976521902891168;
    msg.bias_r = 0.2497457479082481;

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
    msg.setTimeStamp(0.05784370198554867);
    msg.setSource(92U);
    msg.setSourceEntity(180U);
    msg.setDestination(25420U);
    msg.setDestinationEntity(217U);
    msg.x = 0.7239360576724919;
    msg.y = 0.5817724982415905;
    msg.z = 0.5146241883593565;
    msg.phi = 0.7646392595814158;
    msg.theta = 0.27300610853721985;
    msg.psi = 0.0655374066265868;
    msg.p = 0.46716229011564525;
    msg.q = 0.6420437528595977;
    msg.r = 0.9285264751049709;
    msg.u = 0.04244777984598613;
    msg.v = 0.5888102225510384;
    msg.w = 0.968486902320018;
    msg.bias_psi = 0.15712177085652557;
    msg.bias_r = 0.2285577685772271;

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
    msg.setTimeStamp(0.2971746717065411);
    msg.setSource(32114U);
    msg.setSourceEntity(150U);
    msg.setDestination(56320U);
    msg.setDestinationEntity(226U);
    msg.bias_psi = 0.05651280139508774;
    msg.bias_r = 0.31157174833677337;
    msg.cog = 0.19084041592600254;
    msg.cyaw = 0.9900636700609334;
    msg.lbl_rej_level = 0.80023230430737;
    msg.gps_rej_level = 0.9824159644550645;
    msg.custom_x = 0.6082567270484002;
    msg.custom_y = 0.9068342525224724;
    msg.custom_z = 0.16966839192954297;

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
    msg.setTimeStamp(0.18715850490636288);
    msg.setSource(38128U);
    msg.setSourceEntity(24U);
    msg.setDestination(42155U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.6057324980333811;
    msg.bias_r = 0.6383357820939536;
    msg.cog = 0.8856899765062276;
    msg.cyaw = 0.43205798052674294;
    msg.lbl_rej_level = 0.6516502013611266;
    msg.gps_rej_level = 0.8056253061948307;
    msg.custom_x = 0.03234664939185794;
    msg.custom_y = 0.007494265739716122;
    msg.custom_z = 0.5911141108374504;

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
    msg.setTimeStamp(0.7526814119940171);
    msg.setSource(45307U);
    msg.setSourceEntity(223U);
    msg.setDestination(61014U);
    msg.setDestinationEntity(59U);
    msg.bias_psi = 0.12289923374187905;
    msg.bias_r = 0.3304044555941046;
    msg.cog = 0.77974316151688;
    msg.cyaw = 0.640062744632563;
    msg.lbl_rej_level = 0.5356181483984623;
    msg.gps_rej_level = 0.04626458977315573;
    msg.custom_x = 0.861140620535898;
    msg.custom_y = 0.4828236114389606;
    msg.custom_z = 0.8221883011330245;

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
    msg.setTimeStamp(0.10763763676337468);
    msg.setSource(64731U);
    msg.setSourceEntity(143U);
    msg.setDestination(14828U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.4397136102959811;
    msg.reason = 72U;

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
    msg.setTimeStamp(0.647618054468582);
    msg.setSource(9594U);
    msg.setSourceEntity(218U);
    msg.setDestination(16168U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.6656160012345569;
    msg.reason = 229U;

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
    msg.setTimeStamp(0.30052200336858903);
    msg.setSource(59830U);
    msg.setSourceEntity(154U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.8774930500469653;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.4398262004281329);
    msg.setSource(13950U);
    msg.setSourceEntity(90U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(232U);
    msg.id = 228U;
    msg.range = 0.24222658664784502;
    msg.acceptance = 198U;

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
    msg.setTimeStamp(0.5933058599720382);
    msg.setSource(30943U);
    msg.setSourceEntity(201U);
    msg.setDestination(53235U);
    msg.setDestinationEntity(153U);
    msg.id = 88U;
    msg.range = 0.8416609275876689;
    msg.acceptance = 205U;

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
    msg.setTimeStamp(0.8128354256352386);
    msg.setSource(3146U);
    msg.setSourceEntity(57U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(6U);
    msg.id = 60U;
    msg.range = 0.8710204275828634;
    msg.acceptance = 9U;

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
    msg.setTimeStamp(0.9545542210372938);
    msg.setSource(44210U);
    msg.setSourceEntity(143U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(63U);
    msg.type = 155U;
    msg.reason = 160U;
    msg.value = 0.13566549097760805;
    msg.timestep = 0.1575291686118403;

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
    msg.setTimeStamp(0.9074095292261115);
    msg.setSource(2410U);
    msg.setSourceEntity(101U);
    msg.setDestination(29017U);
    msg.setDestinationEntity(48U);
    msg.type = 215U;
    msg.reason = 131U;
    msg.value = 0.955577583827019;
    msg.timestep = 0.17149044041464512;

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
    msg.setTimeStamp(0.3585668575839287);
    msg.setSource(42210U);
    msg.setSourceEntity(71U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(242U);
    msg.type = 155U;
    msg.reason = 49U;
    msg.value = 0.9092990028983682;
    msg.timestep = 0.5683334854694815;

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
    msg.setTimeStamp(0.18781233787364882);
    msg.setSource(52812U);
    msg.setSourceEntity(42U);
    msg.setDestination(51371U);
    msg.setDestinationEntity(125U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YMZFDKMKFXHINZCSPZBGHLOEZJFPPDGSWAXKSKSHURPGTQFNPJXHSPWZTMXECVLVLTPIODBM");
    tmp_msg_0.lat = 0.7669128145995852;
    tmp_msg_0.lon = 0.7909197200041527;
    tmp_msg_0.depth = 0.2184750635448105;
    tmp_msg_0.query_channel = 108U;
    tmp_msg_0.reply_channel = 173U;
    tmp_msg_0.transponder_delay = 248U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.1404715321941543;
    msg.y = 0.3171982970734838;
    msg.var_x = 0.11389791108018965;
    msg.var_y = 0.9386586811288697;
    msg.distance = 0.1722029547371997;

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
    msg.setTimeStamp(0.025165791184296404);
    msg.setSource(56897U);
    msg.setSourceEntity(118U);
    msg.setDestination(22786U);
    msg.setDestinationEntity(51U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CGFZCSEEQDKCEJLCLDRKYGFAHXPGFKXEUXOWUORIYUJPTYZHOGCAZJMTSNQTBMEPONUTVJJXMMMBQKRBFLZQSWYYPHFDKGGLVV");
    tmp_msg_0.lat = 0.6445454503288709;
    tmp_msg_0.lon = 0.8427861101273446;
    tmp_msg_0.depth = 0.30438241549129497;
    tmp_msg_0.query_channel = 162U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0828599046773475;
    msg.y = 0.08305679667601595;
    msg.var_x = 0.8211725554450043;
    msg.var_y = 0.4939571926001899;
    msg.distance = 0.7658209951814248;

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
    msg.setTimeStamp(0.420428121713443);
    msg.setSource(61320U);
    msg.setSourceEntity(31U);
    msg.setDestination(63723U);
    msg.setDestinationEntity(70U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ATPFVUIEQARSADQZDSQYGULUMBSFFQKZTUBNXXAEBOGQRJGFGTVIIAEOKANYEJFPVMYZRPLWDPXKELVDKDNRCASMGJZUPFOOWZPTTNECFFGDGBCBEWXUHWSOGDSJZYDMYMIXTIHSVJIVWRXMHLIZPJTKINMBWEQCMWNHEHCAVHEUVHOMBDOBHTLRLVGXQYBYTUNQLJRRH");
    tmp_msg_0.lat = 0.5779262672124941;
    tmp_msg_0.lon = 0.8466947248520341;
    tmp_msg_0.depth = 0.4469830406213702;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 202U;
    tmp_msg_0.transponder_delay = 157U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.044684040827971394;
    msg.y = 0.21089782867642992;
    msg.var_x = 0.10292586382385904;
    msg.var_y = 0.9251686953100099;
    msg.distance = 0.795329804078899;

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
    msg.setTimeStamp(0.9796030572571036);
    msg.setSource(65293U);
    msg.setSourceEntity(121U);
    msg.setDestination(56377U);
    msg.setDestinationEntity(183U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.6619608661050675);
    msg.setSource(24293U);
    msg.setSourceEntity(109U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(162U);
    msg.state = 37U;

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
    msg.setTimeStamp(0.039494333684515825);
    msg.setSource(18151U);
    msg.setSourceEntity(20U);
    msg.setDestination(723U);
    msg.setDestinationEntity(190U);
    msg.state = 232U;

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
    msg.setTimeStamp(0.11217367749414398);
    msg.setSource(4056U);
    msg.setSourceEntity(65U);
    msg.setDestination(13106U);
    msg.setDestinationEntity(18U);
    msg.x = 0.2540231908561139;
    msg.y = 0.8043036536106504;
    msg.z = 0.014243411285902452;

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
    msg.setTimeStamp(0.2590411637233815);
    msg.setSource(52921U);
    msg.setSourceEntity(106U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(183U);
    msg.x = 0.273519402773057;
    msg.y = 0.7884196348038786;
    msg.z = 0.4317262159549392;

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
    msg.setTimeStamp(0.7085952534652915);
    msg.setSource(31216U);
    msg.setSourceEntity(31U);
    msg.setDestination(54248U);
    msg.setDestinationEntity(56U);
    msg.x = 0.59245645455298;
    msg.y = 0.40763602426391776;
    msg.z = 0.9668188289390885;

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
    msg.setTimeStamp(0.20889450940650345);
    msg.setSource(60264U);
    msg.setSourceEntity(5U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(38U);
    msg.va = 0.38814034871449654;
    msg.aoa = 0.29494854023875017;
    msg.ssa = 0.9508987689607142;

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
    msg.setTimeStamp(0.7906561062557887);
    msg.setSource(11092U);
    msg.setSourceEntity(76U);
    msg.setDestination(17935U);
    msg.setDestinationEntity(150U);
    msg.va = 0.7479218557056897;
    msg.aoa = 0.866444649115501;
    msg.ssa = 0.327490630244334;

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
    msg.setTimeStamp(0.6517208493478401);
    msg.setSource(7201U);
    msg.setSourceEntity(192U);
    msg.setDestination(37295U);
    msg.setDestinationEntity(40U);
    msg.va = 0.36208880580210523;
    msg.aoa = 0.24584765467131098;
    msg.ssa = 0.735735942067135;

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
    msg.setTimeStamp(0.02187363473766135);
    msg.setSource(31704U);
    msg.setSourceEntity(71U);
    msg.setDestination(32096U);
    msg.setDestinationEntity(13U);
    msg.value = 0.46978073206682613;

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
    msg.setTimeStamp(0.7407824380328036);
    msg.setSource(59793U);
    msg.setSourceEntity(18U);
    msg.setDestination(338U);
    msg.setDestinationEntity(247U);
    msg.value = 0.4447759050031459;

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
    msg.setTimeStamp(0.40291864320723003);
    msg.setSource(61287U);
    msg.setSourceEntity(86U);
    msg.setDestination(52497U);
    msg.setDestinationEntity(24U);
    msg.value = 0.1826559108880339;

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
    msg.setTimeStamp(0.47560350294087983);
    msg.setSource(41964U);
    msg.setSourceEntity(34U);
    msg.setDestination(65048U);
    msg.setDestinationEntity(173U);
    msg.value = 0.45088313481029296;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.23640625405472226);
    msg.setSource(55554U);
    msg.setSourceEntity(147U);
    msg.setDestination(22936U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9202113246658546;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.4801144391348444);
    msg.setSource(34092U);
    msg.setSourceEntity(70U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(74U);
    msg.value = 0.9575596197719249;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.3932989193017511);
    msg.setSource(18908U);
    msg.setSourceEntity(243U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9720946863960097;
    msg.speed_units = 97U;

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
    msg.setTimeStamp(0.9883093419643593);
    msg.setSource(56553U);
    msg.setSourceEntity(175U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(196U);
    msg.value = 0.9945424707303201;
    msg.speed_units = 242U;

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
    msg.setTimeStamp(0.40680939911566816);
    msg.setSource(31952U);
    msg.setSourceEntity(226U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(115U);
    msg.value = 0.7533848697046245;
    msg.speed_units = 101U;

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
    msg.setTimeStamp(0.9644814368460226);
    msg.setSource(30623U);
    msg.setSourceEntity(5U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(136U);
    msg.value = 0.12542187503735558;

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
    msg.setTimeStamp(0.6290601531404058);
    msg.setSource(29071U);
    msg.setSourceEntity(162U);
    msg.setDestination(13665U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7414731919429346;

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
    msg.setTimeStamp(0.23764135949693976);
    msg.setSource(10981U);
    msg.setSourceEntity(185U);
    msg.setDestination(56248U);
    msg.setDestinationEntity(233U);
    msg.value = 0.08801103793245557;

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
    msg.setTimeStamp(0.9873093512271904);
    msg.setSource(7246U);
    msg.setSourceEntity(173U);
    msg.setDestination(59676U);
    msg.setDestinationEntity(68U);
    msg.value = 0.2612460326784942;

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
    msg.setTimeStamp(0.3859772384410681);
    msg.setSource(57350U);
    msg.setSourceEntity(75U);
    msg.setDestination(26339U);
    msg.setDestinationEntity(34U);
    msg.value = 0.10956501658992535;

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
    msg.setTimeStamp(0.4126551731197978);
    msg.setSource(43854U);
    msg.setSourceEntity(162U);
    msg.setDestination(26433U);
    msg.setDestinationEntity(190U);
    msg.value = 0.9253253530575827;

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
    msg.setTimeStamp(0.2872739942014032);
    msg.setSource(62344U);
    msg.setSourceEntity(183U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8240900804300422;

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
    msg.setTimeStamp(0.07752703576496678);
    msg.setSource(7445U);
    msg.setSourceEntity(127U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(160U);
    msg.value = 0.26483689916515596;

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
    msg.setTimeStamp(0.6941111181438016);
    msg.setSource(44353U);
    msg.setSourceEntity(244U);
    msg.setDestination(52178U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6082213533837805;

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
    msg.setTimeStamp(0.9479969410373753);
    msg.setSource(53252U);
    msg.setSourceEntity(103U);
    msg.setDestination(53524U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 1699388744U;
    msg.start_lat = 0.17902991041225402;
    msg.start_lon = 0.16924215234325746;
    msg.start_z = 0.9330429759551665;
    msg.start_z_units = 250U;
    msg.end_lat = 0.5729542888587935;
    msg.end_lon = 0.7944583114638839;
    msg.end_z = 0.3116721900858569;
    msg.end_z_units = 168U;
    msg.speed = 0.9210534681037156;
    msg.speed_units = 24U;
    msg.lradius = 0.14149218135237263;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.6872221789826792);
    msg.setSource(32975U);
    msg.setSourceEntity(23U);
    msg.setDestination(22804U);
    msg.setDestinationEntity(123U);
    msg.path_ref = 775244807U;
    msg.start_lat = 0.7071889044817717;
    msg.start_lon = 0.9753978075929499;
    msg.start_z = 0.43721516809279215;
    msg.start_z_units = 174U;
    msg.end_lat = 0.47515420172486045;
    msg.end_lon = 0.8796223064743066;
    msg.end_z = 0.23327962121337864;
    msg.end_z_units = 129U;
    msg.speed = 0.5406661464908367;
    msg.speed_units = 210U;
    msg.lradius = 0.5022537427251705;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.5917920469425937);
    msg.setSource(36060U);
    msg.setSourceEntity(119U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 40482326U;
    msg.start_lat = 0.25738827942007647;
    msg.start_lon = 0.736670619862883;
    msg.start_z = 0.8054175997971263;
    msg.start_z_units = 19U;
    msg.end_lat = 0.4946600660811239;
    msg.end_lon = 0.20615453152321872;
    msg.end_z = 0.09103806642880008;
    msg.end_z_units = 82U;
    msg.speed = 0.7429927121108804;
    msg.speed_units = 55U;
    msg.lradius = 0.17501704254185968;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.7434214937083363);
    msg.setSource(14077U);
    msg.setSourceEntity(220U);
    msg.setDestination(63237U);
    msg.setDestinationEntity(99U);
    msg.x = 0.1240241012161597;
    msg.y = 0.3312110368630248;
    msg.z = 0.5294251490106177;
    msg.k = 0.748043531568618;
    msg.m = 0.811087569954909;
    msg.n = 0.10753621145102021;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.13080990078799015);
    msg.setSource(36552U);
    msg.setSourceEntity(217U);
    msg.setDestination(13202U);
    msg.setDestinationEntity(144U);
    msg.x = 0.07631138439656926;
    msg.y = 0.8493740714527469;
    msg.z = 0.8184231741296619;
    msg.k = 0.21902201049811443;
    msg.m = 0.28051185285485747;
    msg.n = 0.4109270943025719;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.8931859541254219);
    msg.setSource(29913U);
    msg.setSourceEntity(201U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(123U);
    msg.x = 0.5435077787657737;
    msg.y = 0.22674826729607123;
    msg.z = 0.810854271759979;
    msg.k = 0.3185727242369276;
    msg.m = 0.8254307779197486;
    msg.n = 0.8924225994575485;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.04101325250499066);
    msg.setSource(41136U);
    msg.setSourceEntity(232U);
    msg.setDestination(10403U);
    msg.setDestinationEntity(137U);
    msg.value = 0.8544435438149361;

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
    msg.setTimeStamp(0.8109269121499338);
    msg.setSource(10063U);
    msg.setSourceEntity(220U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(200U);
    msg.value = 0.9450383203330801;

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
    msg.setTimeStamp(0.6981078759061601);
    msg.setSource(30470U);
    msg.setSourceEntity(87U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(122U);
    msg.value = 0.3346541406300667;

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
    msg.setTimeStamp(0.49627294134041355);
    msg.setSource(2482U);
    msg.setSourceEntity(109U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(36U);
    msg.u = 0.33727975319296555;
    msg.v = 0.42993914302185166;
    msg.w = 0.026412632438288952;
    msg.p = 0.723515520050549;
    msg.q = 0.4737103772279615;
    msg.r = 0.801705015681969;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.08384429030828267);
    msg.setSource(38193U);
    msg.setSourceEntity(180U);
    msg.setDestination(27259U);
    msg.setDestinationEntity(234U);
    msg.u = 0.357090591427368;
    msg.v = 0.8388668915827104;
    msg.w = 0.43023751511062547;
    msg.p = 0.27742588360664777;
    msg.q = 0.879925469144146;
    msg.r = 0.608472109272722;
    msg.flags = 191U;

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
    msg.setTimeStamp(0.025803975724595363);
    msg.setSource(27976U);
    msg.setSourceEntity(226U);
    msg.setDestination(1751U);
    msg.setDestinationEntity(190U);
    msg.u = 0.506568101992137;
    msg.v = 0.9885801422127574;
    msg.w = 0.750788575821505;
    msg.p = 0.5004085802274452;
    msg.q = 0.2874171289576464;
    msg.r = 0.6023972927419722;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.919916592301544);
    msg.setSource(63810U);
    msg.setSourceEntity(179U);
    msg.setDestination(62008U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 3080443394U;
    msg.start_lat = 0.28266470135432376;
    msg.start_lon = 0.3508636916787726;
    msg.start_z = 0.14222876068815504;
    msg.start_z_units = 182U;
    msg.end_lat = 0.662927260444095;
    msg.end_lon = 0.07579209925023234;
    msg.end_z = 0.12070976595696792;
    msg.end_z_units = 132U;
    msg.lradius = 0.48829396352027565;
    msg.flags = 80U;
    msg.x = 0.7621626560142994;
    msg.y = 0.5654106993807138;
    msg.z = 0.0015459913434625605;
    msg.vx = 0.4887977591158995;
    msg.vy = 0.936460283381119;
    msg.vz = 0.9857809700650616;
    msg.course_error = 0.10793805792842148;
    msg.eta = 55657U;

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
    msg.setTimeStamp(0.12060015459006279);
    msg.setSource(1487U);
    msg.setSourceEntity(11U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 3730379256U;
    msg.start_lat = 0.9319359737191015;
    msg.start_lon = 0.27123386815098627;
    msg.start_z = 0.9867528813804214;
    msg.start_z_units = 172U;
    msg.end_lat = 0.2170719370000299;
    msg.end_lon = 0.40882531186475435;
    msg.end_z = 0.8195615877100301;
    msg.end_z_units = 15U;
    msg.lradius = 0.4927515273753804;
    msg.flags = 231U;
    msg.x = 0.2133939783151516;
    msg.y = 0.6321003068913637;
    msg.z = 0.7687472896301176;
    msg.vx = 0.29067367047820103;
    msg.vy = 0.912409824877449;
    msg.vz = 0.9468730459641751;
    msg.course_error = 0.09172639965485763;
    msg.eta = 23827U;

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
    msg.setTimeStamp(0.7670799736711054);
    msg.setSource(29381U);
    msg.setSourceEntity(53U);
    msg.setDestination(54413U);
    msg.setDestinationEntity(30U);
    msg.path_ref = 818107711U;
    msg.start_lat = 0.15920879167026492;
    msg.start_lon = 0.9743473732374748;
    msg.start_z = 0.4497004361199073;
    msg.start_z_units = 65U;
    msg.end_lat = 0.3285315852615607;
    msg.end_lon = 0.08381820699185416;
    msg.end_z = 0.7391591564074456;
    msg.end_z_units = 176U;
    msg.lradius = 0.34183191483996633;
    msg.flags = 207U;
    msg.x = 0.8150518655240458;
    msg.y = 0.3590907565459822;
    msg.z = 0.9486468148419838;
    msg.vx = 0.042378939377540226;
    msg.vy = 0.24394801296422974;
    msg.vz = 0.8513686162012781;
    msg.course_error = 0.37942218425959306;
    msg.eta = 36471U;

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
    msg.setTimeStamp(0.5736130026625271);
    msg.setSource(28058U);
    msg.setSourceEntity(73U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(68U);
    msg.k = 0.49546418090597155;
    msg.m = 0.40818125213158585;
    msg.n = 0.8900609814653466;

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
    msg.setTimeStamp(0.13614778615247103);
    msg.setSource(63191U);
    msg.setSourceEntity(62U);
    msg.setDestination(54863U);
    msg.setDestinationEntity(37U);
    msg.k = 0.09095141565470743;
    msg.m = 0.37584183530228266;
    msg.n = 0.8622887986541731;

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
    msg.setTimeStamp(0.6402385424655356);
    msg.setSource(21866U);
    msg.setSourceEntity(105U);
    msg.setDestination(62078U);
    msg.setDestinationEntity(48U);
    msg.k = 0.5688908249500414;
    msg.m = 0.477548475757853;
    msg.n = 0.6367049234191337;

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
    msg.setTimeStamp(0.9211738094112764);
    msg.setSource(28891U);
    msg.setSourceEntity(186U);
    msg.setDestination(57312U);
    msg.setDestinationEntity(54U);
    msg.p = 0.44699444140081956;
    msg.i = 0.6493317318899782;
    msg.d = 0.40370550244659087;
    msg.a = 0.4264412594456988;

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
    msg.setTimeStamp(0.09228465375917061);
    msg.setSource(45514U);
    msg.setSourceEntity(158U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(160U);
    msg.p = 0.6196349678996058;
    msg.i = 0.2542309160954297;
    msg.d = 0.9778002140424134;
    msg.a = 0.4089114653103504;

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
    msg.setTimeStamp(0.5272747925595793);
    msg.setSource(52812U);
    msg.setSourceEntity(108U);
    msg.setDestination(26867U);
    msg.setDestinationEntity(55U);
    msg.p = 0.07124134539285587;
    msg.i = 0.023474716774278703;
    msg.d = 0.4592235547244282;
    msg.a = 0.5688638948833873;

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
    msg.setTimeStamp(0.3418238602089845);
    msg.setSource(34770U);
    msg.setSourceEntity(92U);
    msg.setDestination(24619U);
    msg.setDestinationEntity(62U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.27463430363009167);
    msg.setSource(48719U);
    msg.setSourceEntity(235U);
    msg.setDestination(20423U);
    msg.setDestinationEntity(200U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.8969284246258592);
    msg.setSource(27005U);
    msg.setSourceEntity(204U);
    msg.setDestination(45340U);
    msg.setDestinationEntity(5U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.3446426747937431);
    msg.setSource(26906U);
    msg.setSourceEntity(84U);
    msg.setDestination(47783U);
    msg.setDestinationEntity(222U);
    msg.x = 0.9368265868865375;
    msg.y = 0.14404553212041848;
    msg.z = 0.699325540811586;
    msg.vx = 0.7875187647776274;
    msg.vy = 0.4668895262381749;
    msg.vz = 0.8274499258620054;
    msg.ax = 0.3368348189426502;
    msg.ay = 0.618323561553054;
    msg.az = 0.05082128002830599;
    msg.flags = 5024U;

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
    msg.setTimeStamp(0.8835606250810819);
    msg.setSource(65211U);
    msg.setSourceEntity(65U);
    msg.setDestination(19538U);
    msg.setDestinationEntity(127U);
    msg.x = 0.1097997884930122;
    msg.y = 0.05865495746297611;
    msg.z = 0.978617088825695;
    msg.vx = 0.07818254671176494;
    msg.vy = 0.9571020092121705;
    msg.vz = 0.4840275928945691;
    msg.ax = 0.2137708669411882;
    msg.ay = 0.1673716540061697;
    msg.az = 0.6955193380186806;
    msg.flags = 11812U;

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
    msg.setTimeStamp(0.20278669726790122);
    msg.setSource(9945U);
    msg.setSourceEntity(142U);
    msg.setDestination(88U);
    msg.setDestinationEntity(111U);
    msg.x = 0.7896360686053759;
    msg.y = 0.18041786850549113;
    msg.z = 0.7887583727042781;
    msg.vx = 0.17813527182575728;
    msg.vy = 0.803526321510784;
    msg.vz = 0.2882358602455857;
    msg.ax = 0.08293383513317643;
    msg.ay = 0.3095039157347875;
    msg.az = 0.5191257658285735;
    msg.flags = 12646U;

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
    msg.setTimeStamp(0.9714865341946469);
    msg.setSource(46862U);
    msg.setSourceEntity(225U);
    msg.setDestination(64449U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8458054248409793;

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
    msg.setTimeStamp(0.8141700020544558);
    msg.setSource(7125U);
    msg.setSourceEntity(16U);
    msg.setDestination(25777U);
    msg.setDestinationEntity(107U);
    msg.value = 0.0025888083247769256;

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
    msg.setTimeStamp(0.9566874669305114);
    msg.setSource(45381U);
    msg.setSourceEntity(239U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3536865124048313;

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
    msg.setTimeStamp(0.2132538543643019);
    msg.setSource(37400U);
    msg.setSourceEntity(252U);
    msg.setDestination(27668U);
    msg.setDestinationEntity(35U);
    msg.timeout = 55882U;
    msg.lat = 0.9211768853219384;
    msg.lon = 0.8528226183516314;
    msg.z = 0.8886777726700502;
    msg.z_units = 200U;
    msg.speed = 0.16604336379621298;
    msg.speed_units = 239U;
    msg.roll = 0.4239711638661978;
    msg.pitch = 0.8868303305845886;
    msg.yaw = 0.5683075037767988;
    msg.custom.assign("YZHMJTASWLWCWJMVKWOWVNEDKTHQKQXFSRNDQUNHLDLBFBBCXJIRSCD");

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
    msg.setTimeStamp(0.030995932090275513);
    msg.setSource(55665U);
    msg.setSourceEntity(43U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(183U);
    msg.timeout = 57381U;
    msg.lat = 0.3686203819884628;
    msg.lon = 0.12946643737388164;
    msg.z = 0.5559129308882915;
    msg.z_units = 79U;
    msg.speed = 0.5984429925145845;
    msg.speed_units = 20U;
    msg.roll = 0.0728240472994417;
    msg.pitch = 0.3440609861774234;
    msg.yaw = 0.1664548283093631;
    msg.custom.assign("PAKJDLAHTQXEMHMJXFVCFBOGUZCARXYPFBLCLRAUSGUCRLQBBPQLLCOJE");

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
    msg.setTimeStamp(0.9344940013064672);
    msg.setSource(25027U);
    msg.setSourceEntity(222U);
    msg.setDestination(8854U);
    msg.setDestinationEntity(78U);
    msg.timeout = 42198U;
    msg.lat = 0.0756578579141507;
    msg.lon = 0.5733560122949458;
    msg.z = 0.2507700623197925;
    msg.z_units = 127U;
    msg.speed = 0.5997246346635196;
    msg.speed_units = 242U;
    msg.roll = 0.3671893696289995;
    msg.pitch = 0.6781749330468148;
    msg.yaw = 0.8803356558871102;
    msg.custom.assign("SJDUCUOLCPUUFBPHHZGRCZGPNECTUEIML");

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
    msg.setTimeStamp(0.004023613802163539);
    msg.setSource(63634U);
    msg.setSourceEntity(121U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(114U);
    msg.timeout = 52481U;
    msg.lat = 0.8106981126305465;
    msg.lon = 0.07709969860888066;
    msg.z = 0.8271644371419992;
    msg.z_units = 124U;
    msg.speed = 0.007874135360551149;
    msg.speed_units = 73U;
    msg.duration = 14200U;
    msg.radius = 0.23489795855451778;
    msg.flags = 205U;
    msg.custom.assign("SIVERCIVORWNCCPTQGUBFSWFPMEGNMFETQIQOCGWFEZAJWUQGSUJIRAUFLQOTTBWRDQOPSYRVOZNRMJMXOODCNZEQEBWLDFXLLMHYMVDTAPFVUHDYLLFXJLXNCWDSYWOGVPKCTZAYBLIDGBDBEGVTJZSXFTTUHYEIFZSRQKBVYPPHSINON");

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
    msg.setTimeStamp(0.4040937824535934);
    msg.setSource(23583U);
    msg.setSourceEntity(113U);
    msg.setDestination(5053U);
    msg.setDestinationEntity(21U);
    msg.timeout = 5851U;
    msg.lat = 0.5455255396103973;
    msg.lon = 0.16208425853037722;
    msg.z = 0.11243094465510906;
    msg.z_units = 74U;
    msg.speed = 0.43857526597150687;
    msg.speed_units = 87U;
    msg.duration = 32362U;
    msg.radius = 0.5617615164267483;
    msg.flags = 234U;
    msg.custom.assign("DBFNPSYZMQDEDTVXFJUGRPLUOFQJMNOULJBNEMFGDPEWXBCOEHIQPZDEZSEEVSLMTKCYOHDFCLTMZRKGGCQTRGHXOZWAFILPMMFDWKIFBSUTHGSMJEXBIVHKZDVXIPIOCYVLOATESRFUAQLOOKGCBGPMYWBIAIJYCTNXBUSOPXWNNQCDNZIYKWNVXLYKLVABUAMZAWVATGUZKYEWAT");

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
    msg.setTimeStamp(0.3333317963008433);
    msg.setSource(17760U);
    msg.setSourceEntity(22U);
    msg.setDestination(4821U);
    msg.setDestinationEntity(61U);
    msg.timeout = 28945U;
    msg.lat = 0.8206693473400618;
    msg.lon = 0.3011293519416045;
    msg.z = 0.5770468406615897;
    msg.z_units = 82U;
    msg.speed = 0.4356022680984386;
    msg.speed_units = 166U;
    msg.duration = 6541U;
    msg.radius = 0.7599368486843789;
    msg.flags = 134U;
    msg.custom.assign("ADPDRFMABURQEJBUOBNMUEWSFZXQEFZYOWZYCTCJVXDQISUNBRRWXTRGVPEDIEKZHFKJKNDVEKUGPQSCOHSLQXCKNBFPAJLPSXWKVVDOXQCJQRGISTZMBIESLWHOTHBLUWVIBNIHACTIHEDZTFYJXQNUOMKCYGNJUGA");

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
    msg.setTimeStamp(0.17697433777569838);
    msg.setSource(20992U);
    msg.setSourceEntity(182U);
    msg.setDestination(24938U);
    msg.setDestinationEntity(111U);
    msg.custom.assign("LRRNTGOMPWLVQREBVNOUXJQFARQDWQPIWYQFLAGENRXFJJGNBDQWRLHXHFXECZKYUCWJNAHJMOAEKZXDAVBDKKUDXLCTMEGLYHAE");

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
    msg.setTimeStamp(0.0769418236089413);
    msg.setSource(31733U);
    msg.setSourceEntity(150U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("ONAEYKEDOEINJEWXIVLJULWORSCPKMWNMFTQJDDHPZNCKIIBRHPKHOBGYGCPVXLMAJXXAXGDUFPPXJENAFOEUJZUXFBLSWMHDBXMYSIXZCYAVSUBISSMMYWQAZFZKTTSLUSBRFOGVZBLDPUQMDQRAVMUQVFYRCEECHZTAKHCBWTCKRGSLLRU");

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
    msg.setTimeStamp(0.015595844288870064);
    msg.setSource(52479U);
    msg.setSourceEntity(104U);
    msg.setDestination(45346U);
    msg.setDestinationEntity(60U);
    msg.custom.assign("FXOXFBSEAILTUHBYSWL");

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
    msg.setTimeStamp(0.43297962334192974);
    msg.setSource(35221U);
    msg.setSourceEntity(130U);
    msg.setDestination(22640U);
    msg.setDestinationEntity(10U);
    msg.timeout = 25519U;
    msg.lat = 0.9942897635580947;
    msg.lon = 0.396861155404592;
    msg.z = 0.7428062035870249;
    msg.z_units = 116U;
    msg.duration = 31637U;
    msg.speed = 0.9052208895647933;
    msg.speed_units = 118U;
    msg.type = 74U;
    msg.radius = 0.9919984907425328;
    msg.length = 0.7879717079604835;
    msg.bearing = 0.19636450281538842;
    msg.direction = 177U;
    msg.custom.assign("ZFKZMBQNSRPTWHHYUNURURSMHFTWBRKBFQGVWKDWHFCVCWPAUWIHWKVJOKVLGWXENXOZPQCGGNZPQCDSBTKMTSLEARSYNEXRLJVEFILICRFFACQIMUDAUOAZJHMXQOHPYYAOYSZLLACEXXPSECIEOSHANBJDDRITLZSDKPPJCVOGUBEQYNHGUREMBTGDDKXIDGFZBJYZNKUJMUARMVTBEWXTIQJOXXBW");

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
    msg.setTimeStamp(0.5483552973033157);
    msg.setSource(3070U);
    msg.setSourceEntity(39U);
    msg.setDestination(18461U);
    msg.setDestinationEntity(36U);
    msg.timeout = 25090U;
    msg.lat = 0.9280801814446551;
    msg.lon = 0.5222040753146657;
    msg.z = 0.7875320114140095;
    msg.z_units = 99U;
    msg.duration = 45387U;
    msg.speed = 0.8264390123573421;
    msg.speed_units = 51U;
    msg.type = 186U;
    msg.radius = 0.007962837564063907;
    msg.length = 0.9521674329345001;
    msg.bearing = 0.6660212917158616;
    msg.direction = 84U;
    msg.custom.assign("ESAYPTVBFXHSTZYSINAMDGEYBQSATTEQLHVZWCXWFSVNATZZCXTO");

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
    msg.setTimeStamp(0.7813892940615017);
    msg.setSource(59570U);
    msg.setSourceEntity(35U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(188U);
    msg.timeout = 1817U;
    msg.lat = 0.060806483118749366;
    msg.lon = 0.7412380954897917;
    msg.z = 0.8746172040180826;
    msg.z_units = 188U;
    msg.duration = 18627U;
    msg.speed = 0.32451484656612406;
    msg.speed_units = 10U;
    msg.type = 83U;
    msg.radius = 0.07432591328894422;
    msg.length = 0.09167235278040531;
    msg.bearing = 0.19414552483367342;
    msg.direction = 217U;
    msg.custom.assign("WDWHAEOQRLGKSFNCDKYFOUHDEDSVQTSQBLGHIBSGIWEQEXVOJKOWGCZUTACAOWIKYVMZ");

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
    msg.setTimeStamp(0.9515082288608355);
    msg.setSource(50479U);
    msg.setSourceEntity(227U);
    msg.setDestination(5607U);
    msg.setDestinationEntity(77U);
    msg.duration = 60745U;
    msg.custom.assign("IMRFCQPQFLNUYYBPAWTHAOVIJMPNYCFWBRTPBIGYCMLSGOQRLEVVSLRIDQHTQPNRXZABMSYUAXBAHKPLFHLMCVYQYZBOMIFGNMCTRSZPLJHNJRGGQOLBUVSEQGXUCHPSNJFXHVVDDUDZSHTXE");

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
    msg.setTimeStamp(0.6488218778487369);
    msg.setSource(46475U);
    msg.setSourceEntity(96U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(147U);
    msg.duration = 46054U;
    msg.custom.assign("BRHLIRGSLIQXHDAIBTFDGGACCFBKYEFBJOUWIDHXMQDYKBONZEQQTVAHPNWEYWLTSKWMGTAURZCDAWIJIMGJECFBPWHOUYQCSZLDOAVT");

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
    msg.setTimeStamp(0.7809691041000488);
    msg.setSource(44588U);
    msg.setSourceEntity(171U);
    msg.setDestination(9988U);
    msg.setDestinationEntity(140U);
    msg.duration = 8010U;
    msg.custom.assign("VWQJFVZXUGHQDHINAERXFIMNYLPBASKYBRKDFXMPENCEVMUREFOURLYPHWCOOMDKCOKGPTVYSYWBEHXLWVVCSAUMPBOCUXSTMBWJIFKNZYQYNRECQBZIPGUFVQTVLDPAPWGVHLQXKAFMLAIBCKHIMGZZFLEBDOUGTBTCLYQGHARDISHHATWSOIGDZKJWJQUBTZSYNURPJFQRDTOQMJJFONGCSLKXEKYWNO");

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
    msg.setTimeStamp(0.9091717838196345);
    msg.setSource(5226U);
    msg.setSourceEntity(6U);
    msg.setDestination(5417U);
    msg.setDestinationEntity(166U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.11347822553438214;
    msg.control.set(tmp_msg_0);
    msg.duration = 47711U;
    msg.custom.assign("ZPCIXQECYTSTYFXGODBXAWDFPRLNRSGSYJMWESUAQZDVBQYHBGYMUHHNLGCFMUTMMEJBURJRZILZFANJHMIULKDQWLVMXIWWPBOVCHVDNSSPAATRPREWHVIJHWDKVMMRBQSOVREQJIVKDPYPULGXJXXNEESXECLFGNGYZUTBOM");

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
    msg.setTimeStamp(0.5985296400457554);
    msg.setSource(1568U);
    msg.setSourceEntity(51U);
    msg.setDestination(499U);
    msg.setDestinationEntity(45U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7976496822932463;
    msg.control.set(tmp_msg_0);
    msg.duration = 2748U;
    msg.custom.assign("OVRAPSJWJCXGRMTPDUV");

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
    msg.setTimeStamp(0.04443793597397172);
    msg.setSource(42355U);
    msg.setSourceEntity(140U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(60U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3914926254U;
    tmp_msg_0.start_lat = 0.5680458294786762;
    tmp_msg_0.start_lon = 0.9075890809641255;
    tmp_msg_0.start_z = 0.3934020616138094;
    tmp_msg_0.start_z_units = 173U;
    tmp_msg_0.end_lat = 0.10015806423861573;
    tmp_msg_0.end_lon = 0.4016824246087829;
    tmp_msg_0.end_z = 0.7941743773550146;
    tmp_msg_0.end_z_units = 175U;
    tmp_msg_0.speed = 0.99232856790928;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.lradius = 0.6851478191558361;
    tmp_msg_0.flags = 90U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42086U;
    msg.custom.assign("IKAFMDUCEVDIRVHXAISEIBNMWSYCZKQSWASLZVOXEHCTDJPP");

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
    msg.setTimeStamp(0.5512948069553556);
    msg.setSource(55433U);
    msg.setSourceEntity(240U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(128U);
    msg.timeout = 335U;
    msg.lat = 0.23319937212565367;
    msg.lon = 0.46789742818339075;
    msg.z = 0.8047261503743036;
    msg.z_units = 127U;
    msg.speed = 0.5037962934659964;
    msg.speed_units = 240U;
    msg.bearing = 0.06420335109590913;
    msg.cross_angle = 0.4011287015478838;
    msg.width = 0.7202479925617687;
    msg.length = 0.5705796605532909;
    msg.hstep = 0.0031846042329596314;
    msg.coff = 133U;
    msg.alternation = 126U;
    msg.flags = 29U;
    msg.custom.assign("GAJFBVQPFDWRMMPHSAKPYSGGVYYLBDCOHOSNZQVHFOETDGHISRYXCYAFYZZGPIRIGPMBYJKKKIQRZCEZ");

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
    msg.setTimeStamp(0.6831209074359095);
    msg.setSource(45787U);
    msg.setSourceEntity(153U);
    msg.setDestination(52865U);
    msg.setDestinationEntity(150U);
    msg.timeout = 18302U;
    msg.lat = 0.9929935495023934;
    msg.lon = 0.6087360378262655;
    msg.z = 0.027020989949055663;
    msg.z_units = 25U;
    msg.speed = 0.42978289357816224;
    msg.speed_units = 214U;
    msg.bearing = 0.9082516632354627;
    msg.cross_angle = 0.6892510320557479;
    msg.width = 0.30584119412306887;
    msg.length = 0.37951791636580856;
    msg.hstep = 0.4443093230205204;
    msg.coff = 145U;
    msg.alternation = 183U;
    msg.flags = 29U;
    msg.custom.assign("ZJOHPKUYQUOSSIGMTWXZYFSVSYXTAWGCBLCLIOJMQRPFRBEGVNAXCWMKQVCPSQYRGMWETRKQQTBNTJFAHFRHASIURUFUDKBKSOPERDS");

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
    msg.setTimeStamp(0.1652711807154389);
    msg.setSource(13248U);
    msg.setSourceEntity(137U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(251U);
    msg.timeout = 31595U;
    msg.lat = 0.5399994156728363;
    msg.lon = 0.4283127558789144;
    msg.z = 0.24188463372403912;
    msg.z_units = 227U;
    msg.speed = 0.6442293097460332;
    msg.speed_units = 239U;
    msg.bearing = 0.28705936965100354;
    msg.cross_angle = 0.09021202408110018;
    msg.width = 0.4209767421903343;
    msg.length = 0.004286472533197583;
    msg.hstep = 0.8045866751587398;
    msg.coff = 136U;
    msg.alternation = 59U;
    msg.flags = 147U;
    msg.custom.assign("ZNJISYDKMTCXAODDZFNAXEMBHJOEHCZSGIBYKPWOKBQMGJXBJJFPMQASOJENTIWECICDDSKXZTVCFZNXMXBSEB");

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
    msg.setTimeStamp(0.39830193480371423);
    msg.setSource(36589U);
    msg.setSourceEntity(214U);
    msg.setDestination(29883U);
    msg.setDestinationEntity(98U);
    msg.timeout = 42342U;
    msg.lat = 0.026209908400828374;
    msg.lon = 0.7621444968624956;
    msg.z = 0.6766567499982914;
    msg.z_units = 197U;
    msg.speed = 0.341043442809264;
    msg.speed_units = 75U;
    msg.custom.assign("KXEHICIXUJLRWESEL");

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
    msg.setTimeStamp(0.4551047914330828);
    msg.setSource(47677U);
    msg.setSourceEntity(68U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(118U);
    msg.timeout = 57493U;
    msg.lat = 0.8907159177951667;
    msg.lon = 0.861040530095956;
    msg.z = 0.045593487082692286;
    msg.z_units = 22U;
    msg.speed = 0.638098672700748;
    msg.speed_units = 148U;
    msg.custom.assign("GUROSTWCZPJSOSPABSBCUZUVHWKNPKRFEAPXSOOYSJLBYAQLITYKRMIIAIHHEGMRDGNKYFMZPBKQAQGTFYOXEWCVCXFDEDDULVVHEMQBAPXNZDLHEIBMAGCXWDQCUHMTNXDZPDEITQH");

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
    msg.setTimeStamp(0.4485952981949096);
    msg.setSource(28885U);
    msg.setSourceEntity(50U);
    msg.setDestination(10611U);
    msg.setDestinationEntity(191U);
    msg.timeout = 37781U;
    msg.lat = 0.46002219242361175;
    msg.lon = 0.7331853062285678;
    msg.z = 0.6201286048784772;
    msg.z_units = 24U;
    msg.speed = 0.9629673278858553;
    msg.speed_units = 190U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9218195778107382;
    tmp_msg_0.y = 0.7245204919970927;
    tmp_msg_0.z = 0.7525535933261763;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YDUOYTHJTCNCWURZCXRYXCTSBSKOLNHUMGRHPBMSPZMJUQ");

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
    msg.setTimeStamp(0.8254270482639202);
    msg.setSource(2096U);
    msg.setSourceEntity(152U);
    msg.setDestination(46473U);
    msg.setDestinationEntity(187U);
    msg.x = 0.03753381891782037;
    msg.y = 0.39395043756618453;
    msg.z = 0.7676837992296298;

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
    msg.setTimeStamp(0.47204120170073405);
    msg.setSource(42239U);
    msg.setSourceEntity(170U);
    msg.setDestination(30529U);
    msg.setDestinationEntity(7U);
    msg.x = 0.9084775476965625;
    msg.y = 0.2268594127647212;
    msg.z = 0.18102719659741606;

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
    msg.setTimeStamp(0.014559976035116273);
    msg.setSource(50253U);
    msg.setSourceEntity(239U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(145U);
    msg.x = 0.1322110477674212;
    msg.y = 0.884091274522313;
    msg.z = 0.11623342811256399;

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
    msg.setTimeStamp(0.7951280992579663);
    msg.setSource(23829U);
    msg.setSourceEntity(228U);
    msg.setDestination(2478U);
    msg.setDestinationEntity(53U);
    msg.timeout = 65235U;
    msg.lat = 0.26607309335683527;
    msg.lon = 0.2673635731646169;
    msg.z = 0.46363689835024;
    msg.z_units = 222U;
    msg.amplitude = 0.5678004553491497;
    msg.pitch = 0.509773564365309;
    msg.speed = 0.2356431917446946;
    msg.speed_units = 82U;
    msg.custom.assign("IIDFZZBUVGBGUQTGCOQNWAMSLMQUCADHOSQEBCVQNUTMPIGOAUJBNIVSVPOJVBYIHZXJWHWCVFWBEIVJOREDERRFRWXUZJXSEWXXHHKPVNFVTCDYACBEXPBL");

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
    msg.setTimeStamp(0.16779787927642575);
    msg.setSource(34298U);
    msg.setSourceEntity(49U);
    msg.setDestination(3439U);
    msg.setDestinationEntity(116U);
    msg.timeout = 31192U;
    msg.lat = 0.13405465495857227;
    msg.lon = 0.5534584441530817;
    msg.z = 0.028637067478308853;
    msg.z_units = 196U;
    msg.amplitude = 0.9057465109418759;
    msg.pitch = 0.40642696528269784;
    msg.speed = 0.8474279553778871;
    msg.speed_units = 210U;
    msg.custom.assign("UUNVYEQOHSPSPEBISAZWHEULPCUFWQSDLAXDRGPZGHWXKXHJBGTFAPUXDRSQBDMLQZRRCSUWLOAITEUNAQJQDEVHLKRUYSYYYINTZOUMNCLZFMZAARGBXMKXBCGALLWQVCEZHIWTFGHKXVOBDXMFXWXTOHHFKMETDJTNIMOJDLJJBIZCSQRSNIYHJPWCPGNVJLRKQRNJN");

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
    msg.setTimeStamp(0.7131574305979987);
    msg.setSource(2381U);
    msg.setSourceEntity(132U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(63U);
    msg.timeout = 65216U;
    msg.lat = 0.7018530776529897;
    msg.lon = 0.9235215030517983;
    msg.z = 0.05927119859906882;
    msg.z_units = 67U;
    msg.amplitude = 0.24848493800624338;
    msg.pitch = 0.664484729141431;
    msg.speed = 0.44758693241755176;
    msg.speed_units = 165U;
    msg.custom.assign("TTEXTIUYYRMUFIEVNIZIOQUBEKRHDXIVPPS");

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
    msg.setTimeStamp(0.5967339588139025);
    msg.setSource(15374U);
    msg.setSourceEntity(230U);
    msg.setDestination(30111U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.2787475182380764);
    msg.setSource(42473U);
    msg.setSourceEntity(147U);
    msg.setDestination(19957U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.36262457414984317);
    msg.setSource(51612U);
    msg.setSourceEntity(73U);
    msg.setDestination(25038U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.8896130064550126);
    msg.setSource(65010U);
    msg.setSourceEntity(195U);
    msg.setDestination(2247U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.051394259959299915;
    msg.lon = 0.568186834520999;
    msg.z = 0.31496855792472145;
    msg.z_units = 128U;
    msg.radius = 0.5291563381145866;
    msg.duration = 25536U;
    msg.speed = 0.5518218812871962;
    msg.speed_units = 103U;
    msg.custom.assign("NJMPQAFGCGPDFVZCWZEWFAEQXDALEENHLWDLGDTAIUEPSEZPNNPUWRBTOALCKOOBTSVGXLCXTOHXSRGFJSXKPVFCJVVZKZAWDBZTSECYWJ");

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
    msg.setTimeStamp(0.11612810140668328);
    msg.setSource(14147U);
    msg.setSourceEntity(99U);
    msg.setDestination(52086U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.5771632612367366;
    msg.lon = 0.1236130567263396;
    msg.z = 0.8042918062396273;
    msg.z_units = 158U;
    msg.radius = 0.3893225838908523;
    msg.duration = 37401U;
    msg.speed = 0.5678539656113892;
    msg.speed_units = 112U;
    msg.custom.assign("VVZNMZRGQFOWCBDFXXKDIZPUSSPLDXNOMEUQGNRHGDUITKOHZXHPLJIYIADWUSHMIAGNVVMJEYQLQVYABDJFIVKBAKRDQLSVUZTFJBBPWWZHLPCGXFUCBLOCWBSDHVRTJIWTBXTMACP");

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
    msg.setTimeStamp(0.288648533430084);
    msg.setSource(21872U);
    msg.setSourceEntity(147U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.26433692583632773;
    msg.lon = 0.2915035463016715;
    msg.z = 0.1900621832393753;
    msg.z_units = 1U;
    msg.radius = 0.046503391129755656;
    msg.duration = 11656U;
    msg.speed = 0.7934851479962717;
    msg.speed_units = 168U;
    msg.custom.assign("MQMSQOIKCDXXYWYQFWSHAEVGXRCZFI");

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
    msg.setTimeStamp(0.2892494603393808);
    msg.setSource(25540U);
    msg.setSourceEntity(135U);
    msg.setDestination(25646U);
    msg.setDestinationEntity(30U);
    msg.timeout = 41982U;
    msg.flags = 226U;
    msg.lat = 0.42210841375251373;
    msg.lon = 0.6779567749690094;
    msg.start_z = 0.04276621709554418;
    msg.start_z_units = 201U;
    msg.end_z = 0.6194163768556178;
    msg.end_z_units = 152U;
    msg.radius = 0.11792586529201454;
    msg.speed = 0.0713303202446508;
    msg.speed_units = 93U;
    msg.custom.assign("PYLOGXGGQOLUTJCDWUGRMVLWVYKWDKJPRSCGQYSDPURJUSVENFDFRKYLQUKDBYGXCDSHRQKRYLBYJMILONAAQKFHWUEV");

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
    msg.setTimeStamp(0.11712030466482137);
    msg.setSource(2439U);
    msg.setSourceEntity(190U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(208U);
    msg.timeout = 18658U;
    msg.flags = 98U;
    msg.lat = 0.9845162849483123;
    msg.lon = 0.9683546386104356;
    msg.start_z = 0.9666531568441472;
    msg.start_z_units = 135U;
    msg.end_z = 0.9355840578926375;
    msg.end_z_units = 139U;
    msg.radius = 0.37805445013704664;
    msg.speed = 0.5304269100033322;
    msg.speed_units = 101U;
    msg.custom.assign("CGZLXXLSWGWHZAGDQXCFCNCZTHKMBTPAKZNUFNMQIQWSAVARJROQFEDSNOCBFLGWXAEXKAYJMXJEZKIUDHMYQDHUDOMTNTIDGZMUZSBRPQOJIKOVXNOPPRHBPYYVBLKZHVMRWLJLABQTFYNUCAZJIRF");

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
    msg.setTimeStamp(0.10443014045634347);
    msg.setSource(6087U);
    msg.setSourceEntity(77U);
    msg.setDestination(32108U);
    msg.setDestinationEntity(22U);
    msg.timeout = 33811U;
    msg.flags = 102U;
    msg.lat = 0.11224967176862954;
    msg.lon = 0.883939680484974;
    msg.start_z = 0.8240211273603885;
    msg.start_z_units = 18U;
    msg.end_z = 0.9546720420951325;
    msg.end_z_units = 29U;
    msg.radius = 0.24694291498207654;
    msg.speed = 0.9436217542379205;
    msg.speed_units = 116U;
    msg.custom.assign("GGUMCAZNUKJLACDKIEDYLXAKXRTVPAISFDHXVONIXIMFMQNJZNPGXCEOOWQZBCXMQQDLZRCWQBPBKCLCBRRFDGGWFNLLSKYHUKONKZULKTNRMOWDHXFGPIFDVVEYAEZ");

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
    msg.setTimeStamp(0.9334685794470985);
    msg.setSource(16584U);
    msg.setSourceEntity(58U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(76U);
    msg.timeout = 18655U;
    msg.lat = 0.24507026999628778;
    msg.lon = 0.2711738394664689;
    msg.z = 0.46120123523869117;
    msg.z_units = 71U;
    msg.speed = 0.19434465775940657;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4840596611863357;
    tmp_msg_0.y = 0.27340196081773205;
    tmp_msg_0.z = 0.4307251229988306;
    tmp_msg_0.t = 0.3697063269677392;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UGLYWUHFDABTXJTUOSEOIYDNYAWXZGBMCRBZVCHCDQQVQZJWAXXMSHQOGFIOJUMFACRROY");

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
    msg.setTimeStamp(0.816953649428031);
    msg.setSource(54448U);
    msg.setSourceEntity(158U);
    msg.setDestination(60011U);
    msg.setDestinationEntity(108U);
    msg.timeout = 13862U;
    msg.lat = 0.25649887042494857;
    msg.lon = 0.5060170044020379;
    msg.z = 0.7668834336492228;
    msg.z_units = 53U;
    msg.speed = 0.2446069038853126;
    msg.speed_units = 44U;
    msg.custom.assign("APXCHAYOPKPTHBMLEIVSYDSFDJAGLEQXMASLZCAVLHRGWSGWVSFBHNSHHHHTRSBKMW");

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
    msg.setTimeStamp(0.38167038177784096);
    msg.setSource(35644U);
    msg.setSourceEntity(6U);
    msg.setDestination(36275U);
    msg.setDestinationEntity(169U);
    msg.timeout = 59146U;
    msg.lat = 0.6827551375473813;
    msg.lon = 0.141837207187415;
    msg.z = 0.09336049710144967;
    msg.z_units = 13U;
    msg.speed = 0.8747223314262386;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.19291257858775424;
    tmp_msg_0.y = 0.6247178097025653;
    tmp_msg_0.z = 0.37704220054393656;
    tmp_msg_0.t = 0.37982592880917054;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FNWBTOKQRJNAGIYZXWUKDFNLYVEXWZZYKTGSPFTBXIPSRIOAC");

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
    msg.setTimeStamp(0.19264181178489104);
    msg.setSource(24042U);
    msg.setSourceEntity(251U);
    msg.setDestination(46691U);
    msg.setDestinationEntity(117U);
    msg.x = 0.47180952559426015;
    msg.y = 0.2192140063640189;
    msg.z = 0.7066643890034001;
    msg.t = 0.36883203748877535;

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
    msg.setTimeStamp(0.419933665587376);
    msg.setSource(23854U);
    msg.setSourceEntity(11U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(108U);
    msg.x = 0.27172809642730744;
    msg.y = 0.7069656252228711;
    msg.z = 0.3879276855030037;
    msg.t = 0.9304207162706972;

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
    msg.setTimeStamp(0.5359637222893402);
    msg.setSource(12270U);
    msg.setSourceEntity(177U);
    msg.setDestination(24193U);
    msg.setDestinationEntity(46U);
    msg.x = 0.7280183989439232;
    msg.y = 0.5133935312276764;
    msg.z = 0.7078737195156976;
    msg.t = 0.8247524984053879;

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
    msg.setTimeStamp(0.7391193546677319);
    msg.setSource(2355U);
    msg.setSourceEntity(74U);
    msg.setDestination(1328U);
    msg.setDestinationEntity(122U);
    msg.timeout = 3502U;
    msg.name.assign("BGVYQWCTMWHVDDNTBIVPUEDQZURGUCCZORCMLQYCMZOFJJBRNYLKLNDJHQBQETSLUVXBSXTHKEKANKNNPCGZEYWUPKMGFROVUWSGHLOOWAUUBJTCXXDBFJTYMSSJZPTOUSPYXPARXIYRSRHLWDRJVYAEIJXQIGQDBAAIWBDKGOOJZECNBOSRFMPKHWVZTWZEIEFLEAIDGHSFAMXPFNIJRNKFIGWXML");
    msg.custom.assign("RYKIFUTGVZSQXBRJHFMBGTELNUQHLBMQWAPYUIYQWMPVAUOOIIZOTCQSOXEDHUYKPFQMRONECMWWDXWEJTBQAMZHKEWOBXIIPZSJBRVAUYLHCAPNMKBRYUNOXNTHTCACLLJEEJBQKJVZSDACLWXPEXOCZEGCKMLDGTSJLRKZRTFGFFNUVFLISUVZVMWDTHKSZDQVBDRYENWRICACS");

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
    msg.setTimeStamp(0.5074231502079649);
    msg.setSource(12874U);
    msg.setSourceEntity(94U);
    msg.setDestination(40076U);
    msg.setDestinationEntity(176U);
    msg.timeout = 11684U;
    msg.name.assign("MPKGMRLEFLAEPEDUKHWIFHRPTPHBZBNJDCECMUIFZVBYLSTSXOBIVBHXYAUAPYGHKNAWEVCGEICMYXQDZBIRDGRGKJHMPTTSZSXKUNZRVTUUDNXKOJSEUBDJWCBTLZTFQOCVMLQYEXNGSGGSVQDNAJPXSGDHOCQTFCBZ");
    msg.custom.assign("CWNFVEOULUEJVJWCVKNDKGAXOKFHWXZHORWQERBMYGGVIMNIWNBZDYJUMJMQCQGODKRGXIFHIORSYKXQONFKEIBFIN");

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
    msg.setTimeStamp(0.7666683824325586);
    msg.setSource(5937U);
    msg.setSourceEntity(221U);
    msg.setDestination(9448U);
    msg.setDestinationEntity(53U);
    msg.timeout = 52683U;
    msg.name.assign("ICMOYWSLVHHAIWDUWUDLHVRLMIWYPXTAKCSFDPOJOPILUMOTBBEOXWLFLQVOUCMZXXTKYMEXMJYBLMWHRBGCFJEXNAKPRIBDZSFTUKPDZZSVEYVPQNXGXGQBCFUQRDQINHJKLVNWDZGSWFRSVVBASMQDYANZGRCYWRNJIHPLQTEXCOTNYAUCODSCUKKG");
    msg.custom.assign("KPPZIZCXFJGRQVOZWSQELQGVBLDNXTASN");

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
    msg.setTimeStamp(0.6403887858331391);
    msg.setSource(6711U);
    msg.setSourceEntity(192U);
    msg.setDestination(62194U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.8000838764960596;
    msg.lon = 0.3436043778325357;
    msg.z = 0.9966384111937858;
    msg.z_units = 156U;
    msg.speed = 0.9960720336130903;
    msg.speed_units = 136U;
    msg.start_time = 0.5758918826042068;
    msg.custom.assign("JCJUITFXPIBPUEGOSJPSJBHDQCLYPEVTJWWWDUXNCZADJTOVLVWACSBECWTEOSZNLFAZIYNSHNHTHIDGNAXMRKEVUVRNPARRWQUEFNCKWGISYKKQOOOHHFYHQPSMEUDKXVQOXHMLDGCWEZYQHXXRGKTMBF");

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
    msg.setTimeStamp(0.6831650708533815);
    msg.setSource(38914U);
    msg.setSourceEntity(183U);
    msg.setDestination(62060U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.8079450132491699;
    msg.lon = 0.6520832823612599;
    msg.z = 0.9851263840198234;
    msg.z_units = 30U;
    msg.speed = 0.4660379346125181;
    msg.speed_units = 207U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5074346532611717;
    tmp_msg_0.y = 0.8092013363143056;
    tmp_msg_0.z = 0.11226895032307926;
    tmp_msg_0.t = 0.7037456428737038;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 25150U;
    tmp_msg_1.off_x = 0.5750587924849883;
    tmp_msg_1.off_y = 0.7813440398445777;
    tmp_msg_1.off_z = 0.43205409609824075;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.04058584211536009;
    msg.custom.assign("JYDMGHNKRKVNGUCAKLEDBQSFQMSVAXISOYRRXEBATHBUPFL");

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
    msg.setTimeStamp(0.7477218836839091);
    msg.setSource(17756U);
    msg.setSourceEntity(62U);
    msg.setDestination(28290U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.8266396726784458;
    msg.lon = 0.580384529032821;
    msg.z = 0.7782990958219003;
    msg.z_units = 5U;
    msg.speed = 0.07685225154123909;
    msg.speed_units = 70U;
    msg.start_time = 0.5024539230055753;
    msg.custom.assign("QQMWEOJWCJQULBDOJOTBZYAAXFWXDPYKASUJNXQPWNEZSGHENJLLFFVHCCHRUXWAFNMVRFPTHFMZZQRMLUDGOOTPLGWILTYFTXUTFQKMZRGEXKPVYQPSUOYVYDQKZSVLJEVIVKQCDMBWUQBAGATRGANTGJIGXWHXBHPSDCEZYSKNHRZARBIBJELYMCUKHDIYPZMIYOPGAICZSDAFFTNDVISRJEDTHCL");

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
    msg.setTimeStamp(0.9928579586304489);
    msg.setSource(14199U);
    msg.setSourceEntity(106U);
    msg.setDestination(38029U);
    msg.setDestinationEntity(124U);
    msg.vid = 47309U;
    msg.off_x = 0.4677482813602214;
    msg.off_y = 0.9969795578317749;
    msg.off_z = 0.6778143354656028;

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
    msg.setTimeStamp(0.8939807228590129);
    msg.setSource(3851U);
    msg.setSourceEntity(52U);
    msg.setDestination(32453U);
    msg.setDestinationEntity(47U);
    msg.vid = 47121U;
    msg.off_x = 0.5834124738686527;
    msg.off_y = 0.5179212773671306;
    msg.off_z = 0.510247256426683;

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
    msg.setTimeStamp(0.4485035378774933);
    msg.setSource(20509U);
    msg.setSourceEntity(66U);
    msg.setDestination(16900U);
    msg.setDestinationEntity(254U);
    msg.vid = 28569U;
    msg.off_x = 0.39131852571848347;
    msg.off_y = 0.04360302099186564;
    msg.off_z = 0.5632458347195417;

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
    msg.setTimeStamp(0.6446900916554112);
    msg.setSource(61469U);
    msg.setSourceEntity(228U);
    msg.setDestination(13512U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.5861214207277282);
    msg.setSource(8314U);
    msg.setSourceEntity(104U);
    msg.setDestination(5554U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.19533024220008366);
    msg.setSource(44559U);
    msg.setSourceEntity(76U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.7438329310013428);
    msg.setSource(18368U);
    msg.setSourceEntity(156U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(165U);
    msg.mid = 49697U;

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
    msg.setTimeStamp(0.5750703454763822);
    msg.setSource(24623U);
    msg.setSourceEntity(60U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(2U);
    msg.mid = 53901U;

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
    msg.setTimeStamp(0.3871022697205533);
    msg.setSource(39446U);
    msg.setSourceEntity(65U);
    msg.setDestination(9398U);
    msg.setDestinationEntity(27U);
    msg.mid = 39344U;

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
    msg.setTimeStamp(0.793939058725913);
    msg.setSource(50042U);
    msg.setSourceEntity(129U);
    msg.setDestination(61689U);
    msg.setDestinationEntity(166U);
    msg.state = 190U;
    msg.eta = 43719U;
    msg.info.assign("NKLRISWMAEELXMAJELEJWYWWQLMYISZVRBRVFHGHLSDHROAOIVMUMVDYANMBCKCFCMMGEJZGICLPGDMQLDDBJPFAZNRTXXQDJQSZYQ");

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
    msg.setTimeStamp(0.39567371894100134);
    msg.setSource(21630U);
    msg.setSourceEntity(138U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(123U);
    msg.state = 192U;
    msg.eta = 53693U;
    msg.info.assign("ASTRYTJZDTWFTTRXXPRZQHDIWKAUDUBMUTVEYHMBCGB");

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
    msg.setTimeStamp(0.7993826185120907);
    msg.setSource(36359U);
    msg.setSourceEntity(1U);
    msg.setDestination(30598U);
    msg.setDestinationEntity(32U);
    msg.state = 199U;
    msg.eta = 22225U;
    msg.info.assign("OIHJVDJJLFABBFAZMPEAPNHXTUHXSRDRKCKVEIOFAOAQRBPLQWZRJKHRGSAYXRGAJBRPZCPSZIJSLCPZILOLNUVTRBWETDVDZEGHEKJPZOBODUKDAYWTPCKTYKHUTIOOLYWSTXWEFTHBKQQEMMNEUUYQXOWXSBZLFYCOAKHSCNCSQIQQUWSBIMUJGMLNNGMS");

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
    msg.setTimeStamp(0.4242790413999311);
    msg.setSource(43085U);
    msg.setSourceEntity(184U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(140U);
    msg.system = 60056U;
    msg.duration = 39323U;
    msg.speed = 0.9961732859659648;
    msg.speed_units = 137U;
    msg.x = 0.18173632929490935;
    msg.y = 0.7631344256447312;
    msg.z = 0.8970813886662599;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.7958172507182737);
    msg.setSource(19217U);
    msg.setSourceEntity(16U);
    msg.setDestination(29261U);
    msg.setDestinationEntity(211U);
    msg.system = 59216U;
    msg.duration = 52366U;
    msg.speed = 0.4851221295635195;
    msg.speed_units = 184U;
    msg.x = 0.4108433997944453;
    msg.y = 0.9652254168005304;
    msg.z = 0.21320928813912376;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.01836239917499438);
    msg.setSource(28236U);
    msg.setSourceEntity(91U);
    msg.setDestination(48400U);
    msg.setDestinationEntity(9U);
    msg.system = 15894U;
    msg.duration = 50993U;
    msg.speed = 0.21377998332815495;
    msg.speed_units = 117U;
    msg.x = 0.6585437363831954;
    msg.y = 0.8176401410201694;
    msg.z = 0.1617621861545142;
    msg.z_units = 123U;

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
    msg.setTimeStamp(0.9929424325444329);
    msg.setSource(24293U);
    msg.setSourceEntity(108U);
    msg.setDestination(52214U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.6102285212227108;
    msg.lon = 0.9213157283351969;
    msg.speed = 0.0736728753477105;
    msg.speed_units = 235U;
    msg.duration = 2707U;
    msg.sys_a = 34759U;
    msg.sys_b = 18907U;
    msg.move_threshold = 0.8518028176824772;

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
    msg.setTimeStamp(0.4865577472338909);
    msg.setSource(16741U);
    msg.setSourceEntity(195U);
    msg.setDestination(35349U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.2186811211667009;
    msg.lon = 0.7506670307358186;
    msg.speed = 0.7749814931318654;
    msg.speed_units = 247U;
    msg.duration = 22356U;
    msg.sys_a = 39536U;
    msg.sys_b = 39378U;
    msg.move_threshold = 0.562510193403721;

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
    msg.setTimeStamp(0.011384869067923464);
    msg.setSource(25871U);
    msg.setSourceEntity(247U);
    msg.setDestination(22492U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.21340628492776081;
    msg.lon = 0.7272816838674374;
    msg.speed = 0.7424845915186297;
    msg.speed_units = 65U;
    msg.duration = 40975U;
    msg.sys_a = 51253U;
    msg.sys_b = 51584U;
    msg.move_threshold = 0.16345537225727158;

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
    msg.setTimeStamp(0.6658265569565269);
    msg.setSource(11693U);
    msg.setSourceEntity(152U);
    msg.setDestination(2537U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.5021054977975967;
    msg.lon = 0.2635179037422819;
    msg.z = 0.18128374373647171;
    msg.z_units = 210U;
    msg.speed = 0.7015141360604062;
    msg.speed_units = 110U;
    msg.custom.assign("AONCJRGLKKMYYTQLUJRFBPQVUJTHANZDVQEUAMKMDLGJVHRZGNVEUXQEEBIVCZYBDIVEYTFMNUZSOGSNJITLOVOMKWMGYHPDCXLGBXTJWDWYCI");

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
    msg.setTimeStamp(0.26983188608109565);
    msg.setSource(14609U);
    msg.setSourceEntity(245U);
    msg.setDestination(9795U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.5546625066505324;
    msg.lon = 0.047767348007973;
    msg.z = 0.809539313295286;
    msg.z_units = 36U;
    msg.speed = 0.14867864443403978;
    msg.speed_units = 140U;
    msg.custom.assign("LSLVWXLRLPYREKGHGAKRGSJFQJTSDUADDNAOMXJLCWMQAZBANOJINSRXZBWMNOOQWPVOYDYUBTNWZXCSEKOCVHVUCGGRXPUPXDTTFJTTHTFHKUFIVUPSKBH");

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
    msg.setTimeStamp(0.18507176442706263);
    msg.setSource(16035U);
    msg.setSourceEntity(191U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.9627762972186512;
    msg.lon = 0.9972056226757845;
    msg.z = 0.5136849653749438;
    msg.z_units = 131U;
    msg.speed = 0.4118066445999483;
    msg.speed_units = 123U;
    msg.custom.assign("GCSJECYNNIJLBQZNZXZBORCOUVRIEXJAAXDFPRNAQFLRGJTSEMYCHSQMSUPMIVSKQLNNTWQJKYODTIPLWKBHMSQIKTGGNTXGKMAWLE");

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
    msg.setTimeStamp(0.3119436446798878);
    msg.setSource(37462U);
    msg.setSourceEntity(186U);
    msg.setDestination(2733U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.5565738612649146;
    msg.lon = 0.8221710472839723;

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
    msg.setTimeStamp(0.24286807447260905);
    msg.setSource(22859U);
    msg.setSourceEntity(211U);
    msg.setDestination(30583U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.25442685989046454;
    msg.lon = 0.3204708523722438;

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
    msg.setTimeStamp(0.7310843636943729);
    msg.setSource(3991U);
    msg.setSourceEntity(235U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.3178606408417437;
    msg.lon = 0.5301707408836135;

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
    msg.setTimeStamp(0.4125959620730981);
    msg.setSource(654U);
    msg.setSourceEntity(139U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(114U);
    msg.timeout = 36679U;
    msg.lat = 0.6208000867410998;
    msg.lon = 0.5583080651164997;
    msg.z = 0.5450988421330595;
    msg.z_units = 136U;
    msg.pitch = 0.7562492351769937;
    msg.amplitude = 0.06454274787588232;
    msg.duration = 26709U;
    msg.speed = 0.0312405543515889;
    msg.speed_units = 142U;
    msg.radius = 0.2520920062263655;
    msg.direction = 78U;
    msg.custom.assign("KGMJLJNZBIMUZARMGKPOSQYJOWFAOAWUYGEVUHCXGRKGBFONJQFDWIKHJMGYLCXTTNFYEISSCRGQBTHFCDKMOGQLUVWNFXKUHFLSQBWAIAEKFBAWYLUTBONASOZSDJSDNKZBYVEZVXEWYHPLERPXYXESTXTMYHRWVDOJRAVQRDJUIPMPDRSOPJ");

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
    msg.setTimeStamp(0.3395686534939151);
    msg.setSource(43633U);
    msg.setSourceEntity(105U);
    msg.setDestination(62982U);
    msg.setDestinationEntity(200U);
    msg.timeout = 15083U;
    msg.lat = 0.4142719906255008;
    msg.lon = 0.679404161192286;
    msg.z = 0.4013614802826976;
    msg.z_units = 112U;
    msg.pitch = 0.6813553049181614;
    msg.amplitude = 0.5201937775557394;
    msg.duration = 63081U;
    msg.speed = 0.5905813264919724;
    msg.speed_units = 184U;
    msg.radius = 0.5838356369060481;
    msg.direction = 128U;
    msg.custom.assign("LKSBXPALCEKBSAEPTIYPGWPVGMGRBZUFRALJNASCYHMVMNVOLIHOTUWSYTIXOONLEDNUVKAFSKSKUVPLHCGMRFWTIEPQXHZSQWBSCPFJKLAUVYMFCJOPCMFWMTVKQCUYVIRTOPAXDVQGRBUTJMNNPX");

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
    msg.setTimeStamp(0.6495526544031079);
    msg.setSource(48033U);
    msg.setSourceEntity(145U);
    msg.setDestination(8907U);
    msg.setDestinationEntity(54U);
    msg.timeout = 17599U;
    msg.lat = 0.18925069155372876;
    msg.lon = 0.10706553098048466;
    msg.z = 0.29413366857647394;
    msg.z_units = 156U;
    msg.pitch = 0.9839410090771998;
    msg.amplitude = 0.5269561631140155;
    msg.duration = 34945U;
    msg.speed = 0.9558623523819445;
    msg.speed_units = 54U;
    msg.radius = 0.22956327760877404;
    msg.direction = 226U;
    msg.custom.assign("RONGKBLOMMKYDQPTFZSCLLYFJUATRCROEPSISFYDEGXTEJABDAWEVDHXSULEXYWIMJNKPGKPYVVL");

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
    msg.setTimeStamp(0.6213479487602854);
    msg.setSource(57935U);
    msg.setSourceEntity(61U);
    msg.setDestination(29697U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("VCDRGSZYILPOAMAIMMEARLRTXJCUOLUETGMHPFSVOXZFJWIIHKQLUIKHZJFWLZAYHGDPTBBFGJVNDSVUHBJSICTDPPEJJACYKNLNTZOYS");
    msg.reference_frame = 196U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36575U;
    tmp_msg_0.off_x = 0.6065580530711503;
    tmp_msg_0.off_y = 0.03076873167454297;
    tmp_msg_0.off_z = 0.4087373872284681;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PJHZQODJIRKMVIQVOQGMWKKFTZEXTZBRUSBPTVMWAEWNCATBUIQAURUPJMFKIGMGDZTKSYDNTNGVEUHFOMXSVFCIGTJGLFHVARXNHEAKKLTBHREWZNOCJZOQUXBLXN");

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
    msg.setTimeStamp(0.9711407077801466);
    msg.setSource(17731U);
    msg.setSourceEntity(243U);
    msg.setDestination(41579U);
    msg.setDestinationEntity(72U);
    msg.formation_name.assign("WOAVSVGAMNLTCNSERZAKRJEPWMHDWWPZWLMLGYIDNZSXEPFCTBGJLNIDBUTSVYYZKLTCLQJDEUHTKKMUBXBGLMXQHOCOIISPMTJNAZOCEURQPLYFQDQEAUWKNKWLYJTEOSDRUKEYWQVUNOXTOCLTJBCCJGFBXIVRUZHJXFFSQVJEYUVYAQHUZGO");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 205U;
    tmp_msg_0.off_x = 0.9928832370144038;
    tmp_msg_0.off_y = 0.6409334119249278;
    tmp_msg_0.off_z = 0.64003075092582;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KPNYILYBFRUJMHOGGMTJCKWPTORHEMMOSRFYVSNZMATFWRYNFAUQHCPFIJZCHNFXAEHXBUXLICKSNMKRLACCCYLGWHISSHVRENLRDNTHJTIGVBFEQZIAVVLAQJKSQTXGXEUOJDBEQCAPIGVBFBBKGEYLEYTXUIWZDLWRIDUJFDXPQYDPGSGTH");

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
    msg.setTimeStamp(0.28249452306686307);
    msg.setSource(18127U);
    msg.setSourceEntity(84U);
    msg.setDestination(5506U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("RFIOXNUXCGBUVYHKSBKKTPSIOKOPFWIDROYVADTZQBLMHRGGDGDXNNQYISNXUURJETIDJ");
    msg.reference_frame = 41U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22743U;
    tmp_msg_0.off_x = 0.48677516219323336;
    tmp_msg_0.off_y = 0.21492343942726333;
    tmp_msg_0.off_z = 0.9785461010840807;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FVJPCFOXTEGGERCHOELUUXXWLPALZTJUNHIWQRDTKCDGSCBSWKKQKYGCEVBBHYUTGXNOSPZANXGOBJUBEQAHOTVYFMAKHYHCDDFYAUODDPMVYAPIENSHTXWIOZLHWDQVIJJURATSRJPXKOLIPMLZIGXEXRYEVZWZIIYMMTVWQKWWCVLUUMKDJSBAILGFRZCSFNXEPMLACNBMQNRSRVFVONFRQBQQMJAIDYHNM");

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
    msg.setTimeStamp(0.3176016434016552);
    msg.setSource(54860U);
    msg.setSourceEntity(52U);
    msg.setDestination(34363U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("LTWBVFFBWFIWARLCMYPHIVVINEDZAKKAXGJYHOCSEINQAHHIKPJOHUPIFRTQJQLMDLEIIGPGORUHCSRSDJXQNUJFSGZSBNYBXFTMPGCYCTZZJTYDSZNVXHLADQYKCMZFQMRJKAUZATOEUPBEBMHDCYCOXVULXPSAUHJFFVMKEESKNVZMQCGMTEGBEWHKXQLXALUFWBXMZKPSRPOENINP");
    msg.formation_name.assign("XFXVMPWGLLELBZJVAFRABPXUKZQYEOGXMTUFJNNZJQKKNBVXHKDSVWQAQJKRIGJSCGATERHMLTMWFGGXVBNPCTAYOSIDZLFNLFBADTOWAZNYDAPYGVIWXQNVPIUIFSWLENELBCKZUGV");
    msg.plan_id.assign("OCVCMFNIJZQCJKNZFRWZFIRUJZOV");
    msg.description.assign("APRMSRWFNCRKREJIIWGYUHYGJIJPZREKCKGZXQOTQZFPDPXOYDQULRMBIXHQFNXLYXAFCWEBCPVMCTLECVZLQLZIASYFDLVNUJBZHOBTDBUKVKOPUHIYMVGPTRPDXAQNSWATYUESYSLSLPMQHAMMITUAKBNVEKTO");
    msg.leader_speed = 0.17270607336552968;
    msg.leader_bank_lim = 0.16113782675791177;
    msg.pos_sim_err_lim = 0.31643019418524343;
    msg.pos_sim_err_wrn = 0.7486940630053536;
    msg.pos_sim_err_timeout = 61999U;
    msg.converg_max = 0.9697301911805054;
    msg.converg_timeout = 21085U;
    msg.comms_timeout = 56276U;
    msg.turb_lim = 0.503065513599499;
    msg.custom.assign("HCGQHNWBFHPWAWSOEBLPKVOTXDUJRTIFUJUJFJAJQXYJWYEPPDTIZLXDQTOFZJZGQRPVJCMVIBLFZYMENRDGBWKHIJMBNKCATGUXHFWGIKORVZXPCMMAESNNAQSIOHOIOLBALQNRJBOCRNRWCSPBUUNASQAEIQCTPBXUWNDLZPVHXBKSXGRZRVZAUCLEDUSOFDHKWMDZLHKZKVKSFAULEIHEDEYRYPGS");

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
    msg.setTimeStamp(0.9518564590905284);
    msg.setSource(35664U);
    msg.setSourceEntity(215U);
    msg.setDestination(57313U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("LKZUACFHNJGPSSUBEHZKMYIYRPIXYYDBILTMXBYUITNDLOQIXQ");
    msg.formation_name.assign("ZYSZKMGVOFPNSXUCVJPWAGQCFSOFLQKYJRWQTDWIXATJJCWYBUDZBZTXSIULBABYRTNEJCDUPFOBSFEUNMEZHVGFJRJFPURUVRNKLVLEOULATLUMKVEDPMSLBZTMYQDSQIKMOAQPTVIJUCWCWZIEBZFOVWKYITHHBYGTWKZGLIDKJFRNNDMDMIAIDACMLRXQ");
    msg.plan_id.assign("ADCHCZFNXMQOJDUIGSVIFGRBEAQRMQJJGROONGOBKCPMZMTDEJVTQDUIKUZUAHWSBOB");
    msg.description.assign("YHLUPUWWCYKGLTEDHGEZTGRMGWQOMCCZFIZDWXBEAOSNNQJUKOFXDLEGNUUAAMSVVYGFECKJZAENFGJINIWIKLJZYMFIPBAECVBZXRKQZIVQJBBSHMDQRNLYBPSKRTUTUSXLUBOIPAHUODIVCLNQBPDDLKRCGHSQDWF");
    msg.leader_speed = 0.8495745962804813;
    msg.leader_bank_lim = 0.3394746071345539;
    msg.pos_sim_err_lim = 0.9089728579520459;
    msg.pos_sim_err_wrn = 0.049933650577769884;
    msg.pos_sim_err_timeout = 12341U;
    msg.converg_max = 0.6896968468608643;
    msg.converg_timeout = 28072U;
    msg.comms_timeout = 6841U;
    msg.turb_lim = 0.42688328198446257;
    msg.custom.assign("MYMXJAGLYEUUAQKDAWNZFNSWUXEJWUVOROKTTINOMAQMJKFZZYKNZRJSIIZNQGFGERRUXDWTFBMYNXPDTOPALQNSBEBJMBQESZWVWFOEJSM");

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
    msg.setTimeStamp(0.8634942200484467);
    msg.setSource(42737U);
    msg.setSourceEntity(124U);
    msg.setDestination(37066U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("ALEEOLWEYXBNAOHAHXVUVKSMFYQROPLDFORCVBBKZDMZYXFTSGIGGJPEIXQMWFQHMLXCPEAXURTBLWMBQFJBHGEPCSI");
    msg.formation_name.assign("RGDEJWZIBZDXYVJTOPBKBBOVPDYSELIFVXSFVLIVRTVKADLMHRYSTFSDTXHAJDDEXLNBAQXZEFPZHNYCMTLUKFJNCUVURMCCGQRYEFMRPZBCFWKFPKLQIRBGXUSYQEWTONWWIQKKYZWADGIOMVJBHBUJEFMCUCPWZMZXOLRZQHYPFCUIDIAJPYEESVXWKUHAGNWOJGY");
    msg.plan_id.assign("CRPHNCBTAFYIBMGJHYGUPMKJLDHSLKVRHLZEIWDQEYFJVAJUXFMRYVUNACADMBSWEUPONCFZISSADHGQEATLVZFXDQOPRONVYTWKRSVK");
    msg.description.assign("VXOYSSPGUPVLTGIFMRLIWCAAPNHXAWGDROAMMQOQATHHGBINSAWVYUUAMLGCFUAUDZYVRLQNWDNTPXNWSNSCYMILIBGIYMCFBXLCHGOHMUVERJPJFQJWDWRTSRKXZBQKTPWBKKMTFPQBEKWHYKOACQZVRDPHCCGRCDDIGQJJUKBMZHINTQYBDETNIPJBVJETXULEPSVIXZMLFWNZYJEKJEHKVEZDCSZSZBAFUOELFFEHNROXVYOLXGX");
    msg.leader_speed = 0.5799446552576202;
    msg.leader_bank_lim = 0.6103872076397631;
    msg.pos_sim_err_lim = 0.4749401969769098;
    msg.pos_sim_err_wrn = 0.61129909739215;
    msg.pos_sim_err_timeout = 20133U;
    msg.converg_max = 0.572354215127386;
    msg.converg_timeout = 19369U;
    msg.comms_timeout = 46659U;
    msg.turb_lim = 0.46661342652085513;
    msg.custom.assign("EHEAALPJGTYNMLTGYVNPWRCSPOMXVZQDKZSCUUBIWDCNIMAWHCQVYLXXTSLOYGCFMASDNEUUKGFKAQGHXSOIGZOKSQKPVVLYBKRBPYXIIUJXEBZHTRQSGOODORMHURQPVWJJDFQJBFMBZZCZQZBWJTXVHKXKCGTRFUOGPUJQ");

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
    msg.setTimeStamp(0.0056110317411707245);
    msg.setSource(32572U);
    msg.setSourceEntity(62U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(50U);
    msg.control_src = 13435U;
    msg.control_ent = 32U;
    msg.timeout = 0.37091507837683446;
    msg.loiter_radius = 0.11630666271124179;
    msg.altitude_interval = 0.15796248918833566;

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
    msg.setTimeStamp(0.98063726386861);
    msg.setSource(1555U);
    msg.setSourceEntity(251U);
    msg.setDestination(3062U);
    msg.setDestinationEntity(170U);
    msg.control_src = 38598U;
    msg.control_ent = 243U;
    msg.timeout = 0.1468436602581824;
    msg.loiter_radius = 0.4065424182543297;
    msg.altitude_interval = 0.3504472608897591;

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
    msg.setTimeStamp(0.9088793989977092);
    msg.setSource(63593U);
    msg.setSourceEntity(250U);
    msg.setDestination(29801U);
    msg.setDestinationEntity(135U);
    msg.control_src = 22360U;
    msg.control_ent = 133U;
    msg.timeout = 0.46613852981896975;
    msg.loiter_radius = 0.3814346700909307;
    msg.altitude_interval = 0.9183417536293284;

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
    msg.setTimeStamp(0.3108844463619178);
    msg.setSource(28830U);
    msg.setSourceEntity(126U);
    msg.setDestination(24369U);
    msg.setDestinationEntity(161U);
    msg.flags = 194U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6767393537534115;
    tmp_msg_0.speed_units = 73U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6693048490985878;
    tmp_msg_1.z_units = 103U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.00733305693509434;
    msg.lon = 0.7175770484220299;
    msg.radius = 0.5582182966429793;

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
    msg.setTimeStamp(0.22255489483986268);
    msg.setSource(45094U);
    msg.setSourceEntity(227U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(83U);
    msg.flags = 84U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5195390838129544;
    tmp_msg_0.speed_units = 57U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8403468127425867;
    tmp_msg_1.z_units = 174U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9110973945046584;
    msg.lon = 0.7170349122384693;
    msg.radius = 0.6177459497033297;

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
    msg.setTimeStamp(0.4631993370669101);
    msg.setSource(25694U);
    msg.setSourceEntity(146U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(102U);
    msg.flags = 185U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.014733833986707245;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9598788467472201;
    tmp_msg_1.z_units = 243U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6240013226119304;
    msg.lon = 0.5870994474594321;
    msg.radius = 0.9515929781135944;

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
    msg.setTimeStamp(0.013836332982444466);
    msg.setSource(52100U);
    msg.setSourceEntity(24U);
    msg.setDestination(14008U);
    msg.setDestinationEntity(123U);
    msg.control_src = 18647U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 138U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.08910944154623113;
    tmp_tmp_msg_0_0.speed_units = 251U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.38941074152580313;
    tmp_tmp_msg_0_1.z_units = 149U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.58585456864428;
    tmp_msg_0.lon = 0.4475026026731288;
    tmp_msg_0.radius = 0.5512783198949421;
    msg.reference.set(tmp_msg_0);
    msg.state = 227U;
    msg.proximity = 142U;

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
    msg.setTimeStamp(0.9001134903441941);
    msg.setSource(24486U);
    msg.setSourceEntity(52U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(6U);
    msg.control_src = 15437U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8323157580010564;
    tmp_tmp_msg_0_0.speed_units = 7U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9870583654380392;
    tmp_tmp_msg_0_1.z_units = 220U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7022835179181044;
    tmp_msg_0.lon = 0.8725517380761761;
    tmp_msg_0.radius = 0.955870268957129;
    msg.reference.set(tmp_msg_0);
    msg.state = 16U;
    msg.proximity = 152U;

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
    msg.setTimeStamp(0.6363690941200912);
    msg.setSource(5208U);
    msg.setSourceEntity(131U);
    msg.setDestination(25959U);
    msg.setDestinationEntity(222U);
    msg.control_src = 17954U;
    msg.control_ent = 98U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 211U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5734475776620935;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.29813810908015526;
    tmp_tmp_msg_0_1.z_units = 59U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3143753396039689;
    tmp_msg_0.lon = 0.574680516990702;
    tmp_msg_0.radius = 0.02740462563710333;
    msg.reference.set(tmp_msg_0);
    msg.state = 65U;
    msg.proximity = 204U;

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
    msg.setTimeStamp(0.9410975074085334);
    msg.setSource(24261U);
    msg.setSourceEntity(135U);
    msg.setDestination(29836U);
    msg.setDestinationEntity(54U);
    msg.ax_cmd = 0.13117575817630645;
    msg.ay_cmd = 0.9617966193933853;
    msg.az_cmd = 0.8022528051556577;
    msg.ax_des = 0.39531412468374183;
    msg.ay_des = 0.6709248073240514;
    msg.az_des = 0.6500936781082972;
    msg.virt_err_x = 0.2187059670173379;
    msg.virt_err_y = 0.6847744627402204;
    msg.virt_err_z = 0.09066914927919656;
    msg.surf_fdbk_x = 0.07413877892934329;
    msg.surf_fdbk_y = 0.4152829324323002;
    msg.surf_fdbk_z = 0.7661059330441089;
    msg.surf_unkn_x = 0.7867766446776538;
    msg.surf_unkn_y = 0.449021694957936;
    msg.surf_unkn_z = 0.23272908621607813;
    msg.ss_x = 0.13055444771919855;
    msg.ss_y = 0.10493687666238116;
    msg.ss_z = 0.4572089455741276;

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
    msg.setTimeStamp(0.017293709191221307);
    msg.setSource(10104U);
    msg.setSourceEntity(88U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(218U);
    msg.ax_cmd = 0.5623260226772627;
    msg.ay_cmd = 0.17520035430304381;
    msg.az_cmd = 0.6913452063954394;
    msg.ax_des = 0.7964828799613966;
    msg.ay_des = 0.7537950537100593;
    msg.az_des = 0.7053066947416001;
    msg.virt_err_x = 0.5007939730323832;
    msg.virt_err_y = 0.8455652939830175;
    msg.virt_err_z = 0.5097365752991454;
    msg.surf_fdbk_x = 0.5579387142039651;
    msg.surf_fdbk_y = 0.24587693760748774;
    msg.surf_fdbk_z = 0.9567310659494536;
    msg.surf_unkn_x = 0.4372617715832128;
    msg.surf_unkn_y = 0.18052076116161353;
    msg.surf_unkn_z = 0.8724261260252109;
    msg.ss_x = 0.18880564589658888;
    msg.ss_y = 0.8542750665755137;
    msg.ss_z = 0.8093646029046642;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZEGGXKSESBFAUWZHZTYCCTMWVHETYTWCMQLSBIIQOIXVNPKHYPBDBDGZGHCDRHAPQQCZNLWPAOGNDRSADPVZLNQUKMDFARWKACHOOEILSJDGUM");
    tmp_msg_0.dist = 0.4799951364059286;
    tmp_msg_0.err = 0.09163962845144713;
    tmp_msg_0.ctrl_imp = 0.783669050250906;
    tmp_msg_0.rel_dir_x = 0.5011228319940542;
    tmp_msg_0.rel_dir_y = 0.7770225050932651;
    tmp_msg_0.rel_dir_z = 0.07146655203976171;
    tmp_msg_0.err_x = 0.6158405003924643;
    tmp_msg_0.err_y = 0.7878641555489387;
    tmp_msg_0.err_z = 0.6952609110235475;
    tmp_msg_0.rf_err_x = 0.5454016798884636;
    tmp_msg_0.rf_err_y = 0.6019929780849999;
    tmp_msg_0.rf_err_z = 0.23700557601249017;
    tmp_msg_0.rf_err_vx = 0.16614257624754591;
    tmp_msg_0.rf_err_vy = 0.763949110743181;
    tmp_msg_0.rf_err_vz = 0.5086405135542771;
    tmp_msg_0.ss_x = 0.907099396802454;
    tmp_msg_0.ss_y = 0.20195906871867841;
    tmp_msg_0.ss_z = 0.49524269073716465;
    tmp_msg_0.virt_err_x = 0.9126258899015618;
    tmp_msg_0.virt_err_y = 0.12043292807761052;
    tmp_msg_0.virt_err_z = 0.476542514751394;
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
    msg.setTimeStamp(0.9043438485574208);
    msg.setSource(27215U);
    msg.setSourceEntity(48U);
    msg.setDestination(13976U);
    msg.setDestinationEntity(45U);
    msg.ax_cmd = 0.555001929049406;
    msg.ay_cmd = 0.6960549829265105;
    msg.az_cmd = 0.39803694317209415;
    msg.ax_des = 0.19002443982525108;
    msg.ay_des = 0.23725058684317313;
    msg.az_des = 0.017683928800861448;
    msg.virt_err_x = 0.7463257010711523;
    msg.virt_err_y = 0.41578360131962977;
    msg.virt_err_z = 0.25045949611775664;
    msg.surf_fdbk_x = 0.4521234299748601;
    msg.surf_fdbk_y = 0.36353368625083204;
    msg.surf_fdbk_z = 0.7564809873067116;
    msg.surf_unkn_x = 0.740046614863666;
    msg.surf_unkn_y = 0.216031157687963;
    msg.surf_unkn_z = 0.8488740399588157;
    msg.ss_x = 0.02216828815392613;
    msg.ss_y = 0.7786646812950818;
    msg.ss_z = 0.4904597364927541;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GZBYUBUEQVLZDYMCQPKMWROBTCJDKMFXPQIDOUTKGWOGLAKPZATWAHBQBYRWNEBHJXIVYCWUDTGNPWERBGSSDJLFHNLPZTXTAFFXKELEYAADCGUZTPVASORHZKWXNOMVSINVHLEEPOYSOEHGIBFMWGZIMNTHZXMBCKFVFQNNVQJUJSGCMZPTQJCLAAKHCUCFQLEXHTJM");
    tmp_msg_0.dist = 0.3660650681008205;
    tmp_msg_0.err = 0.3545024917098457;
    tmp_msg_0.ctrl_imp = 0.023480685753801578;
    tmp_msg_0.rel_dir_x = 0.9573504163352631;
    tmp_msg_0.rel_dir_y = 0.36163978243024064;
    tmp_msg_0.rel_dir_z = 0.9456439219639424;
    tmp_msg_0.err_x = 0.6641591524246805;
    tmp_msg_0.err_y = 0.08193391310014286;
    tmp_msg_0.err_z = 0.9411831383083896;
    tmp_msg_0.rf_err_x = 0.6580589482905275;
    tmp_msg_0.rf_err_y = 0.7226507693204527;
    tmp_msg_0.rf_err_z = 0.7016403045339079;
    tmp_msg_0.rf_err_vx = 0.4139948735793133;
    tmp_msg_0.rf_err_vy = 0.3428196124557552;
    tmp_msg_0.rf_err_vz = 0.7364210057734576;
    tmp_msg_0.ss_x = 0.6687166370843886;
    tmp_msg_0.ss_y = 0.3525527776733328;
    tmp_msg_0.ss_z = 0.5099001071224439;
    tmp_msg_0.virt_err_x = 0.25327538574888164;
    tmp_msg_0.virt_err_y = 0.8745554684987016;
    tmp_msg_0.virt_err_z = 0.874019368049161;
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
    msg.setTimeStamp(0.4467216400148595);
    msg.setSource(49760U);
    msg.setSourceEntity(251U);
    msg.setDestination(30000U);
    msg.setDestinationEntity(78U);
    msg.s_id.assign("QBZRRLWOPDJVZNAPVZKALBPEWNMWXORASQLVTQCFPOCHUKDVBOIXUOSCNYEGVZTBPSWUBJQSDFHGFTQRGYBFGCJWIAVDOPCNBLSXQHGRUONSDWFMCQYKAEPJKXTMBKYAFQESIEHXJKOJETVXMWKSYLGSTWYRMIUKXMYYZMJULZHLEUPAODXNCRYIAGUZMIPHNLTILZRNMTFCUFUTIHJGKZFDGJFCNMRBWNJEZPIHQKVBLVR");
    msg.dist = 0.38250785223413086;
    msg.err = 0.6411398436743322;
    msg.ctrl_imp = 0.2034732181344382;
    msg.rel_dir_x = 0.37162855245119486;
    msg.rel_dir_y = 0.6263489067421362;
    msg.rel_dir_z = 0.3324641262073169;
    msg.err_x = 0.9647653942220956;
    msg.err_y = 0.4483544648394586;
    msg.err_z = 0.01966621122052392;
    msg.rf_err_x = 0.8763859576171987;
    msg.rf_err_y = 0.21856907822275418;
    msg.rf_err_z = 0.6803829763103894;
    msg.rf_err_vx = 0.6697886270684821;
    msg.rf_err_vy = 0.6739667444725506;
    msg.rf_err_vz = 0.052549526148402914;
    msg.ss_x = 0.3958349686692286;
    msg.ss_y = 0.9520009188142441;
    msg.ss_z = 0.052864066450898806;
    msg.virt_err_x = 0.10869918833874537;
    msg.virt_err_y = 0.7018154043171095;
    msg.virt_err_z = 0.8403361942500203;

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
    msg.setTimeStamp(0.505877362110995);
    msg.setSource(57135U);
    msg.setSourceEntity(157U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(32U);
    msg.s_id.assign("VANPIBTBDEVICDBGCZDHIWDFHXPMNEUQFZHVDJRXRNGFSJKXSZTXHPKRQUJLCVITALKDBEEUNRYORENCPKAFYOCYOVGROUWBXZWFPXPQZQWMNMEYWMHFTJDUIIELMCMJARKDASSQTYGOCPISZMSYEZCWTWTHEKYGOUSISXXGJJVKHVNLRBJLATQPXCGDYBZNLWDZOHVYLBOFQWS");
    msg.dist = 0.044832955963363674;
    msg.err = 0.7802032174230475;
    msg.ctrl_imp = 0.17499714069119487;
    msg.rel_dir_x = 0.2680577530333439;
    msg.rel_dir_y = 0.4700957579901569;
    msg.rel_dir_z = 0.6995290712086886;
    msg.err_x = 0.007417276438696385;
    msg.err_y = 0.8024694695614607;
    msg.err_z = 0.8782551872119192;
    msg.rf_err_x = 0.6531530496948807;
    msg.rf_err_y = 0.172005539173969;
    msg.rf_err_z = 0.86181988016433;
    msg.rf_err_vx = 0.862153463414027;
    msg.rf_err_vy = 0.2783445260492017;
    msg.rf_err_vz = 0.09036422638927377;
    msg.ss_x = 0.9337583279006064;
    msg.ss_y = 0.3614672136834679;
    msg.ss_z = 0.8600446131615603;
    msg.virt_err_x = 0.6642805927735634;
    msg.virt_err_y = 0.4355846132812816;
    msg.virt_err_z = 0.5398606327798395;

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
    msg.setTimeStamp(0.024903442684682586);
    msg.setSource(58573U);
    msg.setSourceEntity(72U);
    msg.setDestination(19034U);
    msg.setDestinationEntity(76U);
    msg.s_id.assign("LADJKVZISECTTGKRUXTGNQQBLDL");
    msg.dist = 0.0802464697356452;
    msg.err = 0.5811823538858185;
    msg.ctrl_imp = 0.4085145849041434;
    msg.rel_dir_x = 0.2419231786539634;
    msg.rel_dir_y = 0.15275427157432375;
    msg.rel_dir_z = 0.07559708349877303;
    msg.err_x = 0.5893865320683611;
    msg.err_y = 0.9972461030580522;
    msg.err_z = 0.8723545685103993;
    msg.rf_err_x = 0.816941590000798;
    msg.rf_err_y = 0.16006347022355982;
    msg.rf_err_z = 0.6966787693694976;
    msg.rf_err_vx = 0.7622994938047538;
    msg.rf_err_vy = 0.7710588353366349;
    msg.rf_err_vz = 0.7042356700891392;
    msg.ss_x = 0.25959350141421356;
    msg.ss_y = 0.7473459323717091;
    msg.ss_z = 0.5996237298797448;
    msg.virt_err_x = 0.25117295863658917;
    msg.virt_err_y = 0.4688882043039757;
    msg.virt_err_z = 0.7555088181513993;

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
    msg.setTimeStamp(0.7459800119990614);
    msg.setSource(20430U);
    msg.setSourceEntity(139U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(209U);
    msg.timeout = 61484U;
    msg.rpm = 0.438719443907435;
    msg.direction = 197U;
    msg.custom.assign("AJYJMZLVINHSOURWZXSYRAGNMXJQFCHTCMDMDAVTCEMYKXNABAQLRGMRCPZQKXINPCRKNZPULFJQZEBCUEKVYULPINWHIQEUAEHTYDSOJ");

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
    msg.setTimeStamp(0.7169042709304054);
    msg.setSource(22526U);
    msg.setSourceEntity(68U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(43U);
    msg.timeout = 50124U;
    msg.rpm = 0.7236088672925628;
    msg.direction = 96U;
    msg.custom.assign("EJPZVLDIAKZEUTRPOZPXGAHAJLFXNZNINKNXOCLTGGASSNDUHBFYFVXLWRSLKIMKIIWHBYLVEOCKKIJVTNGVGJVUOUUQRYQTTJWYPQDIZUPBEGBHHZYLVTFWWIBWXPQMMPTQHQDDHKOFOOXAQMIOMRTHVDKBQXJACHBFJMRUEAGCCGOLSBSWEQMMRYFZDJMRDKNFICJUSYOBGCWZCEERLTTNWDEEKRSNAPNYLWGY");

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
    msg.setTimeStamp(0.7266633591119704);
    msg.setSource(21537U);
    msg.setSourceEntity(171U);
    msg.setDestination(21481U);
    msg.setDestinationEntity(197U);
    msg.timeout = 62421U;
    msg.rpm = 0.08863887031424866;
    msg.direction = 11U;
    msg.custom.assign("IOMQVUPHVQNXBFHEYLYDBTARLCFOCYBKQGRVEEJEWLGMYJDMZJUHPBNAZTZQXCWJFOCWCSOMTHEAQLJASIGDJP");

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
    msg.setTimeStamp(0.012868146740571018);
    msg.setSource(37907U);
    msg.setSourceEntity(88U);
    msg.setDestination(48303U);
    msg.setDestinationEntity(113U);
    msg.formation_name.assign("IRNRECOWZKYXUEX");
    msg.type = 124U;
    msg.op = 172U;
    msg.group_name.assign("EOSJLRSCOPQMXBHLSFZTUORYPOUPXJFXDFJOCKCTVJIDIVJFNNRZAZFBEGYAOKSYPCSWLSZYWHCQBZLPEXXPUXWFVVMEFUPCZNAKNXQIHFYUHXTTRIWYTFHLJHPRYNOINEFUTDGXCZZCKGBYMGIQKMDMRMXVWAAQBDJHMVTNPAJBBPIHJNVSQNGRSDEKVGUSBLYQOBTZKDOAUEWLEAWRBOUWAQM");
    msg.plan_id.assign("VHZZEUBUOJDLLKYNBXXAKUYMXYESKJJRUZFTNGKOSNWCSEJQPZQNUETFPRHVVAPDUGMBGITVPVISXYCCWIRBBEATSWPHGSEARFYHIWDRNDGRQWLTQMORZSBYHOMSMPMIAUJKTHEPVMBTRATEHLYDVLUXBKLCIIIEPFAQSFGKZIOKHQKCFFMNIQWTCLAJCNROPXTZYJXUOPJ");
    msg.description.assign("EJZXLBZNBTUDVTOSNXETSWKADANRJAGZXDIUYOTHAQFPPJJRTSXGZTOTEAZPUIHKRWYONHCXUFWBOSKXUDIWPIUCVPNJZEHQWWECMNGSLBSCVRXARBVJAFIXSBMFTJFDUGVPPJPLFHNVDALXZBGMLEQYARMDSFYDNDSFWOCPQICGGRZKYMIPQELJQMWYKXKELZCHHBQOGKUMQKFDRCYLVZTIQMVNMUWMHVLRIAKHN");
    msg.reference_frame = 5U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6020U;
    tmp_msg_0.off_x = 0.8176074403487318;
    tmp_msg_0.off_y = 0.6474700762315193;
    tmp_msg_0.off_z = 0.6077278586075184;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8151398905809316;
    msg.leader_speed_min = 0.8507448102709073;
    msg.leader_speed_max = 0.48975970150589476;
    msg.leader_alt_min = 0.5138897663825308;
    msg.leader_alt_max = 0.2771958054829775;
    msg.pos_sim_err_lim = 0.6131950707111435;
    msg.pos_sim_err_wrn = 0.284250551740715;
    msg.pos_sim_err_timeout = 38696U;
    msg.converg_max = 0.37863683196117637;
    msg.converg_timeout = 47653U;
    msg.comms_timeout = 35168U;
    msg.turb_lim = 0.9823854673011223;
    msg.custom.assign("PRNEHFGAZPXAGHDWTNQNOHDQCIFMFRYTFXEMKSOGPGHUGTORQRSBVSHIUKZBIBYQPKOXITSENZSEZQUYCLJWTMZUPTKMJAGLWJWPKEAPCIJJBSX");

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
    msg.setTimeStamp(0.8317936686192369);
    msg.setSource(56407U);
    msg.setSourceEntity(146U);
    msg.setDestination(21692U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("AOVEXGMZTIGVTICYEYGRJOEQLRKILSDSSMBXUAFZCPHFRRZUBKPOAVTEPNBZOBUCZWNPIYIFZXQN");
    msg.type = 185U;
    msg.op = 223U;
    msg.group_name.assign("BRPNOITUIDOQPFONZGMBLTQAQJOLJYZTHIKVVVJZVVIYANIPRAWUBXNTQKEQGCPBIQCWYWPKGKJRGFQEUCOFNGZYBFPFVLGKWXGOCPZRPSTDANYJJUMAEWDXXLSHOIGCLSKREMJOWVXLEE");
    msg.plan_id.assign("EHHWNTUHIPXJAVROQZJMVTPKTBULDNYGPJBXHYOSWUVXBJSIMMYTGFQEXDGPLEBIUEPVDVIRFSXXBXKOSGVIWXALQKARRNZFOSILAISKSRBWFMKQCNBDDEZABCHVZQZOTEHNZGYW");
    msg.description.assign("FLSCWJVPUPGMJBYDBRETDGYTZWWFPEWUXUEFVTXCKROAJUGSYFAADEUAPEDJVSQQZRIKMCNARGLGFZULMINTHTOMCBRDHJIOCOLWJNXEKLQHSNIORZYJCTHURHPACFSDFQPXOYBBDDHGZXTANRPKFESQTBXCCIERJIQPABYWOPIWGHKNZLIMQMFVDSTXIYWKZDGVPCORHVFNVZBXHJVNMQUWHBUGNEYSYKKTKYVZXMSQWB");
    msg.reference_frame = 34U;
    msg.leader_bank_lim = 0.8575850645273839;
    msg.leader_speed_min = 0.9695466576186839;
    msg.leader_speed_max = 0.48390448812619047;
    msg.leader_alt_min = 0.7615653575204439;
    msg.leader_alt_max = 0.7222576543442047;
    msg.pos_sim_err_lim = 0.9736965788175389;
    msg.pos_sim_err_wrn = 0.23238937930430648;
    msg.pos_sim_err_timeout = 11766U;
    msg.converg_max = 0.9725867770025459;
    msg.converg_timeout = 27240U;
    msg.comms_timeout = 23212U;
    msg.turb_lim = 0.5046844555038769;
    msg.custom.assign("OXFRFHIDJTOZFFHFPQOGPRAZYJZULTYZFHLEMQKRQXMKDZVSLTZMPYODTJGDAZGYQNSCKVOSJMLVHLMXCEWPLIWHBXWRCBPHATSHONEJGYJMRNVSXJWGXULRIHCAUMJSEVTGAJRUYTSOEMAYZENNKSIMJAIDKVFUPVDRXCXYEWITRNENTFLUDDXOZIQSUDUBCPZIMPIKVBWWWCKEPNWBGEBFRAQS");

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
    msg.setTimeStamp(0.7006726052256522);
    msg.setSource(27586U);
    msg.setSourceEntity(25U);
    msg.setDestination(8878U);
    msg.setDestinationEntity(34U);
    msg.formation_name.assign("SKHNAVGHKFGFQOVZHOFESASIVWJAYNKGPKNCETPPWQFGBBLQQGTFERDQLGOVIXECUKLFNJWDNIEIIDRUJRJTHYNVWUZ");
    msg.type = 12U;
    msg.op = 85U;
    msg.group_name.assign("TFFACWZUNRSLIQHXAEGDPMDXFTDJBGRJADVXHDUFCLUOCDBTZQVXWOKNIXHBOVYXVQPQWEEOTHGJUABDKOSURXNRRQRAUWHZSMGFWHIEUAPYJCRPSRLTKNPFIUNNLTEVZGISHJVTEYODGLCVMMWWKAJBQEAVNHLGLWYFWQGTYKJCSCBTJVZJMSIKVIBFNLRZSYCGPKXUONDMOYMMKKXYIEFJBLIQEBATMSNIPXZZCRP");
    msg.plan_id.assign("LORDREDSYCXKVJRQPZCUYSOSBHYQSFDWBRPVLWSZPDMFNEYILIHDJJGAHOAZAUUOHBJMZDTNKPCBFQBRIWSXWECLDBGPKAXHFROKGLMNYTYEXQLEAXIKGAMFILQWKOZCPNTOHWFTLRAXFYTJCZBOMUGHEMAHTULVWIYUZZVPIQJMIYEJXSBJXVUEF");
    msg.description.assign("SJNJJDDPLAWCXQYSDSTLBZVOMPNFWXGPZZOHTXHHUQREHDXQRQRUEZEUSUZPJFFKWKEWGITOTEOJFPLYBJDCGIFCJOYUDCKRWTYSOPFKQNMAQNMGXPQKYLLEDSSGDCZLNYNYPPNCMTVCIFWCWFIDMUHBAKKCVSHQKEBHMHBVBIGTTDGMJGIIUVERVMOJZZAUNOXXFLBLWQVLRAFXMNTPYZZKHOARJRMWVBKCQWVAUIR");
    msg.reference_frame = 21U;
    msg.leader_bank_lim = 0.7757316109459481;
    msg.leader_speed_min = 0.09242787948504527;
    msg.leader_speed_max = 0.48583955068881157;
    msg.leader_alt_min = 0.7321315371872611;
    msg.leader_alt_max = 0.632270038031658;
    msg.pos_sim_err_lim = 0.8073969978460223;
    msg.pos_sim_err_wrn = 0.06316013121490971;
    msg.pos_sim_err_timeout = 34405U;
    msg.converg_max = 0.9191959507988188;
    msg.converg_timeout = 58117U;
    msg.comms_timeout = 27299U;
    msg.turb_lim = 0.6859473586141809;
    msg.custom.assign("IKMMHTCHDPMUCXSTSRKZBOZIBNEDAAOCZHILEJCYTNRTPJMEIYJCYYIRAUJ");

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
    msg.setTimeStamp(0.5424764473009647);
    msg.setSource(16229U);
    msg.setSourceEntity(118U);
    msg.setDestination(36693U);
    msg.setDestinationEntity(82U);
    msg.timeout = 2172U;
    msg.lat = 0.5715857941323481;
    msg.lon = 0.09826323920674118;
    msg.z = 0.7419026321299894;
    msg.z_units = 210U;
    msg.speed = 0.3983144236983662;
    msg.speed_units = 29U;
    msg.custom.assign("UJUQHYCBTOJEWFZANQPBXNECJEXIYDHQGNVKWXTIRGGUOCRZJKYGHINYMAZRIDGZTMRFZVHWXUCPAKJWRTHQOLDPLHJCSVABBDDLGEUQZDTYSMVOYKWFXPSFYVMWXUSQLBDCESHHXECJYFFBGUOOLEGBKNRGEODPKVCZAWIAJFNIBRGMBTTZMPUXNOHXKYCIAITWLKAWPQTCNPWJZRURVOUSAZMMFKPVEEQVOSBDAMISLXQ");

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
    msg.setTimeStamp(0.13402232231864197);
    msg.setSource(54123U);
    msg.setSourceEntity(220U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(239U);
    msg.timeout = 6356U;
    msg.lat = 0.6836671561591676;
    msg.lon = 0.0718305150420423;
    msg.z = 0.42195650152315733;
    msg.z_units = 244U;
    msg.speed = 0.8517601043909326;
    msg.speed_units = 169U;
    msg.custom.assign("IAXZSLKAOMVFTXAKGHETGZMGRLOPMRMSRWLIYIPZWJLESTTTBNUOYFWSIQNHHPIKVTNQPFBNFGNDLSPADAHCULFERIWKGRORJICVJNHMDJEZUGSPTOOBVYNGZMVJBHHBSHDZRRCUVJZKYGQRYDQKBUKWQMJXKMXQTECOOCLAZWVYLBLHFBFCMYFPQFUWEXEAJZLSFWRNXVUGEUVKIAYCOSAPOCGVPD");

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
    msg.setTimeStamp(0.7424860976584736);
    msg.setSource(25149U);
    msg.setSourceEntity(6U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(219U);
    msg.timeout = 61445U;
    msg.lat = 0.6724014935635629;
    msg.lon = 0.08166865321916295;
    msg.z = 0.18071956960918023;
    msg.z_units = 237U;
    msg.speed = 0.029509487057201023;
    msg.speed_units = 68U;
    msg.custom.assign("HLNMFZYYKTRBKYDCMIPEAMBF");

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
    msg.setTimeStamp(0.16003368016194774);
    msg.setSource(4836U);
    msg.setSourceEntity(62U);
    msg.setDestination(36064U);
    msg.setDestinationEntity(166U);
    msg.timeout = 63222U;
    msg.lat = 0.9900665304635152;
    msg.lon = 0.4714463399331189;
    msg.z = 0.3020234204059026;
    msg.z_units = 107U;
    msg.speed = 0.10994006118517385;
    msg.speed_units = 242U;
    msg.custom.assign("UAIROTHVSFBLHAXZJMGUESULEBSCVZYIJEPDKNDCOKKDAOLXYFWXHGPIDUGWZBPEBYREWCFWJDVGEIOKHPGHQFHRCZTQSOVPRNLQYIPJKNPJOQVEMDZMLQAKUGXIYQZUCBQGKDRMGD");

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
    msg.setTimeStamp(0.12480310316144183);
    msg.setSource(22765U);
    msg.setSourceEntity(173U);
    msg.setDestination(178U);
    msg.setDestinationEntity(184U);
    msg.timeout = 38567U;
    msg.lat = 0.45886659314007094;
    msg.lon = 0.2722673894399972;
    msg.z = 0.12292988947566363;
    msg.z_units = 242U;
    msg.speed = 0.3160584055124195;
    msg.speed_units = 187U;
    msg.custom.assign("QIAQCDALTY");

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
    msg.setTimeStamp(0.20408735856678462);
    msg.setSource(55231U);
    msg.setSourceEntity(230U);
    msg.setDestination(15433U);
    msg.setDestinationEntity(30U);
    msg.timeout = 65432U;
    msg.lat = 0.5494098563140905;
    msg.lon = 0.40467468753476055;
    msg.z = 0.662861395277441;
    msg.z_units = 139U;
    msg.speed = 0.7808295229882952;
    msg.speed_units = 129U;
    msg.custom.assign("EASFNVIIAHDUZEXILTJOYFBPEKZVYPCYGIKFRVGPTPRTJOLIORXWCRNKSWLCKCVLLVXHUNOUMJWQOZVWBAPRIKHHYUCUKTGMYOQYHADBGQAMHATYZMJXVAUDEIBOFZNFQSFWYWYYLWUGGKFRJPJ");

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
    msg.setTimeStamp(0.3351351069607551);
    msg.setSource(18949U);
    msg.setSourceEntity(9U);
    msg.setDestination(40562U);
    msg.setDestinationEntity(59U);
    msg.arrival_time = 0.07538104214878272;
    msg.lat = 0.9318866552523983;
    msg.lon = 0.5874748751637202;
    msg.z = 0.22468354226177112;
    msg.z_units = 234U;
    msg.travel_z = 0.7319955402246431;
    msg.travel_z_units = 31U;
    msg.delayed = 108U;

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
    msg.setTimeStamp(0.06364765676573925);
    msg.setSource(46096U);
    msg.setSourceEntity(97U);
    msg.setDestination(30537U);
    msg.setDestinationEntity(129U);
    msg.arrival_time = 0.3006670505780643;
    msg.lat = 0.9782280734306832;
    msg.lon = 0.2932756597623539;
    msg.z = 0.6113716136193139;
    msg.z_units = 21U;
    msg.travel_z = 0.09821059294344037;
    msg.travel_z_units = 226U;
    msg.delayed = 163U;

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
    msg.setTimeStamp(0.7383640934693695);
    msg.setSource(37516U);
    msg.setSourceEntity(200U);
    msg.setDestination(41848U);
    msg.setDestinationEntity(199U);
    msg.arrival_time = 0.5452875515138599;
    msg.lat = 0.9855905686589558;
    msg.lon = 0.03203167909841631;
    msg.z = 0.07609237099983512;
    msg.z_units = 195U;
    msg.travel_z = 0.6042829943048695;
    msg.travel_z_units = 7U;
    msg.delayed = 72U;

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
    msg.setTimeStamp(0.4036335846774912);
    msg.setSource(63641U);
    msg.setSourceEntity(144U);
    msg.setDestination(11140U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.5641171584974766;
    msg.lon = 0.07571005392399677;
    msg.z = 0.9233329406139211;
    msg.z_units = 79U;
    msg.speed = 0.053163878275929166;
    msg.speed_units = 205U;
    msg.bearing = 0.6853956434384483;
    msg.cross_angle = 0.2928098902390477;
    msg.width = 0.5488401859343115;
    msg.length = 0.7878619412972316;
    msg.coff = 159U;
    msg.angaperture = 0.3043296583000623;
    msg.range = 44119U;
    msg.overlap = 164U;
    msg.flags = 72U;
    msg.custom.assign("XFQAVPTNJKBGCPBJPZLFXMCKFPMMPJVBRNVCJVDIQEQCPIHSSFHZUAWHCRKOZUWTXHTIEJMNFNDQMEPJORYPOREBABFIULNBGSTWEVYENRAWKUXDZULDPJWSLIDKCHNYRZMVAGVBQYSTVUWERVZJWCSBCLEKGIXMXDSJXUGAZMWBQHPOIHFCQCTRTJAUZ");

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
    msg.setTimeStamp(0.734136378322381);
    msg.setSource(10800U);
    msg.setSourceEntity(186U);
    msg.setDestination(55971U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.6636416689033191;
    msg.lon = 0.6461886069502661;
    msg.z = 0.8725292605639486;
    msg.z_units = 123U;
    msg.speed = 0.1187397509456315;
    msg.speed_units = 48U;
    msg.bearing = 0.012886515158793244;
    msg.cross_angle = 0.92322700086451;
    msg.width = 0.32249268185600766;
    msg.length = 0.12289475745488054;
    msg.coff = 146U;
    msg.angaperture = 0.7480305934479407;
    msg.range = 57473U;
    msg.overlap = 56U;
    msg.flags = 175U;
    msg.custom.assign("HEZNBXVQKPJYHCQQUTTKZWZCJOQUVANDGBHZOLNUXFZQHLEIDHVVKZJMYMWOSFTCAEILYDNLGFFPUTXRUTVNHVJUAWROUASPTYIOKEUVWNYQNIYCVALFDERJMFWJGGABTHKTACY");

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
    msg.setTimeStamp(0.2537823607758487);
    msg.setSource(23787U);
    msg.setSourceEntity(175U);
    msg.setDestination(42537U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.0037451000838587545;
    msg.lon = 0.8190407084769556;
    msg.z = 0.7029761364175571;
    msg.z_units = 177U;
    msg.speed = 0.32589625973902503;
    msg.speed_units = 240U;
    msg.bearing = 0.15276999270381775;
    msg.cross_angle = 0.6505128925939349;
    msg.width = 0.6067445304545067;
    msg.length = 0.6909986150718683;
    msg.coff = 15U;
    msg.angaperture = 0.0796723050496112;
    msg.range = 64975U;
    msg.overlap = 173U;
    msg.flags = 180U;
    msg.custom.assign("ZGTNAFWARTWIXCVPDPYUUTRAVXOOLIORVWBDDXHXMZJLASUYHYXABEQDJNLCGVXYWEMYWJTBGXUTLESFFHVFYRZ");

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
    msg.setTimeStamp(0.826815557245591);
    msg.setSource(40182U);
    msg.setSourceEntity(50U);
    msg.setDestination(55158U);
    msg.setDestinationEntity(107U);
    msg.timeout = 8254U;
    msg.lat = 0.46170407375380473;
    msg.lon = 0.3798138180813636;
    msg.z = 0.32799787494236987;
    msg.z_units = 68U;
    msg.speed = 0.20451365636831143;
    msg.speed_units = 60U;
    msg.syringe0 = 79U;
    msg.syringe1 = 52U;
    msg.syringe2 = 202U;
    msg.custom.assign("ESJXCDQBGBQEBOBRLCICFYKCNIKAESLMWMHQBLFEINYSIZKAMUZRJKVKIZPLXWMBIHHYWSIDXJNECTJTPRYDMFLEICQEPVRVPXZNQAPFWBWMWNQYRKAUVCUJJXEQVZHBGXFYZABHUGIOQTROWAKXJTXOPSALGVRTNSVUFDDZSZFOAT");

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
    msg.setTimeStamp(0.7993156085454013);
    msg.setSource(24838U);
    msg.setSourceEntity(217U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(125U);
    msg.timeout = 26146U;
    msg.lat = 0.9523462644960884;
    msg.lon = 0.9666223070150711;
    msg.z = 0.6601456000948962;
    msg.z_units = 36U;
    msg.speed = 0.6865601206094762;
    msg.speed_units = 23U;
    msg.syringe0 = 132U;
    msg.syringe1 = 146U;
    msg.syringe2 = 20U;
    msg.custom.assign("XDVSKOMKIVPRCSDFBIIBQHNLSWASGPFGRSAKNJTQOASZZSUABOPDMZYEOCIOLCLXUSULDGQCQTPHMWYKZXSAPFWEXOWIXQGFJNVUUNRCWTTXLYRMEWILMKEYAIXJVAKABQPEZPBSIDLYAZVFBHRCTJUHIHYHWR");

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
    msg.setTimeStamp(0.7543873123588294);
    msg.setSource(4237U);
    msg.setSourceEntity(141U);
    msg.setDestination(56638U);
    msg.setDestinationEntity(214U);
    msg.timeout = 2861U;
    msg.lat = 0.09755388061172843;
    msg.lon = 0.19212028403186232;
    msg.z = 0.7722835031494504;
    msg.z_units = 178U;
    msg.speed = 0.7539077879764987;
    msg.speed_units = 250U;
    msg.syringe0 = 211U;
    msg.syringe1 = 194U;
    msg.syringe2 = 107U;
    msg.custom.assign("WCTNDSPBTXYNQWZVBXBDGXWYESGOTJOCXVCIHPRAWBFIBKPNDKHUVSGMGKEADMELDASFNIMEYAEFJTRFGUSJOHRJIPLXQLJIIZMSFXIURZYEEQGMZATREAGNLFRUJBM");

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
    msg.setTimeStamp(0.6276450711265815);
    msg.setSource(52112U);
    msg.setSourceEntity(6U);
    msg.setDestination(36125U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.4831237195603715);
    msg.setSource(58567U);
    msg.setSourceEntity(135U);
    msg.setDestination(27075U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.830674467208506);
    msg.setSource(12587U);
    msg.setSourceEntity(250U);
    msg.setDestination(48920U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.6735913727399409);
    msg.setSource(59754U);
    msg.setSourceEntity(9U);
    msg.setDestination(42046U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.41489799049124043;
    msg.lon = 0.9624771105626319;
    msg.z = 0.6200145714831388;
    msg.z_units = 100U;
    msg.speed = 0.7746876331302321;
    msg.speed_units = 195U;
    msg.takeoff_pitch = 0.8753444531993615;
    msg.custom.assign("ZNELBLLWXKUCWUFCQHMMYTCSFADYHZKFNQBJGMRAWNAXSLVD");

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
    msg.setTimeStamp(0.3715896795939173);
    msg.setSource(6599U);
    msg.setSourceEntity(163U);
    msg.setDestination(26331U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.5726688300729045;
    msg.lon = 0.29973594335767695;
    msg.z = 0.8745973994015324;
    msg.z_units = 49U;
    msg.speed = 0.7192041368960417;
    msg.speed_units = 168U;
    msg.takeoff_pitch = 0.711147104096042;
    msg.custom.assign("WYJPGUPDNXJSFIFCZNSHPCVBGMUUNDJFYAWOJMIKALBVQCGRGDYNRAKLFGNDEKCVEXNXJEUARZBOSXIHDMKPJWQPAGXISUULAPRLATSSKSIOJBQCRSPRGARYPBHHOJCOWLAMEYCQHGVZTQMOUDBZPDRZTQVNDBIVVFLXMZBXWNGPUWKEQJXNWETFVGTXBFAYOHQMOEMYTIYNDZYLMTMTIFSJWI");

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
    msg.setTimeStamp(0.1283865301591256);
    msg.setSource(57378U);
    msg.setSourceEntity(143U);
    msg.setDestination(32965U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.8022216238356356;
    msg.lon = 0.39701170463335234;
    msg.z = 0.3791145571958846;
    msg.z_units = 44U;
    msg.speed = 0.9366601740632184;
    msg.speed_units = 24U;
    msg.takeoff_pitch = 0.0034722104127039577;
    msg.custom.assign("PXLYYNCEKNGIJRNZRISDVKCZKBLZGQMZPWMLEBIETHGANNYDZUQVRXVOBSLWNOLGHRUIOKKTBGFKUMPVEWTROTLFCZTOATWAWSHDXLNYBFKUFJUOMQSABAEQIJVSYQMWRGUMVMRFPRTZIHZJDAINSPTJSXOSPBHJMXFFXXGQHCHLEHCDQAPXTEVPYKQIAVBLKDMAVJOWUHWFJOBDWTQNCJDYRGXGPESDEHZQIYJKYFCUNBVXEYRCUCMZW");

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
    msg.setTimeStamp(0.008010172575374064);
    msg.setSource(11391U);
    msg.setSourceEntity(21U);
    msg.setDestination(12462U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.6248333595772573;
    msg.lon = 0.38840306913319955;
    msg.z = 0.46314896566817043;
    msg.z_units = 2U;
    msg.speed = 0.41856562904041583;
    msg.speed_units = 167U;
    msg.abort_z = 0.8650870118601004;
    msg.bearing = 0.4261903168701918;
    msg.glide_slope = 7U;
    msg.glide_slope_alt = 0.5367168933993952;
    msg.custom.assign("QGQONIVDNKTCMEQLSEAUPZAPJJZOEXXNWUGMMQAKH");

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
    msg.setTimeStamp(0.5556589713449581);
    msg.setSource(58670U);
    msg.setSourceEntity(131U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.25132563837689226;
    msg.lon = 0.9412994860594606;
    msg.z = 0.47734147748846734;
    msg.z_units = 31U;
    msg.speed = 0.6342689368403244;
    msg.speed_units = 132U;
    msg.abort_z = 0.22771129547257551;
    msg.bearing = 0.1602194285052705;
    msg.glide_slope = 250U;
    msg.glide_slope_alt = 0.8755712320464112;
    msg.custom.assign("BSOLIKYKVKCTMAUGDCDCWRLFNAHSLLGAFHXXBMKLEEMOZWGYQRCIQDVTXNDRSIVHHNPAULEAVGFPRUYNANQZGIWFOCXPJKLQDFRPJPTEUWMAIZWHBGBFSXQZZOCSLUYHCTBLWPPVCOERFJOHSZOSUPWJPMJYJRJAEIYTIZWGKWVMSRMBNBTEGASQHKJWREBMNZXONNIDTFFLDQVUCYOKX");

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
    msg.setTimeStamp(0.5272695532025231);
    msg.setSource(44584U);
    msg.setSourceEntity(155U);
    msg.setDestination(38384U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.36117189125577254;
    msg.lon = 0.3923355294684491;
    msg.z = 0.8802181523336914;
    msg.z_units = 249U;
    msg.speed = 0.03733289168408249;
    msg.speed_units = 229U;
    msg.abort_z = 0.5111951929139389;
    msg.bearing = 0.9736327523981918;
    msg.glide_slope = 64U;
    msg.glide_slope_alt = 0.10839394554675263;
    msg.custom.assign("RDAHWQDZBMUBXQMWRJOZAUBSYFWPXDVINXLHPCHDBMZYNCFZTUZULVMWTRCYSIEOJXYHVSWKTOGVRRWYKQKRFSI");

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
    msg.setTimeStamp(0.2767028746979553);
    msg.setSource(48422U);
    msg.setSourceEntity(238U);
    msg.setDestination(11825U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.11314308160206688;
    msg.lon = 0.544891739635904;
    msg.speed = 0.5289881668568694;
    msg.speed_units = 25U;
    msg.limits = 189U;
    msg.max_depth = 0.36137271477555366;
    msg.min_alt = 0.2251739413258531;
    msg.time_limit = 0.6030777915771879;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7338542581129646;
    tmp_msg_0.lon = 0.3374028090324811;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YBDGXPEYLQAQDVPTJIWKCOVBVKKVWHZ");
    msg.custom.assign("ZZPGGCSQKUZYBKRGBJWBSEJRNBOPIVXDQUHCDFVQWRBXOKDWKIJAIMROHZQOMABRTCQEMLVOGAYXFXNEHLFZKPCNWEMTHBPSFRWJHMGROOYZFGZIYXSWKXUDZPZWTVJQYILVUTTUKAAJUCASNQVFBYPTZUPLVNQMCCLYYLTIGRKBETNWGADVHVNDERGHDEHDGYIWTKERHNLXUQAMSJATAJSVJLOOIBCPNXDQLFSLSCIMNDFFPKMUEYI");

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
    msg.setTimeStamp(0.9734434490297008);
    msg.setSource(52392U);
    msg.setSourceEntity(219U);
    msg.setDestination(31265U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.4107800519584648;
    msg.lon = 0.5853128239833355;
    msg.speed = 0.8266667925938108;
    msg.speed_units = 52U;
    msg.limits = 249U;
    msg.max_depth = 0.9781781479879988;
    msg.min_alt = 0.6295406222933763;
    msg.time_limit = 0.1929233915781845;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6707866142628715;
    tmp_msg_0.lon = 0.6688346307196668;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HSPBEWRGNMISCCNCUAXWL");
    msg.custom.assign("ZRKPZHREDQQKDDNBJICHZXNBGSAMPZLHFCTHASCWHTXBIVGSWVLOJIPSHDYYANLPFUNWCLTNQNURBVQTKXVKJRAGWLESRCZHWWVSAMENXJAVEDMPZOYJKUZOIIUPXGCGHWMPSERXQLYKXRTETMQZRMZQINLNCFJGLRSKGUAONOGHIEECJUKUSMCIAFBYTBOCPTQBDTEIXYVGVFKMKXQJZWHY");

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
    msg.setTimeStamp(0.32257371864529416);
    msg.setSource(11307U);
    msg.setSourceEntity(73U);
    msg.setDestination(49652U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.30828199614481866;
    msg.lon = 0.6957647653619878;
    msg.speed = 0.8888524710295209;
    msg.speed_units = 207U;
    msg.limits = 20U;
    msg.max_depth = 0.5918612158825104;
    msg.min_alt = 0.3487441480791197;
    msg.time_limit = 0.03253818879994064;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.814818125444428;
    tmp_msg_0.lon = 0.41015494700569255;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KIFBZAFUNGV");
    msg.custom.assign("AHENWNTHGWDJUZDSLQIEMZQMZVAOUGFRPEKXCQXQTGUWRXZAYT");

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
    msg.setTimeStamp(0.9534304777134851);
    msg.setSource(11439U);
    msg.setSourceEntity(121U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(20U);
    msg.target.assign("KHFOVYAHTXZ");
    msg.max_speed = 0.16590372716667923;
    msg.speed_units = 111U;
    msg.lat = 0.8402162942143411;
    msg.lon = 0.5226120525288989;
    msg.z = 0.29338848191298195;
    msg.z_units = 87U;
    msg.custom.assign("HBCHJNEBCEARPHBJMWALQRIUYFCIWPGZKJLNIONCYSZTALHMZHYRBDGMMYNEFUCBHAZFQYUYJAIRSCUSXZZECVXYDWKJENGJTKDOSKMEGIFQDPDAVWCSQPDDVPOOME");

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
    msg.setTimeStamp(0.20502838566750647);
    msg.setSource(51218U);
    msg.setSourceEntity(23U);
    msg.setDestination(52339U);
    msg.setDestinationEntity(225U);
    msg.target.assign("SNSUXVIPJYEOLDKNUHAQHAKCTRWACGADULSYBQTBWOJZHEUKPOWIXOAMFERTLQVYLUVAYBZJTCDYNMQVNHAWYTKEGFSQBKCZMOANFMEBJCPCXLRFQMHMFFVZTFDKXDKKSHIOCGFBWJVREOMEAGXKTPXUCTSWWBWDHIQRZPLCNYPUBSGEIJOEFKXYBPGMWDIHJDEMSRJIZF");
    msg.max_speed = 0.11445572462047038;
    msg.speed_units = 30U;
    msg.lat = 0.7092073384967272;
    msg.lon = 0.14073013629275433;
    msg.z = 0.5344610145828078;
    msg.z_units = 218U;
    msg.custom.assign("XRFNYGUEBLEKIDEMRROKZRJEBBTJRMQKZQXTUJNYHSEJSXZIFVLKNMSLSDT");

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
    msg.setTimeStamp(0.5831139587556436);
    msg.setSource(47178U);
    msg.setSourceEntity(225U);
    msg.setDestination(35716U);
    msg.setDestinationEntity(16U);
    msg.target.assign("YZHTQMLLSFTOSLUKYLHGCAKMLZLXIHDAJXIUPACYUYSSPZRUYHIDPMWOGWZFPHAIVYJBMRETPHGUJWOXYZNYDJKZWPGUNYOGKDKTRQFJIJCLQDJCFIITKLXQSGTEBREBUHJFOPQXFSXEZWLQWVRCFSXFUPOERELOQMMMATAROVZIWJBVPJVYWGXBDODCMXVBVNVNBIZ");
    msg.max_speed = 0.29554750495162574;
    msg.speed_units = 219U;
    msg.lat = 0.4056339146537996;
    msg.lon = 0.37837583465930846;
    msg.z = 0.3783210837146048;
    msg.z_units = 232U;
    msg.custom.assign("XKDRFQFBJOIIGDSDXPLIGEBEBRXLWZAFSAZDVMQWJIVJZAOWBIQZLQGQCOQLUOZTEUWYNUGLRRNLKWUFSLJTUKSARWARFCXKHKEYBEILVNZEYMNXNBIYVGFJSCAEJHOYTNIKMOKASPPECCRCLYXXPQVAFODCFVCRDHTYTBYJJVRUTZUXOKTMCSTHHAGPWUPWHXNOKDHGMEZGTQYWFIJWPIKJFTDZQVLDSGVSXNMHMPNBQR");

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
    msg.setTimeStamp(0.6324176032711454);
    msg.setSource(25320U);
    msg.setSourceEntity(117U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(57U);
    msg.timeout = 33349U;
    msg.lat = 0.08861069426452772;
    msg.lon = 0.18924697180274086;
    msg.speed = 0.7815744182520032;
    msg.speed_units = 239U;
    msg.custom.assign("TMZDCVTXZASJMRLQPATPEGECNNAYQRIUGQEWFIBNAISTOHSNLEDXQSQWKLTMFZHOYNMSIYURTWMVSDVQCVAJNQHTJLULLSZYCTCUKOPKZYXJZESBFI");

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
    msg.setTimeStamp(0.24046313215986748);
    msg.setSource(2702U);
    msg.setSourceEntity(126U);
    msg.setDestination(60982U);
    msg.setDestinationEntity(202U);
    msg.timeout = 226U;
    msg.lat = 0.8737454378768585;
    msg.lon = 0.807908288335141;
    msg.speed = 0.4877159929067867;
    msg.speed_units = 53U;
    msg.custom.assign("VJBCDLXWUFCTEMDCMXULBMXTFHKYRJYTXVIHIBPGHKVHBLMDFLHRAQYAIZABZVXPLUNJLETPTMVSFEYJCOWFOKUWBENQGFTWWZSAILQRWRHGQWBGQSOFDIHJUNZYPGOXTNFMJOHECXQMDNNNPVYTB");

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
    msg.setTimeStamp(0.26888041154057807);
    msg.setSource(18912U);
    msg.setSourceEntity(117U);
    msg.setDestination(21468U);
    msg.setDestinationEntity(54U);
    msg.timeout = 33506U;
    msg.lat = 0.3969556316834505;
    msg.lon = 0.33388294236752725;
    msg.speed = 0.27902747285120555;
    msg.speed_units = 237U;
    msg.custom.assign("UIRQAJKIRBCFJBESHNYPZATOSJEOMBGFGZRUWEQBFUYNAYTSNAOHONELMLJOXYGRHDFBEKWSRPPYMWGWWBIMQQGLPTQZKZSLZTURGMLMLUSKRAVUCLBHGQDFKCWZIHOPZPPLMBFIUZNDCMAFBYDGZTZGHSAEXGOHFBOINKDDJEMETNXWIDNCYTKVPVOCCKTVRNXJFPWXVHKXIHYCXOCXPVRVXEIIFATJQYQXWLNLJ");

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
    msg.setTimeStamp(0.7393859183256113);
    msg.setSource(50069U);
    msg.setSourceEntity(183U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.3248808911131844;
    msg.lon = 0.2729577093763449;
    msg.z = 0.7503480181040526;
    msg.z_units = 19U;
    msg.radius = 0.8377933766235642;
    msg.duration = 58020U;
    msg.speed = 0.5606939172921096;
    msg.speed_units = 241U;
    msg.popup_period = 12503U;
    msg.popup_duration = 59190U;
    msg.flags = 142U;
    msg.custom.assign("UHLVMIBNUKFHIYTDSPEIFUSNRKZFOOXVXOLPDMQFGA");

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
    msg.setTimeStamp(0.9922306980349076);
    msg.setSource(18106U);
    msg.setSourceEntity(105U);
    msg.setDestination(41088U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.9436477801918589;
    msg.lon = 0.34472110259934474;
    msg.z = 0.16947292513943202;
    msg.z_units = 192U;
    msg.radius = 0.2558147018488074;
    msg.duration = 43540U;
    msg.speed = 0.9002682897227063;
    msg.speed_units = 167U;
    msg.popup_period = 26898U;
    msg.popup_duration = 62023U;
    msg.flags = 154U;
    msg.custom.assign("TYGABDJGUEIBIWGVNQOMWSPDCQXNEIOGPOEYFSANRKBXYHZRTILHJPWUIMFWKORHFLUSZBNRXKDJKMTSOZSMVDRJLMQYATLVWNXSJFZNNEYFFTZRRDHGBNRVZLVWYAQALXEKWZHMZPD");

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
    msg.setTimeStamp(0.39658860055650713);
    msg.setSource(24361U);
    msg.setSourceEntity(190U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.5179511741249483;
    msg.lon = 0.42899974990514056;
    msg.z = 0.8560031141832435;
    msg.z_units = 31U;
    msg.radius = 0.24852465803624224;
    msg.duration = 19100U;
    msg.speed = 0.491684983861818;
    msg.speed_units = 179U;
    msg.popup_period = 7810U;
    msg.popup_duration = 10495U;
    msg.flags = 85U;
    msg.custom.assign("TYANUVPRMDPCBZFRUPRTDVPCTBAZUORKRIHXMLIVRGSYQZMLYVTX");

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
    msg.setTimeStamp(0.8984817236964372);
    msg.setSource(9389U);
    msg.setSourceEntity(38U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.9285486633275399);
    msg.setSource(41110U);
    msg.setSourceEntity(184U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.7453820648220204);
    msg.setSource(51315U);
    msg.setSourceEntity(17U);
    msg.setDestination(19993U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.702518559234857);
    msg.setSource(27739U);
    msg.setSourceEntity(215U);
    msg.setDestination(51963U);
    msg.setDestinationEntity(240U);
    msg.timeout = 361U;
    msg.lat = 0.6526265173372405;
    msg.lon = 0.24435797802693382;
    msg.z = 0.4203167986207209;
    msg.z_units = 2U;
    msg.speed = 0.15617695468613868;
    msg.speed_units = 15U;
    msg.bearing = 0.8335053527871338;
    msg.width = 0.2983235857802692;
    msg.direction = 157U;
    msg.custom.assign("RITVVSUMBGYUTVSQHISNZOJCJUHTSERNNJFWFDWJBMRFFQBZSCLIFMOSBMNSGKPYMEQFEPGHVRELXYJYWVOMQODSBBFAWYQPCZNZXLOOGCHJAXAEEPNBAUGDJHCLOGRFXVMOADCADEKCZUIFSKKLGEARQJRGWSHHIDTZIXWUDKEATUWJLWJENTRQZIBNUYPITLGHXPYV");

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
    msg.setTimeStamp(0.18605812631202256);
    msg.setSource(11673U);
    msg.setSourceEntity(20U);
    msg.setDestination(60098U);
    msg.setDestinationEntity(161U);
    msg.timeout = 35254U;
    msg.lat = 0.5841329943169306;
    msg.lon = 0.806709619665263;
    msg.z = 0.2294353984752141;
    msg.z_units = 169U;
    msg.speed = 0.12801017630564282;
    msg.speed_units = 212U;
    msg.bearing = 0.21063937171471991;
    msg.width = 0.9544275140242796;
    msg.direction = 53U;
    msg.custom.assign("DILHCWOSAHUFYSPNIRHQBUXYCOPUSDKENEMFBMX");

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
    msg.setTimeStamp(0.9772655066589991);
    msg.setSource(590U);
    msg.setSourceEntity(187U);
    msg.setDestination(4789U);
    msg.setDestinationEntity(204U);
    msg.timeout = 40544U;
    msg.lat = 0.6412853410905943;
    msg.lon = 0.05557613506486936;
    msg.z = 0.5959097004619046;
    msg.z_units = 62U;
    msg.speed = 0.20006277360193925;
    msg.speed_units = 104U;
    msg.bearing = 0.0070661220759672405;
    msg.width = 0.3060892697213501;
    msg.direction = 180U;
    msg.custom.assign("ZYFTXYBGHIXLDITJETGYKDWFROORJZCMDFIKAUNIUWTPXKQLHQNNGCOMSCAFBVSTOVGXBAWCROESWEPBRIJEXJLYYLICOMRKFCVSIZFNTXEAFXCYIFJVOQVLTAYUYLDMKCHNMPMQUSWZVEUQTQXNAMV");

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
    msg.setTimeStamp(0.16377680824817964);
    msg.setSource(3327U);
    msg.setSourceEntity(43U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(248U);
    msg.op_mode = 88U;
    msg.error_count = 161U;
    msg.error_ents.assign("BKXIGGHKREIMIHKXLKIMXAAEJNKRERXYTTGOXNHXXWZUAEISEVTHJOUNFILUHNDZYNUVFJBJKQLFYFFMDCLQMXAPDEQAWMVRWDRZIPYKTEPCCWVJOBDVQSGULTULYLTGWTIDHBVQCQZHRZZGJAMSDOBSLJMCHQSMUYPTBNGRMSLZ");
    msg.maneuver_type = 2770U;
    msg.maneuver_stime = 0.8495580280864298;
    msg.maneuver_eta = 36106U;
    msg.control_loops = 3834163699U;
    msg.flags = 111U;
    msg.last_error.assign("GOHCCNWKEYPQJXJDDCDRAMJXCXCHZSTVNFESAGPSANVVERVABAIMWARLUTQQXKXZOQWWYUSTLHHROALSYULUHFEBIYFMMIVHUTHPYZKMFREFCZGANISQXSWICVBQOIZUKJUQZLZKDTFEPRCHITJTIKBZOUMNWBJVMUODTDHLGDDEMXELAG");
    msg.last_error_time = 0.4819625178238405;

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
    msg.setTimeStamp(0.46413994462944197);
    msg.setSource(33947U);
    msg.setSourceEntity(187U);
    msg.setDestination(29805U);
    msg.setDestinationEntity(197U);
    msg.op_mode = 127U;
    msg.error_count = 143U;
    msg.error_ents.assign("LRMEUXTVFPZGWVMQHFBVYUWLKQIGCZHHZBJLDRAXVWPFGTXSDGYLNCECNUHVKAQDMJOPWNIXPXWLVUTHODUGYJKQKYXJHKRWILZPPRFHISDNLMJFANIFGHCEVOKZUTDQCETUVVABNRPAQRBEYJXFB");
    msg.maneuver_type = 64487U;
    msg.maneuver_stime = 0.46271820601574043;
    msg.maneuver_eta = 56054U;
    msg.control_loops = 701620436U;
    msg.flags = 122U;
    msg.last_error.assign("ANBALIJADSACSGZGUJCBELDFMGXDQFTELFRRNOXLQFEKMZOCPUZKENYXBQUENWF");
    msg.last_error_time = 0.11584944297505773;

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
    msg.setTimeStamp(0.36543682585539394);
    msg.setSource(8008U);
    msg.setSourceEntity(13U);
    msg.setDestination(18918U);
    msg.setDestinationEntity(233U);
    msg.op_mode = 78U;
    msg.error_count = 19U;
    msg.error_ents.assign("BBDDQRMYWOCZHEHVMDZSYMNVPAAEIHBIKTUYVFSDEJLPKSTIKWFXBOHCASLAWURULKNUQZHQ");
    msg.maneuver_type = 13349U;
    msg.maneuver_stime = 0.3731490854347054;
    msg.maneuver_eta = 30787U;
    msg.control_loops = 493351248U;
    msg.flags = 95U;
    msg.last_error.assign("FXNWIIDCISKYVMZHOFPLVLQLWSTTPBWBEPPAYPLKEFURXCDZVVYPESVYEQRXFWQHPFTOCHYXVFUPHNUDKRZKUHONREGIHAWHBOCSACIBJZDGWWFIGMEBTHVSKQNM");
    msg.last_error_time = 0.58888507641384;

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
    msg.setTimeStamp(0.18748342190497225);
    msg.setSource(53011U);
    msg.setSourceEntity(84U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(176U);
    msg.type = 177U;
    msg.request_id = 60961U;
    msg.command = 86U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.8467147651923449;
    tmp_msg_0.lon = 0.7384178776070973;
    tmp_msg_0.z = 0.3337075559536449;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.2712499442292047;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.takeoff_pitch = 0.2873659325364687;
    tmp_msg_0.custom.assign("JWINSVFQQBMJXQLBDMIEEOEDCZLSRZMVRYVUDMFDADXITGAXITEXCGBXNMAKRXQVTXKPICVPHUVFHYKJMZIOWIWLUNQHXNZDMBJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49268U;
    msg.info.assign("VQOMQSOHLXRLDLZDMGMAVWTFRGNRYKYELIZHWZXGYXJKZSMEGYAZHMSWUBOPCTGOLBLHICFUUZDEYRQMSAYJIANEGSJPUTWEOLRCUIRGRSXBAAGZNCIVZRTNHZDPYKDFKZQAEFJHNLWBFEVW");

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
    msg.setTimeStamp(0.1799843528017243);
    msg.setSource(43912U);
    msg.setSourceEntity(67U);
    msg.setDestination(43746U);
    msg.setDestinationEntity(154U);
    msg.type = 22U;
    msg.request_id = 22148U;
    msg.command = 41U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.9336181751698711;
    tmp_msg_0.lon = 0.9904858209950452;
    tmp_msg_0.z = 0.5523003199619586;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.speed = 0.7280507285464034;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.bearing = 0.702064771617613;
    tmp_msg_0.cross_angle = 0.8908418731296258;
    tmp_msg_0.width = 0.31405302757317866;
    tmp_msg_0.length = 0.7355255481146757;
    tmp_msg_0.coff = 3U;
    tmp_msg_0.angaperture = 0.5006946471368552;
    tmp_msg_0.range = 25461U;
    tmp_msg_0.overlap = 115U;
    tmp_msg_0.flags = 30U;
    tmp_msg_0.custom.assign("RGELCYUQHMWHWGMJWTHSKFBFAAXJSXYJQBUCFZCKBQGTUZYXNERCFVFPASMHNHHIQVJHKTCMOPAIWOBZIHSUKAVJSLDGQOYMOPDYIDRRERMVKVUOUODIDLEPEKPBYJNTEZTNNLTGLJKAEEFXWLIRVFOQQPBHMNFGUFLSZPUZECXULGYSXILOTGX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34570U;
    msg.info.assign("FHTSYTRLXJITXJNUQSWFTHBFUXFCOWKRLJGQBYBMECPOMQUXVGISRDQVQJIOPNFZJVHWEGADZCVZGNWABMLRCLWJOKDUZHJCIZMXKDHYIOZRQKIZXOBBVHLYQSPKPMJEVNBNAFZXZBKMOFEKTWFGLQIUAMCGVOSMIQADHKDDTWWNRPGVXTSCUKEAEAEPEANZSMLSCYSEDBBJCAUPRWNKVQAONRLUIXHUGFN");

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
    msg.setTimeStamp(0.4635214441759229);
    msg.setSource(29023U);
    msg.setSourceEntity(12U);
    msg.setDestination(20215U);
    msg.setDestinationEntity(215U);
    msg.type = 0U;
    msg.request_id = 5789U;
    msg.command = 38U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 30323U;
    tmp_msg_0.lat = 0.032437497066638676;
    tmp_msg_0.lon = 0.7291666633043787;
    tmp_msg_0.z = 0.7505430199626797;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.44559728698466194;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("NMBUYUZANITSMHEPNDBDSSOUXXJPYLYZFBTRWUFHLTLTHWTROMQFQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36767U;
    msg.info.assign("WJWINWBOXLSRIXTKT");

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
    msg.setTimeStamp(0.04079716147328272);
    msg.setSource(1019U);
    msg.setSourceEntity(230U);
    msg.setDestination(33465U);
    msg.setDestinationEntity(84U);
    msg.command = 174U;
    msg.entities.assign("GXNJEJHPQGWWYBVMCMRXIVNRMPDSJWITFIJCKKUQVFXPIUCOQVXKKDGPTHHCLTZJGESUFFVIJSOWBSNZARFQXAYKUBJTBMOMCQGQMQNZUSUMBFODATANPIPEZBLEDOSVAHPLXFGNDPRADTHFZYOXLDNCLHLAGZPERLZWWOSHOFSBBERI");

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
    msg.setTimeStamp(0.6537695353417733);
    msg.setSource(1325U);
    msg.setSourceEntity(9U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(76U);
    msg.command = 6U;
    msg.entities.assign("QLJUPIHGTQFFFEEENIOYNYQZZHCIERRDFPUCPKUAGPHPNWVAXKWOCAXHUWDOWPJCSSUWGNIBXMQEVSCOXYXIBFTLDAAMNZTBTSDJVAKYETOOHTKBWUTLSJYGSMOLYKTOKDJCMIMOHZCGWKJOURSILBHNRAGTNMWLGFBQKHZFDFCNSDQJRYRQZPEESIAQVMWMIZAJLURVFILKQCCHMLEJRWXJZBVBBGYUQNSRUGXDXMXGPVVZRLZNAYPVDPH");

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
    msg.setTimeStamp(0.377662965301664);
    msg.setSource(53825U);
    msg.setSourceEntity(184U);
    msg.setDestination(55389U);
    msg.setDestinationEntity(180U);
    msg.command = 23U;
    msg.entities.assign("RIHQHWWSVQTFILDYPAVMZYGWQBVEEUJRCFAVZFLEACIWUJPXWKJNYPMRQROIITOXLWLPGMOLXECZSYGDBHOLNCYXPAOAJTKITYJIFHBZMPGHSSURFOEKXWSWIXNFTVCEGTKAMECGRAQFHPDPBPJJGFBKDUCMSYHZKVUIIZRMUYANLNKAMFR");

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
    msg.setTimeStamp(0.8528262461383045);
    msg.setSource(47139U);
    msg.setSourceEntity(79U);
    msg.setDestination(26416U);
    msg.setDestinationEntity(104U);
    msg.mcount = 1U;
    msg.mnames.assign("BYUUOCZNIIMXRYNOBQQQAZFOOWDOCIXCSZRMGZNGJRVJQWDPMMZAUIGRRPHFVFXRALAXTPLEDEPJHSNKWGKDKMKJMIDTUMDZQWCWPETQRGLSREFQTTJLCPVZJVQLGCPXUADJTKUQHYOHWAYPGJLASBIXOKEUBFKOSUYKUCNVOCFYNZVTHJGATDIWEWQTBSFBWIXEOHECZLFXNRSBLFFLCHEYDIVPSPBSXVLIHHBNZTYMKRHJ");
    msg.ecount = 181U;
    msg.enames.assign("QTEHUXJVZQYKTVNANPWPIDKJHMHZVSPDQDEGSXSUASPJRYBPDVXEKHLIEPELXNLOLLUFYOAUATPMSWCFOOKDDDSZSODALBKQBXAIOHCGFXGNINJFCIGRDTZLNUCFMUHJZRSROWSGVHZIXYNWCZUJLTPBQMJIQMVMPMOBYRBCCJIHLAVOXSZGXYMWCRCBQWROGMLJHWUEBJIUNPKVZAURHXEWKKYTYIRDETNVWQ");
    msg.ccount = 249U;
    msg.cnames.assign("CPXQILSVNFAFTTZXKU");
    msg.last_error.assign("XCEASCMHRWJPGFSSRLECLVGDNPDQAPETLGERXLDUFODYVTSZKHLRWMVPIWZVPMXGXFXHTJNKXWZINSMEZOYDBZQOAKXOBSGKDHKTPUOKHYHWWTWMBENDNYMROYJXZIUFJQYOIFYSQVIJGAGUTAVCUPHCCZRMAWGBVFTCLHQRNMQUSVBVHPFFKUNSUDNKIRTYEVLAKWIBCMTIJRBGNYPXMZJRCBEOEQJIFSGIYPNQCOBKWOLBATQLLZJAAQUHDU");
    msg.last_error_time = 0.17660945954360152;

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
    msg.setTimeStamp(0.8477763391631163);
    msg.setSource(21548U);
    msg.setSourceEntity(165U);
    msg.setDestination(1788U);
    msg.setDestinationEntity(152U);
    msg.mcount = 97U;
    msg.mnames.assign("BSYNPCDBNIQPBSPVPFTVGRNDSOMCJAFAPGYEZTZBORUQYNJKH");
    msg.ecount = 148U;
    msg.enames.assign("AMVWXCMFXTHZOPZDSXVIWERLWDUMLTXCQPPHNGOKTUFOLGASHPFJEEGSVAVLERUAWZQHDLMVJXYQANIYZBXXHIRJKZBODMFYHIBLMDFDIMQEHSBTKCEZJVDHGDSQNIUXRBUAAJNRNTVSPECROGTYOSYKGYWCZNOZWOWBELIIUKVMPSXUTP");
    msg.ccount = 93U;
    msg.cnames.assign("SCJRLMRPINQATZVGIJLDJHRLATUBTOWITUKEIKPFEWUFOPCEHMNZTFGVBOJDKVQNHMWVSLOBWYNESGYMMSKJJFZCDODGTPSVPWZLJPCXYCKRZBHHFXBTIKXFDXMWXQB");
    msg.last_error.assign("JDRGVVZSRXHXQVNGDFJBDMRSQBXQEQARLPCZCPQZMPUCYIOSFDHVYHNFYYECDBKVUDXINVPZTUOIRHJMMRKKTWLXWXWTGCXHAXKGLSZIAKAWEAQLSBWCCQDKVKBKWMJYFPFLFTWCMJTZUVRQEVEHHUTOEYSLIRIUKCQEMUJAPHOPMIPFOXTRNHNII");
    msg.last_error_time = 0.5109276639685175;

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
    msg.setTimeStamp(0.804448610469004);
    msg.setSource(32038U);
    msg.setSourceEntity(246U);
    msg.setDestination(20807U);
    msg.setDestinationEntity(1U);
    msg.mcount = 230U;
    msg.mnames.assign("CSAHDWRKBIVGPJETGHZWEACAFVCRHCILELARKSNUQOAZCDSBIPRCHZPWYOJGXURDDSGQZTVXHUZKNRONPCTYHRIAFPFXEUSWMFDZOPKQLAFENJQYLDMLFKKKWQLXSNDVZHWRVXMVGAOBMFAAIFYVT");
    msg.ecount = 32U;
    msg.enames.assign("IBMRWPVSKYGNDHQGWDTOLPSWUWJBATHULIHACYMRDQINNONIKJEADGFGHAXTVCTIOJSKFXTFXDSVPWUURQFJLXAAFQMDTVJYLYBLVXWCKGOATOYHKVSDEEMUXDGSRUSXWEPPFKIJRLCGHNLQZUNRJCJMFLZROEZCYLMGNKSMCWQKQHZJYVZYVFMDFDKBWHRUWJAIUOCYMPXHPSSZMGBKQZCPEBPNOZLGPOBABVRYHZIINQTVFUT");
    msg.ccount = 67U;
    msg.cnames.assign("CEZGXTARXJKUDZMBXZYWPWCISRKTPLLLDGXKPNJEWCCQMQVLHHXQGKVIDMVIGPAHAFUIHHDRTUNJBTUFVBWTXNKANQQUZIYOAXGPYJJOLYUDBJX");
    msg.last_error.assign("LKPWKKNQOMGADYWGHTOLFESKXHYWKBYXELEIWPEAGJMOMIVRNBCOYCZIHDWJYXNXCXPXMARZBAGVQCFWTUVKNUJJMZMXNMRRSLAFVURTHFMEZPCJWOQLQTQUGANSRDCVQIESVWOFOFQYBQVDFIRUNEJTCGXLPISYAQRSFKGPPMIBFNS");
    msg.last_error_time = 0.12045688395494014;

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
    msg.setTimeStamp(0.771932903075353);
    msg.setSource(41820U);
    msg.setSourceEntity(242U);
    msg.setDestination(63254U);
    msg.setDestinationEntity(117U);
    msg.mask = 130U;
    msg.max_depth = 0.6298303658005568;
    msg.min_altitude = 0.7498254427523001;
    msg.max_altitude = 0.6842954530781364;
    msg.min_speed = 0.11131944575864561;
    msg.max_speed = 0.8591846757958038;
    msg.max_vrate = 0.729422379085406;
    msg.lat = 0.06749906039225406;
    msg.lon = 0.8764860105724538;
    msg.orientation = 0.17924903531999337;
    msg.width = 0.904301386850571;
    msg.length = 0.8402713072585389;

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
    msg.setTimeStamp(0.6707604628912396);
    msg.setSource(45230U);
    msg.setSourceEntity(57U);
    msg.setDestination(56678U);
    msg.setDestinationEntity(73U);
    msg.mask = 134U;
    msg.max_depth = 0.574216633271492;
    msg.min_altitude = 0.1596790897068625;
    msg.max_altitude = 0.7933558253169758;
    msg.min_speed = 0.3889047945527577;
    msg.max_speed = 0.3870505414977077;
    msg.max_vrate = 0.6155222552185508;
    msg.lat = 0.1860730234140342;
    msg.lon = 0.4941305110584572;
    msg.orientation = 0.34065671871249426;
    msg.width = 0.18505555897907244;
    msg.length = 0.9339878407117771;

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
    msg.setTimeStamp(0.6266013367446148);
    msg.setSource(56768U);
    msg.setSourceEntity(115U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(195U);
    msg.mask = 124U;
    msg.max_depth = 0.41067174392040495;
    msg.min_altitude = 0.054725962042997844;
    msg.max_altitude = 0.19674971155236487;
    msg.min_speed = 0.4778957729150447;
    msg.max_speed = 0.4816288630751876;
    msg.max_vrate = 0.4062042210491663;
    msg.lat = 0.20548947701132925;
    msg.lon = 0.037199027191142764;
    msg.orientation = 0.10013733215681375;
    msg.width = 0.42367941133888576;
    msg.length = 0.16749027123145732;

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
    msg.setTimeStamp(0.9288126362935452);
    msg.setSource(12797U);
    msg.setSourceEntity(59U);
    msg.setDestination(14185U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.47215890812362804);
    msg.setSource(15155U);
    msg.setSourceEntity(137U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.20349389505447535);
    msg.setSource(11345U);
    msg.setSourceEntity(6U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.5138224035707268);
    msg.setSource(59868U);
    msg.setSourceEntity(162U);
    msg.setDestination(60827U);
    msg.setDestinationEntity(55U);
    msg.duration = 39039U;

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
    msg.setTimeStamp(0.8859378204609325);
    msg.setSource(32253U);
    msg.setSourceEntity(65U);
    msg.setDestination(36398U);
    msg.setDestinationEntity(198U);
    msg.duration = 17018U;

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
    msg.setTimeStamp(0.4938052558546896);
    msg.setSource(30077U);
    msg.setSourceEntity(45U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(84U);
    msg.duration = 19472U;

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
    msg.setTimeStamp(0.7005952804014428);
    msg.setSource(20295U);
    msg.setSourceEntity(121U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(67U);
    msg.enable = 195U;
    msg.mask = 3751857550U;
    msg.scope_ref = 1511556496U;

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
    msg.setTimeStamp(0.8442054179664494);
    msg.setSource(26526U);
    msg.setSourceEntity(249U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(204U);
    msg.enable = 137U;
    msg.mask = 2306466746U;
    msg.scope_ref = 390656718U;

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
    msg.setTimeStamp(0.8119273767276977);
    msg.setSource(30642U);
    msg.setSourceEntity(161U);
    msg.setDestination(51879U);
    msg.setDestinationEntity(250U);
    msg.enable = 124U;
    msg.mask = 1636307601U;
    msg.scope_ref = 3903415251U;

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
    msg.setTimeStamp(0.39633511133105814);
    msg.setSource(10096U);
    msg.setSourceEntity(166U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(171U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.5535808819032109);
    msg.setSource(26619U);
    msg.setSourceEntity(182U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(75U);
    msg.medium = 231U;

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
    msg.setTimeStamp(0.4139840619050513);
    msg.setSource(4612U);
    msg.setSourceEntity(214U);
    msg.setDestination(36707U);
    msg.setDestinationEntity(201U);
    msg.medium = 237U;

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
    msg.setTimeStamp(0.9119089759215108);
    msg.setSource(29755U);
    msg.setSourceEntity(95U);
    msg.setDestination(21309U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8641014799741809;
    msg.type = 187U;

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
    msg.setTimeStamp(0.8777175176815274);
    msg.setSource(49399U);
    msg.setSourceEntity(122U);
    msg.setDestination(7421U);
    msg.setDestinationEntity(245U);
    msg.value = 0.14332233993719412;
    msg.type = 0U;

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
    msg.setTimeStamp(0.5927424421556268);
    msg.setSource(42366U);
    msg.setSourceEntity(92U);
    msg.setDestination(9083U);
    msg.setDestinationEntity(168U);
    msg.value = 0.07086460967878738;
    msg.type = 103U;

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
    msg.setTimeStamp(0.3767466336251093);
    msg.setSource(54755U);
    msg.setSourceEntity(22U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(8U);
    msg.possimerr = 0.9335261181603056;
    msg.converg = 0.6851154309153208;
    msg.turbulence = 0.9961404704874057;
    msg.possimmon = 218U;
    msg.commmon = 41U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.24790881186010727);
    msg.setSource(1270U);
    msg.setSourceEntity(61U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(40U);
    msg.possimerr = 0.15956298847652484;
    msg.converg = 0.49700645137315247;
    msg.turbulence = 0.655125598899951;
    msg.possimmon = 30U;
    msg.commmon = 40U;
    msg.convergmon = 219U;

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
    msg.setTimeStamp(0.07028110949254607);
    msg.setSource(41754U);
    msg.setSourceEntity(56U);
    msg.setDestination(28503U);
    msg.setDestinationEntity(159U);
    msg.possimerr = 0.6688191679221458;
    msg.converg = 0.9638633797553258;
    msg.turbulence = 0.8740747857154532;
    msg.possimmon = 45U;
    msg.commmon = 42U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.2828803932467596);
    msg.setSource(63283U);
    msg.setSourceEntity(115U);
    msg.setDestination(20481U);
    msg.setDestinationEntity(103U);
    msg.autonomy = 158U;
    msg.mode.assign("RJGZTXBBEOPQDCLYXLUGRCZOWOATOPEKXYKBQHADUZECYACWDVKKMKAXXIQLEJXACHJPFKSBUULRDBWAQPUKSDJGOVJLTWVFRTEIIYNVNRGEOLMZOSGSTTGXAXQWYSWHLPWDDICNVRMDBECMSOKRMLFHHBNIHWRMZUTVAAPVVVQTBUUHAPFYDSSZYTFMQRMDRHSGGYMENWPNUTFENIINKFPMCYLFGIZKEGZUCNHPJCJLYJQIBZXFQWNJVQB");

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
    msg.setTimeStamp(0.9314243360591802);
    msg.setSource(60571U);
    msg.setSourceEntity(37U);
    msg.setDestination(38101U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 223U;
    msg.mode.assign("RJMVFOUUSHUYFGTDAFPKCPMLIOTEQGDXLZJMCLDFRCVQDRUCSHYEAFAWZNSWLGWCWQXRKAZGNZDNSPJOLCVMYFVSGQG");

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
    msg.setTimeStamp(0.7578765818286277);
    msg.setSource(27052U);
    msg.setSourceEntity(248U);
    msg.setDestination(28821U);
    msg.setDestinationEntity(218U);
    msg.autonomy = 233U;
    msg.mode.assign("JHQIHWPNQSTOMVPZDERVJXKTPSVWGBZFTOKWHIWZQGNSKVGDSOKFSZBQOBQJRCUZHAPMPNELBMUTLBPGTJYZYLCAIMENUXNOVYSDSRNGHGXAAIOETWNXWRZFMRQXMFWPMDYKQYAVXOTRLQFT");

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
    msg.setTimeStamp(0.81994660521318);
    msg.setSource(29743U);
    msg.setSourceEntity(97U);
    msg.setDestination(46439U);
    msg.setDestinationEntity(135U);
    msg.type = 112U;
    msg.op = 7U;
    msg.possimerr = 0.7183345219804722;
    msg.converg = 0.6155822727997753;
    msg.turbulence = 0.8867296051686682;
    msg.possimmon = 172U;
    msg.commmon = 183U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.6752416843147524);
    msg.setSource(24470U);
    msg.setSourceEntity(136U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(185U);
    msg.type = 138U;
    msg.op = 176U;
    msg.possimerr = 0.6126598839600121;
    msg.converg = 0.8774315469836841;
    msg.turbulence = 0.4412464629917263;
    msg.possimmon = 52U;
    msg.commmon = 28U;
    msg.convergmon = 53U;

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
    msg.setTimeStamp(0.2618722289370652);
    msg.setSource(59899U);
    msg.setSourceEntity(234U);
    msg.setDestination(35077U);
    msg.setDestinationEntity(8U);
    msg.type = 96U;
    msg.op = 131U;
    msg.possimerr = 0.31715219716367715;
    msg.converg = 0.4386684767192841;
    msg.turbulence = 0.8758609760013718;
    msg.possimmon = 124U;
    msg.commmon = 17U;
    msg.convergmon = 179U;

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
    msg.setTimeStamp(0.7079525503510828);
    msg.setSource(18328U);
    msg.setSourceEntity(142U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(164U);
    msg.op = 7U;
    msg.comm_interface = 193U;
    msg.period = 32457U;
    msg.sys_dst.assign("AFBGEVGXDCNYMEFUQQJOGTAYDLWDKTJZOAOUFYWTQUKFAXOWZKHRBLK");

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
    msg.setTimeStamp(0.09792550759709351);
    msg.setSource(22488U);
    msg.setSourceEntity(236U);
    msg.setDestination(51481U);
    msg.setDestinationEntity(106U);
    msg.op = 76U;
    msg.comm_interface = 3U;
    msg.period = 53729U;
    msg.sys_dst.assign("EVSPGELWPWXUWMPHAJHPTOPGQOGNZHKCWYKDYZSTDSTDILUFNWIWTYKJSN");

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
    msg.setTimeStamp(0.5737269492468551);
    msg.setSource(43587U);
    msg.setSourceEntity(148U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(34U);
    msg.op = 100U;
    msg.comm_interface = 241U;
    msg.period = 16079U;
    msg.sys_dst.assign("RAPPNYLLYYWVMUMAYBUDHEPBOVJJGOZ");

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
    msg.setTimeStamp(0.1459868857252904);
    msg.setSource(21139U);
    msg.setSourceEntity(69U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(127U);
    msg.stime = 3913289047U;
    msg.latitude = 0.7722864154015203;
    msg.longitude = 0.5913536122821106;
    msg.altitude = 53030U;
    msg.depth = 17768U;
    msg.heading = 48516U;
    msg.speed = -10544;
    msg.fuel = -1;
    msg.exec_state = -62;
    msg.plan_checksum = 19812U;

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
    msg.setTimeStamp(0.02293575329481312);
    msg.setSource(46708U);
    msg.setSourceEntity(97U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(48U);
    msg.stime = 1323716833U;
    msg.latitude = 0.41888830019871526;
    msg.longitude = 0.357965502528101;
    msg.altitude = 56709U;
    msg.depth = 12118U;
    msg.heading = 26644U;
    msg.speed = -7462;
    msg.fuel = 8;
    msg.exec_state = 16;
    msg.plan_checksum = 43258U;

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
    msg.setTimeStamp(0.7551053451944137);
    msg.setSource(18664U);
    msg.setSourceEntity(19U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(117U);
    msg.stime = 913849098U;
    msg.latitude = 0.31592332434582404;
    msg.longitude = 0.47093029168208445;
    msg.altitude = 12969U;
    msg.depth = 52034U;
    msg.heading = 47713U;
    msg.speed = 24314;
    msg.fuel = 83;
    msg.exec_state = -21;
    msg.plan_checksum = 49749U;

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
    msg.setTimeStamp(0.7464712474470533);
    msg.setSource(62907U);
    msg.setSourceEntity(136U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(102U);
    msg.req_id = 60157U;
    msg.comm_mean = 90U;
    msg.destination.assign("UUEMDPIUNSMXXFOCYCIRDGUMDWWPEJVMSTFALYCKNHRALWVBDXLHWOCPSJORWKHGCBOOTTLKMTXLKQAHSXPVDJJZRAFQLYGUYIYGJIRZUBBBPY");
    msg.deadline = 0.20605954014362093;
    msg.range = 0.32553862083272045;
    msg.data_mode = 30U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 67U;
    tmp_msg_0.period = 1138453181U;
    tmp_msg_0.duty_cycle = 1221746328U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OUBQKUTURGFGNHFDTWTOCECQXLDNQMRPXPJTFDVDNCYSHXCVKXTMBSFVENHIAPZPMUYPBYLFPIDLKRZZEKPKEAVWBVEWFWHEQGIYQNBQZNXHZFRIUEITAUPAQOGJDZSTEWLDXOOFZJACCASBZEKSVDHGNLZFWOYMJOX");
    const signed char tmp_msg_1[] = {-64, 79, -94, 3, 63, -71, 124, 94, -89, -102, -22, 82, -70, -122, -92, -18, 80, 19, -34, 41, -72, -112, -112, 67, 54, -43, -115, 67, -95, 96, -43, 14, -20, 31, 63, 22, 95, -75, -7, -103, 52, 76, 41, -75, -19, -114, 19, -76, -119, -94, 113, -68, -33, -91, 6, -79, 24, -2, 58, 116, 52, 110, -122, -74, -2, 88, 76, 60, 78, -102, 94, -125, 71, 23, -81, -17, 113, 75, -114, -69, -112, 89, -64, -12, 51, 111, 40, -103, -117, -120, 124, -82, -58, -25, -76, 9, 20, 96, 43, 15, 80, 1, 1, -60, 28, 82, 68, -99, -56, -25, -42, -78, -111, -84, -90, -4, 64, 79, -64, -85, -39, -51, -76, 9, 112, 42, -81, -92, -93, -111, 58, -38, -85, 102, 91, -35, -25, 6, -95, 13, -49, 6, 117, 41, 98, -121, -82, -72, -115, -60, 80, -27, -111, 93, -76, -2, -105, -99, 84, -30, -56, -47, 26, -74, 115, 56, -126, -19, -32, 79, 122, -8, 87, 46, -43, -104, -116, 1, 73, 120, 107, -68, -77, -8, -90, 1, 87, -51, 94, -38, -5, -84, -66, -89, 8, -80, 47, -108};
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
    msg.setTimeStamp(0.7882947192117151);
    msg.setSource(61860U);
    msg.setSourceEntity(168U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(81U);
    msg.req_id = 55092U;
    msg.comm_mean = 185U;
    msg.destination.assign("PPUCZXLRJWVMJTSYMCPLUMBAHCAGCLGDUSQJHDGHHKCJNYXHAFIYMBZKZACIQKONMPOKIMKFNIRGTVWKEFJYVRDTFWTXBAUXASLYDMRCOGQAOOOSWZDBBQVWJDFHREUZHAETVNOOKVUVKZJMEFNGTSUJYRQVWLQNFZNZWYIAIOBTIFUEQSDEEQQSLEBBQXMDFYVWSXRGTRYPJPLDWNGHRCNPOLZTWBAYREZXT");
    msg.deadline = 0.03636919457354815;
    msg.range = 0.3059900298668956;
    msg.data_mode = 61U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YDWUVIOAJGYMRHSNKZBYGSPCWVKJYAZFEBVQYDQDLAGPDRVAZOLFIULMPHUOJNRJTXNYLEIJBILWKSOYTSJTUPTSQEPHPJFQBRDZNWCFAYNNXURWKGQVBMZIJOXMUCZTVNCHAWJWXBSRGWLOXEROERALNXQ");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("LKETNKJDLAOPPMVCARKBWFHMDEYTQESIVIKMJGPQKZSOA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GVTTWFCWHLNXNDRYVOSOXGFXDQITFPCOJNCEUWIBICRKQHTOIWJLOUVBMDVYRABLIHHQNUOUVUFXSRMGEXXHDCK");
    const signed char tmp_msg_1[] = {-106, 105, -119, 46, -119, -80, 120, -86, 49, -21, -74, 38, 102, 47, -64, 95, -38, 57, 123, 112, 63, -83, 12, 72, -61, -104, 123, 5, -8, -42, 61, 34, 58, -83, 89, -124, -108, -62, -106, 124, -128, 119, 119, 117, -54, -18, 30};
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
    msg.setTimeStamp(0.753471170974962);
    msg.setSource(39050U);
    msg.setSourceEntity(84U);
    msg.setDestination(20801U);
    msg.setDestinationEntity(23U);
    msg.req_id = 7770U;
    msg.comm_mean = 118U;
    msg.destination.assign("KXGNWZRPLCRKVJCVSTKO");
    msg.deadline = 0.9480049863110663;
    msg.range = 0.8061586490964578;
    msg.data_mode = 43U;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("OHVGRMQBGBHCCXXVDDSBQPMJMNGEBVNJZDIUZSSAZUNYXCKJECOMITH");
    tmp_msg_0.op = 98U;
    tmp_msg_0.sched_time = 0.43580358725089763;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VOUXQZDMRYVJOGWELKOFPXWBLNCAHQUUYQJGTN");
    const signed char tmp_msg_1[] = {29, -66, -127, 78, 51, 33, -64, -77, 83, 73, 23, 107, -121, -13, -76, -78, -77, -94, -128, 126, 4, -87, 55, -31, -51, -54, -77, 54, -111, -75, 67, 110, -118, 50, 6, 75, -44, 123, -40, -71, -76, -89, 122, -22, -78, 62, 38, -63, 104, -72, 106, -127, 46, 93, 14, 54, -26, 36, 58, -7, 15, -33, -41, 30, 111, -57, -11, -83, 41, -37, 45, 117, -114, -70, -123, -79, -125, 80, -68, 42, 23, 38, 39, -71, -73, -34, 2, -34, -51, 121, -21, -118, 89, 67, -7, -46, -89, 111, 65, -89, -128, -105, -108, -28, -57, -42, -113, -7, 90, -1, -17, -2, 68, -37, 89, -27, 125, 83, 44, -46, 86, -122, -62, 0, 21, 25, -74, -69, -105, -23, -28, -126, 6, -25, 85, 40, 113, -103, -33, -125, -77, 89, -101, -7, -26, 91, -74, 120, 98, 8, 86, -38, 7, -62, 73, -51, 34, 89, 87, -62, -10, 111, -70, 116, 26, -24, -118, -5, -23, 59, 81, 53, 47, -86, -116, 5, 85, 96, 5, -73, -75, 86, 69, -60, 21, 84, 113, 91, 0, 89, 97};
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
    msg.setTimeStamp(0.7423739059028319);
    msg.setSource(13370U);
    msg.setSourceEntity(166U);
    msg.setDestination(42255U);
    msg.setDestinationEntity(110U);
    msg.req_id = 24446U;
    msg.status = 162U;
    msg.range = 0.8936064764283989;
    msg.info.assign("IYGNAWISQOJRIRAMXDRKJDVVCXDWHYYBUGFPZQMNDBOZYGBVYVEBOXGGOXFCCMHOLQSWEVCBASOQJNPGLXS");

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
    msg.setTimeStamp(0.6602109298765609);
    msg.setSource(35829U);
    msg.setSourceEntity(145U);
    msg.setDestination(47724U);
    msg.setDestinationEntity(94U);
    msg.req_id = 22093U;
    msg.status = 234U;
    msg.range = 0.2570194800538138;
    msg.info.assign("MSUORBTUMYYXHBPTKYESYLMXRXCVVUWIAPBNTDOPGWFUMJLFCZITRDMZBOASCNZZVIECGEZDVRZYYNNJNAXUIOCXKNRCBTAWGBWOOLSORKDXKCGPHQMHZPWYAYRLYUWJJPTENDOBLQSCJHCAKILQYZDSFSRIGMLAH");

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
    msg.setTimeStamp(0.965886717809981);
    msg.setSource(64933U);
    msg.setSourceEntity(241U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(196U);
    msg.req_id = 51658U;
    msg.status = 127U;
    msg.range = 0.1436667392628832;
    msg.info.assign("WLXQPHDNHMWKYDINYFMVNJHQAYAKWXXNMCJSZQQEYCLSTMXMRIEZHPOUXHKAOTSWBYWPRAJZVAKHKYFEWTDKCUORURIJOJMHFLUODPQDQKRCWEXNDTOZGNZYLCHOOEIQXMSCYINTLGGUQFEGNLTYRFMZSSREQPJWVBCIRFOBDLJBUIAZAHCLPTSXVLSDRPIUWXGGMEGCB");

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
    msg.setTimeStamp(0.8105519315298236);
    msg.setSource(27163U);
    msg.setSourceEntity(159U);
    msg.setDestination(7334U);
    msg.setDestinationEntity(210U);
    msg.req_id = 5441U;
    msg.destination.assign("IMBLETRJMBIUGKAGKKXZAUZZOPMDKQTCVLLVXSFQKLFWSFMIJMVTOCEUBXYEBOATUJCDUXPNPDOK");
    msg.timeout = 0.6066834366830214;
    msg.sms_text.assign("FAAGXTVMOOAQPMSVGACIPCHMLYQXBRMKDJVVJTPZYMDNZLDVDMEJMFBLHHGOIPWZEXIFQWVYBKRGORLZPTCKLNQWKQXBVEYAIPLJTKOJXUUMSHZWDPIMGSPCYMJFTWPZURJPYRUEHRRSFYTTKRNNXNWJKZTCYAIWECZEBGVCYNXNDGDOLIIAQNDIKYUSOTSLZUEREBWFEQHSFQGBSXOHHGUQVJOSHOUIVWBNXHUAAWFN");

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
    msg.setTimeStamp(0.8728936890174831);
    msg.setSource(17139U);
    msg.setSourceEntity(7U);
    msg.setDestination(51360U);
    msg.setDestinationEntity(127U);
    msg.req_id = 8768U;
    msg.destination.assign("IHZQXFMDDVKJWBTUUHZTCFWMRIU");
    msg.timeout = 0.6136540474969786;
    msg.sms_text.assign("NABBXLVUHPRNOJAUWTXUFGSGEZDHISUYMFIBAOOFQHIKGBVWDMTQPKNVLGNYUZMMAAMULYUHKYAJLVOWIPBOZSHHCABQPVGUGLTCWBFLIOZBEGFAWDKCZYJCGFDNRZYLHUNGSSOOHRCWCDBADJWJRXIIEQQVJPXXWRERNTZESCTPXRXFTCVPBKLVFHSSTZDMJKKOWKQQVYQFIXTNEYRZLNAMUDIJXNFGC");

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
    msg.setTimeStamp(0.7298679593765341);
    msg.setSource(6369U);
    msg.setSourceEntity(246U);
    msg.setDestination(26418U);
    msg.setDestinationEntity(63U);
    msg.req_id = 24785U;
    msg.destination.assign("UEUIFCGVAKSZXQYMKVJOLBLSWRYBMHHBQ");
    msg.timeout = 0.4152572698775534;
    msg.sms_text.assign("VOZVAOFMIRFNFUOTNZORFMHMSKTAFZBSLIRCJMDHSGYPVOTAULTBRDCSUJPWWVIZYPZGUDJGXTQXPAWKGDXUJYHGULRHMHAYQIVIIJKXBDWQKXLCGIEQJDFVROPWNFYCOUCARZBQHLBZ");

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
    msg.setTimeStamp(0.0611501358852079);
    msg.setSource(14491U);
    msg.setSourceEntity(27U);
    msg.setDestination(6648U);
    msg.setDestinationEntity(9U);
    msg.req_id = 26301U;
    msg.status = 31U;
    msg.info.assign("SXEGONCQRDUJTRYTRIWCXGCXTTMSPHVGDZIICKIDGOTJBZNNQUZP");

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
    msg.setTimeStamp(0.8683858523942364);
    msg.setSource(46316U);
    msg.setSourceEntity(73U);
    msg.setDestination(47402U);
    msg.setDestinationEntity(177U);
    msg.req_id = 52858U;
    msg.status = 0U;
    msg.info.assign("LWFGXLBZIJUOWZDEOZTJPVPJCBCGTTAHBFOJHPDE");

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
    msg.setTimeStamp(0.8845233236952531);
    msg.setSource(24532U);
    msg.setSourceEntity(72U);
    msg.setDestination(25639U);
    msg.setDestinationEntity(249U);
    msg.req_id = 34768U;
    msg.status = 235U;
    msg.info.assign("AKFBKYRMQGDTUBEPLGKXQJIZEHYNOZKXWHHIJYCVXWXDGKPLOJOFKOQLTCYMCHFVMLSSFKASYBMRTPVRKBEVPEIIADTXOJFGQVRTYUINQHRHROOOHXCNCLISBFMLAVIXPYNRZXXZGHGGQZZIA");

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
    msg.setTimeStamp(0.2610194287289367);
    msg.setSource(22820U);
    msg.setSourceEntity(146U);
    msg.setDestination(59647U);
    msg.setDestinationEntity(14U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.15346887833395528);
    msg.setSource(36363U);
    msg.setSourceEntity(28U);
    msg.setDestination(45347U);
    msg.setDestinationEntity(28U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.4306390957273436);
    msg.setSource(28548U);
    msg.setSourceEntity(244U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(118U);
    msg.state = 79U;

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
    msg.setTimeStamp(0.5412037843288348);
    msg.setSource(25283U);
    msg.setSourceEntity(41U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(110U);
    msg.state = 45U;

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
    msg.setTimeStamp(0.3513737458144164);
    msg.setSource(53346U);
    msg.setSourceEntity(22U);
    msg.setDestination(55540U);
    msg.setDestinationEntity(50U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.3305182063609948);
    msg.setSource(50321U);
    msg.setSourceEntity(5U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(223U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.7973119513070288);
    msg.setSource(467U);
    msg.setSourceEntity(238U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(65U);
    msg.req_id = 17072U;
    msg.destination.assign("HMSAFACIWDVQKKEMJVUBGZJTAJBTSHADGRRRHFRYVSYLVRQFEDXRZCTGVWEONNLBWGCRDSWY");
    msg.timeout = 0.10465739994500833;
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 223U;
    tmp_msg_0.req_id = 3521411171U;
    tmp_msg_0.ttl = 48841U;
    tmp_msg_0.code = 91U;
    tmp_msg_0.destination.assign("DUGPHVMENYSXFTFECRFLJFPLNZZJQWWBJLWTMEQ");
    tmp_msg_0.source.assign("BNFIMSZIRTCOQRQYUABLQSWSDDMZZGXOLKJUQLMEDIHLWNLAWFOOTHKTKYJGVZMARHYTRCVBSRRAEYMXEFNHVXZXTCZFXHWSHMTJYZCEXPPUKHBKACYQEQGGBWYGJAHRQPWNEPRWU");
    tmp_msg_0.acknowledge = 149U;
    tmp_msg_0.status = 222U;
    const signed char tmp_tmp_msg_0_0[] = {-119, 114, -96, -55, 59, 60, -66, -9, 124, 39, 34, -97, 72, -70, -28, 12, -27, -121, -107, 17, 48, 7, -19, -30, -3, 15, 13, -46, 31, 9, -97, 75, -76, -104, 77, -122, -41, 93};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.46098849671661124);
    msg.setSource(28299U);
    msg.setSourceEntity(154U);
    msg.setDestination(21604U);
    msg.setDestinationEntity(11U);
    msg.req_id = 16550U;
    msg.destination.assign("CRJHVYWLUOIQPZJJNZILBMMZIDLMICGUDSKPDVYHCPZBKQRQZEKYHDUUBLPWOISFIQFTOYMWJMMLFXWZSGNVXKZHEHTXJLSPSUEKUABTKAICUBARLGOCXGNQEEVVZOHPVDTYAHCRLONGFNXNDIFWFTHTOSHLANAGGDPBQXVGPMIKYJIORRFXYRXTZVQLSQBHWCWEWUDUVUNCXWWSGQFPBRPMJEJYOAJBSKKYOSFCCEMXREMDTQTKBTYFNAEDZN");
    msg.timeout = 0.7601347159633927;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 74U;
    tmp_msg_0.snapshot.assign("IYTQJDWKQTEHVHUQZAZRAWRJKRVXMNNGNPTSSEMXMYOFVVCJJHFHXTNACENDSZIZBUSHPKDILFIBGGCCUHKOECLFUYHCTWIOJFGQKQJCQCMPWKQNAJRINTRBVIWDLOZTMITBLEVKWYPYBPPKXEAMUHGTDUVFSTEEWWQRQZFKMOYBMGRZEIPRAVYJHMVXJDGOWMYDSRNUD");
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FDJSGBXTIXEUMLMABNNMPQXXLVCKYWKYRRKBIJVFCQHHOBLYKJUFNDLSESEABLKAWCYUTRYRGQHGFMAPFFDOVQPDPGSZUNHHLKQIXQZZUDSWHTRINYNXDWTTGPVDIQOCYHTGJQHRUZVPAZGLJGURGAMLHAZXBAPQIRUOICVMDTALVEOJCGUFKYBWOMIFVRJWSZBENEXZACXCWBOYETJKPBOFCEFJKSRZWMZJ");
    tmp_tmp_msg_0_0.lat = 0.2001664835910365;
    tmp_tmp_msg_0_0.lon = 0.33067512121627574;
    tmp_tmp_msg_0_0.z = 0.36160429306448505;
    tmp_tmp_msg_0_0.z_units = 235U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7982756525612137);
    msg.setSource(18243U);
    msg.setSourceEntity(71U);
    msg.setDestination(47644U);
    msg.setDestinationEntity(99U);
    msg.req_id = 45256U;
    msg.destination.assign("TFBBJKNMMHLJCJLVZBNUZCOPNKYYDFFSPVFTWGNOEMUQWIXVDMVXDOWIZZ");
    msg.timeout = 0.38273322193617376;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.07320679233630945;
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
    msg.setTimeStamp(0.027346639955365015);
    msg.setSource(28587U);
    msg.setSourceEntity(239U);
    msg.setDestination(20787U);
    msg.setDestinationEntity(167U);
    msg.req_id = 38394U;
    msg.status = 148U;
    msg.info.assign("CBASMJYXIEMTMSFECXTJOQBLPLXVFXKRHOCWSQDZIYIQHZZWJSDENSRZTGQMXZWUTUOW");

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
    msg.setTimeStamp(0.9209537158635218);
    msg.setSource(18554U);
    msg.setSourceEntity(30U);
    msg.setDestination(41062U);
    msg.setDestinationEntity(233U);
    msg.req_id = 30504U;
    msg.status = 69U;
    msg.info.assign("SBNFBEOUBSBIHOEWCLVRLLUPRGCCJXPEQFXNNQHSYKDUYHUUDQJVCPKSMNWQZGAMCZEGQZKCX");

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
    msg.setTimeStamp(0.16238317935572688);
    msg.setSource(34573U);
    msg.setSourceEntity(234U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(244U);
    msg.req_id = 2651U;
    msg.status = 53U;
    msg.info.assign("QWAWKYGZGFOQDUGODCTNVZCHSFVOTKDMGQWLXPQXHIZPDOBFCELNOGXPLMDSTIMAIHENCYMBKYFLYRZMPZVKRDUZDRKJVEINTGCYUAENSNSARUKXCPOQIANQIVRGBRMSXGZUQIYUWVYFMTYWLSSPLXUKCIJLYMUYWPBJBOZMVLTWHGQCEAVLTJOHBXPEINNEZGAFFAVTOSWNPEZCFDJKHFFWQTJAEWVMXSJKSHORKADPRJXHXCRBTBUELBHIQ");

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
    msg.setTimeStamp(0.7265871470866446);
    msg.setSource(27732U);
    msg.setSourceEntity(136U);
    msg.setDestination(57799U);
    msg.setDestinationEntity(174U);
    msg.name.assign("ZQXNIVXMDCILIRNFDHPOHOYJVAWUFTIPIOIKNVWLTXQJMKMMBPWCDGRCPQJGOEQEQVGREJKFPADRETSJCRLZAATSKKDFIJOIXUVWZLKRNBOZHNQTYOUUVKXRLPZFGGPHEXRZJGLCYWAPKVLHWSYSBRHYNGYJKFZBUCEVZUZPSOIQDSMTTXLGHSCMWSQALUFHFEKNDVNWYJYVWQIBOEUAMTEBUCCBXSBGMDMNAMSGAHOUJDAZBBRDPEWYTCXTQ");
    msg.report_time = 0.26968090969751246;
    msg.medium = 8U;
    msg.lat = 0.30924311942842353;
    msg.lon = 0.1333234441001825;
    msg.depth = 0.9252092733094215;
    msg.alt = 0.5505699944506209;
    msg.sog = 0.12529637929061377;
    msg.cog = 0.9649370718420766;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 162U;
    tmp_msg_0.value = 0.866329885755817;
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
    msg.setTimeStamp(0.8342929824329953);
    msg.setSource(39285U);
    msg.setSourceEntity(169U);
    msg.setDestination(59238U);
    msg.setDestinationEntity(58U);
    msg.name.assign("XOUGQGGCEFRIMRQLHGZISHDKKFICKDNAOCSSTENJVJBBPXIAJTDPSYYMLHGWQHZDWJZSUTCCTETRJZUVVDUBNSMDIQYUCMOXVWRRKQ");
    msg.report_time = 0.728545031443192;
    msg.medium = 35U;
    msg.lat = 0.03172869131720146;
    msg.lon = 0.1454321176696206;
    msg.depth = 0.8567260090321853;
    msg.alt = 0.7049362137662898;
    msg.sog = 0.15162844512787732;
    msg.cog = 0.22767010488619221;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("ACCWJRVOHHIGMIXEIXIUSGYSWJKYXGIORAVIEDLKJUDCFFFOCUHNEYBHZVOLJTHMCLNXXTHUXRPFGHKAVQSZOWCPJJLRLSBTANBYWNKISDVJNQZWTMMROQEXMNQMFDEKINHGYWMTJNUWPWHGBSWBGPGOENGKTOLVZPBACQIKDSTFETLMIQHTRUABFBRGCQAZZFLOEQAXYFSXAXNPVSLRZYV");
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
    msg.setTimeStamp(0.8756178236486903);
    msg.setSource(52733U);
    msg.setSourceEntity(155U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(64U);
    msg.name.assign("LYWDNAHWUJSJRITDMCGYTPIIWBRLJAWDBGFGUFXNMYONTMEKETWDEGKUWCIAAWFUQCSI");
    msg.report_time = 0.7155612052456486;
    msg.medium = 245U;
    msg.lat = 0.6431042953585063;
    msg.lon = 0.724292914975332;
    msg.depth = 0.8242474335227915;
    msg.alt = 0.34807126189999626;
    msg.sog = 0.17129927065112338;
    msg.cog = 0.007052722410905821;

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
    msg.setTimeStamp(0.4281805674072219);
    msg.setSource(15524U);
    msg.setSourceEntity(14U);
    msg.setDestination(31347U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.7321178770200828);
    msg.setSource(49756U);
    msg.setSourceEntity(130U);
    msg.setDestination(51220U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.6867479283567518);
    msg.setSource(57268U);
    msg.setSourceEntity(36U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.7335398634495507);
    msg.setSource(59472U);
    msg.setSourceEntity(64U);
    msg.setDestination(51841U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("CLBKMQTTSTERGFAMEJOEFNRNPUMHKTUVCDJFSGJJAGDHQYNISXCGBXRLOQIYYLMOVCEQGDMVOAEMTIAPBNBHDLEFJTQTPKLORZWGDLADYIKXZLAYSNOXDKXMGHJPLDRFTVCXGNRSBPPUFLYOLINEBYUPAAXCQWYQTXZUUPOHTCVZEQFFJCJMAQKBWHKNYIVZSHEMHRRZGZXWWIKFXUEVRBVUAKYJPWV");
    msg.description.assign("KZSIDTGFHSLJHMQJFMTYLTBFZOYTVDHQCERVUTPPURJMZGXOCCZFCRXZQKFCAAQYUEKVHJRLWQSHZDDPBBRCEBNBHQJRSVZUXPNQMIACBKULUROWWLKFCJOENIZXPMMZHIOETSXEKCXDMAWLDIBIRDGYCDGVTPIIONJYENFPNLAVGSXVOFQGAMIESSAGZUFHOVSBVGLOMBHRQYDWLXWPFXEUN");
    msg.vnamespace.assign("VNNRGNFYHANXAQLFLIRTDNEOZIRHAIOVEBIBZZWKCZHFCMUQVYOUTPWUSEXPRHZMECOTGODJHXIDTWBHXOXJCPZFCDLTGJLWULLRKUSFIAGRORDAWUEJHWOYVMTXGTJVKBBPWXPPFDFTAMRGQAQENHMCUUYGEHSJJKXDAMFWQMOKMSLVOQVKYYNU");
    msg.start_man_id.assign("WCTXBTYFZVTLREZHGUNMHVILHJEUPBDFLOHPJDNXDKJTBMQOYEAIOBWZRVPWYPVBQKFQANDGCZWFXBHDOZJGTOTZVXNMBIGJZRZHXHWPOEFB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SBTMJSMCRGFROBDQXPYLQHXEXZQSRGCBAXDVNUJLEIPQRPWVOPJJPZWTAYQGSFKIYONZHZXUMLHYSAAJEFNATALRRYENAGGHSUNJKPOACMBPIU");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("FLQJWDMINCQCMBKZUNDBWKHGXCSAIHNUJPYGLIQOUVXRGHHYGBIUEXTTABXWVFOMFTNEGKKDBTBKVNRQDYWGEJEZSFHTXHJBRQPLDRAXVCUPBEFITMQMZYYZTWHNIODZQWYCGJEEVJOVRMDEEIAVRSXNHAXPKUAWEAIFNYZZQXRCUOLBTSWDSMJCRYHYNPMAZPUFQCSP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AcousticLink tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.peer.assign("SMKUUTUGOKAMQCROXNFDRZEVTWFXEPPFKREZZRWAIFEUXIHDSJOPGQKQHMSWLFBIBTPTT");
    tmp_tmp_msg_0_1.rssi = 0.700392971111926;
    tmp_tmp_msg_0_1.integrity = 15487U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GetImageCoords tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.camid = 209U;
    tmp_tmp_msg_0_2.x = 18757U;
    tmp_tmp_msg_0_2.y = 48292U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PMPPKCSPGLHTZUBNWOJLCMCQETYSOJLEPCMJCKUUFASOKORECPRZOZMAJJVAWEWDIJVNLEUMZSYSTJIMCDAWZIHSOTUBYYYGSFMLDXKNFRLGXVQDZJRAQLVSWLWAHIYDUFXDQRHPNVTFYLTBVXHQBRCHTPYKCKZQMGGIKRZNJAGUXIXSUMSGBNWMEWPFHIVIBETTNFBQOOGEOVHDBPKNYFZGEHJ");
    tmp_msg_1.dest_man.assign("CFYCUNEKZKXJJMSQTFSTTVBQRZSORXEQUIKNLEGPQLNFVHMLBBNWATYIIMIVYBPKUVAZEVHMDQRJRPEEHDDYGSVWFNIZPXUO");
    tmp_msg_1.conditions.assign("UQRNHCQVOARGHQISNYEUFWPBPMCGDSQSJNLEYDCJTSFUZLWZDJFBPDARAYXWNTTJJDKPYSYCRKDQGRUCIRZULGEXZVOBKQHARLBSPSTPNLUFBVUIZZR");
    IMC::FormationEval tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.err_mean = 0.009572318864844442;
    tmp_tmp_msg_1_0.dist_min_abs = 0.19932912263381675;
    tmp_tmp_msg_1_0.dist_min_mean = 0.29288722359541397;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DeviceState tmp_msg_2;
    tmp_msg_2.x = 0.8006381903723959;
    tmp_msg_2.y = 0.7041602687068225;
    tmp_msg_2.z = 0.21501362953164516;
    tmp_msg_2.phi = 0.07670673613586987;
    tmp_msg_2.theta = 0.5703530728836085;
    tmp_msg_2.psi = 0.9496463222467804;
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
    msg.setTimeStamp(0.9237467057648449);
    msg.setSource(26689U);
    msg.setSourceEntity(36U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("QSQGAGRJMOELQTQIGTBMYODXVVCYOZZXSYHBJMPQK");
    msg.description.assign("LBNOKIRTJQEPHJHBXTFNIGWAMUDYWTCWMNRYBRDQQAYXXCSUHIUCYQQFGRZTAXDZJSFUXPFFGMQAOIJLKLPDVPWBSAMLLCNRJYZYUAKLZTTWBHHADSSRVQKWMURWBOPAXZZXSUSZQIGDHITYDMNVXOFRGUFMBIEJJVFKOXNBNQDYEEGUMMFHZBAENWFMXGHKLPEVICWPSEOGGYLBTTESTCILHJDJ");
    msg.vnamespace.assign("LQHFSCPQYJDYCEZKLVNKRUYBLXHGXMATSQCEMFPDYZGUOOROWWLDBUHARFBYDIRGGAEOHCODJQEGPDGIZHVBPUMTKZLXHKKJTOPLLKNFLDJJMWNZANQRPYWNAIH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HLWYTTGPFRVPMDVJMNVAUDBWLZXHSKDOSTCHISRBDDIBVQUNYC");
    tmp_msg_0.value.assign("EZAPNRVEWVBKERNNZCVYTHUXHLAMAJTBUDMULZISNWTFFKPTGKCZMKIGXTQTBGFSUAWKQJDKWIHXEKYFEAGDATVDOXLRVFDOYIQTFODDZHCZZLP");
    tmp_msg_0.type = 162U;
    tmp_msg_0.access = 211U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZBVPNSKWGFLLUECWDQRXISOSPMUFNRUQ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EMGRLBUOBTXYZQCSJVFXWFPGKJHPDUHRBNZSTPAQEEYXTLJAMAE");
    tmp_msg_1.dest_man.assign("KWJVJTNLTDUCQKBMSCWVEZTMXOIZPVCDCLSXLQXRHAMKBZPJIGQXPQUALDZVHQANRMSODNOUMFHFXGBBWZJHEZTHRKGCIYAPLHHLDFYMFFUSJRAOY");
    tmp_msg_1.conditions.assign("LVQUTEFGSWXGDARIMSBAUEQEXBDVJTSUGUKAHSQLYFXQPGOCBLOPCZNMJYVABVEHPUNJBWIEKNONFEFOQWWLMRPXWZCLOLAWETHHMQMHWHMJNEUAIZQPTVNLKBAQLGTAYGCAFXTKXRQQNXKSRSRCHMADISPJVRIVDCRNULPBGVWJJEDVFYRMIGYDMUWOGFOFVZMSPLTXOXOXFUYEKPIGJZDYFBPWJYKZNHC");
    IMC::DevCalibrationState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.total_steps = 66U;
    tmp_tmp_msg_1_0.step_number = 30U;
    tmp_tmp_msg_1_0.step.assign("OXNMXRVNALNDQKMLFYQOLJSUPYIYSXVRYCOMKZNCOCVEKHPKNHESFOYUVNBKLIATEARRAKSXBYZOSSHGRSFELGDOPSEJHKYTTHRECJYWOPLWQTSJKOQZVCWBAPIMGXKTJDMCTDCPIQXDJZARFXMBNTJLIZQ");
    tmp_tmp_msg_1_0.flags = 149U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::TrajectoryReference tmp_msg_2;
    tmp_msg_2.r_x = 0.20911443269957164;
    tmp_msg_2.r_y = 0.04003581850448601;
    tmp_msg_2.r_z = 0.8343822949644445;
    tmp_msg_2.v_x = 0.3789542836433156;
    tmp_msg_2.v_y = 0.9674477137366353;
    tmp_msg_2.v_z = 0.7696208106667161;
    tmp_msg_2.a_x = 0.07776975194866975;
    tmp_msg_2.a_y = 0.45991480552164365;
    tmp_msg_2.a_z = 0.7173320228856802;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.9794119067060275);
    msg.setSource(26374U);
    msg.setSourceEntity(129U);
    msg.setDestination(64732U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("BHAFZGJIWLRBCAYCSBRBWVNTJXTTSPZKAPQTGHMDZXSZNOHOAWMOSGFZCLWTSLRZGQPAPUDKMHXFNHDQWAGSVXNDLA");
    msg.description.assign("NWTVLJRNEQRMCZSDKYPDPGQDANDTTYXNWONXUUISVXUQOGSXHIPEOAVMBWXSFSPBOLAVCAJCRXMUGJLLBPQFTCLBYRDUUIQGVARSHHFOVBVMHAIPWOHBEEZRILKJKGQCNYJATYBZNMCMEWYWPQCJWOBUHZTJTREASVAGJEXPWFLHFJLHGTPQ");
    msg.vnamespace.assign("LVMRVYYKBYIMGLWLFAKUDWBHZBFDPZVUAHOEFQHYDHISOEUMGONIFEJJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OUMJCBIAWUIQYOKSLCWTRSPLVXBRJOAILMIMHBMEQZWYINDHKXSXFDDKYKIAEZARVDYQZZUUEMDGNIXZBCSAHCOWAGTXYTYPUPSWKQHPWCGOPCFZUHNEXVGBUMTCRFXDVZBZFLPTUCJTJRKZRGLWHWHVVEMEAXOQGRMRILAQBXJTCHVAPNADLTDBNGEHGLKWNBEFSFGVTYJQOQSRBMOSOYUKJ");
    tmp_msg_0.value.assign("ZPZGYRLLGOMXOGUTBORCDCBKJLKRXAVSFLTEENENCQGBNMUJHQMZHZPPHKGIWCURWVJBLQWUPVQZKNIDHNTTXCIXFJDYXSYGMHIKLIJFDDTCWWROXYHYRWFFSCSOMHDBGAXLSUSMWKO");
    tmp_msg_0.type = 102U;
    tmp_msg_0.access = 10U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OUIRCNRISMRKHRAMLXZWXKADYOAQDSJOQODSYCIHJJYWKNCFYFGVVZKBOWNRYLXBDMJCSQGEZJGCCXRZHKSPFXDMILKXQIDMXUBULHEKMSBLETESYATJZFHYBYVABYQITGURJWWLAHEVSXKUYAUONDPGZUI");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("POQNRWFMZKLKOSQQCFVUDVTNVMHXFJNOHZTLCWEJZYIXOGSYTUUZKAGMGIFPENYLTHCYBDEPGNVCJDVZFYLZAJFIDIRUZUIOXQHPOJKRMEBBUTSESJMFEPGSHEQOFRHOWBENPBTBQKTSWQTDDHKCQAJALZUFJAGDXCNWCXAHZBLRLTAYSXUKNROIKXKVY");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 48046U;
    tmp_tmp_msg_1_0.control_ent = 114U;
    tmp_tmp_msg_1_0.timeout = 0.5241385592196038;
    tmp_tmp_msg_1_0.loiter_radius = 0.5014643015768115;
    tmp_tmp_msg_1_0.altitude_interval = 0.09425206934201291;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::UamTxFrame tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.seq = 39425U;
    tmp_tmp_msg_1_1.sys_dst.assign("WRYJZOGUYCBKOFRQPYNBMLJUOXVDONY");
    tmp_tmp_msg_1_1.flags = 49U;
    const signed char tmp_tmp_tmp_msg_1_1_0[] = {66, 46, -125, 25, -20, 20, -72, 10, -113, 5, 111, 107, 124, 10, -80, 109, 121, -36, -5, 1, 103, 30, -83, 62, -81, 6, -122, 67, -62, -118, 60, 126, 2, 119, 2, 7, -113, -121, -50, -39, -90, -126, 86, -87, 101, -102, 113, 12, 126, -54, 20, 74, 62, -51, -59, -123, 12, -6, -36, 31, 96, -67, -113, 0, -68, 110, -111, 95, 97, 75, 48, -68, -110, 93, -73, -126, -107, 88, -52, -91, 107, -8, -20, -122, 7, -117, -91, 42, 4, 100, 22, 58, -109, 82, -77, -14, -68, 82, -51, -57, -82, -124, -27, -104, -91, 49, -109, 124, -78, -15, -82, -113, 29, -124, 10, 101, -92, 69, 16, 10, 38, 66, -117, -115, 14, -27, -25, -115, -21, 9, -65, 12, 104, -48, -62, -31, -122, 9, 112, -97, -93, -62, -67, -78, 18, -83, 41, 108, 25, 73, 75, -108, 28, 32, 113, -32, 45, 113, -91, 91, -71, 92, 106, 101, 3, 112, 89, -58, -77, 76, 46, 84, 45, -40, -41, -123, -92, -121, 5, -51, -78, -19, -96, -35, -94, 60, 4, -108, 4, 86, -122, -34, -67, 23, 85, -100, 71, -45, -93, 83, 0, 69, -114, -127, 123, -47, 54, 91, -82, 46, 80, 1, -34, 116, 34, -103, -70, 117, 73, 88, -47, 12, -85, -50, 10, -123, -33, 10, -72, -22, 89, 98, 20, -25, -33, 75};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("XKAXTJWEKTOVYOEKBOHOHUSVNLYEXORVWFXGMZGEGDDAELIYOQSPFUANVQBJWWPLVQESYOUFZWCRQIJXQRBKSZFYNZZCJTEPMCUKSGDNCNWTAWKSVZKOXRRPBHRAFZVPVGYKGWPEPWPUDIQLNJLBCJPLYQMIDA");
    tmp_msg_2.dest_man.assign("PIRORCIRYCZQSDERMZMHQYMFEUDVLUQTKUIPYZFLDSSCZBWWAVNYWWGSGTOCIBNXICTQPELDUVJDLQYFBMTLJVOZHRTFDMXDYDSRKEPZJROTLZFFJFNVKBQLHVGVYXSXWORXYQMBQBOBPZOYGKEATPCAJNICQGJOFXPSHU");
    tmp_msg_2.conditions.assign("BNHAYWTBUTATBSIAWGAMKIKBSYTAVLBHGDTVC");
    IMC::RhodamineDye tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.6508958289954592;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7546459437220376);
    msg.setSource(48611U);
    msg.setSourceEntity(177U);
    msg.setDestination(62990U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("OUWGFPAWYRCDEEFZVXLHUSFMFIMSQFSHMMJJQXANCORXYSCUJTCOXMSJTIOOTANLSQKINQUKEJKKBLNWYEIYGAZCYZBKHAPT");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6422105511308362;
    tmp_msg_0.lon = 0.5701758231039579;
    tmp_msg_0.speed = 0.37480457536710154;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.duration = 16416U;
    tmp_msg_0.sys_a = 65276U;
    tmp_msg_0.sys_b = 879U;
    tmp_msg_0.move_threshold = 0.2025327623585954;
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
    msg.setTimeStamp(0.43229727055887956);
    msg.setSource(35049U);
    msg.setSourceEntity(99U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(227U);
    msg.maneuver_id.assign("IBLYFZAJVIMSNSDDPAMGHIVSQPRYVJPGHLYRQZTE");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("KXGDAUMMOOBXZYYQUZPZCHGQABEEVDBIREVWHIIWWAIAJJVGAVNTAUOLEHCFWGPYMUREVIFIOHFALHSBXLPQQPXCGZLTFTZMDGRDSJDGDUIKSWCHKVSMLIMBQHUVCYEBHSDZNAUYXZNQVVOQKOYKTMLYXYRTMRNBLJ");
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
    msg.setTimeStamp(0.4503200189535377);
    msg.setSource(41494U);
    msg.setSourceEntity(61U);
    msg.setDestination(31799U);
    msg.setDestinationEntity(221U);
    msg.maneuver_id.assign("POISQONPVTWJDTKNWFLRQGVKKHMUIEUJNPGXRSXLDTVAPDZAGKIMWPEAZBXRCVOFVSYKNEUUGQAKGFUCYYXYD");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 47040U;
    tmp_msg_0.lat = 0.2224722329239982;
    tmp_msg_0.lon = 0.9181202738928889;
    tmp_msg_0.z = 0.9673732319177862;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.5763521288332056;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.custom.assign("ZDEMCFDTSOIVSYMCHQTCHBXIMXRBDXYTNLVNVFKFORWRCIDHPYTPAEPNEZSA");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.05654150235307642);
    msg.setSource(21341U);
    msg.setSourceEntity(193U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(188U);
    msg.source_man.assign("BQBLYOFEWOEU");
    msg.dest_man.assign("AKCYLLAKFUBURXOWHTKRUBWGGRYMFQZYNHLEMHQUJBDDFUNPXPNKRFWLUYFDCAVGBSNTAHQJJJHGTBUWOKXSLPODDVSBOPNIZEYVPQIOCVEEQICSZWMEVKODDTPUZRJXICGHTJQYGKAEXSDAXYAVTZMHBMQUGWVSUSZZVJIIOIHFXSJOFTNAZPHASLTPHTBCQNNMCIMNFECGOLFGPIERNIWCCMVXDYRRBKFO");
    msg.conditions.assign("RASGWMAPKYXBHNUVPRMUQHRVUFVFWTNIGYTAVBMYEWJSLIUOZQGHJNZIJEPQTBCOGHCEAWNFBQHTTYUOPAO");

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
    msg.setTimeStamp(0.3014592372152496);
    msg.setSource(52383U);
    msg.setSourceEntity(101U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(139U);
    msg.source_man.assign("EWSALEFULDUYEAXVQHFZHBCPXNCGDWAZSCQCHIRJKVNKDMKULKFZBTCKC");
    msg.dest_man.assign("XBNPHRKKZFPWFDKGSXLAZATOBTEKMVLKEWGNAHHPEWJBMAGYSCTUSSDGBVFDPIXKDLZGXJGRJCEVNEZQIEVXPUDOMRHCESNTAWGYHFOULTAIMHBJFRYSXYOYGPDOVPLUJUDAMVKUMYJCFCKINCBEAHIWXNTCUQLQWPNV");
    msg.conditions.assign("SXRECNLWSPXKKGGPJIDUYHMOCFUAVFWWGFNRYGSPYBTOFXVCSASZAEJFBKXIIQLFJLEPLUAAGWMPDQDKEJXCMYINOFKMNKJOOZVHNKSQZQRGGWMFTI");

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
    msg.setTimeStamp(0.2887631335530134);
    msg.setSource(37281U);
    msg.setSourceEntity(105U);
    msg.setDestination(33767U);
    msg.setDestinationEntity(167U);
    msg.source_man.assign("JGTGIGTDHUGLHCAQLUBOZBBXXNHYAARDHWKQUFKFIUX");
    msg.dest_man.assign("FHWZNWRDIWZNIVVNOADVOQPSSLEFDDXAMECEXOMTGMTZZMGJEKFFHUPQQTSWCEZVTALJUHTXUFEJIPYGVMQGGCNOBFVQGKCSNHWXMABYFHNJYXDWFRKEBYZBIUSAURVWVPUBKBJDERYLJCTCYROZKGLASSIRXQPENIICRATHPVIWNKJDEAOBXQZZHYPJYLVBLRUSRJDXSMJFCGYXPZQTILWIOUGODOKUSQP");
    msg.conditions.assign("VVHJEKFHSIJWNRWOGCSEAIYFYYJKBIXXAFMSBCDLOWCLHHZZRUXNBTYLDMQBWKKTUFQQAJEVRQAJTFEYISU");

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
    msg.setTimeStamp(0.34407274605513827);
    msg.setSource(51892U);
    msg.setSourceEntity(136U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(199U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KDIMLAHWOCZNG");
    tmp_msg_0.description.assign("CVBPAAUWWQAGWCPQEHDXCJQVHTNZBWISXPMRZFDDONYWQKVTILFUUOMXLYERPFFDCHPGQTUGLMRSJNJTAZGFITNXDATDEBZQYAHEPTCGOUKRHDAZCOSUMPVODAZZXZGUMYRHXIPKLNDYJJFMAFCQOBGSWVNFQMMTRFIERJHUBSSOLVITLELSJXBEWBJL");
    tmp_msg_0.vnamespace.assign("HIDUBBCHJFXWQORHXPUPHEWWIGNITXOFSTFSXIGYQOSVWLVTJCFSDBXYVTDPKRBZKMNCKKIAAZXEPZRLOWYWOYIJH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UGFHQLTYBLHQDRTMWDBHSLBOHYWDTLIASXQKGNBPIWUWRGPJLEUQPZJSXAROJXXVRZREWYCERYVOEIDVYJXDCIUTZWCENMFK");
    tmp_tmp_msg_0_0.value.assign("GLJSADDVAGSFCWOQSLSQZAKKSDKZOQHTVBBVGNZAUIMXJYAZKYNZHGCOJYFYPVVXHJEDQMRTMXKYDMUKNDHLYFVRDIZXQZZMCYIOOWLWKXUFGQGBIKPTTTCXOFIGHRXQPUGKCWWEWYUEQNJPGAYHFOQUWASNPSIWESBRTMHEBMFNNLRBTEMALII");
    tmp_tmp_msg_0_0.type = 186U;
    tmp_tmp_msg_0_0.access = 38U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GAKWXNIPVKINUNUGSCTFCRUKPXDFZRMJRRBLIOAZIIAXFYMAADDRRGANFOWPVVRLDJWJPMZUWJILQNIGOJYDCQHJTTKXLAXKUMGFCUDASEKYJQOTKENMNWBRLVSHFGVQQWAQTCPLZBSHWXWBDZSYMEFEH");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SLNXABIOGOQAJVHACCMKCGDJJLXEDYZMTLCNZCYUUZWHNYJZALDTAWXYZFYENJOMXDURRLEWOHRIBNUSMDN");
    tmp_tmp_msg_0_1.dest_man.assign("BHVKMHFTUKRRTXZFXNZXCMIKSMEHHWLLKVXLFNTOTEIIOPUDVPHLSODDJYAJERLYORCHTQWQNPBUOIBFDPKLOXOIDAUVQMQVATMGGFBIPCZWXXSUVQGAHLXDOCMNREGTAJUETPEHQWYIGUKECLRBZWQFBDJLNJGYSWYEJMPSSUZUYDYDQIABGQFDSVNKPOYVWYTWAYPTCWSRS");
    tmp_tmp_msg_0_1.conditions.assign("CAHTETOZUYFFYBLDDJVBZOIKVAQVZFIKRCUJFBGTNTLSRQPXTOZMJWPZAOSPVXIGTOXNVSYQSXUECVCLNGIWXQJYTIUFWYGCQURKRPPFOHFXKXEKYQRHHLNGDAVABSEPKDBMANEAYQZWQXMMDWBNSEOJCGTUEHCFJOQVMVGRDGNSIJMZTYHYJBI");
    IMC::SetImageCoords tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.camid = 252U;
    tmp_tmp_tmp_msg_0_1_0.x = 22850U;
    tmp_tmp_tmp_msg_0_1_0.y = 54664U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CloseSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 1529940357U;
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
    msg.setTimeStamp(0.10237185323839315);
    msg.setSource(30956U);
    msg.setSourceEntity(54U);
    msg.setDestination(58238U);
    msg.setDestinationEntity(251U);
    msg.command = 128U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BRKIWFKSSSEPRAJQIZNNWVDAGFMLOXAGBQKIPHXZOPSAGJVNYXUUEGLTQJOZPKCDPYVYEQBWXTGEDYCQHWDWFHEVRVZKCMTLTRINJUJLNMJEBLBZAMMYPUFKAUYRODIZGNTTRPTLFSAJEIMFJORCZSGDGAOSXLTXRWPGONACPEBYXQZL");
    tmp_msg_0.description.assign("QLJAQJBSXCQREWBLVWBQIOYUTTSGGOXUZPMEYRWLYQCNKWSKBEHCDFPIDTZKFGXQIERPAJPYNWYOVWNIYPHMBGTLGXOMXEJGFGNKUGIFBXZFFHKTQRGAJYXDSQVWCCRVTLIENYDXLIZLPNOSRZAKCAHADQJTRPRBPWJDKDHFUJBZMHIDCUKTFRBSCZRMKSTEJOUNNTSWYZFYLMNBHVHEXCQO");
    tmp_msg_0.vnamespace.assign("KWUBJZYDOFDWVAQCVZCBJESDPRFXPZPZJSWCOTMBZEUKSRIFLQMSYRWARJWRBSLDBGETLMXICTKURYEMFIZYFNIDNXBERHDCPWEBAGSXHQIJBOGXHAOLHPFEXZMZGNIUSNUPYVYHKLSLQPKEYNTDKTLIPQQLQUNXRHWVSFMGQDCSYXXUJUKOTNYVBOCWMJBVRTKLIVAAQOTLPTJHNVEQOIAXRHUNWHGGNKFMCUGDYMMZDWJCFEZFOGKC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BFJZWFSLES");
    tmp_tmp_msg_0_0.value.assign("PBWATNHEOCFNFXKCSWNNDNVOCTGXUVPBUFEQHMADVHGVYIABTTOCQKMRJWQXIYWRDRYPJMZKYMMVFMKVYZJDWLWEWHGABTMGBCCZZXTCQPLGIDHDKPKWJPQSZSQOCXEFNJPSOXRSSJLKZSIXBFEILURRUHXKMQXJYGVPBIOETESVFRNS");
    tmp_tmp_msg_0_0.type = 217U;
    tmp_tmp_msg_0_0.access = 17U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DTVACUTMPDZBSOGOPXOOZLMYDTKKGPZNYIWXNVSFIZVIBERGVYJINPJPNHBAHXEMVDXDCYKPIJYFXKJPEAQLLYHWVNBHEMSRRJVWVDQOXBJAUAIQRJCBGZTALVZRCREQFYQMFEHIKECAUHTYRLIWNQCW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BGNFREKZEJMIVTVHAOISCGRARVH");
    tmp_tmp_msg_0_1.dest_man.assign("QGJMMLAVMTTNWZPYKDBJJORPWGXJVVNGRZEKOUYHFQCUXKQERJJNAGCNDTLYUGATQNFTBNWNOKKPVGYSVLRXRAIQZPPXCHIKFIZWWIITSUPDLQRBGHYGWHKIHYZAXDWSZSPDXGAADVHPOEOHSXBHFCZMBCIDRBPFNTLFNFECJOETTMCKYDKLSMGOEIVLRVNH");
    tmp_tmp_msg_0_1.conditions.assign("AMKJUWUSWHIKMFCSANJFGEFQXIESEUDDLTZEKKLYLJSXYNHBPHWQRFCWPDAKOINDKZAXYEOAGTKTMMUGUDVGFPPDPMOSVBWRFZXFVBNPBDYJEGSNCTRHSYMYUUCCWMIWJYPAGQTCJMY");
    IMC::Temperature tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.1303315680503685;
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
    msg.setTimeStamp(0.6713438295789322);
    msg.setSource(27002U);
    msg.setSourceEntity(83U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(21U);
    msg.command = 93U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DUFNICHNWCUOTNLHK");
    tmp_msg_0.description.assign("NPHFMSTPVMUPFSTRIGSFCRYGJOXSWADDWATYLJSUTVDBAUYLYCFMNUSXNTPVHPOWLZIUSAMGQHOSCKLJMEIJIFWYUXXEEUQYREMZZNBVHBWUCGJVQEQRIKBRAMQTDANLUFQNRSLOCVFMKCZFKCKGVGJPWGQZEZTHVDWHEBVLBRAAZIJTNLXCJKVDNWJBI");
    tmp_msg_0.vnamespace.assign("VCMIQSVQMVHEUTZZDCUVUSFMHUDZIRNPJBSLJPEDOFTRWWFQBAXGKEZMJBMPAKTYTVIYSNRIVTFHQJFUZFYXYUSYCGWBYHGFXMYSLCXUXSJRNMQABIHZUUDZGWAOLWNLDSKTWXDZLYIHOKWEHGFOOCROKIBBWXVPVHRFBVJODOKLVZANIHQEWKEBS");
    tmp_msg_0.start_man_id.assign("WNPSTRBFMRBOSBOAUBXRULKZSXHOMQEZACYJQCZZVWHKJDXGGCSCBKIHZPLMOAKTCZPWTJHVLDBGGPXMLTOCIOROKFGYNLMMTXDXVVODMIGBLBHNJRLUIJDFUSWPWPSGNGYYQJOUCLNTUDLNTKYQQWPQRXKIHITVHWBUPAIAEEMXSCAFRQNSYMFJVEXNYIYSUEBJNVDCOY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TPKCODXHWBGTKPJDDFUYXMRVSNWDPSFQTJIIPZZAMXYOLQMOUHJHZOOVCDXKRIRXVLPTBXTWXVNGVUEZVOJWBGMSICZRPNMNGEQFRCTRMZCWJCMEYQRZTKCEYUQSVAMWKLHBPJYHPHEAALVFVKGBWRIYRDNGNMCOKYKCSYUDTIUSXHNEHXUSBEABTAJQOMOLLBIUWJAKRLN");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 12670U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6246608592848516;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9985445113035116;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7257753427144602;
    tmp_tmp_tmp_msg_0_0_0.z_units = 129U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.1840402602551472;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.8126527281663867;
    tmp_tmp_tmp_msg_0_0_0.duration = 17172U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6325700253796478;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 40U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.7332807974917774;
    tmp_tmp_tmp_msg_0_0_0.direction = 225U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DLYITRCULLAUWPKHGUHTKXUSZVQSIJWDVIBULHBGOVMDPWQCEHCTXVTJWWZOOFKBSETGNQIPNZFVIZFYFJUSALDZBLRPLAQYEMVBTGFFIMPQFFMCRKGUJHERBYNQXXOOEVXFJQWNZMPTMRBNMUYQGUJCEZYZBYDCIDWIXJKYY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Aborted tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Fluorescein tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3075276624969764;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SoiState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 23U;
    tmp_tmp_msg_0_2.plan_id = 62757U;
    tmp_tmp_msg_0_2.wpt_id = 89U;
    tmp_tmp_msg_0_2.settings_chk = 3960U;
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
    msg.setTimeStamp(0.16964584172267172);
    msg.setSource(13464U);
    msg.setSourceEntity(136U);
    msg.setDestination(49285U);
    msg.setDestinationEntity(57U);
    msg.state = 216U;
    msg.plan_id.assign("JVRWUYVLCEYZTWUVEZYACSOGUDMHRETMDXTSMKJZWZJRPMJXKZDOWMMDJTBGXYYPAGUCWWDRWTQTFPXIPOJJGHCEHGZDYXHHIBDASGBOIRFVQAQOFSKC");
    msg.comm_level = 156U;

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
    msg.setTimeStamp(0.5639166500381938);
    msg.setSource(61271U);
    msg.setSourceEntity(203U);
    msg.setDestination(48123U);
    msg.setDestinationEntity(78U);
    msg.state = 104U;
    msg.plan_id.assign("ATPNDOJCEUEEXJROWGAZHBPWDJSWUHSMTGFOTCAWCKHUYNNVMYXAPFNMYCHZXHJRKLKAOVSFFIVZYSRPTLMSVPWKGQXMRHEPWEAHPDCVUKVQKNKYODBSXRFFDFSBGZQUCEQIHQBDTLIXZYOCXBQXUTCGTHLWNNBSFUPJLZJEENMEGDUGKIVYADQYQBZMAOURLGZIFTTPPLNCJKTUQWJBRDHIXBYRDLIKSVRCAOWNMSJMIYFZJ");
    msg.comm_level = 107U;

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
    msg.setTimeStamp(0.31908012840333433);
    msg.setSource(39272U);
    msg.setSourceEntity(9U);
    msg.setDestination(13781U);
    msg.setDestinationEntity(14U);
    msg.state = 95U;
    msg.plan_id.assign("PAKVGPBNILOBJQMZTOLLWFDKTXSYXQYEMBBBWAUEJUGTHAEJZWOJVZQGRHVZTEGFFSDEQKCXSQTCDHPWHQDNPGSXUTICPZTBKNXNKVOOOAUIBOYFJLQTUUZ");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.13042173053333161);
    msg.setSource(5997U);
    msg.setSourceEntity(57U);
    msg.setDestination(39469U);
    msg.setDestinationEntity(137U);
    msg.type = 61U;
    msg.op = 75U;
    msg.request_id = 26953U;
    msg.plan_id.assign("YYDIHBWJWXDEZCMDKMDRCYMG");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.5716361701836948;
    tmp_msg_0.lon = 0.3551812354166636;
    tmp_msg_0.z = 0.7639577208425887;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.34712421471315924;
    tmp_msg_0.speed_units = 154U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6141141598012959;
    tmp_tmp_msg_0_0.lon = 0.776254336814453;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VYLXBGOKXCKHYRSDDHWRDNOWIFOMQQMJLPWEQXGYSIQJHNAVQVBBOPKNZLSVHDGKGGUKOWMVXNEFUTNBCFCUMXRBSVKKPSQMRHGEFXVZIWJRLJOESFJAJHDRIBIMBRDPSNTMARESSU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZMYBOOPEZYARFVIRKSSOEGNGPOIDHLMRKSOCVQXEGMTVQUCRRTQKBZCBRGMDIVBWAZNVUPWNLWHLKUEYIAXLGHTBXRWVMYDQVTBFKKXWQLPDHBEXWNSJVIIECWBGNCODABIAHXDZYLEJXRUQKKMHAAZQJEAZZHTWJNSDYFQMGFCKTANJZULOMEFSHJMDWTXSTGCFJPRDDGFEVYYBGWLLXLPPINCJUUSQTYSIYCPUOPHJPUMVQFUJAIXTOK");

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
    msg.setTimeStamp(0.8626548681443209);
    msg.setSource(12451U);
    msg.setSourceEntity(61U);
    msg.setDestination(18266U);
    msg.setDestinationEntity(242U);
    msg.type = 74U;
    msg.op = 26U;
    msg.request_id = 4231U;
    msg.plan_id.assign("WQDEGSAEQKWCWQGBTVPWSCXXXJXKUUYJHCTNNGLILUVFPTUPODHYHYNSYOMWRLLKFXFLGARKEUJCDIQMBKCKWJGTFVQBYMVNSDBTWVWCUNAGLXDGWYQOAOQXIEHIPXZMPJUEGMFDMZYHLQONINAEDPVOKDOUTPHMGPBVBSOTICHMWJZJIZKAPZXJLVEXDBYFBMJRRRETKRNHASAQYKZZOTPCEVZJOLFFCRNZSNBRUDHVIICBZY");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("EATZGPIGTCJNJRCZMLTNKBDAWOVINQBYGVDXDJWWXPBEPODYNKJBTPRIVHKJHIEPPPDOYXGGSZNRKWTXMWIXLFOLGNBLRXTFKVKKZBZRMSDQRJQGKJEHSFWFCWYTYIZMEIWZXHZHMHGQAXLBEMCVBYELPLEVDULSWCFVVZQICXOJLMUAFVUPSYFQSJGQYASEBABFQACTJSO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QLETUPLDIQSWFBAZMKXSRKRHRNNCMBCEPQOBGHSKLJYRKPBBEVKZLPYOSZABLWXOXNERSFDOROWYMQIHUHXMGGVNRBZJFOAY");

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
    msg.setTimeStamp(0.5115715034157468);
    msg.setSource(50256U);
    msg.setSourceEntity(105U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(152U);
    msg.type = 84U;
    msg.op = 241U;
    msg.request_id = 60497U;
    msg.plan_id.assign("RDPNAVIKNWJNEMKQTGWVWKZYEJCHDLHEVOWXFGCBCOIGTAWSNENTXASNUZXWRFGXZQTGLNFDPUKUHUXEHYHLMVAZWSRSSAVPQFRDJSNQYMLORYUQSFWYYPXQSPPCUFTJUJRLKLOQZNJLOIJFRKXGZDMKJOV");
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SDIUWVHYKNLLXWFYJUZBGOOMKQSOTOPBGUUOCAXPNCPVSDXHJTTRWZEXHMTVCKZHCJEQLTKRSNGPPIUFSQFGNICSXGKYSYZNBZEUTUJMBDBJLA");

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
    msg.setTimeStamp(0.6632650266482919);
    msg.setSource(24331U);
    msg.setSourceEntity(60U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(120U);
    msg.plan_count = 47228U;
    msg.plan_size = 3751502527U;
    msg.change_time = 0.5829660437120354;
    msg.change_sid = 65230U;
    msg.change_sname.assign("WCOSDPHFBTWDSGKZMIPDQNWOOAUWQZOMRPSCLSZELNIKXGAPJUGJSSHTLRGOJPAMQWBREKFTXBBUKHQYCTQANPYMUEAKNYJOYENOJIFDTHZIYIVDONMDQGFSVRIUJNHETMVVYGUEEMLWMBJQLTWYIKZKBJMLMGUDRBCCFLIHXCYAUVDLKAZGHVRFSFELHPCHXAPIKLPEZHRWTRNNFYFZXJ");
    const signed char tmp_msg_0[] = {124, 95, 66, 53, 2, -92, 117, 11, 67, -122, -127, -41, 5, -60, 85, -102, 1, -127, -48, 114, -78, -116, 80, -34, -48, -88, -116, 103, 84, -123, -19, -20, -66, -45, 48, -108, 84, 18, 3, -105, 125, -51, -121, 45, -58, 105, -123, -76, -43, -17, -57, -42, 37, 108, 59, -116, 115, -86, -75, 42, -30, -103, -73, -100, 10, -116, -113, -91, -12, -9, 2, -11, 58, 89, 103, 3, 90, -20, 11, 82, -76, -32, -19, 12, 4, 94, 109, -65, 74, 105, -25, 47, 77, -127, -84, 20, -45, -48, 80, -10, 77, 14, 125, 21, -1, -113, -29, -109, 67, -1, -79, 37, 72, 19, 23, 16, -111, 117, 100, -91, -21, 47, -23, 7, -53, 104, 48, -17, 76, -29, 93, 66, 70, -74, -98, -80, -120, -60, -106, -39, -82, -114, -5, -52, 49, 90, 118, -34, -96, -79, 89, -91, 84, 101, 94, 7};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ICNSQARPJDDUBDGYZBNVXHKOVTQQLKMQVJFOBXWOTENKWWRZUKVMSFCJAGQBLTLWQYNIBTWWCGQGDRXM");
    tmp_msg_1.plan_size = 56728U;
    tmp_msg_1.change_time = 0.38969333377146764;
    tmp_msg_1.change_sid = 29536U;
    tmp_msg_1.change_sname.assign("EFGAEXDDAKOVJNRYZPXCODCDUVPIALNPQLHNBRFHDHGMDVBMTRXLESTJAMCLVMYBXMJKGYTPWENBMSDUYITBWSQOWIBLIGCMOEXZWFODVGONCATFUXYWRPGHJTKSCMECAJ");
    const signed char tmp_tmp_msg_1_0[] = {123, 20, -30, -95, -106, -55, 55, -58, -48, -32, 120, 13, -41, -69, -57, -88, -73, -27, 80, 22, 44, 12, 74, -110, -66, 24, -49, -105, 57, 28, -10, -44, 123, -78, -57, -42, -3, 118, -23, 97, -117, 22, 27, 72, 53, -49, -83, -1, 19, 89, 74, 45, 126, -29, 26, -122, 61, -76, 8, 75, -53, 99, 31, 101, -5, 41, -67, 81, -120, 89, -64, -33, -2, -53, -1, 95, -2, 3, -99, 109, 44, -124, 49, -105, -48, -85, -92, 62, 97, -56, -75, -59, 7, -34, 124, -65, 68, -110, -125, 43, 31, 3, -51, -79, 58, -79, 3, -95, -102, 37, -24, -83, 46, 93, 112, 91, 107, -67, -56, 54, 46, -109, -35, 55, -40, 123, -94, -85, -24, -118, -108, 110, 19, -97, -45, 7, -84, 40, -16, -42, 101, -73, -41, 34, -111, 69, 57, 126, -27, -7, 55, 117, -71, -104, 50, 51, 7, 37, -122, -126, 119, -75, 44, 24, 39, 110, -71, 90, 102, -57, -117, 63, -32, -96, -31, 88};
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
    msg.setTimeStamp(0.6289468200930722);
    msg.setSource(40109U);
    msg.setSourceEntity(190U);
    msg.setDestination(44450U);
    msg.setDestinationEntity(82U);
    msg.plan_count = 37771U;
    msg.plan_size = 1644147758U;
    msg.change_time = 0.7878993869108789;
    msg.change_sid = 3390U;
    msg.change_sname.assign("LAMICXWCIFPKAMJXVSCZUKKFAIEMDZBUKNQBBSXBFTIOGNFTYEZNSOM");
    const signed char tmp_msg_0[] = {21, -105, -87, -44, 53, 99, 51, -109, -46, 81, -26, -119, -51, -20, 126, 109, -127, 37, -6, -14, 102, -59, -114, -75, 100, -72, -81, -74, -80, 31, 12, 86, -12, -4, 105, 97, -121, 70, 110, -72, 32, -45, -99, 1, 32, -103, 98, 74, 44, 113, -2, 35, 94, 124, -8, -36, 14, -62, 55, -118, -8, 122, -96, -124, -82, 12, -28, -54, -85, -94, -31, -9, 37, -51, 84, -76, -39, 68, 17, -125, 86, 51, 78, 4, -116, 62, 54, -59, 112, 92, -115, 90, -69};
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
    msg.setTimeStamp(0.09246729854187763);
    msg.setSource(34975U);
    msg.setSourceEntity(63U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 21634U;
    msg.plan_size = 2985536868U;
    msg.change_time = 0.4155481554983813;
    msg.change_sid = 32005U;
    msg.change_sname.assign("JRARMRUVXCGDZJPH");
    const signed char tmp_msg_0[] = {29, 87, 28, 120, -56, 2, -68, 91, 39, -42, 104, 111, -88, -4, -67, 3, -113, 112, -125, -45, -48, 9, 2, 53, 124, 53, 83, 36, -13, -66, -128, -25, 66, -9, -10, 2, -56, -128, 83, 8, 31, -111, 68, -62, 126, -15, -31, 83, 44, 41, 71, 109, -112, 5, 100, 105, -108, -65, -5, 60, -14, 114, -23, 74, 33, -25, -68, 0, 126, -97, 22, 102, 98, -1, 15, 100, -81, 100, 16, 120, -110, 7, -69, -39, -20, 49, -5, -90, 115, -67, 32, -92, -75, -101, -20, 66, -107, -89, -125, -38, 114, 23, 93, 24, -112, -66, -13, 36, 109, -4, 51, -59};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YEUPJZBWHXJSLRGRTTLJMTIMSKNWNUEXBPTBXIAPQRKSFBUZWWLIVCF");
    tmp_msg_1.plan_size = 59271U;
    tmp_msg_1.change_time = 0.43915691046663075;
    tmp_msg_1.change_sid = 32931U;
    tmp_msg_1.change_sname.assign("DILHJMRVEWIDTJCIVGYZOMWZVXMLEEBAEBEQDYZUQLQBCBBOAHYHEPMZFWSFEZFLOWNAZOMRJOHIYNFSZAUWKKXPLTSIVNUOMYYKDBNGTOPIBACNUJCDCTTAEQYESXVNCMAQRKVSYTMXQFDRPINGPSUBG");
    const signed char tmp_tmp_msg_1_0[] = {-125, 68, -128, -97, 81, -66, 109, -67, 43, -31, -2, -50, -52, 64, 10, -92, 34, -103, -23, -9, -9, -42, -16, -62, -68, -112, -104, 45, -116, 35, -6, -104, -101, -46, 74, 56, 70, -39, -38, 45, -26, -31, 23, 28, 98, -107, -55, -127, 111, 46, 13, 95, -51, 56, 70, -10, -5, -94};
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
    msg.setTimeStamp(0.11894805537125319);
    msg.setSource(41085U);
    msg.setSourceEntity(85U);
    msg.setDestination(48221U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("WXJNGSLGISIQXTVUWSSZACZNPJWWBVZGAFPCZTKUXDYVPYVJSQLVFIRHDDUFTAMNELAUYBRPBZJJWWMVRDFJDRHBIIKIXFJESXUTSBFMTINCEDSAXJAXEEUTDWMLIOLPVFAMW");
    msg.plan_size = 39373U;
    msg.change_time = 0.5440430344553376;
    msg.change_sid = 65036U;
    msg.change_sname.assign("THLPJBCLCBZQLHVWXVAUVZJNMFPLSOMRFERCFCLWWBRVQWHGRUXID");
    const signed char tmp_msg_0[] = {53, 58, -54, -69, 32, -65, 79, 107, -46, 18, 69, -127, -126, -16, 21, -72, 23, 3, -70, 80, -126, -49, 60, 116, -3, 63, 83, 65, -102, 59, 12, -7, -49, 37, 8, 16, -54, -48, 83, 37, 97, 30, -95, -25, -11, 46, -54, 61, 97, -74, 2, -55, -17, 120, -115, 54, -115, 55, -33, 52, -2, -24, 101, -33, 87, -77, -128, -6, 8, -3, 85, -24, 12, 108, -125, 77, 22, -59, -23, 110, -84, 23, 76, 56, -103, 2, -38, 108, -124, -44, -117, 122, -75, -9, -20, 24, 41, -110, 90, 15, 85, 48, 13, -122, 3, 116, 120, -52, -36, 4, -119, -72, -116, 98, 3, -81, -86, -91, 45, -79, 29, -89, -76, 74, -67, 68, 27, -43, 19, -1, -38, -124, 48, -33, -62, 87, 48, -93, 60, 110, 57, 112, -116, 94, -48, -84, -76, -17, 54, 95, 104, 55, -106, 32, -55, 23, -100, 63, 106, -86, 25, 46, -102, -60, 82, 62};
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
    msg.setTimeStamp(0.12344088569540435);
    msg.setSource(39725U);
    msg.setSourceEntity(11U);
    msg.setDestination(4535U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("YPWOQENADFN");
    msg.plan_size = 57203U;
    msg.change_time = 0.6391308793249493;
    msg.change_sid = 7914U;
    msg.change_sname.assign("UZRDSMCDWHSSIFZFEOHMTPSMARAIOKSGFNEWDHNQKGLQWFVGHWFFCVMXKEHRJQLEAAKEAYWCPYNQQDLRWZJTKYYRCWRAATCDITUXVZXUBLNNNLBCIXRREMLKJZWTCOVVYZCDOELDLDEINJNHHMQWHQOXPCHKYBMQOUFTPOXJYZBPOJAXMAHNMSZOUEDKGIJYLNGMPXBXPOAGWJYFS");
    const signed char tmp_msg_0[] = {-4, 31, 97, 118, 75, -76, -21, 92, -99, 126, 18, 119, -111, -82, -85, 61, -39, -27, -68, -17, 102, -104, 104, -33, 43, -95, -103, -88, 15, 56, -111, -34, -81, 26, 3, 48, -60, -74, 25, 60, -74, -44, 66, -57, -98, -14, 100, 59, 15, -119, -84, 41, 107, 113, -81, 34, -77, 121, -52, 96, 19, 60, 62, 73, -100, -59, -98, 55, -78, -103};
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
    msg.setTimeStamp(0.22705336409741061);
    msg.setSource(37990U);
    msg.setSourceEntity(215U);
    msg.setDestination(7306U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("QBTDAPMZMBAPQJTEFIYNGWUQRJWHBODCPPEBHNASFXBEJUJZCDGRGCEWPLOLDNMAHQGICQCEOMEJTREBHTIHSNCRNQZPSLYSFSXTMDVZOKOCWVFFKIOSKKTBROZNTKEBLSMYNTPJKOQZAVEYXGLRHVOJMFLCPUKPLQRBDVXVKNAMSNIKIIFIVYBACCMGUOMU");
    msg.plan_size = 51309U;
    msg.change_time = 0.05687829808897771;
    msg.change_sid = 56573U;
    msg.change_sname.assign("QGJXTFTRVXMKKWEANITSKYBRCGYLVSCJMEZAWJPQKBHUDWCTCYTZGYPZDNKARZZZGXUZDAHCBHLKP");
    const signed char tmp_msg_0[] = {74, 83, 62, 76, -58, -4, -2, -17, 14, -122, 47, 115, -62, 104, 66, -80, -18, -44, -114, 18, 12, -8, -76, -56, -94, -31, -74, -49, -84, -22, 113, 126, -19, 16, -75, 91, 1, 93, -78, -30, 60, 0, -57, 97, -80, -126, -116, 23, 84, -24, 121, -111, -45, -23, -60, -55, 84, 66, -87, 119, 21, 38, 58, 42, -125, 27, 118, -16, 14, 1, -76, 22, -48, 37, -89, -87, 22, 99, -108, 110, -116, 72, -63, 42, 118, 53, 126, 46, -56, -14, -27, 59, 122, 40, 94, 33, 69, -58, 27, 32, -24, -97, 16, 92, 107, -63, -21, -39, 7, -71, 105, 87, 71, -87, 35, 117, -90, 5, 39, -19, -3, -31, -36, 34, 106, -2, 110, -61, 12, 28, -22, -89, -109, 70, 71, -87, 104, -21, -91, -82, 13, -17, 59, -89, -7, 108, 61, -55, -114, -87, -7, -79, 121, -108, 115, 98, 115, 20, 109, -1, -101, -32, 55, 21, 73, 26, -83, 123, -109, -93, 7, -57, 28, -45, 68, -60, -110, -17, 85, 3, 58, 38, 31};
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
    msg.setTimeStamp(0.46512130625372317);
    msg.setSource(5914U);
    msg.setSourceEntity(90U);
    msg.setDestination(29647U);
    msg.setDestinationEntity(56U);
    msg.type = 226U;
    msg.op = 54U;
    msg.request_id = 18736U;
    msg.plan_id.assign("OKABAFWJIFNLHUXIRWPLWMVMKMLPHLJCOBHVCGRAGVJNKEGWEZTYGIZDIXMBMCGYNUAYVXIQRSTEHXSDTQBLJNZOCJBCSUSHJDPJMJPSOKMXVARBOWUZMABTQZVEXFSDYOWKRFFYZCXURFDAJYRFINQWLCZQVTYOPIFGNSOWTYTMHSCPYEGCATQTNBMHAKQPXZGNUSGPVPDKCBRXPOHHKQFIVE");
    msg.flags = 53694U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("DHJIAOUAEWEWBZEBGTWQWAONPXHILDXBLFXNPCDEQZEAKFXNSBAZMQLTNYMSOXHMOLVZISKWSIOKGBKZWYYHUNUYHUGTSVNVUKEKEJZFWWULRJGOIYRRYTZTNYVJHZXFRQSWAXITKPKICPZGJGPSHSNTJCRMECDCLPGRJDFWUYEGCMHDUYZOPQOQJLCQBRRQTCVPVKIUMNBFACKHCOLNMVDPFTUBQFAVTLIVIMGDSEDMAOSFMQXXGXH");
    tmp_msg_0.lat = 0.6736563810946796;
    tmp_msg_0.lon = 0.3842226779560898;
    tmp_msg_0.z_units = 222U;
    tmp_msg_0.z = 0.8493831523862213;
    tmp_msg_0.accuracy = 0.8802390301113465;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NUNPXIUVBWAIVOXTPGDNIYMFRSTMCVZVDEZUOWYJTDDRBWVNPXRGKBFXHWDCVYFPKKEAJEHDPFMHZIEUHEFGRLMSJFYSVLWQGNXUDUMQQBPNJOCOIQXASIBZSUYWCGSMAANWLFZCHLYKQZ");

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
    msg.setTimeStamp(0.49711352809774967);
    msg.setSource(3152U);
    msg.setSourceEntity(156U);
    msg.setDestination(27589U);
    msg.setDestinationEntity(235U);
    msg.type = 91U;
    msg.op = 13U;
    msg.request_id = 57103U;
    msg.plan_id.assign("UMHJJEWQJYRUERPHXHLSURDUKWDKOMANVZX");
    msg.flags = 62298U;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.3318243871134019;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BGOYLCRMDDJROLHLEYTSZFJTWFLFHQYXHNJUTKPRPHPLEKQCIWZIFJCAQVVKTBSWOTQDNSOAAPCOTCIEIMNFGPCMLXKOSAPLPRKIZMXERLVBXGJFXSZJXJIFGXMPBDIMEUVJJVCHYBKQWHRBESVJUV");

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
    msg.setTimeStamp(0.618992957407063);
    msg.setSource(31928U);
    msg.setSourceEntity(146U);
    msg.setDestination(56485U);
    msg.setDestinationEntity(142U);
    msg.type = 135U;
    msg.op = 162U;
    msg.request_id = 36932U;
    msg.plan_id.assign("BFOIQMPZICLJMVKYIJXFIZAVKKYLITELMEHVJRPSTFRBXCLQGYQZCNHTZMMKQGBXYABDWPBBVSCPTHXNDKIMFRRNDRKFHEVTOODNEXRVBHSTEVFUUEAFQWZXULASUJQNOTMCLDMACWPCSJSSXHAAVYKJDJWGGZRGJUUFNWADIYOBYSGPXGEXLFOPWTJFWADBOIZYJMQOUHQDLSLAZGUNVBWLXIEROTRHGTQ");
    msg.flags = 26674U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.030640393786896314;
    tmp_msg_0.type = 25U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SXUPZCDJUAPVMTNBNBTSPXFRQSDYTJXMOQTAKAIGSTNSWLCDYXMIJBDTAJZRVGCPOMXVOIXOQOMGHWUKXVMLUYNFNBHUHWNSWKDGWYACRWRNFAGBGEKTYXFJKURZCZJBWAFCMUUBRFBDBAKIHCPNEXDFTGXYLCIZEYEFEQHKQGAPPPIVOZRHCZVETQJLLQQKMIEAHIWULQGLHSLRDLKTYMVOZEV");

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
    msg.setTimeStamp(0.4464756192061834);
    msg.setSource(26561U);
    msg.setSourceEntity(120U);
    msg.setDestination(64612U);
    msg.setDestinationEntity(229U);
    msg.state = 226U;
    msg.plan_id.assign("YJDZSQJHFXBKAQHLVFFWWIELOZVIAQCNVDMKEMYSTFSPNQTHTZAOWVPRQTYWNVLTSLJMAWXVWCAMCRHECCKSSHCBSTGOKLJPJIEELRBPRQKVHOWRAGFYOHYBUXFJYXOZ");
    msg.plan_eta = -423691181;
    msg.plan_progress = 0.07888349431089714;
    msg.man_id.assign("ZGWBQEOHBWGIDNUTULXYEQVTLYBSCTOJXJFBWIVZFICIWJLKADYNIWUTTCGHGPCLGEKCZSRKXMSAMLRCXKFLLVHWXCCOILYRRUEESAOBQAHRKDKJI");
    msg.man_type = 61166U;
    msg.man_eta = -283132896;
    msg.last_outcome = 117U;

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
    msg.setTimeStamp(0.6743159526490774);
    msg.setSource(49444U);
    msg.setSourceEntity(197U);
    msg.setDestination(15595U);
    msg.setDestinationEntity(131U);
    msg.state = 123U;
    msg.plan_id.assign("LYBGAHQBGENQSGUPRIOHEHUAGCWIDTUGLCKJEQVFTPXHSEKWSGEAZXDYGOTRVHXUBMIAPWFMSJZMWIAOBDFWBZDNOPNEVKWKSV");
    msg.plan_eta = 124096948;
    msg.plan_progress = 0.8749858704122795;
    msg.man_id.assign("RSZINFGREVBFJBYNOWCTTUGJMWLHJXWHQDTLVAZOJORVGBKFZYPZWHZJJTGJMAYWZYAQDTHFBBEVNKUSBRLKDQCMCUCIRXFSFFXXRAXPLNVDSHPMFIDMPUMXDLWUKLNLAOXCQZO");
    msg.man_type = 50625U;
    msg.man_eta = -203452741;
    msg.last_outcome = 221U;

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
    msg.setTimeStamp(0.7415325457711048);
    msg.setSource(41924U);
    msg.setSourceEntity(6U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(122U);
    msg.state = 242U;
    msg.plan_id.assign("ZYRYKQHAUVRIVHHEIOIGTWISTFATNRSLDQPSHWHMBJFAZXNRFUEXNQXNIBVEXWKOAZJQJUNWPSLAJNPBGZWFMJPSJZLUHERSMBWDYIOSP");
    msg.plan_eta = -1726231848;
    msg.plan_progress = 0.599533634890658;
    msg.man_id.assign("KEQPZENKWYAUFKSBVEFVAMURQBVGNAWEOJYWLOVTCYWCDHVLEARLOWGADVKMORMYBVZTNBZFYAOTCDBDYZMKXPADXDNOLRVP");
    msg.man_type = 61312U;
    msg.man_eta = 588446816;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.49283348648587955);
    msg.setSource(38488U);
    msg.setSourceEntity(244U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(47U);
    msg.name.assign("ZUPSYHQPQJFBJDMXQZMZLOURNNNFKKVOEISYYAOLHWGAOSVNOVVKCGGUUDUMYQLSQTWDCSFNHPPURWMIVGBUKGTPSXIBQOEJETIICEECAAEADVEGFXTHAWDJBDBIZXKFNKIIZAKTRSMMHYLDTNFWPBCEMSMJMPLJYPWE");
    msg.value.assign("WSYWPUTISQHQHJUTFRJZFDPBHDBWCVFFXNESTPLRYOBDQAKCHXRCSRWCEZCIWWMFMOUGUKDXVIDPJNSMRCSMKVGPBUPNYZLBGAUUNJIIQAAYTCJYVODJQWTYZNHLYEPBOJIJTJWZEOLKLBCHBFBMAGRUZTHRAGGSPJCQMYZRVNLFDSAODINLEGGAQHNEXVFZFD");
    msg.type = 42U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.42774298828371604);
    msg.setSource(21264U);
    msg.setSourceEntity(63U);
    msg.setDestination(18639U);
    msg.setDestinationEntity(173U);
    msg.name.assign("PYMNUNGFQXTWAIDFSSAXDQELHSONHBRVPYYIXDILYUAIOWHTLUZYCCDROYWCKWEYVRNRALGUZJVQZIBFJNBFSLJOMMTHWGBUWYEKTJJBKRTHTJNMMJUXZPKAZTGGXRPSSSQQAGXTMDPGJ");
    msg.value.assign("HJIQHTKTYLESJPURWLWGAJRBNDZVWBYOJHIFRFXBNIMGAHBTGZDRLVSMMPZHUXVOITGZQZDYYHYMZUDUSF");
    msg.type = 57U;
    msg.access = 140U;

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
    msg.setTimeStamp(0.7642194728357349);
    msg.setSource(17142U);
    msg.setSourceEntity(41U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(126U);
    msg.name.assign("DROFTXALHUDJYSAIEMPEGFQBWEFFSIRWSPZJAZCBJRAQJDJHTYRWSR");
    msg.value.assign("CEWKORCORAUTEETMDFNDTZOXSWUIAUJHGYLPTSLNFVGFYFTHCWOHQIHLOFBQPIQVEKIEYVDRBNZMIHTLFASCJRLEVKKNDCBSXUNWDCQPNFNYJWTNXJCYLGSPRGAFUTQRQJCXBVBOKGMZFYOEKORKZPDLWWMYBAZJZPZPQEJVKVFCCBXXUSMHSQYWDDWTIYWZGMUGRMYHQMBALSALMXBVZIBVVPO");
    msg.type = 226U;
    msg.access = 77U;

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
    msg.setTimeStamp(0.8447838471061564);
    msg.setSource(62368U);
    msg.setSourceEntity(1U);
    msg.setDestination(59439U);
    msg.setDestinationEntity(124U);
    msg.cmd = 136U;
    msg.op = 6U;
    msg.plan_id.assign("UNRLEEHMGKAUZRQJCNOGLNBXSBSHWWMAFNLOBGRISOJXBUHOSDWQOLSNADTGFMWZVLTIQQHDFMOTLLKUXHJWUPMEVUYWYKHHBVTDVIKGKJIGINQKCSFYBXSITN");
    msg.params.assign("BVKNNYJOORIHSSJVFCVFSXPHEOJKATDNXNBGVPKHYNJOHKMZBWLWCZPQZQRITJXDYGSZUUHRSXWEHIGPPTLAJLIWAQIQDXFCNRERYVQHKUSNIMWPKUBZBGMSVEYRNXREPPMAUVUQSTRLDVAGFAFOGWICESAAISEXHCXBPZPMOCMQITTJCKIYMHECNFGMVBKBAZYZDTKTYWLMLGRFFDLUOEGCLDZOQZXJFQDVWA");

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
    msg.setTimeStamp(0.39326631569451787);
    msg.setSource(15267U);
    msg.setSourceEntity(130U);
    msg.setDestination(2733U);
    msg.setDestinationEntity(184U);
    msg.cmd = 161U;
    msg.op = 106U;
    msg.plan_id.assign("GLAMVNZGRQNSBYYPLUVUIGKJDYXBVELKJILYJSKPOWQWZXEVUNEJDHTUJHYKJZKVCWTOAGHZNBZHQRBONMMWEHQCCBFYSSICDCFTO");
    msg.params.assign("EAUNUWSCYMWUUJQCLSDMKFPVQOTQXVIFTVAOSHCLWWRCQLQNAMXL");

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
    msg.setTimeStamp(0.43602391483725866);
    msg.setSource(50356U);
    msg.setSourceEntity(153U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(200U);
    msg.cmd = 203U;
    msg.op = 215U;
    msg.plan_id.assign("UJDAAXNHTTTBVYGKPPLKGEBSXRDSORRNQQOGOBOIEAFSEAFCWNWXJZKEERDLUHYNNGEHQKVKPELVCPOHPAFQASXMIHMSHA");
    msg.params.assign("NURMDSIDQDEUQTADHDGZRMHKFLORCFJBCYFJHCFLXNGRGNUTPVFQTJITGXASMEJKSYZABZCBIUIAZXYTDRROWTKYLPQAPICGIIOQHWPNAAZRXMHUGZFQLWBOFWKRMMYPZEMDVVWNNENKJTIWCNSHPORCXIFSUJASFBFVKDHJELIYYCMOVEGEUXHMQVUGVLWCQKNTVOGZZOKEWPH");

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
    msg.setTimeStamp(0.9091131892281138);
    msg.setSource(33074U);
    msg.setSourceEntity(74U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("NJAYUAFCLXRDAKNHOKOCIDKXYTPZUQIHPSPUDVESGQEANCCPVAWZXRZBKEOTBXPHUBXVVNYWMNRYQBIAQJPBTYSLJRMKTMLFWEZOCUXMRRYCHNFFHSFGRTVDGKEOAYKIUMRIDUSZYADYLLFCNOIGVBWIUWJWDBIVZETLYESJTZJVVMHFAZDGJJGCQGHHEULFOCSWKJQMMBNXERQSMGQPXOKIVDOKFBNCIEPTLLPQMUHGPHGSBJXZFTTZWRO");
    msg.op = 172U;
    msg.lat = 0.35290944478424024;
    msg.lon = 0.3829023958715737;
    msg.height = 0.20142576064910267;
    msg.x = 0.7304670077186856;
    msg.y = 0.13271870401948893;
    msg.z = 0.41237196027309697;
    msg.phi = 0.5405686769996958;
    msg.theta = 0.7105288370173912;
    msg.psi = 0.8747676816447989;
    msg.vx = 0.05773136075924712;
    msg.vy = 0.7131177997227396;
    msg.vz = 0.040762378193245796;
    msg.p = 0.6312956562262919;
    msg.q = 0.978361901884951;
    msg.r = 0.1901849150129944;
    msg.svx = 0.749731015473089;
    msg.svy = 0.1347635072561173;
    msg.svz = 0.25234733917999164;

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
    msg.setTimeStamp(0.7460780048652823);
    msg.setSource(41122U);
    msg.setSourceEntity(54U);
    msg.setDestination(20354U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("ZNBFWSVFJRAMXNUNZZCWTPRQLUIIRJEHDARYMFSMXJZYJOSSIOZWIWGARSIURFNG");
    msg.op = 119U;
    msg.lat = 0.8096884421015831;
    msg.lon = 0.1800920883769923;
    msg.height = 0.9081497086104398;
    msg.x = 0.8654430779076785;
    msg.y = 0.946780917809481;
    msg.z = 0.7908137763642111;
    msg.phi = 0.4228864894452661;
    msg.theta = 0.5198085118384794;
    msg.psi = 0.4200166543516314;
    msg.vx = 0.43230508896551734;
    msg.vy = 0.12345873384929706;
    msg.vz = 0.9358695383375631;
    msg.p = 0.31435847989768884;
    msg.q = 0.0164992005744794;
    msg.r = 0.4986637213887045;
    msg.svx = 0.04744329984881257;
    msg.svy = 0.6849557470147303;
    msg.svz = 0.5326482061151966;

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
    msg.setTimeStamp(0.2960026758929697);
    msg.setSource(59231U);
    msg.setSourceEntity(137U);
    msg.setDestination(54923U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("ATEGSXNQIGVHLRNWYWMHFYADMDKLTRJDXEPUAMGEVULZJNHFQYATIWYOOJPUTFRUUVZQGOITVSOOGCCEDCOREREVHNBPHRCYXTQAIKXIWBKBPKSEPKAQZRGAVHTOTPKSDGZTJCKJUKSWSRZILPMBANKFBIYWFWQXIQDPNESXDCWFZEJVCZMXHBLQZZHQPLSCTVHHEWFYMIGZF");
    msg.op = 195U;
    msg.lat = 0.9959209874381661;
    msg.lon = 0.7075394047073768;
    msg.height = 0.07493661089173764;
    msg.x = 0.2028991873117526;
    msg.y = 0.7689826412482978;
    msg.z = 0.14413952645007788;
    msg.phi = 0.708300506379917;
    msg.theta = 0.012295867516593617;
    msg.psi = 0.04810525675295041;
    msg.vx = 0.501445147235942;
    msg.vy = 0.6572305520680481;
    msg.vz = 0.044095432670065104;
    msg.p = 0.43125788691839084;
    msg.q = 0.22988859415020835;
    msg.r = 0.715146662206638;
    msg.svx = 0.540009175765422;
    msg.svy = 0.9491799542623301;
    msg.svz = 0.17463233928110933;

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
    msg.setTimeStamp(0.802643093670238);
    msg.setSource(55004U);
    msg.setSourceEntity(245U);
    msg.setDestination(27427U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("ZEWHMSIQZJGKDOFVUVCCPDRSNLYBEHHMKYOQHKGOICXTWTDNLSGTVQVDICTFPGWZNRDNYOLHVRRRUOGKJHZWEBDGIBXXFPMBTYVAOJUCTHBAAQJVFUTNAAXPLUSJRPYZVYSPSYAXHOJLZMNIRSMOKDBWEVFVFTXDHWWLWLEUMLUIKQPYNTDKDSXZRCJGSCUGEJIEMQKFYQZEBZCZPSBEFXT");
    msg.type = 226U;
    msg.properties = 194U;
    msg.durations.assign("VAPILBEPTFZNISDDKCFVYVRWCGBWJLFOZZQCKUDFYZQGTPHPCGJJRMLXJGKWSPKYQWFMMEONUDTIVWYSMVUVANMCLUOULHKJZMOMMCTCOHDSGMOXEBBAWSGAHRYAULOQXYVGNFKQBQRSWIHHXUCEBFOJDTIAIRPYBELIPDNWOSKWGEHPYHNJURVJYHHSTEXEJGWAKZZRQ");
    msg.distances.assign("CIMBJEHJBLLSRWVFULGXRNODAPPFPAVOVVJGTLLLG");
    msg.actions.assign("NWRGNBWDBFRWDJEBYDGZWOIKGTNIANYFMULYPLHHEAFGSHOGSYUWADPAZGOXVQOTOMMEPWPUHBRUSQFIRSWHBWNPSOOVGAUXJVVVVELTKHWIVJFSTYESEICGKAPSRDRCQFOKBQLUEI");
    msg.fuel.assign("BUHQUFCRQBPAMQISJYLICYSKBCGGUDSKFZPWXCRMVJZNPDYHTHFJUQDTWVEDPSYEJCPKTEHNBUCXL");

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
    msg.setTimeStamp(0.3300424917410767);
    msg.setSource(28532U);
    msg.setSourceEntity(217U);
    msg.setDestination(15097U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("WIMKGYTXUNSKCOPGZMENSHRUVGXTAXFPLITZAXREXZIWBRFQJCCZORHDFONATEWDGAUWPVAOGGYYDRLBPFVVIWDQMMRZPULMSIKGE");
    msg.type = 36U;
    msg.properties = 179U;
    msg.durations.assign("PNYMZTHELNTNTONRHFHZDIGBVUNCQHDIRRRCVKEZZZPKAOXXOECCNIJKTGIDQJAUWATUJWCDZGBWPLNGXRSELDQLMBGIPUMTCQMMXSS");
    msg.distances.assign("VZDTEGSEHEPJIWRKAMKYMOSTRNUZBUDQRQUCSGOCXJSDNHKPNEYUGFJNDCCDSYWLMDJMORLQURTCXBAZFVEFPZXVHWCPHNWJBHRPUOKKSPOILNLICNZMLFLFIMYGYPKAYVQXDBSWORQJM");
    msg.actions.assign("HLJBXEVGTPNJTWCAYXSYPWDKRLU");
    msg.fuel.assign("QAYMUPFMUSLGHSEBSLBRZONJULNYTPFXPIFJMYAEENLMJDBKZAQBRJPWKFGSIPUZUOOACUXMMWHQFVGDIPARSGCZSNVLMGETIIZKRLIOQCHQTHUZNSKO");

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
    msg.setTimeStamp(0.6802545318008563);
    msg.setSource(16753U);
    msg.setSourceEntity(144U);
    msg.setDestination(48768U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("TOHCLMSFMRAQZDSDNDQNWDAFSZJFRILNSRTWTQXPNQSIBVVPAD");
    msg.type = 46U;
    msg.properties = 86U;
    msg.durations.assign("YUYOLFIWDOLPWXELKPNCEZPAICCVGXEVJPXXGFONWTNOSTGSZSMLENJZHUMUCSMOHGPHRDLNBUXYYASUQNTLIPK");
    msg.distances.assign("HNQGOFDJKKOWCTNKUOLOTXREPZHASYDXEKINMRHLUIARDIKLTYJACJMVOBVBMSEVXFAYPKCLZPWIUHFPZVLCNQWGSGYEPAOHUTNBWWUGPKMLJHDPBGYJVDTWYADAQNYJSXDZQVOTWOMASUUWRZECRMRFDRYQSHZGLDBEZQIHB");
    msg.actions.assign("DGMHIGDIOKVOBASIIGEQWNQXVXCFJEFMIVSPLLTOQGHXLZPYDVOWBVHDAFECRLRDHEOKPRUXCOVJIEFCMMGLSFBGIKRWUNTZYMSRCCYKMAYNZNQVPLTBLWXPTEIWDQGBC");
    msg.fuel.assign("JWOGAHMSHFOECLRUCNOVFKRXJMNAMXWMFEFVBOJICYXSUKLJOBQWLUEXDQVYRSCPGEADBLTXEGFGLEWISKUYFZZXIHPBAQTJP");

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
    msg.setTimeStamp(0.4719000055110395);
    msg.setSource(42319U);
    msg.setSourceEntity(157U);
    msg.setDestination(38328U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.4236289367143443;
    msg.lon = 0.5371484795041139;
    msg.depth = 0.44578849329536063;
    msg.roll = 0.5330805184447639;
    msg.pitch = 0.22257844266389393;
    msg.yaw = 0.004173477638859668;
    msg.rcp_time = 0.15204475888382807;
    msg.sid.assign("TTMKVAESTCGRRLUMPQNAWLWQMHOWGMGGTLUTEAARUCNWXUOTZQFQYADXEBNRYDAWBDAIEHWYKAVFKZDLBEYOSASFPDYSFQC");
    msg.s_type = 229U;

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
    msg.setTimeStamp(0.4501761904159528);
    msg.setSource(53548U);
    msg.setSourceEntity(93U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.4064599740407523;
    msg.lon = 0.7381577542318358;
    msg.depth = 0.4827973630321578;
    msg.roll = 0.6678006832777805;
    msg.pitch = 0.6415485538177613;
    msg.yaw = 0.4049696546876954;
    msg.rcp_time = 0.42522765893092396;
    msg.sid.assign("OSQQEOXDOKRCMGCEQMRUUJPOVXLINXPWAOLFICZTOECSTFLTMLIWGGUVMVNYAXAUDARNTJETSZDVPIPKGDWBBLSBTEJFRRACDNPBEDPVBYVHUQSWUJFYWEEJNWAKNHBULOZIMPRZPDQTZJQFEKXUGLZHQSIWCJYQJRIISSNWALXNVFZXYZKOKIHBHAGPSXHYELTCYFBVFBZKMHYSRM");
    msg.s_type = 77U;

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
    msg.setTimeStamp(0.37988574185671453);
    msg.setSource(28287U);
    msg.setSourceEntity(2U);
    msg.setDestination(41821U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.9009259984077309;
    msg.lon = 0.11356991837399444;
    msg.depth = 0.9305816104274609;
    msg.roll = 0.4807223041785167;
    msg.pitch = 0.6467601744929967;
    msg.yaw = 0.3144450451714078;
    msg.rcp_time = 0.06646513160679601;
    msg.sid.assign("VFLMNSCQJDERIXCHXSZNIUPSJZKIAHNASMQONKOQILJAFBOMWWAQIIBDEJCYCOACDIFGUORHNMPVHOETFTDMOCXGGRRSKAMOBXSSQCMBQRWTNZWPHLZPBWEBLXZYDNFGFUEJDHLUAYKXPMRAGKKGDRLRZKUKOGBZDYTTPYCUG");
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
    msg.setTimeStamp(0.42770329804969687);
    msg.setSource(36651U);
    msg.setSourceEntity(200U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(126U);
    msg.id.assign("TZKCQHFWQJEOAOOHSQNKYDXZPUJTLNLJIWCNKUGBB");
    msg.sensor_class.assign("QOEWUVUABVDPMZRVPXNFDGORPECSBIYUZMDMEMKLONCVMJQUYUWQCPGSYJNQQHWHTALIIOLRTGXSBXHSAOKCJMVFREDEOPDAZUWZLI");
    msg.lat = 0.9424854639639988;
    msg.lon = 0.42272247391367823;
    msg.alt = 0.7618269073827221;
    msg.heading = 0.29906788507703086;
    msg.data.assign("RBMMTFVLGEBZDKRUYWMYZQEVAAUKIZUNZFQLJHSIVWCKCAQPTLQGLWSEGVWWERBXIVJTWHPGDHFQRSYDDPNOKSFMXIJZBRSKYMTJSGWABAUUBYIXXGTAVMRNBZILKIGOLYCCHJPDLIPKRNP");

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
    msg.setTimeStamp(0.7327652470994875);
    msg.setSource(24590U);
    msg.setSourceEntity(200U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(25U);
    msg.id.assign("VHKIMXRPBBFNODSKNNSNBKITSTLZMITHFKL");
    msg.sensor_class.assign("WQQVILMRKZYUJJGTMABNDEQBBIASXOOMWFAUUHKOCCEYDYHYVIRRSHYUVDFUGINGPUCJGWECLJHOUFTSVYUZTCZIDIPVYHWQDTPTDRRRWKQJCAJEZMIXXFZFWEGCNUMFSALQGSOYZ");
    msg.lat = 0.6430674179908259;
    msg.lon = 0.010381434666613454;
    msg.alt = 0.8822426190401754;
    msg.heading = 0.8935476405958388;
    msg.data.assign("ASSQWZTAFTKNRCWQQTGGPEKCIVG");

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
    msg.setTimeStamp(0.9005743344341636);
    msg.setSource(29132U);
    msg.setSourceEntity(45U);
    msg.setDestination(12678U);
    msg.setDestinationEntity(68U);
    msg.id.assign("XKAHGJSHBTRLWWPCFXOQLFXJZCBKTSJSSUCIGGNVHNYZSPGMZPARFLMJZJEGUBNKJEMEDLZACQKCFBXZLTNIAXZAYYPDKFWTTEQESLKXBBBTVDQFWVDOEVFKRHYUHPDXIPNHLIW");
    msg.sensor_class.assign("TIVZYYPBEFGSDCWNLGTJITHTSDAVVFAOZIQHSUPPP");
    msg.lat = 0.20397058954164482;
    msg.lon = 0.03883981851881879;
    msg.alt = 0.9650769516706083;
    msg.heading = 0.6669500195965745;
    msg.data.assign("QZXKOZBWEWJLVWBILRHLCCYDOBSZQEWRUJPEMVMMXIVYOBTKLMUUXXMMGUVKJDDPKDBBFLAVROQZDTHHYFAAFAOARASANMEQIPQLAUGQBGOIWPYVVGLQIURHZJMTKHBMGIKEFEFABVIJFITXWLXCXKGZJQTPTYSOCSNSPRQUCPTDUCXPXESRQCSNVECSHMF");

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
    msg.setTimeStamp(0.665108575172632);
    msg.setSource(30580U);
    msg.setSourceEntity(200U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(248U);
    msg.id.assign("HLHOMNOGDCUGQHOLAEZHDBOLEYSUQWVDICVYQSARZYXPKWLMPSURIPEJNTMRSOKFKOEGGEZIQUZCOCMTCSNCAKWDNDXBBYQYSDHZTTJDTLRXPNVZJPMZXZFIPGIEMAGAXVQKTGXKKSMMWKFBQRJZUIQLBALQHNSAFYBAOPIYFLBLHXCIBWUKWCYVWGYCEVRNSMRPFJ");

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
    msg.setTimeStamp(0.8404621863505556);
    msg.setSource(38916U);
    msg.setSourceEntity(131U);
    msg.setDestination(36895U);
    msg.setDestinationEntity(213U);
    msg.id.assign("KQORPEYZRJEMENUXQNHWYFGSITJDMSMQABWNGCXQSQXUZHCPXIHYDKXZUEW");

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
    msg.setTimeStamp(0.765039653648987);
    msg.setSource(40397U);
    msg.setSourceEntity(152U);
    msg.setDestination(53348U);
    msg.setDestinationEntity(14U);
    msg.id.assign("FZJNCKKZNXAYJQHIGHXXGRFHNFVPIOBIMFUKAESJYFELZGCONCV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MXQIHPRIZNGCNLHLXVXXBESWQUEJGDWQZDFPVTXUKOQVGWGFBGWPFJLTDVNASCBRVFSODTRMFGLTBWGOVABRDGPAJOCNESRKSBVKZKUHRLLCHMYNIOYTVWJTTBVIYYOKUIZEAHFMWNTCRYIMDPPSLINDVKLUOSXHBIKOMBWZUEFOAHGPCQUEHXEXKFPZRXAYWYFMHECIDPAMJADQQHZIGOQTFAEUSJXTYJPMCUZCRZY");
    tmp_msg_0.feature_type = 167U;
    tmp_msg_0.rgb_red = 181U;
    tmp_msg_0.rgb_green = 117U;
    tmp_msg_0.rgb_blue = 224U;
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
    msg.setTimeStamp(0.3563368033630443);
    msg.setSource(13294U);
    msg.setSourceEntity(148U);
    msg.setDestination(2980U);
    msg.setDestinationEntity(199U);
    msg.id.assign("WBTDCPMLZXNDYTJLKWVLYTVRNLJRETVUKTKGPANJWSYXFFMMQZSNJDKKAVRQNIBZLIEWBYEQHVGVPQUEEIJDXZXSVYTEMWNGYSFPTYSFARRYHWBDBWNOAHDGSGXIHOZW");
    msg.feature_type = 172U;
    msg.rgb_red = 141U;
    msg.rgb_green = 23U;
    msg.rgb_blue = 141U;

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
    msg.setTimeStamp(0.07268343272209687);
    msg.setSource(50677U);
    msg.setSourceEntity(200U);
    msg.setDestination(40792U);
    msg.setDestinationEntity(105U);
    msg.id.assign("GACRXAWXCRQJWUSGISZJPNZUUNAMDVVQRBKVFJRLSPKIXCIDNASCEVBFOSNUZMEHKBCWBLTKHGWJFWYVTZPUDFEJDKPLHQYODNBJFRILPDRBFOYHJMKTGPRBEAKGOCBKMLABOPEYTLSTSZVZSOXTFKACOQUTTDHXMIZBZIAVHVCGQWOZPIDNUTSMGRYLWMIYUQYQDMFGXYQPWJXANCLEHQJHP");
    msg.feature_type = 120U;
    msg.rgb_red = 66U;
    msg.rgb_green = 25U;
    msg.rgb_blue = 253U;

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
    msg.setTimeStamp(0.48393871326460336);
    msg.setSource(33181U);
    msg.setSourceEntity(103U);
    msg.setDestination(13658U);
    msg.setDestinationEntity(230U);
    msg.id.assign("HUMJUTOQFRIGDSIUEAOVQPFNJHUVTYNKOXDHYPPQXFBMDQZPKZDXIMAEWDLEIAL");
    msg.feature_type = 77U;
    msg.rgb_red = 252U;
    msg.rgb_green = 20U;
    msg.rgb_blue = 214U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8353200104741823;
    tmp_msg_0.lon = 0.5513711756572024;
    tmp_msg_0.alt = 0.6487578928890535;
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
    msg.setTimeStamp(0.9289767200075352);
    msg.setSource(48792U);
    msg.setSourceEntity(148U);
    msg.setDestination(26726U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.41687096672122337;
    msg.lon = 0.985500565771979;
    msg.alt = 0.4713791206388206;

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
    msg.setTimeStamp(0.6186601044920513);
    msg.setSource(10110U);
    msg.setSourceEntity(88U);
    msg.setDestination(10732U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.3765091475370086;
    msg.lon = 0.8386203576351235;
    msg.alt = 0.3333372170279707;

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
    msg.setTimeStamp(0.6239109038087055);
    msg.setSource(33785U);
    msg.setSourceEntity(105U);
    msg.setDestination(43598U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.8291758592094418;
    msg.lon = 0.6110156194627552;
    msg.alt = 0.794116611311242;

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
    msg.setTimeStamp(0.6113382915903758);
    msg.setSource(42075U);
    msg.setSourceEntity(6U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(162U);
    msg.type = 85U;
    msg.id.assign("MNYFGVZYTXADKIWFFCUXBIGNSSTMJEIUZEMUNKYSYNKDYFXPXROVKEIBPULLKJGCEIUUWLMTTRQFBUCEZJTYFDVHIFVAGCQPQPFCMHMPHCBDYNLPOQZJIALSMDONBEECHEKVGWPLLGGRCRQOPNAWOFYZREVTVXSZARBKFJSUPZXAQUNSTTQASAHZMODBSVRKNITIB");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("OYAWODDNKKMBNJIXTVLNJWKKVJSFDAFKWDAPYUXYAEPVPZZOURMACDBLISCCPLGWQWVSTSDEIQEBUSHBNTXQIWEBJIARBOCYMGXNMSGRFHRFYUQFARLCJPDGQ");
    tmp_msg_0.max_speed = 0.4403339263281255;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.lat = 0.3980722197421427;
    tmp_msg_0.lon = 0.5207330409053755;
    tmp_msg_0.z = 0.7249663340433835;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.custom.assign("DQFHCOEONPNZHIAHELXDRRGWXISWQJJRGWQPMWATCUKRKQMFSNATOEQEAQRHRPMBNYBUHWVPOJFHLSOXTDUZZBTDXZIUZISLS");
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
    msg.setTimeStamp(0.5989193585444204);
    msg.setSource(64580U);
    msg.setSourceEntity(32U);
    msg.setDestination(29937U);
    msg.setDestinationEntity(59U);
    msg.type = 12U;
    msg.id.assign("DREAMKXJHBGTQZBYSSFTMFOUEADXVOQTVSYTJWENUAJMHTJRWWFFPGBHNWYCBQLZORZXTVJPNQJYFLZFYHMCSJKV");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 143U;
    tmp_msg_0.value = 0.79062558575763;
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
    msg.setTimeStamp(0.5149818852680644);
    msg.setSource(12340U);
    msg.setSourceEntity(230U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(48U);
    msg.type = 217U;
    msg.id.assign("WRWIBNQUJWBLYCBEHJKNKJGGHFPPOUCLUHKMAIXTAELCPYJ");
    IMC::HandPosIn tmp_msg_0;
    tmp_msg_0.type = 147U;
    tmp_msg_0.u_x = 0.1560782663618403;
    tmp_msg_0.u_y = 0.8274015815810168;
    tmp_msg_0.u_z = 0.8087614718292572;
    IMC::TrajectoryReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.r_x = 0.360659683537335;
    tmp_tmp_msg_0_0.r_y = 0.05369660567180001;
    tmp_tmp_msg_0_0.r_z = 0.6829484255744457;
    tmp_tmp_msg_0_0.v_x = 0.3446494249602212;
    tmp_tmp_msg_0_0.v_y = 0.5197170958437269;
    tmp_tmp_msg_0_0.v_z = 0.6600708042641031;
    tmp_tmp_msg_0_0.a_x = 0.9678985542968209;
    tmp_tmp_msg_0_0.a_y = 0.17353432395165624;
    tmp_tmp_msg_0_0.a_z = 0.6821029788751647;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5897757069224843);
    msg.setSource(36692U);
    msg.setSourceEntity(81U);
    msg.setDestination(36696U);
    msg.setDestinationEntity(54U);
    msg.localname.assign("TJDCCIFHRZASPUBAPPUIAQQLBPHLVDDWVCNRJGXNFQGEDYXFNZKUAPCAFMEUJCMGNLNIYLISHUULLBHVBJOSLGZDYGRYWDZZYOTYWMZBHVOAKQEIEWZMDCDKCWPYHQTSWUDJDZXFRKSNIJWQJCHUIKTHYWMAOPJWRQESNFXBBKNTOTVLTGVRVFRIKMITOGSSTZGJRLXAEPQYBPLOVOAQMKMFHVH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OXRUQTPHNPMJIAKGWBINMTFFYEIEUZWABFFOFXNKHVYCOSHDGDCONGQASHLUGLLFUOTPVCTPJTLXDJEKBMYEZAMIQIRPWZDHQ");
    tmp_msg_0.sys_type = 63U;
    tmp_msg_0.owner = 57771U;
    tmp_msg_0.lat = 0.09223368589255243;
    tmp_msg_0.lon = 0.1631766801605905;
    tmp_msg_0.height = 0.5690450736945276;
    tmp_msg_0.services.assign("KSFIYWKLGBEJQOXFJAEKHNPQ");
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
    msg.setTimeStamp(0.6029432065962176);
    msg.setSource(30872U);
    msg.setSourceEntity(220U);
    msg.setDestination(9942U);
    msg.setDestinationEntity(157U);
    msg.localname.assign("WDYUYMYPDAHJZPVZBNCLTRLNBZTEJPQHZEXTKRHGOSABMSAXIDEJLJICRUNGEQWZRMTFLIFTXJKSEWVNQKACNOUPBHAWVBYIOJWCNZGAMYXLJUYJWS");

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
    msg.setTimeStamp(0.5638380253628381);
    msg.setSource(35565U);
    msg.setSourceEntity(41U);
    msg.setDestination(43569U);
    msg.setDestinationEntity(17U);
    msg.localname.assign("TJUPXYMTEPXDMWOQDAHVHDPIELFFAWJNTPRXLBZSAIHIOIHOLJNZJGUZGEHUCDWNQSOHWOEPKRWXZSZCQQVFQIEYJRFTREYLJVFKJHNGBVTXTBKFAAIRMUDTGRNICGEYCBSVEMUUBCKWGMPETPNGRYWCKXSFSOWOUDZRJSBIAWDYVPUBFGXL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CKKFIZPUAFFWRQISJVHSYAQTFHBKJOCDDDRRBSXURLIAXXSABIFXWLEGHBKVBTNPEXDGHV");
    tmp_msg_0.sys_type = 173U;
    tmp_msg_0.owner = 53459U;
    tmp_msg_0.lat = 0.2870908535072424;
    tmp_msg_0.lon = 0.21966928512274686;
    tmp_msg_0.height = 0.277199966616284;
    tmp_msg_0.services.assign("TEBSRZUHMTJZLDHIKVGYAVBPOXUNAVYGVXROFYLROPUWPJTBKQMCIWDFQCRYGQRTZJKIYQP");
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
    msg.setTimeStamp(0.5895892617619688);
    msg.setSource(54528U);
    msg.setSourceEntity(82U);
    msg.setDestination(11775U);
    msg.setDestinationEntity(167U);
    msg.timeline.assign("TIGIKALEXDDFCGSJLOEVQFGHKQSQIRIOHJXIBZPRAUSJK");
    msg.predicate.assign("RCYHPECWTHDRNDRXYVBKEPNQWJZASPCGMADGWRVBKFXOQAFSIWRVSGHKHFRTJTRZ");
    msg.attributes.assign("YXPSZLFUZYMTTDALAZW");

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
    msg.setTimeStamp(0.276072309749789);
    msg.setSource(19984U);
    msg.setSourceEntity(190U);
    msg.setDestination(9832U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("DATSXWGWNBZ");
    msg.predicate.assign("ACCQHGQORNRMGVRAHJZCOVWYWVNHBXSQGZQZIPXTNRXHGTR");
    msg.attributes.assign("RFMLYJHWSJZOBUOWDTNXHHQONGCISHDPIPHUEWYNDGAACQDQUNBVTESSKEEZINMOKFQAXJCDKLNHUNVTMVIJNEKOXXXSBCKEEJIYJUJBPKMYKRBLYVFGPZRYMFKDBLGBWIZSQTNTUAJZPBDHMRTGGZLIUXQFOC");

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
    msg.setTimeStamp(0.3908762480414767);
    msg.setSource(54786U);
    msg.setSourceEntity(218U);
    msg.setDestination(55134U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("GOEPGXUJIKPPWFOKEWAMAHNWYLGSYLV");
    msg.predicate.assign("YMLTIGJJZAOGRTRGQTFUVYKPIDHQIRNFZVFWXTLKHMZFPKNIXWOEXSEZQBAHLFSXNKPSXDWEOKOAUMUYREDCYGCJOMRPQF");
    msg.attributes.assign("SQAINGSWYEQCBDXATRLSMMSTGOTLDZLALJBKRXOYZTOPUDGUILVNANRLEFUPBUIGQBHTZMVHFMHXCWCECBWFZJOSFEYKKSNFHYQCTOXSUXROJKJVMZZUFCZJNQVUAQDQZEUBADTEWOHMNJKEPVGUTRNFIWKCWPHRCOWSIJBGROFIKAEXLYBBEPAAVYWMKMPKHVYTJQDRVHMIRPCXGNDFHIVQDH");

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
    msg.setTimeStamp(0.062345618102662814);
    msg.setSource(11461U);
    msg.setSourceEntity(248U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(197U);
    msg.command = 34U;
    msg.goal_id.assign("VFWAQFSOOFXFLOQZKBTILKRGKHSNPXMKDTZZCLCFPEYIHZNWDXTCCPKGIBMPBLRSPTAMJZPUNLFAVLHVZUHHSHAUMZQITHQUEFJFODMZAXYUQMUTRDY");
    msg.goal_xml.assign("HKHWIPRROOPDQKEBLQQDPAWHYOCZSNISSZ");

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
    msg.setTimeStamp(0.038075475445697005);
    msg.setSource(38577U);
    msg.setSourceEntity(100U);
    msg.setDestination(60346U);
    msg.setDestinationEntity(32U);
    msg.command = 27U;
    msg.goal_id.assign("AURFDIIUBJQRLQJDDCABPVQFCEFMXECNUMGWQBITJLSFFUAXBUKTIJEYTPSMIILGYZPIZZUZMWPGDHHHPPSREXWCDVXXENASSQELUXLVNQQAJVOKRMXUUJBDTO");
    msg.goal_xml.assign("IOFFDKSXQUPUEKYZGSXWBNCOPVRXHGYYUNQA");

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
    msg.setTimeStamp(0.7642509786842401);
    msg.setSource(42229U);
    msg.setSourceEntity(153U);
    msg.setDestination(10208U);
    msg.setDestinationEntity(18U);
    msg.command = 161U;
    msg.goal_id.assign("VMATQVMFRVOXDEAQKHMDYZLCXGYTGWOLVQBDUEDAMWFGTUMKPHBCHFXJYEYDXHYYKPDZTOC");
    msg.goal_xml.assign("VIVPFDMSZHJYLSNWGSKFFOCCUMAQVHOFXUBRAKZAJHVBKADTZWLNLWLSYMSHPYXSPQOEOFCJVPQUYDYNUVELCTUZAAOFNFQXBEBXWILBJDYWJREUJDGGLRWKNTJZTYTHIXBQEGMPKJGSIQDQXCHVDOQHZBLVFONYTLCPTYPMDUIRHQFWJHPYHAKZOIOUJBIMUGCTMEEUXNIXGCRETNGZOAERNKVRWDBCGCWIWSRIRZTDVNMAMMXFLG");

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
    msg.setTimeStamp(0.41369989106580385);
    msg.setSource(37963U);
    msg.setSourceEntity(89U);
    msg.setDestination(64650U);
    msg.setDestinationEntity(237U);
    msg.op = 126U;
    msg.goal_id.assign("QKGSNQBFAWHLJUYRPGOOMSKGFSDSKNFVQEVWOUDMBXQQKOIRGTSCJLPDFTBNLPPUZCHIEQIFDNJLNSQSNTJYTIH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KYWMGLHTRWTOXCBNUMHNFATFJ");
    tmp_msg_0.predicate.assign("TVYGKWKEYLSHWVUPMVROPZZAVYVFRBXDMBIBNARHSMDWOTQIJPQJTVLRAYQMSNQSZNKORGZHWUULGHXTARPMFVJMPUPIYGCQHOMDAIZCCH");
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
    msg.setTimeStamp(0.214761221770445);
    msg.setSource(24894U);
    msg.setSourceEntity(61U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(184U);
    msg.op = 18U;
    msg.goal_id.assign("RYEKZNHPRCIJLETNMCDCYNIHAPSLBQGKXSAXQCUBCQTXGLSDSXDMNVFCWMNXPCITLNJFFKJVGXLJEDYPEWKVJZWARRJLHUWIPYEJBFDGOXQTWTGAVAMPPWBYIFKHETGMSLHBJKDBVGTOWVHBOYYQARDCDMISZREEVURNKLGWYFOKXAWZVSKBUUIYMQPYCUHFQHXSVEPZFRMHQUGXNHMDDSOOFZATTBZFJMG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VPSPBRPYMMGSONFPHTXAWYNCERMNXLWEHHZTGMEQWSELPVFQDSCUSZDOROHUZGVFUNIAKEWGNJSZCMGWCBDESUZBDBFQYAPAFPNWHRKPKTIWHNTCDLKRXLVFKLYXCQEOZDKRYHJMWTIVDTKMPNELVXAMMDABZJNAXGHLBTHOZRGHVJ");
    tmp_msg_0.predicate.assign("DNIFEHNDNWYELXXOGRAJKQOAGVVAAYBGYJNLPIQKWBPMYCKJAPSTTOOFVQXQMPGVLHVRZDYUUIYIHUJVYTMNLHWMHUHRRNPXRZKWTESFCSLXUPVBWQXJKFSLCZFREZFYEGFMNZSPFJWJUOOYXZIHECNQZLO");
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
    msg.setTimeStamp(0.4361321848601597);
    msg.setSource(26407U);
    msg.setSourceEntity(73U);
    msg.setDestination(51405U);
    msg.setDestinationEntity(20U);
    msg.op = 2U;
    msg.goal_id.assign("GWXEFGKQDAXLBBOCNMITELYXDPMMXNJWKSXFIRBQND");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HNBRAAQXDQSLFEIQPYTATWFYLNEDFLVSGVRMCDBOKOEXEINWSRGGOPVWTHLLJZACFVPAKBEBQZALTOFOPMCGAPJECODQIKWHIRXGYZSJHBFSKCTVTSFGFKHABIGJLIJVXPXVUIZGEYMDKOUSIHJFNUPWDVAFDKBRC");
    tmp_msg_0.predicate.assign("JOVGXZXNXPHUWGSBWRFRQSFJSFLURCWITPZCHTFPNXRZIQUSDZCBDVKIYBNQSCVPN");
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
    msg.setTimeStamp(0.737329949686291);
    msg.setSource(51504U);
    msg.setSourceEntity(115U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(77U);
    msg.name.assign("OMGEDJSVZTMDLWJJVULDLEHZPBHBGNFXAPTYTQPZQIVKUCAEA");
    msg.attr_type = 93U;
    msg.min.assign("EIKNPIHQUNHHHFYVFZSQFRIKTIEULNMWYMAPTDSDWCCLFDRWNOG");
    msg.max.assign("RZCMJXLYVUHVBNNIYIWGSSBPNNXZTHFGUKJUAZPAMLUZUTDBCJGWGSBXYHCTHFMSBSKKXICTDIVLXQOYAZDRJBYLJNPGDJONGQUPPAYJHCVJWBPRXMNIQMBONVVDLOREYQYMLKXTXPSQASDIYWQHKHKMEWNMIFTUQS");

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
    msg.setTimeStamp(0.6709957859534526);
    msg.setSource(17736U);
    msg.setSourceEntity(159U);
    msg.setDestination(20968U);
    msg.setDestinationEntity(184U);
    msg.name.assign("LRLCGJQHTEFKFUOTZNOPJMJJDRCXHGYSUYTTSHKVFABOOBVWWFNE");
    msg.attr_type = 117U;
    msg.min.assign("TJOSQDRIHTORTFGLPWMLZAQWJCBXILWCGUDZYDDZXJUEKOVIHWITAEBTQAOIVWHXRCDXVNEMBEIONQBNDSGT");
    msg.max.assign("EDOMEASEGHMKBXEFMZTOKFBUZPGNAHQXOJJAFDILALGQWCQYVLJLEIVRMQTFBIYUTSUCZNMUXIAUMADLKJEYNJP");

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
    msg.setTimeStamp(0.14670563084566868);
    msg.setSource(59034U);
    msg.setSourceEntity(102U);
    msg.setDestination(52977U);
    msg.setDestinationEntity(192U);
    msg.name.assign("ODKPVDTSBGLOKAMHWNSXZUFMPZJOFBTXAXMARHGLQMHIBVTBJANXEKZXQBENQFPAFKDURXYGGFGQWVNGDOACCCVLNUPUYYMEDRHERPVHYVHWTLJQZIWLUVMUIGSZIECLNESUXKCKLGMQVYKYQFWMRTXDIAUCVBDHJBTACSUHTTYODIWRXSDICKBIRYKZXYQELOUETSSDZWAJJPLBZOSQEMR");
    msg.attr_type = 13U;
    msg.min.assign("ZVKZVTLZKF");
    msg.max.assign("MLVDJSRGEKDOLHRVUDRYPVKPSILTPBZUMMBIANAKDQSQMQQOAVNBYIRDKWIFQZXDWVMAXSOLQTGBXROXFICONFXCHEPFWUBYOERWYVHVGPKHLBZJIUNTPIYSGNZECTYGYLLEKHOLANVCHANRUDGORQKJMZGHAWWFKDLPNLCIBUGJBTOXHFCWJYQNTKOFJACXVSJIBKFCERDGAESAQMRMWPUECCJZZENHHX");

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
    msg.setTimeStamp(0.43862467699988383);
    msg.setSource(48173U);
    msg.setSourceEntity(37U);
    msg.setDestination(16142U);
    msg.setDestinationEntity(189U);
    msg.timeline.assign("KWWKRZLKEOUPAOAUPLTSCSTJOKPHMIYYXHXBRCKXLKCXQAWCTDDIOSMHZMGZUQINEYNSIJSANEZUEXWHQDLDQJLYNAGBZMJRHQKTIJTHRPRPBEGNSDECVITVTTRWRTCDJMLCFBIVPXORVWDXYHGGPLHYFEYNBALQIARPHZDAXTSWQCSCSOJYUZH");
    msg.predicate.assign("KLIPJQJISQAHZWVRTMDCIGIIJCCXWSMTEULWWUMORNRDBEKDOIIZZKDEVQTZULVFDYGNQZMVOBFBFYIAXTYOXSWB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZKMUSEUXPHWEIXFMCKDWSXTAUHVYWOFADJNHFQKVGBAIFUMGCBTDPGOFEXCVDICPCHDUVAWHOLYGTZCCLPHLFZJOUNGPNLTWJQNXXQJUENDKVLVZBEBWKAQNAEHOLITUCPDMWSTMGGLKRNIHYQMX");
    tmp_msg_0.attr_type = 91U;
    tmp_msg_0.min.assign("AQIIOVMJUIYJEFBAKFMOCPZCLIYPAWGSQGKVWQZOJDXHFEOWWVCTTANYPWGEHPBGTNFLRICSEAVTFJNSLDGNVKHUVYTDSVJZSRVKUUYGSQBHIXWVDQNFOPAOKMUEUPLXMQZKGRBQXLHBJAMCRZZBFZRJPOYYRLLSEJQATBPHWRPLXHMGJMIMHNZWNWFADOUD");
    tmp_msg_0.max.assign("XZBRRUFNPJLWMWCAWTUCGHARTNVGVNHOSIFRNNRWHOHCJQXFLYMOMUPCDMPFRNGEALXDZLSBJXXPBJSIBJXIJTSTBSTLXQWRPKQUPUAJOTUBEWHDDZOBTAGWGGILEVCLDMEPYBFFROKVDSOEBVDQMZIKKLASZLZJTCYHOANMEOVCVIHYQKHPYXIEQEKDKYCRKYQJUJXYHVQKXUZZIZGSTZIISMYPQWPUNMTVLNFBEGOWDADFRFAQKHY");
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
    msg.setTimeStamp(0.8355841786866415);
    msg.setSource(20920U);
    msg.setSourceEntity(175U);
    msg.setDestination(22760U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("VYSGJXFOCUWZQLNTZUREVOJBWWTKSSWABXHICEDAFYFMVGBEMMDPNHXJDGXEWIYLGTUBFCLHXOIJYAQVAOMYGMDTTKRQUKLNRNUCWKOCNJIHSFWBACCPRZLVNDOJEBZSHPUXLFMIDYWLEQMZQNFKNTUZKGGJIDKTKPUISEPDPRVRPSZGRHVGBUZQWBTUYAQAKRJDGRCDFIVEMCSNBOAATHKNWXVOLRYFAPCSZ");
    msg.predicate.assign("FFXOSXSNCONFDZXSEVHXVDQFKKANPHUTABUQUOARQGOJXMYIPPIJHXUWRBKCXTSIGATUH");

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
    msg.setTimeStamp(0.7772368437388247);
    msg.setSource(50401U);
    msg.setSourceEntity(248U);
    msg.setDestination(41568U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("FOZOWSFIFWPXIWCGTLOCYTESXNBJKYENYAGOXODAD");
    msg.predicate.assign("FTMMQGRKPYSDRVTHOTWOAYGLPJSOCOYVCYCFFIUBNUAUNBTSHVSXBVNRHNIGEGJMYPJQAGIADQAIDEXZXOQIIEZCWKOXHFYKYWLXWXUHDZLPVDARWDKYQCLKEGJERHEXJLLWTBSTOBQ");

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
    msg.setTimeStamp(0.6825374958455961);
    msg.setSource(42503U);
    msg.setSourceEntity(162U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(13U);
    msg.reactor.assign("PDUDCPKLHQVII");

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
    msg.setTimeStamp(0.10718376246968675);
    msg.setSource(62337U);
    msg.setSourceEntity(6U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(3U);
    msg.reactor.assign("CDUURNLERNUYNPUFTBUESJVSSZKTBJPHSKYEDYRVWBKBTMSOCAIINIRHLNUHZPDTAYIPAWEFMONWWZUVZLDVKHTOKCLNACDZPLYGCFVQVEXEMGXQXJZDBSQQONVWPEQUQDBSFGRPRTMQLXWWEYXJFZDDJIMYRJUXCXFRGATOAUTLWJPGBDMIIGCPFAXHBBOYKLKOTZYHFCHYNAPQJSGAWBNRKQQCVKWHAEMOIMRJFOVCLZTFJVXKMM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JVCUHTPRJLXBFKOCSANAAKOMZHCWOSYHSLFQVCCVFASFWQKNLRUGDMGNWBSEPTJXYUKQBTVJEIBZBHLJRTJVGEZFNC");
    tmp_msg_0.predicate.assign("NPTYJANFDUFQVOYTUVWZANMVTBCJXHDGZYTMMBEIWR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VAMNWEMWEWUHTLBRPZMDSLQTVJGRJKHPIHYIQXNAYKJFGLGUOCUNDYSXWOYSCFZSSXHQJBSAADTQXAOJCFUHIUJYZHQBGGRKYEZISZLHZ");
    tmp_tmp_msg_0_0.attr_type = 127U;
    tmp_tmp_msg_0_0.min.assign("HRIDMHFEPIYTNMUMLZYXMXATFLUOWKUJFZTDXFWKWXCCIQEVGKWELVFNHRKCDJXO");
    tmp_tmp_msg_0_0.max.assign("IYNAGSZYXPLGNXGSVUKYFOALDDHNPDDKKMOMJQCZAIVXPMRYJZIOWNXVFBHPVUFWDLBQMYJFNOJRSWQLQOFEBEPLSKUDRRVVHCLIBRSLENLFGX");
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
    msg.setTimeStamp(0.3410853101743774);
    msg.setSource(6993U);
    msg.setSourceEntity(246U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(251U);
    msg.reactor.assign("NQNZANJQMTIOKRLVXVLEFWTEXRKTHHIAXEBMBBSJTWEJQGIVYQLFPGZZEUUSFSUCHPBYVPUJVOQPOAQWKSUDSKLWPFCUBWYMPOFEGCQKW");

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
    msg.setTimeStamp(0.7773118777960024);
    msg.setSource(29048U);
    msg.setSourceEntity(53U);
    msg.setDestination(25954U);
    msg.setDestinationEntity(215U);
    msg.topic.assign("KFJZSLUMGCFGNEHAIVJTGKWZCWMFJJKHUMXWTRLBRZVYHSMPOVNHKWXGIIXIVFPUJBTFWADBBCYLOIOOUDRGSTGLOVNWTMFXTFNFGXQMLCJNRWYNKHCDLXDDWDESGBVABQTZPQQGXKKRUZNLOBQAUYDONVIAPYL");
    msg.data.assign("XDPGUMCSZTWEMINQVJTEAOYWV");

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
    msg.setTimeStamp(0.45553626303052985);
    msg.setSource(1258U);
    msg.setSourceEntity(165U);
    msg.setDestination(11244U);
    msg.setDestinationEntity(205U);
    msg.topic.assign("QRLONFHHBMKQPOZNBNAIVALSXOHYSBQRXUJEVGZQQJTFIIKKJFTHJCDCWXGVKXUTTPBHSLAUAGGBWWQOOMJJZMMRQRDVZYHLWYUHNQONPVCJDMKRFBLAGDT");
    msg.data.assign("ZASVOIPBVRNDLNMVJDTLPOKFBECPPIDATYUPRKKPDXTRDBUENGERRHOQTFKHAWBDFEIHYMLHXXASNEYYRNHUHES");

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
    msg.setTimeStamp(0.2828468385063315);
    msg.setSource(41383U);
    msg.setSourceEntity(132U);
    msg.setDestination(48093U);
    msg.setDestinationEntity(1U);
    msg.topic.assign("CMYFPVHBKRAYEAWXRCKZWEUQGEDCGHNGLLVXCYWJRUCHTNADQJQXQAFDNOSPAWMNQXDHJLHZEAPGIILL");
    msg.data.assign("VQFMSKCZAFYWBKNRMXUEDMEPKGYQQR");

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
    msg.setTimeStamp(0.8267629956428449);
    msg.setSource(43591U);
    msg.setSourceEntity(134U);
    msg.setDestination(25054U);
    msg.setDestinationEntity(124U);
    msg.frameid = 189U;
    const signed char tmp_msg_0[] = {6, -24, 35, 75, -97, 1, -86, -79, 7, -14, -87, 63, -103, -60, -85, 70, 114, 106, -80, -127, 85, -124, -68, -39, -108, 34, -113, -102, 41, -119, 83, -68, -124, -49, 0, -40, -84, 77, -48, 65, 7, -80, 125, -125, -50, 101, -100, -75, -45, 87, -39, -11, -103, 8, -21, 111, 62, -51, 70, -37, 113, -13, 88, -43, 2, 66, -6, 41, -11, -112, 120, 47, -86, -68, -73, 32, 63, 34, -52, 75, -79, 118, -86, 119, -102, -105, 117, 44, -64, 90, 73, -16, 84, -31, 76, -40, 25, 93, -66, -105, 126, 107, 99, -47, -95, 116, -65, 101, 32, 110, -88, 0, 38, -113, 109, -40, -48, -75, -4, 31, 39, -93, 21, -58, -45, -120, -26, 112, 107, 44, -108, -33, 95, -7, 89, 41, 15, -107, -39, 121, -123, 69, -106, 113, -112, 15, -77, -55, -87, -80, 11, -100, 48, 22, 21, 120, 62, 82, 30, 27, 106, 12, 80, 54, -15, -75, -47, -14, -74, 39, -57, 14, 55, 113, -96, 56, 79, -23, -16, -81, 57, -23, -74, 50, 114, -72, 35};
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
    msg.setTimeStamp(0.02282423445775983);
    msg.setSource(21545U);
    msg.setSourceEntity(222U);
    msg.setDestination(25826U);
    msg.setDestinationEntity(176U);
    msg.frameid = 123U;
    const signed char tmp_msg_0[] = {36, 79, -53, -18, -17, -64, -38, -121, 104, 114, 108, 5, -2, 104, -108, -107, -88, 48, -125, 100, 54, 80, -46, 64, -46, -17, 81, -12, 51, -74, -84, -120, 62, -15, -116, 33, 99, 47, -42, 27, -10, -38, 52, -70, -84, 38, 24, 54, 74, -105, 57, 96, -93, 22, 76, 96, 4, -64, 22, 58, 60, -8, -79, -56, -66, -45, 104, 82, 32, -83, -30, -124, -14, 97, 21, 52, 97, -46, -64, 119, 94, 64, -127, -122, 12, -20, -22, 100, -71, -77, -119, 27, 15, 72, 94, 58, -9, -115, 67, 68, 104, 16, -45, -72, -51, 52, -24, -38, -19, -119, -65, -43, -8, -68, 0, -60, -17, -11, -13, 118, 67, 121, -44, 74, -53, 19, -91, -43, -49, 118, -35, -105, -123, 72, 4, 22, 14, -96, 46, -17, 29, 13, 66, 84, -102, 69, -55, -4, -43, 118, -84, 95, -3, 51, 77, -83, 101, -89, -106, 64, 48, 20, -93, 21, 95, -31, 97, -73, -111, -53, 64, -82, -37, -114, -84, -90, 26, -54, -30, -111, -3, -19, 76, -3, -92, 51, -117, 103, -127, 101, 93, -37};
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
    msg.setTimeStamp(0.5303183498950131);
    msg.setSource(30579U);
    msg.setSourceEntity(121U);
    msg.setDestination(3935U);
    msg.setDestinationEntity(101U);
    msg.frameid = 215U;
    const signed char tmp_msg_0[] = {80, -118, -51, 117, 93, 78, -64, -2, 94, 42, 40, 54, 22, -16, 55, -100, 38, 21, -118, -96, -13, 73, 59, 98, -33, -94, -33, -49, 109, -16, -98, 7, -78, 49, 18, -96, 113, 90, -126, 111, -56, 59, -75, -71, 36, -13, -30, 84, 23, -10, 108, -78, 61, -24, 123, -4, 41, 47, -113, -107, 69, 27, 25, 30, -42, -9, 89, -108, 90, -105, -34, 63, -104, -105, -38, 35, -38, -103, -49, -1, 122, 24, 60, -70, -15, -114, -10, 115, 31, -124, -34, 13, 7, -2, -127, 40, -48, 44, -32, 41, -61, 106, 76, -95, -44, 7, -13, -52, 41, -41, 103, -112, 106, 93, 113, -86, 27, -57, -21, -65, 29, 102, -32, -90, 41, -92, -34, -7, 55, -67, -98, 31, -112, 21, 2, -113, -72, 97, 73, -16, -40, -121, 19, -73};
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
    msg.setTimeStamp(0.19653969396517945);
    msg.setSource(13755U);
    msg.setSourceEntity(91U);
    msg.setDestination(48503U);
    msg.setDestinationEntity(104U);
    msg.fps = 194U;
    msg.quality = 120U;
    msg.reps = 136U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.09158367647205001);
    msg.setSource(56817U);
    msg.setSourceEntity(189U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(156U);
    msg.fps = 59U;
    msg.quality = 160U;
    msg.reps = 126U;
    msg.tsize = 163U;

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
    msg.setTimeStamp(0.3079185202555891);
    msg.setSource(21452U);
    msg.setSourceEntity(110U);
    msg.setDestination(38886U);
    msg.setDestinationEntity(65U);
    msg.fps = 205U;
    msg.quality = 51U;
    msg.reps = 181U;
    msg.tsize = 42U;

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
    msg.setTimeStamp(0.6348618575644565);
    msg.setSource(49996U);
    msg.setSourceEntity(129U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.5356889009299494;
    msg.lon = 0.3682935824611163;
    msg.depth = 71U;
    msg.speed = 0.7451669858254565;
    msg.psi = 0.3619756493146675;

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
    msg.setTimeStamp(0.008019585724468814);
    msg.setSource(48414U);
    msg.setSourceEntity(254U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.868435799633614;
    msg.lon = 0.026686994934724817;
    msg.depth = 75U;
    msg.speed = 0.5280293276817535;
    msg.psi = 0.14781980365880032;

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
    msg.setTimeStamp(0.17138459153082575);
    msg.setSource(17554U);
    msg.setSourceEntity(157U);
    msg.setDestination(7771U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.730708466299868;
    msg.lon = 0.3239137777146357;
    msg.depth = 124U;
    msg.speed = 0.4929218815789762;
    msg.psi = 0.3202403170753597;

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
    msg.setTimeStamp(0.5205044969256648);
    msg.setSource(3020U);
    msg.setSourceEntity(19U);
    msg.setDestination(63387U);
    msg.setDestinationEntity(210U);
    msg.label.assign("LPYVBALZNWKJXHRMZHVZYSSHUGCATYGAIILYXZLGSSR");
    msg.lat = 0.8761709009102228;
    msg.lon = 0.5817918937041078;
    msg.z = 0.3303925429622947;
    msg.z_units = 133U;
    msg.cog = 0.4779485060837545;
    msg.sog = 0.8377583007153806;

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
    msg.setTimeStamp(0.8833407218345478);
    msg.setSource(35373U);
    msg.setSourceEntity(232U);
    msg.setDestination(23105U);
    msg.setDestinationEntity(109U);
    msg.label.assign("IASHUCEFOLJUKUWSYYPDNGWZLSKWCRSTOBCGMDGGSEESKBIQHXLGZPNFVSIMBPFMOLGNEMKVDLJBSULDQPORTFMZQVTOZIHNYJFJPAJNBTCVSHIZARQKRKAXJZWTULBQZFMZRZYRHWNFPEWYWXGBJZDKTOLEHEQDJEVDDCAHPPKKWNVLAXMMYGRXCPTJBAQEIDAVHECUXOVBNRXOFYIAYXTXSYAGNYOFWXUJTUUHKMUROHLBCIC");
    msg.lat = 0.861232923327754;
    msg.lon = 0.70284508620164;
    msg.z = 0.4940281021717843;
    msg.z_units = 173U;
    msg.cog = 0.21220437690611893;
    msg.sog = 0.8008343152998306;

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
    msg.setTimeStamp(0.5194868318507639);
    msg.setSource(2957U);
    msg.setSourceEntity(180U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(190U);
    msg.label.assign("HWNDCORFBZHFURJUKOKDGKBGSODHYXQBXSHZZVNJERMKHLMFAJWWYFRABJIAIUCPDXANLUYICSRSWQUQXYNEATIXRIQJECAMBSCPAKFTEJZIFODNTEMMVYILCMYRUDKUSPQWPQNMXPOTWDYGHTMIJFAEXOCDOMBFKZLGQVHECPGNTISPLHM");
    msg.lat = 0.3139106962432858;
    msg.lon = 0.6706962059192708;
    msg.z = 0.3923487922393726;
    msg.z_units = 110U;
    msg.cog = 0.8568606971540479;
    msg.sog = 0.6485429848445533;

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
    msg.setTimeStamp(0.9781734224453473);
    msg.setSource(47577U);
    msg.setSourceEntity(49U);
    msg.setDestination(2570U);
    msg.setDestinationEntity(188U);
    msg.name.assign("MVLVQDTYJQPRQFMVKXIKSNIOADMNWVOYXLFBZSZORUUVLHEZTAHBBXKMTDXTJEUWJESWWMXMQLYXNTFJEPDUSAPWBDCCGKNXYZGBEDRCRJQWZBGGQJIPHRXCKSSJAZBX");
    msg.value.assign("ROQVVTYWMGRTPCZOBBIEJXSQBQXDBKKMVPBJQAVYWJTLZHIMVRPDUGAPJZGSANDVQJKZNGJIBZOBASFLUAQIXMSMWYIFYIRNZBMXAJTUREJNVTGQCUMHXKHSSOKBWNRYFFANESTZXDHZLONRWSF");

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
    msg.setTimeStamp(0.8022034678121084);
    msg.setSource(36631U);
    msg.setSourceEntity(210U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ERTIBCUDRGWDCPOHDVDFGOTUWBGERMBKNAIGMAVXVLIVJPGKBIXVPRVXZFPICLOAXWEWQEFIJRQBLUYLWACZTZEFK");
    msg.value.assign("LJZUKZPPIBTLSXMYVTRXTGDUSRCOBBCQNLOESRFFBKWMNLVSBDGVFPUBZGEYIQSQUUXINSPXNMWJKFJFEDQSUDLHRUZYAEOGENHIJKWMNIPYZDUJPOFNLPLARHWZLWQXBLARCEQSEFHMFBPWOKCFGKX");

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
    msg.setTimeStamp(0.6368202096076967);
    msg.setSource(1342U);
    msg.setSourceEntity(87U);
    msg.setDestination(64269U);
    msg.setDestinationEntity(175U);
    msg.name.assign("BXCZYDANLOJRMADSWUMUFYLWLUBRCFEBHSIYSMRYUPNWXKAOCXAGRXFNTIQEKPMFJDQHPOJMSQEEBWHMBAJDORSR");
    msg.value.assign("KBUULGNEPGCDUBYWXZSRAMFOYTLLMKBDGZWVDGHSHOOQKFIYOZEAXJCXVGDJLPYROILCUUHHPI");

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
    msg.setTimeStamp(0.38392555885653157);
    msg.setSource(44714U);
    msg.setSourceEntity(79U);
    msg.setDestination(29394U);
    msg.setDestinationEntity(60U);
    msg.name.assign("YOCHXNTBGTQAADYXEYKGAIMFPZRSMTCSNSWKQQDHLGLKPDQLMHSZHTERTEPPLCGDGQQTSNBUMIWBTVNRYJAKLKODYQBOGD");

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
    msg.setTimeStamp(0.6360124540293729);
    msg.setSource(21367U);
    msg.setSourceEntity(92U);
    msg.setDestination(26368U);
    msg.setDestinationEntity(205U);
    msg.name.assign("WDJJNRWJVWKNTYITJGKDLPSUUTCGNBNREATNVAFEVPGJEIDGMIMUXZESZMPRRWOONNPFXKBWUIDIPCWXAQSHQXDAGDZKJQVBMFJVZRZPBGUDNQBHZWTKBGXULFHSHXCSHIBDMYEFKRJFVUOFCAZQWPCGYEW");

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
    msg.setTimeStamp(0.5528972514881064);
    msg.setSource(26301U);
    msg.setSourceEntity(12U);
    msg.setDestination(59832U);
    msg.setDestinationEntity(42U);
    msg.name.assign("MKYCBQSLDGJJGBVFWLRBYHJWDRZAVHVWNLZOGXWUCBRHDBIESFWISNJUOIUCYDGMSQUXQKMVTIWGICBKTNIULDFVAHNTHZEEYPMYOELKCTQIXMCZAAXCEZDFTUHIVORVSPEPUPPODK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RZHBTLFZMGQEUBPSKDYPILRLBHQTYSQMQBVIGSJZOVICHGLAMRUVQIUBMRGIQSRDJFJPGVXOEHIUWBWNUWEVYTPP");
    tmp_msg_0.value.assign("ZFGNGTSFTOLHUVGBVOEDJKHDYIROBLJAVWDNFYUOCJUDURMXBQTLXSBGXTYOWLSTECNKSNMRJEEWQREZZBUQEIEKEKDAGIO");
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
    msg.setTimeStamp(0.9403430848796532);
    msg.setSource(19751U);
    msg.setSourceEntity(161U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(205U);
    msg.name.assign("SCSQFJIYEMM");
    msg.visibility.assign("LEEWZMMGKLNRKHHZOMEQCOMVTNLLWQIWNZDTQARBKUDNLLYWVDEAIFCPOGKMNWDSHTJZYZNOVSELFWVWJCBCDRHFSASCCAIOAIKZIHSTUYTZVNXUGBYQAFBEBYTOUHYIJNSJQWBTUEGPRSFCHUAOXNQVGVVXFPEMLGBQTVGMMXYJPXDFIAURCTOCJDEBCXONJYWPHDRTBMGVQRLPSKFFGKZXG");
    msg.scope.assign("BQVCSUGWLDPRWUQGTNGPAVSJLLWMHCJSPSOJYFLVYZLKUABPZJEYZDXYGXYESTOAWWDITTHJXJVFKRYUELARDRPTKZLTQSQDOKONCESYWILBUDBDNHRPXCEBTUCHMCVMFMGMIOGXYMRBEFHSAVKZPBAMAZI");

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
    msg.setTimeStamp(0.4862974135655186);
    msg.setSource(55429U);
    msg.setSourceEntity(18U);
    msg.setDestination(17000U);
    msg.setDestinationEntity(185U);
    msg.name.assign("WOHCYCVDZORXKPQMRRBWMJIGNICXKYZDNURHSQPPKILFKHMDBIUZDJOFPQHUYIHLFLBHLFDGHSMSGHTEZKQPBGJXDWYUXXIQUTOINDSQZQEUELERQXYRPCRPFAJQMESWKOTVRECKEJPFTACYZUVTWGHJYWSGASATMIVMZZBGXRZGTAUYTWCJBHMVXPFPYTWZ");
    msg.visibility.assign("TZBLQQYKLSDCWYXZMIROIQCWZMXLUFWFYROTKUQOBGMBRKSTCTIHJFVWZOQZLGDFTTCPMIBYLZJJAXAROODNUBKVVHPYKSYQGTNEJENFVQOZHDTNZDIJNHWSERXKOPNHGUWENIACTHUWSUGHLMBKEAZUFOQIDHWGWLRGDFCQHTGKCWMSNPPPVDAMR");
    msg.scope.assign("GSUGNVROXRIUBZXUYJRZTOWOMVSCVCYJLCTPETAYEWCNFAQYKFHWGDZXAQDXPETSSCJEFYDTVHMNCQMHJQ");

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
    msg.setTimeStamp(0.0031364472662418486);
    msg.setSource(55204U);
    msg.setSourceEntity(138U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(3U);
    msg.name.assign("KVXAWDROFKOQOVEUHBPMUIMRFWHWEHPYRNRXATYUTEUPVAWDJLHBYELUYNCYWIICPUEBJUOGHKGJXJLQNGLZGZHAIENQSAOMLFVXOSBPGQMSKWDTIDSCDLEQLMS");
    msg.visibility.assign("CHFVFUJSAJYDZITJSVZEFWOTXHBYEGPXFIJSFRSEHSXMXTCWUVQJABZRFQVMDKQYCIWQMHXGLMLGTPYANXSKUIBTGQCCDSKXBKWGRJEYFCLUWBNOCNYQVKKALVDERTVYMRWUSLWJZGBADDHOEIHEPCDHRQYVNQZGPKAZLHQPUGLJORIABIXUEMRWYGZKTWNOFEPUPLOIUPCNRTGEX");
    msg.scope.assign("TPAKECJGQVLSYXXGNTYPRIBANEKQMPXOGZBLUFRVLCSOFJCNLJMYSJQVJQEEBHSDTFHOMNONSQNMEMPZAEGDROGTDHVXFYHENFTYYIIJLKFBWDQWSCCZVWGXJFSUOBTPRZ");

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
    msg.setTimeStamp(0.9113499372684943);
    msg.setSource(33566U);
    msg.setSourceEntity(223U);
    msg.setDestination(62007U);
    msg.setDestinationEntity(58U);
    msg.name.assign("SDQMKIOIJSCTXGKBMSCHHWSMPBZYRN");

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
    msg.setTimeStamp(0.033390715813805705);
    msg.setSource(56509U);
    msg.setSourceEntity(254U);
    msg.setDestination(57786U);
    msg.setDestinationEntity(215U);
    msg.name.assign("MOHGCESCLIMGTLUKMYFLZMDGQVORLASVHZMAABCNMBSLDOHKPBEEEWPNMQAXDHCCNBMZVRGXPSFEXYOFWWHTDKFAOHFTZHIEOWJQGWKIXXVRYULNTINWGZFRSIURUFUWZPKQMBIBZIGHXEVBYT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ONWCFPFXSSKVLMKWAEJRZKMPGZHXIKOMAITCRUOMCQQYXJZEQAZEEBQVNTCVZFYZSSGBQDNLIBTVFPJVXXLDGDCYRHIKADNUIYTLHVQINGXARKGCUKT");
    tmp_msg_0.value.assign("RASTPTFKFGJLKDVXPNNPVARGZCUQPKXCJVMBOMBZRBCGLYQGSHCJWKTRUASJVZXYASQETMUOWQEARNRUGQQFXERYQZIWDFYYIGKNEXDHSOVNIREPDCMGITBBILTNCCWDPLFYSVXBFOZDSFWLYNZYXFIVARHHGLRKQOLAULOOPEVHIFMXWPEESCUNEQOMLADNHKFTMSLZJJJIVUW");
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
    msg.setTimeStamp(0.29339662840094516);
    msg.setSource(19435U);
    msg.setSourceEntity(52U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(234U);
    msg.name.assign("EHMPQZKMFUMGBUIZLYCKGYIUBHEFPIZRNNKPLPYVARFAUHXVQWRWXESOMCPRRACIFXWNFG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FBUVZWRHYLKIRVZTDCWSNMGHTOLAPNLBPCBECANHGDOPVFXDQHDBKYRUGADTVMBUKWSJKNZDEEGRSIOFPGPFWIKINWXHXVUUMCYHZDLAVCSPTYIKGEXAJWMIRGHVOSJQFLRTUFZOCTIGAJNHDNKGESMVEYQIWMQVFQWRZKAFWJNOQESAICMOBBQBUSDKYHLCJJCAHRBYXOYVOZJKFQDNTZLPURNTZQCOFRQGJMLTJSUBY");
    tmp_msg_0.value.assign("IHJERFZCRAELBDMIEXKYZSSUABNDVDEACDBVMBGUUTVPPTETWQIGBMQEMHIIWXVPFSWKMYJBZTHDPCHGNPVOTZYXKCKFWLOLVITKSWRKHGGLQJFVVWCEKAXCJDAHPRRQRNJUFXEFRGSGUAGGDQQXODZPQXRE");
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
    msg.setTimeStamp(0.5968393941638811);
    msg.setSource(9956U);
    msg.setSourceEntity(166U);
    msg.setDestination(1220U);
    msg.setDestinationEntity(50U);
    msg.name.assign("PYIINAWCXEYRQEYZYRKBWUFOTMKITJSYTCMKTOWMVPRDHEUIZNQRDXVRAVWZJSFIZPSMXYVPECAALZDCXFYEPKSMFFMMHJKKEDLPXXOHWLVAYZTUQVQRWJBUBBDOXGLAJFDNORTOHUAFMJGKXLNRPFNBQOHCTETWFHUCBLGNSGQTZSGCZASIDMFXCILJQDZWCGLUKKUBWQVO");

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
    msg.setTimeStamp(0.39140878805979895);
    msg.setSource(19438U);
    msg.setSourceEntity(88U);
    msg.setDestination(18976U);
    msg.setDestinationEntity(153U);
    msg.name.assign("MXYORCTQPHBLWAOTDGEFHEMDHNJVKSKPGWSN");

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
    msg.setTimeStamp(0.5915084059684589);
    msg.setSource(27052U);
    msg.setSourceEntity(227U);
    msg.setDestination(25793U);
    msg.setDestinationEntity(189U);
    msg.name.assign("MHZTMKRNCYONWDPQDBNGGTRB");

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
    msg.setTimeStamp(0.7008731130063568);
    msg.setSource(59530U);
    msg.setSourceEntity(215U);
    msg.setDestination(17849U);
    msg.setDestinationEntity(13U);
    msg.timeout = 1072394437U;

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
    msg.setTimeStamp(0.9148203846192017);
    msg.setSource(15115U);
    msg.setSourceEntity(99U);
    msg.setDestination(9246U);
    msg.setDestinationEntity(132U);
    msg.timeout = 3562533112U;

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
    msg.setTimeStamp(0.3915858588172587);
    msg.setSource(36443U);
    msg.setSourceEntity(232U);
    msg.setDestination(23316U);
    msg.setDestinationEntity(248U);
    msg.timeout = 604935775U;

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
    msg.setTimeStamp(0.3713285403898243);
    msg.setSource(17173U);
    msg.setSourceEntity(186U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(204U);
    msg.sessid = 953843924U;

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
    msg.setTimeStamp(0.48569599337420155);
    msg.setSource(653U);
    msg.setSourceEntity(41U);
    msg.setDestination(13763U);
    msg.setDestinationEntity(173U);
    msg.sessid = 1143087080U;

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
    msg.setTimeStamp(0.6304025774626014);
    msg.setSource(54879U);
    msg.setSourceEntity(83U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(172U);
    msg.sessid = 2785927035U;

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
    msg.setTimeStamp(0.8427669956529554);
    msg.setSource(11485U);
    msg.setSourceEntity(77U);
    msg.setDestination(4072U);
    msg.setDestinationEntity(198U);
    msg.sessid = 2737857821U;
    msg.messages.assign("JEUVGOJEGVCGWNFYDKTYERMHYNHSKDKOQJSLUIWXSPSPNJRPGZJZZIWOOUFXDDRYUQMEICDBBBVDJGBKORFVTYXAFPKUUIPZXUASBQVOQPSWUGMMNXDZKRJVTVTZNMTWVGYMOPAECAHVLBZDJHIQGHHCLWWYMAGQTEUNFMBYBMTZRFAKXLXFRTSWAXLQPAHHTLDBDSENWWINB");

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
    msg.setTimeStamp(0.43899365235226295);
    msg.setSource(58658U);
    msg.setSourceEntity(150U);
    msg.setDestination(4888U);
    msg.setDestinationEntity(245U);
    msg.sessid = 3080119005U;
    msg.messages.assign("VBKKXRMDGFUEDMRZDKLKGRXHASJHUOIJLZIOUAGOOLOFGDXSIULWBQTEWXMNINPQXPWTP");

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
    msg.setTimeStamp(0.8602385918965578);
    msg.setSource(18949U);
    msg.setSourceEntity(185U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(24U);
    msg.sessid = 1069038576U;
    msg.messages.assign("ZIAUNERGLGMOTXAFXHSGKASJEOKWEMVVFVZBNZOQGCADGAJCFMHDYNRWUDERWDPUZRQYQPQIBQVXBIVJFJKLSWEPSNLCOJTFU");

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
    msg.setTimeStamp(0.9563484681118043);
    msg.setSource(2047U);
    msg.setSourceEntity(166U);
    msg.setDestination(49069U);
    msg.setDestinationEntity(205U);
    msg.sessid = 2743638195U;

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
    msg.setTimeStamp(0.8459456817564073);
    msg.setSource(45149U);
    msg.setSourceEntity(253U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(110U);
    msg.sessid = 3080553630U;

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
    msg.setTimeStamp(0.4135973463800704);
    msg.setSource(1722U);
    msg.setSourceEntity(186U);
    msg.setDestination(42711U);
    msg.setDestinationEntity(64U);
    msg.sessid = 1104993399U;

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
    msg.setTimeStamp(0.8046929633535734);
    msg.setSource(196U);
    msg.setSourceEntity(21U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(53U);
    msg.sessid = 244801119U;
    msg.status = 180U;

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
    msg.setTimeStamp(0.9880675939921526);
    msg.setSource(29198U);
    msg.setSourceEntity(141U);
    msg.setDestination(17631U);
    msg.setDestinationEntity(156U);
    msg.sessid = 2220367782U;
    msg.status = 207U;

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
    msg.setTimeStamp(0.2635499407105285);
    msg.setSource(47947U);
    msg.setSourceEntity(12U);
    msg.setDestination(15565U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2189102378U;
    msg.status = 114U;

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
    msg.setTimeStamp(0.7825877863194828);
    msg.setSource(43927U);
    msg.setSourceEntity(63U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(4U);
    msg.name.assign("YCVJETZSEMLSVYQOCUMLMCBNSBGPRVUNWWDBLWDNTIJWESLVAHVLYPRTMPQFHUKPIXNUIVLWTKARVSJQRQODBE");

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
    msg.setTimeStamp(0.507127268148916);
    msg.setSource(14457U);
    msg.setSourceEntity(111U);
    msg.setDestination(62180U);
    msg.setDestinationEntity(144U);
    msg.name.assign("TKJYNUIUXZZNEBPAOIZCYPCUNMWWEOMIYJNJMDILPQGTPGZXJZVKCPQTRBLGPEXRPCWG");

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
    msg.setTimeStamp(0.6863231880714761);
    msg.setSource(21091U);
    msg.setSourceEntity(225U);
    msg.setDestination(44254U);
    msg.setDestinationEntity(55U);
    msg.name.assign("KEOSKRCQQYJVJUXAFQYZNJSCMNQOLWWXVVVUIIRALPVSUBTOJIOSRAECZGQZKABPCRDACDHJGXDGMZPYDSXZDVBLPXNULYGHGZQSWRDHYXBCHNKNZOLDFOREHGEMCIQIFRZPBMXQXYJPETQUTHDTHBWIOMFLWJLIGFYERUTBNEMAJRLPTW");

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
    msg.setTimeStamp(0.45262210914396717);
    msg.setSource(24438U);
    msg.setSourceEntity(159U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GKGUXVHEYPNRABKYBTDMCXOKVOERELWOGPBZFEWVHXVBYDYLPRCRVGCLFNKHRHWWJHUCQDQJTFPLCFRDGVFUGFDJIXCPPAPACQSRGEZZVOHTZEATQLWEKFYOJIUNEXNZMJXQSWSAYGZQHIUUBADVYWMITQMDMMLSLHXLPCVJPLKOHOTBIAUZJFZDCTUWTJSSQCARXQXQNUTNYUMIOKMTNNFBJYDOARVSMPKESZIIIHIFZWEDNSSAXGKB");

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
    msg.setTimeStamp(0.198817034591096);
    msg.setSource(37224U);
    msg.setSourceEntity(162U);
    msg.setDestination(12160U);
    msg.setDestinationEntity(248U);
    msg.name.assign("DOOTLIXCPYCZTZCTGRYCDMHYPIBNPSMWWKEUTXXFIZVJIMLTBYBKAVJUZJOIPSLGNYXHKEGUPMCCRESGCOTHBYXJNNQJXMUBQQXMYWZZNFNWTARBJJNPIEWNSQPFRQFRSJFGASSSFQERUVIWHYDCQEMGOYTSKXKELPLDJVXCKWLMDEUCIWNUZBNLVVGDAU");

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
    msg.setTimeStamp(0.936425720671062);
    msg.setSource(3471U);
    msg.setSourceEntity(243U);
    msg.setDestination(36645U);
    msg.setDestinationEntity(166U);
    msg.name.assign("FZIYUILEKZW");

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
    msg.setTimeStamp(0.6094763772663495);
    msg.setSource(33399U);
    msg.setSourceEntity(239U);
    msg.setDestination(46439U);
    msg.setDestinationEntity(241U);
    msg.type = 53U;
    msg.error.assign("ICYOWTBEKHFURMKOLKUXSGPHSBWUHR");

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
    msg.setTimeStamp(0.5906586664037116);
    msg.setSource(2006U);
    msg.setSourceEntity(80U);
    msg.setDestination(34731U);
    msg.setDestinationEntity(217U);
    msg.type = 254U;
    msg.error.assign("MFYBQMGIJYVDWMJONTFOAMSMVRYVCFJBYSVQPQIPADQKSHZVVEDWQTFDXCLIGPBPXOHHCBHLRRTPIPWFUSNBTKRXMKOYUHTUESAKOJBPXLGRZJJZDMEFCHTLYLZEWMKTKFTSDGCRTJJFOWVCVPJKNSEZUQZUYLFXCQVNGXSMESRRNHIJDCARGNEFWZBGNODKGXAYUUEQLKWHGABAPKREHBLWIZZZONWDAY");

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
    msg.setTimeStamp(0.41516891973694203);
    msg.setSource(63032U);
    msg.setSourceEntity(57U);
    msg.setDestination(743U);
    msg.setDestinationEntity(188U);
    msg.type = 48U;
    msg.error.assign("BJJGHTLFNNRKXXYDKPZILQFR");

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
    msg.setTimeStamp(0.871028216899274);
    msg.setSource(14948U);
    msg.setSourceEntity(89U);
    msg.setDestination(47469U);
    msg.setDestinationEntity(20U);
    msg.seq = 52831U;
    msg.sys_dst.assign("BPYNBJEKCFVBEMTKCRHWQQFOCXAMWVPGCLPPBPUZJMQHNXLJFPLRUHTILMOFUQWVZXCGHMNZRLZFTEBZSDIKHWIUYQUDAVFXSQEVRJYGKCSNLLTHKSCDQXBNHUGIBMLOVWKWDPGJOXJRMYSYUPURLWIFISOFUZCJBOXAECIDSVIDRJYXJESSDZDTVBRYRNKPWAMHOVIIFODGADOTNWXAQUMAXKYNWAO");
    msg.flags = 76U;
    const signed char tmp_msg_0[] = {-3, 13, -50, 68, -4, 27, 124, -62, -54, 116, -16, 117, 75, 122, 117, 121, -96, 21, -87, 121, 23, 11, -84, -109, 116, -114, -118, 24, -19, -107, -27, 124, 94, -12, -76, 92, 92, 82, 35, 77, 103, -125, 104, -53, 51, -13, 55, -110, 6, -4, 110, 109, -114, -75, 96, 7, -99, 104, -43, -122, 121, -68, 92, -18, 55, -116, -8, 72, -115, 24, 96, -95, -8, -115, -55, -10, -28, -90, 35, 110, -88, 125, -36, -32, -117, 74, 116, 68, -52, -123, -27, 20, -46, -23, 1, -85, -6, 41, 60, 108, 65, 22, 11, 23, 27, -41, -89, 63, 11, -25, 7, -118, -127, -3, -33, -10, 76, 92, 26, -38, 82, -34, 117, -83, -61, -83, 124, -103, 83, -108, 124, -10, -102, 78, 106, -117, -83, 12, -36, 32, 97, 86, -28, 57, -102, -108, -26, -103, 25, -78, -57, -91, -38, 54, -77, -60, 116, -27, -37, -83, -27, -14, -63, -109, -3, -124, -68, -128, 32, 50, -6, 56, -64, -8, 96, -54, 73, 37, -95, 98, -99, -43, 24, -91, -27, -32, -101, -56, -41, 106, -63, 23, 20, -52, -34, -3, -73, 18, 124, 98, 72, 40, -53, -90, -124, 121, 100, 119, 48, -39, 61, 111, -113, 84, 104, 115, -95, -106, -124, 11, -92, -93, -71, 103, 100, 49, 69, -34, 118, 39, 95, 57, 57, -38, 7, -118, 27, -127, 22, -37, -14};
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
    msg.setTimeStamp(0.7973662639190099);
    msg.setSource(546U);
    msg.setSourceEntity(197U);
    msg.setDestination(4480U);
    msg.setDestinationEntity(214U);
    msg.seq = 54171U;
    msg.sys_dst.assign("JRCCAMHYFMSJJFGUXTMXGOLFUPAGSJSBZSOHDKBCLWTRBEUZBGWRAEENODHKMBPZARLZYLWTGVGMLKUMSFPSFBQONDMY");
    msg.flags = 112U;
    const signed char tmp_msg_0[] = {-115, 83, -44, 52, 4, -11, 75, 105, 31, 62, -64, -32, -122, 97, 123, -123, -71, -71};
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
    msg.setTimeStamp(0.8499646297210818);
    msg.setSource(8060U);
    msg.setSourceEntity(53U);
    msg.setDestination(34846U);
    msg.setDestinationEntity(41U);
    msg.seq = 3754U;
    msg.sys_dst.assign("KNUHVOZQPYHDOXFFDKXSKHIYLSZLKXHQTBF");
    msg.flags = 86U;
    const signed char tmp_msg_0[] = {75, -38, 91, 61, -59, 92, 60, 97, 74, 13, -10, 126, 97, 83, -91, 36, -72, -108, 103};
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
    msg.setTimeStamp(0.11315686772830114);
    msg.setSource(50094U);
    msg.setSourceEntity(123U);
    msg.setDestination(29840U);
    msg.setDestinationEntity(67U);
    msg.sys_src.assign("DATNDRCPRSCQAQGJVXRYPSCIXIHESYJKEJBDFLGOBKNGTMSYPGFXNXAJPUHSTUXHYMAZZCHEKOZYVSRBKOHSNFDMMMDQZQDRNRDUHLOQAGWIAPEOWVXUJYEKNZJMXIYAXSADUB");
    msg.sys_dst.assign("RNFFMOPWPGUELAMLJLGUFAJVSAHGYMAWCTAEIGIBDVZMIPQKXFFXJBERMAWANOZXOZXPWUZBIUQGNAYMKLNVIOIEEDWLXUTCRGHTBXCCIDHXQCNSJLUBPYHMWBYYSJMSGRYEPTFZIDGJVKTPCDRRSUSQOPVPRQHRTSN");
    msg.flags = 50U;
    const signed char tmp_msg_0[] = {-11, 43, -91, -35, -23, -95, 122, 72, 54, 12, 77, 105, -23, -13, 116, -106, -50, 51, -76, -7, 96, -65, -53, -81, 90, 109, -71, 109, -10, -89, -34, 64, 87, -99, -92, 19, 15, -74, -32, 66, -54, -116, 7, 65, -103, 70, 31, -82, 48, -90, -73, -89, -66, -8, -53, -61, -35, 3, 43, 58, -103, -35, 26, -45, 121, 64, -9, -71, -55, 27, 92, 48, -4, -95, 32, -48, -66, 18, 46, 46, -70, -89, -50, -85, -87, 81, -44, 22, -8, -93, 112, -48, -11, 29, 72, 53, 65, 109, 60, -34, -115, -84, 14, -80, 67, 9, 75, 59, 62, -57, -52, -111, -51, -105, -84, 126, -24, 66, -58, -117, -84, -8, -50, -120, 51};
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
    msg.setTimeStamp(0.9911827359699554);
    msg.setSource(58188U);
    msg.setSourceEntity(175U);
    msg.setDestination(45737U);
    msg.setDestinationEntity(217U);
    msg.sys_src.assign("VOWMKCOIZBJNQGYJYGGYZTMJTEQLAXFXYZMCIYPZOVRWKFATPUDPOOFNVGPBUZGIKEKQVFPRWWBQVGIDUHXZQISYLUHSRTXABAXWRPCMRLDUDYVAI");
    msg.sys_dst.assign("UIGLLHRMCDESZLPQHRZYOFATXDSWMDQNKETQEHXMURPNCFJVHQAXVYWDXCTXFGVJDKSSZTXKMTEVVENRYYUVIEGXHSWLHZIORZPCCAKBUNOXRVSEDTIGBRYOKUHGXWBILJJJABWMPQTUWNNRQBBHFPYLXDZNMDQCFDYGUKFPTBBJCTJEQUARLFWUCEKGHYWOTOQIPLKLANJV");
    msg.flags = 135U;
    const signed char tmp_msg_0[] = {-117, 48, 105, -116, 94, 8, -65, 71, -43, 117, 107, -52, -1, 105, -86, 89, -4, -51, 14, 31, -8, 121, 28, 76, 113, 3, 20, -50, 34, -7, 122, 41, 23, 56, 126, -89, -107, 71, 109, -101, 9, -50, -39, 40, -36, 81, 6, 115, -49, -124, -69, -18, -40, -53, -25, -49, -26, 94, 114, 43, 27, 0, -45, 104, -13, -65, 71, -64, -91, 88, 61, -114, -48, -87, 45, -82, 79, -97, 29, 11, 72, -54, 95, -14, 76, -58, 17, 60, 29, -42, -94, -16, -88, -94, 34, -3, -48, -29, -116, -5, -30, 95, 87, -93, 58, -52, -111, -116, -54, -104, -123, -103, -49, -78, 28, 28, -3, -89, -107, 43, -47, -96, -34, -93, 19, -10, -86, -29, 119, 40, 40, -120, 7, 60, 112, -37, -97, 86, -43, -49, 71, -57, -98, -67, 58, 63, 88, -49, -29, 13, 11, 120, 26, 15, -68, 102, -23, 8, -29, 123, -58, -43, 111, -14, -8, 44, -114, 77, 103, 74, 48, -70, 69, 10, -54, -125, -99, -43, 38, 72, -6, 7, 115, -117, 36, 106, -72, -100, 99, 14, -50, -34, 87, 80, -111, 5, -48, -106, 20, 26, 98, -83, -34, 49, -28, 39, 73, 57, 12, 124, -128, -43, 15, -7, -127, -125, -78, 15};
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
    msg.setTimeStamp(0.004635456182913944);
    msg.setSource(26030U);
    msg.setSourceEntity(182U);
    msg.setDestination(65102U);
    msg.setDestinationEntity(82U);
    msg.sys_src.assign("KJAAFDJDPIYFLXZTDDGGFAZFSLUOLAYIJKGFKPJFZXTGHCNEMNKHQYUCKBVXDWATNLLDSORZEOOUNBRLMWWMCQXOAZOHOHQNDEIIJBWQVHXRBOCXFGGWDPIGNVMETRDSNRTSTVLESPREQHQEERSMYDTPCQETSKMXGAOIPUUCIKLQEHNSFWKHICHFAGMYLACPYUNMXNTUXQ");
    msg.sys_dst.assign("YRGLKAZVFGMVITPECQTGRRRMISWCEPNUPADPDHCDPHNZYQJOTCWSUXILUJGNWOPOPLJNKOXFAYTRYAUKACYYJFKZMFNOZRHUWSDRFEBUEYLENSIVVLBPGZHVZCLNORJWEABLSXRCQZFQIEWGJMBTHQAJZJLZSEXMHSGIYICCTQGSFUIBTYTLVVJGIRBMEBX");
    msg.flags = 17U;
    const signed char tmp_msg_0[] = {-68, -106, -92, 8, 56, 87, -32, 111, -47, -59, 117, 84, 108, 90, 74, 116, 14, -117, 41, 16, 8, 94, -75, 125, 75, 31, -103, 94, -82, -84, 76, -75, -124, 117, -85, 28, -72};
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
    msg.setTimeStamp(0.6121239691203635);
    msg.setSource(60328U);
    msg.setSourceEntity(63U);
    msg.setDestination(31165U);
    msg.setDestinationEntity(169U);
    msg.seq = 36927U;
    msg.value = 31U;
    msg.error.assign("WCTQVGIEIKTASXXOQLQZQVZGXPJIXATXPZTMFNLDCFOUGVKDUWBOPKCFZVAB");

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
    msg.setTimeStamp(0.2788518893151747);
    msg.setSource(28391U);
    msg.setSourceEntity(235U);
    msg.setDestination(3141U);
    msg.setDestinationEntity(185U);
    msg.seq = 10332U;
    msg.value = 122U;
    msg.error.assign("CKCKBJMHYIXLJGYBLXNWRBJENZXVOEJMPUVDPCVMW");

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
    msg.setTimeStamp(0.18919502854735015);
    msg.setSource(47210U);
    msg.setSourceEntity(74U);
    msg.setDestination(1379U);
    msg.setDestinationEntity(111U);
    msg.seq = 47788U;
    msg.value = 22U;
    msg.error.assign("WFLTIJCMQQTAETKMYCSLNUVPPLYFCMPWBKPKOOBAMCHYFWETBRMZUHQJYGMDGCTYDNBKDHJLQYJNQGIYNUIA");

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
    msg.setTimeStamp(0.28627691270242495);
    msg.setSource(38227U);
    msg.setSourceEntity(56U);
    msg.setDestination(42461U);
    msg.setDestinationEntity(65U);
    msg.seq = 45579U;
    msg.sys.assign("KVJLEQBJNSGNTNASDKFMJRFXQXEXABLHENYPWZOSESVKORJVGBOLQYPFVGUFETTGMHAFBCIQLXVBMUATCJJOUKXYORRGVIGDMDGQDHYWHPYFYEHEPKFZIZSUIKNYWFQAFVMCZXRBVJSOEAWWLALZBYVLHIATUOKCPQ");
    msg.value = 0.5961387742217147;

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
    msg.setTimeStamp(0.9224138101329711);
    msg.setSource(2938U);
    msg.setSourceEntity(33U);
    msg.setDestination(3552U);
    msg.setDestinationEntity(213U);
    msg.seq = 33483U;
    msg.sys.assign("SSSDDJICWLTTHNV");
    msg.value = 0.9544534525897167;

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
    msg.setTimeStamp(0.5837984546594123);
    msg.setSource(7789U);
    msg.setSourceEntity(127U);
    msg.setDestination(17864U);
    msg.setDestinationEntity(163U);
    msg.seq = 15064U;
    msg.sys.assign("SIPTWOVUKGEDAOCAIYBBABELMUPSJIGHZFUUCRRWQTDVUOJKVMMEZSVNEPPQCNFPBLIAMJOFZSDJHWEZYEQOPIXKBNYBTDLLSRIUCKFJJABWQSCQLXVUIEXTZNMXCMFHWCJNALGYQGJDWJURZMUEAXXHRYYEQTVUHSNWZBOWSPQNKSNKVNLXOGZXXELPNMGGCGGARHOFHTZZPRFQTTDFCDBBRGVKHDJAFLFMIMXKRIYITYSLW");
    msg.value = 0.44313166284638805;

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
    msg.setTimeStamp(0.21218783891384807);
    msg.setSource(44646U);
    msg.setSourceEntity(63U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(103U);
    msg.seq = 42823U;
    msg.sys_dst.assign("KGVRDDLJSSEJRPFZHSZHUZTIIZGTKDIDXMRYYZLLKWOGQHTKFPYTDBREOVSSXNSWUQIVOFFOQHUUNWQRKQBJZBAAHXMMCKNUGCPFUTDLNAOLJFFDYTRQ");
    msg.timeout = 0.6151897411409505;

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
    msg.setTimeStamp(0.8515418484142555);
    msg.setSource(14183U);
    msg.setSourceEntity(247U);
    msg.setDestination(58350U);
    msg.setDestinationEntity(68U);
    msg.seq = 16745U;
    msg.sys_dst.assign("DUPZNSJSMGCQQJVZCMHQJJADHDUWFMSLFZWXUNRVFZZURMRDETATQBVOQQXFDTREFBLERBSGBWFUQXTWTMIGLPTWAVYNKAFMCZKZAXDLXYUGRXHBKXDLATHYMBJRFKEOENXHWODNJIDLAESGEPSPYZTPYBLSNKIIIYUOLMDMKYGICVJJRLYWHWROCJEQPVSRPNVCGACLUUSTHTBXWHAOJYGKSXCMNNWKIOQGKKB");
    msg.timeout = 0.9835143671550461;

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
    msg.setTimeStamp(0.882475488971008);
    msg.setSource(57141U);
    msg.setSourceEntity(207U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(248U);
    msg.seq = 13711U;
    msg.sys_dst.assign("UKJPOYVWTGRTHSXOOTSLDYFVEEBOHSOTYMPLFB");
    msg.timeout = 0.7853934598613592;

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
    msg.setTimeStamp(0.17129400383609095);
    msg.setSource(50812U);
    msg.setSourceEntity(238U);
    msg.setDestination(60246U);
    msg.setDestinationEntity(148U);
    msg.action = 33U;
    msg.longain = 0.21043061962392373;
    msg.latgain = 0.7483507733055598;
    msg.bondthick = 3519972895U;
    msg.leadgain = 0.9753536096765149;
    msg.deconflgain = 0.44637551877041737;

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
    msg.setTimeStamp(0.2016474285260047);
    msg.setSource(1690U);
    msg.setSourceEntity(10U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(242U);
    msg.action = 200U;
    msg.longain = 0.7479969201801372;
    msg.latgain = 0.005228260542442631;
    msg.bondthick = 2638234924U;
    msg.leadgain = 0.5012587774759978;
    msg.deconflgain = 0.5656811387826584;

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
    msg.setTimeStamp(0.8873680191770598);
    msg.setSource(46220U);
    msg.setSourceEntity(162U);
    msg.setDestination(63421U);
    msg.setDestinationEntity(84U);
    msg.action = 20U;
    msg.longain = 0.8531211946959659;
    msg.latgain = 0.2792278259144322;
    msg.bondthick = 1885086328U;
    msg.leadgain = 0.5401053424798994;
    msg.deconflgain = 0.7533409323693242;

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
    msg.setTimeStamp(0.2781765786598255);
    msg.setSource(2020U);
    msg.setSourceEntity(211U);
    msg.setDestination(12790U);
    msg.setDestinationEntity(32U);
    msg.err_mean = 0.5273690875200945;
    msg.dist_min_abs = 0.6051283485830397;
    msg.dist_min_mean = 0.7663591546228063;

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
    msg.setTimeStamp(0.4419964200173664);
    msg.setSource(55397U);
    msg.setSourceEntity(126U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(79U);
    msg.err_mean = 0.1803920766237742;
    msg.dist_min_abs = 0.1510389561023029;
    msg.dist_min_mean = 0.25419415358241326;

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
    msg.setTimeStamp(0.3075902077247493);
    msg.setSource(34992U);
    msg.setSourceEntity(99U);
    msg.setDestination(55499U);
    msg.setDestinationEntity(87U);
    msg.err_mean = 0.7753584742332275;
    msg.dist_min_abs = 0.07579045416743635;
    msg.dist_min_mean = 0.36918789791162987;

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
    msg.setTimeStamp(0.08554222952990609);
    msg.setSource(15914U);
    msg.setSourceEntity(131U);
    msg.setDestination(26735U);
    msg.setDestinationEntity(24U);
    msg.action = 62U;
    msg.lon_gain = 0.7154180492265405;
    msg.lat_gain = 0.13007797065264481;
    msg.bond_thick = 0.5008048549769051;
    msg.lead_gain = 0.38725126272089283;
    msg.deconfl_gain = 0.05354160858171941;
    msg.accel_switch_gain = 0.11177799007949929;
    msg.safe_dist = 0.1288368723958967;
    msg.deconflict_offset = 0.8853163719405839;
    msg.accel_safe_margin = 0.8667564626236004;
    msg.accel_lim_x = 0.3014667193827294;

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
    msg.setTimeStamp(0.46231415137952225);
    msg.setSource(62988U);
    msg.setSourceEntity(244U);
    msg.setDestination(29365U);
    msg.setDestinationEntity(19U);
    msg.action = 47U;
    msg.lon_gain = 0.6037079636303185;
    msg.lat_gain = 0.6789000758975113;
    msg.bond_thick = 0.15312776140351458;
    msg.lead_gain = 0.8459865463438139;
    msg.deconfl_gain = 0.34842518116325816;
    msg.accel_switch_gain = 0.44660794025971684;
    msg.safe_dist = 0.9101016497053853;
    msg.deconflict_offset = 0.5093092691817186;
    msg.accel_safe_margin = 0.7467022989154939;
    msg.accel_lim_x = 0.32036760429211797;

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
    msg.setTimeStamp(0.12297657707739895);
    msg.setSource(63025U);
    msg.setSourceEntity(91U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(107U);
    msg.action = 88U;
    msg.lon_gain = 0.5801166435697076;
    msg.lat_gain = 0.574057937183994;
    msg.bond_thick = 0.7760435540274845;
    msg.lead_gain = 0.3213442970295499;
    msg.deconfl_gain = 0.473268734132829;
    msg.accel_switch_gain = 0.6086775144130985;
    msg.safe_dist = 0.07371473671027762;
    msg.deconflict_offset = 0.44286447192354705;
    msg.accel_safe_margin = 0.6866840868760902;
    msg.accel_lim_x = 0.19541438927106403;

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
    msg.setTimeStamp(0.21752506603411914);
    msg.setSource(44069U);
    msg.setSourceEntity(106U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(193U);
    msg.type = 155U;
    msg.op = 83U;
    msg.err_mean = 0.810694861115021;
    msg.dist_min_abs = 0.16206968897160567;
    msg.dist_min_mean = 0.706256291017883;
    msg.roll_rate_mean = 0.9190615464803081;
    msg.time = 0.9355564560328311;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 38U;
    tmp_msg_0.lon_gain = 0.8719889600880106;
    tmp_msg_0.lat_gain = 0.7800129556666023;
    tmp_msg_0.bond_thick = 0.2600534534421022;
    tmp_msg_0.lead_gain = 0.03686408733293556;
    tmp_msg_0.deconfl_gain = 0.13246312268049487;
    tmp_msg_0.accel_switch_gain = 0.21325952902374112;
    tmp_msg_0.safe_dist = 0.23676809537639487;
    tmp_msg_0.deconflict_offset = 0.7176744034136397;
    tmp_msg_0.accel_safe_margin = 0.6427559719401041;
    tmp_msg_0.accel_lim_x = 0.694540805629515;
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
    msg.setTimeStamp(0.19519156448316066);
    msg.setSource(46121U);
    msg.setSourceEntity(228U);
    msg.setDestination(28712U);
    msg.setDestinationEntity(211U);
    msg.type = 65U;
    msg.op = 39U;
    msg.err_mean = 0.6889415368543066;
    msg.dist_min_abs = 0.5975604044173035;
    msg.dist_min_mean = 0.19756465669708745;
    msg.roll_rate_mean = 0.5551466881862174;
    msg.time = 0.37336713451163295;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 138U;
    tmp_msg_0.lon_gain = 0.8913681788273353;
    tmp_msg_0.lat_gain = 0.1091005644108215;
    tmp_msg_0.bond_thick = 0.032582790967397024;
    tmp_msg_0.lead_gain = 0.6328882432707809;
    tmp_msg_0.deconfl_gain = 0.9559172316510047;
    tmp_msg_0.accel_switch_gain = 0.7598348586007805;
    tmp_msg_0.safe_dist = 0.5924693390240607;
    tmp_msg_0.deconflict_offset = 0.7308736711031703;
    tmp_msg_0.accel_safe_margin = 0.537212456095693;
    tmp_msg_0.accel_lim_x = 0.2530038244937324;
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
    msg.setTimeStamp(0.9411415123304503);
    msg.setSource(19145U);
    msg.setSourceEntity(143U);
    msg.setDestination(50377U);
    msg.setDestinationEntity(196U);
    msg.type = 242U;
    msg.op = 83U;
    msg.err_mean = 0.47706299192714874;
    msg.dist_min_abs = 0.9589666174183851;
    msg.dist_min_mean = 0.029634410108118958;
    msg.roll_rate_mean = 0.6197661912220432;
    msg.time = 0.014495963235139131;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 75U;
    tmp_msg_0.lon_gain = 0.4451631912767342;
    tmp_msg_0.lat_gain = 0.6985934871809247;
    tmp_msg_0.bond_thick = 0.5642569468280989;
    tmp_msg_0.lead_gain = 0.30641588639661466;
    tmp_msg_0.deconfl_gain = 0.011934022923665633;
    tmp_msg_0.accel_switch_gain = 0.9166013396511269;
    tmp_msg_0.safe_dist = 0.26897018981784937;
    tmp_msg_0.deconflict_offset = 0.7930644978767976;
    tmp_msg_0.accel_safe_margin = 0.26119013868870755;
    tmp_msg_0.accel_lim_x = 0.37806491821927135;
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
    msg.setTimeStamp(0.10005694929938491);
    msg.setSource(41311U);
    msg.setSourceEntity(57U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.5061151419295244;
    msg.lon = 0.8111841140135267;
    msg.eta = 989416734U;
    msg.duration = 19626U;

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
    msg.setTimeStamp(0.45525054706739787);
    msg.setSource(30572U);
    msg.setSourceEntity(118U);
    msg.setDestination(5337U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.6310966871413375;
    msg.lon = 0.9871472146235949;
    msg.eta = 1759407672U;
    msg.duration = 35277U;

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
    msg.setTimeStamp(0.7730992262302182);
    msg.setSource(58749U);
    msg.setSourceEntity(235U);
    msg.setDestination(11143U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.46111357570756784;
    msg.lon = 0.9339144945264191;
    msg.eta = 2470784479U;
    msg.duration = 49975U;

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
    msg.setTimeStamp(0.1917427524137182);
    msg.setSource(45636U);
    msg.setSourceEntity(4U);
    msg.setDestination(32772U);
    msg.setDestinationEntity(116U);
    msg.plan_id = 4274U;

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
    msg.setTimeStamp(0.6536829237771726);
    msg.setSource(13199U);
    msg.setSourceEntity(214U);
    msg.setDestination(30569U);
    msg.setDestinationEntity(228U);
    msg.plan_id = 9514U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6252694833687306;
    tmp_msg_0.lon = 0.5411520882949632;
    tmp_msg_0.eta = 2823988149U;
    tmp_msg_0.duration = 45894U;
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
    msg.setTimeStamp(0.993221928335516);
    msg.setSource(32299U);
    msg.setSourceEntity(88U);
    msg.setDestination(7540U);
    msg.setDestinationEntity(94U);
    msg.plan_id = 6362U;

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
    msg.setTimeStamp(0.8498674565556148);
    msg.setSource(60213U);
    msg.setSourceEntity(17U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(84U);
    msg.type = 207U;
    msg.command = 37U;
    msg.settings.assign("VFIBRLYENDWVGKFDSXLJJQSEYPCDBAGMRKOEIAOLBDQHBHQNFOT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27141U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.782017747440955;
    tmp_tmp_msg_0_0.lon = 0.33901413932553826;
    tmp_tmp_msg_0_0.eta = 1320687073U;
    tmp_tmp_msg_0_0.duration = 29229U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PHBFGIWEHVLPFNRQHJUETYYZZSOHHKRBXMDJLISIUSEHAUBVQMP");

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
    msg.setTimeStamp(0.9661091935399969);
    msg.setSource(36841U);
    msg.setSourceEntity(193U);
    msg.setDestination(48859U);
    msg.setDestinationEntity(92U);
    msg.type = 216U;
    msg.command = 87U;
    msg.settings.assign("JOOEVOXRLRUTDPGCMWNJIWIXCLHFDBNTTVVFAGTGHGGRVCCJANQDSFESQYAWLUMNLSHLQSPHMGINIASUDFSFFHXDTWXDCKYLJFCQSKTCXOQVXAOSUYQMNJOXPTPJCWAQHEBLUKDVIBXEFZPKBYIEAMRKMMLOIZBEDYGCZZICRRRKEWWESMZSEKBBDBYEFI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11991U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JDVLSLHBRKIXYKLTXZKHBFXRPUGSXCCZYFLCHCVBSHUMNPQAMTOWHDXNROLIKPXNGTHFWFOTCPLNEHGIBGEOYRNRQUPYYUWK");

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
    msg.setTimeStamp(0.1997182730972713);
    msg.setSource(60173U);
    msg.setSourceEntity(156U);
    msg.setDestination(52516U);
    msg.setDestinationEntity(187U);
    msg.type = 73U;
    msg.command = 171U;
    msg.settings.assign("BJZZQAEEGZOQLVKNLAUSKGMWUCIRXDGPZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1368U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MUZUQYLHZFOGKHSRORZBEQXIHEPNSRAACMPCDOHIIGVRGAMEQFLUVXKDPVZYNADYKPFRHXHYJSPNWNFMFGBQBDPTHLVXANJPWAXIUZPRIMYIYIYAKDSPHGUKXVZQNBLOFXBHJYKZNDRERCIMDMWZGXICWSACOPHWNLCMOROQDCXJTETKULRBTTUGWFWGEAUYSQOVCDQWBJJBTJQKLINVVOLETJWCTEEQYAKBTFFVFMBOW");

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
    msg.setTimeStamp(0.3648806038823692);
    msg.setSource(18907U);
    msg.setSourceEntity(226U);
    msg.setDestination(20743U);
    msg.setDestinationEntity(72U);
    msg.state = 196U;
    msg.plan_id = 52745U;
    msg.wpt_id = 139U;
    msg.settings_chk = 29525U;

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
    msg.setTimeStamp(0.4823770002776573);
    msg.setSource(14807U);
    msg.setSourceEntity(73U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(23U);
    msg.state = 249U;
    msg.plan_id = 63217U;
    msg.wpt_id = 2U;
    msg.settings_chk = 33012U;

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
    msg.setTimeStamp(0.3566695370404598);
    msg.setSource(15801U);
    msg.setSourceEntity(236U);
    msg.setDestination(40725U);
    msg.setDestinationEntity(139U);
    msg.state = 242U;
    msg.plan_id = 22166U;
    msg.wpt_id = 75U;
    msg.settings_chk = 11094U;

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
    msg.setTimeStamp(0.13822641676862724);
    msg.setSource(2186U);
    msg.setSourceEntity(171U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(78U);
    msg.uid = 147U;
    msg.frag_number = 26U;
    msg.num_frags = 246U;
    const signed char tmp_msg_0[] = {16, 40, -61, 124, -84, 14, 10, -9, -53, 24, 121, 23, -21, 4, -90, -128, 116, -98, -50, 8, 94, 19, -20, -16, 71, -107, 77, 92, 112, 66, 75, 115, 105, 113, 45, -41, 121, 98, -121, 47, 112, -107, -61, 88, -109, -16, -37, -87, -125, -22, 120, -87, -66, 68, 51, -71, 73, -46, -126, -43, 39, -57, 94, -24, -23, -69, -85, 103, 95, 87, 85, 64, 52, 83, 77, -36, -12, -62, -113, 27, -62, -52, 35, -28, 76, 37, -91, 27, 126, -11, -49, -25, -10, -110, -67, -43, 64, -80, 3, 103, 71, 72, 71, -96, 82, 13, -75, -43, 20, 81, -122, 52, -109, -77, -25, -112, -47, 95, -28, -21, -55, -95, 102, -29, 81, 56, -17, 16, 1, 104, -127, -54, -46, -18, 64, -99, -23, 80, 35, 81, 44, -56, 121, -43, -74, -83, 3, 10, -91, 54, 34, 109, -31, 4, -115, -12, -120, 23, 71, 34, -87, -5, -105, 23, -87, 77, 115, 90, -125, 65, -3, 31, 100, -69, 13, -41, 5};
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
    msg.setTimeStamp(0.9415011469442487);
    msg.setSource(54469U);
    msg.setSourceEntity(60U);
    msg.setDestination(17265U);
    msg.setDestinationEntity(254U);
    msg.uid = 116U;
    msg.frag_number = 15U;
    msg.num_frags = 248U;
    const signed char tmp_msg_0[] = {82, 31, 55, -9, -105, 83, -1, 84, -30, 14, 16, 13, -94, 50, -107, -35, 102, -24, -13, -36, -3, 92, 27, -77, -100, -23, -14, 5, -73, -18, -9, 4, 82, 66, -25, -75, 63, -61, 32, -39, -36, -102, 92};
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
    msg.setTimeStamp(0.7575634061547813);
    msg.setSource(28864U);
    msg.setSourceEntity(240U);
    msg.setDestination(6132U);
    msg.setDestinationEntity(159U);
    msg.uid = 118U;
    msg.frag_number = 184U;
    msg.num_frags = 194U;
    const signed char tmp_msg_0[] = {-88, -101, 53, -85, 37, -62, 45, 14, -25, 25, -10, 98, 3, -127, 37, -55, -97, 47, 5, -25, -71, -48, 23, -90, -112, -71, -107, -32, 13, -61, 97, -42, -45, 38, -45, 4, 17, 102, 114, 119, 89, 19, -5, 111, 98, 6, -102, 68, 40, 16, -7, 21, -63, -6, -120, -97, -7, -66, 52, 38, -52, 53, -106, -123, -57, -55, 39, -2, 64, -3, 110, -34, -125, 91, 38, 47, 41, -95, 102, 46, -60, 64, -10, -13, -45, 77, 18, 19, 106, 73, -82, -105, -88, -7, -77, -77, 49, 40, -108, 112, 107, -123, 89, -24, -33, 87, -30, -63, 13, 38, -47, 46, -56, 11, -94, 112, 102, -17, -62, 10, 122, 119, 27, -75, -90, 14, 77, 107, -107, -49, -91, -123, 105, -19, 75, 37, 53, -82, 50, 53, 64, -85, -15, -34, -123, -28, 29, -110, -24, -80, -121, 19, -77, -30, -108, 31, -85, -4, 1, -122, 125, 106, -37, 80, -116, 61, -72, -80, -14, 91, -102, 46, -19, -8, -122, 7, 89, 60, -115, -90, -74, 47, 83, 0, 104, 37, 102};
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
    msg.setTimeStamp(0.9874456179944258);
    msg.setSource(32218U);
    msg.setSourceEntity(232U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(92U);
    msg.content_type.assign("KLHLZZAEXC");
    const signed char tmp_msg_0[] = {29, -121, -98, 3, 14, 62, -36, -99, 17, -10, 33, 32, 92, -66, 46, 75, 80, 3, 67, 102, -31, -118, -123, -3, 118, 63, -99, 43, 96, -3, -91, 36, -13, 79, -34, -63, 117, -37, 40, -98, 18, -62, -6, 65, -118, 13, 53, -49, -12, -48, 43, -4, 12, 44, -27, 117, -46, -46, -49, 34, 96, 9, 66, 93, -3, -1, -123, 114, 76, -73, -113, -122, 59, -92, -49, -11, 19, -9, -92, -24, 18, -13, 110, 112, -69, -3, 111, -23, -43, -108, 28, -99, -20, -109, -34, 117, -92, -10, -96, 98, 116, 84, -53, -26, -123, -96, 11, 11, 62, 75, 17, 124, 78, -15, -5, -86, 125, 52, 9, -12, -47, 64, -109, 7, 48, -11, 50, -102, -98, -56, -96, 84, 33, 62, 92, -96, -6, 68, -103, -124, -76, -118, 39, -8, 15, -37, -123, 25, -40, 109, 80, -99, 69, 32, 35, 91, -128, -4, -103, 28, -127, -57, 54, -99, 61, -28, 84, 77, 82, -98, 17, 123, -80, 10, -104, -3, 112, 38, -98, 61, 113, 20, 71, -46, 26, 36, 126, 53, 81, 73, 118, -96, -101, -101, -55, 26, 83, -85, -67, -78, -17, -119, 86, 89, -98, 100, -78, 110, 78, 126, -119, 22, 62, 5, 5, 47, 94, 96, 5, -30, 125, -63, 91, -45, -62, -54, -23, -52, 46, -12, -32, -37, 25, 101, -119, 11, -106, -51, 47, -77, -92, 90, -81};
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
    msg.setTimeStamp(0.12150104112296245);
    msg.setSource(38720U);
    msg.setSourceEntity(195U);
    msg.setDestination(53923U);
    msg.setDestinationEntity(9U);
    msg.content_type.assign("YKTSMOIUXHDETCCOAZWUVWRBTLRDIFSFOXWNTEKUUYCCNMRVAOJUSHAKZFGSYUJMFBIGTFNVBCMMOJBJTAPCOEBFKITPXEGEJKUXAKQZUHSQSKPVXYWRZOMHBIGLWWEXPPJVMDDDMJMLYJAQKCDHRZRVRYRWFZGILQLEJGYCGAHKPWIGUTTVNVSDSPIQYBPXLQSHPNLJLBIAWFEDEZTCNLOHU");
    const signed char tmp_msg_0[] = {106, -65, 55, 95, 56, 113, 4, -31, -34, -24, -97, 0, -39, 89, 80, 40, -33, 51, 70, -48, 27, -90, -33, -13, -112, 2, 35, -126, 94, -68, 58, 43, -95, -105, 9, 49, -30, -42, -53, 123, 90, -14, 49, 49, 101, -103, -1, 25, -69, -86, 43, -109, 115, 5};
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
    msg.setTimeStamp(0.7003667841393931);
    msg.setSource(44941U);
    msg.setSourceEntity(172U);
    msg.setDestination(62436U);
    msg.setDestinationEntity(24U);
    msg.content_type.assign("ZFQMTMTUKKLQABIHSWWZZDEBQOCYJHWTSEWGEDPBUNTMDOPDKJQKVVNASPQOIROPGYJWHZHUGDJIALOPLUCUIFCHUAEUSBISBRERMKNFXVRMPFIZOSXCYHEZROWASJMLNKYTTFYSLVOTKJKMCYMUALEUHIIBOGJCECUXHPPQRHLQ");
    const signed char tmp_msg_0[] = {-103, 21, -21, 5, 71, 22, 65, -34, 91, -73, -18, 70, 73, -102, 16, 98, 29, 13, 42, 54, 99, -44, 117, 116, 2, -15, -91, -107, 21, 102, 40, -116, -60, -15, -114, 63, 17, 79, -11, 116, 10, -128, 98, -76, 79, 27, 9, 74, 105, 10, 78, 42, 11, 63, -87, 83, 124, -102, -16, -114, -121, -100, -87, 42, -71, 61, 48, 6, -1, -16, 97, -62, -88, 14, -77, -27, -14, 38, -44, 2, 69, 75, 15, -109, 10, 74, 20, 19, -114, 104, -125, -69, 0, 32, -119, 61, 84, 23, 124, -127, 63, -85, 88, -106, -47, -52, -49, 36, -107, -82, -116, 55, 102, 22, -116, -78, 84, -125, 113, 87, -23, 120, 92, 40, 17, 82, -9, -12, -125, 32, -95, 49, 30, 58};
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
    msg.setTimeStamp(0.18551247759687972);
    msg.setSource(9382U);
    msg.setSourceEntity(226U);
    msg.setDestination(28885U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.9036107535507373);
    msg.setSource(12932U);
    msg.setSourceEntity(96U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.6787164447953492);
    msg.setSource(61280U);
    msg.setSourceEntity(172U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.898229280894211);
    msg.setSource(39420U);
    msg.setSourceEntity(192U);
    msg.setDestination(37635U);
    msg.setDestinationEntity(4U);
    msg.target = 52658U;
    msg.bearing = 0.5107255807543061;
    msg.elevation = 0.476402825050931;

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
    msg.setTimeStamp(0.11662714161749199);
    msg.setSource(15303U);
    msg.setSourceEntity(2U);
    msg.setDestination(30216U);
    msg.setDestinationEntity(97U);
    msg.target = 14700U;
    msg.bearing = 0.4205075503707073;
    msg.elevation = 0.9867643655067946;

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
    msg.setTimeStamp(0.8668244126433201);
    msg.setSource(48768U);
    msg.setSourceEntity(44U);
    msg.setDestination(2734U);
    msg.setDestinationEntity(22U);
    msg.target = 42728U;
    msg.bearing = 0.03551763453049661;
    msg.elevation = 0.8879053980457301;

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
    msg.setTimeStamp(0.7521603488516052);
    msg.setSource(24536U);
    msg.setSourceEntity(22U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(8U);
    msg.target = 27465U;
    msg.x = 0.9769439647588942;
    msg.y = 0.8959329282683545;
    msg.z = 0.05313569295353737;

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
    msg.setTimeStamp(0.4290135887364257);
    msg.setSource(63560U);
    msg.setSourceEntity(28U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(28U);
    msg.target = 10128U;
    msg.x = 0.17405301204785106;
    msg.y = 0.5443450119267221;
    msg.z = 0.07345318038226234;

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
    msg.setTimeStamp(0.510120301689235);
    msg.setSource(10843U);
    msg.setSourceEntity(13U);
    msg.setDestination(50442U);
    msg.setDestinationEntity(214U);
    msg.target = 32413U;
    msg.x = 0.8935843660160642;
    msg.y = 0.5671195165214165;
    msg.z = 0.5229517623243441;

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
    msg.setTimeStamp(0.801330070814537);
    msg.setSource(30792U);
    msg.setSourceEntity(123U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(160U);
    msg.target = 34661U;
    msg.lat = 0.7766815702750404;
    msg.lon = 0.019017218006408876;
    msg.z_units = 11U;
    msg.z = 0.32403730671533626;

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
    msg.setTimeStamp(0.23298679846061066);
    msg.setSource(39079U);
    msg.setSourceEntity(125U);
    msg.setDestination(21945U);
    msg.setDestinationEntity(232U);
    msg.target = 49470U;
    msg.lat = 0.8318841233956674;
    msg.lon = 0.23118329147379113;
    msg.z_units = 216U;
    msg.z = 0.8230345492308149;

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
    msg.setTimeStamp(0.16964654557891756);
    msg.setSource(37902U);
    msg.setSourceEntity(12U);
    msg.setDestination(27930U);
    msg.setDestinationEntity(37U);
    msg.target = 1903U;
    msg.lat = 0.33680510970647093;
    msg.lon = 0.15263445986841873;
    msg.z_units = 51U;
    msg.z = 0.2059399700131922;

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
    msg.setTimeStamp(0.4165291028538437);
    msg.setSource(43863U);
    msg.setSourceEntity(126U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(35U);
    msg.locale.assign("RVPGRRWZZKRVFHLGXAQIYKYRPSSRAAXXBWFPUHZXPLAVAWYUSSNYELXTLUUJYNPKASPWZOLNJWECQVQVBZEDWFJLDBZGYGMKYIIGZJHNKLIOESVFSQAWTCETPUETOHIQYCDDOIABFMQECMNOKHCQKGURKXJNSPQHZTUDMGGTROTYDGLVDBHZOLTCUFJCJMMSFWDOFIBBMVOWDMELWDHQJNRS");
    const signed char tmp_msg_0[] = {84, 57, 75, 61, 49, -39, -73, -81, 8, 83, -46, 47, 29, 22, -83, -43, -79, -93, -123, 44, 119, 38, 96};
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
    msg.setTimeStamp(0.9372308397644823);
    msg.setSource(4187U);
    msg.setSourceEntity(56U);
    msg.setDestination(15810U);
    msg.setDestinationEntity(128U);
    msg.locale.assign("KZKAIJLRVZUZUAPHBWYLSNEHRSBHQGFTLXZUIVNAAHKJWRHMEVJSXTWLOZBXNVTVHTTHMUYCBFWLKNIWBCKVJPMQCQDEPREFWKYBGREPUGYFBMOSRPOVLKXUODOSJPLGGGGJNYRSWOBXGQOSKIXXQQSIJUZMKLLWDQNACSDCIZRHZPQYTFIPSEGCTZJCIGIFAACVWFECUJNREQZJDYDTXHTRQNXOEM");
    const signed char tmp_msg_0[] = {-85, 58, -59, -22, 33, -23, -52, -92, -102, 44, -118, 116, 94, -26, -70, 125, 25, 1, -14, -70, 118, -19, -68, -84, -29, 14, -6, -43, 82, -110, -87, 15, 36, -26, 49, -93, -21, -52, 10, 7, -37, 116, -70, -66, 54, -91, 43, 66, 19, -2, 16, -9, -21, -14, 26, 17, 126, -125, 98, 93, -28, 83, -15, 84, -126, -15, -52, -68, 21, -70, 43, -46, -82, 20, -75, -26, 64, -89, -26, -93, -93, 106, -81, -50, -70, -31, -40, 99, -38, -128, 35, 24, -124, 92, 85, -48, 7, -1, -98, 70, 47, -128, -2, 11, 81, -40, -84, -123, 73, -54, -116, 39, 70, 74, -12, -69, 14, -47, -13, -119, 10, -57, 48, -82, 31, 86, 3, -108, 32, 9, 83, -77, -47, 32, 70, 19, 67, 54, 103, -101, -2, -64, -21, 10, -11, 18, 10, 65, 82, -48, 81, -47, -76, 96, -13, 15, -111, -15, 78, -26, 39, 53, 22, 67, 3, 71, 11, 58, -99, 27, 1};
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
    msg.setTimeStamp(0.14203373117282936);
    msg.setSource(10649U);
    msg.setSourceEntity(234U);
    msg.setDestination(65216U);
    msg.setDestinationEntity(246U);
    msg.locale.assign("HGFXEYXUSRYPWXBPYTVIMAUERYHCKLZOJMOHWXAHGGNHNTBWVVFPGZKOLXRKDCAEEDVFZOKIIUIPUZWSLCZPASEJNCKAXZBXPBHNTDKTQOEYSXTFVEPFQUQYNYQGNHKJQJQNVTFAISGKTQJSYBBQMDUESWMUCLAXKRHAMFEMZGFJUADISDFVVIMTNCWDFRLMVIOSQ");
    const signed char tmp_msg_0[] = {-46, -22, -21, -64, -45, 33, -33, -91, 91, -16, 55, -98, -44, -34, 125, 0, 80, -66, 65, -35, -11, -43, -85, 102, 74, 92, 52, 63, 61, -119, -14, 45, 17, 11, 7, 62, 62, 17, 73, -73, 20, 45, 77, -104, 58, 33, -38, -100, 98, -108, -90, 18, 48, -50, -52, -28, 7, 20, -123, 12, -27, -36, -10, 75, -58, -56, -32, -122, 40, -115, 105, 22, 4, 17, 88, 63, 18, 126, 101, 58, -57, 90, 9, -37, 28, 5, 94, 24, 52, 16, 77, -11, 6, -121, -97, 42, -105, 52, 13, -57, 95, 32, 126, 12, 125, -85, -115, 89, 117, 12, -53, 30, 27, 104, -110, -111};
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
    msg.setTimeStamp(0.6950851058254518);
    msg.setSource(38138U);
    msg.setSourceEntity(54U);
    msg.setDestination(31726U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.10450021952941368);
    msg.setSource(63157U);
    msg.setSourceEntity(143U);
    msg.setDestination(12643U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.7013338812043715);
    msg.setSource(37878U);
    msg.setSourceEntity(120U);
    msg.setDestination(27976U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.15181278071737625);
    msg.setSource(49329U);
    msg.setSourceEntity(214U);
    msg.setDestination(38001U);
    msg.setDestinationEntity(220U);
    msg.camid = 206U;
    msg.x = 504U;
    msg.y = 50958U;

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
    msg.setTimeStamp(0.43649630054154864);
    msg.setSource(9562U);
    msg.setSourceEntity(4U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(22U);
    msg.camid = 88U;
    msg.x = 23863U;
    msg.y = 64890U;

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
    msg.setTimeStamp(0.6179272208308877);
    msg.setSource(31732U);
    msg.setSourceEntity(25U);
    msg.setDestination(24800U);
    msg.setDestinationEntity(237U);
    msg.camid = 93U;
    msg.x = 50683U;
    msg.y = 42653U;

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
    msg.setTimeStamp(0.28798967739987436);
    msg.setSource(29901U);
    msg.setSourceEntity(181U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(45U);
    msg.camid = 22U;
    msg.x = 2858U;
    msg.y = 34136U;

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
    msg.setTimeStamp(0.8531175493654005);
    msg.setSource(37346U);
    msg.setSourceEntity(33U);
    msg.setDestination(52077U);
    msg.setDestinationEntity(166U);
    msg.camid = 27U;
    msg.x = 3959U;
    msg.y = 12806U;

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
    msg.setTimeStamp(0.5104323213366866);
    msg.setSource(46447U);
    msg.setSourceEntity(149U);
    msg.setDestination(55179U);
    msg.setDestinationEntity(131U);
    msg.camid = 74U;
    msg.x = 12895U;
    msg.y = 8378U;

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
    msg.setTimeStamp(0.9222042133263402);
    msg.setSource(914U);
    msg.setSourceEntity(199U);
    msg.setDestination(41270U);
    msg.setDestinationEntity(185U);
    msg.tracking = 114U;
    msg.lat = 0.22851362003537556;
    msg.lon = 0.022955468549984315;
    msg.x = 0.425872034138433;
    msg.y = 0.6815844605672422;
    msg.z = 0.6861236205879186;

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
    msg.setTimeStamp(0.39412243592314433);
    msg.setSource(43086U);
    msg.setSourceEntity(26U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(122U);
    msg.tracking = 247U;
    msg.lat = 0.7099835283458156;
    msg.lon = 0.6170660525966157;
    msg.x = 0.36997050831637013;
    msg.y = 0.7675205491956364;
    msg.z = 0.9325033821083378;

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
    msg.setTimeStamp(0.06518967368404527);
    msg.setSource(46073U);
    msg.setSourceEntity(34U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(53U);
    msg.tracking = 133U;
    msg.lat = 0.10484196866223017;
    msg.lon = 0.7107285896947307;
    msg.x = 0.1480947406823846;
    msg.y = 0.14846295563366474;
    msg.z = 0.6977641176423637;

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
    msg.setTimeStamp(0.46290952166844734);
    msg.setSource(62423U);
    msg.setSourceEntity(61U);
    msg.setDestination(19931U);
    msg.setDestinationEntity(137U);
    msg.target.assign("EUQAVVFKWPYVIGMWRQXZILENSECYWMTKRL");
    msg.lbearing = 0.2868204236959556;
    msg.lelevation = 0.34227776121364406;
    msg.bearing = 0.9860249644379241;
    msg.elevation = 0.5939941126036983;
    msg.phi = 0.7981050152656897;
    msg.theta = 0.5956330419366903;
    msg.psi = 0.4192658073779224;
    msg.accuracy = 0.4233208803869398;

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
    msg.setTimeStamp(0.5331621415037224);
    msg.setSource(42799U);
    msg.setSourceEntity(163U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(156U);
    msg.target.assign("HMKYTMVALUORFXTZERSXGMGPKMUFFDCOKGKJOJOCROFXYWVSMRWCFUWKSKDNHEQQNJFABJBBUZSJCSZVR");
    msg.lbearing = 0.4120647639928957;
    msg.lelevation = 0.19900259790003239;
    msg.bearing = 0.9448282102534852;
    msg.elevation = 0.8015887665008209;
    msg.phi = 0.5420380017863302;
    msg.theta = 0.6838226139780974;
    msg.psi = 0.7178416443071409;
    msg.accuracy = 0.737983131929203;

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
    msg.setTimeStamp(0.4796842453640756);
    msg.setSource(53343U);
    msg.setSourceEntity(55U);
    msg.setDestination(2522U);
    msg.setDestinationEntity(243U);
    msg.target.assign("RFMUVJBYAVSAFHQBMGHPQWSBBKBABQWPSMNTMYLCGDEQQCNOJZJPSFZSPMIGGLWPHQLIONXBRUYVJUJUHZDBEPLZTDRRHWVPMRFQYGWWKOEEDLWOPDAONQZCULFURHDIZHNPZTSJGWDYFKOGKSXHXZCGVXMYXCIBVT");
    msg.lbearing = 0.9874634056506828;
    msg.lelevation = 0.3370674020473432;
    msg.bearing = 0.6856723530663325;
    msg.elevation = 0.19021415616610948;
    msg.phi = 0.04700606653224726;
    msg.theta = 0.3270844879554883;
    msg.psi = 0.3499729581152916;
    msg.accuracy = 0.12935485489217136;

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
    msg.setTimeStamp(0.020366755964393413);
    msg.setSource(5611U);
    msg.setSourceEntity(163U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(119U);
    msg.target.assign("IPBYQQFZQVHHKWDUNQCNRSVDMFJPBTNJJHSKNCZWGWGVXW");
    msg.x = 0.7197902209817687;
    msg.y = 0.2511805634632708;
    msg.z = 0.3225521217700117;
    msg.n = 0.18124989092659505;
    msg.e = 0.9798745682206412;
    msg.d = 0.7347031240266381;
    msg.phi = 0.34337936025165683;
    msg.theta = 0.664751525055459;
    msg.psi = 0.8324078968226398;
    msg.accuracy = 0.10159643433363164;

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
    msg.setTimeStamp(0.5199850985619003);
    msg.setSource(34820U);
    msg.setSourceEntity(178U);
    msg.setDestination(34682U);
    msg.setDestinationEntity(45U);
    msg.target.assign("XLHCONOAEKNMDGPCYUFHRJZPAFKBNLYQDPWRIWQSNCFLVFXXHTRGNBPIEBAKTNZRMIIXEWUCYOJYWEYRCZPZDAZDNXDUAFTRDDBFXTWHZQWAHGPVVESZSUSCSMVDKTHKEUIMFCKM");
    msg.x = 0.21738634545789493;
    msg.y = 0.8764802385994135;
    msg.z = 0.012368635343096623;
    msg.n = 0.34125748301909253;
    msg.e = 0.042542378919546264;
    msg.d = 0.7293268499863101;
    msg.phi = 0.6278941517947332;
    msg.theta = 0.5195403296685441;
    msg.psi = 0.9870084210318216;
    msg.accuracy = 0.4452195797797772;

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
    msg.setTimeStamp(0.5396160956200632);
    msg.setSource(36666U);
    msg.setSourceEntity(13U);
    msg.setDestination(5925U);
    msg.setDestinationEntity(0U);
    msg.target.assign("JQWLXAZQXJUWDJGOQYABNDAIXAUHDTFMVYQCAZFCZNCHVMVBABIUYJVXCIVNZCSQRRSPQNIKUKJEBKFMGMSWUHMUZORDYDGRFQVBIWEDLRADKQOREFKRDEXVORRWNSKPPYSXLHXETJAIGXQLCONSBUHDHAPZLRWTFUYEOTSMQEMSYYJGHJPNMT");
    msg.x = 0.5508628194483339;
    msg.y = 0.6238906950540104;
    msg.z = 0.08305486121276162;
    msg.n = 0.7631183751432675;
    msg.e = 0.3809110025358584;
    msg.d = 0.6705541070070701;
    msg.phi = 0.5394759389876707;
    msg.theta = 0.7248631451972629;
    msg.psi = 0.371087028153128;
    msg.accuracy = 0.377639505115125;

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
    msg.setTimeStamp(0.9170397549264778);
    msg.setSource(51126U);
    msg.setSourceEntity(238U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(102U);
    msg.target.assign("WWDAIVIPFXXOZZBEJZQUYXHEAQASYLSSJDONHFTBDHQJNPTOOVKPQXIDEBTTCLPWMFOWTNBJTCYMGAMFRFZYFRJURHTKOGJDNPDUOUEHOEEGCOKRPIBNYXUWHZCBPCEKMCOEUDQGVZLFWJXQIZYSMIRRTLAMGAGLADVVNYUCPMMAEBGYLISNXSNFRIKFCVFKWTCSUDKIGXP");
    msg.lat = 0.557725926427174;
    msg.lon = 0.8071061063243815;
    msg.z_units = 142U;
    msg.z = 0.5434248990449;
    msg.accuracy = 0.8059285689971843;

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
    msg.setTimeStamp(0.26801485226203514);
    msg.setSource(55598U);
    msg.setSourceEntity(182U);
    msg.setDestination(51905U);
    msg.setDestinationEntity(93U);
    msg.target.assign("IJPBLBIUZRDVOZGFGUHWGTSKEJFSQNRPHOJHNLPPWOGUNYDEAVQOBMZMGVFIJHRQUQLTZLQVHDDJDMXROCAZSSFXMGFCAIKPDQEVLWWZNIWEVLZEKHAYFCZUBZHMMTUGMUAJRSMNPYZQTVKNYVTBQYAXALSOCXCXPBXNFIAPPPDUXUCS");
    msg.lat = 0.46095071178454383;
    msg.lon = 0.06395738923111549;
    msg.z_units = 39U;
    msg.z = 0.9322204352279133;
    msg.accuracy = 0.8662636229788758;

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
    msg.setTimeStamp(0.2187137957086045);
    msg.setSource(19061U);
    msg.setSourceEntity(149U);
    msg.setDestination(29249U);
    msg.setDestinationEntity(64U);
    msg.target.assign("LEGBAURCCORVFLENBUCSBTSFWKTDXHZQCUIERQHXYROSGHNCNQSRLDQVWWGRPQPTHMJBDWQPKDBLNZRKEBXLPHXXZKZLJYGBECMJSIIZEWASMJPH");
    msg.lat = 0.9172954185835696;
    msg.lon = 0.8636102539327851;
    msg.z_units = 218U;
    msg.z = 0.7936794921484589;
    msg.accuracy = 0.29385219030485543;

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
    msg.setTimeStamp(0.26603262394985494);
    msg.setSource(43625U);
    msg.setSourceEntity(199U);
    msg.setDestination(33940U);
    msg.setDestinationEntity(17U);
    msg.name.assign("NIWACYREGLYRFJNJILWNKUEVNWCLFAEHGBCMGLJLXMVHNQEYJQRSBZHPCYZTRDBGSTPBZPKQPMBGDBIELFGXNBTJTTQHCXIQSSVMPKMNJFRTWKZOQDLUGSDOXSHZIEXRQVALKCMTCESOZWFZVPXDJTBHCLGIUFSEYOPAMLSHRMVVY");
    msg.lat = 0.43856992628174685;
    msg.lon = 0.38026935034994125;
    msg.z = 0.4668319957524174;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.7395202054952138);
    msg.setSource(51390U);
    msg.setSourceEntity(43U);
    msg.setDestination(54835U);
    msg.setDestinationEntity(42U);
    msg.name.assign("NSFUJHTJWBZBAIOCQGZXZXGNPLVCMZEQPVTJIMZKHCLRIOURQLLBCAQVUEBDZTKBAXWZZOQFLR");
    msg.lat = 0.2183798391202525;
    msg.lon = 0.35412101695456033;
    msg.z = 0.5322747914397817;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.6490253844831944);
    msg.setSource(22723U);
    msg.setSourceEntity(200U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(229U);
    msg.name.assign("BBLROAAXQVXONBADQUZJDTGWFPVUKMJLJKMCRZYGZPEXRQCKVJNQXCAMLMSQLFFKNNFQDMNZFUEWDXQAJTFPUBMGDBRTOGZFEUNZRRIEYNJLWSILWWEHMQYVAWIXGOZKRUJPYHPOVVNVCRBLSZXHIEDMOIYKWOITUICYSMGZAPIGFYAFHCIELXTHQ");
    msg.lat = 0.7563795700735644;
    msg.lon = 0.6664810892609201;
    msg.z = 0.627511896879002;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.35907539277851785);
    msg.setSource(9705U);
    msg.setSourceEntity(235U);
    msg.setDestination(9317U);
    msg.setDestinationEntity(187U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.5145913554274442);
    msg.setSource(39356U);
    msg.setSourceEntity(212U);
    msg.setDestination(62442U);
    msg.setDestinationEntity(66U);
    msg.op = 202U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FEXNQQSFYRPCSDIZBNWUKJGLQRPNUBOWAKVNDOVUGKEKELHRGIAJCEJUPRSKZPHCZYHMISGGJVLFCERIAJQULEBUNKZWMMKHFFTXVPLOSWXOJICHKNZIFFZTQYMABXTZDLBAMQSRMXRXLLQGW");
    tmp_msg_0.lat = 0.45777575340182686;
    tmp_msg_0.lon = 0.43902231961233784;
    tmp_msg_0.z = 0.2289623096281569;
    tmp_msg_0.z_units = 42U;
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
    msg.setTimeStamp(0.8151969445523364);
    msg.setSource(9786U);
    msg.setSourceEntity(182U);
    msg.setDestination(8842U);
    msg.setDestinationEntity(82U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.5142087520484148);
    msg.setSource(61345U);
    msg.setSourceEntity(214U);
    msg.setDestination(47971U);
    msg.setDestinationEntity(49U);
    msg.value = 0.9463289534297616;
    msg.type = 182U;

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
    msg.setTimeStamp(0.10163719615660216);
    msg.setSource(40662U);
    msg.setSourceEntity(173U);
    msg.setDestination(64260U);
    msg.setDestinationEntity(231U);
    msg.value = 0.8438389146960567;
    msg.type = 252U;

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
    msg.setTimeStamp(0.7351563957017169);
    msg.setSource(16564U);
    msg.setSourceEntity(106U);
    msg.setDestination(51258U);
    msg.setDestinationEntity(72U);
    msg.value = 0.2739058731944901;
    msg.type = 62U;

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
    msg.setTimeStamp(0.7284974728093662);
    msg.setSource(16659U);
    msg.setSourceEntity(159U);
    msg.setDestination(48291U);
    msg.setDestinationEntity(17U);
    msg.value = 0.43260236387618267;

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
    msg.setTimeStamp(0.047429124968568215);
    msg.setSource(23177U);
    msg.setSourceEntity(11U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(103U);
    msg.value = 0.9388184761317876;

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
    msg.setTimeStamp(0.09278491249338239);
    msg.setSource(16904U);
    msg.setSourceEntity(38U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5576771317567828;

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
    msg.setTimeStamp(0.20504328728742072);
    msg.setSource(60002U);
    msg.setSourceEntity(41U);
    msg.setDestination(10241U);
    msg.setDestinationEntity(4U);
    msg.timestamp_last_service = 0.2038914594697998;
    msg.time_next_service = 0.2790014888843786;
    msg.time_motor_next_service = 0.23882664628107297;
    msg.time_idle_ground = 0.40611152417425433;
    msg.time_idle_air = 0.08033785163550888;
    msg.time_idle_water = 0.8134203238035886;
    msg.time_idle_underwater = 0.9156195445512282;
    msg.time_idle_unknown = 0.18210915379859371;
    msg.time_motor_ground = 0.6589200119703118;
    msg.time_motor_air = 0.45908476501300743;
    msg.time_motor_water = 0.0442520895482964;
    msg.time_motor_underwater = 0.11061126661163168;
    msg.time_motor_unknown = 0.2570190985756683;
    msg.rpm_min = -9617;
    msg.rpm_max = 23662;
    msg.depth_max = 0.8762352823986443;

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
    msg.setTimeStamp(0.25213625624490366);
    msg.setSource(50972U);
    msg.setSourceEntity(7U);
    msg.setDestination(29395U);
    msg.setDestinationEntity(125U);
    msg.timestamp_last_service = 0.9566499304930022;
    msg.time_next_service = 0.47399273642850026;
    msg.time_motor_next_service = 0.38270642272325517;
    msg.time_idle_ground = 0.049046786305578904;
    msg.time_idle_air = 0.6823393619887923;
    msg.time_idle_water = 0.9411643522635549;
    msg.time_idle_underwater = 0.3566784547193027;
    msg.time_idle_unknown = 0.33209270112322475;
    msg.time_motor_ground = 0.2620629878826096;
    msg.time_motor_air = 0.47317913965378633;
    msg.time_motor_water = 0.9482172898438316;
    msg.time_motor_underwater = 0.5624242981452826;
    msg.time_motor_unknown = 0.8080452069538874;
    msg.rpm_min = -21952;
    msg.rpm_max = -24318;
    msg.depth_max = 0.9409595860076948;

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
    msg.setTimeStamp(0.4840522289804454);
    msg.setSource(3826U);
    msg.setSourceEntity(241U);
    msg.setDestination(41144U);
    msg.setDestinationEntity(225U);
    msg.timestamp_last_service = 0.14765399756790087;
    msg.time_next_service = 0.5397979014777022;
    msg.time_motor_next_service = 0.4951532232524358;
    msg.time_idle_ground = 0.42942636816021695;
    msg.time_idle_air = 0.23503798439071977;
    msg.time_idle_water = 0.9399142431819852;
    msg.time_idle_underwater = 0.5753214365174066;
    msg.time_idle_unknown = 0.44898736962192454;
    msg.time_motor_ground = 0.7362817619019502;
    msg.time_motor_air = 0.3355203098252959;
    msg.time_motor_water = 0.785754989403127;
    msg.time_motor_underwater = 0.5231538517357567;
    msg.time_motor_unknown = 0.9046600409963224;
    msg.rpm_min = 16673;
    msg.rpm_max = -14736;
    msg.depth_max = 0.3818274440526399;

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
    msg.setTimeStamp(0.1433929168323521);
    msg.setSource(28157U);
    msg.setSourceEntity(70U);
    msg.setDestination(64425U);
    msg.setDestinationEntity(121U);
    msg.severity = 249U;
    msg.text.assign("SFDKCASKRLJOHUMRCETBFNHCBLIUPWHZODRPREQJTALKBFNIQDRXLTVZTBOESKNEXMTSFUUOWPLZNRKBGWCOVXYQCOZFRLJWWYBVEEZYYUKXXKKYYWGMDRMVDNHZHFGNAJVHEFQWLTQU");

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
    msg.setTimeStamp(0.14904909280648915);
    msg.setSource(29235U);
    msg.setSourceEntity(196U);
    msg.setDestination(35654U);
    msg.setDestinationEntity(54U);
    msg.severity = 138U;
    msg.text.assign("KKVALTFENUVZCMCRXRFBUUFHFVTEVKWBMHCJWOPOSSAUBETTSDJCXBAPTJLPGUDJPIMQB");

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
    msg.setTimeStamp(0.38690325440657236);
    msg.setSource(35419U);
    msg.setSourceEntity(98U);
    msg.setDestination(41605U);
    msg.setDestinationEntity(234U);
    msg.severity = 12U;
    msg.text.assign("OXYMSLBDHRMRULVGS");

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
    msg.setTimeStamp(0.6379998568910077);
    msg.setSource(64918U);
    msg.setSourceEntity(245U);
    msg.setDestination(59431U);
    msg.setDestinationEntity(222U);
    msg.channel = -78;
    msg.value = -155715521;
    msg.gain = 83U;

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
    msg.setTimeStamp(0.5480881069331256);
    msg.setSource(23059U);
    msg.setSourceEntity(135U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(199U);
    msg.channel = 53;
    msg.value = -596946873;
    msg.gain = 151U;

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
    msg.setTimeStamp(0.9083196463189268);
    msg.setSource(33U);
    msg.setSourceEntity(224U);
    msg.setDestination(62018U);
    msg.setDestinationEntity(216U);
    msg.channel = 10;
    msg.value = 307330945;
    msg.gain = 62U;

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
    msg.setTimeStamp(0.9291481606577945);
    msg.setSource(36087U);
    msg.setSourceEntity(240U);
    msg.setDestination(60354U);
    msg.setDestinationEntity(37U);
    msg.ch01 = 0.3700447136385212;
    msg.ch02 = 0.14524720988816886;
    msg.ch03 = 0.5567910131502041;
    msg.ch04 = 0.22820807047567682;
    msg.ch05 = 0.4727741080397272;
    msg.ch06 = 0.6909655921721659;
    msg.ch07 = 0.5412052430626332;
    msg.ch08 = 0.8522697766872954;
    msg.ch09 = 0.584852167807752;
    msg.ch10 = 0.9176898902454286;
    msg.ch11 = 0.12993442996447147;
    msg.ch12 = 0.5434628574923913;
    msg.ch13 = 0.30222350032561807;
    msg.ch14 = 0.8826331707313828;
    msg.ch15 = 0.2549263224333964;
    msg.ch16 = 0.8912995205382509;

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
    msg.setTimeStamp(0.24138866455944563);
    msg.setSource(5071U);
    msg.setSourceEntity(7U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(37U);
    msg.ch01 = 0.19095405091912954;
    msg.ch02 = 0.1820941150213029;
    msg.ch03 = 0.9191644955964143;
    msg.ch04 = 0.09064196558483295;
    msg.ch05 = 0.288252736371309;
    msg.ch06 = 0.01472436365754648;
    msg.ch07 = 0.11464223132825635;
    msg.ch08 = 0.8451205436186503;
    msg.ch09 = 0.8378958892694902;
    msg.ch10 = 0.7527425176198116;
    msg.ch11 = 0.09585606772658817;
    msg.ch12 = 0.17734725141146512;
    msg.ch13 = 0.11734231894385816;
    msg.ch14 = 0.986954741134676;
    msg.ch15 = 0.27006556631125267;
    msg.ch16 = 0.4178351307562459;

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
    msg.setTimeStamp(0.6692415483507772);
    msg.setSource(36718U);
    msg.setSourceEntity(14U);
    msg.setDestination(59245U);
    msg.setDestinationEntity(168U);
    msg.ch01 = 0.4595814629170485;
    msg.ch02 = 0.3688113788375492;
    msg.ch03 = 0.4995424963889963;
    msg.ch04 = 0.30596234180397175;
    msg.ch05 = 0.9504360168523791;
    msg.ch06 = 0.4538774185775518;
    msg.ch07 = 0.8147437760169786;
    msg.ch08 = 0.7375079887286057;
    msg.ch09 = 0.6229670599292546;
    msg.ch10 = 0.5464824671354782;
    msg.ch11 = 0.7720105119311127;
    msg.ch12 = 0.15887235843836156;
    msg.ch13 = 0.5969979709074122;
    msg.ch14 = 0.11336867789516425;
    msg.ch15 = 0.049401171245462616;
    msg.ch16 = 0.1841781136933769;

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
    msg.setTimeStamp(0.9866852924018932);
    msg.setSource(33244U);
    msg.setSourceEntity(37U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(237U);
    msg.op = 186U;
    msg.lat = 0.5266135118151398;
    msg.lon = 0.9411794468990534;
    msg.height = 0.7814871093423502;
    msg.depth = 0.5592461964204395;
    msg.alt = 0.45644993649474164;

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
    msg.setTimeStamp(0.7421952412937856);
    msg.setSource(48936U);
    msg.setSourceEntity(136U);
    msg.setDestination(55450U);
    msg.setDestinationEntity(13U);
    msg.op = 194U;
    msg.lat = 0.07552448420847757;
    msg.lon = 0.5565625629939762;
    msg.height = 0.24584051553871744;
    msg.depth = 0.887953374645259;
    msg.alt = 0.11032611123794123;

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
    msg.setTimeStamp(0.23946759506306414);
    msg.setSource(24174U);
    msg.setSourceEntity(93U);
    msg.setDestination(29202U);
    msg.setDestinationEntity(36U);
    msg.op = 105U;
    msg.lat = 0.026320425050169294;
    msg.lon = 0.6020326552532298;
    msg.height = 0.7442812174044955;
    msg.depth = 0.022244201114479667;
    msg.alt = 0.08715827844574975;

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
    msg.setTimeStamp(0.05503307289116233);
    msg.setSource(750U);
    msg.setSourceEntity(226U);
    msg.setDestination(13545U);
    msg.setDestinationEntity(142U);
    msg.nbeams = 94U;
    msg.ncells = 38U;
    msg.coord_sys = 36U;

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
    msg.setTimeStamp(0.638102199958439);
    msg.setSource(42969U);
    msg.setSourceEntity(117U);
    msg.setDestination(19483U);
    msg.setDestinationEntity(240U);
    msg.nbeams = 179U;
    msg.ncells = 229U;
    msg.coord_sys = 46U;

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
    msg.setTimeStamp(0.8865800149086477);
    msg.setSource(47450U);
    msg.setSourceEntity(187U);
    msg.setDestination(46487U);
    msg.setDestinationEntity(172U);
    msg.nbeams = 139U;
    msg.ncells = 172U;
    msg.coord_sys = 172U;

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
    msg.setTimeStamp(0.215204467001476);
    msg.setSource(37909U);
    msg.setSourceEntity(4U);
    msg.setDestination(44889U);
    msg.setDestinationEntity(155U);
    msg.cell_position = 0.44091739041552636;

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
    msg.setTimeStamp(0.8907894574594576);
    msg.setSource(19233U);
    msg.setSourceEntity(44U);
    msg.setDestination(19122U);
    msg.setDestinationEntity(243U);
    msg.cell_position = 0.9362311110548777;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.011409542301638154;
    tmp_msg_0.amp = 0.21209439064429747;
    tmp_msg_0.cor = 81U;
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
    msg.setTimeStamp(0.5740311630066415);
    msg.setSource(32936U);
    msg.setSourceEntity(246U);
    msg.setDestination(32952U);
    msg.setDestinationEntity(97U);
    msg.cell_position = 0.8187339540113211;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.7464869725262135;
    tmp_msg_0.amp = 0.6812421479545209;
    tmp_msg_0.cor = 35U;
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
    msg.setTimeStamp(0.17356191693757095);
    msg.setSource(29401U);
    msg.setSourceEntity(43U);
    msg.setDestination(55239U);
    msg.setDestinationEntity(158U);
    msg.vel = 0.9662214463170152;
    msg.amp = 0.5581785059936296;
    msg.cor = 102U;

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
    msg.setTimeStamp(0.5479602253675384);
    msg.setSource(64707U);
    msg.setSourceEntity(85U);
    msg.setDestination(28986U);
    msg.setDestinationEntity(25U);
    msg.vel = 0.6651010055828783;
    msg.amp = 0.5008283589414962;
    msg.cor = 176U;

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
    msg.setTimeStamp(0.050440893318928426);
    msg.setSource(3230U);
    msg.setSourceEntity(27U);
    msg.setDestination(28245U);
    msg.setDestinationEntity(143U);
    msg.vel = 0.5403266075871483;
    msg.amp = 0.5019165798456173;
    msg.cor = 105U;

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
    msg.setTimeStamp(0.15323248998486183);
    msg.setSource(22014U);
    msg.setSourceEntity(65U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(88U);
    msg.name.assign("BDQFGEURDNQNZGEKMJY");
    msg.value = 37U;

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
    msg.setTimeStamp(0.4744182464162643);
    msg.setSource(5884U);
    msg.setSourceEntity(103U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(231U);
    msg.name.assign("IZSZNTTUBPXGMFEUHQMVZKLFBVHJQYYXGBGCRGQCLMWRTSMWAIYLQYEMFUESQYBDSAJELTXZSPCMGHWDWJAIODKSVNNYRBWHXKHCJCKTPLAQZZABFOMVXLOGFKGRDFJAVJOZKWWYVUGOIYVWPDBASIHVECWVZFATKFPJN");
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
    msg.setTimeStamp(0.6281679356766235);
    msg.setSource(44155U);
    msg.setSourceEntity(61U);
    msg.setDestination(35866U);
    msg.setDestinationEntity(7U);
    msg.name.assign("FXRJWMXZEPIJQBGQBMJERIHSZCGIPLXFKQYDNEKTAIENVGPMMNLIVDOFMJSDPPLHONOCMYGGOSUXAXAGCJEMFSTNEDBDBTKYNFTAHEXUZDLCZFIWFKEOZHBZUGMUJOPWWTNRWMXOOWPTSFZYRTBAOZWBJQXTIICNHICVLOVQRSPVQUAUAGWKDYDDPVTUKPBJEVQRCZVHBFRKQARHXQJNYBYKWCGIRLRGXEYVMAKHQZHVYKTSDNJ");
    msg.value = 232U;

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
    msg.setTimeStamp(0.5303075626527585);
    msg.setSource(58310U);
    msg.setSourceEntity(60U);
    msg.setDestination(22246U);
    msg.setDestinationEntity(13U);
    msg.name.assign("LWWYVUJOILEWKTBRCJYSTIGEMHXXAUTPAOLUVXXFRHSHDYMRHUICRUMNLDJWGDHYRMLQNCGBOWSXSNZJTCZFDNNSBHRSTEBZQRAKWYGRUOYKOPSEKVVOSAITLJYCNQLRTAENDMFPMXBUBYDGNOUPEEXGMPNJFADVQGVG");

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
    msg.setTimeStamp(0.32911036873737853);
    msg.setSource(40360U);
    msg.setSourceEntity(85U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(141U);
    msg.name.assign("THHUKBFNRSXBGKVKYRS");

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
    msg.setTimeStamp(0.015197070008301394);
    msg.setSource(46925U);
    msg.setSourceEntity(111U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(31U);
    msg.name.assign("GXLUDDWKDCMNNSHAEWIXSVKGSFJNCDTLXTWQULPHZETDJSKWEZAXHXEKSRYZGKDFACZZRQQWQCVYAOUBQYZMAJNIOJYFYOMMVQQIPLDGNARMKJVIFNHLYOEGYSZPNLRQKHTUQUUHBMYFNBFDHOYBUCTVISFXKOXJPMGPHMVBRWZLIKZPJIBBJONMDIFBWCUBLRHPOKUCYAFGWW");

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
    msg.setTimeStamp(0.6473567640249024);
    msg.setSource(27125U);
    msg.setSourceEntity(213U);
    msg.setDestination(53085U);
    msg.setDestinationEntity(39U);
    msg.name.assign("RTIWUXVIDKMSTJRLZWEQGVELBXSYBOQFVXGUKWGBZEKQIHF");
    msg.value = 230U;

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
    msg.setTimeStamp(0.09532501926299297);
    msg.setSource(14554U);
    msg.setSourceEntity(115U);
    msg.setDestination(40764U);
    msg.setDestinationEntity(96U);
    msg.name.assign("WKWKVSDZRMDZXIRRBDRAFISUVXYWNDLVAEQPKBQWQUXPIVABBRHJASIHTCSBMKEXLVFNYHAJDMHNOCEWGMHFMPAOKMRHDHWFVPZLRNUUTKBOVQMOPSZTWZER");
    msg.value = 186U;

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
    msg.setTimeStamp(0.02716892242613267);
    msg.setSource(10292U);
    msg.setSourceEntity(102U);
    msg.setDestination(18856U);
    msg.setDestinationEntity(134U);
    msg.name.assign("YHNSMEOBRUWQCSNCRXKKKIWQAJZEDXGPCPNLDHMMBJWPFXAVCFKLRDEAOGMKTCTWVIAPQSATULBOIPALWKTDUTUGYCENPNGYZRUZXDPGMLXASCHJSOYVLWUENDJBGFXRODDHJPHQAKZXKIHITNBCPIGF");
    msg.value = 205U;

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
    msg.setTimeStamp(0.7997568660992224);
    msg.setSource(20123U);
    msg.setSourceEntity(45U);
    msg.setDestination(34525U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9648586360153859;

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
    msg.setTimeStamp(0.01308824052716051);
    msg.setSource(13315U);
    msg.setSourceEntity(96U);
    msg.setDestination(53423U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5748917466767655;

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
    msg.setTimeStamp(0.06036563486928115);
    msg.setSource(32114U);
    msg.setSourceEntity(93U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(134U);
    msg.value = 0.932703768070454;

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
    msg.setTimeStamp(0.9720150328104765);
    msg.setSource(60314U);
    msg.setSourceEntity(99U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(175U);
    msg.value = 0.21487951076488687;

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
    msg.setTimeStamp(0.274671353050016);
    msg.setSource(18801U);
    msg.setSourceEntity(74U);
    msg.setDestination(6328U);
    msg.setDestinationEntity(73U);
    msg.value = 0.9573164320505065;

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
    msg.setTimeStamp(0.7828277089806426);
    msg.setSource(37474U);
    msg.setSourceEntity(23U);
    msg.setDestination(57090U);
    msg.setDestinationEntity(190U);
    msg.value = 0.9449340968357512;

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
    msg.setTimeStamp(0.603205167596737);
    msg.setSource(12176U);
    msg.setSourceEntity(182U);
    msg.setDestination(18483U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7830062212156244;

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
    msg.setTimeStamp(0.6857065360407446);
    msg.setSource(25104U);
    msg.setSourceEntity(60U);
    msg.setDestination(7198U);
    msg.setDestinationEntity(99U);
    msg.value = 0.4806377745970076;

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
    msg.setTimeStamp(0.39708275229932455);
    msg.setSource(47362U);
    msg.setSourceEntity(105U);
    msg.setDestination(41186U);
    msg.setDestinationEntity(172U);
    msg.value = 0.07676775430834726;

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
    msg.setTimeStamp(0.875482160344214);
    msg.setSource(25749U);
    msg.setSourceEntity(73U);
    msg.setDestination(46880U);
    msg.setDestinationEntity(99U);
    msg.restriction = 224U;
    msg.reason.assign("OALUXOAKUZRRTORLHSIBSZSWCWMETFJMFIJNLDOWMOVUQKECLASGDHRKDODQPANIYMQIGPFJCQDZTZFSBVAYWGXEQGTNAUYMRXEBDDTNBQUUIJZVAWZ");

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
    msg.setTimeStamp(0.7263871945158639);
    msg.setSource(49192U);
    msg.setSourceEntity(241U);
    msg.setDestination(40724U);
    msg.setDestinationEntity(192U);
    msg.restriction = 20U;
    msg.reason.assign("TERWSIEOQYSMAPZRFBMZUQZHTDKIKAJEXMNCUXMNIW");

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
    msg.setTimeStamp(0.2065449931528217);
    msg.setSource(34077U);
    msg.setSourceEntity(219U);
    msg.setDestination(26539U);
    msg.setDestinationEntity(84U);
    msg.restriction = 121U;
    msg.reason.assign("IKFHCSNTYDEPYKCBZGODSBJYEGIMMIMSBENYUSUULNBRAQOSXZACBKNCODIQZTEOXHAVBYQPFVJEHIXEPDBGQSYDPVOWPWDMRPJLKXWULIFVQPXJC");

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
    msg.setTimeStamp(0.5618755119146844);
    msg.setSource(64395U);
    msg.setSourceEntity(105U);
    msg.setDestination(961U);
    msg.setDestinationEntity(117U);
    msg.r_x = 0.7063031884304468;
    msg.r_y = 0.8588897641260939;
    msg.r_z = 0.5144861657829188;
    msg.v_x = 0.7286820507377971;
    msg.v_y = 0.31579479748356276;
    msg.v_z = 0.9449515023775833;
    msg.a_x = 0.4679243274186632;
    msg.a_y = 0.55664914207978;
    msg.a_z = 0.010938703193177024;

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
    msg.setTimeStamp(0.8859735146300195);
    msg.setSource(22878U);
    msg.setSourceEntity(113U);
    msg.setDestination(61370U);
    msg.setDestinationEntity(17U);
    msg.r_x = 0.732042077465478;
    msg.r_y = 0.10069337473625384;
    msg.r_z = 0.05656651569593585;
    msg.v_x = 0.13398155281976676;
    msg.v_y = 0.8203517702263223;
    msg.v_z = 0.18915651108647502;
    msg.a_x = 0.5282412077055859;
    msg.a_y = 0.44597699946649016;
    msg.a_z = 0.6314792359960487;

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
    msg.setTimeStamp(0.9672137459988134);
    msg.setSource(11002U);
    msg.setSourceEntity(76U);
    msg.setDestination(28591U);
    msg.setDestinationEntity(85U);
    msg.r_x = 0.6862460450578538;
    msg.r_y = 0.8011665045886583;
    msg.r_z = 0.5594780053177828;
    msg.v_x = 0.7176894705498543;
    msg.v_y = 0.359043410638774;
    msg.v_z = 0.34750923081224105;
    msg.a_x = 0.11971886598681858;
    msg.a_y = 0.9986318553600912;
    msg.a_z = 0.6259097027091501;

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
    msg.setTimeStamp(0.6955796182041676);
    msg.setSource(43340U);
    msg.setSourceEntity(120U);
    msg.setDestination(14480U);
    msg.setDestinationEntity(78U);
    msg.type = 213U;
    msg.u_x = 0.6881882846016512;
    msg.u_y = 0.346563276301301;
    msg.u_z = 0.12310421457278231;
    IMC::TrajectoryReference tmp_msg_0;
    tmp_msg_0.r_x = 0.8277296524689762;
    tmp_msg_0.r_y = 0.6444210846918094;
    tmp_msg_0.r_z = 0.96029613726282;
    tmp_msg_0.v_x = 0.4405125288799172;
    tmp_msg_0.v_y = 0.41170811047243405;
    tmp_msg_0.v_z = 0.3006973848102501;
    tmp_msg_0.a_x = 0.47724084079956186;
    tmp_msg_0.a_y = 0.6883866506979217;
    tmp_msg_0.a_z = 0.6907206710212079;
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
    msg.setTimeStamp(0.5990754489326446);
    msg.setSource(64076U);
    msg.setSourceEntity(63U);
    msg.setDestination(46126U);
    msg.setDestinationEntity(102U);
    msg.type = 177U;
    msg.u_x = 0.38756173711245856;
    msg.u_y = 0.9526354082496417;
    msg.u_z = 0.7722575392174686;
    IMC::TrajectoryReference tmp_msg_0;
    tmp_msg_0.r_x = 0.5464714089352423;
    tmp_msg_0.r_y = 0.43853539175338085;
    tmp_msg_0.r_z = 0.5458691523963007;
    tmp_msg_0.v_x = 0.7042731713343507;
    tmp_msg_0.v_y = 0.21735650061454392;
    tmp_msg_0.v_z = 0.18473950885552382;
    tmp_msg_0.a_x = 0.722768395613404;
    tmp_msg_0.a_y = 0.6882638104071159;
    tmp_msg_0.a_z = 0.8663944606596528;
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
    msg.setTimeStamp(0.13098401848346408);
    msg.setSource(64932U);
    msg.setSourceEntity(251U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(201U);
    msg.type = 113U;
    msg.u_x = 0.6089201029905748;
    msg.u_y = 0.6273977341343516;
    msg.u_z = 0.5824126252868774;
    IMC::TrajectoryReference tmp_msg_0;
    tmp_msg_0.r_x = 0.5496800809384337;
    tmp_msg_0.r_y = 0.45703449984694045;
    tmp_msg_0.r_z = 0.6115088911347314;
    tmp_msg_0.v_x = 0.23357344886293274;
    tmp_msg_0.v_y = 0.8983809374246642;
    tmp_msg_0.v_z = 0.9382383659411976;
    tmp_msg_0.a_x = 0.12024539589119643;
    tmp_msg_0.a_y = 0.6674566201991613;
    tmp_msg_0.a_z = 0.2444197452782061;
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
    msg.setTimeStamp(0.47795613704928697);
    msg.setSource(50991U);
    msg.setSourceEntity(128U);
    msg.setDestination(47636U);
    msg.setDestinationEntity(174U);
    msg.start = 67U;
    msg.delay = 0.2615336249643937;

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
    msg.setTimeStamp(0.119426212428148);
    msg.setSource(34814U);
    msg.setSourceEntity(5U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(35U);
    msg.start = 90U;
    msg.delay = 0.4470524839576727;

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
    msg.setTimeStamp(0.12742232967245293);
    msg.setSource(55040U);
    msg.setSourceEntity(97U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(8U);
    msg.start = 250U;
    msg.delay = 0.33273332122095334;

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
    IMC::HandLog msg;
    msg.setTimeStamp(0.031109332838840986);
    msg.setSource(49347U);
    msg.setSourceEntity(105U);
    msg.setDestination(24688U);
    msg.setDestinationEntity(98U);
    IMC::HandPosIn tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.u_x = 0.045942421163311264;
    tmp_msg_0.u_y = 0.4284180833298695;
    tmp_msg_0.u_z = 0.7540854941378543;
    IMC::TrajectoryReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.r_x = 0.7091664535150364;
    tmp_tmp_msg_0_0.r_y = 0.6619097133005016;
    tmp_tmp_msg_0_0.r_z = 0.821305564412221;
    tmp_tmp_msg_0_0.v_x = 0.22035952008325554;
    tmp_tmp_msg_0_0.v_y = 0.8914343848702374;
    tmp_tmp_msg_0_0.v_z = 0.4579308084955148;
    tmp_tmp_msg_0_0.a_x = 0.7059886539395034;
    tmp_tmp_msg_0_0.a_y = 0.15866675343841719;
    tmp_tmp_msg_0_0.a_z = 0.8713955951090442;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    msg.input.set(tmp_msg_0);
    msg.p_x = 0.42025234292852953;
    msg.p_y = 0.446572690425561;
    msg.p_z = 0.7496733274314289;
    msg.v_x = 0.6700315075984941;
    msg.v_y = 0.6448342517852202;
    msg.v_z = 0.3175033209091982;
    msg.a_x = 0.049859584407271895;
    msg.a_y = 0.3736287833949121;
    msg.a_z = 0.14072839298143092;
    msg.p_hat_x = 0.04779212353499884;
    msg.p_hat_y = 0.33607067379785993;
    msg.p_hat_z = 0.70398958452113;
    msg.v_hat_x = 0.6045879072926723;
    msg.v_hat_y = 0.8609078505641026;
    msg.v_hat_z = 0.3401527762735296;
    msg.d_x = 0.9595068541373918;
    msg.d_y = 0.9541015500317666;
    msg.d_z = 0.6339752344415092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HandLog #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HandLog msg;
    msg.setTimeStamp(0.7332609937074293);
    msg.setSource(9499U);
    msg.setSourceEntity(95U);
    msg.setDestination(20563U);
    msg.setDestinationEntity(37U);
    IMC::HandPosIn tmp_msg_0;
    tmp_msg_0.type = 220U;
    tmp_msg_0.u_x = 0.6400283660408463;
    tmp_msg_0.u_y = 0.26939130579904813;
    tmp_msg_0.u_z = 0.7149162716968397;
    IMC::TrajectoryReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.r_x = 0.6200166473912799;
    tmp_tmp_msg_0_0.r_y = 0.30860308512314893;
    tmp_tmp_msg_0_0.r_z = 0.14207539145057546;
    tmp_tmp_msg_0_0.v_x = 0.9175780547555318;
    tmp_tmp_msg_0_0.v_y = 0.24512088513602714;
    tmp_tmp_msg_0_0.v_z = 0.938161559589884;
    tmp_tmp_msg_0_0.a_x = 0.0838558509109193;
    tmp_tmp_msg_0_0.a_y = 0.45218017494028484;
    tmp_tmp_msg_0_0.a_z = 0.2643881479584408;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    msg.input.set(tmp_msg_0);
    msg.p_x = 0.9128119026618703;
    msg.p_y = 0.4634758578870377;
    msg.p_z = 0.4172045523916873;
    msg.v_x = 0.0684646390687852;
    msg.v_y = 0.8973740852056543;
    msg.v_z = 0.11218892089473353;
    msg.a_x = 0.7539028615376231;
    msg.a_y = 0.04204613056228035;
    msg.a_z = 0.9779778122024505;
    msg.p_hat_x = 0.24224879887666084;
    msg.p_hat_y = 0.47162467143320297;
    msg.p_hat_z = 0.4212369625815787;
    msg.v_hat_x = 0.4242695177307735;
    msg.v_hat_y = 0.4416246136187415;
    msg.v_hat_z = 0.658234075200798;
    msg.d_x = 0.713102468437462;
    msg.d_y = 0.6897410469206176;
    msg.d_z = 0.7618560297373538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HandLog #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HandLog msg;
    msg.setTimeStamp(0.3270570413735381);
    msg.setSource(41924U);
    msg.setSourceEntity(171U);
    msg.setDestination(56273U);
    msg.setDestinationEntity(13U);
    IMC::HandPosIn tmp_msg_0;
    tmp_msg_0.type = 186U;
    tmp_msg_0.u_x = 0.8245258108921949;
    tmp_msg_0.u_y = 0.586092470965779;
    tmp_msg_0.u_z = 0.9240263043039127;
    IMC::TrajectoryReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.r_x = 0.20824647395797102;
    tmp_tmp_msg_0_0.r_y = 0.6522192369472015;
    tmp_tmp_msg_0_0.r_z = 0.18760331139123876;
    tmp_tmp_msg_0_0.v_x = 0.737873829184822;
    tmp_tmp_msg_0_0.v_y = 0.7514728487759328;
    tmp_tmp_msg_0_0.v_z = 0.35143617838519603;
    tmp_tmp_msg_0_0.a_x = 0.9935450499192238;
    tmp_tmp_msg_0_0.a_y = 0.08150692725688147;
    tmp_tmp_msg_0_0.a_z = 0.7712264016992447;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    msg.input.set(tmp_msg_0);
    msg.p_x = 0.7140528785555316;
    msg.p_y = 0.2151732286911724;
    msg.p_z = 0.7040994280554379;
    msg.v_x = 0.34421940874451906;
    msg.v_y = 0.8641029656713015;
    msg.v_z = 0.7634588603633676;
    msg.a_x = 0.221090790717833;
    msg.a_y = 0.35474792809591016;
    msg.a_z = 0.6865160848848674;
    msg.p_hat_x = 0.49568565507584916;
    msg.p_hat_y = 0.5536548441238182;
    msg.p_hat_z = 0.4082665684989668;
    msg.v_hat_x = 0.5406005923697809;
    msg.v_hat_y = 0.6462088609116866;
    msg.v_hat_z = 0.09635179617696521;
    msg.d_x = 0.1493652965238622;
    msg.d_y = 0.6981096890591396;
    msg.d_z = 0.07669634530569436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HandLog #2", msg == *msg_d);
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
