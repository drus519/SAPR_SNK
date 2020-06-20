// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "frame"
#define AUTOTB_TVIN_frame  "../tv/cdatafile/c.make_hash.autotvin_frame.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.make_hash.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.make_hash.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			frame_depth = 0;
			ap_return_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{frame " << frame_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int frame_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern ap_uint<32> make_hash (
unsigned char frame[8],
unsigned int len);

ap_uint<32> AESL_WRAP_make_hash (
unsigned char frame[8],
unsigned int len)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		ap_uint<32> AESL_return;

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: agg.result.V(31, 0)
						// {
							sc_lv<32> agg_result_V_lv0_0_0_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: agg.result.V(31, 0)
						{
							// carray: (0) => (0) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									agg_result_V_lv0_0_0_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: agg.result.V(31, 0)
						{
							// carray: (0) => (0) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (agg_result_V_lv0_0_0_0).to_string(SC_BIN).c_str()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (agg_result_V_lv0_0_0_0).to_string(SC_BIN).c_str();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "frame"
		char* tvin_frame = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_frame);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_frame, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_frame, tvin_frame);

		sc_bv<32>* frame_tvin_wrapc_buffer = new sc_bv<32>[2];

		// RTL Name: frame
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: frame(7, 0)
				{
					// carray: (0) => (4) @ (4)
					for (int i_0 = 0; i_0 <= 4; i_0 += 4)
					{
						// sub                   : i_0
						// ori_name              : frame[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : frame[0]
						// regulate_c_name       : frame
						// input_type_conversion : frame[i_0]
						if (&(frame[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> frame_tmp_mem;
							frame_tmp_mem = frame[i_0];
							frame_tvin_wrapc_buffer[hls_map_index].range(7, 0) = frame_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(15, 8)
			{
				int hls_map_index = 0;
				// celement: frame(7, 0)
				{
					// carray: (1) => (5) @ (4)
					for (int i_0 = 1; i_0 <= 5; i_0 += 4)
					{
						// sub                   : i_0
						// ori_name              : frame[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : frame[0]
						// regulate_c_name       : frame
						// input_type_conversion : frame[i_0]
						if (&(frame[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> frame_tmp_mem;
							frame_tmp_mem = frame[i_0];
							frame_tvin_wrapc_buffer[hls_map_index].range(15, 8) = frame_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(23, 16)
			{
				int hls_map_index = 0;
				// celement: frame(7, 0)
				{
					// carray: (2) => (6) @ (4)
					for (int i_0 = 2; i_0 <= 6; i_0 += 4)
					{
						// sub                   : i_0
						// ori_name              : frame[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : frame[0]
						// regulate_c_name       : frame
						// input_type_conversion : frame[i_0]
						if (&(frame[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> frame_tmp_mem;
							frame_tmp_mem = frame[i_0];
							frame_tvin_wrapc_buffer[hls_map_index].range(23, 16) = frame_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(31, 24)
			{
				int hls_map_index = 0;
				// celement: frame(7, 0)
				{
					// carray: (3) => (7) @ (4)
					for (int i_0 = 3; i_0 <= 7; i_0 += 4)
					{
						// sub                   : i_0
						// ori_name              : frame[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : frame[0]
						// regulate_c_name       : frame
						// input_type_conversion : frame[i_0]
						if (&(frame[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> frame_tmp_mem;
							frame_tmp_mem = frame[i_0];
							frame_tvin_wrapc_buffer[hls_map_index].range(31, 24) = frame_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_frame, "%s\n", (frame_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_frame, tvin_frame);
		}

		tcl_file.set_num(2, &tcl_file.frame_depth);
		sprintf(tvin_frame, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_frame, tvin_frame);

		// release memory allocation
		delete [] frame_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		ap_uint<32> AESL_return = make_hash(frame, len);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: agg.result.V(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : agg_result_V
						// input_type_conversion : (AESL_return).to_string(2).c_str()
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> agg_result_V_tmp_mem;
							agg_result_V_tmp_mem = (AESL_return).to_string(2).c_str();
							ap_return_tvout_wrapc_buffer.range(31, 0) = agg_result_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "frame"
		delete [] tvin_frame;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

