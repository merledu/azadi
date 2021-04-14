// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_i2c_reg_pkg.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VAzadi_top_verilator_i2c_reg_pkg) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAzadi_top_verilator_i2c_reg_pkg::__Vconfigure(VAzadi_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VAzadi_top_verilator_i2c_reg_pkg::~VAzadi_top_verilator_i2c_reg_pkg() {
}

void VAzadi_top_verilator_i2c_reg_pkg::_initial__TOP__i2c_reg_pkg__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_i2c_reg_pkg::_initial__TOP__i2c_reg_pkg__1\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[1U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[2U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[3U] = 1U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[4U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[5U] = 1U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[6U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[7U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[8U] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[9U] = 1U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0xaU] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0xbU] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0xcU] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0xdU] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0xeU] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0xfU] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0x10U] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0x11U] = 0xfU;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0x12U] = 3U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0x13U] = 1U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0x14U] = 1U;
    vlSymsp->TOP__i2c_reg_pkg.__PVT__I2C_PERMIT[0x15U] = 0xfU;
}

void VAzadi_top_verilator_i2c_reg_pkg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_i2c_reg_pkg::_ctor_var_reset\n"); );
    // Body
}
