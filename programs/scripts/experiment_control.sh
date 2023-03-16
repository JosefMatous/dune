#! /bin/bash

# Path to `dune-sendmsg` executable
DUNE_SENDMSG=~/dune-workspace/dune/build/dune-sendmsg

OPERATION=$1
EXPERIMENT=$2
if [ $# -ge 3 ]
then
    OBSTACLE=$3
else
    OBSTACLE="false"
fi

# Simulator 1
$DUNE_SENDMSG localhost 6002 "ExperimentControl" $OPERATION $EXPERIMENT $OBSTACLE

# Simulator 2
$DUNE_SENDMSG localhost 6003 "ExperimentControl" $OPERATION $EXPERIMENT $OBSTACLE

# Simulator 3
$DUNE_SENDMSG localhost 6004 "ExperimentControl" $OPERATION $EXPERIMENT $OBSTACLE

# Simulator 4
$DUNE_SENDMSG localhost 6005 "ExperimentControl" $OPERATION $EXPERIMENT $OBSTACLE
