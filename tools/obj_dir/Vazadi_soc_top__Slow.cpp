// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top__Syms.h"

//==========
CData/*0:0*/ Vazadi_soc_top::__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable2_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable3_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
CData/*0:0*/ Vazadi_soc_top::__Vtable4_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
CData/*0:0*/ Vazadi_soc_top::__Vtable5_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
CData/*3:0*/ Vazadi_soc_top::__Vtable6_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[32];

VL_CTOR_IMP(Vazadi_soc_top) {
    Vazadi_soc_top__Syms* __restrict vlSymsp = __VlSymsp = new Vazadi_soc_top__Syms(this, name());
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__gpio_reg_pkg, Vazadi_soc_top_gpio_reg_pkg);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__DCCM, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_0, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_1, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_2, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_3, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_4, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__PLIC, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI, Vazadi_soc_top_tlul_socket_m1__pi4);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    VL_CELL(__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d, Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vazadi_soc_top::__Vconfigure(Vazadi_soc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vazadi_soc_top::~Vazadi_soc_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vazadi_soc_top::_initial__TOP__1(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_initial__TOP__1\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*383:0*/ __Vtemp1[12];
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x6d626c79U;
    __Vtemp1[2U] = 0x61737365U;
    __Vtemp1[3U] = 0x6865782fU;
    __Vtemp1[4U] = 0x7374732fU;
    __Vtemp1[5U] = 0x692f7465U;
    __Vtemp1[6U] = 0x617a6164U;
    __Vtemp1[7U] = 0x7970322fU;
    __Vtemp1[8U] = 0x61622f66U;
    __Vtemp1[9U] = 0x726c2d6cU;
    __Vtemp1[0xaU] = 0x652f6d65U;
    __Vtemp1[0xbU] = 0x2f686f6dU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(12, __Vtemp1)
                 , vlTOPp->azadi_soc_top__DOT__iccm__DOT__iccm__DOT__mem
                 , 0, ~0ULL);
}

void Vazadi_soc_top::_settle__TOP__2(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_settle__TOP__2\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfffeU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfffeU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfffdU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfffdU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfffbU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfffbU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfff7U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfff7U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xffefU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xffefU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xffdfU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xffdfU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xffbfU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xffbfU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xff7fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xff7fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfeffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfeffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfdffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfdffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xfbffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xfbffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xf7ffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xf7ffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xefffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xefffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xdfffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xdfffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0xbfffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0xbfffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err 
        = (0x7fffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err 
        = (0x7fffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0U] 
        = (1U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1U] 
        = (2U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [1U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2U] 
        = (4U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [2U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (8U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [3U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (0x10U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [4U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (0x20U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [5U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (0x40U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [6U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x80U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [7U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x100U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [8U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x200U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [9U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] 
        = (0x400U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xaU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] 
        = (0x800U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xbU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] 
        = (0x1000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xcU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] 
        = (0x2000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xdU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] 
        = (0x4000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xeU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] 
        = (0x8000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xfU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] 
        = (0x10000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x10U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] 
        = (0x20000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x11U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] 
        = (0x40000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x12U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] 
        = (0x80000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x13U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] 
        = (0x100000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x14U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] 
        = (0x200000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x15U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] 
        = (0x400000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x16U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] 
        = (0x800000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x17U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] 
        = (0x1000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x18U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] 
        = (0x2000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x19U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] 
        = (0x4000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1aU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] 
        = (0x8000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1bU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] 
        = (0x10000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1cU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] 
        = (0x20000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1dU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] 
        = (0x40000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1eU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] 
        = (0x80000000U | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1fU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xdU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xeU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xfU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x10U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x11U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x12U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x13U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x14U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x15U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x16U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x17U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x18U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x19U] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1aU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1bU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1cU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1dU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1eU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1fU] = 0ULL;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[0U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_uart0_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[1U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_uart1_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[2U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_spi0_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[3U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_spi1_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[4U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_spi2_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[5U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_pwm_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[7U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_i2c0_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[8U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_i2c1_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[9U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_can0_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_can1_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_adc_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_qspi_i;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n[1U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_debug_rom_i;
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n[2U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i;
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
        = ((0xffffffffffffeULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h) 
           | (IData)((IData)((1U & (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i)))));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
        = ((0x8000000000001ULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
        = ((0x7ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                             >> 0x33U))))) 
              << 0x33U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]) 
           | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 9U;
    if ((0x10000000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                           >> 5U))))) {
        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 0U;
    } else {
        if ((0x10080000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                               >> 5U))))) {
            vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 1U;
        } else {
            if ((0x40000000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                                   >> 5U))))) {
                vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 2U;
            } else {
                if ((0x40010000U == (0xffff0000U & 
                                     ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                       >> 5U))))) {
                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 3U;
                } else {
                    if ((0x40020000U == (0xffff0000U 
                                         & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                               >> 5U))))) {
                        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 4U;
                    } else {
                        if ((0x40030000U == (0xffff0000U 
                                             & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                                   >> 5U))))) {
                            vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 5U;
                        } else {
                            if ((0x40040000U == (0xffff0000U 
                                                 & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                                       >> 5U))))) {
                                vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 6U;
                            } else {
                                if ((0x40050000U == 
                                     (0xffff0000U & 
                                      ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                        >> 5U))))) {
                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 7U;
                                } else {
                                    if ((0x40060000U 
                                         <= (0xffff0000U 
                                             & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                                   >> 5U))))) {
                                        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3 = 8U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type[0U] = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U] = 0U;
    if ((1U & (~ (IData)(vlTOPp->clock)))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = 1U;
    }
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
        = (0x100000U | vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U]);
    vlTOPp->gpio_oe = (0xfffffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_en_q);
    vlTOPp->gpio_o = (0xfffffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q);
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & vlTOPp->gpio_i) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 1U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 2U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 3U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 4U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 5U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 6U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 7U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 8U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 9U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xaU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xbU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xcU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xdU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xeU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xfU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x10U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x11U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x12U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x13U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x14U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x15U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x16U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x17U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x18U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x19U)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1aU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1bU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1cU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1dU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1eU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1fU)) != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
        = ((0xfffffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U]) 
           | (0xfff00000U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q 
                             << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
        = ((0xfff00000U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U]) 
           | (0xfffffU & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q 
                          >> 0xcU)));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[3U] 
        = (0xffff0000U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q);
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
        = ((0xfff00000U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U]) 
           | (0xffc00U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q 
                          << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[2U] 
        = vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_en_q;
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[0U] 
        = (0xffff0000U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_en_q);
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U] 
        = (0xffff0000U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_en_q 
                          << 0x10U));
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
        = ((0U != vlTOPp->azadi_soc_top__DOT__gpio_intr) 
           << 0xfU);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (0x3dU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (0x3bU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (7U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d 
        = (0x3eU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = (0x3fffffffcULL | vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = (2ULL | vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xff803ffffffffULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source) 
                               << 1U))) << 0x22U));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xf07ffffffffffULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size)) 
              << 0x2bU));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x8ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U))) << 0x30U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = (0x3fffffffcULL | vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = (2ULL | vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xff803ffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source) 
                               << 1U))) << 0x22U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xf07ffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size)) 
              << 0x2bU));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x8ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U))) << 0x30U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = (0x3fffffffcULL | vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = (2ULL | vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xff803ffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source) 
                               << 1U))) << 0x22U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xf07ffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size)) 
              << 0x2bU));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x8ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U))) << 0x30U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = (0x3fffffffcULL | vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = (2ULL | vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o);
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xff803ffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source) 
                               << 1U))) << 0x22U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xf07ffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size)) 
              << 0x2bU));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x8ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U))) << 0x30U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((3U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (4U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending) 
                               | (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending)))) 
              << 0x33U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending) 
                               | (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending)))) 
              << 0x33U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending) 
                               | (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending)))) 
              << 0x33U));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending) 
                               | (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending)))) 
              << 0x33U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    >> 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (2U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl[1U] 
        = (3U & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                  ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     >> 2U) : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp 
        = (((QData)((IData)((1U & (~ ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                               >> 0x20U)) 
                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req 
                = (1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int = 1U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int 
                = (1U & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U)) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((6U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((5U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (2U & (((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         >> 1U)) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                    << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((3U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (4U & (((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         >> 2U)) << 2U) & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           << 1U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = 1U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = 1U;
                } else {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id 
                            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffff0U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[0U] 
                           << 3U)) | (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((0xfU & ((8U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                           << 3U)) | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[0U] 
                                      >> 0x1dU))) | 
           (0xfffffff0U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((0xfU & ((8U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                           << 3U)) | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[1U] 
                                      >> 0x1dU))) | 
           (0xfffff0U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                         << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
           & (IData)(vlTOPp->clock));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[6U] 
        = vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h;
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((9U >= (0xfU & ((IData)(5U) * (1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                 >> (0xfU & ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x19U >= (0x1fU & ((IData)(0xdU) 
                                        * (1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                   >> (0x1fU & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__rvalid) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x13U >= (0x1fU & ((IData)(5U) 
                                        * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                 >> (0x1fU & ((IData)(5U) 
                                              * (3U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                        * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (IData)((vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x3fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                     : 0U));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__rvalid_o) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
        (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
        (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                  >> 0xfU))];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs 
        = (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
              & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U) == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                 [0U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | (0xfffffffeU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                             & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U) == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                 [1U]) << 1U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [0U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [1U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [1U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [2U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [2U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [3U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [3U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [4U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [4U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [5U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [5U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [6U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [6U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [7U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [7U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [8U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [8U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [9U] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                     [9U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0xaU] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                       [0xaU]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0xbU] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                       [0xbU]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0xcU] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                       [0xcU]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0xdU] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                       [0xdU]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0xeU] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                       [0xeU]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] 
        = ((0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                     [0xfU] << 2U)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                       [0xfU]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
        [0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr
        [0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing 
        = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
           & (6U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x26U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel = 2U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel = 4U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0x4000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                            ? ((0x1000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                ? 0x16U
                                                : 0x14U)
                                            : ((0x1000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                ? 0x15U
                                                : 0x13U));
                                } else {
                                    if ((1U & (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                ? 0x18U
                                                : 0x17U);
                                    }
                                }
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel = 2U;
                                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                if ((1U & (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                        ? 9U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                        ? 0x26U
                                                                        : 0x25U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                                        ? 0xaU
                                                                        : 0U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                if ((1U & (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                              >> 0xeU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                if ((0x4000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                    if ((0x2000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                                            } else {
                                                if (
                                                    (8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                            ? ((0x1000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                ? 0x26U
                                                : 0x25U)
                                            : ((0x1000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id)
                                                ? 0xaU
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel = 5U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                                    } else {
                                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (((0U != (0x1fU 
                                                 & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0xfU))) 
                                         | (0U != (0x1fU 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    if ((1U & (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                    }
                                    if ((1U == (3U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                                            } else {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                                if ((0U != (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0xeU)) 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xdU)));
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 1U;
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                if ((5U == ((4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xcU))))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    if ((0x80000000U 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                = (1U 
                                                   & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x1dU) 
                                                      | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x1cU) 
                                                         | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1bU) 
                                                            | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x1aU) 
                                                               | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                   >> 0x19U) 
                                                                  | ((0x4000U 
                                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (~ 
                                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                          >> 0xcU)))
                                                                      : 
                                                                     ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0xcU)))))))));
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                                if ((0x4000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                if ((0U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                        } else {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((0x4000U 
                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                              ? ((~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x1aU) 
                                                       | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x1fU) 
                                                          | ((0x40000000U 
                                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                              ? 
                                                             ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x1dU) 
                                                              | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU) 
                                                                 | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x1bU) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0x19U))))))
                                                              : 
                                                             ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x1dU) 
                                                              | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU) 
                                                                 | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x1bU) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0x19U)))))))))))
                                              : ((~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x1fU) 
                                                       | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x1eU) 
                                                          | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                              >> 0x1dU) 
                                                             | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x1cU) 
                                                                | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                    >> 0x1bU) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                          >> 0x19U))))))))))));
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval = 1U;
                                        }
                                    } else {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                                    = (1U & (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((0U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                            if ((0x4000U 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            }
                                        } else {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests 
        = ((0U != vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding) 
           & ((0xfU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
              != (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                              << 0x1dU) | (0x1ffffffeU 
                                           & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                              >> 3U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
        = ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                  >> 3U)) | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             << 0x1dU) 
                                            | (0x1ffffffeU 
                                               & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  >> 3U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
        = ((0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]) 
           | ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                     >> 3U)) | (0x1ffffeU & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             >> 3U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                              << 0x1dU) | (0x1ffffffeU 
                                           & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                              >> 3U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
        = ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                  >> 3U)) | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             << 0x1dU) 
                                            | (0x1ffffffeU 
                                               & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  >> 3U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
        = ((0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]) 
           | ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                     >> 3U)) | (0x1ffffeU & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             >> 3U))));
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [1U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[2U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [2U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[3U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [3U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[4U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [4U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[5U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [5U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[6U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [6U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[7U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [7U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[8U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [8U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[9U] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [9U];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask = 0U;
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                        >> 1U))))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 2U))))) 
              << (0x1fU & ((IData)(8U) + (0x20U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                   << 5U))))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 3U))))) 
              << (0x1fU & ((IData)(0x10U) + (0x20U 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 4U))))) 
              << (0x1fU & ((IData)(0x18U) + (0x20U 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid)));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask = 0U;
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                        >> 1U))))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 2U))))) 
              << (0x1fU & ((IData)(8U) + (0x20U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                   << 5U))))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 3U))))) 
              << (0x1fU & ((IData)(0x10U) + (0x20U 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 4U))))) 
              << (0x1fU & ((IData)(0x18U) + (0x20U 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy = 0U;
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy = 0U;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))) 
           & ((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs) 
              & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                 >> 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause = 1U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause = 1U;
                    }
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause 
                            = ((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))
                                ? 2U : ((4U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)
                                         ? 4U : 3U));
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save = 1U;
                    }
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
              >> 2U) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
            | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [1U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [2U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [3U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[4U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [4U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[5U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [5U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[6U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [6U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[7U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [7U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[8U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [8U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[9U] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [9U])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0xaU] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0xaU])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0xbU] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0xbU])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0xcU] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0xcU])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0xdU] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0xdU])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0xeU] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0xeU])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0xfU] 
        = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                           [0xfU])) << 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result 
        = (0x1ffffffffULL & ((QData)((IData)(((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel))
                                               ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc
                                               : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id))) 
                             + (QData)((IData)(((4U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                   ? 2U
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                   ? 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                    ? 2U
                                                    : 4U)
                                                   : 
                                                  ((0xfff00000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x1fU)))) 
                                                       << 0x14U)) 
                                                   | ((0xff000U 
                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id) 
                                                      | ((0x800U 
                                                          & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x14U)))))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                   ? 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                    ? 2U
                                                    : 4U)
                                                   : 
                                                  ((0xffffe000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x1fU)))) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                  >> 7U)))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                   ? 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                    ? 2U
                                                    : 4U)
                                                   : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))))));
    vlTOPp->__Vtableidx5 = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = vlTOPp->__Vtable5_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx3 = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = vlTOPp->__Vtable3_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx2 = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlTOPp->__Vtable2_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate
        [vlTOPp->__Vtableidx2];
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b 
        = (1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                  >> 0x1fU) & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a 
        = (1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                  >> 0x1fU) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((((2U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
          | (3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) 
         & (0U == (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                            >> 0xfU))))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type[1U] 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
            ? 1U : 2U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold = 0U;
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold = 0U;
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)))) {
                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator) 
                                  >> 1U)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
           & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((0U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((1U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((2U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((3U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((4U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((5U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((6U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((7U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((8U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [0U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [1U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [2U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [3U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[4U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [4U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[5U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [5U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[6U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [6U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[7U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [7U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[8U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [8U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         & ((9U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o[9U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
            [9U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata 
        = (((QData)((IData)((((IData)(vlTOPp->reset_ni)
                               ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                               : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask))) 
            << 1U) | (QData)((IData)((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rerror_i) 
                                            >> 1U)))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword 
        = (vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o 
           & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask);
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
                  [0U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
                  [1U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
        [0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id)
            : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
        = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
            | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))
            ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                 ? 2U : 4U) : 4U)) : 
               ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                 ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                     ? (0xfffff000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                     : 4U) : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                               ? ((0xfffff000U & ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x1fU)))) 
                                                  << 0xcU)) 
                                  | ((0xfe0U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 7U))))
                               : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_valid 
        = (1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                 | ((6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)) 
                    | ((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)) 
                       & ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)) 
                          | (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext 
        = (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)) 
            << 0x20U) | (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext 
        = (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a)) 
            << 0x20U) | (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | (1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_load = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_store = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_store 
                        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out = 1U;
            } else {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out = 1U;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 2U;
                } else {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 2U;
                    } else {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 3U;
                        } else {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 4U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 0U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                             << 5U) | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                        << 4U) | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = vlTOPp->__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = vlTOPp->__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = vlTOPp->__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = vlTOPp->__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = vlTOPp->__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = vlTOPp->__Vtable1_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o) 
           | (IData)((IData)((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending)) 
                                    & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending) 
                                          & (~ vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [9U][0U]))))))));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata
                                         : ((0x41U 
                                             >= (0x7fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (3U 
                                                                      & (((IData)(0x21U) 
                                                                          * 
                                                                          (1U 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                         >> 5U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (3U 
                                                                       & (((IData)(0x21U) 
                                                                           * 
                                                                           (1U 
                                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                             : 0ULL))));
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
        = (0x1ffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
           [0U]);
    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                               [0U])) 
                               << 1U)) : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                           ? 1ULL : 
                                          (1ULL | ((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                                   [0U])) 
                                                   << 1U))))
                : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                    ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                        ? (1ULL | ((QData)((IData)(
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                   [0U])) 
                                   << 1U)) : 1ULL) : 1ULL));
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [1U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [2U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [3U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [4U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [5U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [6U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [7U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [8U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [9U] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xaU] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xbU] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xcU] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xdU] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xeU] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xfU] >> 3U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [3U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [4U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [5U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [6U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [7U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [8U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [9U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0xaU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0xbU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0xcU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0xdU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0xeU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr
        [0xfU];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (2U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (8U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
               | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)
            : (((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)
                : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt)) 
           | (0x1fU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle)
                        ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b
                        : (- vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access)
            ? (0xfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)
            : 0U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b 
        = (0x1ffffffffULL & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                              ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                  ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                      ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                              << 1U))
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(
                                                                               vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                                               [0U])))) 
                                                    << 1U))
                                              : (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                    << 1U))))
                                      : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                          ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                    << 1U))
                                              : (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                    << 1U)))
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc))) 
                                                    << 1U))
                                              : (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                    << 1U)))))
                                  : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? ((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                          ? (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                                                           >> 0x20U)) 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (~ 
                                                                ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q) 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))))))))
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp)
                                      : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp))
                              : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                  ? (~ ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                        << 1U)) : ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                 [0U]) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [0U] >> 2U)) | ((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                           [0U]) & 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                           [0U] >> 1U))) 
              | ((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                  [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                 [0U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | (((0x7ffffffeU & (((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 1U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [1U] 
                                                 >> 1U))) 
               | (0xfffffffeU & (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 1U) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                 [1U]))) | (((2U == 
                                              vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                              [0U]) 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [1U]) 
                                            << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffffffcU & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 2U) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [2U]) | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                          [0U]) << 2U) 
                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                           [2U] << 1U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [2U]) << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffffff8U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 3U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [3U] 
                                                 << 1U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 3U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [3U] 
                                                   << 2U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [3U]) << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffffff0U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 4U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [4U] 
                                                 << 2U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 4U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [4U] 
                                                   << 3U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [4U]) << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffffffe0U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 5U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [5U] 
                                                 << 3U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 5U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [5U] 
                                                   << 4U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [5U]) << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffffffc0U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 6U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [6U] 
                                                 << 4U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 6U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [6U] 
                                                   << 5U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [6U]) << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffffff80U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 7U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [7U] 
                                                 << 5U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 7U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [7U] 
                                                   << 6U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [7U]) << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffffff00U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 8U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [8U] 
                                                 << 6U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 8U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [8U] 
                                                   << 7U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [8U]) << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffffe00U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 9U) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 << 7U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 9U) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   << 8U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [9U]) << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffffc00U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 0xaU) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   << 8U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 0xaU) & 
                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xaU] << 9U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xaU]) << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffff800U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 0xbU) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   << 9U)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 0xbU) & 
                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xbU] << 0xaU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xbU]) << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffff000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 0xcU) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   << 0xaU)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 0xcU) & 
                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xcU] << 0xbU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xcU]) << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffffe000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 0xdU) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xdU] 
                                                   << 0xbU)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 0xdU) & 
                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xdU] << 0xcU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xdU]) << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffffc000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 0xeU) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xeU] 
                                                   << 0xcU)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 0xeU) & 
                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xeU] << 0xdU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xeU]) << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffff8000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [0U]) << 0xfU) & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xfU] 
                                                   << 0xdU)) 
                              | (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                   [0U]) << 0xfU) & 
                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xfU] << 0xeU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [0U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xfU]) << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffff0000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x10U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0U] << 0xeU)) | ((
                                                   (1U 
                                                    == 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                    [1U]) 
                                                   << 0x10U) 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                     [0U] 
                                                     << 0xfU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0U]) << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffe0000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x11U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [1U] << 0xfU)) | ((
                                                   (1U 
                                                    == 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                    [1U]) 
                                                   << 0x11U) 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                     [1U] 
                                                     << 0x10U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [1U]) << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfffc0000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x12U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [2U] << 0x10U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x12U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [2U] 
                                                      << 0x11U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [2U]) << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfff80000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x13U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [3U] << 0x11U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x13U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [3U] 
                                                      << 0x12U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [3U]) << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfff00000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x14U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [4U] << 0x12U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x14U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [4U] 
                                                      << 0x13U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [4U]) << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffe00000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x15U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [5U] << 0x13U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x15U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [5U] 
                                                      << 0x14U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [5U]) << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xffc00000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x16U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [6U] << 0x14U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x16U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [6U] 
                                                      << 0x15U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [6U]) << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xff800000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x17U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [7U] << 0x15U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x17U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [7U] 
                                                      << 0x16U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [7U]) << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xff000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x18U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [8U] << 0x16U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x18U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [8U] 
                                                      << 0x17U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [8U]) << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfe000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x19U) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [9U] << 0x17U)) | (
                                                   ((1U 
                                                     == 
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                                     [1U]) 
                                                    << 0x19U) 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                      [9U] 
                                                      << 0x18U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [9U]) << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xfc000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1aU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xaU] << 0x18U)) | 
                              (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1aU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xaU] << 0x19U)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xaU]) << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xf8000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1bU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xbU] << 0x19U)) | 
                              (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1bU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xbU] << 0x1aU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xbU]) << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xf0000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1cU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xcU] << 0x1aU)) | 
                              (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1cU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xcU] << 0x1bU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xcU]) << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xe0000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1dU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xdU] << 0x1bU)) | 
                              (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1dU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xdU] << 0x1cU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xdU]) << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0xc0000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1eU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xeU] << 0x1cU)) | 
                              (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1eU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xeU] << 0x1dU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xeU]) << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((0x80000000U & ((((0U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1fU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xfU] << 0x1dU)) | 
                              (((1U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                 [1U]) << 0x1fU) & 
                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0xfU] << 0x1eU)))) 
              | (((2U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                   [1U]) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                  [0xfU]) << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en 
        = ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec)) 
            | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id)) 
           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_valid));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_valid)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_branch = 0U;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_branch = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set = 0U;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set 
                                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec = 0U;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval 
                                = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id)
                                    : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id);
                        } else {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval 
                                    = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                        ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id)
                                        : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id);
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval 
                                                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                        } else {
                                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval 
                                                    = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id = 0U;
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause = 1U;
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs))
                                ? (0x30U | ((0x4000U 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                             ? 0xeU
                                             : ((0x2000U 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                 ? 0xdU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                     ? 9U
                                                     : 
                                                    ((0x100U 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                      ? 8U
                                                      : 
                                                     ((0x80U 
                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                       ? 7U
                                                       : 
                                                      ((0x40U 
                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                        ? 6U
                                                        : 
                                                       ((0x20U 
                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                          ? 4U
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                            ? 2U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                             ? 1U
                                                             : 0U)))))))))))))))
                                : ((0x8000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause = 1U;
                        } else {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause = 2U;
                            } else {
                                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause 
                                        = ((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                            ? 0xbU : 8U);
                                } else {
                                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                    | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause = 3U;
                                        }
                                    } else {
                                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause = 7U;
                                        } else {
                                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause = 5U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i[9U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o;
    vlTOPp->azadi_soc_top__DOT__iccm_to_xbar = (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                      & (1U 
                                                                         != 
                                                                         (3U 
                                                                          & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                             >> 0xbU))))
                                                                      ? 0U
                                                                      : 1U))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)
                                                                         ? 
                                                                        (3U 
                                                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                            >> 8U))
                                                                         : 0U))) 
                                                       << 0x2bU) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)
                                                                            ? 
                                                                           (0xffU 
                                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                                            : 0U))) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             ((((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                                               & (1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU))))
                                                                               ? (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                                >> 1U))
                                                                               : 0U))) 
                                                             << 2U) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                                & ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU)))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                                | ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlTOPp->azadi_soc_top__DOT__dccm_to_xbar = (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                      & (1U 
                                                                         != 
                                                                         (3U 
                                                                          & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                             >> 0xbU))))
                                                                      ? 0U
                                                                      : 1U))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                                         ? 
                                                                        (3U 
                                                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                            >> 8U))
                                                                         : 0U))) 
                                                       << 0x2bU) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                                            ? 
                                                                           (0xffU 
                                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                                            : 0U))) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             ((((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                                               & (1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU))))
                                                                               ? (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                                >> 1U))
                                                                               : 0U))) 
                                                             << 2U) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                                & ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU)))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                                | ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [0U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [0U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [0U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [0U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [0U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [0U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [0U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [1U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [1U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [1U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [1U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [1U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [1U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [1U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [1U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [1U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [1U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [1U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [1U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [1U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [1U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [2U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [2U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [2U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [2U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [2U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [2U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [2U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [2U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [2U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [2U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [2U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [2U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [2U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [2U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [3U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [3U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [3U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [3U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [3U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [3U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [3U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [3U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [3U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [3U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [3U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [3U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [3U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [3U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [4U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [4U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [4U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [4U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [4U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [4U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [4U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [4U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [4U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [4U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [4U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [4U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [4U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [4U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [5U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [5U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [5U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [5U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [5U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [5U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [5U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [5U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [5U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [5U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [5U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [5U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [5U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [5U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [6U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [6U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [6U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [6U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [6U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [6U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [6U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [6U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [6U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [6U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [6U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [6U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [6U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [6U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [7U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [7U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [7U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [7U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [7U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [7U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [7U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [7U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [7U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [7U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [7U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [7U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [7U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [7U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [8U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [8U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [8U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [8U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [8U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [8U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [8U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [8U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [8U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [8U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [8U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [8U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [8U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [8U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [9U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                           << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [9U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                           << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [9U] >> 3U))) 
                            | (~ (IData)((0xfU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [9U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                              << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [9U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                              << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [9U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                              << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                             [9U] >> 3U))) 
                               | (~ (IData)((0xffU 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                              << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                               << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                               << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                               << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0xfffU 
                                              == (0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                               << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                                 << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                                 << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                                 << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffffU 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [9U] 
                                                            >> 1U))))))) 
                                 << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x100000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x14U)));
}
