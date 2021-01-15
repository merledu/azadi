#!/bin/bash

rm -rf obj_dir

verilator -Wno-UNOPTFLAT -Wall --cc test_core.sv --top-module test_core --Wno-MODDUP --Wno-lint --exe --trace --build sim_main.cpp

./obj_dir/Vtest_core

