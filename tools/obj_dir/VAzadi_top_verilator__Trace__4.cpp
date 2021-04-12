// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0xa5U)) {
            vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
