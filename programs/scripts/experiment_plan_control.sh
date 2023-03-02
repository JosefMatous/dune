# /bin/bash

# Path to `dune-sendmsg` executable
DUNE_SENDMSG=~/dune-workspace/dune/build/dune-sendmsg
# Plan prefix. Plans are assumed to be named PREFIXi, where i = {1, 2, 3, 4}
PREFIX=path_

# Simulator 1
$DUNE_SENDMSG localhost 6002 PlanControl 0 "${PREFIX}1"

# Simulator 2
$DUNE_SENDMSG localhost 6003 PlanControl 0 "${PREFIX}2"

# Simulator 3
$DUNE_SENDMSG localhost 6004 PlanControl 0 "${PREFIX}3"

# Simulator 4
$DUNE_SENDMSG localhost 6005 PlanControl 0 "${PREFIX}4"