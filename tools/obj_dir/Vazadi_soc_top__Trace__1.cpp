// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vazadi_soc_top__Syms.h"


void Vazadi_soc_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vazadi_soc_top__Syms* __restrict vlSymsp = static_cast<Vazadi_soc_top__Syms*>(userp);
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    }
}
