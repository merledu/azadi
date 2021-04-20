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
<<<<<<< HEAD
    // DPI import at /home/merl-lab/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:29:17
    extern void jtagdpi_close(void* ctx);
    // DPI import at /home/merl-lab/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:21:20
    extern void* jtagdpi_create(const char* name, int listen_port);
    // DPI import at /home/merl-lab/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:24:17
    extern void jtagdpi_tick(void* ctx, svBit* tck, svBit* tms, svBit* tdi, svBit* trst_n, svBit* srst_n, svBit tdo);
=======
    // DPI import at /home/zeeshan/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:29
    extern void jtagdpi_close(void* ctx);
    // DPI import at /home/zeeshan/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:21
    extern void* jtagdpi_create(const char* name, int listen_port);
    // DPI import at /home/zeeshan/fyp/azadi/src/pulp_riscv_dbg/src/jtagdpi.sv:24
    extern void jtagdpi_tick(void* ctx, unsigned char* tck, unsigned char* tms, unsigned char* tdi, unsigned char* trst_n, unsigned char* srst_n, unsigned char tdo);
>>>>>>> 5e74c1a9791839744bb8dab0965e5a7e6b18e1c7
    
#ifdef __cplusplus
}
#endif
