############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project crc32
set_top make_hash
add_files crc32/make_hash.cpp
add_files crc32/make_hash.h
add_files -tb crc32/test_make_hash.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "crc32"
set_part {xc7a100tcsg324-3}
create_clock -period 10 -name default
config_sdx -target none
config_export -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
set_clock_uncertainty 12.5%
#source "./crc32/crc32/directives.tcl"
csim_design -clean
csynth_design
cosim_design -wave_debug -trace_level all -tool xsim
export_design -format ip_catalog
