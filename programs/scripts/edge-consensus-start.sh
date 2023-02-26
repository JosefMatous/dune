#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=~/dune-workspace/edge-consensus/dune/build/dune-activate

# Simulator 1
$DUNE_ACTIVATE localhost 6002 "Path Control" true
$DUNE_ACTIVATE localhost 6002 "Target Simulation" true
$DUNE_ACTIVATE localhost 6002 "Consensus Message" true

# Simulator 2
$DUNE_ACTIVATE localhost 6003 "Path Control" true
$DUNE_ACTIVATE localhost 6003 "Consensus Message" true

# Simulator 3
$DUNE_ACTIVATE localhost 6004 "Path Control" true

# Simulator 4
$DUNE_ACTIVATE localhost 6005 "Path Control" true

# Simulator 5
$DUNE_ACTIVATE localhost 6006 "Path Control" true

# Simulator 6
$DUNE_ACTIVATE localhost 6015 "Path Control" true
