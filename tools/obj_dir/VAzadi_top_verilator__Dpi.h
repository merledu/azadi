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
    // DPI import at /home/zeeshan/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:29
    extern void jtagdpi_close(void* ctx);
    // DPI import at /home/zeeshan/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:21
    extern void* jtagdpi_create(const char* name, int listen_port);
    // DPI import at /home/zeeshan/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:24
    extern void jtagdpi_tick(void* ctx, unsigned char* tck, unsigned char* tms, unsigned char* tdi, unsigned char* trst_n, unsigned char* srst_n, unsigned char tdo);
    
#ifdef __cplusplus
}
#endif
