// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_rv_plic_reg_pkg.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VAzadi_top_verilator_rv_plic_reg_pkg) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAzadi_top_verilator_rv_plic_reg_pkg::__Vconfigure(VAzadi_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VAzadi_top_verilator_rv_plic_reg_pkg::~VAzadi_top_verilator_rv_plic_reg_pkg() {
}

void VAzadi_top_verilator_rv_plic_reg_pkg::_initial__TOP__rv_plic_reg_pkg__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_rv_plic_reg_pkg::_initial__TOP__rv_plic_reg_pkg__1\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0U] = 0xfU;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1U] = 0xfU;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0xaU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0xbU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0xcU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0xdU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0xeU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0xfU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x10U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x11U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x12U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x13U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x14U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x15U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x16U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x17U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x18U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x19U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x1aU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x1bU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x1cU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x1dU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x1eU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x1fU] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x20U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x21U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x22U] = 0xfU;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x23U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x24U] = 1U;
    vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0x25U] = 1U;
}

void VAzadi_top_verilator_rv_plic_reg_pkg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_rv_plic_reg_pkg::_ctor_var_reset\n"); );
    // Body
}
