// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__160(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__160\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
        (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
        (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
        = (((0U == (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                             << 5U))) ? 0U : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                              ((IData)(1U) 
                                               + (0x1fU 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                      << 5U))))) 
           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
              (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a))] 
              >> (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                           << 5U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb))
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb))
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
            : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2))
                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b
                : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id)
            : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
            | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                   << 1U));
    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                  << 1U)))
                : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                  << 1U))));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : (1ULL | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                          << 1U))) 
                             + (0x1ffffffffULL & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))))));
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                             << 4U) | ((0xcU & ((IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)) 
                                                << 2U)) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be 
        = vlTOPp->__Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be
        [vlTOPp->__Vtableidx6];
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__161(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__161\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1151[3];
    // Body
    __Vtemp1151[0U] = (IData)((1ULL | (((QData)((IData)(
                                                        ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                                          : 0xfU))) 
                                        << 0x21U) | 
                                       ((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 2U)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                      >> 1U)))
                                                           ? 
                                                          ((0xff000000U 
                                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                               << 0x18U)) 
                                                           | (0xffffffU 
                                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                 >> 8U)))
                                                           : 
                                                          ((0xffff0000U 
                                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                               << 0x10U)) 
                                                           | (0xffffU 
                                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                 >> 0x10U))))
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                      >> 1U)))
                                                           ? 
                                                          ((0xffffff00U 
                                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                               << 8U)) 
                                                           | (0xffU 
                                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                 >> 0x18U)))
                                                           : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd)))) 
                                        << 1U))));
    __Vtemp1151[1U] = ((0xffffff80U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 3U)) 
                                       << 7U)) | (IData)(
                                                         ((1ULL 
                                                           | (((QData)((IData)(
                                                                               ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                                                                 ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                                                                 : 0xfU))) 
                                                               << 0x21U) 
                                                              | ((QData)((IData)(
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 2U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xff000000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                << 0x18U)) 
                                                                                | (0xffffffU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((0xffff0000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                >> 0x10U))))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xffffff00U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                >> 0x18U)))
                                                                                 : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd)))) 
                                                                 << 1U))) 
                                                          >> 0x20U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U] 
        = __Vtemp1151[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
        = __Vtemp1151[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
        = ((0xffffffe0U & (0x4000U | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req) 
                                       << 0x15U) | 
                                      ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                          ? ((0xfU 
                                              == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be))
                                              ? 0U : 1U)
                                          : 4U) << 0x12U) 
                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q) 
                                          << 5U))))) 
           | (0x1fU & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) >> 0x19U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__162(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__162\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_a 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1)
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
           (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                     >> 0xfU))] : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2)
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__163(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__163\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*319:0*/ __Vtemp1153[10];
    WData/*319:0*/ __Vtemp1154[10];
    WData/*319:0*/ __Vtemp1155[10];
    WData/*319:0*/ __Vtemp1156[10];
    WData/*319:0*/ __Vtemp1157[10];
    WData/*319:0*/ __Vtemp1158[10];
    WData/*319:0*/ __Vtemp1159[10];
    WData/*319:0*/ __Vtemp1160[10];
    WData/*319:0*/ __Vtemp1161[10];
    WData/*319:0*/ __Vtemp1162[10];
    WData/*319:0*/ __Vtemp1163[10];
    WData/*319:0*/ __Vtemp1164[10];
    WData/*319:0*/ __Vtemp1165[10];
    WData/*319:0*/ __Vtemp1166[10];
    WData/*319:0*/ __Vtemp1167[10];
    WData/*319:0*/ __Vtemp1168[10];
    WData/*319:0*/ __Vtemp1169[10];
    // Body
    vlTOPp->__Vfunc_fp_width__6__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
    __Vtemp1153[0U] = 0x17U;
    __Vtemp1153[1U] = 8U;
    __Vtemp1153[2U] = 0x34U;
    __Vtemp1153[3U] = 0xbU;
    __Vtemp1153[4U] = 0xaU;
    __Vtemp1153[5U] = 5U;
    __Vtemp1153[6U] = 2U;
    __Vtemp1153[7U] = 5U;
    __Vtemp1153[8U] = 7U;
    __Vtemp1153[9U] = 8U;
    __Vtemp1154[0U] = 0x17U;
    __Vtemp1154[1U] = 8U;
    __Vtemp1154[2U] = 0x34U;
    __Vtemp1154[3U] = 0xbU;
    __Vtemp1154[4U] = 0xaU;
    __Vtemp1154[5U] = 5U;
    __Vtemp1154[6U] = 2U;
    __Vtemp1154[7U] = 5U;
    __Vtemp1154[8U] = 7U;
    __Vtemp1154[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__6__Vfuncout = ((IData)(1U) 
                                             + (((0x13fU 
                                                  >= 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                       << 6U))))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                         << 6U))))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp1153[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                           << 6U)) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                          << 6U)))))) 
                                                  | (__Vtemp1153[
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                           << 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                          << 6U)))))
                                                  : 0U) 
                                                + (
                                                   (0x13fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                        << 6U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                          << 6U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp1154[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                           << 1U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                           << 6U))))) 
                                                    | (__Vtemp1154[
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                           << 1U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__6__fmt) 
                                                           << 6U))))
                                                    : 0U)));
    vlTOPp->__Vfunc_fp_width__5__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt;
    __Vtemp1155[0U] = 0x17U;
    __Vtemp1155[1U] = 8U;
    __Vtemp1155[2U] = 0x34U;
    __Vtemp1155[3U] = 0xbU;
    __Vtemp1155[4U] = 0xaU;
    __Vtemp1155[5U] = 5U;
    __Vtemp1155[6U] = 2U;
    __Vtemp1155[7U] = 5U;
    __Vtemp1155[8U] = 7U;
    __Vtemp1155[9U] = 8U;
    __Vtemp1156[0U] = 0x17U;
    __Vtemp1156[1U] = 8U;
    __Vtemp1156[2U] = 0x34U;
    __Vtemp1156[3U] = 0xbU;
    __Vtemp1156[4U] = 0xaU;
    __Vtemp1156[5U] = 5U;
    __Vtemp1156[6U] = 2U;
    __Vtemp1156[7U] = 5U;
    __Vtemp1156[8U] = 7U;
    __Vtemp1156[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__5__Vfuncout = ((IData)(1U) 
                                             + (((0x13fU 
                                                  >= 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                       << 6U))))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                         << 6U))))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp1155[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                           << 6U)) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                          << 6U)))))) 
                                                  | (__Vtemp1155[
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                           << 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                          << 6U)))))
                                                  : 0U) 
                                                + (
                                                   (0x13fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                        << 6U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                          << 6U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp1156[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                           << 1U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                           << 6U))))) 
                                                    | (__Vtemp1156[
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                           << 1U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__5__fmt) 
                                                           << 6U))))
                                                    : 0U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast 
        = (vlTOPp->__Vfunc_fp_width__5__Vfuncout > vlTOPp->__Vfunc_fp_width__6__Vfuncout);
    vlTOPp->__Vfunc_fp_width__8__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
    __Vtemp1157[0U] = 0x17U;
    __Vtemp1157[1U] = 8U;
    __Vtemp1157[2U] = 0x34U;
    __Vtemp1157[3U] = 0xbU;
    __Vtemp1157[4U] = 0xaU;
    __Vtemp1157[5U] = 5U;
    __Vtemp1157[6U] = 2U;
    __Vtemp1157[7U] = 5U;
    __Vtemp1157[8U] = 7U;
    __Vtemp1157[9U] = 8U;
    __Vtemp1158[0U] = 0x17U;
    __Vtemp1158[1U] = 8U;
    __Vtemp1158[2U] = 0x34U;
    __Vtemp1158[3U] = 0xbU;
    __Vtemp1158[4U] = 0xaU;
    __Vtemp1158[5U] = 5U;
    __Vtemp1158[6U] = 2U;
    __Vtemp1158[7U] = 5U;
    __Vtemp1158[8U] = 7U;
    __Vtemp1158[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__8__Vfuncout = ((IData)(1U) 
                                             + (((0x13fU 
                                                  >= 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                       << 6U))))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                         << 6U))))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp1157[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                           << 6U)) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                          << 6U)))))) 
                                                  | (__Vtemp1157[
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                           << 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                          << 6U)))))
                                                  : 0U) 
                                                + (
                                                   (0x13fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                        << 6U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                          << 6U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp1158[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                           << 1U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                           << 6U))))) 
                                                    | (__Vtemp1158[
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                           << 1U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__8__fmt) 
                                                           << 6U))))
                                                    : 0U)));
    vlTOPp->__Vfunc_fp_width__7__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt;
    __Vtemp1159[0U] = 0x17U;
    __Vtemp1159[1U] = 8U;
    __Vtemp1159[2U] = 0x34U;
    __Vtemp1159[3U] = 0xbU;
    __Vtemp1159[4U] = 0xaU;
    __Vtemp1159[5U] = 5U;
    __Vtemp1159[6U] = 2U;
    __Vtemp1159[7U] = 5U;
    __Vtemp1159[8U] = 7U;
    __Vtemp1159[9U] = 8U;
    __Vtemp1160[0U] = 0x17U;
    __Vtemp1160[1U] = 8U;
    __Vtemp1160[2U] = 0x34U;
    __Vtemp1160[3U] = 0xbU;
    __Vtemp1160[4U] = 0xaU;
    __Vtemp1160[5U] = 5U;
    __Vtemp1160[6U] = 2U;
    __Vtemp1160[7U] = 5U;
    __Vtemp1160[8U] = 7U;
    __Vtemp1160[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__7__Vfuncout = ((IData)(1U) 
                                             + (((0x13fU 
                                                  >= 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                       << 6U))))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                         << 6U))))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp1159[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                           << 6U)) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                          << 6U)))))) 
                                                  | (__Vtemp1159[
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                           << 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                          << 6U)))))
                                                  : 0U) 
                                                + (
                                                   (0x13fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                        << 6U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                          << 6U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp1160[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                           << 1U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                           << 6U))))) 
                                                    | (__Vtemp1160[
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                           << 1U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__7__fmt) 
                                                           << 6U))))
                                                    : 0U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast 
        = (vlTOPp->__Vfunc_fp_width__7__Vfuncout < vlTOPp->__Vfunc_fp_width__8__Vfuncout);
    vlTOPp->__Vfunc_fp_width__10__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
    __Vtemp1161[0U] = 0x17U;
    __Vtemp1161[1U] = 8U;
    __Vtemp1161[2U] = 0x34U;
    __Vtemp1161[3U] = 0xbU;
    __Vtemp1161[4U] = 0xaU;
    __Vtemp1161[5U] = 5U;
    __Vtemp1161[6U] = 2U;
    __Vtemp1161[7U] = 5U;
    __Vtemp1161[8U] = 7U;
    __Vtemp1161[9U] = 8U;
    __Vtemp1162[0U] = 0x17U;
    __Vtemp1162[1U] = 8U;
    __Vtemp1162[2U] = 0x34U;
    __Vtemp1162[3U] = 0xbU;
    __Vtemp1162[4U] = 0xaU;
    __Vtemp1162[5U] = 5U;
    __Vtemp1162[6U] = 2U;
    __Vtemp1162[7U] = 5U;
    __Vtemp1162[8U] = 7U;
    __Vtemp1162[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__10__Vfuncout = ((IData)(1U) 
                                              + (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp1161[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                            << 6U)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                           << 6U)))))) 
                                                   | (__Vtemp1161[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 + 
                                                 ((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                       << 6U)))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                         << 6U)))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp1162[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                          << 1U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                          << 6U))))) 
                                                   | (__Vtemp1162[
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                          << 1U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__10__fmt) 
                                                          << 6U))))
                                                   : 0U)));
    vlTOPp->__Vfunc_fp_width__9__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt;
    __Vtemp1163[0U] = 0x17U;
    __Vtemp1163[1U] = 8U;
    __Vtemp1163[2U] = 0x34U;
    __Vtemp1163[3U] = 0xbU;
    __Vtemp1163[4U] = 0xaU;
    __Vtemp1163[5U] = 5U;
    __Vtemp1163[6U] = 2U;
    __Vtemp1163[7U] = 5U;
    __Vtemp1163[8U] = 7U;
    __Vtemp1163[9U] = 8U;
    __Vtemp1164[0U] = 0x17U;
    __Vtemp1164[1U] = 8U;
    __Vtemp1164[2U] = 0x34U;
    __Vtemp1164[3U] = 0xbU;
    __Vtemp1164[4U] = 0xaU;
    __Vtemp1164[5U] = 5U;
    __Vtemp1164[6U] = 2U;
    __Vtemp1164[7U] = 5U;
    __Vtemp1164[8U] = 7U;
    __Vtemp1164[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__9__Vfuncout = ((IData)(1U) 
                                             + (((0x13fU 
                                                  >= 
                                                  (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                       << 6U))))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                         << 6U))))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp1163[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                           << 6U)) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                          << 6U)))))) 
                                                  | (__Vtemp1163[
                                                     (0xfU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                           << 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                          << 6U)))))
                                                  : 0U) 
                                                + (
                                                   (0x13fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                        << 6U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                          << 6U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp1164[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                           << 1U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                           << 6U))))) 
                                                    | (__Vtemp1164[
                                                       (0xeU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                           << 1U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->__Vfunc_fp_width__9__fmt) 
                                                           << 6U))))
                                                    : 0U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast 
        = (vlTOPp->__Vfunc_fp_width__9__Vfuncout > vlTOPp->__Vfunc_fp_width__10__Vfuncout);
    vlTOPp->__Vfunc_fp_width__12__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
    __Vtemp1165[0U] = 0x17U;
    __Vtemp1165[1U] = 8U;
    __Vtemp1165[2U] = 0x34U;
    __Vtemp1165[3U] = 0xbU;
    __Vtemp1165[4U] = 0xaU;
    __Vtemp1165[5U] = 5U;
    __Vtemp1165[6U] = 2U;
    __Vtemp1165[7U] = 5U;
    __Vtemp1165[8U] = 7U;
    __Vtemp1165[9U] = 8U;
    __Vtemp1166[0U] = 0x17U;
    __Vtemp1166[1U] = 8U;
    __Vtemp1166[2U] = 0x34U;
    __Vtemp1166[3U] = 0xbU;
    __Vtemp1166[4U] = 0xaU;
    __Vtemp1166[5U] = 5U;
    __Vtemp1166[6U] = 2U;
    __Vtemp1166[7U] = 5U;
    __Vtemp1166[8U] = 7U;
    __Vtemp1166[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__12__Vfuncout = ((IData)(1U) 
                                              + (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp1165[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                            << 6U)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                           << 6U)))))) 
                                                   | (__Vtemp1165[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 + 
                                                 ((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                       << 6U)))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                         << 6U)))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp1166[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                          << 1U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                          << 6U))))) 
                                                   | (__Vtemp1166[
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                          << 1U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__12__fmt) 
                                                          << 6U))))
                                                   : 0U)));
    vlTOPp->__Vfunc_fp_width__11__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt;
    __Vtemp1167[0U] = 0x17U;
    __Vtemp1167[1U] = 8U;
    __Vtemp1167[2U] = 0x34U;
    __Vtemp1167[3U] = 0xbU;
    __Vtemp1167[4U] = 0xaU;
    __Vtemp1167[5U] = 5U;
    __Vtemp1167[6U] = 2U;
    __Vtemp1167[7U] = 5U;
    __Vtemp1167[8U] = 7U;
    __Vtemp1167[9U] = 8U;
    __Vtemp1168[0U] = 0x17U;
    __Vtemp1168[1U] = 8U;
    __Vtemp1168[2U] = 0x34U;
    __Vtemp1168[3U] = 0xbU;
    __Vtemp1168[4U] = 0xaU;
    __Vtemp1168[5U] = 5U;
    __Vtemp1168[6U] = 2U;
    __Vtemp1168[7U] = 5U;
    __Vtemp1168[8U] = 7U;
    __Vtemp1168[9U] = 8U;
    vlTOPp->__Vfunc_fp_width__11__Vfuncout = ((IData)(1U) 
                                              + (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp1167[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                            << 6U)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                           << 6U)))))) 
                                                   | (__Vtemp1167[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 + 
                                                 ((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                       << 6U)))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                         << 6U)))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp1168[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                          << 1U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                          << 6U))))) 
                                                   | (__Vtemp1168[
                                                      (0xeU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                          << 1U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->__Vfunc_fp_width__11__fmt) 
                                                          << 6U))))
                                                   : 0U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast 
        = (vlTOPp->__Vfunc_fp_width__11__Vfuncout < vlTOPp->__Vfunc_fp_width__12__Vfuncout);
    vlTOPp->__Vfunc_bias__13__fmt = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
    __Vtemp1169[0U] = 0x17U;
    __Vtemp1169[1U] = 8U;
    __Vtemp1169[2U] = 0x34U;
    __Vtemp1169[3U] = 0xbU;
    __Vtemp1169[4U] = 0xaU;
    __Vtemp1169[5U] = 5U;
    __Vtemp1169[6U] = 2U;
    __Vtemp1169[7U] = 5U;
    __Vtemp1169[8U] = 7U;
    __Vtemp1169[9U] = 8U;
    vlTOPp->__Vfunc_bias__13__Vfuncout = (VL_POWSS_III(32,32,32, (IData)(2U), 
                                                       (((0x13fU 
                                                          >= 
                                                          (0x1ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              ((IData)(vlTOPp->__Vfunc_bias__13__fmt) 
                                                               << 6U))))
                                                          ? 
                                                         (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                ((IData)(vlTOPp->__Vfunc_bias__13__fmt) 
                                                                 << 6U))))
                                                            ? 0U
                                                            : 
                                                           (__Vtemp1169[
                                                            ((IData)(1U) 
                                                             + 
                                                             (0xfU 
                                                              & (((IData)(0x20U) 
                                                                  + 
                                                                  ((IData)(vlTOPp->__Vfunc_bias__13__fmt) 
                                                                   << 6U)) 
                                                                 >> 5U)))] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 ((IData)(vlTOPp->__Vfunc_bias__13__fmt) 
                                                                  << 6U)))))) 
                                                          | (__Vtemp1169[
                                                             (0xfU 
                                                              & (((IData)(0x20U) 
                                                                  + 
                                                                  ((IData)(vlTOPp->__Vfunc_bias__13__fmt) 
                                                                   << 6U)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 ((IData)(vlTOPp->__Vfunc_bias__13__fmt) 
                                                                  << 6U)))))
                                                          : 0U) 
                                                        - (IData)(1U)), 1,0) 
                                          - (IData)(1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias 
        = (0x1ffU & vlTOPp->__Vfunc_bias__13__Vfuncout);
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__164(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__164\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp1176[4];
    WData/*127:0*/ __Vtemp1177[4];
    WData/*127:0*/ __Vtemp1178[4];
    WData/*127:0*/ __Vtemp1179[4];
    WData/*127:0*/ __Vtemp1185[4];
    WData/*127:0*/ __Vtemp1186[4];
    WData/*127:0*/ __Vtemp1187[4];
    WData/*127:0*/ __Vtemp1188[4];
    WData/*95:0*/ __Vtemp1192[3];
    WData/*95:0*/ __Vtemp1193[3];
    WData/*95:0*/ __Vtemp1194[3];
    WData/*95:0*/ __Vtemp1195[3];
    WData/*95:0*/ __Vtemp1199[3];
    WData/*95:0*/ __Vtemp1200[3];
    WData/*95:0*/ __Vtemp1201[3];
    WData/*95:0*/ __Vtemp1202[3];
    WData/*95:0*/ __Vtemp1203[3];
    WData/*95:0*/ __Vtemp1207[3];
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__b 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds)
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_a
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_a;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
        = (IData)((((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds)
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b
                                      : (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                         (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x1bU))])))) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__b))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
        = (IData)(((((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds)
                                       ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b
                                       : (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                          (0x1fU & 
                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x1bU))])))) 
                     << 0x20U) | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__b))) 
                   >> 0x20U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
        = ((0xffffffff00000000ULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands) 
           | (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[0U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
        = ((0xffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U])) 
              << 0x20U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x7fbfU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffU == (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
                                       << 0x10U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[0U] 
                                       >> 0x10U)))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x7f7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffU == (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
                                       << 0x10U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
                                       >> 0x10U)))) 
              << 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x7effU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffU == (0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
                                      >> 0x10U))) << 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x7dffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffffU == (0xffffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[0U] 
                                             >> 8U)))) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x7bffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffffU == (0xffffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
                                             >> 8U)))) 
              << 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x77ffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffffU == (0xffffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
                                          >> 8U))) 
              << 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x6fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffU == (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
                                       << 0x10U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[0U] 
                                       >> 0x10U)))) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x5fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffU == (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
                                       << 0x10U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[1U] 
                                       >> 0x10U)))) 
              << 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed 
        = ((0x3fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed)) 
           | ((0xffffU == (0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[2U] 
                                      >> 0x10U))) << 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
        = (IData)((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
        = (IData)(((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)) 
                   >> 0x20U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
        = (IData)((QData)((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                   >> 0x20U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
        = (IData)(((QData)((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                    >> 0x20U))) >> 0x20U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U];
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a = 0x80800001U;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a = 0x80800001U;
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a = 0x3f800000U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                        = ((0x7fffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a) 
                           | (0x80000000U & ((~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                 >> 0x1fU)) 
                                             << 0x1fU)));
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U];
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b = 0x80800001U;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b = 0x80800001U;
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
        = ((0x7fffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c) 
           | (0x80000000U & ((0x80000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c) 
                             ^ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod) 
                                << 0x1fU))));
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c = 0x80800001U;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c = 0x80800001U;
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c = 0x80000000U;
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1 
        = (7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed 
        = ((0x7ff8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1 
        = (7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed) 
                 >> 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed 
        = ((0x7fc7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1 
        = (7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed) 
                 >> 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed 
        = ((0x7e3fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1 
        = (7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed) 
                 >> 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed 
        = ((0x71ffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1 
        = (7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed) 
                 >> 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed 
        = ((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1) 
              << 0xcU));
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D 
            = (1U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                      ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                         >> 0xfU) : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                     >> 0xfU)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0xffU == (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                       << 0x19U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                       >> 7U)))) : 
               (0x1fU == (0x1fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                    << 0x16U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                 >> 0xaU)))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0xffU == (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                       << 0x19U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                       >> 7U)))) : 
               (0x1fU == (0x1fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                    << 0x16U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0xaU)))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0U == (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))
                : (0U == (0x3ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0U == (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))
                : (0U == (0x3ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? ((QData)((IData)(
                                                         (0x7fU 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                         << 0x2dU) : 
                                     ((QData)((IData)(
                                                      (0x3ffU 
                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                      << 0x2aU)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? ((QData)((IData)(
                                                         (0x7fU 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                         << 0x2dU) : 
                                     ((QData)((IData)(
                                                      (0x3ffU 
                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                      << 0x2aU)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D 
            = (0x7ffU & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                          ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                       << 0x19U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                       >> 7U))) : (0x1fU 
                                                   & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                         >> 0xaU)))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D 
            = (0x7ffU & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                          ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                       << 0x19U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                       >> 7U))) : (0x1fU 
                                                   & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                       << 0x16U) 
                                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                         >> 0xaU)))));
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D 
            = (1U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                      ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                         >> 0x1fU) : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                      >> 0x1fU)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0x7ffU == (0x7ffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                         << 0xcU) | 
                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                         >> 0x14U))))
                : (0xffU == (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                       << 9U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                 >> 0x17U)))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0x7ffU == (0x7ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                        >> 0x14U)))
                : (0xffU == (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                       << 9U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0x17U)))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0ULL == (0xfffffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))))
                : (0U == (0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_prenorm_zero_S 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                ? (0ULL == (0xfffffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))))
                : (0U == (0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))
                                      : ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                         << 0x1dU)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
            = (0xfffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))
                                      : ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                         << 0x1dU)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D 
            = (0x7ffU & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                          ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                              << 0xcU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                          >> 0x14U))
                          : (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                       << 9U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                 >> 0x17U)))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D 
            = (0x7ffU & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                             >> 0x14U) : (0xffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                    << 9U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                      >> 0x17U)))));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                   ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b) 
                  ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c) 
                 >> 0x1fU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed 
        = (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed) 
            & (0U != (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                               >> 0x17U)))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                                                      >> 0x17U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed) 
            & (0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                               >> 0x17U)))) & (0U == 
                                               (0x7fffffU 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed) 
            & (0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                               >> 0x17U)))) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed) 
           & ((0xffU == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                                  >> 0x17U))) & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed)) 
                 | ((0xffU == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                                        >> 0x17U))) 
                    & (0U != (0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan)) 
           & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value 
                 >> 0x16U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal) 
              << 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero) 
              << 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf) 
              << 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed) 
                 >> 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed) 
            & (0U != (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                               >> 0x17U)))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                                                      >> 0x17U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed) 
            & (0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                               >> 0x17U)))) & (0U == 
                                               (0x7fffffU 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed) 
            & (0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                               >> 0x17U)))) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed) 
           & ((0xffU == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                                  >> 0x17U))) & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed)) 
                 | ((0xffU == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                                        >> 0x17U))) 
                    & (0U != (0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan)) 
           & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value 
                 >> 0x16U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xff7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal) 
              << 0xfU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffbfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal) 
              << 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffdfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero) 
              << 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xffefffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfff7ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan) 
              << 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffbffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling) 
              << 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffdffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfffeffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed) 
              << 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed) 
                 >> 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed) 
            & (0U != (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                               >> 0x17U)))) & (0xffU 
                                               != (0xffU 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                                                      >> 0x17U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed) 
            & (0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                               >> 0x17U)))) & (0U == 
                                               (0x7fffffU 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed) 
            & (0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                               >> 0x17U)))) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed) 
           & ((0xffU == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                                  >> 0x17U))) & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed)) 
                 | ((0xffU == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                                        >> 0x17U))) 
                    & (0U != (0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan)) 
           & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value 
                 >> 0x16U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal) 
              << 0x17U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xbfffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal) 
              << 0x16U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xdfffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero) 
              << 0x15U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xefffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf) 
              << 0x14U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xf7ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan) 
              << 0x13U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfbffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling) 
              << 0x12U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfdffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet) 
              << 0x11U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
        = ((0xfeffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed) 
              << 0x10U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a 
        = (0xffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o);
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a = 0xffU;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a = 0xffU;
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a = 0x81U;
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b 
        = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
                    >> 8U));
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b = 0xffU;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b = 0xffU;
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c 
        = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o 
                    >> 0x10U));
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c = 0xffU;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c = 0xffU;
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c = 0x21U;
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c 
        = ((0x800000U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c) 
                         << 0x10U)) | (0x7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                   >> 0x17U))) 
                     + VL_EXTENDS_II(10,2, (1U & (~ 
                                                  ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c) 
                                                   >> 7U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product 
        = ((0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b)))
            ? 0x383U : (0x3ffU & (((((0x3ffU & VL_EXTENDS_II(10,9, 
                                                             (0xffU 
                                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                                 >> 0x17U)))) 
                                     + (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                              >> 6U))) 
                                    + (0x3ffU & VL_EXTENDS_II(10,9, 
                                                              (0xffU 
                                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                                  >> 0x17U))))) 
                                   + (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                            >> 6U))) 
                                  - (IData)(0x7fU))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference 
        = (0x3ffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend) 
                     - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt 
        = (VL_GTES_III(1,32,32, 0xffffffcfU, VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
            ? 0x4cU : (VL_GTES_III(1,32,32, 0x1aU, 
                                   VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                        ? (0x7fU & ((IData)(0x1bU) 
                                    - VL_EXTENDS_II(7,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference))))
                        : 0U));
    VL_EXTEND_WI(100,24, __Vtemp1176, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c);
    VL_SHIFTL_WWI(100,100,32, __Vtemp1177, __Vtemp1176, 0x4cU);
    __Vtemp1178[0U] = __Vtemp1177[0U];
    __Vtemp1178[1U] = __Vtemp1177[1U];
    __Vtemp1178[2U] = __Vtemp1177[2U];
    __Vtemp1178[3U] = (0xfU & __Vtemp1177[3U]);
    VL_SHIFTR_WWI(100,100,7, __Vtemp1179, __Vtemp1178, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U] 
        = ((__Vtemp1179[1U] << 8U) | (__Vtemp1179[0U] 
                                      >> 0x18U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U] 
        = ((__Vtemp1179[2U] << 8U) | (__Vtemp1179[1U] 
                                      >> 0x18U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U] 
        = (0xfffU & ((0xf00U & (__Vtemp1179[3U] << 8U)) 
                     | (__Vtemp1179[2U] >> 0x18U)));
    VL_EXTEND_WI(100,24, __Vtemp1185, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c);
    VL_SHIFTL_WWI(100,100,32, __Vtemp1186, __Vtemp1185, 0x4cU);
    __Vtemp1187[0U] = __Vtemp1186[0U];
    __Vtemp1187[1U] = __Vtemp1186[1U];
    __Vtemp1187[2U] = __Vtemp1186[2U];
    __Vtemp1187[3U] = (0xfU & __Vtemp1186[3U]);
    VL_SHIFTR_WWI(100,100,7, __Vtemp1188, __Vtemp1187, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits 
        = (0xffffffU & __Vtemp1188[0U]);
    VL_EXTEND_WQ(76,48, __Vtemp1192, (0xffffffffffffULL 
                                      & ((QData)((IData)(
                                                         ((0x800000U 
                                                           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                              << 0x10U)) 
                                                          | (0x7fffffU 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                         * (QData)((IData)(
                                                           ((0x800000U 
                                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                << 0x10U)) 
                                                            | (0x7fffffU 
                                                               & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)))))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp1193, __Vtemp1192, 2U);
    __Vtemp1194[0U] = __Vtemp1193[0U];
    __Vtemp1194[1U] = __Vtemp1193[1U];
    __Vtemp1194[2U] = (0xfffU & __Vtemp1193[2U]);
    VL_EXTEND_WW(77,76, __Vtemp1195, __Vtemp1194);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) {
        __Vtemp1199[0U] = (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
        __Vtemp1199[1U] = (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
        __Vtemp1199[2U] = (0xfffU & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
    } else {
        __Vtemp1199[0U] = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U];
        __Vtemp1199[1U] = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U];
        __Vtemp1199[2U] = (0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]);
    }
    VL_EXTEND_WW(77,76, __Vtemp1200, __Vtemp1199);
    VL_ADD_W(3, __Vtemp1201, __Vtemp1195, __Vtemp1200);
    VL_EXTEND_WI(77,1, __Vtemp1202, ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                     & (~ (IData)((0U 
                                                   != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)))));
    VL_ADD_W(3, __Vtemp1203, __Vtemp1201, __Vtemp1202);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[0U] 
        = __Vtemp1203[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[1U] 
        = __Vtemp1203[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
        = (0x1fffU & __Vtemp1203[2U]);
    VL_NEGATE_W(3, __Vtemp1207, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw);
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
         & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
               >> 0xcU)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
            = __Vtemp1207[0U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
            = __Vtemp1207[1U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[2U] 
            = (0xfffU & __Vtemp1207[2U]);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[0U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[1U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[2U] 
            = (0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U]);
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0x12U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffeULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0x11U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffdULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0x10U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffbULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0xfU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffff7ULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffefULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffdfULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffbfULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffff7fULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffeffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffdffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffbffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffff7ffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffefffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffdfffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffbfffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffff7fffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0xfU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffeffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x10U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U] 
                 >> 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffdffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x11U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffbffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x12U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x1fU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffff7ffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x13U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x1eU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffefffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x14U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x1dU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdfffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x15U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x1cU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbfffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x16U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x1bU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7fffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x17U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x1aU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffeffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x18U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x19U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x19U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x18U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x1aU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x17U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7ffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x1bU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x16U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffefffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x1cU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x15U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdfffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x1dU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x14U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbfffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x1eU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x13U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7fffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x1fU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x12U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x20U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x11U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x21U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0x10U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x22U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0xfU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7ffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x23U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x24U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x25U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x26U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x27U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x28U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x29U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x2aU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x2bU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x2cU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x2dU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x2eU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x2fU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x30U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U] 
                 >> 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x31U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1 
        = (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1)) 
              << 0x32U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__165(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__165\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__167(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__167\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we)
                    ? (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][1U] << 0xfU) 
                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [0U][0U] >> 0x11U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding 
                = (3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                            >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                         >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = ((((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
                       & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal))) 
                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__rdata);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [6U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [0U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding));
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
                    = (0x1ffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding));
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
                    = (0x1ffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0xaU][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [0xaU][2U] >> 0x12U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode = 4U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [0xaU][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xbU][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0xbU][2U] >> 0x12U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode = 4U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0xbU][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size = 0U;
    }
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending) 
               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending)) 
              & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                 [0xaU][0U])));
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending) 
               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending)) 
              & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                 [0xbU][0U])));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding 
                = (0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding 
                = (0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__168(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__168\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q 
        = ((IData)(vlTOPp->reset_ni) ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d)
            : 0U);
    if (vlTOPp->reset_ni) {
        if ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        } else {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0x7fffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = 0ULL;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xbfffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xdfffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xefffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xf7ffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfbffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfc00ffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xffff003fU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xffffffcfU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffff7U & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffffbU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffffdU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = ((0xfffffffeU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q) 
                   | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__169(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__169\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__171(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__171\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = 0U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h)))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__172(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__172\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx 
        = (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q));
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x13U)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be 
                        = ((0x40000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)
                            ? 0xfU : ((0x20000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)
                                       ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be) 
                                          | ((IData)(3U) 
                                             << (2U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx))))
                                       : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be) 
                                          | ((IData)(1U) 
                                             << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx)))));
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we = 1U;
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 1U;
            }
        }
    }
    if (((3U < (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__173(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__173\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U] 
        = (IData)((1ULL | (((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                              ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                              : 0xfU))) 
                            << 0x21U) | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)) 
                                         << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
        = ((0xffffff80U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                                    >> 2U)) << 7U)) 
           | (IData)(((1ULL | (((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                                  ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                                  : 0xfU))) 
                                << 0x21U) | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)) 
                                             << 1U))) 
                      >> 0x20U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
        = ((0xffffffe0U & (0x4000U | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req) 
                                       << 0x15U) | 
                                      (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                         ? ((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be))
                                             ? 0U : 1U)
                                         : 4U) << 0x12U)))) 
           | (0x1fU & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                                >> 2U)) >> 0x19U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U]));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__174(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__174\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U];
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U];
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U];
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U];
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__176(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__176\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__177(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__177\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__178(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__178\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*31:0*/ __Vtemp1251;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
                 | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d)));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_val_q 
                = ((0xfffeU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_val_q) 
                               << 1U)) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_val_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q) {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q) {
                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q = 0U;
                }
            } else {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q = 0U;
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q = 1U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
                & (1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0x3fU & ((0x1fU == (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x20U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 5U)) 
                                             << 5U))
                                 : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_out_q 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
                 | ((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])
                     ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                        >> 0x19U) : ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                      >> 0x19U) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q)))));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        } else {
            if ((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                          >> 0xfU)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0x3fU & ((0x1fU == (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x20U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 5U)) 
                                             << 5U))
                                 : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                ? (0x3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                : 0U);
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia 
            = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia 
                | vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set) 
               & (~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia 
                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete) 
                     & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip 
            = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip 
                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set 
                   & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia))) 
               & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip 
                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim)));
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)) 
                                 | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)
                           : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt = 0xffffU;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))))) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip = 1U;
        } else {
            if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip) 
                  & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))))) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip = 0U;
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip = 0U;
    }
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? (0xffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)
                         ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge)
                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))
                             : 0x80U))) : 0U);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we)
                    ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                        [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 1U))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                    ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                        [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 1U))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                    ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                        [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 1U))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                    ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                        [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 1U))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                    ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                        [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 1U))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                    ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                        [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 1U))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we)
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                 [0U][1U] << 0x1fU) 
                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][0U] >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 7U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we)
                    ? (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][1U] << 0x17U) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][0U] >> 9U))) : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we)
                    ? (0xffffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [0U][1U] << 0x1fU) 
                                    | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0U][0U] >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we) 
                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                   [0U][1U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U] 
                      >> 0x1fU)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                = (7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                          ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][1U] << 0x1dU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][0U] >> 3U)) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U] 
                      >> 0x1cU)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                = (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                          ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][1U] << 0x1aU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][0U] >> 6U)) : ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                   << 3U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U] 
                                                     >> 0x1dU))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
    }
    __Vtemp1251 = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
                   & ((1U & ((((0x400U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))
                                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__neg_edge)
                                : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge)) 
                              & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))) 
                             | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))))
                       ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[
                          (3U & (((0x800U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))
                                   ? (((0x80U & ((~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))))) 
                                                 << 7U)) 
                                       | (0x7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))) 
                                      - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))
                                   : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt) 
                                      - (IData)(1U))) 
                                 >> 5U))] >> (0x1fU 
                                              & ((0x800U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))
                                                  ? 
                                                 (((0x80U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))))) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))) 
                                                  - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))
                                                  : 
                                                 ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))))
                       : (IData)(vlTOPp->sd_o)));
    vlTOPp->sd_o = __Vtemp1251;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))))) {
            if ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (0x7f000000U 
                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][0U] 
                                               >> 1U)))));
            }
            if ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [2U][1U] << 0x1fU) 
                                       | (0x7fff0000U 
                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [2U][0U] 
                                             >> 1U)))));
            }
            if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [2U][1U] << 0x1fU) 
                                     | (0x7fffff00U 
                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [2U][0U] 
                                           >> 1U)))));
            }
            if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U]) 
                       | (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [2U][1U] << 0x1fU) 
                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [2U][0U] >> 1U))));
            }
        } else {
            if ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT____Vcellinp__shift__latch) 
                        >> 1U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))))) {
                if ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                     [2U][1U])) {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U] 
                        = ((0xffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U]) 
                           | (0xff000000U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [2U][1U] 
                                              << 0x1fU) 
                                             | (0x7f000000U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][0U] 
                                                   >> 1U)))));
                }
                if ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                     [2U][1U])) {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U] 
                        = ((0xff00ffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U]) 
                           | (0xff0000U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (0x7fff0000U 
                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][0U] 
                                                 >> 1U)))));
                }
                if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                     [2U][1U])) {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U] 
                        = ((0xffff00ffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U]) 
                           | (0xff00U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (0x7fffff00U 
                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][0U] 
                                               >> 1U)))));
                }
                if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                     [2U][1U])) {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U] 
                        = ((0xffffff00U & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U]) 
                           | (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [2U][0U] 
                                          >> 1U))));
                }
            } else {
                if ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT____Vcellinp__shift__latch) 
                            >> 2U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))))) {
                    if ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [2U][1U])) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U] 
                            = ((0xffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U]) 
                               | (0xff000000U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][1U] 
                                                  << 0x1fU) 
                                                 | (0x7f000000U 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [2U][0U] 
                                                       >> 1U)))));
                    }
                    if ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [2U][1U])) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U] 
                            = ((0xff00ffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U]) 
                               | (0xff0000U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [2U][1U] 
                                                << 0x1fU) 
                                               | (0x7fff0000U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [2U][0U] 
                                                     >> 1U)))));
                    }
                    if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [2U][1U])) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U] 
                            = ((0xffff00ffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U]) 
                               | (0xff00U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [2U][1U] 
                                              << 0x1fU) 
                                             | (0x7fffff00U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][0U] 
                                                   >> 1U)))));
                    }
                    if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [2U][1U])) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U] 
                            = ((0xffffff00U & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U]) 
                               | (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [2U][0U] 
                                              >> 1U))));
                    }
                } else {
                    if ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT____Vcellinp__shift__latch) 
                                >> 3U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))))) {
                        if ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                             [2U][1U])) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U] 
                                = ((0xffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U]) 
                                   | (0xff000000U & 
                                      ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [2U][1U] << 0x1fU) 
                                       | (0x7f000000U 
                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [2U][0U] 
                                             >> 1U)))));
                        }
                        if ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                             [2U][1U])) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U] 
                                = ((0xff00ffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U]) 
                                   | (0xff0000U & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [2U][1U] 
                                                    << 0x1fU) 
                                                   | (0x7fff0000U 
                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                         [2U][0U] 
                                                         >> 1U)))));
                        }
                        if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                             [2U][1U])) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U] 
                                = ((0xffff00ffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U]) 
                                   | (0xff00U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][1U] 
                                                  << 0x1fU) 
                                                 | (0x7fffff00U 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [2U][0U] 
                                                       >> 1U)))));
                        }
                        if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                             [2U][1U])) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U] 
                                = ((0xffffff00U & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U]) 
                                   | (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [2U][1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][0U] 
                                                  >> 1U))));
                        }
                    } else {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos)))) 
                                & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[
                                (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos) 
                                       >> 5U))]) | 
                               ((1U & ((((0x200U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__neg_edge)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge)) 
                                        & ((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt)) 
                                           | (IData)(vlTOPp->sclk_o)))
                                        ? (IData)(vlTOPp->sd_i)
                                        : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[
                                           (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos))))) 
                                << (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos))));
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U] = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U] = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U] = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding));
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding 
                    = (0x1ffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding 
                = (0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__179(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__179\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WIII(8,(0xf8U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      << 3U)), vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data);
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_d));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__180(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__180\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q 
        = ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q 
        = ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d));
    if (vlTOPp->reset_ni) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0 = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1 = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2 = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3 = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            if ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 1U;
            } else {
                if ((1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1 
                        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 2U;
                } else {
                    if ((2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2 
                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 3U;
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3 
                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 0U;
                    }
                }
            }
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d;
        }
        if ((2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q 
                = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d)));
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__181(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__181\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_spi 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl) 
                 >> 0xcU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)) 
               & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))))) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge)));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
               & (4U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [2U][2U] << 0x19U) 
                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][1U] >> 7U))))) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we)) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)))) {
            if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl 
                    = ((0x3f00U & (IData)(vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl)) 
                       | (0xffU & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [2U][1U] << 0x1fU) 
                                    | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [2U][0U] >> 1U)) 
                                   | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl)))));
            }
            if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl 
                    = ((0xffU & (IData)(vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl)) 
                       | (0x3f00U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [2U][1U] << 0x1fU) 
                                     | (0x7fffff00U 
                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [2U][0U] 
                                           >> 1U)))));
            }
        } else {
            if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip) 
                  & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))))) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl 
                    = (0x3effU & (IData)(vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__182(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__182\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__184(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__184\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__185(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__185\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__rdata 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? ((0U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [2U][2U] << 0x19U) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [2U][1U] >> 7U)))) ? 
               vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[0U]
                : ((1U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][2U] << 0x19U) 
                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [2U][1U] >> 7U))))
                    ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[1U]
                    : ((2U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [2U][2U] << 0x19U) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [2U][1U] >> 7U))))
                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[2U]
                        : ((3U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [2U][2U] 
                                          << 0x19U) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][1U] 
                                            >> 7U))))
                            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[3U]
                            : ((4U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [2U][2U] 
                                              << 0x19U) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [2U][1U] 
                                                >> 7U))))
                                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl)
                                : ((5U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][2U] 
                                                  << 0x19U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [2U][1U] 
                                                    >> 7U))))
                                    ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)
                                    : ((6U == (7U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][2U] 
                                                 << 0x19U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][1U] 
                                                   >> 7U))))
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ss)
                                        : 0U)))))))
            : 0U);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__186(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__186\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x20U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__neg_edge 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip) 
                & (IData)(vlTOPp->sclk_o)) & (1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt))) 
              | (((~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)))) 
                  & (~ (IData)(vlTOPp->sclk_o))) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip) 
                 & (~ (IData)(vlTOPp->sclk_o))) & (1U 
                                                   == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt))) 
               | ((~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)))) 
                  & (IData)(vlTOPp->sclk_o))) | (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)))) 
                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl) 
                                                     >> 8U)) 
                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__187(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__187\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0) 
            << 0x18U) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1) 
                          << 0x10U) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2) 
                                        << 8U) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs 
        = ((IData)(vlTOPp->reset_ni) ? 0U : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns));
    if (vlTOPp->reset_ni) {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
                } else {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 0U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                    if ((0x56U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count))) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count)));
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 3U;
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 1U;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 4U;
                    }
                } else {
                    if ((0x56U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count))) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count)));
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 2U;
                    } else {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte 
                            = (((~ ((IData)(1U) << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index))) 
                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte)) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data) 
                                  << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index)));
                        if ((7U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index))) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index)));
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 2U;
                        } else {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = 0U;
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 3U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                    if ((0x2bU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count))) {
                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
                        } else {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 2U;
                        }
                    } else {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count)));
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 1U;
                    }
                } else {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 0U;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = 0U;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main 
                        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data)
                            ? 0U : 1U);
                }
            }
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__190(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__190\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__191(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__191\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
               & (5U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [2U][2U] << 0x19U) 
                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][1U] >> 7U))))) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we)) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)))) {
            if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider 
                    = ((0xff00U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)) 
                       | (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [2U][1U] << 0x1fU) 
                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [2U][0U] >> 1U))));
            }
            if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider 
                    = ((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)) 
                       | (0xff00U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [2U][1U] << 0x1fU) 
                                     | (0x7fffff00U 
                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [2U][0U] 
                                           >> 1U)))));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
               & (6U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [2U][2U] << 0x19U) 
                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][1U] >> 7U))))) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we)) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)))) {
            if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                 [2U][1U])) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ss 
                    = (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                 [2U][1U] << 0x1fU) 
                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [2U][0U] >> 1U)));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ss = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__192(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__192\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__193(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__193\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q;
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            if ((0xfffU == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data)) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d = 0U;
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q;
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = 0U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            if ((((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count)) 
                  & (0xfU != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2))) 
                 & (0xffU != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = 1U;
            }
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = 0U;
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))
            ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))
                ? ((0xfffU == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data)
                    ? 3U : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV)
                             ? 1U : 3U)) : 3U) : ((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))
                                                   ? 
                                                  ((((3U 
                                                      == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count)) 
                                                     & (0xfU 
                                                        != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2))) 
                                                    & (0xffU 
                                                       != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte)))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV)
                                                    ? 1U
                                                    : 0U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__194(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__194\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__195(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__195\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__197(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__197\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_d;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
                 | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth)
            : 0U);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0x3fU & ((0x1fU == (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x20U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 5U)) 
                                             << 5U))
                                 : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        } else {
            if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0x3fU & ((0x1fU == (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x20U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 5U)) 
                                             << 5U))
                                 : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                    >> 0x1cU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                 >> 0x1bU)))) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q 
                = (0x1ffffU & ((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q) 
                               + (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              << 0x1cU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                >> 4U)))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1fU)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1dU)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1bU)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x19U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x17U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x15U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x13U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we) 
                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x11U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 3U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 4U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 6U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 8U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 3U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 6U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 7U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 8U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we) 
                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [0U][0U] >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [5U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [5U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__rdata);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [2U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [2U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [6U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [6U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [0U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [0U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [5U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [2U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__198(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__198\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WIII(8,(0xf8U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      << 3U)), vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, 
                          (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                     << 0x19U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                                  >> 7U))));
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__199(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__199\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[6U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[3U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [3U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[4U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [4U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [5U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[6U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [6U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[7U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [7U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[8U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [8U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[9U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [9U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xaU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xaU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xbU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xbU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xcU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xcU];
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [3U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [3U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [3U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [3U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [3U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [4U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [4U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [4U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [4U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [4U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [5U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [5U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [5U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [5U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [5U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [6U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [6U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [6U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [6U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [6U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [7U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [7U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [7U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [7U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [7U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [8U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [8U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [8U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [8U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [8U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [9U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [9U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [9U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [9U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [9U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0xaU])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0xaU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0xaU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xaU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xaU] 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0xbU])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0xbU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0xbU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xbU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xbU] 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0xcU])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0xcU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0xcU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xcU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xcU] 
                                             >> 0x33U))))) 
              << 0x33U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[3U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[4U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[5U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[6U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[7U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[8U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[9U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0xaU] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0xbU] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0xcU] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__202(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__202\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_wdata_wb_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_id;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2 
            = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                     & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                         ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                             >> 1U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                         : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__203(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__203\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d)
            : 0U);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n) 
                         >> 1U)) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d)
            : 3U);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
             & (0x7a0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q 
                = ((2U > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                    ? (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                    : 1U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_load_err) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_store_err) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (0xffffffU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                        >> 0xaU)));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__205(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__205\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err))) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__206(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__206\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__207(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__207\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    >> 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (2U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int = 1U;
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int 
                = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__209(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__209\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__210(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__210\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))) 
           & ((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs) 
              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                 >> 5U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__211(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__211\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__212(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__212\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = 1U;
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = 1U;
                } else {
                    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id 
                            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk 
        = ((0xdU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)) 
           | (0xeU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data 
        = (((0xbU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator)) 
            << 4U) | ((0xbU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator))
                       ? 2U : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
           & (6U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__213(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__213\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__busy)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__215(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__215\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            if ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U) == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                 [0U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | (0xfffffffeU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                             & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U) == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                 [1U]) << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb) 
           & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a)) 
              | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__216(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__216\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_get_opgroup__2__op = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator;
    {
        {
            {
                {
                    {
                        if ((8U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                                    if ((1U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                                        vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 2U;
                                        goto __Vlabel1;
                                    } else {
                                        vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 3U;
                                        goto __Vlabel2;
                                    }
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 3U;
                                    goto __Vlabel2;
                                }
                            } else {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 3U;
                                    goto __Vlabel2;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 2U;
                                    goto __Vlabel3;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__2__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 2U;
                                    goto __Vlabel3;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 1U;
                                    goto __Vlabel4;
                                }
                            } else {
                                vlTOPp->__Vfunc_get_opgroup__2__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                        }
                        __Vlabel5: ;
                    }
                    __Vlabel4: ;
                }
                __Vlabel3: ;
            }
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu) 
           & (1U == (IData)(vlTOPp->__Vfunc_get_opgroup__2__Vfuncout)));
    vlTOPp->__Vfunc_get_opgroup__3__op = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator;
    {
        {
            {
                {
                    {
                        if ((8U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                                    if ((1U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                                        vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 2U;
                                        goto __Vlabel6;
                                    } else {
                                        vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 3U;
                                        goto __Vlabel7;
                                    }
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 3U;
                                    goto __Vlabel7;
                                }
                            } else {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 3U;
                                    goto __Vlabel7;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 2U;
                                    goto __Vlabel8;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__3__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 2U;
                                    goto __Vlabel8;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 1U;
                                    goto __Vlabel9;
                                }
                            } else {
                                vlTOPp->__Vfunc_get_opgroup__3__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                        }
                        __Vlabel10: ;
                    }
                    __Vlabel9: ;
                }
                __Vlabel8: ;
            }
            __Vlabel7: ;
        }
        __Vlabel6: ;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu) 
           & (2U == (IData)(vlTOPp->__Vfunc_get_opgroup__3__Vfuncout)));
    vlTOPp->__Vfunc_get_opgroup__1__op = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator;
    {
        {
            {
                {
                    {
                        if ((8U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                                    if ((1U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                                        vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 2U;
                                        goto __Vlabel11;
                                    } else {
                                        vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 3U;
                                        goto __Vlabel12;
                                    }
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 3U;
                                    goto __Vlabel12;
                                }
                            } else {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 3U;
                                    goto __Vlabel12;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 2U;
                                    goto __Vlabel13;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__1__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 2U;
                                    goto __Vlabel13;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 1U;
                                    goto __Vlabel14;
                                }
                            } else {
                                vlTOPp->__Vfunc_get_opgroup__1__Vfuncout = 0U;
                                goto __Vlabel15;
                            }
                        }
                        __Vlabel15: ;
                    }
                    __Vlabel14: ;
                }
                __Vlabel13: ;
            }
            __Vlabel12: ;
        }
        __Vlabel11: ;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu) 
           & (0U == (IData)(vlTOPp->__Vfunc_get_opgroup__1__Vfuncout)));
    vlTOPp->__Vfunc_get_opgroup__4__op = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator;
    {
        {
            {
                {
                    {
                        if ((8U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                                    if ((1U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                                        vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 2U;
                                        goto __Vlabel16;
                                    } else {
                                        vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 3U;
                                        goto __Vlabel17;
                                    }
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 3U;
                                    goto __Vlabel17;
                                }
                            } else {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 3U;
                                    goto __Vlabel17;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 2U;
                                    goto __Vlabel18;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                                if ((2U & (IData)(vlTOPp->__Vfunc_get_opgroup__4__op))) {
                                    vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 2U;
                                    goto __Vlabel18;
                                } else {
                                    vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 1U;
                                    goto __Vlabel19;
                                }
                            } else {
                                vlTOPp->__Vfunc_get_opgroup__4__Vfuncout = 0U;
                                goto __Vlabel20;
                            }
                        }
                        __Vlabel20: ;
                    }
                    __Vlabel19: ;
                }
                __Vlabel18: ;
            }
            __Vlabel17: ;
        }
        __Vlabel16: ;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu) 
           & (3U == (IData)(vlTOPp->__Vfunc_get_opgroup__4__Vfuncout)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__217(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__217\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq) 
             | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                 >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q))) 
            | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__218(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__218\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
        [0U];
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U))))));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                    ? (QData)((IData)((0xffffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U)))))
                    : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                   [0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
            = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U] 
                                                      >> 0x10U)))))
                : 0ULL);
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 0U;
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 2U;
                } else {
                    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 2U;
                    } else {
                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 3U;
                        } else {
                            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 4U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = 0U;
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                             << 5U) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                        << 4U) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = vlTOPp->__Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = vlTOPp->__Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = vlTOPp->__Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = vlTOPp->__Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = vlTOPp->__Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = vlTOPp->__Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio
        [vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__219(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__219\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
           & (2U == ((9U >= (0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                     << 1U))) ? (3U 
                                                 & (0x2aaU 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                        << 1U))))
                      : 0U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
           & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
           & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
           & (2U == ((9U >= (0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                     << 1U))) ? (3U 
                                                 & (0x2aaU 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                        << 1U))))
                      : 0U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__220(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__220\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                } else {
                    if ((1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                 >> 2U) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                               | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs))
                                ? (0x30U | ((0x4000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                             ? 0xeU
                                             : ((0x2000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                 ? 0xdU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                     ? 9U
                                                     : 
                                                    ((0x100U 
                                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                      ? 8U
                                                      : 
                                                     ((0x80U 
                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                       ? 7U
                                                       : 
                                                      ((0x40U 
                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                        ? 6U
                                                        : 
                                                       ((0x20U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                          ? 4U
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                            ? 2U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                             ? 1U
                                                             : 0U)))))))))))))))
                                : ((0x8000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else {
                    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = 1U;
                        } else {
                            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = 2U;
                            } else {
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause 
                                        = ((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                            ? 0xbU : 8U);
                                } else {
                                    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = 3U;
                                        }
                                    } else {
                                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = 7U;
                                        } else {
                                            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = 5U;
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

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__221(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__221\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy 
        = ((0x1eU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy 
        = ((0x1eU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy 
        = ((0x1eU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid 
        = ((0x1eU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid 
        = ((0x1eU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid 
        = ((0x1eU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid)) 
                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     >> 2U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                 >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid)) 
                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     >> 2U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                 >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid)) 
                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     >> 2U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                 >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy 
        = ((0xeU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)) 
           | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy 
        = ((0xbU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)) 
           | ((IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy 
        = ((7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)) 
           | ((IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x77U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (8U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     << 3U) | (0xfffffff8U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                              << 2U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x6fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (0x10U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                        << 2U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                  << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x5fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                       << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x77U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (8U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     << 3U) | (0xfffffff8U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                              << 2U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x6fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (0x10U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                        << 2U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                  << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x5fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                       << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x77U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (8U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                     << 3U) | (0xfffffff8U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                              << 2U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x6fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (0x10U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                        << 2U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                                  << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x5fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid) 
                       << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__222(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__222\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 2U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 3U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 4U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 5U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 6U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 2U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 3U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 4U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 5U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 6U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 2U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 3U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 4U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 5U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 6U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid 
        = ((0xeU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid)) 
           | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid 
        = ((0xbU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid)) 
           | (4U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                    << 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid 
        = ((7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid)) 
           | (8U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                    << 3U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__223(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__223\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ff1ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1f8fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ff1ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1f8fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ff1ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1f8fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
              << 0xcU));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__224(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__224\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ffff8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (4U | (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                              >> 6U))) : (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                >> 3U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1fffc7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? (2U | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                               >> 0xcU))) : (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                   >> 9U))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ffe3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                ? (2U | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                               >> 0x12U))) : (1U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                               >> 0xfU))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ffff8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (4U | (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                              >> 6U))) : (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                >> 3U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1fffc7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? (2U | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                               >> 0xcU))) : (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                   >> 9U))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ffe3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                ? (2U | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                               >> 0x12U))) : (1U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                               >> 0xfU))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ffff8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (4U | (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                              >> 6U))) : (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                >> 3U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1fffc7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? (2U | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                               >> 0xcU))) : (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                   >> 9U))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x1ffe3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                ? (2U | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                               >> 0x12U))) : (1U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                               >> 0xfU))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid)) 
                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid) 
                     >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid) 
                     >> 2U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid) 
                                 >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (2U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid)) 
                    | (0x7ffffffcU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid) 
                                      >> 1U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__valid_id_fpu 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr)
                  ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)
                  : ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid)))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__225(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__225\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__228(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__228\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q 
                = (1U & vlTOPp->gpio_i);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & (((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                               >> 0xbU))) & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__229(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__229\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
            = (((~ (0xffffffffULL << (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               << 5U)))) 
                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage) 
               | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data)) 
                  << (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                               << 5U))));
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__iccm__DOT__mem
            [((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])
               ? (0xfffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                             << 0x19U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                          >> 7U))) : 0U)];
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U]);
        if ((9U >= (0xfU & ((IData)(5U) * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                      << (0xfU & ((IData)(5U) * (1U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   >> 5U))));
        if ((0x19U >= (0x1fU & ((IData)(0xdU) * (1U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fffU) << (0x1fU 
                                             & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(0xdU) * 
                                   (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__230(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__230\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q 
        = (1U & ((~ (IData)(vlTOPp->reset_ni)) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q 
        = ((IData)(vlTOPp->reset_ni) ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d)
            : 0U);
    if (vlTOPp->reset_ni) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q 
        = ((IData)(vlTOPp->reset_ni) ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d
            : 0ULL);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__231(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__231\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                    >> 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                  >> 1U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                            >> 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                    >> 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                  >> 1U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                            >> 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 2U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__232(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__232\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__235(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__235\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x7fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel 
                      >> 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0 
            = (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0 
               >> (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0) 
                            << 5U)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__236(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__236\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__237(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__237\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__238(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__238\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx12 = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = vlTOPp->__Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o
        [vlTOPp->__Vtableidx12];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = vlTOPp->__Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i
        [vlTOPp->__Vtableidx12];
    vlTOPp->__Vtableidx13 = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = vlTOPp->__Vtable13_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o
        [vlTOPp->__Vtableidx13];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = vlTOPp->__Vtable13_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i
        [vlTOPp->__Vtableidx13];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel 
                     >> 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1 
            = (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1 
               >> (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1) 
                            << 5U)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__239(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__239\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x19U >= (0x1fU & ((IData)(0xdU) 
                                        * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                   >> (0x1fU & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((9U >= (0xfU & ((IData)(5U) * (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                 >> (0xfU & ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__240(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__240\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : (0x1fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__241(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__241\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel 
                    >> 0xfU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2 
            = (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2 
               >> (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2) 
                            << 5U)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                        >> 0x25U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant) 
                                                                            >> 1U))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[2U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid) 
                                   >> 2U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant) 
                                                                            >> 2U))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__242(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__242\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | (0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                        >> 1U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 2U))))) 
              << (0x1fU & ((IData)(8U) + (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                   << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 3U))))) 
              << (0x1fU & ((IData)(0x10U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 4U))))) 
              << (0x1fU & ((IData)(0x18U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__243(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__243\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__244(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__244\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3) 
           | (0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->reset_ni) ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
             : 0U) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__245(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__245\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__246(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__246\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
             ? (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                        >> 0x20U)) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__247(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__247\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__248(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__248\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                       ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                          << 1U) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__249(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__249\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid)) 
            << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid) 
                                            & (1U != 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))))
                                            ? 0U : 1U))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                             >> 8U))
                                                          : 0U))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                           : 0U))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid) 
                                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                              & (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                     >> 0xbU))))
                                                              ? (IData)(
                                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                         >> 1U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid) 
                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                   & ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                           >> 0xbU)))
                                                                       ? 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                          >> 0xaU))
                                                                       : 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xaU)))) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__250(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__250\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid)) 
            << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid) 
                                            & (1U != 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))))
                                            ? 0U : 1U))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                             >> 8U))
                                                          : 0U))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                           : 0U))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid) 
                                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                              & (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                     >> 0xbU))))
                                                              ? (IData)(
                                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                         >> 1U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid) 
                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                   & ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                           >> 0xbU)))
                                                                       ? 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                          >> 0xaU))
                                                                       : 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xaU)))) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom)))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__251(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__251\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__252(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__252\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 14 
    CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__Vfuncout;
    CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval;
    CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_sub;
    CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_in;
    CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__Vfuncout;
    CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval;
    CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_sub;
    CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_in;
    // Body
    if (vlTOPp->reset_ni) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval))) 
                         - (IData)(1U)));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval))
                          ? (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_sub)
                          : (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval)));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__Vfuncout 
                = ((4U & (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval)) 
                   | ((1U & ((IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__decval_in)));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval 
                = (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                             >> 2U)) << 2U));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval))) 
                         - (IData)(1U)));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval))
                          ? (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_sub)
                          : (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval)));
            __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__Vfuncout 
                = ((4U & (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval)) 
                   | ((1U & ((IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__decval_in)));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray 
                = ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                    ? (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__65__Vfuncout)
                    : (IData)(__Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__66__Vfuncout));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray = 0U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid 
        = ((2U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid)) 
           | (1U & ((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                             >> 0x33U)) & (~ (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x23U))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid 
        = ((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid)) 
           | (2U & (((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                              >> 0x33U)) & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x23U))) 
                    << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__253(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__253\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)) 
           | ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                       >> 0x33U)) & (0U == (3U & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                          >> 0x23U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)) 
           | (((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                        >> 0x33U)) & (1U == (3U & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                           >> 0x23U))))) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)) 
           | (((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                        >> 0x33U)) & (2U == (3U & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                           >> 0x23U))))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o))
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__254(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__254\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__255(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__255\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage
        [(3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))];
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__256(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__256\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                        >> 0x25U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant) 
                                                                            >> 1U))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[2U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid) 
                                   >> 2U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant) 
                                                                            >> 2U))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
}
