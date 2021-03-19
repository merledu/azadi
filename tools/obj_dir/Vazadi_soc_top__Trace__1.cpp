// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vazadi_soc_top__Syms.h"


void Vazadi_soc_top::traceChgSub1(void* userp, VerilatedVcd* tracep) {
    Vazadi_soc_top__Syms* __restrict vlSymsp = static_cast<Vazadi_soc_top__Syms*>(userp);
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 6197);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp3632[3];
    WData/*95:0*/ __Vtemp3633[3];
    WData/*95:0*/ __Vtemp3634[3];
    WData/*95:0*/ __Vtemp3638[3];
    WData/*95:0*/ __Vtemp3640[3];
    WData/*95:0*/ __Vtemp3641[3];
    WData/*95:0*/ __Vtemp3642[3];
    WData/*95:0*/ __Vtemp3646[3];
    WData/*127:0*/ __Vtemp3648[4];
    WData/*127:0*/ __Vtemp3649[4];
    WData/*127:0*/ __Vtemp3650[4];
    WData/*127:0*/ __Vtemp3651[4];
    WData/*127:0*/ __Vtemp3654[4];
    WData/*127:0*/ __Vtemp3655[4];
    WData/*127:0*/ __Vtemp3656[4];
    WData/*127:0*/ __Vtemp3657[4];
    WData/*191:0*/ __Vtemp3658[6];
    WData/*191:0*/ __Vtemp3659[6];
    WData/*191:0*/ __Vtemp3660[6];
    WData/*191:0*/ __Vtemp3664[6];
    WData/*127:0*/ __Vtemp3667[4];
    WData/*191:0*/ __Vtemp3629[6];
    WData/*191:0*/ __Vtemp3630[6];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+0,((1U & ((IData)((vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_NonH_D 
                                                   >> 0x33U)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7ffffffffffffULL 
                                                         & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_NonH_D))))))));
            tracep->chgBit(oldp+1,(((~ (IData)((vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_NonH_D 
                                                >> 0x33U))) 
                                    & (0U != (0x7ffffffffffffULL 
                                              & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_NonH_D)))));
            tracep->chgQData(oldp+2,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp),53);
            tracep->chgQData(oldp+4,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp),53);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [7U] | vlTOPp->__Vm_traceActivity
                         [8U]))) {
            tracep->chgCData(oldp+6,(((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? 0x1fU : 
                                          ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? 0x1fU
                                            : ((1U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? 0U
                                                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                       : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                   ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                   : 0U)
                                               : 0x1fU)
                                           : 0x1fU))),5);
            tracep->chgCData(oldp+7,(((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? 0x1fU : 
                                          ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? 0x1fU
                                            : ((1U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? 0U
                                                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                       : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                   ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                   : 0U)
                                               : 0x1fU)
                                           : 0x1fU))),5);
            tracep->chgBit(oldp+8,((1U & ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                               >> 2U) 
                                              | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                 >> 1U))
                                           : ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                  >> 2U)) 
                                              | ((~ 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                   >> 1U)) 
                                                 | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                    | ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                                       | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                                          >> 0x1fU)))))))));
            tracep->chgBit(oldp+9,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                          | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                             >> 0x1fU)))));
            tracep->chgBit(oldp+10,((1U & ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                >> 2U) 
                                               | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                  >> 1U))
                                            : ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                   >> 2U)) 
                                               | ((~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                    >> 1U)) 
                                                  | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator) 
                                                     | ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                                        | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                                           >> 0x1fU)))))))));
            tracep->chgBit(oldp+11,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                           | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                              >> 0x1fU)))));
            tracep->chgCData(oldp+12,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                        ? ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? ((4U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? 0x1fU
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                    ? 0x1fU
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                     ? 0U
                                                     : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                            : ((4U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                     ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                     : 0U)
                                                    : 0x1fU)
                                                : 0x1fU))
                                        : 0U)),5);
            tracep->chgCData(oldp+13,(((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                        ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? 0x1fU
                                            : ((2U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? 0x1fU
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                    ? 0U
                                                    : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                        : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? ((2U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                    ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                    : 0U)
                                                : 0x1fU)
                                            : 0x1fU))),5);
            tracep->chgBit(oldp+14,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                           | (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                                      >> 0x3fU))))));
            VL_EXTEND_WW(192,96, __Vtemp3629, vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_operands);
            VL_EXTEND_WW(192,96, __Vtemp3630, vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_operands);
            tracep->chgQData(oldp+15,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk)
                                        ? (((QData)((IData)(
                                                            __Vtemp3629[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp3629[4U])))
                                        : (((QData)((IData)(
                                                            __Vtemp3630[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp3630[2U]))))),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+17,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+18,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgBit(oldp+19,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgBit(oldp+20,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_int_reg));
            tracep->chgBit(oldp+21,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod));
            tracep->chgBit(oldp+22,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_rf_we));
            tracep->chgCData(oldp+23,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator),4);
            tracep->chgBit(oldp+24,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval));
            tracep->chgBit(oldp+25,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgCData(oldp+26,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+27,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id),2);
            tracep->chgCData(oldp+28,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a),5);
            tracep->chgBit(oldp+29,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
            tracep->chgBit(oldp+30,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
            tracep->chgBit(oldp+31,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
            tracep->chgCData(oldp+32,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+33,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+34,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+35,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+36,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+37,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access));
            tracep->chgCData(oldp+38,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op),2);
            tracep->chgCData(oldp+39,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+40,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+41,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int));
            tracep->chgCData(oldp+42,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                        ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                            ? 1U : 0U)
                                        : 2U)),2);
            tracep->chgBit(oldp+43,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id));
            tracep->chgBit(oldp+44,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_wb));
            tracep->chgBit(oldp+45,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+46,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id));
            tracep->chgIData(oldp+47,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
            tracep->chgCData(oldp+48,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+49,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
            tracep->chgCData(oldp+50,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                      [0U]),2);
            tracep->chgCData(oldp+51,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                      [1U]),2);
            tracep->chgBit(oldp+52,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o));
            tracep->chgBit(oldp+53,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o));
            tracep->chgBit(oldp+54,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o));
            tracep->chgBit(oldp+55,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o));
            tracep->chgCData(oldp+56,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_src_fmt_o),3);
            tracep->chgBit(oldp+57,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+58,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+59,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+60,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+61,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+62,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+63,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+64,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+65,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+66,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+67,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz));
            tracep->chgBit(oldp+68,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+69,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgCData(oldp+70,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+71,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+72,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgCData(oldp+73,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel),2);
            tracep->chgCData(oldp+74,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel),3);
            tracep->chgBit(oldp+75,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+76,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+77,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+78,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+79,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+80,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+81,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+82,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a))));
            tracep->chgBit(oldp+83,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_fp_instr_o));
            tracep->chgBit(oldp+84,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+85,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+86,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+87,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgCData(oldp+88,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+89,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+90,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+91,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+92,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+93,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+94,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+95,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+96,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+97,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch));
            tracep->chgBit(oldp+98,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
            tracep->chgBit(oldp+99,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+100,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+101,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+102,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+103,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+104,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgQData(oldp+105,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgBit(oldp+107,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgBit(oldp+108,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgBit(oldp+109,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+110,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgBit(oldp+111,((8U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+112,(((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+113,(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (7U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+114,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
            tracep->chgBit(oldp+115,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid));
            tracep->chgBit(oldp+116,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
            tracep->chgBit(oldp+117,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
            tracep->chgBit(oldp+118,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
            tracep->chgCData(oldp+119,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
            tracep->chgCData(oldp+120,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
            tracep->chgBit(oldp+121,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
            tracep->chgBit(oldp+122,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
            tracep->chgCData(oldp+123,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
            tracep->chgCData(oldp+124,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
            tracep->chgBit(oldp+125,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
            tracep->chgBit(oldp+126,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
            tracep->chgCData(oldp+127,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
            tracep->chgCData(oldp+128,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
            tracep->chgBit(oldp+129,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid))));
            tracep->chgBit(oldp+130,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy))));
            tracep->chgCData(oldp+131,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid),2);
            tracep->chgCData(oldp+132,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy),2);
            tracep->chgBit(oldp+133,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
            tracep->chgBit(oldp+134,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
            tracep->chgBit(oldp+135,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
            tracep->chgBit(oldp+136,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
            tracep->chgCData(oldp+137,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
            tracep->chgCData(oldp+138,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
            tracep->chgBit(oldp+139,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
            tracep->chgBit(oldp+140,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
            tracep->chgCData(oldp+141,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
            tracep->chgCData(oldp+142,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
            tracep->chgBit(oldp+143,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
            tracep->chgBit(oldp+144,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
            tracep->chgCData(oldp+145,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
            tracep->chgCData(oldp+146,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
            tracep->chgBit(oldp+147,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid))));
            tracep->chgBit(oldp+148,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy))));
            tracep->chgCData(oldp+149,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid),2);
            tracep->chgCData(oldp+150,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy),2);
            tracep->chgCData(oldp+151,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class),2);
            tracep->chgBit(oldp+152,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class))));
            tracep->chgBit(oldp+153,((9U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))));
            tracep->chgBit(oldp+154,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
            tracep->chgBit(oldp+155,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
            tracep->chgBit(oldp+156,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
            tracep->chgCData(oldp+157,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
            tracep->chgCData(oldp+158,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
            tracep->chgBit(oldp+159,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
            tracep->chgCData(oldp+160,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
            tracep->chgCData(oldp+161,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
            tracep->chgBit(oldp+162,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
            tracep->chgBit(oldp+163,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
            tracep->chgCData(oldp+164,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
            tracep->chgCData(oldp+165,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
            tracep->chgBit(oldp+166,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid))));
            tracep->chgBit(oldp+167,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_busy))));
            tracep->chgCData(oldp+168,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid),2);
            tracep->chgCData(oldp+169,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                         ? 2U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt))),3);
            tracep->chgCData(oldp+170,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data),5);
            tracep->chgBit(oldp+171,((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))));
            tracep->chgBit(oldp+172,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
            tracep->chgCData(oldp+173,((1U & (((0xeU 
                                                == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)) 
                                               << 1U) 
                                              | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)))),2);
            tracep->chgCData(oldp+174,(((2U & (((0xeU 
                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)) 
                                                << 2U) 
                                               | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod) 
                                                  << 1U))) 
                                        | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk))),3);
            tracep->chgSData(oldp+175,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux),10);
            tracep->chgCData(oldp+176,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_busy),2);
            tracep->chgBit(oldp+177,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                            >> 3U))));
            tracep->chgCData(oldp+178,((7U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))),3);
            tracep->chgBit(oldp+179,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                            >> 4U))));
            tracep->chgBit(oldp+180,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
            tracep->chgBit(oldp+181,((0xcU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))));
            tracep->chgQData(oldp+182,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec),64);
            tracep->chgCData(oldp+184,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                       [0U]),2);
            tracep->chgCData(oldp+185,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                       [1U]),2);
            tracep->chgIData(oldp+186,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check),32);
            tracep->chgBit(oldp+187,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgCData(oldp+189,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+190,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 3U)) 
                                           << 2U))),32);
            tracep->chgQData(oldp+191,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+193,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
            tracep->chgCData(oldp+195,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
            tracep->chgIData(oldp+196,((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result)),32);
            tracep->chgBit(oldp+197,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+198,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
            tracep->chgIData(oldp+199,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+200,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+201,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U))),32);
            tracep->chgIData(oldp+202,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
            tracep->chgSData(oldp+203,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr),12);
            tracep->chgIData(oldp+204,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+205,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if));
            tracep->chgBit(oldp+206,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
            tracep->chgCData(oldp+207,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgIData(oldp+208,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+209,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgBit(oldp+210,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                            >> 5U))));
            tracep->chgIData(oldp+211,((0xfffffffeU 
                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgQData(oldp+212,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+214,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgQData(oldp+216,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+218,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+220,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+221,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+223,((0U == (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))));
            tracep->chgQData(oldp+224,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+226,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
            tracep->chgQData(oldp+228,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result),33);
            tracep->chgBit(oldp+230,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result 
                                                    >> 0x20U)))));
            tracep->chgIData(oldp+231,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+232,((0x1ffffffffULL 
                                        & (~ ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                              << 1U)))),33);
            tracep->chgQData(oldp+234,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b),33);
            tracep->chgCData(oldp+236,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+237,((0x3fU & ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgIData(oldp+238,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+239,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+241,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+242,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+243,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgCData(oldp+244,(((0x10U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                  >> 0x18U))))) 
                                                  << 4U)) 
                                        | (0xfU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                   >> 0x18U)))),5);
            tracep->chgCData(oldp+245,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x10U))),5);
            tracep->chgIData(oldp+246,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+247,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+248,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+249,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+250,((1U & (((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            >> 5U))));
            tracep->chgQData(oldp+251,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+253,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[1]),34);
            tracep->chgCData(oldp+255,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgQData(oldp+256,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d),33);
            tracep->chgQData(oldp+258,((0x1ffffffffULL 
                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)),33);
            tracep->chgQData(oldp+260,((0x1ffffffffULL 
                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U))),33);
            tracep->chgCData(oldp+262,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d),5);
            tracep->chgQData(oldp+263,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d),33);
            tracep->chgQData(oldp+265,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d),33);
            tracep->chgQData(oldp+267,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext),33);
            tracep->chgQData(oldp+269,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext),33);
            tracep->chgBit(oldp+271,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+272,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+273,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgIData(oldp+275,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgIData(oldp+276,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgBit(oldp+277,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgBit(oldp+278,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgCData(oldp+279,((3U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+280,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgIData(oldp+281,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+282,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+283,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+284,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+285,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+286,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+287,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgCData(oldp+288,((0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+289,((0x3fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+290,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+291,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
            tracep->chgCData(oldp+292,((7U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 5U))),3);
            tracep->chgBit(oldp+293,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod));
            tracep->chgCData(oldp+294,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0U]),6);
            tracep->chgCData(oldp+295,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [1U]),6);
            tracep->chgCData(oldp+296,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [2U]),6);
            tracep->chgCData(oldp+297,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [3U]),6);
            tracep->chgCData(oldp+298,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [4U]),6);
            tracep->chgCData(oldp+299,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [5U]),6);
            tracep->chgCData(oldp+300,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [6U]),6);
            tracep->chgCData(oldp+301,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [7U]),6);
            tracep->chgCData(oldp+302,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [8U]),6);
            tracep->chgCData(oldp+303,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [9U]),6);
            tracep->chgCData(oldp+304,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xaU]),6);
            tracep->chgCData(oldp+305,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xbU]),6);
            tracep->chgCData(oldp+306,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xcU]),6);
            tracep->chgCData(oldp+307,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xdU]),6);
            tracep->chgCData(oldp+308,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xeU]),6);
            tracep->chgCData(oldp+309,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xfU]),6);
            tracep->chgBit(oldp+310,(((2U > vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                       ? (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                       : 1U)));
            tracep->chgBit(oldp+311,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 2U))));
            tracep->chgBit(oldp+312,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 1U))));
            tracep->chgBit(oldp+313,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 2U))));
            tracep->chgCData(oldp+314,((7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                              >> 3U))),3);
            tracep->chgBit(oldp+315,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgIData(oldp+316,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgCData(oldp+317,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0U]),6);
            tracep->chgCData(oldp+318,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [1U]),6);
            tracep->chgCData(oldp+319,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [2U]),6);
            tracep->chgCData(oldp+320,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [3U]),6);
            tracep->chgCData(oldp+321,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [4U]),6);
            tracep->chgCData(oldp+322,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [5U]),6);
            tracep->chgCData(oldp+323,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [6U]),6);
            tracep->chgCData(oldp+324,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [7U]),6);
            tracep->chgCData(oldp+325,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [8U]),6);
            tracep->chgCData(oldp+326,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [9U]),6);
            tracep->chgCData(oldp+327,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xaU]),6);
            tracep->chgCData(oldp+328,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xbU]),6);
            tracep->chgCData(oldp+329,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xcU]),6);
            tracep->chgCData(oldp+330,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xdU]),6);
            tracep->chgCData(oldp+331,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xeU]),6);
            tracep->chgCData(oldp+332,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                       [0xfU]),6);
            tracep->chgIData(oldp+333,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
            tracep->chgIData(oldp+334,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
            tracep->chgIData(oldp+335,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
            tracep->chgCData(oldp+336,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
            tracep->chgCData(oldp+337,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
            tracep->chgCData(oldp+338,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
            tracep->chgBit(oldp+339,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
            tracep->chgBit(oldp+340,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
            tracep->chgBit(oldp+341,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                            >> 2U))));
            tracep->chgBit(oldp+342,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
            tracep->chgBit(oldp+343,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
            tracep->chgIData(oldp+344,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
            tracep->chgCData(oldp+345,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
            tracep->chgBit(oldp+346,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
            tracep->chgSData(oldp+347,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                               (0xffU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                   >> 0x17U))))),10);
            tracep->chgSData(oldp+348,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                               (0xffU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                   >> 0x17U))))),10);
            tracep->chgSData(oldp+349,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                               (0xffU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                                   >> 0x17U))))),10);
            tracep->chgSData(oldp+350,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
            tracep->chgSData(oldp+351,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
            tracep->chgSData(oldp+352,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
            tracep->chgSData(oldp+353,((VL_LTS_III(1,32,32, 0U, 
                                                   VL_EXTENDS_II(32,10, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
            tracep->chgCData(oldp+354,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
            tracep->chgIData(oldp+355,(((0x800000U 
                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                            << 0x10U)) 
                                        | (0x7fffffU 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
            tracep->chgIData(oldp+356,(((0x800000U 
                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                            << 0x10U)) 
                                        | (0x7fffffU 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
            tracep->chgIData(oldp+357,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
            tracep->chgQData(oldp+358,((0xffffffffffffULL 
                                        & ((QData)((IData)(
                                                           ((0x800000U 
                                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                << 0x10U)) 
                                                            | (0x7fffffU 
                                                               & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                           * (QData)((IData)(
                                                             ((0x800000U 
                                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                  << 0x10U)) 
                                                              | (0x7fffffU 
                                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))))))),48);
            VL_EXTEND_WQ(76,48, __Vtemp3632, (0xffffffffffffULL 
                                              & ((QData)((IData)(
                                                                 ((0x800000U 
                                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                      << 0x10U)) 
                                                                  | (0x7fffffU 
                                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                                 * (QData)((IData)(
                                                                   ((0x800000U 
                                                                     & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                        << 0x10U)) 
                                                                    | (0x7fffffU 
                                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)))))));
            VL_SHIFTL_WWI(76,76,32, __Vtemp3633, __Vtemp3632, 2U);
            __Vtemp3634[0U] = __Vtemp3633[0U];
            __Vtemp3634[1U] = __Vtemp3633[1U];
            __Vtemp3634[2U] = (0xfffU & __Vtemp3633[2U]);
            tracep->chgWData(oldp+360,(__Vtemp3634),76);
            tracep->chgWData(oldp+363,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
            tracep->chgIData(oldp+366,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
            tracep->chgBit(oldp+367,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
                __Vtemp3638[0U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
                __Vtemp3638[1U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
                __Vtemp3638[2U] = (0xfffU & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
            } else {
                __Vtemp3638[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
                __Vtemp3638[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
                __Vtemp3638[2U] = (0xfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
            }
            tracep->chgWData(oldp+368,(__Vtemp3638),76);
            tracep->chgBit(oldp+371,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
            tracep->chgWData(oldp+372,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
            tracep->chgBit(oldp+375,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                            >> 0xcU))));
            tracep->chgWData(oldp+376,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
            tracep->chgBit(oldp+379,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
            tracep->chgQData(oldp+380,((0x7ffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
            tracep->chgQData(oldp+382,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
            tracep->chgIData(oldp+384,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
            tracep->chgIData(oldp+385,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
            tracep->chgIData(oldp+386,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
            tracep->chgCData(oldp+387,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
            tracep->chgCData(oldp+388,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
            tracep->chgCData(oldp+389,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
            tracep->chgBit(oldp+390,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
            tracep->chgBit(oldp+391,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
            tracep->chgBit(oldp+392,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                            >> 2U))));
            tracep->chgBit(oldp+393,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
            tracep->chgBit(oldp+394,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
            tracep->chgIData(oldp+395,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
            tracep->chgCData(oldp+396,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
            tracep->chgBit(oldp+397,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
            tracep->chgSData(oldp+398,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                               (0xffU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                   >> 0x17U))))),10);
            tracep->chgSData(oldp+399,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                               (0xffU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                   >> 0x17U))))),10);
            tracep->chgSData(oldp+400,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                               (0xffU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                                   >> 0x17U))))),10);
            tracep->chgSData(oldp+401,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
            tracep->chgSData(oldp+402,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
            tracep->chgSData(oldp+403,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
            tracep->chgSData(oldp+404,((VL_LTS_III(1,32,32, 0U, 
                                                   VL_EXTENDS_II(32,10, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
            tracep->chgCData(oldp+405,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
            tracep->chgIData(oldp+406,(((0x800000U 
                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                            << 0x10U)) 
                                        | (0x7fffffU 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
            tracep->chgIData(oldp+407,(((0x800000U 
                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                            << 0x10U)) 
                                        | (0x7fffffU 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
            tracep->chgIData(oldp+408,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
            tracep->chgQData(oldp+409,((0xffffffffffffULL 
                                        & ((QData)((IData)(
                                                           ((0x800000U 
                                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                << 0x10U)) 
                                                            | (0x7fffffU 
                                                               & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                           * (QData)((IData)(
                                                             ((0x800000U 
                                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                  << 0x10U)) 
                                                              | (0x7fffffU 
                                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))))))),48);
            VL_EXTEND_WQ(76,48, __Vtemp3640, (0xffffffffffffULL 
                                              & ((QData)((IData)(
                                                                 ((0x800000U 
                                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                      << 0x10U)) 
                                                                  | (0x7fffffU 
                                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                                 * (QData)((IData)(
                                                                   ((0x800000U 
                                                                     & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                        << 0x10U)) 
                                                                    | (0x7fffffU 
                                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)))))));
            VL_SHIFTL_WWI(76,76,32, __Vtemp3641, __Vtemp3640, 2U);
            __Vtemp3642[0U] = __Vtemp3641[0U];
            __Vtemp3642[1U] = __Vtemp3641[1U];
            __Vtemp3642[2U] = (0xfffU & __Vtemp3641[2U]);
            tracep->chgWData(oldp+411,(__Vtemp3642),76);
            tracep->chgWData(oldp+414,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
            tracep->chgIData(oldp+417,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
            tracep->chgBit(oldp+418,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
                __Vtemp3646[0U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
                __Vtemp3646[1U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
                __Vtemp3646[2U] = (0xfffU & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
            } else {
                __Vtemp3646[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
                __Vtemp3646[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
                __Vtemp3646[2U] = (0xfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
            }
            tracep->chgWData(oldp+419,(__Vtemp3646),76);
            tracep->chgBit(oldp+422,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
            tracep->chgWData(oldp+423,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
            tracep->chgBit(oldp+426,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                            >> 0xcU))));
            tracep->chgWData(oldp+427,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
            tracep->chgBit(oldp+430,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
            tracep->chgQData(oldp+431,((0x7ffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
            tracep->chgQData(oldp+433,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
            tracep->chgQData(oldp+435,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),64);
            tracep->chgQData(oldp+437,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),64);
            tracep->chgQData(oldp+439,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),64);
            tracep->chgCData(oldp+441,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
            tracep->chgCData(oldp+442,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
            tracep->chgCData(oldp+443,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
            tracep->chgBit(oldp+444,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
            tracep->chgBit(oldp+445,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
            tracep->chgBit(oldp+446,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                            >> 2U))));
            tracep->chgBit(oldp+447,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
            tracep->chgBit(oldp+448,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
            tracep->chgQData(oldp+449,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),64);
            tracep->chgCData(oldp+451,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
            tracep->chgBit(oldp+452,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
            tracep->chgSData(oldp+453,((0x1fffU & VL_EXTENDS_II(13,12, 
                                                                (0x7ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                            >> 0x34U)))))),13);
            tracep->chgSData(oldp+454,((0x1fffU & VL_EXTENDS_II(13,12, 
                                                                (0x7ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                            >> 0x34U)))))),13);
            tracep->chgSData(oldp+455,((0x1fffU & VL_EXTENDS_II(13,12, 
                                                                (0x7ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                                            >> 0x34U)))))),13);
            tracep->chgSData(oldp+456,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),13);
            tracep->chgSData(oldp+457,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),13);
            tracep->chgSData(oldp+458,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),13);
            tracep->chgSData(oldp+459,((VL_LTS_III(1,32,32, 0U, 
                                                   VL_EXTENDS_II(32,13, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),13);
            tracep->chgCData(oldp+460,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),8);
            tracep->chgQData(oldp+461,((((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                             >> 7U)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),53);
            tracep->chgQData(oldp+463,((((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                             >> 7U)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),53);
            tracep->chgQData(oldp+465,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),53);
            VL_EXTEND_WQ(106,53, __Vtemp3648, (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                    >> 7U)))) 
                                                << 0x34U) 
                                               | (0xfffffffffffffULL 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)));
            VL_EXTEND_WQ(106,53, __Vtemp3649, (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                    >> 7U)))) 
                                                << 0x34U) 
                                               | (0xfffffffffffffULL 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)));
            VL_MUL_W(4, __Vtemp3650, __Vtemp3648, __Vtemp3649);
            __Vtemp3651[0U] = __Vtemp3650[0U];
            __Vtemp3651[1U] = __Vtemp3650[1U];
            __Vtemp3651[2U] = __Vtemp3650[2U];
            __Vtemp3651[3U] = (0x3ffU & __Vtemp3650[3U]);
            tracep->chgWData(oldp+467,(__Vtemp3651),106);
            VL_EXTEND_WQ(106,53, __Vtemp3654, (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                    >> 7U)))) 
                                                << 0x34U) 
                                               | (0xfffffffffffffULL 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)));
            VL_EXTEND_WQ(106,53, __Vtemp3655, (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                    >> 7U)))) 
                                                << 0x34U) 
                                               | (0xfffffffffffffULL 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)));
            VL_MUL_W(4, __Vtemp3656, __Vtemp3654, __Vtemp3655);
            __Vtemp3657[0U] = __Vtemp3656[0U];
            __Vtemp3657[1U] = __Vtemp3656[1U];
            __Vtemp3657[2U] = __Vtemp3656[2U];
            __Vtemp3657[3U] = (0x3ffU & __Vtemp3656[3U]);
            VL_EXTEND_WW(163,106, __Vtemp3658, __Vtemp3657);
            VL_SHIFTL_WWI(163,163,32, __Vtemp3659, __Vtemp3658, 2U);
            __Vtemp3660[0U] = __Vtemp3659[0U];
            __Vtemp3660[1U] = __Vtemp3659[1U];
            __Vtemp3660[2U] = __Vtemp3659[2U];
            __Vtemp3660[3U] = __Vtemp3659[3U];
            __Vtemp3660[4U] = __Vtemp3659[4U];
            __Vtemp3660[5U] = (7U & __Vtemp3659[5U]);
            tracep->chgWData(oldp+471,(__Vtemp3660),163);
            tracep->chgWData(oldp+477,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),163);
            tracep->chgQData(oldp+483,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),53);
            tracep->chgBit(oldp+485,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
                __Vtemp3664[0U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
                __Vtemp3664[1U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
                __Vtemp3664[2U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
                __Vtemp3664[3U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[3U]);
                __Vtemp3664[4U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[4U]);
                __Vtemp3664[5U] = (7U & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[5U]));
            } else {
                __Vtemp3664[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
                __Vtemp3664[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
                __Vtemp3664[2U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U];
                __Vtemp3664[3U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[3U];
                __Vtemp3664[4U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[4U];
                __Vtemp3664[5U] = (7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[5U]);
            }
            tracep->chgWData(oldp+486,(__Vtemp3664),163);
            tracep->chgBit(oldp+492,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
            tracep->chgWData(oldp+493,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),164);
            tracep->chgBit(oldp+499,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[5U] 
                                            >> 3U))));
            tracep->chgWData(oldp+500,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),163);
            tracep->chgBit(oldp+506,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
            __Vtemp3667[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U];
            __Vtemp3667[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U];
            __Vtemp3667[2U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[2U];
            __Vtemp3667[3U] = (0x1fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[3U]);
            tracep->chgWData(oldp+507,(__Vtemp3667),109);
            tracep->chgWData(oldp+511,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),109);
            tracep->chgIData(oldp+515,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i),32);
            tracep->chgWData(oldp+516,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs),355);
            tracep->chgCData(oldp+528,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
            tracep->chgBit(oldp+529,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit))));
            tracep->chgQData(oldp+530,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_result),64);
            tracep->chgSData(oldp+532,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status),10);
            tracep->chgCData(oldp+533,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit),2);
            tracep->chgIData(oldp+534,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result),32);
            tracep->chgIData(oldp+535,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
            tracep->chgIData(oldp+536,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result),32);
            tracep->chgIData(oldp+537,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
            tracep->chgCData(oldp+538,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
            tracep->chgIData(oldp+539,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
            tracep->chgIData(oldp+540,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
            tracep->chgCData(oldp+541,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
            tracep->chgBit(oldp+542,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d));
            tracep->chgQData(oldp+543,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),64);
            tracep->chgCData(oldp+545,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
            tracep->chgQData(oldp+546,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),64);
            tracep->chgWData(oldp+548,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),192);
            tracep->chgWData(oldp+554,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands),192);
            tracep->chgIData(oldp+560,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__prepare_input__DOT__unnamedblk2__DOT__i),32);
            tracep->chgQData(oldp+561,((((QData)((IData)(
                                                         vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U])))),64);
            tracep->chgQData(oldp+563,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),53);
            tracep->chgCData(oldp+565,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
            tracep->chgQData(oldp+566,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),60);
            tracep->chgWData(oldp+568,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),265);
            tracep->chgQData(oldp+577,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
            tracep->chgWData(oldp+579,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),212);
            tracep->chgBit(oldp+586,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
            tracep->chgQData(oldp+587,((0x1fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                                 >> 0xaU))))),53);
            tracep->chgQData(oldp+589,((0x1fffffffffffffULL 
                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign)
                                            ? (- (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                                   << 0x36U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                                      << 0x16U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                                        >> 0xaU))))
                                            : (((QData)((IData)(
                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                                     >> 0xaU)))))),53);
            tracep->chgSData(oldp+591,(((0x3bU >= (0x3fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))
                                         ? (0xfffU 
                                            & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xcU) 
                                                           * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))))
                                         : 0U)),12);
            tracep->chgSData(oldp+592,((0xfffU & VL_EXTENDS_II(12,2, 
                                                               ((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt) 
                                                                      << 3U)))) 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(6U) 
                                                                               + 
                                                                               ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt) 
                                                                                << 3U))))))))),12);
            tracep->chgBit(oldp+593,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
            tracep->chgCData(oldp+594,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
            tracep->chgCData(oldp+595,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
            tracep->chgQData(oldp+596,(((0x13fU >= 
                                         (0x1ffU & 
                                          ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                           << 6U)))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (0xeU 
                                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                      << 1U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (0xeU 
                                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                     << 1U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                  (0xeU 
                                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                      << 1U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+598,((0x10U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))),5);
            tracep->chgBit(oldp+599,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
            tracep->chgWData(oldp+600,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),320);
            tracep->chgQData(oldp+610,((((QData)((IData)(
                                                         vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[4U])))),64);
            tracep->chgWData(oldp+612,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),256);
            tracep->chgIData(oldp+620,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
            tracep->chgQData(oldp+621,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__1__KET____DOT__active_format__DOT__special_results__DOT__special_res),64);
            tracep->chgIData(oldp+623,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
            tracep->chgQData(oldp+624,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),53);
            tracep->chgIData(oldp+626,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]),32);
            tracep->chgCData(oldp+627,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
            tracep->chgIData(oldp+628,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
            tracep->chgBit(oldp+629,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
            tracep->chgBit(oldp+630,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
            tracep->chgBit(oldp+631,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
            tracep->chgBit(oldp+632,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
            tracep->chgBit(oldp+633,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
            tracep->chgBit(oldp+634,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
            tracep->chgBit(oldp+635,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
            tracep->chgBit(oldp+636,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
            tracep->chgCData(oldp+637,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
            tracep->chgQData(oldp+638,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),64);
            tracep->chgBit(oldp+640,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
            tracep->chgBit(oldp+641,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
            tracep->chgBit(oldp+642,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
            tracep->chgBit(oldp+643,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
            tracep->chgBit(oldp+644,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
            tracep->chgBit(oldp+645,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
            tracep->chgBit(oldp+646,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
            tracep->chgBit(oldp+647,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
            tracep->chgQData(oldp+648,((((QData)((IData)(
                                                         vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands[0U])))),64);
            tracep->chgQData(oldp+650,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),53);
            tracep->chgCData(oldp+652,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
            tracep->chgQData(oldp+653,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),60);
            tracep->chgWData(oldp+655,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),265);
            tracep->chgQData(oldp+664,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
            tracep->chgWData(oldp+666,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),212);
            tracep->chgBit(oldp+673,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
            tracep->chgQData(oldp+674,((0x1fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                                 >> 0xaU))))),53);
            tracep->chgQData(oldp+676,((0x1fffffffffffffULL 
                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign)
                                            ? (- (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                                   << 0x36U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                                      << 0x16U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                                        >> 0xaU))))
                                            : (((QData)((IData)(
                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                                     >> 0xaU)))))),53);
            tracep->chgSData(oldp+678,(((0x3bU >= (0x3fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))
                                         ? (0xfffU 
                                            & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xcU) 
                                                           * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))))
                                         : 0U)),12);
            tracep->chgSData(oldp+679,((0xfffU & VL_EXTENDS_II(12,2, 
                                                               ((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt) 
                                                                      << 3U)))) 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(6U) 
                                                                               + 
                                                                               ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt) 
                                                                                << 3U))))))))),12);
            tracep->chgBit(oldp+680,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
            tracep->chgCData(oldp+681,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
            tracep->chgCData(oldp+682,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
            tracep->chgQData(oldp+683,(((0x13fU >= 
                                         (0x1ffU & 
                                          ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                           << 6U)))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (0xeU 
                                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                      << 1U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (0xeU 
                                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                     << 1U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                  (0xeU 
                                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                      << 1U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+685,((0x10U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))),5);
            tracep->chgBit(oldp+686,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
            tracep->chgWData(oldp+687,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),320);
            tracep->chgQData(oldp+697,((((QData)((IData)(
                                                         vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[4U])))),64);
            tracep->chgWData(oldp+699,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),256);
            tracep->chgIData(oldp+707,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
            tracep->chgQData(oldp+708,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__1__KET____DOT__active_format__DOT__special_results__DOT__special_res),64);
            tracep->chgIData(oldp+710,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
            tracep->chgQData(oldp+711,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),53);
            tracep->chgIData(oldp+713,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands[0U]),32);
            tracep->chgCData(oldp+714,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
            tracep->chgIData(oldp+715,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
            tracep->chgBit(oldp+716,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
            tracep->chgBit(oldp+717,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
            tracep->chgBit(oldp+718,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
            tracep->chgBit(oldp+719,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
            tracep->chgBit(oldp+720,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
            tracep->chgBit(oldp+721,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
            tracep->chgBit(oldp+722,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
            tracep->chgBit(oldp+723,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
            tracep->chgCData(oldp+724,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
            tracep->chgQData(oldp+725,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),64);
            tracep->chgBit(oldp+727,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
            tracep->chgBit(oldp+728,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
            tracep->chgBit(oldp+729,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
            tracep->chgBit(oldp+730,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
            tracep->chgBit(oldp+731,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
            tracep->chgBit(oldp+732,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
            tracep->chgBit(oldp+733,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
            tracep->chgBit(oldp+734,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
            tracep->chgCData(oldp+735,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                       [0U]),2);
            tracep->chgCData(oldp+736,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                       [1U]),2);
        }
        tracep->chgBit(oldp+737,(vlTOPp->clock));
        tracep->chgBit(oldp+738,(vlTOPp->reset_ni));
        tracep->chgIData(oldp+739,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+740,(vlTOPp->gpio_o),20);
        tracep->chgIData(oldp+741,(vlTOPp->gpio_oe),20);
        tracep->chgBit(oldp+742,((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                           & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                              | (0U 
                                                 != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))))));
        tracep->chgIData(oldp+743,(((1U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 2U)))
                                     ? ((1U & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))
                                         ? ((0xff000000U 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                << 0x18U)) 
                                            | (0xffffffU 
                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                  >> 8U)))
                                         : ((0xffff0000U 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                  >> 0x10U))))
                                     : ((1U & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))
                                         ? ((0xffffff00U 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                << 8U)) 
                                            | (0xffU 
                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                  >> 0x18U)))
                                         : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))),32);
        tracep->chgBit(oldp+744,((1U & (((((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+745,(((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                  | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)))));
        tracep->chgIData(oldp+746,((((0U == (0x1fU 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                << 5U)))
                                      ? 0U : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                              ((IData)(1U) 
                                               + (0x1fU 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                      << 5U))))) 
                                    | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                       (0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a))] 
                                       >> (0x1fU & 
                                           ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                            << 5U))))),32);
        tracep->chgIData(oldp+747,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                         ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                         : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_wb)
                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_wb)),32);
        tracep->chgIData(oldp+748,(((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel))
                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd
                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id)),32);
        tracep->chgIData(oldp+749,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                     ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                         ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                             ? 2U : 4U)
                                         : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                             ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                 ? 2U
                                                 : 4U)
                                             : ((0xfff00000U 
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
                                     : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                         ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                             ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                 ? 2U
                                                 : 4U)
                                             : ((0xffffe000U 
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
                                         : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                             ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                 ? 2U
                                                 : 4U)
                                             : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))),32);
        tracep->chgIData(oldp+750,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id)
                                         ? (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                   [0U])
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext))
                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result)),32);
        tracep->chgBit(oldp+751,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                  & (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+752,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                     | (0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))));
        tracep->chgCData(oldp+753,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                   [0U]),2);
        tracep->chgCData(oldp+754,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                   [1U]),2);
        tracep->chgIData(oldp+755,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                     ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                              ? ((0xffffff00U 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                 | (0x7cU 
                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                       << 2U)))
                                              : (0xffffff00U 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgIData(oldp+756,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : (0xfffffffcU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
                                    + (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                       << 2U))),32);
        tracep->chgIData(oldp+757,((0x7fffffffU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                                    ? 
                                                   (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                                      : 0U) 
                                                    >> 1U)
                                                    : 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                    + 
                                                    ((2U 
                                                      & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                         << 1U)) 
                                                     | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgIData(oldp+758,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                     ? 0U : (0x1fU 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xfU)))),32);
        tracep->chgIData(oldp+759,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                     ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                         ? 4U : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                   ? 2U
                                                   : 4U)
                                                  : 4U))
                                     : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                         ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                             ? (0xfffff000U 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                             : 4U) : 
                                        ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                          ? ((0xfffff000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x1fU)))) 
                                                 << 0xcU)) 
                                             | ((0xfe0U 
                                                 & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 7U))))
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))),32);
        tracep->chgBit(oldp+760,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b))));
        tracep->chgQData(oldp+761,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                     ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                             ? (1ULL 
                                                | ((QData)((IData)(
                                                                   (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                   << 1U))
                                             : ((1U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                 ? 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(
                                                                               vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                                               [0U])))) 
                                                    << 1U))
                                                 : 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                    << 1U))))
                                         : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                 ? 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                    << 1U))
                                                 : 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                    << 1U)))
                                             : ((1U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                 ? 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd))) 
                                                    << 1U))
                                                 : 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
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
                                         : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp))),33);
        tracep->chgQData(oldp+763,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                     : (1ULL | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                << 1U)))),33);
        tracep->chgBit(oldp+765,((1U & ((0x80000000U 
                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                         ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             >> 0x1fU) 
                                            ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 0x20U)))))));
        tracep->chgBit(oldp+766,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a) 
                                   ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)) 
                                  & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+767,(((3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                         >> 8U)) > (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+768,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod) 
                                  & (7U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU))))));
        tracep->chgQData(oldp+769,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                         ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                                         : (((QData)((IData)(
                                                             ((((0ULL 
                                                                 == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                                                & (0U 
                                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                                               ? 
                                                              (2U 
                                                               == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                               : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)))) 
                                             << 0x3fU) 
                                            | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))
                                     : 0xffffffffffffffffULL)),64);
        tracep->chgCData(oldp+771,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))
                                     : 0U)),5);
        tracep->chgQData(oldp+772,(((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class))
                                     ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial))
                                         ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result
                                         : (QData)((IData)(
                                                           (0x3ffU 
                                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_class_mask))))
                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_result)),64);
        tracep->chgIData(oldp+774,(((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                            >> 3U) 
                                           & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                              >> 0xbU)))
                                     ? 0x7fc00000U : 
                                    ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                      ? (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                 >> 0x20U))
                                      : ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                          : ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                  ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                                  : (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                             >> 0x20U)))
                                              : ((1U 
                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                   ? (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                              >> 0x20U))
                                                   : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands))
                                                  : 0x80800001U)))))),32);
        tracep->chgIData(oldp+775,(((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                            >> 3U) 
                                           & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                              >> 0xbU)))
                                     ? 0x7fc00000U : 
                                    ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                      ? (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands 
                                                 >> 0x20U))
                                      : ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands)
                                          : ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                  ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands)
                                                  : (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands 
                                                             >> 0x20U)))
                                              : ((1U 
                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                   ? (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands 
                                                              >> 0x20U))
                                                   : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands))
                                                  : 0x80800001U)))))),32);
        tracep->chgQData(oldp+776,(((9U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                     ? (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d))
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                         ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                         : (- (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d)))))),64);
        tracep->chgQData(oldp+778,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                     : (- (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d))))),64);
        tracep->chgQData(oldp+780,(((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                            >> 3U) 
                                           & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                              >> 0xbU)))
                                     ? 0x7ff8000000000000ULL
                                     : ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                         ? (((QData)((IData)(
                                                             vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[2U])))
                                         : ((0x800U 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                             ? (((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U])))
                                             : ((0U 
                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                 ? 
                                                ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[2U]))))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[2U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]))))
                                                  : 0x8010000000000001ULL)))))),64);
        tracep->chgQData(oldp+782,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                         ? ((0x13fU 
                                             >= (0x1ffU 
                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                    << 6U)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xeU 
                                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                       << 1U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                       << 6U))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (0xeU 
                                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                         << 1U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                      (0xeU 
                                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                          << 1U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))))
                                             : 0ULL)
                                         : ((0x13fU 
                                             >= (0x1ffU 
                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                    << 6U)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xeU 
                                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                       << 1U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                       << 6U))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (0xeU 
                                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                         << 1U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                      (0xeU 
                                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                          << 1U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))))
                                             : 0ULL)))),64);
        tracep->chgCData(oldp+784,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                         ? 0x10U : 
                                        (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                         ? (0x10U & 
                                            ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                             << 2U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        tracep->chgQData(oldp+785,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                         ? ((0x13fU 
                                             >= (0x1ffU 
                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                    << 6U)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xeU 
                                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                       << 1U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                       << 6U))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (0xeU 
                                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                         << 1U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                                      (0xeU 
                                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                          << 1U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))))
                                             : 0ULL)
                                         : ((0x13fU 
                                             >= (0x1ffU 
                                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                    << 6U)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xeU 
                                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                       << 1U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                       << 6U))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (0xeU 
                                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                         << 1U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                      (0xeU 
                                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                          << 1U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                          << 6U)))))
                                             : 0ULL)))),64);
        tracep->chgCData(oldp+787,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                         ? 0x10U : 
                                        (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                         ? (0x10U & 
                                            ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                             << 2U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        tracep->chgCData(oldp+788,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                     ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                     : 0xfU)),4);
        tracep->chgIData(oldp+789,((vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o 
                                    & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgQData(oldp+790,((0x1ffffffffULL 
                                    & (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                        ? ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                           << 1U) : 
                                       ((0x83U >= (0xffU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
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
                                         : 0ULL)))),33);
        tracep->chgIData(oldp+792,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                     : 0U)),32);
        tracep->chgIData(oldp+793,((((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                      : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgIData(oldp+794,((((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                      : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgQData(oldp+795,((0x1ffffffffULL 
                                    & (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                        ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata
                                        : ((0x41U >= 
                                            (0x7fU 
                                             & ((IData)(0x21U) 
                                                * (1U 
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
                                            : 0ULL)))),33);
        tracep->chgIData(oldp+797,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+798,((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                     & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                    & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+799,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                     & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                    & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+800,(((((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                       & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U]) 
                                      | ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                          & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])) 
                                     | ((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[1U])) 
                                    | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d 
                                       & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+801,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+802,((1U & ((1U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                         : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+803,((1U & (vlTOPp->gpio_i 
                                        >> 1U))));
        tracep->chgBit(oldp+804,((1U & ((2U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 1U)))));
        tracep->chgBit(oldp+805,((1U & (vlTOPp->gpio_i 
                                        >> 2U))));
        tracep->chgBit(oldp+806,((1U & ((4U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 2U)))));
        tracep->chgBit(oldp+807,((1U & (vlTOPp->gpio_i 
                                        >> 3U))));
        tracep->chgBit(oldp+808,((1U & ((8U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 3U)))));
        tracep->chgBit(oldp+809,((1U & (vlTOPp->gpio_i 
                                        >> 4U))));
        tracep->chgBit(oldp+810,((1U & ((0x10U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 4U)))));
        tracep->chgBit(oldp+811,((1U & (vlTOPp->gpio_i 
                                        >> 5U))));
        tracep->chgBit(oldp+812,((1U & ((0x20U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 5U)))));
        tracep->chgBit(oldp+813,((1U & (vlTOPp->gpio_i 
                                        >> 6U))));
        tracep->chgBit(oldp+814,((1U & ((0x40U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 6U)))));
        tracep->chgBit(oldp+815,((1U & (vlTOPp->gpio_i 
                                        >> 7U))));
        tracep->chgBit(oldp+816,((1U & ((0x80U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 7U)))));
        tracep->chgBit(oldp+817,((1U & (vlTOPp->gpio_i 
                                        >> 8U))));
        tracep->chgBit(oldp+818,((1U & ((0x100U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 8U)))));
        tracep->chgBit(oldp+819,((1U & (vlTOPp->gpio_i 
                                        >> 9U))));
        tracep->chgBit(oldp+820,((1U & ((0x200U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 9U)))));
        tracep->chgBit(oldp+821,((1U & (vlTOPp->gpio_i 
                                        >> 0xaU))));
        tracep->chgBit(oldp+822,((1U & ((0x400U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xaU)))));
        tracep->chgBit(oldp+823,((1U & (vlTOPp->gpio_i 
                                        >> 0xbU))));
        tracep->chgBit(oldp+824,((1U & ((0x800U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xbU)))));
        tracep->chgBit(oldp+825,((1U & (vlTOPp->gpio_i 
                                        >> 0xcU))));
        tracep->chgBit(oldp+826,((1U & ((0x1000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xcU)))));
        tracep->chgBit(oldp+827,((1U & (vlTOPp->gpio_i 
                                        >> 0xdU))));
        tracep->chgBit(oldp+828,((1U & ((0x2000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xdU)))));
        tracep->chgBit(oldp+829,((1U & (vlTOPp->gpio_i 
                                        >> 0xeU))));
        tracep->chgBit(oldp+830,((1U & ((0x4000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xeU)))));
        tracep->chgBit(oldp+831,((1U & (vlTOPp->gpio_i 
                                        >> 0xfU))));
        tracep->chgBit(oldp+832,((1U & ((0x8000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xfU)))));
        tracep->chgBit(oldp+833,((1U & (vlTOPp->gpio_i 
                                        >> 0x10U))));
        tracep->chgBit(oldp+834,((1U & ((0x10000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x10U)))));
        tracep->chgBit(oldp+835,((1U & (vlTOPp->gpio_i 
                                        >> 0x11U))));
        tracep->chgBit(oldp+836,((1U & ((0x20000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x11U)))));
        tracep->chgBit(oldp+837,((1U & (vlTOPp->gpio_i 
                                        >> 0x12U))));
        tracep->chgBit(oldp+838,((1U & ((0x40000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x12U)))));
        tracep->chgBit(oldp+839,((1U & (vlTOPp->gpio_i 
                                        >> 0x13U))));
        tracep->chgBit(oldp+840,((1U & ((0x80000U & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x13U)))));
        tracep->chgBit(oldp+841,((1U & (vlTOPp->gpio_i 
                                        >> 0x14U))));
        tracep->chgBit(oldp+842,((1U & ((0x100000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x14U)))));
        tracep->chgBit(oldp+843,((1U & (vlTOPp->gpio_i 
                                        >> 0x15U))));
        tracep->chgBit(oldp+844,((1U & ((0x200000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x15U)))));
        tracep->chgBit(oldp+845,((1U & (vlTOPp->gpio_i 
                                        >> 0x16U))));
        tracep->chgBit(oldp+846,((1U & ((0x400000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x16U)))));
        tracep->chgBit(oldp+847,((1U & (vlTOPp->gpio_i 
                                        >> 0x17U))));
        tracep->chgBit(oldp+848,((1U & ((0x800000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x17U)))));
        tracep->chgBit(oldp+849,((1U & (vlTOPp->gpio_i 
                                        >> 0x18U))));
        tracep->chgBit(oldp+850,((1U & ((0x1000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x18U)))));
        tracep->chgBit(oldp+851,((1U & (vlTOPp->gpio_i 
                                        >> 0x19U))));
        tracep->chgBit(oldp+852,((1U & ((0x2000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+853,((1U & (vlTOPp->gpio_i 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+854,((1U & ((0x4000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+855,((1U & (vlTOPp->gpio_i 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+856,((1U & ((0x8000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1bU)))));
        tracep->chgBit(oldp+857,((1U & (vlTOPp->gpio_i 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+858,((1U & ((0x10000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1cU)))));
        tracep->chgBit(oldp+859,((1U & (vlTOPp->gpio_i 
                                        >> 0x1dU))));
        tracep->chgBit(oldp+860,((1U & ((0x20000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1dU)))));
        tracep->chgBit(oldp+861,((1U & (vlTOPp->gpio_i 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+862,((1U & ((0x40000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1eU)))));
        tracep->chgBit(oldp+863,((1U & (vlTOPp->gpio_i 
                                        >> 0x1fU))));
        tracep->chgBit(oldp+864,((1U & ((0x80000000U 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1fU)))));
        tracep->chgBit(oldp+865,((((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                   & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                   ? ((((~ (IData)(
                                                   (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_NonH_D 
                                                    >> 0x33U))) 
                                        & (0U != (0x7ffffffffffffULL 
                                                  & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_NonH_D))) 
                                       & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__NaN_a_SN)) 
                                      | (((~ (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_NonH_D 
                                                      >> 0x33U))) 
                                          & (0U != 
                                             (0x7ffffffffffffULL 
                                              & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_NonH_D))) 
                                         & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__NaN_b_SN)))
                                   : (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__SNaN_SP))));
        tracep->chgBit(oldp+866,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                                         & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                         ? ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Sign_a_D) 
                                            ^ ((2U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                    ? 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                    >> 0xfU))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                    ? 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                    >> 0x1fU))))
                                         : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                                             & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                             ? (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Sign_a_D)
                                             : (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Sign_z_DP))))));
        tracep->chgQData(oldp+867,((0x1fffffffffffffULL 
                                    & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                        & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                        ? (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_D 
                                           << (0x3fU 
                                               & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        : vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_norm_DP))),53);
        tracep->chgSData(oldp+869,((0xfffU & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                               & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                               ? (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_a_D) 
                                                   - 
                                                   (0x3fU 
                                                    & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                                  + 
                                                  (0U 
                                                   != 
                                                   (0x3fU 
                                                    & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])))
                                               : (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_a_norm_DP)))),12);
        tracep->chgQData(oldp+870,((0x1fffffffffffffULL 
                                    & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                        & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                        ? (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_D 
                                           << (0x3fU 
                                               & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        : vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_norm_DP))),53);
        tracep->chgSData(oldp+872,((0xfffU & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                               & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                               ? (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_b_D) 
                                                   - 
                                                   (0x3fU 
                                                    & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                                  + 
                                                  (0U 
                                                   != 
                                                   (0x3fU 
                                                    & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])))
                                               : (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_b_norm_DP)))),12);
    }
}

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
