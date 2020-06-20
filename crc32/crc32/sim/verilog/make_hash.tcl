
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set agg_group [add_wave_group agg(wire) -into $coutputgroup]
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_return -into $agg_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set len_group [add_wave_group len(wire) -into $cinputgroup]
add_wave /apatb_make_hash_top/AESL_inst_make_hash/len -into $len_group -radix hex
set frame_group [add_wave_group frame(memory) -into $cinputgroup]
add_wave /apatb_make_hash_top/AESL_inst_make_hash/frame_q0 -into $frame_group -radix hex
add_wave /apatb_make_hash_top/AESL_inst_make_hash/frame_ce0 -into $frame_group -color #ffff00 -radix hex
add_wave /apatb_make_hash_top/AESL_inst_make_hash/frame_address0 -into $frame_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_start -into $blocksiggroup
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_done -into $blocksiggroup
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_idle -into $blocksiggroup
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_make_hash_top/AESL_inst_make_hash/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_make_hash_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_make_hash_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_make_hash_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_make_hash_top/LENGTH_frame -into $tb_portdepth_group -radix hex
add_wave /apatb_make_hash_top/LENGTH_ap_return -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_agg_group [add_wave_group agg(wire) -into $tbcoutputgroup]
add_wave /apatb_make_hash_top/ap_return -into $tb_agg_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_len_group [add_wave_group len(wire) -into $tbcinputgroup]
add_wave /apatb_make_hash_top/len -into $tb_len_group -radix hex
set tb_frame_group [add_wave_group frame(memory) -into $tbcinputgroup]
add_wave /apatb_make_hash_top/frame_q0 -into $tb_frame_group -radix hex
add_wave /apatb_make_hash_top/frame_ce0 -into $tb_frame_group -color #ffff00 -radix hex
add_wave /apatb_make_hash_top/frame_address0 -into $tb_frame_group -radix hex
save_wave_config make_hash.wcfg
run all

