// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1.h"
#include "Vazadi_soc_top__Syms.h"

//==========

VL_CTOR_IMP(Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::__Vconfigure(Vazadi_soc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::~Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1() {
}

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, tl_h_i);
    tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, tl_d_o);
    tl_d_i = VL_RAND_RESET_Q(52);
    spare_req_i = VL_RAND_RESET_I(1);
    __PVT__spare_req_o = VL_RAND_RESET_I(1);
    spare_rsp_i = VL_RAND_RESET_I(1);
    __PVT__spare_rsp_o = VL_RAND_RESET_I(1);
}
