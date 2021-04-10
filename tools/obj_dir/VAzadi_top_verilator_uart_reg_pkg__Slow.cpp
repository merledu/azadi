// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_uart_reg_pkg.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VAzadi_top_verilator_uart_reg_pkg) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAzadi_top_verilator_uart_reg_pkg::__Vconfigure(VAzadi_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VAzadi_top_verilator_uart_reg_pkg::~VAzadi_top_verilator_uart_reg_pkg() {
}

void VAzadi_top_verilator_uart_reg_pkg::_initial__TOP__uart_reg_pkg__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_uart_reg_pkg::_initial__TOP__uart_reg_pkg__1\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[0U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[1U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[2U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[3U] = 0xfU;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[4U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[5U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[6U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[7U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[8U] = 7U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[9U] = 1U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[0xaU] = 3U;
    vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[0xbU] = 0xfU;
}

void VAzadi_top_verilator_uart_reg_pkg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_uart_reg_pkg::_ctor_var_reset\n"); );
    // Body
}
