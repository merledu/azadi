// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at /home/merl/github_repos/azadi/src/rv_dm/dmidpi/dmidpi.sv:36:17
    extern void dmidpi_close(void* ctx);
    // DPI import at /home/merl/github_repos/azadi/src/rv_dm/dmidpi/dmidpi.sv:25:20
    extern void* dmidpi_create(const char* name, int listen_port);
    // DPI import at /home/merl/github_repos/azadi/src/rv_dm/dmidpi/dmidpi.sv:28:17
    extern void dmidpi_tick(void* ctx, svBit* dmi_req_valid, svBit dmi_req_ready, svBitVecVal* dmi_req_addr, svBitVecVal* dmi_req_op, svBitVecVal* dmi_req_data, svBit dmi_rsp_valid, svBit* dmi_rsp_ready, const svBitVecVal* dmi_rsp_data, const svBitVecVal* dmi_rsp_resp, svBit* dmi_rst_n);
    
#ifdef __cplusplus
}
#endif
