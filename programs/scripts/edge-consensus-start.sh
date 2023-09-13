#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=~/edge-consensus-workspace/dune/build/dune-activate
DUNE_SENDMSG=~/edge-consensus-workspace/dune/build/dune-sendmsg

# Simulator 1
$DUNE_SENDMSG localhost 6002 PlanControl 0 goto1 0
$DUNE_ACTIVATE localhost 6002 "Path Control" true
$DUNE_ACTIVATE localhost 6002 "Target Simulation" true
$DUNE_ACTIVATE localhost 6002 "Consensus Message" true

# Simulator 2
$DUNE_SENDMSG localhost 6003 PlanControl 0 goto2 0
$DUNE_ACTIVATE localhost 6003 "Path Control" true
$DUNE_ACTIVATE localhost 6003 "Consensus Message" true

# Simulator 3
$DUNE_SENDMSG localhost 6004 PlanControl 0 goto3 0
$DUNE_ACTIVATE localhost 6004 "Path Control" true
$DUNE_ACTIVATE localhost 6004 "Consensus Message" true

# Simulator 4
$DUNE_SENDMSG localhost 6005 PlanControl 0 goto4 0
$DUNE_ACTIVATE localhost 6005 "Path Control" true
$DUNE_ACTIVATE localhost 6005 "Consensus Message" true

# Simulator 5
$DUNE_SENDMSG localhost 6006 PlanControl 0 goto5 0
$DUNE_ACTIVATE localhost 6006 "Path Control" true
$DUNE_ACTIVATE localhost 6006 "Consensus Message" true

# Simulator 6
$DUNE_SENDMSG localhost 6015 PlanControl 0 goto6 0
$DUNE_ACTIVATE localhost 6015 "Path Control" true
$DUNE_ACTIVATE localhost 6015 "Consensus Message" true
