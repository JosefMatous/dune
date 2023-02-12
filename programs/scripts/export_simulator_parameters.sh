#! /bin/bash

# Path to DUNE and Neptus
DUNE=~/dune-workspace-NTNU/dune/build/dune
NEPTUS_DIR=~/dune-workspace-NTNU/neptus

for i in {1..4}
do
    $DUNE -c lauv-simulator-$i -p Simulation -X $NEPTUS_DIR/conf/params/
done
