// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top_div_sqrt_top_mvp.h"
#include "Vazadi_soc_top__Syms.h"

VL_INLINE_OPT void Vazadi_soc_top_div_sqrt_top_mvp::_sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__12(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vazadi_soc_top_div_sqrt_top_mvp::_sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__12\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S 
        = ((((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S) 
             | (0U != (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) 
            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(this->__PVT__Special_case_dly_SB));
}

VL_INLINE_OPT void Vazadi_soc_top_div_sqrt_top_mvp::_combo__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__15(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vazadi_soc_top_div_sqrt_top_mvp::_combo__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__15\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp183;
    CData/*31:0*/ __Vtemp188;
    CData/*31:0*/ __Vtemp199;
    CData/*31:0*/ __Vtemp204;
    CData/*31:0*/ __Vtemp245;
    CData/*31:0*/ __Vtemp250;
    CData/*31:0*/ __Vtemp261;
    CData/*31:0*/ __Vtemp266;
    // Body
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffffeULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | (IData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 1U)) 
                                    | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                               >> 2U)))))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffffdULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 3U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 4U)))))) 
              << 1U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffffbULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 5U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 6U)))))) 
              << 2U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffff7ULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 7U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 8U)))))) 
              << 3U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffffefULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 9U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0xaU)))))) 
              << 4U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffffdfULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0xbU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0xcU)))))) 
              << 5U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffffbfULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0xdU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0xeU)))))) 
              << 6U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffff7fULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0xfU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x10U)))))) 
              << 7U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffeffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x11U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x12U)))))) 
              << 8U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffdffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x13U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x14U)))))) 
              << 9U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffbffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x15U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x16U)))))) 
              << 0xaU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffff7ffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x17U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x18U)))))) 
              << 0xbU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffefffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x19U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x1aU)))))) 
              << 0xcU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffdfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x1bU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x1cU)))))) 
              << 0xdU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffbfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x1dU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x1eU)))))) 
              << 0xeU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffff7fffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x1fU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x20U)))))) 
              << 0xfU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffeffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x21U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x22U)))))) 
              << 0x10U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffdffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x23U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x24U)))))) 
              << 0x11U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffbffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x25U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x26U)))))) 
              << 0x12U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffff7ffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x27U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x28U)))))) 
              << 0x13U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffefffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x29U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x2aU)))))) 
              << 0x14U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffdfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x2bU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x2cU)))))) 
              << 0x15U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffbfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x2dU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x2eU)))))) 
              << 0x16U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffff7fffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x2fU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x30U)))))) 
              << 0x17U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffeffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x31U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x32U)))))) 
              << 0x18U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffdffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x33U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x34U)))))) 
              << 0x19U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffbffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x35U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x36U)))))) 
              << 0x1aU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffff7ffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x37U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x38U)))))) 
              << 0x1bU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffefffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x39U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x3aU)))))) 
              << 0x1cU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffdfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x3bU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x3cU)))))) 
              << 0x1dU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffbfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x3dU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x3eU)))))) 
              << 0x1eU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                      >> 1U))) ? ((
                                                   this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                   << 0x1aU) 
                                                  | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                     >> 6U))
                        : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                            << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
                                         >> 0xcU)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 3U))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                           << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
                                       >> 0x12U)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                           << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
                                     >> 0x18U))) << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 5U))) ? 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                             << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
                                       >> 0x1eU)) : 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                             << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                                          >> 4U))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 7U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                 << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                                              >> 0xaU))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                                              >> 0x10U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 9U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                   << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                                               >> 0x16U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x18U)));
    __Vtemp183 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0xbU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                             >> 2U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                             >> 8U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0xbU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                >> 2U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                >> 8U))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3fffffffU & (__Vtemp183 >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 0xdU))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                           << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                        >> 0xeU)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                           << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                       >> 0x14U))) 
                        << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0xfU)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                               << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
                                         >> 0x1aU))
                           : this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
                         << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 0x11U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                 << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 6U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                 << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 0xcU))) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xf03fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xfc00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x13U)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                  << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 0x12U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                  << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x16U)));
    __Vtemp188 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x15U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                          >> 0x1eU))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                             >> 4U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xf0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x15U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                   << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
                                             >> 0x1eU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                   << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                >> 4U))) 
                             << 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfffffffcU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfffffffU & (__Vtemp188 >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffffff03U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfcU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                       >> 0x17U))) ? 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                          << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 0xaU)) : 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                          << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 0x10U))) 
                       << 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffffc0ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0x3f00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0x19U)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                               << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                           >> 0x16U))
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                               << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
                                         >> 0x1cU))) 
                         << 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfff03fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfc000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x1bU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             >> 2U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             >> 8U))) 
                          << 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfc0fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0x3f00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x1dU)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                  << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                               >> 0xeU))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                  << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                              >> 0x14U))) 
                            << 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x3ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfc000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x1fU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                   << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             >> 0x1aU))
                               : this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
                             << 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                      >> 0x21U))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                         << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                      >> 6U)) : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                  << 0x14U) 
                                                 | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    >> 0xcU)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 0x23U)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                              << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                          >> 0x12U))
                          : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                              << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                        >> 0x18U))) 
                        << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x25U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
                                          >> 0x1eU))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                             >> 4U))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 0x27U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                 << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              >> 0xaU))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              >> 0x10U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x29U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                   << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                               >> 0x16U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
                                             >> 0x1cU))) 
                             << 0x18U)));
    __Vtemp199 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x2bU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                             >> 2U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                             >> 8U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x2bU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                >> 2U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                >> 8U))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x3fffffffU & (__Vtemp199 >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 0x2dU)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                              << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                           >> 0xeU))
                          : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                              << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                          >> 0x14U))) 
                        << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0x2fU)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                               << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
                                         >> 0x1aU))
                           : this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
                         << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 0x31U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                 << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              >> 6U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                 << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              >> 0xcU))) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf03fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xfc00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x33U)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                  << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              >> 0x12U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                  << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                            >> 0x18U))) 
                            << 0x16U)));
    __Vtemp204 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x35U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                          >> 0x1eU))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                             >> 4U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xf0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x35U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                   << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
                                             >> 0x1eU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                   << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                >> 4U))) 
                             << 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xfffffffcU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfffffffU & (__Vtemp204 >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xffffff03U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfcU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                       >> 0x37U))) ? 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                          << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 0xaU)) : 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                          << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 0x10U))) 
                       << 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xffffc0ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0x3f00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0x39U)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                               << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                           >> 0x16U))
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                               << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                         >> 0x1cU))) 
                         << 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xfff03fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfc000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x3bU)))
                            ? (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                               >> 2U) : (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                         >> 8U)) << 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xfc0fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0x3f00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x3dU)))
                              ? (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                 >> 0xeU) : (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                             >> 0x14U)) 
                            << 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffffeULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | (IData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 1U)) 
                                    | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                               >> 2U)))))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffffdULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 3U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 4U)))))) 
              << 1U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffffbULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 5U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 6U)))))) 
              << 2U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffff7ULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 7U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 8U)))))) 
              << 3U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffffefULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 9U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0xaU)))))) 
              << 4U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffffdfULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0xbU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0xcU)))))) 
              << 5U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffffbfULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0xdU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0xeU)))))) 
              << 6U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffff7fULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0xfU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x10U)))))) 
              << 7U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffeffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x11U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x12U)))))) 
              << 8U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffdffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x13U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x14U)))))) 
              << 9U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffffbffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x15U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x16U)))))) 
              << 0xaU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffff7ffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x17U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x18U)))))) 
              << 0xbU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffefffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x19U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x1aU)))))) 
              << 0xcU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffdfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x1bU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x1cU)))))) 
              << 0xdU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffffbfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x1dU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x1eU)))))) 
              << 0xeU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffff7fffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x1fU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x20U)))))) 
              << 0xfU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffeffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x21U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x22U)))))) 
              << 0x10U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffdffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x23U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x24U)))))) 
              << 0x11U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffffbffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x25U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x26U)))))) 
              << 0x12U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffff7ffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x27U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x28U)))))) 
              << 0x13U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffefffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x29U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x2aU)))))) 
              << 0x14U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffdfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x2bU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x2cU)))))) 
              << 0x15U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffffbfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x2dU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x2eU)))))) 
              << 0x16U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffff7fffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x2fU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x30U)))))) 
              << 0x17U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffeffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x31U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x32U)))))) 
              << 0x18U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffdffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x33U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x34U)))))) 
              << 0x19U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffffbffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x35U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x36U)))))) 
              << 0x1aU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffff7ffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x37U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x38U)))))) 
              << 0x1bU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffefffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x39U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x3aU)))))) 
              << 0x1cU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffdfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x3bU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x3cU)))))) 
              << 0x1dU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffffbfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                              >> 0x3dU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                                >> 0x3eU)))))) 
              << 0x1eU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                      >> 1U))) ? ((
                                                   this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                   << 0x1aU) 
                                                  | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                     >> 6U))
                        : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                            << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
                                         >> 0xcU)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 3U))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                           << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
                                       >> 0x12U)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                           << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
                                     >> 0x18U))) << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 5U))) ? 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                             << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
                                       >> 0x1eU)) : 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                             << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                                          >> 4U))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 7U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                 << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                                              >> 0xaU))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                                              >> 0x10U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 9U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                   << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                                               >> 0x16U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x18U)));
    __Vtemp245 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0xbU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                             >> 2U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                             >> 8U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0xbU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                >> 2U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                >> 8U))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3fffffffU & (__Vtemp245 >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 0xdU))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                           << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                        >> 0xeU)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                           << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                       >> 0x14U))) 
                        << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0xfU)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                               << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
                                         >> 0x1aU))
                           : this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
                         << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 0x11U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                 << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 6U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                 << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 0xcU))) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xf03fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xfc00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x13U)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                  << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                              >> 0x12U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                  << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x16U)));
    __Vtemp250 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x15U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                          >> 0x1eU))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                             >> 4U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U] 
        = ((0xfffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[1U]) 
           | (0xf0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x15U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                   << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
                                             >> 0x1eU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                   << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                >> 4U))) 
                             << 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfffffffcU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfffffffU & (__Vtemp250 >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffffff03U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfcU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                       >> 0x17U))) ? 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                          << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 0xaU)) : 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                          << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 0x10U))) 
                       << 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffffc0ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0x3f00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0x19U)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                               << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                           >> 0x16U))
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                               << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
                                         >> 0x1cU))) 
                         << 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfff03fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfc000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x1bU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             >> 2U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             >> 8U))) 
                          << 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xfc0fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0x3f00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x1dU)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                  << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                               >> 0xeU))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                  << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                              >> 0x14U))) 
                            << 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x3ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfc000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x1fU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                   << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             >> 0x1aU))
                               : this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
                             << 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                      >> 0x21U))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                         << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                      >> 6U)) : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                  << 0x14U) 
                                                 | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    >> 0xcU)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 0x23U)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                              << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                          >> 0x12U))
                          : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                              << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                        >> 0x18U))) 
                        << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x25U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
                                          >> 0x1eU))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                             >> 4U))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 0x27U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                 << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              >> 0xaU))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              >> 0x10U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x29U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                   << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                               >> 0x16U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
                                             >> 0x1cU))) 
                             << 0x18U)));
    __Vtemp261 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x2bU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                             >> 2U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                             >> 8U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x2bU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                >> 2U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                >> 8U))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x3fffffffU & (__Vtemp261 >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                        >> 0x2dU)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                              << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                           >> 0xeU))
                          : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                              << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                          >> 0x14U))) 
                        << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0x2fU)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                               << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
                                         >> 0x1aU))
                           : this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
                         << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                           >> 0x31U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                 << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              >> 6U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                 << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              >> 0xcU))) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf03fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xfc00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x33U)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                  << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              >> 0x12U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                  << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                            >> 0x18U))) 
                            << 0x16U)));
    __Vtemp266 = (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x35U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                          >> 0x1eU))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                             >> 4U))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xf0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                             >> 0x35U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                   << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
                                             >> 0x1eU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                   << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                >> 4U))) 
                             << 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xfffffffcU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfffffffU & (__Vtemp266 >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xffffff03U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfcU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                       >> 0x37U))) ? 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                          << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 0xaU)) : 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                          << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 0x10U))) 
                       << 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xffffc0ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0x3f00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                         >> 0x39U)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                               << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                           >> 0x16U))
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                               << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                         >> 0x1cU))) 
                         << 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xfff03fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfc000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                          >> 0x3bU)))
                            ? (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                               >> 2U) : (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                         >> 8U)) << 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0xfc0fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0x3f00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
                                            >> 0x3dU)))
                              ? (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                 >> 0xeU) : (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                             >> 0x14U)) 
                            << 0x14U)));
    if (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S) {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN 
            = ((IData)(this->__PVT__Sqrt_enable_S) ? 
               (((QData)((IData)((1U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [2U] 
                                                >> 0x39U))))) 
                 << 0x39U) | ((0x1fffffffffffffcULL 
                               & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                  [2U] << 2U)) | (QData)((IData)(
                                                                 this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                 [2U]))))
                : this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
               [2U]);
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN 
            = ((IData)(this->__PVT__Sqrt_enable_S) ? 
               ((0x1fffffffffffff8ULL & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                         << 3U)) | (QData)((IData)(
                                                                   (7U 
                                                                    & ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                       >> 1U)))))
                : ((0x1fffffffffffff8ULL & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                            << 3U)) 
                   | (QData)((IData)(((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                       [0U] << 2U) 
                                      | ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                          [1U] << 1U) 
                                         | this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                         [2U]))))));
    } else {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP;
    }
}

VL_INLINE_OPT void Vazadi_soc_top_div_sqrt_top_mvp::_sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__6(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vazadi_soc_top_div_sqrt_top_mvp::_sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__6\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp411[4];
    WData/*127:0*/ __Vtemp412[4];
    WData/*127:0*/ __Vtemp415[4];
    WData/*127:0*/ __Vtemp416[4];
    // Body
    if (vlTOPp->reset_ni) {
        this->__PVT__preprocess_U0__DOT__Exp_b_norm_DP 
            = this->__PVT__preprocess_U0__DOT__Exp_b_norm_DN;
        this->__PVT__Special_case_dly_SB = ((IData)(this->__PVT__Special_case_dly_SB) 
                                            & 1U);
        this->__PVT__preprocess_U0__DOT__SNaN_SP = 
            ((IData)(this->__PVT__preprocess_U0__DOT__SNaN_SN) 
             & 1U);
    } else {
        this->__PVT__preprocess_U0__DOT__Exp_b_norm_DP = 0U;
        this->__PVT__Special_case_dly_SB = 0U;
        this->__PVT__preprocess_U0__DOT__SNaN_SP = 0U;
    }
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S = 0U;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S = 0U;
    if (vlTOPp->reset_ni) {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN;
        this->__PVT__preprocess_U0__DOT__RM_DP = this->__PVT__preprocess_U0__DOT__RM_DN;
        this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP 
            = this->__PVT__preprocess_U0__DOT__Mant_b_norm_DN;
    } else {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP = 0ULL;
        this->__PVT__preprocess_U0__DOT__RM_DP = 0U;
        this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP = 0ULL;
    }
    this->Ready_SO = (1U & ((~ (IData)(vlTOPp->reset_ni)) 
                            | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S) 
                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                               | (IData)(this->Ready_SO))));
    if (vlTOPp->reset_ni) {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S 
            = (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S) 
                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))
                ? 0U : ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                         ? (0x3fU & ((IData)(1U) + (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S)))
                         : 0U));
        this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP 
            = this->__PVT__preprocess_U0__DOT__Exp_a_norm_DN;
        this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
            = this->__PVT__preprocess_U0__DOT__Mant_a_norm_DN;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN;
        this->__PVT__preprocess_U0__DOT__NaN_a_SP = 
            ((IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SN) 
             & 1U);
        this->__PVT__preprocess_U0__DOT__Inf_a_SP = 
            ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SN) 
             & 1U);
        this->__PVT__preprocess_U0__DOT__NaN_b_SP = 
            ((IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SN) 
             & 1U);
        this->__PVT__preprocess_U0__DOT__Zero_a_SP 
            = ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SN) 
               & 1U);
        this->__PVT__preprocess_U0__DOT__Inf_b_SP = 
            ((IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SN) 
             & 1U);
        this->__PVT__preprocess_U0__DOT__Zero_b_SP 
            = ((IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SN) 
               & 1U);
        this->__PVT__preprocess_U0__DOT__Sign_z_DP 
            = ((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DN) 
               & 1U);
        this->__PVT__Div_enable_S = (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                                      & ((~ (IData)(this->Done_SO)) 
                                         & (IData)(this->__PVT__Div_enable_S))) 
                                     & 1U);
        this->__PVT__Sqrt_enable_S = (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                                       & ((~ (IData)(this->Done_SO)) 
                                          & (IData)(this->__PVT__Sqrt_enable_S))) 
                                      & 1U);
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S 
            = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S;
    } else {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S = 0U;
        this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP = 0U;
        this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP = 0ULL;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP = 0U;
        this->__PVT__preprocess_U0__DOT__NaN_a_SP = 0U;
        this->__PVT__preprocess_U0__DOT__Inf_a_SP = 0U;
        this->__PVT__preprocess_U0__DOT__NaN_b_SP = 0U;
        this->__PVT__preprocess_U0__DOT__Zero_a_SP = 0U;
        this->__PVT__preprocess_U0__DOT__Inf_b_SP = 0U;
        this->__PVT__preprocess_U0__DOT__Zero_b_SP = 0U;
        this->__PVT__preprocess_U0__DOT__Sign_z_DP = 0U;
        this->__PVT__Div_enable_S = 0U;
        this->__PVT__Sqrt_enable_S = 0U;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP = 0ULL;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S = 0U;
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S = 0U;
    }
    this->__PVT__preprocess_U0__DOT__Exp_b_norm_DN 
        = this->__PVT__preprocess_U0__DOT__Exp_b_norm_DP;
    this->__PVT__preprocess_U0__DOT__SNaN_SN = this->__PVT__preprocess_U0__DOT__SNaN_SP;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[0U] 
        = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[1U] 
        = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[2U] 
        = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S 
        = ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S) 
           | (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S));
    this->__PVT__preprocess_U0__DOT__RM_DN = this->__PVT__preprocess_U0__DOT__RM_DP;
    this->__PVT__preprocess_U0__DOT__Mant_b_norm_DN 
        = this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP;
    this->__PVT__preprocess_U0__DOT__Exp_a_norm_DN 
        = this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP;
    this->__PVT__preprocess_U0__DOT__Mant_a_norm_DN 
        = this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
        = ((1U & (IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP))
            ? this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP
            : (this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
               << 1U));
    this->__PVT__preprocess_U0__DOT__NaN_a_SN = this->__PVT__preprocess_U0__DOT__NaN_a_SP;
    this->__PVT__preprocess_U0__DOT__Inf_a_SN = this->__PVT__preprocess_U0__DOT__Inf_a_SP;
    this->__PVT__preprocess_U0__DOT__NaN_b_SN = this->__PVT__preprocess_U0__DOT__NaN_b_SP;
    this->__PVT__preprocess_U0__DOT__Zero_a_SN = this->__PVT__preprocess_U0__DOT__Zero_a_SP;
    this->__PVT__preprocess_U0__DOT__Inf_b_SN = this->__PVT__preprocess_U0__DOT__Inf_b_SP;
    this->__PVT__preprocess_U0__DOT__Zero_b_SN = this->__PVT__preprocess_U0__DOT__Zero_b_SP;
    this->__PVT__preprocess_U0__DOT__Sign_z_DN = this->__PVT__preprocess_U0__DOT__Sign_z_DP;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[0U] 
        = this->__PVT__Div_enable_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[1U] 
        = this->__PVT__Div_enable_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[2U] 
        = this->__PVT__Div_enable_S;
    this->Done_SO = ((IData)(vlTOPp->reset_ni) & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[0U] 
        = this->__PVT__Sqrt_enable_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[1U] 
        = this->__PVT__Sqrt_enable_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[2U] 
        = this->__PVT__Sqrt_enable_S;
    this->__PVT__fpu_norm_U0__DOT__Sign_res_D = ((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)) 
                                                 & ((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)) 
                                                    & ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)
                                                        ? 
                                                       ((~ 
                                                         ((IData)(this->__PVT__Div_enable_S) 
                                                          & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))) 
                                                        & ((~ 
                                                            ((IData)(this->__PVT__Sqrt_enable_S) 
                                                             & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))) 
                                                           & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP)))
                                                        : 
                                                       (((IData)(this->__PVT__Div_enable_S) 
                                                         & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))
                                                         ? (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP)
                                                         : 
                                                        ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(this->__PVT__Div_enable_S) 
                                                            & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))) 
                                                          & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))
                                                          : 
                                                         (((IData)(this->__PVT__Div_enable_S) 
                                                           & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                           ? (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP)
                                                           : 
                                                          ((~ 
                                                            ((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                                             & (IData)(this->__PVT__Sqrt_enable_S))) 
                                                           & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))))))));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3 
        = (0x3ffffffffffffffULL & ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                    ? ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (QData)((IData)(
                                                          (0x1fffU 
                                                           & (~ (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3)))))
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (~ (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3))))))
                                    : ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3)
                                        : (QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (~ (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3))))))));
    this->__Vtableidx3 = (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                           << 2U) | (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S 
        = this->__Vtable3___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S
        [this->__Vtableidx3];
    this->__Vtableidx4 = this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE 
        = this->__Vtable4___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
        [this->__Vtableidx4];
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS 
        = this->__Vtable4___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS
        [this->__Vtableidx4];
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D 
        = ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
            ? (((QData)((IData)((0x1ffU & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                   >> 0x2dU))))) 
                << 0x31U) | (((QData)((IData)((1U & 
                                               ((3U 
                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 ? 
                                                (3U 
                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 : (IData)(
                                                           (this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                            >> 0x2cU)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                        >> 0x2aU))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((2U 
                                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (2U 
                                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    : (IData)(
                                                                              (this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                               >> 0x29U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                              >> 0x1dU))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0U 
                                                                          == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (0U 
                                                                          == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          : (IData)(
                                                                                (this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                                >> 0x1cU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffffff0U 
                                                                        & ((IData)(this->__PVT__preprocess_U0__DOT__Mant_a_norm_DP) 
                                                                           << 4U)) 
                                                                       | ((1U 
                                                                           == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                          << 3U))))))))))
            : (((QData)((IData)((0x1ffU & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                   >> 0x30U))))) 
                << 0x31U) | (((QData)((IData)((1U & 
                                               ((3U 
                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 ? (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                 : (IData)(
                                                           (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                            >> 0x2fU)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                        >> 0x2dU))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((2U 
                                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                                    : (IData)(
                                                                              (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                               >> 0x2cU)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                              >> 0x20U))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0U 
                                                                          == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                                          : (IData)(
                                                                                (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffffff0U 
                                                                        & ((IData)(
                                                                                (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                                >> 3U)) 
                                                                           << 4U)) 
                                                                       | (((1U 
                                                                            == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                           & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                                                          << 3U)))))))))));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
        = (0x3fffffffffffffULL & ((0U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                   ? ((QData)((IData)(
                                                      (0x1ffffffU 
                                                       & (~ (IData)(
                                                                    (this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                     >> 0x1dU)))))) 
                                      << 0x1dU) : (
                                                   (1U 
                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                    ? 
                                                   (~ this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP)
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (~ (IData)(
                                                                                (this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                                >> 0x2aU)))))) 
                                                     << 0x2aU)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (~ (IData)(
                                                                                (this->__PVT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                                >> 0x2dU)))))) 
                                                     << 0x2dU)))));
    this->__PVT__Mant_z_D = ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                              ? ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                  ? ((0U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                      ? ((QData)((IData)(
                                                         (0xfffU 
                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                         << 0x2dU) : 
                                     (((7U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                                       | (6U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)))
                                       ? ((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                                      >> 1U))))) 
                                          << 0x31U)
                                       : ((QData)((IData)(
                                                          (0xfffU 
                                                           & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                          << 0x2dU)))
                                  : ((0x20U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                      ? ((QData)((IData)(
                                                         (0x7fffU 
                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                         << 0x2aU) : 
                                     ((0x10U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                       ? ((QData)((IData)(
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                          << 0x2aU)
                                       : ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                           ? ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                               ? ((QData)((IData)(
                                                                  (0x7fffU 
                                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x2aU)
                                               : ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2aU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (IData)(
                                                                               (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                                                >> 1U))))) 
                                                    << 0x2eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (IData)(
                                                                               (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                                                >> 1U))))) 
                                                    << 0x2eU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x30U))))
                                           : ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                               ? ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x30U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x7fffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x2aU))
                                               : ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x7fffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x2aU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2aU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2aU))))))))
                              : ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                  ? ((0x20U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                      ? ((0x10U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                          ? ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                              ? this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP
                                              : ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP
                                                    : 
                                                   (0x1fffffffffffff0ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 3U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   (0x1fffffffffffff0ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 3U))
                                                    : 
                                                   (0x1ffffffffffffc0ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 6U)))
                                                   : 
                                                  (0x1ffffffffffffc0ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 6U)))))
                                          : ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                              ? ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  (0x1fffffffffffe00ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 9U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   (0x1fffffffffffe00ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 9U))
                                                    : 
                                                   (0x1fffffffffff000ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 0xcU))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  (0x1fffffffffff000ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 0xcU))
                                                   : 
                                                  (0x1ffffffffff8000ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 0xfU))))
                                              : ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   (0x1ffffffffff8000ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 0xfU))
                                                    : 
                                                   (0x1fffffffffc0000ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 0x12U)))
                                                   : 
                                                  (0x1fffffffffc0000ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 0x12U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  (0x1ffffffffe00000ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 0x15U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   (0x1ffffffffe00000ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 0x15U))
                                                    : 
                                                   (0x1ffffffff000000ULL 
                                                    & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                       << 0x18U)))))))
                                      : ((0x10U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                          ? ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                              ? ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  (0x1ffffffff000000ULL 
                                                   & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                      << 0x18U))
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x3fffffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x1bU))
                                                  : 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x1bU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x1eU))
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x1eU)))
                                              : ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x21U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x21U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1fffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x24U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x1fffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x24U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x3ffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x27U))))
                                          : ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                              ? ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x27U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2aU))
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x7fffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x2aU))
                                                  : 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x2dU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2dU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x30U))))
                                              : ((4U 
                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x30U)
                                                   : this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                  : this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))))
                                  : ((0x20U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                      ? ((QData)((IData)(
                                                         (0x7ffffffU 
                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                         << 0x1eU) : 
                                     ((0x10U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                       ? ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                           ? ((QData)((IData)(
                                                              (0x7ffffffU 
                                                               & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                              << 0x1eU)
                                           : ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                               ? ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x21U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x21U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1fffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x24U)))
                                               : ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x1fffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x24U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x3ffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x27U))))
                                       : ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                           ? ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                               ? ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x27U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2aU))
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x7fffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x2aU))
                                               : ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x2dU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2dU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x30U))))
                                           : ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                               ? ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x30U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x1eU))
                                               : ((2U 
                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x1eU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x1eU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x1eU)))))))));
    if ((0x20U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
            = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x34U)));
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
            = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x32U)));
        this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
            = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x30U)));
    } else {
        if ((0x10U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
            if ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                    = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x34U)));
                this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                    = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x32U)));
                this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                    = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x30U)));
            } else {
                if ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                        = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x34U)));
                    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                        = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x32U)));
                    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                        = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x30U)));
                } else {
                    if ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x34U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x32U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x30U)));
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                if ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    if ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    }
                } else {
                    if ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 4U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 2U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm));
                        }
                    }
                }
            } else {
                if ((4U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    if ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xaU)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 8U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 6U)));
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x10U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xeU)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xcU)));
                        }
                    } else {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x16U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x14U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x12U)));
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1cU)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1aU)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x18U)));
                        }
                    }
                } else {
                    if ((2U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x22U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x20U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1eU)));
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x28U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x26U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x24U)));
                        }
                    } else {
                        if ((1U & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2eU)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2cU)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2aU)));
                        } else {
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x34U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x32U)));
                            this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x30U)));
                        }
                    }
                }
            }
        }
    }
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S 
        = ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S) 
           == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN 
        = (0x1fffU & ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S)
                       ? ((((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                             ? ((0x2000U & ((IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                            << 2U)) 
                                | ((0x1000U & ((IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                               << 1U)) 
                                   | ((0x800U & (IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP)) 
                                      | (0x7ffU & ((IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                   >> 1U)))))
                             : ((0x2000U & ((IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                            << 2U)) 
                                | ((0x1000U & ((IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                               << 1U)) 
                                   | (IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP)))) 
                           + ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                               ? (1U & (IData)(this->__PVT__preprocess_U0__DOT__Exp_a_norm_DP))
                               : ((0x2000U & ((~ ((IData)(this->__PVT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                  >> 0xbU)) 
                                              << 0xdU)) 
                                  | ((0x1000U & ((~ 
                                                  ((IData)(this->__PVT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                   >> 0xbU)) 
                                                 << 0xcU)) 
                                     | (0xfffU & (~ (IData)(this->__PVT__preprocess_U0__DOT__Exp_b_norm_DP))))))) 
                          + ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                              ? this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                              : this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))
                       : (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0U] 
        = ((IData)(this->__PVT__Sqrt_enable_S) ? ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                                   ? 0ULL
                                                   : this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)
            : this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D);
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB 
        = (((QData)((IData)((0x1ffU & (IData)((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                               >> 0x2dU))))) 
            << 0x31U) | (((QData)((IData)((1U & ((3U 
                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                  ? 
                                                 (3U 
                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                  : (IData)(
                                                            (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                             >> 0x2cU)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (3U 
                                                         & (IData)(
                                                                   (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                    >> 0x2aU))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((2U 
                                                              == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                              ? 
                                                             (2U 
                                                              == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                              : (IData)(
                                                                        (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                         >> 0x29U)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(
                                                                       (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                        >> 0x1dU))))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0U 
                                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (0U 
                                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    : (IData)(
                                                                              (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                               >> 0x1cU)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0xfffffff0U 
                                                                  & ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB) 
                                                                     << 4U)) 
                                                                 | ((1U 
                                                                     == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                    << 3U))))))))));
    this->__PVT__fpu_norm_U0__DOT__Exp_OF_S = (1U & 
                                               ((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)) 
                                                & ((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)) 
                                                   & ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)
                                                       ? 
                                                      ((~ 
                                                        ((IData)(this->__PVT__Div_enable_S) 
                                                         & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))) 
                                                       & (~ 
                                                          ((IData)(this->__PVT__Sqrt_enable_S) 
                                                           & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))))
                                                       : 
                                                      (((IData)(this->__PVT__Div_enable_S) 
                                                        & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP)) 
                                                       | ((~ (IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)) 
                                                          & ((~ 
                                                              ((IData)(this->__PVT__Div_enable_S) 
                                                               & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))) 
                                                             & ((~ 
                                                                 ((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                                                  & (IData)(this->__PVT__Sqrt_enable_S))) 
                                                                & ((0U 
                                                                    != 
                                                                    (0xfffU 
                                                                     & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                   & ((~ 
                                                                       ((1U 
                                                                         == 
                                                                         (0xfffU 
                                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                        & (~ (IData)(
                                                                                (this->__PVT__Mant_z_D 
                                                                                >> 0x38U))))) 
                                                                      & ((~ 
                                                                          ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                           >> 0xcU)) 
                                                                         & (((((((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                                >> 8U) 
                                                                                & (0U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                                               | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                                >> 0xbU) 
                                                                                & (1U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                                              | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                                >> 5U) 
                                                                                & (2U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                                             | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                                >> 8U) 
                                                                                & (3U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                                            | ((((((0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                                & (0U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                                                | ((0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                                & (1U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                                & (2U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                                                | ((0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                                & (3U 
                                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                                               & (IData)(
                                                                                (this->__PVT__Mant_z_D 
                                                                                >> 0x38U)))))))))))))));
    this->__PVT__fpu_norm_U0__DOT__Exp_res_norm_D = 
        ((IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)
          ? 0x7ffU : ((IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)
                       ? 0x7ffU : ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)
                                    ? 0x7ffU : (((IData)(this->__PVT__Div_enable_S) 
                                                 & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))
                                                 ? 0U
                                                 : 
                                                (0x7ffU 
                                                 & ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)
                                                     ? 
                                                    (((IData)(this->__PVT__Div_enable_S) 
                                                      & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                      ? 0x7ffU
                                                      : 0U)
                                                     : 
                                                    (((IData)(this->__PVT__Div_enable_S) 
                                                      & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                      ? 0x7ffU
                                                      : 
                                                     (((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                                       & (IData)(this->__PVT__Sqrt_enable_S))
                                                       ? 0x7ffU
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                        ? 0U
                                                        : 
                                                       (((1U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                         & (~ (IData)(
                                                                      (this->__PVT__Mant_z_D 
                                                                       >> 0x38U))))
                                                         ? 0U
                                                         : 
                                                        ((0x1000U 
                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))
                                                          ? 0U
                                                          : 
                                                         (((((((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                               >> 8U) 
                                                              & (0U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                             | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                 >> 0xbU) 
                                                                & (1U 
                                                                   == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                            | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                >> 5U) 
                                                               & (2U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                               >> 8U) 
                                                              & (3U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                           ? 0x7ffU
                                                           : 
                                                          ((((((0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                               & (0U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                              | ((0x7ffU 
                                                                  == 
                                                                  (0x7ffU 
                                                                   & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                 & (1U 
                                                                    == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                             | ((0x1fU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                & (2U 
                                                                   == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                            | ((0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                               & (3U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(
                                                                       (this->__PVT__Mant_z_D 
                                                                        >> 0x38U)))
                                                             ? 0x7ffU
                                                             : 
                                                            (VL_EXTENDS_II(11,13, (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                                             - (IData)(1U)))
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (this->__PVT__Mant_z_D 
                                                                        >> 0x38U)))
                                                             ? (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)
                                                             : 
                                                            (VL_EXTENDS_II(11,13, (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                                             - (IData)(1U))))))))))))))));
    __Vtemp411[0U] = 0U;
    __Vtemp411[1U] = (0xffe00000U & ((IData)(this->__PVT__Mant_z_D) 
                                     << 0x15U));
    __Vtemp411[2U] = ((0x1fffffU & ((IData)(this->__PVT__Mant_z_D) 
                                    >> 0xbU)) | (0xffe00000U 
                                                 & ((IData)(
                                                            (this->__PVT__Mant_z_D 
                                                             >> 0x20U)) 
                                                    << 0x15U)));
    __Vtemp411[3U] = (0x1fffffU & ((IData)((this->__PVT__Mant_z_D 
                                            >> 0x20U)) 
                                   >> 0xbU));
    VL_SHIFTR_WWI(110,110,13, __Vtemp412, __Vtemp411, 
                  (0x1fffU & ((IData)(2U) + (~ VL_EXTENDS_II(13,13, (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
    this->__PVT__fpu_norm_U0__DOT__Mant_forround_D 
        = ((IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)
            ? 0ULL : ((IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)
                       ? 0ULL : ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)
                                  ? 0ULL : (((IData)(this->__PVT__Div_enable_S) 
                                             & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))
                                             ? 0ULL
                                             : ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)
                                                 ? 0ULL
                                                 : 
                                                (((IData)(this->__PVT__Div_enable_S) 
                                                  & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                  ? 0ULL
                                                  : 
                                                 (((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                                   & (IData)(this->__PVT__Sqrt_enable_S))
                                                   ? 0ULL
                                                   : 
                                                  (0x1ffffffffffffffULL 
                                                   & ((0U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                       ? 
                                                      ((0ULL 
                                                        != this->__PVT__Mant_z_D)
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (IData)(this->__PVT__Mant_z_D)))) 
                                                        << 0x34U)
                                                        : 0ULL)
                                                       : 
                                                      (((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                        & (~ (IData)(
                                                                     (this->__PVT__Mant_z_D 
                                                                      >> 0x38U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(this->__PVT__Mant_z_D)))) 
                                                        << 0x35U)
                                                        : 
                                                       ((0x1000U 
                                                         & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          __Vtemp412[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           __Vtemp412[0U])))
                                                         : 
                                                        (((((((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (0U 
                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                            | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                               >> 5U) 
                                                              & (2U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                          | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (3U 
                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                          ? 0ULL
                                                          : 
                                                         ((((((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (0U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                             | ((0x7ffU 
                                                                 == 
                                                                 (0x7ffU 
                                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                & (1U 
                                                                   == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                            | ((0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                               & (2U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (3U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (this->__PVT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(
                                                                            (7U 
                                                                             & (IData)(this->__PVT__Mant_z_D)))) 
                                                            << 0x36U))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (this->__PVT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 
                                                           ((QData)((IData)(
                                                                            (0xfU 
                                                                             & (IData)(this->__PVT__Mant_z_D)))) 
                                                            << 0x35U)
                                                            : 
                                                           ((QData)((IData)(
                                                                            (7U 
                                                                             & (IData)(this->__PVT__Mant_z_D)))) 
                                                            << 0x36U)))))))))))))));
    __Vtemp415[0U] = 0U;
    __Vtemp415[1U] = (0xffe00000U & ((IData)(this->__PVT__Mant_z_D) 
                                     << 0x15U));
    __Vtemp415[2U] = ((0x1fffffU & ((IData)(this->__PVT__Mant_z_D) 
                                    >> 0xbU)) | (0xffe00000U 
                                                 & ((IData)(
                                                            (this->__PVT__Mant_z_D 
                                                             >> 0x20U)) 
                                                    << 0x15U)));
    __Vtemp415[3U] = (0x1fffffU & ((IData)((this->__PVT__Mant_z_D 
                                            >> 0x20U)) 
                                   >> 0xbU));
    VL_SHIFTR_WWI(110,110,13, __Vtemp416, __Vtemp415, 
                  (0x1fffU & ((IData)(2U) + (~ VL_EXTENDS_II(13,13, (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
    this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
        = ((IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)
            ? 0x8000000000000ULL : ((IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)
                                     ? 0x8000000000000ULL
                                     : (0x1fffffffffffffULL 
                                        & ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)
                                            ? (((IData)(this->__PVT__Div_enable_S) 
                                                & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))
                                                ? 0x8000000000000ULL
                                                : (
                                                   ((IData)(this->__PVT__Sqrt_enable_S) 
                                                    & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))
                                                    ? 0x8000000000000ULL
                                                    : 0ULL))
                                            : (((IData)(this->__PVT__Div_enable_S) 
                                                & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))
                                                ? 0ULL
                                                : ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)
                                                    ? 
                                                   (((IData)(this->__PVT__Div_enable_S) 
                                                     & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                     ? 0x8000000000000ULL
                                                     : 0ULL)
                                                    : 
                                                   (((IData)(this->__PVT__Div_enable_S) 
                                                     & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                     ? 0ULL
                                                     : 
                                                    (((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                                      & (IData)(this->__PVT__Sqrt_enable_S))
                                                      ? 0x8000000000000ULL
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                       ? 
                                                      ((0ULL 
                                                        != this->__PVT__Mant_z_D)
                                                        ? 
                                                       (0xfffffffffffffULL 
                                                        & (this->__PVT__Mant_z_D 
                                                           >> 5U))
                                                        : 0ULL)
                                                       : 
                                                      (((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                        & (~ (IData)(
                                                                     (this->__PVT__Mant_z_D 
                                                                      >> 0x38U))))
                                                        ? 
                                                       (this->__PVT__Mant_z_D 
                                                        >> 4U)
                                                        : 
                                                       ((0x1000U 
                                                         & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (0x3fffU 
                                                                           & __Vtemp416[3U]))) 
                                                          << 0x27U) 
                                                         | (((QData)((IData)(
                                                                             __Vtemp416[2U])) 
                                                             << 7U) 
                                                            | ((QData)((IData)(
                                                                               __Vtemp416[1U])) 
                                                               >> 0x19U)))
                                                         : 
                                                        (((((((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (0U 
                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                            | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                               >> 5U) 
                                                              & (2U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                          | (((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (3U 
                                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                          ? 0ULL
                                                          : 
                                                         ((((((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (0U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                             | ((0x7ffU 
                                                                 == 
                                                                 (0x7ffU 
                                                                  & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                & (1U 
                                                                   == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                            | ((0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                               & (2U 
                                                                  == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (3U 
                                                                 == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (this->__PVT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 0ULL
                                                            : 
                                                           (this->__PVT__Mant_z_D 
                                                            >> 3U))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (this->__PVT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 
                                                           (this->__PVT__Mant_z_D 
                                                            >> 4U)
                                                            : 
                                                           (this->__PVT__Mant_z_D 
                                                            >> 3U)))))))))))))));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D 
        = ((~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
            [0U]) & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                     [0U] & ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [0U] >> 1U) | this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [0U])));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D 
        = ((~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
            [1U]) & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                     [1U] & ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [1U] >> 1U) | this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [1U])));
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D 
        = ((~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
            [2U]) & (this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                     [2U] & ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [2U] >> 1U) | this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [2U])));
    this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [0U])));
    this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [0U] >> 1U) ^ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [0U])) << 1U)));
    this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [1U])));
    this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [1U] >> 1U) ^ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [1U])) << 1U)));
    this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [2U])));
    this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [2U] >> 1U) ^ this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [2U])) << 1U)));
    if ((0U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) {
        this->__PVT__fpu_norm_U0__DOT__Mant_upper_D 
            = ((QData)((IData)((0xffffffU & (IData)(
                                                    (this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                     >> 0x1dU))))) 
               << 0x1dU);
        this->__PVT__fpu_norm_U0__DOT__Mant_lower_D 
            = (3U & (IData)((this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                             >> 0x1bU)));
        this->__PVT__fpu_norm_U0__DOT__Mant_sticky_bit_D 
            = (0U != (0x7ffffffU & (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D)));
    } else {
        this->__PVT__fpu_norm_U0__DOT__Mant_upper_D 
            = ((1U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D
                : ((2U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                    ? ((QData)((IData)((0x7ffU & (IData)(
                                                         (this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                          >> 0x2aU))))) 
                       << 0x2aU) : ((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                                >> 0x2dU))))) 
                                    << 0x2dU)));
        this->__PVT__fpu_norm_U0__DOT__Mant_lower_D 
            = (3U & ((1U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                      ? (IData)((this->__PVT__fpu_norm_U0__DOT__Mant_forround_D 
                                 >> 0x37U)) : ((2U 
                                                == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                ? (IData)(
                                                          (this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                           >> 0x28U))
                                                : (IData)(
                                                          (this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                           >> 0x2bU)))));
        this->__PVT__fpu_norm_U0__DOT__Mant_sticky_bit_D 
            = ((1U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? (0U != (0xffffffffffffffULL & this->__PVT__fpu_norm_U0__DOT__Mant_forround_D))
                : ((2U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                    ? (0U != (0x3ffU & (IData)((this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                >> 0x1eU))))
                    : (0U != (0x1fffU & (IData)((this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                 >> 0x1eU))))));
    }
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[0U] 
        = this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[1U] 
        = this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO;
    this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[2U] 
        = this->nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO;
    this->__PVT__fpu_norm_U0__DOT__Mant_rounded_S = 
        ((0U != (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_lower_D)) 
         | (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_sticky_bit_D));
    this->Fflags_SO = ((((IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)
                          ? (IData)(this->__PVT__preprocess_U0__DOT__SNaN_SP)
                          : ((IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)
                              ? (IData)(this->__PVT__preprocess_U0__DOT__SNaN_SP)
                              : ((IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)
                                  ? (((IData)(this->__PVT__Div_enable_S) 
                                      & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP)) 
                                     | ((IData)(this->__PVT__Sqrt_enable_S) 
                                        & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP)))
                                  : ((~ ((IData)(this->__PVT__Div_enable_S) 
                                         & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))) 
                                     & ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)
                                         ? ((IData)(this->__PVT__Div_enable_S) 
                                            & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                         : ((~ ((IData)(this->__PVT__Div_enable_S) 
                                                & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))) 
                                            & ((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                               & (IData)(this->__PVT__Sqrt_enable_S)))))))) 
                        << 4U) | ((((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)) 
                                    & ((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)) 
                                       & ((~ (IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)) 
                                          & ((~ ((IData)(this->__PVT__Div_enable_S) 
                                                 & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))) 
                                             & ((IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)
                                                 ? 
                                                ((IData)(this->__PVT__Div_enable_S) 
                                                 & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))
                                                 : 
                                                ((IData)(this->__PVT__Div_enable_S) 
                                                 & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))))))) 
                                   << 3U) | (((IData)(this->__PVT__fpu_norm_U0__DOT__Exp_OF_S) 
                                              << 2U) 
                                             | ((2U 
                                                 & (((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_a_SP)) 
                                                     & ((~ (IData)(this->__PVT__preprocess_U0__DOT__NaN_b_SP)) 
                                                        & ((~ (IData)(this->__PVT__preprocess_U0__DOT__Inf_a_SP)) 
                                                           & ((~ 
                                                               ((IData)(this->__PVT__Div_enable_S) 
                                                                & (IData)(this->__PVT__preprocess_U0__DOT__Inf_b_SP))) 
                                                              & ((~ (IData)(this->__PVT__preprocess_U0__DOT__Zero_a_SP)) 
                                                                 & ((~ 
                                                                     ((IData)(this->__PVT__Div_enable_S) 
                                                                      & (IData)(this->__PVT__preprocess_U0__DOT__Zero_b_SP))) 
                                                                    & ((~ 
                                                                        ((IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP) 
                                                                         & (IData)(this->__PVT__Sqrt_enable_S))) 
                                                                       & ((0U 
                                                                           == 
                                                                           (0xfffU 
                                                                            & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                                           ? 
                                                                          (0ULL 
                                                                           != this->__PVT__Mant_z_D)
                                                                           : 
                                                                          (((1U 
                                                                             == 
                                                                             (0xfffU 
                                                                              & (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                            & (~ (IData)(
                                                                                (this->__PVT__Mant_z_D 
                                                                                >> 0x38U)))) 
                                                                           | ((IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                              >> 0xcU)))))))))) 
                                                    << 1U)) 
                                                | ((0U 
                                                    != (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                                                   | (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_rounded_S))))));
    this->__PVT__fpu_norm_U0__DOT__Mant_roundUp_S = 
        (1U & ((~ ((IData)(this->__PVT__preprocess_U0__DOT__RM_DP) 
                   >> 2U)) & ((2U & (IData)(this->__PVT__preprocess_U0__DOT__RM_DP))
                               ? ((1U & (IData)(this->__PVT__preprocess_U0__DOT__RM_DP))
                                   ? ((IData)(this->__PVT__fpu_norm_U0__DOT__Mant_rounded_S) 
                                      & (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))
                                   : ((IData)(this->__PVT__fpu_norm_U0__DOT__Mant_rounded_S) 
                                      & (~ (IData)(this->__PVT__preprocess_U0__DOT__Sign_z_DP))))
                               : ((~ (IData)(this->__PVT__preprocess_U0__DOT__RM_DP)) 
                                  & (((IData)(this->__PVT__fpu_norm_U0__DOT__Mant_lower_D) 
                                      >> 1U) & (((IData)(this->__PVT__fpu_norm_U0__DOT__Mant_lower_D) 
                                                 | (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_sticky_bit_D)) 
                                                | (((((0U 
                                                       == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                      & (IData)(
                                                                (this->__PVT__fpu_norm_U0__DOT__Mant_upper_D 
                                                                 >> 0x1dU))) 
                                                     | ((1U 
                                                         == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                        & (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_upper_D))) 
                                                    | ((2U 
                                                        == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                       & (IData)(
                                                                 (this->__PVT__fpu_norm_U0__DOT__Mant_upper_D 
                                                                  >> 0x2aU)))) 
                                                   | ((3U 
                                                       == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                      & (IData)(
                                                                (this->__PVT__fpu_norm_U0__DOT__Mant_upper_D 
                                                                 >> 0x2dU))))))))));
    this->__PVT__fpu_norm_U0__DOT__Mant_upperRounded_D 
        = (0x3fffffffffffffULL & (this->__PVT__fpu_norm_U0__DOT__Mant_upper_D 
                                  + (((QData)((IData)(
                                                      ((3U 
                                                        == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                       & (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    ((2U 
                                                                      == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                     & (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                                    << 0x2aU) 
                                                   | (QData)((IData)(
                                                                     ((((0U 
                                                                         == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                        & (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_roundUp_S)) 
                                                                       << 0x1dU) 
                                                                      | ((1U 
                                                                          == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                         & (IData)(this->__PVT__fpu_norm_U0__DOT__Mant_roundUp_S)))))))));
    if ((0U == (IData)(this->__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))) {
        this->__PVT__fpu_norm_U0__DOT__Mant_before_format_ctl_D 
            = (0xfffffffffffffULL & (0xfffffffffffffULL 
                                     & ((1U & (IData)(
                                                      (this->__PVT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                       >> 0x35U)))
                                         ? (this->__PVT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                            >> 1U) : this->__PVT__fpu_norm_U0__DOT__Mant_upperRounded_D)));
        this->__PVT__fpu_norm_U0__DOT__Exp_before_format_ctl_D 
            = (0x7ffU & ((IData)(this->__PVT__fpu_norm_U0__DOT__Exp_res_norm_D) 
                         + (1U & (IData)((this->__PVT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                          >> 0x35U)))));
    } else {
        this->__PVT__fpu_norm_U0__DOT__Mant_before_format_ctl_D 
            = (0xfffffffffffffULL & this->__PVT__fpu_norm_U0__DOT__Mant_res_norm_D);
        this->__PVT__fpu_norm_U0__DOT__Exp_before_format_ctl_D 
            = (0x7ffU & (IData)(this->__PVT__fpu_norm_U0__DOT__Exp_res_norm_D));
    }
}

VL_INLINE_OPT void Vazadi_soc_top_div_sqrt_top_mvp::_multiclk__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__10(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vazadi_soc_top_div_sqrt_top_mvp::_multiclk__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__10\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))) {
        this->__PVT__preprocess_U0__DOT__Sign_a_D = 
            (1U & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                    ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                       >> 0xfU) : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                   >> 0xfU)));
        this->__PVT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0xffU == (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                       << 0x19U) | 
                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                       >> 7U)))) : 
               (0x1fU == (0x1fU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                    << 0x16U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                 >> 0xaU)))));
        this->__PVT__preprocess_U0__DOT__Mant_b_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0U == (0x7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))
                : (0U == (0x3ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])));
        this->__PVT__preprocess_U0__DOT__Mant_a_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0U == (0x7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))
                : (0U == (0x3ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])));
        this->__PVT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0xffU == (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                       << 0x19U) | 
                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                       >> 7U)))) : 
               (0x1fU == (0x1fU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                    << 0x16U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0xaU)))));
        this->__PVT__preprocess_U0__DOT__Exp_a_D = 
            (0x7ffU & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                        ? (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                     << 0x19U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                  >> 7U)))
                        : (0x1fU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                     << 0x16U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                  >> 0xaU)))));
        this->__PVT__preprocess_U0__DOT__Exp_b_D = 
            (0x7ffU & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                        ? (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                     << 0x19U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                  >> 7U)))
                        : (0x1fU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                     << 0x16U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                  >> 0xaU)))));
        this->__PVT__preprocess_U0__DOT__Mant_a_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? ((QData)((IData)(
                                                         (0x7fU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                         << 0x2dU) : 
                                     ((QData)((IData)(
                                                      (0x3ffU 
                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                      << 0x2aU)));
        this->__PVT__preprocess_U0__DOT__Mant_b_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? ((QData)((IData)(
                                                         (0x7fU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                         << 0x2dU) : 
                                     ((QData)((IData)(
                                                      (0x3ffU 
                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                      << 0x2aU)));
    } else {
        this->__PVT__preprocess_U0__DOT__Sign_a_D = 
            (1U & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                    ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                       >> 0x1fU) : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                    >> 0x1fU)));
        this->__PVT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0x7ffU == (0x7ffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                         << 0xcU) | 
                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                         >> 0x14U))))
                : (0xffU == (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                       << 9U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                 >> 0x17U)))));
        this->__PVT__preprocess_U0__DOT__Mant_b_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0ULL == (0xfffffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))))
                : (0U == (0x7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])));
        this->__PVT__preprocess_U0__DOT__Mant_a_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0ULL == (0xfffffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))))
                : (0U == (0x7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])));
        this->__PVT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0x7ffU == (0x7ffU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                        >> 0x14U)))
                : (0xffU == (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                       << 9U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0x17U)))));
        this->__PVT__preprocess_U0__DOT__Exp_a_D = 
            (0x7ffU & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                        ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                            << 0xcU) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                        >> 0x14U)) : 
                       (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                  << 9U) | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                            >> 0x17U)))));
        this->__PVT__preprocess_U0__DOT__Exp_b_D = 
            (0x7ffU & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                        ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                           >> 0x14U) : (0xffU & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                  << 9U) 
                                                 | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                    >> 0x17U)))));
        this->__PVT__preprocess_U0__DOT__Mant_a_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? (((QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))
                                      : ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                         << 0x1dU)));
        this->__PVT__preprocess_U0__DOT__Mant_b_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? (((QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))
                                      : ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                         << 0x1dU)));
    }
    this->__PVT__preprocess_U0__DOT__Mant_a_D = (((QData)((IData)(
                                                                  (0U 
                                                                   != (IData)(this->__PVT__preprocess_U0__DOT__Exp_a_D)))) 
                                                  << 0x34U) 
                                                 | this->__PVT__preprocess_U0__DOT__Mant_a_NonH_D);
    this->__PVT__preprocess_U0__DOT__Mant_b_D = (((QData)((IData)(
                                                                  (0U 
                                                                   != (IData)(this->__PVT__preprocess_U0__DOT__Exp_b_D)))) 
                                                  << 0x34U) 
                                                 | this->__PVT__preprocess_U0__DOT__Mant_b_NonH_D);
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x34U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffeULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x33U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffdULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 1U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x32U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffbULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 2U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x31U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffff7ULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 3U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x30U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffefULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 4U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x2fU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffdfULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 5U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x2eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffbfULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 6U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x2dU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffff7fULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 7U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x2cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffeffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 8U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x2bU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffdffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 9U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x2aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffbffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0xaU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x29U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffff7ffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0xbU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x28U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffefffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0xcU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x27U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffdfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0xdU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x26U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffbfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0xeU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x25U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffff7fffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0xfU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x24U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffeffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x10U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x23U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffdffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x11U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x22U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffbffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x12U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x21U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffff7ffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x13U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x20U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffefffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x14U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x1fU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffdfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x15U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffbfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x16U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x1dU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffff7fffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x17U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffeffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x18U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x1bU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x19U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x1aU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x19U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7ffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x1bU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x18U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffefffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x1cU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x17U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x1dU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x16U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x1eU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x15U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7fffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x1fU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffeffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x20U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x13U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x21U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x22U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x11U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7ffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x23U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffefffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x24U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0xfU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x25U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x26U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0xdU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7fffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x27U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffeffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x28U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0xbU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x29U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x2aU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 9U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7ffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x2bU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fefffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x2cU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 7U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x2dU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x2eU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 5U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7fffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x2fU));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1effffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x30U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 3U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x31U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x32U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_a_D 
                         >> 1U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17ffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x33U));
    this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__preprocess_U0__DOT__Mant_a_D));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1)) 
              << 0x34U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x34U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffeULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x33U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffdULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 1U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x32U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffbULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 2U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x31U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffff7ULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 3U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x30U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffefULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 4U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x2fU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffdfULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 5U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x2eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffbfULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 6U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x2dU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffff7fULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 7U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x2cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffeffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 8U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x2bU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffdffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 9U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x2aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffbffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0xaU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x29U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffff7ffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0xbU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x28U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffefffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0xcU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x27U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffdfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0xdU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x26U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffbfffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0xeU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x25U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffff7fffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0xfU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x24U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffeffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x10U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x23U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffdffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x11U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x22U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffbffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x12U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x21U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffff7ffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x13U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x20U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffefffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x14U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x1fU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffdfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x15U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffbfffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x16U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x1dU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffff7fffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x17U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffeffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x18U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x1bU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x19U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x1aU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x19U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7ffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x1bU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x18U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffefffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x1cU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x17U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x1dU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x16U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbfffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x1eU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x15U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7fffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x1fU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffeffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x20U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x13U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x21U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x22U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x11U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7ffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x23U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffefffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x24U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0xfU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x25U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x26U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0xdU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7fffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x27U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffeffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x28U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0xbU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x29U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x2aU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 9U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7ffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x2bU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fefffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x2cU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 7U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x2dU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x2eU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 5U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7fffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x2fU));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1effffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x30U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 3U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x31U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x32U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)((this->__PVT__preprocess_U0__DOT__Mant_b_D 
                         >> 1U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17ffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x33U));
    this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__preprocess_U0__DOT__Mant_b_D));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(this->preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1)) 
              << 0x34U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0x3ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfc000000U & (((1U & (IData)(this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp))
                               ? this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[0U]
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                   << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[0U] 
                                                >> 6U))) 
                             << 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                      >> 2U))) ? ((
                                                   this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                                   << 0x14U) 
                                                  | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[0U] 
                                                     >> 0xcU))
                        : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                            << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[0U] 
                                        >> 0x12U)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                        >> 4U))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                           << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[0U] 
                                     >> 0x18U)) : (
                                                   (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                                    << 2U) 
                                                   | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[0U] 
                                                      >> 0x1eU))) 
                        << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                          >> 6U))) ? 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                             << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                          >> 4U)) : 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                             << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                          >> 0xaU))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                           >> 8U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                              >> 0x10U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                 << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                             >> 0x16U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0xaU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[1U] 
                                             >> 0x1cU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                                >> 2U))) 
                             << 0x18U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0xcU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                                >> 8U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                   << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                                >> 0xeU))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xfU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                      >> 0xcU))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                         << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                      >> 8U)) : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                                  << 0x12U) 
                                                 | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                                    >> 0xeU))) 
                      >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                        >> 0xeU))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                           << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                       >> 0x14U)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                           << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[2U] 
                                     >> 0x1aU))) << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                         >> 0x10U)))
                           ? this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U]
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                               << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                            >> 6U))) 
                         << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x12U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                 << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                              >> 0xcU))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                 << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                             >> 0x12U))) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xf03fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xfc00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                            >> 0x14U)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                  << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                            >> 0x18U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                  << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[3U] 
                                            >> 0x1eU))) 
                            << 0x16U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xfffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xf0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x16U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                   << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                                >> 4U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                   << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                                >> 0xaU))) 
                             << 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xfffffffcU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (3U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                    >> 0x16U))) ? (
                                                   (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                                    << 0x1cU) 
                                                   | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                                      >> 4U))
                      : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                          << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                       >> 0xaU))) >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xffffff03U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0xfcU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                       >> 0x18U))) ? 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                          << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                       >> 0x10U)) : 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                          << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                      >> 0x16U))) << 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xffffc0ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0x3f00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                         >> 0x1aU)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                               << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[4U] 
                                         >> 0x1cU))
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                               << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                            >> 2U))) 
                         << 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xfff03fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0xfc000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                          >> 0x1cU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                             >> 8U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                             >> 0xeU))) 
                          << 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xfc0fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0x3f00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                            >> 0x1eU)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                  << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                              >> 0x14U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                  << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[5U] 
                                            >> 0x1aU))) 
                            << 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0x3ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0xfc000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x20U)))
                               ? this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U]
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                   << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                                >> 6U))) 
                             << 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                      >> 0x22U))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                         << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                      >> 0xcU)) : (
                                                   (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                                    << 0xeU) 
                                                   | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                                      >> 0x12U)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                        >> 0x24U)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                              << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                        >> 0x18U)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                           << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[6U] 
                                     >> 0x1eU))) << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                          >> 0x26U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 4U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 0xaU))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x28U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                              >> 0x10U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                 << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 0x16U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x2aU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 0x1cU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                                >> 2U))) 
                             << 0x18U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x2cU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                                >> 8U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                                   << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                                >> 0xeU))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0xfU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                      >> 0x2cU))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                         << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                      >> 8U)) : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                                                  << 0x12U) 
                                                 | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                                    >> 0xeU))) 
                      >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                        >> 0x2eU)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                              << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                          >> 0x14U))
                          : ((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                              << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[8U] 
                                        >> 0x1aU))) 
                        << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                         >> 0x30U)))
                           ? this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U]
                           : (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                              >> 6U)) << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x32U)))
                             ? (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                                >> 0xcU) : (this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[9U] 
                                            >> 0x12U)) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffff7fffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)(this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 1U)))))) 
              << 0x1fU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffeffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 2U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 3U)))))) 
              << 0x20U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffdffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 4U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 5U)))))) 
              << 0x21U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffbffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 6U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 7U)))))) 
              << 0x22U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffff7ffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 8U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 9U)))))) 
              << 0x23U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffefffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0xaU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0xbU)))))) 
              << 0x24U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffdfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0xcU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0xdU)))))) 
              << 0x25U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffbfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0xeU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0xfU)))))) 
              << 0x26U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffff7fffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x10U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x11U)))))) 
              << 0x27U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffeffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x12U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x13U)))))) 
              << 0x28U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffdffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x14U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x15U)))))) 
              << 0x29U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffbffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x16U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x17U)))))) 
              << 0x2aU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffff7ffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x18U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x19U)))))) 
              << 0x2bU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffefffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x1aU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x1bU)))))) 
              << 0x2cU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffdfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x1cU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x1dU)))))) 
              << 0x2dU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffbfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x1eU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x1fU)))))) 
              << 0x2eU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffff7fffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x20U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x21U)))))) 
              << 0x2fU));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffeffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x22U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x23U)))))) 
              << 0x30U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffdffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x24U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x25U)))))) 
              << 0x31U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffbffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x26U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x27U)))))) 
              << 0x32U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfff7ffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x28U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x29U)))))) 
              << 0x33U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffefffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x2aU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x2bU)))))) 
              << 0x34U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffdfffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x2cU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x2dU)))))) 
              << 0x35U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffbfffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x2eU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x2fU)))))) 
              << 0x36U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xff7fffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x30U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x31U)))))) 
              << 0x37U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfeffffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x32U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x33U)))))) 
              << 0x38U));
    this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfdffffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x34U))))) 
              << 0x39U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U] 
        = ((0x3ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[5U]) 
           | (0xfc000000U & (((1U & (IData)(this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp))
                               ? this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[0U]
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                   << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[0U] 
                                                >> 6U))) 
                             << 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                      >> 2U))) ? ((
                                                   this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                                   << 0x14U) 
                                                  | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[0U] 
                                                     >> 0xcU))
                        : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                            << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[0U] 
                                        >> 0x12U)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                        >> 4U))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                           << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[0U] 
                                     >> 0x18U)) : (
                                                   (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                                    << 2U) 
                                                   | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[0U] 
                                                      >> 0x1eU))) 
                        << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                          >> 6U))) ? 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                             << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                          >> 4U)) : 
                           ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                             << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                          >> 0xaU))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                           >> 8U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                              >> 0x10U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                 << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                             >> 0x16U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0xaU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[1U] 
                                             >> 0x1cU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                                >> 2U))) 
                             << 0x18U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[6U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0xcU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                                >> 8U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                   << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                                >> 0xeU))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xfU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                      >> 0xcU))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                         << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                      >> 8U)) : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                                  << 0x12U) 
                                                 | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                                    >> 0xeU))) 
                      >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                        >> 0xeU))) ? 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                           << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                       >> 0x14U)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                           << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[2U] 
                                     >> 0x1aU))) << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                         >> 0x10U)))
                           ? this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U]
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                               << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                            >> 6U))) 
                         << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x12U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                 << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                              >> 0xcU))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                 << 0xeU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                             >> 0x12U))) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xf03fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xfc00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                            >> 0x14U)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                  << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                            >> 0x18U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                  << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[3U] 
                                            >> 0x1eU))) 
                            << 0x16U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U] 
        = ((0xfffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[7U]) 
           | (0xf0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x16U)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                   << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                                >> 4U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                   << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                                >> 0xaU))) 
                             << 0x1cU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xfffffffcU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (3U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                    >> 0x16U))) ? (
                                                   (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                                    << 0x1cU) 
                                                   | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                                      >> 4U))
                      : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                          << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                       >> 0xaU))) >> 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xffffff03U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0xfcU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                       >> 0x18U))) ? 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                          << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                       >> 0x10U)) : 
                        ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                          << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                      >> 0x16U))) << 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xffffc0ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0x3f00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                         >> 0x1aU)))
                           ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                               << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[4U] 
                                         >> 0x1cU))
                           : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                               << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                            >> 2U))) 
                         << 8U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xfff03fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0xfc000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                          >> 0x1cU)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                             >> 8U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                             >> 0xeU))) 
                          << 0xeU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0xfc0fffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0x3f00000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                            >> 0x1eU)))
                              ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                  << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                              >> 0x14U))
                              : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                  << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[5U] 
                                            >> 0x1aU))) 
                            << 0x14U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U] 
        = ((0x3ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[8U]) 
           | (0xfc000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x20U)))
                               ? this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U]
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                   << 0x1aU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                                >> 6U))) 
                             << 0x1aU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xffffffc0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0x3fU & ((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                      >> 0x22U))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                         << 0x14U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                      >> 0xcU)) : (
                                                   (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                                    << 0xeU) 
                                                   | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                                      >> 0x12U)))));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xfffff03fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0xfc0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                        >> 0x24U)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                              << 8U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                        >> 0x18U)) : 
                         ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                           << 2U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[6U] 
                                     >> 0x1eU))) << 6U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xfffc0fffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0x3f000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                          >> 0x26U)))
                            ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                << 0x1cU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 4U))
                            : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                << 0x16U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 0xaU))) 
                          << 0xcU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xff03ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0xfc0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x28U)))
                             ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                 << 0x10U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                              >> 0x10U))
                             : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                 << 0xaU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 0x16U))) 
                           << 0x12U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0xc0ffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0x3f000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x2aU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                   << 4U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[7U] 
                                             >> 0x1cU))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                                   << 0x1eU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                                >> 2U))) 
                             << 0x18U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U] 
        = ((0x3fffffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[9U]) 
           | (0xc0000000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x2cU)))
                               ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                                   << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                                >> 8U))
                               : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                                   << 0x12U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                                >> 0xeU))) 
                             << 0x1eU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xfffffff0U & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0xfU & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                      >> 0x2cU))) ? 
                       ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                         << 0x18U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                      >> 8U)) : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                                                  << 0x12U) 
                                                 | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                                    >> 0xeU))) 
                      >> 2U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xfffffc0fU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0x3f0U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                        >> 0x2eU)))
                          ? ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                              << 0xcU) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                          >> 0x14U))
                          : ((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                              << 6U) | (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[8U] 
                                        >> 0x1aU))) 
                        << 4U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xffff03ffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0xfc00U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                         >> 0x30U)))
                           ? this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U]
                           : (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                              >> 6U)) << 0xaU)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((0xffc0ffffU & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0xaU]) 
           | (0x3f0000U & (((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x32U)))
                             ? (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                                >> 0xcU) : (this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[9U] 
                                            >> 0x12U)) 
                           << 0x10U)));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffff7fffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)(this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 1U)))))) 
              << 0x1fU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffeffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 2U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 3U)))))) 
              << 0x20U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffdffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 4U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 5U)))))) 
              << 0x21U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffffbffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 6U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 7U)))))) 
              << 0x22U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffff7ffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 8U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 9U)))))) 
              << 0x23U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffefffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0xaU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0xbU)))))) 
              << 0x24U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffdfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0xcU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0xdU)))))) 
              << 0x25U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffffbfffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0xeU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0xfU)))))) 
              << 0x26U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffff7fffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x10U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x11U)))))) 
              << 0x27U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffeffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x12U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x13U)))))) 
              << 0x28U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffdffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x14U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x15U)))))) 
              << 0x29U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffffbffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x16U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x17U)))))) 
              << 0x2aU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffff7ffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x18U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x19U)))))) 
              << 0x2bU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffefffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x1aU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x1bU)))))) 
              << 0x2cU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffdfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x1cU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x1dU)))))) 
              << 0x2dU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffffbfffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x1eU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x1fU)))))) 
              << 0x2eU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffff7fffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x20U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x21U)))))) 
              << 0x2fU));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffeffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x22U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x23U)))))) 
              << 0x30U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffdffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x24U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x25U)))))) 
              << 0x31U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffbffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x26U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x27U)))))) 
              << 0x32U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfff7ffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x28U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x29U)))))) 
              << 0x33U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffefffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x2aU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x2bU)))))) 
              << 0x34U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffdfffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x2cU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x2dU)))))) 
              << 0x35U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffbfffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x2eU)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x2fU)))))) 
              << 0x36U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xff7fffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x30U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x31U)))))) 
              << 0x37U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfeffffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & ((IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x32U)) 
                                     | (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x33U)))))) 
              << 0x38U));
    this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfdffffffffffffffULL & this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x34U))))) 
              << 0x39U));
}
