// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vazadi_soc_top__Syms.h"


void Vazadi_soc_top::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vazadi_soc_top__Syms* __restrict vlSymsp = static_cast<Vazadi_soc_top__Syms*>(userp);
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2906[3];
    WData/*95:0*/ __Vtemp2907[3];
    WData/*95:0*/ __Vtemp2908[3];
    WData/*95:0*/ __Vtemp2912[3];
    WData/*95:0*/ __Vtemp2914[3];
    WData/*95:0*/ __Vtemp2915[3];
    WData/*95:0*/ __Vtemp2916[3];
    WData/*95:0*/ __Vtemp2920[3];
    WData/*127:0*/ __Vtemp2922[4];
    WData/*127:0*/ __Vtemp2923[4];
    WData/*127:0*/ __Vtemp2924[4];
    WData/*127:0*/ __Vtemp2925[4];
    WData/*127:0*/ __Vtemp2928[4];
    WData/*127:0*/ __Vtemp2929[4];
    WData/*127:0*/ __Vtemp2930[4];
    WData/*127:0*/ __Vtemp2931[4];
    WData/*191:0*/ __Vtemp2932[6];
    WData/*191:0*/ __Vtemp2933[6];
    WData/*191:0*/ __Vtemp2934[6];
    WData/*191:0*/ __Vtemp2938[6];
    WData/*127:0*/ __Vtemp2941[4];
    WData/*703:0*/ __Vtemp2942[22];
    WData/*159:0*/ __Vtemp2943[5];
    WData/*159:0*/ __Vtemp2944[5];
    WData/*159:0*/ __Vtemp2945[5];
    WData/*159:0*/ __Vtemp2946[5];
    WData/*95:0*/ __Vtemp2948[3];
    WData/*703:0*/ __Vtemp2950[22];
    WData/*703:0*/ __Vtemp2951[22];
    WData/*191:0*/ __Vtemp2903[6];
    WData/*191:0*/ __Vtemp2904[6];
    WData/*191:0*/ __Vtemp2947[6];
    WData/*319:0*/ __Vtemp2949[10];
    // Body
    {
        tracep->fullBit(oldp+6206,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                          | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                             >> 0x1fU)))));
        tracep->fullBit(oldp+6207,((1U & ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
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
        tracep->fullBit(oldp+6208,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                          | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                             >> 0x1fU)))));
        tracep->fullCData(oldp+6209,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                       ? ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                               ? 0x1fU
                                               : ((2U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                   ? 0x1fU
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                    ? 0U
                                                    : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                           : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                               ? ((2U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                    ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                    : 0U)
                                                   : 0x1fU)
                                               : 0x1fU))
                                       : 0U)),5);
        tracep->fullCData(oldp+6210,(((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? 0x1fU : 
                                          ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                            ? 0x1fU
                                            : ((1U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                ? 0U
                                                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                       : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                           ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                                   ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                   : 0U)
                                               : 0x1fU)
                                           : 0x1fU))),5);
        tracep->fullBit(oldp+6211,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)) 
                                          | (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                                     >> 0x3fU))))));
        VL_EXTEND_WW(192,96, __Vtemp2903, vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_operands);
        VL_EXTEND_WW(192,96, __Vtemp2904, vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_operands);
        tracep->fullQData(oldp+6212,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk)
                                       ? (((QData)((IData)(
                                                           __Vtemp2903[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp2903[4U])))
                                       : (((QData)((IData)(
                                                           __Vtemp2904[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp2904[2U]))))),64);
        tracep->fullBit(oldp+6214,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
        tracep->fullBit(oldp+6215,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->fullBit(oldp+6216,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        tracep->fullBit(oldp+6217,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_int_reg));
        tracep->fullBit(oldp+6218,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod));
        tracep->fullBit(oldp+6219,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_rf_we));
        tracep->fullCData(oldp+6220,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator),4);
        tracep->fullBit(oldp+6221,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval));
        tracep->fullBit(oldp+6222,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
        tracep->fullCData(oldp+6223,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id),3);
        tracep->fullCData(oldp+6224,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id),2);
        tracep->fullCData(oldp+6225,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a),5);
        tracep->fullBit(oldp+6226,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
        tracep->fullBit(oldp+6227,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
        tracep->fullBit(oldp+6228,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->fullCData(oldp+6229,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
        tracep->fullBit(oldp+6230,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
        tracep->fullBit(oldp+6231,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
        tracep->fullCData(oldp+6232,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        tracep->fullCData(oldp+6233,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        tracep->fullBit(oldp+6234,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access));
        tracep->fullCData(oldp+6235,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op),2);
        tracep->fullCData(oldp+6236,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
        tracep->fullBit(oldp+6237,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        tracep->fullBit(oldp+6238,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int));
        tracep->fullCData(oldp+6239,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                       ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                           ? 1U : 0U)
                                       : 2U)),2);
        tracep->fullBit(oldp+6240,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id));
        tracep->fullBit(oldp+6241,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_wb));
        tracep->fullBit(oldp+6242,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id));
        tracep->fullBit(oldp+6243,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id));
        tracep->fullIData(oldp+6244,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
        tracep->fullCData(oldp+6245,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
        tracep->fullBit(oldp+6246,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
        tracep->fullCData(oldp+6247,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                     [0U]),2);
        tracep->fullCData(oldp+6248,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                     [1U]),2);
        tracep->fullBit(oldp+6249,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o));
        tracep->fullBit(oldp+6250,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o));
        tracep->fullBit(oldp+6251,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o));
        tracep->fullBit(oldp+6252,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o));
        tracep->fullCData(oldp+6253,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_src_fmt_o),3);
        tracep->fullBit(oldp+6254,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        tracep->fullBit(oldp+6255,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
        tracep->fullBit(oldp+6256,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        tracep->fullBit(oldp+6257,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        tracep->fullBit(oldp+6258,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        tracep->fullBit(oldp+6259,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        tracep->fullBit(oldp+6260,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
        tracep->fullBit(oldp+6261,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
        tracep->fullBit(oldp+6262,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
        tracep->fullBit(oldp+6263,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
        tracep->fullBit(oldp+6264,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz));
        tracep->fullBit(oldp+6265,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        tracep->fullBit(oldp+6266,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        tracep->fullCData(oldp+6267,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        tracep->fullCData(oldp+6268,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        tracep->fullBit(oldp+6269,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        tracep->fullCData(oldp+6270,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel),2);
        tracep->fullCData(oldp+6271,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel),3);
        tracep->fullBit(oldp+6272,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        tracep->fullCData(oldp+6273,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        tracep->fullCData(oldp+6274,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        tracep->fullBit(oldp+6275,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
        tracep->fullBit(oldp+6276,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
        tracep->fullBit(oldp+6277,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        tracep->fullBit(oldp+6278,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
        tracep->fullBit(oldp+6279,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a))));
        tracep->fullBit(oldp+6280,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_fp_instr_o));
        tracep->fullBit(oldp+6281,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        tracep->fullCData(oldp+6282,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        tracep->fullCData(oldp+6283,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        tracep->fullCData(oldp+6284,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        tracep->fullCData(oldp+6285,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        tracep->fullBit(oldp+6286,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        tracep->fullBit(oldp+6287,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        tracep->fullBit(oldp+6288,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        tracep->fullBit(oldp+6289,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        tracep->fullBit(oldp+6290,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        tracep->fullBit(oldp+6291,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        tracep->fullBit(oldp+6292,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        tracep->fullBit(oldp+6293,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        tracep->fullBit(oldp+6294,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch));
        tracep->fullBit(oldp+6295,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
        tracep->fullBit(oldp+6296,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        tracep->fullBit(oldp+6297,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        tracep->fullBit(oldp+6298,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        tracep->fullBit(oldp+6299,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        tracep->fullBit(oldp+6300,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        tracep->fullBit(oldp+6301,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->fullQData(oldp+6302,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->fullBit(oldp+6304,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
        tracep->fullBit(oldp+6305,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        tracep->fullBit(oldp+6306,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        tracep->fullBit(oldp+6307,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        tracep->fullBit(oldp+6308,((8U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        tracep->fullBit(oldp+6309,(((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                    | (6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullBit(oldp+6310,(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                    | (7U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullBit(oldp+6311,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        tracep->fullBit(oldp+6312,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid));
        tracep->fullBit(oldp+6313,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
        tracep->fullBit(oldp+6314,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
        tracep->fullBit(oldp+6315,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        tracep->fullCData(oldp+6316,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        tracep->fullCData(oldp+6317,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        tracep->fullBit(oldp+6318,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        tracep->fullBit(oldp+6319,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
        tracep->fullCData(oldp+6320,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        tracep->fullCData(oldp+6321,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        tracep->fullBit(oldp+6322,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        tracep->fullBit(oldp+6323,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        tracep->fullCData(oldp+6324,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullCData(oldp+6325,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullBit(oldp+6326,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid))));
        tracep->fullBit(oldp+6327,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy))));
        tracep->fullCData(oldp+6328,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid),2);
        tracep->fullCData(oldp+6329,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy),2);
        tracep->fullBit(oldp+6330,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        tracep->fullBit(oldp+6331,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
        tracep->fullBit(oldp+6332,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        tracep->fullBit(oldp+6333,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        tracep->fullCData(oldp+6334,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        tracep->fullCData(oldp+6335,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        tracep->fullBit(oldp+6336,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        tracep->fullBit(oldp+6337,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
        tracep->fullCData(oldp+6338,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        tracep->fullCData(oldp+6339,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        tracep->fullBit(oldp+6340,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        tracep->fullBit(oldp+6341,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        tracep->fullCData(oldp+6342,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullCData(oldp+6343,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullBit(oldp+6344,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid))));
        tracep->fullBit(oldp+6345,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy))));
        tracep->fullCData(oldp+6346,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_out_valid),2);
        tracep->fullCData(oldp+6347,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy),2);
        tracep->fullCData(oldp+6348,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class),2);
        tracep->fullBit(oldp+6349,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class))));
        tracep->fullBit(oldp+6350,((9U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))));
        tracep->fullBit(oldp+6351,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        tracep->fullBit(oldp+6352,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid));
        tracep->fullBit(oldp+6353,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        tracep->fullCData(oldp+6354,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        tracep->fullCData(oldp+6355,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        tracep->fullBit(oldp+6356,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        tracep->fullCData(oldp+6357,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        tracep->fullCData(oldp+6358,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        tracep->fullBit(oldp+6359,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        tracep->fullBit(oldp+6360,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        tracep->fullCData(oldp+6361,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullCData(oldp+6362,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullBit(oldp+6363,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid))));
        tracep->fullBit(oldp+6364,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_busy))));
        tracep->fullCData(oldp+6365,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid),2);
        tracep->fullCData(oldp+6366,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? 2U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt))),3);
        tracep->fullCData(oldp+6367,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data),5);
        tracep->fullBit(oldp+6368,((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))));
        tracep->fullBit(oldp+6369,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        tracep->fullCData(oldp+6370,((1U & (((0xeU 
                                              == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)) 
                                             << 1U) 
                                            | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod)))),2);
        tracep->fullCData(oldp+6371,(((2U & (((0xeU 
                                               == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)) 
                                              << 2U) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod) 
                                                << 1U))) 
                                      | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk))),3);
        tracep->fullSData(oldp+6372,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux),10);
        tracep->fullCData(oldp+6373,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_busy),2);
        tracep->fullBit(oldp+6374,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                          >> 3U))));
        tracep->fullCData(oldp+6375,((7U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))),3);
        tracep->fullBit(oldp+6376,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                          >> 4U))));
        tracep->fullBit(oldp+6377,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        tracep->fullBit(oldp+6378,((0xcU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))));
        tracep->fullQData(oldp+6379,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec),64);
        tracep->fullCData(oldp+6381,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                     [0U]),2);
        tracep->fullCData(oldp+6382,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                     [1U]),2);
        tracep->fullIData(oldp+6383,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check),32);
        tracep->fullBit(oldp+6384,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        tracep->fullBit(oldp+6385,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        tracep->fullCData(oldp+6386,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
        tracep->fullIData(oldp+6387,((0xfffffffcU & 
                                      ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 3U)) 
                                       << 2U))),32);
        tracep->fullQData(oldp+6388,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
        tracep->fullQData(oldp+6390,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
        tracep->fullCData(oldp+6392,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
        tracep->fullIData(oldp+6393,((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result)),32);
        tracep->fullBit(oldp+6394,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        tracep->fullBit(oldp+6395,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
        tracep->fullIData(oldp+6396,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        tracep->fullIData(oldp+6397,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
        tracep->fullIData(oldp+6398,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 1U))),32);
        tracep->fullIData(oldp+6399,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
        tracep->fullSData(oldp+6400,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr),12);
        tracep->fullIData(oldp+6401,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->fullBit(oldp+6402,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if));
        tracep->fullBit(oldp+6403,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
        tracep->fullCData(oldp+6404,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        tracep->fullIData(oldp+6405,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
        tracep->fullBit(oldp+6406,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
        tracep->fullBit(oldp+6407,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                          >> 5U))));
        tracep->fullIData(oldp+6408,((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        tracep->fullQData(oldp+6409,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
        tracep->fullQData(oldp+6411,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
        tracep->fullQData(oldp+6413,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+6415,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
        tracep->fullIData(oldp+6417,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
        tracep->fullQData(oldp+6418,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        tracep->fullBit(oldp+6420,((0U == (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U)))));
        tracep->fullQData(oldp+6421,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        tracep->fullQData(oldp+6423,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        tracep->fullQData(oldp+6425,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result),33);
        tracep->fullBit(oldp+6427,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result 
                                                  >> 0x20U)))));
        tracep->fullIData(oldp+6428,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        tracep->fullQData(oldp+6429,((0x1ffffffffULL 
                                      & (~ ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            << 1U)))),33);
        tracep->fullQData(oldp+6431,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b),33);
        tracep->fullCData(oldp+6433,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
        tracep->fullCData(oldp+6434,((0x3fU & ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        tracep->fullIData(oldp+6435,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        tracep->fullQData(oldp+6436,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        tracep->fullBit(oldp+6438,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        tracep->fullIData(oldp+6439,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        tracep->fullIData(oldp+6440,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        tracep->fullCData(oldp+6441,(((0x10U & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                >> 0x18U))))) 
                                                << 4U)) 
                                      | (0xfU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x18U)))),5);
        tracep->fullCData(oldp+6442,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                               >> 0x10U))),5);
        tracep->fullIData(oldp+6443,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        tracep->fullIData(oldp+6444,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        tracep->fullIData(oldp+6445,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        tracep->fullIData(oldp+6446,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        tracep->fullBit(oldp+6447,((1U & (((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                          >> 5U))));
        tracep->fullQData(oldp+6448,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+6450,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[1]),34);
        tracep->fullCData(oldp+6452,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d),3);
        tracep->fullQData(oldp+6453,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d),33);
        tracep->fullQData(oldp+6455,((0x1ffffffffULL 
                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)),33);
        tracep->fullQData(oldp+6457,((0x1ffffffffULL 
                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                         >> 1U))),33);
        tracep->fullCData(oldp+6459,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d),5);
        tracep->fullQData(oldp+6460,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d),33);
        tracep->fullQData(oldp+6462,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d),33);
        tracep->fullQData(oldp+6464,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext),33);
        tracep->fullQData(oldp+6466,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext),33);
        tracep->fullBit(oldp+6468,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a));
        tracep->fullBit(oldp+6469,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b));
        tracep->fullQData(oldp+6470,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient),33);
        tracep->fullIData(oldp+6472,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder),32);
        tracep->fullIData(oldp+6473,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d),32);
        tracep->fullBit(oldp+6474,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__is_greater_equal));
        tracep->fullBit(oldp+6475,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d));
        tracep->fullCData(oldp+6476,((3U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 1U)))),2);
        tracep->fullBit(oldp+6477,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        tracep->fullIData(oldp+6478,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
        tracep->fullIData(oldp+6479,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
        tracep->fullIData(oldp+6480,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
        tracep->fullCData(oldp+6481,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),6);
        tracep->fullIData(oldp+6482,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
        tracep->fullIData(oldp+6483,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
        tracep->fullBit(oldp+6484,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
        tracep->fullCData(oldp+6485,((0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))),5);
        tracep->fullCData(oldp+6486,((0x3fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
        tracep->fullIData(oldp+6487,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        tracep->fullBit(oldp+6488,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->fullCData(oldp+6489,((7U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                            >> 5U))),3);
        tracep->fullBit(oldp+6490,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod));
        tracep->fullCData(oldp+6491,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0U]),6);
        tracep->fullCData(oldp+6492,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [1U]),6);
        tracep->fullCData(oldp+6493,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [2U]),6);
        tracep->fullCData(oldp+6494,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [3U]),6);
        tracep->fullCData(oldp+6495,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [4U]),6);
        tracep->fullCData(oldp+6496,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [5U]),6);
        tracep->fullCData(oldp+6497,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [6U]),6);
        tracep->fullCData(oldp+6498,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [7U]),6);
        tracep->fullCData(oldp+6499,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [8U]),6);
        tracep->fullCData(oldp+6500,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [9U]),6);
        tracep->fullCData(oldp+6501,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xaU]),6);
        tracep->fullCData(oldp+6502,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xbU]),6);
        tracep->fullCData(oldp+6503,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xcU]),6);
        tracep->fullCData(oldp+6504,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xdU]),6);
        tracep->fullCData(oldp+6505,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xeU]),6);
        tracep->fullCData(oldp+6506,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xfU]),6);
        tracep->fullBit(oldp+6507,(((2U > vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                     ? (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                     : 1U)));
        tracep->fullBit(oldp+6508,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 2U))));
        tracep->fullBit(oldp+6509,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 1U))));
        tracep->fullBit(oldp+6510,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 2U))));
        tracep->fullCData(oldp+6511,((7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 3U))),3);
        tracep->fullBit(oldp+6512,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        tracep->fullIData(oldp+6513,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
        tracep->fullCData(oldp+6514,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0U]),6);
        tracep->fullCData(oldp+6515,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [1U]),6);
        tracep->fullCData(oldp+6516,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [2U]),6);
        tracep->fullCData(oldp+6517,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [3U]),6);
        tracep->fullCData(oldp+6518,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [4U]),6);
        tracep->fullCData(oldp+6519,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [5U]),6);
        tracep->fullCData(oldp+6520,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [6U]),6);
        tracep->fullCData(oldp+6521,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [7U]),6);
        tracep->fullCData(oldp+6522,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [8U]),6);
        tracep->fullCData(oldp+6523,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [9U]),6);
        tracep->fullCData(oldp+6524,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xaU]),6);
        tracep->fullCData(oldp+6525,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xbU]),6);
        tracep->fullCData(oldp+6526,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xcU]),6);
        tracep->fullCData(oldp+6527,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xdU]),6);
        tracep->fullCData(oldp+6528,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xeU]),6);
        tracep->fullCData(oldp+6529,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                     [0xfU]),6);
        tracep->fullIData(oldp+6530,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
        tracep->fullIData(oldp+6531,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
        tracep->fullIData(oldp+6532,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
        tracep->fullCData(oldp+6533,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
        tracep->fullCData(oldp+6534,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
        tracep->fullCData(oldp+6535,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
        tracep->fullBit(oldp+6536,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
        tracep->fullBit(oldp+6537,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
        tracep->fullBit(oldp+6538,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                              | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                          >> 2U))));
        tracep->fullBit(oldp+6539,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
        tracep->fullBit(oldp+6540,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
        tracep->fullIData(oldp+6541,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
        tracep->fullCData(oldp+6542,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
        tracep->fullBit(oldp+6543,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
        tracep->fullSData(oldp+6544,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                 >> 0x17U))))),10);
        tracep->fullSData(oldp+6545,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                 >> 0x17U))))),10);
        tracep->fullSData(oldp+6546,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                                 >> 0x17U))))),10);
        tracep->fullSData(oldp+6547,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
        tracep->fullSData(oldp+6548,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
        tracep->fullSData(oldp+6549,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
        tracep->fullSData(oldp+6550,((VL_LTS_III(1,32,32, 0U, 
                                                 VL_EXTENDS_II(32,10, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                       ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                       : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
        tracep->fullCData(oldp+6551,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
        tracep->fullIData(oldp+6552,(((0x800000U & 
                                       ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                        << 0x10U)) 
                                      | (0x7fffffU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
        tracep->fullIData(oldp+6553,(((0x800000U & 
                                       ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                        << 0x10U)) 
                                      | (0x7fffffU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
        tracep->fullIData(oldp+6554,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
        tracep->fullQData(oldp+6555,((0xffffffffffffULL 
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
        VL_EXTEND_WQ(76,48, __Vtemp2906, (0xffffffffffffULL 
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
        VL_SHIFTL_WWI(76,76,32, __Vtemp2907, __Vtemp2906, 2U);
        __Vtemp2908[0U] = __Vtemp2907[0U];
        __Vtemp2908[1U] = __Vtemp2907[1U];
        __Vtemp2908[2U] = (0xfffU & __Vtemp2907[2U]);
        tracep->fullWData(oldp+6557,(__Vtemp2908),76);
        tracep->fullWData(oldp+6560,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
        tracep->fullIData(oldp+6563,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
        tracep->fullBit(oldp+6564,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
            __Vtemp2912[0U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
            __Vtemp2912[1U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
            __Vtemp2912[2U] = (0xfffU & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
        } else {
            __Vtemp2912[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
            __Vtemp2912[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
            __Vtemp2912[2U] = (0xfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
        }
        tracep->fullWData(oldp+6565,(__Vtemp2912),76);
        tracep->fullBit(oldp+6568,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
        tracep->fullWData(oldp+6569,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
        tracep->fullBit(oldp+6572,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                          >> 0xcU))));
        tracep->fullWData(oldp+6573,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
        tracep->fullBit(oldp+6576,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
        tracep->fullQData(oldp+6577,((0x7ffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
        tracep->fullQData(oldp+6579,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
        tracep->fullIData(oldp+6581,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
        tracep->fullIData(oldp+6582,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
        tracep->fullIData(oldp+6583,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
        tracep->fullCData(oldp+6584,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
        tracep->fullCData(oldp+6585,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
        tracep->fullCData(oldp+6586,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
        tracep->fullBit(oldp+6587,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
        tracep->fullBit(oldp+6588,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
        tracep->fullBit(oldp+6589,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                              | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                          >> 2U))));
        tracep->fullBit(oldp+6590,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
        tracep->fullBit(oldp+6591,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
        tracep->fullIData(oldp+6592,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
        tracep->fullCData(oldp+6593,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
        tracep->fullBit(oldp+6594,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
        tracep->fullSData(oldp+6595,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                 >> 0x17U))))),10);
        tracep->fullSData(oldp+6596,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                 >> 0x17U))))),10);
        tracep->fullSData(oldp+6597,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                                 >> 0x17U))))),10);
        tracep->fullSData(oldp+6598,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
        tracep->fullSData(oldp+6599,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
        tracep->fullSData(oldp+6600,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
        tracep->fullSData(oldp+6601,((VL_LTS_III(1,32,32, 0U, 
                                                 VL_EXTENDS_II(32,10, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                       ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                       : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
        tracep->fullCData(oldp+6602,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
        tracep->fullIData(oldp+6603,(((0x800000U & 
                                       ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                        << 0x10U)) 
                                      | (0x7fffffU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
        tracep->fullIData(oldp+6604,(((0x800000U & 
                                       ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                        << 0x10U)) 
                                      | (0x7fffffU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
        tracep->fullIData(oldp+6605,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
        tracep->fullQData(oldp+6606,((0xffffffffffffULL 
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
        VL_EXTEND_WQ(76,48, __Vtemp2914, (0xffffffffffffULL 
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
        VL_SHIFTL_WWI(76,76,32, __Vtemp2915, __Vtemp2914, 2U);
        __Vtemp2916[0U] = __Vtemp2915[0U];
        __Vtemp2916[1U] = __Vtemp2915[1U];
        __Vtemp2916[2U] = (0xfffU & __Vtemp2915[2U]);
        tracep->fullWData(oldp+6608,(__Vtemp2916),76);
        tracep->fullWData(oldp+6611,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
        tracep->fullIData(oldp+6614,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
        tracep->fullBit(oldp+6615,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
            __Vtemp2920[0U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
            __Vtemp2920[1U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
            __Vtemp2920[2U] = (0xfffU & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
        } else {
            __Vtemp2920[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
            __Vtemp2920[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
            __Vtemp2920[2U] = (0xfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
        }
        tracep->fullWData(oldp+6616,(__Vtemp2920),76);
        tracep->fullBit(oldp+6619,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
        tracep->fullWData(oldp+6620,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
        tracep->fullBit(oldp+6623,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                          >> 0xcU))));
        tracep->fullWData(oldp+6624,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
        tracep->fullBit(oldp+6627,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
        tracep->fullQData(oldp+6628,((0x7ffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
        tracep->fullQData(oldp+6630,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
        tracep->fullQData(oldp+6632,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),64);
        tracep->fullQData(oldp+6634,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),64);
        tracep->fullQData(oldp+6636,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),64);
        tracep->fullCData(oldp+6638,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
        tracep->fullCData(oldp+6639,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
        tracep->fullCData(oldp+6640,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
        tracep->fullBit(oldp+6641,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
        tracep->fullBit(oldp+6642,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
        tracep->fullBit(oldp+6643,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                              | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                          >> 2U))));
        tracep->fullBit(oldp+6644,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
        tracep->fullBit(oldp+6645,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
        tracep->fullQData(oldp+6646,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),64);
        tracep->fullCData(oldp+6648,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
        tracep->fullBit(oldp+6649,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
        tracep->fullSData(oldp+6650,((0x1fffU & VL_EXTENDS_II(13,12, 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                          >> 0x34U)))))),13);
        tracep->fullSData(oldp+6651,((0x1fffU & VL_EXTENDS_II(13,12, 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                          >> 0x34U)))))),13);
        tracep->fullSData(oldp+6652,((0x1fffU & VL_EXTENDS_II(13,12, 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                                          >> 0x34U)))))),13);
        tracep->fullSData(oldp+6653,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),13);
        tracep->fullSData(oldp+6654,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),13);
        tracep->fullSData(oldp+6655,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),13);
        tracep->fullSData(oldp+6656,((VL_LTS_III(1,32,32, 0U, 
                                                 VL_EXTENDS_II(32,13, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                       ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                       : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),13);
        tracep->fullCData(oldp+6657,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),8);
        tracep->fullQData(oldp+6658,((((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                           >> 7U)))) 
                                       << 0x34U) | 
                                      (0xfffffffffffffULL 
                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),53);
        tracep->fullQData(oldp+6660,((((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                           >> 7U)))) 
                                       << 0x34U) | 
                                      (0xfffffffffffffULL 
                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),53);
        tracep->fullQData(oldp+6662,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),53);
        VL_EXTEND_WQ(106,53, __Vtemp2922, (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                >> 7U)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)));
        VL_EXTEND_WQ(106,53, __Vtemp2923, (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                >> 7U)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)));
        VL_MUL_W(4, __Vtemp2924, __Vtemp2922, __Vtemp2923);
        __Vtemp2925[0U] = __Vtemp2924[0U];
        __Vtemp2925[1U] = __Vtemp2924[1U];
        __Vtemp2925[2U] = __Vtemp2924[2U];
        __Vtemp2925[3U] = (0x3ffU & __Vtemp2924[3U]);
        tracep->fullWData(oldp+6664,(__Vtemp2925),106);
        VL_EXTEND_WQ(106,53, __Vtemp2928, (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                >> 7U)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)));
        VL_EXTEND_WQ(106,53, __Vtemp2929, (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                >> 7U)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)));
        VL_MUL_W(4, __Vtemp2930, __Vtemp2928, __Vtemp2929);
        __Vtemp2931[0U] = __Vtemp2930[0U];
        __Vtemp2931[1U] = __Vtemp2930[1U];
        __Vtemp2931[2U] = __Vtemp2930[2U];
        __Vtemp2931[3U] = (0x3ffU & __Vtemp2930[3U]);
        VL_EXTEND_WW(163,106, __Vtemp2932, __Vtemp2931);
        VL_SHIFTL_WWI(163,163,32, __Vtemp2933, __Vtemp2932, 2U);
        __Vtemp2934[0U] = __Vtemp2933[0U];
        __Vtemp2934[1U] = __Vtemp2933[1U];
        __Vtemp2934[2U] = __Vtemp2933[2U];
        __Vtemp2934[3U] = __Vtemp2933[3U];
        __Vtemp2934[4U] = __Vtemp2933[4U];
        __Vtemp2934[5U] = (7U & __Vtemp2933[5U]);
        tracep->fullWData(oldp+6668,(__Vtemp2934),163);
        tracep->fullWData(oldp+6674,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),163);
        tracep->fullQData(oldp+6680,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),53);
        tracep->fullBit(oldp+6682,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
            __Vtemp2938[0U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
            __Vtemp2938[1U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
            __Vtemp2938[2U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
            __Vtemp2938[3U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[3U]);
            __Vtemp2938[4U] = (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[4U]);
            __Vtemp2938[5U] = (7U & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[5U]));
        } else {
            __Vtemp2938[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
            __Vtemp2938[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
            __Vtemp2938[2U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U];
            __Vtemp2938[3U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[3U];
            __Vtemp2938[4U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[4U];
            __Vtemp2938[5U] = (7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[5U]);
        }
        tracep->fullWData(oldp+6683,(__Vtemp2938),163);
        tracep->fullBit(oldp+6689,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
        tracep->fullWData(oldp+6690,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),164);
        tracep->fullBit(oldp+6696,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[5U] 
                                          >> 3U))));
        tracep->fullWData(oldp+6697,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),163);
        tracep->fullBit(oldp+6703,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
        __Vtemp2941[0U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U];
        __Vtemp2941[1U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U];
        __Vtemp2941[2U] = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[2U];
        __Vtemp2941[3U] = (0x1fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[3U]);
        tracep->fullWData(oldp+6704,(__Vtemp2941),109);
        tracep->fullWData(oldp+6708,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),109);
        tracep->fullIData(oldp+6712,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i),32);
        tracep->fullWData(oldp+6713,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs),355);
        tracep->fullCData(oldp+6725,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        tracep->fullBit(oldp+6726,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit))));
        tracep->fullQData(oldp+6727,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_result),64);
        tracep->fullSData(oldp+6729,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status),10);
        tracep->fullCData(oldp+6730,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit),2);
        tracep->fullIData(oldp+6731,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result),32);
        tracep->fullIData(oldp+6732,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
        tracep->fullIData(oldp+6733,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result),32);
        tracep->fullIData(oldp+6734,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
        tracep->fullCData(oldp+6735,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        tracep->fullIData(oldp+6736,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
        tracep->fullIData(oldp+6737,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
        tracep->fullCData(oldp+6738,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        tracep->fullBit(oldp+6739,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d));
        tracep->fullQData(oldp+6740,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),64);
        tracep->fullCData(oldp+6742,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        tracep->fullQData(oldp+6743,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),64);
        tracep->fullWData(oldp+6745,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),192);
        tracep->fullWData(oldp+6751,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands),192);
        tracep->fullIData(oldp+6757,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__prepare_input__DOT__unnamedblk2__DOT__i),32);
        tracep->fullQData(oldp+6758,((((QData)((IData)(
                                                       vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U])))),64);
        tracep->fullQData(oldp+6760,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),53);
        tracep->fullCData(oldp+6762,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
        tracep->fullQData(oldp+6763,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),60);
        tracep->fullWData(oldp+6765,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),265);
        tracep->fullQData(oldp+6774,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
        tracep->fullWData(oldp+6776,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),212);
        tracep->fullBit(oldp+6783,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
        tracep->fullQData(oldp+6784,((0x1fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                          << 0x36U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                               >> 0xaU))))),53);
        tracep->fullQData(oldp+6786,((0x1fffffffffffffULL 
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
        tracep->fullSData(oldp+6788,(((0x3bU >= (0x3fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))
                                       ? (0xfffU & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xcU) 
                                                                * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))))
                                       : 0U)),12);
        tracep->fullSData(oldp+6789,((0xfffU & VL_EXTENDS_II(12,2, 
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
        tracep->fullBit(oldp+6790,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
        tracep->fullCData(oldp+6791,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        tracep->fullCData(oldp+6792,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        tracep->fullQData(oldp+6793,(((0x13fU >= (0x1ffU 
                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                     << 6U)))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                            ? 0ULL : 
                                           ((QData)((IData)(
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                            ((IData)(2U) 
                                                             + 
                                                             (0xeU 
                                                              & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                 << 1U)))])) 
                                            << ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U))))) 
                                          | (((QData)((IData)(
                                                              vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                              ((IData)(1U) 
                                                               + 
                                                               (0xeU 
                                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                   << 1U)))])) 
                                              << ((0U 
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
        tracep->fullCData(oldp+6795,((0x10U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                               << 2U))),5);
        tracep->fullBit(oldp+6796,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
        tracep->fullWData(oldp+6797,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),320);
        tracep->fullQData(oldp+6807,((((QData)((IData)(
                                                       vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[4U])))),64);
        tracep->fullWData(oldp+6809,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),256);
        tracep->fullIData(oldp+6817,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        tracep->fullQData(oldp+6818,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__1__KET____DOT__active_format__DOT__special_results__DOT__special_res),64);
        tracep->fullIData(oldp+6820,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        tracep->fullQData(oldp+6821,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),53);
        tracep->fullIData(oldp+6823,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]),32);
        tracep->fullCData(oldp+6824,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        tracep->fullIData(oldp+6825,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        tracep->fullBit(oldp+6826,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        tracep->fullBit(oldp+6827,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        tracep->fullBit(oldp+6828,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        tracep->fullBit(oldp+6829,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        tracep->fullBit(oldp+6830,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        tracep->fullBit(oldp+6831,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        tracep->fullBit(oldp+6832,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        tracep->fullBit(oldp+6833,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        tracep->fullCData(oldp+6834,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        tracep->fullQData(oldp+6835,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),64);
        tracep->fullBit(oldp+6837,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        tracep->fullBit(oldp+6838,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        tracep->fullBit(oldp+6839,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        tracep->fullBit(oldp+6840,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        tracep->fullBit(oldp+6841,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        tracep->fullBit(oldp+6842,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        tracep->fullBit(oldp+6843,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        tracep->fullBit(oldp+6844,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        tracep->fullQData(oldp+6845,((((QData)((IData)(
                                                       vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands[0U])))),64);
        tracep->fullQData(oldp+6847,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),53);
        tracep->fullCData(oldp+6849,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
        tracep->fullQData(oldp+6850,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),60);
        tracep->fullWData(oldp+6852,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),265);
        tracep->fullQData(oldp+6861,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
        tracep->fullWData(oldp+6863,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),212);
        tracep->fullBit(oldp+6870,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
        tracep->fullQData(oldp+6871,((0x1fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[5U])) 
                                          << 0x36U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[3U])) 
                                               >> 0xaU))))),53);
        tracep->fullQData(oldp+6873,((0x1fffffffffffffULL 
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
        tracep->fullSData(oldp+6875,(((0x3bU >= (0x3fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))
                                       ? (0xfffU & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xcU) 
                                                                * (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt))))))
                                       : 0U)),12);
        tracep->fullSData(oldp+6876,((0xfffU & VL_EXTENDS_II(12,2, 
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
        tracep->fullBit(oldp+6877,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
        tracep->fullCData(oldp+6878,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        tracep->fullCData(oldp+6879,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        tracep->fullQData(oldp+6880,(((0x13fU >= (0x1ffU 
                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                     << 6U)))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                            ? 0ULL : 
                                           ((QData)((IData)(
                                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                            ((IData)(2U) 
                                                             + 
                                                             (0xeU 
                                                              & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                 << 1U)))])) 
                                            << ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U))))) 
                                          | (((QData)((IData)(
                                                              vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                              ((IData)(1U) 
                                                               + 
                                                               (0xeU 
                                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                                   << 1U)))])) 
                                              << ((0U 
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
        tracep->fullCData(oldp+6882,((0x10U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                               << 2U))),5);
        tracep->fullBit(oldp+6883,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
        tracep->fullWData(oldp+6884,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),320);
        tracep->fullQData(oldp+6894,((((QData)((IData)(
                                                       vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[4U])))),64);
        tracep->fullWData(oldp+6896,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),256);
        tracep->fullIData(oldp+6904,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        tracep->fullQData(oldp+6905,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__1__KET____DOT__active_format__DOT__special_results__DOT__special_res),64);
        tracep->fullIData(oldp+6907,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        tracep->fullQData(oldp+6908,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),53);
        tracep->fullIData(oldp+6910,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands[0U]),32);
        tracep->fullCData(oldp+6911,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        tracep->fullIData(oldp+6912,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        tracep->fullBit(oldp+6913,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        tracep->fullBit(oldp+6914,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        tracep->fullBit(oldp+6915,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        tracep->fullBit(oldp+6916,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        tracep->fullBit(oldp+6917,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        tracep->fullBit(oldp+6918,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        tracep->fullBit(oldp+6919,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        tracep->fullBit(oldp+6920,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        tracep->fullCData(oldp+6921,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        tracep->fullQData(oldp+6922,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),64);
        tracep->fullBit(oldp+6924,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        tracep->fullBit(oldp+6925,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        tracep->fullBit(oldp+6926,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        tracep->fullBit(oldp+6927,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        tracep->fullBit(oldp+6928,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        tracep->fullBit(oldp+6929,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        tracep->fullBit(oldp+6930,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        tracep->fullBit(oldp+6931,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__1__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        tracep->fullCData(oldp+6932,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                     [0U]),2);
        tracep->fullCData(oldp+6933,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                     [1U]),2);
        tracep->fullBit(oldp+6934,(vlTOPp->clock));
        tracep->fullBit(oldp+6935,(vlTOPp->reset_ni));
        tracep->fullIData(oldp+6936,(vlTOPp->gpio_i),20);
        tracep->fullIData(oldp+6937,(vlTOPp->gpio_o),20);
        tracep->fullIData(oldp+6938,(vlTOPp->gpio_oe),20);
        tracep->fullBit(oldp+6939,((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                                | (0U 
                                                   != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))))));
        tracep->fullIData(oldp+6940,(((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
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
        tracep->fullBit(oldp+6941,((1U & (((((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
        tracep->fullBit(oldp+6942,(((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                                      | ((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
                                     | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                    | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)))));
        tracep->fullIData(oldp+6943,((((0U == (0x1fU 
                                               & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                  << 5U)))
                                        ? 0U : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                     << 5U))))) 
                                      | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                         (0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a))] 
                                         >> (0x1fU 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                << 5U))))),32);
        tracep->fullIData(oldp+6944,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                       ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                           ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                           : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_wb)
                                       : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_wb)),32);
        tracep->fullIData(oldp+6945,(((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel))
                                       ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd
                                       : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id)),32);
        tracep->fullIData(oldp+6946,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                       ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                           ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                               ? 2U
                                               : 4U)
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
        tracep->fullIData(oldp+6947,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                       ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id)
                                           ? (IData)(
                                                     vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                     [0U])
                                           : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext))
                                       : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result)),32);
        tracep->fullBit(oldp+6948,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                    & (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->fullBit(oldp+6949,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                       | (0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))));
        tracep->fullCData(oldp+6950,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                     [0U]),2);
        tracep->fullCData(oldp+6951,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                     [1U]),2);
        tracep->fullIData(oldp+6952,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                       ? 0U : ((1U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | (0x7cU 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                         << 2U)))
                                                : (0xffffff00U 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->fullIData(oldp+6953,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                        ? (0xfffffffeU 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                        : (0xfffffffcU 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
                                      + (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                         << 2U))),32);
        tracep->fullIData(oldp+6954,((0x7fffffffU & 
                                      ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                        ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                             ? (0xfffffffeU 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                             : 0U) 
                                           >> 1U) : 
                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->fullIData(oldp+6955,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                       ? 0U : (0x1fU 
                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xfU)))),32);
        tracep->fullIData(oldp+6956,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                       ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                           ? 4U : (
                                                   (1U 
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
                                               : 4U)
                                           : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
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
        tracep->fullBit(oldp+6957,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b))));
        tracep->fullQData(oldp+6958,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
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
        tracep->fullQData(oldp+6960,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                       ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                       : (1ULL | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                  << 1U)))),33);
        tracep->fullBit(oldp+6962,((1U & ((0x80000000U 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                           ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               >> 0x1fU) 
                                              ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                           : (~ (IData)(
                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x20U)))))));
        tracep->fullBit(oldp+6963,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a) 
                                     ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)) 
                                    & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->fullBit(oldp+6964,(((3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                           >> 8U)) 
                                    > (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->fullBit(oldp+6965,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod) 
                                    & (7U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU))))));
        tracep->fullQData(oldp+6966,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
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
        tracep->fullCData(oldp+6968,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                       ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                           : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))
                                       : 0U)),5);
        tracep->fullQData(oldp+6969,(((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class))
                                       ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial))
                                           ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result
                                           : (QData)((IData)(
                                                             (0x3ffU 
                                                              & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_class_mask))))
                                       : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_result)),64);
        tracep->fullIData(oldp+6971,(((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                >> 0xbU)))
                                       ? 0x7fc00000U
                                       : ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                           ? (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                      >> 0x20U))
                                           : ((0x800U 
                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                               ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                               : ((0U 
                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                   ? 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                    ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                                    : (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                               >> 0x20U)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                    ? 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                     ? (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                                >> 0x20U))
                                                     : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands))
                                                    : 0x80800001U)))))),32);
        tracep->fullIData(oldp+6972,(((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                >> 0xbU)))
                                       ? 0x7fc00000U
                                       : ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                           ? (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands 
                                                      >> 0x20U))
                                           : ((0x800U 
                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                               ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands)
                                               : ((0U 
                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                   ? 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                    ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands)
                                                    : (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands 
                                                               >> 0x20U)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                    ? 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                     ? (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands 
                                                                >> 0x20U))
                                                     : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__local_operands))
                                                    : 0x80800001U)))))),32);
        tracep->fullQData(oldp+6973,(((9U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d))
                                       : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                           ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                           : (- (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d)))))),64);
        tracep->fullQData(oldp+6975,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__in_valid)
                                       ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                       : (- (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d))))),64);
        tracep->fullQData(oldp+6977,(((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
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
        tracep->fullQData(oldp+6979,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                                       : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                           ? ((0x13fU 
                                               >= (0x1ffU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                               ? ((
                                                   (0U 
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
                                               ? ((
                                                   (0U 
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
        tracep->fullCData(oldp+6981,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                           ? 0x10U : 
                                          (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                       : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                           ? (0x10U 
                                              & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))
                                           : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        tracep->fullQData(oldp+6982,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                                       : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                           ? ((0x13fU 
                                               >= (0x1ffU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 6U)))
                                               ? ((
                                                   (0U 
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
                                               ? ((
                                                   (0U 
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
        tracep->fullCData(oldp+6984,(((0xbU == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                                       ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                           ? 0x10U : 
                                          (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                       : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                           ? (0x10U 
                                              & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))
                                           : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        tracep->fullCData(oldp+6985,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                       ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                       : 0xfU)),4);
        tracep->fullIData(oldp+6986,((vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o 
                                      & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->fullQData(oldp+6987,((0x1ffffffffULL 
                                      & (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                          ? ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                             << 1U)
                                          : ((0x83U 
                                              >= (0xffU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
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
        tracep->fullIData(oldp+6989,(((IData)(vlTOPp->reset_ni)
                                       ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                       : 0U)),32);
        tracep->fullIData(oldp+6990,((((IData)(vlTOPp->reset_ni)
                                        ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                        : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullIData(oldp+6991,((((IData)(vlTOPp->reset_ni)
                                        ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                        : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullQData(oldp+6992,((0x1ffffffffULL 
                                      & (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                              : 0ULL)))),33);
        tracep->fullIData(oldp+6994,(vlTOPp->gpio_i),32);
        tracep->fullIData(oldp+6995,((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                       & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                      & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->fullIData(oldp+6996,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                       & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                      & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->fullIData(oldp+6997,(((((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U]) 
                                        | ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                            & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])) 
                                       | ((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[1U])) 
                                      | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->fullBit(oldp+6998,((1U & vlTOPp->gpio_i)));
        tracep->fullBit(oldp+6999,((1U & ((1U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                           : vlTOPp->gpio_i))));
        tracep->fullBit(oldp+7000,((1U & (vlTOPp->gpio_i 
                                          >> 1U))));
        tracep->fullBit(oldp+7001,((1U & ((2U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 1U)))));
        tracep->fullBit(oldp+7002,((1U & (vlTOPp->gpio_i 
                                          >> 2U))));
        tracep->fullBit(oldp+7003,((1U & ((4U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 2U)))));
        tracep->fullBit(oldp+7004,((1U & (vlTOPp->gpio_i 
                                          >> 3U))));
        tracep->fullBit(oldp+7005,((1U & ((8U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 3U)))));
        tracep->fullBit(oldp+7006,((1U & (vlTOPp->gpio_i 
                                          >> 4U))));
        tracep->fullBit(oldp+7007,((1U & ((0x10U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 4U)))));
        tracep->fullBit(oldp+7008,((1U & (vlTOPp->gpio_i 
                                          >> 5U))));
        tracep->fullBit(oldp+7009,((1U & ((0x20U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 5U)))));
        tracep->fullBit(oldp+7010,((1U & (vlTOPp->gpio_i 
                                          >> 6U))));
        tracep->fullBit(oldp+7011,((1U & ((0x40U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 6U)))));
        tracep->fullBit(oldp+7012,((1U & (vlTOPp->gpio_i 
                                          >> 7U))));
        tracep->fullBit(oldp+7013,((1U & ((0x80U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 7U)))));
        tracep->fullBit(oldp+7014,((1U & (vlTOPp->gpio_i 
                                          >> 8U))));
        tracep->fullBit(oldp+7015,((1U & ((0x100U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 8U)))));
        tracep->fullBit(oldp+7016,((1U & (vlTOPp->gpio_i 
                                          >> 9U))));
        tracep->fullBit(oldp+7017,((1U & ((0x200U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 9U)))));
        tracep->fullBit(oldp+7018,((1U & (vlTOPp->gpio_i 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7019,((1U & ((0x400U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+7020,((1U & (vlTOPp->gpio_i 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7021,((1U & ((0x800U & 
                                           vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+7022,((1U & (vlTOPp->gpio_i 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7023,((1U & ((0x1000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+7024,((1U & (vlTOPp->gpio_i 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7025,((1U & ((0x2000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+7026,((1U & (vlTOPp->gpio_i 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7027,((1U & ((0x4000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+7028,((1U & (vlTOPp->gpio_i 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7029,((1U & ((0x8000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+7030,((1U & (vlTOPp->gpio_i 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7031,((1U & ((0x10000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+7032,((1U & (vlTOPp->gpio_i 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7033,((1U & ((0x20000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+7034,((1U & (vlTOPp->gpio_i 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7035,((1U & ((0x40000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+7036,((1U & (vlTOPp->gpio_i 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7037,((1U & ((0x80000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+7038,((1U & (vlTOPp->gpio_i 
                                          >> 0x14U))));
        tracep->fullBit(oldp+7039,((1U & ((0x100000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+7040,((1U & (vlTOPp->gpio_i 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7041,((1U & ((0x200000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+7042,((1U & (vlTOPp->gpio_i 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7043,((1U & ((0x400000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+7044,((1U & (vlTOPp->gpio_i 
                                          >> 0x17U))));
        tracep->fullBit(oldp+7045,((1U & ((0x800000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+7046,((1U & (vlTOPp->gpio_i 
                                          >> 0x18U))));
        tracep->fullBit(oldp+7047,((1U & ((0x1000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+7048,((1U & (vlTOPp->gpio_i 
                                          >> 0x19U))));
        tracep->fullBit(oldp+7049,((1U & ((0x2000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+7050,((1U & (vlTOPp->gpio_i 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+7051,((1U & ((0x4000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+7052,((1U & (vlTOPp->gpio_i 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7053,((1U & ((0x8000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+7054,((1U & (vlTOPp->gpio_i 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7055,((1U & ((0x10000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+7056,((1U & (vlTOPp->gpio_i 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7057,((1U & ((0x20000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+7058,((1U & (vlTOPp->gpio_i 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7059,((1U & ((0x40000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+7060,((1U & (vlTOPp->gpio_i 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7061,((1U & ((0x80000000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1fU)))));
        tracep->fullBit(oldp+7062,((((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                     & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                     ? ((((~ (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_NonH_D 
                                                      >> 0x33U))) 
                                          & (0U != 
                                             (0x7ffffffffffffULL 
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
        tracep->fullBit(oldp+7063,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                                           & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                           ? ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Sign_a_D) 
                                              ^ ((2U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                   ? 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                   >> 0xfU)
                                                   : 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                   >> 0xfU))
                                                  : 
                                                 ((1U 
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
        tracep->fullQData(oldp+7064,((0x1fffffffffffffULL 
                                      & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                          ? (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_D 
                                             << (0x3fU 
                                                 & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))
                                          : vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_a_norm_DP))),53);
        tracep->fullSData(oldp+7066,((0xfffU & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                                 & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                                 ? 
                                                (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_a_D) 
                                                  - 
                                                  (0x3fU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                                 + 
                                                 (0U 
                                                  != 
                                                  (0x3fU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])))
                                                 : (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_a_norm_DP)))),12);
        tracep->fullQData(oldp+7067,((0x1fffffffffffffULL 
                                      & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                          ? (vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_D 
                                             << (0x3fU 
                                                 & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))
                                          : vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Mant_b_norm_DP))),53);
        tracep->fullSData(oldp+7069,((0xfffU & (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Start_S) 
                                                 & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.Ready_SO))
                                                 ? 
                                                (((IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_b_D) 
                                                  - 
                                                  (0x3fU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                                 + 
                                                 (0U 
                                                  != 
                                                  (0x3fU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])))
                                                 : (IData)(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__preprocess_U0__DOT__Exp_b_norm_DP)))),12);
        tracep->fullBit(oldp+7070,(1U));
        tracep->fullIData(oldp+7071,(0U),32);
        tracep->fullBit(oldp+7072,(0U));
        tracep->fullSData(oldp+7073,(0U),15);
        tracep->fullBit(oldp+7074,(1U));
        tracep->fullIData(oldp+7075,(0U),32);
        tracep->fullIData(oldp+7076,(0x10U),32);
        tracep->fullIData(oldp+7077,(0xaU),32);
        tracep->fullIData(oldp+7078,(0x20U),32);
        tracep->fullBit(oldp+7079,(0U));
        tracep->fullIData(oldp+7080,(1U),32);
        tracep->fullIData(oldp+7081,(0U),32);
        tracep->fullIData(oldp+7082,(0U),32);
        tracep->fullIData(oldp+7083,(2U),32);
        tracep->fullIData(oldp+7084,(1U),32);
        tracep->fullIData(oldp+7085,(2U),32);
        tracep->fullBit(oldp+7086,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__is_fp_instr));
        tracep->fullCData(oldp+7087,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_operation),4);
        tracep->fullCData(oldp+7088,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_src_fmt),3);
        tracep->fullCData(oldp+7089,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt),3);
        tracep->fullIData(oldp+7090,(0U),32);
        tracep->fullCData(oldp+7091,(0U),8);
        tracep->fullIData(oldp+7092,(3U),32);
        tracep->fullIData(oldp+7093,(1U),32);
        tracep->fullIData(oldp+7094,(0U),32);
        tracep->fullIData(oldp+7095,(2U),32);
        tracep->fullBit(oldp+7096,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_floating_type_o));
        tracep->fullCData(oldp+7097,(0U),3);
        tracep->fullIData(oldp+7098,(1U),32);
        tracep->fullIData(oldp+7099,(0U),32);
        tracep->fullIData(oldp+7100,(2U),32);
        tracep->fullIData(oldp+7101,(1U),32);
        tracep->fullIData(oldp+7102,(0U),32);
        tracep->fullCData(oldp+7103,(0U),2);
        tracep->fullIData(oldp+7104,(0U),32);
        tracep->fullCData(oldp+7105,(0U),6);
        tracep->fullIData(oldp+7106,(1U),32);
        tracep->fullIData(oldp+7107,(2U),32);
        tracep->fullIData(oldp+7108,(0x4010110cU),32);
        tracep->fullCData(oldp+7109,(0x10U),6);
        tracep->fullIData(oldp+7110,(0x40000003U),32);
        tracep->fullCData(oldp+7111,(4U),3);
        tracep->fullIData(oldp+7112,(0x20U),32);
        tracep->fullIData(oldp+7113,(0x1fU),32);
        tracep->fullIData(oldp+7114,(6U),32);
        tracep->fullCData(oldp+7115,(0x10U),6);
        tracep->fullIData(oldp+7116,(0U),32);
        tracep->fullIData(oldp+7117,(0x12U),32);
        tracep->fullIData(oldp+7118,(0U),18);
        tracep->fullCData(oldp+7119,(0U),6);
        tracep->fullIData(oldp+7120,(1U),32);
        tracep->fullIData(oldp+7121,(0x40000003U),32);
        tracep->fullCData(oldp+7122,(4U),3);
        tracep->fullIData(oldp+7123,(0x40U),32);
        tracep->fullIData(oldp+7124,(0x20U),32);
        tracep->fullBit(oldp+7125,(0U));
        tracep->fullQData(oldp+7126,(0x20782ULL),43);
        __Vtemp2942[0U] = 0x556aa554U;
        __Vtemp2942[1U] = 0x2aaU;
        __Vtemp2942[2U] = 0U;
        __Vtemp2942[3U] = 0U;
        __Vtemp2942[4U] = 0U;
        __Vtemp2942[5U] = 0U;
        __Vtemp2942[6U] = 0U;
        __Vtemp2942[7U] = 0U;
        __Vtemp2942[8U] = 0U;
        __Vtemp2942[9U] = 0U;
        __Vtemp2942[0xaU] = 0U;
        __Vtemp2942[0xbU] = 0U;
        __Vtemp2942[0xcU] = 0U;
        __Vtemp2942[0xdU] = 0U;
        __Vtemp2942[0xeU] = 0U;
        __Vtemp2942[0xfU] = 0U;
        __Vtemp2942[0x10U] = 0U;
        __Vtemp2942[0x11U] = 0U;
        __Vtemp2942[0x12U] = 0U;
        __Vtemp2942[0x13U] = 0U;
        __Vtemp2942[0x14U] = 0U;
        __Vtemp2942[0x15U] = 0U;
        tracep->fullWData(oldp+7128,(__Vtemp2942),682);
        tracep->fullIData(oldp+7150,(0x40U),32);
        tracep->fullCData(oldp+7151,(2U),2);
        tracep->fullIData(oldp+7152,(4U),32);
        tracep->fullIData(oldp+7153,(5U),32);
        tracep->fullIData(oldp+7154,(8U),32);
        tracep->fullBit(oldp+7155,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullCData(oldp+7156,(0U),2);
        tracep->fullCData(oldp+7157,(0x18U),5);
        tracep->fullCData(oldp+7158,(2U),4);
        __Vtemp2943[0U] = 0U;
        __Vtemp2943[1U] = 0U;
        __Vtemp2943[2U] = 0U;
        __Vtemp2943[3U] = 0U;
        __Vtemp2943[4U] = 0U;
        tracep->fullWData(oldp+7159,(__Vtemp2943),160);
        tracep->fullSData(oldp+7164,(0x155U),10);
        tracep->fullCData(oldp+7165,(0U),2);
        tracep->fullCData(oldp+7166,(0U),3);
        tracep->fullBit(oldp+7167,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullIData(oldp+7168,(7U),32);
        tracep->fullIData(oldp+7169,(9U),32);
        tracep->fullBit(oldp+7170,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullIData(oldp+7171,(0xbU),32);
        tracep->fullBit(oldp+7172,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullIData(oldp+7173,(0xdU),32);
        tracep->fullCData(oldp+7174,(0U),2);
        tracep->fullCData(oldp+7175,(0U),3);
        tracep->fullCData(oldp+7176,(0U),2);
        tracep->fullBit(oldp+7177,(1U));
        tracep->fullIData(oldp+7178,(3U),32);
        tracep->fullIData(oldp+7179,(2U),32);
        tracep->fullCData(oldp+7180,(0U),3);
        tracep->fullCData(oldp+7181,(0U),2);
        tracep->fullBit(oldp+7182,(1U));
        tracep->fullBit(oldp+7183,(1U));
        tracep->fullIData(oldp+7184,(0x17U),32);
        tracep->fullIData(oldp+7185,(0x7fU),32);
        tracep->fullIData(oldp+7186,(0x18U),32);
        tracep->fullIData(oldp+7187,(0x33U),32);
        tracep->fullBit(oldp+7188,(1U));
        tracep->fullBit(oldp+7189,(0U));
        tracep->fullCData(oldp+7190,(0U),3);
        tracep->fullCData(oldp+7191,(0U),3);
        tracep->fullCData(oldp+7192,(0U),2);
        tracep->fullBit(oldp+7193,(1U));
        tracep->fullBit(oldp+7194,(0U));
        tracep->fullBit(oldp+7195,(1U));
        tracep->fullBit(oldp+7196,(0U));
        tracep->fullCData(oldp+7197,(0U),3);
        tracep->fullCData(oldp+7198,(0U),2);
        tracep->fullCData(oldp+7199,(1U),3);
        tracep->fullCData(oldp+7200,(0U),2);
        tracep->fullBit(oldp+7201,(1U));
        tracep->fullQData(oldp+7202,(1ULL),64);
        tracep->fullSData(oldp+7204,(1U),10);
        tracep->fullBit(oldp+7205,(1U));
        tracep->fullBit(oldp+7206,(0U));
        tracep->fullIData(oldp+7207,(1U),32);
        tracep->fullCData(oldp+7208,(1U),3);
        tracep->fullCData(oldp+7209,(0U),2);
        tracep->fullBit(oldp+7210,(1U));
        tracep->fullBit(oldp+7211,(1U));
        tracep->fullIData(oldp+7212,(0x34U),32);
        tracep->fullIData(oldp+7213,(0x3ffU),32);
        tracep->fullIData(oldp+7214,(0x35U),32);
        tracep->fullIData(oldp+7215,(0x6dU),32);
        tracep->fullBit(oldp+7216,(1U));
        tracep->fullBit(oldp+7217,(0U));
        tracep->fullCData(oldp+7218,(1U),3);
        tracep->fullIData(oldp+7219,(0x3fU),32);
        tracep->fullCData(oldp+7220,(1U),2);
        tracep->fullCData(oldp+7221,(0x18U),5);
        tracep->fullCData(oldp+7222,(2U),4);
        __Vtemp2944[0U] = 0U;
        __Vtemp2944[1U] = 0U;
        __Vtemp2944[2U] = 0U;
        __Vtemp2944[3U] = 0U;
        __Vtemp2944[4U] = 0U;
        tracep->fullWData(oldp+7223,(__Vtemp2944),160);
        tracep->fullSData(oldp+7228,(0x2aaU),10);
        tracep->fullCData(oldp+7229,(0U),2);
        tracep->fullBit(oldp+7230,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+7231,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+7232,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+7233,(1U),2);
        tracep->fullCData(oldp+7234,(0x18U),5);
        tracep->fullCData(oldp+7235,(2U),4);
        tracep->fullCData(oldp+7236,(0U),2);
        tracep->fullBit(oldp+7237,(1U));
        tracep->fullCData(oldp+7238,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt),5);
        tracep->fullCData(oldp+7239,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        tracep->fullQData(oldp+7240,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),64);
        tracep->fullQData(oldp+7242,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),64);
        tracep->fullQData(oldp+7244,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),64);
        tracep->fullIData(oldp+7246,(5U),32);
        tracep->fullCData(oldp+7247,(0x18U),5);
        tracep->fullCData(oldp+7248,(2U),4);
        tracep->fullCData(oldp+7249,(0x18U),5);
        tracep->fullCData(oldp+7250,(2U),4);
        tracep->fullCData(oldp+7251,(0x18U),5);
        tracep->fullCData(oldp+7252,(0x10U),5);
        tracep->fullCData(oldp+7253,(2U),4);
        tracep->fullCData(oldp+7254,(0x18U),5);
        tracep->fullCData(oldp+7255,(2U),4);
        tracep->fullCData(oldp+7256,(0x10U),5);
        tracep->fullCData(oldp+7257,(0x18U),5);
        tracep->fullCData(oldp+7258,(0U),2);
        tracep->fullBit(oldp+7259,(1U));
        tracep->fullBit(oldp+7260,(1U));
        tracep->fullCData(oldp+7261,(0x10U),5);
        tracep->fullCData(oldp+7262,(0U),2);
        tracep->fullBit(oldp+7263,(1U));
        tracep->fullCData(oldp+7264,(2U),2);
        tracep->fullCData(oldp+7265,(0x18U),5);
        tracep->fullCData(oldp+7266,(2U),4);
        __Vtemp2945[0U] = 0U;
        __Vtemp2945[1U] = 0U;
        __Vtemp2945[2U] = 0U;
        __Vtemp2945[3U] = 0U;
        __Vtemp2945[4U] = 0U;
        tracep->fullWData(oldp+7267,(__Vtemp2945),160);
        tracep->fullSData(oldp+7272,(0x155U),10);
        tracep->fullCData(oldp+7273,(0U),2);
        tracep->fullBit(oldp+7274,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+7275,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+7276,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+7277,(2U),2);
        tracep->fullCData(oldp+7278,(0U),3);
        tracep->fullCData(oldp+7279,(0U),2);
        tracep->fullBit(oldp+7280,(1U));
        tracep->fullCData(oldp+7281,(0U),3);
        tracep->fullCData(oldp+7282,(0U),2);
        tracep->fullBit(oldp+7283,(1U));
        tracep->fullBit(oldp+7284,(1U));
        tracep->fullBit(oldp+7285,(1U));
        tracep->fullBit(oldp+7286,(0U));
        tracep->fullCData(oldp+7287,(0U),5);
        tracep->fullCData(oldp+7288,(0U),3);
        tracep->fullCData(oldp+7289,(0U),3);
        tracep->fullCData(oldp+7290,(0U),2);
        tracep->fullBit(oldp+7291,(1U));
        tracep->fullBit(oldp+7292,(1U));
        tracep->fullBit(oldp+7293,(0U));
        tracep->fullCData(oldp+7294,(0U),3);
        tracep->fullCData(oldp+7295,(2U),2);
        tracep->fullCData(oldp+7296,(1U),3);
        tracep->fullCData(oldp+7297,(0U),2);
        tracep->fullBit(oldp+7298,(1U));
        tracep->fullBit(oldp+7299,(1U));
        tracep->fullBit(oldp+7300,(0U));
        tracep->fullCData(oldp+7301,(1U),3);
        tracep->fullCData(oldp+7302,(0U),2);
        tracep->fullBit(oldp+7303,(1U));
        tracep->fullBit(oldp+7304,(1U));
        tracep->fullBit(oldp+7305,(1U));
        tracep->fullBit(oldp+7306,(0U));
        tracep->fullCData(oldp+7307,(1U),3);
        tracep->fullCData(oldp+7308,(3U),2);
        tracep->fullCData(oldp+7309,(0x18U),5);
        tracep->fullCData(oldp+7310,(2U),4);
        __Vtemp2946[0U] = 0U;
        __Vtemp2946[1U] = 0U;
        __Vtemp2946[2U] = 0U;
        __Vtemp2946[3U] = 0U;
        __Vtemp2946[4U] = 0U;
        tracep->fullWData(oldp+7311,(__Vtemp2946),160);
        tracep->fullSData(oldp+7316,(0x2aaU),10);
        tracep->fullCData(oldp+7317,(0U),2);
        tracep->fullBit(oldp+7318,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+7319,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+7320,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+7321,(3U),2);
        tracep->fullCData(oldp+7322,(0x18U),5);
        tracep->fullCData(oldp+7323,(2U),4);
        tracep->fullCData(oldp+7324,(0U),2);
        tracep->fullBit(oldp+7325,(1U));
        tracep->fullCData(oldp+7326,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        tracep->fullQData(oldp+7327,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),64);
        tracep->fullCData(oldp+7329,(0x18U),5);
        tracep->fullCData(oldp+7330,(2U),4);
        tracep->fullCData(oldp+7331,(0x18U),5);
        tracep->fullCData(oldp+7332,(2U),4);
        tracep->fullCData(oldp+7333,(0x18U),5);
        tracep->fullCData(oldp+7334,(0x10U),5);
        tracep->fullCData(oldp+7335,(2U),4);
        tracep->fullCData(oldp+7336,(0x18U),5);
        tracep->fullCData(oldp+7337,(2U),4);
        tracep->fullCData(oldp+7338,(0x18U),5);
        tracep->fullCData(oldp+7339,(0x18U),5);
        tracep->fullCData(oldp+7340,(2U),4);
        tracep->fullCData(oldp+7341,(0U),2);
        tracep->fullBit(oldp+7342,(1U));
        tracep->fullBit(oldp+7343,(1U));
        tracep->fullQData(oldp+7344,(0xb00000034ULL),64);
        tracep->fullIData(oldp+7346,(0xcU),32);
        tracep->fullBit(oldp+7347,(1U));
        tracep->fullCData(oldp+7348,(2U),2);
        tracep->fullIData(oldp+7349,(0x35U),32);
        tracep->fullIData(oldp+7350,(0x4aU),32);
        tracep->fullCData(oldp+7351,(0x10U),5);
        tracep->fullCData(oldp+7352,(0xffU),8);
        tracep->fullIData(oldp+7353,(0x400000U),23);
        tracep->fullSData(oldp+7354,(0x7ffU),11);
        tracep->fullQData(oldp+7355,(0x8000000000000ULL),52);
        tracep->fullCData(oldp+7357,(0x1fU),5);
        tracep->fullSData(oldp+7358,(0x200U),10);
        tracep->fullCData(oldp+7359,(2U),2);
        tracep->fullCData(oldp+7360,(0x40U),7);
        tracep->fullCData(oldp+7361,(0U),3);
        tracep->fullCData(oldp+7362,(1U),3);
        tracep->fullCData(oldp+7363,(0x18U),5);
        tracep->fullCData(oldp+7364,(2U),4);
        tracep->fullCData(oldp+7365,(0U),2);
        tracep->fullBit(oldp+7366,(1U));
        tracep->fullQData(oldp+7367,(0xb00000034ULL),64);
        tracep->fullBit(oldp+7369,(1U));
        tracep->fullCData(oldp+7370,(2U),2);
        tracep->fullIData(oldp+7371,(2U),32);
        tracep->fullIData(oldp+7372,(0xffffffffU),32);
        tracep->fullCData(oldp+7373,(0xfU),4);
        tracep->fullIData(oldp+7374,(2U),32);
        tracep->fullIData(oldp+7375,(1U),32);
        tracep->fullWData(oldp+7376,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i),86);
        tracep->fullQData(oldp+7379,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_debug_rom_i),52);
        tracep->fullQData(oldp+7381,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i),52);
        tracep->fullQData(oldp+7383,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i),52);
        tracep->fullQData(oldp+7385,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i),52);
        tracep->fullQData(oldp+7387,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i),52);
        tracep->fullQData(oldp+7389,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i),52);
        tracep->fullQData(oldp+7391,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i),52);
        tracep->fullQData(oldp+7393,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i),52);
        tracep->fullBit(oldp+7395,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__scanmode_i));
        tracep->fullCData(oldp+7396,(7U),3);
        tracep->fullCData(oldp+7397,(0U),4);
        tracep->fullSData(oldp+7398,(0U),12);
        tracep->fullIData(oldp+7399,(0x10000U),32);
        tracep->fullIData(oldp+7400,(0x11U),32);
        tracep->fullIData(oldp+7401,(0x56U),32);
        tracep->fullSData(oldp+7402,(0x1ffU),9);
        tracep->fullQData(oldp+7403,(0ULL),36);
        tracep->fullIData(oldp+7405,(9U),32);
        tracep->fullIData(oldp+7406,(0x58U),32);
        tracep->fullBit(oldp+7407,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7408,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_dm_sba_i[0U])));
        tracep->fullIData(oldp+7409,(0xcU),32);
        tracep->fullIData(oldp+7410,(4U),32);
        tracep->fullIData(oldp+7411,(5U),32);
        tracep->fullIData(oldp+7412,(0xdU),32);
        tracep->fullIData(oldp+7413,(0x21U),32);
        tracep->fullIData(oldp+7414,(4U),32);
        tracep->fullIData(oldp+7415,(8U),32);
        tracep->fullIData(oldp+7416,(3U),32);
        tracep->fullIData(oldp+7417,(0x21U),32);
        tracep->fullCData(oldp+7418,(0U),4);
        tracep->fullIData(oldp+7419,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__iccm__DOT__Di),32);
        tracep->fullCData(oldp+7420,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rerror_i),2);
        tracep->fullBit(oldp+7421,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rerror_i))));
        tracep->fullQData(oldp+7422,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_uart0_i),52);
        tracep->fullQData(oldp+7424,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_uart1_i),52);
        tracep->fullQData(oldp+7426,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_spi0_i),52);
        tracep->fullQData(oldp+7428,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_spi1_i),52);
        tracep->fullQData(oldp+7430,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_spi2_i),52);
        tracep->fullQData(oldp+7432,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_pwm_i),52);
        tracep->fullQData(oldp+7434,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_i2c0_i),52);
        tracep->fullQData(oldp+7436,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_i2c1_i),52);
        tracep->fullQData(oldp+7438,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_can0_i),52);
        tracep->fullQData(oldp+7440,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_can1_i),52);
        tracep->fullQData(oldp+7442,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_adc_i),52);
        tracep->fullQData(oldp+7444,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_qspi_i),52);
        tracep->fullBit(oldp+7446,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__scanmode_i));
        tracep->fullSData(oldp+7447,(0x1fffU),13);
        tracep->fullQData(oldp+7448,(0ULL),52);
        tracep->fullIData(oldp+7450,(0xdU),32);
        tracep->fullIData(oldp+7451,(6U),32);
        tracep->fullIData(oldp+7452,(0x573143U),24);
        tracep->fullSData(oldp+7453,(0x5257U),16);
        tracep->fullSData(oldp+7454,(0x524fU),16);
        __Vtemp2947[0U] = 0x3e20e8fU;
        __Vtemp2947[1U] = 0x47df4U;
        __Vtemp2947[2U] = 0xf3181U;
        __Vtemp2947[3U] = 0x12ff886U;
        __Vtemp2947[4U] = 0x3e7b72U;
        __Vtemp2947[5U] = 0x11d2e881U;
        tracep->fullWData(oldp+7455,(__Vtemp2947),192);
        tracep->fullIData(oldp+7461,(0x40060000U),32);
        tracep->fullIData(oldp+7462,(0x40070000U),32);
        tracep->fullIData(oldp+7463,(0x40080000U),32);
        tracep->fullIData(oldp+7464,(0x40090000U),32);
        tracep->fullIData(oldp+7465,(0x400a0000U),32);
        tracep->fullIData(oldp+7466,(0x400b0000U),32);
        tracep->fullIData(oldp+7467,(0x400c0000U),32);
        tracep->fullIData(oldp+7468,(0x400d0000U),32);
        tracep->fullIData(oldp+7469,(0x400e0000U),32);
        tracep->fullIData(oldp+7470,(0x400f0000U),32);
        tracep->fullIData(oldp+7471,(0x40100000U),32);
        tracep->fullIData(oldp+7472,(0x40200000U),32);
        tracep->fullIData(oldp+7473,(0x40300000U),32);
        tracep->fullIData(oldp+7474,(0xffffU),32);
        tracep->fullIData(oldp+7475,(0xfffU),32);
        tracep->fullIData(oldp+7476,(0x10040000U),32);
        tracep->fullIData(oldp+7477,(0x10000000U),32);
        tracep->fullIData(oldp+7478,(0x10080000U),32);
        tracep->fullIData(oldp+7479,(0x40000000U),32);
        tracep->fullIData(oldp+7480,(0x40010000U),32);
        tracep->fullIData(oldp+7481,(0x40020000U),32);
        tracep->fullIData(oldp+7482,(0x40030000U),32);
        tracep->fullIData(oldp+7483,(0x40040000U),32);
        tracep->fullIData(oldp+7484,(0x40050000U),32);
        tracep->fullIData(oldp+7485,(0xbU),32);
        tracep->fullIData(oldp+7486,(3U),32);
        tracep->fullCData(oldp+7487,(1U),3);
        tracep->fullCData(oldp+7488,(2U),3);
        tracep->fullCData(oldp+7489,(3U),3);
        tracep->fullIData(oldp+7490,(6U),32);
        tracep->fullIData(oldp+7491,(2U),32);
        tracep->fullIData(oldp+7492,(0x40U),32);
        tracep->fullIData(oldp+7493,(0x34U),32);
        tracep->fullIData(oldp+7494,(0xbU),32);
        tracep->fullIData(oldp+7495,(0x3ffU),32);
        tracep->fullSData(oldp+7496,(0x400U),11);
        tracep->fullIData(oldp+7497,(0x1ffU),32);
        tracep->fullSData(oldp+7498,(0U),11);
        tracep->fullSData(oldp+7499,(1U),13);
        tracep->fullQData(oldp+7500,(0ULL),52);
        tracep->fullQData(oldp+7502,(0ULL),64);
        tracep->fullQData(oldp+7504,(0x8000000000000000ULL),64);
        tracep->fullQData(oldp+7506,(0x7ff8000000000000ULL),64);
        tracep->fullIData(oldp+7508,(0x20U),32);
        tracep->fullIData(oldp+7509,(0x17U),32);
        tracep->fullIData(oldp+7510,(8U),32);
        tracep->fullIData(oldp+7511,(0x7fU),32);
        tracep->fullCData(oldp+7512,(0x80U),8);
        tracep->fullIData(oldp+7513,(0x3fU),32);
        tracep->fullIData(oldp+7514,(0U),23);
        tracep->fullIData(oldp+7515,(0x80000000U),32);
        tracep->fullIData(oldp+7516,(0x7fc00000U),32);
        tracep->fullIData(oldp+7517,(0x10U),32);
        tracep->fullIData(oldp+7518,(0xaU),32);
        tracep->fullIData(oldp+7519,(5U),32);
        tracep->fullIData(oldp+7520,(0xfU),32);
        tracep->fullIData(oldp+7521,(7U),32);
        tracep->fullSData(oldp+7522,(0U),10);
        tracep->fullSData(oldp+7523,(0U),16);
        tracep->fullSData(oldp+7524,(0x8000U),16);
        tracep->fullSData(oldp+7525,(0x7e00U),16);
        tracep->fullCData(oldp+7526,(0U),7);
        tracep->fullSData(oldp+7527,(0x7fc0U),16);
        tracep->fullCData(oldp+7528,(3U),2);
        tracep->fullCData(oldp+7529,(0U),8);
        tracep->fullBit(oldp+7530,(0U));
        tracep->fullBit(oldp+7531,(1U));
        tracep->fullIData(oldp+7532,(0x55U),32);
        tracep->fullBit(oldp+7533,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i))));
        tracep->fullBit(oldp+7534,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7535,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7537,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i))));
        tracep->fullBit(oldp+7538,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7539,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer0_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7541,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i))));
        tracep->fullBit(oldp+7542,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7543,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer1_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7545,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i))));
        tracep->fullBit(oldp+7546,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7547,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer2_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7549,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i))));
        tracep->fullBit(oldp+7550,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7551,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer3_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7553,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i))));
        tracep->fullBit(oldp+7554,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7555,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_timer4_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7557,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i))));
        tracep->fullBit(oldp+7558,((1U & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7559,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_plic_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullCData(oldp+7561,(4U),6);
        tracep->fullCData(oldp+7562,(8U),6);
        tracep->fullCData(oldp+7563,(0xcU),6);
        tracep->fullCData(oldp+7564,(0x10U),6);
        tracep->fullCData(oldp+7565,(0x14U),6);
        tracep->fullCData(oldp+7566,(0x18U),6);
        tracep->fullCData(oldp+7567,(0x1cU),6);
        tracep->fullCData(oldp+7568,(0x20U),6);
        tracep->fullCData(oldp+7569,(0x24U),6);
        tracep->fullCData(oldp+7570,(0x28U),6);
        tracep->fullCData(oldp+7571,(0x2cU),6);
        tracep->fullCData(oldp+7572,(0x30U),6);
        tracep->fullCData(oldp+7573,(0x34U),6);
        tracep->fullCData(oldp+7574,(0x38U),6);
        tracep->fullSData(oldp+7575,(0x3a0U),12);
        tracep->fullSData(oldp+7576,(0x3b0U),12);
        tracep->fullIData(oldp+7577,(0x11U),32);
        tracep->fullIData(oldp+7578,(0x15U),32);
        tracep->fullCData(oldp+7579,(1U),2);
        tracep->fullIData(oldp+7580,(0x1eU),32);
        tracep->fullIData(oldp+7581,(0x505043U),24);
        __Vtemp2948[0U] = 1U;
        __Vtemp2948[1U] = 0U;
        __Vtemp2948[2U] = 0U;
        tracep->fullWData(oldp+7582,(__Vtemp2948),86);
        tracep->fullQData(oldp+7585,(1ULL),52);
        __Vtemp2949[0U] = 0x17U;
        __Vtemp2949[1U] = 8U;
        __Vtemp2949[2U] = 0x34U;
        __Vtemp2949[3U] = 0xbU;
        __Vtemp2949[4U] = 0xaU;
        __Vtemp2949[5U] = 5U;
        __Vtemp2949[6U] = 2U;
        __Vtemp2949[7U] = 5U;
        __Vtemp2949[8U] = 7U;
        __Vtemp2949[9U] = 8U;
        tracep->fullWData(oldp+7587,(__Vtemp2949),320);
        tracep->fullCData(oldp+7597,(0x18U),5);
        tracep->fullQData(oldp+7598,(0x20383ULL),43);
        tracep->fullQData(oldp+7600,(0x20782ULL),43);
        tracep->fullQData(oldp+7602,(0x10302ULL),43);
        tracep->fullQData(oldp+7604,(0x207ffULL),43);
        tracep->fullQData(oldp+7606,(0x1077eULL),43);
        tracep->fullQData(oldp+7608,(0x10716ULL),43);
        __Vtemp2950[0U] = 0x556aa554U;
        __Vtemp2950[1U] = 0x2aaU;
        __Vtemp2950[2U] = 0U;
        __Vtemp2950[3U] = 0U;
        __Vtemp2950[4U] = 0U;
        __Vtemp2950[5U] = 0U;
        __Vtemp2950[6U] = 0U;
        __Vtemp2950[7U] = 0U;
        __Vtemp2950[8U] = 0U;
        __Vtemp2950[9U] = 0U;
        __Vtemp2950[0xaU] = 0U;
        __Vtemp2950[0xbU] = 0U;
        __Vtemp2950[0xcU] = 0U;
        __Vtemp2950[0xdU] = 0U;
        __Vtemp2950[0xeU] = 0U;
        __Vtemp2950[0xfU] = 0U;
        __Vtemp2950[0x10U] = 0U;
        __Vtemp2950[0x11U] = 0U;
        __Vtemp2950[0x12U] = 0U;
        __Vtemp2950[0x13U] = 0U;
        __Vtemp2950[0x14U] = 0U;
        __Vtemp2950[0x15U] = 0U;
        tracep->fullWData(oldp+7610,(__Vtemp2950),682);
        __Vtemp2951[0U] = 0x55400554U;
        __Vtemp2951[1U] = 0x6aaU;
        __Vtemp2951[2U] = 0U;
        __Vtemp2951[3U] = 0U;
        __Vtemp2951[4U] = 0U;
        __Vtemp2951[5U] = 0U;
        __Vtemp2951[6U] = 0x400U;
        __Vtemp2951[7U] = 0U;
        __Vtemp2951[8U] = 0U;
        __Vtemp2951[9U] = 0U;
        __Vtemp2951[0xaU] = 0U;
        __Vtemp2951[0xbU] = 0x400U;
        __Vtemp2951[0xcU] = 0U;
        __Vtemp2951[0xdU] = 0U;
        __Vtemp2951[0xeU] = 0U;
        __Vtemp2951[0xfU] = 0U;
        __Vtemp2951[0x10U] = 0x400U;
        __Vtemp2951[0x11U] = 0U;
        __Vtemp2951[0x12U] = 0U;
        __Vtemp2951[0x13U] = 0U;
        __Vtemp2951[0x14U] = 0U;
        __Vtemp2951[0x15U] = 0U;
        tracep->fullWData(oldp+7632,(__Vtemp2951),682);
        tracep->fullQData(oldp+7654,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58),58);
        tracep->fullQData(oldp+7656,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59),59);
        tracep->fullQData(oldp+7658,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60),60);
        tracep->fullQData(oldp+7660,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20),62);
        tracep->fullQData(oldp+7662,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3),58);
        tracep->fullQData(oldp+7664,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3),58);
        tracep->fullBit(oldp+7666,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO));
        tracep->fullQData(oldp+7667,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D),58);
        tracep->fullQData(oldp+7669,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D),58);
        tracep->fullBit(oldp+7671,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S));
        tracep->fullQData(oldp+7672,(0x3ffffffffffffffULL),58);
        tracep->fullIData(oldp+7674,(0x3aU),32);
        tracep->fullQData(oldp+7675,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58),58);
        tracep->fullQData(oldp+7677,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59),59);
        tracep->fullQData(oldp+7679,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60),60);
        tracep->fullQData(oldp+7681,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20),62);
        tracep->fullQData(oldp+7683,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3),58);
        tracep->fullQData(oldp+7685,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3),58);
        tracep->fullBit(oldp+7687,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO));
        tracep->fullQData(oldp+7688,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D),58);
        tracep->fullQData(oldp+7690,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D),58);
        tracep->fullBit(oldp+7692,(vlSymsp->TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei.__PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S));
    }
}
