#! /bin/bash

# Path to `dune-sendmsg` executable
DUNE_SENDMSG=~/edge-consensus-workspace/dune/build/dune-sendmsg

# Simulator 1
$DUNE_SENDMSG localhost 6002 PlanControl 0 start1 1

# Simulator 2
$DUNE_SENDMSG localhost 6003 PlanControl 0 start2 1

# Simulator 3
$DUNE_SENDMSG localhost 6004 PlanControl 0 start3 1

# Simulator 4
$DUNE_SENDMSG localhost 6005 PlanControl 0 start4 1

# Simulator 5
$DUNE_SENDMSG localhost 6006 PlanControl 0 start5 1

# Simulator 6
$DUNE_SENDMSG localhost 6015 PlanControl 0 start6 1
