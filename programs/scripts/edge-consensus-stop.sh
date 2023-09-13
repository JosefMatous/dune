#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=~/edge-consensus-workspace/dune/build/dune-activate
DUNE_SENDMSG=~/edge-consensus-workspace/dune/build/dune-sendmsg

# Simulator 1
$DUNE_SENDMSG localhost 6002 PlanControl 1 goto1 0
$DUNE_ACTIVATE localhost 6002 "Path Control" false
$DUNE_ACTIVATE localhost 6002 "Target Simulation" false
$DUNE_ACTIVATE localhost 6002 "Consensus Message" false

# Simulator 2
$DUNE_SENDMSG localhost 6003 PlanControl 1 goto2 0
$DUNE_ACTIVATE localhost 6003 "Path Control" false
$DUNE_ACTIVATE localhost 6003 "Consensus Message" false

# Simulator 3
$DUNE_SENDMSG localhost 6004 PlanControl 1 goto3 0
$DUNE_ACTIVATE localhost 6004 "Path Control" false
$DUNE_ACTIVATE localhost 6004 "Consensus Message" false

# Simulator 4
$DUNE_SENDMSG localhost 6005 PlanControl 1 goto4 0
$DUNE_ACTIVATE localhost 6005 "Path Control" false
$DUNE_ACTIVATE localhost 6005 "Consensus Message" false

# Simulator 5
$DUNE_SENDMSG localhost 6006 PlanControl 1 goto5 0
$DUNE_ACTIVATE localhost 6006 "Path Control" false
$DUNE_ACTIVATE localhost 6006 "Consensus Message" false

# Simulator 6
$DUNE_SENDMSG localhost 6015 PlanControl 1 goto6 0
$DUNE_ACTIVATE localhost 6015 "Path Control" false
$DUNE_ACTIVATE localhost 6015 "Consensus Message" false
