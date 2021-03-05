// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
        vlTOPp->__Vm_traceActivity[0xdU] = 0U;
        vlTOPp->__Vm_traceActivity[0xeU] = 0U;
        vlTOPp->__Vm_traceActivity[0xfU] = 0U;
        vlTOPp->__Vm_traceActivity[0x10U] = 0U;
        vlTOPp->__Vm_traceActivity[0x11U] = 0U;
        vlTOPp->__Vm_traceActivity[0x12U] = 0U;
        vlTOPp->__Vm_traceActivity[0x13U] = 0U;
        vlTOPp->__Vm_traceActivity[0x14U] = 0U;
        vlTOPp->__Vm_traceActivity[0x15U] = 0U;
        vlTOPp->__Vm_traceActivity[0x16U] = 0U;
        vlTOPp->__Vm_traceActivity[0x17U] = 0U;
        vlTOPp->__Vm_traceActivity[0x18U] = 0U;
    }
}
