#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=~/dune-workspace/dune/build/dune-activate

# Simulator 1
$DUNE_ACTIVATE localhost 6002 "Path Control" false
$DUNE_ACTIVATE localhost 6002 "Distributed NSB" false
$DUNE_ACTIVATE localhost 6002 "Consensus" false
$DUNE_ACTIVATE localhost 6002 "Obstacle Simulator" false

# Simulator 2
$DUNE_ACTIVATE localhost 6003 "Path Control" false
$DUNE_ACTIVATE localhost 6003 "Distributed NSB" false
$DUNE_ACTIVATE localhost 6003 "Consensus" false
$DUNE_ACTIVATE localhost 6003 "Obstacle Simulator" false

# Simulator 3
$DUNE_ACTIVATE localhost 6004 "Path Control" false
$DUNE_ACTIVATE localhost 6004 "Distributed NSB" false
$DUNE_ACTIVATE localhost 6004 "Consensus" false
$DUNE_ACTIVATE localhost 6004 "Obstacle Simulator" false

# Simulator 4
$DUNE_ACTIVATE localhost 6005 "Path Control" false
$DUNE_ACTIVATE localhost 6005 "Distributed NSB" false
$DUNE_ACTIVATE localhost 6005 "Consensus" false
$DUNE_ACTIVATE localhost 6005 "Obstacle Simulator" false
