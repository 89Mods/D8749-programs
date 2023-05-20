#!/bin/bash

set - e

./asm48/asm48 test.asm
java ToHex test.bin
~/verilator/bin/verilator -DBENCH -Wno-fatal --top-module tb -cc -exe --trace-depth 2 --trace bench.cpp tb.v d8749.v
cd obj_dir
make -f Vtb.mk
cd ..
