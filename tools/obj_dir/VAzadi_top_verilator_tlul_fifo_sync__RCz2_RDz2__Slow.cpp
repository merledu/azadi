// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2::__Vconfigure(VAzadi_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2::~VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2() {
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2::_ctor_var_reset\n"); );
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
