#! /bin/bash

# Path to `dune-activate` executable
DUNE_ACTIVATE=/home/josefma/dune-workspace-NTNU/dune/build/dune-activate

# Simulator 1
$DUNE_ACTIVATE localhost 6002 "Path Control" false
$DUNE_ACTIVATE localhost 6002 "Distributed NSB" false

# Simulator 2
$DUNE_ACTIVATE localhost 6003 "Path Control" false
$DUNE_ACTIVATE localhost 6003 "Distributed NSB" false
