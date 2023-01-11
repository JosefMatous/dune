#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=/home/josefma/dune-workspace/dune/build/dune-activate

# Simulator 1
$DUNE_ACTIVATE localhost 6002 "Path Control" false
$DUNE_ACTIVATE localhost 6002 "Target Simulation" false
$DUNE_ACTIVATE localhost 6002 "Consensus Message" false

# Simulator 2
$DUNE_ACTIVATE localhost 6003 "Path Control" false
$DUNE_ACTIVATE localhost 6003 "Consensus Message" false

# Simulator 3
$DUNE_ACTIVATE localhost 6004 "Path Control" false

# Simulator 4
$DUNE_ACTIVATE localhost 6005 "Path Control" false

# Simulator 5
$DUNE_ACTIVATE localhost 6006 "Path Control" false

# Simulator 6
$DUNE_ACTIVATE localhost 6015 "Path Control" false
