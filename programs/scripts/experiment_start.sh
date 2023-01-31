#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=/home/josefma/dune-workspace-NTNU/dune/build/dune-activate

# Simulator 1
$DUNE_ACTIVATE localhost 6002 "Path Control" true
$DUNE_ACTIVATE localhost 6002 "Distributed NSB" true
$DUNE_ACTIVATE localhost 6002 "Obstacle Simulator" true

# Simulator 2
$DUNE_ACTIVATE localhost 6003 "Path Control" true
$DUNE_ACTIVATE localhost 6003 "Distributed NSB" true

# Simulator 3
$DUNE_ACTIVATE localhost 6004 "Path Control" true
$DUNE_ACTIVATE localhost 6004 "Distributed NSB" true

# Simulator 4
$DUNE_ACTIVATE localhost 6005 "Path Control" true
$DUNE_ACTIVATE localhost 6005 "Distributed NSB" true
